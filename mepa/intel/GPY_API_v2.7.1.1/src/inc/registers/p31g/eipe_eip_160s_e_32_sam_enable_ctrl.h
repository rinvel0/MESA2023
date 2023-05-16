//-----------------------------------------------------------------------------
// LSD Generator
//-----------------------------------------------------------------------------
// Perl Package        : LSD::generator::targetC (v1.1)
// LSD Source          : /home/p31g/p31g_chip/v_emouchel.priv.p31g_chip.registers/ipg_lsd/lsd_sys/source_32b/xml/reg_files/EIPE_EIP_160s_e_32_SAM_enable_ctrl_def.xml
// Register File Name  : EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL
// Register File Title : EIPE EIP_160s_e_32_SAM_enable_ctrl
// Register Width      : 32
// Note                : Doxygen compliant comments
//-----------------------------------------------------------------------------

#ifndef _EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_H
#define _EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_H

//! \defgroup EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL Register File EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL - EIPE EIP_160s_e_32_SAM_enable_ctrl
//! @{

//! Base Address of EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL
#define EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_MODULE_BASE 0x00B26000u

//! \defgroup EIPE_SAM_ENTRY_ENABLE1 Register EIPE_SAM_ENTRY_ENABLE1 - EIPE SAM ENTRY ENABLE1
//! @{

//! Register Offset (relative)
#define EIPE_SAM_ENTRY_ENABLE1 0x0
//! Register Offset (absolute) for 1st Instance EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL
#define EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_EIPE_SAM_ENTRY_ENABLE1 0x00B26000u

//! Register Reset Value
#define EIPE_SAM_ENTRY_ENABLE1_RST 0x00000000u

//! Field ENABLE_31_0 - No Content.
#define EIPE_SAM_ENTRY_ENABLE1_ENABLE_31_0_POS 0
//! Field ENABLE_31_0 - No Content.
#define EIPE_SAM_ENTRY_ENABLE1_ENABLE_31_0_MASK 0xFFFFFFFFu

//! @}

//! \defgroup EIPE_SAM_ENTRY_TOGGLE1 Register EIPE_SAM_ENTRY_TOGGLE1 - EIPE SAM ENTRY TOGGLE1
//! @{

//! Register Offset (relative)
#define EIPE_SAM_ENTRY_TOGGLE1 0x40
//! Register Offset (absolute) for 1st Instance EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL
#define EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_EIPE_SAM_ENTRY_TOGGLE1 0x00B26040u

//! Register Reset Value
#define EIPE_SAM_ENTRY_TOGGLE1_RST 0x00000000u

//! Field TOGGLE_31_0 - No Content.
#define EIPE_SAM_ENTRY_TOGGLE1_TOGGLE_31_0_POS 0
//! Field TOGGLE_31_0 - No Content.
#define EIPE_SAM_ENTRY_TOGGLE1_TOGGLE_31_0_MASK 0xFFFFFFFFu

//! @}

//! \defgroup EIPE_SAM_ENTRY_SET1 Register EIPE_SAM_ENTRY_SET1 - EIPE SAM ENTRY SET1
//! @{

//! Register Offset (relative)
#define EIPE_SAM_ENTRY_SET1 0x80
//! Register Offset (absolute) for 1st Instance EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL
#define EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_EIPE_SAM_ENTRY_SET1 0x00B26080u

//! Register Reset Value
#define EIPE_SAM_ENTRY_SET1_RST 0x00000000u

//! Field SET_31_0 - No Content.
#define EIPE_SAM_ENTRY_SET1_SET_31_0_POS 0
//! Field SET_31_0 - No Content.
#define EIPE_SAM_ENTRY_SET1_SET_31_0_MASK 0xFFFFFFFFu

//! @}

//! \defgroup EIPE_SAM_ENTRY_CLEAR1 Register EIPE_SAM_ENTRY_CLEAR1 - EIPE SAM ENTRY CLEAR1
//! @{

//! Register Offset (relative)
#define EIPE_SAM_ENTRY_CLEAR1 0xC0
//! Register Offset (absolute) for 1st Instance EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL
#define EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_EIPE_SAM_ENTRY_CLEAR1 0x00B260C0u

//! Register Reset Value
#define EIPE_SAM_ENTRY_CLEAR1_RST 0x00000000u

//! Field CLEAR_31_0 - No Content.
#define EIPE_SAM_ENTRY_CLEAR1_CLEAR_31_0_POS 0
//! Field CLEAR_31_0 - No Content.
#define EIPE_SAM_ENTRY_CLEAR1_CLEAR_31_0_MASK 0xFFFFFFFFu

//! @}

//! \defgroup EIPE_SAM_ENTRY_ENABLE_CTRL Register EIPE_SAM_ENTRY_ENABLE_CTRL - EIPE SAM ENTRY ENABLE CTRL
//! @{

//! Register Offset (relative)
#define EIPE_SAM_ENTRY_ENABLE_CTRL 0x100
//! Register Offset (absolute) for 1st Instance EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL
#define EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_EIPE_SAM_ENTRY_ENABLE_CTRL 0x00B26100u

//! Register Reset Value
#define EIPE_SAM_ENTRY_ENABLE_CTRL_RST 0x00000000u

//! Field SAM_INDEX_SET - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_SAM_INDEX_SET_POS 0
//! Field SAM_INDEX_SET - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_SAM_INDEX_SET_MASK 0x1Fu

//! Field RESERVED_0 - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_RESERVED_0_POS 5
//! Field RESERVED_0 - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_RESERVED_0_MASK 0x3FE0u

//! Field SET_ENABLE - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_SET_ENABLE_POS 14
//! Field SET_ENABLE - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_SET_ENABLE_MASK 0x4000u

//! Field SET_ALL - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_SET_ALL_POS 15
//! Field SET_ALL - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_SET_ALL_MASK 0x8000u

//! Field SAM_INDEX_CLEAR - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_SAM_INDEX_CLEAR_POS 16
//! Field SAM_INDEX_CLEAR - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_SAM_INDEX_CLEAR_MASK 0x1F0000u

//! Field RESERVED_1 - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_RESERVED_1_POS 21
//! Field RESERVED_1 - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_RESERVED_1_MASK 0x3FE00000u

//! Field CLEAR_ENABLE - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_CLEAR_ENABLE_POS 30
//! Field CLEAR_ENABLE - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_CLEAR_ENABLE_MASK 0x40000000u

//! Field CLEAR_ALL - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_CLEAR_ALL_POS 31
//! Field CLEAR_ALL - No Content.
#define EIPE_SAM_ENTRY_ENABLE_CTRL_CLEAR_ALL_MASK 0x80000000u

//! @}

//! \defgroup EIPE_SAM_IN_FLIGHT Register EIPE_SAM_IN_FLIGHT - EIPE SAM IN FLIGHT
//! @{

//! Register Offset (relative)
#define EIPE_SAM_IN_FLIGHT 0x104
//! Register Offset (absolute) for 1st Instance EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL
#define EIPE_EIP_160S_E_32_SAM_ENABLE_CTRL_EIPE_SAM_IN_FLIGHT 0x00B26104u

//! Register Reset Value
#define EIPE_SAM_IN_FLIGHT_RST 0x00000000u

//! Field UNSAFE - No Content.
#define EIPE_SAM_IN_FLIGHT_UNSAFE_POS 0
//! Field UNSAFE - No Content.
#define EIPE_SAM_IN_FLIGHT_UNSAFE_MASK 0x3Fu

//! Field RESERVED_0 - No Content.
#define EIPE_SAM_IN_FLIGHT_RESERVED_0_POS 6
//! Field RESERVED_0 - No Content.
#define EIPE_SAM_IN_FLIGHT_RESERVED_0_MASK 0xC0u

//! Field IN_FLIGHT - No Content.
#define EIPE_SAM_IN_FLIGHT_IN_FLIGHT_POS 8
//! Field IN_FLIGHT - No Content.
#define EIPE_SAM_IN_FLIGHT_IN_FLIGHT_MASK 0x3F00u

//! Field RESERVED_1 - No Content.
#define EIPE_SAM_IN_FLIGHT_RESERVED_1_POS 14
//! Field RESERVED_1 - No Content.
#define EIPE_SAM_IN_FLIGHT_RESERVED_1_MASK 0x7FFFC000u

//! Field LOAD_UNSAFE - No Content.
#define EIPE_SAM_IN_FLIGHT_LOAD_UNSAFE_POS 31
//! Field LOAD_UNSAFE - No Content.
#define EIPE_SAM_IN_FLIGHT_LOAD_UNSAFE_MASK 0x80000000u

//! @}

//! @}

#endif
