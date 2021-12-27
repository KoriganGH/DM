#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
ofstream f("C:/Users/kiror/Desktop/test.txt");
void Raz(string t, int l, int n, int k)
{
    int one = 0;
    if (l > k)
    {
        for (int i = 0; i < n; i++)
        {
            if (t[i] == '1')
                one++;
        }
        if (one == 2)
        {
            for (int i = 0; i < n; i++)
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

            Raz(t + os.str(), l + 1, n, k);
        }
}
int main()
{
    int n = 6, word_size = 5;
    setlocale(LC_ALL, "rus");
    cout << "Ответ в файле" << endl;
    Raz("", 1, n, word_size);
    return 0;
}