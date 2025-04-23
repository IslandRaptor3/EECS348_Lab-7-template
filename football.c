#include "football.h"

int count_combinations(int points) {
    int count = 0;  //The variable that will be returned and track the total combonations.

    for (int td = 0; td <= points / 6; td++) {                                      //For each touchdown in 'points'
        for (int fg = 0; fg <= points / 3; fg++) {                                  //For each field goal in 'points'
            for (int s = 0; s <= points / 2; s++) {                                 //For each safety in 'points'
                for (int tpc = 0; tpc <= points / 2; tpc++) {                       //For each touchback in 'points'
                    int total = td * 6 + fg * 3 + s * 2 + tpc * 2;      //Counts total

                    if (total == points) {                              //If total == points
                        count++;                                        //Count as a possible combination
                    }
                }
            }
        }
    }
    return count;
}

void print_combinations(int points) {
    //The below structure prints the combination in an organized way...
    //"-" for left-allignment of the inputted string
    //"[num]s" for the padding the string to be minimum of a specific num of chars in length (for cleaner spacing).
    printf("\n%-5s %-5s %-8s %-5s %-6s\n", "TD", "FG", "Safety", "2PC", "Total");
    printf("__________________________________________________\n");

    //Same logic as count_combinations:
    for (int td = 0; td <= points / 6; td++) {
        for (int fg = 0; fg <= points / 3; fg++) {
            for (int s = 0; s <= points / 2; s++) {
                for (int tpc = 0; tpc <= points / 2; tpc++) {
                    int total = td * 6 + fg * 3 + s * 2 + tpc * 2;

                    if (total == points) {
                        printf("%-5d %-5d %-8d %-5d %-6d\n",
                                td, fg, s, tpc, total);
                    }
                }
            }
        }
    }
}


