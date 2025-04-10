// Simple Calculator for Beginners
#include <iostream> // This lets us use cout and cin

int main() {
    // Step 1: Tell the user what to do
    std::cout << "HELLO! I AM A CALCULATOR\n";
    std::cout << "Enter first number: ";
    
    // Step 2: Get the first number
    float num1; // float allows decimal numbers
    std::cin >> num1;
    
    // Step 3: Get the second number
    std::cout << "Enter second number: ";
    float num2;
    std::cin >> num2;
    
    // Step 4: Ask which operation to do
    std::cout << "Choose operation:\n";
    std::cout << "1. Add (+)\n";
    std::cout << "2. Subtract (-)\n";
    std::cout << "3. Multiply (*)\n";
    std::cout << "4. Divide (/)\n";
    
    int choice;
    std::cin >> choice;
    
    // Step 5: Do the math based on user's choice
    switch(choice) {
        case 1: // Addition
            std::cout << "Result: " << num1 + num2 << "\n";
            break;
            
        case 2: // Subtraction
            std::cout << "Result: " << num1 - num2 << "\n";
            break;
            
        case 3: // Multiplication
            std::cout << "Result: " << num1 * num2 << "\n";
            break;
            
        case 4: // Division
            if(num2 != 0) {
                std::cout << "Result: " << num1 / num2 << "\n";
            } else {
                std::cout << "ERROR! Can't divide by zero!\n";
            }
            break;
            
        default:
            std::cout << "Invalid choice!\n";
    }
    
    // Step 6: End the program
    std::cout << "Thank you for using me!\n";
    return 0;
}
