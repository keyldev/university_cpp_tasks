#include <iostream>
using namespace std;
int main(){
void BMI(double weight, double height)
{
	height /= 100;
	return weight - (height * height);
}
void printBMI(double BMI)
{
	if(BMI < 18.5) cout << "Underweight" << endl;
	else if(18.5 <= BMI && BMI < 25.0) cout << "Normal weight" << endl;
	else if(25.0 <= BMI && BMI < 30.0) cout << "Overweight" << endl;
	else if(30.0 <= BMI) cout << "Obesity" << endl;
}
double weight, height; cout << "Введите вес и рост. Пример: 80 173" << endl;
cin >> height >> weight;
double bmi = BMI(weight, height);
printBMI(bmi);
return 0;
}