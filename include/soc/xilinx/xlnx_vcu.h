/*
 * Xilinx VCU Init
 *
 * Copyright (C) 2016 - 2017 Xilinx, Inc.
 *
 * Contacts   Dhaval Shah <dshah@xilinx.com>
 *
 * SPDX-License-Identifier: GPL-2.0
 */
#ifndef _XILINX_VCU_H_
#define _XILINX_VCU_H_

#define VCU_GASKET_INIT			0x74
#define VCU_GASKET_VALUE		0x03

/**
 * struct xvcu_device - Xilinx VCU init device structure
 * @dev: Platform device
 * @pll_ref: pll ref clock source
 * @reset_gpio: vcu reset gpio
 * @aclk: axi clock source
 * @logicore_reg_ba: logicore reg base address
 * @vcu_slcr_ba: vcu_slcr Register base address
 * @pll: handle for the VCU PLL
 * @pll_post: handle for the VCU PLL post divider
 * @clk_data: clocks provided by the vcu clock provider
 */
struct xvcu_device {
	struct device *dev;
	struct clk *pll_ref;
	struct clk *aclk;
	struct gpio_desc *reset_gpio;
	void __iomem *logicore_reg_ba;
	void __iomem *vcu_slcr_ba;
	struct clk_hw *pll;
	struct clk_hw *pll_post;
	struct clk_hw_onecell_data *clk_data;
};

u32 xvcu_get_color_depth(struct xvcu_device *xvcu);
u32 xvcu_get_memory_depth(struct xvcu_device *xvcu);
u32 xvcu_get_clock_frequency(struct xvcu_device *xvcu);
u32 xvcu_get_num_cores(struct xvcu_device *xvcu);

#endif  /* _XILINX_VCU_H_ */
