#include <stdio.h>

int main(void) {

    int nozzle_temperature;

    printf("Enter nozzle temperature: ");

    if (scanf("%d", &nozzle_temperature) != 1) {

        printf("Invalid input.\n");
        return 1;

    }

    printf("Nozzle temperature: %d°C\n", nozzle_temperature);

    if (nozzle_temperature < 190) {

        printf("Warning: Temperature too low!\n");

    } else if (nozzle_temperature <= 220) {

        printf("Temperature OK.\n");

    } else {

        printf("Warning: Temperature too high!\n");
    }

    return 0;
}