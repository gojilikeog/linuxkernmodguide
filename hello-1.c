/*
* hello-1.c - The simplest kernel module.
*/

#include <linux/module.h> // Needed by all modules
#include <linux/printk.h> // Needed for pr_info()

int init_module(void)
{
    pr_info("Hello World 1.\n");
    /*
    A non 0 return means inint_module failed; moudle can't be loaded.
    */
   return 0;
}

void cleanup_module(void)
{
    pr_info("Goodbye world 1.\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("your-name"); // Why did this solve it?