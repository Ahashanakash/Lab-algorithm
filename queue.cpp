#include <bits/stdc++.h>
using namespace std;
int arr[5];
int i = 0, sz = 0, p=0;

void enqueue(int a)
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
void dequeue()
{
    if (sz == 0)
    {
        cout << "    underflow" << '\n';
        return;
    }
    for (int i = 0; i < sz-1; i++)
    {
        arr[i]=arr[i+1];
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
        cout << "enqueue = 1" << '\n';
        cout << "dequeue = 2" << '\n';
        cout << "print = 3" << '\n';
        cout << "size = 4" << '\n';
        cout << "front = 5" << '\n';
        cout << "end = 6" << '\n';

        cin >> n;
        if (n == 1)
        {
            cout << "     Enter value = " ;
            int v;
            cin >> v;
            enqueue(v);
        }
        else if (n == 2)
        {
            dequeue();
        }
        else if (n == 3)
        {
            cout<<"     Queue =   ";
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
                cout << "      empty queue" << '\n';
            }
            else
                cout<<"       front = " << arr[p] << '\n';
        }
        else if (n == 6)
            break;
    }

    return 0;
}