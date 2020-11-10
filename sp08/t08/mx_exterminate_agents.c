#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
    int i = 0;
    while ((*agents)[i]) {
        free((*agents)[i] -> name);
        free((*agents)[i]);
        (*agents)[i++] = NULL;
    }
    free(*agents);
    *agents = NULL;
}

