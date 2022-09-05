#include <iostream>
#include <cstddef>
using namespace std;

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
    cout << "Presenting IOStream: " << endl;
    std::cout << " type the first number: ";
    std::cin >> number1;
    std::cout << " type the second number: ";
    std::cin >> number2;

    // Mathematical operators
    cout << "Presenting math operands" << endl;
    cout << "\n  Making mathematic operations... " << endl;
    int sum = number1 + number2;
    cout << "    sum result: " << sum << endl;
    int subtraction = number1 - number2;
    cout << "    subtraction result: " << subtraction << endl;
    int multiplication = number1 * number2;
    cout << "    multiplication result: " << multiplication << endl;
    if(number1 != 0 ) {
        int division = number1 / number2;
        cout << "    division result: " << division << endl;
        float fdivision = (float) number1 / number2;
        cout << "    float division: " << fdivision << endl;
        int res = number1 % number2;
        cout << "    rest operation result: " << res << endl;
    } else { cout << "    numerator can't be zero in division operations." << endl; }


    // Conditional operators
    cout << "\nCalculating conditional operations..." << endl;
    if(number1 == number2)
        std::cout << "number_1 == number_2" << number2 << std::endl;
    if(number1 != number2)
        std::cout << "number_1 != number_2" << number2 << std::endl;
    if(number1 < number2)
        std::cout << "number_1 < number_2" << number2 << std::endl;
    if(number1 > number2)
        std::cout << "number_1 > number_2" << number2 << std::endl;

    // Repetition
    cout << "\nPresenting repetitions loops:" << endl;
    int counter = 0;
    int amount = 0;
    cout << "  'while' loop" << endl;
    while(counter < 3) {
        std::cout << "    type a number: (" << counter << ")";
        std::cin >> number1;
        counter++;
    }

    cout << "  'for' loop" << endl;
    int total = 0;
    for(int number = 1; number <= 20; number++) {
        total += number;
        cout << "    total:" << total << endl;
    }


    int count;
    int valor;
    int sumAvarage;
    sumAvarage = 0;
    count = 0;

    cout << "  'do-while' loop" << endl;
    cout << "    to end up the loop, type a value lower than 0\n" << endl;
    do {
        cout << "    type a value: ";
        cin >> valor;
        sumAvarage += valor;
        count++;
        cout << "    count:" << count << endl;
    } while(valor >= 0);

    //How to type cast
    cout << "\nType-casting calculating the aritmethic avarage..." << endl;
    float avarage = (float) sumAvarage / (float) count;
    cout << "  the avarage is: " << avarage << endl;
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

void reference_vs_value_switching() {
    cout << "\nBy reference argument:" << endl;
    int val1 = 0;
    cout << "  variable 1 value: " << val1 << endl;
    int val2 = 2;
    cout << "  variable 2 value: " << val2 << endl;
    cout << "  switched values on by_value argument: ";
    switch_values_passing_argument_by_value(val1, val2);
    cout << "\n    variable_1: " << val1 << "\n    variable_2: " << val2 << endl;
    cout << "  as we has been seen... It doesn't work." << endl;
    cout << "  switched values on by_reference argument: ";
    switch_values_passing_argument_by_reference(val1, val2);
    cout << "\n    variable_1: " << val1 << "\n    variable_2: " << val2 << endl;
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
    cout << "Memory value in the address of the pointer: " << *pointer << endl;
}

void display_static_allocation() {
    cout << "\nStatic allocating a pointer..." << endl;
    int a = 1;
    int *pointer = &a;
    cout << "  Pointer value allocated: " << pointer << endl;
}

void show_dynamic_inicialization() {
    cout << "\nDynamic initalizing a pointer..." << endl;
    int *pointer = new int;
    cout << "  Initialized pointer. Value of the pointer: " << pointer << endl;
    cout << "  Putting a value in the memory pointed by the pointer..." << endl;
    *pointer = 22;
    cout << "    value put in the memory pointed: " << *pointer << endl;

}

//#######################--- Operating on the pointer's memories ---#######################
void operates_in_memories_pointed_by_pointers() {
    cout << "\nOperating in pointers in-memory values..." << endl;
    cout << "\n  initializing two pointers..." << endl;
    int *pointer1 = new int;
    *pointer1 = 22;
    int *pointer2 = new int;
    *pointer2 = 22;

    cout << "  summing their in-memory values..." << endl;
    int result = *pointer1 + *pointer2;
    cout << "    sum result: " << result << endl;

}


//#######################--- Display pointers values ---#######################
void display_pointers_value() {
    int *pointer = NULL;
    int a = 1;
    pointer = &a;
    cout << "pointer value: " << pointer << endl;
}

void display_pointed_memory_value() {
    int *pointer = NULL;
    int a = 1;
    pointer = &a;
    cout << "Pointed memory value: " << *pointer << endl;
}

//#######################--- Memory leak ---#######################
//auxiliary method for simulates_memory_lead
void is_leaked_memory_clean(float* leaked_memory, float old_memory_content) {
    cout << "      is the leaked memory clean?" << endl;
    if (*leaked_memory != old_memory_content) {
        cout << "        yes" << endl;
    } else cout << "        no" << endl;
}

void simulates_memory_leak() {
    cout << "\nSimulating memory leak" << endl;
    cout << "  creating variable_1 with dynamic allocation..." << endl;
    float *v1 = new float;
    cout << "    pointer variable_1 created. Its value is: " << v1 << endl;
    cout << "  putting a value in the memory pointed by variable_1..." << endl;
    *v1 = 33.6;
    cout << "    value put successfully. Memory value pointed by variable_1: " << *v1 << endl;
    cout << "  creating variable_2 with dynamic allocation" << endl;
    float *v2 = new float;
    cout << "     pointer variable_2 created. Its value is:: " << v2 << endl;
    cout << "  copying memory value variable_1 into variable_2..." << endl;
    *v2 = *v1;
    cout << "    value copied successfully." << endl;
    cout << "     value of the memory pointed by pointer variable_2 is: " << *v2 << endl;
    cout << "     variable_2 pointer value is: " << v2 << endl;
    cout << "  switching variable_2 value for it to point to the same memory from pointer variable_1..." << endl;
    float* old_memory = v2;
    float old_memory_content = *v2;
    v2 = v1;
    cout << "    variable_2 pointer switched to point to the same variable_1 memory." << endl;
    cout << "      pointer variable_1 value: " << v1 << endl;
    cout << "      pointer variable_2 value" << v2 << endl;
    cout << "      memory value pointed by variable_1: " << *v1 << endl;
    cout << "      memory value pointed by variable_2: " << *v2 << endl;
    cout << "  variable_1 pointer points to the same memory as variable_2?" << endl;
    if (v1 == v2) {
        cout << "    yes" << endl;
    } else { cout << "    no" << endl;}
    cout << "  there is a memory leak? " << endl;
    if (*old_memory == old_memory_content) {
        cout << "    yes" << endl;
    } else cout << "    no" << endl;
    cout << "  before cleaning the leaked memory..." << endl;
    is_leaked_memory_clean(old_memory, old_memory_content);
    cout << "  cleaning leaked memory..." << endl;
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
    cout << "\nUsing sizeof operator at an int type: " << sizeof(int) << endl;
    cout << "Using sizeof operator at an empty array of 5 int elements: " << sizeof(int_array) << endl;
    cout << "  As we can see... The size of an array is the multiple of the size of the alocated type " << endl;
    cout << "  times the spaces reserved on the array." << endl;
    cout << "  So if we want to know how much indexes an array of int has, we should" << endl;
    cout << "  divide the size of that array by the size of the type allocated in it. For example:" << endl;
    cout << "  Calculating how much indexes has the int array..." << endl;
    int array_size = sizeof(int_array) / sizeof(int_array[0]);
    cout << "    size of the given array calculated. Size: " << array_size << endl; 
}

void initialize_arrays_in_different_ways(int optional_size = 3) {
    int size = 2;
    cout << "\nInitializing arrays in different ways" << endl;
    cout << "  STATIC initializing with size definied by the" << endl;
    cout << "  elements already allocated in initializing time..." << endl;
    int int_array[] = {1, 2, 3};
    cout << "    int array initialized: " << endl;
    for(int i = 0; i < sizeof(int_array) / sizeof(int_array[0]); i++)
        cout << "      element " << i << " = " << int_array[i];
    cout << endl;
    cout << "  STATIC initializing with size defined with a constant value" << endl;
    char char_array[size];
    cout << "    char array initialized: " << endl;
    for(int i = 0; i < sizeof(char_array) / sizeof(char_array[0]); i++)
        cout << "      element " << i << " = " << char_array[i];
    cout << endl;
    cout << "  DYNAMIC initializing with size definied at runtime moment..." << endl;
    float* float_array = new float[optional_size];
    cout << "    allocating an element for each index... " << endl;
    cout << "    float array initialized" << endl;
    cout << "  Once the array was dynamicly allocated it should be DEALLOCATED. Deallocating array..." << endl;
    delete[] float_array;
    cout << "    Array deallocated" << endl;
}

// auxiliary for arrays_and_pointers() function
void modify_first_element(int array[]) {
    array[0] = 10;
}

void arrays_and_pointers() {
    cout << "Arrays are pointers. So, when an array is passed through a function, " << endl;
    cout << "it is passed a pointer containing the address of the first element in an array" << endl;
    cout << "\nBecause of it, we can iterate through its elements by the address:" << endl;

    int array[] = {1, 2};

    cout << "  getting the first element with pointer notation... " << endl;
    cout << "    first element: "<< *array << endl;
    cout << "  getting the second element with by the address of first... " << endl;

    int* first_element = &array[0];
    int* second_element = first_element + 1;

    cout << "    second element: " << *second_element << endl;
    cout << "\nAnd we should take care in passing arrays through functions:" << endl;
    cout << "  first element from original array: " << array[0] << endl;
    cout << "  passing by value an array to a function that modifies it... " << endl;

    modify_first_element(array);
    
    cout << "    first element of the original array: " << array[0] << endl;
    cout << "  as we can see, even passing an array by value, the original array is modified." << endl;
}

// Auxiliary method to arrays_and_reference_values function
void modify_pointer_by_value(int *array) {
    cout << "    Initiating function modify_pointer_by_value" << endl;

    cout << "      modifying the recepted array pointer..." << endl;
    array = new int[2];
    cout << "        the recepted pointer now points to a new array memory region! ";
    cout << "Address new memory: " << array << endl;

    cout << "        modifying the values in this new array region..." << endl;
    array[0] = 8;
    array[1] = 9;
    cout << "          now this new array has new values. " << endl;
    cout << "            value 1: " << array[0] << endl;
    cout << "            value 2: " << array[1] << endl;

    cout << "    End of function 'modify_pointer_by_value'" << endl;
}

void arrays_and_reference_values() {
    cout << "\nAlthough an array variable are a pointer to a memory, when it is passed " << endl;
    cout << "to a function, it is passed by value." << endl;

    cout << "  Initiating an array..." << endl;
    int array[] = {1, 2};
    cout << "  Array initializing. This array variable points to this memory region: " << endl;
    cout << "    " << array << endl;

    cout << "  Passing array by value to a function.." << endl;
    modify_pointer_by_value(array);

    cout << "  After 'modify_pointer_by_value' function, the passed pointer to the array memory" << endl;
    cout << "  points to this memory region: " << endl;
    cout << "    " << array << endl;
    cout << "  and has this values: " << endl;
    cout << "    value 1: " << array[0] << endl;
    cout << "    value 2: " << array[1] << endl;

    cout << "As we can see, the function receives array by value, thus the original memory remains intact!";
    cout << endl;
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