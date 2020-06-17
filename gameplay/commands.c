#include "../h_files/commands.h"
#include "../h_files/header.h"

void call_function(char *user_input, t_character *player, t_character *enemy) {
    
    t_command function_array[] = {
        {"attack\n", &attack},
        {"heal\n", &heal},
        {0, 0}
    };

    for (int i = 0; function_array[i].command != 0; i++) {
        if (strcmp(user_input, function_array[i].command) == 0) {
            function_array[i].fct(player, enemy);
        }
    }
}
