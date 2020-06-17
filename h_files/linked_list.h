#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "character.h"

typedef struct s_node t_node;

struct s_node {
    t_character *enemy;
    t_node *next;
};

t_node *create_enemy_list(int count);
t_character *create_enemy(int i);
void display_list(t_node *node);
void add_node(t_node *node, int i);

#endif /* _LINKED_LIST_H_ */
