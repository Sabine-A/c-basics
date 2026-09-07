#include <stdio.h>

int main(void) {
    char material[] = "PLA";
    int nozzle_temperature = 210;

    printf("Material: %s\n", material);
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