//Activity: monitoring a chemical experiment (External resource)
#include <stdio.h>
int main(void){
    int min, max;
    scanf("%d %d", &min, &max);
    int temp;
    scanf("%d", &temp);
    while(temp != -999){
        if(temp >= min && temp <= max){
            printf("Nothing to report\n");
        } else {
            printf("Alert!");
            break;
        }
        scanf("%d", &temp);
    }
    return 0;
}