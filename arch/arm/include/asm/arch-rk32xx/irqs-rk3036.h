/*
 * (C) Copyright 2008-2015 Fuzhou Rockchip Electronics Co., Ltd
 * Peter, Software Engineering, <superpeter.cai@gmail.com>.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef __RK3036_IRQS_H
#define __RK3036_IRQS_H

#define FIQ_START                       0

#define IRQ_LOCALTIMER                  29

#define IRQ_DMAC_0                      32
#define IRQ_DMAC_1                      33
#define IRQ_DDR_PCTL                    34
#define IRQ_GPU_GP                      35
#define IRQ_GPU_MMU                     36
#define IRQ_GPU_PP                      37
#define IRQ_VEPU                        38
#define IRQ_VDPU                        39
#define IRQ_EMAC                        40
#define IRQ_SFC                         41
#define IRQ_USB_OTG                     42
#define IRQ_USB_HOST                    43

#define IRQ_SDMMC                       46
#define IRQ_SDIO                        47
#define IRQ_EMMC                        48

#define IRQ_NANDC                       50
#define IRQ_I2S                         51
#define IRQ_UART0                       52
#define IRQ_UART1                       53
#define IRQ_UART2                       54
#define IRQ_SPI                         55
#define IRQ_I2C0                        56
#define IRQ_I2C1                        57
#define IRQ_I2C2                        58

#define IRQ_TIMER0                      60
#define IRQ_TIMER1                      61
#define IRQ_PWM                         62

#define IRQ_WDT                         66
#define IRQ_OTG_BVALID                  67
#define IRQ_GPIO0                       68
#define IRQ_GPIO1                       69
#define IRQ_GPIO2                       70

#define IRQ_PERI_AHB_USB_ARBITER        74
#define IRQ_VOP                         75

#define IRQ_HDMI                        77
#define IRQ_SDMMC_DETECT                78
#define IRQ_SDIO_DETECT                 79

#define IRQ_OTG0_ID                     83
#define IRQ_OTG0_LINESTATE              84
#define IRQ_OTG1_LINESTATE              85
#define IRQ_SD_DETECTN                  86
#define IRQ_VPU_MMU                     87
#define IRQ_HEVC_MMU                    88
#define IRQ_HEVC_DEC                    89
#define IRQ_TIMER2                      90
#define IRQ_TIMER3                      91
#define IRQ_SPDIF                       92


#define NR_GIC_IRQS                     (4 * 32)
#define NR_GPIO_IRQS                    (3 * 32)
#define NR_IRQS                         (NR_GIC_IRQS + NR_GPIO_IRQS)

#endif /* __RK3036_IRQS_H */
