//divide decimals

#include <stdio.h>
int main(void){
    double amount, price;
    scanf("%lf %lf", &amount, &price);
    int amount_int = (int) amount;
    int price_int = (int) price;
    printf("%d", amount_int/price_int);
    return 0;
}