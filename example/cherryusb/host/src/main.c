#include "rtthread.h"
#include "bf0_hal.h"
#include "usbh_core.h"

/**
 * @brief  Main program
 * @param  None
 * @retval 0 if success, otherwise failure number
 */
int main(void)
{
    rt_kprintf("cherryusb host demo!\n");

    usbh_initialize(0, (uintptr_t)USBC_BASE);

    while (1)
    {
      rt_thread_mdelay(1000);
    }
    return 0;
}

