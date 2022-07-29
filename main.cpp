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
    string x, y;
    f1c("X : ");
    cin >> x;
    f1c("Y : ");
    cin >> y;
    string m, x2 = x;
    for (int i = 0; i < x.size(); i++)
        m.push_back('0');
    bool B = true;
    for (int i = x.size() - 1; i >= 0; i--)
    {
        if (x[i] == '0')
            continue;
        else
        {
            for (int j = i - 1; j >= 0; j--)
                if (x[j] == '1')
                    x2[j] = '0';
                else
                    x2[j] = '1';
            B = false;
        }
        if (!B)
            break;
    }
    for (int i = x.size(), j = 0; i < x.size() * 2; i++, j++)
        m.push_back(y[j]);
    m.push_back('0');
    int clk = 1;
    while (clk <= x.size() + 1)
    {
        cout << "clk : " << clk << "     y : ";
        for (int i = 0; i < x.size() * 2 + 1; i++)
        {
            cout << m[i];
            if (i == x.size() * 2 - 1 || (i + 1) % 4 == 0)
                cout << " , ";
        }
        cout << endl;
        clk++;
        int x_or = m[x.size() * 2] - '0' xor m[x.size() * 2 - 1] - '0';
        if (x_or == 1)
            if (m[x.size() * 2 - 1] == '1')
            {
                string str = addBinary(m.substr(0, x.size()), x2);
                for (int i = 0; i < x.size(); i++)
                    m[i] = str[i];
                for (int i = x.size() * 2 - 1; i >= 0; i--)
                    m[i + 1] = m[i];
            }
            else
            {
                string str = addBinary(m.substr(0, x.size()), x);
                for (int i = 0; i < x.size(); i++)
                    m[i] = str[i];
                for (int i = x.size() * 2 - 1; i >= 0; i--)
                    m[i + 1] = m[i];
            }
        else
            for (int i = x.size() * 2 - 1; i >= 0; i--)
                m[i + 1] = m[i];
    }
    ret0;
}