#include "h_files/header.h"
#include "h_files/commands.h"
#include "h_files/linked_list.h"

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
    t_character *player = malloc(sizeof(t_character));
    player->name = "Bobby";
    player->atk = 10;
    player->hp = 50;
    player->is_alive = 1;
    player->nb = 0;

    t_node *list = create_enemy_list(5);

    display_list(list);

    add_node(list, 10);
    add_node(list, 12);
    add_node(list, 15);

    display_list(list);

    int game_over = 0;

    char user_input[10] = "";

    srand(time(NULL));

    t_character *enemy = list->enemy;

    while (strcmp(user_input, "exit\n") != 0 && game_over != 1) {

        preturn_display(*player, *enemy);

        // TOUR DU JOUEUR
        if (game_over != 1) {
            fgets(user_input, 10, stdin);
        }

        if (player->is_alive == 1)
            call_function(user_input, &player, &enemy);

        enemy_turn(&enemy, &player);

        game_over = check_endgame(*player, *enemy);

    }

    // CLEAN DES RESSOURCES
    free(player);

    return (0);
}
