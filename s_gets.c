#include<stdio.h>
#include<string.h>



char *s_gets(char *st, int n)  
{  
    char *ret_val;  
    char *find;  
    ret_val = fgets(st, n, stdin);  
    if(ret_val)  
    {  
        find = strchr(st, '\n');  
        if(find)  
        {  
            *find = '\0';  
        }  
        else  
        {  
            while(getchar() != '\n')  
                continue;  
        }  
    }  
    return ret_val;  
}  


/*这是C经典读物《C Primer Plus》中的一个经典函数，这里单独列为一个文档，用以致敬*/