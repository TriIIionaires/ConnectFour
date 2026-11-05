connect_four: src/main.c src/check_grid.c src/print_grid.c
	gcc -Iinclude src/main.c src/check_grid.c src/print_grid.c -o connect_four
