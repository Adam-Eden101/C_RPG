#include "h_files/header.h"
#include "h_files/commands.h"

void preturn_display(t_character player, t_character enemy) {
    printf("=== %s ===\n", player.name);
    printf("=== HP: %d ===\n\n", player.hp);
    printf("=== Enemy %s ===\n", enemy.name);
    printf("=== HP %d ===\n", enemy.hp);
}

int check_endgame(t_character player, t_character enemy) {
    if (enemy.is_alive == 0) {
        printf("Bravo c'est gagné.\n");
        return (1);
    } else if (player.is_alive == 0) {
        printf("Game over\n");
        return (1);
    }
    return (0);
}


int main() {
    printf("%s\n", "Bonjour!");

    /// INITIALISATION
    t_character player = {"Bobby", 50, 10, 1};
    t_character *enemy = malloc(sizeof(t_character));
    
    // {"Villain1", 50, 10, 1};
    t_character enemy2 = {"Villain2", 50, 10, 1};
    t_character enemy3 = {"Villain3", 50, 10, 1};

    t_node E1 = { enemy, NULL };
    t_node E1 = { enemy, NULL };
    t_node E1 = { enemy, NULL };





    int game_over = 0;

    char user_input[10] = "";

    srand(time(NULL));

    while (strcmp(user_input, "exit\n") != 0 && game_over != 1) {

        preturn_display(player, enemy);

        // TOUR DU JOUEUR
        if (game_over != 1) {
            fgets(user_input, 10, stdin);
        }

        if (player.is_alive == 1)
            call_function(user_input, &player, &enemy);

        enemy_turn(&enemy, &player);

        game_over = check_endgame(player, enemy);

    }

    // CLEAN DES RESSOURCES
    free(enemy);

    return (0);
}
