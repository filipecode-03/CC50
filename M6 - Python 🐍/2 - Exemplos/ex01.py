words = set()

def load(dicionary):
    file = open(dicionary, "r")
    for line in file:
        words.add(line.rstrip())
    file.closed()
    return True

def check(word):
    if word.lower() in words:
        return True
    else:
        return False

def size():
    return len(words)

def unload():
    return True