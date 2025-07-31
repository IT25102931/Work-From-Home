#include <stdio.h>

int main() {
	// Variables
	double speed_kmph, speed_mps, distance, time, acceleration;

	// Input
	printf("Enter the takeoff speed in km/h:");
	scanf("%lf", &speed_kmph);

	printf("Enter the acceleration distance in meters:");
	scanf("%lf", &distance);

	// Convert speed to m/s
	speed_mps = speed_kmph * 1000 / 3600;

	// Using the formula: s = 0.5*a*t^2 and v = a*t
	// Solve for time: t = (2*s) / v
	time = (2 * distance) / speed_mps;

	// Solve for acceleration: a = v/t
	acceleration = speed_mps / time;

	// Output
	printf("Time to reach takeoff speed: %.2f seconds\n", time);
	printf("Acceleration needed: %.2f m/s^2\n", acceleration);

	return 0;

} 
