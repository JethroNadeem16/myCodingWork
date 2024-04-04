#include <stdio.h>

int main (){
	int W; //width
	float H; //height
	double AR; //area of rectangle

	W = 10;
	H = 7.5;
	AR = W * H;
	printf("Width: %d \nHeight: %.2f \nArea: %.3lf \n", W, H, AR);
	printf("\n");

	int ball;
	int bat;
	printf("How many balls are there?\n");
	scanf("%d", &ball);
	printf("How many bats are there?\n");
	scanf("%d", &bat);
	printf("\n");

	int total;
	total = ball + bat;
	printf("Balls and Bats in total: %d \n", total);
	
	int difference;
	difference = ball - bat;
	printf("Difference of balls to bats: %d \n", difference);
	
	int multiply;
	multiply = ball * bat;
	printf("Amount of balls to each bat in total: %d \n", multiply);

	int divide;
	divide = ball/bat;
	printf("Division of balls to bats: %d \n", divide);


	return 0;
}
