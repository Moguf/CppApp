### Design of C++
* direct mappings of built-in operations and types to hardware to provide efficient memory use and efficient low-level operations, and 
* affordable and flexible abstraction mechanisms to provide user-defined types with the same notational support, range of uses, and performance as built-in types. 
* C++ is a general-purpose programming language with a bias toward systems programming.
* C++ is a general-purpose programming language providing a direct and efficient model of hardware combined with facilities for defining lightweight abstractions.
* C++ is a language for developing and using elegant and efficient abstractions.
* Leave no room for a lower-level language below C++ (except for assembly code in rare cases). If you can write more efficient code in a lower-level language then that language will most likely become the systems programming language of choice.
* What you don’t use you don’t pay for. If programmers can hand-write reasonable code to simulate a language feature or a fundamental abstraction and provide even slightly better performance, someone will do so, and many will imitate. Therefore, a language feature and a fundamental abstraction must be designed not to waste a single byte or a single processor cycle compared to equivalent alternatives. This is known as the zero-overhead principle.

### C++ ideas
* Express ideas directly in code.
* Express independent ideas independently in code.
* Represent relationships among ideas directly in code.
* Combine ideas expressed in code freely - where and only where comninations make sence.
* Express simple ideas simply.

### C++ Style
* Procedural Programming
* Data abstraction
* Object-oriented programming
* Generic programming



### Modern Desing
1. Use constructors to establish invariants.
+ Use constructor/destrutor pairs to simplify resource managment.
+ Avoid "naked" new and delete.
+ Use containers and algorithms rather than built-in arrays and ad hoc code.
5. Prefer standard-library facilities to locally developed code.
6. Use exceptions, rather than error codes, to report errors that cannot be handled locally.
7. Use move smantics to avoid copying large object.
8. Use unique_ptr to reference objects of polymorphic type.
9. Use shared_ptr to reference shared objects, that is, objects without a single owner that is responsible for their destruction.
10. Use templates to maintain static type safety (eliminate casts) and avoid unnecessary use of class hierarchies.
