#include <stdio.h>

// Define constant for the number of days in a week
#define DAYS_IN_WEEK 7

int main() {
    // Array to hold the names of the days
    const char *days[DAYS_IN_WEEK] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };

    // Iterate over the array and print each day's name
    printf("Days of the week:\n");
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("%d. %s\n", i + 1, days[i]);
    }

    return 0;
}
