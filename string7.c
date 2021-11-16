// satr berilgan. satirning birinchi va oxirgi belgisi kodini chiqaruchi programma tuzilsin

#include <stdio.h>
int main()
{
    char ism[20];
    printf("ismingizni kiriting : ");
    scanf("%s", ism);
    printf("\nsizning ismingiz : %s", ism);

    printf("\nismingizni 1chi harifi : %d", ism[0]);
    printf("\nismingizni oxirgi harifi : %d\n", ism[8]);

    return 0;
}