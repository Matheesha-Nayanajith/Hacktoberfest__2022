# Function definitions
def add(P, Q):
    return P + Q

def subtract(P, Q):
    return P - Q

def multiply(P, Q):
    return P * Q

def divide(P, Q):
    if Q == 0:
        return "Error! Division by zero."
    return P / Q

# Display options
print("Please select the operation:")
print("a. Add")
print("b. Subtract")
print("c. Multiply")
print("d. Divide")

# User input for operation
choice = input("Enter choice (a/b/c/d): ").lower()

# User input for numbers
num_1 = float(input("Enter the first number: "))
num_2 = float(input("Enter the second number: "))

# Perform the operation
if choice == 'a':
    print(f"{num_1} + {num_2} = {add(num_1, num_2)}")
elif choice == 'b':
    print(f"{num_1} - {num_2} = {subtract(num_1, num_2)}")
elif choice == 'c':
    print(f"{num_1} * {num_2} = {multiply(num_1, num_2)}")
elif choice == 'd':
    print(f"{num_1} / {num_2} = {divide(num_1, num_2)}")
else:
    print("Wrong input! Please select a valid operation.")
