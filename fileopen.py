with open("C:/python/input.txt","r",encoding = 'utf-8') as a:
    books = a.read().splitlines()
    for n in range(len(books)) :
        i = books[n].split()    
        books[n] = i
