#include <stdio.h>

int main(){
	int speed;
	printf("Enter a Wind Speed (m/s): ");
	scanf("%d", &speed);

	if (speed >= 1 & speed < 18){
		printf("A wind speed of %d m/s is a tropical depression.\n", speed);
	} else if (speed >= 18 & speed < 33){
		printf("A wind speed of %d m/s is a tropical storm.\n", speed);
	} else if (speed >= 33 & speed < 43){
		printf("A wind speed of %d m/s is a Category 1 hurricane.\n", speed);
	} else if (speed >= 43 & speed < 50){
		printf("A wind speed of %d m/s is a Category 2 hurricane.\n", speed);
	} else if (speed >= 50 & speed < 58){
		printf("A wind speed of %d m/s is a Category 3 hurricane.\n", speed);
	} else if (speed >= 58 & speed < 70){
		printf("A wind speed of %d m/s is a Category 4 hurricane.\n", speed);
	} else if (speed >= 70){
		printf("A wind speed of %d m/s is a Category 5 hurricane.\n", speed);
	} else {
		printf("A wind speed of %d is invalid.\n", speed);
	}
}