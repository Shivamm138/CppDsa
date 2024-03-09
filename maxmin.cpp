#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cin >> size;
    int num[5];
 //taking i/p in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Max value is: " << getMax(num, size);
}