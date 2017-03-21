//****
//2048
//****

//Ali Gholami (932171021) & Mohamad Khajavi(932171008);
//Final Project - Ver: 1.0

//*****************************************************

#include <iostream>
#include <windows.h>      //TEXT COLOR
#include <fstream>            //HIGHSCORE
#include <cstdlib>            //RANDOM
#include <ctime>          //RANDOM
#include <conio.h>            //SUBSIDIARY
#include <iomanip>
#include <cstring>
#include <string>
#define num_p 10
using namespace std;

// Global Main_matrix
int main_matrix[4][4] = { 0 };
int new_matrix[4][4] = { 0 };
char presents[35] = "Morph & Methoz proudly present...";
char seeu[] = "DON'T BE AFRAID NOT TO WIN,BE AFRAID NOT TO TRY";
char seeu2[35] = "SEE YOU IN TEN YEARS (M&M)";
// Global variables
int ROW, COL, SCORE = 0, COUNT = 0;
static int main_ifrand = 0;
bool is_best = false;
string info[num_p];
int score[10];
int inp_s;
string inp_n;
bool is_started = false;
bool if_undo=false;
// Functions Prototypes
void table();
void Menu();
void goToXY(int, int);
void swap(int &, int &);
void About();
void up_matrix();
void down_matrix();
void right_matrix();
void left_matrix();
void matrix_show();
void Newgame();
void z();
void gameover();
bool maingameover();
void show_highscore();
void highscore_sort(int &, string &);
void savearray();
void loadarray();
void Resume();
void undo();
void saveundo();
void undoscore();
void savescore();




// Main
int main()
{
int i = 0;
	goToXY(24, 12);
	cout << "Loading Please Wait";
	while (i != 3)
	{
		Sleep(600);
		cout << "." << flush;
		Sleep(600);
		cout << "." << flush;
		Sleep(600);
		cout << "." << flush;
		Sleep(600);
		cout << "\b\b\b   \b\b\b" << flush;
		i++;
	}
	system("cls");
	// this will run the music mp3

	system("introo.mp3");
	// Introduction
	string line1;
	ifstream intro1("2048.txt");
	if (intro1.is_open())
	{
		while (intro1.good())
		{
			getline(intro1, line1);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line1 << endl;
		}

		intro1.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	z();
	system("cls");

	// Introduction
	string line2;
	ifstream intro2("2047.txt");
	if (intro2.is_open())
	{
		while (intro2.good())
		{
			getline(intro2, line2);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line2 << endl;
		}

		intro2.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	z();
	system("cls");


	// Introduction
	string line3;
	ifstream intro3("2046.txt");
	if (intro3.is_open())
	{
		while (intro3.good())
		{
			getline(intro3, line3);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line3 << endl;
		}

		intro3.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	z();
	system("cls");
	// Introduction
	string line4;
	ifstream intro4("2045.txt");
	if (intro4.is_open())
	{
		while (intro4.good())
		{
			getline(intro4, line4);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line4 << endl;
		}

		intro4.close();
	}
	else
		cout << "Unable to open the file!" << endl << endl;
	z();
	system("cls");

	// Introduction
	string line5;
	ifstream intro5("2035.txt");
	if (intro5.is_open())
	{
		while (intro5.good())
		{
			getline(intro5, line5);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line5 << endl;
		}

		intro5.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	z();
	system("cls");
	// Introduction
	string line6;
	ifstream intro6("2025.txt");
	if (intro6.is_open())
	{
		while (intro6.good())
		{
			getline(intro6, line6);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line6 << endl;

		}

		intro6.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	z();
	system("cls");
	// Introduction
	string line7;
	ifstream intro7("32.txt");
	if (intro7.is_open())
	{
		while (intro7.good())
		{
			getline(intro7, line7);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line7 << endl;

		}

		intro7.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	z();
	system("cls");
	// Introduction
	string line8;
	ifstream intro8("16.txt");
	if (intro8.is_open())
	{
		while (intro8.good())
		{
			getline(intro8, line8);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line8 << endl;

		}

		intro8.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	Sleep(800);
	system("cls");
	// Introduction
	string line9;
	ifstream intro9("8.txt");
	if (intro9.is_open())
	{
		while (intro9.good())
		{
			getline(intro9, line9);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line9 << endl;

		}

		intro9.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	Sleep(800);
	system("cls");
	// Introduction
	string line10;
	ifstream intro10("4.txt");
	if (intro10.is_open())
	{
		while (intro10.good())
		{
			getline(intro10, line10);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line10 << endl;

		}

		intro6.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	Sleep(800);
	system("cls");
	// Introduction
	string line11;
	ifstream intro11("2.txt");
	if (intro11.is_open())
	{
		while (intro11.good())
		{
			getline(intro11, line11);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << line11 << endl;

		}

		intro11.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	Sleep(800);

	goToXY(5, 32);
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	for (int i = 0; i<35 && presents[i] != '\0'; i++)
	{
		cout << presents[i];
		Sleep(80);
	}
	goToXY(5, 34);
	for (int j = 0; seeu[j] != '\0'; j++)
	{
		cout << seeu[j];
		Sleep(80);
	}
	cout << endl;
	goToXY(5, 36);
	for (int j = 0; seeu2[j] != '\0'; j++)
	{

		cout << seeu2[j];
		Beep(1500, 60);
		Sleep(60);
	}
	Sleep(1500);
	system("cls");

	// start
	string lineS;
	ifstream introS("START.txt");
	if (introS.is_open())
	{
		while (introS.good())
		{
			getline(introS, lineS);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << lineS << endl;
		}

		introS.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	z();
	system("cls");
	// This will hide the cursor
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursoInfo;
	CursoInfo.dwSize = 1;         /* The size of caret */
	CursoInfo.bVisible = false;   /* Caret is visible? */
	SetConsoleCursorInfo(hConsole, &CursoInfo);

	// Now calling the menu function
	Menu();

	getch();
	return 0;
}

//****************Main Table Function*****************
void table()
{
	string line;
	ifstream main_table("TABLE.txt");

	if (main_table.is_open())
	{
		while (main_table.good())
		{
			getline(main_table, line);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << line << endl;
		}

		main_table.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
}

//**********Game Menu Function**********

void Menu()
{
	int answer;
	bool flag = false;
	string menus1;
	ifstream menu_main1("menu1.txt");
	if (menu_main1.is_open())
	{
		while (menu_main1.good())
		{
			getline(menu_main1, menus1);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << menus1 << endl;
		}

		menu_main1.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;


	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	string menus;
	ifstream menu_main("menu.txt");
	if (menu_main.is_open())
	{
		while (menu_main.good())
		{
			getline(menu_main, menus);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << menus << endl;
		}

		menu_main.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	cin >> answer;

	while (answer<1 || answer>5)
	{
		if (flag>1)
			system("cls");

		cout << "Invalid Choice!\n"
			<< "Please Enter it again: \n\n";
		Menu();

		cin >> answer;

		flag = true;
	}

	switch (answer)
	{
	case(1) : { Resume(); break; }
	case(2) : { system("cls");    Newgame();   break; }
	case(3) : { show_highscore();              break; }
	case(4) : { system("cls");     About();     break; }
	case(5) : {  exit(0); }                  // closes the game


	}
}

//**********goToXY Function***********

void goToXY(int x = 0, int y = 0)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(h, c);
}

//*********Up_matrix Function************
void up_matrix()
{

	savearray();
	savescore();
	saveundo();
	COUNT = 0;
    bool flagit=false;
	main_ifrand = 0;
	system("cls");

		for (COL = 0; COL<4; COL++)
		{COUNT=0;
        while (COUNT != 5)
           {
               if(flagit)
               {
                   flagit=false;
                   break;
               }
			for (ROW = 1; ROW<4; ROW++)
			{

				if (main_matrix[ROW - 1][COL] == 0 && main_matrix[ROW][COL] != 0)
				{
					swap(main_matrix[ROW - 1][COL], main_matrix[ROW][COL]);	main_ifrand++;
				}
				if (main_matrix[ROW - 1][COL] == 0 && main_matrix[ROW][COL] == 0)
				{
					swap(main_matrix[ROW - 1][COL], main_matrix[ROW][COL]);
				}

				else
				{
					if (main_matrix[ROW - 1][COL] == main_matrix[ROW][COL])
					{
						main_matrix[ROW][COL] = 0;
						main_matrix[ROW - 1][COL] *= 2;
						SCORE += main_matrix[ROW - 1][COL];
						main_ifrand++;
						flagit=true;

					}
					else

						continue;

				}

		}


		COUNT++;	}



	}
	savearray();
	table();
	matrix_show();

}

//*********Down_matrix Function************
void down_matrix()
{
	savearray();
	savescore();
	saveundo();
 bool flagit=false;
	COUNT = 0;
	main_ifrand = 0;


		system("cls");
		for (COL = 0; COL<4; COL++)
		{COUNT=0;
            while (COUNT != 5)
                    {
                if(flagit)
               {
                   flagit=false;
                   break;
               }
			for (ROW = 2; ROW>-1; ROW--)
			{

				if (main_matrix[ROW + 1][COL] == 0 && main_matrix[ROW][COL] != 0)
				{
					swap(main_matrix[ROW + 1][COL], main_matrix[ROW][COL]);		main_ifrand++;
				}
				if (main_matrix[ROW + 1][COL] == 0 && main_matrix[ROW][COL] == 0)
				{
					swap(main_matrix[ROW + 1][COL], main_matrix[ROW][COL]);
				}

				else
				{
					if (main_matrix[ROW + 1][COL] == main_matrix[ROW][COL])
					{
						main_matrix[ROW][COL] = 0;
						main_matrix[ROW + 1][COL] *= 2;
						SCORE += main_matrix[ROW + 1][COL];
						main_ifrand++;
                        flagit=true;


					}
					else

						continue;

				}

			}


	COUNT++;	}


	}
	savearray();
	table();
	matrix_show();

}

//*********Right_matrix Function*************
void right_matrix()
{
	savearray();
	savescore();
	saveundo();
	COUNT = 0;
 bool flagit=false;

	main_ifrand = 0;
	system("cls");


		for (ROW = 0; ROW<4; ROW++)
		{COUNT=0;
                while (COUNT != 5)
                {
                if(flagit)
               {
                   flagit=false;
                   break;
               }
			for (COL = 2; COL>-1; COL--)
			{

				if (main_matrix[ROW][COL + 1] == 0 && main_matrix[ROW][COL] != 0)
				{
					swap(main_matrix[ROW][COL + 1], main_matrix[ROW][COL]);	main_ifrand++;
				}
				if (main_matrix[ROW][COL + 1] == 0 && main_matrix[ROW][COL] == 0)
				{
					swap(main_matrix[ROW][COL + 1], main_matrix[ROW][COL]);
				}


				else
				{
					if (main_matrix[ROW][COL + 1] == main_matrix[ROW][COL])
					{
						main_matrix[ROW][COL] = 0;
						main_matrix[ROW][COL + 1] *= 2;
						SCORE += main_matrix[ROW][COL + 1];
						main_ifrand++;
                        flagit=true;

					}
					else

						continue;

				}

			}


	COUNT++;	}


	}
	savearray();
	table();
	matrix_show();

}

//**********Left_matrix Function**************
void left_matrix()
{
	savearray();                        // for resume
	savescore();                           // saving score
	saveundo();                                 //  saving for undo
	COUNT = 0;
 bool flagit=false;

	main_ifrand = 0;
	system("cls");

		for (ROW = 3; ROW>-1; ROW--)
		{COUNT=0;
            while (COUNT != 5)
                    {
             if(flagit)
               {
                   flagit=false;
                   break;
               }
			for (COL = 1; COL<4; COL++)
			{

				if (main_matrix[ROW][COL - 1] == 0 && main_matrix[ROW][COL] != 0)
				{
					swap(main_matrix[ROW][COL - 1], main_matrix[ROW][COL]); main_ifrand++;	main_ifrand++;
				}
				if (main_matrix[ROW][COL - 1] == 0 && main_matrix[ROW][COL] == 0)
				{
					swap(main_matrix[ROW][COL - 1], main_matrix[ROW][COL]);
				}

				else
				{
					if (main_matrix[ROW][COL - 1] == main_matrix[ROW][COL])
					{
						main_matrix[ROW][COL] = 0;
						main_matrix[ROW][COL - 1] *= 2;
						SCORE += main_matrix[ROW][COL - 1];
						main_ifrand++;
                        flagit=true;


					}
					else{

						continue;
					}
				}

			}


	COUNT++;	}

	}
	savearray();
	table();
	matrix_show();

}

//**********Swap Function**************
void swap(int &x, int &y)
{
	int temp;
	temp = x; /* save the value at address x */
	x = y;    /* put y into x */
	y = temp; /* put x into y */

	return;
}

//**********New Game Function**********
void Newgame()
{
	is_started = true;                            // the flag will get the true value in this line//because of resume
	is_best = false;
	bool x = true;
	char input;
	int undocount=0;
	for (int i = 0; i<4; i++)
	{
		for (int j = 0; j<4; j++)
		{
			main_matrix[i][j] = new_matrix[i][j];
		}
	}

	// Generatng random indexer for first initialization
	int i1, i2, j1, j2;

	srand(time(0));
	do
	{
		i1 = rand() % 4;	i2 = rand() % 4;
	} while (i1 == i2);
	do
	{
		j1 = rand() % 4;	j2 = rand() % 4;
	} while (j1 == j2);

	main_matrix[i1][j1] = 2;		main_matrix[i2][j2] = 4;
	main_ifrand = 0;
	SCORE = 0;



	matrix_show();
	while (x)
	{
		input = getch();

		switch (input)
		{


		case('w' | 'W') : { up_matrix(); if_undo=false; break; }

		case('d' | 'D') : { right_matrix(); if_undo=false; break; }

		case('a' | 'A') : { left_matrix(); if_undo=false; break; }

		case('s' | 'S') : { down_matrix();  if_undo=false; break; }

		case('u' | 'U') : { if_undo=true; undoscore(); undo();  break;}

		case(5) : {system("cls"); exit(0);
		}
		case(13) : {system("cls");	Menu();
			break;
		}

		default: break;                     //goes out of the switch
		}
		x = maingameover();
	}
	if (x == false)
		gameover();

}

//*********Matrix_show function*************
void matrix_show()
{

	static int ifrand = 0;						// for the first time
	int i, j;
	int abortion=0;

	if (ifrand == 0 || if_undo)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		int X = 5, Y = 2; system("cls"); 	table();
		for (int ROW = 0; ROW<4; ROW++)
		{
			for (int COL = 0; COL<4; COL++)
			{
				goToXY(X, Y);
				if (main_matrix[ROW][COL] == 0)
					cout << "   ";
				else{
					if (main_matrix[ROW][COL] == 2 || main_matrix[ROW][COL] == 2048 || main_matrix[ROW][COL] == 32 || main_matrix[ROW][COL] == 128)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout << setw(8) << main_matrix[ROW][COL];
					}
					if (main_matrix[ROW][COL] == 4 || main_matrix[ROW][COL] == 16 || main_matrix[ROW][COL] == 1024 || main_matrix[ROW][COL] == 256)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << setw(8) << main_matrix[ROW][COL];
					}
					if (main_matrix[ROW][COL] == 512 || main_matrix[ROW][COL] == 64 || main_matrix[ROW][COL] == 8)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout << setw(8) << main_matrix[ROW][COL];
					}
				}

				X += 16;
			}
			Y += 4;
			X = 5;
			ifrand++;
		}
	}
	else
	{
		srand(time(0));
		do
		{
			i = rand() % 4;		j = rand() % 4;
			abortion++;
			if(abortion==15)
                break;
		} while (main_matrix[i][j] != 0);
		if (main_ifrand != 0 && abortion!=15)
			main_matrix[i][j] = 2;

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		int X = 5, Y = 2; system("cls"); 	table();
		for (int ROW = 0; ROW<4; ROW++)
		{
			for (int COL = 0; COL<4; COL++)
			{
				goToXY(X, Y);
				if (main_matrix[ROW][COL] == 0)
					cout << "   ";
				else
				{
					if (main_matrix[ROW][COL] == 2 || main_matrix[ROW][COL] == 2048 || main_matrix[ROW][COL] == 32 || main_matrix[ROW][COL] == 128)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout << setw(8) << main_matrix[ROW][COL];
					}
					if (main_matrix[ROW][COL] == 4 || main_matrix[ROW][COL] == 16 || main_matrix[ROW][COL] == 1024 || main_matrix[ROW][COL] == 256)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << setw(8) << main_matrix[ROW][COL];
					}
					if (main_matrix[ROW][COL] == 512 || main_matrix[ROW][COL] == 64 || main_matrix[ROW][COL] == 8)
					{
						HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout << setw(8) << main_matrix[ROW][COL];
					}
				}

				X += 16;
			}
			Y += 4;
			X = 5;
		}
	}
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);  SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

	goToXY(20, 20);
	cout << SCORE;
}

//*****************about function********************
void About()
{
	char ans;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE);
	cout << "\n\nMohamad Khajavi  ------------------->>   932171008\n\n\n"
		<< "Ali Gholami ------------------->> 932171021\n ";

	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "\n\n\n2015.KHU_NERDS GROUP.ALL RIGHTS RESERVED";
	cout << endl << endl << endl;
	do
	{

		cout << "PRESS M to get back to the menu\n";
		ans = getch();

	} while (ans != 'm' && ans != 'M');
	if (ans == 'M' || ans == 'm')
		system("cls");
	Menu();

}

//****************z function***********************
void z()
{
	Sleep(1100);
}
//************game over function*******************
void gameover()
{
	system("cls");
	string over;
	ifstream fin("over.txt");
	if (fin.is_open())
	{
		while (fin.good())
		{
			getline(fin, over);
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << over << endl;
		}

		fin.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
	Sleep(2000);
	system("cls");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	goToXY(10, 10);
	cout << "Your score is : " << SCORE;
	goToXY(10, 12);
	cout << "Enter your name :";
	cin >> inp_n;
	highscore_sort(inp_s, inp_n);
	cout << "\nSuccessfully Saved...";
	Sleep(2000);
	system("cls");
	Menu();
}

//*************main_gameover functinon************
bool maingameover()
{
	int over = 0;
	// check for up side
	for (COL = 0; COL<4; COL++)
	{
		for (ROW = 1; ROW<4; ROW++)
		{
			if (main_matrix[ROW - 1][COL] == 0 && main_matrix[ROW][COL] != 0)
			{
				over++;
			}
			if (main_matrix[ROW - 1][COL] == 0 && main_matrix[ROW][COL] == 0)
			{
				over++;
			}

			else
			{
				if (main_matrix[ROW - 1][COL] == main_matrix[ROW][COL])
				{
					over++;

				}
				else

					continue;

			}

		}


	}
	//check for down side
	for (COL = 0; COL<4; COL++)
	{
		for (ROW = 2; ROW>-1; ROW--)
		{
			if (main_matrix[ROW + 1][COL] == 0 && main_matrix[ROW][COL] != 0)
			{
				over++;
			}
			if (main_matrix[ROW + 1][COL] == 0 && main_matrix[ROW][COL] == 0)
			{
				over++;
			}

			else
			{
				if (main_matrix[ROW + 1][COL] == main_matrix[ROW][COL])
				{
					over++;

				}
				else
					continue;

			}

		}


	}
	// check for left side
	for (ROW = 3; ROW>-1; ROW--)
	{
		for (COL = 1; COL<4; COL++)
		{
			if (main_matrix[ROW][COL - 1] == 0 && main_matrix[ROW][COL] != 0)
			{
				over++;
			}
			if (main_matrix[ROW][COL - 1] == 0 && main_matrix[ROW][COL] == 0)
			{
				over++;
			}

			else
			{
				if (main_matrix[ROW][COL - 1] == main_matrix[ROW][COL])
				{
					over++;


				}
				else
					continue;

			}

		}


	}

	// check for  right side
	for (ROW = 0; ROW<4; ROW++)
	{
		for (COL = 2; COL>-1; COL--)
		{
			if (main_matrix[ROW][COL + 1] == 0 && main_matrix[ROW][COL] != 0)
			{
				over++;
			}
			if (main_matrix[ROW][COL + 1] == 0 && main_matrix[ROW][COL] == 0)
			{
				over++;
			}


			else
			{
				if (main_matrix[ROW][COL + 1] == main_matrix[ROW][COL])
				{
					over++;

				}
				else
					continue;

			}

		}


	}

	if (over == 0)
		return false;
	else return true;
}

//********Show highscore function************
void show_highscore()
{
    char input;

	system("cls");
	cout << "Top ten players:\n\n";
	ifstream highscore("Highscore.txt");

	if (highscore.is_open())
	{
		for (int i = 0; i != num_p; ++i)
		{
			highscore >> score[i];
			getline(highscore, info[i]);
		}

		highscore.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;


	for (int i = 0; i != num_p; ++i)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
		if (i != 9) cout << " " << i + 1 << ".  " << score[i] << info[i] << endl;
		else cout << i + 1 << ".  " << score[i] << info[i] << endl;
	}

	cout << endl << endl << endl << "Ctrl+m back to menu";
	do
    {
        input=getch();

    }while(input!=13);
        system("cls");
        Menu();

}

//***********highscore sort function************
void highscore_sort(int &inp_s, string &inp_n)
{
	ofstream highscore;

	int best = inp_s;
	bool is_best = false;

	if (SCORE>score[9])
	{
		swap(SCORE, score[9]);
		swap(inp_n, info[9]);

		for (int i = 1; i != num_p; ++i)			//Bubble Sort
		for (int j = 0; j != num_p - 1; ++j)
		if (score[j]<score[j + 1])
		{
			swap(info[j], info[j + 1]);
			swap(score[j + 1], score[j]);
		}



		if (score[0] == best)
			cout << "\nCongratz! You made the best score :)" << endl;

		is_best = true;
	}

	else
		cout << "\n\nemtiazet varede list nashod :|" << endl;


	if (is_best)
	{
		highscore.open("Highscore.txt");

		if (highscore.is_open())
		{
			for (int i = 0; i != 10; ++i)
				highscore << score[i] << setw(30) << info[i] << endl;

			highscore.close();
		}

		else
			cout << "Unable to open the file!" << endl << endl;
	}
}

//**********savearray function***************
void savearray()
{
	ofstream save;

	save.open("save.txt");

	if (save.is_open())
	{
		for (int i = 0; i != 4; ++i)
		for (int j = 0; j != 4; ++j)
			save << main_matrix[i][j] << endl;

		save.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
}

//*********loadarray function*************
void loadarray()
{
	ifstream res("save.txt");

	if (res.is_open())
	{
		for (int i = 0; i != 4; ++i)
		for (int j = 0; j != 4; ++j)
			res >> main_matrix[i][j];

		res.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
}

//***********Resume function*************
void Resume()
{
	is_started = true;                            // the flag will get the true value in this line//because of resume
	is_best = false;
	bool x = true;
	char input;
	int undocount=0;
	loadarray();
	matrix_show();
	while (x)
	{
		input = getch();

		switch (input)
		{


		case('w' | 'W') : { up_matrix(); if_undo=false; break; }

		case('d' | 'D') : { right_matrix(); if_undo=false; break; }

		case('a' | 'A') : { left_matrix(); if_undo=false; break; }

		case('s' | 'S') : { down_matrix(); if_undo=false; break; }

		case('u' | 'U') : { if_undo=true; undoscore(); undo();  break;}

		case(5) : {system("cls"); exit(0);
		}
		case(13) : {system("cls");	Menu();
			break;
		}

		default: break;                     //goes out of the switch
		}
		x = maingameover();
	}
	if (x == false)
		gameover();

}
//*********undo Function**********
void undo()
{
    ifstream undoo("saveundo.txt");

	if (undoo.is_open())
	{
		for (int i = 0; i != 4; ++i)
		for (int j = 0; j != 4; ++j)
			undoo >> main_matrix[i][j];

		undoo.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;

			table();
	matrix_show();

}

//********void saveundo***********
void saveundo()
{
    ofstream saveundo;

	saveundo.open("saveundo.txt");

	if (saveundo.is_open())
	{
		for (int i = 0; i != 4; ++i)
		for (int j = 0; j != 4; ++j)
			saveundo << main_matrix[i][j] << endl;

		saveundo.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;
}
//*******undo score*******          // for loading the last score
void undoscore()
{
     ifstream savescorest;

	savescorest.open("savescore.txt");

	if (savescorest.is_open())
	{
        savescorest >> SCORE;

		savescorest.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;

}
//*******savescore*********         // for saving the current score
void savescore()
{
    ofstream savescore("savescore.txt");

	if (savescore.is_open())
	{
            savescore << SCORE;

		savescore.close();
	}

	else
		cout << "Unable to open the file!" << endl << endl;

}

