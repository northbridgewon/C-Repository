#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    struct tm *local_time;

    // Get the current time
    current_time = time(NULL);

    // Convert the time to local time
    local_time = localtime(&current_time);

    // Print the Epoch time in seconds
    printf("Epoch time in seconds: %ld\n", current_time);

    // Print the Epoch time in milliseconds
    printf("Epoch time in milliseconds: %ld\n", (long)(current_time * 1000));

    // Print the current date and time in a formatted way
    printf("Current date and time: %s", asctime(local_time));

    return 0;
}
