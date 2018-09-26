//用了test_01.c文件的g_count,如果在test_01.c文件中变为 static int g_count = 100;
//编辑报错，此时static修饰的是全局变量，修改了g_count作用域为只是当前的test_01.c文件
static int g_count = 100;