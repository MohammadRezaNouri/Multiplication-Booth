#include <iostream>
#include <string>

using namespace std;

#define f1c(val) cout << val << "\n";
#define ret0 return 0;

string addBinary(string x, string y)
{
    int c = 0;
    string res = "";
    for (int i = 0; i < x.size(); i++)
        res += '0';
    for (int i = x.size() - 1; i >= 0; i--)
        if (x[i] == '0' && y[i] == '0' && c == 0)
        {
            res[i] = '0';
            c = 0;
        }
        else if ((x[i] == '0' && y[i] == '0' && c == 1) || (x[i] == '0' && y[i] == '1' && c == 0) || x[i] == '1' && y[i] == '0' && c == 0)
        {
            res[i] = '1';
            c = 0;
        }
        else if (x[i] == '0' && y[i] == '1' && c == 1 || (x[i] == '1' && y[i] == '0' && c == 1) || (x[i] == '1' && y[i] == '1' && c == 0))
        {
            res[i] = '0';
            c = 1;
        }
        else if (x[i] == '1' && y[i] == '1' && c == 1)
        {
            res[i] = '1';
            c = 1;
        }
    return res;
}

int main()
{
    ret0;
}