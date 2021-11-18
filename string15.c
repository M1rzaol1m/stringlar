#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    printf("\n");
    char ism[100];


    printf("ismingizni kiriting : ");
    fgets(ism, 100, stdin);

    int ism_olchami = strlen(ism)-1;
    printf("ismingiz %d-ta harifdan iborat ", ism_olchami);
    printf("\n");
    
    return  0;
}