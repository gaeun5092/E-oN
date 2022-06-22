with open("C:/python/input.txt","r") as a:
    books = a.read().splitlines()
    for n in range(len(books)) :
        i = books[n].split()    
        books[n] = i
