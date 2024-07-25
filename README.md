# DSA C++
|Code|
|----|
|[Patterns](/patterns.cpp)|


### Boilerplate Code `c++` for VSCode Editor
> [!TIP]\
> 1.Open setting in VSCode Editor\
> 2.Go to user Sinppets\
> 3.search cpp.json\
> 4.Replace with Below Code

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