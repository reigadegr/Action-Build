#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DeepSeek");
MODULE_DESCRIPTION("Dummy module to block oplus_network_game_first");
MODULE_ALIAS("oplus_network_game_first");
MODULE_INFO(vermagic, "6.6.30-android15-8-o-4k SMP preempt mod_unload modversions aarch64");

struct module __this_module;
EXPORT_SYMBOL(__this_module);

static int __init init_module(void) {
    return 0;
}

static void __exit cleanup_module(void) {
}

module_init(init_module);
module_exit(cleanup_module);
