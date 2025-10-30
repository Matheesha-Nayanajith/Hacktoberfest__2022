# Solve quadratic equation: ax^2 + bx + c = 0
# a, b, c are real numbers and a ≠ 0

import cmath  # To handle complex solutions

# Coefficients
a = 1
b = 5
c = 6

# Calculate the discriminant
discriminant = b**2 - 4*a*c

# Calculate two solutions
sol1 = (-b + cmath.sqrt(discriminant)) / (2*a)
sol2 = (-b - cmath.sqrt(discriminant)) / (2*a)

print(f"The solutions are {sol1} and {sol2}")
