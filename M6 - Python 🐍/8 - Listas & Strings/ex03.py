from cs50 import get_string

s = get_string("Antes: ")
print("Depois: ", end="")
for c in s:
    print(c.upper(), end="")
    print()