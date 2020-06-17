#include "../h_files/header.h"

t_character *create_enemy(int nb) {
    t_character *enemy = malloc(sizeof(t_character));

    enemy->name = "Villain";
    enemy->hp = 50;
    enemy->atk = 10;
    enemy->is_alive = 1;
    enemy->nb = nb;
}

void display_list(t_node *node) {
    printf("%d\n", node->enemy->nb);
    while (node->next != NULL) {
        node = node->next;
        printf("%d\n", node->enemy->nb);
    }
}

void add_node(t_node *node, int i) {
    t_node *new = malloc(sizeof(t_node));

    new->enemy = create_enemy(i);
    new->next = NULL;

    while (node->next != NULL) {
        node = node->next;
    }
    node->next = new;
}

t_node *create_enemy_list(int count) {
    t_node *first = malloc(sizeof(t_node));

    first->enemy = create_enemy(0);
    first->next = NULL;

    for (int i = 1; i < count; i++) {
        add_node(first, i);
    }
    return (first);
}
