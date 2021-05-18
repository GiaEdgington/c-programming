#include <stdio.h>

int main(void){
    //int age, weight;
    int age = 22;
    int weight = 25;
    //scanf("%d %d", &age, &weight);
    int cost = 0;
    int full_price = age > 10 && age < 60;
    int kid_price = age < 10;

    if(full_price){
        cost= 30;
    } else if (kid_price){
        cost =5;
    }
    if(full_price && weight > 20){
        cost+=10;
    }
    printf("%d", cost);
    return 0;
}