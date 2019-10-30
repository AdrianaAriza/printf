![GitHub Logo](https://www.holbertonschool.com/holberton-logo.png)


# _printf

_printf is a custom C language function to do formatted printing.

## Implementation

Clone it from GitHub [_printf](git@github.com:AdrianaAriza/printf.git) to install locally.

```bash
git clone git@github.com:AdrianaAriza/printf.git
```
Prototype
```c
int _printf(const char *format, ...);
```
Include this function from local library:
```c
#include "Holberton.h"
```


## Usage
| Conversion Specificator  | Action |
| ------------- | ------------- |
| **%**  | % For indentify the type of format to use as output|
| **s**  | String  |
| **c**  | Print a Character  |
| **i**  | Print a decimal (base 10) number  |
| **d**  | Print a decimal (base 10) number  |
| **u**  | Print an unsigned decimal (base 10) number  |
| **o**  | Print a number in octal (base 8).  |
| **x**  | print a number in hexadecimal (base 16) in Lowercase  |
| **X**  | print a number in hexadecimal (base 16) in Uppercase  |
| **R**  | Convert a text/string accord to ROT13 encrypting  |
| **r**  | Reverse a string |
| **b**  | Print a number converted in binary |
| **p**  | Print the address of pointer or any other variable|
## Example

```c
int main(void)
{
    int len;
    int len2;
    unsigned int ui = (unsigned int)INT_MAX + 1024;
    void *addr;
    char c = 'c';

_printf("String:[%s]\n", "I am a string !");
_printf("Character:[%c]\n", 'H');
_printf("Length:[%d, %i]\n", len, len);
_printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("String:[%R]\n", "I am a string !");
_printf("String:[%r]\n", "I am a string !");
_printf("Binary:[%b]\n", len);
_printf("Address:[%p]\n", addr);
return (0);
}
```
##### Output

```bash
String:[I am a string !]
Character:[H]
Length:[39, 39]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
String:[V nz n fgevat !]
String:[! gnirts a ma I]
Binary:[100111]
Address:[0x7ffe637541f0]
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors
[Adriana Ariza](https://github.com/AdrianaAriza) /
[Juan Pablo Zuluaga](https://github.com/juanzuluaga91/)