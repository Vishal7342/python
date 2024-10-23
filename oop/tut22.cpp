/**
 * TODo: OOPs - Classes and objects
 * TODo: C++ --> initially called --> C with classes by stroustroup
 * TODo: class --> extension of struceres (in C)
 *
 * ?structures had limitations
 * //*  1. members are public
 * //*  2. no methods
 *
 * ? classes //! structures + more
 * ? classes //! can have methods and properties
 * ? classes //! can make few members as privat & few as public
 *
 * ? structures in c++ are typedefed
 * ? you can declar objects along with the class declarion link this:
 *     * class Employee{
 *     *    // Class definition
 *     *  } vishal, rohan,  rahul;
 *
 * todo: vishal. salary = 8 marks no sense if salary is private
 *
 * ?Nesting of member functions
 *
 * @param d
 */

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
public:
    void read(void);
    void chk_bin(void);
};

binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}

binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Not a binary number";
            exit(1);
        }
    }
}
int main()
{
    binary b1, b2;
    b1.read();
    b1.chk_bin();
    return 0;
}