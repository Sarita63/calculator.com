#include<stdio.h>

int main()
{


int num1,num2,res,rep;
printf("enter two numbers");
scanf("%d %d",&num1, &num2);
res=add(num1,num2);
printf("sum is %d %d: %d ",res);
rep=sub(num1,num2);
printf("subtract value is %d %d: %d ",rep);


return 0;

}
int add(int num1,int num2)
{
    int sum;
    sum=num1+num2;
return(sum);
}
int sub(int num1,int num2)
{
    int subs;
    subs=num1-num2;
return(subs);
}
