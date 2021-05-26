//Activity: compute budget using a while loop (External resource)
#include <stdio.h>
int main(void){
    int input;
    scanf("%d", &input);
    int total = 0;
    while(input > -1){
        total+=input;
        scanf("%d", &input);
    }
    printf("%d", total);
    return 0;
}