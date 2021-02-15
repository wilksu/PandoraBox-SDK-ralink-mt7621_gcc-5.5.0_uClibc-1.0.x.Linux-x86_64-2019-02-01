#ifndef _HOOKS_H_
#define _HOOKS_H_

extern int (*ralink_init_hook)(int dev);
extern int (*ralink_pinctrl_hook)(int dev);
extern int (*ralink_gpio_hook)(int dev);
extern int (*ralink_pci_hook)(int dev);
extern int (*ralink_flash_hook)(int dev);
extern int (*ralink_usb_hook)(int dev);
extern int (*ralink_wifi_hook)(int dev);
extern int (*ralink_ethernet_hook)(int dev);
#endif
