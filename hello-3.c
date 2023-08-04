/*
* hello-3.c - Illustrating the __init, __inintdata and __exit macros.
*/

#include <linux/init.h> // Needed for the macros
#include <linux/module.h> // Needed for all modules
#include <linux/printk.h> // Needed for pr_info()

static int hello_3_data __initdata = 3;

static int __init hello_3_init(void)
{
    pr_info("Hello, world %d\n", hello_3_data);
    return 0;
}

static void __exit hello_3_exit(void)
{
    pr_info("Goodbye, world 3\n");
}

module_init(hello_3_init);
module_exit(hello_3_exit);

MODULE_LICENSE("GPL");