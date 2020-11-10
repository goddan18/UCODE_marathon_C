#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    if (agents == NULL) return NULL;
    t_agent **temp = agents;
    int size = 0;
    int length = 0;
    while (*temp) {
        if(mx_strcmp((*temp) -> name, "Smith") == 0 && (*temp) -> strength >= strength)
            size++;
        temp++;
        length++;
    }
    if (size == 0) return NULL; 
    temp = (t_agent**)malloc(16 * (size + 1));
    for (int i = 0; i < size; i++)
        temp[i] = (t_agent*)malloc(16);
    
    temp[size] = NULL;

    int i = 0;
    while (*agents) { 
        if(mx_strcmp((*agents) -> name, "Smith") == 0 && (*agents) -> strength >= strength) {
            temp[i] -> name = mx_strdup((*agents) -> name);
            temp[i] -> power = (*agents) -> power;
            temp[i++] -> strength = (*agents) -> strength;

        }  
        agents++;
    }
    agents -= length;
    mx_exterminate_agents(&agents);

    return temp;
}

