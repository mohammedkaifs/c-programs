#include <stdio.h>
#include<math.h>
int i = 0;
long int decimal(long int n)
{
    if (n == 0)
        return 0;
    else
        return ((n % 10 * pow(2, i++)) + decimal(n / 10));
}
int main()
{
    long int bin, ans;
    printf("\n Enter the binary value:");
    scanf("%ld", &bin);
    ans = decimal(bin);
    printf("\n dacimal equivalent of %ld is %ld",bin,ans);

    return 0;
}