#include <stdio.h>
#include "print_grid.h"

// prints fancy characters for the
static void print_border(const char *left, const char *fill, const char *middle, const char *right) {
    printf("  %s", left);

    for (int col = 0; col < 7; col++) {
        printf("%s%s%s%s", fill, fill, fill, col < 6 ? middle : right);
    }

    printf(RESET "\n");
}

static const char *disc_color(int disc) {
    if (disc == 1) return RED;
    if (disc == 2) return YELLOW;

    return BLANK;
}

void print_grid(int grid[6][7]) {
    printf("\n");

    print_border("╔", "═", "╤", "╗"); // fancy characters :p

    for (int row = 0; row < 6; row++) {
        printf("  ║");

        for (int col = 0; col < 7; col++) {
            if (grid[row][col] != 0)
                printf(" %s●" RESET " %s", disc_color(grid[row][col]), col < 6 ? "│" : "║");
            else
                printf("  " RESET " %s", col < 6 ? "│" : "║");
        }

        printf(RESET "\n");

        if (row < 5)
            print_border("╟", "─", "┼", "╢");
    }

    print_border("╚", "═", "╧", "╝");

    // Legend
    printf("\n  " RED "  ●" RESET " Player 1     " YELLOW "●" RESET " Player 2\n\n");
}
