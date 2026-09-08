#include <stdio.h>

int calculate_print_time(int total_layers, int seconds_per_layer) {

    return total_layers * seconds_per_layer;

}

int main(void) {

    int total_layers = 250;
    int seconds_per_layer = 30;
    int total_seconds;

    total_seconds = calculate_print_time(total_layers, seconds_per_layer);

    printf("Total print time: %d seconds\n", total_seconds);

    return 0;
}

