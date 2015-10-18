#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>



static  int __init hello_entry(void)
{

	printk(KERN_INFO "hello entry\n");
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

