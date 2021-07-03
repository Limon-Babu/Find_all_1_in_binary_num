#include <stdio.h>
int main()
{
    int n,m,count=0;
    scanf("%d",&n);
    m = n;
    while(n){
        if(n&1)count++;
        n = n >> 1;
    }
    printf("Total 1 in binary code of %d is %d",m,count);
    return 0;
}
