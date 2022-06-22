import fileopen
booklist = fileopen.books


def system(self) :

    while True :
        
        system = int(input( '1. 도서 추가 \n 2. 도서 검색 \n 3. 도서 정보 수정 \n 4. 도서 삭제 \n 5. 현재 총 도서 목록 출력 \n 6. 저장 \n 7. 프로그램 나가기'))

        if system == 1:
            add_book()
        elif system == 2:
            search_book()
        elif system == 3:
            change_book()
        elif system == 4:
            delete_book()
        elif system == 5:
            show_book()
        elif system == 6:
            save_book()
        elif system == 7:
            break

def add_book():
    print("도서명, 저자 , 출판연도, 출판사명, 장르 순으로 입력해주세요.")
    bookname, writer, year, company , genre=input('도서명,저자,출판연도,출판사명,장르를 입력하세요.\n').split(' ')
    booklist.append([bookname, writer, year, company, genre])

def search_book():
    menu = int(input('선택할 메뉴 번호를 입력해주세요 \n 1. 도서명 2. 저자 3. 출판연도 4. 출판사명 5. 장르'))

    if menu == 1 :
        n = input('\n도서명 입력')
        for i in range(len(booklist)) :
            if( n == booklist[i][0]) :
                print(booklist[i])

    elif menu == 2 :
        n = input('\n저자 입력')
        for i in range(len(booklist)) :
            if( n == booklist[i][1]) :
                print(booklist[i])

    elif menu == 3 :
        n = input('\n출판연도 입력')
        for i in range(len(booklist)) :
            if( n == booklist[i][2]) :
                print(booklist[i])
                
    elif menu == 4 :
        n = input('\n출판사명 입력')
        for i in range(len(booklist)) :
            if( n == booklist[i][3]) :
                print(booklist[i])

    elif menu == 5 :
        n = input('\n장르 입력')
        for i in range(len(booklist)) :
            if( n == booklist[i][4]) :
                print(booklist[i])

def change_book():
    name = int(input('수정할 책 제목 입력\n'))

    for i in range(len(booklist)) :
        if(name == booklist[i][0]):
            m = i
        menu = int(input('수정할 메뉴 번호를 입력해주세요 \n 1. 도서명 2. 저자 3. 출판연도 4. 출판사명 5. 장르'))

        if menu == 1:
            booklist[m][0] = input("\n도서명 입력")
        
    
        elif menu == 2:
            booklist[m][1] = input("\n저자 입력")
        

        elif menu == 3:
            booklist[m][2] = input("\출판연도 입력")


        elif menu == 4:
            booklist[m][3] = input("\n출판사명 입력")


        elif menu == 5:
            booklist[m][4] = input("\n장르 입력")

    
def delete_book() :
    name = int(input('삭제할 책 제목 입력\n'))

    
    for i in range(len(booklist)) :
        if(name == booklist[i][0]) :
            m == i
        del booklist[m] 


def show_book() :
    for i in range(len(booklist)) :
        print(i+1, booklist[i][0], booklist[i][1], booklist[i][2], booklist[i][3], booklist[i][4])


def save_book() :
        with open('c:/input.txt', "w") as w :
            for i in range(len(booklist)) :
                w.write(booklist[i][0])
                w.write(booklist[i][1])
                w.write(booklist[i][2])
                w.write(booklist[i][3])
                w.write(booklist[i][4])

def exit_book() :
    
    save_book()
    exit()
