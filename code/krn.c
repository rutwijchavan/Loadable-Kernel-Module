#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

static int __init mine_init(void)
{
printk(KERN_INFO "HELLO FROM KERNEL\n");
return 0;

}

static void __exit mine_exit(void)
{
printk(KERN_INFO "bye FROM KERNEL\n");
}


module_init(mine_init);
module_exit(mine_exit);
MODULE_LICENSE("GPL");
