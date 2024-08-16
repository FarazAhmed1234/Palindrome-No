#include <iostream>
using namespace std;

class Reverse_no
{
private:
    int num, rev = 0, originalNum;

public:
    void getdata();
    void putdata();
    void checkPalindrome();
};

void Reverse_no::getdata()
{
    cout << "Enter the number to find Reverse number is: ";
    cin >> num;
    originalNum = num; // Store the original number
}

void Reverse_no::putdata()
{
    int temp = num; // Use a temporary variable to reverse the number
    rev = 0; // Reset rev before calculation
    while (temp > 0)
    {
        rev = (rev * 10) + temp % 10;
        temp = temp / 10;
    }
    cout << "Reversed number is: " << rev << endl; // Display the reversed number
}

void Reverse_no::checkPalindrome()
{
    if (originalNum == rev)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not a Palindrome Number" << endl;
    }
}

int main()
{
    Reverse_no number;
    number.getdata();
    number.putdata();
    number.checkPalindrome();

    return 0;
}
