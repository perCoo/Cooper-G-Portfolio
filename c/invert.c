#include <stdio.h>

int main() {

	char str[20];

	printf("Type a funny word: ");
	scanf("%s", &str);

	for(int i; str[i] != 0 ; i++) { 
		if(str[i] <= 'z' && str[i] >= 'a') {
			str[i] = str[i] - 32; 
		} else if(str[i] <= 'Z' && str[i] >= 'A') { 
			str[i] = str[i] + 32; 
		}

	}
		printf("Inverted funny word: %s\n", str);  
	return 0; 
}
