#include <iostream>

// Function template to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// Class template for a simple pair of values
template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T f, T s) : first(f), second(s) {}

    T getFirst() const { return first; }
    T getSecond() const { return second; }

    void print() const {
        std::cout << "Pair(" << first << ", " << second << ")" << std::endl;
    }
};

// General template
template <typename T>
void print(T value) {
    std::cout << "General: " << value << std::endl;
}

// Specialization for const char*
template <>
void print<const char*>(const char* value) {
    std::cout << "String: " << value << std::endl;
}



// Base case for recursion
void print() {
    std::cout << std::endl;
}

// Variadic template function
template <typename T, typename... Args>
void print(T first, Args... args) {
    std::cout << first << " ";
    print(args...); // Recursive call
}

int main() {
    // Using the template with int
    std::cout << "Max of 5 and 3: " << max(5, 3) << std::endl; // Output: 5

    // Using the template with double
    std::cout << "Max of 2.5 and 4.7: " << max(2.5, 4.7) << std::endl; // Output: 4.7

    // Using the template with char
    std::cout << "Max of 'a' and 'z': " << max('a', 'z') << std::endl; // Output: z



    // Create a Pair of integers
    Pair<int> intPair(1, 2);
    intPair.print(); // Output: Pair(1, 2)

    // Create a Pair of doubles
    Pair<double> doublePair(3.14, 2.718);
    doublePair.print(); // Output: Pair(3.14, 2.718)

    // Create a Pair of strings
    Pair<std::string> stringPair("hello", "world");
    stringPair.print(); // Output: Pair(hello, world)


    print(42);          // Uses general template, Output: General: 42
    print("Hello");     // Uses specialized template, Output: String: Hello

    print(1, 2.5, "hello", true); // 1 2.5 hello General: 1
    return 0;
}