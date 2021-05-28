//Activity: controlling an epidemic (External resource)
#include <stdio.h>
int main(void){
    int population;
    scanf("%d", &population);
    int day = 2;
    int total_infected = 3;
    int new_infected;
    
    while(total_infected < population){
        day=day+1;
        new_infected=total_infected*2;
        total_infected+=new_infected;
    }
    printf("%d", day);
    return 0;
}