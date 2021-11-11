#include <iostream>
using namespace std;

int qtyAnswer = 10;
int qtyLive = 5;
bool qtyHint = 1;
string hint = "Да";
int qtyTime = 600;

int setting() {
	system("cls");

	cout << "[+] Настройки\n\n";
	cout << "[1] Количество вопросов: " << qtyAnswer << "\n";
	cout << "[2] Количество жизней: " << qtyLive << "\n";
	cout << "[3] Наличие подсказки : " << hint << "\n";
	cout << "[4] Время: " << qtyTime/60 << " минут\n\n";
	cout << "[0] Назад\n\n";
	cout << "[+] Выберите пункт: ";
	int menuSetting;
	cin >> menuSetting;

	switch (menuSetting) {
	case 0:
	{
		return 0;
		break;
	}
	case 1:
	{
		system("cls");
		cout << "[+] Количество вопросов\n\n[1] 5 вопросов\n[2] 10 вопросов\n[3] 15 вопросов\n\n[0] Назад\n\n[+] Выберите пункт: ";
		int menuAnswer;
		cin >> menuAnswer;
		switch (menuAnswer) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			qtyAnswer = 5;
			break;
		}
		case 2:
		{
			qtyAnswer = 10;
			break;
		}
		case 3:
		{
			qtyAnswer = 15;
			break;
		}
		default:
		{
			cout << "[!]";
			break;
		}

		}
		system("cls");
		setting();
		break;
	}
	case 2:
	{
		system("cls");
		cout << "[+] Количество жизней\n\n[1] 1 жизнь\n[2] 2 жизни\n[3] 3 жизни\n[4] 4 жизни\n[5] 5 жизни\n\n[0] Назад\n\n[+] Выберите пункт: ";
		int menuLive;
		cin >> menuLive;
		switch (menuLive) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			qtyLive = 1;
			break;
		}
		case 2:
		{
			qtyLive = 2;
			break;
		}
		case 3:
		{
			qtyLive = 3;
			break;
		}
		case 4:
		{
			qtyLive = 4;
			break;
		}
		case 5:
		{
			qtyLive = 5;
			break;
		}
		default:
		{
			cout << "[!]";
			break;
		}

		}
		system("cls");
		setting();
		break;
	}
	case 3:
	{
		system("cls");
		cout << "[+] Наличие подсказки\n\n[1] Да\n[2] Нет\n\n[0] Назад\n\n[+] Выберите пункт: ";
		int menuHint;
		cin >> menuHint;
		switch (menuHint) {
		case 0:
		{
			return 0;
			break;
		}
		case 1:
		{
			hint = "Да";
			qtyHint = 1;
			break;
		}
		case 2:
		{
			hint = "Нет";
			qtyHint = 0;
			break;
		}
		default:
		{
			cout << "[!]";
			break;
		}

		}
		system("cls");
		setting();
		break;
	}
	case 4:
	{
		system("cls");
		cout << "[+] Введите количество времени, требуемое на игру (не более 30-и минут): ";
		int menuTime;
		cin >> menuTime;
		while (menuTime < 1 || menuTime > 30) {
			cout << "[+] Введите количество времени, требуемое на игру (не более 30-и минут): ";
			cin >> menuTime;
		}
		qtyTime = menuTime * 60;
		system("cls");
		setting();
		break;
	}
	default:
	{
		return 0;
		break;
	}

	}


	return 0;
}

int startGame() {
	/*while (qtyTime != 0) {
		cout << "секунда";
	}*/

	return 0;
}

int main() {
	setlocale(0, "");

	cout << "[+] Викторина\n\n[1] Начать игру\n[2] Настройки\n\n[0] Выход" << endl << endl;
	cout << "[+] Выберите пункт меню: ";
	int menu;
	cin >> menu;
	switch (menu) {
	case 0:
	{
		return 0;
	}
	case 1:
	{
		startGame();
		system("cls");
		main();
		break;
	}
	case 2:
	{
		setting();
		system("cls");
		main();
		break;
	}
	default:
	{
		cout << "[!]";
		break;
	}
	}

	return 0;
}