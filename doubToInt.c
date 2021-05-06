//doubles to integers

#include <stdio.h>
int main(void){
    int population;
    double increase;
    scanf("%d", &population);
    scanf("%lf", &increase);
    int percentage = (int) increase;
    printf("%d", population+(population*percentage/100));
    return 0;
}