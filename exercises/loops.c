#include <stdio.h>

int main(void) {

    int total_layers = 5;
    int current_layer;

    for (current_layer = 1; current_layer <= total_layers; current_layer++) {

        printf("Printing layer %d of %d\n", current_layer, total_layers);
    }

    printf("Printing complete!\n");

    return 0;
}