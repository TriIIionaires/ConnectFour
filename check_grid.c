#include "check_grid.h"

int check_grid(int grid[6][7], int origin_row, int origin_col) {
    int disc = grid[origin_row][origin_col];

    if (disc == 0) return 0;

    // Vertical check
    int vertical_count = 1;

    for (int row = origin_row + 1; row < 6; row++) {
        int value = grid[row][origin_col];

        if (value != 0 && value == disc) {
            vertical_count++;

            if (vertical_count >= 4) 
                return 1;
        } else {
            break;
        }
    }

    // Horizontal check
    int horizontal_count = 1;

    for (int col = origin_col + 1; col < 7; col++) {
        int value = grid[origin_row][col];

        if (value != 0 && value == disc) {
            horizontal_count++;

            if (horizontal_count >= 4)
                return 1;
        } else {
            break;
        }
    }

    for (int col = origin_col - 1; col >= 0; col--) {
        int value = grid[origin_row][col];

        if (value != 0 && value == disc) {
            horizontal_count++;

            if (horizontal_count >= 4)
                return 1;
        } else {
            break;
        }
    }

    // Forward diagonal check
    int forward_count = 1;

    for (int row = origin_row - 1, col = origin_col + 1; row >= 0 && col < 7; row--, col++) {
        int value = grid[row][col];

        if (value != 0 && value == disc) {
            forward_count++;

            if (forward_count >= 4)
                return 1;
        } else {
            break;
        }
    }

    for (int row = origin_row + 1, col = origin_col - 1; row < 6 && col >= 0; row++, col--) {
        int value = grid[row][col];
        
        if (value != 0 && value == disc) {
            forward_count++;

            if (forward_count >= 4)
                return 1;
        } else {
            break;
        }
    }

    // Back diagonal check
    int back_count = 1;

    for (int row = origin_row - 1, col = origin_col - 1; row >= 0 && col >= 0; row--, col--) {
        int value = grid[row][col];
        
        if (value != 0 && value == disc) {
            back_count++;

            if (back_count >= 4)
                return 1;
        } else {
            break;
        }
    }

    for (int row = origin_row + 1, col = origin_col + 1; row < 6 && col < 7; row++, col++) {
        int value = grid[row][col];
        
        if (value != 0 && value == disc) {
            back_count++;

            if (back_count >= 4)
                return 1;
        } else {
            break;
        }
    }

    return 0;
}