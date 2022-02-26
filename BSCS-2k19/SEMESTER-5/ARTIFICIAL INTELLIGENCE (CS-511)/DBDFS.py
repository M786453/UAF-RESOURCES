'''SuccList={'a':['b','c'],'b':['a','c','d'],'c':['a','b','d'],'d':['b','c']}
'''
SuccList ={ 'A':['B','C'], 'B':['D','E','F'], 'C':['G','H','I'], 'D':[],'E':[],'F':['J','K'], 'G':[], 'H':[], 'I':['L','M'], 'J':[], 'K':[], 'L':[], 'M':[] } 
Start='A'
Goal='H'
Closed = list()
SUCCESS=True
FAILURE=False
State=FAILURE

def GOALTEST(N):
	if N == Goal:
		return True
	else:
		return False

def MOVEGEN(N,depth):
	New_list=list()
	if N in SuccList.keys():
		New_list=SuccList[N]
	N_list=list()
	for i in New_list:
		N_list.append([i,depth+1])
	return N_list
	
def APPEND(L1,L2):
	New_list=list(L1)+list(L2)
	return New_list

def DBDFS(depthBound):
	OPEN=[[Start,0]]
	CLOSED=list([])
	global State
	global Closed
	while (len(OPEN) != 0) and (State != SUCCESS):
		print("------------")
		N= OPEN[0][0]   #[[A,0],[B,0]]
		depth=OPEN[0][1]
		
		print("N=",N)
		del OPEN[0] #delete the node we picked
		
		if GOALTEST(N)==True:
			State = SUCCESS
			CLOSED = APPEND(CLOSED,[[N,depth]])
			print("CLOSED=",CLOSED)
		else:
			CLOSED = APPEND(CLOSED,[[N,depth]])
			print("CLOSED=",CLOSED)
			if(depth < depthBound):
				CHILD = MOVEGEN(N,depth)
				for val in CLOSED:
					if val in CHILD:
						CHILD.remove(val)
				for val in OPEN:
					if val in CHILD:
						CHILD.remove(val)
				OPEN = APPEND(CHILD,OPEN) #append movegen elements to OPEN
				print("OPEN=",OPEN)
				
	Closed=CLOSED
	return State
	
#Driver Code
result=DBDFS(2) #call search algorithm
if result:
	print("Path from source to destination exists")
else:
	print("Path from source to destination does not exist ")

