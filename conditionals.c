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


//if statements: youth hostel
#include <stdio.h>
int main(void){
    int arrival;
    int base_cost = 10;
    int total_cost;
    scanf("%d", &arrival);
    if(arrival == 0){
        total_cost = base_cost;
    } else {
       total_cost = base_cost+=arrival*5;
    } 
    if(base_cost > 53){
         total_cost = 53;
     }
    printf("%d", total_cost);
    return 0;
}