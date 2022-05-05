def in_diagonal(x1, y1, x2, y2):
    X = abs(x1 - x2)
    Y = abs(y1-y2)

    if (X == Y):
        return True
    return False

def in_row(x1, x2):
    if x1 == x2:
        return True

    return False

def in_column(y1,y2):
    if (y1 == y2):
        return True
    return False

def is_same_pos(x1, y1, x2, y2):
    if x1 == x2 and y1 == y2:
        return True
    return False

while True:
    X1, Y1, X2, Y2 = map(int,input().split())

    if (X1 == 0 and Y1 == 0 and X2 == 0 and Y2 == 0):
        break
    if is_same_pos(X1,Y1,X2,Y2):
        print(0)
        continue

    movs = []
    movs.append(in_diagonal(X1,Y1,X2,Y2))
    movs.append(in_row(X1,X2))
    movs.append(in_column(Y1,Y2))
    
    if (any(movs)):
        print(1)
    else:
        # The maximum amount of movements is 2
        # independently of the initial point and destination point.
        print(2)

