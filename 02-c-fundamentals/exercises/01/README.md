There is no error in modern compilers, as it will atuomatically exit the program with code 0. This is because main function automatically have a hidden "return 0;" in its implementation

However, if we use std 89 we need to declare:
```
return 0;
```

and we need to add a new line below the last 
```
}
```