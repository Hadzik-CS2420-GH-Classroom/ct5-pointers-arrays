#include "pointers_as_arrays.h"

#include <iostream>

void pointersAsArrays() {
    std::cout << "\n=== Treating Pointers as Arrays ===" << '\n';

    int data[] = {100, 200, 300, 400, 500};
    int size = 5;

    // A pointer to the first element of data
    int* ptr = data;
    //
    // ! DISCUSSION: Why does int* ptr = data work without &?
    //   Same reason as before — the array name 'data' decays to a pointer
    //   to its first element. This is identical to: int* ptr = &data[0];

    // --- 1. Using bracket [] indexing on a pointer ---
    std::cout << "\n--- 1. Bracket Indexing on a Pointer ---" << '\n';

    std::cout << "Array access:   data[0] = " << data[0] << '\n';

    // TODO: Print ptr[0] to show that a pointer can use [] just like an array
    // Expected output: "Pointer access: ptr[0] = 100"
    //
    // ! DISCUSSION: How can a pointer use [] like an array?
    //   The [] operator is defined for pointers: ptr[i] is syntactic sugar
    //   for *(ptr + i). The compiler rewrites it to pointer arithmetic.
    //   This is why arrays and pointers are so interchangeable in C/C++.

    // TODO: Print ptr[2] to access the third element through the pointer
    // Expected output: "Pointer access: ptr[2] = 300"

    // TODO: Print ptr[4] to access the last element through the pointer
    // Expected output: "Pointer access: ptr[4] = 500"
    //
    // ! DISCUSSION: What happens if you do ptr[5] or ptr[100]?
    //   No compile error! C++ does NOT check array bounds. ptr[5] reads
    //   whatever happens to be in memory after the array — this is
    //   undefined behavior. It might crash, return garbage, or seem to
    //   "work" (the worst outcome, because the bug hides). Always track
    //   your array size and stay within bounds.

    // --- 2. Iterating using pointer with array syntax ---
    std::cout << "\n--- 2. Looping with Pointer Using [] Syntax ---" << '\n';

    // TODO: Write a for loop that uses ptr[i] to print all elements
    //       Use 'size' as the loop bound
    // Expected output:
    //   ptr[0] = 100
    //   ptr[1] = 200
    //   ptr[2] = 300
    //   ptr[3] = 400
    //   ptr[4] = 500
    //
    // ! DISCUSSION: Is looping with ptr[i] the same as looping with data[i]?
    //   Yes, exactly. Since ptr points to data[0], ptr[i] and data[i]
    //   access the same memory. The compiler generates identical code.
    //   The difference is semantic: ptr is a variable (can be reassigned),
    //   while data is a fixed array name (cannot be reassigned).

    // Bonus discussion: Why does this work?
    // ptr[i] is equivalent to *(ptr + i)
    // The compiler translates bracket notation into pointer arithmetic!
    std::cout << "\nBonus - these are equivalent:" << '\n';
    std::cout << "  ptr[2]      = " << ptr[2] << '\n';
    std::cout << "  *(ptr + 2)  = " << *(ptr + 2) << '\n';
    //
    // ! DISCUSSION: Fun fact — 2[ptr] also works!
    //   Since ptr[2] is *(ptr + 2), and addition is commutative,
    //   2[ptr] is *(2 + ptr) which is the same thing. You'll never
    //   write this in real code, but it proves [] is just pointer math.
}
