/******************************************************************************

                 ��Ȩ���� (C), 2001-2015, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : soc_lpmcu_baseaddr_interface.h
  �� �� ��   : ����
  ��    ��   : Excel2Code
  ��������   : 2015-03-23 11:53:44
  ����޸�   :
  ��������   : �ӿ�ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2015��3��23��
    ��    ��   : fWX220878
    �޸�����   : �ӡ�Hi3650V100 SOC�Ĵ����ֲ�_LPMCU_BaseAddr.xml���Զ�����

******************************************************************************/

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_LPMCU_BASEADDR_INTERFACE_H__
#define __SOC_LPMCU_BASEADDR_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/* �Ĵ���˵����4K */
#define SOC_LPMCU_M3_CS_ROM_TABLE_BASE_ADDR           (0xE00FF000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_M3_CS_CTI_BASE_ADDR                 (0xE00FE000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_M3_CS_SCS_BASE_ADDR                 (0xE000E000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_M3_CS_FPB_BASE_ADDR                 (0xE0002000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_M3_CS_DWT_BASE_ADDR                 (0xE0001000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_RTC_BASE_ADDR                 (0xBFD7F000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_CONFIG_BASE_ADDR              (0xBFD7E000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_TIMER_BASE_ADDR               (0xBFD7D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_Watchdog_BASE_ADDR            (0xBFD7C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_GPIO3_BASE_ADDR               (0xBFD7B000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_GPIO2_BASE_ADDR               (0xBFD7A000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_GPIO1_BASE_ADDR               (0xBFD79000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_GPIO0_BASE_ADDR               (0xBFD78000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_DMAC_BASE_ADDR                (0xBFD77000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_UART7_BASE_ADDR               (0xBFD76000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_BLPWM_BASE_ADDR               (0xBFD75000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_UART3_BASE_ADDR               (0xBFD74000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_I2C2_BASE_ADDR                (0xBFD73000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_I2C1_BASE_ADDR                (0xBFD72000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_I2C0_BASE_ADDR                (0xBFD71000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_SPI_BASE_ADDR                 (0xBFD70000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DTCM1Remap_BASE_ADDR                (0xBFD6F000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DTCM0Remap_BASE_ADDR                (0xBFD6E000)

/* �Ĵ���˵����8K */
#define SOC_LPMCU_ITCMRemap_BASE_ADDR                 (0xBFD6C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_RemapCtrl_BASE_ADDR                 (0xBFD6B000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_I2C3_BASE_ADDR                (0xBFD6A000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_UART8_BASE_ADDR               (0xBFD69000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOMCU_SPI2_BASE_ADDR                (0xBFD68000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SDIO0_BASE_ADDR                     (0xBF3FF000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_EMMC1_BASE_ADDR                     (0xBF3FE000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_EMMC0_BASE_ADDR                     (0xBF390000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SD_BASE_ADDR                        (0xBF37F000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SDIO1_BASE_ADDR                     (0xBF37D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_USB3OTG_BC_BASE_ADDR                (0xBF200000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_USB3OTG_BASE_ADDR                   (0xBF100000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SOCP_BASE_ADDR                      (0xBF030000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PERF_STAT_BASE_ADDR                 (0xBF012000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SECENG_S_BASE_ADDR                  (0xBF011000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SECENG_P_BASE_ADDR                  (0xBF010000)

/* �Ĵ���˵����16M */
#define SOC_LPMCU_CS_STM_BASE_ADDR                    (0xBE000000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PERI_DMAC_BASE_ADDR                 (0xBDF30000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_BISR_BASE_ADDR                      (0xBDF22000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IPC_MDM_BASE_ADDR                   (0xBDF21000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_I2C4_BASE_ADDR                      (0xBDF0D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_I2C3_BASE_ADDR                      (0xBDF0C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SPI1_BASE_ADDR                      (0xBDF08000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_UART5_BASE_ADDR                     (0xBDF05000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_UART2_BASE_ADDR                     (0xBDF03000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_UART0_BASE_ADDR                     (0xBDF02000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_UART4_BASE_ADDR                     (0xBDF01000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_UART1_BASE_ADDR                     (0xBDF00000)

/* �Ĵ���˵����400K */
#define SOC_LPMCU_MMBUF_BASE_ADDR                     (0xAA800000)

/* �Ĵ���˵����2M */
#define SOC_LPMCU_HKMEM_BASE_ADDR                     (0xAA000000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_MMC0_NOC_Service_Target_BASE_ADDR   (0xA9890000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_MMC1_NOC_Service_Target_BASE_ADDR   (0xA9880000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_DEBUG_SEC_NOC_Service_Target_BASE_ADDR (0xA9870000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_DMA_NOC_Service_Target_BASE_ADDR    (0xA9860000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_IVP32_Sevice_Target_BASE_ADDR       (0xA9850000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_SYS_BUS_Service_Target_BASE_ADDR    (0xA9840000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_ASP_Service_Target_BASE_ADDR        (0xA9830000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_Modem_Service_Target_BASE_ADDR      (0xA9820000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_CFGBUS_Service_Target_BASE_ADDR     (0xA9800000)

/* �Ĵ���˵����128K */
#define SOC_LPMCU_IVP32_SMMU_BASE_ADDR                (0xA8DC0000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IVP32_TIMER1_BASE_ADDR              (0xA8D83000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IVP32_TIMER0_BASE_ADDR              (0xA8D82000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IVP32_Watchdog_BASE_ADDR            (0xA8D81000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IVP32_CFG_BASE_ADDR                 (0xA8D80000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_IVP32_IRAM_BASE_ADDR                (0xA8D00000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_IVP32_DRAM1_BASE_ADDR               (0xA8C80000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_IVP32_DRAM0_BASE_ADDR               (0xA8C00000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_TZPC_BASE_ADDR                      (0xA8A21000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO0_BASE_ADDR                     (0xA8A0B000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO1_BASE_ADDR                     (0xA8A0C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO2_BASE_ADDR                     (0xA8A0D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO3_BASE_ADDR                     (0xA8A0E000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO4_BASE_ADDR                     (0xA8A0F000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO5_BASE_ADDR                     (0xA8A10000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO6_BASE_ADDR                     (0xA8A11000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO7_BASE_ADDR                     (0xA8A12000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO8_BASE_ADDR                     (0xA8A13000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO9_BASE_ADDR                     (0xA8A14000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO10_BASE_ADDR                    (0xA8A15000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO11_BASE_ADDR                    (0xA8A16000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO12_BASE_ADDR                    (0xA8A17000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO13_BASE_ADDR                    (0xA8A18000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO14_BASE_ADDR                    (0xA8A19000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO15_BASE_ADDR                    (0xA8A1A000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO16_BASE_ADDR                    (0xA8A1B000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO17_BASE_ADDR                    (0xA8A1C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO18_BASE_ADDR                    (0xA8A1D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO19_BASE_ADDR                    (0xA8A1E000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO20_BASE_ADDR                    (0xA8A1F000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO21_BASE_ADDR                    (0xA8A20000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PCTRL_BASE_ADDR                     (0xA8A09000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Watchdog1_BASE_ADDR                 (0xA8A07000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Watchdog0_BASE_ADDR                 (0xA8A06000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PWM_BASE_ADDR                       (0xA8A04000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_TIMER12_BASE_ADDR                   (0xA8A03000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_TIMER11_BASE_ADDR                   (0xA8A02000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_TIMER10_BASE_ADDR                   (0xA8A01000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_TIMER9_BASE_ADDR                    (0xA8A00000)

/* �Ĵ���˵����16K */
#define SOC_LPMCU_G3D_BASE_ADDR                       (0xA8970000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IOC_BASE_ADDR                       (0xA896C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IPC_NS_BASE_ADDR                    (0xA896B000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IPC_BASE_ADDR                       (0xA896A000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_VENC_Service_Target_BASE_ADDR       (0xA8940000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_VDEC_Service_Target_BASE_ADDR       (0xA8930000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_VCODEC_NOC_Service_Target_BASE_ADDR (0xA8920000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_VENC_BASE_ADDR                      (0xA8900000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_VDEC_BASE_ADDR                      (0xA8800000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_ISP_Service_Target_BASE_ADDR        (0xA86D0000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_VIVO_NOC_Service_Target_BASE_ADDR   (0xA86C0000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GLB0_BASE_ADDR                      (0xA8600000)

/* �Ĵ���˵����512B */
#define SOC_LPMCU_DSI0_BASE_ADDR                      (0xA8601000)

/* �Ĵ���˵����512B */
#define SOC_LPMCU_DSI1_BASE_ADDR                      (0xA8601400)

/* �Ĵ���˵����4608B */
#define SOC_LPMCU_CMD_BASE_ADDR                       (0xA8602000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_AIF0_BASE_ADDR                      (0xA8607000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_AIF1_BASE_ADDR                      (0xA8609000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_MIF_BASE_ADDR                       (0xA860A000)

/* �Ĵ���˵����2K */
#define SOC_LPMCU_MCTL_SYS_BASE_ADDR                  (0xA8610000)

/* �Ĵ���˵����256B */
#define SOC_LPMCU_MCTL_MUTEX0_BASE_ADDR               (0xA8610800)

/* �Ĵ���˵����256B */
#define SOC_LPMCU_MCTL_MUTEX1_BASE_ADDR               (0xA8610900)

/* �Ĵ���˵����256B */
#define SOC_LPMCU_MCTL_MUTEX2_BASE_ADDR               (0xA8610A00)

/* �Ĵ���˵����256B */
#define SOC_LPMCU_MCTL_MUTEX3_BASE_ADDR               (0xA8610B00)

/* �Ĵ���˵����256B */
#define SOC_LPMCU_MCTL_MUTEX4_BASE_ADDR               (0xA8610C00)

/* �Ĵ���˵����256B */
#define SOC_LPMCU_MCTL_MUTEX5_BASE_ADDR               (0xA8610D00)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DBUG_BASE_ADDR                      (0xA8611000)

/* �Ĵ���˵����32K */
#define SOC_LPMCU_RCH_V0_BASE_ADDR                    (0xA8620000)

/* �Ĵ���˵����32K */
#define SOC_LPMCU_RCH_V1_BASE_ADDR                    (0xA8628000)

/* �Ĵ���˵����32K */
#define SOC_LPMCU_RCH_G0_BASE_ADDR                    (0xA8638000)

/* �Ĵ���˵����32K */
#define SOC_LPMCU_RCH_G1_BASE_ADDR                    (0xA8640000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_RCH_D0_BASE_ADDR                    (0xA8650000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_RCH_D1_BASE_ADDR                    (0xA8651000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_RCH_D2_BASE_ADDR                    (0xA8652000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_RCH_D3_BASE_ADDR                    (0xA8653000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_WCH0_BASE_ADDR                      (0xA865A000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_WCH1_BASE_ADDR                      (0xA865C000)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_OV6_0_BASE_ADDR                     (0xA8660000)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_OV2_0_BASE_ADDR                     (0xA8660400)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_OV6_1_BASE_ADDR                     (0xA8660800)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_OV2_1_BASE_ADDR                     (0xA8660C00)

/* �Ĵ���˵����16K */
#define SOC_LPMCU_SCF_BASE_ADDR                       (0xA8664000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DBUF0_BASE_ADDR                     (0xA866D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DBUF1_BASE_ADDR                     (0xA866E000)

/* �Ĵ���˵����48K */
#define SOC_LPMCU_DPP_BASE_ADDR                       (0xA8670000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SBL_BASE_ADDR                       (0xA867C000)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_INTF0_BASE_ADDR                     (0xA867D000)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_IFBC_BASE_ADDR                      (0xA867D400)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_DSC_BASE_ADDR                       (0xA867D800)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_INTF1_BASE_ADDR                     (0xA867E000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_ISP_CORE_CFG_BASE_ADDR              (0xA8400000)

/* �Ĵ���˵����128K */
#define SOC_LPMCU_ISP_CORE_SRAM_BASE_ADDR             (0xA8500000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ISP_Watchdog_BASE_ADDR              (0xA8580000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ISP_TIMER_BASE_ADDR                 (0xA8581000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ISP_IPC_BASE_ADDR                   (0xA8582000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ISP_SUB_CTRL_BASE_ADDR              (0xA8583000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CODEC_SSI_BASE_ADDR                 (0xA82B9000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_HKADC_SSI_BASE_ADDR                 (0xA82B8000)

/* �Ĵ���˵����32K */
#define SOC_LPMCU_GIC_BASE_ADDR                       (0xA82B0000)

/* �Ĵ���˵����24K */
#define SOC_LPMCU_DSP_ITCM_BASE_ADDR                  (0xA8070000)

/* �Ĵ���˵����96K */
#define SOC_LPMCU_DSP_DTCM_BASE_ADDR                  (0xA8058000)

/* �Ĵ���˵����8K */
#define SOC_LPMCU_SLIMBUS_BASE_ADDR                   (0xA8050000)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_SIO_MODEM_BASE_ADDR                 (0xA804FC00)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_SIO_BT_BASE_ADDR                    (0xA804F800)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_SIO_VOICE_BASE_ADDR                 (0xA804F400)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_SIO_AUDIO_BASE_ADDR                 (0xA804F000)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_ASP_HDMI_SPDIF_BASE_ADDR            (0xA804EC00)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_ASP_HDMI_SIO_BASE_ADDR              (0xA804E800)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_ASP_HDMI_ASP_BASE_ADDR              (0xA804E400)

/* �Ĵ���˵����1K */
#define SOC_LPMCU_ASP_CFG_BASE_ADDR                   (0xA804E000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ASP_Watchdog_BASE_ADDR              (0xA804D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ASP_IPC_BASE_ADDR                   (0xA804C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ASP_DMAC_BASE_ADDR                  (0xA804B000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ASP_TIMER1_BASE_ADDR                (0xA804A000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ASP_TIMER0_BASE_ADDR                (0xA8049000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_ASP_GPIO_BASE_ADDR                  (0xA8048000)

/* �Ĵ���˵����192K */
#define SOC_LPMCU_SECRAM_BASE_ADDR                    (0xA8000000)

/* �Ĵ���˵����512K */
#define SOC_LPMCU_TL_BBE16_ITCM1_BASE_ADDR            (0xA2880000)

/* �Ĵ���˵����256K */
#define SOC_LPMCU_TL_BBE16_ITCM0_BASE_ADDR            (0xA2840000)

/* �Ĵ���˵����512K */
#define SOC_LPMCU_TL_BBE16_DTCM1_BASE_ADDR            (0xA2780000)

/* �Ĵ���˵����256K */
#define SOC_LPMCU_TL_BBE16_DTCM0_BASE_ADDR            (0xA2740000)

/* �Ĵ���˵����96K */
#define SOC_LPMCU_ON_CHIP_MEMORY_BASE_ADDR            (0xA0800000)

/* �Ĵ���˵����16K */
#define SOC_LPMCU_AXI_MON_BASE_ADDR                   (0xA0476000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IPCM_BASE_ADDR                      (0xA0475000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_VIC_BBE16_BASE_ADDR                 (0xA0474000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Modem_HS_UART_BASE_ADDR             (0xA0473000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Modem_IPF_BASE_ADDR                 (0xA0472000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_UPACC_BASE_ADDR                     (0xA0471000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CIPHER_BASE_ADDR                    (0xA0470000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_CICOM1_BASE_ADDR                    (0xA0450000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_CICOM0_BASE_ADDR                    (0xA0440000)

/* �Ĵ���˵����256K */
#define SOC_LPMCU_UICC_BASE_ADDR                      (0xA0400000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER0_BASE_ADDR              (0xA0300000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER1_BASE_ADDR              (0xA0301000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER2_BASE_ADDR              (0xA0302000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER3_BASE_ADDR              (0xA0303000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER4_BASE_ADDR              (0xA0304000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER5_BASE_ADDR              (0xA0305000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER6_BASE_ADDR              (0xA0306000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER7_BASE_ADDR              (0xA0307000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_Modem_TIMER8_BASE_ADDR              (0xA0308000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Modem_TIMER9_BASE_ADDR              (0xA0309000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Modem_ASHB_Bridge_BASE_ADDR         (0xA0205000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Modem_EDMAC_BASE_ADDR               (0xA0204000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Modem_UART_BASE_ADDR                (0xA0203000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Modem_WatchDog_BASE_ADDR            (0xA0201000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Modem_Sysctrl_BASE_ADDR             (0xA0200000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_MCPU_Private_Space_BASE_ADDR        (0xA0100000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_MCPU_L2Cache_BASE_ADDR              (0xA0000000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_RFIN_BASE_ADDR                  (0xA1000000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_FPU_BASE_ADDR                   (0xA1100000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_BBP_DMA_BASE_ADDR                   (0xA1200000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_DBG_BASE_ADDR                       (0xA1300000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_PB_BASE_ADDR                    (0xA1400000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_VDL_BASE_ADDR                   (0xA1500000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_UL_BASE_ADDR                    (0xA1600000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_INT_BASE_ADDR                   (0xA1700000)

/* �Ĵ���˵����512KB */
#define SOC_LPMCU_GSM0_BASE_ADDR                      (0xA1800000)

/* �Ĵ���˵����512KB */
#define SOC_LPMCU_GSM1_BASE_ADDR                      (0xA1880000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_CQI_BASE_ADDR                   (0xA1A00000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_PDU_BASE_ADDR                   (0xA1B00000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_LTE_TDL_BASE_ADDR                   (0xA1C00000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_TW_Share_BASE_ADDR                  (0xA1990000)

/* �Ĵ���˵����256K */
#define SOC_LPMCU_WBBP_TOP1_BASE_ADDR                 (0xA1900000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_XBBP_BASE_ADDR                      (0xA19E0000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_TDS122_BASE_ADDR                    (0xA1D00000)

/* �Ĵ���˵����1M */
#define SOC_LPMCU_TDS245_BASE_ADDR                    (0xA1E00000)

/* �Ĵ���˵����32K */
#define SOC_LPMCU_CTU_BASE_ADDR                       (0xA1F80000)

/* �Ĵ���˵����8K */
#define SOC_LPMCU_ET_BASE_ADDR                        (0xA1F88000)

/* �Ĵ���˵����2K */
#define SOC_LPMCU_GU_BBP_MASTER_BASE_ADDR             (0xA1F8A800)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_IRM_PS_CFG_BASE_ADDR                (0xA1F8B000)

/* �Ĵ���˵����8K */
#define SOC_LPMCU_ABB_BASE_ADDR                       (0xA1F8C000)

/* �Ĵ���˵����8K */
#define SOC_LPMCU_ABB_CFG_BASE_ADDR                   (0xA1F8E000)

/* �Ĵ���˵����2KB */
#define SOC_LPMCU_LTE_ON_BASE_ADDR                    (0x40212000)

/* �Ĵ���˵����1KB */
#define SOC_LPMCU_BBP_COMM_ON_BASE_ADDR               (0x40212000)

/* �Ĵ���˵����1KB */
#define SOC_LPMCU_GSM0_ON_BASE_ADDR                   (0x40212800)

/* �Ĵ���˵����1KB */
#define SOC_LPMCU_GSM1_ON_BASE_ADDR                   (0x40212C00)

/* �Ĵ���˵����512B */
#define SOC_LPMCU_AFC_CH0_BASE_ADDR                   (0x40213000)

/* �Ĵ���˵����512B */
#define SOC_LPMCU_AFC_CH1_BASE_ADDR                   (0x40213200)

/* �Ĵ���˵����1KB */
#define SOC_LPMCU_TDS_ON_BASE_ADDR                    (0x40213400)

/* �Ĵ���˵����512B */
#define SOC_LPMCU_BBP_GLB_ON_BASE_ADDR                (0x40212000)

/* �Ĵ���˵����512B */
#define SOC_LPMCU_WCDMA_ON_BASE_ADDR                  (0x40212000)

/* �Ĵ���˵����512B */
#define SOC_LPMCU_CDMA_ON_BASE_ADDR                   (0x40212000)

/* �Ĵ���˵����192K */
#define SOC_LPMCU_SECRAM_remap_BASE_ADDR              (0x60000000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_A53_ROM_TABLE_BASE_ADDR             (0x50800000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_A53_FUNNEL_BASE_ADDR                (0x50801000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_A53_ETF_BASE_ADDR                   (0x50802000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_A53_CTI_BASE_ADDR                   (0x50803000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Maia_ROM_TABLE_BASE_ADDR            (0x51000000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Maia_FUNNEL_BASE_ADDR               (0x51001000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Maia_ETF_BASE_ADDR                  (0x51002000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_Maia_CTI_BASE_ADDR                  (0x51003000)

/* �Ĵ���˵����24M */
#define SOC_LPMCU_CSSYS_APB_BASE_ADDR                 (0x50000000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_ROM_TABLE_BASE_ADDR           (0x50030000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_FUNNEL_BASE_ADDR              (0x50031000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_TPIU_BASE_ADDR                (0x50032000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_ETR_BASE_ADDR                 (0x50033000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_CTI_BASE_ADDR                 (0x50034000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_STM_BASE_ADDR                 (0x50035000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_ETF_BASE_ADDR                 (0x50036000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_Tsgen_BASE_ADDR               (0x50037000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_CSSYS_Tsgen_RO_BASE_ADDR            (0x50038000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRC_QOSB_0_BASE_ADDR               (0x40248000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRC_DMC_0_0_BASE_ADDR              (0x40249000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRC_DMC_0_1_BASE_ADDR              (0x4024A000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRC_QOSB_1_BASE_ADDR               (0x4024C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRC_DMC_1_0_BASE_ADDR              (0x4024D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRC_DMC_1_1_BASE_ADDR              (0x4024E000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PACK_A_BASE_ADDR                    (0x40250000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRPHY_STATIC_A_BASE_ADDR           (0x40251000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PACK_B_BASE_ADDR                    (0x40252000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRPHY_STATIC_B_BASE_ADDR           (0x40253000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PACK_C_BASE_ADDR                    (0x40254000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRPHY_STATIC_C_BASE_ADDR           (0x40255000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PACK_D_BASE_ADDR                    (0x40256000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_DDRPHY_STATIC_D_BASE_ADDR           (0x40257000)

/* �Ĵ���˵����32K */
#define SOC_LPMCU_DMSS_BASE_ADDR                      (0x40240000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_LP_CONFIG_BASE_ADDR                 (0x4023F000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_LP_TIMER_BASE_ADDR                  (0x4023E000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_LP_Watchdog_BASE_ADDR               (0x4023D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GNSPWM_BASE_ADDR                    (0x40237000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PERI_SSI1_BASE_ADDR                 (0x40236000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PERI_CRG_BASE_ADDR                  (0x40235000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PMU_SSI0_BASE_ADDR                  (0x40234000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PMU_I2C_BASE_ADDR                   (0x40233000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_UART6_BASE_ADDR                     (0x40232000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_PMC_BASE_ADDR                       (0x40231000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_TSENSORC_BASE_ADDR                  (0x40230000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_TIMER0_BASE_ADDR                    (0x40214000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_TIMER1_BASE_ADDR                    (0x40215000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_TIMER2_BASE_ADDR                    (0x40216000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_TIMER3_BASE_ADDR                    (0x40217000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_TIMER4_BASE_ADDR                    (0x40218000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_TIMER5_BASE_ADDR                    (0x40219000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_TIMER6_BASE_ADDR                    (0x4021A000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_TIMER7_BASE_ADDR                    (0x4021B000)

/* �Ĵ���˵����4k */
#define SOC_LPMCU_TIMER8_BASE_ADDR                    (0x4021C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_AO_IOC_BASE_ADDR                    (0x40211000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO27_BASE_ADDR                    (0x40210000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO26_BASE_ADDR                    (0x4020F000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO25_BASE_ADDR                    (0x4020E000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO24_BASE_ADDR                    (0x4020D000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO23_BASE_ADDR                    (0x4020C000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_GPIO22_BASE_ADDR                    (0x4020B000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SCTRL_BASE_ADDR                     (0x4020A000)

/* �Ĵ���˵����8K */
#define SOC_LPMCU_SYS_CNT_BASE_ADDR                   (0x40208000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SCI1_BASE_ADDR                      (0x40207000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_SCI0_BASE_ADDR                      (0x40206000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_RTC1_BASE_ADDR                      (0x40205000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_RTC0_BASE_ADDR                      (0x40204000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_EFUSEC_BASE_ADDR                    (0x40203000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_MMBUF_CFG_BASE_ADDR                 (0x40202000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_MMBUF_ASC1_BASE_ADDR                (0x40201000)

/* �Ĵ���˵����4K */
#define SOC_LPMCU_MMBUF_ASC0_BASE_ADDR                (0x40200000)

/* �Ĵ���˵����128K */
#define SOC_LPMCU_NAND_CFG_BASE_ADDR                  (0x40020000)

/* �Ĵ���˵����128K */
#define SOC_LPMCU_NAND_BASE_ADDR                      (0x40000000)

/* �Ĵ���˵����256M */
#define SOC_LPMCU_DRAM_BASE_ADDR                      (0x10000000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_BOOTROM_BASE_ADDR                   (0x00060000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_LPMCU_RAM_BASE_ADDR                 (0x00030000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_LP_RAM_BASE_ADDR                    (0x00020000)

/* �Ĵ���˵����64K */
#define SOC_LPMCU_BOOTROM_NAND_REMAP_BASE_ADDR        (0x00000000)





/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/



/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/



/*****************************************************************************
  6 STRUCT����
*****************************************************************************/



/*****************************************************************************
  7 UNION����
*****************************************************************************/



/*****************************************************************************
  8 OTHERS����
*****************************************************************************/



/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_lpmcu_baseaddr_interface.h */