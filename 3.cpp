#include <iostream>

using namespace std;

int main() {

	int height,weight,bmi;

	printf("�п�J�A������: ");

	scanf("%d",&height);

	printf("�п�J�A���魫: ");

	scanf("%d", &weight);



	bmi= weight / ((height / 100.0) * (height / 100.0)); 

	printf ("your BMI is: %d",bmi);

	system("pause");

	return 0;



}
