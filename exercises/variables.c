#include <stdio.h>

int main(void) {
    int nozzle_temperature = 210;
    int bed_temperature = 60;
    int print_speed = 50;
    double model_height = 15;
    double layer_height = 0.20;
    double estimated_layers = (model_height / layer_height);
    double model_weight = 25.5;
    double filament_price = 22.99;
    double material_cost = (model_weight / 1000) * filament_price;
    char material_code = 'P';
    char material_name[20] = "PLA";
    

    printf("3D printer settings:\n");
    printf("-------------------------\n");
    printf("Material code: %c\n", material_code);
    printf("Material name: %s\n", material_name);
    printf("Nozzle temperature: %d°C\n", nozzle_temperature);
    printf("Bed temperature: %d°C\n", bed_temperature);
    printf("Layer height: %.2f mm\n", layer_height);
    printf("Print speed: %d mm/s\n", print_speed);
    printf("-------------------------\n");
    printf("Model height: %.2f mm\n", model_height);
    printf("Estimated layers: %.0f\n", estimated_layers);
    printf("Model weight: %.1f g\n", model_weight);
    printf("Material cost: $%.2f\n", material_cost);

    return 0;
}