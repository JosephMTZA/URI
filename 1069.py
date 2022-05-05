def get_diamonds(s):
    stack = []
    diamonds = 0
    for c in s:
        if c == '<':
            stack.append(c)
        elif c == '>' and len(stack) != 0:
            diamonds += 1
            del stack[-1]
    return diamonds
        

n = int(input())

for i in range(n):
    s = input()
    print(get_diamonds(s))
