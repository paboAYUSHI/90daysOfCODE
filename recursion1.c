//factorial
#include <stdio.h>
int fun(int);
int main()
{
    int n,z;
    printf("number: ");
    scanf("%d",&n);
    z=fun(n);
     printf("%d",z);
    return 0;
}
int fun(int n){
    //int count=0;
    if(n==1)
    return 1;
    else
    return n*fun(n-1);
}
