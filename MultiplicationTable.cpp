#include <iostream>

using namespace std;

int getNum()
{
    int iNum;

    cout << "Enter number" << endl;
    cin >> iNum;

    return iNum;
}

void getTable(int iTheirNum)
{
    int iCounter = 1;

    while (iCounter <= 10)
    {
        cout << iTheirNum << " * " << iCounter << " = " << iTheirNum * iCounter << endl;
        iCounter++;
    }
}

int main()
{
   int iNum;

   iNum = getNum();

   getTable(iNum);

    return 0;
}
