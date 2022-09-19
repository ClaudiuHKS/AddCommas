
#include "Funcs.h"

::std::string AddCommasA(bool W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }
::std::string AddCommasA(char W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }
::std::string AddCommasA(short W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }
::std::string AddCommasA(int W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }
::std::string AddCommasA(long W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }

::std::string AddCommasA(long long W) noexcept {
    static ::std::string R{ }, T{ }; static unsigned long long L{ }, I{ }, D{ };
    if (W < 0I64) R = '-', T = ::std::to_string(::std::abs(W));
    else R.clear(), T = ::std::to_string(W);
    L = (static_cast <decltype (L)> (T.length())), I = 0UI64;
    while (I < L) {
        R += T[I++]; if (((D = (L - I)) != 0UI64) && ((D % 3UI64) == 0UI64)) R += ',';
    } return R;
}

::std::string AddCommasA(unsigned char W) noexcept { return ::AddCommasA((static_cast <unsigned long long> (W))); }
::std::string AddCommasA(unsigned short W) noexcept { return ::AddCommasA((static_cast <unsigned long long> (W))); }
::std::string AddCommasA(unsigned int W) noexcept { return ::AddCommasA((static_cast <unsigned long long> (W))); }
::std::string AddCommasA(unsigned long W) noexcept { return ::AddCommasA((static_cast <unsigned long long> (W))); }

::std::string AddCommasA(unsigned long long W) noexcept {
    static ::std::string R{ }, T{ }; static unsigned long long L{ }, I{ }, D{ };
    R.clear(), T = ::std::to_string(W), L = (static_cast <decltype (L)> (T.length())), I = 0UI64;
    while (I < L) {
        R += T[I++]; if (((D = (L - I)) != 0UI64) && ((D % 3UI64) == 0UI64)) R += ',';
    } return R;
}

::std::string AddCommasA(float W) noexcept { return ::AddCommasA((static_cast <long double> (W))); }
::std::string AddCommasA(double W) noexcept { return ::AddCommasA((static_cast <long double> (W))); }

::std::string AddCommasA(long double W) noexcept {
    static ::std::string R{ }, T{ }, C{ }; static unsigned long long L{ }, P{ }, I{ }, D{ };
    if (W < 0.L) R = '-', T = ::std::to_string(::std::abs(W));
    else R.clear(), T = ::std::to_string(W);
    L = (static_cast <decltype (L)> (T.length()));
    if (((P = (static_cast <decltype (P)> (T.find('.')))) >= 0UI64) && (P < L))
        C.assign(&(T[P])), T.erase(P), L = (static_cast <decltype (L)> (T.length()));
    else if (((P = (static_cast <decltype (P)> (T.find(',')))) >= 0UI64) && (P < L))
        T[P] = '.', C.assign(&(T[P])), T.erase(P), L = (static_cast <decltype (L)> (T.length()));
    else C.clear(); I = 0UI64;
    while (I < L) {
        R += T[I++]; if (((D = (L - I)) != 0UI64) && ((D % 3UI64) == 0UI64)) R += ',';
    } return (R + C);
}

::std::string AddCommasA(char8_t W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }
::std::string AddCommasA(char16_t W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }
::std::string AddCommasA(char32_t W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }
::std::string AddCommasA(wchar_t W) noexcept { return ::AddCommasA((static_cast <long long> (W))); }
::std::wstring AddCommasW(bool W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }
::std::wstring AddCommasW(char W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }
::std::wstring AddCommasW(short W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }
::std::wstring AddCommasW(int W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }
::std::wstring AddCommasW(long W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }

::std::wstring AddCommasW(long long W) noexcept {
    static ::std::wstring R{ }, T{ }; static unsigned long long L{ }, I{ }, D{ };
    if (W < 0I64) R = L'-', T = ::std::to_wstring(::std::abs(W));
    else R.clear(), T = ::std::to_wstring(W);
    L = (static_cast <decltype (L)> (T.length())), I = 0UI64;
    while (I < L) {
        R += T[I++]; if (((D = (L - I)) != 0UI64) && ((D % 3UI64) == 0UI64)) R += L',';
    } return R;
}

::std::wstring AddCommasW(unsigned char W) noexcept { return ::AddCommasW((static_cast <unsigned long long> (W))); }
::std::wstring AddCommasW(unsigned short W) noexcept { return ::AddCommasW((static_cast <unsigned long long> (W))); }
::std::wstring AddCommasW(unsigned int W) noexcept { return ::AddCommasW((static_cast <unsigned long long> (W))); }
::std::wstring AddCommasW(unsigned long W) noexcept { return ::AddCommasW((static_cast <unsigned long long> (W))); }

::std::wstring AddCommasW(unsigned long long W) noexcept {
    static ::std::wstring R{ }, T{ }; static unsigned long long L{ }, I{ }, D{ };
    R.clear(), T = ::std::to_wstring(W), L = (static_cast <decltype (L)> (T.length())), I = 0UI64;
    while (I < L) {
        R += T[I++]; if (((D = (L - I)) != 0UI64) && ((D % 3UI64) == 0UI64)) R += L',';
    } return R;
}

::std::wstring AddCommasW(float W) noexcept { return ::AddCommasW((static_cast <long double> (W))); }
::std::wstring AddCommasW(double W) noexcept { return ::AddCommasW((static_cast <long double> (W))); }

::std::wstring AddCommasW(long double W) noexcept {
    static ::std::wstring R{ }, T{ }, C{ }; static unsigned long long L{ }, P{ }, I{ }, D{ };
    if (W < 0.L) R = L'-', T = ::std::to_wstring(::std::abs(W));
    else R.clear(), T = ::std::to_wstring(W);
    L = (static_cast <decltype (L)> (T.length()));
    if (((P = (static_cast <decltype (P)> (T.find(L'.')))) >= 0UI64) && (P < L))
        C.assign(&(T[P])), T.erase(P), L = (static_cast <decltype (L)> (T.length()));
    else if (((P = (static_cast <decltype (P)> (T.find(L',')))) >= 0UI64) && (P < L))
        T[P] = L'.', C.assign(&(T[P])), T.erase(P), L = (static_cast <decltype (L)> (T.length()));
    else C.clear(); I = 0UI64;
    while (I < L) {
        R += T[I++]; if (((D = (L - I)) != 0UI64) && ((D % 3UI64) == 0UI64)) R += L',';
    } return (R + C);
}

::std::wstring AddCommasW(char8_t W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }
::std::wstring AddCommasW(char16_t W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }
::std::wstring AddCommasW(char32_t W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }
::std::wstring AddCommasW(wchar_t W) noexcept { return ::AddCommasW((static_cast <long long> (W))); }
