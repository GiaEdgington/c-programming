#include <stdio.h>
int main(void){
    int names;
    scanf("%d", &names);
    char first_name[101];
    char last_name[101];
    int i=0;

    while(i<names){
        scanf("%s %s", first_name, last_name);
        printf("%s %s\n", last_name, first_name);
        i++;
    }
    return 0;
}