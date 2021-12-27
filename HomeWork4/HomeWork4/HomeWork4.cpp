#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;
ofstream f("C:/Users/kiror/Desktop/test.txt");

void Raz(string t, int ur, int n, int k)
{
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	if (ur > k)
	{
		for (int i = 0; i < k; i++)
		{
			if (t[i] == '1')
				one++;
			if (t[i] == '2')
				two++;;
			if (t[i] == '3')
				three++;
			if (t[i] == '4')
				four++;
			if (t[i] == '5')
				five++;
			if (t[i] == '6')
				six++;
			if (t[i] == '7')
				seven++;
			//	if (strok[i] == '8')
			//		eight++;
			//	if (strok[i] == '9')        
			//		nine++;

		}
		if ((one <= 1 && two <= 1 && three <= 1 && four <= 1 && five <= 1 && six == 3 && seven == 2) ||			                    // Задание 1 Ввод : 7
			(one <= 1 && two <= 1 && three <= 1 && four <= 1 && five == 3 && six == 2 && seven <= 1) ||
			(one <= 1 && two <= 1 && three <= 1 && four == 3 && five == 2 && six <= 1 && seven <= 1) ||
			(one <= 1 && two <= 1 && three == 3 && four == 2 && five <= 1 && six <= 1 && seven <= 1) ||
			(one <= 1 && two == 3 && three == 2 && four <= 1 && five <= 1 && six <= 1 && seven <= 1) ||
			(one == 3 && two == 2 && three <= 1 && four <= 1 && five <= 1 && six <= 1 && seven <= 1))

	  //if ((one <= 1 && two <= 1 && three <= 1 && four <= 1 && five <= 1 && six == 2 && seven == 2 && eight == 3) ||			// Задание 2 Ввод : 9
		//	(one <= 1 && two <= 1 && three <= 1 && four <= 1 && five == 2 && six == 2 && seven == 3 && eight <= 2) ||
		//	(one <= 1 && two <= 1 && three <= 1 && four == 2 && five == 2 && six == 3 && seven <= 1 && eight <= 2) ||
		//	(one <= 1 && two <= 1 && three == 2 && four == 2 && five == 3 && six <= 1 && seven <= 1 && eight <= 2) ||
		//	(one <= 1 && two == 2 && three == 2 && four == 3 && five <= 1 && six <= 1 && seven <= 1 && eight <= 2) ||
		//	(one == 2 && two == 2 && three == 3 && four <= 1 && five <= 1 && six <= 1 && seven <= 1 && eight <= 2))
		{
			for (int i = 0; i < k; i++)
			{
				if (t[i] == '1')
					t[i] = 'a';
				if (t[i] == '2')
					t[i] = 'b';
				if (t[i] == '3')
					t[i] = 'c';
				if (t[i] == '4')
					t[i] = 'd';
				if (t[i] == '5')
					t[i] = 'e';
				if (t[i] == '6')
					t[i] = 'f';
			}
			f << t << endl;
		}
	}
	else
		for (int i = 0; i < n; i++)
		{
			ostringstream os;
			os << i + 1;
			Raz(t + os.str(), ur + 1, n, k);
		}
}
int main()
{
	int n = 6;
	int word_size;
	setlocale(LC_ALL, "Russian_Russia.1251");
	cout << "Введите длину слова: " << endl;
	cin >> word_size;
	Raz("", 1, n, word_size);
	cout << "Ответ в файле";
	return 0;
}