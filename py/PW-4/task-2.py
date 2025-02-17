# Task 2: Implementation of Data Structures in Python

# 1. List operations
def list_operations():
    my_list = [1, 2, 3, 4, 5]
    print("Original list:", my_list)
    
    # Slicing
    sliced_list = my_list[1:4]
    print("Sliced list (index 1 to 3):", sliced_list)
    
    # Extending list
    my_list.extend([6, 7, 8])
    print("Extended list:", my_list)
    
    # Copying list
    copied_list = my_list.copy()
    print("Copied list:", copied_list)
    
    # Removing an element
    my_list.remove(4)
    print("List after removing 4:", my_list)

# 2. Tuple operations
def tuple_operations():
    my_tuple = (10, 20, 30, 40, 50)
    print("Original tuple:", my_tuple)
    
    # Slicing
    sliced_tuple = my_tuple[2:4]
    print("Sliced tuple (index 2 to 3):", sliced_tuple)
    
    # Concatenation (since tuples are immutable)
    new_tuple = my_tuple + (60, 70)
    print("Concatenated tuple:", new_tuple)

# 3. Set operations
def set_operations():
    my_set = {1, 2, 3, 4, 5}
    print("Original set:", my_set)
    
    # Adding elements
    my_set.add(6)
    print("Set after adding 6:", my_set)
    
    # Removing an element
    my_set.remove(3)
    print("Set after removing 3:", my_set)
    
    # Set union
    another_set = {4, 5, 6, 7}
    union_set = my_set.union(another_set)
    print("Union of sets:", union_set)

# 4. Dictionary operations
def dictionary_operations():
    my_dict = {"name": "John", "age": 25, "city": "New York"}
    print("Original dictionary:", my_dict)
    
    # Accessing dictionary values
    name = my_dict["name"]
    print("Name from dictionary:", name)
    
    # Adding a new key-value pair
    my_dict["country"] = "USA"
    print("Dictionary after adding country:", my_dict)
    
    # Removing a key-value pair
    del my_dict["age"]
    print("Dictionary after removing age:", my_dict)

# 5. String operations
def string_operations():
    my_string = "Hello, World!"
    print("Original string:", my_string)
    
    # Slicing
    sliced_string = my_string[7:12]
    print("Sliced string (index 7 to 11):", sliced_string)
    
    # String concatenation
    new_string = my_string + " How are you?"
    print("Concatenated string:", new_string)
    
    # String replace
    replaced_string = my_string.replace("World", "Python")
    print("String after replacement:", replaced_string)

# Main function to execute all tasks
def main():
    # List operations
    list_operations()
    
    # Tuple operations
    tuple_operations()
    
    # Set operations
    set_operations()
    
    # Dictionary operations
    dictionary_operations()
    
    # String operations
    string_operations()

# Call the main function
if __name__ == "__main__":
    main()
