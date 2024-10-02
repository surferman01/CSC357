# Day 5

October 2, 2024

Strings and IO

- Strings are just arrays of characters
- char s[] = "this string";     -> will allocate enough space for the string and the '\000' character
- char s[8] = "str";            -> allocates space in the stack to use
- char *s = "string";           -> trying to change the array will cause segfault because this is stores in text segment
- NULL
  - character '\000'
  - denotes the end of a string
  - will pad on the '\000' for the rest of the string if more space is allocated than used
  - if the string is beyond the bounds of the array, then the string will technically go until a '\000\' is found

printf()

- Format Codes (%):
  - d, i: decimal or integer
  - s: string
  - [num][letter]: make sure the space is at least num long
  - .[num][letter]: make sure space is only num long
  - *: then use this format: 
    - printf("%*.*", [param_for_first_*], [param_for_second_*], string)

scanf()

- read from stdin and format it
- scanf("%d", &x);