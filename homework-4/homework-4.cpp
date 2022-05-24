// homework-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

//task 5 (start)
void TravelVerification(double distance1, double distance2, double fuel_level, double fuelConsumption);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//task1
	/*
	double userSelect, temp;
	char userAnswer;

	while (1) {
		cout << "currency converter program\n"
			<< "\tMenu:\n"
			<< "\t\t1. dollar exchange rate\n"
			<< "\t\t2. euro exchange rate\n"
			<< "\t\t3. rubles -> dollars\n"
			<< "\t\t4. rubles -> euro\n"
			<< "\t\t5. dollars -> rubles\n"
			<< "\t\t6. euro -> rubles\n"
			<< "\t\t0. Выход\n";
		cin >> userSelect;
		if (userSelect == 1) {
			cout << "dollar exchange rate 62 rub.\n";

			cout << "Continue? y/n\n";
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
			cout << "euro exchange rate 65 rub.\n";

			cout << "Continue? y/n\n";
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
			cout << "How much rubles do you want to exchange to dollars?\n";
			cin >> temp;
			cout << "You will get " << round((temp / 62)*100)/100 << " dollars!\n";

			cout << "Continue? y/n\n";
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
			cout << "How much rubbles do you want to exchange to euro?\n";
			cin >> temp;
			cout << "You will get  " << round((temp / 65)*100)/100 << " euro!\n";

			cout << "Continue? y/n\n";
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
			cout << "How much dollars do you want to sell?\n";
			cin >> temp;
			cout << "You will get " << round((temp * 62)*100)/100 << " rubles!\n";

			cout << "Continue? y/n\n";
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
			cout << "How much euros do you want to sell?\n";
			cin >> temp;
			cout << "You will get " << round((temp * 65)*100)/100 << " rubles!\n";

			cout << "Continue? y/n\n";
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
	
	//task2
		
	int number;
	int n1, n2, n3, n4, n5, n6;
	cout << "enter a six-digit number -> ";
	cin >> number;
	if (number / 100000 < 1 || number/100000 >9) {
		cout << "it is not a six-digit number!\n";
	}
	else {
		cout << "it is a six-digit number!\n";
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
			cout << "Happy!\n";
		}
		else {
			cout << "Not happy!\n";
		}

	}

	//task3
		
	int user_num;
	int first_num, second_num, third_num, fourth_num;
	cout << "enter a 4-digit number ->";
	cin >> user_num;
	if (user_num / 1000 < 1 || user_num / 1000 > 9) {
		cout << "it is not 4-digin number!\n";
	}
	else {
		cout << "It is 4-digit number\n";
		fourth_num = user_num % 10;
		user_num /= 10;
		third_num = user_num % 10;
		user_num /= 10;
		second_num = user_num % 10;
		user_num /= 10;
		first_num = user_num;
		cout << "Before:\n";
		cout << first_num << " " << second_num << " " << third_num << " " << fourth_num << endl;
		cout << "After:\n";
		cout << second_num * 1000 + first_num * 100 + fourth_num * 10 + third_num << endl;
	}

	//task4
		
	int user_numbers[7] {0};
	cout << "Enter 7 numbers:\n";
	for (int i = 0; i <= 6; i++) {
		int user_number;
		cin >> user_number;
		user_numbers[i] = user_number;
		if(i<6)	
			cout << "Next:\n";
	}
	
	int max_value=0;
	for (int i = 0; i <= 6; i++) {
		if (user_numbers[i] > max_value) {
			max_value = user_numbers[i];
		}
	}
	cout << "The max number is : " << max_value << endl;

	//task 5
	*/
	double diss_ab, diss_bc, weight;
	double fuel = 300;

	cout << "Distance from A to B (km) ->";
	cin >> diss_ab; 
	cout << "Distance from B to C (km) ->";
	cin >> diss_bc;
	cout << "Enter the weight of the cargo (kg) ->";
	cin >> weight;

	if (weight > 2000) {
		cout << "Can't flight: weight is too high!\n";
	}
	else if (weight > 1500) 
	{
		double fuelCons = 9;
		TravelVerification(diss_ab, diss_bc, fuel, fuelCons);
	}
	else if (weight > 1000) 
	{
		double fuelCons = 7;
		TravelVerification(diss_ab, diss_bc, fuel, fuelCons);
	}
	else if (weight > 500)
	{
		double fuelCons = 4;
		TravelVerification(diss_ab, diss_bc, fuel, fuelCons);
	}
	else if (weight < 500 && weight >0)
	{
		double fuelCons = 1;
		TravelVerification(diss_ab, diss_bc, fuel, fuelCons);
	}
	else {
		cout << "Error weight!";
	}
}
void TravelVerification(double distance1, double distance2, double fuel_level, double fuelConsumption) {
	if (fuel_level / fuelConsumption < distance1) {
		cout << "Can't reach to B (disstance is to big)\n";
	}
	else {
		fuel_level = fuel_level - (fuelConsumption * distance1);
		cout << "When you will be in B, fuel level will be: " << fuel_level << " liters." << endl;
		cout << "You need " << (distance2 * fuelConsumption) << " liters of the fuel to reach C.\n";
		if ((distance2 * fuelConsumption) - fuel_level < 0) {
			cout << "You have enough fuel to reach C!\n";
		}
		else {
			cout << "We need to add " << (distance2 * fuelConsumption) - fuel_level << " liters of the fuel minimum.\n";
		}
		if (distance2 * fuelConsumption > 300) {
			cout << "And the tank of the plane is 300 liters only. We can't fly to C!\n";
		}
	}
}

