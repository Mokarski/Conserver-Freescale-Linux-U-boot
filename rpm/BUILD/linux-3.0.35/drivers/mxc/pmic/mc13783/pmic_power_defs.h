/*
 * Copyright 2004-2011 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

/*!
 * @file mc13783/pmic_power_defs.h
 * @brief This is the internal header define of PMIC(mc13783) Power driver.
 *
 * @ingroup PMIC_POWER
 */

/*
 * Includes
 */

#ifndef __MC13783_POWER_DEFS_H__
#define __MC13783_POWER_DEFS_H__

/*
 * Power Up Mode Sense bits
 */

#define         STATE_ICTEST_MASK       0x000001

#define         STATE_CLKSEL_BIT        1
#define         STATE_CLKSEL_MASK       0x000002

#define         STATE_PUMS1_BITS        2
#define         STATE_PUMS1_MASK        0x00000C

#define         STATE_PUMS2_BITS        4
#define         STATE_PUMS2_MASK        0x000030

#define         STATE_PUMS3_BITS        6
#define         STATE_PUMS3_MASK        0x0000C0

#define         STATE_CHRGM1_BITS       8
#define         STATE_CHRGM1_MASK       0x000300

#define         STATE_CHRGM2_BITS       10
#define         STATE_CHRGM2_MASK       0x000C00

#define         STATE_UMOD_BITS         12
#define         STATE_UMOD_MASK         0x003000

#define         STATE_USBEN_BIT         14
#define         STATE_USBEN_MASK        0x004000

#define         STATE_SW1A_J_B_BIT      15
#define         STATE_SW1A_J_B_MASK     0x008000

#define         STATE_SW2A_J_B_BIT      16
#define         STATE_SW2A_J_B_MASK     0x010000

#define         PC_COUNT_MAX            3
#define         PC_COUNT_MIN            0
/*
 * Reg Regen
 */
#define MC13783_REGGEN_VAUDIO_LSH			0
#define MC13783_REGGEN_VAUDIO_WID			1
#define MC13783_REGGEN_VIOHI_LSH			1
#define MC13783_REGGEN_VIOHI_WID			1
#define MC13783_REGGEN_VIOLO_LSH			2
#define MC13783_REGGEN_VIOLO_WID			1
#define MC13783_REGGEN_VDIG_LSH			3
#define MC13783_REGGEN_VDIG_WID			1
#define MC13783_REGGEN_VGEN_LSH			4
#define MC13783_REGGEN_VGEN_WID			1
#define MC13783_REGGEN_VRFDIG_LSH			5
#define MC13783_REGGEN_VRFDIG_WID			1
#define MC13783_REGGEN_VRFREF_LSH			6
#define MC13783_REGGEN_VRFREF_WID			1
#define MC13783_REGGEN_VRFCP_LSH			7
#define MC13783_REGGEN_VRFCP_WID			1
#define MC13783_REGGEN_VCAM_LSH			8
#define MC13783_REGGEN_VCAM_WID			1
#define MC13783_REGGEN_VRFBG_LSH			9
#define MC13783_REGGEN_VRFBG_WID			1
#define MC13783_REGGEN_VRF1_LSH			10
#define MC13783_REGGEN_VRF1_WID			1
#define MC13783_REGGEN_VRF2_LSH			11
#define MC13783_REGGEN_VRF2_WID			1
#define MC13783_REGGEN_VMMC1_LSH			12
#define MC13783_REGGEN_VMMC1_WID			1
#define MC13783_REGGEN_VMMC2_LSH			13
#define MC13783_REGGEN_VMMC2_WID			1
#define MC13783_REGGEN_GPO1_LSH			16
#define MC13783_REGGEN_GPO1_WID			1
#define MC13783_REGGEN_GPO2_LSH			17
#define MC13783_REGGEN_GPO2_WID			1
#define MC13783_REGGEN_GPO3_LSH			18
#define MC13783_REGGEN_GPO3_WID			1
#define MC13783_REGGEN_GPO4_LSH			19
#define MC13783_REGGEN_GPO4_WID			1
#define MC13783_REGGEN_INV_LSH			20
#define MC13783_REGGEN_INV_WID			1
#define MC13783_REGGEN_VESIMESIM_LSH		21
#define MC13783_REGGEN_VESIMESIM_WID		1
#define MC13783_REGGEN_VMMC1ESIM_LSH		22
#define MC13783_REGGEN_VMMC1ESIM_WID		1
#define MC13783_REGGEN_VMMC2ESIM_LSH		23
#define MC13783_REGGEN_VMMC2ESIM_WID		1

/*
 * Reg Power Control 0
 */
#define MC13783_PWRCTRL_PCEN_LSH			0
#define MC13783_PWRCTRL_PCEN_WID			1
#define MC13783_PWRCTRL_PCEN_ENABLE		1
#define MC13783_PWRCTRL_PCEN_DISABLE		0
#define MC13783_PWRCTRL_PC_COUNT_EN_LSH		1
#define MC13783_PWRCTRL_PC_COUNT_EN_WID		1
#define MC13783_PWRCTRL_PC_COUNT_EN_ENABLE	1
#define MC13783_PWRCTRL_PC_COUNT_EN_DISABLE	0
#define MC13783_PWRCTRL_WARM_EN_LSH		2
#define MC13783_PWRCTRL_WARM_EN_WID		1
#define MC13783_PWRCTRL_WARM_EN_ENABLE		1
#define MC13783_PWRCTRL_WARM_EN_DISABLE		0
#define MC13783_PWRCTRL_USER_OFF_SPI_LSH		3
#define MC13783_PWRCTRL_USER_OFF_SPI_WID		1
#define MC13783_PWRCTRL_USER_OFF_SPI_ENABLE	1
#define MC13783_PWRCTRL_USER_OFF_PC_LSH		4
#define MC13783_PWRCTRL_USER_OFF_PC_WID		1
#define MC13783_PWRCTRL_USER_OFF_PC_ENABLE	1
#define MC13783_PWRCTRL_USER_OFF_PC_DISABLE	0
#define MC13783_PWRCTRL_32OUT_USER_OFF_LSH	5
#define MC13783_PWRCTRL_32OUT_USER_OFF_WID	1
#define MC13783_PWRCTRL_32OUT_USER_OFF_ENABLE	1
#define MC13783_PWRCTRL_32OUT_USER_OFF_DISABLE	0
#define MC13783_PWRCTRL_32OUT_EN_LSH		6
#define MC13783_PWRCTRL_32OUT_EN_WID		1
#define MC13783_PWRCTRL_32OUT_EN_ENABLE		1
#define MC13783_PWRCTRL_32OUT_EN_DISABLE		0
#define MC13783_REGCTRL_VBKUP2AUTOMH_LSH		7
#define MC13783_REGCTRL_VBKUP2AUTOMH_WID		1
#define MC13783_PWRCTRL_VBKUP1_EN_LSH		8
#define MC13783_PWRCTRL_VBKUP1_EN_WID		1
#define MC13783_PWRCTRL_VBKUP_ENABLE		1
#define MC13783_PWRCTRL_VBKUP_DISABLE		0
#define MC13783_PWRCTRL_VBKUP1_AUTO_EN_LSH	9
#define MC13783_PWRCTRL_VBKUP1_AUTO_EN_WID	1
#define MC13783_PWRCTRL_VBKUP1_LSH		10
#define MC13783_PWRCTRL_VBKUP1_WID		2
#define MC13783_PWRCTRL_VBKUP2_EN_LSH		12
#define MC13783_PWRCTRL_VBKUP2_EN_WID		1
#define MC13783_PWRCTRL_VBKUP2_AUTO_EN_LSH	13
#define MC13783_PWRCTRL_VBKUP2_AUTO_EN_WID	1
#define MC13783_PWRCTRL_VBKUP2_LSH		14
#define MC13783_PWRCTRL_VBKUP2_WID		2
#define MC13783_REGCTRL_BATTDETEN_LSH		19
#define MC13783_REGCTRL_BATTDETEN_WID		1

/*
 * Reg Power Control 1
 */
#define MC13783_PWRCTRL_PCT_LSH		0
#define MC13783_PWRCTRL_PCT_WID		8
#define MC13783_PWRCTRL_PC_COUNT_LSH	8
#define MC13783_PWRCTRL_PC_COUNT_WID	4
#define MC13783_PWRCTRL_PC_MAX_CNT_LSH	12
#define MC13783_PWRCTRL_PC_MAX_CNT_WID	4
#define MC13783_PWRCTRL_MEM_TMR_LSH	16
#define MC13783_PWRCTRL_MEM_TMR_WID	4
#define MC13783_PWRCTRL_MEM_ALLON_LSH	20
#define MC13783_PWRCTRL_MEM_ALLON_WID	1
#define MC13783_PWRCTRL_MEM_ALLON_ENABLE	1
#define MC13783_PWRCTRL_MEM_ALLON_DISABLE	0

/*
 * Reg Power Control 2
 */
#define MC13783_AUTO_RESTART_LSH	0
#define MC13783_AUTO_RESTART_WID	1
#define MC13783_EN_BT_ON1B_LSH		1
#define MC13783_EN_BT_ON1B_WID		1
#define MC13783_EN_BT_ON2B_LSH		2
#define MC13783_EN_BT_ON2B_WID		1
#define MC13783_EN_BT_ON3B_LSH		3
#define MC13783_EN_BT_ON3B_WID		1
#define MC13783_DEB_BT_ON1B_LSH		4
#define MC13783_DEB_BT_ON1B_WID		2
#define MC13783_DEB_BT_ON2B_LSH		6
#define MC13783_DEB_BT_ON2B_WID		2
#define MC13783_DEB_BT_ON3B_LSH		8
#define MC13783_DEB_BT_ON3B_WID		2

/*
 * Reg Regulator Mode 0
 */
#define MC13783_REGCTRL_VAUDIO_EN_LSH	0
#define MC13783_REGCTRL_VAUDIO_EN_WID	1
#define MC13783_REGCTRL_VAUDIO_EN_ENABLE	1
#define MC13783_REGCTRL_VAUDIO_EN_DISABLE	0
#define MC13783_REGCTRL_VAUDIO_STBY_LSH	1
#define MC13783_REGCTRL_VAUDIO_STBY_WID	1
#define MC13783_REGCTRL_VAUDIO_MODE_LSH	2
#define MC13783_REGCTRL_VAUDIO_MODE_WID	1
#define MC13783_REGCTRL_VIOHI_EN_LSH	3
#define MC13783_REGCTRL_VIOHI_EN_WID	1
#define MC13783_REGCTRL_VIOHI_EN_ENABLE	1
#define MC13783_REGCTRL_VIOHI_EN_DISABLE	0
#define MC13783_REGCTRL_VIOHI_STBY_LSH	4
#define MC13783_REGCTRL_VIOHI_STBY_WID	1
#define MC13783_REGCTRL_VIOHI_MODE_LSH	5
#define MC13783_REGCTRL_VIOHI_MODE_WID	1
#define MC13783_REGCTRL_VIOLO_EN_LSH	6
#define MC13783_REGCTRL_VIOLO_EN_WID	1
#define MC13783_REGCTRL_VIOLO_EN_ENABLE	1
#define MC13783_REGCTRL_VIOLO_EN_DISABLE	0
#define MC13783_REGCTRL_VIOLO_STBY_LSH	7
#define MC13783_REGCTRL_VIOLO_STBY_WID	1
#define MC13783_REGCTRL_VIOLO_MODE_LSH	8
#define MC13783_REGCTRL_VIOLO_MODE_WID	1
#define MC13783_REGCTRL_VDIG_EN_LSH	9
#define MC13783_REGCTRL_VDIG_EN_WID	1
#define MC13783_REGCTRL_VDIG_EN_ENABLE	1
#define MC13783_REGCTRL_VDIG_EN_DISABLE	0
#define MC13783_REGCTRL_VDIG_STBY_LSH	10
#define MC13783_REGCTRL_VDIG_STBY_WID	1
#define MC13783_REGCTRL_VDIG_MODE_LSH	11
#define MC13783_REGCTRL_VDIG_MODE_WID	1
#define MC13783_REGCTRL_VGEN_EN_LSH	12
#define MC13783_REGCTRL_VGEN_EN_WID	1
#define MC13783_REGCTRL_VGEN_EN_ENABLE	1
#define MC13783_REGCTRL_VGEN_EN_DISABLE	0
#define MC13783_REGCTRL_VGEN_STBY_LSH	13
#define MC13783_REGCTRL_VGEN_STBY_WID	1
#define MC13783_REGCTRL_VGEN_MODE_LSH	14
#define MC13783_REGCTRL_VGEN_MODE_WID	1
#define MC13783_REGCTRL_VRFDIG_EN_LSH	15
#define MC13783_REGCTRL_VRFDIG_EN_WID	1
#define MC13783_REGCTRL_VRFDIG_EN_ENABLE	1
#define MC13783_REGCTRL_VRFDIG_EN_DISABLE	0
#define MC13783_REGCTRL_VRFDIG_STBY_LSH	16
#define MC13783_REGCTRL_VRFDIG_STBY_WID	1
#define MC13783_REGCTRL_VRFDIG_MODE_LSH	17
#define MC13783_REGCTRL_VRFDIG_MODE_WID	1
#define MC13783_REGCTRL_VRFREF_EN_LSH	18
#define MC13783_REGCTRL_VRFREF_EN_WID	1
#define MC13783_REGCTRL_VRFREF_EN_ENABLE	1
#define MC13783_REGCTRL_VRFREF_EN_DISABLE	0
#define MC13783_REGCTRL_VRFREF_STBY_LSH	19
#define MC13783_REGCTRL_VRFREF_STBY_WID	1
#define MC13783_REGCTRL_VRFREF_MODE_LSH	20
#define MC13783_REGCTRL_VRFREF_MODE_WID	1
#define MC13783_REGCTRL_VRFCP_EN_LSH	21
#define MC13783_REGCTRL_VRFCP_EN_WID	1
#define MC13783_REGCTRL_VRFCP_EN_ENABLE	1
#define MC13783_REGCTRL_VRFCP_EN_DISABLE	0
#define MC13783_REGCTRL_VRFCP_STBY_LSH	22
#define MC13783_REGCTRL_VRFCP_STBY_WID	1
#define MC13783_REGCTRL_VRFCP_MODE_LSH	23
#define MC13783_REGCTRL_VRFCP_MODE_WID	1

/*
 * Reg Regulator Mode 1
 */
#define MC13783_REGCTRL_VSIM_EN_LSH	0
#define MC13783_REGCTRL_VSIM_EN_WID	1
#define MC13783_REGCTRL_VSIM_EN_ENABLE	1
#define MC13783_REGCTRL_VSIM_EN_DISABLE	0
#define MC13783_REGCTRL_VSIM_STBY_LSH	1
#define MC13783_REGCTRL_VSIM_STBY_WID	1
#define MC13783_REGCTRL_VSIM_MODE_LSH	2
#define MC13783_REGCTRL_VSIM_MODE_WID	1
#define MC13783_REGCTRL_VESIM_EN_LSH	3
#define MC13783_REGCTRL_VESIM_EN_WID	1
#define MC13783_REGCTRL_VESIM_EN_ENABLE	1
#define MC13783_REGCTRL_VESIM_EN_DISABLE	0
#define MC13783_REGCTRL_VESIM_STBY_LSH	4
#define MC13783_REGCTRL_VESIM_STBY_WID	1
#define MC13783_REGCTRL_VESIM_MODE_LSH	5
#define MC13783_REGCTRL_VESIM_MODE_WID	1
#define MC13783_REGCTRL_VCAM_EN_LSH	6
#define MC13783_REGCTRL_VCAM_EN_WID	1
#define MC13783_REGCTRL_VCAM_EN_ENABLE	1
#define MC13783_REGCTRL_VCAM_EN_DISABLE	0
#define MC13783_REGCTRL_VCAM_STBY_LSH	7
#define MC13783_REGCTRL_VCAM_STBY_WID	1
#define MC13783_REGCTRL_VCAM_MODE_LSH	8
#define MC13783_REGCTRL_VCAM_MODE_WID	1
#define	MC13783_REGCTRL_VRFBG_EN_LSH	9
#define	MC13783_REGCTRL_VRFBG_EN_WID	1
#define MC13783_REGCTRL_VRFBG_EN_ENABLE	1
#define MC13783_REGCTRL_VRFBG_EN_DISABLE	0
#define MC13783_REGCTRL_VRFBG_STBY_LSH	10
#define MC13783_REGCTRL_VRFBG_STBY_WID	1
#define MC13783_REGCTRL_VVIB_EN_LSH	11
#define MC13783_REGCTRL_VVIB_EN_WID	1
#define MC13783_REGCTRL_VVIB_EN_ENABLE	1
#define MC13783_REGCTRL_VVIB_EN_DISABLE	0
#define MC13783_REGCTRL_VRF1_EN_LSH	12
#define MC13783_REGCTRL_VRF1_EN_WID	1
#define MC13783_REGCTRL_VRF1_EN_ENABLE	1
#define MC13783_REGCTRL_VRF1_EN_DISABLE	0
#define MC13783_REGCTRL_VRF1_STBY_LSH	13
#define MC13783_REGCTRL_VRF1_STBY_WID	1
#define MC13783_REGCTRL_VRF1_MODE_LSH	14
#define MC13783_REGCTRL_VRF1_MODE_WID	1
#define MC13783_REGCTRL_VRF2_EN_LSH	15
#define MC13783_REGCTRL_VRF2_EN_WID	1
#define MC13783_REGCTRL_VRF2_EN_ENABLE	1
#define MC13783_REGCTRL_VRF2_EN_DISABLE	0
#define MC13783_REGCTRL_VRF2_STBY_LSH	16
#define MC13783_REGCTRL_VRF2_STBY_WID	1
#define MC13783_REGCTRL_VRF2_MODE_LSH	17
#define MC13783_REGCTRL_VRF2_MODE_WID	1
#define MC13783_REGCTRL_VMMC1_EN_LSH	18
#define MC13783_REGCTRL_VMMC1_EN_WID	1
#define MC13783_REGCTRL_VMMC1_EN_ENABLE	1
#define MC13783_REGCTRL_VMMC1_EN_DISABLE	0
#define MC13783_REGCTRL_VMMC1_STBY_LSH	19
#define MC13783_REGCTRL_VMMC1_STBY_WID	1
#define MC13783_REGCTRL_VMMC1_MODE_LSH	20
#define MC13783_REGCTRL_VMMC1_MODE_WID	1
#define MC13783_REGCTRL_VMMC2_EN_LSH	21
#define MC13783_REGCTRL_VMMC2_EN_WID	1
#define MC13783_REGCTRL_VMMC2_EN_ENABLE	1
#define MC13783_REGCTRL_VMMC2_EN_DISABLE	0
#define MC13783_REGCTRL_VMMC2_STBY_LSH	22
#define MC13783_REGCTRL_VMMC2_STBY_WID	1
#define MC13783_REGCTRL_VMMC2_MODE_LSH	23
#define MC13783_REGCTRL_VMMC2_MODE_WID	1

/*
 * Reg Regulator Misc.
 */
#define MC13783_REGCTRL_GPO1_EN_LSH	6
#define MC13783_REGCTRL_GPO1_EN_WID	1
#define MC13783_REGCTRL_GPO1_EN_ENABLE	1
#define MC13783_REGCTRL_GPO1_EN_DISABLE	0
#define MC13783_REGCTRL_GPO2_EN_LSH	8
#define MC13783_REGCTRL_GPO2_EN_WID	1
#define MC13783_REGCTRL_GPO2_EN_ENABLE	1
#define MC13783_REGCTRL_GPO2_EN_DISABLE	0
#define MC13783_REGCTRL_GPO3_EN_LSH	10
#define MC13783_REGCTRL_GPO3_EN_WID	1
#define MC13783_REGCTRL_GPO3_EN_ENABLE	1
#define MC13783_REGCTRL_GPO3_EN_DISABLE	0
#define MC13783_REGCTRL_GPO4_EN_LSH	12
#define MC13783_REGCTRL_GPO4_EN_WID	1
#define MC13783_REGCTRL_GPO4_EN_ENABLE	1
#define MC13783_REGCTRL_GPO4_EN_DISABLE	0
#define MC13783_REGCTRL_VIBPINCTRL_LSH	14
#define MC13783_REGCTRL_VIBPINCTRL_WID	1

/*
 * Reg Regulator Setting 0
 */
#define MC13783_REGSET_VIOLO_LSH		2
#define MC13783_REGSET_VIOLO_WID		2
#define MC13783_REGSET_VDIG_LSH		4
#define MC13783_REGSET_VDIG_WID		2
#define MC13783_REGSET_VGEN_LSH		6
#define MC13783_REGSET_VGEN_WID		3
#define MC13783_REGSET_VRFDIG_LSH		9
#define MC13783_REGSET_VRFDIG_WID		2
#define MC13783_REGSET_VRFREF_LSH		11
#define MC13783_REGSET_VRFREF_WID		2
#define MC13783_REGSET_VRFCP_LSH		13
#define MC13783_REGSET_VRFCP_WID		1
#define MC13783_REGSET_VSIM_LSH		14
#define MC13783_REGSET_VSIM_WID		1
#define MC13783_REGSET_VESIM_LSH		15
#define MC13783_REGSET_VESIM_WID		1
#define MC13783_REGSET_VCAM_LSH		16
#define MC13783_REGSET_VCAM_WID		3

/*
 * Reg Regulator Setting 1
 */
#define MC13783_REGSET_VVIB_LSH		0
#define MC13783_REGSET_VVIB_WID		2
#define MC13783_REGSET_VRF1_LSH		2
#define MC13783_REGSET_VRF1_WID		2
#define MC13783_REGSET_VRF2_LSH		4
#define MC13783_REGSET_VRF2_WID		2
#define MC13783_REGSET_VMMC1_LSH		6
#define MC13783_REGSET_VMMC1_WID		3
#define MC13783_REGSET_VMMC2_LSH		9
#define MC13783_REGSET_VMMC2_WID		3

/*
 * Reg Switcher 0
 */
#define MC13783_SWSET_SW1A_LSH		0
#define MC13783_SWSET_SW1A_WID		6
#define MC13783_SWSET_SW1A_DVS_LSH	6
#define MC13783_SWSET_SW1A_DVS_WID	6
#define MC13783_SWSET_SW1A_STDBY_LSH	12
#define MC13783_SWSET_SW1A_STDBY_WID	6

/*
 * Reg Switcher 1
 */
#define MC13783_SWSET_SW1B_LSH		0
#define MC13783_SWSET_SW1B_WID		6
#define MC13783_SWSET_SW1B_DVS_LSH	6
#define MC13783_SWSET_SW1B_DVS_WID	6
#define MC13783_SWSET_SW1B_STDBY_LSH	12
#define MC13783_SWSET_SW1B_STDBY_WID	6

/*
 * Reg Switcher 2
 */
#define MC13783_SWSET_SW2A_LSH		0
#define MC13783_SWSET_SW2A_WID		6
#define MC13783_SWSET_SW2A_DVS_LSH	6
#define MC13783_SWSET_SW2A_DVS_WID	6
#define MC13783_SWSET_SW2A_STDBY_LSH	12
#define MC13783_SWSET_SW2A_STDBY_WID	6

/*
 * Reg Switcher 3
 */
#define MC13783_SWSET_SW2B_LSH		0
#define MC13783_SWSET_SW2B_WID		6
#define MC13783_SWSET_SW2B_DVS_LSH	6
#define MC13783_SWSET_SW2B_DVS_WID	6
#define MC13783_SWSET_SW2B_STDBY_LSH	12
#define MC13783_SWSET_SW2B_STDBY_WID	6

/*
 * Reg Switcher 4
 */
#define MC13783_SWCTRL_SW1A_MODE_LSH		0
#define MC13783_SWCTRL_SW1A_MODE_WID		2
#define MC13783_SWCTRL_SW1A_STBY_MODE_LSH		2
#define MC13783_SWCTRL_SW1A_STBY_MODE_WID		2
#define MC13783_SWCTRL_SW1A_DVS_SPEED_LSH		6
#define MC13783_SWCTRL_SW1A_DVS_SPEED_WID		2
#define MC13783_SWCTRL_SW1A_PANIC_MODE_LSH	8
#define MC13783_SWCTRL_SW1A_PANIC_MODE_WID	1
#define MC13783_SWCTRL_SW1A_SOFTSTART_LSH		9
#define MC13783_SWCTRL_SW1A_SOFTSTART_WID		1
#define MC13783_SWCTRL_SW1B_MODE_LSH		10
#define MC13783_SWCTRL_SW1B_MODE_WID		2
#define MC13783_SWCTRL_SW1B_STBY_MODE_LSH		12
#define MC13783_SWCTRL_SW1B_STBY_MODE_WID		2
#define MC13783_SWCTRL_SW1B_DVS_SPEED_LSH		14
#define MC13783_SWCTRL_SW1B_DVS_SPEED_WID		2
#define MC13783_SWCTRL_SW1B_PANIC_MODE_LSH	16
#define MC13783_SWCTRL_SW1B_PANIC_MODE_WID	1
#define MC13783_SWCTRL_SW1B_SOFTSTART_LSH		17
#define MC13783_SWCTRL_SW1B_SOFTSTART_WID		1
#define MC13783_SWCTRL_PLL_EN_LSH			18
#define MC13783_SWCTRL_PLL_EN_WID			1
#define MC13783_SWCTRL_PLL_EN_ENABLE		1
#define MC13783_SWCTRL_PLL_EN_DISABLE		0
#define MC13783_SWCTRL_PLL_FACTOR_LSH		19
#define MC13783_SWCTRL_PLL_FACTOR_WID		3

/*
 * Reg Switcher 5
 */
#define MC13783_SWCTRL_SW2A_MODE_LSH		0
#define MC13783_SWCTRL_SW2A_MODE_WID		2
#define MC13783_SWCTRL_SW2A_STBY_MODE_LSH		2
#define MC13783_SWCTRL_SW2A_STBY_MODE_WID		2
#define MC13783_SWCTRL_SW2A_DVS_SPEED_LSH		6
#define MC13783_SWCTRL_SW2A_DVS_SPEED_WID		2
#define MC13783_SWCTRL_SW2A_PANIC_MODE_LSH	8
#define MC13783_SWCTRL_SW2A_PANIC_MODE_WID	1
#define MC13783_SWCTRL_SW2A_SOFTSTART_LSH		9
#define MC13783_SWCTRL_SW2A_SOFTSTART_WID		1
#define MC13783_SWCTRL_SW2B_MODE_LSH		10
#define MC13783_SWCTRL_SW2B_MODE_WID		2
#define MC13783_SWCTRL_SW2B_STBY_MODE_LSH		12
#define MC13783_SWCTRL_SW2B_STBY_MODE_WID		2
#define MC13783_SWCTRL_SW2B_DVS_SPEED_LSH		14
#define MC13783_SWCTRL_SW2B_DVS_SPEED_WID		2
#define MC13783_SWCTRL_SW2B_PANIC_MODE_LSH	16
#define MC13783_SWCTRL_SW2B_PANIC_MODE_WID	1
#define MC13783_SWCTRL_SW2B_SOFTSTART_LSH		17
#define MC13783_SWCTRL_SW2B_SOFTSTART_WID		1
#define MC13783_SWSET_SW3_LSH			18
#define MC13783_SWSET_SW3_WID			2
#define MC13783_SWCTRL_SW3_EN_LSH			20
#define MC13783_SWCTRL_SW3_EN_WID			2
#define MC13783_SWCTRL_SW3_EN_ENABLE		1
#define MC13783_SWCTRL_SW3_EN_DISABLE		0
#define MC13783_SWCTRL_SW3_STBY_LSH		21
#define MC13783_SWCTRL_SW3_STBY_WID		1
#define MC13783_SWCTRL_SW3_MODE_LSH		22
#define MC13783_SWCTRL_SW3_MODE_WID		1

/*
 * Switcher configuration
 */
#define MC13783_SWCTRL_SW_MODE_SYNC_RECT_EN	0
#define MC13783_SWCTRL_SW_MODE_PULSE_NO_SKIP_EN	1
#define MC13783_SWCTRL_SW_MODE_PULSE_SKIP_EN	2
#define MC13783_SWCTRL_SW_MODE_LOW_POWER_EN	3
#define MC13783_REGTRL_LP_MODE_ENABLE		1
#define MC13783_REGTRL_LP_MODE_DISABLE		0
#define MC13783_REGTRL_STBY_MODE_ENABLE		1
#define MC13783_REGTRL_STBY_MODE_DISABLE		0

#endif				/*  __MC13783_POWER_DEFS_H__ */
