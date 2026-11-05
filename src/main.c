#include <stdio.h>
#include "check_grid.h"

int main() {
    // 0 = empty, 1 = red disc, 2 = yellow disc
    int grid[6][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 2, 0, 0},
        {2, 0, 1, 2, 2, 1, 0},
        {1, 1, 1, 2, 1, 0, 1}
    };

    printf("%d\n", check_grid(grid, 4, 2));

    return 0;
}