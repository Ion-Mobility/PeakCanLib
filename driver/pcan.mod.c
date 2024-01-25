#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc1514a3b, "free_irq" },
	{ 0xcdb3b11b, "usb_alloc_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2538d104, "usb_free_urb" },
	{ 0xc6ae7f7e, "param_ops_uint" },
	{ 0x80c22a70, "param_ops_ulong" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2f1a5de6, "pci_enable_device" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x9c4825ca, "usb_get_current_frame_number" },
	{ 0x2e0e2d28, "proc_create" },
	{ 0x85cf8ea3, "param_ops_ushort" },
	{ 0xe97232e3, "pci_iomap" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a72cc4a, "i2c_bit_add_bus" },
	{ 0xa76c1230, "sysfs_add_file_to_group" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4f8c72b, "usb_register_driver" },
	{ 0xb84eb627, "__pci_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x2d5eb7d6, "param_array_ops" },
	{ 0x793bd244, "pci_request_regions" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7bcfba, "pcpu_hot" },
	{ 0xd5cf23fc, "seq_lseek" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe2964344, "__wake_up" },
	{ 0xc7d8135, "pci_irq_vector" },
	{ 0x61f66c5, "param_ops_byte" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x763cce3d, "pci_unregister_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x64470cbc, "usb_clear_halt" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xfe8cbd87, "usb_bulk_msg" },
	{ 0x4a25ecd3, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x4e2103bb, "usb_submit_urb" },
	{ 0xc467dc98, "_dev_info" },
	{ 0x85bd117d, "i2c_del_adapter" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x41507e92, "pci_find_capability" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x505c860b, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbb1bebbf, "dma_alloc_attrs" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x92bc13fc, "pci_read_config_word" },
	{ 0xb65baac6, "usb_control_msg" },
	{ 0x9166fada, "strncpy" },
	{ 0xa7ae42ad, "usb_set_interface" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xde80cd09, "ioremap" },
	{ 0xbfdbaa0e, "class_unregister" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x39daf86b, "sysfs_remove_file_from_group" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x83fa93bd, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7c06a44e, "pci_iounmap" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xfb578fc5, "memset" },
	{ 0x574c86ab, "_dev_warn" },
	{ 0x8f5fb00b, "pci_alloc_irq_vectors_affinity" },
	{ 0xaf31fb1d, "pci_set_master" },
	{ 0x50adc487, "param_ops_charp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc560a550, "dma_get_required_mask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6e91366, "dma_set_coherent_mask" },
	{ 0x86eb2b38, "pv_ops" },
	{ 0x8ae5be25, "seq_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf5dde00e, "device_create_with_groups" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x470b066f, "dma_free_attrs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x12e26aa4, "pci_release_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf876d108, "driver_for_each_device" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x6f42a198, "__register_chrdev" },
	{ 0xa5f2f32, "device_destroy" },
	{ 0xec8aa6be, "remove_proc_entry" },
	{ 0x714daaa8, "usb_kill_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x56470118, "__warn_printk" },
	{ 0x899fb2bc, "seq_printf" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x85023317, "i2c_transfer" },
	{ 0x63a4e667, "pci_disable_device" },
	{ 0xd0896fec, "usb_reset_endpoint" },
	{ 0xa4970fa6, "single_release" },
	{ 0x6b16681d, "dma_set_mask" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xb14c46ef, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x77358855, "iomem_resource" },
	{ 0x51568c19, "single_open" },
	{ 0x189594bd, "pci_write_config_word" },
	{ 0xdccf3c2e, "pci_free_irq_vectors" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd8a8046f, "class_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x33ed7f44, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xaac58f6c, "module_layout" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("pci:v0000001Cd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "197C71CFA85FACF4F5DF984");
