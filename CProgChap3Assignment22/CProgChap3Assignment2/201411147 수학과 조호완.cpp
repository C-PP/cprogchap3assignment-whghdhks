#include <stdio.h>
#include <stdlib.h>
void function(float height_centi);

int main(void)
{
	float height_centi;

	printf("Please enter your height in centimeter: ");
	printf(" _____cm\b\b\b\b\b\b\b");
	scanf_s("%f", &height_centi);
	function(height_centi);
	getchar();
	return 0;
}

void function(float height_centi)       /* start of function definition */
{
	float height_inch;     

	height_inch = height_centi / 2.54 ;
	printf("My height is %.1fcm and my height in inch is %.2fin.", height_centi, height_inch);
	system("pause");
}

/*
#include <stdio.h>
#include <stdlib.h>
void function(float height_inch);

int main(void)
{
	float height_inch;

	printf("Please enter your height in inches: ");
	printf(" _____in\b\b\b\b\b\b\b");
	scanf_s("%f", &height_centi);
	function(height_inch);
	getchar();
	return 0;
} 
void function(float height_inch)       
{
	float height_centi;

	height_centi = height_inch * 2.54;
	printf("My height is %.2fin and my height in inch is %.1fcm.", height_inch, height_centi);
	system("pause");
} 
*/