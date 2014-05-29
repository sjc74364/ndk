//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
<<<<<<< HEAD
//
// XFAIL: with_system_lib=x86_64-apple-darwin11
// XFAIL: with_system_lib=x86_64-apple-darwin12
=======
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx

// <complex>

// template<class T, class charT, class traits>
//   basic_istream<charT, traits>&
//   operator>>(basic_istream<charT, traits>& is, complex<T>& x);

#include <complex>
#include <sstream>
#include <cassert>

int main()
{
    {
        std::istringstream is("5");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(5, 0));
        assert(is.eof());
    }
    {
        std::istringstream is(" 5 ");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(5, 0));
        assert(is.good());
    }
    {
        std::istringstream is(" 5, ");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(5, 0));
        assert(is.good());
    }
    {
        std::istringstream is(" , 5, ");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(0, 0));
        assert(is.fail());
    }
    {
        std::istringstream is("5.5 ");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(5.5, 0));
        assert(is.good());
    }
    {
        std::istringstream is(" ( 5.5 ) ");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(5.5, 0));
        assert(is.good());
    }
    {
        std::istringstream is("  5.5)");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(5.5, 0));
        assert(is.good());
    }
    {
        std::istringstream is("(5.5 ");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(0, 0));
        assert(is.fail());
    }
    {
        std::istringstream is("(5.5,");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(0, 0));
        assert(is.fail());
    }
    {
        std::istringstream is("( -5.5 , -6.5 )");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(-5.5, -6.5));
        assert(!is.eof());
    }
    {
        std::istringstream is("(-5.5,-6.5)");
        std::complex<double> c;
        is >> c;
        assert(c == std::complex<double>(-5.5, -6.5));
        assert(!is.eof());
    }
}
