# DSA C++ 

**Code**

|[Patterns](/patterns.cpp)|[Problems](/Problems/)|[Array](/Array/)|
|-------------------------|----------------------|----------------|

# General Q&A
<details>
   <summary>What are Data Structure ?</summary>
   When a program is dealing with the data, how to will organize the data in main memory during execution time of a program.

   <br>
   
   |[physical DS]()|[Logical Ds]()|
   |-|-|
   |Array|Stack|
   |Matrics|Queue|
   |Linked List|Tress|
   ||Graph|
   ||Hashing|

</details>

<!-- ### User Define Templets

```cpp
template <class T1, class T2, ...>
```

example :

```cpp
template <class T>
T sum(T a, T b){
    return (a + b);
}
``` -->

<!-- ### Standard Template Library (` STL `) -->














### Boilerplate Code `c++` for VSCode Editor

> [!TIP]\
> 1.Open setting in VSCode Editor\
> 2.Go to user Sinppets\
> 3.search cpp.json\
> 4.Replace with Below Code\
> Then after open **.cpp** file & just type `boil...` and hit Enter & see magic.

```json
"Print to console": {
		"prefix": "boilerplate Code",
		"body": [
			"#include <iostream>",
			"using namespace std;\n",
			"int main(){",
			"\t$1",
			"\treturn 0;",
			"}"
		],
		"description": "Log output to console"
	}
```

```cpp
int a;
a = cin.get(); // it stores ASCII value of  given input in a.
```
### Bitwise Operators

1. **Bitwise AND (`&`):**

   ```cpp
   int a = 5;  // 0101 in binary
   int b = 3;  // 0011 in binary
   int result = a & b;  // result is 1 (0001 in binary)
   ```

2. **Bitwise OR (`|`):**

   ```cpp
   int a = 5;  // 0101 in binary
   int b = 3;  // 0011 in binary
   int result = a | b;  // result is 7 (0111 in binary)
   ```

3. **Bitwise XOR (`^`):**

   ```cpp
   int a = 5;  // 0101 in binary
   int b = 3;  // 0011 in binary
   int result = a ^ b;  // result is 6 (0110 in binary)
   ```

4. **Bitwise NOT (`~`):**

   ```cpp
   int a = 5;  // 0101 in binary
   int result = ~a;  // result is -6 (in two's complement, which is 1111...1010 in binary)
   ```

5. **Left Shift (`<<`):**

   ```cpp
   int a = 5;  // 0101 in binary
   int result = a << 1;  // result is 10 (1010 in binary)
   ```

6. **Right Shift (`>>`):**

   ```cpp
   int a = 5;  // 0101 in binary
   int result = a >> 1;  // result is 2 (0010 in binary)
   ```