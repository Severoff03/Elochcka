#include <iostream>

using namespace std;

void elochcka(int height)
{
    int height1 = height;\
    int num =1;

    while (height != 0)
    {
        char space = ' ';
        for (int i = height; i > 0; i--)
        {
            cout << ' ';
        }
        height--;
        for (int j = 0; j<num; j++)
        {
            cout << '*';
        }
        num+=2;
        cout << endl;
    }
}

int main()
{
    int height;
    cin >> height;
    elochcka(height);
    return 0;
}
