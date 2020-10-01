#include <iostream>
#include <string>
using namespace std;


void convertToASCII(string letter)
{
    int total = 0 ;
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i) ;
        //cout << int(x) << endl ;
	total += int(x) ;
    }
    cout << total << endl ;
}

int main()
{
    string plainText ;
    cout << "Enter text to convert to ASCII: " ;
    std::getline(cin,plainText) ;
    convertToASCII(plainText) ;
    return 0;
}
