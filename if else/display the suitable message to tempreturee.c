#include <stdio.h>

int main() {
    float temperature;

    // Prompt user to enter temperature in centigrade
    printf("Enter temperature in centigrade: ");
    scanf("%f", &temperature);

    // Determine the temperature state and display the message
    if (temperature < 0) {
        printf("Freezing weather\n");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("Very cold weather\n");
    } else if (temperature > 10 && temperature <= 20) {
        printf("Cold weather\n");
    } else if (temperature > 20 && temperature <= 30) {
        printf("Normal in Temp\n");
    } else if (temperature > 30 && temperature <= 40) {
        printf("Hot\n");
    } else {
        printf("Very Hot\n");
    }

    return 0;
}

