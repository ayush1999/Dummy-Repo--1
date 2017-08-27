i=int(input())
alphabets=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
for j in range(i):
	a=[]
	res=0
	a=input().split(" ")
	string=input()

	for letter in alphabets:
		if letter  not in string:
			res=res+int(a[ord(letter)-97])
	print(res)		