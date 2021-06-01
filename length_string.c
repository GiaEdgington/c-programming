#include <stdio.h>
int main(void){
    char name[50];
    scanf("%s", name);
    int i = 0;
    while (name[i]!='\0') 
        i++;
    if(i%2 == 0){
        printf("%d", 1);
    } else {
        printf("%d", 2);
    }
    return 0;
}