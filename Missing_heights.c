#include <stdio.h>

int main() {
	float height1, height2, height3, average, total, missing1, missing2;

	printf("Enter the heights of three known people:");
	scanf("%f %f %f", &height1, &height2, &height3);

	printf("Enter the average height:");
	scanf("%f", &average);

	total = average * 5;
	float known_total = height1 + height2 + height3;
	float missing_total = total - known_total;

	// Since the two missing heights are almost the same:
	missing1 = missing_total / 2;
	missing2 = missing_total / 2;

	printf("Missing heights are approximately: %.2f and %.2f\n", missing1, missing2);

	return 0;

} 	
