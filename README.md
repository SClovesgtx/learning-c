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

# Pointers

You can reserve a memory address for a variable using a pointer. Syntax example:

```c
int *a; 
```

## Application of pointers

The main application for pointers is embedded systems/device, where exist a concern about low memory use.

For example, image a device that control temperature:

![](imgs/temperature_sensor.png)

There is a sensor attached to a memory address (1024) that will storage a temperature value. 

A program will access (point to 1024) this particular memory address to make decisions.

Pointers also help with memory efficiency allocation. For example, when we need to pass some data to a function, instead to pass a data that will consume new memory space inside the function, we can just pass to the function a pointer to the memory address where data is storage, in this way, the function will be able to work with the data without use memory space unnecessarily.

Please, see the code in *pointer_intro.c* and compile it to see his output.
