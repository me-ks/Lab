/**
 * Done by: Maksym Zablotskyi
 * Student Group: 121
 * Lab 1.7
 */
#include <iostream>

 // Initialize static variables with new values
static int svalA = 15;
static int svalB;

// Nested blocks example
void main()
{
	svalB = 25;
	{
		static int svalC = 30;
		int valA;

		svalC = svalC + svalB;
		valA = svalC * 3;
	}

	svalA++;
	svalA += 3;

	float fltA = 12.5;
	int valL = 0;
	for (int i = 0; i < 4; i++)
	{
		static int svalD = 0;
		svalD++;
		int valS = 0;
		valL++;
		valS++;
	}

	char cA = '#';
	{
		char cA = '$';
		int valQ = 2;
		{
			char cA = '%';
			int valQ = 3;
			int valM = 6;
		}
		valQ = valQ + 4;
		valQ--;

	}

	for (int i = 0; i < 6; i++)
	{
		static int iA = 0;
		int iB = 0;
		iA = iA + 2;
		iB = iB + 2;
	}

	int* valPi;
	valPi = new int;
	*valPi = 18;

	int* valPw;
	valPw = new int;
	*valPw = 7;
	valPw = valPi;
	delete valPw;
}
