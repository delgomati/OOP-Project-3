# OOP-Project-3
\#  Program Description


\1. The program will start display a main menu of six different options and an exit option. The user will input a valid number in order to be redirected to their intended option. 

\2. The first option will ask the user for the patron’s name, address, and phone number to be inputed. Then it will call the library addPatron method.

\3. The second option will redirect the user to a submenu. The submenu will ask the user if they would like to add an Ebook, an audiobook, or a printed book. When the user chooses the program will ask for the book’s title and the  number of pages and then it will call the library addBook method.

\4. The third option will ask for a patron’s name and then it will call the searchPatron method from the library. If there is an equal match to the patron’s name then it will print all the patron’s information to the screen.  

\5. The fourth option ask the user to input the book’s title and then it will call the searchBook method from the library. If a book matches the title, it will print the book’s title and the number of pages to the screen. 

\6. The fifth option will ask for a book’s title, a patron’s name, and the date the book’s due date. It will then search for the book and patron. If both the patron and the book were found it will call the checkOutBook method to complete the loan.

\7. The sixth option will ask for a book’s title, a patron’s name, and the date the book’s due date. It will then search for the book and patron. If both the patron and the book were found it will call the returnBook method to complete the return.

\8. Lastly, there will be an option that will allow the user to exit the program.







\# Source Files Description

\- Add for each source file in your code. 

`   `- Include also configuration files if any, and makefile.

\## Name:  `main.cpp`

Main program.  This is the driver program that displays a main menu and a sub-menu. It calls sub-functions based on user input. The sub-functions called execute different processes in order to provide user with information and allow user to input new objects variabls.

\## Name: `book.cpp`

`   `Defines and implements the Book.

`   `This class provides functions that display the title and page number. It has a pointer to the patron that has the book checked out.

\## Name:  `book.h` 

`   `- if any

`   `Contains the definition for the class book.  

\## Name: `date.cpp`

`   `Defines and implements the Date class for implementing a day, month, and year variable. 

`  `This class provides routines to calculate if the date passed is after or before another date passed.

\## Name:  `date.h` 

`   `- if any

`   `Contains the definition for the class date.  

\## Name: `library.cpp`

`   `Defines and implements the Library class for implementing a string name of the library.

`   `This class provides three vectors of pointers to the Loans list of patrons and list of books library has.

\## Name:  `library.h` 

`   `- if any

`   `Contains the definition for the class library.  

\## Name: `loan.cpp`

`   `Defines and implements the Loan class for implementing a book date and who it is checked out by. The book and patron are pointers.

\## Name:  `loan.h` 

`   `- if any

`   `Contains the definition for the class loan.  

\## Name: `patron.cpp`

`   `Defines and implements the patron class for implementing a string name, an address, and phone number.

`   `This class provides a vector of list of book pointers.


\## Name:  `patron.h` 

`   `- if any

`   `Contains the definition for the class patron. 

\## Name:  `EBook.h` 

`   `- if any

`   `Contains the definition for the class EBook.  

\## Name: `EBook.cpp`

`   `Defines and implements the patron class for implementing Book title, the number of characters and the number of characters that fit in a page. Then it calculates the number of pages. 

`   `This class provides pointer to the size of charcters and characters per page.

\## Name:  `AudioBook.h` 

`   `- if any

`   `Contains the definition for the class AudioBook.  

\## Name: `AudioBook.cpp`

`   `Defines and implements the patron class for implementing a book title, and the duration of the audio book.

`   `This class provides a pointer to the duration.

\## Name:  `PrintedBook.h` 

`   `- if any

`   `Contains the definition for the class PrintedBook.  

\## Name: `PrintedBook.cpp`

`   ` Defines and implements the Book.

`   `This class provides functions that display the title and page number. It has a pointer to the number of pages.





\#  Circumstances of programs

\- Describe how is the current state of your program

\- E.g.,

`   `- The program runs successfully.  

`   `- The program was developed and tested on CLion. It was compiled, run, and tested on gcc csegrid server.



\#  How to build and run the program

\- Applies for CSEGrid programs

\1. Decompress the homework.  The homework file is compressed.  

`   `- To decompress it use the following command 

`      `- `% unzip [1234HW1]`

`   `- The directory named `homework` should contain the following files:

`   ````

`      `main.cpp

`      `xxx.h

`      `xxx.cpp

`	   `yyy.h

`	   `yyy.cpp

`      `makefile

`      `Readme.md

`   ````

`	`[any other supporting documents]

\2. Build the program.

\- Change to the directory that contains the file by: 

`   `- `% cd [1234HW1]`

\- Compile the program by: 

`   `- `% make`

\3. Run the program by:

`   `- `% ./[xxx]`

\4. Delete the obj files, executables, and core dump by

`   `- `% ./make clean`
