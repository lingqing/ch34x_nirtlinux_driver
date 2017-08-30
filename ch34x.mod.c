#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x40d8fc67, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc361ad6c, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xf9586346, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xdb2eed6b, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x461094a0, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x83c1e03e, __VMLINUX_SYMBOL_STR(tty_buffer_request_room) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf07dddf1, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2a205a90, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd0ad8d37, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x81e2afc5, __VMLINUX_SYMBOL_STR(__rt_spin_lock_init) },
	{ 0x780968b6, __VMLINUX_SYMBOL_STR(__rt_mutex_init) },
	{ 0x5ecfc75a, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3869f6ef, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x157a6b68, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xf2997713, __VMLINUX_SYMBOL_STR(tty_termios_hw_change) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x6540c89, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xbcda5ce1, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x87cf12cf, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x18f642ba, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x5e92e89b, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x691c993e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3f368ee4, __VMLINUX_SYMBOL_STR(usb_serial_port_softint) },
	{ 0xd954e6a4, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4d7272e4, __VMLINUX_SYMBOL_STR(migrate_enable) },
	{ 0x19d97448, __VMLINUX_SYMBOL_STR(rt_spin_unlock) },
	{ 0xe611e1e3, __VMLINUX_SYMBOL_STR(rt_spin_lock) },
	{ 0x49608959, __VMLINUX_SYMBOL_STR(migrate_disable) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1A86p7523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p5523d*dc*dsc*dp*ic*isc*ip*in*");
