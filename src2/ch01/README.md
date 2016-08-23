### Design of C++
* direct mappings of built-in operations and types to hardware to provide efficient memory use and efficient low-level operations, and 
* affordable and flexible abstraction mechanisms to provide user-defined types with the same notational support, range of uses, and performance as built-in types. 
* C++ is a general-purpose programming language with a bias toward systems programming.
* C++ is a general-purpose programming language providing a direct and efficient model of hardware combined with facilities for defining lightweight abstractions.



### C++ ideas
- Represent idea directly in code.
- Represent idea directly in code.

### Modern Desing
+ Use constructors to establish invariants.
+ Use constructor/destrutor pairs to simplify resource managment.
+ Avoid "naked" new and delete.
4. Use containers and algorithms rather than built-in arrays and ad hoc code.
5. Prefer standard-library facilities to locally developed code.
6. Use exceptions, rather than error codes, to report errors that cannot be handled locally.
7. Use move smantics to avoid copying large object.
8. Use unique_ptr to reference objects of polymorphic type.
9. Use shared_ptr to reference shared objects, that is, objects without a single owner that is responsible for their destruction.
10. Use templates to maintain static type safety (eliminate casts) and avoid unnecessary use of class hierarchies.
