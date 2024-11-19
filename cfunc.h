/*这里是head文件，包含一些说明*/





/*将一个长为length的int数组初始化为全是零*/
void initialintarray(int* a, int length);

/*获取一个s*t的double型矩阵*/
void get_matrix(int s,int t,double *a);

/*求long型数组第l到第r项和，并将和返回*/
long int sumlongarray(long int* a, int l,int r);

/*将数组第l到r项变为其绝对值*/
void absolutelongarray(long int* a,int l,int r);

/*将长度为n的数组每一项乘mult*/
void multiplylongarray(long int* a, int n,int mult);

/*将长度为n的数组第l到r项加add*/
void addlongarray(long int* a, long int add, int l, int r);

/*打印a数组中第l到r项中与m相同的项的位置*/
void prwhich(long int* a,long int m,int l,int r);

/*输出a数组中第s到e项中最大元*/
long int telllongmax(long int* a, int s,int e);

/*输出长度为l的a数组中所有元平均值*/
double average_array(int *a,int l);

/*交换一个每行t个元的矩阵第x1和x2行*/
void exchange_line(int t,double *a,int x1,int x2);

/*将一个每行t个元的矩阵第line行乘mult*/
void multi_line(int t,double *a,double mult,int line);

/*将一个每行t个元的矩阵第x2行乘mult加到第x1行*/
void mult_plus_line(int t,double *a,int x1,int x2,double mult);

/*打印一个x*y的double矩阵*/
void prmatrix(int x,int y,double *a);

/*将长度为length的int型sample数组复制到ptr上*/
void copy_int_array(int * ptr,int * sample,int length);

/*将长度为length的double型sample数组复制到ptr上*/
void copy_double_array(double * ptr,double * sample,int length);

/*将前num个且小于max的质数输出到pri中，并返回质数个数*/
int getprimary(int max,int* pri,int num);

/*返回第n个Fibonacci数*/
int getfibonaci(int n);

/*将前n个Fibonacci数输出到fib中*/
void getfibonaciarray(int*fib,int n);

/*将长度为n的a按照func规则映射到b*/
void convertint(int* a,int* b,int n,int (*func)(int m));

/*将长度为n的a按照func规则映射到b*/
void convertinttochar(int* a,char* b,int n,char (*func)(int m));

/*将长度为n的a按照func规则映射到b*/
void convertchartoint(char* a,int* b,int n,int (*func)(char m));
