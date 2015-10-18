#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

static int hello_arg=89 ;
module_param(hello_arg,int,0644);
/*
# insmod hello_module.ko hello_arg=100
89 value wiil be ignored if we provide module param
*/

static  int __init hello_entry(void)
{

	printk(KERN_INFO "hello entry\n");
	printk(KERN_INFO "hello entry: module parameter: %d\n",hello_arg);
	return 0;
}

static  void __exit hello_exit(void)
{
	printk(KERN_INFO "hello exit\n");
}
module_init(hello_entry);
module_exit(hello_exit);

MODULE_AUTHOR("Praveen Shahu");
MODULE_LICENSE("GPL");

