import sys

numbers = [4, 6, 8, 2, 7, 5, 0]

if 0 in numbers:
    print("Encontrado")
    sys.exit(0)
else:
    print("Não encontrado")
    sys.exit(1)