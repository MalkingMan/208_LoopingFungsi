#include <iostream>
using namespace std;

int main()
{
    string pilihan;
    do
    {
        cout << "Makan" << endl;
        cout << "Berak" << endl;
        cout << "Tidur" << endl;

        cout << "Aoakah saya masih sehat? (y/n)";
        cin >> pilihan;
        
    } while (pilihan =="y");
    
}