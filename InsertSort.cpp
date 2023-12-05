#include<iostream>
using namespace std;
const int MaxSize = 100;
class List
{
private:
    int r[MaxSize + 1];
    int n;
public:
    List() { n = 0; } //empty list
    void InsertR(int k)  //±ÌŒ≤≤Â»Î
    {
        r[++n] = k;
    }
    void Display();      //display
    void InsertSort();   //InsertSort
};
void List::InsertSort()
{
    int i, j;
    for (i = 2; i <= n; i++)
    {
        if (r[i] < r[i - 1])
        {
            r[0] = r[i];
            for (j = i - 1; r[0] < r[j]; j--)
            {
                r[j + 1] = r[j];
            }
            r[j + 1] = r[0];
        }
        Display();
    }
}
void List::Display()
{
    for (int i = 1; i <= n; i++)
        cout << r[i] << " ";
    cout << "\n";
}
int main()
{
    List L;
    while (1)
    {
        int k;
        cin >> k;
        if (!k) break;
        L.InsertR(k);
    }
   //12 21 32 2 4 24 21 432 23 9 012 21 32 2 4 24 21 432 23 9 0 L.Display();
    L.InsertSort();
    //L.Display();
    return 0;
}