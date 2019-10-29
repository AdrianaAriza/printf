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
| conversion specifier  | Type of data |
| ------------- | ------------- |
| **c**  | Character |
| **s**  | String  |
| **%**  | Percent sign  |
| **i**  | Integer  |
| **d**  | Decimal integer  |

## Example

```c
int main(void)
{
    int len = 0;

    len = _printf ("Hello\n");

_printf ("Length: %d\n", len);
}
```
## Output

```bash
Hello
Length: 6
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## Authors
[Adriana Ariza](https://github.com/AdrianaAriza) /
[Juan Pablo Zuluaga](https://github.com/juanzuluaga91/)