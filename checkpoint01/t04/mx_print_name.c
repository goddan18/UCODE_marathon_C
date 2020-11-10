#include <unistd.h>

int main(int argc, char *argv[]) {
    int size = 0, count = 0, temp_num = 0, div_count = 1, n_copy = argc, argc_copy = argc;
    char *temp = argv[0];
    while (*temp++) size++;
    write(1, argv[0], size);
    write(1, "\n", 1);
	while(n_copy > 0) {
		n_copy /= 10;
		count++;
	}	
	for(int i = 0; i < count - 1; i++) {
		div_count *= 10;
	}
	while(argc_copy > 0) {
        temp_num = argc_copy / div_count + 48;
        write(1, &temp_num, 1);
		argc_copy %= div_count;
		div_count /= 10;
	}	
	write(1, "\n", 1);
    return 0;
}
