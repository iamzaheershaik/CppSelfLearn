#include <iostream>
#include <climits>   // For integer limits
#include <cfloat>    // For float/double limits

using namespace std;

int main() {
    cout << "========== INTEGER TYPES ==========\n";

    bool a;
    cout << "bool: " << sizeof(a) << " byte (Values: 0 or 1)\n\n";

    char b;
    cout << "char: " << sizeof(b) << " byte\n";
    cout << "Range: " << (int)CHAR_MIN << " to " << (int)CHAR_MAX << "\n";
    cout << "Unsigned char range: 0 to " << (int)UCHAR_MAX << "\n\n";

    short c;
    cout << "short: " << sizeof(c) << " bytes\n";
    cout << "Range: " << SHRT_MIN << " to " << SHRT_MAX << "\n";
    cout << "Unsigned short range: 0 to " << USHRT_MAX << "\n\n";

    int d;
    cout << "int: " << sizeof(d) << " bytes\n";
    cout << "Range: " << INT_MIN << " to " << INT_MAX << "\n";
    cout << "Unsigned int range: 0 to " << UINT_MAX << "\n\n";

    long e;
    cout << "long: " << sizeof(e) << " bytes\n";
    cout << "Range: " << LONG_MIN << " to " << LONG_MAX << "\n";
    cout << "Unsigned long range: 0 to " << ULONG_MAX << "\n\n";

    long long f;
    cout << "long long: " << sizeof(f) << " bytes\n";
    cout << "Range: " << LLONG_MIN << " to " << LLONG_MAX << "\n";
    cout << "Unsigned long long range: 0 to " << ULLONG_MAX << "\n\n";

    cout << "========== FLOATING POINT TYPES ==========\n";

    float g;
    cout << "float: " << sizeof(g) << " bytes\n";
    cout << "Range: " << FLT_MIN << " to " << FLT_MAX << "\n";
    cout << "Precision: " << FLT_DIG << " digits\n\n";

    double h;
    cout << "double: " << sizeof(h) << " bytes\n";
    cout << "Range: " << DBL_MIN << " to " << DBL_MAX << "\n";
    cout << "Precision: " << DBL_DIG << " digits\n\n";

    long double i;
    cout << "long double: " << sizeof(i) << " bytes\n";
    cout << "Range: " << LDBL_MIN << " to " << LDBL_MAX << "\n";
    cout << "Precision: " << LDBL_DIG << " digits\n";

    return 0;
}
