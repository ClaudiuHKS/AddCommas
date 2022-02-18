
#include    < iostream >

#include    "Funcs.h"

const int __cdecl wmain ( long long, wchar_t **, wchar_t **, ... ) noexcept
{
    long long S [ ]
    {
        -9999999999I64,
        -999999999I64,
        -99999999I64,
        -9999999I64,
        -999999I64,
        -99999I64,
        -9999I64,
        -999I64,
        -99I64,
        -9I64,
        0I64,
        9I64,
        99I64,
        999I64,
        9999I64,
        99999I64,
        999999I64,
        9999999I64,
        99999999I64,
        999999999I64,
        9999999999I64,
    };

    unsigned long long U [ ]
    {
        0UI64,
        9UI64,
        99UI64,
        999UI64,
        9999UI64,
        99999UI64,
        999999UI64,
        9999999UI64,
        99999999UI64,
        999999999UI64,
        9999999999UI64,
    };

    long double R [ ]
    {
        -9999999999.9L,
        -999999999.9L,
        -99999999.9L,
        -9999999.9L,
        -999999.9L,
        -99999.9L,
        -9999.9L,
        -999.9L,
        -99.9L,
        -9.9L,
        -.9L,
        0.L,
        .9L,
        9.9L,
        99.9L,
        999.9L,
        9999.9L,
        99999.9L,
        999999.9L,
        9999999.9L,
        99999999.9L,
        999999999.9L,
        9999999999.9L,
    };

    for ( auto V : S )
        ::std::wcout << ::AddCommasW ( V ) << ::std::endl;

    ::std::wcout << ::std::endl;

    for ( auto V : U )
        ::std::wcout << ::AddCommasW ( V ) << ::std::endl;

    ::std::wcout << ::std::endl;

    for ( auto V : R )
        ::std::wcout << ::AddCommasW ( V ) << ::std::endl;

    ::std::wcout << ::std::endl;

    return 0I32;
}

/**
-9,999,999,999
-999,999,999
-99,999,999
-9,999,999
-999,999
-99,999
-9,999
-999
-99
-9
0
9
99
999
9,999
99,999
999,999
9,999,999
99,999,999
999,999,999
9,999,999,999

0
9
99
999
9,999
99,999
999,999
9,999,999
99,999,999
999,999,999
9,999,999,999

-9,999,999,999.900000
-999,999,999.900000
-99,999,999.900000
-9,999,999.900000
-999,999.900000
-99,999.900000
-9,999.900000
-999.900000
-99.900000
-9.900000
-0.900000
0.000000
0.900000
9.900000
99.900000
999.900000
9,999.900000
99,999.900000
999,999.900000
9,999,999.900000
99,999,999.900000
999,999,999.900000
9,999,999,999.900000
*/