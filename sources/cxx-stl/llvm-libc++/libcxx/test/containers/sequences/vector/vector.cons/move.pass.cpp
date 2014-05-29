//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <vector>

// vector(vector&& c);

#include <vector>
#include <cassert>
#include "../../../MoveOnly.h"
#include "test_allocator.h"
#include "min_allocator.h"
<<<<<<< HEAD
=======
#include "asan_testing.h"
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx

int main()
{
#ifndef _LIBCPP_HAS_NO_RVALUE_REFERENCES
    {
        std::vector<MoveOnly, test_allocator<MoveOnly> > l(test_allocator<MoveOnly>(5));
        std::vector<MoveOnly, test_allocator<MoveOnly> > lo(test_allocator<MoveOnly>(5));
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l)); 
        assert(is_contiguous_container_asan_correct(lo)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
        for (int i = 1; i <= 3; ++i)
        {
            l.push_back(i);
            lo.push_back(i);
        }
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l)); 
        assert(is_contiguous_container_asan_correct(lo)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
        std::vector<MoveOnly, test_allocator<MoveOnly> > l2 = std::move(l);
        assert(l2 == lo);
        assert(l.empty());
        assert(l2.get_allocator() == lo.get_allocator());
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l2)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
    {
        std::vector<MoveOnly, other_allocator<MoveOnly> > l(other_allocator<MoveOnly>(5));
        std::vector<MoveOnly, other_allocator<MoveOnly> > lo(other_allocator<MoveOnly>(5));
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l)); 
        assert(is_contiguous_container_asan_correct(lo)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
        for (int i = 1; i <= 3; ++i)
        {
            l.push_back(i);
            lo.push_back(i);
        }
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l)); 
        assert(is_contiguous_container_asan_correct(lo)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
        std::vector<MoveOnly, other_allocator<MoveOnly> > l2 = std::move(l);
        assert(l2 == lo);
        assert(l.empty());
        assert(l2.get_allocator() == lo.get_allocator());
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l2)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
    {
        int a1[] = {1, 3, 7, 9, 10};
        std::vector<int> c1(a1, a1+sizeof(a1)/sizeof(a1[0]));
<<<<<<< HEAD
        std::vector<int>::const_iterator i = c1.begin();
        std::vector<int> c2 = std::move(c1);
        std::vector<int>::iterator j = c2.erase(i);
        assert(*j == 3);
=======
        assert(is_contiguous_container_asan_correct(c1)); 
        std::vector<int>::const_iterator i = c1.begin();
        std::vector<int> c2 = std::move(c1);
        assert(is_contiguous_container_asan_correct(c2)); 
        std::vector<int>::iterator j = c2.erase(i);
        assert(*j == 3);
        assert(is_contiguous_container_asan_correct(c2)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
#if __cplusplus >= 201103L
    {
        std::vector<MoveOnly, min_allocator<MoveOnly> > l(min_allocator<MoveOnly>{});
        std::vector<MoveOnly, min_allocator<MoveOnly> > lo(min_allocator<MoveOnly>{});
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l)); 
        assert(is_contiguous_container_asan_correct(lo)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
        for (int i = 1; i <= 3; ++i)
        {
            l.push_back(i);
            lo.push_back(i);
        }
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l)); 
        assert(is_contiguous_container_asan_correct(lo)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
        std::vector<MoveOnly, min_allocator<MoveOnly> > l2 = std::move(l);
        assert(l2 == lo);
        assert(l.empty());
        assert(l2.get_allocator() == lo.get_allocator());
<<<<<<< HEAD
=======
        assert(is_contiguous_container_asan_correct(l2)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
    {
        int a1[] = {1, 3, 7, 9, 10};
        std::vector<int, min_allocator<int>> c1(a1, a1+sizeof(a1)/sizeof(a1[0]));
<<<<<<< HEAD
        std::vector<int, min_allocator<int>>::const_iterator i = c1.begin();
        std::vector<int, min_allocator<int>> c2 = std::move(c1);
        std::vector<int, min_allocator<int>>::iterator j = c2.erase(i);
        assert(*j == 3);
=======
        assert(is_contiguous_container_asan_correct(c1)); 
        std::vector<int, min_allocator<int>>::const_iterator i = c1.begin();
        std::vector<int, min_allocator<int>> c2 = std::move(c1);
        assert(is_contiguous_container_asan_correct(c2)); 
        std::vector<int, min_allocator<int>>::iterator j = c2.erase(i);
        assert(*j == 3);
        assert(is_contiguous_container_asan_correct(c2)); 
>>>>>>> 1aeedfd... Pulled ToT libc++ to sources/cxx-stl/llvm-libc++/libcxx
    }
#endif
#endif  // _LIBCPP_HAS_NO_RVALUE_REFERENCES
}
