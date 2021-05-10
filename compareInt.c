//compare decimals to cross bridge (External resource)
#include <stdio.h>
int main(void){
    int val1, val2;
    int total_val;
    scanf("%d %d", &val1, &val2);
    if(val1 < 1 || val2 < 0){
        return 0;
    }
    if(val1 > 6 || val2 > 6){
        return 0;
    }
    if((val1 + val2) >= 10){
        total_val = 36;
        printf("Special tax\n");
        printf("%d", total_val);
    } else {
        total_val = (val1+val2) * 2;
        printf("Regular tax\n");
        printf("%d", total_val);
    }
    return 0;
}