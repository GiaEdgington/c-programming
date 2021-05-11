//if statements, Tug of War
#include <stdio.h>
int main(void){
    int number_players, i;
    scanf("%d", &number_players);
    int n = number_players * 2;
    int players[n];
    int team1_weigh = 0;
    int team2_weigh = 0;
    
    for(i = 0; i < n; i++){
       scanf("%d", &players[i]);
    };
    
    for(i = 0; i < n; i++){
        if(i%2 == 0){
            team1_weigh+=players[i];
        } else {
            team2_weigh+=players[i];
        }
    }
    
    if(team1_weigh > team2_weigh){
        printf("Team 1 has an advantage\n");
    } else {
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", team1_weigh);
    printf("Total weight for team 2: %d\n", team2_weigh);
    return 0;
}