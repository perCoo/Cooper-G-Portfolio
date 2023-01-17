#include <stdio.h> 

int main() {

	float c;
	float f;


	printf("Type the temperature in fahrenheit: "); 

	scanf("%f", &f);


	c = (5.0/9.0) * (f-32.0);


	printf("Your temperature in celsius is %.1f\n", c);

	return 0; 	
}
