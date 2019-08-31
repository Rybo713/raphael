/*
 * Copyright (c) 2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_SDMMAGPIE_H
#define _DT_BINDINGS_CLK_QCOM_GCC_SDMMAGPIE_H

/* Hardware and dummy clocks for rate measurement */
#define MEASURE_ONLY_SNOC_CLK				0
#define MEASURE_ONLY_CNOC_CLK				1
#define MEASURE_ONLY_BIMC_CLK				2
#define MEASURE_ONLY_IPA_2X_CLK				3

/* GCC clock registers */
#define GPLL0						4
#define GPLL0_OUT_EVEN					5
#define GPLL6						6
#define GPLL7						7
#define GCC_AGGRE_NOC_PCIE_TBU_CLK			8
#define GCC_AGGRE_UFS_PHY_AXI_CLK			9
#define GCC_AGGRE_UFS_PHY_AXI_HW_CTL_CLK		10
#define GCC_AGGRE_USB3_PRIM_AXI_CLK			11
#define GCC_APC_VS_CLK					12
#define GCC_BOOT_ROM_AHB_CLK				13
#define GCC_CAMERA_AHB_CLK				14
#define GCC_CAMERA_HF_AXI_CLK				15
#define GCC_CAMERA_SF_AXI_CLK				16
#define GCC_CAMERA_XO_CLK				17
#define GCC_CE1_AHB_CLK					18
#define GCC_CE1_AXI_CLK					19
#define GCC_CE1_CLK					20
#define GCC_CFG_NOC_USB3_PRIM_AXI_CLK			21
#define GCC_CPUSS_AHB_CLK				22
#define GCC_CPUSS_AHB_CLK_SRC				23
#define GCC_CPUSS_GNOC_CLK				24
#define GCC_CPUSS_RBCPR_CLK				25
#define GCC_CPUSS_RBCPR_CLK_SRC				26
#define GCC_DDRSS_GPU_AXI_CLK				27
#define GCC_DISP_AHB_CLK				28
#define GCC_DISP_GPLL0_CLK_SRC				29
#define GCC_DISP_GPLL0_DIV_CLK_SRC			30
#define GCC_DISP_HF_AXI_CLK				31
#define GCC_DISP_SF_AXI_CLK				32
#define GCC_DISP_XO_CLK					33
#define GCC_GP1_CLK					34
#define GCC_GP1_CLK_SRC					35
#define GCC_GP2_CLK					36
#define GCC_GP2_CLK_SRC					37
#define GCC_GP3_CLK					38
#define GCC_GP3_CLK_SRC					39
#define GCC_GPU_CFG_AHB_CLK				40
#define GCC_GPU_GPLL0_CLK_SRC				41
#define GCC_GPU_GPLL0_DIV_CLK_SRC			42
#define GCC_GPU_MEMNOC_GFX_CLK				43
#define GCC_GPU_SNOC_DVM_GFX_CLK			44
#define GCC_GPU_VS_CLK					45
#define GCC_NPU_AXI_CLK					46
#define GCC_NPU_CFG_AHB_CLK				47
#define GCC_NPU_GPLL0_CLK_SRC				48
#define GCC_NPU_GPLL0_DIV_CLK_SRC			49
#define GCC_PCIE_0_AUX_CLK				50
#define GCC_PCIE_0_AUX_CLK_SRC				51
#define GCC_PCIE_0_CFG_AHB_CLK				52
#define GCC_PCIE_0_CLKREF_CLK				53
#define GCC_PCIE_0_MSTR_AXI_CLK				54
#define GCC_PCIE_0_PIPE_CLK				55
#define GCC_PCIE_0_SLV_AXI_CLK				56
#define GCC_PCIE_0_SLV_Q2A_AXI_CLK			57
#define GCC_PCIE_PHY_AUX_CLK				58
#define GCC_PCIE_PHY_REFGEN_CLK				59
#define GCC_PCIE_PHY_REFGEN_CLK_SRC			60
#define GCC_PDM2_CLK					61
#define GCC_PDM2_CLK_SRC				62
#define GCC_PDM_AHB_CLK					63
#define GCC_PDM_XO4_CLK					64
#define GCC_PRNG_AHB_CLK				65
#define GCC_QUPV3_WRAP0_CORE_2X_CLK			66
#define GCC_QUPV3_WRAP0_CORE_CLK			67
#define GCC_QUPV3_WRAP0_S0_CLK				68
#define GCC_QUPV3_WRAP0_S0_CLK_SRC			69
#define GCC_QUPV3_WRAP0_S1_CLK				70
#define GCC_QUPV3_WRAP0_S1_CLK_SRC			71
#define GCC_QUPV3_WRAP0_S2_CLK				72
#define GCC_QUPV3_WRAP0_S2_CLK_SRC			73
#define GCC_QUPV3_WRAP0_S3_CLK				74
#define GCC_QUPV3_WRAP0_S3_CLK_SRC			75
#define GCC_QUPV3_WRAP0_S4_CLK				76
#define GCC_QUPV3_WRAP0_S4_CLK_SRC			78
#define GCC_QUPV3_WRAP0_S5_CLK				79
#define GCC_QUPV3_WRAP0_S5_CLK_SRC			80
#define GCC_QUPV3_WRAP0_S6_CLK				81
#define GCC_QUPV3_WRAP0_S6_CLK_SRC			82
#define GCC_QUPV3_WRAP0_S7_CLK				83
#define GCC_QUPV3_WRAP0_S7_CLK_SRC			84
#define GCC_QUPV3_WRAP1_CORE_2X_CLK			85
#define GCC_QUPV3_WRAP1_CORE_CLK			86
#define GCC_QUPV3_WRAP1_S0_CLK				87
#define GCC_QUPV3_WRAP1_S0_CLK_SRC			88
#define GCC_QUPV3_WRAP1_S1_CLK				89
#define GCC_QUPV3_WRAP1_S1_CLK_SRC			90
#define GCC_QUPV3_WRAP1_S2_CLK				91
#define GCC_QUPV3_WRAP1_S2_CLK_SRC			92
#define GCC_QUPV3_WRAP1_S3_CLK				93
#define GCC_QUPV3_WRAP1_S3_CLK_SRC			94
#define GCC_QUPV3_WRAP1_S4_CLK				95
#define GCC_QUPV3_WRAP1_S4_CLK_SRC			96
#define GCC_QUPV3_WRAP1_S5_CLK				97
#define GCC_QUPV3_WRAP1_S5_CLK_SRC			98
#define GCC_QUPV3_WRAP1_S6_CLK				99
#define GCC_QUPV3_WRAP1_S6_CLK_SRC			100
#define GCC_QUPV3_WRAP1_S7_CLK				101
#define GCC_QUPV3_WRAP1_S7_CLK_SRC			102
#define GCC_QUPV3_WRAP_0_M_AHB_CLK			103
#define GCC_QUPV3_WRAP_0_S_AHB_CLK			104
#define GCC_QUPV3_WRAP_1_M_AHB_CLK			105
#define GCC_QUPV3_WRAP_1_S_AHB_CLK			106
#define GCC_SDCC1_AHB_CLK				107
#define GCC_SDCC1_APPS_CLK				108
#define GCC_SDCC1_APPS_CLK_SRC				109
#define GCC_SDCC1_ICE_CORE_CLK				110
#define GCC_SDCC1_ICE_CORE_CLK_SRC			111
#define GCC_SDCC2_AHB_CLK				112
#define GCC_SDCC2_APPS_CLK				113
#define GCC_SDCC2_APPS_CLK_SRC				114
#define GCC_SDCC4_AHB_CLK				115
#define GCC_SDCC4_APPS_CLK				116
#define GCC_SDCC4_APPS_CLK_SRC				117
#define GCC_SYS_NOC_CPUSS_AHB_CLK			118
#define GCC_TSIF_AHB_CLK				119
#define GCC_TSIF_INACTIVITY_TIMERS_CLK			120
#define GCC_TSIF_REF_CLK				121
#define GCC_TSIF_REF_CLK_SRC				123
#define GCC_UFS_MEM_CLKREF_CLK				124
#define GCC_UFS_PHY_AHB_CLK				125
#define GCC_UFS_PHY_AXI_CLK				126
#define GCC_UFS_PHY_AXI_CLK_SRC				127
#define GCC_UFS_PHY_AXI_HW_CTL_CLK			128
#define GCC_UFS_PHY_ICE_CORE_CLK			129
#define GCC_UFS_PHY_ICE_CORE_CLK_SRC			130
#define GCC_UFS_PHY_ICE_CORE_HW_CTL_CLK			131
#define GCC_UFS_PHY_PHY_AUX_CLK				132
#define GCC_UFS_PHY_PHY_AUX_CLK_SRC			133
#define GCC_UFS_PHY_PHY_AUX_HW_CTL_CLK			134
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK			135
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK			136
#define GCC_UFS_PHY_UNIPRO_CORE_CLK			137
#define GCC_UFS_PHY_UNIPRO_CORE_CLK_SRC			138
#define GCC_UFS_PHY_UNIPRO_CORE_HW_CTL_CLK		140
#define GCC_USB30_PRIM_MASTER_CLK			141
#define GCC_USB30_PRIM_MASTER_CLK_SRC			142
#define GCC_USB30_PRIM_MOCK_UTMI_CLK			143
#define GCC_USB30_PRIM_MOCK_UTMI_CLK_SRC		144
#define GCC_USB30_PRIM_SLEEP_CLK			145
#define GCC_USB3_PRIM_CLKREF_CLK			146
#define GCC_USB3_PRIM_PHY_AUX_CLK			147
#define GCC_USB3_PRIM_PHY_AUX_CLK_SRC			148
#define GCC_USB3_PRIM_PHY_COM_AUX_CLK			149
#define GCC_USB3_PRIM_PHY_PIPE_CLK			150
#define GCC_USB_PHY_CFG_AHB2PHY_CLK			151
#define GCC_VDDA_VS_CLK					152
#define GCC_VDDCX_VS_CLK				153
#define GCC_VDDMX_VS_CLK				154
#define GCC_VIDEO_AHB_CLK				155
#define GCC_VIDEO_AXI_CLK				156
#define GCC_VIDEO_XO_CLK				157
#define GCC_VS_CTRL_AHB_CLK				158
#define GCC_VS_CTRL_CLK					159
#define GCC_VS_CTRL_CLK_SRC				160
#define GCC_VSENSOR_CLK_SRC				161
#define GCC_GPLL0_MAIN_DIV_CDIV				162

/* GCC Resets */
#define GCC_PCIE_0_BCR					0
#define GCC_PCIE_PHY_BCR				1
#define GCC_PCIE_PHY_COM_BCR				2
#define GCC_UFS_PHY_BCR					3
#define GCC_USB30_PRIM_BCR				4
#define GCC_USB3_DP_PHY_PRIM_BCR			5
#define GCC_USB3_DP_PHY_SEC_BCR				6
#define GCC_USB3_PHY_PRIM_BCR				7
#define GCC_USB3_PHY_SEC_BCR				8
#define GCC_QUSB2PHY_PRIM_BCR				9

#endif
