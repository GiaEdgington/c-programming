//Activity: guess my number (External resource)
#include <stdio.h>
int main(void){
    int num;
    scanf("%d", &num);
    int guess;
    int try = 1;
    scanf("%d", &guess);
    while(guess != num){
        if(guess < num){
            printf("it is more");
        } else {
            printf("it is less");
        }
        printf("\n");
        try+=1;
        scanf("%d", &guess);
    }
    printf("Number of tries needed:\n%d", try);
    return 0;
}