#include <stdio.h>
#include <string.h>

int main()
{
    char ism[100];
    printf("ismingizni kiriting : ");
    scanf("%s", ism);

    int ism_olchami = strlen(ism);

    for (int i=ism_olchami-1; i>=0; i--){
        printf("%c", ism[i]);
    }

    printf("\n");

    return 0;
}
