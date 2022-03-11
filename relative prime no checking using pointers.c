#include <stdio.h>
int relative_prime_check(int *a, int *b)
{
    int i=2,j;
    while(i<=*a)
    {
        if((*a)%i==0 && (*b)%i==0)
        {
            j=0;
        }
        else
        {
            j=1;
        }
        i++;
    }
    return j;
}
int main()
{
    int x,y,check;
    printf("Enter 2 number:");
    scanf("%d %d",&x,&y);
    check=relative_prime_check(&x,&y);
    if(check==0)
        printf("%d and %d are not relatively prime",x,y);
    else
        printf("%d and %d are relatively prime",x,y);
    return 0;
}
