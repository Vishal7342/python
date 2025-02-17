def stu_manage():
    # 1. List operations: Store multiple students' names and marks.
    print("<|:== List operations for managing students ==:|>\n")
    stu = []
    for i in range(3):
        name = input(f"\tEnter student {i+1} name: ")
        marks = int(input(f"\tEnter {name}'s marks: "))
        stu.append({"name": name, "marks": marks})
    # Slicing to get the first 2 students
    print( f"Student List: {stu} \nFirst 2 students: {stu[:2]}")

def stu_sub():
    # 2. Tuple operations: Store a student's subject preferences (immutable).
    print("<|:== Tuple operations for managing subjects ==:|>\n")
    sub = ("Math", "Science", "English", "History",)
    print("Available subjects:", sub)
    # Concatenate a new subject to tuple (as tuple is immutable)
    new_sub = sub + ("Gujratiy","Sanskrit")
    print("Updated subjects:", new_sub,)

def stu_enrollment():
    # 3. Set operations: Maintain a set of unique students enrolled.
    print("<|:== Set operations for enrolling students ==:|>\n")
    enrolled_stu = set()
    while True:
        name = input("Enter student name to enroll (or 'D' to stop): ")
        if name.lower() == "d":
            break
        enrolled_stu.add(name)
    print("Enrolled students:", enrolled_stu)
    # Remove a student
    remove_stu = input("Enter student name to remove from enrollment: ")
    enrolled_stu.discard(remove_stu)
    print("Updated enrolled students:", enrolled_stu)

def stu_info():
    # 4. Dictionary operations: Store detailed information about students.
    print("<|:== Dictionary operations for student detailed information ==:|>\n")
    stu_details = {}
    name = input("Enter student's name for detailed info: ")
    stu_details["name"] = name
    stu_details["age"] = int(input(f"Enter {name}'s age: "))
    stu_details["marks"] = int(input(f"Enter {name}'s marks: "))
    print(f"Student Info for {name}: {stu_details}")
    # Update information
    stu_details["marks"] += 5  # Assume extra marks after review
    print(f"Updated info for {name}: {stu_details}")

def stu_feedback():
    # 5. String operations: Store a student's comment/feedback.
    print("<|:== String operations for student feedback ==:|>\n")
    name = input("Enter student's name for feedback: ")
    feedback = input(f"Enter feedback for {name}: ")
    # Slicing to get a short version of feedback
    print(f"Short feedback: {feedback[:10]}...")
    # Replace a word in the feedback
    new_feedback = feedback.replace(input("Enter word to replace: "), input("Enter word to replace with: "))
    print("Updated feedback:", new_feedback)

def main(): # Main function to execute all tasks
    print("Welcome to the Student Management System!") 
    stu_manage() # List operations for managing students
    stu_sub() # Tuple operations for managing subjects
    stu_enrollment() # Set operations for enrolling students
    stu_info() # Dictionary operations for student detailed information
    stu_feedback()  # String operations for student feedback
if __name__ == "__main__":
    main()

"""
 Welcome to the Student Management System!
<|:== List operations for managing students ==:|>

        Enter student 1 name: a
        Enter a's marks: 56
        Enter student 2 name: b
        Enter b's marks: 67
        Enter student 3 name: c
        Enter c's marks: 45
Student List: [{'name': 'a', 'marks': 56}, {'name': 'b', 'marks': 67}, {'name': 'c', 'marks': 45}] 
First 2 students: [{'name': 'a', 'marks': 56}, {'name': 'b', 'marks': 67}]
<|:== Tuple operations for managing subjects ==:|>

Available subjects: ('Math', 'Science', 'English', 'History')
Updated subjects: ('Math', 'Science', 'English', 'History', 'Gujratiy', 'Sanskrit')
<|:== Set operations for enrolling students ==:|>

Enter student name to enroll (or 'D' to stop): a
Enter student name to enroll (or 'D' to stop): b
Enter student name to enroll (or 'D' to stop): c
Enter student name to enroll (or 'D' to stop): d
Enrolled students: {'b', 'c', 'a'}
Enter student name to remove from enrollment: a
Updated enrolled students: {'b', 'c'}
<|:== Dictionary operations for student detailed information ==:|>

Enter student's name for detailed info: c
Enter c's age: 19
Enter c's marks: 78
Student Info for c: {'name': 'c', 'age': 19, 'marks': 78}
Updated info for c: {'name': 'c', 'age': 19, 'marks': 83}
<|:== String operations for student feedback ==:|>

Enter student's name for feedback: a
Enter feedback for a: I love footbol
Short feedback: I love foo...
Enter word to replace: footbol
Enter word to replace with: criket
Updated feedback: I love criket
"""
