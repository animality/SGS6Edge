#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1554f7f8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7d06b106, __VMLINUX_SYMBOL_STR(tcp_reno_cong_avoid) },
	{ 0x45b575f9, __VMLINUX_SYMBOL_STR(tcp_reno_ssthresh) },
	{ 0x5b634a35, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0xae694371, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0xe70ad49, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

