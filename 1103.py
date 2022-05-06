minutes_of_day = 1440

def get_minutes(H1, M1, H2, M2):
    h = H1 * 60 + M1
    h2 = H2 * 60 + M2

    H = h2 - h

    if H < 0:
        return H + minutes_of_day
    
    return H
    


while True:
    
    h_m = list(map(int, input().split()))
    
    if not any(h_m):
        break

    H1, M1, H2, M2 = h_m

    if H1 == 0:
        H1 = 24

    if H2 == 0:
        H2 == 24

    print(get_minutes(H1, M1, H2, M2))


