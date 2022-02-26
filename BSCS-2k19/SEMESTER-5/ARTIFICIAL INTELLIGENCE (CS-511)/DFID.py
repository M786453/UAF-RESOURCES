# Python program to print DFS traversal from a given graph 
'''SuccList={'a':['b','c'],'b':['a','c','d'],'c':['a','b','d'],'d':['b']}
'''
SuccList ={ 'A':['B','C'], 'B':['D','E','F'], 'C':['G','H','I'], 'D':[],'E':[],'F':['J','K'], 'G':[], 'H':[], 'I':['L','M'], 'J':[], 'K':[], 'L':[], 'M':[] } 

Start='A'
Goal='K'
Closed = list()
SUCCESS=True
FAILURE=False

def GOALTEST(N):
	if N == Goal:
		return True
	else:
		return False

def MOVEGEN(N):
	New_list=list()
	if N in SuccList.keys():
		New_list=SuccList[N]
	print("New_list=",New_list)
	return New_list

def APPEND(L1,L2):
	New_list=L1+L2
	return New_list

def DFS(Src, Max_depth):
	
	print("------------")
	print("Src=",Src," Max_depth=",Max_depth)
	OPEN=list()
	CLOSED=list()
	State = FAILURE
	global Closed
	
	if GOALTEST(Src) == True:
		State = SUCCESS
		CLOSED = APPEND (CLOSED, [Src])
		Closed=CLOSED
		print("Closed at GOALTEST=",Closed)
		return State
		
	if (Max_depth <=0):
		return State
	CLOSED=[Src]
	OPEN = MOVEGEN(Src)
	print("OPEN=",OPEN)
	
	while (len(OPEN) != 0):
	
		N= OPEN[0]
		print("N=",N)
		del OPEN[0] #delete the node we picked
		CLOSED = APPEND(CLOSED,list(N))
		Closed=CLOSED
		print("Closed in while=",Closed)
		if DFS(N, Max_depth -1):
			State = SUCCESS
			return  State

	return State

def DFID(Src,Max_depth):
	limit=0
	while (limit <  Max_depth):
		print("Call with depth-",limit)
		if DFS(Src, limit) == True:
			return SUCCESS
		limit=limit+1
	return FAILURE


#Dreiver Code
Src=Start
Max_depth=4
result=DFID(Src,Max_depth)
print(result,Closed)