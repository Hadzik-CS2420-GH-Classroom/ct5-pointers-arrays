# CT5 – Pointers & Arrays Basics (Indexing, Pointer Arithmetic)

## Topics Covered in CT5

| Topic | Items |
|---|---|
| Pointers and arrays | 4 |
| Treating pointers as arrays | 2 |
| Treating arrays as pointers | 1 |

These are foundational concepts — understanding how pointers and arrays relate, indexing, pointer arithmetic, and the interchangeability between pointers and arrays.

---

## Topics Covered in CT6 – Building a Simple Dynamic Array (Resize + Copy)

| Topic | Items |
|---|---|
| The `new` and `delete` operators (`shared_ptr` and `unique_ptr` allowed) | 1 |
| Two dimensional arrays | 1 |
| Dynamic arrays | 1 |

These deal with heap allocation and dynamic memory. `new`/`delete` is needed to build a dynamic array, and 2D arrays often involve dynamic allocation. The resize + copy activity is the context to introduce all three.

Start with pointers_and_arrays.cpp — this is the foundation. Walk through in section order:

Declaring pointers and arrays — students first see what a pointer is and how to point at an array element
Address of array elements — they see that arrays live in contiguous memory (the "aha" moment when addresses differ by 4 bytes)
Dereferencing — they learn to read and write through a pointer
Pointer arithmetic — now they can walk through memory, which sets up everything else
Then pointers_as_arrays.cpp — the natural follow-up:

Bracket indexing on a pointer — "wait, ptr[2] works on a pointer too?"
Looping with ptr[i] — reinforces that ptr[i] is just *(ptr + i) (the bonus at the bottom ties it together)
Finish with arrays_as_pointers.cpp — the flip side:

Array decay — passing grades to a const int* parameter — "the compiler does this automatically?"
Pointer arithmetic on array name — *(grades + 2) works directly on the array
This is already the order main.cpp calls them, so you're set. I'd suggest spending the most time on pointers_and_arrays.cpp since it has 10 TODOs and covers the core mental model. The other two go faster once students have that foundation.