/*为表示对《C Primer Plus》一书作者的敬意，此函数声明单独列出*/
/*该函数接受一个字符型指针和一个整型变量*/
/*该函数的作用是：读取一整行并存储在*st上，并忽略超出指定n或换行符后的部分*/
/*该函数返回一个字符指针，若未成功读取则为NULL*/
char *s_gets(char *st, int n);