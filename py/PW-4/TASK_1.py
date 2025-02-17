# user input
n = int(input("Enter a positive integer to calculate its factorial: "))

# Validate input using if-elif-else
if n < 0:
    print("Factorial is not defined for negative numbers.")
elif n == 0:
    print("The factorial of 0 is 1.")
else:
    # Calculate factorial using a while loop
    f = 1
    count = n
    while count > 0:
        f *= count
        count -= 1

    print(f"The factorial of {n} is {f}.")

    # Categorize the factorial using match-case
    match f:
        case f if f < 100:
            category = "small"
        case f if 100 <= f < 1000:
            category = "medium"
        case _:
            category = "large"

    print(f"The factorial is categorized as: {category}")

    # Print the first few multiples of the factorial using a for loop
    print("First 5 multiples of the factorial:")
    for i in range(1, 6):
        print(f"{i} x {f} = {i * f}")