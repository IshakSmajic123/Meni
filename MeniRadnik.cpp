#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	system("cls");
	string MeniRadnik[5] = { "\n\t1. Izvrsi prodaju karte","\n\t2. Pregledaj spisak putnika","\n\t3. Checkiranje putnika" ,"\n\t4. Provjeri stanje leta","\n\t0. Izlaz" };
	int pointer = 0;
	bool MeniProvjera = true;

	while (MeniProvjera)
	{
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "Main Menu\n\n";
		for (int i = 0; i < 5; ++i)
		{
			if (i == pointer)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << MeniRadnik[i] << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << MeniRadnik[i] << endl;
			}
		}

		while (MeniProvjera)
		{
			if (GetAsyncKeyState(VK_UP) & 1)
			{
				pointer = pointer - 1;
				if (pointer == -1)
				{
					pointer = 4;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) & 1)
			{
				pointer += 1;
				if (pointer == 5)
				{
					pointer = 0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) & 1)
			{
				switch (pointer)
				{
				case 0:
				{
					system("cls");
					std::cout << "Odabrali ste opciju prodavanja karte.\n";
					Sleep(1000);
					MeniProvjera = false;
					break;
				}
				case 1:
				{
					system("cls");
					std::cout << "Odabrali ste opciju pregledanja spiska putnika\n";
					Sleep(1000);
					MeniProvjera = false;
					break;
				}
				case 2:
				{
					system("cls");
					std::cout << "Odabrali ste opciju checkiranja putnika\n";
					Sleep(1000);
					MeniProvjera = false;
					break;
				}
				case 3:
				{
					system("cls");
					std::cout << "Stanje leta:\n";
					Sleep(1000);
					MeniProvjera = false;
					break;
				}
				case 4:
				{
					system("cls");
					std::cout << "Izlaz.\n";
					Sleep(1000);
					MeniProvjera = false;
					break;
				}
				default:
				{
					std::cout << "Greska!";
				}
				}
			}
		}
		Sleep(150);
	}

	return 0;
}