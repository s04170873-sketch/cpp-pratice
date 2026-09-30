// This program takes 5 integers as input from the user and writes them to a file named "output.txt".
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    cout << "Enter the input:" << endl;
    int arr[5];
    ofstream fout;
    fout.open("output.txt");
    fout<<"Original array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        fout << arr[i] << " ";
    }
    fout << endl << "Sorted array: ";
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    }
    fout.close();
    return 0;
}