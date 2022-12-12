#include <stdio.h>

int main() {
	float celsius, fahrenheit; 

	printf("Enter fahrenheit value: ");
	scanf("%f", &fahrenheit);

	celsius = (5.0/9.0) * (fahrenheit - 32.0);

	printf("%.1f Fahrenheit = %.1f Celcius", fahrenheit, celsius);
	
	return 0;
}


