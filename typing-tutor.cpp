//Typing Tutor
//Author :- Aditya Sud
// Header files

#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>
#include<time.h>

// Function Prototypes

void tips(void);
void practice(void);
void test(void);

void main(){
  char choice;

  while(1){
    clrscr();

    gotoxy(33, 5);
    cout << "Typing Tutor";
    gotoxy(33, 6);
    cout << "------------";
    gotoxy(30, 8);
    cout << "1. - Typing Tips.";
    gotoxy(30, 10);
    cout << "2. - Typing Practice";
    gotoxy(30, 12);
    cout << "3. - Typing Test";
    gotoxy(30, 14);
    cout << "4. - Exit";
    gotoxy(30, 30);
    cout << "Enter your choice";

    choice = getch();
    switch(choice){
      case('1'):
        tips();
        break;
      case('2'):
        practice();
        break;
      case('3'):
        test();
        break;
      case('4'):
        clrscr();
        exit(1);
        break;
      default:
        gotoxy(30, 30);
        clreol();
        cout << "Invalid Choice..";
        gotoxy(30, 31);
        cout << "Press any key to continue..";
        getch();
    } // End of Switch case block.
  } // End of While block.
} // End of main.
