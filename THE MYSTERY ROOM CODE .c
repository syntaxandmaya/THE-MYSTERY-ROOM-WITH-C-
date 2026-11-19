#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char ans;
    int score = 0;

    clrscr();

    printf("====================================");
    printf("\n         THE MYSTERY ROOM");
    printf("\n       CASE 001: MISSING PHONE");
    printf("\n====================================");

    printf("\n\nWELCOME, DETECTIVE!");
    printf("\nZaynn's phone went missing during lunch break.");
    printf("\nThree students were present near the classroom.");
    printf("\nYour mission is to solve the mystery!");

    printf("\n\nPress any key to read the case...");
    getch();

    // CASE STORY
    clrscr();

    printf("\n========== CASE STORY ==========");

    printf("\n\nZaynn left his phone on his classroom desk");
    printf("\nbefore going to the canteen at 1:00 PM.");

    printf("\n\nWhen he returned at 1:30 PM,");
    printf("\nhis phone was missing.");

    printf("\n\nPress any key to meet the suspects...");
    getch();

    // SUSPECTS
    clrscr();

    printf("\n========== SUSPECTS ==========");

    printf("\n\n1. ZARA");
    printf("\nShe says: I was reading a book in the library.");

    printf("\n\n2. AARON");
    printf("\nHe says: I was playing in the playground.");

    printf("\n\n3. INAYAT");
    printf("\nShe says: I borrowed Zaynn's notebook");
    printf("\nand returned it to his desk.");

    printf("\n\nPress any key to inspect the evidence...");
    getch();

    // EVIDENCE
    clrscr();

    printf("\n========== EVIDENCE ROOM ==========");

    printf("\n\nCLUE 1:");
    printf("\nZaynn's notebook was found on his desk.");

    printf("\n\nCLUE 2:");
    printf("\nA classroom camera showed Inayat");
    printf("\nreturning the notebook at 1:20 PM.");

    printf("\n\nCLUE 3:");
    printf("\nZaynn received a message at 1:25 PM.");
    printf("\n'I have your phone. You left it in the library.'");

    printf("\n\nCLUE 4:");
    printf("\nZaynn checked the library and found his phone.");

    printf("\n\nPress any key to start the investigation...");
    getch();

    // INVESTIGATION
    clrscr();

    printf("\n========== DETECTIVE QUIZ ==========");

    // QUESTION 1
    printf("\n\nQ1. Where did Zaynn leave his phone?");
    printf("\nA. Classroom");
    printf("\nB. Canteen");
    printf("\nC. Library");

    printf("\n\nYour answer: ");
    scanf(" %c", &ans);

    if(ans == 'A' || ans == 'a')
    {
        printf("\nCorrect! Phone was left in the classroom.");
        score = score + 10;
    }
    else
    {
        printf("\nIncorrect! Check the case story again.");
    }

    // QUESTION 2
    printf("\n\nQ2. Who returned Zaynn's notebook?");
    printf("\nA. Zara");
    printf("\nB. Aaron");
    printf("\nC. Inayat");

    printf("\n\nYour answer: ");
    scanf(" %c", &ans);

    if(ans == 'C' || ans == 'c')
    {
        printf("\nCorrect! Inayat returned the notebook.");
        score = score + 10;
    }
    else
    {
        printf("\nIncorrect! Check the camera clue.");
    }

    // QUESTION 3
    printf("\n\nQ3. Where was the phone?");
    printf("\nA. Classroom");
    printf("\nB. Library");
    printf("\nC. Canteen");

    printf("\n\nYour answer: ");
    scanf(" %c", &ans);

    if(ans == 'B' || ans == 'b')
    {
        printf("\nCorrect! The phone was in the library.");
        score = score + 10;
    }
    else
    {
        printf("\nIncorrect! Read Clue 3 again.");
    }

    // QUESTION 4
    printf("\n\nQ4. Was Zaynn's phone actually stolen?");
    printf("\nA. Yes");
    printf("\nB. No");

    printf("\n\nYour answer: ");
    scanf(" %c", &ans);

    if(ans == 'B' || ans == 'b')
    {
        printf("\nCorrect! Zaynn misplaced his phone.");
        score = score + 10;
    }
    else
    {
        printf("\nIncorrect! Check the final evidence.");
    }

    // FINAL REPORT
    clrscr();

    printf("\n====================================");
    printf("\n          CASE REPORT");
    printf("\n====================================");

    printf("\n\nInvestigation completed!");
    printf("\nYour score: %d / 40", score);

    printf("\n\nYour Detective Rank:");

    if(score == 40)
    {
        printf("\nMASTER DETECTIVE!");
    }
    else if(score >= 20)
    {
        printf("\nJUNIOR DETECTIVE!");
    }
    else if(score >= 10)
    {
        printf("\nDETECTIVE IN TRAINING!");
    }
    else
    {
        printf("\nROOKIE DETECTIVE!");
    }

    printf("\n\nCASE SOLVED!");
    printf("\nZaynn's phone was found in the library.");

    printf("\n\nThank you for playing!");
    printf("\n====================================");

    getch();
}