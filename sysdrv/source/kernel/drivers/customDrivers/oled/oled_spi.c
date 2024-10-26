#include <linux/module.h> //所有模块都需要的头文件
#include <linux/init.h>   // init&exit相关宏
#include <linux/kernel.h>

#include "oled_spi.h"

static int __init hello_init(void)
{
      printk(KERN_WARNING "hello world.\n");
      return 0;
}
static void __exit hello_exit(void)
{
      printk(KERN_WARNING "hello exit!\n");
}
 
module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
