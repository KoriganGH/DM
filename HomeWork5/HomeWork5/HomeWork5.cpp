#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

ofstream f("C:/Users/kiror/Desktop/test.txt");
void Per(string t, int s, int n, int k)
{
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
    if (s > k)
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
        }
        if (one > 2)
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
            Per(t + os.str(), s + 1, n, k);
        }
}
int main()
{
    int n = 6, word_size;
    setlocale(LC_ALL, "rus");
    cout << "Укажите длину слова : " << endl;
    cin >> word_size;
    cout << "Ответ в файле" << endl;
    Per("", 1, n, word_size);
    f.close();
    return 0;
}