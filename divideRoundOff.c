//divide decimals with round off

#include <stdio.h>
int main(void){
    double cement;
    int cost = 45;
    int bag = 120;
    scanf("%lf", &cement);
    int cement_int = (int) cement;
    int total_bags;
    if ((cement_int % bag) > 0){
        total_bags = (cement_int/bag) +1;
    } else {
        total_bags = cement_int/bag;
    }
    printf("%d", total_bags * cost );
    return 0;
}