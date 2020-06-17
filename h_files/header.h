#ifndef _HEADER_H_
#define _HEADER_H_

#include "linked_list.h"

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void Update();
void Display();

void attack(t_character *attacking, t_character *target);
void heal(t_character *healing);

void enemy_turn(t_character *enemy, t_character *player);

#endif /* _HEADER_H_ */
