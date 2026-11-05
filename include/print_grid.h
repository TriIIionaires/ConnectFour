#ifndef PRINT_GRID_H
#define PRINT_GRID_H

// ANSI escape codes
#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define BLANK    "\033[0;90m"
#define RED      "\033[1;91m"
#define YELLOW   "\033[1;93m"

void print_grid(int grid[6][7]);

#endif
