#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	system("cls");
	string MeniOdabir[4] = { "\n\t1. PUTNIK","\n\t2. AGENCIJA","\n\t3. RADNIK" ,"\n\t4. IZLAZ" };
	int pointer = 0;
	bool MeniProvjera = true;

	while (MeniProvjera)
	{
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "Odabir\n\n";
		for (int i = 0; i < 4; ++i)
		{
			if (i == pointer)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << MeniOdabir[i] << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << MeniOdabir[i] << endl;
			}
		}

		while (MeniProvjera)
		{
			if (GetAsyncKeyState(VK_UP) & 1)
			{
				pointer = pointer - 1;
				if (pointer == -1)
				{
					pointer = 3;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) & 1)
			{
				pointer += 1;
				if (pointer == 4)
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
					std::cout << "Odabrali ste opciju PUTNIK.\n";
					Sleep(1000);
					MeniProvjera = false;
					break;
				}
				case 1:
				{
					system("cls");
					std::cout << "Odabrali ste opciju AGENCIJA\n";
					Sleep(1000);
					MeniProvjera = false;
					break;
				}
				case 2:
				{
					system("cls");
					std::cout << "Odabrali ste opciju RADNIK\n";
					Sleep(1000);
					MeniProvjera = false;
					break;
				}
				case 3:
				{
					system("cls");
					std::cout << "Izlaz\n";
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