# SmallerLoader for C

This library consisting from small three sources is aimed for C and C++ programmers to
help them maintaining executable size.

## Getting Started

Using this library is little more complex that it could be. While compiling, be sure that you pass `-nostartfiles` to gcc.
You need to link it aganist crt0.a, crt1.a, or crt3.a It all depends on amount of arguments that your main function.
If your main function takes 3 arguments, argc argv and env use crt3.a If your main takes two arguments, argc and argv use
crt1.a. If your main function takes no arguments, use crt0.a. 

It's REALLY RECOMMENDED to use UPX (lastest version bundled)

### Installing

If you are not building console application, please modify `__set_app_type(1);` parameter to match subsystem (1 - console,
2 - gui, 0 - undefined). 

To build on windows, you need gcc in path.

```
cd SmallerWorkbench
cd SmallerLoader
build.bat
```

or, on GNU/Linux:

```
cd SmallerWorkbench
cd SmallerLoader
./build.sh
```

Build process should start. To build using for example crt0.a, use following:

```
gcc -o prog.exe crt0.a prog.c -nostartfiles
```

or, on GNU/Linux:

```
gcc -o prog crt0.a prog.c -nostartfiles
```

## Deployment

There is no need to need to make some serious changes to work. Code in most cases don't need any changes, but if you will spot any error please report it in issues section or try to repair it yourself (it would be kind to commit changes!).

## Authors

* **Krzysztof Szewczyk** - *Initial work* - [Krzysztof Szewczyk](https://github.com/KrzysztofSzewczyk)
* **UPX Authors** - *UPX, bundled with repo*. [UPX](https://upx.github.io/)

## License

Smaller Workbench is licensed under the MIT License - see the [license](LICENSE) file for details
Smaller Workbench is licensed under the GPL License - see the [license](https://github.com/upx/upx/blob/v3.94/LICENSE) file for details