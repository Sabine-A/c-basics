#include <stdio.h>

int main(void) {

    int current_temperature = 230;
    int target_temperature = 210;

    while (current_temperature > target_temperature) {

        printf("Cooling nozzle: %d°C\n", current_temperature);

        current_temperature -= 5;
    }

    printf("Target reached: %d°C\n", current_temperature);

    return 0;
}