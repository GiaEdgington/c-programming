//convert integers to doubles
#include <stdio.h>
int main(void){
    int n, i;
    scanf("%d", &n);
    int grades[n];
    int sum= 0;
    double dub;
     for(i = 0; i < n; i++){
       scanf("%d", &grades[i]);
       sum += grades[i];
    };
    dub = (double) sum;
    double average = dub/n;
    printf("%.2lf", average);
    return 0;
}