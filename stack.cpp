#include <bits/stdc++.h>
using namespace std;
int arr[5];
int i = 0, sz = 0;

void push(int a)
{
    if (sz == 5)
    {
        cout << "    overflow" << '\n';
        return;
    }
    arr[i] = a;
    i++;
    sz++;
    cout << "    pushed" << '\n';
}
void pop()
{
    if (sz == 0)
    {
        cout << "    underflow" << '\n';
        return;
    }
    i--;
    sz--;
    cout << "    poped" << '\n';
}

int main()
{

    int n;
    while (1)
    {
        cout << "push = 1" << '\n';
        cout << "pop = 2" << '\n';
        cout << "print = 3" << '\n';
        cout << "size = 4" << '\n';
        cout << "top = 5" << '\n';
        cout << "end = 6" << '\n';

        cin >> n;
        if (n == 1)
        {
            cout << "     Enter value = " ;
            int v;
            cin >> v;
            push(v);
        }
        else if (n == 2)
        {
            pop();
        }
        else if (n == 3)
        {
            cout<<"     Stack =   ";
            for (int i = 0; i < sz; i++)
            {
                cout << arr[i] << " ";
            }
            cout << '\n';
        }
        else if (n == 4)
        {
            cout << "      Size = " << sz << '\n';
        }
        else if (n == 5)
        {
            if (sz == 0)
            {
                cout << "      empty stack" << '\n';
            }
            else
                cout<<"       top = " << arr[i - 1] << '\n';
        }
        else if (n == 6)
            break;
    }

    return 0;
}