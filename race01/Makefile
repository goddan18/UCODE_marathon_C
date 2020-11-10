all: MINILIBMX test

MINILIBMX: 
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o part_of_the_matrix src/*.c

uninstall:
	rm part_of_the_matrix

clean:
	rm ./part_of_the_matrix

reinstall:
	make uninstall
	make

test:
	./part_of_the_matrix | cat -e
	./part_of_the_matrix "xxx" "+" "?0?" "1?0" | cat -e
	./part_of_the_matrix "???" "??" "XXX" "1?0" | cat -e
	./part_of_the_matrix "?" "?" "1" "8" | cat -e
	./part_of_the_matrix "-3" "+" "-?4" "-2?" | cat -e
	./part_of_the_matrix "  ??  " "  /  " "  11  " "  1  " | cat -e
	./part_of_the_matrix "69" "/" "0" "?" | cat -e
	./part_of_the_matrix "?" "*" "11" "??" | cat -e
	./part_of_the_matrix "343111" "-" "??????" "343110" 
