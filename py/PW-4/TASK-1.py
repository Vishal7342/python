# Get user inputs for range
start = int(input("Enter the start of the range: "))
end = int(input("Enter the end of the range: "))

# Validate inputs using if-elif-else
if start > end:
    print("Invalid range. The start must be less than or equal to the end.")
elif start == end:
    print(f"The range is a single number: {start}")
else:
    # Calculate the sum of even numbers using a for loop
    even_sum = 0
    for num in range(start, end + 1):
        if num % 2 == 0:
            even_sum += num

    print(f"The sum of even numbers from {start} to {end} is: {even_sum}")

    # Categorize the sum using match-case
    match even_sum:
        case s if s == 0:
            category = "No evens in the range"
        case s if s < 50:
            category = "Low sum"
        case s if s < 100:
            category = "Medium sum"
        case _:
            category = "High sum"

    print(f"The sum category is: {category}")

    # Analyze odd numbers using a while loop
    print("Odd numbers in the range:")
    odd_count = 0
    current = start
    while current <= end:
        if current % 2 != 0:
            print(current, end=" ")
            odd_count += 1
        current += 1

    print(f"\nTotal odd numbers: {odd_count}")
