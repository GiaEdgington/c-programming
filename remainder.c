//find remainder
#include <stdio.h>
int main(void){
    int matches;
    int size;
    scanf("%d", &matches);
    scanf("%d", &size);
    int rest = matches%size;
    
    printf("%d\n", matches/size);
    printf("%d", rest);
        
    return 0;
}