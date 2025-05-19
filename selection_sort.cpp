#include<iostream>
using namespace std;

int main()
{
    int user;
    cout << "Enter the size of array : ";
    cin >> user;
    int array[user] ;
    int minIndex;
    int temp;

    for (int i = 0; i < size; i++)
    {
        minIndex = i;
        
        for (int j = i; j < size; j++)
        {
            if (array[j] < array[minIndex]){
                minIndex = j ;
            }    
        }
        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}