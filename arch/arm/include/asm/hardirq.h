/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_HARDIRQ_H
#define __ASM_HARDIRQ_H

#include <asm/irq.h>

#define NR_IPI	16

#define __ARCH_IRQ_EXIT_IRQS_DISABLED	1
#define ack_bad_irq ack_bad_irq

#include <asm-generic/hardirq.h>

#endif /* __ASM_HARDIRQ_H */
