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
//DON'T USE IT IN main()
//auxiliary reference_vs_value_switching function
void switch_values_passing_argument_by_value(int val1, int val2) {
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}

//DON'T USE IT IN main()
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
//DON'T USE IT IN main()
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

int main() {
    //empty_pointer(); it intentionally throws an error
    first_steps();
    display_static_allocation();
    show_dynamic_inicialization();
    operates_in_memories_pointed_by_pointers();
    display_pointers_value();
    display_pointed_memory_value();
    simulates_memory_leak();
    reference_vs_value_switching();
    simulates_memory_leak();
    return 0;
}