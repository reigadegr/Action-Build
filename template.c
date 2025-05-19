#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("DeepSeek");
MODULE_DESCRIPTION("Dummy module to block oplus_network_game_first");
MODULE_ALIAS("oplus_network_game_first");

static int __init dummy_init(void) {
    return 0;
}

static void __exit dummy_exit(void) {
}

module_init(dummy_init);
module_exit(dummy_exit);
