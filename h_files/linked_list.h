#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "character.h"

typedef struct s_node {
    t_character enemy;
    t_node *next;
} t_node;

#endif /* _LINKED_LIST_H_ */
