#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *res = (t_agent*)malloc(16);
    res -> name = mx_strdup(name);
    res -> power = power;
    res -> strength = strength;  
    return res;
}
