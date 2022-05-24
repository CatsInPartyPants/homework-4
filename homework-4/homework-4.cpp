// homework-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//task1
	/*
	double userSelect, temp;
	char userAnswer;

	while (1) {
		cout << "Программа-конвертер валют\n"
			<< "\tМеню:\n"
			<< "\t\t1. Узнать курс доллара\n"
			<< "\t\t2. Узнать курс евро\n"
			<< "\t\t3. Перевести рубли в доллары\n"
			<< "\t\t4. Перевести рубли в евро\n"
			<< "\t\t5. Перевести доллары в рубли\n"
			<< "\t\t6. Перевести евро в рубли\n"
			<< "\t\t0. Выход\n";
		cin >> userSelect;
		if (userSelect == 1) {
			cout << "Курс доллара 62 рубля.\n";

			cout << "Продолжить? y/n\n";
			cin >> userAnswer;
			if (userAnswer == 'y') {
				system("CLS");
				continue;
			}
			else {
				break;
			}
		}
		else if (userSelect == 2) {
			cout << "Курс евро 65 рублей.\n";

			cout << "Продолжить? y/n\n";
			cin >> userAnswer;
			if (userAnswer == 'y') {
				system("CLS");
				continue;
			}
			else {
				break;
			}
		}
		else if (userSelect == 3) {
			cout << "Перевести рубли в доллары, укажите какое количество рублей переводим в доллары?\n";
			cin >> temp;
			cout << "Вы получите " << round((temp / 62)*100)/100 << " долларов!\n";

			cout << "Продолжить? y/n\n";
			cin >> userAnswer;
			if (userAnswer == 'y') {
				system("CLS");
				continue;
			}
			else {
				break;
			}
		}
		else if (userSelect == 4) {
			cout << "Перевести рубли в евро, укажите какое количество рублей переводим в евро?\n";
			cin >> temp;
			cout << "Вы получите  " << round((temp / 65)*100)/100 << " евро!\n";

			cout << "Продолжить? y/n\n";
			cin >> userAnswer;
			if (userAnswer == 'y') {
				system("CLS");
				continue;
			}
			else {
				break;
			}
		}
		else if (userSelect == 5) {
			cout << "Какое количество долларов вы хотите продать?\n";
			cin >> temp;
			cout << "Вы получите за это " << round((temp * 62)*100)/100 << " рублей!\n";

			cout << "Продолжить? y/n\n";
			cin >> userAnswer;
			if (userAnswer == 'y') {
				system("CLS");
				continue;
			}
			else {
				break;
			}
		}
		else if (userSelect == 6) {
			cout << "Какое количество евро вы хотите продать?\n";
			cin >> temp;
			cout << "Вы получите за это " << round((temp * 65)*100)/100 << " рублей!\n";

			cout << "Продолжить? y/n\n";
			cin >> userAnswer;
			if (userAnswer == 'y') {
				system("CLS");
				continue;
			}
			else {
				break;
			}
		}
		else if (userSelect == 0) {
			break;
		}
	}
	*/

	//task2

	/*
	int number;
	int n1, n2, n3, n4, n5, n6;
	cout << "Введите целое шестизначное число -> ";
	cin >> number;
	if (number / 100000 < 1 || number/100000 >9) {
		cout << "Введено не шестизначтое число!\n";
	}
	else {
		cout << "Введено шестизначное число!\n";
		n6 = number % 10;
		number /= 10;
		n5 = number % 10;
		number /= 10; 
		n4 = number % 10;
		number /= 10;
		n3 = number % 10;
		number /= 10;
		n2 = number % 10;
		number /= 10;
		n1 = number % 10;
		number /= 10;
		if ((n1 + n2 + n3) == (n4 + n5 + n6)) {
			cout << "Данное число счастливое!\n";
		}
		else {
			cout << "Это число не счастливое!\n";
		}

	}
	*/

	//task3

	/*
	int user_num;
	int first_num, second_num, third_num, fourth_num;
	cout << "Введите четырехзначное число ->";
	cin >> user_num;
	if (user_num / 1000 < 1 || user_num / 1000 > 9) {
		cout << "Введено не четырехзначное число!\n";
	}
	else {
		cout << "Введено четырехзначное число\n";
		fourth_num = user_num % 10;
		user_num /= 10;
		third_num = user_num % 10;
		user_num /= 10;
		second_num = user_num % 10;
		user_num /= 10;
		first_num = user_num;
		cout << "До модификации:\n";
		cout << first_num << " " << second_num << " " << third_num << " " << fourth_num << endl;
		cout << "После модификации:\n";
		cout << second_num * 1000 + first_num * 100 + fourth_num * 10 + third_num << endl;
	}
	*/

	//task4

	/*
	int user_numbers[7] {0};
	cout << "Введите 7 чисел:\n";
	for (int i = 0; i <= 6; i++) {
		int user_number;
		cin >> user_number;
		user_numbers[i] = user_number;
		if(i<6)	cout << "Следующее:\n";
	}
	
	int max_value=0;
	for (int i = 0; i <= 6; i++) {
		if (user_numbers[i] > max_value) {
			max_value = user_numbers[i];
		}
	}
	cout << "Наибольшее введенное число: " << max_value << endl;
	*/

	//task 5


}

