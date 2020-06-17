#include <stdio.h>
#include "../h_files/header.h"

void Update() {
    printf("Update\n");
}
void Display() {
    printf("Display\n");
}

void attack(t_character *attacking, t_character *target) {
    int damages = attacking->atk * 0.8 + rand() % (int)(attacking->atk * 1.2 - attacking->atk * 0.8 + 1);

    printf("%s inflige %d à %s\n", attacking->name, damages, target->name);
    target->hp -= damages;
    if (target->hp <= 0) {
        target->is_alive = 0;
        target->hp = 0;
    }
    printf("les HPs de %s sont réduits à %d\n", target->name, target->hp);
}

void heal(t_character *healing) {
    int base_heal = 20;
    int heal_value = base_heal * 0.8 + rand() % (int)(base_heal * 1.2 - base_heal * 0.8 + 1);

    healing->hp += heal_value;
    printf("%s se heal de %d PV\n", healing->name, heal_value);
}

void enemy_turn(t_character *enemy, t_character *player) {
    if (enemy->is_alive == 1) {
        attack(enemy, player);
    }
}