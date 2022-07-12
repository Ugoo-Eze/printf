LEARNING ABOUT _PRINTF

_printf is a custom implementation of c programming function printf. the prototype to be used is int _printf(const char *, ...);

FUNCTIONS OF PRINTF
Integer

Input: _printf("There are %i dozens in a gross\n", 12);
Output: There are 12 dozens in a gross
Character

Input: _printf("The first letter in the alphabet is %c\n", 'A');
Output: The first letter in the alphabet is A
String

Input: _printf("%s\n", 'This is a string.');
Output: This is a string.
Decimal:

Input: _printf("%d\n", 1000);
Output: 1000
Rot13

Input: _printf("Unknown:[%R]\n", "HELLO WORLD");
Output: URYYB JBEYQ
FLAGS

Input: printf("Flag: [%+ d]", 1230);
Output: Flag: [+1230] => 13
OCTAL

Input: printf("Unsigned octal:[%o]", 6);
Output: Unsigned octal:[6] => 18

