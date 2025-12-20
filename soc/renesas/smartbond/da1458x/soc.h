#ifndef _SOC__H_
#define _SOC__H_

#ifdef __cplusplus
extern "C" {
#endif

#include <zephyr/arch/arm/cortex_m/nvic.h>

/* CMSIS required values */
typedef enum {
	NonMaskableInt_IRQn = -14,
	HardFault_IRQn = -13,
	SVCall_IRQn = -5,
	PendSV_IRQn = -2,
	SysTick_IRQn = -1,
} IRQn_Type;

#define __NVIC_PRIO_BITS       (NUM_IRQ_PRIO_BITS)
#define __Vendor_SysTickConfig (0)

#include <core_cm0.h>

#ifdef __cplusplus
}
#endif

#endif /* _SOC__H_ */
