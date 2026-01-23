# Macro-based Test Environment Guide (C)

This document explains how **C preprocessor macros** can be used to simulate (mock) variables and functions for testing purposes, based on a **real example**. It also highlights **why this approach is risky** and provides **cleaner, safer alternatives**.

---

## 1. Purpose

- Understand how the C preprocessor (`#define`, `#undef`, `#include`) affects compilation
- Learn how variables and functions can be overridden during testing
- Identify **dangerous side effects** of macro-based mocking
- Learn **recommended patterns** for testable C code

---

## 2. Original Example

### `main.c`

```c
#include <stdio.h>

int var1 = 2;

int func1(int a, int b){
    return a + b;
}

int main()
{
    int a = 2, b = 3;

#define D_TC_1
#include "test_enviroment.h"
    {
        int t1 = var1;
        printf("var1 = %d, ", t1);
        int t2 = func1(a, b);
        printf("func1 = %d\n", t2);
        // Output: var1 = 1, func1 = 3
    }
#undef D_TC_1
#include "test_enviroment.h"

    {
        int t1 = var1;
        printf("var1 = %d, ", t1);
        int t2 = func1(a, b);
        printf("func1 = %d\n", t2);
        // Output: var1 = 2, func1 = 5
    }

    return 0;
}
```

---

### `test_enviroment.h`

```c
#ifdef D_TC_1

#define var1 (1)
#define func1(a,b) (3)

#else

#undef var1
#undef func1

#endif
```

---

## 3. How It Works

### 3.1 Preprocessor Behavior

- When `D_TC_1` is defined, the preprocessor **replaces identifiers** before compilation
- `var1` is no longer a variable → it becomes a macro with value `1`
- `func1(a,b)` is no longer a function → it expands to constant `3`

Example after preprocessing:

```c
int t1 = (1);
int t2 = (3);
```

---

### 3.2 After `#undef`

- `#undef var1` and `#undef func1` remove the macros
- The compiler falls back to the **original global variable and function**

```c
int t1 = var1;        // 2
int t2 = func1(a,b); // 5
```

> ⚠️ Important: `#undef` does **not restore** anything — it only removes the macro definition.

---

## 4. Problems With This Approach ⚠️

### ❌ 1. Macros Override Real Symbols

- Variables and functions disappear behind macros
- Debuggers, IDEs, and static analyzers lose visibility
- Very hard to trace bugs

---

### ❌ 2. Hidden Global Side Effects

- Macro effects depend on **include order**
- Including headers inside functions is confusing and fragile

---

### ❌ 3. Poor Maintainability

- Small changes can break unrelated code
- New developers may misinterpret behavior

---

## 5. Recommended Safer Alternatives

### ✅ Option 1: Wrapper Macros (Safe & Simple)

```c
#ifdef D_TC_1
#define TEST_var1() 1
#define TEST_func1(a,b) 3
#else
#define TEST_var1() var1
#define TEST_func1(a,b) func1(a,b)
#endif
```

Usage:

```c
int t1 = TEST_var1();
int t2 = TEST_func1(a,b);
```

✔ Original symbols remain intact
✔ Clear test intent

---

### ✅ Option 2: Function Pointers (Recommended for Embedded)

```c
int (*func1_ptr)(int,int) = func1;

#ifdef D_TC_1
int fake_func1(int a, int b) { return 3; }
func1_ptr = fake_func1;
#endif
```

Usage:

```c
int t2 = func1_ptr(a,b);
```

✔ Widely used in embedded / automotive testing
✔ No macro side effects

---

### ✅ Option 3: Link-Time Mocking (Advanced)

- Weak symbols
- Separate test object files
- Linker-level override

✔ Professional-grade solution
✔ Best for large projects

---

## 6. Conclusion

- Macro-based mocking **works**, but is **dangerous**
- Avoid redefining real variables and functions
- Prefer wrappers, function pointers, or link-time mocks

If you are working with:
- Unit testing in C
- Embedded systems
- Automotive / CAN software

➡ Use **controlled and explicit test mechanisms** instead of macro overrides.

---

**End of document**

