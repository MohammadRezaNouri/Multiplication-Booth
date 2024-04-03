# Multiplication-Booth
A simple program that multiplies two n-bit numbers in Booth format at n + 1 clocks

In this program, the optimal circuit algorithm for the serial multiplication of signed numbers is implemented using the Booth method in the C Plus Plus language.
## Tip
Be sure to enter the two entered numbers the same size, for example:

```
$ X : 
1010
$ Y : 
0110
clk : 1     y : 0000 , 0110 , 0
clk : 2     y : 0000 , 0011 , 0
clk : 3     y : 0011 , 0001 , 1
clk : 4     y : 0001 , 1000 , 1
clk : 5     y : 1101 , 1100 , 0
```
## Compatibility
You should be able to run this program anywhere. For the compiling process, both of [GCC](https://gcc.gnu.org/) and [Clang](https://clang.llvm.org/) should work.
### Tested Environments
- OS:  [Microsoft](https://www.microsoft.com/uk-ua/) Windows 10 Pro x64
- Compiler: [GCC](https://gcc.gnu.org/) C++ Compiler (8.1.0)
## Cloning
```
git clone https://github.com/MohammadRezaNouri/Multiplication-Booth
```
## Installation
open the cmd or PowerShell and go to files directory with cd command and execute the following commands :

- Compile

    Put all .h and .cpp files in one folder.
    ```bash
    g++ main.cpp -o app -O2
    ./app
    ```

- Run

    ```
    \app.exe
    ```
## Usage
Lesson practice, algorithm learning
## In the future
Become a graphic application.
## Contributing
Your contributions are always welcome.
## License
Licensed under GPLv3. See [LICENSE.md](https://github.com/MohammadRezaNouri/Multiplication-Booth/blob/main/LICENSE.md).
