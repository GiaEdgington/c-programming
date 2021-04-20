#include <stdio.h>
int main(void){
    
    int numRobots, height, weight, enginePower, resistance;
    int i;
    int totalPower = 0;
    scanf("%d", &numRobots);
    
    for(i = 0; i < numRobots; i++){
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        int robPower = (enginePower + resistance) * (weight - height);
        totalPower = totalPower + robPower;
    }
    
    printf("%d", totalPower);
    
    return 0;

}