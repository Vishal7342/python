# The reduce function is used to apply a particular function passed in its argument 
# to all of the list elements mentioned in the sequence passed along.
# This function is defined in "functools" module.

import functools

# Example 1: Calculate product of list elements
numbers = [1, 2, 3, 4]
product = functools.reduce(lambda x, y: x * y, numbers)
print("Product of list elements:", product)

# Example 2: Calculate sum of list elements
numbers2 = [1, 2, 3, 4, 5]
sum_result = functools.reduce(lambda x, y: x + y, numbers2)
print("Sum of list elements:", sum_result)

# Example 3: Find maximum value in list
numbers3 = [10, 5, 25, 15, 30]
max_value = functools.reduce(lambda x, y: x if x > y else y, numbers3)
print("Maximum value in list:", max_value)

# Example 4: Concatenate strings
words = ['Hello', ' ', 'World', '!']
sentence = functools.reduce(lambda x, y: x + y, words)
print("Concatenated string:", sentence)