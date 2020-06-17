#ifndef _COMMANDS_H_
#define _COMMANDS_H_

#include "character.h"

typedef struct s_command
{
    char *command;
    void (*fct)();
}   t_command;

void call_function(char *user_input, t_character *player, t_character *enemy);

#endif /* _COMMANDS_H_ */
