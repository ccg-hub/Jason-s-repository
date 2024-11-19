#define TYPEOF(X) _Generics(X,int:int,float:float,double:double,long:long,long long:long long,char:char,long double:long double,_Bool:_Bool,default:int)
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>



void initialintarray(int* a, int length)
{
	int i;
	for (i = 0; i < length; i++)
		*(a + i) = 0;
}

void get_matrix(int s,int t,double *a)
{
	int x,y;
	for(x=0;x<s;x++)
	{		
		for(y=0;y<t;y++)
		{
			scanf("%lf",a+x*t+y);
		}
	}
	return;
}

long int sumlongarray(long int* a, int l,int r)
{
	long int sum;int i;
	for (i = l-1, sum = 0L; i < r; i++)
	{
		sum += *(a + i);
	}
	return sum;
}

void absolutelongarray(long int* a,int l,int r)
{
	int i;
	for (i = l-1; i < r; i++)
	{
		if (*(a + i) <= 0)
			*(a + i) = -(*(a + i));
	}
}

void multiplylongarray(long int* a, int n,int mult)
{
	int i;
	for (i = 0; i < n; i++)
	{
		(*(a + i)) *= mult;
	}
}

void addlongarray(long int* a, long int add, int l, int r)
{
	int i;
	for(i = l-1; i < r;i++)
	{
		*(a + i) += add;
	}
}

void prwhich(long int* a,long int m,int l,int r)
{
	int i;
	for (i = l - 1; i < r; i++) 
	{
		if (*(a + i) == m)
			printf("%d ", i + 1);
	}
	printf("\n");
}

long int telllongmax(long int* a, int s,int e)
{
	int i; long int max=*a;
	for (i = s-1; i < e; i++)
	{
		if (max < *(a + i))
			max = *(a + i);
	}
	return max;
}

double average_array(int *a,int l)
{
	int count; 
	double total;
	for(count=0,total=0;count<l;count++)
	{
		total+=*(a+count);
	}
	return total/(double)l;
}

double average_2darray(int s,int l,int (*a)[l])
{
	int count; 
	double total;
	for(count=0,total=0;count<l*s;count++)
	{
		total+=*(*a+count);
	}
	return total/(double)(l*s);
}

int max_2dint_array(int s,int l,const int (*a)[l])
{
	int max,count;
	for(count=0,max=a[0][0];count<l*s;count++)
	{
		if(max<*(*a+count))
			max=*(*a+count);
	}
	return max;
}

void exchange_line(int t,double *a,int x1,int x2)
{
	int y;
	double s[t];
	
	for(y=0;y<t;y++)
	{
		s[y]=*(a+x1*t+y);
	}
	for(y=0;y<t;y++)
	{
		*(a+x1*t+y)=*(a+x2*t+y);
	}
	for(y=0;y<t;y++)
	{
		*(a+x2*t+y)=s[y];
	}
	return;
}

void multi_line(int t,double *a,double mult,int line)
{
	int x;
	for(x=0;x<t;x++)
	{
		*(a+line*t+x)*=line;
	}
	return;
}

void mult_plus_line(int t,double *a,int x1,int x2,double mult)
{
	int x;
	for(x=0;x<t;x++)
	{
		*(a+x1*t+x)+=((*(a+x2*t+x))*mult);
	}
	return;
}

void prmatrix(int x,int y,double *a)
{
	int c1,c2;
	for(c1=0;c1<x;c1++)
	{
		for(c2=0;c2<y;c2++)
		{
			printf("%d ",*(a+x*c1+c2));
		}
		printf("\n");
	}
}

void copy_int_array(int * ptr,int * sample,int length)
{
	int count;
	for(count=0;count<length;count++)
	{
		*(ptr+count)=*(sample+count);
	}
}

void copy_double_array(double * ptr,double * sample,int length)
{
	int count;
	for(count=0;count<length;count++)
	{
		ptr[count]=*(sample+count);
	}
}

int getprimary(int max,int* pri,int num)
{
	int count1, count2, count;
	int ispr = 1;
	pri[0]=2;
	for (count1 = 2, count2 = 1; count1 < max&&count2<num ; count1++)
	{
		ispr = 1;
		for (count = 0; count < count2 && ispr == 1; count++)
		{
			if (count1 % primary[count] == 0)
				ispr = 0;
			else
				ispr = 1;
		}
		if (ispr == 1)
		{
			primary[count2] = count1;
			count2++;
		}
	}
	return count2;
}


int getfibonaci(int n)
{
	int count,sum1,sum2;
	for(count=1,sum1=1,sum2=1;count<=n;count++)
	{
		sum1+=sum2;
		int temp=sum2;
		sum2=sum1;
		sum1=temp;
	}
	return sum1;
}


void getfibonaciarray(int*fib,int n)
{
	int count,sum1,sum2;
	for(count=1,sum1=1,sum2=1;count<=n;count++)
	{
		sum1+=sum2;
		int temp=sum2;
		sum2=sum1;
		sum1=temp;
		*(fib+count-1)=sum1;
	}
}

void convertint(int* a,int* b,int n,int (*func)(int m))
{
	int count;
	for(count=0;count<n;count++)
	{
		b[count]=func(a[count]);
	}
}

void convertinttochar(int* a,char* b,int n,char (*func)(int m))
{
	int count;
	for(count=0;count<n;count++)
	{
		b[count]=func(a[count]);
	}
}

void convertchartoint(char* a,int* b,int n,int (*func)(char m))
{
	int count;
	for(count=0;count<n;count++)
	{
		b[count]=func(a[count]);
	}
}




#endif