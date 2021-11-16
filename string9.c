#include <stdio.h>
int main()
{
    char ism[20], familiya[20];

    printf("ismingizni kiriting : ");
    scanf("%s",ism);

    printf("familiyangizni kiriting : ");
    scanf("%s",familiya);
    
    printf("\nsizning familiyangiz va ismingiz : %s %s", familiya, ism);

    return 0;
}