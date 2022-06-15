#include <iostream>
#define print std::cout
#define clearConsole std::cout << "\x1B[2J\x1B[H";
void AskQuestion();
bool Question1();
bool Question2();
bool Question3();
bool Question4();
bool Question5();
void Trivia();

void ClearInputBuffer();
int ValidateInput(std::string variable);

int score = 0;

int main()
{
	Trivia();
}

void Trivia()
{
	int choice = ValidateInput("\nWelcome to the trivia!\nDo you want to test your skills?\n1.YES\n2.NO\nAnser");
	while (choice == 1)
	{
		AskQuestion();
		print << "\n";
		system("pause"); clearConsole;
		choice = ValidateInput("\nDo you want to play again?\n1.YES\n2.NO\nAnswer");
	}
	print << "\nTOTAL SCORE: " << score;
}

bool Question1()
{
	print << "\nWhich city has the largets population?\n1.Pekin, China\n2.Tokyo, Japan\n3.Delhi, India\n4.Mexico City, Mexico\n";
	if (ValidateInput("Answer") == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Question2()
{
	print << "\nWhich are the first 8 digits of PI?\n1. PI = 3.14163872\n2. PI = 3.14169832\n3. PI = 3.14158909\n4. PI = 3.14159265\n";
	if (ValidateInput("Answer") == 4)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Question3()
{
	print << "\nWhat year did Neil Armstrong landed on the moon?\n1. 1911\n2. 1987\n3. 1969\n4. 2001";
	if (ValidateInput("Answer") == 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Question4()
{
	print << "\nWhich is the strongest green Jedi\n1.Yoda\n2.Kit Fisto\n3.BobaFett\n4.Hulk\n";
	if (ValidateInput("Answer") == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Question5()
{
	print << "\nBest Video Game ever?\n1. Red Dead Redemption 2\n2. Halo Reach\n3. God of War\n4. Super Smash Bros\n5. The Witcher 3\n6. Mass Effect\n7. The Last of Us\n 8.Marvel Avengers\n";
	if (ValidateInput("Answer") != 8)
	{
		return true; //All games are good except Marvel Avengers cmon ...
	}
	else
	{
		return false;
	}
}

void AskQuestion()
{
	int random = (rand() % 5);
	switch (random)
	{
	case 1:
		if (Question1())
		{
			print << "\nCORRECT\n +100 POINST :D";
			score += 100;
		}
		else
		{
			print << "\nINCORRECT\n";
			if (score >= 100)
			{
				print << " -100 POINTS :(";
				score -= 100;
			}
		}
		break;
	case 2:
		if (Question2())
		{
			print << "\nCORRECT\n +100 POINST :D";
			score += 100;
		}
		else
		{
			print << "\nINCORRECT\n";
			if (score >= 100)
			{
				print << " -100 POINTS :(";
				score -= 100;
			}
		}
		break;
	case 3:
		if (Question3())
		{
			print << "\nCORRECT\n +100 POINST :D";
			score += 100;
		}
		else
		{
			print << "\nINCORRECT\n";
			if (score >= 100)
			{
				print << " -100 POINTS :(";
				score -= 100;
			}
		}
		break;
	case 4:
		if (Question4())
		{
			print << "\nCORRECT\n +100 POINST :D";
			score += 100;
		}
		else
		{
			print << "\nINCORRECT\n";
			if (score >= 100)
			{
				print << " -100 POINTS :(";
				score -= 100;
			}
		}
		break;
	default:
		if (Question5())
		{
			print << "\nCORRECT\n +100 POINST :D";
			score += 100;
		}
		else
		{
			print << "\nINCORRECT\n";
			if (score >= 100)
			{
				print << " -100 POINTS :(";
				score -= 100;
			}
		}
		break;
	}
}

void ClearInputBuffer()
{
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

int ValidateInput(std::string variable)
{
	int input;
	while (true)
	{
		print << variable << ": ";
		if (std::cin >> input)
		{
			ClearInputBuffer();
			break;
		}
		ClearInputBuffer();
		print << "\nInvalid Input.\n";
	}
	return input;
}
