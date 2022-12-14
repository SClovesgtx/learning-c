# Storage classes

The objective of the storage classes is to define the scope and lifetime of the variables.

The **default storage class for all local variables** is *auto*. Example:

```c 
int main() {
    auto int a;
    a = 100;
    return 0;
}
```

So, as the *auto* is default, you can omit it:

```c 
int main() {
    int a;
    a = 100;
    return 0;
}
```

Now, about the **scope**, the *a* variable is available just in the function context, you can not access it from another function.

If you want **to extend the scope of a variable** throughout the programming, you can use *static* storage class. Example:

```c 
#include<stdio.h>

int fun()
{
  static int count = 10;
  count++;
  return count;
}
  
int main()
{
  printf("%d ", fun());
  printf("%d ", fun());
  printf("%d ", fun());
  return 0;
}
```

To store the variable in the processor (in a context where you need to access a variable frequently and you you need it be faster) you can use the storage class register. Example:

```c 
#include<stdio.h>

int main()
{
  register int i;
  i = 10; 
  printf("%d ", i);
  // it will fail, "i" do not has a address in RAM.
  // error: address of register variable ‘i’ requested
  printf("Endereço na memória: %u", &i); 
  return 0;
}
```

You can use extern storage variable, in other words, you can use variables from other files (modules). Please, compile the *file1.c* e *file2.c*:

```c 
// file1.c
#include<stdio.h>

extern int i;

int main(){
    printf("i = %d\n", i);
    return 0;
}
```

-------------------

```c 
// file2.c
int i=10;
```

------------------------
```bash
~user$ gcc file1.c file2.c
```

## Summary

- **auto**: default storage class and variable scope within function.
- **static**: extends the local variable scope throughout the program.
- **register**: stores  in processor register and provides fast access.
- **extern**: extend the visibility across different files.  