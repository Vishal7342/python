# 1. List operations
def list_operations():
    my_list = [int(x) for x in input("Enter 5 numbers for the list: ").split()]
    print("Original list:", my_list)
    print("Sliced list (1 to 3):", my_list[1:4])
    my_list.extend([int(x) for x in input("Enter 3 more numbers: ").split()])
    print("Extended list:", my_list)
    print("List after removing an element:", my_list.remove(int(input("Remove a number: "))) if int(input()) in my_list else "Not found")

# 2. Tuple operations
def tuple_operations():
    my_tuple = tuple(int(x) for x in input("Enter 5 numbers for the tuple: ").split())
    print("Original tuple:", my_tuple)
    print("Sliced tuple (2 to 4):", my_tuple[2:4])
    print("Concatenated tuple:", my_tuple + tuple(int(x) for x in input("Enter 2 numbers to concatenate: ").split()))

# 3. Set operations
def set_operations():
    my_set = set(int(x) for x in input("Enter 5 unique numbers for the set: ").split())
    print("Original set:", my_set)
    my_set.add(int(input("Add a number to the set: ")))
    print("Set after adding:", my_set)
    my_set.discard(int(input("Remove a number from the set: ")))
    print("Set after removing:", my_set)

# 4. Dictionary operations
def dictionary_operations():
    my_dict = {"name": input("Enter name: "), "age": int(input("Enter age: "))}
    print("Original dictionary:", my_dict)
    my_dict["city"] = input("Enter city: ")
    print("Dictionary after adding city:", my_dict)
    del my_dict["age"]
    print("Dictionary after removing age:", my_dict)

# 5. String operations
def string_operations():
    my_string = input("Enter a string: ")
    print("Original string:", my_string)
    print("Sliced string (1 to 4):", my_string[1:4])
    print("Concatenated string:", my_string + input("Enter string to concatenate: "))
    print("String after replacement:", my_string.replace(input("Replace this substring: "), input("With: ")))

# Main function to execute all tasks
def main():
    list_operations()
    tuple_operations()
    set_operations()
    dictionary_operations()
    string_operations()

if __name__ == "__main__":
    main()
