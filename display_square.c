//Activity: print a square of stars using nested loops
#include <stdio.h>
int main(void){
    int num, i, j;
    scanf("%d", &num);
    int square = num * num;
    for(i=0; i < square; i++){
        for(j=0; j < num; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}