#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float hight,weight;
	printf("�п�J����(m)");
	scanf("%f",&hight);
	printf("�п�J�魫(kg)");
	scanf("%f",&weight);
	printf("�A��BMI��=%f\n",weight/(hight*hight));
	system("PAUSE");
	return 0;
}
