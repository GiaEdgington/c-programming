//Activity: branch inside a loop, how many big cities? (External resource)
#include <stdio.h>
int main(void){
    int cities;
    scanf("%d", &cities);
    int population[cities];
    int i;
    int large = 0;
    for(i=0; i < cities; i++){
        scanf("%d", &population[i]);
        if(population[i] > 10000){
            large+= 1;
        }
    }
    printf("%d", large);
    return 0;
}