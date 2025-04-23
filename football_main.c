#include "football.h"

int main(int argc, char *argv[]) {
    int score;

    while (1) {
        printf("Enter 0 or 1 to STOP\nEnter an NFL score: ");
        if (scanf("%d", &score) != 1 || score == 0 || score == 1) {
            break;
        }
        int combinations = count_combinations(score);
        printf("Combination count: %d\n", combinations);
        print_combinations(score);
    }
    return 0;
}