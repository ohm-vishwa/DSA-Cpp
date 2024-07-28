# DSA C++

|Code|
|----|
|[Patterns](/patterns.cpp)|
|[1 Fibonacci number](/Problems/001_fibonacci.cpp)|
|[2 Check Prime number](/Problems/002_isPrime.cpp)|
|[3 Subtract --> (product & sum)](/Problems/003_subtractProductAndSum.cpp)|
|[4 Decimal to Binary](/Problems/004_decimalToBinary.cpp)|
|[5 Binary toDecimal](/Problems/005_binaryToDecimal.cpp)|
|[6 Reverse Integer](/Problems/006_reverseInteger.cpp)|
|[7 Bitwise 1's Compliment](/Problems/007_bitwiseComplement.cpp)|
|[8 power of 2](/Problems/008_isPowerOf2.cpp)|
|[]()|

## Leet Code Questions

|no.|Leet Code Problems|
|---|------------------|
|1281|[subtract-the-product-and-sum-of-digits-of-an-integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/)|
|191|[number-of-1-bits](https://leetcode.com/problems/number-of-1-bits/)|
|7|[reverse-integer](https://leetcode.com/problems/reverse-integer/)|
|1009|[complement-of-base-10-integer](https://leetcode.com/problems/complement-of-base-10-integer/)|
|132|[check Perfect square](https://leetcode.com/problems/power-of-two/)|
|||

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
## Bitwise Operators

1. **AND (` & `)**
2. **OR (` | `)**
3. **XOR (` ^ `)**
4. **NOT (` ~ `)**
5. **Left Shift (` << `)**
6. **Right Shift (` >> `)**

### Examples

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