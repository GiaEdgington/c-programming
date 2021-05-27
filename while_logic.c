//Activity: controlling an epidemic (External resource)
#include <stdio.h>
int main(void){
    int population;
    scanf("%d", &population);
    int day = 2;
    int infected = 3;
    
    while(infected < population){
        day=day+1;
        infected=infected*2;
    }
    printf("%d", day);
    return 0;
}