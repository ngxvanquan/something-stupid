#include <stdio.h>

int fahrToCelsius(float fahr) {
    printf("%3.0f\t%6.1f\n", fahr, 5.0/9.0 * (fahr - 32));
    return 0;
}

int main() {
    for (int i = -10; i <= 220; i+=10) {
        fahrToCelsius(i);
    }
    
    return 0;
}