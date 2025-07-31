#include <stdio.h>

int main() {
	float perimeter, width, length;

	printf("Enter the perimeter of the fence: ");
	scanf("%f", &perimeter);
	width = perimeter / 4;
	length = perimeter / 2 - width;
	printf("Fence dimensions:\n");
	printf("Width: %.2f\n",width);
	printf("Length: %.2f\n",length);

	return 0;
}	
