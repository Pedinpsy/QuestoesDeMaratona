
import math



def euclidian(x1,y1,x2,y2):
	return math.sqrt(pow(x1-x2,2) + pow(y1-y2,2))

def joinf(florestas,sensor):
	aux = []
	for i in florestas:
		aux = aux + i

	return aux+[sensor]


def checkColide(arvore,sensor):
	for i in arvore:
		if(euclidian(sensor['x'],sensor['y'],i['x'],i['y'])<i['r']+sensor['r']):
			return True

	return False
m,n,k =  input().split()

def checkSteal(floresta,m,n):
	for i in floresta:
		up= False
		left= False
		rigth= False
		donw = False
		for k in i:
			if(k['y']-k['r'] <=0 ):
				up = True
			if(k['x']-k['r'] <= 0):
				left = True

			if(k['y']+k['r'] >= k['y']+int(n)):
				donw = True
			if(k['x']+k['r'] >= k['x']+int(m)):
				rigth = True

		if((rigth and donw) or (up and donw) or (left and rigth) or (left and up) ):
			print("N")
			return
	print("S")
	return




floresta = []
sensor = []
for i in range(int(k)):
	dic = {}
	a1,a2,a3 =input().split()
	dic['x'],dic['y'],dic['r'] = int(a1),int(a2),int(a3)
	sensor.append(dic)

for i in sensor:
	auxF = []
	if(len(floresta) == 0):
		floresta.append([i])
	else:
		for k in(floresta):
			print(k,i)
			if(checkColide(k,i)):
				auxF.append(k)
				floresta.remove(k)
		if(len(auxF) > 0):
			floresta.append(joinf(auxF,i))
		else:
			floresta.append([i])
checkSteal(floresta,m,n)









