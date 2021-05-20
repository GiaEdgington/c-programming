//store recipe ingredients in array

#include <stdio.h>
int main(void){
    int quantities[10];
    int ingredient;
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d", &quantities[i]);
    }
    scanf("%d", &ingredient);
    printf("%d", quantities[ingredient]);
    
    return 0;
}