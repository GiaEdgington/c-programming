#include <stdio.h>
int main(void){
    int height, leaflets;
    scanf("%d %d", &height, &leaflets);
    
    if((height >= 12) && (leaflets <= 7)){
        printf("Dorthonian");
    } else if((height >= 10) && (leaflets >= 10)){
        printf("Calaelen");
    } else if((height <= 8) && (leaflets <= 5)){
        printf("Falarion");
    } else if((height <= 5) && (leaflets >= 8)){
        printf("Tinuviel");
    } else {
        printf("Uncertain");
    }
    
    return 0;
}

// the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets

// the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets

// the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets

// the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets