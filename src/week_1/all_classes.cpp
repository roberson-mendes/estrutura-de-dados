#include <iostream>
#include <cstddef>

// Simple function definition
int sum(int number1, int number2){
    return number1 + number2;
}

void first_steps() {
    // How to Inicialize variables
    int number1;
    int number2;
    
    // How to IOStream
    std::cout << "Hello world\n" << "\n";
    std::cout << "Presenting IOStream: \n";
    std::cout << " type the first number: ";
    std::cin >> number1;
    std::cout << " type the second number: ";
    std::cin >> number2;

    // Mathematical operators
    std::cout << "Presenting math operands\n";
    std::cout << "\n  Making mathematic operations... \n";
    int sum = number1 + number2;
    std::cout << "    sum result: " << sum << "\n";
    int subtraction = number1 - number2;
    std::cout << "    subtraction result: " << subtraction << "\n";
    int multiplication = number1 * number2;
    std::cout << "    multiplication result: " << multiplication << "\n";
    if(number1 != 0 ) {
        int division = number1 / number2;
        std::cout << "    division result: " << division << "\n";
        float fdivision = (float) number1 / number2;
        std::cout << "    float division: " << fdivision << "\n";
        int res = number1 % number2;
        std::cout << "    rest operation result: " << res << "\n";
    } else { std::cout << "    numerator can't be zero in division operations.\n"; }


    // Conditional operators
    std::cout << "\nCalculating conditional operations...\n";
    if(number1 == number2)
        std::cout << "number_1 == number_2" << number2 << "\n";
    if(number1 != number2)
        std::cout << "number_1 != number_2" << number2 << "\n";
    if(number1 < number2)
        std::cout << "number_1 < number_2" << number2 << "\n";
    if(number1 > number2)
        std::cout << "number_1 > number_2" << number2 << "\n";

    // Repetition
    std::cout << "\nPresenting repetitions loops:\n";
    int counter = 0;
    int amount = 0;
    std::cout << "  'while' loop\n";
    while(counter < 3) {
        std::cout << "    type a number: (" << counter << ")";
        std::cin >> number1;
        counter++;
    }

    std::cout << "  'for' loop\n";
    int total = 0;
    for(int number = 1; number <= 20; number++) {
        total += number;
        std::cout << "    total:" << total << "\n";
    }


    int count;
    int valor;
    int sumAvarage;
    sumAvarage = 0;
    count = 0;

    std::cout << "  'do-while' loop\n";
    std::cout << "    to end up the loop, type a value lower than 0\n\n";
    do {
        std::cout << "    type a value: ";
        std::cin >> valor;
        sumAvarage += valor;
        count++;
        std::cout << "    count:" << count << "\n";
    } while(valor >= 0);

    //How to type cast
    std::cout << "\nType-casting calculating the aritmethic avarage...\n";
    float avarage = (float) sumAvarage / (float) count;
    std::cout << "  the avarage is: " << avarage << "\n";
}

//##############################################----- Pointers -----#####################################################################

//#######################--- Argument by value vs Argument by reference ---#######################
//auxiliary reference_vs_value_switching function
void switch_values_passing_argument_by_value(int val1, int val2) {
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}

//auxiliary reference_vs_value_switching function
void switch_values_passing_argument_by_reference(int &val1, int &val2) {
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}

//auxiliary reference_vs_value_switching function
void switch_pointer_by_reference(int*& pointer) {
    std::cout << "    Executing function switch_pointer_by_reference...\n";
    std::cout << "      pointer's value received: " << pointer << "\n";
    std::cout << "      changing the addres of the pointer...\n";
    pointer = new int[3];
    std::cout << "      pointer's address changed! The new value inside the function is: " << pointer << "\n";
    std::cout << "    End of switch_pointer_by_reference function\n";
}

//auxiliary reference_vs_value_switching function
void switch_pointer_by_value(int* pointer) {
    std::cout << "    Executing function switch_pointer_by_value...\n";
    std::cout << "      pointer's value received: " << pointer << "\n";
    std::cout << "      changing the addres of the pointer...\n";
    pointer = new int[3];
    std::cout << "      pointer's address changed! The new value inside the function is: " << pointer << "\n";
    std::cout << "    End of switch_pointer_by_value function\n";
}

void reference_vs_value_switching() {
    std::cout << "\nBy reference vs by value arguments:\n";
    
    int val1 = 0;
    std::cout << "  variable 1 value: " << val1 << "\n";

    int val2 = 2;
    std::cout << "  variable 2 value: " << val2 << "\n";

    std::cout << "  switching values on by_value argument... ";
    switch_values_passing_argument_by_value(val1, val2);
    std::cout << "\n    variable_1: " << val1 << "\n    variable_2: " << val2 << "\n";

    std::cout << "  as we have been seen... It doesn't work.\n";

    std::cout << "  switching values on by_reference argument: \n";
    switch_values_passing_argument_by_reference(val1, val2);
    std::cout << "    variable_1: " << val1 << "\n    variable_2: " << val2 << "\n";
    std::cout << "  and now, the switching on the values worked well, because it is by reference.\n";

    std::cout << "But and if we want to change a pointer's value?\n";
    std::cout << "Once the pointer is a variable itself, if you want to modify the pointer's value, you need ";
    std::cout << "to pass the address of the pointer, like in the exemple bellow:\n";
    
    std::cout << "  creating a pointer...\n";
    int* pointer = &val1;
    std::cout << "  pointer 'pointer' created. It's value is: " << pointer << "\n";
    
    std::cout << "  passing the pointer by-reference to a function that modifies it...\n";
    switch_pointer_by_reference(pointer);
    std::cout << "  the new value of the pointer is: " << pointer << "\n";

    std::cout << "And if we pass it by-value to modify the value of the pointer, as we know, it doesn't work: \n";

    std::cout << "  pointer 'pointer' value is: " << pointer << "\n";
    
    std::cout << "  passing the pointer by-value to a function that modifies it...\n";
    switch_pointer_by_value(pointer);
    std::cout << "  the new value of the pointer is: " << pointer << "\n";
}

//#######################--- Pointer's initializing ---#######################
/*
    In this function it is throwed an error, because the 
    the pointer has an address that doesn't exists (NULL),
    and on C++, when it is tried to access non-existed
    address value, an error is throwed.
*/
void empty_pointer() {
    int *pointer = NULL;
    std::cout << "Memory value in the address of the pointer: " << *pointer << "\n";
}

void display_static_allocation() {
    std::cout << "\nStatic allocating a pointer...\n";
    int a = 1;
    int *pointer = &a;
    std::cout << "  Pointer value allocated: " << pointer << "\n";
}

void show_dynamic_inicialization() {
    std::cout << "\nDynamic initalizing a pointer...\n";
    int *pointer = new int;
    std::cout << "  Initialized pointer. Value of the pointer: " << pointer << "\n";
    std::cout << "  Putting a value in the memory pointed by the pointer...\n";
    *pointer = 22;
    std::cout << "    value put in the memory pointed: " << *pointer << "\n";

}

//#######################--- Arithmatic operations on the pointer's memories ---#######################
void operates_in_memories_pointed_by_pointers() {
    std::cout << "\nOperating in pointers in-memory values...\n";
    std::cout << "\n  initializing two pointers...\n";
    int *pointer1 = new int;
    *pointer1 = 22;
    int *pointer2 = new int;
    *pointer2 = 22;

    std::cout << "  summing their in-memory values...\n";
    int result = *pointer1 + *pointer2;
    std::cout << "    sum result: " << result << "\n";

}


//#######################--- Display pointers values ---#######################
void display_pointers_value() {
    int *pointer = NULL;
    int a = 1;
    pointer = &a;
    std::cout << "pointer value: " << pointer << "\n";
}

void display_pointed_memory_value() {
    int *pointer = NULL;
    int a = 1;
    pointer = &a;
    std::cout << "Pointed memory value: " << *pointer << "\n";
}

//#######################--- Memory leak ---#######################
//auxiliary method for simulates_memory_lead
void is_leaked_memory_clean(float* leaked_memory, float old_memory_content) {
    std::cout << "      is the leaked memory clean?\n";
    if (*leaked_memory != old_memory_content) {
        std::cout << "        yes\n";
    } else std::cout << "        no\n";
}

void simulates_memory_leak() {
    std::cout << "\nSimulating memory leak\n";
    std::cout << "  creating variable_1 with dynamic allocation...\n";
    float *v1 = new float;
    std::cout << "    pointer variable_1 created. Its value is: " << v1 << "\n";
    std::cout << "  putting a value in the memory pointed by variable_1...\n";
    *v1 = 33.6;
    std::cout << "    value put successfully. Memory value pointed by variable_1: " << *v1 << "\n";
    std::cout << "  creating variable_2 with dynamic allocation\n";
    float *v2 = new float;
    std::cout << "     pointer variable_2 created. Its value is:: " << v2 << "\n";
    std::cout << "  copying memory value variable_1 into variable_2...\n";
    *v2 = *v1;
    std::cout << "    value copied successfully.\n";
    std::cout << "     value of the memory pointed by pointer variable_2 is: " << *v2 << "\n";
    std::cout << "     variable_2 pointer value is: " << v2 << "\n";
    std::cout << "  switching variable_2 value for it to point to the same memory from pointer variable_1...\n";
    float* old_memory = v2;
    float old_memory_content = *v2;
    v2 = v1;
    std::cout << "    variable_2 pointer switched to point to the same variable_1 memory.\n";
    std::cout << "      pointer variable_1 value: " << v1 << "\n";
    std::cout << "      pointer variable_2 value" << v2 << "\n";
    std::cout << "      memory value pointed by variable_1: " << *v1 << "\n";
    std::cout << "      memory value pointed by variable_2: " << *v2 << "\n";
    std::cout << "  variable_1 pointer points to the same memory as variable_2?\n";
    if (v1 == v2) {
        std::cout << "    yes\n";
    } else { std::cout << "    no\n";}
    std::cout << "  there is a memory leak? \n";
    if (*old_memory == old_memory_content) {
        std::cout << "    yes\n";
    } else std::cout << "    no\n";
    std::cout << "  before cleaning the leaked memory...\n";
    is_leaked_memory_clean(old_memory, old_memory_content);
    std::cout << "  cleaning leaked memory...\n";
    delete old_memory;
    is_leaked_memory_clean(old_memory, old_memory_content);
}

//##############################################----- Arrays studies -----#####################################################################
/*
 Arrays is the simpliest way to structure a set of datas.
 Here is a set of basic knowledge about C++ Arrays
*/

void calculates_an_array_size() {
    int int_array[5] = {2};
    std::cout << "\nUsing sizeof operator at an int type: " << sizeof(int) << "\n";
    std::cout << "Using sizeof operator at an empty array of 5 int elements: " << sizeof(int_array) << "\n";
    std::cout << "  As we can see... The size of an array is the multiple of the size of the alocated type \n";
    std::cout << "  times the spaces reserved on the array.\n";
    std::cout << "  So if we want to know how much indexes an array of int has, we should\n";
    std::cout << "  divide the size of that array by the size of the type allocated in it. For example:\n";
    std::cout << "  Calculating how much indexes has the int array...\n";
    int array_size = sizeof(int_array) / sizeof(int_array[0]);
    std::cout << "    size of the given array calculated. Size: " << array_size << "\n"; 
}

void initialize_arrays_in_different_ways(int optional_size = 3) {
    int size = 2;
    std::cout << "\nInitializing arrays in different ways\n";
    std::cout << "  STATIC initializing with size definied by the\n";
    std::cout << "  elements already allocated in initializing time...\n";
    int int_array[] = {1, 2, 3};
    std::cout << "    int array initialized: \n";
    for(int i = 0; i < sizeof(int_array) / sizeof(int_array[0]); i++)
        std::cout << "      element " << i << " = " << int_array[i];
    std::cout << "\n";
    std::cout << "  STATIC initializing with size defined with a constant value\n";
    char char_array[size];
    std::cout << "    char array initialized: \n";
    for(int i = 0; i < sizeof(char_array) / sizeof(char_array[0]); i++)
        std::cout << "      element " << i << " = " << char_array[i];
    std::cout << "\n";
    std::cout << "  DYNAMIC initializing with size definied at runtime moment...\n";
    float* float_array = new float[optional_size];
    std::cout << "    allocating an element for each index... \n";
    std::cout << "    float array initialized\n";
    std::cout << "  Once the array was dynamicly allocated it should be DEALLOCATED. Deallocating array...\n";
    delete[] float_array;
    std::cout << "    Array deallocated\n";
}

// auxiliary for arrays_and_pointers() function
void modify_first_element(int array[]) {
    array[0] = 10;
}

void arrays_and_pointers() {
    std::cout << "Arrays are pointers. So, when an array is passed through a function, \n";
    std::cout << "it is passed a pointer containing the address of the first element in an array\n";
    std::cout << "\nBecause of it, we can iterate through its elements by the address:\n";

    int array[] = {1, 2};

    std::cout << "  getting the first element with pointer notation... \n";
    std::cout << "    first element: "<< *array << "\n";
    std::cout << "  getting the second element with by the address of first... \n";

    int* first_element = &array[0];
    int* second_element = first_element + 1;

    std::cout << "    second element: " << *second_element << "\n";
    std::cout << "\nAnd we should take care in passing arrays through functions:\n";
    std::cout << "  first element from original array: " << array[0] << "\n";
    std::cout << "  passing by value an array to a function that modifies it... \n";

    modify_first_element(array);
    
    std::cout << "    first element of the original array: " << array[0] << "\n";
    std::cout << "  as we can see, even passing an array by value, the original array is modified.\n";
}

// Auxiliary method to arrays_and_reference_values function
void modify_pointer_by_value(int *array) {
    std::cout << "    Initiating function modify_pointer_by_value\n";

    std::cout << "      modifying the recepted array pointer...\n";
    array = new int[2];
    std::cout << "        the recepted pointer now points to a new array memory region! ";
    std::cout << "Address new memory: " << array << "\n";

    std::cout << "        modifying the values in this new array region...\n";
    array[0] = 8;
    array[1] = 9;
    std::cout << "          now this new array has new values. \n";
    std::cout << "            value 1: " << array[0] << "\n";
    std::cout << "            value 2: " << array[1] << "\n";

    std::cout << "    End of function 'modify_pointer_by_value'\n";
}

void arrays_and_reference_values() {
    std::cout << "\nAlthough an array variable are a pointer to a memory, when it is passed \n";
    std::cout << "to a function, it is passed by value.\n";

    std::cout << "  Initiating an array...\n";
    int array[] = {1, 2};
    std::cout << "  Array initializing. This array variable points to this memory region: \n";
    std::cout << "    " << array << "\n";

    std::cout << "  Passing array by value to a function..\n";
    modify_pointer_by_value(array);

    std::cout << "  After 'modify_pointer_by_value' function, the passed pointer to the array memory\n";
    std::cout << "  points to this memory region: \n";
    std::cout << "    " << array << "\n";
    std::cout << "  and has this values: \n";
    std::cout << "    value 1: " << array[0] << "\n";
    std::cout << "    value 2: " << array[1] << "\n";

    std::cout << "As we can see, the function receives array by value, thus the original memory remains intact!";
    std::cout << "\n";
}

int main() {
    // empty_pointer(); it intentionally throws an error
    first_steps();
    display_static_allocation();
    show_dynamic_inicialization();
    operates_in_memories_pointed_by_pointers();
    display_pointers_value();
    display_pointed_memory_value();
    simulates_memory_leak();
    reference_vs_value_switching();
    simulates_memory_leak();
    calculates_an_array_size();
    initialize_arrays_in_different_ways();
    arrays_and_pointers();
    arrays_and_reference_values();
    return 0;
}