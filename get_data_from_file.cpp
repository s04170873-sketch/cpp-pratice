//get the data from the file and display it on the console
#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    // ifstream fin;
    // ofstream fout;
    // fin.open("input.txt");
    // fout.open("output.txt");
    // string line;
    // getline(fin, line);
    // char ch;
    // while (fin.get(ch))
    // {
    //     cout << ch;
    // }
    // char ch;
    // ch = fin.get();
    // while (!fin.eof())
    // {
    //     cout << ch;
    //     ch = fin.get();
    // }
    
    // int arr[5];
    // while (!fin.eof())
    // {   
    //     int sum = 0;
    //     for (int i = 0; i < 5; i++)
    //     {
    //         fin >> arr[i];
    //         sum += arr[i];
    //     }
    //     fout << sum << endl;
    // }
    // fin.close();
    // fout.close();
    //ios::in::app is used to append the data to the file instead of overwriting it
    //ios::out is used to overwrite the data in the file instead of appending it
    //ios::in::ate is used to move the cursor to the end of the file before writing data to it
    fstream inputfile;
    inputfile.open("input.txt", ios::in);
    if (!inputfile)
    {
        cout << "File not found" << endl;
        return 0;
    }
    string line;
    while (getline(inputfile, line))
    {
        cout << line << endl;
    }
    inputfile.close();
    return 0;
}
