// Copyright (c) 2004-2020 Microchip Technology Inc. and its subsidiaries.
// SPDX-License-Identifier: MIT

#ifndef _VTSS_ES6514_REGS_COMMON_H_
#define _VTSS_ES6514_REGS_COMMON_H_


#ifndef VTSS_ES6514_BITOPS_DEFINED
#ifdef __ASSEMBLER__
#define VTSS_ES6514_BIT(x)                   (1 << (x))
#define VTSS_ES6514_BITMASK(x)               ((1 << (x)) - 1)
#else
#define VTSS_ES6514_BIT(x)                   (1U << (x))
#define VTSS_ES6514_BITMASK(x)               ((1U << (x)) - 1)
#endif
#define VTSS_ES6514_EXTRACT_BITFIELD(x,o,w)  (((x) >> (o)) & VTSS_ES6514_BITMASK(w))
#define VTSS_ES6514_ENCODE_BITFIELD(x,o,w)   (((x) & VTSS_ES6514_BITMASK(w)) << (o))
#define VTSS_ES6514_ENCODE_BITMASK(o,w)      (VTSS_ES6514_BITMASK(w) << (o))
#define VTSS_ES6514_BITOPS_DEFINED
#endif /* VTSS_ES6514_BITOPS_DEFINED */


/*
 * Target offset base(s)
 */
#ifndef VTSS_ES6514_IO_OFFSET1
#define VTSS_ES6514_IO_OFFSET1(offset) (offset)
#endif

/* Main target address offsets */
#define VTSS_TO_SD10G65_0        VTSS_ES6514_IO_OFFSET1(0x0000) /*!< Base offset for target SD10G65_0 */
#define VTSS_TO_SD10G65_1        VTSS_ES6514_IO_OFFSET1(0x0100) /*!< Base offset for target SD10G65_1 */
#define VTSS_TO_SD10G65_DIG_0    VTSS_ES6514_IO_OFFSET1(0x0200) /*!< Base offset for target SD10G65_DIG_0 */
#define VTSS_TO_SD10G65_DIG_1    VTSS_ES6514_IO_OFFSET1(0x0300) /*!< Base offset for target SD10G65_DIG_1 */
#define VTSS_TO_ES6514_CORE      VTSS_ES6514_IO_OFFSET1(0x0400) /*!< Base offset for target ES6514_CORE */
#define VTSS_TO_OMG_IP           VTSS_ES6514_IO_OFFSET1(0x0500) /*!< Base offset for target OMG_IP */

/* IO address mapping macro - may be changed for platform */
#if !defined(VTSS_ES6514_IOADDR)
#define VTSS_ES6514_IOADDR(t,o)        ((t) + (4 * (o)))
#endif

/* IO register access macro - may be changed for platform */
#if !defined(VTSS_ES6514_IOREG)
/** 
 * @param t - target base offset
 * @param o - subtarget offset
 */
#define VTSS_ES6514_IOREG(t,o)      (*((volatile unsigned long*)(VTSS_ES6514_IOADDR(t,o))))
#endif

/* IO indexed register access macro - may be changed for platform */
#if !defined(VTSS_ES6514_IOREG_IX)
/** 
 * @param t  - target base offset
 * @param o  - subtarget offset
 * @param g  - group instance, 
 * @param gw - group width
 * @param ro - register offset, 
 * @param r  - register (instance) number
 */
#define VTSS_ES6514_IOREG_IX(t,o,g,gw,r,ro)   VTSS_ES6514_IOREG(t,(o) + ((g) * (gw)) + (ro) + (r))
#endif

#ifdef VTSS_JAGUAR_WANT_TARGET_ENUMS
/*
 * This section is primarily for documentation purposes.
 */

/**
  * \brief Target SD10G65_DIG target offset(s)
  */
enum vtss_target_SD10G65_DIG_e {
    VTSS_TOE_SD10G65_DIG_0   = VTSS_TO_SD10G65_DIG_0,
    VTSS_TOE_SD10G65_DIG_1   = VTSS_TO_SD10G65_DIG_1,
};

/**
  * \brief Target SD10G65 target offset(s)
  */
enum vtss_target_SD10G65_e {
    VTSS_TOE_SD10G65_0       = VTSS_TO_SD10G65_0,
    VTSS_TOE_SD10G65_1       = VTSS_TO_SD10G65_1,
};

#endif /* VTSS_JAGUAR_WANT_TARGET_ENUMS */


#endif /* _VTSS_ES6514_REGS_COMMON_H_ */
