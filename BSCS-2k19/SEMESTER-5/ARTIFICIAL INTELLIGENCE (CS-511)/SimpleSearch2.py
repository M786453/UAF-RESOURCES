SuccList = {'a': ['b', 'c'], 'b': ['a', 'c', 'd'], 'c': ['a', 'b', 'd'], 'd': ['b', 'c']}
Start = 'a'
Goal = 'd'
Closed = list()
SUCCESS = True
FAILURE = False


def GOALTEST(N):
    if N == Goal:
        return True
    else:
        return False


def MOVEGEN(N):
    New_list = list()
    if N in SuccList.keys():
        New_list = SuccList[N]
    print("New_list=", New_list)
    return New_list


def SimpleSearch2():
    OPEN = [Start]
    CLOSED = list()
    global Closed
    while len(OPEN) != 0:
        print("------------")
        N = OPEN[0]
        print("N=", N)
        del OPEN[0]  # delete the node we picked
        if N not in CLOSED:
            CLOSED.append(N)
        print("CLOSED=", CLOSED)
        Closed = CLOSED
        if GOALTEST(N) == True:
            return SUCCESS
        else:
            movegen = MOVEGEN(N)
            print("movegen=", movegen)
            for val in CLOSED:
                if val in movegen:
                    movegen.remove(val)
            for val in movegen:
                if val not in OPEN:
                    OPEN.append(val)  # append movegen elements to OPEN
            print("OPEN=", OPEN)
    Closed = CLOSED
    return FAILURE


# Driver Code
result = SimpleSearch2()  # call search algorithm
print(Closed, result)
