# CPP01

<h1>C++ - Module 02</h1>

<br />

> [!NOTE] 
> Other Languages: [Castellano](https://github.com/inakilastra/Python_for_Data_Science_1_Array/blob/main/LEEME.md)

<br />

> [!IMPORTANT]  
> At the end of each file you have an explanation of the code.

<br />

>
> - :white_check_mark: [Subject](#subject)
>
>   - :white_check_mark: [Exercise 00](#exercise-00)

<br /><br />

>
> - :white_check_mark: [Evaluation](#evaluation)
>
>   - :white_check_mark: [Ex00](#ex00) 

<br /><br /><br /><br />

## <h2>Subject</h2>

<h3>General rules</h3>

**Compiling**

- Compile your code with c++ and the flags -Wall -Wextra -Werror

- Your code should still compile if you add the flag -std=c++98

<br /><br />

**Formatting and naming conventions**

- The exercise directories will be named this way: ex00, ex01, ... , exn

- Name your files, classes, functions, member functions and attributes as required in the guidelines.

- Write class names in **UpperCamelCase** format. Files containing class code will always be named according to the class name. For instance:
ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you have a header file containing the definition of a class "BrickWall" standing for a brick wall, its name will be BrickWall.hpp.

- Unless specified otherwise, every output messages must be ended by a new-line character and displayed to the standard output.

- Goodbye Norminette! No coding style is enforced in the C++ modules. You can follow your favorite one. But keep in mind that a code your peer-evaluators can’t understand is a code they can’t grade. Do your best to write a clean and readable code.

<br /><br />

**Allowed/Forbidden**

You are not coding in C anymore. Time to C++! Therefore:

- You are allowed to use almost everything from the standard library. Thus, instead of sticking to what you already know, it would be smart to use as much as possible the C++-ish versions of the C functions you are used to.

- However, you can’t use any other external library. It means C++11 (and derived forms) and Boost libraries are forbidden. The following functions are forbidden too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and that’s it.

- Note that unless explicitly stated otherwise, the using namespace <ns_name> and friend keywords are forbidden. Otherwise, your grade will be -42.

- **You are allowed to use the STL in the Module 08 and 09 only**. That means: no **Containers** (vector/list/map/and so forth) and no **Algorithms** (anything that requires to include the <algorithm> header) until then. Otherwise, your grade will be -42.

<br /><br />

**A few design requirements**

- Memory leakage occurs in C++ too. When you allocate memory (by using the new keyword), you must avoid **memory leaks**.

- From Module 02 to Module 09, your classes must be designed in the **Orthodox Canonical Form, except when explicitely stated otherwise**.

- Any function implementation put in a header file (except for function templates) means 0 to the exercise.

- You should be able to use each of your headers independently from others. Thus, they must include all the dependencies they need. However, you must avoid the problem of double inclusion by adding **include guards**. Otherwise, your grade will be 0.

<br /><br />

**Read me**

- You can add some additional files if you need to (i.e., to split your code). As these assignments are not verified by a program, feel free to do so as long as you turn in the mandatory files.

- Sometimes, the guidelines of an exercise look short but the examples can show requirements that are not explicitly written in the instructions.

- Read each module completely before starting! Really, do it.

- By Odin, by Thor! Use your brain!!!

```
You will have to implement a lot of classes. 
This can seem tedious, unless you’re able to script your favorite text editor.
```

```
You are given a certain amount of freedom to complete the exercises.
However, follow the mandatory rules and don’t be lazy. 
You would miss a lot of useful information! Do not hesitate to read about
theoretical concepts.
```

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp02)
<br /><br />

<h3>New rules</h3>

From now on, all your classes must be designed in the Orthodox Canonical Form, unless explicitely stated otherwise. Then, they will implement the four required member functions below:

- Default constructor
- Copy constructor
- Copy assignment operator
- Destructor

Split your class code into two files. The header file (.hpp/.h) contains the class definition whereas the source file (.cpp) contains the implementation.

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp02)
<br /><br />

### <h3>Exercise 00</h3>

XXX

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#cpp02)
<br /><br /><br /><br />

## <h2>Evaluation</h2>

<h3>Guidelines</h3>

You must compile with clang++, with -Wall -Wextra -Werror 
As a reminder, this project is in C++98.
C++11 (and later) members functions or containers are NOT expected.

Any of these means you must not grade the exercise in question:

- A function is implemented in a header (except in a template)

- A Makefile compiles without flags and/or with something other than clang++

Any of these means that you must flag the project as Forbidden Function:

- Use of a "C" function (*alloc, *printf, free)

- Use of a function not allowed in the subject

- Use of "using namespace" or "friend"

- Use of an external library, or C++20 features

<h3>Ex00</h3>

XXX

<br /><br />
[:arrow_up::arrow_up::arrow_up::arrow_up::arrow_up: **top** :arrow_up::arrow_up::arrow_up::arrow_up::arrow_up:](#python-for-data-science)
<br /><br />
