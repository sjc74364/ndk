//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// test numeric_limits

// is_modulo

#include <limits>

template <class T, bool expected>
void
test()
{
    static_assert(std::numeric_limits<T>::is_modulo == expected, "is_modulo test 1");
    static_assert(std::numeric_limits<const T>::is_modulo == expected, "is_modulo test 2");
    static_assert(std::numeric_limits<volatile T>::is_modulo == expected, "is_modulo test 3");
    static_assert(std::numeric_limits<const volatile T>::is_modulo == expected, "is_modulo test 4");
}

int main()
{
    test<bool, false>();
    test<char, true>();
    test<signed char, true>();
    test<unsigned char, true>();
    test<wchar_t, true>();
#ifndef _LIBCPP_HAS_NO_UNICODE_CHARS
    test<char16_t, true>();
    test<char32_t, true>();
#endif  // _LIBCPP_HAS_NO_UNICODE_CHARS
    test<short, true>();
    test<unsigned short, true>();
    test<int, true>();
    test<unsigned int, true>();
    test<long, true>();
    test<unsigned long, true>();
    test<long long, true>();
    test<unsigned long long, true>();
<<<<<<< HEAD
=======
#ifndef _LIBCPP_HAS_NO_INT128
    test<__int128_t, true>();
    test<__uint128_t, true>();
#endif
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    test<float, false>();
    test<double, false>();
    test<long double, false>();
}
