//Activity: array computation (External resource)

#include <stdio.h>
int main(void){
    int quantity;
    scanf("%d", &quantity);
    double price[quantity];
    double weight[quantity];
    int i;
    double total = 0;
    for(i=0; i < quantity; i++){
        scanf("%lf", &price[i]);
    }
    for(i=0; i < quantity; i++){
        scanf("%lf", &weight[i]);
        total+= price[i] * weight[i];
    }
    printf("%.6lf", total);
    
    return 0;
}