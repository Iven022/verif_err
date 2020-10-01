#include <iostream>
#include <string>
using namespace std;


void convertToASCII(string letter)
{
    int total = 0 ;
    int total1 = 0 ;
    for (int i = 0; i < letter.length(); i++)
    {
        char x = letter.at(i) ;
        //cout << int(x) << endl ;
	total += int(x) ;
	total1 += total ;
    }
    cout << "Checksum1 = " << total << endl ;
    cout << "Checksum2 = " << total1 << endl ;
}

int main()
{
    string plainText ;
    cout << "Enter text to convert to ASCII: " ;
    std::getline(cin,plainText) ;
    convertToASCII(plainText) ;
    return 0;
}
