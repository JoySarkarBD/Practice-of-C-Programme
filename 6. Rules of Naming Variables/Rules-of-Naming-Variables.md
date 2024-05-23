In C programming, variable names must adhere to specific rules and conventions to ensure the code is syntactically correct and readable. Here are the rules for naming variables in C:

1. **Start with a Letter or Underscore**:
   - A variable name must start with a letter (uppercase or lowercase) or an underscore (`_`).
   - It cannot start with a digit.

   ```c
   int validVar1; // Valid
   int _validVar2; // Valid
   int 1invalidVar; // Invalid
   ```

2. **Follow with Letters, Digits, or Underscores**:
   - After the first character, the variable name can consist of letters, digits, or underscores.

   ```c
   int var123; // Valid
   int var_123; // Valid
   int var-123; // Invalid
   ```

3. **Case Sensitivity**:
   - Variable names in C are case-sensitive, meaning `myVar`, `MyVar`, and `MYVAR` would be considered three different variables.

   ```c
   int myVar;
   int MyVar;
   int MYVAR; // All are different variables
   ```

4. **No Reserved Keywords**:
   - A variable name cannot be a reserved keyword in C. Keywords have special meanings and uses in the language.

   ```c
   int int; // Invalid (int is a keyword)
   int float; // Invalid (float is a keyword)
   int myVariable; // Valid
   ```

5. **Length Limitations**:
   - Although there is no strict limit on the length of a variable name, extremely long names can be cumbersome and reduce readability. It is a good practice to keep names reasonably short yet descriptive.

6. **Meaningful Names**:
   - Use meaningful and descriptive names to enhance code readability and maintainability.

   ```c
   int a; // Not descriptive
   int numStudents; // Descriptive
   ```

Here are some examples of valid and invalid variable names:

**Valid Variable Names**:
```c
int score;
float averageScore;
char _initial;
double totalDistance;
int studentCount;
```

**Invalid Variable Names**:
```c
int 2ndPlace; // Invalid: starts with a digit
float total-score; // Invalid: contains a hyphen
char class; // Invalid: class is a keyword
double total$; // Invalid: contains an illegal character ($)
```