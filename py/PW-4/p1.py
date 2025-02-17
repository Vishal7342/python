# Task 1: Implementation of Control Statements in Python

# Function to determine student grade based on percentage
def grade(percentage):
    if percentage >= 90:
        return "A+"
    elif percentage >= 80:
        return "A"
    elif percentage >= 70:
        return "B+"
    elif percentage >= 60:
        return "B"
    elif percentage >= 50:
        return "C+"
    elif percentage >= 40:
        return "C"
    else:
        return "F"

# Function to display even numbers from 1 to 100
def even_numbers():
    print("Even numbers from 1 to 100:")
    for i in range(2, 101, 2):
        print(i, end=" ")
    print()  # For newline

# Function to check for even or odd using match-case
def check_even_odd(num):
    match num % 2:
        case 0:
            return "Even"
        case 1:
            return "Odd"

# Function to demonstrate while loop (printing 1 to 5)
def while_loop_example():
    print("While loop output (1 to 5):")
    i = 1
    while i <= 5:
        print(i, end=" ")
        i += 1
    print()  # For newline

# Main Program
def main():
    # Input for percentage
    percentage = float(input("Enter student percentage: "))
    print(f"Student grade: {grade(percentage)}")
    
    # Display even numbers from 1 to 100
    even_numbers()
    
    # Check a number if it is even or odd
    num = int(input("Enter a number to check if it's even or odd: "))
    print(f"{num} is {check_even_odd(num)}.")
    
    # Demonstrate while loop
    while_loop_example()

# Call the main function
if __name__ == "__main__":
    main()
