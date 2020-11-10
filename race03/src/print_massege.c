#include "../inc/matrix.h"

void print_massege(WINDOW *mainwin, int cols, int rows) {

init_pair(3, COLOR_GREEN, COLOR_BLACK);
	wbkgd(mainwin, COLOR_PAIR(3));

if (cols > 20 && rows > 30) {
    int i = cols / 16;
    int j = rows / 16;
    usleep(15000);

    char first[] = "Wake up , Neo..";
    char second[] = "The Matrix has you..";
    char third[] = "Follow the white rabbit";
    char fourth[] = "Knock, knock, Neo";
	wclear(mainwin);
    for (int k = 0; k < 15; k++) {
        mvwaddch(mainwin, j, i + k, first[k]);
        refresh();
        usleep(170000);
    }
	wclear(mainwin);
    usleep(100000);
    for (int k = 0; k < 20; k++) {
        mvwaddch(mainwin, j, i + k, second[k]);
        refresh();
        usleep(170000);
    }
	wclear(mainwin);
    usleep(100000);
    for (int k = 0; k < 23; k++) {
        mvwaddch(mainwin, j, i + k, third[k]);
        refresh();
        usleep(170000);
    }
	wclear(mainwin);
    usleep(100000);
    for (int k = 0; k < 17; k++) {
        mvwaddch(mainwin, j, i + k, fourth[k]);
        refresh();
        usleep(170000);
    }


}


}
