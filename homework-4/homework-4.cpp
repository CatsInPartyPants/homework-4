// homework-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cmath>

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
		cout << "���������-��������� �����\n"
			<< "\t����:\n"
			<< "\t\t1. ������ ���� �������\n"
			<< "\t\t2. ������ ���� ����\n"
			<< "\t\t3. ��������� ����� � �������\n"
			<< "\t\t4. ��������� ����� � ����\n"
			<< "\t\t5. ��������� ������� � �����\n"
			<< "\t\t6. ��������� ���� � �����\n"
			<< "\t\t0. �����\n";
		cin >> userSelect;
		if (userSelect == 1) {
			cout << "���� ������� 62 �����.\n";

			cout << "����������? y/n\n";
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
			cout << "���� ���� 65 ������.\n";

			cout << "����������? y/n\n";
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
			cout << "��������� ����� � �������, ������� ����� ���������� ������ ��������� � �������?\n";
			cin >> temp;
			cout << "�� �������� " << round((temp / 62)*100)/100 << " ��������!\n";

			cout << "����������? y/n\n";
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
			cout << "��������� ����� � ����, ������� ����� ���������� ������ ��������� � ����?\n";
			cin >> temp;
			cout << "�� ��������  " << round((temp / 65)*100)/100 << " ����!\n";

			cout << "����������? y/n\n";
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
			cout << "����� ���������� �������� �� ������ �������?\n";
			cin >> temp;
			cout << "�� �������� �� ��� " << round((temp * 62)*100)/100 << " ������!\n";

			cout << "����������? y/n\n";
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
			cout << "����� ���������� ���� �� ������ �������?\n";
			cin >> temp;
			cout << "�� �������� �� ��� " << round((temp * 65)*100)/100 << " ������!\n";

			cout << "����������? y/n\n";
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

	int number;
	int n1, n2, n3, n4, n5, n6;
	cout << "������� ����� ������������ ����� -> ";
	cin >> number;
	if (number / 100000 < 1 || number/100000 >9) {
		cout << "������� �� ������������ �����!\n";
	}
	else {
		cout << "������� ������������ �����!\n";
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
			cout << "������ ����� ����������!\n";
		}
		else {
			cout << "��� ����� �� ����������!\n";
		}

	}

	//task3

}

