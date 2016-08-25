Design of C++
-------------

* direct mappings of built-in operations and types to hardware to provide efficient memory use and efficient low-level operations, and 
* affordable and flexible abstraction mechanisms to provide user-defined types with the same notational support, range of uses, and performance as built-in types. 
* C++ is a general-purpose programming language with a bias toward systems programming.
* C++ is a general-purpose programming language providing a direct and efficient model of hardware combined with facilities for defining lightweight abstractions.
* C++ is a language for developing and using elegant and efficient abstractions.
* Leave no room for a lower-level language below C++ (except for assembly code in rare cases). If you can write more efficient code in a lower-level language then that language will most likely become the systems programming language of choice.
* What you don’t use you don’t pay for. If programmers can hand-write reasonable code to simulate a language feature or a fundamental abstraction and provide even slightly better performance, someone will do so, and many will imitate. Therefore, a language feature and a fundamental abstraction must be designed not to waste a single byte or a single processor cycle compared to equivalent alternatives. This is known as the zero-overhead principle.

C++ ideas
---------

* Express ideas directly in code.
* Express independent ideas independently in code.
* Represent relationships among ideas directly in code.
* Combine ideas expressed in code freely - where and only where comninations make sence.
* Express simple ideas simply.

C++ Style
---------

* Procedural Programming

  This is programming focused on processing and the design of suitable data structures. It is what C was designed to support (and Algol, and Fortran, as well as many other languages). C++’s support comes in the form of the built-in types, oper- ators, statements, functions, structs, unions, etc. With minor exceptions, C is a subset of C++. Compared to C, C++ provides further support for procedural programming in the form of many additional language constructs and a stricter, more flexible, and more support- ive type system.

* Data abstraction

  This is programming focused on the design of interfaces, hiding imple- mentation details in general and representations in particular. C++ supports concrete and abstract classes. The facilities for defining classes with private implementation details, con- structors and destructors, and associated operations directly support this. The notion of an abstract class provides direct support for complete data hiding.
  
* Object-oriented programming

  This is programming focused on the design, implementation, and use of class hierarchies. In addition to allowing the definition lattices of classes, C++ provides a variety of features for navigating class lattices and for simplifying the definition of a class out of existing ones. Class hierarchies provide run-time polymorphism (§20.3.2, §21.2) and encapsulation (§20.4, §20.5).

* Generic programming

  This is programming focused on the design, implementation, and use of general algorithms. Here, ‘‘general’’ means that an algorithm can be designed to accept a wide variety of types as long as they meet the algorithm’s requirements on its arguments. The template is C++’s main support for generic programming. Templates provide (compile- time) parametric polymorphism.

Modern Desing
-------------

1. Use constructors to establish invariants.
+ Use constructor/destrutor pairs to simplify resource managment.
+ Avoid "naked" new and delete.
+ Use containers and algorithms rather than built-in arrays and ad hoc code.
+ Prefer standard-library facilities to locally developed code.
6. Use exceptions, rather than error codes, to report errors that cannot be handled locally.
7. Use move smantics to avoid copying large object.
8. Use unique_ptr to reference objects of polymorphic type.
9. Use shared_ptr to reference shared objects, that is, objects without a single owner that is responsible for their destruction.
10. Use templates to maintain static type safety (eliminate casts) and avoid unnecessary use of class hierarchies.


Desgin Styles
-------------

* Classes support all of the mentioned styles; all rely on the user representing ideas as user- defined types or objects of user-defined types.
* Public/private access control supports data abstraction and object-oriented programming by making a clear distinction between interface and implementation.
* Member functions, constructors, destructors, and user-defined assignment provide a clean functional interface to objects as needed by data abstraction and object-oriented program- ming. They also provide a uniform notation as needed for generic programming. More general overloading had to wait until 1984 and uniform initialization until 2010.
* Function declarations provide specific statically checked interfaces to member functions as well as freestanding functions, so they support all of the mentioned styles. They are neces- sary for overloading. At the time, C lacked ‘‘function prototypes’’ but Simula had function declarations as well as member functions.
* Generic functions and parameterized types (generated from functions and classes using macros) support generic programming. Templates had to wait until 1988.
* Base and derived classes provide the foundation for object-oriented programming and some forms of data abstraction. Virtual functions had to wait until 1983.
* Inlining made the use of these facilities affordable in systems programming and for building run-time and space efficient libraries.


Resource management idea
------------------------

* simple (for implementers and especially for users),
* general (a resource is anything that has to be acquired from somewhere and later released),
* efficient (obey the zero-overhead principle; §1.2),
* perfect (no leaks are acceptable), and
* statically type-safe.

  
