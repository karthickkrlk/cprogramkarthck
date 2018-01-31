#include<stdio.h>
int main()
{
int l,h,i flag;
Printf("enter two number(interval):")
Scanf("%d%d",&l,&h);
Printf("prime number between%dand%d are.",l,h);
While(l<h)
{
Flag=0;
For(i=2;i<=l/2;++i)
{
If(l%i==0)
{
flag=1;
Break;
}
}
If(flag==0)
Printf("%d",l);
++l;
}
Return 0;
}
