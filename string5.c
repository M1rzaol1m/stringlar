#include <stdio.h>
int main()
{
    int n;
    printf("son kiriting:");
    scanf("%d", &n);
    char c=123;
if (n>1 && n<26){
    for(int i=0; i<n; i++){
        c--;
        printf("\n%c", c);
    }
}
        
    return 0;
}