from cs50 import get_int

scores = []
for i in range(3):
    scores.append(get_int("Score: "))

# Vou adicionar um novo code
print(f"Resultado: {sum(scores) / len(scores)}")