def calculator():
    print("Simple Calculator")
    print("Operations: +, -, *, /")
    
    # Get user input
    num1 = float(input(""))
    operation = input(" ")
    num2 = float(input(""))
    
    # Perform the operation
    if operation == "+":
        result = num1 + num2
    elif operation == "-":
        result = num1 - num2
    elif operation == "*":
        result = num1 * num2
    elif operation == "/":
        # Prevent division by zero
        if num2 != 0:
            result = num1 / num2
        else:
            result = "error"
    else:
        result = "error"
    
    # Display the result
    print(f"{result}")

# Run the calculator
calculator()
