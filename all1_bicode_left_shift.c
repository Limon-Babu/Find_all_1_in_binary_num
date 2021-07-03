#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m, num, count=0;
    n = sizeof(int) *CHAR_BIT;
    printf("Please enter your number: ");
    scanf("%d",&num);
    m = num;
    for(int i=0;i<n;i++){
        if(num & (1 << i)){
            count++;
        }
    }
    printf("Total 1 in binary code of %d is %d!",m,count);
    return 0;
}
