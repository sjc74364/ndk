//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <iterator>

// back_insert_iterator

// back_insert_iterator<Cont>& operator++();

#include <iterator>
#include <vector>
#include <cassert>
<<<<<<< HEAD
=======
#include "nasty_containers.hpp"
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx

template <class C>
void
test(C c)
{
    std::back_insert_iterator<C> i(c);
    std::back_insert_iterator<C>& r = ++i;
    assert(&r == &i);
}

int main()
{
    test(std::vector<int>());
<<<<<<< HEAD
=======
    test(nasty_vector<int>());
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
}
