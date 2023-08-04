/*
* stop.c - Illustration of multi filed modules
*/

#include <linux/kernel.h> // We doing kernel work
#include <linux/module.h> // A module

void cleanup_module(void)
{
    pr_info("Short is the life of a kernel module\n");
}

MODULE_LICENSE("GPL");