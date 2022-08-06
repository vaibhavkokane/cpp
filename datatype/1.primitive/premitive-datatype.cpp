/*
    #NOTES - 1) C++ datatype size is compilar dependent.
            2) C++ Modifier Types - short, long, signed, unsigned
            3) short can be used with int only.
            4) long can be used with int and double only.
            5) signed & unsigned can be used with integer, char, long(prefix).
            6) char type data must be in single quote e.g char a = 'A';
*/

#include <iostream>
#include <math.h>

#define SIZE(x) sizeof(x) * 8
#define cout std::cout
#define endl std::endl

// for min and max range
long double min;
long double max;

template <class dt>
dt printRange(dt size, int unsignedDt = 0)
{
    if (unsignedDt == 1)
    {
        max = pow(2, size) - 1;
        return 0;
    }
    else
    {
        min = (pow(2, size - 1)) * (-1);
        max = (pow(2, size - 1)) - 1;
        return 0;
    }
}

// boolean type
bool boolVariable;

// character type => INTEGRAL TYPE
char charVariable;
char16_t char16Variable;
char32_t char32Variable;
wchar_t wideCharVariable;
unsigned char uCharVariable;

// integer type => INTEGRAL TYPE
short shortVariable;
short int shortIntVariable;
int integerVariable;
long longVariable;
long int longIntVariable;

unsigned short uShortVariable;
unsigned short int uShortIntVariable;
unsigned int uIntegegerVariable;
unsigned long int uLongIntVariable;

// floting-point type
float floatVariable;
double doubleVariable;
long double longDoubleVariable;

int main()
{
    cout<<"boolean :-"<<endl;
    printRange(SIZE(boolVariable));
    cout<<"bool = "<< sizeof(boolVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl<<endl;

    cout<<"character :- "<<endl;
    printRange(SIZE(charVariable));
    cout<<"char = "<< sizeof(charVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(char16Variable));
    cout<<"char16_t = "<< sizeof(char16Variable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(char32Variable));
    cout<<"char32_t = "<< sizeof(char32Variable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(wideCharVariable));
    cout<<"wide_char = "<< sizeof(wideCharVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(uCharVariable), 1);
    cout<<"unsigned char = "<< sizeof(uCharVariable)<<" byte ("<<" 0 to "<< max<<" )"<<endl<<endl;


    cout<<"integer type ="<<endl;

    printRange(SIZE(shortVariable));
    cout<<"short = "<< sizeof(shortVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(shortIntVariable));
    cout<<"short int = "<< sizeof(shortIntVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(integerVariable));
    cout<<"int = "<< sizeof(integerVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(longVariable));
    cout<<"long = "<< sizeof(longVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(longIntVariable));
    cout<<"long int = "<< sizeof(longIntVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(uShortVariable), 1);
    cout<<"unsigned short = "<< sizeof(uShortVariable)<<" byte ( 0 "<<" to "<< max<<" )"<<endl;

    printRange(SIZE(uShortIntVariable), 1);
    cout<<"unsigned short int = "<< sizeof(uShortIntVariable)<<" byte ("<<" 0 to "<< max<<" )"<<endl;

    printRange(SIZE(uIntegegerVariable), 1);
    cout<<"unsigned int = "<< sizeof(uIntegegerVariable)<<" byte ( 0"<<" to "<< max<<" )"<<endl;

    printRange(SIZE(uLongIntVariable), 1);
    cout<<"unsigned long int = "<< sizeof(uLongIntVariable)<<" byte ("<<" 0 to "<< max<<" )"<<endl;

    cout<<"floting point ="<<endl;

    printRange(SIZE(floatVariable));
    cout<<"float = "<< sizeof(floatVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(doubleVariable));
    cout<<"double = "<< sizeof(doubleVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl;

    printRange(SIZE(longDoubleVariable));
    cout<<"long double = "<< sizeof(longDoubleVariable)<<" byte ("<< min<<" to "<< max<<" )"<<endl<<endl;

    return 0;
}