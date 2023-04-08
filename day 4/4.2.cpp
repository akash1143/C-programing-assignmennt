
#include <stdio.h>

struct player {
    char name[20];
    int runs_scored;
};

int main() {
    struct player team[11];
    int i, num_players, total_runs = 0;
    
    printf("Enter the number of players in the team (up to 11): ");
    scanf("%d", &num_players);
    
    for (i = 0; i < num_players; i++) {
        printf("Enter player %d's name: ", i+1);
        scanf("%s", team[i].name);
        
        printf("Enter %s's runs scored: ", team[i].name);
        scanf("%d", &team[i].runs_scored);
        
        total_runs += team[i].runs_scored;
    }
    
    printf("\nTotal runs scored by the team: %d\n", total_runs);
    
    return 0;
}
