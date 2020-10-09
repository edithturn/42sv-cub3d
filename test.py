x = [2,1,1,1,2,7,7,6] |eve , odd

x = [2,1,7,1,6, 1,7,2] |eve , odd
o = [1,6]

{
	{ 2, 2},
	{ 1, 3}
}

# Array.containskey
def searchOdd(array):
	newList =[]
	hashList = []
	_len = len(array) - 1
	for i in range(_len):
		if (hashList.containskey[array[i]))
			count += 1
		else
			count = 1
			hashList.add[array[i], count]
			

	for value, key in hashList:
		if (value % 2 > 0)
			newList.add(key)
	return newList