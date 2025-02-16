#criate a dictionary and nested dicionar
#Creating a simple dictionary
student = {
    "name": "John",
    "age": 20,
    "grade": "A"
}

#Creating a nested dictionary
school = {
    "class1": {
        "teacher": "Mrs. Smith",
        "students": {
            "student1": {
                "name": "John",
                "age": 20,
                "grade": "A"
            },
            "student2": {
                "name": "Jane",
                "age": 19,
                "grade": "B"
            }
        }
    },
    "class2": {
        "teacher": "Mr. Jones",
        "students": {
            "student1": {
                "name": "Bob",
                "age": 21,
                "grade": "B"
            },
            "student2": {
                "name": "Alice",
                "age": 20,
                "grade": "A"
            }
        }
    }
}

#Printing the dictionaries
print("Simple dictionary:", student)
print("\nNested dictionary:", school)
