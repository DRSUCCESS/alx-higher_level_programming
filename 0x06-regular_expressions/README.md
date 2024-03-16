# 0x06-python-classes project
## Object Oriented Programming

# Python - More Classes and Objects

In this project, I continued to practice object-oriented programming in Python. I learned about class methods, static methods, class vs instance attributes, and how to use the special  and  methods.

## Tests ✔️
- **tests:** Folder of test files. Provided by Holberton School.

## Tasks 📃

### 0. Simple Rectangle
- **0-rectangle.py:** Empty Python class that defines a rectangle.

### 1. Real definition of a Rectangle
- **1-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Private instance attribute .
  - Property getter  to get width.
  - Property setter  to set width.
  - Private instance attribute .
  - Property getter  to get height.
  - Property setter  to set height.
  - Instantiation with optional width and height: 
  - If either  or  is not an integer, a TypeError is raised with the message width must be an integer or height must be an integer.
  - If either  or  is less than 0, a ValueError is raised with the message width must be 0 or height must be 0.

### 2. Area and Perimeter
- **2-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Public instance method  that returns the area of the rectangle.
  - Public instance attribute  that returns the permiter of the rectangle (if either  or  equals 0, the perimeter is 0).

### 3. String representation
- **3-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Special method  to print the rectangle with the  character (if either  or  equals 0, the method returns an empty string).

### 4. Eval is magic
- **4-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Special method  to return a string representation of the rectangle.

### 5. Detect instance deletion
- **5-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Special method  that prints the message Bye rectangle... when a Rectangle is deleted.

### 6. How many instances
- **6-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Public class attribute  that is initialized to 0, incremented for each new instantiation, and decremented for each instance deletion.

### 7. Change representation
- **7-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Public class attribute  that is initialized to  but can be any type - used as the symbol for string representation.

### 8. Compare rectangles
- **8-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Static method  that returns the rectangle with the greater area (returns  if both areas are equal).
  - If either of  or  is not a Rectangle instance, a TypeError is raised with the message rect_1 must be an instance of Rectangle or rect_2 must be an instance of Rectangle.

### 9. A square is a rectangle
- **9-rectangle.py:** Python class that defines a rectangle. Builds on  with:
  - Class method  that returns a new Rectangle instance with 

### 10. N Queens
- **101-nqueens.py:** Python program that solves the N queens puzzle.
  - Usage: 
  - Determines all possible solutions for placing N non-attacking queens on an NxN chessboard.
  - Exactly two arguments must be provided. Otherwise, the program prints Usage: nqueens N and exits with the status 1.
  - If the provided N is not an integer, the program prints N must be a number and exits with the status 1.
  - If the provided N is less than 4, the program prints N must be at least 4 and exits with the status 1.
  - Solutions are printed one per line in the format  where  and [H[2J[3J represent the row and column, respectively, where a queen must be placed.

