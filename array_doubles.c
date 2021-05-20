//Activity: use an array to balance weights (External resource)
#include <stdio.h>
int main(void){
    int cars;
    scanf("%d", &cars);
    double weight[cars];
    int i;
    int total_weight = 0;
    double weight_per_car;
    for(i = 0; i < cars; i++){
        scanf("%lf", &weight[i]);
        total_weight+=weight[i];
    }
    weight_per_car = total_weight / cars;
    for(i = 0; i< cars; i++){
        printf("%.1lf\n", weight_per_car - weight[i]);
    }
    return 0;
}