#include<iostream>
using namespace std;
//function prototype
float markaverage(float marks [7]);

//function definition
float markaverage(float marks [7]) {
	float sum = 0.0;
	for (float i = 0; i <= 7; i++)
		sum = sum +  marks [7];
	float average = sum / 7;
	cout << " The average of 7 numbers is : " << average << endl;

	return 0;
}
int main() {
	float marks[7];
	cout << "Find the average of 7 numbers " << endl;

	for (float i = 0; i < 7; i++)
	{
		float input = 0.0;
		cout << "Key in the numbers :" << i + 1 << endl;
		cin >> input;
		marks[7] = input;
	}
	return 0;
}