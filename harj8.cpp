/****IIZ01010****
Harjoitus 8
Ryhm‰: IIO14S2
Tekij‰: Joel Kortelainen
Kuvaus: Ohjelma kysyy k‰ytt‰j‰lt‰ kolme (3) kokonaislukua ja j‰rjest‰‰ luvut pienimm‰st‰ suurimpaan
Versio 1.0
24.9.2014
*/
#include <iostream>
using namespace std;

int main()
{
	int numbers[3];
	int size = 3;
	int i, j, temp, flag = 1;

	cout << "Enter three (3) integers, please \n";
	for (i = 0; (i < size); i++)
		cin >> numbers[i];

	for (i = 1; (i <= size) && flag; i++){
		flag = 0;
		for (j = 0; j < (size - 1); j++){
			if (numbers[j + 1] < numbers[j]){
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
				flag = 1;
			}
		}
	}
		cout << "Here are your numbers in ascending order \n";
	for (i = 0; i < size; i++)
		cout << numbers[i] << " ";
	
}