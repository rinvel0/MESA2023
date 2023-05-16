/************************************************************************************
*
* Copyright (c) 2017 Aquantia Corp.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy 
* of this software and associated documentation files (the "Software"), to deal 
* in the Software without restriction, including without limitation the rights 
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
* copies of the Software, and to permit persons to whom the Software is 
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all 
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
* SOFTWARE.
*
************************************************************************************/

/*! \file 
*   This file contains the data structures and doxygen comments
*   for the Global Registers block.
 */        

/*! \addtogroup registerMap
  @{
*/

/*! \defgroup Global_registers Global Registers
*   This module contains the data structures and doxygen comments
*   for the Global Registers block.
 */        
/***********************************************************************
*                     Copyright Aquantia Corp.
*                             Freeware
*
* $Date: 2016/09/23 $
*
* $Label: $
*
* Description:
*
*   This file contains the c header structures for the registers contained in the Global Registers block.
*
*   The bit fields in this structure are from LSbit to MSbit
*
***********************************************************************/


/*@{*/
#ifndef AQ_HHD_GLOBAL_REGS_HEADER
#define AQ_HHD_GLOBAL_REGS_HEADER


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Control 1: 1E.0000 */
/*                  Global Standard Control 1: 1E.0000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Control 1 */
  union
  {
    struct
    {
      unsigned int   reserved1 : 11;
                    /*! \brief 1E.0000.B R/WPD Low Power
                        AQ_GlobalStandardControl_1_HHD.u0.bits_0.lowPower

                        Provisionable Default = 0x0

                        1 = Low-power mode
                        0 = Normal operation
                        

                 <B>Notes:</B>
                        A one written to this register causes the chip to enter low-power mode. This bit puts the entire chip in low-power mode, with only the MDIO and microprocessor functioning, and turns off the analog front-end: i.e. places it in high-impedance mode. Setting this bit also sets all of the Low Power bits in the other MMDs.  */
      unsigned int   lowPower : 1;    /* 1E.0000.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Low-power mode
                        0 = Normal operation
                          */
      unsigned int   reserved0 : 3;
                    /*! \brief 1E.0000.F R/WSC Soft Reset
                        AQ_GlobalStandardControl_1_HHD.u0.bits_0.softReset

                        Default = 0x1

                        1 = Global soft reset
                        0 = Normal operation
                        

                 <B>Notes:</B>
                        Resets the entire PHY.
                        Setting this bit initiates a global soft reset on all of the digital logic not including the microprocessor (i.e. microprocessor is not reset). Upon completion of the reset sequence, this bit is set back to 0by the microprocessor. Note this bit is OR'ed with the individual MMD resets. This bit should be set to 0 before setting the individual MMD resets.  */
      unsigned int   softReset : 1;    /* 1E.0000.F  R/WSC      Default = 0x1 */
                     /* 1 = Global soft reset
                        0 = Normal operation
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStandardControl_1_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Device Identifier: 1E.0002 */
/*                  Global Standard Device Identifier: 1E.0002 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Device Identifier */
  union
  {
    struct
    {
                    /*! \brief 1E.0002.F:0 RO Device ID MSW [1F:10]
                        AQ_GlobalStandardDeviceIdentifier_HHD.u0.bits_0.deviceIdMSW

                        

                        Bits 31 - 16 of Device ID
  */
      unsigned int   deviceIdMSW : 16;    /* 1E.0002.F:0  RO       */
                     /* Bits 31 - 16 of Device ID  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Standard Device Identifier */
  union
  {
    struct
    {
                    /*! \brief 1E.0003.F:0 RO Device ID LSW [F:0]
                        AQ_GlobalStandardDeviceIdentifier_HHD.u1.bits_1.deviceIdLSW

                        

                        Bits 15 - 0 of Device ID
  */
      unsigned int   deviceIdLSW : 16;    /* 1E.0003.F:0  RO       */
                     /* Bits 15 - 0 of Device ID  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalStandardDeviceIdentifier_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Devices in Package: 1E.0005 */
/*                  Global Standard Devices in Package: 1E.0005 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Devices in Package */
  union
  {
    struct
    {
                    /*! \brief 1E.0005.0 ROS Clause 22 Registers Present
                        AQ_GlobalStandardDevicesInPackage_HHD.u0.bits_0.clause_22RegistersPresent

                        Default = 0x0

                        1 = Clause 22 registers are present in package
                        0 = Clause 22 registers are not present in package

                 <B>Notes:</B>
                        This is always set to 0 in the PHY, as there are no Clause 22 registers in the device.  */
      unsigned int   clause_22RegistersPresent : 1;    /* 1E.0005.0  ROS      Default = 0x0 */
                     /* 1 = Clause 22 registers are present in package
                        0 = Clause 22 registers are not present in package  */
                    /*! \brief 1E.0005.1 ROS PMA Present
                        AQ_GlobalStandardDevicesInPackage_HHD.u0.bits_0.pmaPresent

                        Default = 0x1

                        1 = PMA is present in package
                        0 = PMA is not present 

                 <B>Notes:</B>
                        This is always set to 1 as there is PMA functionality in the PHY.  */
      unsigned int   pmaPresent : 1;    /* 1E.0005.1  ROS      Default = 0x1 */
                     /* 1 = PMA is present in package
                        0 = PMA is not present   */
                    /*! \brief 1E.0005.2 ROS WIS Present
                        AQ_GlobalStandardDevicesInPackage_HHD.u0.bits_0.wisPresent

                        Default = 0x0

                        1 = WIS is present in package
                        0 = WIS is not present in package

                 <B>Notes:</B>
                        This is always set to 0, as there is no WIS functionality in the PHY.  */
      unsigned int   wisPresent : 1;    /* 1E.0005.2  ROS      Default = 0x0 */
                     /* 1 = WIS is present in package
                        0 = WIS is not present in package  */
                    /*! \brief 1E.0005.3 ROS PCS Present
                        AQ_GlobalStandardDevicesInPackage_HHD.u0.bits_0.pcsPresent

                        Default = 0x1

                        1 = PCS is present in package
                        0 = PCS is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as there is PCS functionality in the PHY.  */
      unsigned int   pcsPresent : 1;    /* 1E.0005.3  ROS      Default = 0x1 */
                     /* 1 = PCS is present in package
                        0 = PCS is not present in package  */
                    /*! \brief 1E.0005.4 ROS PHY XS Present
                        AQ_GlobalStandardDevicesInPackage_HHD.u0.bits_0.phyXS_Present

                        Default = 0x1

                        1 = PHY XS is present in package
                        0 = PHY XS is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as there is a PHY XS interface in the PHY.  */
      unsigned int   phyXS_Present : 1;    /* 1E.0005.4  ROS      Default = 0x1 */
                     /* 1 = PHY XS is present in package
                        0 = PHY XS is not present in package  */
                    /*! \brief 1E.0005.5 ROS DTE XS Present
                        AQ_GlobalStandardDevicesInPackage_HHD.u0.bits_0.dteXsPresent

                        Default = 0x0

                        1 = DTE XS is present in package
                        0 = DTE XS is not present in package
                        

                 <B>Notes:</B>
                        This is always set to 0, as there is no DTE XAUI interface in the PHY.  */
      unsigned int   dteXsPresent : 1;    /* 1E.0005.5  ROS      Default = 0x0 */
                     /* 1 = DTE XS is present in package
                        0 = DTE XS is not present in package
                          */
                    /*! \brief 1E.0005.6 ROS TC Present
                        AQ_GlobalStandardDevicesInPackage_HHD.u0.bits_0.tcPresent

                        Default = 0x0

                        1 = TC is present in package
                        0 = TC is not present in package

                 <B>Notes:</B>
                        This is always set to 0, as there is no TC functionality in the PHY.  */
      unsigned int   tcPresent : 1;    /* 1E.0005.6  ROS      Default = 0x0 */
                     /* 1 = TC is present in package
                        0 = TC is not present in package  */
                    /*! \brief 1E.0005.7 ROS Autonegotiation Present
                        AQ_GlobalStandardDevicesInPackage_HHD.u0.bits_0.autonegotiationPresent

                        Default = 0x1

                        1 = Autonegotiation is present in package
                        0 = Autonegotiation is not present in package

                 <B>Notes:</B>
                        This is always set to 1, as there is Autonegotiation in the PHY.  */
      unsigned int   autonegotiationPresent : 1;    /* 1E.0005.7  ROS      Default = 0x1 */
                     /* 1 = Autonegotiation is present in package
                        0 = Autonegotiation is not present in package  */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStandardDevicesInPackage_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Vendor Devices in Package: 1E.0006 */
/*                  Global Standard Vendor Devices in Package: 1E.0006 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Vendor Devices in Package */
  union
  {
    struct
    {
      unsigned int   reserved0 : 13;
                    /*! \brief 1E.0006.D ROS Clause 22 Extension Present
                        AQ_GlobalStandardVendorDevicesInPackage_HHD.u0.bits_0.clause_22ExtensionPresent

                        Default = 0x1

                        1 = Clause 22 Extension is present in package
                        0 = Clause 22 Extension is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the GbE registers.  */
      unsigned int   clause_22ExtensionPresent : 1;    /* 1E.0006.D  ROS      Default = 0x1 */
                     /* 1 = Clause 22 Extension is present in package
                        0 = Clause 22 Extension is not present in package  */
                    /*! \brief 1E.0006.E ROS Vendor Specific Device #1 Present
                        AQ_GlobalStandardVendorDevicesInPackage_HHD.u0.bits_0.vendorSpecificDevice_1Present

                        Default = 0x1

                        1 = Device #1 is present in package
                        0 = Device #1 is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the global control registers.  */
      unsigned int   vendorSpecificDevice_1Present : 1;    /* 1E.0006.E  ROS      Default = 0x1 */
                     /* 1 = Device #1 is present in package
                        0 = Device #1 is not present in package  */
                    /*! \brief 1E.0006.F ROS Vendor Specific Device #2 Present
                        AQ_GlobalStandardVendorDevicesInPackage_HHD.u0.bits_0.vendorSpecificDevice_2Present

                        Default = 0x1

                        1 = Device #2 is present in package
                        0 = Device #2 is not present in package

                 <B>Notes:</B>
                        This is always set to 1 as the PHY utilizes this device for the DSP PMA registers.  */
      unsigned int   vendorSpecificDevice_2Present : 1;    /* 1E.0006.F  ROS      Default = 0x1 */
                     /* 1 = Device #2 is present in package
                        0 = Device #2 is not present in package  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStandardVendorDevicesInPackage_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Status 2: 1E.0008 */
/*                  Global Standard Status 2: 1E.0008 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Status 2 */
  union
  {
    struct
    {
      unsigned int   reserved0 : 14;
                    /*! \brief 1E.0008.F:E ROS Device Present [1:0]
                        AQ_GlobalStandardStatus_2_HHD.u0.bits_0.devicePresent

                        Default = 0x2

                        [F:E]
                        0x3 = No device at this address
                        0x2 = Device present at this address
                        0x1 = No device at this address
                        0x0 = No device at this address

                 <B>Notes:</B>
                        This field is always set to 0x2, as the Global MMD resides here in the PHY.  */
      unsigned int   devicePresent : 2;    /* 1E.0008.F:E  ROS      Default = 0x2 */
                     /* [F:E]
                        0x3 = No device at this address
                        0x2 = Device present at this address
                        0x1 = No device at this address
                        0x0 = No device at this address  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStandardStatus_2_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Standard Package Identifier: 1E.000E */
/*                  Global Standard Package Identifier: 1E.000E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Standard Package Identifier */
  union
  {
    struct
    {
                    /*! \brief 1E.000E.F:0 RO Package ID MSW [1F:10]
                        AQ_GlobalStandardPackageIdentifier_HHD.u0.bits_0.packageIdMSW

                        

                        Bits 31- 16 of Package ID
  */
      unsigned int   packageIdMSW : 16;    /* 1E.000E.F:0  RO       */
                     /* Bits 31- 16 of Package ID  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Standard Package Identifier */
  union
  {
    struct
    {
                    /*! \brief 1E.000F.F:0 RO Package ID LSW [F:0]
                        AQ_GlobalStandardPackageIdentifier_HHD.u1.bits_1.packageIdLSW

                        

                        Bits 15 - 0 of Package ID
  */
      unsigned int   packageIdLSW : 16;    /* 1E.000F.F:0  RO       */
                     /* Bits 15 - 0 of Package ID  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalStandardPackageIdentifier_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Firmware ID: 1E.0020 */
/*                  Global Firmware ID: 1E.0020 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Firmware ID */
  union
  {
    struct
    {
                    /*! \brief 1E.0020.7:0 RO Firmware Minor Revision Number [7:0]
                        AQ_GlobalFirmwareID_HHD.u0.bits_0.firmwareMinorRevisionNumber

                        

                        [7:0] = Minor revision number

                 <B>Notes:</B>
                        
                        
                        The lower six bits of major and minor firmware revision are exchanged in autonegotiation when the PHYID message is sent.  */
      unsigned int   firmwareMinorRevisionNumber : 8;    /* 1E.0020.7:0  RO       */
                     /* [7:0] = Minor revision number  */
                    /*! \brief 1E.0020.F:8 RO Firmware Major Revision Number [7:0]
                        AQ_GlobalFirmwareID_HHD.u0.bits_0.firmwareMajorRevisionNumber

                        

                        [F:8] = Major revision number

                 <B>Notes:</B>
                        
                        
                        The lower six bits of major and minor firmware revision are exchanged in autonegotiation when the PHYID message is sent.  */
      unsigned int   firmwareMajorRevisionNumber : 8;    /* 1E.0020.F:8  RO       */
                     /* [F:8] = Major revision number  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalFirmwareID_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global NVR Interface: 1E.0100 */
/*                  Global NVR Interface: 1E.0100 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0100.7:0 R/W NVR Opcode [7:0]
                        AQ_GlobalNvrInterface_HHD.u0.bits_0.nvrOpcode

                        Default = 0x03

                        NVR instruction opcode
                        
  */
      unsigned int   nvrOpcode : 8;    /* 1E.0100.7:0  R/W      Default = 0x03 */
                     /* NVR instruction opcode
                          */
                    /*! \brief 1E.0100.8 RO NVR Busy
                        AQ_GlobalNvrInterface_HHD.u0.bits_0.nvrBusy

                        

                        1 = NVR is busy
                        0 = NVR is ready
                        

                 <B>Notes:</B>
                        When set to 1, the NVR is busy. A new NVR operation should not occur until this bit is 0. If the NVR clock is greater than 64/63 of the MDIO clock, this bit never needs to be polled when operating over the MDIO.   */
      unsigned int   nvrBusy : 1;    /* 1E.0100.8  RO       */
                     /* 1 = NVR is busy
                        0 = NVR is ready
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.0100.A R/W NVR Burst
                        AQ_GlobalNvrInterface_HHD.u0.bits_0.nvrBurst

                        Default = 0x0

                        0 = Single read or write operation of up to 4 bytes
                        1 = Burst operation
                        

                 <B>Notes:</B>
                        When this bit is set, the operation is a burst operation where more than 32-bits is read from the NVR or written to the NVR. This bit should be set to one until the last burst in the read or write operation, when it should be set to zero. It operates by gating the SPI clock, and not restarting it until new data is ready to be written, or the previous contents have been read. Each burst of data requires the NVR Execute Operation bit to be set to initiate the next phase.  */
      unsigned int   nvrBurst : 1;    /* 1E.0100.A  R/W      Default = 0x0 */
                     /* 0 = Single read or write operation of up to 4 bytes
                        1 = Burst operation
                          */
      unsigned int   reserved0 : 1;
                    /*! \brief 1E.0100.C R/WSC Reset NVR CRC
                        AQ_GlobalNvrInterface_HHD.u0.bits_0.resetNvrCrc

                        Default = 0x0

                        1 = Reset NVR Mailbox CRC calculation register
                        
                        

                 <B>Notes:</B>
                        To prevent an erroneous answer, this bit should not be set at the same time the  See NVR Operation Valid bit is set.  */
      unsigned int   resetNvrCrc : 1;    /* 1E.0100.C  R/WSC      Default = 0x0 */
                     /* 1 = Reset NVR Mailbox CRC calculation register
                        
                          */
                    /*! \brief 1E.0100.D R/W Freeze NVR CRC
                        AQ_GlobalNvrInterface_HHD.u0.bits_0.freezeNvrCrc

                        Default = 0x0

                        1 = Freeze NVR Mailbox CRC calculation register
                        

                 <B>Notes:</B>
                        To prevent an erroneous answer, this bit should not be set at the same time the  See NVR Operation Valid bit is set.  */
      unsigned int   freezeNvrCrc : 1;    /* 1E.0100.D  R/W      Default = 0x0 */
                     /* 1 = Freeze NVR Mailbox CRC calculation register
                          */
                    /*! \brief 1E.0100.E R/W NVR Write Mode
                        AQ_GlobalNvrInterface_HHD.u0.bits_0.nvrWriteMode

                        Default = 0x0

                        1 = Write to NVR
                        0 = Read from NVR
                        
  */
      unsigned int   nvrWriteMode : 1;    /* 1E.0100.E  R/W      Default = 0x0 */
                     /* 1 = Write to NVR
                        0 = Read from NVR
                          */
                    /*! \brief 1E.0100.F R/WSC NVR Execute Operation
                        AQ_GlobalNvrInterface_HHD.u0.bits_0.nvrExecuteOperation

                        Default = 0x0

                        1 = Start NVR Operation
                        
                        

                 <B>Notes:</B>
                        When set to 1, the NVR operation will begin. Ensure that the uP is stalled using the  See MCP Run Stall bit to ensure no NVR contention.  */
      unsigned int   nvrExecuteOperation : 1;    /* 1E.0100.F  R/WSC      Default = 0x0 */
                     /* 1 = Start NVR Operation
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0101.F:0 RO NVR Mailbox CRC [F:0]
                        AQ_GlobalNvrInterface_HHD.u1.bits_1.nvrMailboxCrc

                        

                        The running CRC-16 of everything passing through the NVR interface
                        

                 <B>Notes:</B>
                        The CRC-16 over all data written or read through the NVR interface. The CRC-16 is calculated by dividing the data by:
                        x^16 + x^12 + x^5 + 1  */
      unsigned int   nvrMailboxCrc : 16;    /* 1E.0101.F:0  RO       */
                     /* The running CRC-16 of everything passing through the NVR interface
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0102.7:0 R/W NVR Address MSW [17:10]
                        AQ_GlobalNvrInterface_HHD.u2.bits_2.nvrAddressMSW

                        Default = 0x00

                        NVR address MSW bits [17:10]
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the NVR. This is self-incrementing and will automatically increment after each read or write operation. The increment amount is based on the data length (i.e. increments by 4 if the data length is 4 bytes)  */
      unsigned int   nvrAddressMSW : 8;    /* 1E.0102.7:0  R/W      Default = 0x00 */
                     /* NVR address MSW bits [17:10]
                          */
      unsigned int   reserved0 : 8;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0103.F:0 R/W NVR Address LSW [F:0]
                        AQ_GlobalNvrInterface_HHD.u3.bits_3.nvrAddressLSW

                        Default = 0x0000

                        NVR address LSW bits [F:0]
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the NVR. This is self-incrementing and will automatically increment after each read or write operation.  */
      unsigned int   nvrAddressLSW : 16;    /* 1E.0103.F:0  R/W      Default = 0x0000 */
                     /* NVR address LSW bits [F:0]
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0104.F:0 R/W NVR Data MSW [1F:10]
                        AQ_GlobalNvrInterface_HHD.u4.bits_4.nvrDataMSW

                        Default = 0x0000

                        NVR data MSW bits [1F:10]
                        

                 <B>Notes:</B>
                        Data is stored and read-out from these registers in little-endian format for operations such as FLASH device ID, and for programming the processor.
                        
                        For instance the 64K Atmel device code reads out as two bytes 0x651F into the LSW register, whereas the datasheet indicates that 1F is the first byte read, followed by 65 as the second byte.
                        
                        To burst read and write these 4 bytes in the correct order (where DD is written to address x), they should be stored as:
                        
                        AA BB in the MSW
                        CC DD in the LSW.  */
      unsigned int   nvrDataMSW : 16;    /* 1E.0104.F:0  R/W      Default = 0x0000 */
                     /* NVR data MSW bits [1F:10]
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global NVR Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0105.F:0 R/W NVR Data LSW [F:0]
                        AQ_GlobalNvrInterface_HHD.u5.bits_5.nvrDataLSW

                        Default = 0x0000

                        NVR data LSW bits [F:0]
                        

                 <B>Notes:</B>
                        Data is stored and read-out from these registers in little-endian format for operations such as FLASH device ID, and for programming the processor.
                        
                        For instance the 64K Atmel device code reads out as two bytes 0x651F into the LSW register, whereas the datasheet indicates that 1F is the first byte read, followed by 65 as the second byte.
                        To burst read and write these 4 bytes in the correct order (where DD is written to address x), they should be stored as:
                        
                        AA BB in the MSW
                        CC DD in the LSW.  */
      unsigned int   nvrDataLSW : 16;    /* 1E.0105.F:0  R/W      Default = 0x0000 */
                     /* NVR data LSW bits [F:0]
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
} AQ_GlobalNvrInterface_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Mailbox Interface: 1E.0200 */
/*                  Global Mailbox Interface: 1E.0200 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Mailbox Interface */
  union
  {
    struct
    {
      unsigned int   reserved2 : 8;
                    /*! \brief 1E.0200.8 RO uP Mailbox Busy
                        AQ_GlobalMailboxInterface_HHD.u0.bits_0.upMailboxBusy

                        

                        1 = uP mailbox busy
                        0 = uP mailbox ready
                        

                 <B>Notes:</B>
                        In general the uP will respond within a few processor cycles to any PIF slave request, much faster than the MDIO. If the busy is asserted over multiple MDIO polling cycles, then a H/W error may have occurred and a Global S/W reset or uP reset is required.  */
      unsigned int   upMailboxBusy : 1;    /* 1E.0200.8  RO       */
                     /* 1 = uP mailbox busy
                        0 = uP mailbox ready
                          */
      unsigned int   reserved1 : 3;
                    /*! \brief 1E.0200.C R/WSC Reset uP Mailbox CRC
                        AQ_GlobalMailboxInterface_HHD.u0.bits_0.resetUpMailboxCrc

                        Default = 0x0

                        1 = Reset uP mailbox CRC calculation register
                        
                        
  */
      unsigned int   resetUpMailboxCrc : 1;    /* 1E.0200.C  R/WSC      Default = 0x0 */
                     /* 1 = Reset uP mailbox CRC calculation register
                        
                          */
      unsigned int   reserved0 : 1;
                    /*! \brief 1E.0200.E R/W uP Mailbox Write Mode
                        AQ_GlobalMailboxInterface_HHD.u0.bits_0.upMailboxWriteMode

                        Default = 0x0

                        1 = Write
                        0 = Read
                        

                 <B>Notes:</B>
                        Mailbox direction  */
      unsigned int   upMailboxWriteMode : 1;    /* 1E.0200.E  R/W      Default = 0x0 */
                     /* 1 = Write
                        0 = Read
                          */
                    /*! \brief 1E.0200.F R/WSC uP Mailbox Execute Operation
                        AQ_GlobalMailboxInterface_HHD.u0.bits_0.upMailboxExecuteOperation

                        Default = 0x0

                        1 = Start of mailbox Operation
                        
                        

                 <B>Notes:</B>
                        Indicates mailbox is loaded and ready  */
      unsigned int   upMailboxExecuteOperation : 1;    /* 1E.0200.F  R/WSC      Default = 0x0 */
                     /* 1 = Start of mailbox Operation
                        
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0201.F:0 RO uP Mailbox CRC [F:0]
                        AQ_GlobalMailboxInterface_HHD.u1.bits_1.upMailboxCrc

                        

                        The running CRC-16 of everything passing through the mailbox interface
                        
  */
      unsigned int   upMailboxCrc : 16;    /* 1E.0201.F:0  RO       */
                     /* The running CRC-16 of everything passing through the mailbox interface
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0202.F:0 R/W uP Mailbox Address MSW [1F:10]
                        AQ_GlobalMailboxInterface_HHD.u2.bits_2.upMailboxAddressMSW

                        Default = 0x0000

                        uP Mailbox MSW address
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the Microcontroller Mailbox. This is self-incrementing and automatically increments after each read and write operation.PHY  */
      unsigned int   upMailboxAddressMSW : 16;    /* 1E.0202.F:0  R/W      Default = 0x0000 */
                     /* uP Mailbox MSW address
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0203.1:0 RO uP Mailbox Address LSW Don't Care [1:0]
                        AQ_GlobalMailboxInterface_HHD.u3.bits_3.upMailboxAddressLSW_Don_tCare

                        

                        Least significant uP LSW Mailbox address bits [1:0]
                        

                 <B>Notes:</B>
                        These bits are always set to 0 since each memory access is on a 4-byte boundary.  */
      unsigned int   upMailboxAddressLSW_Don_tCare : 2;    /* 1E.0203.1:0  RO       */
                     /* Least significant uP LSW Mailbox address bits [1:0]
                          */
                    /*! \brief 1E.0203.F:2 R/W uP Mailbox Address LSW [F:2]
                        AQ_GlobalMailboxInterface_HHD.u3.bits_3.upMailboxAddressLSW

                        Default = 0x0000

                        uP LSW Mailbox address [F:2]
                        

                 <B>Notes:</B>
                        The address of where to read and write from in the Microcontroller Mailbox. This is self-incrementing and automatically increments after each read and write operation.PHY  */
      unsigned int   upMailboxAddressLSW : 14;    /* 1E.0203.F:2  R/W      Default = 0x0000 */
                     /* uP LSW Mailbox address [F:2]
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0204.F:0 R/W uP Mailbox Data MSW [1F:10]
                        AQ_GlobalMailboxInterface_HHD.u4.bits_4.upMailboxDataMSW

                        Default = 0x0000

                        uP Mailbox data MSW
                        
  */
      unsigned int   upMailboxDataMSW : 16;    /* 1E.0204.F:0  R/W      Default = 0x0000 */
                     /* uP Mailbox data MSW
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Mailbox Interface */
  union
  {
    struct
    {
                    /*! \brief 1E.0205.F:0 R/W uP Mailbox Data LSW [F:0]
                        AQ_GlobalMailboxInterface_HHD.u5.bits_5.upMailboxDataLSW

                        Default = 0x0000

                        uP Mailbox data LSW
                        
  */
      unsigned int   upMailboxDataLSW : 16;    /* 1E.0205.F:0  R/W      Default = 0x0000 */
                     /* uP Mailbox data LSW
                          */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global Mailbox Interface */
  union
  {
    struct
    {
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.0206.1 R/W uP Mailbox CRC Read Enable
                        AQ_GlobalMailboxInterface_HHD.u6.bits_6.upMailboxCrcReadEnable

                        Default = 0x0

                        1 = Update uP mailbox CRC on read
                        
  */
      unsigned int   upMailboxCrcReadEnable : 1;    /* 1E.0206.1  R/W      Default = 0x0 */
                     /* 1 = Update uP mailbox CRC on read
                          */
      unsigned int   reserved0 : 14;
    } bits_6;
    uint16_t word_6;
  } u6;
} AQ_GlobalMailboxInterface_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Microprocessor Scratch Pad: 1E.0300 */
/*                  Global Microprocessor Scratch Pad: 1E.0300 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Microprocessor Scratch Pad */
  union
  {
    struct
    {
                    /*! \brief 1E.0300.F:0 R/W Scratch Pad 1[F:0]
                        AQ_GlobalMicroprocessorScratchPad_HHD.u0.bits_0.scratchPad_1

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_1 : 16;    /* 1E.0300.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Microprocessor Scratch Pad */
  union
  {
    struct
    {
                    /*! \brief 1E.0301.F:0 R/W Scratch Pad 2 [F:0]
                        AQ_GlobalMicroprocessorScratchPad_HHD.u1.bits_1.scratchPad_2

                        Default = 0x0000

                        General Purpose Scratch Pad
  */
      unsigned int   scratchPad_2 : 16;    /* 1E.0301.F:0  R/W      Default = 0x0000 */
                     /* General Purpose Scratch Pad  */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalMicroprocessorScratchPad_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common SERDES lane0 RX EQ: 1E.2D55 */
/*                  Global Common SERDES lane0 RX EQ: 1E.2D55 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common SERDES lane0 RX EQ */
  union
  {
    struct
    {
                    /*! \brief 1E.2D55.D:0 RO SERDES lane0 RX EQ Best EYE Value[D:0]
                        AQ_GlobalCommonSerdesLane0RxEq_HHD.u0.bits_0.serdesLane0RxEqBestEyeValue

                        

                        SERDES lane0 Optimum Receive Eye diagram Figure of Merit signal. Safe for sampling when OCTL_PCS_RXEQ_DONE_Lx_A is asserted: 
                        14'h0000  Completely Closed Eye 14'hFFFF  Completely Open Eye.
                        
  */
      unsigned int   serdesLane0RxEqBestEyeValue : 14;    /* 1E.2D55.D:0  RO       */
                     /* SERDES lane0 Optimum Receive Eye diagram Figure of Merit signal. Safe for sampling when OCTL_PCS_RXEQ_DONE_Lx_A is asserted: 
                        14'h0000  Completely Closed Eye 14'hFFFF  Completely Open Eye.
                          */
                    /*! \brief 1E.2D55.E RO SERDES lane0 RX EQ DONE
                        AQ_GlobalCommonSerdesLane0RxEq_HHD.u0.bits_0.serdesLane0RxEqDone

                        

                        SERDES lane0 PMA Adaptive Equalization Status Signal 
                        0  Indicates adaptive equalization results are not valid for sampling 
                        1  Indicates adaptive equalization is complete and results are valid for sampling. Optional pin module.
                        
  */
      unsigned int   serdesLane0RxEqDone : 1;    /* 1E.2D55.E  RO       */
                     /* SERDES lane0 PMA Adaptive Equalization Status Signal 
                        0  Indicates adaptive equalization results are not valid for sampling 
                        1  Indicates adaptive equalization is complete and results are valid for sampling. Optional pin module.
                          */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonSerdesLane0RxEq_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Common SERDES lane1 RX EQ: 1E.2D65 */
/*                  Global Common SERDES lane1 RX EQ: 1E.2D65 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Common SERDES lane1 RX EQ */
  union
  {
    struct
    {
                    /*! \brief 1E.2D65.D:0 RO SERDES lane1 RX EQ Best EYE Value[D:0]
                        AQ_GlobalCommonSerdesLane1RxEq_HHD.u0.bits_0.serdesLane1RxEqBestEyeValue

                        

                        SERDES lane1 Optimum Receive Eye diagram Figure of Merit signal. Safe for sampling when OCTL_PCS_RXEQ_DONE_Lx_A is asserted: 
                        14'h0000  Completely Closed Eye 14'hFFFF  Completely Open Eye.
                        
  */
      unsigned int   serdesLane1RxEqBestEyeValue : 14;    /* 1E.2D65.D:0  RO       */
                     /* SERDES lane1 Optimum Receive Eye diagram Figure of Merit signal. Safe for sampling when OCTL_PCS_RXEQ_DONE_Lx_A is asserted: 
                        14'h0000  Completely Closed Eye 14'hFFFF  Completely Open Eye.
                          */
                    /*! \brief 1E.2D65.E RO SERDES lane1 RX EQ DONE
                        AQ_GlobalCommonSerdesLane1RxEq_HHD.u0.bits_0.serdesLane1RxEqDone

                        

                        SERDES lane1 PMA Adaptive Equalization Status Signal 
                        0  Indicates adaptive equalization results are not valid for sampling 
                        1  Indicates adaptive equalization is complete and results are valid for sampling. Optional pin module.
                        
  */
      unsigned int   serdesLane1RxEqDone : 1;    /* 1E.2D65.E  RO       */
                     /* SERDES lane1 PMA Adaptive Equalization Status Signal 
                        0  Indicates adaptive equalization results are not valid for sampling 
                        1  Indicates adaptive equalization is complete and results are valid for sampling. Optional pin module.
                          */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalCommonSerdesLane1RxEq_HHD;

/*---------------------------------------------------------------------------------*/
/*! \brief                Global Control: 1E.C000 */
/*                  Global Control: 1E.C000 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Control */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C001.0 R/W uP Run Stall
                        AQ_GlobalControl_HHD.u1.bits_1.upRunStall

                        Default = 0x0

                        1 = uP Run Stall
                        0 = uP normal mode
                        

                 <B>Notes:</B>
                        Deactivates the uP.  */
      unsigned int   upRunStall : 1;    /* 1E.C001.0  R/W      Default = 0x0 */
                     /* 1 = uP Run Stall
                        0 = uP normal mode
                          */
      unsigned int   reserved1 : 5;
                    /*! \brief 1E.C001.6 R/W uP Run Stall Override
                        AQ_GlobalControl_HHD.u1.bits_1.upRunStallOverride

                        Default = 0x0

                        0 = uP Run Stall from "MDIO Boot Load" pin.
                        1 = uP Run Stall from  See MCP Run Stall bit
                        
                        

                 <B>Notes:</B>
                        This bit selects the uP Run Stall from either the "MDIO Boot Load" pin or the  See MCP Run Stall bit. Pin no longer brought out as deprecated.  */
      unsigned int   upRunStallOverride : 1;    /* 1E.C001.6  R/W      Default = 0x0 */
                     /* 0 = uP Run Stall from "MDIO Boot Load" pin.
                        1 = uP Run Stall from  See MCP Run Stall bit
                        
                          */
      unsigned int   reserved0 : 8;
                    /*! \brief 1E.C001.F R/W uP Reset
                        AQ_GlobalControl_HHD.u1.bits_1.upReset

                        Default = 0x0

                        1 = Reset
                        

                 <B>Notes:</B>
                        Resets the uP and the PIF master and slave bus. Will be active for a minimum of 100 microseconds.  */
      unsigned int   upReset : 1;    /* 1E.C001.F  R/W      Default = 0x0 */
                     /* 1 = Reset
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalControl_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Reset Control: 1E.C006 */
/*                  Global Reset Control: 1E.C006 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Reset Control */
  union
  {
    struct
    {
      unsigned int   reserved1 : 14;
                    /*! \brief 1E.C006.E R/WPD Global MMD Reset Disable
                        AQ_GlobalResetControl_HHD.u0.bits_0.globalMMD_ResetDisable

                        Provisionable Default = 0x0

                        1 = Disable the S/W reset to the Global MMD registers
                        0 = Enable the S/W reset to the Global MMD registers
                        

                 <B>Notes:</B>
                        Setting this bit prevents a Global S/W reset or Global S/W reset from resetting the Global MMD registers  */
      unsigned int   globalMMD_ResetDisable : 1;    /* 1E.C006.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Disable the S/W reset to the Global MMD registers
                        0 = Enable the S/W reset to the Global MMD registers
                          */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalResetControl_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Diagnostic Provisioning: 1E.C400 */
/*                  Global Diagnostic Provisioning: 1E.C400 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Diagnostic Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 1E.C400.F R/WPD Enable Diagnostics
                        AQ_GlobalDiagnosticProvisioning_HHD.u0.bits_0.enableDiagnostics

                        Provisionable Default = 0x1

                        1 = Chip performs diagnostics on power-up
  */
      unsigned int   enableDiagnostics : 1;    /* 1E.C400.F  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Chip performs diagnostics on power-up  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalDiagnosticProvisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Thermal Provisioning: 1E.C420 */
/*                  Global Thermal Provisioning: 1E.C420 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C420.F:0 R/WPD Reserved 0 [F:0]
                        AQ_GlobalThermalProvisioning_HHD.u0.bits_0.reserved_0

                        Provisionable Default = 0x0000

                        Internal reserved - do not modify
                        
  */
      unsigned int   reserved_0 : 16;    /* 1E.C420.F:0  R/WPD      Provisionable Default = 0x0000 */
                     /* Internal reserved - do not modify
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C421.F:0 R/WPD High Temp Failure Threshold [F:0]
                        AQ_GlobalThermalProvisioning_HHD.u1.bits_1.highTempFailureThreshold

                        Provisionable Default = 0x4600

                        [F:0] of high temperature failure threshold

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD800. Default is 70 degreesC. 
                        
                        In XENPAK mode, F/W will use the XENPAK register 1.A000 - 1.A001: instead of this register.
                        
                        NOTE! All Thresholds are orthogonal and can be set to any value regardless the value of the other thresholds. i.e. High-Temperature-Warning (1E.C423) could be higher than High-Temperature-Failure (1E.C421).  */
      unsigned int   highTempFailureThreshold : 16;    /* 1E.C421.F:0  R/WPD      Provisionable Default = 0x4600 */
                     /* [F:0] of high temperature failure threshold  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C422.F:0 R/WPD Low Temp Failure Threshold [F:0]
                        AQ_GlobalThermalProvisioning_HHD.u2.bits_2.lowTempFailureThreshold

                        Provisionable Default = 0x0000

                        [F:0] of low temperature failure threshold

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD800. Default is 0 degreesC. 
                        
                        In XENPAK mode, F/W will use the XENPAK register 1.A002 - 1.A003: instead of this register.
                        
                        NOTE! All Thresholds are orthogonal and can be set to any value regardless the value of the other thresholds. i.e. High-Temperature-Warning (1E.C423) could be higher than High-Temperature-Failure (1E.C421).  */
      unsigned int   lowTempFailureThreshold : 16;    /* 1E.C422.F:0  R/WPD      Provisionable Default = 0x0000 */
                     /* [F:0] of low temperature failure threshold  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C423.F:0 R/WPD High Temp Warning Threshold [F:0]
                        AQ_GlobalThermalProvisioning_HHD.u3.bits_3.highTempWarningThreshold

                        Provisionable Default = 0x3C00

                        [F:0] of high temperature warning threshold

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD008. Default is 60 degreesC. 
                        
                        In XENPAK mode, F/W will use the XENPAK register 1.A004 - 1.A005: instead of this register.
                        
                        NOTE! All Thresholds are orthogonal and can be set to any value regardless the value of the other thresholds. i.e. High-Temperature-Warning (1E.C423) could be higher than High-Temperature-Failure (1E.C421).  */
      unsigned int   highTempWarningThreshold : 16;    /* 1E.C423.F:0  R/WPD      Provisionable Default = 0x3C00 */
                     /* [F:0] of high temperature warning threshold  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Thermal Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C424.F:0 R/WPD Low Temp Warning Threshold [F:0]
                        AQ_GlobalThermalProvisioning_HHD.u4.bits_4.lowTempWarningThreshold

                        Provisionable Default = 0x0A00

                        [F:0] of low temperature warning threshold

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD800. Default is 10 degreesC. 
                        
                        In XENPAK mode, F/W will use the XENPAK register 1.A006 - 1.A007: instead of this register.
                        
                        NOTE! All Thresholds are orthogonal and can be set to any value regardless the value of the other thresholds. i.e. High-Temperature-Warning (1E.C423) could be higher than High-Temperature-Failure (1E.C421).  */
      unsigned int   lowTempWarningThreshold : 16;    /* 1E.C424.F:0  R/WPD      Provisionable Default = 0x0A00 */
                     /* [F:0] of low temperature warning threshold  */
    } bits_4;
    uint16_t word_4;
  } u4;
} AQ_GlobalThermalProvisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global LED Provisioning: 1E.C430 */
/*                  Global LED Provisioning: 1E.C430 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C430.1:0 R/WPD LED #0 Activity Stretch [1:0]
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0ActivityStretch

                        Provisionable Default = 0x3

                        [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                        
  */
      unsigned int   led_0ActivityStretch : 2;    /* 1E.C430.1:0  R/WPD      Provisionable Default = 0x3 */
                     /* [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                          */
                    /*! \brief 1E.C430.2 R/WPD LED #0 Transmit Activity
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0TransmitActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on transmit activity
                        
  */
      unsigned int   led_0TransmitActivity : 1;    /* 1E.C430.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on transmit activity
                          */
                    /*! \brief 1E.C430.3 R/WPD LED #0 Receive Activity
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0ReceiveActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on receive activity
                        
  */
      unsigned int   led_0ReceiveActivity : 1;    /* 1E.C430.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on receive activity
                          */
                    /*! \brief 1E.C430.4 R/WPD LED #0 Connecting
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0Connecting

                        Provisionable Default = 0x0

                        1 = LED is on when attempting to connect.
                        
  */
      unsigned int   led_0Connecting : 1;    /* 1E.C430.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when attempting to connect.
                          */
                    /*! \brief 1E.C430.5 R/WPD LED #0 100 Mb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0_100Mb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 100 Mb/s.
                        
  */
      unsigned int   led_0_100Mb_sLinkEstablished : 1;    /* 1E.C430.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 100 Mb/s.
                          */
                    /*! \brief 1E.C430.6 R/WPD LED #0 1 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0_1Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 1 Gb/s
                        
  */
      unsigned int   led_0_1Gb_sLinkEstablished : 1;    /* 1E.C430.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 1 Gb/s
                          */
                    /*! \brief 1E.C430.7 R/WPD LED #0 10 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0_10Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 10 Gb/s
                        
  */
      unsigned int   led_0_10Gb_sLinkEstablished : 1;    /* 1E.C430.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 10 Gb/s
                          */
                    /*! \brief 1E.C430.8 R/WPD LED #0 Manual Set
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0ManualSet

                        Provisionable Default = 0x0

                        1 = LED On
                        
  */
      unsigned int   led_0ManualSet : 1;    /* 1E.C430.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED On
                          */
                    /*! \brief 1E.C430.D:9 R/WPD Reserved Provisioning C430 [4:0]
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.reservedProvisioningC430

                        Provisionable Default = 0x00

                        Reserved for future use
  */
      unsigned int   reservedProvisioningC430 : 5;    /* 1E.C430.D:9  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use  */
                    /*! \brief 1E.C430.E R/WPD LED #0 2.5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0_2_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 2.5 Gb/s
                        
  */
      unsigned int   led_0_2_5Gb_sLinkEstablished : 1;    /* 1E.C430.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 2.5 Gb/s
                          */
                    /*! \brief 1E.C430.F R/WPD LED #0 5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u0.bits_0.led_0_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 5 Gb/s
                        
  */
      unsigned int   led_0_5Gb_sLinkEstablished : 1;    /* 1E.C430.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 5 Gb/s
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C431.1:0 R/WPD LED #1 Activity Stretch [1:0]
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1ActivityStretch

                        Provisionable Default = 0x3

                        [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                        
  */
      unsigned int   led_1ActivityStretch : 2;    /* 1E.C431.1:0  R/WPD      Provisionable Default = 0x3 */
                     /* [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                          */
                    /*! \brief 1E.C431.2 R/WPD LED #1 Transmit Activity
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1TransmitActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on transmit activity
                        
  */
      unsigned int   led_1TransmitActivity : 1;    /* 1E.C431.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on transmit activity
                          */
                    /*! \brief 1E.C431.3 R/WPD LED #1 Receive Activity
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1ReceiveActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on receive activity
                        
  */
      unsigned int   led_1ReceiveActivity : 1;    /* 1E.C431.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on receive activity
                          */
                    /*! \brief 1E.C431.4 R/WPD LED #1 Connecting
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1Connecting

                        Provisionable Default = 0x0

                        1 = LED is on when attempting to connect.
                        
  */
      unsigned int   led_1Connecting : 1;    /* 1E.C431.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when attempting to connect.
                          */
                    /*! \brief 1E.C431.5 R/WPD LED #1 100 Mb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1_100Mb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 100 Mb/s.
                        
  */
      unsigned int   led_1_100Mb_sLinkEstablished : 1;    /* 1E.C431.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 100 Mb/s.
                          */
                    /*! \brief 1E.C431.6 R/WPD LED #1 1 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1_1Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 1 Gb/s
                        
  */
      unsigned int   led_1_1Gb_sLinkEstablished : 1;    /* 1E.C431.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 1 Gb/s
                          */
                    /*! \brief 1E.C431.7 R/WPD LED #1 10 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1_10Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 10 Gb/s
                        
  */
      unsigned int   led_1_10Gb_sLinkEstablished : 1;    /* 1E.C431.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 10 Gb/s
                          */
                    /*! \brief 1E.C431.8 R/WPD LED #1 Manual Set
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1ManualSet

                        Provisionable Default = 0x0

                        1 = LED On
                        
  */
      unsigned int   led_1ManualSet : 1;    /* 1E.C431.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED On
                          */
                    /*! \brief 1E.C431.D:9 R/WPD Reserved Provisioning C431 [4:0]
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.reservedProvisioningC431

                        Provisionable Default = 0x00

                        Reserved for future use
  */
      unsigned int   reservedProvisioningC431 : 5;    /* 1E.C431.D:9  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use  */
                    /*! \brief 1E.C431.E R/WPD LED #1 2.5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1_2_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 2.5 Gb/s
                        
  */
      unsigned int   led_1_2_5Gb_sLinkEstablished : 1;    /* 1E.C431.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 2.5 Gb/s
                          */
                    /*! \brief 1E.C431.F R/WPD LED #1 5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u1.bits_1.led_1_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 5 Gb/s
                        
  */
      unsigned int   led_1_5Gb_sLinkEstablished : 1;    /* 1E.C431.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 5 Gb/s
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C432.1:0 R/WPD LED #2 Activity Stretch [1:0]
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2ActivityStretch

                        Provisionable Default = 0x3

                        [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                        
  */
      unsigned int   led_2ActivityStretch : 2;    /* 1E.C432.1:0  R/WPD      Provisionable Default = 0x3 */
                     /* [1:0]
                        0x3 = stretch activity by 100 ms
                        0x2 = stretch activity by 60 ms
                        0x1 = stretch activity by 28 ms
                        0x0 = no stretching
                          */
                    /*! \brief 1E.C432.2 R/WPD LED #2 Transmit Activity
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2TransmitActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on transmit activity
                        
  */
      unsigned int   led_2TransmitActivity : 1;    /* 1E.C432.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on transmit activity
                          */
                    /*! \brief 1E.C432.3 R/WPD LED #2 Receive Activity
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2ReceiveActivity

                        Provisionable Default = 0x0

                        1 = LED toggles on receive activity
                        
  */
      unsigned int   led_2ReceiveActivity : 1;    /* 1E.C432.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED toggles on receive activity
                          */
                    /*! \brief 1E.C432.4 R/WPD LED #2 Connecting
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2Connecting

                        Provisionable Default = 0x0

                        1 = LED is on when attempting to connect.
                        
  */
      unsigned int   led_2Connecting : 1;    /* 1E.C432.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when attempting to connect.
                          */
                    /*! \brief 1E.C432.5 R/WPD LED #2 100 Mb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2_100Mb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 100 Mb/s.
  */
      unsigned int   led_2_100Mb_sLinkEstablished : 1;    /* 1E.C432.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 100 Mb/s.  */
                    /*! \brief 1E.C432.6 R/WPD LED #2 1 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2_1Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 1 Gb/s
                        
  */
      unsigned int   led_2_1Gb_sLinkEstablished : 1;    /* 1E.C432.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 1 Gb/s
                          */
                    /*! \brief 1E.C432.7 R/WPD LED #2 10 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2_10Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 10 Gb/s
                        
  */
      unsigned int   led_2_10Gb_sLinkEstablished : 1;    /* 1E.C432.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 10 Gb/s
                          */
                    /*! \brief 1E.C432.8 R/WPD LED #2 Manual Set
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2ManualSet

                        Provisionable Default = 0x0

                        1 = LED On
                        
  */
      unsigned int   led_2ManualSet : 1;    /* 1E.C432.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED On
                          */
                    /*! \brief 1E.C432.D:9 R/WPD Reserved Provisioning C432 [4:0]
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.reservedProvisioningC432

                        Provisionable Default = 0x00

                        Reserved for future use
  */
      unsigned int   reservedProvisioningC432 : 5;    /* 1E.C432.D:9  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use  */
                    /*! \brief 1E.C432.E R/WPD LED #2 2.5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2_2_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 2.5 Gb/s
                        
  */
      unsigned int   led_2_2_5Gb_sLinkEstablished : 1;    /* 1E.C432.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 2.5 Gb/s
                          */
                    /*! \brief 1E.C432.F R/WPD LED #2 5 Gb/s Link Established
                        AQ_GlobalLedProvisioning_HHD.u2.bits_2.led_2_5Gb_sLinkEstablished

                        Provisionable Default = 0x0

                        1 = LED is on when link connects at 5 Gb/s
                        
  */
      unsigned int   led_2_5Gb_sLinkEstablished : 1;    /* 1E.C432.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED is on when link connects at 5 Gb/s
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global LED Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C437.0 R/WPD LED Operation Mode
                        AQ_GlobalLedProvisioning_HHD.u7.bits_7.ledOperationMode

                        Provisionable Default = 0x0

                        1 = LED link activity in Mode #2
                        0 = LED link activity in Aquantia classic mode
                        

                 <B>Notes:</B>
                        When set to 1, the LED blinking rate is based on Mode #2 algorithm. When set to 0, the LED blinking rate is based on the classic Aquantia algorithm.  */
      unsigned int   ledOperationMode : 1;    /* 1E.C437.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = LED link activity in Mode #2
                        0 = LED link activity in Aquantia classic mode
                          */
      unsigned int   reserved0 : 15;
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_11;
    uint16_t word_11;
  } u11;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_12;
    uint16_t word_12;
  } u12;
  /*! \brief Dummy union to fill space in the structure Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_13;
    uint16_t word_13;
  } u13;
  /*! \brief Union for bit and word level access of word 14 of Global LED Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_14;
    uint16_t word_14;
  } u14;
} AQ_GlobalLedProvisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global General Provisioning: 1E.C440 */
/*                  Global General Provisioning: 1E.C440 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved3 : 2;
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.C441.3 R/WPD MDIO Preamble Detection Disable
                        AQ_GlobalGeneralProvisioning_HHD.u1.bits_1.mdioPreambleDetectionDisable

                        Provisionable Default = 0x0

                        1 = Suppress preamble detection on MDIO
                        0 = Enable preamble detection on MDIO
                        
  */
      unsigned int   mdioPreambleDetectionDisable : 1;    /* 1E.C441.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Suppress preamble detection on MDIO
                        0 = Enable preamble detection on MDIO
                          */
                    /*! \brief 1E.C441.4 R/WPD MDIO Drive Configuration
                        AQ_GlobalGeneralProvisioning_HHD.u1.bits_1.mdioDriveConfiguration

                        Provisionable Default = 0x0

                        0 = MDIO driver is in normal mode
                        1 = MDIO driver is in open drain mode
                        

                 <B>Notes:</B>
                        When the MDIO driver is in open drain mode during a read cycle, "0" data will be actively driven out of the MDIO, "1" data will set the MDIO driver in high impedance state and an external pullup will set the MDIO line to "1". The Turn-Around "0" will also be actively driven out of the MDIO, therefore in open drain mode, the Turn-Around is still "Z0".  */
      unsigned int   mdioDriveConfiguration : 1;    /* 1E.C441.4  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = MDIO driver is in normal mode
                        1 = MDIO driver is in open drain mode
                          */
      unsigned int   reserved1 : 8;
                    /*! \brief 1E.C441.D R/WPD MDIO Read MSW First Enable
                        AQ_GlobalGeneralProvisioning_HHD.u1.bits_1.mdioReadMSW_FirstEnable

                        Provisionable Default = 0x0

                        1 = MSW of counter must be read first
                        0 = LSW of counter must be read first
                        

                 <B>Notes:</B>
                        This bit configures whether the MSW or LSW must be read first for counters greater than 16 bits.  */
      unsigned int   mdioReadMSW_FirstEnable : 1;    /* 1E.C441.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = MSW of counter must be read first
                        0 = LSW of counter must be read first
                          */
                    /*! \brief 1E.C441.E R/WPD MDIO Broadcast Mode Enable
                        AQ_GlobalGeneralProvisioning_HHD.u1.bits_1.mdioBroadcastModeEnable

                        Provisionable Default = 0x0

                        1 = Enable broadcast on address set in 1E.C446
                        0 = Disable broadcast on n address set in 1E.C446
                        

                 <B>Notes:</B>
                        When enabled, writes and load MMD address opcodes are supported. Read opcodes are ignored.  */
      unsigned int   mdioBroadcastModeEnable : 1;    /* 1E.C441.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable broadcast on address set in 1E.C446
                        0 = Disable broadcast on n address set in 1E.C446
                          */
      unsigned int   reserved0 : 1;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global General Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C442.0 R/W Daisy Chain Reset
                        AQ_GlobalGeneralProvisioning_HHD.u2.bits_2.daisyChainReset

                        Default = 0x0

                        1 = Reset the daisy chain
                        

                 <B>Notes:</B>
                        Toggling this bit from 0 to 1 will reload the IRAM and DRAM and reset the uP. The uP will be in uP run stall during the reload process. After the reload process, uP run stall will be de-asserted and the uP reset will be asserted. Note that before setting this bit, the  See Soft Reset bit needs to be de-asserted.  */
      unsigned int   daisyChainReset : 1;    /* 1E.C442.0  R/W      Default = 0x0 */
                     /* 1 = Reset the daisy chain
                          */
      unsigned int   reserved0 : 15;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global General Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C447.4:0 R/WPD MDIO Broadcast Address Configuration [4:0]
                        AQ_GlobalGeneralProvisioning_HHD.u7.bits_7.mdioBroadcastAddressConfiguration

                        Provisionable Default = 0x1F

                        Broadcast address
                        

                 <B>Notes:</B>
                        Allows setting the broadcast address. By default this is set to 0x1F  */
      unsigned int   mdioBroadcastAddressConfiguration : 5;    /* 1E.C447.4:0  R/WPD      Provisionable Default = 0x1F */
                     /* Broadcast address
                          */
      unsigned int   reserved0 : 11;
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Global General Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved0 : 16;
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of Global General Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C449.6:0 R/W MDIO Preamble Length [6:0]
                        AQ_GlobalGeneralProvisioning_HHD.u9.bits_9.mdioPreambleLength

                        Default = 0x02

                        MDIO Preamble Length
                        
  */
      unsigned int   mdioPreambleLength : 7;    /* 1E.C449.6:0  R/W      Default = 0x02 */
                     /* MDIO Preamble Length
                          */
      unsigned int   reserved0 : 9;
    } bits_9;
    uint16_t word_9;
  } u9;
} AQ_GlobalGeneralProvisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global NVR Provisioning: 1E.C450 */
/*                  Global NVR Provisioning: 1E.C450 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global NVR Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C450.1:0 R/WPD NVR Address Length [1:0]
                        AQ_GlobalNvrProvisioning_HHD.u0.bits_0.nvrAddressLength

                        Provisionable Default = 0x2

                        NVR address length ranges from 0 bytes up to 3 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the address field used in read and write operations. Use of this field is enabled via Bit 8 of  See Global NVR Provisioning 2: Address 1E.C451 .
                          */
      unsigned int   nvrAddressLength : 2;    /* 1E.C450.1:0  R/WPD      Provisionable Default = 0x2 */
                     /* NVR address length ranges from 0 bytes up to 3 bytes
                          */
      unsigned int   reserved2 : 2;
                    /*! \brief 1E.C450.6:4 R/WPD NVR Dummy Length [2:0]
                        AQ_GlobalNvrProvisioning_HHD.u0.bits_0.nvrDummyLength

                        Provisionable Default = 0x0

                        NVR dummy length ranges from 0 bytes to 4 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the dummy field used in some manufacturer's read status and write status operations.
                          */
      unsigned int   nvrDummyLength : 3;    /* 1E.C450.6:4  R/WPD      Provisionable Default = 0x0 */
                     /* NVR dummy length ranges from 0 bytes to 4 bytes
                          */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C450.A:8 R/WPD NVR Data Length [2:0]
                        AQ_GlobalNvrProvisioning_HHD.u0.bits_0.nvrDataLength

                        Provisionable Default = 0x4

                        NVR data length ranges from 0 bytes to 4 bytes
                        

                 <B>Notes:</B>
                        This sets the length of the data burst used in read and write operations.
                          */
      unsigned int   nvrDataLength : 3;    /* 1E.C450.A:8  R/WPD      Provisionable Default = 0x4 */
                     /* NVR data length ranges from 0 bytes to 4 bytes
                          */
      unsigned int   reserved0 : 5;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global NVR Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C451.7:0 R/WPD NVR Clock Divide [7:0]
                        AQ_GlobalNvrProvisioning_HHD.u1.bits_1.nvrClockDivide

                        Provisionable Default = 0xA0

                        NVR clock divide. Clock frequency is divided by the NVR clock divide + 1
                        
  */
      unsigned int   nvrClockDivide : 8;    /* 1E.C451.7:0  R/WPD      Provisionable Default = 0xA0 */
                     /* NVR clock divide. Clock frequency is divided by the NVR clock divide + 1
                          */
                    /*! \brief 1E.C451.8 R/WPD NVR Address Length Override
                        AQ_GlobalNvrProvisioning_HHD.u1.bits_1.nvrAddressLengthOverride

                        Provisionable Default = 0x0

                        0 = NVR address length is based on the "NVR_SIZE" pin.
                        1 = NVR address length is based on the  See NVR Address Length [1:0]  register
                        

                 <B>Notes:</B>
                        When this bit = 0 and NVR_SIZE pin = 0, the NVR address length is 2 bytes. When this bit = 0 and the NVR_SIZE pin = 1, the NVR address length is 3 bytes. When this bit = 1 the NVR address length is from the  See NVR Address Length [1:0]   */
      unsigned int   nvrAddressLengthOverride : 1;    /* 1E.C451.8  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = NVR address length is based on the "NVR_SIZE" pin.
                        1 = NVR address length is based on the  See NVR Address Length [1:0]  register
                          */
      unsigned int   reserved0 : 7;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global NVR Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C452.0 R/W NVR Daisy Chain Disable
                        AQ_GlobalNvrProvisioning_HHD.u2.bits_2.nvrDaisyChainDisable

                        Default = 0x0

                        1 = Disable the Daisy Chain
                        

                 <B>Notes:</B>
                        When in daisy chain master mode, the daisy chain and MDIO can both access the SPI. Setting this bit to 1 will disable the daisy chain from accessing the SPI and force it into a reset state.  */
      unsigned int   nvrDaisyChainDisable : 1;    /* 1E.C452.0  R/W      Default = 0x0 */
                     /* 1 = Disable the Daisy Chain
                          */
                    /*! \brief 1E.C452.1 R/W NVR Daisy Chain Clock Divide Override
                        AQ_GlobalNvrProvisioning_HHD.u2.bits_2.nvrDaisyChainClockDivideOverride

                        Default = 0x0

                        1 = Override NVR clock divide when in daisy chain master mode
                        

                 <B>Notes:</B>
                        When in daisy chain master mode, the clock divide configuration is received from the FLASH. This bit will override the clock divide configuration from the FLASH with the  See NVR Clock Divide [7:0] .  */
      unsigned int   nvrDaisyChainClockDivideOverride : 1;    /* 1E.C452.1  R/W      Default = 0x0 */
                     /* 1 = Override NVR clock divide when in daisy chain master mode
                          */
      unsigned int   reserved0 : 14;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global NVR Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 4;
                    /*! \brief 1E.C453.4 R/W NVR Reset
                        AQ_GlobalNvrProvisioning_HHD.u3.bits_3.nvrReset

                        Default = 0x0

                        1 = Reset SPI
                        
  */
      unsigned int   nvrReset : 1;    /* 1E.C453.4  R/W      Default = 0x0 */
                     /* 1 = Reset SPI
                          */
      unsigned int   reserved0 : 11;
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_GlobalNvrProvisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Reserved Provisioning: 1E.C470 */
/*                  Global Reserved Provisioning: 1E.C470 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Reserved Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved2 : 4;
                    /*! \brief 1E.C470.4 R/WSC Initiate Cable Diagnostics
                        AQ_GlobalReservedProvisioning_HHD.u0.bits_0.initiateCableDiagnostics

                        Default = 0x0

                        1 = Perform cable diagnostics
                        

                 <B>Notes:</B>
                        Perform cable diagnostics regardless of link state. If link is up, setting this bit will cause the link to drop while diagnostics are performed. This bit is self-clearing upon completion of the cable diagnostics.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can also be monitored via 1E.C831.F  */
      unsigned int   initiateCableDiagnostics : 1;    /* 1E.C470.4  R/WSC      Default = 0x0 */
                     /* 1 = Perform cable diagnostics
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C470.7 R/WSC Trigger Diagnostic Interrupt
                        AQ_GlobalReservedProvisioning_HHD.u0.bits_0.triggerDiagnosticInterrupt

                        Default = 0x0

                        1 = Trigger Diagnostic Interrupt
                        
  */
      unsigned int   triggerDiagnosticInterrupt : 1;    /* 1E.C470.7  R/WSC      Default = 0x0 */
                     /* 1 = Trigger Diagnostic Interrupt
                          */
      unsigned int   reserved0 : 5;
                    /*! \brief 1E.C470.E:D R/WPD Extended MDI Diagnostics Select [1:0]
                        AQ_GlobalReservedProvisioning_HHD.u0.bits_0.extendedMdiDiagnosticsSelect

                        Provisionable Default = 0x0

                        0x0 = TDR Data
                        0x1 = RFI Channel PSD
                        0x2 = Noise PSD while the local Tx is Off
                        0x3 = Noise PSD while the local Tx is On
                        

                 <B>Notes:</B>
                        These bits select what sort of cable diagnostics to perform. For regular cable diagnostics, Bit F is set to zero, and the diagnostics are triggered by setting Bit 4. For extended diagnostics, Bit F is set to 1, and the desired extended diagnostics are selected by Bits E:D. The routine is then triggered by setting Bit 4. Each of the extended diagnostic routines present data for all for MDI pairs (A, B, C, D) consecutively, and after the data for each channel is gathered Bits F:D are reset. To get the data for the next pair, Bits F:D must be set back to the desired value (which must be the same as the initial channel). This continues until the data for all channels has been gathered. The address in memory where the data is stored is given in 1E.C802 and 1E.C804.
                        
                        For the case of PSD, the structure is as follows:
                        Int32      info
                        Int16      data[Len]
                        Info = Len << 16 | TxEnable << 8 | Pair (0 = A, etc.)
                        
                        For TDR:
                        Int32      info
                        Int16      tdr_A[Len]
                        Int16      tdr_B[Len]
                        Int16      tdr_C[Len]
                        Int16      tdr_D[Len]
                        
                        Info = Len << 16 | Channel
                        
                        TDR data is from the current pair to all other pairs.
                        
                        At the end of retrieving extended MDI diag data, the part will be reset. Conversely the only way to exit this routine once it starts is to issue a PMA reset.  */
      unsigned int   extendedMdiDiagnosticsSelect : 2;    /* 1E.C470.E:D  R/WPD      Provisionable Default = 0x0 */
                     /* 0x0 = TDR Data
                        0x1 = RFI Channel PSD
                        0x2 = Noise PSD while the local Tx is Off
                        0x3 = Noise PSD while the local Tx is On
                          */
                    /*! \brief 1E.C470.F R/WPD Diagnostics Select
                        AQ_GlobalReservedProvisioning_HHD.u0.bits_0.diagnosticsSelect

                        Provisionable Default = 0x0

                        1 = Provide Extended MDI Diagnostics Information.
                        0 = Provide normal cable diagnostics
                        

                 <B>Notes:</B>
                        These bits select what sort of cable diagnostics to perform. For regular cable diagnostics, Bit F is set to zero, and the diagnostics are triggered by setting Bit 4. For extended diagnostics, Bit F is set to 1, and the desired extended diagnostics are selected by Bits E:D. The routine is then triggered by setting Bit 4. Each of the extended diagnostic routines present data for all for MDI pairs (A, B, C, D) consecutively, and after the data for each channel is gathered Bits F:D are reset. To get the data for the next pair, Bits F:D must be set back to the desired value (which must be the same as the initial channel). This continues until the data for all channels has been gathered. The address in memory where the data is stored is given in 1E.C802 and 1E.C804.
                        
                        For the case of PSD, the structure is as follows:
                        Int32      info
                        Int16      data[Len]
                        Info = Len << 16 | TxEnable << 8 | Pair (0 = A, etc.)
                        
                        For TDR:
                        Int32      info
                        Int16      tdr_A[Len]
                        Int16      tdr_B[Len]
                        Int16      tdr_C[Len]
                        Int16      tdr_D[Len]
                        
                        Info = Len << 16 | Channel
                        
                        TDR data is from the current pair to all other pairs.
                        
                        At the end of retrieving extended MDI diag data, the part will be reset. Conversely the only way to exit this routine once it starts is to issue a PMA reset.  */
      unsigned int   diagnosticsSelect : 1;    /* 1E.C470.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Provide Extended MDI Diagnostics Information.
                        0 = Provide normal cable diagnostics
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C471.5:0 R/WuP Daisy-Chain Hop-Count Override Value [5:0]
                        AQ_GlobalReservedProvisioning_HHD.u1.bits_1.daisy_chainHop_countOverrideValue

                        Default = 0x00

                        The value to use for the PHY's daisy-chain hop-count. Valid values are from 0 -> 47
                        

                 <B>Notes:</B>
                        Daisy-Chain Hop-Count Override should be used during MDIO boot-load operation, as the daisy-chain hop-count does not function when the daisy-chain is disabled (1E.C452.0). Setting this bit tells the processor where in the daisy-chain it is, so that the provisioning operation will function correctly.  */
      unsigned int   daisy_chainHop_countOverrideValue : 6;    /* 1E.C471.5:0  R/WuP      Default = 0x00 */
                     /* The value to use for the PHY's daisy-chain hop-count. Valid values are from 0 -> 47
                          */
                    /*! \brief 1E.C471.6 R/WuP Enable Daisy-Chain Hop-Count Override
                        AQ_GlobalReservedProvisioning_HHD.u1.bits_1.enableDaisy_chainHop_countOverride

                        Default = 0x0

                        1 = Hop-count is set by Bits 5:0
                        0 = Hop-count is determined by the daisy-chain
                        

                 <B>Notes:</B>
                        Daisy-Chain Hop-Count Override should be used during MDIO boot-load operation, as the daisy-chain hop-count does not function when the daisy-chain is disabled (1E.C452.0). Setting this bit tells the processor where in the daisy-chain it is, so that the provisioning operation will function correctly.  */
      unsigned int   enableDaisy_chainHop_countOverride : 1;    /* 1E.C471.6  R/WuP      Default = 0x0 */
                     /* 1 = Hop-count is set by Bits 5:0
                        0 = Hop-count is determined by the daisy-chain
                          */
      unsigned int   reserved0 : 9;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C472.0 R/WPDuP Enable 5th Channel RFI Cancellation
                        AQ_GlobalReservedProvisioning_HHD.u2.bits_2.enable_5thChannelRfiCancellation

                        Provisionable Default = 0x0

                        1 = 5th channel and RFI cancellers operation enabled
                        0 = 5th channel AFE is powered down, 5th channel digital is clock gated, RFI cancellers are disabled
                        

                 <B>Notes:</B>
                        Note: The value of this bit at the time of Autonegotiation sets the local PHY behavior until the next time Autonegotiation occurs.  */
      unsigned int   enable_5thChannelRfiCancellation : 1;    /* 1E.C472.0  R/WPDuP      Provisionable Default = 0x0 */
                     /* 1 = 5th channel and RFI cancellers operation enabled
                        0 = 5th channel AFE is powered down, 5th channel digital is clock gated, RFI cancellers are disabled
                          */
                    /*! \brief 1E.C472.1 R/WPDuP Enable XENPAK Register Space
                        AQ_GlobalReservedProvisioning_HHD.u2.bits_2.enableXenpakRegisterSpace

                        Provisionable Default = 0x0

                        1 = XENPAK register space enabled
                        0 = XENPAK register space disabled
                        
  */
      unsigned int   enableXenpakRegisterSpace : 1;    /* 1E.C472.1  R/WPDuP      Provisionable Default = 0x0 */
                     /* 1 = XENPAK register space enabled
                        0 = XENPAK register space disabled
                          */
                    /*! \brief 1E.C472.5:2 R/WPD External VDD Change Request [3:0]
                        AQ_GlobalReservedProvisioning_HHD.u2.bits_2.externalVddChangeRequest

                        Provisionable Default = 0x0

                        The amount of VDD change requested by firmware, in mV (2's complement value).
                        
  */
      unsigned int   externalVddChangeRequest : 4;    /* 1E.C472.5:2  R/WPD      Provisionable Default = 0x0 */
                     /* The amount of VDD change requested by firmware, in mV (2's complement value).
                          */
                    /*! \brief 1E.C472.6 R/WPD Tunable External VDD Power Supply Present
                        AQ_GlobalReservedProvisioning_HHD.u2.bits_2.tunableExternalVddPowerSupplyPresent

                        Provisionable Default = 0x0

                        1 = Tunable external VDD power supply present
                        0 = No tunable external VDD power supply present
                        

                 <B>Notes:</B>
                        This bit must be set if tuning of external power supply is desired.  */
      unsigned int   tunableExternalVddPowerSupplyPresent : 1;    /* 1E.C472.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Tunable external VDD power supply present
                        0 = No tunable external VDD power supply present
                          */
      unsigned int   reserved1 : 7;
                    /*! \brief 1E.C472.E R/WPD Enable VDD Power Supply Tuning
                        AQ_GlobalReservedProvisioning_HHD.u2.bits_2.enableVddPowerSupplyTuning

                        Provisionable Default = 0x0

                        1 = Enable external VDD power supply tuning
                        0 = Disable external VDD power supply tuning is disabled
                        

                 <B>Notes:</B>
                        This bit controls whether the PHY attempts to tune the external VDD power supply via the SMBus. This bit is only operational if the external supply is present. (See 1E.C472.6)  */
      unsigned int   enableVddPowerSupplyTuning : 1;    /* 1E.C472.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable external VDD power supply tuning
                        0 = Disable external VDD power supply tuning is disabled
                          */
      unsigned int   reserved0 : 1;
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C473.7:0 R/WPD Training SNR [7:0]
                        AQ_GlobalReservedProvisioning_HHD.u3.bits_3.trainingSNR

                        Provisionable Default = 0x00

                        SNR during 10G training on the worst channel. SNR is in steps of 0.1dB
                        

                 <B>Notes:</B>
                        The SNR margin that is enjoyed by the worst channel, over and above the minimum SNR required to operate at a BER of 10-12. It is reported with 0.1 dB of resolution to an accuracy of 0.5 dB within the range of -12.7 dB to 12.7 dB. The number is in offset binary, with 0.0 dB represented by 0x8000.  */
      unsigned int   trainingSNR : 8;    /* 1E.C473.7:0  R/WPD      Provisionable Default = 0x00 */
                     /* SNR during 10G training on the worst channel. SNR is in steps of 0.1dB
                          */
                    /*! \brief 1E.C473.A:8 R/WPD Rate Transition Request [2:0]
                        AQ_GlobalReservedProvisioning_HHD.u3.bits_3.rateTransitionRequest

                        Provisionable Default = 0x0

                        0 = No Transition
                        1 = Reserved
                        2 = Reserved
                        3 = Retrain at 10G
                        4 = Retrain at 5G
                        5 = Retrain at 2.5G
                        6 = Retrain at 1G
                        7 = Reserved
                        
  */
      unsigned int   rateTransitionRequest : 3;    /* 1E.C473.A:8  R/WPD      Provisionable Default = 0x0 */
                     /* 0 = No Transition
                        1 = Reserved
                        2 = Reserved
                        3 = Retrain at 10G
                        4 = Retrain at 5G
                        5 = Retrain at 2.5G
                        6 = Retrain at 1G
                        7 = Reserved
                          */
      unsigned int   reserved0 : 5;
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C474.0 R/W NVR Daisy Chain Kickstart
                        AQ_GlobalReservedProvisioning_HHD.u4.bits_4.nvrDaisyChainKickstart

                        Default = 0x0

                        1 = Kickstart the Daisy Chain
                        

                 <B>Notes:</B>
                        When in daisy chain master mode, the PHY0 can kickstart the daisy chain. The kickstart will not reload the IRAM/DRAM or reset the uP for PHY0. It will just read the FLASH and transfer the FLASH data to the daisy chain.  */
      unsigned int   nvrDaisyChainKickstart : 1;    /* 1E.C474.0  R/W      Default = 0x0 */
                     /* 1 = Kickstart the Daisy Chain
                          */
                    /*! \brief 1E.C474.F:1 R/WPD Reserved Provisioning 5 [F:1]
                        AQ_GlobalReservedProvisioning_HHD.u4.bits_4.reservedProvisioning_5

                        Provisionable Default = 0x0000

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_5 : 15;    /* 1E.C474.F:1  R/WPD      Provisionable Default = 0x0000 */
                     /* Reserved for future use
                          */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Reserved Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.C475.2 R/WPD Smart Power-Down Enable
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.smartPower_downEnable

                        Provisionable Default = 0x0

                        1 = Enable smart power down mode
                        0 = Smart power-down mode disabled
                        

                 <B>Notes:</B>
                        Smart power down (SPD) is the lowest power mode at which PHY is able to autonegotiate. SPD can be enabled with bit 1E.C475.2  */
      unsigned int   smartPower_downEnable : 1;    /* 1E.C475.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable smart power down mode
                        0 = Smart power-down mode disabled
                          */
                    /*! \brief 1E.C475.3 R/WPD Deadlock Avoidance Enable
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.deadlockAvoidanceEnable

                        Provisionable Default = 0x0

                        1 = SPD with deadlock avoidance: PHY transmits autonegotiation pulses (FLPs) at a slower rate (~ 1 FLP/ 100ms) than specified by autonegotiation standard (~1 FLP / 8.25ms). Receiver is active and able to detect the pulses.
                        0 = SPD without deadlock avoidance: PHY transmitter is shut down, no autonegotiation pulses are sent on the line but the receiver is active and able to detect the pulses
                        
  */
      unsigned int   deadlockAvoidanceEnable : 1;    /* 1E.C475.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = SPD with deadlock avoidance: PHY transmits autonegotiation pulses (FLPs) at a slower rate (~ 1 FLP/ 100ms) than specified by autonegotiation standard (~1 FLP / 8.25ms). Receiver is active and able to detect the pulses.
                        0 = SPD without deadlock avoidance: PHY transmitter is shut down, no autonegotiation pulses are sent on the line but the receiver is active and able to detect the pulses
                          */
                    /*! \brief 1E.C475.4 R/WPD CFR Support
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.cfrSupport

                        Provisionable Default = 0x0

                        1 = Local PHY supports Cisco Fast Retrain
                        0 = Local PHY does support Cisco Fast Retrain
                        
  */
      unsigned int   cfrSupport : 1;    /* 1E.C475.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Local PHY supports Cisco Fast Retrain
                        0 = Local PHY does support Cisco Fast Retrain
                          */
                    /*! \brief 1E.C475.5 R/WPD CFR THP
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.cfrTHP

                        Provisionable Default = 0x0

                        1 = Local PHY requires local PHY to enable THP
                        0 = Local PHY does not require local PHY to enable THP
                        
  */
      unsigned int   cfrTHP : 1;    /* 1E.C475.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Local PHY requires local PHY to enable THP
                        0 = Local PHY does not require local PHY to enable THP
                          */
                    /*! \brief 1E.C475.6 R/WPD CFR Extended Maxwait
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.cfrExtendedMaxwait

                        Provisionable Default = 0x0

                        1 = Local PHY requires extended maxwait
                        0 = Local PHY does not require extended maxwait
                        
  */
      unsigned int   cfrExtendedMaxwait : 1;    /* 1E.C475.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Local PHY requires extended maxwait
                        0 = Local PHY does not require extended maxwait
                          */
                    /*! \brief 1E.C475.7 R/WPD CFR Disable Timer
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.cfrDisableTimer

                        Provisionable Default = 0x0

                        1 = Local PHY requires cfr_disable timer
                        0 = Local PHY does not require cfr_disable timer
                        
  */
      unsigned int   cfrDisableTimer : 1;    /* 1E.C475.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Local PHY requires cfr_disable timer
                        0 = Local PHY does not require cfr_disable timer
                          */
                    /*! \brief 1E.C475.8 R/WPD CFR LP Support
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.cfrLpSupport

                        Provisionable Default = 0x0

                        1 = Link partner supports Cisco Fast Retrain
                        0 = Link partner does support Cisco Fast Retrain
                        
  */
      unsigned int   cfrLpSupport : 1;    /* 1E.C475.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Link partner supports Cisco Fast Retrain
                        0 = Link partner does support Cisco Fast Retrain
                          */
                    /*! \brief 1E.C475.9 R/WPD CFR LP THP
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.cfrLpTHP

                        Provisionable Default = 0x0

                        1 = Link partner requires local PHY to enable THP
                        0 = Link partner does not require local PHY to enable THP
                        
  */
      unsigned int   cfrLpTHP : 1;    /* 1E.C475.9  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Link partner requires local PHY to enable THP
                        0 = Link partner does not require local PHY to enable THP
                          */
                    /*! \brief 1E.C475.A R/WPD CFR LP Extended Maxwait
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.cfrLpExtendedMaxwait

                        Provisionable Default = 0x0

                        1 = Link partner requires extended maxwait
                        0 = Link partner does not require extended maxwait
                        
  */
      unsigned int   cfrLpExtendedMaxwait : 1;    /* 1E.C475.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Link partner requires extended maxwait
                        0 = Link partner does not require extended maxwait
                          */
                    /*! \brief 1E.C475.B R/WPD CFR LP Disable Timer
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.cfrLpDisableTimer

                        Provisionable Default = 0x0

                        1 = Link partner requires cfr_disable timer
                        0 = Link partner does not require cfr_disable timer
                        
  */
      unsigned int   cfrLpDisableTimer : 1;    /* 1E.C475.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Link partner requires cfr_disable timer
                        0 = Link partner does not require cfr_disable timer
                          */
                    /*! \brief 1E.C475.C R/WPD Reserved Provisioning 6
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.reservedProvisioning_6

                        Provisionable Default = 0x0

                        Internal reserved - do not modify
                        
  */
      unsigned int   reservedProvisioning_6 : 1;    /* 1E.C475.C  R/WPD      Provisionable Default = 0x0 */
                     /* Internal reserved - do not modify
                          */
                    /*! \brief 1E.C475.D R/WPD Smart Power-Down Status
                        AQ_GlobalReservedProvisioning_HHD.u5.bits_5.smartPower_downStatus

                        Provisionable Default = 0x0

                        1 = Smart Power-Down Active
                        0 = Smart Power-Down Inactive
                        
  */
      unsigned int   smartPower_downStatus : 1;    /* 1E.C475.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Smart Power-Down Active
                        0 = Smart Power-Down Inactive
                          */
      unsigned int   reserved0 : 2;
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Dummy union to fill space in the structure Global Reserved Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Dummy union to fill space in the structure Global Reserved Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved : 16;
    } bits_7;
    uint16_t word_7;
  } u7;
  /*! \brief Union for bit and word level access of word 8 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C478.9:0 R/WPD Reserved Provisioning 9 [9:0]
                        AQ_GlobalReservedProvisioning_HHD.u8.bits_8.reservedProvisioning_9

                        Provisionable Default = 0x000

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_9 : 10;    /* 1E.C478.9:0  R/WPD      Provisionable Default = 0x000 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C478.A R/WPD Thermal Shutdown Enable
                        AQ_GlobalReservedProvisioning_HHD.u8.bits_8.thermalShutdownEnable

                        Provisionable Default = 0x0

                        1 = PHY goes to low power mode if current temperature exceeds temperature threshold selected through register 1E.C475.F:E.
                        

                 <B>Notes:</B>
                        Global fault is generated (1E.C850 = 0x8007) upon triggering thermal shutdown event.  */
      unsigned int   thermalShutdownEnable : 1;    /* 1E.C478.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = PHY goes to low power mode if current temperature exceeds temperature threshold selected through register 1E.C475.F:E.
                          */
                    /*! \brief 1E.C478.E:B R/WPD DTE Drop Reporting Timer [3:0]
                        AQ_GlobalReservedProvisioning_HHD.u8.bits_8.dteDropReportingTimer

                        Provisionable Default = 0x0

                        Number of seconds between loss of link partner filter and assertion of no-power-needed state, in 5 second increments (e.g. 0x4 = 20 seconds).
                        

                 <B>Notes:</B>
                        These bits are used to set how long the PHY waits after it no longer detects the link partner filter before declaring that power is not needed.  */
      unsigned int   dteDropReportingTimer : 4;    /* 1E.C478.E:B  R/WPD      Provisionable Default = 0x0 */
                     /* Number of seconds between loss of link partner filter and assertion of no-power-needed state, in 5 second increments (e.g. 0x4 = 20 seconds).
                          */
                    /*! \brief 1E.C478.F R/WPD DTE Enable
                        AQ_GlobalReservedProvisioning_HHD.u8.bits_8.dteEnable

                        Provisionable Default = 0x0

                        1 = Enable DTE
                        0 = Disable DTE
                        
  */
      unsigned int   dteEnable : 1;    /* 1E.C478.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable DTE
                        0 = Disable DTE
                          */
    } bits_8;
    uint16_t word_8;
  } u8;
  /*! \brief Union for bit and word level access of word 9 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C479.E:0 R/WPD Reserved Provisioning 10 [E:0]
                        AQ_GlobalReservedProvisioning_HHD.u9.bits_9.reservedProvisioning_10

                        Provisionable Default = 0x0000

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_10 : 15;    /* 1E.C479.E:0  R/WPD      Provisionable Default = 0x0000 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C479.F R/WPD Power Up Stall
                        AQ_GlobalReservedProvisioning_HHD.u9.bits_9.powerUpStall

                        Provisionable Default = 0x0

                        1 = Stall FW at Power Up
                        0 = Unstall the FW
                        

                 <B>Notes:</B>
                        This bit needs to be provisioned in Power Up Init for firmware to stall.  */
      unsigned int   powerUpStall : 1;    /* 1E.C479.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Stall FW at Power Up
                        0 = Unstall the FW
                          */
    } bits_9;
    uint16_t word_9;
  } u9;
  /*! \brief Union for bit and word level access of word 10 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C47A.2:0 R/WPD Rate [2:0]
                        AQ_GlobalReservedProvisioning_HHD.u10.bits_10.rate

                        Provisionable Default = 0x0

                        0x7 - 0x6 = reserved
                        0x5 = 5G
                        0x4 = 2.5G
                        0x3 = 10G
                        0x2 = 1G
                        0x1 = 100M
                        0x0 = reserved
                        

                 <B>Notes:</B>
                        These bits select the rate for the loopback and packet generation. SERDES configuration, as well autonegotiation is controlled accordingly when a loopback is selected. For instance, if 100M system loopback on the network interface is selected, SGMII on the system interface is enabled to connect at 100M, and if passthrough is enabled 100BASE-TX will be the only advertised rate and will force a re-autonegotiation if not already connected at 100M.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.  */
      unsigned int   rate : 3;    /* 1E.C47A.2:0  R/WPD      Provisionable Default = 0x0 */
                     /* 0x7 - 0x6 = reserved
                        0x5 = 5G
                        0x4 = 2.5G
                        0x3 = 10G
                        0x2 = 1G
                        0x1 = 100M
                        0x0 = reserved
                          */
                    /*! \brief 1E.C47A.3 R/WPD System I/F Packet Generation
                        AQ_GlobalReservedProvisioning_HHD.u10.bits_10.systemI_fPacketGeneration

                        Provisionable Default = 0x0

                        1 = CRPAT packet generation out 10G system interface
                        0 = No CRPAT packet generation out 10G system interface
                        

                 <B>Notes:</B>
                        Selecting this mode of operation causes the CRPAT packet generator in the PHY to output CRPAT packets on the selected 10G system interface (4.C441.F:E)
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.  */
      unsigned int   systemI_fPacketGeneration : 1;    /* 1E.C47A.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = CRPAT packet generation out 10G system interface
                        0 = No CRPAT packet generation out 10G system interface
                          */
                    /*! \brief 1E.C47A.4 R/WPD Look-Aside Port Packet Generation
                        AQ_GlobalReservedProvisioning_HHD.u10.bits_10.look_asidePortPacketGeneration

                        Provisionable Default = 0x0

                        1 = CRPAT packet generation out 10G look-aside interface (KR0)
                        0 = No CRPAT packet generation out 10G look-aside interface (KR0)
                        

                 <B>Notes:</B>
                        Selecting this mode of operation causes the CRPAT packet generator in the PHY to output on KR0.
                        
                        NOTE!! This only functions if KR1 (SERDES2) is selected as the system interface in (4.C441.F:E).
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.  */
      unsigned int   look_asidePortPacketGeneration : 1;    /* 1E.C47A.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = CRPAT packet generation out 10G look-aside interface (KR0)
                        0 = No CRPAT packet generation out 10G look-aside interface (KR0)
                          */
                    /*! \brief 1E.C47A.5 R/WPD MDI Packet Generation
                        AQ_GlobalReservedProvisioning_HHD.u10.bits_10.mdiPacketGeneration

                        Provisionable Default = 0x0

                        1 = CRPAT packet generation out MDI interface
                        0 = No CRPAT packet generation out MDI interface
                        

                 <B>Notes:</B>
                        Selecting this mode of operation causes the CRPAT packet generator in the PHY to output on the MDI interface at the selected rate.
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.  */
      unsigned int   mdiPacketGeneration : 1;    /* 1E.C47A.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = CRPAT packet generation out MDI interface
                        0 = No CRPAT packet generation out MDI interface
                          */
                    /*! \brief 1E.C47A.A:6 R/WPD Reserved Provisioning 11 [4:0]
                        AQ_GlobalReservedProvisioning_HHD.u10.bits_10.reservedProvisioning_11

                        Provisionable Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_11 : 5;    /* 1E.C47A.A:6  R/WPD      Provisionable Default = 0x00 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C47A.F:B R/WPD Loopback Control [4:0]
                        AQ_GlobalReservedProvisioning_HHD.u10.bits_10.loopbackControl

                        Provisionable Default = 0x00

                        0x00 = No loopback
                        0x01 = System Interface - System Loopback
                        0x02 = System Interface - System Loopback with Passthrough
                        0x03 = System Interface - Network Loopback
                        0x04 = System Interface - Network Loopback with Passthrough
                        0x05 = System Interface - Network Loopback with Passthrough and Merge
                        0x06 = System Interface - Peer-to-peer loopback
                        0x07 - 0x08 = Reserved
                        0x09 = Network Interface - System Loopback
                        0x0A = Network Interface - System Loopback with Passthrough
                        0x0B = Network Interface - Network Loopback
                        0x0C = Network Interface - Network Loopback with Passthrough
                        0x0D = Network Interface - Peer-to-peer loopback
                        0x0E - 0x0F = Reserved
                        0x10 = Cross-connect System Loopback
                        0x11 = Cross-connect Network Loopback
                        0x12 - 0x13 = Reserved
                        0x14 = Network Interface - System Loopback via Loopback Plug
                        0x15 - 0x1F = Reserved
                        

                 <B>Notes:</B>
                        These bits, in conjunction with the chip configuration and the rate (Bits 1:0), select the loopback to configure for the chip. Setting one of these loopbacks provisions the chip for the specified loopback. Upon clearing the loopback, the chip returns to it's configuration prior to entering loopback (irregardless of whether other loopbacks were selected after the initial loopback).
                        
                        NOTE!! This is a processor intensive operation. Completion of this operation can be monitored via 1E.C831.F.
                        
                        The controls in this register are identical to, and mirrored with, the controls in 4.C444.
                          */
      unsigned int   loopbackControl : 5;    /* 1E.C47A.F:B  R/WPD      Provisionable Default = 0x00 */
                     /* 0x00 = No loopback
                        0x01 = System Interface - System Loopback
                        0x02 = System Interface - System Loopback with Passthrough
                        0x03 = System Interface - Network Loopback
                        0x04 = System Interface - Network Loopback with Passthrough
                        0x05 = System Interface - Network Loopback with Passthrough and Merge
                        0x06 = System Interface - Peer-to-peer loopback
                        0x07 - 0x08 = Reserved
                        0x09 = Network Interface - System Loopback
                        0x0A = Network Interface - System Loopback with Passthrough
                        0x0B = Network Interface - Network Loopback
                        0x0C = Network Interface - Network Loopback with Passthrough
                        0x0D = Network Interface - Peer-to-peer loopback
                        0x0E - 0x0F = Reserved
                        0x10 = Cross-connect System Loopback
                        0x11 = Cross-connect Network Loopback
                        0x12 - 0x13 = Reserved
                        0x14 = Network Interface - System Loopback via Loopback Plug
                        0x15 - 0x1F = Reserved
                          */
    } bits_10;
    uint16_t word_10;
  } u10;
  /*! \brief Union for bit and word level access of word 11 of Global Reserved Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C47B.0 R/WPD Enable PTP
                        AQ_GlobalReservedProvisioning_HHD.u11.bits_11.enablePtp

                        Provisionable Default = 0x0

                        1 = PTP functionality is enabled
                        0 = PTP functionality is disabled
                        

                 <B>Notes:</B>
                        If this bit is 1, the PTP/SEC block will be included in the data path, regardless of operating mode.  */
      unsigned int   enablePtp : 1;    /* 1E.C47B.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = PTP functionality is enabled
                        0 = PTP functionality is disabled
                          */
                    /*! \brief 1E.C47B.1 R/WPD Enable MACSec
                        AQ_GlobalReservedProvisioning_HHD.u11.bits_11.enableMacsec

                        Provisionable Default = 0x0

                        1 = MACSec functionality is enabled
                        0 = MACSec functionality is disabled
                        

                 <B>Notes:</B>
                        If this bit is 1, the PTP/SEC block will be included in the data path, regardless of operating mode.  */
      unsigned int   enableMacsec : 1;    /* 1E.C47B.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = MACSec functionality is enabled
                        0 = MACSec functionality is disabled
                          */
                    /*! \brief 1E.C47B.F:2 R/WPD Reserved Provisioning 12 [D:0]
                        AQ_GlobalReservedProvisioning_HHD.u11.bits_11.reservedProvisioning_12

                        Provisionable Default = 0x0000

                        Reserved for future use
                        
  */
      unsigned int   reservedProvisioning_12 : 14;    /* 1E.C47B.F:2  R/WPD      Provisionable Default = 0x0000 */
                     /* Reserved for future use
                          */
    } bits_11;
    uint16_t word_11;
  } u11;
} AQ_GlobalReservedProvisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                PIF Mailbox Control: 1E.C47C */
/*                  PIF Mailbox Control: 1E.C47C */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of PIF Mailbox Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C47C.F:0 R/WPDuP PIF Mailbox Address [F:0]
                        AQ_PifMailboxControl_HHD.u0.bits_0.pifMailboxAddress

                        Provisionable Default = 0x0000

                        Address (lower 16 bits) specifying the target register to read or write.
                        

                 <B>Notes:</B>
                        Specifies the first target register.  */
      unsigned int   pifMailboxAddress : 16;    /* 1E.C47C.F:0  R/WPDuP      Provisionable Default = 0x0000 */
                     /* Address (lower 16 bits) specifying the target register to read or write.
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of PIF Mailbox Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C47D.F:0 R/WPDuP PIF Mailbox Data [F:0]
                        AQ_PifMailboxControl_HHD.u1.bits_1.pifMailboxData

                        Provisionable Default = 0x0000

                        The data to be written, or that has been read from, the target register.
                        
  */
      unsigned int   pifMailboxData : 16;    /* 1E.C47D.F:0  R/WPDuP      Provisionable Default = 0x0000 */
                     /* The data to be written, or that has been read from, the target register.
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of PIF Mailbox Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C47E.7:0 R/WPDuP PIF Mailbox MMD [7:0]
                        AQ_PifMailboxControl_HHD.u2.bits_2.pifMailboxMMD

                        Provisionable Default = 0x00

                        MMD (upper 8 bits) specifying the target register to read or write.
                        

                 <B>Notes:</B>
                        Specifies the first target register.  */
      unsigned int   pifMailboxMMD : 8;    /* 1E.C47E.7:0  R/WPDuP      Provisionable Default = 0x00 */
                     /* MMD (upper 8 bits) specifying the target register to read or write.
                          */
                    /*! \brief 1E.C47E.B:8 R/WPDuP PIF Mailbox Command Type [3:0]
                        AQ_PifMailboxControl_HHD.u2.bits_2.pifMailboxCommandType

                        Provisionable Default = 0x0

                        0 = No Action
                        1 = Read
                        2 = Write
                        

                 <B>Notes:</B>
                        The PIF Mailbox supports reading/writing arbitrary ("target") PHY registers indirectly, via the uP's PIF interface. This is an alternative register accessing mechanism to MDIO or SMBus.
                        
                        System SW writes non-zero value to start a PIF command.  */
      unsigned int   pifMailboxCommandType : 4;    /* 1E.C47E.B:8  R/WPDuP      Provisionable Default = 0x0 */
                     /* 0 = No Action
                        1 = Read
                        2 = Write
                          */
                    /*! \brief 1E.C47E.C R/WPDuP Service Second Register
                        AQ_PifMailboxControl_HHD.u2.bits_2.serviceSecondRegister

                        Provisionable Default = 0x0

                        0 = Handle the read/write request for only the first target register
                        1 = Handle the read/write request for both the first and second target registers
                        

                 <B>Notes:</B>
                        Either one or two target registers can be read or written. If this bit is set to 1, then the first target register will be read/written, then the second target register will be read/written. 
                        
                        The second target register is specified by the PIF Mailbox Extra group (4.E41D - 4.E41F).
                        
                        If this bit is 0, only the first target register will be read/written, and the PIF Mailbox Extra registers will be ignored.  */
      unsigned int   serviceSecondRegister : 1;    /* 1E.C47E.C  R/WPDuP      Provisionable Default = 0x0 */
                     /* 0 = Handle the read/write request for only the first target register
                        1 = Handle the read/write request for both the first and second target registers
                          */
                    /*! \brief 1E.C47E.F:D R/WPD Reserved PIF Mailbox Control 3 [2:0]
                        AQ_PifMailboxControl_HHD.u2.bits_2.reservedPifMailboxControl_3

                        Provisionable Default = 0x0

                        Reserved for future use
                        
  */
      unsigned int   reservedPifMailboxControl_3 : 3;    /* 1E.C47E.F:D  R/WPD      Provisionable Default = 0x0 */
                     /* Reserved for future use
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of PIF Mailbox Control */
  union
  {
    struct
    {
                    /*! \brief 1E.C47F.3:0 R/WPDuP PIF Mailbox Command Status [3:0]
                        AQ_PifMailboxControl_HHD.u3.bits_3.pifMailboxCommandStatus

                        Provisionable Default = 0x0

                        0 = Idle
                        1 = Command completed
                        2 = Command did not complete
                        

                 <B>Notes:</B>
                        System SW should write 0 before writing Command Type to clear completion status  */
      unsigned int   pifMailboxCommandStatus : 4;    /* 1E.C47F.3:0  R/WPDuP      Provisionable Default = 0x0 */
                     /* 0 = Idle
                        1 = Command completed
                        2 = Command did not complete
                          */
                    /*! \brief 1E.C47F.F:4 R/WPD Reserved PIF Mailbox Control 4 [B:0]
                        AQ_PifMailboxControl_HHD.u3.bits_3.reservedPifMailboxControl_4

                        Provisionable Default = 0x000

                        Reserved for future use
                        
  */
      unsigned int   reservedPifMailboxControl_4 : 12;    /* 1E.C47F.F:4  R/WPD      Provisionable Default = 0x000 */
                     /* Reserved for future use
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_PifMailboxControl_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global SMBus 0 Provisioning: 1E.C485 */
/*                  Global SMBus 0 Provisioning: 1E.C485 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global SMBus 0 Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C485.7:1 R/W SMB 0 Slave Address [7:1]
                        AQ_GlobalSmbus_0Provisioning_HHD.u0.bits_0.smb_0SlaveAddress

                        Default = 0x00

                        SMB slave address configuration
                        
  */
      unsigned int   smb_0SlaveAddress : 7;    /* 1E.C485.7:1  R/W      Default = 0x00 */
                     /* SMB slave address configuration
                          */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSmbus_0Provisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global SMBus 1 Provisioning: 1E.C495 */
/*                  Global SMBus 1 Provisioning: 1E.C495 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global SMBus 1 Provisioning */
  union
  {
    struct
    {
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C495.7:1 R/W SMB 1 Slave Address [7:1]
                        AQ_GlobalSmbus_1Provisioning_HHD.u0.bits_0.smb_1SlaveAddress

                        Default = 0x00

                        SMB slave address configuration
                        
  */
      unsigned int   smb_1SlaveAddress : 7;    /* 1E.C495.7:1  R/W      Default = 0x00 */
                     /* SMB slave address configuration
                          */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalSmbus_1Provisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global EEE Provisioning: 1E.C4A0 */
/*                  Global EEE Provisioning: 1E.C4A0 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global EEE Provisioning */
  union
  {
    struct
    {
                    /*! \brief 1E.C4A0.0 R/WPD EEE Mode
                        AQ_GlobalEeeProvisioning_HHD.u0.bits_0.eeeMode

                        Provisionable Default = 0x0

                        1 = EEE mode of operation
                        

                 <B>Notes:</B>
                        EEE mode of operation (0=disable, 1=enable, default:0)  */
      unsigned int   eeeMode : 1;    /* 1E.C4A0.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = EEE mode of operation
                          */
      unsigned int   reserved0 : 15;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalEeeProvisioning_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Cable Diagnostic Status: 1E.C800 */
/*                  Global Cable Diagnostic Status: 1E.C800 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C800.2:0 RO Pair D Status [2:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u0.bits_0.pairDStatus

                        

                        [6:4]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair C
                        010= Connected to Pair B
                        001= Connected to Pair A
                        000= OK

                 <B>Notes:</B>
                        This register summarizes the worst impairment on Pair D.  */
      unsigned int   pairDStatus : 3;    /* 1E.C800.2:0  RO       */
                     /* [6:4]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair C
                        010= Connected to Pair B
                        001= Connected to Pair A
                        000= OK  */
      unsigned int   reserved3 : 1;
                    /*! \brief 1E.C800.6:4 RO Pair C Status [2:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u0.bits_0.pairCStatus

                        

                        [9:7]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair B
                        010= Connected to Pair A
                        001= Connected to Pair D
                        000= OK

                 <B>Notes:</B>
                        This register summarizes the worst impairment on Pair C.  */
      unsigned int   pairCStatus : 3;    /* 1E.C800.6:4  RO       */
                     /* [9:7]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair B
                        010= Connected to Pair A
                        001= Connected to Pair D
                        000= OK  */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.C800.A:8 RO Pair B Status [2:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u0.bits_0.pairBStatus

                        

                        [C:A]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair A
                        010= Connected to Pair D
                        001= Connected to Pair C
                        000= OK

                 <B>Notes:</B>
                        This register summarizes the worst impairment on Pair B.  */
      unsigned int   pairBStatus : 3;    /* 1E.C800.A:8  RO       */
                     /* [C:A]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair A
                        010= Connected to Pair D
                        001= Connected to Pair C
                        000= OK  */
      unsigned int   reserved1 : 1;
                    /*! \brief 1E.C800.E:C RO Pair A Status [2:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u0.bits_0.pairAStatus

                        

                        [F:D]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair D
                        010= Connected to Pair C
                        001= Connected to Pair B
                        000= OK

                 <B>Notes:</B>
                        This register summarizes the worst impairment on Pair A.  */
      unsigned int   pairAStatus : 3;    /* 1E.C800.E:C  RO       */
                     /* [F:D]
                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        011= Connected to Pair D
                        010= Connected to Pair C
                        001= Connected to Pair B
                        000= OK  */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C801.7:0 RO Pair A Reflection #2 [7:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u1.bits_1.pairAReflection_2

                        

                        The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair A

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 1: Address 1E.C870 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairAReflection_2 : 8;    /* 1E.C801.7:0  RO       */
                     /* The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair A  */
                    /*! \brief 1E.C801.F:8 RO Pair A Reflection #1 [7:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u1.bits_1.pairAReflection_1

                        

                        The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair A

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 1: Address 1E.C870 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairAReflection_1 : 8;    /* 1E.C801.F:8  RO       */
                     /* The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair A  */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C802.F:0 RO Impulse Response MSW [F:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u2.bits_2.impulseResponseMSW

                        

                        The MSW of the memory location that contains the start of the impulse response data for the Extended Diagnostic type in 1E.C470.E:D

                 <B>Notes:</B>
                        See 1E.C470 for more information  */
      unsigned int   impulseResponseMSW : 16;    /* 1E.C802.F:0  RO       */
                     /* The MSW of the memory location that contains the start of the impulse response data for the Extended Diagnostic type in 1E.C470.E:D  */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C803.7:0 RO Pair B Reflection #2 [7:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u3.bits_3.pairBReflection_2

                        

                        The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair B

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 2: Address 1E.C871 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairBReflection_2 : 8;    /* 1E.C803.7:0  RO       */
                     /* The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair B  */
                    /*! \brief 1E.C803.F:8 RO Pair B Reflection #1 [7:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u3.bits_3.pairBReflection_1

                        

                        The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair B

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 2: Address 1E.C871 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairBReflection_1 : 8;    /* 1E.C803.F:8  RO       */
                     /* The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair B  */
    } bits_3;
    uint16_t word_3;
  } u3;
  /*! \brief Union for bit and word level access of word 4 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C804.F:0 RO Impulse Response LSW [F:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u4.bits_4.impulseResponseLSW

                        

                        The LSW of the memory location that contains the start of the impulse response data for the Extended Diagnostic type specified in 1E.C470.E:D

                 <B>Notes:</B>
                        See 1E.C470 for more information  */
      unsigned int   impulseResponseLSW : 16;    /* 1E.C804.F:0  RO       */
                     /* The LSW of the memory location that contains the start of the impulse response data for the Extended Diagnostic type specified in 1E.C470.E:D  */
    } bits_4;
    uint16_t word_4;
  } u4;
  /*! \brief Union for bit and word level access of word 5 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C805.7:0 RO Pair C Reflection #2 [7:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u5.bits_5.pairCReflection_2

                        

                        The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair C

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 3: Address 1E.C872 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairCReflection_2 : 8;    /* 1E.C805.7:0  RO       */
                     /* The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair C  */
                    /*! \brief 1E.C805.F:8 RO Pair C Reflection #1 [7:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u5.bits_5.pairCReflection_1

                        

                        The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair C

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 3: Address 1E.C872 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairCReflection_1 : 8;    /* 1E.C805.F:8  RO       */
                     /* The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair C  */
    } bits_5;
    uint16_t word_5;
  } u5;
  /*! \brief Union for bit and word level access of word 6 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C806.F:0 RO Reserved 1 [F:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u6.bits_6.reserved_1

                        

                        Reserved for future use
  */
      unsigned int   reserved_1 : 16;    /* 1E.C806.F:0  RO       */
                     /* Reserved for future use  */
    } bits_6;
    uint16_t word_6;
  } u6;
  /*! \brief Union for bit and word level access of word 7 of Global Cable Diagnostic Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C807.7:0 RO Pair D Reflection #2 [7:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u7.bits_7.pairDReflection_2

                        

                        The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair D

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 4: Address 1E.C873 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairDReflection_2 : 8;    /* 1E.C807.7:0  RO       */
                     /* The distance in meters, accurate to 1m, of the second of the four worst reflections seen by the PHY on Pair D  */
                    /*! \brief 1E.C807.F:8 RO Pair D Reflection #1 [7:0]
                        AQ_GlobalCableDiagnosticStatus_HHD.u7.bits_7.pairDReflection_1

                        

                        The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair D

                 <B>Notes:</B>
                        The distance to this reflection is given in  See Global Reserved Status 4: Address 1E.C873 . A value of zero indicates that this reflection does not exist or was not computed.  */
      unsigned int   pairDReflection_1 : 8;    /* 1E.C807.F:8  RO       */
                     /* The distance in meters, accurate to 1m, of the first of the four worst reflections seen by the PHY on Pair D  */
    } bits_7;
    uint16_t word_7;
  } u7;
} AQ_GlobalCableDiagnosticStatus_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Thermal Status: 1E.C820 */
/*                  Global Thermal Status: 1E.C820 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Thermal Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C820.F:0 RO Temperature [F:0]
                        AQ_GlobalThermalStatus_HHD.u0.bits_0.temperature

                        

                        [F:0] of temperature
                        

                 <B>Notes:</B>
                        2's complement value with the LSB representing 1/256 of a degree Celsius. This corresponds to -40 degreesC = 0xD800. Default is 70 degreesC. This is a mirror of the XENPAK register 1.A060 - 1.A061. The mirror is performed in H/W.  */
      unsigned int   temperature : 16;    /* 1E.C820.F:0  RO       */
                     /* [F:0] of temperature
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Thermal Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C821.0 RO Temperature Ready
                        AQ_GlobalThermalStatus_HHD.u1.bits_1.temperatureReady

                        

                        1 = Temperature measurement is valid
                        

                 <B>Notes:</B>
                        This is a mirror of the XENPAK register 1.A06E.  */
      unsigned int   temperatureReady : 1;    /* 1E.C821.0  RO       */
                     /* 1 = Temperature measurement is valid
                          */
      unsigned int   reserved0 : 15;
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalThermalStatus_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global General Status: 1E.C830 */
/*                  Global General Status: 1E.C830 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global General Status */
  union
  {
    struct
    {
      unsigned int   reserved1 : 11;
                    /*! \brief 1E.C830.B RO Low Temperature Warning State
                        AQ_GlobalGeneralStatus_HHD.u0.bits_0.lowTemperatureWarningState

                        

                        1 = Low temperature warning threshold has been exceeded

                 <B>Notes:</B>
                        In XENPAK mode, F/W will copy this register to the 1.A074.6 register.
                        
                          */
      unsigned int   lowTemperatureWarningState : 1;    /* 1E.C830.B  RO       */
                     /* 1 = Low temperature warning threshold has been exceeded  */
                    /*! \brief 1E.C830.C RO High Temperature Warning State
                        AQ_GlobalGeneralStatus_HHD.u0.bits_0.highTemperatureWarningState

                        

                        1 = High temperature warning threshold has been exceeded

                 <B>Notes:</B>
                        In XENPAK mode, F/W will copy this register to the 1.A074.7 register.
                        
                          */
      unsigned int   highTemperatureWarningState : 1;    /* 1E.C830.C  RO       */
                     /* 1 = High temperature warning threshold has been exceeded  */
                    /*! \brief 1E.C830.D RO Low Temperature Failure State
                        AQ_GlobalGeneralStatus_HHD.u0.bits_0.lowTemperatureFailureState

                        

                        1 = Low temperature failure threshold has been exceeded

                 <B>Notes:</B>
                        In XENPAK mode, F/W will copy this register to the 1.A070.6 register.
                        
                          */
      unsigned int   lowTemperatureFailureState : 1;    /* 1E.C830.D  RO       */
                     /* 1 = Low temperature failure threshold has been exceeded  */
                    /*! \brief 1E.C830.E RO High Temperature Failure State
                        AQ_GlobalGeneralStatus_HHD.u0.bits_0.highTemperatureFailureState

                        

                        1 = High temperature failure threshold has been exceeded

                 <B>Notes:</B>
                        In XENPAK mode, F/W will copy this register to the 1.A070.7 register.
                        
                          */
      unsigned int   highTemperatureFailureState : 1;    /* 1E.C830.E  RO       */
                     /* 1 = High temperature failure threshold has been exceeded  */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global General Status */
  union
  {
    struct
    {
      unsigned int   reserved0 : 15;
                    /*! \brief 1E.C831.F RO Processor Intensive MDIO Operation In- Progress
                        AQ_GlobalGeneralStatus_HHD.u1.bits_1.processorIntensiveMdioOperationIn_Progress

                        

                        1 = PHY microprocessor is busy with a processor-intensive MDIO operation
                        0 = Processor-intensive MDIO operation completed
                        

                 <B>Notes:</B>
                        This bit should may be used with certain processor-intensive MDIO commands (such as Loopbacks, Test Modes, Low power modes, Tx-Disable, Restart autonegotiation, Cable Diagnostics, etc.) that take longer than an MDIO cycle to complete. Upon receiving an MDIO command that involves the PHY's microprocessor, this bit is set, and when the command is completed, this bit is cleared.
                        
                        NOTE!!! This bit should be checked only after 1 ms of issuing a processor-intensive MDIO operation.
                        
                        The list of operations that set this bit are as follows:
                        
                        1.0.0, PMA Loopback
                        1.0.B, Low power mode
                        1.9.4:0, Tx Disable
                        1.84, 10G Test modes
                        1.8000.5, XENPAK Control
                        1.9000, XENPAK Rx Fault Enable
                        1.9002, XENPAK Alarm Enable
                        1.E400.F, External loopback
                        3.0.B, Low power mode
                        3.0.E, System PCS loopback
                        3.C471.5, PRBS Test
                        3.C471.6, PRBS Test
                        3.E471.5, PRBS Test 
                        3.E471.6, PRBS Test
                        4.0.B, Low power mode 
                        4.0.E, PHY-XS network loopback
                        4.C440, Output clock control, Load SERDES parameters
                        4.F802.E, System loopback 
                        4.C444.F:B, Loopback Control
                        4.C444.4:2, Packet generation
                        4.C445.C, SERDES calibration
                        7.0.9, Restart autonegotiation
                        1D.C280, 1G/100M Network loopback
                        1D.C500, 1G System loopback 
                        1D.C501, 1G / 100M Test modes
                        1E.C470.4, Cable diagnostics
                        1E.C47A.F:B, Loopback Control
                        1E.C47A.4:2, Packet generation  */
      unsigned int   processorIntensiveMdioOperationIn_Progress : 1;    /* 1E.C831.F  RO       */
                     /* 1 = PHY microprocessor is busy with a processor-intensive MDIO operation
                        0 = Processor-intensive MDIO operation completed
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
} AQ_GlobalGeneralStatus_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Pin Status: 1E.C840 */
/*                  Global Pin Status: 1E.C840 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Pin Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C840.5:0 RO LED Pullup State [5:0]
                        AQ_GlobalPinStatus_HHD.u0.bits_0.ledPullupState

                        

                        1 = LED output pin is pulled high
                        0 = LED output pin is pulled low
                        
  */
      unsigned int   ledPullupState : 6;    /* 1E.C840.5:0  RO       */
                     /* 1 = LED output pin is pulled high
                        0 = LED output pin is pulled low
                          */
      unsigned int   reserved4 : 1;
                    /*! \brief 1E.C840.7 RO Tx Enable
                        AQ_GlobalPinStatus_HHD.u0.bits_0.txEnable

                        

                        Current Value of Tx Enable pin
                        

                 <B>Notes:</B>
                        0 = Disable Transmitter  */
      unsigned int   txEnable : 1;    /* 1E.C840.7  RO       */
                     /* Current Value of Tx Enable pin
                          */
      unsigned int   reserved3 : 1;
                    /*! \brief 1E.C840.9 RO Package Connectivity
                        AQ_GlobalPinStatus_HHD.u0.bits_0.packageConnectivity

                        

                        Value of the package connection pin
                        
  */
      unsigned int   packageConnectivity : 1;    /* 1E.C840.9  RO       */
                     /* Value of the package connection pin
                          */
      unsigned int   reserved2 : 3;
                    /*! \brief 1E.C840.D RO DC_MASTER_N
                        AQ_GlobalPinStatus_HHD.u0.bits_0.dcMasterN

                        

                        Value of DC_MASTER_N pin:
                        
                        0x1 = PHY Slave Daisy Chain Boot
                        0x0 = PHY Master Daisy Chain Boot from FLASH
  */
      unsigned int   dcMasterN : 1;    /* 1E.C840.D  RO       */
                     /* Value of DC_MASTER_N pin:
                        
                        0x1 = PHY Slave Daisy Chain Boot
                        0x0 = PHY Master Daisy Chain Boot from FLASH  */
      unsigned int   reserved1 : 1;
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalPinStatus_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Daisy Chain Status: 1E.C842 */
/*                  Global Daisy Chain Status: 1E.C842 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Daisy Chain Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C842.F:0 RO Rx Daisy Chain Calculated CRC [F:0]
                        AQ_GlobalDaisyChainStatus_HHD.u0.bits_0.rxDaisyChainCalculatedCrc

                        

                        Rx Daisy Chain Calculated CRC
                        

                 <B>Notes:</B>
                        This is the calculated daisy chain CRC.  */
      unsigned int   rxDaisyChainCalculatedCrc : 16;    /* 1E.C842.F:0  RO       */
                     /* Rx Daisy Chain Calculated CRC
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalDaisyChainStatus_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Daisy Chain Hop Count: 1E.C84E */
/*                  Global Daisy Chain Hop Count: 1E.C84E */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Daisy Chain Hop Count */
  union
  {
    struct
    {
                    /*! \brief 1E.C84E.7:0 RO Daisy Chain Hop Count [7:0]
                        AQ_GlobalDaisyChainHopCount_HHD.u0.bits_0.daisyChainHopCount

                        

                        Daisy Chain Hop Count
                        

                 <B>Notes:</B>
                        This is the configured daisy chain hop count.  */
      unsigned int   daisyChainHopCount : 8;    /* 1E.C84E.7:0  RO       */
                     /* Daisy Chain Hop Count
                          */
      unsigned int   reserved0 : 8;
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalDaisyChainHopCount_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Fault Message: 1E.C850 */
/*                  Global Fault Message: 1E.C850 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Fault Message */
  union
  {
    struct
    {
                    /*! \brief 1E.C850.F:0 RO Message [F:0]
                        AQ_GlobalFaultMessage_HHD.u0.bits_0.message

                        

                        Error code describing fault

                 <B>Notes:</B>
                        Code 0x8001: Firmware not compatible with chip architecture. This fault occurs when firmware compiled for a different microprocessor core is loaded.
                        Code 0x8002: VCO calibration failed. This occurs when the main PLLs on chip fail to lock: this is not possible to trigger.
                        Code 0x8003: XAUI calibration failed. This occurs when the XAUI PLLs fail to lock: this is not possible to trigger.
                        Code 0x8005: Unexpected device ID. This occurs if the device ID programmed into the internal E-Fuse registers in not valid: this is not possible to trigger.
                        Code 0x8006: Part ID is not defined.
                        Code 0x8007: PHY thermal shutdown event
                        Code 0xC001: Illegal Instruction exception. This occurs when the processor attempts to execute an illegal instruction. To trigger this, write an illegal instruction to program memory. It's possible that the bit error check will trigger before the illegal instruction is executed.
                        Code 0xC002: Instruction Fetch Error. Internal physical address or a data error during instruction fetch: this is not possible to trigger.
                        Code 0xC003: Load Store Error. Internal physical address or data error during load store operation: this is not possible to trigger..
                        Code 0xC004 :Privileged Instruction. Attempt to execute a privileged operation without sufficient privilege: this is not possible to trigger.
                        Code 0xC005: Unaligned Load or Store. Attempt to load or store data at an address which cannot be handled due to alignment: this is not possible to trigger.
                        Code 0xC006: Instruction fetch from prohibited space: this is not possible to trigger.
                        Code 0xC007: Data load from prohibited space: this is not possible to trigger.
                        Code 0xC008: Data store into prohibited space: this is not possible to trigger.
                        Code 0xDEAD: Uncorrectable IRAM parity error
                        Code 0xDEAE: DRAM parity error
                        Code 0xDD00: CRD16 IRAM check failure (IRAM load error)
                        Code 0xFACA: E-Fuse CRC16 check failure (E-Fuse is corrupted)  */
      unsigned int   message : 16;    /* 1E.C850.F:0  RO       */
                     /* Error code describing fault  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalFaultMessage_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Cable Diagnostic Impedance: 1E.C880 */
/*                  Global Cable Diagnostic Impedance: 1E.C880 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Cable Diagnostic Impedance */
  union
  {
    struct
    {
                    /*! \brief 1E.C880.2:0 RO Pair A Reflection #4 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u0.bits_0.pairAReflection_4

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the fourth worst reflection on Pair A. The corresponding length of this reflection from the PHY is given in  See Global Power Control - Address 1E.21   */
      unsigned int   pairAReflection_4 : 3;    /* 1E.C880.2:0  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C880.3 RO Reserved 4
                        AQ_GlobalCableDiagnosticImpedance_HHD.u0.bits_0.reserved_4

                        

                        Reserved
                        
  */
      unsigned int   reserved_4 : 1;    /* 1E.C880.3  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C880.6:4 RO Pair A Reflection #3 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u0.bits_0.pairAReflection_3

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the third worst reflection on Pair A. The corresponding length of this reflection from the PHY is given in  See Global Power Control - Address 1E.21   */
      unsigned int   pairAReflection_3 : 3;    /* 1E.C880.6:4  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C880.7 RO Reserved 3
                        AQ_GlobalCableDiagnosticImpedance_HHD.u0.bits_0.reserved_3

                        

                        Reserved
                        
  */
      unsigned int   reserved_3 : 1;    /* 1E.C880.7  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C880.A:8 RO Pair A Reflection #2 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u0.bits_0.pairAReflection_2

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the second worst reflection on Pair A. The corresponding length of this reflection from the PHY is given in  See Global Power Control - Address 1E.21   */
      unsigned int   pairAReflection_2 : 3;    /* 1E.C880.A:8  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C880.B RO Reserved 2
                        AQ_GlobalCableDiagnosticImpedance_HHD.u0.bits_0.reserved_2

                        

                        Reserved
                        
  */
      unsigned int   reserved_2 : 1;    /* 1E.C880.B  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C880.E:C RO Pair A Reflection #1 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u0.bits_0.pairAReflection_1

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the first worst reflection on Pair A. The corresponding length of this reflection from the PHY is given in  See Global Power Control - Address 1E.21   */
      unsigned int   pairAReflection_1 : 3;    /* 1E.C880.E:C  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C880.F RO Reserved 1
                        AQ_GlobalCableDiagnosticImpedance_HHD.u0.bits_0.reserved_1

                        

                        Reserved
                        
  */
      unsigned int   reserved_1 : 1;    /* 1E.C880.F  RO       */
                     /* Reserved
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Cable Diagnostic Impedance */
  union
  {
    struct
    {
                    /*! \brief 1E.C881.2:0 RO Pair B Reflection #4 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u1.bits_1.pairBReflection_4

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the fourth worst reflection on Pair B. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 2 - Address 1E.32 - 1E.33   */
      unsigned int   pairBReflection_4 : 3;    /* 1E.C881.2:0  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C881.3 RO Reserved 8
                        AQ_GlobalCableDiagnosticImpedance_HHD.u1.bits_1.reserved_8

                        

                        Reserved
                        
  */
      unsigned int   reserved_8 : 1;    /* 1E.C881.3  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C881.6:4 RO Pair B Reflection #3 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u1.bits_1.pairBReflection_3

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the third worst reflection on Pair B. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 2 - Address 1E.32 - 1E.33   */
      unsigned int   pairBReflection_3 : 3;    /* 1E.C881.6:4  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C881.7 RO Reserved 7
                        AQ_GlobalCableDiagnosticImpedance_HHD.u1.bits_1.reserved_7

                        

                        Reserved
                        
  */
      unsigned int   reserved_7 : 1;    /* 1E.C881.7  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C881.A:8 RO Pair B Reflection #2 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u1.bits_1.pairBReflection_2

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the second worst reflection on Pair B. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 2 - Address 1E.32 - 1E.33   */
      unsigned int   pairBReflection_2 : 3;    /* 1E.C881.A:8  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C881.B RO Reserved 6
                        AQ_GlobalCableDiagnosticImpedance_HHD.u1.bits_1.reserved_6

                        

                        Reserved
                        
  */
      unsigned int   reserved_6 : 1;    /* 1E.C881.B  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C881.E:C RO Pair B Reflection #1 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u1.bits_1.pairBReflection_1

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the first worst reflection on Pair B. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 2 - Address 1E.32 - 1E.33   */
      unsigned int   pairBReflection_1 : 3;    /* 1E.C881.E:C  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C881.F RO Reserved 5
                        AQ_GlobalCableDiagnosticImpedance_HHD.u1.bits_1.reserved_5

                        

                        Reserved
                        
  */
      unsigned int   reserved_5 : 1;    /* 1E.C881.F  RO       */
                     /* Reserved
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Cable Diagnostic Impedance */
  union
  {
    struct
    {
                    /*! \brief 1E.C882.2:0 RO Pair C Reflection #4 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u2.bits_2.pairCReflection_4

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the fourth worst reflection on Pair C. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.33   */
      unsigned int   pairCReflection_4 : 3;    /* 1E.C882.2:0  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C882.3 RO Reserved 12
                        AQ_GlobalCableDiagnosticImpedance_HHD.u2.bits_2.reserved_12

                        

                        Reserved
                        
  */
      unsigned int   reserved_12 : 1;    /* 1E.C882.3  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C882.6:4 RO Pair C Reflection #3 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u2.bits_2.pairCReflection_3

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the third worst reflection on Pair C. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.33   */
      unsigned int   pairCReflection_3 : 3;    /* 1E.C882.6:4  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C882.7 RO Reserved 11
                        AQ_GlobalCableDiagnosticImpedance_HHD.u2.bits_2.reserved_11

                        

                        Reserved
                        
  */
      unsigned int   reserved_11 : 1;    /* 1E.C882.7  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C882.A:8 RO Pair C Reflection #2 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u2.bits_2.pairCReflection_2

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the second worst reflection on Pair C. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.33   */
      unsigned int   pairCReflection_2 : 3;    /* 1E.C882.A:8  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C882.B RO Reserved 10
                        AQ_GlobalCableDiagnosticImpedance_HHD.u2.bits_2.reserved_10

                        

                        Reserved
                        
  */
      unsigned int   reserved_10 : 1;    /* 1E.C882.B  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C882.E:C RO Pair C Reflection #1 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u2.bits_2.pairCReflection_1

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the first worst reflection on Pair C. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.33   */
      unsigned int   pairCReflection_1 : 3;    /* 1E.C882.E:C  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C882.F RO Reserved 9
                        AQ_GlobalCableDiagnosticImpedance_HHD.u2.bits_2.reserved_9

                        

                        Reserved
                        
  */
      unsigned int   reserved_9 : 1;    /* 1E.C882.F  RO       */
                     /* Reserved
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Cable Diagnostic Impedance */
  union
  {
    struct
    {
                    /*! \brief 1E.C883.2:0 RO Pair D Reflection #4 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u3.bits_3.pairDReflection_4

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the fourth worst reflection on Pair D. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.34 - 1E.35   */
      unsigned int   pairDReflection_4 : 3;    /* 1E.C883.2:0  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C883.3 RO Reserved 16
                        AQ_GlobalCableDiagnosticImpedance_HHD.u3.bits_3.reserved_16

                        

                        Reserved
                        
  */
      unsigned int   reserved_16 : 1;    /* 1E.C883.3  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C883.6:4 RO Pair D Reflection #3 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u3.bits_3.pairDReflection_3

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the third worst reflection on Pair D. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.34 - 1E.35   */
      unsigned int   pairDReflection_3 : 3;    /* 1E.C883.6:4  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C883.7 RO Reserved 15
                        AQ_GlobalCableDiagnosticImpedance_HHD.u3.bits_3.reserved_15

                        

                        Reserved
                        
  */
      unsigned int   reserved_15 : 1;    /* 1E.C883.7  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C883.A:8 RO Pair D Reflection #2 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u3.bits_3.pairDReflection_2

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the second worst reflection on Pair D. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.34 - 1E.35   */
      unsigned int   pairDReflection_2 : 3;    /* 1E.C883.A:8  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C883.B RO Reserved 14
                        AQ_GlobalCableDiagnosticImpedance_HHD.u3.bits_3.reserved_14

                        

                        Reserved
                        
  */
      unsigned int   reserved_14 : 1;    /* 1E.C883.B  RO       */
                     /* Reserved
                          */
                    /*! \brief 1E.C883.E:C RO Pair D Reflection #1 [2:0]
                        AQ_GlobalCableDiagnosticImpedance_HHD.u3.bits_3.pairDReflection_1

                        

                        111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                        

                 <B>Notes:</B>
                        The impedance of the first worst reflection on Pair D. The corresponding length of this reflection from the PHY is given in  See Global Cable Diagnostic Status 3 - Address 1E.34 - 1E.35   */
      unsigned int   pairDReflection_1 : 3;    /* 1E.C883.E:C  RO       */
                     /* 111 = Open Circuit (> 300W)
                        110 = High Mismatch (> 115W)
                        101 = Low Mismatch (< 85W)
                        100 = Short Circuit (< 30W)
                        0xx= No information available
                          */
                    /*! \brief 1E.C883.F RO Reserved 13
                        AQ_GlobalCableDiagnosticImpedance_HHD.u3.bits_3.reserved_13

                        

                        Reserved
                        
  */
      unsigned int   reserved_13 : 1;    /* 1E.C883.F  RO       */
                     /* Reserved
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_GlobalCableDiagnosticImpedance_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Status: 1E.C884 */
/*                  Global Status: 1E.C884 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C884.7:0 RO Cable Length [7:0]
                        AQ_GlobalStatus_HHD.u0.bits_0.cableLength

                        

                        The estimated length of the cable in meters
                        

                 <B>Notes:</B>
                        The length of the cable shown here is estimated from the cable diagnostic engine and should be accurate to +/-1m.  */
      unsigned int   cableLength : 8;    /* 1E.C884.7:0  RO       */
                     /* The estimated length of the cable in meters
                          */
                    /*! \brief 1E.C884.F:8 RO Reserved Status 0 [7:0]
                        AQ_GlobalStatus_HHD.u0.bits_0.reservedStatus_0

                        

                        Reserved
                        
  */
      unsigned int   reservedStatus_0 : 8;    /* 1E.C884.F:8  RO       */
                     /* Reserved
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalStatus_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Reserved Status: 1E.C885 */
/*                  Global Reserved Status: 1E.C885 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C885.3:0 ROSPD Provisioning ID [3:0]
                        AQ_GlobalReservedStatus_HHD.u0.bits_0.provisioningID

                        Provisionable Default = 0x0

                        Provisioning ID
                        

                 <B>Notes:</B>
                        Customers may receive multiple ROM images that differ only in their provisioning. This field is used to differentiate those images. This field is used in conjunction with the firmware major and minor revision numbers to uniquely identify ROM images.  */
      unsigned int   provisioningID : 4;    /* 1E.C885.3:0  ROSPD      Provisionable Default = 0x0 */
                     /* Provisioning ID
                          */
                    /*! \brief 1E.C885.7:4 ROSPD Firmware Build ID [3:0]
                        AQ_GlobalReservedStatus_HHD.u0.bits_0.firmwareBuildID

                        Provisionable Default = 0x0

                        Firmware Build ID
                        

                 <B>Notes:</B>
                        Customers may receive multiple ROM images that differ only in their provisioning. This field is used to differentiate those images. This field is used in conjunction with the firmware major and minor revision numbers to uniquely identify ROM images.  */
      unsigned int   firmwareBuildID : 4;    /* 1E.C885.7:4  ROSPD      Provisionable Default = 0x0 */
                     /* Firmware Build ID
                          */
                    /*! \brief 1E.C885.9:8 ROSPD XENPAK NVR Status [1:0]
                        AQ_GlobalReservedStatus_HHD.u0.bits_0.xenpakNvrStatus

                        Provisionable Default = 0x0

                        Status of XENPAK NVR:
                        0: NVR not enabled
                        1: Last NVR operation succeeded
                        2: Last NVR operation failed
                        3: Reserved
                        

                 <B>Notes:</B>
                        XENPAK register space is mirrored in NVR (SPI ROM). This register indicates the status of the last NVR operation.  */
      unsigned int   xenpakNvrStatus : 2;    /* 1E.C885.9:8  ROSPD      Provisionable Default = 0x0 */
                     /* Status of XENPAK NVR:
                        0: NVR not enabled
                        1: Last NVR operation succeeded
                        2: Last NVR operation failed
                        3: Reserved
                          */
                    /*! \brief 1E.C885.F:A RO Nearly Seconds MSW[5:0]
                        AQ_GlobalReservedStatus_HHD.u0.bits_0.nearlySecondsMSW

                        

                        Bits 16 to 21 of the 22 bit "Nearly Seconds" uptime counter.
                        

                 <B>Notes:</B>
                        The "Nearly Seconds" counter is incremented every 1024 milliseconds.  */
      unsigned int   nearlySecondsMSW : 6;    /* 1E.C885.F:A  RO       */
                     /* Bits 16 to 21 of the 22 bit "Nearly Seconds" uptime counter.
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C886.F:0 RO Nearly Seconds LSW [F:0]
                        AQ_GlobalReservedStatus_HHD.u1.bits_1.nearlySecondsLSW

                        

                        Bits 0 to 15 of the 22 bit "Nearly Seconds" uptime counter
                        

                 <B>Notes:</B>
                        The "Nearly Seconds" counter is incremented every 1024 milliseconds.  */
      unsigned int   nearlySecondsLSW : 16;    /* 1E.C886.F:0  RO       */
                     /* Bits 0 to 15 of the 22 bit "Nearly Seconds" uptime counter
                          */
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C887.D:0 RO Reserved Status 3 [D:0]
                        AQ_GlobalReservedStatus_HHD.u2.bits_2.reservedStatus_3

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_3 : 14;    /* 1E.C887.D:0  RO       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C887.E ROS Power Up Stall Status
                        AQ_GlobalReservedStatus_HHD.u2.bits_2.powerUpStallStatus

                        Default = 0x0

                        1 = FW is stalled at power up
                        0 = Firmware is unstalled
                        
  */
      unsigned int   powerUpStallStatus : 1;    /* 1E.C887.E  ROS      Default = 0x0 */
                     /* 1 = FW is stalled at power up
                        0 = Firmware is unstalled
                          */
                    /*! \brief 1E.C887.F ROS DTE Status
                        AQ_GlobalReservedStatus_HHD.u2.bits_2.dteStatus

                        Default = 0x0

                        1 = Need power
                        0 = Don't need power
                        
  */
      unsigned int   dteStatus : 1;    /* 1E.C887.F  ROS      Default = 0x0 */
                     /* 1 = Need power
                        0 = Don't need power
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
  /*! \brief Union for bit and word level access of word 3 of Global Reserved Status */
  union
  {
    struct
    {
                    /*! \brief 1E.C888.2:0 RO Rate [2:0]
                        AQ_GlobalReservedStatus_HHD.u3.bits_3.rate

                        Default = 0x0

                        0x7 - 0x6 = reserved
                        0x5 = 5G
                        0x4 = 2.5G
                        0x3 = 10G
                        0x2 = 1G
                        0x1 = 100M
                        0x0 = invalid
                        

                 <B>Notes:</B>
                        These bits report the selected rate for the loopback and packet generation.  */
      unsigned int   rate : 3;    /* 1E.C888.2:0  RO      Default = 0x0 */
                     /* 0x7 - 0x6 = reserved
                        0x5 = 5G
                        0x4 = 2.5G
                        0x3 = 10G
                        0x2 = 1G
                        0x1 = 100M
                        0x0 = invalid
                          */
                    /*! \brief 1E.C888.3 RO System I/F Packet Generation Status
                        AQ_GlobalReservedStatus_HHD.u3.bits_3.systemI_fPacketGenerationStatus

                        Default = 0x0

                        1 = CRPAT packet generation out 10G system interface
                        0 = No CRPAT packet generation out 10G system interface
                        

                 <B>Notes:</B>
                        Reports whether the CRPAT packet generator in the PHY outputs on the selected system interface at the selected rate.  */
      unsigned int   systemI_fPacketGenerationStatus : 1;    /* 1E.C888.3  RO      Default = 0x0 */
                     /* 1 = CRPAT packet generation out 10G system interface
                        0 = No CRPAT packet generation out 10G system interface
                          */
                    /*! \brief 1E.C888.4 RO Look-Aside Port Packet Generation Status
                        AQ_GlobalReservedStatus_HHD.u3.bits_3.look_asidePortPacketGenerationStatus

                        Default = 0x0

                        1 = CRPAT packet generation out 10G look-aside interface (KR0)
                        0 = No CRPAT packet generation out 10G look-aside interface (KR0)
                        

                 <B>Notes:</B>
                        Reports whether the CRPAT packet generator in the PHY outputs on the KR0 interface at the selected rate.  */
      unsigned int   look_asidePortPacketGenerationStatus : 1;    /* 1E.C888.4  RO      Default = 0x0 */
                     /* 1 = CRPAT packet generation out 10G look-aside interface (KR0)
                        0 = No CRPAT packet generation out 10G look-aside interface (KR0)
                          */
                    /*! \brief 1E.C888.5 RO MDI Packet Generation Status
                        AQ_GlobalReservedStatus_HHD.u3.bits_3.mdiPacketGenerationStatus

                        Default = 0x0

                        1 = CRPAT packet generation out MDI interface
                        0 = No CRPAT packet generation out MDI interface
                        

                 <B>Notes:</B>
                        Reports whether the CRPAT packet generator in the PHY outputs on the MDI interface at the selected rate.  */
      unsigned int   mdiPacketGenerationStatus : 1;    /* 1E.C888.5  RO      Default = 0x0 */
                     /* 1 = CRPAT packet generation out MDI interface
                        0 = No CRPAT packet generation out MDI interface
                          */
                    /*! \brief 1E.C888.A:6 RO Reserved Status 4 [4:0]
                        AQ_GlobalReservedStatus_HHD.u3.bits_3.reservedStatus_4

                        Default = 0x00

                        Reserved for future use
                        
  */
      unsigned int   reservedStatus_4 : 5;    /* 1E.C888.A:6  RO      Default = 0x00 */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.C888.F:B RO Loopback Status [4:0]
                        AQ_GlobalReservedStatus_HHD.u3.bits_3.loopbackStatus

                        Default = 0x00

                        0x00 = No loopback
                        0x01 = System Interface - System Loopback
                        0x02 = System Interface - System Loopback with Passthrough
                        0x03 = System Interface - Network Loopback
                        0x04 = System Interface - Network Loopback with Passthrough
                        0x05 = System Interface - Network Loopback with Passthrough and Merge
                        0x06 = System Interface - Peer-to-peer loopback
                        0x07 - 0x08 = Reserved
                        0x09 = Network Interface - System Loopback
                        0x0A = Network Interface - System Loopback with Passthrough
                        0x0B = Network Interface - Network Loopback
                        0x0C = Network Interface - Network Loopback with Passthrough
                        0x0D = Network Interface - Peer-to-peer loopback
                        0x0E - 0x0F = Reserved
                        0x10 = Cross-connect System Loopback
                        0x11 = Cross-connect Network Loopback
                        0x12 - 0x13 = Reserved
                        0x14 = Network Interface - System Loopback via Loopback Plug
                        0x15 - 0x1F = Reserved
                        

                 <B>Notes:</B>
                        These bits, in conjunction with the chip configuration and the rate (Bits 1:0), report the selected loopback.
                        
                          */
      unsigned int   loopbackStatus : 5;    /* 1E.C888.F:B  RO      Default = 0x00 */
                     /* 0x00 = No loopback
                        0x01 = System Interface - System Loopback
                        0x02 = System Interface - System Loopback with Passthrough
                        0x03 = System Interface - Network Loopback
                        0x04 = System Interface - Network Loopback with Passthrough
                        0x05 = System Interface - Network Loopback with Passthrough and Merge
                        0x06 = System Interface - Peer-to-peer loopback
                        0x07 - 0x08 = Reserved
                        0x09 = Network Interface - System Loopback
                        0x0A = Network Interface - System Loopback with Passthrough
                        0x0B = Network Interface - Network Loopback
                        0x0C = Network Interface - Network Loopback with Passthrough
                        0x0D = Network Interface - Peer-to-peer loopback
                        0x0E - 0x0F = Reserved
                        0x10 = Cross-connect System Loopback
                        0x11 = Cross-connect Network Loopback
                        0x12 - 0x13 = Reserved
                        0x14 = Network Interface - System Loopback via Loopback Plug
                        0x15 - 0x1F = Reserved
                          */
    } bits_3;
    uint16_t word_3;
  } u3;
} AQ_GlobalReservedStatus_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Alarms: 1E.CC00 */
/*                  Global Alarms: 1E.CC00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Alarms */
  union
  {
    struct
    {
                    /*! \brief 1E.CC00.0 LH Reserved Alarm D
                        AQ_GlobalAlarms_HHD.u0.bits_0.reservedAlarmD

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedAlarmD : 1;    /* 1E.CC00.0  LH       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.CC00.1 LH Reserved Alarm C
                        AQ_GlobalAlarms_HHD.u0.bits_0.reservedAlarmC

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedAlarmC : 1;    /* 1E.CC00.1  LH       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.CC00.2 LH Reserved Alarm B
                        AQ_GlobalAlarms_HHD.u0.bits_0.reservedAlarmB

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedAlarmB : 1;    /* 1E.CC00.2  LH       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.CC00.3 LH Reserved Alarm A
                        AQ_GlobalAlarms_HHD.u0.bits_0.reservedAlarmA

                        

                        Reserved for future use
                        
  */
      unsigned int   reservedAlarmA : 1;    /* 1E.CC00.3  LH       */
                     /* Reserved for future use
                          */
                    /*! \brief 1E.CC00.4 LH Device Fault
                        AQ_GlobalAlarms_HHD.u0.bits_0.deviceFault

                        

                        1 = Fault

                 <B>Notes:</B>
                        When set, a fault has been detected by the uP and the associated 16 bit error code is visible in  See Global Configuration Fault Message: Address 1E.C850   */
      unsigned int   deviceFault : 1;    /* 1E.CC00.4  LH       */
                     /* 1 = Fault  */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.CC00.6 LH Reset completed
                        AQ_GlobalAlarms_HHD.u0.bits_0.resetCompleted

                        

                        1 = Chip wide reset completed

                 <B>Notes:</B>
                        This bit is set by the microprocessor when it has completed it's initialization sequence. This bit is mirrored in 1.CC02.0  */
      unsigned int   resetCompleted : 1;    /* 1E.CC00.6  LH       */
                     /* 1 = Chip wide reset completed  */
      unsigned int   reserved1 : 4;
                    /*! \brief 1E.CC00.B LH Low Temperature Warning
                        AQ_GlobalAlarms_HHD.u0.bits_0.lowTemperatureWarning

                        

                        1 = Low temperature warning threshold has been exceeded
                        

                 <B>Notes:</B>
                        
                        
                        
                        
                        These bits mirror the matching bit in 1.A070 and 1.A074. These bits are driven by Bits E:B in  See Global General Status 1: Address 1E.C830 .  */
      unsigned int   lowTemperatureWarning : 1;    /* 1E.CC00.B  LH       */
                     /* 1 = Low temperature warning threshold has been exceeded
                          */
                    /*! \brief 1E.CC00.C LH High Temperature Warning
                        AQ_GlobalAlarms_HHD.u0.bits_0.highTemperatureWarning

                        

                        1 = High temperature warning threshold has been exceeded
                        

                 <B>Notes:</B>
                        
                        
                        
                        
                        These bits mirror the matching bit in 1.A070 and 1.A074. These bits are driven by Bits E:B in  See Global General Status 1: Address 1E.C830 .  */
      unsigned int   highTemperatureWarning : 1;    /* 1E.CC00.C  LH       */
                     /* 1 = High temperature warning threshold has been exceeded
                          */
                    /*! \brief 1E.CC00.D LH Low Temperature Failure
                        AQ_GlobalAlarms_HHD.u0.bits_0.lowTemperatureFailure

                        

                        1 = Low temperature failure threshold has been exceeded
                        

                 <B>Notes:</B>
                        
                        
                        
                        
                        These bits mirror the matching bit in 1.A070 and 1.A074. These bits are driven by Bits E:B in  See Global General Status 1: Address 1E.C830 .  */
      unsigned int   lowTemperatureFailure : 1;    /* 1E.CC00.D  LH       */
                     /* 1 = Low temperature failure threshold has been exceeded
                          */
                    /*! \brief 1E.CC00.E LH High Temperature Failure
                        AQ_GlobalAlarms_HHD.u0.bits_0.highTemperatureFailure

                        

                        1 = High temperature failure threshold has been exceeded
                        

                 <B>Notes:</B>
                        
                        
                        
                        
                        These bits mirror the matching bit in 1.A070 and 1.A074. These bits are driven by Bits E:B in  See Global General Status 1: Address 1E.C830 .  */
      unsigned int   highTemperatureFailure : 1;    /* 1E.CC00.E  LH       */
                     /* 1 = High temperature failure threshold has been exceeded
                          */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Alarms */
  union
  {
    struct
    {
                    /*! \brief 1E.CC01.0 LH Diagnostic Alarm
                        AQ_GlobalAlarms_HHD.u1.bits_1.diagnosticAlarm

                        

                        1 = Alarm triggered by a write to 1E.C470.7
                        

                 <B>Notes:</B>
                        A diagnostic alarm use to test system alarm circuitry.  */
      unsigned int   diagnosticAlarm : 1;    /* 1E.CC01.0  LH       */
                     /* 1 = Alarm triggered by a write to 1E.C470.7
                          */
      unsigned int   reserved1 : 6;
                    /*! \brief 1E.CC01.7 LH MDIO Command Handling Overflow
                        AQ_GlobalAlarms_HHD.u1.bits_1.mdioCommandHandlingOverflow

                        

                        1 = PHY was issued more MDIO requests than it could service in it's request buffer
                        

                 <B>Notes:</B>
                        Assertion of this bit means that more MDIO commands were issued than FW could handle.  */
      unsigned int   mdioCommandHandlingOverflow : 1;    /* 1E.CC01.7  LH       */
                     /* 1 = PHY was issued more MDIO requests than it could service in it's request buffer
                          */
                    /*! \brief 1E.CC01.9:8 LH Reserved Alarms [1:0]
                        AQ_GlobalAlarms_HHD.u1.bits_1.reservedAlarms

                        

                        Reserved
                        
                        
  */
      unsigned int   reservedAlarms : 2;    /* 1E.CC01.9:8  LH       */
                     /* Reserved
                        
                          */
                    /*! \brief 1E.CC01.A LH Fast Link Drop
                        AQ_GlobalAlarms_HHD.u1.bits_1.fastLinkDrop

                        

                        1 = PHY has entered link recovery state
                        

                 <B>Notes:</B>
                        This alarm is asserted before entering PHY link recovery state. This alarm can be used as an early sign for a link drop in case of unsuccessful  link recovery.  */
      unsigned int   fastLinkDrop : 1;    /* 1E.CC01.A  LH       */
                     /* 1 = PHY has entered link recovery state
                          */
                    /*! \brief 1E.CC01.B LH DTE Status Change
                        AQ_GlobalAlarms_HHD.u1.bits_1.dteStatusChange

                        

                        1 = DTE status change
                        

                 <B>Notes:</B>
                        Change in 1E.C887[F].  */
      unsigned int   dteStatusChange : 1;    /* 1E.CC01.B  LH       */
                     /* 1 = DTE status change
                          */
                    /*! \brief 1E.CC01.C LH IP Phone Detect
                        AQ_GlobalAlarms_HHD.u1.bits_1.ipPhoneDetect

                        

                        1 = IP Phone Detect
                        

                 <B>Notes:</B>
                        Assertion of this bit means that the presence of an IP Phone has been detected.  */
      unsigned int   ipPhoneDetect : 1;    /* 1E.CC01.C  LH       */
                     /* 1 = IP Phone Detect
                          */
                    /*! \brief 1E.CC01.D RO XENPAK Alarm
                        AQ_GlobalAlarms_HHD.u1.bits_1.xenpakAlarm

                        

                        1 = XENPAK Alarm
                        
  */
      unsigned int   xenpakAlarm : 1;    /* 1E.CC01.D  RO       */
                     /* 1 = XENPAK Alarm
                          */
                    /*! \brief 1E.CC01.E LH Smart Power-Down Entered
                        AQ_GlobalAlarms_HHD.u1.bits_1.smartPower_downEntered

                        

                        1 = Smart Power-Down State Entered
                        

                 <B>Notes:</B>
                        When this bit is set, it indicates that the Smart Power-Down state was entered  */
      unsigned int   smartPower_downEntered : 1;    /* 1E.CC01.E  LH       */
                     /* 1 = Smart Power-Down State Entered
                          */
      unsigned int   reserved0 : 1;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Alarms */
  union
  {
    struct
    {
                    /*! \brief 1E.CC02.0 LH Watchdog Timer Alarm
                        AQ_GlobalAlarms_HHD.u2.bits_2.watchdogTimerAlarm

                        

                        1 = Watchdog timer alarm
                        
  */
      unsigned int   watchdogTimerAlarm : 1;    /* 1E.CC02.0  LH       */
                     /* 1 = Watchdog timer alarm
                          */
                    /*! \brief 1E.CC02.1 LH MDIO Timeout Error
                        AQ_GlobalAlarms_HHD.u2.bits_2.mdioTimeoutError

                        

                        1 = MDIO timeout detected
                        
  */
      unsigned int   mdioTimeoutError : 1;    /* 1E.CC02.1  LH       */
                     /* 1 = MDIO timeout detected
                          */
                    /*! \brief 1E.CC02.2 LH MDIO MMD Error
                        AQ_GlobalAlarms_HHD.u2.bits_2.mdioMMD_Error

                        

                        1 = Invalid MMD address detected
                        
  */
      unsigned int   mdioMMD_Error : 1;    /* 1E.CC02.2  LH       */
                     /* 1 = Invalid MMD address detected
                          */
      unsigned int   reserved2 : 2;
                    /*! \brief 1E.CC02.5 LRF Tx Enable State Change
                        AQ_GlobalAlarms_HHD.u2.bits_2.txEnableStateChange

                        

                        1 = TX_EN pin has changed state
                        
  */
      unsigned int   txEnableStateChange : 1;    /* 1E.CC02.5  LRF       */
                     /* 1 = TX_EN pin has changed state
                          */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.CC02.9:8 LH uP IRAM Parity Error [1:0]
                        AQ_GlobalAlarms_HHD.u2.bits_2.upIramParityError

                        

                        1 = Parity error detected in the uP IRAM
                        

                 <B>Notes:</B>
                        Bit 0 indicates a parity error was detected in the uP IRAM but was corrected.
                        Bit 1 indicates a multiple parity errors were detected in the uP IRAM and could not be corrected.
                        The uP IRAM is protected with ECC.  */
      unsigned int   upIramParityError : 2;    /* 1E.CC02.9:8  LH       */
                     /* 1 = Parity error detected in the uP IRAM
                          */
                    /*! \brief 1E.CC02.A LH uP DRAM Parity Error
                        AQ_GlobalAlarms_HHD.u2.bits_2.upDramParityError

                        

                        1 = Parity error detected in the uP DRAM
                        
  */
      unsigned int   upDramParityError : 1;    /* 1E.CC02.A  LH       */
                     /* 1 = Parity error detected in the uP DRAM
                          */
      unsigned int   reserved0 : 3;
                    /*! \brief 1E.CC02.E LH Mailbox Operation: Complete
                        AQ_GlobalAlarms_HHD.u2.bits_2.mailboxOperation_Complete

                        

                        1 = Mailbox operation is complete
                        

                 <B>Notes:</B>
                        Mailbox interface is ready interrupt for registers  See Global Vendor Specific Control - Address 1E.C000  -  See Global Vendor Specific Provisioning 5 - Address 1E.C404   */
      unsigned int   mailboxOperation_Complete : 1;    /* 1E.CC02.E  LH       */
                     /* 1 = Mailbox operation is complete
                          */
                    /*! \brief 1E.CC02.F LH NVR Operation Complete
                        AQ_GlobalAlarms_HHD.u2.bits_2.nvrOperationComplete

                        

                        1 = NVR operation is complete
                        

                 <B>Notes:</B>
                        NVR interface is ready interrupt for registers  See Global NVR Interface 1: Address 1E.100  -  See Global NVR Provisioning Data MSW - Address 1E.17 .  */
      unsigned int   nvrOperationComplete : 1;    /* 1E.CC02.F  LH       */
                     /* 1 = NVR operation is complete
                          */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_GlobalAlarms_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Interrupt Mask: 1E.D400 */
/*                  Global Interrupt Mask: 1E.D400 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Interrupt Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.D400.0 R/WPD Reserved Alarm D Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.reservedAlarmDMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmDMask : 1;    /* 1E.D400.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D400.1 R/WPD Reserved Alarm C Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.reservedAlarmCMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmCMask : 1;    /* 1E.D400.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D400.2 R/WPD Reserved Alarm B Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.reservedAlarmBMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmBMask : 1;    /* 1E.D400.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D400.3 R/WPD Reserved Alarm A Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.reservedAlarmAMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmAMask : 1;    /* 1E.D400.3  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D400.4 R/WPD Device Fault Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.deviceFaultMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   deviceFaultMask : 1;    /* 1E.D400.4  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved2 : 1;
                    /*! \brief 1E.D400.6 R/WPD Reset completed Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.resetCompletedMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   resetCompletedMask : 1;    /* 1E.D400.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved1 : 4;
                    /*! \brief 1E.D400.B R/WPD Low Temperature Warning Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.lowTemperatureWarningMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   lowTemperatureWarningMask : 1;    /* 1E.D400.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D400.C R/WPD High Temperature Warning Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.highTemperatureWarningMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   highTemperatureWarningMask : 1;    /* 1E.D400.C  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D400.D R/WPD Low Temperature Failure Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.lowTemperatureFailureMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   lowTemperatureFailureMask : 1;    /* 1E.D400.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D400.E R/WPD High Temperature Failure Mask
                        AQ_GlobalInterruptMask_HHD.u0.bits_0.highTemperatureFailureMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   highTemperatureFailureMask : 1;    /* 1E.D400.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved0 : 1;
    } bits_0;
    uint16_t word_0;
  } u0;
  /*! \brief Union for bit and word level access of word 1 of Global Interrupt Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.D401.0 R/WPD Diagnostic Alarm Mask
                        AQ_GlobalInterruptMask_HHD.u1.bits_1.diagnosticAlarmMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   diagnosticAlarmMask : 1;    /* 1E.D401.0  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
      unsigned int   reserved1 : 6;
                    /*! \brief 1E.D401.7 R/WPD MDIO Command Handling Overflow Mask
                        AQ_GlobalInterruptMask_HHD.u1.bits_1.mdioCommandHandlingOverflowMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   mdioCommandHandlingOverflowMask : 1;    /* 1E.D401.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.9:8 R/WPD Reserved Alarms Mask [1:0]
                        AQ_GlobalInterruptMask_HHD.u1.bits_1.reservedAlarmsMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   reservedAlarmsMask : 2;    /* 1E.D401.9:8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.A R/WPD Fast Link Drop Mask
                        AQ_GlobalInterruptMask_HHD.u1.bits_1.fastLinkDropMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   fastLinkDropMask : 1;    /* 1E.D401.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.B R/WPD DTE Status Change Mask
                        AQ_GlobalInterruptMask_HHD.u1.bits_1.dteStatusChangeMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   dteStatusChangeMask : 1;    /* 1E.D401.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.C R/WPD IP Phone Detect Mask
                        AQ_GlobalInterruptMask_HHD.u1.bits_1.ipPhoneDetectMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   ipPhoneDetectMask : 1;    /* 1E.D401.C  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D401.D R/WPD XENPAK Alarm Mask
                        AQ_GlobalInterruptMask_HHD.u1.bits_1.xenpakAlarmMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   xenpakAlarmMask : 1;    /* 1E.D401.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D401.E R/WPD Smart Power-Down Entered Mask
                        AQ_GlobalInterruptMask_HHD.u1.bits_1.smartPower_downEnteredMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   smartPower_downEnteredMask : 1;    /* 1E.D401.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
      unsigned int   reserved0 : 1;
    } bits_1;
    uint16_t word_1;
  } u1;
  /*! \brief Union for bit and word level access of word 2 of Global Interrupt Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.D402.0 R/WPD Watchdog Timer Alarm Mask
                        AQ_GlobalInterruptMask_HHD.u2.bits_2.watchdogTimerAlarmMask

                        Provisionable Default = 0x1

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   watchdogTimerAlarmMask : 1;    /* 1E.D402.0  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D402.1 R/WPD MDIO Timeout Error Mask
                        AQ_GlobalInterruptMask_HHD.u2.bits_2.mdioTimeoutErrorMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   mdioTimeoutErrorMask : 1;    /* 1E.D402.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D402.2 R/WPD MDIO MMD Error Mask
                        AQ_GlobalInterruptMask_HHD.u2.bits_2.mdioMMD_ErrorMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   mdioMMD_ErrorMask : 1;    /* 1E.D402.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved2 : 2;
                    /*! \brief 1E.D402.5 R/WPD Tx Enable State Change Mask
                        AQ_GlobalInterruptMask_HHD.u2.bits_2.txEnableStateChangeMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   txEnableStateChangeMask : 1;    /* 1E.D402.5  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved1 : 2;
                    /*! \brief 1E.D402.9:8 R/WPD uP IRAM Parity Error Mask [1:0]
                        AQ_GlobalInterruptMask_HHD.u2.bits_2.upIramParityErrorMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   upIramParityErrorMask : 2;    /* 1E.D402.9:8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
                    /*! \brief 1E.D402.A R/WPD uP DRAM Parity Error Mask
                        AQ_GlobalInterruptMask_HHD.u2.bits_2.upDramParityErrorMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
                        
  */
      unsigned int   upDramParityErrorMask : 1;    /* 1E.D402.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation
                          */
      unsigned int   reserved0 : 3;
                    /*! \brief 1E.D402.E R/WPD Mailbox Operation Complete Mask
                        AQ_GlobalInterruptMask_HHD.u2.bits_2.mailboxOperationCompleteMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation

                 <B>Notes:</B>
                        Mailbox interface is ready interrupt for registers  See Global Vendor Specific Control - Address 1E.C000  -  See Global Vendor Specific Provisioning 5 - Address 1E.C404   */
      unsigned int   mailboxOperationCompleteMask : 1;    /* 1E.D402.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.D402.F R/WPD NVR Operation Complete Mask
                        AQ_GlobalInterruptMask_HHD.u2.bits_2.nvrOperationCompleteMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation

                 <B>Notes:</B>
                        NVR interface is ready interrupt for registers  See Global NVR Interface 1: Address 1E.100  -  See Global NVR Provisioning Data MSW - Address 1E.17   */
      unsigned int   nvrOperationCompleteMask : 1;    /* 1E.D402.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
    } bits_2;
    uint16_t word_2;
  } u2;
} AQ_GlobalInterruptMask_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Chip-Wide Standard Interrupt Flags: 1E.FC00 */
/*                  Global Chip-Wide Standard Interrupt Flags: 1E.FC00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Chip-Wide Standard Interrupt Flags */
  union
  {
    struct
    {
                    /*! \brief 1E.FC00.0 RO All Vendor Alarms Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.allVendorAlarmsInterrupt

                        

                        1 = Interrupt in all vendor alarms
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Global Chip-Wide LASI Vendor Interrupt Flags: Address 1E.FC01 ) and the corresponding mask register. ( See Global Interrupt LASI Mask: Address 1E.FF01 )  */
      unsigned int   allVendorAlarmsInterrupt : 1;    /* 1E.FC00.0  RO       */
                     /* 1 = Interrupt in all vendor alarms
                          */
      unsigned int   reserved0 : 5;
                    /*! \brief 1E.FC00.6 RO GbE Standard Alarms Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.gbeStandardAlarmsInterrupt

                        

                        1 = Interrupt in GbE standard alarms
                        

                 <B>Notes:</B>
                        An interrupt was generated from the TGE core.  */
      unsigned int   gbeStandardAlarmsInterrupt : 1;    /* 1E.FC00.6  RO       */
                     /* 1 = Interrupt in GbE standard alarms
                          */
                    /*! \brief 1E.FC00.7 RO Autonegotiation Standard Alarms 2 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.autonegotiationStandardAlarms_2Interrupt

                        

                        1 = Interrupt in Autonegotiation standard alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Autonegotiation 10GBASE-T Status Register - Address 7.21 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 8 - Address 4.A008 )  */
      unsigned int   autonegotiationStandardAlarms_2Interrupt : 1;    /* 1E.FC00.7  RO       */
                     /* 1 = Interrupt in Autonegotiation standard alarms 2
                          */
                    /*! \brief 1E.FC00.8 RO Autonegotiation Standard Alarms 1 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.autonegotiationStandardAlarms_1Interrupt

                        

                        1 = Interrupt in Autonegotiation standard alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See PHY XS Standard Status 1 - Address 4.1 ) and the corresponding mask register. ( See Autonegotiation Standard LASI Interrupt Mask 1: Address 7.D000 )  */
      unsigned int   autonegotiationStandardAlarms_1Interrupt : 1;    /* 1E.FC00.8  RO       */
                     /* 1 = Interrupt in Autonegotiation standard alarms 1
                          */
                    /*! \brief 1E.FC00.9 RO PHY XS Standard Alarms 2 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.phyXS_StandardAlarms_2Interrupt

                        

                        1 = Interrupt in PHY XS standard alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from the status register ( See PHY XS Standard Vendor Devices in Package - Address 4.8 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 8 - Address 4.A008 )  */
      unsigned int   phyXS_StandardAlarms_2Interrupt : 1;    /* 1E.FC00.9  RO       */
                     /* 1 = Interrupt in PHY XS standard alarms 2
                          */
                    /*! \brief 1E.FC00.A RO PHY XS Standard Alarms 1 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.phyXS_StandardAlarms_1Interrupt

                        

                        1 = Interrupt in PHY XS standard alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from the status register ( See PHY XS Standard Status 1 - Address 4.1 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 2 - Address 4.A001 )  */
      unsigned int   phyXS_StandardAlarms_1Interrupt : 1;    /* 1E.FC00.A  RO       */
                     /* 1 = Interrupt in PHY XS standard alarms 1
                          */
                    /*! \brief 1E.FC00.B RO PCS Standard Alarm 3 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.pcsStandardAlarm_3Interrupt

                        

                        1 = Interrupt in PCS standard alarms 3
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See PCS 10GBASE-T Status 2 - Address 3.21 ) and the corresponding mask register. ( See PCS Standard Interrupt Mask 1 - Address 3.E021 )  */
      unsigned int   pcsStandardAlarm_3Interrupt : 1;    /* 1E.FC00.B  RO       */
                     /* 1 = Interrupt in PCS standard alarms 3
                          */
                    /*! \brief 1E.FC00.C RO PCS Standard Alarm 2 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.pcsStandardAlarm_2Interrupt

                        

                        1 = Interrupt in PCS standard alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See PHY XS Standard Vendor Devices in Package - Address 4.8 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 8 - Address 4.A008 )  */
      unsigned int   pcsStandardAlarm_2Interrupt : 1;    /* 1E.FC00.C  RO       */
                     /* 1 = Interrupt in PCS standard alarms 2
                          */
                    /*! \brief 1E.FC00.D RO PCS Standard Alarm 1 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.pcsStandardAlarm_1Interrupt

                        

                        1 = Interrupt in PCS standard alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See PHY XS Standard Status 1 - Address 4.1 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 2 - Address 4.A001 )  */
      unsigned int   pcsStandardAlarm_1Interrupt : 1;    /* 1E.FC00.D  RO       */
                     /* 1 = Interrupt in PCS standard alarms 1
                          */
                    /*! \brief 1E.FC00.E RO PMA Standard Alarm 2 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.pmaStandardAlarm_2Interrupt

                        

                        1 = Interrupt in PMA standard alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from either bit 1.8.B or 1.8.A.
                        An interrupt was generated from status register ( See PHY XS Standard Vendor Devices in Package - Address 4.8 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 8 - Address 4.A008 )  */
      unsigned int   pmaStandardAlarm_2Interrupt : 1;    /* 1E.FC00.E  RO       */
                     /* 1 = Interrupt in PMA standard alarms 2
                          */
                    /*! \brief 1E.FC00.F RO PMA Standard Alarm 1 Interrupt
                        AQ_GlobalChip_wideStandardInterruptFlags_HHD.u0.bits_0.pmaStandardAlarm_1Interrupt

                        

                        1 = Interrupt in PMA standard alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from bit 1.1.2.
                        An interrupt was generated from status register ( See PHY XS Standard Status 1 - Address 4.1 ) and the corresponding mask register. ( See PHY XS Standard Transmit XAUI Rx Interrupt Mask 2 - Address 4.A001 )  */
      unsigned int   pmaStandardAlarm_1Interrupt : 1;    /* 1E.FC00.F  RO       */
                     /* 1 = Interrupt in PMA standard alarms 1
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalChip_wideStandardInterruptFlags_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Chip-Wide Vendor Interrupt Flags: 1E.FC01 */
/*                  Global Chip-Wide Vendor Interrupt Flags: 1E.FC01 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Chip-Wide Vendor Interrupt Flags */
  union
  {
    struct
    {
                    /*! \brief 1E.FC01.0 RO Global Alarms 3 Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_HHD.u0.bits_0.globalAlarms_3Interrupt

                        

                        1 = Interrupt in Global alarms 3
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Global Vendor Alarms 2: Address 1E.CC01 ) and the corresponding mask register. ( See Global LASI Interrupt Mask 2: Address 1E.D401 )  */
      unsigned int   globalAlarms_3Interrupt : 1;    /* 1E.FC01.0  RO       */
                     /* 1 = Interrupt in Global alarms 3
                          */
                    /*! \brief 1E.FC01.1 RO Global Alarms 2 Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_HHD.u0.bits_0.globalAlarms_2Interrupt

                        

                        1 = Interrupt in Global alarms 2
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Global Alarms 2: Address 1E.CC01 ) and the corresponding mask register. ( See Global LASI Interrupt Mask 2: Address 1E.D401 )  */
      unsigned int   globalAlarms_2Interrupt : 1;    /* 1E.FC01.1  RO       */
                     /* 1 = Interrupt in Global alarms 2
                          */
                    /*! \brief 1E.FC01.2 RO Global Alarms 1 Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_HHD.u0.bits_0.globalAlarms_1Interrupt

                        

                        1 = Interrupt in Global alarms 1
                        

                 <B>Notes:</B>
                        An interrupt was generated from status register ( See Global Vendor Alarms 1 - Address 1E.CC00 ) and the corresponding mask register. ( See Global Vendor Interrupt Mask - Address 1E.D400 )  */
      unsigned int   globalAlarms_1Interrupt : 1;    /* 1E.FC01.2  RO       */
                     /* 1 = Interrupt in Global alarms 1
                          */
      unsigned int   reserved0 : 8;
                    /*! \brief 1E.FC01.B RO GbE Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_HHD.u0.bits_0.gbeVendorAlarmInterrupt

                        

                        1 = Interrupt in GbE vendor specific alarm
                        

                 <B>Notes:</B>
                        A GbE alarm was generated. ( See GbE PHY Vendor Global LASI Interrupt Flags 1: Address 1D.FC00 )  */
      unsigned int   gbeVendorAlarmInterrupt : 1;    /* 1E.FC01.B  RO       */
                     /* 1 = Interrupt in GbE vendor specific alarm
                          */
                    /*! \brief 1E.FC01.C RO Autonegotiation Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_HHD.u0.bits_0.autonegotiationVendorAlarmInterrupt

                        

                        1 = Interrupt in Autonegotiation vendor specific alarm
                        

                 <B>Notes:</B>
                        An Autonegotiation alarm was generated. ( See Autonegotiation Vendor Global LASI Interrupt Flags 1: Address 7.FC00 )  */
      unsigned int   autonegotiationVendorAlarmInterrupt : 1;    /* 1E.FC01.C  RO       */
                     /* 1 = Interrupt in Autonegotiation vendor specific alarm
                          */
                    /*! \brief 1E.FC01.D RO PHY XS Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_HHD.u0.bits_0.phyXS_VendorAlarmInterrupt

                        

                        1 = Interrupt in PHY XS vendor specific alarm
                        

                 <B>Notes:</B>
                        A PHY XS alarm was generated. ( See PHY XS Vendor Global LASI Interrupt Flags 1: Address 4.FC00 )  */
      unsigned int   phyXS_VendorAlarmInterrupt : 1;    /* 1E.FC01.D  RO       */
                     /* 1 = Interrupt in PHY XS vendor specific alarm
                          */
                    /*! \brief 1E.FC01.E RO PCS Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_HHD.u0.bits_0.pcsVendorAlarmInterrupt

                        

                        1 = Interrupt in PCS vendor specific alarm
                        

                 <B>Notes:</B>
                        A PCS alarm was generated. ( See PHY XS Vendor Global Interrupt Flags 1- Address 4.F800 )  */
      unsigned int   pcsVendorAlarmInterrupt : 1;    /* 1E.FC01.E  RO       */
                     /* 1 = Interrupt in PCS vendor specific alarm
                          */
                    /*! \brief 1E.FC01.F RO PMA Vendor Alarm Interrupt
                        AQ_GlobalChip_wideVendorInterruptFlags_HHD.u0.bits_0.pmaVendorAlarmInterrupt

                        

                        1 = Interrupt in PMA vendor specific alarm
                        

                 <B>Notes:</B>
                        A PMA alarm was generated. ( See PHY XS Vendor Global Interrupt Flags 1- Address 4.F800 )  */
      unsigned int   pmaVendorAlarmInterrupt : 1;    /* 1E.FC01.F  RO       */
                     /* 1 = Interrupt in PMA vendor specific alarm
                          */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalChip_wideVendorInterruptFlags_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Interrupt Chip-Wide Standard Mask: 1E.FF00 */
/*                  Global Interrupt Chip-Wide Standard Mask: 1E.FF00 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Interrupt Chip-Wide Standard Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.FF00.0 R/WPD All Vendor Alarms Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.allVendorAlarmsInterruptMask

                        Provisionable Default = 0x1

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   allVendorAlarmsInterruptMask : 1;    /* 1E.FF00.0  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved0 : 5;
                    /*! \brief 1E.FF00.6 R/WPD Gbe Standard Alarms Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.gbeStandardAlarmsInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   gbeStandardAlarmsInterruptMask : 1;    /* 1E.FF00.6  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.7 R/WPD Autonegotiation Standard Alarms 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.autonegotiationStandardAlarms_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   autonegotiationStandardAlarms_2InterruptMask : 1;    /* 1E.FF00.7  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.8 R/WPD Autonegotiation Standard Alarms 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.autonegotiationStandardAlarms_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   autonegotiationStandardAlarms_1InterruptMask : 1;    /* 1E.FF00.8  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.9 R/WPD PHY XS Standard Alarms 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.phyXS_StandardAlarms_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   phyXS_StandardAlarms_2InterruptMask : 1;    /* 1E.FF00.9  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.A R/WPD PHY XS Standard Alarms 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.phyXS_StandardAlarms_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   phyXS_StandardAlarms_1InterruptMask : 1;    /* 1E.FF00.A  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.B R/WPD PCS Standard Alarm 3 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.pcsStandardAlarm_3InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pcsStandardAlarm_3InterruptMask : 1;    /* 1E.FF00.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.C R/WPD PCS Standard Alarm 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.pcsStandardAlarm_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pcsStandardAlarm_2InterruptMask : 1;    /* 1E.FF00.C  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.D R/WPD PCS Standard Alarm 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.pcsStandardAlarm_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pcsStandardAlarm_1InterruptMask : 1;    /* 1E.FF00.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.E R/WPD PMA Standard Alarm 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.pmaStandardAlarm_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pmaStandardAlarm_2InterruptMask : 1;    /* 1E.FF00.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF00.F R/WPD PMA Standard Alarm 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideStandardMask_HHD.u0.bits_0.pmaStandardAlarm_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pmaStandardAlarm_1InterruptMask : 1;    /* 1E.FF00.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalInterruptChip_wideStandardMask_HHD;


/*---------------------------------------------------------------------------------*/
/*! \brief                Global Interrupt Chip-Wide Vendor Mask: 1E.FF01 */
/*                  Global Interrupt Chip-Wide Vendor Mask: 1E.FF01 */
/*---------------------------------------------------------------------------------*/
typedef struct 
{
  /*! \brief Union for bit and word level access of word 0 of Global Interrupt Chip-Wide Vendor Mask */
  union
  {
    struct
    {
                    /*! \brief 1E.FF01.0 R/WPD Global Alarms 3 Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_HHD.u0.bits_0.globalAlarms_3InterruptMask

                        Provisionable Default = 0x1

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   globalAlarms_3InterruptMask : 1;    /* 1E.FF01.0  R/WPD      Provisionable Default = 0x1 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.1 R/WPD Global Alarms 2 Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_HHD.u0.bits_0.globalAlarms_2InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   globalAlarms_2InterruptMask : 1;    /* 1E.FF01.1  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.2 R/WPD Global Alarms 1 Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_HHD.u0.bits_0.globalAlarms_1InterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   globalAlarms_1InterruptMask : 1;    /* 1E.FF01.2  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
      unsigned int   reserved0 : 8;
                    /*! \brief 1E.FF01.B R/WPD GbE Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_HHD.u0.bits_0.gbeVendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   gbeVendorAlarmInterruptMask : 1;    /* 1E.FF01.B  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.C R/WPD Autonegotiation Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_HHD.u0.bits_0.autonegotiationVendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   autonegotiationVendorAlarmInterruptMask : 1;    /* 1E.FF01.C  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.D R/WPD PHY XS Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_HHD.u0.bits_0.phyXS_VendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   phyXS_VendorAlarmInterruptMask : 1;    /* 1E.FF01.D  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.E R/WPD PCS Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_HHD.u0.bits_0.pcsVendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pcsVendorAlarmInterruptMask : 1;    /* 1E.FF01.E  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
                    /*! \brief 1E.FF01.F R/WPD PMA Vendor Alarm Interrupt Mask
                        AQ_GlobalInterruptChip_wideVendorMask_HHD.u0.bits_0.pmaVendorAlarmInterruptMask

                        Provisionable Default = 0x0

                        1 = Enable interrupt generation
                        0 = Disable interrupt generation
  */
      unsigned int   pmaVendorAlarmInterruptMask : 1;    /* 1E.FF01.F  R/WPD      Provisionable Default = 0x0 */
                     /* 1 = Enable interrupt generation
                        0 = Disable interrupt generation  */
    } bits_0;
    uint16_t word_0;
  } u0;
} AQ_GlobalInterruptChip_wideVendorMask_HHD;

#endif
/*@}*/
/*@}*/
