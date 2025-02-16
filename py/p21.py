#Types of Python function arguments

#1. Default arguments
def greet(name="Guest"):
    print(f"Hello, {name}!")

#2. Required/Positional arguments 
def add(a, b):
    return a + b

#3. Keyword arguments
def student_info(name, age, grade):
    print(f"Name: {name}, Age: {age}, Grade: {grade}")

#4. Variable length arguments (*args)
def sum_numbers(*numbers):
    return sum(numbers)

#5. Keyword variable length arguments (**kwargs)
def print_info(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")

# Examples
print("\nDefault argument:")
greet()  # Uses default value
greet("John")  # Uses provided value

print("\nPositional arguments:")
print(add(5, 3))

print("\nKeyword arguments:")
student_info(name="Alice", age=20, grade="A")

print("\nVariable length arguments:")
print(sum_numbers(1, 2, 3, 4, 5))

print("\nKeyword variable length arguments:")
print_info(name="Bob", age=25, city="New York")
