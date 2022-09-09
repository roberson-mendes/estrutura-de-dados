# About this repository 

This repository has c++ scripts based on data structure studies.

- Each folder "week" has scripts grouping studies of one week from the UNIVESP college "data structure" course, and that scripts can be grouped in "class" folders.
- Each set of scripts (.cpp and .h files) can be executed as one script by compiling and running this set of scripts.
- When compiling a script, put it in `/bin` folder.

# How to execute
## Dependencies
- To execute the scripts you only need a c++ compiler of your preference.

## How to run
- Just compile and execute the script you want to put to work and execute the generated compiled file.
- For exemple, to compile the `week_2/class_1` program, go to week_2/class_1 and run the following command:
```
g++ *.cpp -o  -std=c++17 ../../bin/class_1 | ../../bin/class_1
```

# Code conventions
All code conventions of this repository is based on the [Gromacs manual](https://manual.gromacs.org/5.1.1/dev-manual/naming.html) and on the [GeeksForGeeks article](https://www.geeksforgeeks.org/naming-convention-in-c/).

# Testing
We use [doctest](https://github.com/doctest/doctest/blob/master/doc/markdown/testcases.md) to make the tests.
All test classes are put in \test repository.

- To compile tests there is used -std=c++17 flag.
