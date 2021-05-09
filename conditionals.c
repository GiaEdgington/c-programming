//if statements: carpooling

#include <stdio.h>
int main(void){
    int passengers;
    double gas;
    double cost;
    scanf("%d %lf", &passengers, &gas);
    if(passengers == 0){
        printf("%.2lf", gas);
    } else {
        cost = (gas + 1) / (passengers + 1);
        printf("%.2lf", cost);
    }
    return 0;
}