#include <stdio.h>
int main()
{
    int n;
    char c;
    printf("harif kiriting: ");
    scanf("%c", &c);

    printf("son kiriting: ");
    scanf("%d", &n);
    printf("\n");
    printf("natija");
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }

    return 0;
}
