//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <vector>

// pointer data();

#include <vector>
#include <cassert>

#include "min_allocator.h"
<<<<<<< HEAD
=======
#include "asan_testing.h"
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx

int main()
{
    {
        std::vector<int> v;
        assert(v.data() == 0);
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(v)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
    {
        std::vector<int> v(100);
        assert(v.data() == &v.front());
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(v)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
#if __cplusplus >= 201103L
    {
        std::vector<int, min_allocator<int>> v;
        assert(v.data() == 0);
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(v)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
    {
        std::vector<int, min_allocator<int>> v(100);
        assert(v.data() == &v.front());
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(v)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
#endif
}
