# CCG的一些常用C语言函数总结
北京航空航天大学2024级 沈元学院 陈乘功 总结
### 关于C的一些说明
int (*func)(int a)的意思是一个指向以一个整形变量为参数且返回一个int类型数的函数的指针  
这个func是自己写的
```
\\例如

int main(void)
{
  int a[50]={1,1,...};\\意会一下
  int b[50];
  convertint(a,b,50,decide);
  return 0;
}

int decide(int a)
{
  if(a>0)
    return 1;
  else
    return 0;
}

void convertint(int* a,int* b,int n,int (*func)(int m))
{
	int count;
	for(count=0;count<n;count++)
	{
		b[count]=func(a[count]);
	}
}


```
