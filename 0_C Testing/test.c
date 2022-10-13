#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
  	/*char op;
  	int first, second;
  	printf("Enter an operator (+, -, *, /): ");
  	scanf("%c", &op);
  	printf("Enter two operands: ");
  	scanf("%d %d", &first, &second);
  	
  	switch (op){
  		case '+':
  			printf("%d + %d = %d\n", first, second, first + second);
  			break;
  		case '-':
  			printf("%d - %d = %d\n", first, second, first - second);
  			break;
  		case '*':
  			printf("%d * %d = %d\n", first, second, first * second);
  			break;
  		case '/':
  			printf("%d / %d = %d\n", first, second, first / second);
  			break;
  	}*/
  	time_t t;
	srand((unsigned) time(&t));
  	int ans;
  	bool found = false;
  	while (found == false){
  		int num = rand() % 500 + 1;
  		for (ans = 0; ans < 10000; ++ans){
  			if (ans == num){
  				printf("%d was the random number!\n", ans);
  				break;
  			}
  		}
  	}
}