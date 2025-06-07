#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>


//BOX
int boxUI(int width, int height);
//FOR LOADING ANIMATIONS
int boxUIspecial(int width, int height);

//CURSUR (GOTOXY)
int gotoxy(int x, int y);

//clear screen
int cls(int resColor);

//colourize text
int setColor(int color);

//colourize fore and back
int setColorv2(int foreground, int background);

//loading bar
int loadbar(int duration_ms, int limit);

//show or hide cursor
bool cursorStatus(bool status);

// WAIT
int waitSec(int seconds);
int waitMS(int seconds);

//----------------CASHIER

#define MAX_IDS 1000  // Define the maximum number of unique ID numbers

//DATE AND TIME
char* CurrentDateTime();
void initializeRandom();

// MEMBERSHIP ID NUMBER
long long int MEMidNumber(int generatedIDs[], int *numGenerated);

// PROGRAM ENHANCEMENT ID NUMBER
long long int ENHANCEMENTidNumber(int ENHAgeneratedIDs[], int *ENHAnumGenerated);

//PROGRAM YOGA ID NUMBER
long long int YOGAidNumber(int YOGAgeneratedIDs[], int *YOGAnumGenerated);

//PROGRAM ZUMBA ID NUMBER
long int ZUMBAidNumber(int ZUMBAgeneratedIDs[], int *ZUMBAnumGenerated);


// Function to handle file update
void updateMembershipFile(const char *filename, const char *memberName, int memberID);

void displayFile(const char *filename, const char *header, const char *format);

//FUNCTION TO RESET REVENUE EVERY DAY
int isNewDay();

//MAIN CODE
int main()
{
    getche();

    //load
    cls(15);
    cursorStatus(0);

    setColor(15);
    boxUIspecial(42,12);

    gotoxy(57,11);
    setColor(15);
    printf("G   Y   M");

    waitSec(1);

    setColor(15);
    gotoxy(48,13);
    loadbar(27,30);

    //START
    cls(15);
    setColor(3);
    boxUI(42,12);

    gotoxy(57,11);
    setColor(15);
    printf("G   Y   M");

    gotoxy(50,17);
    setColor(8);
    printf("press any key to continue");

    getche();


    //declaration - FOR USER OPTION  CHOICE
    int clientCHOICE;

    do{
        cursorStatus(0);

        //UPPER - HEADER
        cls(15);
        setColor(3);
        boxUI(42,12);

        gotoxy(45,8);
        setColor(15);
        printf("- G Y M -");

        gotoxy(64,8);
        setColor(6);
        printf("Sign Up");
        gotoxy(61,8);
        setColor(15);
        printf("[+]");

        gotoxy(75,8);
        setColor(6);
        printf("Log In");
        gotoxy(72,8);
        setColor(15);
        printf("[-]");

        //MIDDLE - BODY
        gotoxy(45,11);
        setColor(8);
        printf("Welcome!");
        gotoxy(45,12);
        setColor(8);
        printf("Your Fitness Journey Begins Here");

        //LOWER BODY - NAVS
        gotoxy(50,15);
        setColor(6);
        printf("MEMBERSHIP");
        gotoxy(47,15);
        setColor(15);
        printf("[1]");

        gotoxy(68,15);
        setColor(6);
        printf("PROGRAMS");
        gotoxy(65,15);
        setColor(15);
        printf("[2]");

        gotoxy(50,17);
        setColor(6);
        printf("WALKIN");
        gotoxy(47,17);
        setColor(15);
        printf("[3]");

        gotoxy(68,17);
        setColor(6);
        printf("EXIT");
        gotoxy(65,17);
        setColor(15);
        printf("[0]");

        // Get user choice
        clientCHOICE = getch();

        // Else if - NAVS
        switch (clientCHOICE)
        {
            //Membership
            case '1':
                {//block
                    //user choice PATH
                    int userPATH;

                    do{
                        //box
                        cls(15);
                        setColor(3);
                        boxUI(42,12);

                        //display
                        gotoxy(52,8);
                        setColor(15);
                        printf("M E M B E R S H I P");

                        setColor(8);
                        gotoxy(44,10);
                        printf("Exclusive perks and discounts await.");
                        gotoxy(44,11);
                        printf("Thank you for being with us.");

                        gotoxy(52,14);
                        setColor(6);
                        printf("GOLD");
                        gotoxy(49,14);
                        setColor(15);
                        printf("[1]");

                        gotoxy(69,14);
                        setColor(6);
                        printf("SILVER");
                        gotoxy(66,14);
                        setColor(15);
                        printf("[2]");

                        gotoxy(52,16);
                        setColor(6);
                        printf("ADDONS");
                        gotoxy(49,16);
                        setColor(15);
                        printf("[3]");

                        gotoxy(69,16);
                        setColor(6);
                        printf("BACK");
                        gotoxy(66,16);
                        setColor(15);
                        printf("[0]");

                        userPATH = getch();

                        switch(userPATH)
                        {
                            //GOLD
                            case '1':
                            {//block
                                // Declare goBack at the beginning
                                char goBack;

                                // Assuming you have a loop
                                while (1)
                                {
                                    // Clear the screen at the start of each iteration
                                    cls(15);

                                    // Reset goBack at the start of each iteration
                                    goBack = '\0';

                                    //box
                                    cls(15);
                                    setColor(3);
                                    boxUI(42,12);

                                    //display
                                    gotoxy(52,8);
                                    setColor(15);
                                    printf("M E M B E R S H I P");

                                    //details
                                    gotoxy(46,10);
                                    setColor(6);
                                    printf("GOLD MEMBERSHIP");

                                    gotoxy(47,11);
                                    setColor(15);
                                    printf("P2,899/month");

                                    gotoxy(50,13);
                                    setColor(15);
                                    printf("Free Coach \n");

                                    gotoxy(50,14);
                                    setColor(15);
                                    printf("Free access to all equipment");

                                    gotoxy(50,15);
                                    setColor(15);
                                    printf("Free access to all programs");

                                    gotoxy(65,17);
                                    setColor(15);
                                    printf("[0]");

                                    gotoxy(68,17);
                                    setColor(6);
                                    printf("BACK");

                                    goBack = getche();

                                    if (goBack == '0')
                                    {
                                        // Handle the back action
                                        break;
                                    }
                                }

                                break;
                            }//end block

                            //SILVER
                            case '2':
                            {//block

                                // Declare goBack at the beginning
                                char goBack;

                                // Assuming you have a loop
                                while (1)
                                {
                                    // Clear the screen at the start of each iteration
                                    cls(15);

                                    // Reset goBack at the start of each iteration
                                    goBack = '\0';


                                    //box
                                    cls(15);
                                    setColor(3);
                                    boxUI(42,16);

                                    //display
                                    gotoxy(52,8);
                                    setColor(15);
                                    printf("M E M B E R S H I P");

                                    gotoxy(45,10);
                                    setColor(6);
                                    printf("SILVER MEMBERSHIP");

                                    gotoxy(47,11);
                                    setColor(15);
                                    printf("P1,500/month");
                                    gotoxy(47,12);
                                    printf("With Coach: P500/month");

                                    gotoxy(50,14);
                                    setColor(15);
                                    printf("[1]");
                                    gotoxy(54,14);
                                    setColor(6);
                                    printf("Accessible Equipment");

                                    gotoxy(50,16);
                                    setColor(15);
                                    printf("[0]");
                                    gotoxy(54,16);
                                    setColor(6);
                                    printf("BACK");

                                    goBack = getche();

                                    if (goBack == '0')
                                    {
                                        // Handle the back action
                                        break;
                                    }

                                    else if(goBack == '1')
                                    {
                                        //box
                                        cls(15);
                                        setColor(3);
                                        boxUI(42,24);

                                        //display
                                        gotoxy(52,8);
                                        setColor(15);
                                        printf("M E M B E R S H I P");

                                        gotoxy(48,10);
                                        setColor(15);
                                        printf("Treadmill");

                                        gotoxy(48,11);
                                        setColor(15);
                                        printf("Elliptical Trainer");

                                        gotoxy(48,12);
                                        setColor(15);
                                        printf("Stationary Bike");

                                        gotoxy(48,13);
                                        setColor(15);
                                        printf("Dumbbell 5 kg");

                                        gotoxy(48,14);
                                        setColor(15);
                                        printf("Resistance Bands");

                                        gotoxy(48,15);
                                        setColor(15);
                                        printf("Medicine Ball 3 kg");

                                        gotoxy(48,16);
                                        setColor(15);
                                        printf("Yoga mat");

                                        gotoxy(48,17);
                                        setColor(15);
                                        printf("Rowing Machine");

                                        gotoxy(48,18);
                                        setColor(15);
                                        printf("Stair Climber");

                                        gotoxy(48,19);
                                        setColor(15);
                                        printf("Dumbbell 10 kg");

                                        gotoxy(48,20);
                                        setColor(15);
                                        printf("Dumbbell 15 kg");

                                        gotoxy(48,21);
                                        setColor(15);
                                        printf("Barbells 10 kg");

                                        gotoxy(48,22);
                                        setColor(15);
                                        printf("Kettlebells 8 kg");

                                        gotoxy(48,23);
                                        setColor(15);
                                        printf("Lat Pulldown");

                                        gotoxy(48,24);
                                        setColor(15);
                                        printf("Cable Crossover");

                                        gotoxy(48,25);
                                        setColor(15);
                                        printf("Chest Fly Machine");

                                        gotoxy(48,26);
                                        setColor(15);
                                        printf("TRX Suspension");

                                        gotoxy(48,27);
                                        setColor(15);
                                        printf("Medicine Ball 5 kg");

                                        gotoxy(48,28);
                                        setColor(15);
                                        printf("Pull-Up Bar");

                                        gotoxy(48,29);
                                        setColor(15);
                                        printf("Adjustable Training Bench");

                                        getche();
                                    }
                                }

                                break;
                            }//end block

                            //ADDONS
                            case '3':
                            {//block

                                // Declare goBack at the beginning
                                char goBack;

                                // Assuming you have a loop
                                while (1)
                                {
                                    // Clear the screen at the start of each iteration
                                    cls(15);

                                    // Reset goBack at the start of each iteration
                                    goBack = '\0';

                                    //box
                                    cls(15);
                                    setColor(3);
                                    boxUI(42,21);

                                    //display
                                    gotoxy(52,8);
                                    setColor(15);
                                    printf("M E M B E R S H I P");

                                    gotoxy(45,10);
                                    setColor(6);
                                    printf("ADDONS");

                                    gotoxy(48,12);
                                    setColor(15);
                                    printf("Barbells (20 kg) (P100)");

                                    gotoxy(48,13);
                                    setColor(15);
                                    printf("Barbells (30 kg) (P200)");

                                    gotoxy(48,14);
                                    setColor(15);
                                    printf("Kettlebells (12 kg) (P80)");

                                    gotoxy(48,15);
                                    setColor(15);
                                    printf("Kettlebells (16 kg) (P120)");

                                    gotoxy(48,16);
                                    setColor(15);
                                    printf(" Smith Machine (P300)");

                                    gotoxy(48,17);
                                    setColor(15);
                                    printf("Bench Press (P50)");

                                    gotoxy(48,18);
                                    setColor(15);
                                    printf("Leg Curl (P300)");

                                    gotoxy(48,19);
                                    setColor(15);
                                    printf("Leg Press Machine (P300)");

                                    gotoxy(48,20);
                                    setColor(15);
                                    printf("Hack Squat Machine (P300)");

                                    gotoxy(48,21);
                                    setColor(15);
                                    printf("Medicine Ball (10 kg) (P180)");

                                    gotoxy(48,22);
                                    setColor(15);
                                    printf("Power Rack (P300)");

                                    gotoxy(48,23);
                                    setColor(15);
                                    printf("Dip Station (P100)");

                                    gotoxy(48,24);
                                    setColor(15);
                                    printf("Functional Trainer (P300)");

                                    gotoxy(65,26);
                                    setColor(15);
                                    printf("[0]");
                                    setColor(6);
                                    gotoxy(68,26);
                                    printf("BACK");

                                    goBack = getche();

                                    cursorStatus(0);

                                    if (goBack == '0')
                                    {
                                        // Handle the back action
                                        break;
                                    }
                                }

                                getche();
                                break;

                            //BACK
                            case '0':
                                cls(15);
                                break;

                            //TRAPPING
                            default:
                                gotoxy(40,20);
                                setColor(4);
                                printf("Incorrect option. Please choose a valid one.");

                                getche();
                                break;
                            }//block

                        }

                    }while(userPATH != '0');

                }//end block
                break;

            //Programs
            case '2':
                //box
                cls(15);
                setColor(3);
                boxUI(54,23);

                //display
                gotoxy(60,8);
                setColor(15);
                printf("P R O G R A M S");

                gotoxy(45,10);
                setColor(6);
                printf("Zumba Class: P300/month");

                gotoxy(48,11);
                setColor(15);
                printf("Every Wednesday and Saturday");

                gotoxy(45,13);
                setColor(6);
                printf("Yoga Class: P300/month");

                gotoxy(48,14);
                setColor(15);
                printf("Every Wednesday and Saturday");

                gotoxy(45,16);
                setColor(6);
                printf("Enhancement Program with Coach P999/month:");

                gotoxy(48,17);
                setColor(15);
                printf("Abdomen/Belly");

                gotoxy(48,18);
                setColor(15);
                printf("Abs");

                gotoxy(48,19);
                setColor(15);
                printf("Arms (Fat Loss/Biceps/Triceps)");

                gotoxy(48,20);
                setColor(15);
                printf("Back");

                gotoxy(48,21);
                setColor(15);
                printf("Calves");

                gotoxy(48,23);
                setColor(15);
                printf("Chest");

                gotoxy(48,24);
                setColor(15);
                printf("Glutes/Buttocks");

                gotoxy(48,25);
                setColor(15);
                printf("Hips");

                gotoxy(48,26);
                setColor(15);
                printf("Shoulders");

                gotoxy(48,27);
                setColor(15);
                printf("Thighs");

                gotoxy(48,28);
                setColor(15);
                printf("Full-Body Enhancement");

                getche();
                break;

            //Walk-in
            case '3':
            {
                char goback;

                //box
                cls(15);
                setColor(3);
                boxUI(42,12);

                //display
                gotoxy(55,8);
                setColor(15);
                printf("W A L K - I N ");

                gotoxy(48,10);
                printf("RATE: P80.00");

                gotoxy(50,14);
                setColor(15);
                printf("[1]");
                gotoxy(54,14);
                setColor(6);
                printf("ADDONS");

                gotoxy(50,16);
                setColor(15);
                printf("[0]");
                gotoxy(54,16);
                setColor(6);
                printf("BACK");

                goback = getch();

                if (goback == '0')
                {
                }

                else if(goback == '1')
                {
                    //box
                    cls(15);
                    setColor(3);
                    boxUI(42,24);

                    //display
                    gotoxy(52,8);
                    setColor(15);
                    printf("M E M B E R S H I P");
                    gotoxy(48,10);
                    setColor(15);
                    printf("RowingMachine");

                    gotoxy(48,11);
                    setColor(15);
                    printf("StairClimber");

                    gotoxy(48,12);
                    setColor(15);
                    printf("Dumbbell10kg");

                    gotoxy(48,13);
                    setColor(15);
                    printf("Dumbbell15kg");

                    gotoxy(48,14);
                    setColor(15);
                    printf("Barbells10 kg");

                    gotoxy(48,15);
                    setColor(15);
                    printf("Kettlebells8kg");

                    gotoxy(48,16);
                    setColor(15);
                    printf("LatPulldown");

                    gotoxy(48,17);
                    setColor(15);
                    printf("CableCrossover");

                    gotoxy(48,18);
                    setColor(15);
                    printf("ChestFlyMachine");

                    gotoxy(48,19);
                    setColor(15);
                    printf("TRXSuspension");

                    gotoxy(48,20);
                    setColor(15);
                    printf("MedicineBall5kg");

                    gotoxy(48,21);
                    setColor(15);
                    printf("PullUpBar");

                    gotoxy(48,22);
                    setColor(15);
                    printf("AdjustableTrainingBench");

                    gotoxy(48,23);
                    setColor(15);
                    printf("Barbells20kg");

                    gotoxy(48,24);
                    setColor(15);
                    printf("Barbells30kg");

                    gotoxy(48,25);
                    setColor(15);
                    printf("Kettlebells12kg");

                    gotoxy(48,26);
                    setColor(15);
                    printf("Kettlebells16kg");

                    gotoxy(48,27);
                    setColor(15);
                    printf("SmithMachine");

                    gotoxy(48,28);
                    setColor(15);
                    printf("BenchPress");

                    gotoxy(48,29);
                    setColor(15);
                    printf("LegCurl");

                    gotoxy(48,28);
                    setColor(15);
                    printf("LegPressMachine");

                    gotoxy(48,29);
                    setColor(15);
                    printf("HackSquatMachine");

                    gotoxy(48,28);
                    setColor(15);
                    printf("MedicineBall10kg");

                    gotoxy(48,29);
                    setColor(15);
                    printf("PowerRack");

                    getche();
                }
                break;
            }

            //Exit
            case '0':
                //nox
                cls(15);
                setColor(3);
                boxUI(42,12);

                //display
                gotoxy(48,11);
                setColor(15);
                printf("E X I T I N G  P R O G R A M");

                waitSec(1);

                //loading
                gotoxy(47,13);
                setColor(15);
                loadbar(27,30);

                waitSec(1);

                //nox
                cls(15);
                setColor(3);
                boxUI(42,12);

                //display
                gotoxy(57,11);
                setColor(15);
                printf("- G Y M -");

                waitSec(1);

                //exit
                cls(15);
                gotoxy(0,0);
                return 0;
                break;

            //LOGIN
            case '-':
                {//block
                    //escape loop
                    int granted = 0;
                    int letPASS = 0;

                    do{
                        //for do below
                        int confirmation = 0;
                        do{
                            //box
                            cls(15);
                            setColor(3);
                            boxUI(42,12);

                            //display
                            gotoxy(56,8);
                            setColor(15);
                            printf("L O G I N  I N");

                            //confirmation
                            gotoxy(52,16);
                            setColor(6);
                            printf("CONTINUE");
                            gotoxy(49,16);
                            setColor(15);
                            printf("[1]");

                            gotoxy(69,16);
                            setColor(6);
                            printf("BACK");
                            gotoxy(66,16);
                            setColor(15);
                            printf("[0]");

                            //display
                            gotoxy(48,11);
                            setColor(8);
                            printf("USERNAME: ");

                            gotoxy(48,13);
                            setColor(8);
                            printf("PASSWORD: ");

                            confirmation = getch();

                            switch(confirmation)
                            {
                                case '1':
                                    confirmation = 1;

                                    //confirmation
                                    gotoxy(52,16);
                                    setColor(6);
                                    printf("        ");
                                    gotoxy(49,16);
                                    setColor(15);
                                    printf("   ");

                                    gotoxy(69,16);
                                    setColor(6);
                                    printf("    ");
                                    gotoxy(66,16);
                                    setColor(15);
                                    printf("   ");
                                    break;

                                case '0':
                                    confirmation = 0;

                                    cls(15);
                                    break;

                                default:
                                    gotoxy(40,20);
                                    setColor(4);
                                    printf("Incorrect option. Please choose a valid one.");

                                    getche();

                                    confirmation = 3;
                                    break;
                            }

                        }while(confirmation == 3);

                        if (confirmation == 0 )
                        {
                            letPASS = 1;
                        }

                        else
                        {
                            int loginAttempt;

                            while(loginAttempt)
                            {//while
                                //box
                                cls(15);
                                setColor(3);
                                boxUI(42,12);

                                //display
                                gotoxy(56,8);
                                setColor(15);
                                printf("L O G I N  I N");

                                //display
                                gotoxy(48,11);
                                setColor(15);
                                printf("USERNAME: ");

                                gotoxy(48,13);
                                setColor(15);
                                printf("PASSWORD: ");

                                //show cursor
                                cursorStatus(1);

                                //USER INPUT STORE
                                char userGET[50], passGET[50];

                                //get user input
                                gotoxy(58,11);
                                setColor(15);
                                scanf("%s", userGET);

                                gotoxy(58,13);
                                setColor(15);

                                //hide password
                                char ch;
                                int i = 0;
                                while (1)
                                {//while PASSWORD
                                    ch = _getch();
                                    if (ch == 13) { //13 Enter key
                                        passGET[i] = '\0'; // ('\0') null-terminate the string
                                        break;
                                    } else if (ch == 8) { //8 Backspace key
                                        if (i > 0) {
                                            i--;
                                            printf("\b \b"); // works as back space
                                        }
                                    } else {
                                        passGET[i] = ch;
                                        i++;
                                        printf("*");//replace input with asterisk
                                    }
                                }//while PASSWORD

                                //hide cursor
                                cursorStatus(0);

                                int loginGrant;
                                char userACCESS[10];

                                FILE *file = fopen("Accounts.txt", "r");

                                char tempUSER[10], tempPASS[10], tempROLE[10];
                                char line[100];

                                while (fgets(line, sizeof(line), file))
                                {
                                    if (sscanf(line, "(%9[^)]) (%9[^)]) (%9[^)])", tempUSER, tempPASS, tempROLE) == 3)
                                    {
                                        if (strcmp(userGET, tempUSER) == 0 && strcmp(passGET, tempPASS) == 0) {
                                            //grant acces to login - exit for loop
                                            loginGrant = 1;

                                            //copy role access
                                            strcpy(userACCESS, tempROLE);

                                            // Exit loop if login is granted
                                            break;
                                        }
                                        else
                                        {
                                            //deny access
                                            loginGrant = 0;
                                        }
                                    }
                                }

                                fclose(file);

                                //check if login access
                                if (loginGrant) {
                                    //box
                                    cls(15);
                                    setColor(3);
                                    boxUI(42, 12);

                                    // display
                                    gotoxy(48, 11);
                                    setColor(2);
                                    printf("L O G I N  S U C C E S S F U L");
                                    waitSec(1);
                                    gotoxy(48, 11);
                                    printf("                              ");

                                    char Msg[8] = "W" "E" "L" "C" "O" "M" "E";

                                    //wait
                                    for(int i = 0; i < 7; i++)
                                    {
                                        int x = (i * 2) + 54;
                                        gotoxy(x, 11);
                                        printf("%c", Msg[i]);
                                        waitMS(80);
                                    }

                                    //clear screen
                                    cls(15);

//--------------------------------- ADMIN -----------------------------------------
                                    if(strcmp(userACCESS, "admin") == 0)
                                    {
                                        //dec's
                                        int choiceAdmin = 1;

                                        do{
                                            //Dec's
                                            int optionAdmin = '0';

                                            //box
                                            cls(15);
                                            setColor(3);
                                            boxUI(42, 12);

                                            // display
                                            gotoxy(67, 8);
                                            setColor(15);
                                            printf("A D M I N");

                                            //header
                                            gotoxy(45,8);
                                            setColor(15);
                                            printf("- G Y M -");

                                            //Options
                                            gotoxy(50, 11);
                                            setColor(6);
                                            printf("MEMBERSHIP");
                                            gotoxy(47, 11);
                                            setColor(15);
                                            printf("[1]");

                                            gotoxy(68, 11);
                                            setColor(6);
                                            printf("EQUIPMENTS");
                                            gotoxy(65, 11);
                                            setColor(15);
                                            printf("[2]");

                                            gotoxy(50, 13);
                                            setColor(6);
                                            printf("INCOME");
                                            gotoxy(47, 13);
                                            setColor(15);
                                            printf("[3]");

                                            gotoxy(68, 13);
                                            setColor(6);
                                            printf("ACCOUNTS");
                                            gotoxy(65, 13);
                                            setColor(15);
                                            printf("[4]");

                                            gotoxy(50, 15);
                                            setColor(6);
                                            printf("APPLICANTS");
                                            gotoxy(47, 15);
                                            setColor(15);
                                            printf("[5]");

                                            gotoxy(68, 15);
                                            setColor(6);
                                            printf("BACK");
                                            gotoxy(65, 15);
                                            setColor(15);
                                            printf("[0]");

                                            optionAdmin = getch();

                                            switch (optionAdmin)
                                            {
                                                case '1':
                                                {
                                                    //box
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42, 12);

                                                    // display
                                                    gotoxy(67, 6);
                                                    setColor(15);
                                                    displayFile("GOLD.txt", "GOLD MEMBERSHIPS", "ID - Name - Username - Password - Date");
                                                    setColor(15);
                                                    displayFile("SILVER.txt", "SILVER MEMBERSHIPS", "ID - Name - Username - Password - Date");

                                                    getche();
                                                    break;
                                                }

                                                case '2':
                                                {
                                                    int pass;
                                                    char t1, t2[50];
                                                    int t3;

                                                    while (1)
                                                    {
                                                        //box
                                                        cls(15);
                                                        setColor(3);
                                                        boxUI(42, 12);

                                                        // display
                                                        gotoxy(67, 8);
                                                        setColor(15);
                                                        printf("A D M I N");

                                                        //header
                                                        gotoxy(45, 8);
                                                        setColor(15);
                                                        printf("- G Y M -");

                                                        int a = 10;

                                                        FILE *file = fopen("silverADDON.txt", "r+");
                                                        while (fscanf(file, "%c - %49s - %d", &t1, t2, &t3) != EOF)
                                                        {
                                                            gotoxy(48, a);
                                                            setColor(15);
                                                            printf("%c - %s - %d", t1, t2, t3);

                                                            a++;
                                                        }

                                                        fclose(file);

                                                        getche();
                                                        break;
                                                    }

                                                    getche();
                                                    break;
                                                }

                                                case '3':
                                                {
                                                    //box
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42, 12);

                                                    // display
                                                    gotoxy(67, 8);
                                                    setColor(15);
                                                    printf("A D M I N");

                                                    //header
                                                    gotoxy(45,8);
                                                    setColor(15);
                                                    printf("- G Y M -");

                                                    int TOTALchoice;

                                                                float membership = 0.00, programs = 0.00, walkinT = 0.00, addons = 0.00;
                                                                //MEMBERSHIP DECLERATIONS
                                                                int GOLDcount = 0, SILVERcount = 0;
                                                                const float GoldcostPerID = 2899;
                                                                const float SilvercostPerID = 1500;
                                                                float gold = 0.00, silver = 0.00;
                                                                //PROGRAMS DECLERATIONS
                                                                int ENHAcount = 0, YOGAcount = 0, ZUMBAcount = 0;
                                                                const float ENHAcostPerID = 999.00;
                                                                const float YOGAcostPerID = 300.00;
                                                                const float ZUMBAcostPerID = 300.00;
                                                                float enha = 0.00, yoga = 0.00, zumba = 0.00;
                                                                //WALK-IN DECLERATIONS
                                                                int WALKINcount = 0;
                                                                const float WALKINcostPerID = 80.00;
                                                                //ADD-ONS DECLERATIONS
                                                                float amount = 0.00, SILVERamountTOpay = 0.00, WALKINamountTOpay = 0.00;
                                                                //REVENUE
                                                                float revenue = 0.00;


                                                                do{
                                                                    cursorStatus(0);
                                                                    //box
                                                                    cls(15);
                                                                    setColor(3);
                                                                    boxUI(42, 12);

                                                                    // display
                                                                    gotoxy(67, 8);
                                                                    setColor(15);
                                                                    printf("A D M I N");

                                                                    //header
                                                                    gotoxy(45,8);
                                                                    setColor(15);
                                                                    printf("- G Y M -");

                                                                    //Options
                                                                    gotoxy(50, 11);
                                                                    setColor(6);
                                                                    printf("MEMBERSHIP");
                                                                    gotoxy(47, 11);
                                                                    setColor(15);
                                                                    printf("[1]");

                                                                    gotoxy(68, 11);
                                                                    setColor(6);
                                                                    printf("PROGRAMS");
                                                                    gotoxy(65, 11);
                                                                    setColor(15);
                                                                    printf("[2]");

                                                                    gotoxy(50, 13);
                                                                    setColor(6);
                                                                    printf("WALK-IN");
                                                                    gotoxy(47, 13);
                                                                    setColor(15);
                                                                    printf("[3]");

                                                                    gotoxy(68, 13);
                                                                    setColor(6);
                                                                    printf("ADD-ONS");
                                                                    gotoxy(65, 13);
                                                                    setColor(15);
                                                                    printf("[4]");

                                                                    gotoxy(50, 15);
                                                                    setColor(6);
                                                                    printf("REVENUE");
                                                                    gotoxy(47, 15);
                                                                    setColor(15);
                                                                    printf("[5]");

                                                                    gotoxy(68, 15);
                                                                    setColor(6);
                                                                    printf("EXIT");
                                                                    gotoxy(65, 15);
                                                                    setColor(15);
                                                                    printf("[0]");


                                                                    switch(TOTALchoice)
                                                                    {
                                                                    case '1'://MEMBERSHIP
                                                                        {
                                                                            FILE *goldfile = fopen("GOLD.txt", "r");
                                                                            FILE *silverfile = fopen("SILVER.txt", "r");

                                                                            if (goldfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open GOLD.txt\n");
                                                                                return 0;
                                                                            }

                                                                            if (silverfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open SILVER.txt\n");
                                                                                return 0;
                                                                            }

                                                                            char line[256];

                                                                            // Calculate the total cost
                                                                            while (fgets(line, sizeof(line), goldfile))
                                                                            {
                                                                                GOLDcount++;
                                                                            }
                                                                            fclose(goldfile);

                                                                            while (fgets(line, sizeof(line), silverfile))
                                                                            {
                                                                                SILVERcount++;
                                                                            }
                                                                            fclose(silverfile);

                                                                            gold = GOLDcount * GoldcostPerID;
                                                                            silver = SILVERcount * SilvercostPerID;
                                                                            membership = gold + silver;

                                                                            cursorStatus(0);
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 12);

                                                                            gotoxy(47, 10);
                                                                            setColor(6);
                                                                            printf("GOLD MEMBERSHIP TOTAL:");
                                                                            gotoxy(71, 10);
                                                                            setColor(15);
                                                                            printf("Php %.2f", gold);

                                                                            gotoxy(47, 12);
                                                                            setColor(6);
                                                                            printf("SILVER MEMBERSHIP TOTAL:");
                                                                            gotoxy(73, 12);
                                                                            setColor(15);
                                                                            printf("Php %.2f", silver);

                                                                            gotoxy(47, 14);
                                                                            setColor(6);
                                                                            printf("OVERALL MEMBERSHIP TOTAL:");
                                                                            gotoxy(73, 14);
                                                                            setColor(15);
                                                                            printf("Php %.2f", membership);

                                                                            break;
                                                                        }

                                                                    case '2'://PROGRAMS
                                                                        {
                                                                            FILE *ENHAfile = fopen("ENHANCEMENT.txt", "r");
                                                                            FILE *YOGAfile = fopen("YOGA.txt", "r");
                                                                            FILE *ZUMBAfile = fopen("ZUMBA.txt", "r");

                                                                            if (ENHAfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open ENHANCEMENT.txt\n");
                                                                                return 0;
                                                                            }

                                                                            if (YOGAfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open YOGA.txt\n");
                                                                                return 0;
                                                                            }

                                                                            if (ZUMBAfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open ZUMBA.txt\n");
                                                                                return 0;
                                                                            }

                                                                            char line[256];

                                                                            // Calculate the total cost
                                                                            while (fgets(line, sizeof(line), ENHAfile))
                                                                            {
                                                                                ENHAcount++;
                                                                            }
                                                                            fclose(ENHAfile);

                                                                            while (fgets(line, sizeof(line), YOGAfile))
                                                                            {
                                                                                YOGAcount++;
                                                                            }
                                                                            fclose(YOGAfile);

                                                                            while (fgets(line, sizeof(line), ZUMBAfile))
                                                                            {
                                                                                ZUMBAcount++;
                                                                            }
                                                                            fclose(ZUMBAfile);

                                                                            enha = ENHAcount * ENHAcostPerID;
                                                                            yoga = YOGAcount * YOGAcostPerID;
                                                                            zumba = ZUMBAcount * ZUMBAcostPerID;
                                                                            programs = enha + yoga + zumba;

                                                                            cursorStatus(0);
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 10);

                                                                            gotoxy(47, 8);
                                                                            setColor(6);
                                                                            printf("ENHANCEMENT TOTAL:");
                                                                            gotoxy(66, 8);
                                                                            setColor(15);
                                                                            printf("Php %.2f", enha);

                                                                            gotoxy(47, 10);
                                                                            setColor(6);
                                                                            printf("YOGA TOTAL:");
                                                                            gotoxy(59, 10);
                                                                            setColor(15);
                                                                            printf("Php %.2f", yoga);

                                                                            gotoxy(47, 12);
                                                                            setColor(6);
                                                                            printf("ZUMBA TOTAL:");
                                                                            gotoxy(60, 12);
                                                                            setColor(15);
                                                                            printf("Php %.2f", zumba);

                                                                            gotoxy(47, 14);
                                                                            setColor(6);
                                                                            printf("OVERALL PROGRAMS TOTAL:");
                                                                            gotoxy(71, 14);
                                                                            setColor(15);
                                                                            printf("Php %.2f", programs);

                                                                            break;
                                                                        }

                                                                    case '3'://WALK-IN
                                                                        {
                                                                            FILE *WALKINfile = fopen("walkin.txt", "r");

                                                                            if (WALKINfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open ENHANCEMENT.txt\n");
                                                                                return 0;
                                                                            }

                                                                            char line[256];

                                                                            while (fgets(line, sizeof(line), WALKINfile))
                                                                            {
                                                                                WALKINcount++;
                                                                            }
                                                                            fclose(WALKINfile);

                                                                            walkinT = WALKINcount * WALKINcostPerID;

                                                                            cursorStatus(0);
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 8);

                                                                            gotoxy(47, 10);
                                                                            setColor(6);
                                                                            printf("WALK-IN TOTAL:");
                                                                            gotoxy(71, 10);
                                                                            setColor(15);
                                                                            printf("Php %.2f", walkinT);

                                                                            break;
                                                                        }

                                                                    case '4'://ADD-ONS
                                                                        {
                                                                            FILE *silverfile = fopen("TOTALsilveraddon.txt", "r");
                                                                            FILE *walkinfile = fopen("TOTALwalkinaddon.txt", "r");

                                                                            if (silverfile== NULL)
                                                                            {
                                                                                printf("Error: Could not open TOTALsilveraddon.txt\n");
                                                                                return 0;
                                                                            }

                                                                            if (walkinfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open TOTALwalkinaddon.txt\n");
                                                                                return 0;
                                                                            }

                                                                            long long int idNUM;
                                                                            char name[50], date[50];

                                                                            while(fscanf(silverfile,"%lld - %f - %s", &idNUM, &amount, &date) != EOF)
                                                                            {
                                                                                    SILVERamountTOpay = SILVERamountTOpay + amount;
                                                                                    break;

                                                                            }

                                                                            while(fscanf(walkinfile,"%s - %f - %s", &name, &amount, &date) != EOF)
                                                                            {

                                                                                    WALKINamountTOpay = WALKINamountTOpay + amount;
                                                                                    break;

                                                                            }

                                                                            addons = SILVERamountTOpay + WALKINamountTOpay;

                                                                            cursorStatus(0);
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 8);

                                                                            gotoxy(47, 8);
                                                                            setColor(6);
                                                                            printf("SILVER ADD-ONS TOTAL:");
                                                                            gotoxy(69, 8);
                                                                            setColor(15);
                                                                            printf("Php %.2f", SILVERamountTOpay);

                                                                            gotoxy(47, 10);
                                                                            setColor(6);
                                                                            printf("WALK-IN ADD-ONS TOTAL:");
                                                                            gotoxy(70, 10);
                                                                            setColor(15);
                                                                            printf("Php %.2f", WALKINamountTOpay);

                                                                            gotoxy(47, 12);
                                                                            setColor(6);
                                                                            printf("OVERALL TOTAL:");
                                                                            gotoxy(62, 12);
                                                                            setColor(15);
                                                                            printf("Php %.2f", addons);

                                                                            break;
                                                                        }

                                                                    case '5'://REVENUE
                                                                        {
                                                                            int REVENUEchoice;

                                                                            do{

                                                                                cursorStatus(0);
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(35, 10);

                                                                                gotoxy(53, 8);
                                                                                setColor(15);
                                                                                printf("- REVENUE -");

                                                                                char* dateTime = CurrentDateTime();

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                printf("DATE: %s", dateTime);

                                                                                revenue = membership + programs + walkinT + addons;

                                                                                gotoxy(45, 13);
                                                                                setColor(15);
                                                                                printf("REVENUE: %.2f", revenue);

                                                                                gotoxy(67, 16);
                                                                                setColor(6);
                                                                                printf("EXIT");
                                                                                gotoxy(64, 16);
                                                                                setColor(15);
                                                                                printf("[0]");

                                                                                REVENUEchoice = getch();

                                                                            }while(REVENUEchoice != '0');


                                                                            break;
                                                                        }

                                                                    }

                                                                    TOTALchoice = getch();

                                                                }while(TOTALchoice != '0');
                                                    break;
                                                }

                                                case '4':
                                                {
                                                    char t1[50], t2[50], t3[50];
                                                    int t4, t5, t6;
                                                    int l = 0;

                                                    while (1)
                                                    {
                                                        //box
                                                        cls(15);
                                                        setColor(3);
                                                        boxUI(46, 12);

                                                        // display
                                                        gotoxy(67, 8);
                                                        setColor(15);
                                                        printf("A D M I N");

                                                        //header
                                                        gotoxy(45, 8);
                                                        setColor(15);
                                                        printf("- G Y M -");

                                                        int l = 0; // Initialize l

                                                        FILE *file = fopen("Accounts.txt", "r+");

                                                        while (fscanf(file, " (%49[^)] ) (%49[^)] ) (%49[^)] ) (%d-%d-%d) ", &t1, &t2, &t3, &t4, &t5, &t6) == 6) {
                                                            //Name
                                                            gotoxy(46, 12 + l);
                                                            setColor(6);
                                                            printf("%s", t1);

                                                            //Pass
                                                            gotoxy(56, 12 + l);
                                                            setColor(6);
                                                            printf("%s", t2);

                                                            //Role
                                                            gotoxy(66, 12 + l);
                                                            setColor(6);
                                                            printf("%s", t3);

                                                            //Date
                                                            gotoxy(76, 12 + l);
                                                            setColor(6);
                                                            printf("%d-%d-%d", t4, t5, t6);

                                                            l++;
                                                        }

                                                        fclose(file);

                                                        getche();
                                                        break; // Added missing semicolon
                                                    }
                                                    getche();
                                                    break;
                                                }

                                                case '5':
                                                {
                                                    int optionChoice;

                                                    do {
                                                        // Clear screen and draw box
                                                        cls(15);
                                                        setColor(3);
                                                        boxUI(42, 12);

                                                        // Display headers
                                                        gotoxy(67, 8);
                                                        setColor(15);
                                                        printf("A D M I N");

                                                        gotoxy(45, 8);
                                                        setColor(15);
                                                        printf("- G Y M -");

                                                        gotoxy(56, 10);
                                                        setColor(15);
                                                        printf("REQUEST");

                                                        // Display options
                                                        gotoxy(50, 12);
                                                        setColor(6);
                                                        printf("APPROVE");
                                                        gotoxy(47, 12);
                                                        setColor(15);
                                                        printf("[1]");

                                                        gotoxy(68, 12);
                                                        setColor(6);
                                                        printf("DECLINE");
                                                        gotoxy(65, 12);
                                                        setColor(15);
                                                        printf("[2]");

                                                        gotoxy(50, 14);
                                                        setColor(6);
                                                        printf("SHOW");
                                                        gotoxy(47, 14);
                                                        setColor(15);
                                                        printf("[3]");

                                                        gotoxy(68, 14);
                                                        setColor(6);
                                                        printf("BACK");
                                                        gotoxy(65, 14);
                                                        setColor(15);
                                                        printf("[0]");

                                                        optionChoice = getch();

                                                        //APPROVE
                                                        if (optionChoice == '1') {
                                                            char t1[50], t2[50], t3[50];
                                                            int t4, t5, t6;
                                                            char approval;

                                                            FILE *file = fopen("accREQ.txt", "r");
                                                            FILE *tempFile = fopen("temp.txt", "w");

                                                            // Display UI elements
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(48, 12);
                                                            gotoxy(72, 8);
                                                            setColor(15);
                                                            printf("A D M I N");
                                                            gotoxy(45, 8);
                                                            setColor(15);
                                                            printf("- G Y M -");
                                                            gotoxy(62, 10);
                                                            setColor(15);
                                                            printf("REQUEST");

                                                            // Read and display the first line from accREQ.txt
                                                            if (fscanf(file, "(%49[^)] ) (%49[^)] ) (%49[^)] ) (%d-%d-%d)", &t1, &t2, &t3, &t4, &t5, &t6) == 6)
                                                            {
                                                                // Display the content
                                                                gotoxy(44, 12);
                                                                setColor(6);
                                                                printf("%s\t%s\t%s\t%d-%d-%d", t1, t2, t3, t4, t5, t6);

                                                                // Prompt user for approval
                                                                gotoxy(44, 14);
                                                                setColor(15);
                                                                printf("Approve this request? (y/n): ");
                                                                approval = getche(); // Use getche() to wait for user input

                                                                if (approval == 'y' || approval == 'Y') {
                                                                    // Transfer approved request to Accounts.txt
                                                                    FILE *accountsFile = fopen("Accounts.txt", "a+");
                                                                    fprintf(accountsFile, "\n(%s) (%s) (%s) (%d-%d-%d)", t1, t2, t3, t4, t5, t6);
                                                                    fclose(accountsFile);
                                                                } else {
                                                                    // If not approved, write the first line back to temp file
                                                                    fprintf(tempFile, "\n(%s) (%s) (%s) (%d-%d-%d)", t1, t2, t3, t4, t5, t6);
                                                                }
                                                            }

                                                            // Copy remaining lines from accREQ.txt to temp.txt
                                                            while (fscanf(file, "(%49[^)] ) (%49[^)] ) (%49[^)] ) (%d-%d-%d)", &t1, &t2, &t3, &t4, &t5, &t6) == 6) {
                                                                fprintf(tempFile, "\n(%s) (%s) (%s) (%d-%d-%d)", t1, t2, t3, t4, t5, t6);
                                                            }

                                                            fclose(file);
                                                            fclose(tempFile);
                                                            remove("accREQ.txt");
                                                            rename("temp.txt", "accREQ.txt");

                                                            getche();
                                                        }

                                                        //DECLINE
                                                        else if (optionChoice == '2')
                                                        {
                                                            char t1[50], t2[50], t3[50];
                                                            int t4, t5, t6;
                                                            int l = 0;

                                                            FILE *file = fopen("accREQ.txt", "a+");

                                                            // Clear screen and draw box
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(48, 12);

                                                            // Display headers
                                                            gotoxy(72, 8);
                                                            setColor(15);
                                                            printf("A D M I N");
                                                            gotoxy(45, 8);
                                                            setColor(15);
                                                            printf("- G Y M -");
                                                            gotoxy(62, 10);
                                                            setColor(15);
                                                            printf("REQUEST");

                                                            // List requests
                                                            while (fscanf(file, " (%49[^)] ) (%49[^)] ) (%49[^)] ) (%d-%d-%d) ", &t1, &t2, &t3, &t4, &t5, &t6) == 6) {
                                                                // Name
                                                                gotoxy(48, 12 + l);
                                                                setColor(6);
                                                                printf("%s", t1);

                                                                // Pass
                                                                gotoxy(57, 12 + l);
                                                                setColor(6);
                                                                printf("%s", t2);

                                                                // Role
                                                                gotoxy(66, 12 + l);
                                                                setColor(6);
                                                                printf("%s", t3);

                                                                // Date
                                                                gotoxy(76, 12 + l);
                                                                setColor(6);
                                                                printf("%d-%d-%d", t4, t5, t6);

                                                                l++;
                                                            }

                                                            // Numbering
                                                            for (int i = 1; i < l; i++) {
                                                                gotoxy(44, 12 + i);
                                                                setColor(15);
                                                                printf("[%d]", i);
                                                            }

                                                            fclose(file);

                                                            getche();
                                                        }

                                                        else if (optionChoice == '3')
                                                        {
                                                            char t1[50], t2[50], t3[50];
                                                            int t4, t5, t6;
                                                            int l = 0;

                                                            FILE *file = fopen("accREQ.txt", "a+");

                                                            // Clear screen and draw box
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(48, 12);

                                                            // Display headers
                                                            gotoxy(72, 8);
                                                            setColor(15);
                                                            printf("A D M I N");
                                                            gotoxy(45, 8);
                                                            setColor(15);
                                                            printf("- G Y M -");
                                                            gotoxy(62, 10);
                                                            setColor(15);
                                                            printf("REQUEST");

                                                            // List requests
                                                            while (fscanf(file, " (%49[^)] ) (%49[^)] ) (%49[^)] ) (%d-%d-%d) ", &t1, &t2, &t3, &t4, &t5, &t6) == 6) {
                                                                // Name
                                                                gotoxy(46, 12 + l);
                                                                setColor(6);
                                                                printf("%s", t1);

                                                                // Pass
                                                                gotoxy(56, 12 + l);
                                                                setColor(6);
                                                                printf("%s", t2);

                                                                // Role
                                                                gotoxy(66, 12 + l);
                                                                setColor(6);
                                                                printf("%s", t3);

                                                                // Date
                                                                gotoxy(76, 12 + l);
                                                                setColor(6);
                                                                printf("%d-%d-%d", t4, t5, t6);

                                                                l++;
                                                            }

                                                            fclose(file);

                                                            getche();
                                                        }

                                                        else if (optionChoice == '0') {
                                                            // Handle BACK
                                                            break; // Exit the loop and go back to the main switch
                                                        } else {
                                                            gotoxy(40, 20);
                                                            setColor(4);
                                                            printf("Incorrect option. Please choose a valid one.");
                                                            getche();
                                                        }

                                                    }
                                                    while (1); // Continue the loop until '0' is pressed

                                                    break; // Exit case '5' and go back to the main switch
                                                }


                                                case '0':
                                                {
                                                    //box
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42, 12);

                                                    //logout
                                                    gotoxy(53,11);
                                                    setColor(15);
                                                    printf("L O G G I N G  O U T");

                                                    setColor(15);
                                                    gotoxy(48,13);
                                                    loadbar(27,30);

                                                    choiceAdmin--;
                                                    break;
                                                }


                                                default:
                                                {
                                                    gotoxy(40,20);
                                                    setColor(4);
                                                    printf("Incorrect option. Please choose a valid one.");

                                                    getche();
                                                    break;
                                                }
                                            }

                                        }while(choiceAdmin != 0 );

                                        //exit Admin
                                        break;
                                    }

//--------------------------------- CASHIER -----------------------------------------
                                    else if(strcmp(userACCESS, "cashier") == 0)
                                    {
                                        int MAINchoice;
                                        initializeRandom();//for the id number

                                        //----------------RESETS THE GOLD.TXT EVERY DAY----------------------//
                                        if (isNewDay())
                                        {
                                            FILE *file = fopen("GOLD.txt", "w");
                                            if (file == NULL)
                                            {
                                                printf("Error: Could not open GOLD.txt\n");
                                                return 1;
                                            }
                                            fclose(file); // Clear the file
                                        }
                                        //----------------------------------------------------------------------//

                                        //----------------RESETS THE SILVER.TXT EVERY DAY----------------------//
                                        if (isNewDay())
                                        {
                                            FILE *file = fopen("SILVER.txt", "w");
                                            if (file == NULL)
                                            {
                                                printf("Error: Could not open SILVER.txt\n");
                                                return 1;
                                            }
                                            fclose(file); // Clear the file
                                        }
                                        //----------------------------------------------------------------------//

                                        //----------------RESETS THE ENHANCEMENT.TXT EVERY DAY----------------------//
                                        if (isNewDay())
                                        {
                                            FILE *file = fopen("ENHANCEMENT.txt", "w");
                                            if (file == NULL)
                                            {
                                                printf("Error: Could not open ENHANCEMENT.txt\n");
                                                return 1;
                                            }
                                            fclose(file); // Clear the file
                                        }
                                        //----------------------------------------------------------------------//

                                        //----------------RESETS THE YOGA.TXT EVERY DAY----------------------//
                                        if (isNewDay())
                                        {
                                            FILE *file = fopen("YOGA.txt", "w");
                                            if (file == NULL)
                                            {
                                                printf("Error: Could not open YOGA.txt\n");
                                                return 1;
                                            }
                                            fclose(file); // Clear the file
                                        }
                                        //----------------------------------------------------------------------//

                                        //----------------RESETS THE ZUMBA.TXT EVERY DAY----------------------//
                                        if (isNewDay())
                                        {
                                            FILE *file = fopen("ZUMBA.txt", "w");
                                            if (file == NULL)
                                            {
                                                printf("Error: Could not open ZUMBA.txt\n");
                                                return 1;
                                            }
                                            fclose(file); // Clear the file
                                        }
                                        //----------------------------------------------------------------------//

                                        //----------------RESETS THE walkin.TXT EVERY DAY----------------------//
                                        if (isNewDay())
                                        {
                                            FILE *file = fopen("walkin.txt", "w");
                                            if (file == NULL)
                                            {
                                                printf("Error: Could not open walkin.txt\n");
                                                return 1;
                                            }
                                            fclose(file); // Clear the file
                                        }
                                        //----------------------------------------------------------------------//

                                        //----------------RESETS THE TOTALsilveraddon.TXT EVERY DAY----------------------//
                                        if (isNewDay())
                                        {
                                            FILE *file = fopen("TOTALsilveraddon.txt", "w");
                                            if (file == NULL)
                                            {
                                                printf("Error: Could not open TOTALsilveraddon.txt\n");
                                                return 1;
                                            }
                                            fclose(file); // Clear the file
                                        }
                                        //----------------------------------------------------------------------//

                                        //----------------RESETS THE TOTALwalkinaddon.TXT EVERY DAY----------------------//
                                        if (isNewDay())
                                        {
                                            FILE *file = fopen("TOTALwalkinaddon.txt", "w");
                                            if (file == NULL)
                                            {
                                                printf("Error: Could not open TOTALwalkinaddon.txt\n");
                                                return 1;
                                            }
                                            fclose(file); // Clear the file
                                        }
                                        //----------------------------------------------------------------------//

                                        do {
                                            cursorStatus(0);
                                            cls(15);
                                            setColor(3);
                                            boxUI(42, 12);

                                            gotoxy(53, 8);
                                            setColor(15);
                                            printf("- C A S H I E R -");

                                            gotoxy(50, 11);
                                            setColor(6);
                                            printf("MEMBERSHIP");
                                            gotoxy(47, 11);
                                            setColor(15);
                                            printf("[1]");

                                            gotoxy(68, 11);
                                            setColor(6);
                                            printf("PROGRAMS");
                                            gotoxy(65, 11);
                                            setColor(15);
                                            printf("[2]");

                                            gotoxy(50, 14);
                                            setColor(6);
                                            printf("WALK-IN");
                                            gotoxy(47, 14);
                                            setColor(15);
                                            printf("[3]");

                                            gotoxy(68, 14);
                                            setColor(6);
                                            printf("SALES");
                                            gotoxy(65, 14);
                                            setColor(15);
                                            printf("[4]");

                                            gotoxy(50, 17);
                                            setColor(6);
                                            printf("ADD-ONS");
                                            gotoxy(47, 17);
                                            setColor(15);
                                            printf("[5]");

                                            gotoxy(68, 17);
                                            setColor(6);
                                            printf("LOGOUT");
                                            gotoxy(65, 17);
                                            setColor(15);
                                            printf("[0]");

                                            MAINchoice = getch();

                                            switch (MAINchoice) {
                                                case '1': // MEMBERSHIP
                                                    {
                                                        int memChoice;
                                                        do {
                                                            cursorStatus(0);
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(40, 10);

                                                            gotoxy(50, 8);
                                                            setColor(15);
                                                            printf("- M E M B E R S H I P -");

                                                            gotoxy(51, 10);
                                                            setColor(6);
                                                            printf(" REGISTER");
                                                            gotoxy(48, 10);
                                                            setColor(15);
                                                            printf("[1]");

                                                            gotoxy(51, 12);
                                                            setColor(6);
                                                            printf(" RENEWAL OF MEMBERSHIP");
                                                            gotoxy(48, 12);
                                                            setColor(15);
                                                            printf("[2]");

                                                            gotoxy(51, 14);
                                                            setColor(6);
                                                            printf(" EXIT");
                                                            gotoxy(48, 14);
                                                            setColor(15);
                                                            printf("[0]");

                                                            memChoice = getch();

                                                            int generatedIDs[MAX_IDS]; // Array to store generated ID numbers
                                                            int numGenerated = 0; // Number of generated ID numbers
                                                            long long int idNUM = MEMidNumber(generatedIDs, &numGenerated);
                                                            char MEMBERSHIPname[50], MEMusername[50], MEMpassword[50];
                                                            char* dateTime = CurrentDateTime();


                                                            switch (memChoice)
                                                            {
                                                                case '1': // REGISTER
                                                                    {
                                                                        cls(15);
                                                                        setColor(3);
                                                                        boxUI(48, 12);

                                                                        gotoxy(56, 8);
                                                                        setColor(15);
                                                                        printf("- R E G I S T E R -");

                                                                        gotoxy(48, 11);
                                                                        setColor(6);
                                                                        printf("NAME: ");

                                                                        cursorStatus(1);
                                                                        gotoxy(53, 11);
                                                                        setColor(15);
                                                                        scanf("%49s", MEMBERSHIPname);

                                                                        cursorStatus(0);
                                                                        gotoxy(58, 15);
                                                                        setColor(6);
                                                                        printf(" GOLD");
                                                                        gotoxy(56, 15);
                                                                        setColor(15);
                                                                        printf("[1]");

                                                                        gotoxy(68, 15);
                                                                        setColor(6);
                                                                        printf(" SILVER");
                                                                        gotoxy(66, 15);
                                                                        setColor(15);
                                                                        printf("[2]");

                                                                        int REGmemType = getch();

                                                                        if (REGmemType == '1')
                                                                        {
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 12);
                                                                            gotoxy(54, 8);
                                                                            setColor(6);
                                                                            printf("Membership type: GOLD\n");

                                                                            gotoxy(45, 10);
                                                                            setColor(6);
                                                                            cursorStatus(1);
                                                                            printf("ID NUMBER: ");
                                                                            gotoxy(55, 10);
                                                                            setColor(15);
                                                                            printf("%lld", idNUM);

                                                                            gotoxy(45, 12);
                                                                            setColor(6);
                                                                            printf("USERNAME: ");
                                                                            gotoxy(54, 12);
                                                                            setColor(15);
                                                                            scanf("%49s", MEMusername);

                                                                            gotoxy(45, 14);
                                                                            setColor(6);
                                                                            printf("PASSWORD: ");
                                                                            gotoxy(54, 14);
                                                                            setColor(15);
                                                                            scanf(" %49s", MEMpassword);

                                                                            FILE *file = fopen("GOLD.txt", "a");
                                                                            fprintf(file, "%lld - %s - %s - %s - %s\n", idNUM, MEMBERSHIPname, MEMusername, MEMpassword, dateTime);
                                                                            fclose(file);

                                                                            cursorStatus(0);
                                                                            gotoxy(54, 16);
                                                                            setColor(10);
                                                                            printf("REGISTERED SUCCESSFULLY!");

                                                                        }
                                                                        else if (REGmemType == '2')
                                                                        {
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 12);
                                                                            gotoxy(54, 8);
                                                                            setColor(6);
                                                                            printf("Membership type: SILVER\n");

                                                                            gotoxy(45, 10);
                                                                            setColor(6);
                                                                            cursorStatus(1);
                                                                            printf("ID NUMBER: ");
                                                                            gotoxy(55, 10);
                                                                            setColor(15);
                                                                            printf("%lld", idNUM);

                                                                            gotoxy(45, 12);
                                                                            setColor(6);
                                                                            printf("USERNAME: ");
                                                                            gotoxy(54, 12);
                                                                            setColor(15);
                                                                            scanf("%49s", MEMusername);

                                                                            gotoxy(45, 14);
                                                                            setColor(6);
                                                                            printf("PASSWORD: ");
                                                                            gotoxy(54, 14);
                                                                            setColor(15);
                                                                            scanf(" %49s", MEMpassword);

                                                                            FILE *file = fopen("SILVER.txt", "a");
                                                                            fprintf(file, "%lld - %s - %s - %s - %s\n", idNUM, MEMBERSHIPname, MEMusername, MEMpassword, dateTime);
                                                                            fclose(file);

                                                                            cursorStatus(0);
                                                                            gotoxy(54, 16);
                                                                            setColor(10);
                                                                            printf("REGISTERED SUCCESSFULLY!");
                                                                        }
                                                                        else
                                                                        {
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 12);
                                                                            gotoxy(51, 11);
                                                                            setColor(4);
                                                                            printf("I N V A L I D   O P T I O N");

                                                                            gotoxy(57, 13);
                                                                            setColor(4);
                                                                            printf("Please try again.");
                                                                        }

                                                                        getch();
                                                                        break;
                                                                    }
                                                                case '2': // RENEWAL OF MEMBERSHIP
                                                                    {
                                                                        int RENEWchoice;

                                                                        do{

                                                                        cls(15);
                                                                        setColor(3);
                                                                        boxUI(68, 14);

                                                                        gotoxy(53, 8);
                                                                        setColor(15);
                                                                        printf("- R E N E W A L   O F   M E M B E R S H I P -");

                                                                        cursorStatus(1);
                                                                        gotoxy(50, 11);
                                                                        setColor(6);
                                                                        printf("NAME: ");
                                                                        char RENname[50];
                                                                        gotoxy(55, 11);
                                                                        setColor(15);
                                                                        scanf("%49s", RENname);

                                                                        gotoxy(50, 13);
                                                                        setColor(6);
                                                                        printf("ID NUMBER: ");
                                                                        int RENidNum;
                                                                        gotoxy(60, 13);
                                                                        setColor(15);
                                                                        scanf("%d", &RENidNum);

                                                                        // Update both GOLD and SILVER files
                                                                        updateMembershipFile("GOLD.txt", RENname, RENidNum);
                                                                        updateMembershipFile("SILVER.txt", RENname, RENidNum);

                                                                        cursorStatus(0);
                                                                        gotoxy(98, 19);
                                                                        setColor(6);
                                                                        printf("EXIT");
                                                                        gotoxy(95, 19);
                                                                        setColor(15);
                                                                        printf("[0]");

                                                                        RENEWchoice = getch();

                                                                        }while(RENEWchoice != '0');

                                                                        break;
                                                                    }
                                                            }
                                                        } while (memChoice != '0');
                                                    }
                                                    break;

                                                case '2': //PROGRAMS
                                                    {
                                                        int PROGRAMSChoice;

                                                        do{
                                                            cursorStatus(0);
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(35, 12);

                                                            gotoxy(49, 8);
                                                            setColor(15);
                                                            printf("- P R O G R A M S -");

                                                            gotoxy(54, 10);
                                                            setColor(6);
                                                            printf("ENHANCEMENT");
                                                            gotoxy(50, 10);
                                                            setColor(15);
                                                            printf("[1]");

                                                            gotoxy(54, 12);
                                                            setColor(6);
                                                            printf("YOGA");
                                                            gotoxy(50, 12);
                                                            setColor(15);
                                                            printf("[2]");

                                                            gotoxy(54, 14);
                                                            setColor(6);
                                                            printf("ZUMBA");
                                                            gotoxy(50, 14);
                                                            setColor(15);
                                                            printf("[3]");

                                                            gotoxy(54, 16);
                                                            setColor(6);
                                                            printf("EXIT");
                                                            gotoxy(50, 16);
                                                            setColor(15);
                                                            printf("[0]");

                                                            PROGRAMSChoice = getch();



                                                            switch(PROGRAMSChoice)
                                                            {
                                                                case '1'://ENHANCMENT
                                                                {
                                                                    int ENHANCEMENTchoice;

                                                                    do{
                                                                        cls(15);
                                                                        setColor(3);
                                                                        boxUI(35, 25);

                                                                        gotoxy(46, 4);
                                                                        setColor(15);
                                                                        printf("- E N H A N C E M E N T -");

                                                                        gotoxy(51, 6);
                                                                        setColor(6);
                                                                        printf("ABDOMEN");
                                                                        gotoxy(47, 6);
                                                                        setColor(15);
                                                                        printf("[a]");

                                                                        gotoxy(51, 8);
                                                                        setColor(6);
                                                                        printf("ARMS");
                                                                        gotoxy(47, 8);
                                                                        setColor(15);
                                                                        printf("[b]");

                                                                        gotoxy(51, 10);
                                                                        setColor(6);
                                                                        printf("BACK");
                                                                        gotoxy(47, 10);
                                                                        setColor(15);
                                                                        printf("[c]");

                                                                        gotoxy(51, 12);
                                                                        setColor(6);
                                                                        printf("CALVES");
                                                                        gotoxy(47, 12);
                                                                        setColor(15);
                                                                        printf("[d]");

                                                                        gotoxy(51, 14);
                                                                        setColor(6);
                                                                        printf("CHEST");
                                                                        gotoxy(47, 14);
                                                                        setColor(15);
                                                                        printf("[e]");

                                                                        gotoxy(51, 16);
                                                                        setColor(6);
                                                                        printf("GLUTES");
                                                                        gotoxy(47, 16);
                                                                        setColor(15);
                                                                        printf("[f]");

                                                                        gotoxy(51, 18);
                                                                        setColor(6);
                                                                        printf("HIPS");
                                                                        gotoxy(47, 18);
                                                                        setColor(15);
                                                                        printf("[g]");

                                                                        gotoxy(51, 20);
                                                                        setColor(6);
                                                                        printf("SHOULDERS");
                                                                        gotoxy(47, 20);
                                                                        setColor(15);
                                                                        printf("[h]");

                                                                        gotoxy(51, 22);
                                                                        setColor(6);
                                                                        printf("THIGHS");
                                                                        gotoxy(47, 22);
                                                                        setColor(15);
                                                                        printf("[i]");

                                                                        gotoxy(51, 24);
                                                                        setColor(6);
                                                                        printf("FULL-BODY ENHANCEMENT");
                                                                        gotoxy(47, 24);
                                                                        setColor(15);
                                                                        printf("[j]");

                                                                        gotoxy(51, 26);
                                                                        setColor(6);
                                                                        printf("EXIT");
                                                                        gotoxy(47, 26);
                                                                        setColor(15);
                                                                        printf("[0]");

                                                                        //--------------------------ENHANCEMENT ID NUMBER DECLERATIONS----------------------------------------//
                                                                        int ENHAgeneratedIDs[MAX_IDS]; // Array to store generated ID numbers
                                                                        int ENHAnumGenerated = 0; // Number of generated ID numbers
                                                                        long long int ENHANCEMENTidNUM = ENHANCEMENTidNumber(ENHAgeneratedIDs, &ENHAnumGenerated);
                                                                        char ENHANCEMENTname[50];
                                                                        char* dateTime = CurrentDateTime();

                                                                        switch(ENHANCEMENTchoice)
                                                                        {
                                                                        case 'a'://ABDOMEN
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: ABDOMEN\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - ABDOMEN - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }
                                                                        case 'b'://ARMS
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: ARMS\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - ARMS - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        case 'c': //BACK
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: BACK\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - BACK - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        case 'd'://CALVES
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: CALVES\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - CALVES - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        case 'e': //CHEST
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: CHEST\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - CHEST - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        case 'f'://GLUTES
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: GLUTES\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - GLUTES - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        case 'g'://HIPS
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: HIPS\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - HIPS - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        case 'h'://SHOULDERS
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: SHOULDERS\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - SHOULDERS - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        case 'i'://THIGHS
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: THIGHS\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - THIGHS - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        case 'j'://FULL-BODY
                                                                            {
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(48, 12);
                                                                                gotoxy(54, 8);
                                                                                setColor(6);
                                                                                printf("Enhancement type: FULL-BODY\n");

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                cursorStatus(1);
                                                                                printf("ID NUMBER: ");
                                                                                gotoxy(55, 10);
                                                                                setColor(15);
                                                                                printf("%lld", ENHANCEMENTidNUM);

                                                                                gotoxy(45, 12);
                                                                                setColor(6);
                                                                                printf("NAME:");
                                                                                gotoxy(54, 12);
                                                                                setColor(15);
                                                                                scanf("%49s", ENHANCEMENTname);

                                                                                FILE *file = fopen("ENHANCEMENT.txt", "a");
                                                                                fprintf(file, "%lld - %s - FULLBODY - %s\n", ENHANCEMENTidNUM, ENHANCEMENTname, dateTime);
                                                                                fclose(file);

                                                                                cursorStatus(0);
                                                                                gotoxy(54, 16);
                                                                                setColor(10);
                                                                                printf("REGISTERED SUCCESSFULLY!");

                                                                                break;
                                                                            }

                                                                        }

                                                                        ENHANCEMENTchoice = getch();

                                                                    }while(ENHANCEMENTchoice != '0');

                                                                    break;
                                                                }

                                                                //------------------------------YOGA ID NUMBER DECLERATIONS--------------------------------------------//
                                                                        int YOGAgeneratedIDs[MAX_IDS] = {0}; // Array to store generated ID numbers
                                                                        int YOGAnumGenerated = 0; // Number of generated ID numbers
                                                                        long long int YOGAidNUM = YOGAidNumber(YOGAgeneratedIDs, &YOGAnumGenerated);
                                                                        char YOGAname[50];

                                                                case '2'://YOGA
                                                                    {

                                                                        int YOGAchoice;

                                                                        do{
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(40, 12);
                                                                            gotoxy(54, 8);
                                                                            setColor(6);
                                                                            printf("- Y  O  G   A -");

                                                                            gotoxy(45, 10);
                                                                            setColor(6);
                                                                            cursorStatus(1);
                                                                            printf("ID NUMBER: ");
                                                                            gotoxy(55, 10);
                                                                            setColor(15);
                                                                            long long int YOGAidNUM = YOGAidNumber(YOGAgeneratedIDs, &YOGAnumGenerated);
                                                                            printf("%lld", YOGAidNUM);

                                                                            gotoxy(45, 12);
                                                                            setColor(6);
                                                                            printf("NAME:");
                                                                            gotoxy(54, 12);
                                                                            setColor(15);
                                                                            scanf("%49s", YOGAname);

                                                                            char* dateTime = CurrentDateTime();

                                                                            FILE *file = fopen("YOGA.txt", "a");
                                                                            fprintf(file, "%lld - %s - %s\n", YOGAidNUM, YOGAname, dateTime);
                                                                            fclose(file);

                                                                            cursorStatus(0);
                                                                            gotoxy(52, 15);
                                                                            setColor(10);
                                                                            printf("REGISTERED SUCCESSFULLY!");

                                                                            cursorStatus(0);
                                                                            gotoxy(72, 17);
                                                                            setColor(6);
                                                                            printf(" BACK");
                                                                            gotoxy(70, 17);
                                                                            setColor(15);
                                                                            printf("[0]");

                                                                            YOGAchoice = getch();

                                                                        }while(YOGAchoice != '0');

                                                                        break;
                                                                    }


                                                                    //------------------------------ZUMBA ID NUMBER DECLERATIONS--------------------------------------------//
                                                                        int ZUMBAgeneratedIDs[MAX_IDS] = {0};
                                                                        int ZUMBAnumGenerated = 0;
                                                                        char ZUMBAname[50];

                                                                case '3'://ZUMBA
                                                                    {
                                                                        int ZUMBAchoice;

                                                                        do{
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(40, 12);
                                                                            gotoxy(54, 8);
                                                                            setColor(6);
                                                                            printf("- Z  U  M  B  A -");


                                                                            gotoxy(45, 10);
                                                                            setColor(6);
                                                                            cursorStatus(1);
                                                                            printf("ID NUMBER: ");
                                                                            gotoxy(55, 10);
                                                                            setColor(15);
                                                                            long long int ZUMBAidNUM = ZUMBAidNumber(ZUMBAgeneratedIDs, &ZUMBAnumGenerated);
                                                                            printf("%lld", ZUMBAidNUM);

                                                                            gotoxy(45, 12);
                                                                            setColor(6);
                                                                            printf("NAME:");
                                                                            gotoxy(54, 12);
                                                                            setColor(15);
                                                                            scanf("%49s", ZUMBAname);

                                                                            char* dateTime = CurrentDateTime();

                                                                            FILE *file = fopen("ZUMBA.txt", "a");
                                                                            fprintf(file, "%lld - %s - %s\n", ZUMBAidNUM, ZUMBAname, dateTime);
                                                                            fclose(file);

                                                                            cursorStatus(0);
                                                                            gotoxy(52, 15);
                                                                            setColor(10);
                                                                            printf("REGISTERED SUCCESSFULLY!");

                                                                            cursorStatus(0);
                                                                            gotoxy(72, 17);
                                                                            setColor(6);
                                                                            printf(" BACK");
                                                                            gotoxy(70, 17);
                                                                            setColor(15);
                                                                            printf("[0]");

                                                                            ZUMBAchoice = getch();

                                                                        }while(ZUMBAchoice != '0');

                                                                        break;
                                                                    }
                                                            }

                                                        }while(PROGRAMSChoice != '0');
                                                        break;
                                                    }


                                                case '3': // WALK-IN
                                                    {
                                                        int WALKINchoice;
                                                        do {
                                                            cursorStatus(0);
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(40, 12);

                                                            int hrs, amount;
                                                            char name[50], term;

                                                            gotoxy(53, 8);
                                                            setColor(15);
                                                            printf("- W A L K - I N -");

                                                            gotoxy(46, 11);
                                                            setColor(6);
                                                            printf("NAME: ");
                                                            gotoxy(51, 11);
                                                            setColor(15);
                                                            cursorStatus(1);
                                                            scanf("%49s", name);

                                                            while (1)
                                                            {
                                                                gotoxy(46, 13);
                                                                setColor(6);
                                                                printf("HOURS: ");
                                                                gotoxy(52, 13);
                                                                setColor(15);

                                                                    if (scanf("%d%c", &hrs, &term) != 2 || term != '\n')
                                                                    {
                                                                        while(getchar() != '\n'); // clear the input buffer
                                                                    }
                                                                    else
                                                                    {
                                                                        break;
                                                                    }
                                                            }

                                                            amount = 80 * hrs;
                                                            gotoxy(46, 15);
                                                            printf("Amount: %d", amount);

                                                            FILE *file = fopen("walkin.txt", "a");
                                                            fprintf(file, "%s - %d hrs - Php %d\n", name, hrs, amount);
                                                            fclose(file);

                                                            cursorStatus(0);
                                                            gotoxy(72, 17);
                                                            setColor(6);
                                                            printf(" BACK");
                                                            gotoxy(70, 17);
                                                            setColor(15);
                                                            printf("[0]");

                                                            WALKINchoice = getch();
                                                        } while (WALKINchoice != '0');
                                                    }
                                                    break;

                                                case '4': //SALES
                                                    {
                                                        int SALESchoice;

                                                        do{
                                                            cursorStatus(0);
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(35, 10);

                                                            gotoxy(51, 8);
                                                            setColor(15);
                                                            printf("- S  A  L  E  S -");

                                                            gotoxy(58, 10);
                                                            setColor(6);
                                                            printf("SHOW");
                                                            gotoxy(54, 10);
                                                            setColor(15);
                                                            printf("[1]");

                                                            gotoxy(58, 12);
                                                            setColor(6);
                                                            printf("TOTAL");
                                                            gotoxy(54, 12);
                                                            setColor(15);
                                                            printf("[2]");

                                                            gotoxy(58, 14);
                                                            setColor(6);
                                                            printf("EXIT");
                                                            gotoxy(54, 14);
                                                            setColor(15);
                                                            printf("[0]");

                                                            SALESchoice = getch();

                                                            switch(SALESchoice)
                                                            {
                                                            case '1'://SHOW
                                                                {
                                                                    int SALESshowChoice;

                                                                    do{
                                                                        cursorStatus(0);
                                                                        cls(15);
                                                                        setColor(3);
                                                                        boxUI(35, 12);

                                                                        gotoxy(51, 8);
                                                                        setColor(15);
                                                                        printf("- S  H  O  W -");

                                                                        gotoxy(55, 10);
                                                                        setColor(6);
                                                                        printf("MEMBERSHIP");
                                                                        gotoxy(51, 10);
                                                                        setColor(15);
                                                                        printf("[1]");

                                                                        gotoxy(55, 12);
                                                                        setColor(6);
                                                                        printf("PROGRAMS");
                                                                        gotoxy(51, 12);
                                                                        setColor(15);
                                                                        printf("[2]");

                                                                        gotoxy(55, 14);
                                                                        setColor(6);
                                                                        printf("WALK-IN");
                                                                        gotoxy(51, 14);
                                                                        setColor(15);
                                                                        printf("[3]");

                                                                        gotoxy(55, 16);
                                                                        setColor(6);
                                                                        printf("ADD-ONS");
                                                                        gotoxy(51, 16);
                                                                        setColor(15);
                                                                        printf("[4]");

                                                                        gotoxy(55, 18);
                                                                        setColor(6);
                                                                        printf("EXIT");
                                                                        gotoxy(51, 18);
                                                                        setColor(15);
                                                                        printf("[0]");



                                                                        switch(SALESshowChoice)
                                                                        {
                                                                        case '1'://MEMBERSHIP
                                                                            {
                                                                                cls(15);
                                                                                displayFile("GOLD.txt", "GOLD MEMBERSHIPS", "ID - Name - Username - Password - Date");
                                                                                displayFile("SILVER.txt", "SILVER MEMBERSHIPS", "ID - Name - Username - Password - Date");

                                                                                break;
                                                                            }

                                                                        case '2'://PROGRAMS
                                                                            {
                                                                                int SALESshowPROGRAMSchoice;

                                                                                do{
                                                                                    cursorStatus(0);
                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);

                                                                                    gotoxy(49, 8);
                                                                                    setColor(15);
                                                                                    printf("- P R O G R A M S -");

                                                                                    gotoxy(54, 10);
                                                                                    setColor(6);
                                                                                    printf("ENHANCEMENT");
                                                                                    gotoxy(50, 10);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(54, 12);
                                                                                    setColor(6);
                                                                                    printf("YOGA");
                                                                                    gotoxy(50, 12);
                                                                                    setColor(15);
                                                                                    printf("[2]");

                                                                                    gotoxy(54, 14);
                                                                                    setColor(6);
                                                                                    printf("ZUMBA");
                                                                                    gotoxy(50, 14);
                                                                                    setColor(15);
                                                                                    printf("[3]");

                                                                                    gotoxy(54, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(50, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    switch(SALESshowPROGRAMSchoice)
                                                                                    {
                                                                                    case '1'://ENHANCEMENT
                                                                                        {
                                                                                            cls(15);
                                                                                            displayFile("ENHANCEMENT.txt", "ENHANCEMENT PROGRAMS", "ID - Name - Type - Date");


                                                                                            break;
                                                                                        }

                                                                                    case '2'://YOGA
                                                                                        {
                                                                                            cls(15);
                                                                                            displayFile("YOGA.txt", "YOGA PROGRAMS", "ID - Name - Date");

                                                                                            break;
                                                                                        }

                                                                                    case '3'://ZUMBA
                                                                                        {
                                                                                            cls(15);
                                                                                            displayFile("ZUMBA.txt", "ZUMBA PROGRAMS", "ID - Name - Date");

                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    SALESshowPROGRAMSchoice = getch();

                                                                                }while(SALESshowPROGRAMSchoice != '0');

                                                                                break;
                                                                            }

                                                                            case '3'://WALK-IN
                                                                                {

                                                                                    cls(15);
                                                                                    displayFile("walkin.txt", "WALK-IN", "Name - Hours - Amount");

                                                                                    break;
                                                                                }

                                                                            case '4'://ADD-ONS
                                                                                {
                                                                                    cls(15);
                                                                                    displayFile("TOTALsilveraddon.txt", "ADD-ON EQUIPMENTS", "ID Number - Hours - Amount - Date");
                                                                                    displayFile("TOTALwalkinaddon.txt", "ADD-ON EQUIPMENTS", "NAME - Hours - Date");

                                                                                    break;
                                                                                }
                                                                        }

                                                                        SALESshowChoice = getch();

                                                                    }while(SALESshowChoice != '0');

                                                                break;
                                                                }


                                                            case '2'://TOTAL
                                                            {
                                                                int TOTALchoice;

                                                                float membership = 0.00, programs = 0.00, walkinT = 0.00, addons = 0.00;
                                                                //MEMBERSHIP DECLERATIONS
                                                                int GOLDcount = 0, SILVERcount = 0;
                                                                const float GoldcostPerID = 2899;
                                                                const float SilvercostPerID = 1500;
                                                                float gold = 0.00, silver = 0.00;
                                                                //PROGRAMS DECLERATIONS
                                                                int ENHAcount = 0, YOGAcount = 0, ZUMBAcount = 0;
                                                                const float ENHAcostPerID = 999.00;
                                                                const float YOGAcostPerID = 300.00;
                                                                const float ZUMBAcostPerID = 300.00;
                                                                float enha = 0.00, yoga = 0.00, zumba = 0.00;
                                                                //WALK-IN DECLERATIONS
                                                                int WALKINcount = 0;
                                                                const float WALKINcostPerID = 80.00;
                                                                //ADD-ONS DECLERATIONS
                                                                float amount = 0.00, SILVERamountTOpay = 0.00, WALKINamountTOpay = 0.00;
                                                                //REVENUE
                                                                float revenue = 0.00;


                                                                do{
                                                                    cursorStatus(0);
                                                                    cls(15);
                                                                    setColor(3);
                                                                    boxUI(35, 15);

                                                                    gotoxy(51, 8);
                                                                    setColor(15);
                                                                    printf("- T  O  T  A  L -");

                                                                    gotoxy(55, 10);
                                                                    setColor(6);
                                                                    printf("MEMBERSHIP");
                                                                    gotoxy(51, 10);
                                                                    setColor(15);
                                                                    printf("[1]");

                                                                    gotoxy(55, 12);
                                                                    setColor(6);
                                                                    printf("PROGRAMS");
                                                                    gotoxy(51, 12);
                                                                    setColor(15);
                                                                    printf("[2]");

                                                                    gotoxy(55, 14);
                                                                    setColor(6);
                                                                    printf("WALK-IN");
                                                                    gotoxy(51, 14);
                                                                    setColor(15);
                                                                    printf("[3]");

                                                                    gotoxy(55, 16);
                                                                    setColor(6);
                                                                    printf("ADD-ONS");
                                                                    gotoxy(51, 16);
                                                                    setColor(15);
                                                                    printf("[4]");

                                                                    gotoxy(55, 18);
                                                                    setColor(6);
                                                                    printf("REVENUE");
                                                                    gotoxy(51, 18);
                                                                    setColor(15);
                                                                    printf("[5]");

                                                                    gotoxy(55, 20);
                                                                    setColor(6);
                                                                    printf("EXIT");
                                                                    gotoxy(51, 20);
                                                                    setColor(15);
                                                                    printf("[0]");


                                                                    switch(TOTALchoice)
                                                                    {
                                                                    case '1'://MEMBERSHIP
                                                                        {
                                                                            FILE *goldfile = fopen("GOLD.txt", "r");
                                                                            FILE *silverfile = fopen("SILVER.txt", "r");

                                                                            if (goldfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open GOLD.txt\n");
                                                                                return 0;
                                                                            }

                                                                            if (silverfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open SILVER.txt\n");
                                                                                return 0;
                                                                            }

                                                                            char line[256];

                                                                            // Calculate the total cost
                                                                            while (fgets(line, sizeof(line), goldfile))
                                                                            {
                                                                                GOLDcount++;
                                                                            }
                                                                            fclose(goldfile);

                                                                            while (fgets(line, sizeof(line), silverfile))
                                                                            {
                                                                                SILVERcount++;
                                                                            }
                                                                            fclose(silverfile);

                                                                            gold = GOLDcount * GoldcostPerID;
                                                                            silver = SILVERcount * SilvercostPerID;
                                                                            membership = gold + silver;

                                                                            cursorStatus(0);
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 12);

                                                                            gotoxy(47, 10);
                                                                            setColor(6);
                                                                            printf("GOLD MEMBERSHIP TOTAL:");
                                                                            gotoxy(71, 10);
                                                                            setColor(15);
                                                                            printf("Php %.2f", gold);

                                                                            gotoxy(47, 12);
                                                                            setColor(6);
                                                                            printf("SILVER MEMBERSHIP TOTAL:");
                                                                            gotoxy(73, 12);
                                                                            setColor(15);
                                                                            printf("Php %.2f", silver);

                                                                            gotoxy(47, 14);
                                                                            setColor(6);
                                                                            printf("OVERALL MEMBERSHIP TOTAL:");
                                                                            gotoxy(73, 14);
                                                                            setColor(15);
                                                                            printf("Php %.2f", membership);

                                                                            break;
                                                                        }

                                                                    case '2'://PROGRAMS
                                                                        {
                                                                            FILE *ENHAfile = fopen("ENHANCEMENT.txt", "r");
                                                                            FILE *YOGAfile = fopen("YOGA.txt", "r");
                                                                            FILE *ZUMBAfile = fopen("ZUMBA.txt", "r");

                                                                            if (ENHAfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open ENHANCEMENT.txt\n");
                                                                                return 0;
                                                                            }

                                                                            if (YOGAfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open YOGA.txt\n");
                                                                                return 0;
                                                                            }

                                                                            if (ZUMBAfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open ZUMBA.txt\n");
                                                                                return 0;
                                                                            }

                                                                            char line[256];

                                                                            // Calculate the total cost
                                                                            while (fgets(line, sizeof(line), ENHAfile))
                                                                            {
                                                                                ENHAcount++;
                                                                            }
                                                                            fclose(ENHAfile);

                                                                            while (fgets(line, sizeof(line), YOGAfile))
                                                                            {
                                                                                YOGAcount++;
                                                                            }
                                                                            fclose(YOGAfile);

                                                                            while (fgets(line, sizeof(line), ZUMBAfile))
                                                                            {
                                                                                ZUMBAcount++;
                                                                            }
                                                                            fclose(ZUMBAfile);

                                                                            enha = ENHAcount * ENHAcostPerID;
                                                                            yoga = YOGAcount * YOGAcostPerID;
                                                                            zumba = ZUMBAcount * ZUMBAcostPerID;
                                                                            programs = enha + yoga + zumba;

                                                                            cursorStatus(0);
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 10);

                                                                            gotoxy(47, 8);
                                                                            setColor(6);
                                                                            printf("ENHANCEMENT TOTAL:");
                                                                            gotoxy(66, 8);
                                                                            setColor(15);
                                                                            printf("Php %.2f", enha);

                                                                            gotoxy(47, 10);
                                                                            setColor(6);
                                                                            printf("YOGA TOTAL:");
                                                                            gotoxy(59, 10);
                                                                            setColor(15);
                                                                            printf("Php %.2f", yoga);

                                                                            gotoxy(47, 12);
                                                                            setColor(6);
                                                                            printf("ZUMBA TOTAL:");
                                                                            gotoxy(60, 12);
                                                                            setColor(15);
                                                                            printf("Php %.2f", zumba);

                                                                            gotoxy(47, 14);
                                                                            setColor(6);
                                                                            printf("OVERALL PROGRAMS TOTAL:");
                                                                            gotoxy(71, 14);
                                                                            setColor(15);
                                                                            printf("Php %.2f", programs);

                                                                            break;
                                                                        }

                                                                    case '3'://WALK-IN
                                                                        {
                                                                            FILE *WALKINfile = fopen("walkin.txt", "r");

                                                                            if (WALKINfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open ENHANCEMENT.txt\n");
                                                                                return 0;
                                                                            }

                                                                            char line[256];

                                                                            while (fgets(line, sizeof(line), WALKINfile))
                                                                            {
                                                                                WALKINcount++;
                                                                            }
                                                                            fclose(WALKINfile);

                                                                            walkinT = WALKINcount * WALKINcostPerID;

                                                                            cursorStatus(0);
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 8);

                                                                            gotoxy(47, 10);
                                                                            setColor(6);
                                                                            printf("WALK-IN TOTAL:");
                                                                            gotoxy(71, 10);
                                                                            setColor(15);
                                                                            printf("Php %.2f", walkinT);

                                                                            break;
                                                                        }

                                                                    case '4'://ADD-ONS
                                                                        {
                                                                            FILE *silverfile = fopen("TOTALsilveraddon.txt", "r");
                                                                            FILE *walkinfile = fopen("TOTALwalkinaddon.txt", "r");

                                                                            if (silverfile== NULL)
                                                                            {
                                                                                printf("Error: Could not open TOTALsilveraddon.txt\n");
                                                                                return 0;
                                                                            }

                                                                            if (walkinfile == NULL)
                                                                            {
                                                                                printf("Error: Could not open TOTALwalkinaddon.txt\n");
                                                                                return 0;
                                                                            }

                                                                            long long int idNUM;
                                                                            char name[50], date[50];

                                                                            while(fscanf(silverfile,"%lld - %f - %s", &idNUM, &amount, &date) != EOF)
                                                                            {
                                                                                    SILVERamountTOpay = SILVERamountTOpay + amount;
                                                                                    break;

                                                                            }

                                                                            while(fscanf(walkinfile,"%s - %f - %s", &name, &amount, &date) != EOF)
                                                                            {

                                                                                    WALKINamountTOpay = WALKINamountTOpay + amount;
                                                                                    break;

                                                                            }

                                                                            addons = SILVERamountTOpay + WALKINamountTOpay;

                                                                            cursorStatus(0);
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 8);

                                                                            gotoxy(47, 8);
                                                                            setColor(6);
                                                                            printf("SILVER ADD-ONS TOTAL:");
                                                                            gotoxy(69, 8);
                                                                            setColor(15);
                                                                            printf("Php %.2f", SILVERamountTOpay);

                                                                            gotoxy(47, 10);
                                                                            setColor(6);
                                                                            printf("WALK-IN ADD-ONS TOTAL:");
                                                                            gotoxy(70, 10);
                                                                            setColor(15);
                                                                            printf("Php %.2f", WALKINamountTOpay);

                                                                            gotoxy(47, 12);
                                                                            setColor(6);
                                                                            printf("OVERALL TOTAL:");
                                                                            gotoxy(62, 12);
                                                                            setColor(15);
                                                                            printf("Php %.2f", addons);

                                                                            break;
                                                                        }

                                                                    case '5'://REVENUE
                                                                        {
                                                                            int REVENUEchoice;

                                                                            do{

                                                                                cursorStatus(0);
                                                                                cls(15);
                                                                                setColor(3);
                                                                                boxUI(35, 10);

                                                                                gotoxy(53, 8);
                                                                                setColor(15);
                                                                                printf("- REVENUE -");

                                                                                char* dateTime = CurrentDateTime();

                                                                                gotoxy(45, 10);
                                                                                setColor(6);
                                                                                printf("DATE: %s", dateTime);

                                                                                revenue = membership + programs + walkinT + addons;

                                                                                gotoxy(45, 13);
                                                                                setColor(15);
                                                                                printf("REVENUE: %.2f", revenue);

                                                                                gotoxy(67, 16);
                                                                                setColor(6);
                                                                                printf("EXIT");
                                                                                gotoxy(64, 16);
                                                                                setColor(15);
                                                                                printf("[0]");

                                                                                REVENUEchoice = getch();

                                                                            }while(REVENUEchoice != '0');


                                                                            break;
                                                                        }

                                                                    }

                                                                    TOTALchoice = getch();

                                                                }while(TOTALchoice != '0');

                                                                break;
                                                            }
                                                        }

                                                    }while(SALESchoice != '0');
                                                        break;
                                                    }

                                                case '5'://ADD-ONS
                                                    {
                                                        int ADDONSchoice;

                                                        do{

                                                            cursorStatus(0);
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(35, 10);

                                                            gotoxy(50, 8);
                                                            setColor(15);
                                                            printf("- A D D - O N S -");

                                                            gotoxy(55, 10);
                                                            setColor(6);
                                                            printf("FOR WALK-IN");
                                                            gotoxy(51, 10);
                                                            setColor(15);
                                                            printf("[1]");

                                                            gotoxy(55, 12);
                                                            setColor(6);
                                                            printf("FOR SILVER");
                                                            gotoxy(51, 12);
                                                            setColor(15);
                                                            printf("[2]");

                                                            gotoxy(55, 14);
                                                            setColor(6);
                                                            printf("EXIT");
                                                            gotoxy(51, 14);
                                                            setColor(15);
                                                            printf("[0]");

                                                            switch(ADDONSchoice)
                                                            {
                                                            case '1'://FOR WALK-IN
                                                                {
                                                                    cursorStatus(0);
                                                                    cls(15);
                                                                    setColor(3);
                                                                    boxUI(42, 8);

                                                                    gotoxy(46, 8);
                                                                    setColor(15);
                                                                    printf("- W A L K - I N   A D D - O N -");

                                                                    gotoxy(46, 11);
                                                                    setColor(6);
                                                                    printf("NAME:");
                                                                    gotoxy(51, 11);
                                                                    setColor(15);
                                                                    cursorStatus(1);
                                                                    char walkinADDONname[50];
                                                                    scanf("%49s", &walkinADDONname);

                                                                    FILE *file = fopen("walkin.txt", "r");

                                                                    if (file == NULL)
                                                                            {
                                                                                printf("Error: Could not open walkin.txt\n");
                                                                                return 0;
                                                                            }
                                                                    int hrs, amount;
                                                                    int walkinGRANTED = 0;
                                                                    char name[50];

                                                                    while(fscanf(file,"%s - %d hrs - Php %d\n", &name, &hrs, &amount) == 3)
                                                                    {
                                                                        if (strcmp(walkinADDONname, name) == 0)
                                                                        {
                                                                            walkinGRANTED = 1;
                                                                            break;
                                                                        }
                                                                    }

                                                                    fclose(file);

                                                                    if (walkinGRANTED)
                                                                    {
                                                                        int walkinADDONchoice;
                                                                        do{
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(74, 28);
                                                                            cursorStatus(0);

                                                                            gotoxy(64, 1);
                                                                            setColor(15);
                                                                            printf("- E Q U I P M E N T S -");

                                                                            gotoxy(51, 3);
                                                                            setColor(6);
                                                                            printf("ROWING MACHINE");
                                                                            gotoxy(47, 3);
                                                                            setColor(15);
                                                                            printf("[a]");

                                                                            gotoxy(86, 3);
                                                                            setColor(6);
                                                                            printf("STAIR CLIMBER");
                                                                            gotoxy(82, 3);
                                                                            setColor(15);
                                                                            printf("[b]");

                                                                            gotoxy(51, 5);
                                                                            setColor(6);
                                                                            printf("DUMBBELL 10KG");
                                                                            gotoxy(47, 5);
                                                                            setColor(15);
                                                                            printf("[c]");

                                                                            gotoxy(86, 5);
                                                                            setColor(6);
                                                                            printf("DUMBBELL 15KG");
                                                                            gotoxy(82, 5);
                                                                            setColor(15);
                                                                            printf("[d]");

                                                                            gotoxy(51, 7);
                                                                            setColor(6);
                                                                            printf("BARBELLS 10KG");
                                                                            gotoxy(47, 7);
                                                                            setColor(15);
                                                                            printf("[e]");

                                                                            gotoxy(86, 7);
                                                                            setColor(6);
                                                                            printf("KETTLEBELLS 8KG");
                                                                            gotoxy(82, 7);
                                                                            setColor(15);
                                                                            printf("[f]");

                                                                            gotoxy(51, 9);
                                                                            setColor(6);
                                                                            printf("LAT PULLDOWN");
                                                                            gotoxy(47, 9);
                                                                            setColor(15);
                                                                            printf("[g]");

                                                                            gotoxy(86, 9);
                                                                            setColor(6);
                                                                            printf("CABLE CROSSOVER");
                                                                            gotoxy(82, 9);
                                                                            setColor(15);
                                                                            printf("[h]");

                                                                            gotoxy(51, 11);
                                                                            setColor(6);
                                                                            printf("CHEST FLY MACHINE");
                                                                            gotoxy(47, 11);
                                                                            setColor(15);
                                                                            printf("[i]");

                                                                            gotoxy(86, 11);
                                                                            setColor(6);
                                                                            printf("TRX SUSPENSION");
                                                                            gotoxy(82, 11);
                                                                            setColor(15);
                                                                            printf("[j]");

                                                                            gotoxy(51, 13);
                                                                            setColor(6);
                                                                            printf("MEDICINE BALL 5KG");
                                                                            gotoxy(47, 13);
                                                                            setColor(15);
                                                                            printf("[k]");

                                                                            gotoxy(86, 13);
                                                                            setColor(6);
                                                                            printf("ADJUSTABLE TRAINING BENCH");
                                                                            gotoxy(82, 13);
                                                                            setColor(15);
                                                                            printf("[l]");

                                                                            gotoxy(51, 15);
                                                                            setColor(6);
                                                                            printf("PULL-UP BAR");
                                                                            gotoxy(47, 15);
                                                                            setColor(15);
                                                                            printf("[m]");

                                                                            gotoxy(86, 15);
                                                                            setColor(6);
                                                                            printf("BARBELLS 20KG");
                                                                            gotoxy(82, 15);
                                                                            setColor(15);
                                                                            printf("[n]");

                                                                            gotoxy(51, 17);
                                                                            setColor(6);
                                                                            printf("BARBELLS 30KG");
                                                                            gotoxy(47, 17);
                                                                            setColor(15);
                                                                            printf("[o]");

                                                                            gotoxy(86,17);
                                                                            setColor(6);
                                                                            printf("KETTLEBELLS 12KG");
                                                                            gotoxy(82, 17);
                                                                            setColor(15);
                                                                            printf("[p]");

                                                                            gotoxy(51, 19);
                                                                            setColor(6);
                                                                            printf("KETTLEBELLS 16KG");
                                                                            gotoxy(47, 19);
                                                                            setColor(15);
                                                                            printf("[q]");

                                                                            gotoxy(86,19);
                                                                            setColor(6);
                                                                            printf("SMITH MACHINE");
                                                                            gotoxy(82, 19);
                                                                            setColor(15);
                                                                            printf("[r]");

                                                                            gotoxy(51, 21);
                                                                            setColor(6);
                                                                            printf("BENCH PRESS");
                                                                            gotoxy(47, 21);
                                                                            setColor(15);
                                                                            printf("[s]");

                                                                            gotoxy(86,21);
                                                                            setColor(6);
                                                                            printf("LEG CURL");
                                                                            gotoxy(82, 21);
                                                                            setColor(15);
                                                                            printf("[t]");

                                                                            gotoxy(51, 23);
                                                                            setColor(6);
                                                                            printf("LEG PRESS MACHINE");
                                                                            gotoxy(47, 23);
                                                                            setColor(15);
                                                                            printf("[u]");

                                                                            gotoxy(86,23);
                                                                            setColor(6);
                                                                            printf("HACK SQUAT MACHINE");
                                                                            gotoxy(82, 23);
                                                                            setColor(15);
                                                                            printf("[v]");

                                                                            gotoxy(51, 25);
                                                                            setColor(6);
                                                                            printf("POWER RACK");
                                                                            gotoxy(47, 25);
                                                                            setColor(15);
                                                                            printf("[w]");

                                                                            gotoxy(86,25);
                                                                            setColor(6);
                                                                            printf("DIP STATION");
                                                                            gotoxy(82, 25);
                                                                            setColor(15);
                                                                            printf("[x]");

                                                                            gotoxy(51, 27);
                                                                            setColor(6);
                                                                            printf("FUNCTIONAL TRAINER");
                                                                            gotoxy(47, 27);
                                                                            setColor(15);
                                                                            printf("[y]");

                                                                            gotoxy(86, 27);
                                                                            setColor(6);
                                                                            printf("BACK");
                                                                            gotoxy(82, 27);
                                                                            setColor(15);
                                                                            printf("[0]");

                                                                            float amountTOpay;
                                                                            char* dateTime = CurrentDateTime();

                                                                            switch(walkinADDONchoice)
                                                                            {
                                                                            case 'a': //ROWING MACHINE
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) == 3)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'b': //STAIR CLIMBER
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'c': //DUMBBELL 10KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'd': //DUMBBELL 15KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'e': //BARBELLS 10KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'f': //KETTLEBELLS 8KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'g': //LAT PULLDOWN
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'h': //CABLE CROSSOVER
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'i': //CHEST FLY MACHINE
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'j': //TRX SUSPENSION
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'k': //MEDICINE BALL 5KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'l': //ADJUSTABLE TRAINING BENCH
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'm': //PULL-UP BAR
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'n': //BARBELLS 20KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'o': //BARBELLS 30KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'p': //KETTLEBELLS 12KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'q': //KETTLEBELLS 16KG
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'r': //SMITH MACHINE
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 's': //BENCH PRESS
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 't': //LEG CURL
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'u': //LEG PRESS MACHINE
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'v': //HACK SQUAT MACHINE
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'w': //POWER RACK
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'x': //DIP STATION
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                            case 'y': //FUNCTIONAL TRAINER
                                                                                {
                                                                                    FILE *file = fopen("walkinADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open walkinADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == walkinADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    char* dateTime = CurrentDateTime();
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALwalkinaddon.txt", "a");
                                                                                        fprintf(file, "%s - %.2f - %s\n", name, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        walkinADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }
                                                                            }

                                                                            walkinADDONchoice = getch();

                                                                        }while(walkinADDONchoice != '0');
                                                                    }
                                                                    else
                                                                    {
                                                                        cls(15);
                                                                        setColor(3);
                                                                        boxUI(48, 12);
                                                                        gotoxy(51, 11);
                                                                        setColor(4);
                                                                        printf("I N V A L I D   O P T I O N");

                                                                        gotoxy(57, 13);
                                                                        setColor(4);
                                                                        printf("Please try again.");
                                                                    }


                                                                    break;
                                                                }

                                                            case '2'://FOR SILVER
                                                                {
                                                                    cursorStatus(0);
                                                                    cls(15);
                                                                    setColor(3);
                                                                    boxUI(42, 12);

                                                                    gotoxy(47, 8);
                                                                    setColor(15);
                                                                    printf("- S I L V E R   A D D - O N -");

                                                                    gotoxy(46, 11);
                                                                    setColor(6);
                                                                    printf("ID NUMBER:");
                                                                    gotoxy(56, 11);
                                                                    setColor(15);
                                                                    cursorStatus(1);
                                                                    long long int silverADDONid;
                                                                    scanf("%lld", &silverADDONid);

                                                                    FILE *file = fopen("SILVER.txt", "r");

                                                                    if (file == NULL)
                                                                            {
                                                                                printf("Error: Could not open SILVER.txt\n");
                                                                                return 0;
                                                                            }

                                                                    long long int idNUM;
                                                                    int silverGRANTED = 0;
                                                                    char MEMBERSHIPname[50], MEMusername[50], MEMpassword[50], dateTime[50];


                                                                    while(fscanf(file,"%lld - %s - %s - %s - %s", &idNUM, &MEMBERSHIPname, &MEMusername, &MEMpassword, &dateTime) == 5)
                                                                    {
                                                                        if (silverADDONid == idNUM)
                                                                        {
                                                                            silverGRANTED = 1;
                                                                            break;
                                                                        }
                                                                    }

                                                                    fclose(file);

                                                                    if (silverGRANTED)
                                                                    {
                                                                    int silverADDONchoice;
                                                                        do{
                                                                            cls(15);
                                                                            setColor(3);
                                                                            boxUI(74, 18);
                                                                            cursorStatus(0);

                                                                            gotoxy(64, 7);
                                                                            setColor(15);
                                                                            printf("- E Q U I P M E N T S -");

                                                                            gotoxy(51, 9);
                                                                            setColor(6);
                                                                            printf("BARBELLS 20KG");
                                                                            gotoxy(47, 9);
                                                                            setColor(15);
                                                                            printf("[a]");

                                                                            gotoxy(86, 9);
                                                                            setColor(6);
                                                                            printf("BARBELLS 30KG");
                                                                            gotoxy(82, 9);
                                                                            setColor(15);
                                                                            printf("[b]");

                                                                            gotoxy(51, 11);
                                                                            setColor(6);
                                                                            printf("KETTLEBELLS 12KG");
                                                                            gotoxy(47, 11);
                                                                            setColor(15);
                                                                            printf("[c]");

                                                                            gotoxy(86, 11);
                                                                            setColor(6);
                                                                            printf("KETTLEBELLS 16KG");
                                                                            gotoxy(82, 11);
                                                                            setColor(15);
                                                                            printf("[d]");

                                                                            gotoxy(51, 13);
                                                                            setColor(6);
                                                                            printf("SMITH MACHINE");
                                                                            gotoxy(47, 13);
                                                                            setColor(15);
                                                                            printf("[e]");

                                                                            gotoxy(86, 13);
                                                                            setColor(6);
                                                                            printf("BENCH PRESS");
                                                                            gotoxy(82, 13);
                                                                            setColor(15);
                                                                            printf("[f]");

                                                                            gotoxy(51, 15);
                                                                            setColor(6);
                                                                            printf("LEG CURL");
                                                                            gotoxy(47, 15);
                                                                            setColor(15);
                                                                            printf("[g]");

                                                                            gotoxy(86, 15);
                                                                            setColor(6);
                                                                            printf("LEG PRESS MACHINE");
                                                                            gotoxy(82, 15);
                                                                            setColor(15);
                                                                            printf("[h]");

                                                                            gotoxy(51, 17);
                                                                            setColor(6);
                                                                            printf("HACK SQUAT MACHINE");
                                                                            gotoxy(47, 17);
                                                                            setColor(15);
                                                                            printf("[i]");

                                                                            gotoxy(86, 17);
                                                                            setColor(6);
                                                                            printf("MEDICINE BALL 10KG");
                                                                            gotoxy(82, 17);
                                                                            setColor(15);
                                                                            printf("[j]");

                                                                            gotoxy(51, 19);
                                                                            setColor(6);
                                                                            printf("POWER RACK");
                                                                            gotoxy(47, 19);
                                                                            setColor(15);
                                                                            printf("[k]");

                                                                            gotoxy(86, 19);
                                                                            setColor(6);
                                                                            printf("DIP STATION");
                                                                            gotoxy(82, 19);
                                                                            setColor(15);
                                                                            printf("[l]");

                                                                            gotoxy(51, 21);
                                                                            setColor(6);
                                                                            printf("FUNCTION TRAINER");
                                                                            gotoxy(47, 21);
                                                                            setColor(15);
                                                                            printf("[m]");

                                                                            gotoxy(86, 21);
                                                                            setColor(6);
                                                                            printf("BACK");
                                                                            gotoxy(82, 21);
                                                                            setColor(15);
                                                                            printf("[0]");

                                                                            float amountTOpay;
                                                                            char* dateTime = CurrentDateTime();

                                                                            switch(silverADDONchoice)
                                                                            {
                                                                            case 'a'://BARBELLS 20KG
                                                                                {
                                                                                    FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                    break;
                                                                                }

                                                                                case 'b'://BARBELLS 30KG
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'c': //KETTLEBELLS 12KG
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'd'://KETTLEBELLS 16KG
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'e'://SMITH MACHINE
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'f'://BENCH PRESS
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'g'://LEG CURL
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'h'://LEG PRESS MACHINE
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'i'://HACK SQUAT MACHINE
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'j'://MEDICINE BALL 10KG
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'k'://POWER RACK
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'l'://DIP STATION
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }

                                                                                case 'm'://FUNCTIONAL TRAINER
                                                                                    {
                                                                                        FILE *file = fopen("silverADDON.txt", "r");

                                                                                    if (file == NULL)
                                                                                            {
                                                                                                printf("Error: Could not open silverADDON.txt\n");
                                                                                                return 0;
                                                                                            }
                                                                                    float amount;
                                                                                    char type, equipments[50];

                                                                                    while(fscanf(file,"%c - %49[^-] - %f", &type, &equipments, &amount) != EOF)
                                                                                    {
                                                                                        if (type == silverADDONchoice)
                                                                                        {
                                                                                            amountTOpay = amountTOpay + amount;
                                                                                            break;
                                                                                        }
                                                                                    }

                                                                                    cls(15);
                                                                                    setColor(3);
                                                                                    boxUI(35, 12);
                                                                                    cursorStatus(0);

                                                                                    gotoxy(46, 8);
                                                                                    setColor(15);
                                                                                    printf("- T O T A L -");

                                                                                    gotoxy(46, 10);
                                                                                    setColor(6);
                                                                                    printf("AMOUNT TO PAY: Php %.2f", amountTOpay);

                                                                                    gotoxy(50, 14);
                                                                                    setColor(6);
                                                                                    printf("ADD");
                                                                                    gotoxy(46, 14);
                                                                                    setColor(15);
                                                                                    printf("[1]");

                                                                                    gotoxy(50, 16);
                                                                                    setColor(6);
                                                                                    printf("EXIT");
                                                                                    gotoxy(46, 16);
                                                                                    setColor(15);
                                                                                    printf("[0]");

                                                                                    int addADDON;
                                                                                    addADDON = getch();

                                                                                    if (addADDON == '1')
                                                                                    {
                                                                                        break;
                                                                                    }
                                                                                    else if (addADDON == '0')
                                                                                    {
                                                                                        FILE *file = fopen("TOTALsilveraddon.txt", "a");
                                                                                        fprintf(file, "%lld - %.2f - %s\n", idNUM, amountTOpay, dateTime);
                                                                                        fclose(file);

                                                                                        amountTOpay = 0;
                                                                                        silverADDONchoice = '0';
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        cls(15);
                                                                                        setColor(3);
                                                                                        boxUI(48, 12);
                                                                                        gotoxy(51, 11);
                                                                                        setColor(4);
                                                                                        printf("I N V A L I D   O P T I O N");

                                                                                        gotoxy(57, 13);
                                                                                        setColor(4);
                                                                                        printf("Please try again.");
                                                                                    }

                                                                                        break;
                                                                                    }
                                                                            }

                                                                            silverADDONchoice = getch();

                                                                        }while(silverADDONchoice != '0');
                                                                    }
                                                                    else
                                                                    {
                                                                        cls(15);
                                                                            setColor(3);
                                                                            boxUI(48, 12);
                                                                            gotoxy(54, 11);
                                                                            setColor(4);
                                                                            printf("N O T   A   M E M B E R!");

                                                                            gotoxy(57, 13);
                                                                            setColor(4);
                                                                            printf("Please try again.");
                                                                    }


                                                                    break;
                                                                }
                                                            }

                                                            ADDONSchoice = getch();

                                                        }while(ADDONSchoice != '0');

                                                        break;
                                                    }

                                                case '0': // EXIT
                                                    {
                                                        cls(15);
                                                        setColor(3);
                                                        boxUI(42, 12);

                                                        gotoxy(53, 11);
                                                        setColor(15);
                                                        printf("Exiting program...");

                                                        waitSec(1);
                                                        gotoxy(47, 13);
                                                        setColor(15);
                                                        loadbar(27, 30);

                                                        waitSec(1);
                                                    }
                                                    break;
                                            }
                                        } while (MAINchoice != '0');
                                        break;
                                    }
//--------------------------------- STAFF -----------------------------------------
                                    else if(strcmp(userACCESS, "staff") == 0)
                                    {
                                        int MAINchoice;

                                        do {
                                            cursorStatus(false);
                                            cls(15);
                                            setColor(3);
                                            boxUI(42, 12);

                                            gotoxy(55, 8);
                                            setColor(15);
                                            printf("- S T A F F -");

                                            gotoxy(50, 11);
                                            setColor(6);
                                            printf("MEMBERSHIP");
                                            gotoxy(47, 11);
                                            setColor(15);
                                            printf("[1]");

                                            gotoxy(68, 11);
                                            setColor(6);
                                            printf("WALK-IN");
                                            gotoxy(65, 11);
                                            setColor(15);
                                            printf("[2]");

                                            gotoxy(50, 14);
                                            setColor(6);
                                            printf("EQUIPMENT");
                                            gotoxy(47, 14);
                                            setColor(15);
                                            printf("[3]");

                                            gotoxy(68, 14);
                                            setColor(6);
                                            printf("LOGOUT");
                                            gotoxy(65, 14);
                                            setColor(15);
                                            printf("[0]");

                                            MAINchoice = getch();

                                            switch (MAINchoice) {
                                            case '1': // MEMBERSHIP
                                                cls(15);
                                                setColor(3);
                                                boxUI(40, 20);
                                                gotoxy(50, 8);
                                                setColor(7);
                                                printf("- M E M B E R S H I P -");

                                                gotoxy(42, 9);
                                                FILE *membershipFile = fopen("membership.txt", "r");
                                                if (membershipFile != NULL) {
                                                    char line[250];
                                                    int currentY = 9;
                                                    while (fgets(line, sizeof(line), membershipFile)) {
                                                        gotoxy(42, currentY);
                                                        printf("%s", line);
                                                        currentY++;
                                                    }
                                                    fclose(membershipFile);
                                                } else {
                                                    gotoxy(50, 10);
                                                    printf("membership.txt not found.");
                                                }

                                                getch();
                                                break;

                                            case '2': // WALK-IN
                                                cls(15);
                                                setColor(3);
                                                boxUI(40, 20);
                                                gotoxy(52, 8);
                                                setColor(7);
                                                printf("- W A L K - I N -");

                                                gotoxy(42, 9);
                                                FILE *walkinFile = fopen("walkin.txt", "r");
                                                if (walkinFile != NULL) {
                                                    char line[250];
                                                    int currentY = 10
                                                    ;
                                                    while (fgets(line, sizeof(line), walkinFile)) {
                                                        gotoxy(42, currentY);
                                                        printf("%s", line);
                                                        currentY++;
                                                    }
                                                    fclose(walkinFile);
                                                } else {
                                                    gotoxy(50, 10);
                                                    printf("walkin.txt not found.");
                                                }

                                                getch();
                                                break;

                                            case '3': // EQUIPMENTS
                                            {
                                                char Equipmentchoice;
                                                do {
                                                    cursorStatus(false);
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(40, 12);

                                                    gotoxy(51, 8);
                                                    setColor(15);
                                                    printf("- E Q U I P M E N T -");

                                                    gotoxy(49, 11);
                                                    setColor(6);
                                                    printf("SHOW EQUIPMENT");
                                                    gotoxy(45, 11);
                                                    setColor(15);
                                                    printf("[1]");

                                                    gotoxy(49, 13);
                                                    setColor(6);
                                                    printf("EDIT EQUIPMENT");
                                                    gotoxy(45, 13);
                                                    setColor(15);
                                                    printf("[2]");

                                                    gotoxy(49, 15);
                                                    setColor(6);
                                                    printf("BACK TO MAIN MENU");
                                                    gotoxy(45, 15);
                                                    setColor(15);
                                                    printf("[3]");

                                                    Equipmentchoice = getch();

                                                    switch (Equipmentchoice) {
                                                        case '1': // Show Equipment
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(57, 29);

                                                            int startX = 42;
                                                            int startY = 3;
                                                            setColor(2);

                                                            gotoxy(42, 0);
                                                            setColor(15);
                                                            printf("- FUNCTIONAL -             - DAMAGED -");


                                                            setColor(2);
                                                            FILE *file = fopen("FunctionalEquipment.txt", "r");
                                                            if (file != NULL) {
                                                                char line[250];
                                                                int currentY = startY;
                                                                while (fgets(line, sizeof(line), file)) {
                                                                    gotoxy(startX, currentY);
                                                                    printf("%s", line);
                                                                    currentY++;
                                                                }
                                                                fclose(file);
                                                            } else {
                                                                gotoxy(50, 10);
                                                                printf("walkin.txt not found.");
                                                            }

                                                            int damagedStartX = 69;
                                                            int damagedStartY = 0;
                                                            setColor(4);

                                                            FILE *damagedFile = fopen("DamagedEquipment.txt", "r");
                                                            if (damagedFile != NULL) {
                                                                char line[250];
                                                                int currentY = damagedStartY;
                                                                while (fgets(line, sizeof(line), damagedFile)) {
                                                                    gotoxy(damagedStartX, currentY);
                                                                    printf("%s", line);
                                                                    currentY++;
                                                                }
                                                                fclose(damagedFile);
                                                            } else {
                                                                gotoxy(damagedStartX, 10);
                                                                printf("DamagedEquipment.txt not found.");
                                                            }

                                                            getche();
                                                            break;

                                                        case '2': // Edit Equipment
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(48, 11);
                                                            gotoxy(56, 8);
                                                            setColor(15);
                                                            printf("- EDIT EQUIPMENT -");

                                                            gotoxy(48, 11);
                                                            setColor(6);
                                                            printf("ADD FUNCTIONAL");
                                                            gotoxy(44, 11);
                                                            setColor(15);
                                                            printf("[1]");

                                                            gotoxy(69, 11);
                                                            setColor(6);
                                                            printf("REMOVE FUNCTIONAL");
                                                            gotoxy(65, 11);
                                                            setColor(15);
                                                            printf("[2]");

                                                            gotoxy(48, 13);
                                                            setColor(6);
                                                            printf("ADD DAMAGED");
                                                            gotoxy(44, 13);
                                                            setColor(15);
                                                            printf("[3]");

                                                            gotoxy(69, 13);
                                                            setColor(6);
                                                            printf("REMOVE DAMAGED");
                                                            gotoxy(65, 13);
                                                            setColor(15);
                                                            printf("[4]");

                                                            gotoxy(63, 15);
                                                            setColor(6);
                                                            printf("GO BACK");//MAIN MENU
                                                            gotoxy(59, 15);
                                                            setColor(15);
                                                            printf("[0]");

                                                            Equipmentchoice = getch();

                                                            switch (Equipmentchoice) {
                                                                case '1': // Add Functional
                                                                    cls(15);
                                                                    setColor(3);
                                                                    boxUI(50, 12);
                                                                    gotoxy(51, 8);
                                                                    setColor(15);
                                                                    printf("- ADD FUNCTIONAL EQUIPMENT -");
                                                                    gotoxy(42, 12);
                                                                    setColor(6);
                                                                    printf("Name of equipment: ");
                                                                    setColor(15);

                                                                    char functionalItem[100];
                                                                    fflush(stdin);
                                                                    fgets(functionalItem, sizeof(functionalItem), stdin);
                                                                    functionalItem[strcspn(functionalItem, "\n")] = 0; // Remove newline character

                                                                    FILE *funcFileAdd = fopen("FunctionalEquipment.txt", "a");
                                                                    if (funcFileAdd != NULL) {
                                                                        fprintf(funcFileAdd, "%s\n", functionalItem);
                                                                        fclose(funcFileAdd);
                                                                        gotoxy(51, 15);
                                                                        setColor(2);
                                                                        printf("Equipment added successfully!");
                                                                    } else {
                                                                        gotoxy(51, 15);
                                                                        setColor(4);
                                                                        printf("Error opening file.");
                                                                    }
                                                                    getch();
                                                                    break;

                                                                case '2': // Remove Functional
                                                                    cls(15);
                                                                    setColor(3);
                                                                    boxUI(50, 12);
                                                                    gotoxy(50, 8);
                                                                    setColor(15);
                                                                    printf("- REMOVE FUNCTIONAL EQUIPMENT -");
                                                                    gotoxy(42, 12);
                                                                    setColor(6);
                                                                    printf("Name of Equipment: ");
                                                                    setColor(15);

                                                                    char funcRemove[100];
                                                                    fflush(stdin);
                                                                    fgets(funcRemove, sizeof(funcRemove), stdin);
                                                                    funcRemove[strcspn(funcRemove, "\n")] = 0;

                                                                    FILE *funcFileRead = fopen("FunctionalEquipment.txt", "r");
                                                                    FILE *funcTempFile = fopen("TempFunctional.txt", "w");
                                                                    if (funcFileRead != NULL && funcTempFile != NULL) {
                                                                        char line[250];
                                                                        int found = 0;
                                                                        while (fgets(line, sizeof(line), funcFileRead)) {
                                                                            line[strcspn(line, "\n")] = 0;
                                                                            if (strcmp(line, funcRemove) != 0) {
                                                                                fprintf(funcTempFile, "%s\n", line);
                                                                            } else {
                                                                                found = 1;
                                                                            }
                                                                        }
                                                                        fclose(funcFileRead);
                                                                        fclose(funcTempFile);
                                                                        remove("FunctionalEquipment.txt");
                                                                        rename("TempFunctional.txt", "FunctionalEquipment.txt");
                                                                        gotoxy(51, 15);
                                                                        if (found) {
                                                                            setColor(2);
                                                                            printf("Equipment removed successfully!");
                                                                        } else {
                                                                            setColor(4);
                                                                            gotoxy(55, 15);
                                                                            printf("Item not found.");
                                                                        }
                                                                    } else {
                                                                        gotoxy(51, 15);
                                                                        setColor(4);
                                                                        printf("Error opening file.");
                                                                    }
                                                                    getch();
                                                                    break;

                                                                case '3': // Add Damaged
                                                                    cls(15);
                                                                    setColor(3);
                                                                    boxUI(50, 12);
                                                                    gotoxy(51, 8);
                                                                    setColor(15);
                                                                    printf("- ADD DAMAGED EQUIPMENT -");
                                                                    gotoxy(42, 12);
                                                                    setColor(6);
                                                                    printf("Name of equipment: ");
                                                                    setColor(15);

                                                                    char damagedItem[100];
                                                                    fflush(stdin);
                                                                    fgets(damagedItem, sizeof(damagedItem), stdin);
                                                                    damagedItem[strcspn(damagedItem, "\n")] = 0;

                                                                    FILE *damFileAdd = fopen("DamagedEquipment.txt", "a");
                                                                    if (damFileAdd != NULL) {
                                                                        fprintf(damFileAdd, "%s\n", damagedItem);
                                                                        fclose(damFileAdd);
                                                                        gotoxy(51, 15);
                                                                        setColor(2);
                                                                        printf("Equipment added successfully!");
                                                                    } else {
                                                                        gotoxy(51, 15);
                                                                        setColor(4);
                                                                        printf("Error opening file.");
                                                                    }
                                                                    getch();
                                                                    break;

                                                                case '4': // Remove Damaged
                                                                    cls(15);
                                                                    setColor(3);
                                                                    boxUI(50, 12);
                                                                    gotoxy(52, 8);
                                                                    setColor(15);
                                                                    printf("- REMOVE DAMAGED EQUIPMENT -");
                                                                    gotoxy(42, 12);
                                                                    setColor(6);
                                                                    printf("Name of equipment: ");
                                                                    setColor(15);

                                                                    char damRemove[100];
                                                                    fflush(stdin);
                                                                    fgets(damRemove, sizeof(damRemove), stdin);
                                                                    damRemove[strcspn(damRemove, "\n")] = 0;

                                                                    FILE *damFileRead = fopen("DamagedEquipment.txt", "r");
                                                                    FILE *damTempFile = fopen("TempDamaged.txt", "w");
                                                                    if (damFileRead != NULL && damTempFile != NULL) {
                                                                        char line[250];
                                                                        int found = 0;
                                                                        while (fgets(line, sizeof(line), damFileRead)) {
                                                                            line[strcspn(line, "\n")] = 0;
                                                                            if (strcmp(line, damRemove) != 0) {
                                                                                fprintf(damTempFile, "%s\n", line);
                                                                            } else {
                                                                                found = 1;
                                                                            }
                                                                        }
                                                                        fclose(damFileRead);
                                                                        fclose(damTempFile);
                                                                        remove("DamagedEquipment.txt");
                                                                        rename("TempDamaged.txt", "DamagedEquipment.txt");
                                                                        gotoxy(51, 15);
                                                                        if (found) {
                                                                            setColor(2);
                                                                            printf("Equipment removed successfully!");
                                                                        } else {
                                                                            setColor(4);
                                                                            gotoxy(55, 15);
                                                                            printf("Item not found.");
                                                                        }
                                                                    } else {
                                                                        gotoxy(51, 15);
                                                                        setColor(4);
                                                                        printf("Error opening file.");
                                                                    }
                                                                    getch();
                                                                    break;

                                                                case '0': // Go Back
                                                                    break;

                                                                default:
                                                                    gotoxy(50, 16);
                                                                    printf("Invalid choice.");
                                                                    getch();
                                                                    break;
                                                            }
                                                            break;

                                                        case '3': // Exit to Main Menu
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(42, 12);
                                                            gotoxy(48, 11);
                                                            setColor(15);
                                                            printf("Returning to Main Menu...");
                                                            waitSec(1);
                                                            break;

                                                        default:
                                                            printf("Invalid option. Try again.");
                                                        }
                                                    } while (Equipmentchoice != '3');
                                                    break;
                                                }

                                                case '0': // EXIT
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42, 12);
                                                    gotoxy(50, 11);
                                                    setColor(15);
                                                    printf("Logging out...");
                                                    waitSec(2);

                                                default:
                                                    printf("\nInvalid choice. Try again.");
                                                }
                                            } while (MAINchoice != '0');
                                            break;
                                    }

//--------------------------------- COACH -----------------------------------------
                                    else if(strcmp(userACCESS, "coach") == 0)
                                    {
                                        int coachMain;

                                        do {
                                            cursorStatus(false);
                                            cls(15);
                                            setColor(3);
                                            boxUI(42, 12);

                                            gotoxy(55, 8);
                                            setColor(15);
                                            printf("- C O A C H -");

                                            gotoxy(50, 11);
                                            setColor(6);
                                            printf("PROFILE");
                                            gotoxy(47, 11);
                                            setColor(15);
                                            printf("[1]");

                                            gotoxy(68, 11);
                                            setColor(6);
                                            printf("SCHEDULE");
                                            gotoxy(65, 11);
                                            setColor(15);
                                            printf("[2]");

                                            gotoxy(50, 14);
                                            setColor(6);
                                            printf("CLIENT");
                                            gotoxy(47, 14);
                                            setColor(15);
                                            printf("[3]");

                                            gotoxy(68, 14);
                                            setColor(6);
                                            printf("LOGOUT");
                                            gotoxy(65 , 14);
                                            setColor(15);
                                            printf("[4]");

                                            coachMain = getch(); // Capture input for menu choice

                                            switch (coachMain) {
                                            case '1': // PROFILE
                                                cls(15);
                                                setColor(3);
                                                boxUI(40, 12);
                                                gotoxy(53, 8);
                                                setColor(7);
                                                printf("- P R O F I L E -");

                                                gotoxy(49, 11);
                                                setColor(6);
                                                printf("SHOW PROFILE");
                                                gotoxy(45, 11);
                                                setColor(15);
                                                printf("[1]");

                                                gotoxy(49, 13);
                                                setColor(6);
                                                printf("EDIT PROFILE");
                                                gotoxy(45, 13);
                                                setColor(15);
                                                printf("[2]");

                                                gotoxy(49, 15);
                                                setColor(6);
                                                printf("BACK TO MAIN MENU");
                                                gotoxy(45, 15);
                                                setColor(15);
                                                printf("[3]");

                                                coachMain = getch(); // Get user input for submenu

                                                switch (coachMain) {
                                                case '1': // SHOW PROFILE
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(49, 25);
                                                    gotoxy(53, 4);
                                                    setColor(7);
                                                    printf("- Y O U R  P R O F I L E -");

                                                    setColor(6);
                                                    FILE *profileFile = fopen("profile1_summary.txt", "r");
                                                    if (profileFile != NULL) {
                                                        char line[250];
                                                        int currentY = 6;
                                                        while (fgets(line, sizeof(line), profileFile)) {
                                                            gotoxy(42, currentY);
                                                            printf("%s", line);
                                                            currentY++;
                                                        }
                                                        fclose(profileFile);
                                                    } else {
                                                        gotoxy(50, 11);
                                                        printf("profile1_summary.txt not found.");
                                                    }
                                                    getch();
                                                    break;

                                                case '2': // EDIT PROFILE
                                                {
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(70, 21);
                                                    gotoxy(68, 8);
                                                    setColor(7);
                                                    printf("- EDIT PROFILE -");

                                                    // Input for Name
                                                    gotoxy(42, 11);
                                                    setColor(6);
                                                    printf("Name:");
                                                    char name[50];
                                                    fflush(stdin);
                                                    gotoxy(48, 11);
                                                    setColor(15);
                                                    fgets(name, sizeof(name), stdin);
                                                    name[strcspn(name, "\n")] = 0; // Remove newline character

                                                    // Input for Age
                                                    gotoxy(42, 13);
                                                    setColor(6);
                                                    printf("Age:");
                                                    char age[10];
                                                    fflush(stdin);
                                                    gotoxy(48, 13);
                                                    setColor(15);
                                                    fgets(age, sizeof(age), stdin);
                                                    age[strcspn(age, "\n")] = 0;

                                                    // Input for Birthdate
                                                    gotoxy(42, 15);
                                                    setColor(6);
                                                    printf("Birthdate (M/D/Y):");
                                                    char birthdate[20];
                                                    fflush(stdin);
                                                    gotoxy(61, 15);
                                                    setColor(15);
                                                    fgets(birthdate, sizeof(birthdate), stdin);
                                                    birthdate[strcspn(birthdate, "\n")] = 0;

                                                    // Input for Workout Specialty
                                                    gotoxy(42, 17);
                                                    setColor(2);
                                                    printf("[Workout Coach / Zumba Coach / Yoga Coach]");
                                                    gotoxy(42, 18);
                                                    setColor(6);
                                                    printf("Type of coach: ");
                                                    char type[50];
                                                    fflush(stdin);
                                                    gotoxy(57, 18);
                                                    setColor(15);
                                                    fgets(type, sizeof(type), stdin);
                                                    type[strcspn(type, "\n")] = 0; // Remove newline character

                                                    gotoxy(42, 20);
                                                    setColor(2);
                                                    printf("[N/A for Zumba and Yoga Coaches]");
                                                    gotoxy(42, 21);
                                                    setColor(6);
                                                    printf("Workout Specialty: ");
                                                    char specialty[50];
                                                    fflush(stdin);
                                                    gotoxy(61, 21);
                                                    setColor(15);
                                                    fgets(specialty, sizeof(specialty), stdin);
                                                    specialty[strcspn(specialty, "\n")] = 0;

                                                    gotoxy(42, 23);
                                                    setColor(6);
                                                    printf("Phone Number (N/A if None): ");
                                                    char phone[50];
                                                    fflush(stdin);
                                                    gotoxy(71, 23);
                                                    setColor(15);
                                                    fgets(phone, sizeof(phone), stdin);
                                                    phone[strcspn(phone, "\n")] = 0;

                                                    gotoxy(42, 25);
                                                    setColor(6);
                                                    printf("Gmail Adress(N/A if None): ");
                                                    char gmail[50];
                                                    fflush(stdin);
                                                    gotoxy(70, 25);
                                                    setColor(15);
                                                    fgets(gmail, sizeof(gmail), stdin);
                                                    gmail[strcspn(gmail, "\n")] = 0;

                                                    // Input for Experience and Years
                                                    char experience[100][100]; // Array to store multiple experiences
                                                    char duration[100][10];       // Array to store multiple years
                                                    int count = 0;
                                                    char choice;

                                                    do {
                                                        cls(15);
                                                        setColor(3);
                                                        boxUI(40, 21);
                                                        gotoxy(52, 8);
                                                        setColor(7);
                                                        printf("- ADD EXPERIENCE -");

                                                        // Input for Experience
                                                        gotoxy(42, 10 + (count * 2));
                                                        setColor(6);
                                                        printf("Experience:");
                                                        fflush(stdin);
                                                        gotoxy(55, 10 + (count * 2));
                                                        setColor(15);
                                                        fgets(experience[count], sizeof(experience[count]), stdin);
                                                        experience[count][strcspn(experience[count], "\n")] = 0;

                                                        // Input for Years
                                                        gotoxy(42, 12 + (count * 2));
                                                        setColor(6);
                                                        printf("Duration:");
                                                        fflush(stdin);
                                                        gotoxy(52, 12 + (count * 2));
                                                        setColor(15);
                                                        fgets(duration[count], sizeof(duration[count]), stdin);
                                                        duration[count][strcspn(duration[count], "\n")] = 0;

                                                        count++;

                                                        // Option to Add More or Done
                                                        gotoxy(42, 13 + (count * 2));
                                                        setColor(6);
                                                        printf("[1] Add Experience");
                                                        gotoxy(42, 15 + (count * 2));
                                                        printf("[0] Done");

                                                        choice = getch();
                                                        if (choice == '0') break;

                                                    } while (1);

                                                    // Writing the Profile Summary to profile_summary.txt
                                                    FILE *file = fopen("profile1_summary.txt", "w");
                                                    if (file == NULL) {
                                                        printf("Error: Unable to open profile1_summary.txt for writing!");
                                                        getch();
                                                        break;
                                                    }
                                                    fprintf(file, "Name: %s\n", name);
                                                    fprintf(file, "Age: %s\n", age);
                                                    fprintf(file, "Birthdate: %s\n", birthdate);
                                                    fprintf(file, "Type of Coach: %s\n", type);
                                                    fprintf(file, "Workout Specialty: %s\n", specialty);
                                                    fprintf(file, "Phone Number: %s\n", phone);
                                                    fprintf(file, "Gmail Adress: %s\n", gmail);

                                                    for (int i = 0; i < count; i++) {
                                                        fprintf(file, "Experience %d: %s\n", i + 1, experience[i]);
                                                        fprintf(file, "Duration %d: %s\n", i + 1, duration[i]);
                                                    }

                                                    fclose(file);

                                                    // Confirmation Message
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(40, 20);
                                                    gotoxy(52, 8);
                                                    setColor(7);
                                                    printf("- PROFILE SAVED -");
                                                    gotoxy(42, 11);
                                                    setColor(6);
                                                    printf("Profile saved successfully!");
                                                    getch();
                                                }
                                                break;
                                                case '3':
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42, 12);
                                                    gotoxy(48, 11);
                                                    setColor(15);
                                                    printf("Going back...");
                                                    waitSec(1);
                                                    return 0;

                                                default:
                                                    printf("Invalid option. Try again.");
                                                }
                                                break;

                                            case '2': // SCHEDULE
                                            {
                                                int schedMenu;
                                                cls(15);
                                                setColor(3);
                                                boxUI(40, 12);
                                                gotoxy(52, 8);
                                                setColor(7);
                                                printf("- EDIT SCHEDULE -");

                                                gotoxy(46, 10);
                                                setColor(6);
                                                printf("SHOW SCHEDULE");
                                                setColor(15);
                                                gotoxy(42, 10);
                                                printf("[1]");

                                                gotoxy(46, 12);
                                                setColor(6);
                                                printf("ADD SCHEDULE");
                                                setColor(15);
                                                gotoxy(42, 12);
                                                printf("[2]");

                                                gotoxy(46, 14);
                                                setColor(6);
                                                printf("REMOVE SCHEDULE");
                                                setColor(15);
                                                gotoxy(42, 14);
                                                printf("[3]");

                                                gotoxy(46, 16);
                                                setColor(6);
                                                printf("BACK");
                                                setColor(15);
                                                gotoxy(42, 16);
                                                printf("[4]");

                                                schedMenu = getch(); // Capture user input for schedMenu

                                                switch (schedMenu) {
                                                case '1': // Show Schedule
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(40, 21);
                                                    gotoxy(47, 8);
                                                    setColor(7);
                                                    printf("- Y O U R  S C H E D U L E -");

                                                    setColor(6);
                                                    FILE *scheduleFile = fopen("schedule1_summary.txt", "r");
                                                    if (scheduleFile != NULL) {
                                                        char line[250];
                                                        int currentY = 10;
                                                        while (fgets(line, sizeof(line), scheduleFile)) {
                                                            gotoxy(42, currentY);
                                                            printf("%s", line);
                                                            currentY++;
                                                        }
                                                        fclose(scheduleFile);
                                                    } else {
                                                        gotoxy(50, 11);
                                                        printf("schedule1_summary.txt not found.");
                                                    }
                                                    getch();
                                                    break;

                                                case '2': // Add Schedule
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(40, 21);
                                                    gotoxy(52, 8);
                                                    setColor(7);
                                                    printf("- ADD SCHEDULE -");

                                                    char date[100][20]; // Date array
                                                    char time[100][10]; // Time array
                                                    int count = 0;      // Counter for schedules
                                                    char choice;

                                                    do {
                                                        cls(15);
                                                        setColor(3);
                                                        boxUI(40, 21);
                                                        gotoxy(52, 8);
                                                        setColor(7);
                                                        printf("- ADD SCHEDULE -");

                                                        // Print all previously entered schedules
                                                        for (int i = 0; i < count; i++) {
                                                            gotoxy(42, 10 + (i * 4));
                                                            setColor(6);
                                                            printf("Date: %s", date[i]); // Removed numbering
                                                            gotoxy(42, 12 + (i * 4));
                                                            printf("Time: %s", time[i]); // Removed numbering
                                                        }

                                                        // Input for a new schedule
                                                        gotoxy(42, 10 + (count * 4));
                                                        setColor(6);
                                                        printf("Date:");
                                                        fflush(stdin);
                                                        gotoxy(55, 10 + (count * 4));
                                                        setColor(15);
                                                        fgets(date[count], sizeof(date[count]), stdin);
                                                        date[count][strcspn(date[count], "\n")] = 0;

                                                        gotoxy(42, 12 + (count * 4));
                                                        setColor(6);
                                                        printf("Time:");
                                                        fflush(stdin);
                                                        gotoxy(55, 12 + (count * 4));
                                                        setColor(15);
                                                        fgets(time[count], sizeof(time[count]), stdin);
                                                        time[count][strcspn(time[count], "\n")] = 0;

                                                        count++;

                                                        gotoxy(42, 14 + (count * 4));
                                                        setColor(6);
                                                        printf("[1] Add Another");
                                                        gotoxy(42, 16 + (count * 4));
                                                        printf("[2] Done");

                                                        choice = getch();
                                                        if (choice == '2')
                                                            break;

                                                    } while (1);

                                                    // Writing the schedule to schedule_summary.txt
                                                    FILE *file = fopen("schedule1_summary.txt", "a"); // Open in append mode
                                                    if (file == NULL) {
                                                        cls(15);
                                                        setColor(4);
                                                        printf("Error: Unable to open schedule1_summary.txt for writing!");
                                                        getch();
                                                        break;
                                                    }

                                                    for (int i = 0; i < count; i++) {
                                                        fprintf(file, "Date: %s\n", date[i]); // Removed numbering
                                                        fprintf(file, "Time: %s\n", time[i]); // Removed numbering
                                                    }

                                                    fclose(file);

                                                    // Confirmation Message
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(40, 20);
                                                    gotoxy(52, 8);
                                                    setColor(7);
                                                    printf("- SCHEDULE SAVED -");
                                                    gotoxy(42, 11);
                                                    setColor(6);
                                                    printf("Schedule saved successfully!");
                                                    getch();
                                                    break;

                                                case '3': // Remove Schedule
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(40, 21);
                                                    gotoxy(52, 8);
                                                    setColor(7);
                                                    printf("- REMOVE SCHEDULE -");

                                                    char removeDate[100][20];
                                                    char removeTime[100][10];
                                                    int removeCount = 0;
                                                    char removeChoice;

                                                    do {
                                                        cls(15);
                                                        setColor(3);
                                                        boxUI(40, 28);
                                                        gotoxy(52, 1);
                                                        setColor(7);
                                                        printf("- REMOVE SCHEDULE -");

                                                        // Display previously entered schedules to remove
                                                        for (int i = 0; i < removeCount; i++) {
                                                            gotoxy(42, 10 + (i * 4));
                                                            setColor(6);
                                                            printf("Date to Remove %d: %s", i + 1, removeDate[i]);
                                                            gotoxy(42, 12 + (i * 4));
                                                            printf("Time to Remove %d: %s", i + 1, removeTime[i]);
                                                        }

                                                        // Input for a new schedule to remove
                                                        gotoxy(42, 3);
                                                        setColor(6);
                                                        printf("Date:");
                                                        fflush(stdin);
                                                        gotoxy(52, 3);
                                                        setColor(15);
                                                        fgets(removeDate[removeCount], sizeof(removeDate[removeCount]), stdin);
                                                        removeDate[removeCount][strcspn(removeDate[removeCount], "\n")] = 0; // Remove newline

                                                        gotoxy(42, 4);
                                                        setColor(6);
                                                        printf("Time:");
                                                        fflush(stdin);
                                                        gotoxy(52, 4);
                                                        setColor(15);
                                                        fgets(removeTime[removeCount], sizeof(removeTime[removeCount]), stdin);
                                                        removeTime[removeCount][strcspn(removeTime[removeCount], "\n")] = 0; // Remove newline

                                                        removeCount++; // Increment count

                                                        // Prompt for further action
                                                        gotoxy(46, 6);
                                                        setColor(6);
                                                        printf("Remove Another");
                                                        gotoxy(42, 6);
                                                        setColor(6);
                                                        printf("[1]");

                                                        gotoxy(46, 7);
                                                        setColor(6);
                                                        printf("Done");
                                                        gotoxy(42, 7);
                                                        setColor(6);
                                                        printf("[2]");

                                                        removeChoice = getch();
                                                        if (removeChoice == '2') break;

                                                    } while (1);

                                                    // Reading and updating the schedule file
                                                    FILE *fileRead = fopen("schedule1_summary.txt", "r");
                                                    if (fileRead == NULL) {
                                                        cls(15);
                                                        setColor(4);
                                                        printf("Error: Unable to open schedule1_summary.txt for reading!");
                                                        getch();
                                                        break;
                                                    }

                                                    FILE *tempFile = fopen("temp_schedule.txt", "w");
                                                    if (tempFile == NULL) {
                                                        fclose(fileRead);
                                                        cls(15);
                                                        setColor(4);
                                                        printf("Error: Unable to create temp_schedule.txt!");
                                                        getch();
                                                        break;
                                                    }

                                                    char buffer[256];
                                                    while (fgets(buffer, sizeof(buffer), fileRead)) {
                                                        int shouldRemove = 0;

                                                        // Check if the current line matches any of the schedules to remove
                                                        for (int i = 0; i < removeCount; i++) {
                                                            if (strstr(buffer, removeDate[i]) && strstr(buffer, removeTime[i])) {
                                                                shouldRemove = 1;
                                                                break;
                                                            }
                                                        }

                                                        // Write the line to the temporary file if it should not be removed
                                                        if (!shouldRemove) {
                                                            fprintf(tempFile, "%s", buffer);
                                                        }
                                                    }

                                                    fclose(fileRead);
                                                    fclose(tempFile);

                                                    // Replace the original file with the updated file
                                                    remove("schedule1_summary.txt");
                                                    rename("temp_schedule.txt", "schedule1_summary.txt");

                                                    // Confirmation Message
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(40, 20);
                                                    gotoxy(52, 8);
                                                    setColor(7);
                                                    printf("- SCHEDULE UPDATED -");
                                                    gotoxy(42, 11);
                                                    setColor(6);
                                                    printf("Schedule updated successfully!");
                                                    getch();
                                                    break;

                                                case '4': // Exit to Main Menu
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42, 12);
                                                    gotoxy(48, 11);
                                                    setColor(15);
                                                    printf("Returning to Main Menu...");
                                                    waitSec(1); // Assuming waitSec is defined elsewhere
                                                    break;

                                                default: // Invalid Option
                                                    cls(15);
                                                    setColor(4);
                                                    boxUI(40, 12);
                                                    gotoxy(48, 11);
                                                    setColor(15);
                                                    printf("Invalid option. Try again.");
                                                    getch();
                                                    break;
                                                }
                                            }
                                            break;

                                                case '3': // CLIENT
                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(55, 21);
                                                    gotoxy(59, 8);
                                                    setColor(7);
                                                    printf("- LIST OF CLIENTS-");

                                                    setColor(6);
                                                    FILE *clientFile = fopen("ENHANCEMENT.txt", "r");
                                                    if (clientFile != NULL) {
                                                        char line[250];
                                                        int currentY = 10;
                                                        while (fgets(line, sizeof(line), clientFile)) {
                                                            gotoxy(42, currentY);
                                                            printf("%s", line);
                                                            currentY++;
                                                        }
                                                        fclose(clientFile);
                                                    } else {
                                                        gotoxy(50, 11);
                                                        printf("ENHANCEMENT.txt not found.");
                                                    }
                                                    getch();
                                                    break;

                                            case '4': // Exit to Main Menu
                                                cls(15);
                                                setColor(3);
                                                boxUI(42, 12);
                                                gotoxy(55, 12);
                                                setColor(15);
                                                printf("Logging out...");
                                                waitSec(1);
                                                break;

                                            default:
                                                printf("Invalid option. Try again.");
                                            }
                                        } while (coachMain != '4'); // Correct loop termination condition
                                        break;
                                    }

//--------------------------------- USER -----------------------------------------
                                    else if(strcmp(userACCESS, "user") == 0)
                                    {
                                        //declaration - FOR USER OPTION  CHOICE
                                        int clientCHOICE;

                                        do{
                                            cursorStatus(0);

                                            //UPPER - HEADER
                                            cls(15);
                                            setColor(3);
                                            boxUI(42,12);

                                            gotoxy(58,8);
                                            setColor(15);
                                            printf("- USER -");
                                            //LOWER BODY - NAVS
                                            gotoxy(45,10);
                                            setColor(6);
                                            printf("MEMBERSHIP");
                                            gotoxy(42,10);
                                            setColor(15);
                                            printf("[1]");

                                            gotoxy(71,10);
                                            setColor(6);
                                            printf("PROGRAMS");
                                            gotoxy(68,10);
                                            setColor(15);
                                            printf("[2]");

                                            gotoxy(45,12);
                                            setColor(6);
                                            printf("WALK-IN");
                                            gotoxy(42,12);
                                            setColor(15);
                                            printf("[3]");

                                            gotoxy(71,12);
                                            setColor(6);
                                            printf("EXIT");

                                            gotoxy(68,12);
                                            setColor(15);
                                            printf("[0]");
                                            // Get user choice
                                            clientCHOICE = getch();

                                            // Else if - NAVS
                                            switch (clientCHOICE)
                                            {
                                                case '1':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    gotoxy(55,8);
                                                    setColor(15);
                                                    printf("- MEMBERSHIP -");

                                                    gotoxy(45,10);
                                                    setColor(6);
                                                    printf("BE A MEMBER");

                                                    gotoxy(42,10);
                                                    setColor(15);
                                                    printf("[1]");

                                                    gotoxy(45,12);
                                                    setColor(6);
                                                    printf("ALREADY A MEMBER");

                                                    gotoxy(42,12);
                                                    setColor(15);
                                                    printf("[2]");

                                                    gotoxy(45,14);
                                                    setColor(6);
                                                    printf("EXIT");

                                                    gotoxy(42,14);
                                                    setColor(15);
                                                    printf("[0]");

                                                    clientCHOICE = getch();

                                            switch (clientCHOICE)
                                            {
                                                case '1':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    gotoxy(55,8);
                                                    setColor(15);
                                                    printf("- BE A MEMBER -");

                                                    getch();
                                                    break;

                                                case '2':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    gotoxy(52,8);
                                                    setColor(15);
                                                    printf("- ALREADY A MEMBER -");

                                                    gotoxy(46,10);
                                                    setColor(6);
                                                    printf("ID NUMBER:");
                                                    long long int memberID;
                                                    scanf("%lld", memberID);

                                                    FILE *goldfile = fopen("GOLD.txt", "r");
                                                    FILE *silverfile = fopen("SILVER.txt", "r");

                                                    if (goldfile == NULL)
                                                        {
                                                            printf("Error: Could not open GOLD.txt\n");
                                                            return 0;
                                                        }

                                                    if (silverfile == NULL)
                                                        {
                                                            printf("Error: Could not open SILVER.txt\n");
                                                            return 0;
                                                        }

                                                    long long int idNUM;
                                                    int memberGRANTED = 0;
                                                    char MEMBERSHIPname[50], MEMusername[50], MEMpassword[50], dateTime[50];
                                                    char CATEGORY[50], equipments[50];
                                                    char dateSTARTED[100];


                                                    while(fscanf(goldfile,"%lld - %s - %s - %s - %s", &idNUM, &MEMBERSHIPname, &MEMusername, &MEMpassword, &dateTime) == 5)
                                                    {
                                                        if (memberID == idNUM)
                                                        {
                                                            strcpy(CATEGORY, "GOLD");
                                                            strcpy(dateSTARTED, dateTime);
                                                            strcpy(equipments, "Access to all equipments.");
                                                            memberGRANTED = 1;
                                                            break;
                                                        }
                                                    }

                                                    fclose(goldfile);

                                                    while(fscanf(silverfile,"%lld - %s - %s - %s - %s", &idNUM, &MEMBERSHIPname, &MEMusername, &MEMpassword, &dateTime) == 5)
                                                    {
                                                        if (memberID == idNUM)
                                                        {
                                                            strcpy(CATEGORY, "SILVER");
                                                            strcpy(dateSTARTED, dateTime);

                                                            FILE *file = fopen("SILVER", "r");
                                                            if (file == NULL) {
                                                                printf("Error: Could not open %s\n", file);
                                                                return 0;
                                                            }

                                                            char line[256];
                                                            printf("EQUIPMENTS - PRICES");

                                                            while (fgets(line, sizeof(line), file)) {
                                                                printf("%s", line);
                                                            }

                                                            fclose(file);
                                                            memberGRANTED = 1;
                                                            break;
                                                        }
                                                    }

                                                    fclose(silverfile);

                                                    if (memberGRANTED)
                                                    {
                                                        int memberChoice;
                                                        do{
                                                            cls(15);
                                                            setColor(3);
                                                            boxUI(42,12);

                                                            gotoxy(46,10);
                                                            setColor(6);
                                                            printf("TYPE OF MEMBERSHIP:");
                                                            gotoxy(65,10);
                                                            setColor(6);
                                                            printf("%s", CATEGORY);

                                                            gotoxy(46,12);
                                                            setColor(6);
                                                            printf("DATE STARTED:");
                                                            gotoxy(65,12);
                                                            setColor(6);
                                                            printf("%s", dateSTARTED);



                                                        }while(memberChoice != 0);
                                                    }



                                                    getch();
                                                    break;

                                                case '0':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    //display
                                                    gotoxy(49,11);
                                                    setColor(15);
                                                    printf("E X I T I N G  P R O G R A M");

                                                    waitSec(1);

                                                    //loading
                                                    gotoxy(48,13);
                                                    setColor(15);
                                                    loadbar(27,30);

                                                    waitSec(1);

                                                    //exit
                                                    cls(15);
                                                    gotoxy(0,0);
                                                    return 0;
                                                    break;

                                                    getche();
                                                    break;

                                                default:
                                                    printf("Invalid choice.\n");
                                                    break;
                                            }
                                            break;


                                                case '2':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    gotoxy(56,8);
                                                    setColor(15);
                                                    printf("- PROGRAMS -");

                                                    gotoxy(45,10);
                                                    setColor(6);
                                                    printf("JOIN PROGRAM");

                                                    gotoxy(42,10);
                                                    setColor(15);
                                                    printf("[1]");

                                                    gotoxy(45,12);
                                                    setColor(6);
                                                    printf("ALREADY HAVE A PROGRAM");

                                                    gotoxy(42,12);
                                                    setColor(15);
                                                    printf("[2]");

                                                    gotoxy(45,14);
                                                    setColor(6);
                                                    printf("EXIT");

                                                    gotoxy(42,14);
                                                    setColor(15);
                                                    printf("[0]");

                                                    clientCHOICE = getch();

                                            switch (clientCHOICE)
                                            {
                                                case '1':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    gotoxy(54,8);
                                                    setColor(15);
                                                    printf("- JOIN PROGRAM -");

                                                    getch();
                                                    break;

                                                case '2':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    gotoxy(49,8);
                                                    setColor(15);
                                                    printf("- ALREADY HAVE A PROGRAM -");

                                                    getch();
                                                    break;

                                                case '0':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    //display
                                                    gotoxy(49,11);
                                                    setColor(15);
                                                    printf("E X I T I N G  P R O G R A M");

                                                    waitSec(1);

                                                    //loading
                                                    gotoxy(48,13);
                                                    setColor(15);
                                                    loadbar(27,30);

                                                    waitSec(1);

                                                    //exit
                                                    cls(15);
                                                    gotoxy(0,0);
                                                    return 0;
                                                    break;

                                                    getche();
                                                    break;

                                                default:
                                                    printf("Invalid choice.\n");
                                                    break;
                                            }
                                            break;



                                                case '3':

                                                    cls(15);
                                                    setColor(3);
                                                    boxUI(42,12);

                                                    gotoxy(56,8);
                                                    setColor(15);
                                                    printf("- WALK-IN -");

                                                    gotoxy(42,10);
                                                    setColor(6);
                                                    printf("Time:");

                                                    gotoxy(42,12);
                                                    setColor(6);
                                                    printf("Equipments:");

                                                    gotoxy(42,16);
                                                    setColor(6);
                                                    printf("Add one:");

                                                    getche();
                                                    break;

                                                case '0':
                                                    break;

                                                default:
                                                    gotoxy(40,20);
                                                    setColor(4);
                                                    printf("Incorrect option. Please choose a valid one.");

                                                    getche();
                                                    break;
                                            }
                                        }while(clientCHOICE != '0');
                                    }
                                }

                                else
                                {
                                    //box
                                    cls(15);
                                    setColor(3);
                                    boxUI(42, 12);

                                    // display
                                    gotoxy(50, 11);
                                    setColor(4);
                                    printf("L O G I N  F A I L E D");

                                    waitSec(1);
                                }
                            }//while
                        }

                    }while(letPASS != 1);

                }//end block
                break;

            //SIGNUP
            case '+':
                {//block
                    //escape loop
                    int granted = 0;
                    int letPASS = 0;

                    do{
                        //for do below
                        int confirmation = 0;
                        do{
                            //box
                            cls(15);
                            setColor(3);
                            boxUI(42,12);

                            //display
                            gotoxy(56,8);
                            setColor(15);
                            printf("S I G N  U P");

                            //confirmation
                            gotoxy(52,16);
                            setColor(6);
                            printf("CONTINUE");
                            gotoxy(49,16);
                            setColor(15);
                            printf("[1]");

                            gotoxy(69,16);
                            setColor(6);
                            printf("BACK");
                            gotoxy(66,16);
                            setColor(15);
                            printf("[0]");

                            //display
                            gotoxy(48,11);
                            setColor(8);
                            printf("USERNAME: ");

                            gotoxy(48,13);
                            setColor(8);
                            printf("PASSWORD: ");

                            confirmation = getch();

                            switch(confirmation)
                            {
                                case '1':
                                    confirmation = 1;

                                    //confirmation
                                    gotoxy(52,16);
                                    setColor(6);
                                    printf("        ");
                                    gotoxy(49,16);
                                    setColor(15);
                                    printf("   ");

                                    gotoxy(69,16);
                                    setColor(6);
                                    printf("    ");
                                    gotoxy(66,16);
                                    setColor(15);
                                    printf("   ");
                                    break;

                                case '0':
                                    confirmation = 0;

                                    cls(15);
                                    break;

                                default:
                                    gotoxy(40,20);
                                    setColor(4);
                                    printf("Incorrect option. Please choose a valid one.");

                                    getche();

                                    confirmation = 3;
                                    break;
                            }

                        }while(confirmation == 3);

                        if (confirmation == 0 )
                        {
                            letPASS = 1;
                        }

                        else
                        {
                            //display
                            gotoxy(48,11);
                            setColor(15);
                            printf("USERNAME: ");

                            gotoxy(48,13);
                            setColor(15);
                            printf("PASSWORD: ");

                            //show cursor
                            cursorStatus(1);

                            //USER INPUT STORE
                            char userGET[50], passGET[50];
                            //get user input
                            gotoxy(58,11);
                            setColor(15);
                            scanf("%s", userGET);

                            gotoxy(58,13);
                            setColor(15);

                            //hide password
                            char ch;
                            int i = 0;
                            while (1)
                            {//while PASSWORD
                                ch = _getch();
                                if (ch == 13) { //13 Enter key
                                    passGET[i] = '\0'; // ('\0') null-terminate the string
                                    break;
                                } else if (ch == 8) { //8 Backspace key
                                    if (i > 0) {
                                        i--;
                                        printf("\b \b"); // works as back space
                                    }
                                } else {
                                    passGET[i] = ch;
                                    i++;
                                    printf("*");//replace input with asterisk
                                }
                            }//while PASSWORD

                            // IDENTIFY USER
                            char userROLE[15] = "";
                            int ACCESSTYPE = 0;
                            int userROLEchoice;

                            do {
                                cursorStatus(0);

                                // Clear screen and draw box
                                cls(15);
                                setColor(3);
                                boxUI(42, 12);

                                // Display sign-up header
                                gotoxy(56, 8);
                                setColor(15);
                                printf("S I G N  U P");

                                // Display options
                                gotoxy(52, 12);
                                setColor(6);
                                printf("USER");
                                gotoxy(49, 12);
                                setColor(15);
                                printf("[1]");

                                gotoxy(69, 12);
                                setColor(6);
                                printf("APPLY");
                                gotoxy(66, 12);
                                setColor(15);
                                printf("[2]");

                                userROLEchoice = getch();

                                switch (userROLEchoice) {
                                    case '1':
                                        strcpy(userROLE, "user");
                                        ACCESSTYPE = 0;
                                        break;

                                    case '2': {
                                        ACCESSTYPE = 1;
                                        cursorStatus(0);

                                        int userROLEchoice2;

                                        do {
                                            // Clear screen and draw box
                                            cls(15);
                                            setColor(3);
                                            boxUI(42, 12);

                                            // Display sign-up header
                                            gotoxy(56, 8);
                                            setColor(15);
                                            printf("S I G N  U P");

                                            // Display options
                                            gotoxy(52, 10);
                                            setColor(6);
                                            printf("STAFF");
                                            gotoxy(49, 10);
                                            setColor(15);
                                            printf("[1]");

                                            gotoxy(69, 10);
                                            setColor(6);
                                            printf("COACH");
                                            gotoxy(66, 10);
                                            setColor(15);
                                            printf("[2]");

                                            gotoxy(52, 12);
                                            setColor(6);
                                            printf("CASHIER");
                                            gotoxy(49, 12);
                                            setColor(15);
                                            printf("[3]");

                                            gotoxy(69, 12);
                                            setColor(6);
                                            printf("CANCEL");
                                            gotoxy(66, 12);
                                            setColor(15);
                                            printf("[0]");

                                            userROLEchoice2 = getch();

                                            if (userROLEchoice2 == '1') {
                                                strcpy(userROLE, "staff");
                                                break;
                                            } else if (userROLEchoice2 == '2') {
                                                strcpy(userROLE, "coach");
                                                break;
                                            } else if (userROLEchoice2 == '3') {
                                                strcpy(userROLE, "cashier");
                                                break;
                                            } else if (userROLEchoice2 == '0') {
                                                userROLEchoice = '0';
                                            }

                                        } while (userROLEchoice2 != '0' && userROLEchoice2 != '1' && userROLEchoice2 != '2' && userROLEchoice2 != '3');

                                        break;
                                    }

                                    default:
                                        userROLEchoice = '0';
                                        break;
                                }

                            } while (userROLEchoice == '0');

                            //hide cursor
                            cursorStatus(0);

                            if(ACCESSTYPE == 1)
                            {
                                FILE *file = fopen("accREQ.txt","a+");

                                //get date
                                time_t t = time(NULL);
                                struct tm tm = *localtime(&t);

                                //write to file
                                fprintf(file, "\n(%s) (%s) (%s) (%d-%d-%d)",userGET ,passGET ,userROLE, tm.tm_mon + 1, tm.tm_mday, tm.tm_year + 1900);
                                fclose(file);

                                //box
                                cls(15);
                                setColor(3);
                                boxUI(42,12);

                                //display
                                gotoxy(48,11);
                                setColor(15);
                                printf("W A I T  F O R  A P P R O V A L");

                                //wait
                                waitSec(1);
                            }

                            else if(ACCESSTYPE == 0)
                            {
                                FILE *file = fopen("Accounts.txt","a+");

                                //get date
                                time_t t = time(NULL);
                                struct tm tm = *localtime(&t);

                                //write to file
                                fprintf(file, "\n(%s) (%s) (%s) (%d-%d-%d)",userGET ,passGET ,userROLE, tm.tm_mon + 1, tm.tm_mday, tm.tm_year + 1900);
                                fclose(file);

                                //box
                                cls(15);
                                setColor(3);
                                boxUI(42,12);

                                //display
                                gotoxy(48,11);
                                setColor(15);
                                printf("A C C O U N T  C R E A T E D");

                                //wait
                                waitSec(1);

                            }
                        }

                    }while(letPASS != 1);

                }//end block
                break;

            default:
                gotoxy(40,20);
                setColor(4);
                printf("Incorrect option. Please choose a valid one.");

                getche();
                break;
        }
    }while(clientCHOICE != '0');

    return 0;
}
//END OF MAIN - BELOW MUST BE FUNCTION DESCRIPTIONS! -

// - - - -  - - - -  - - - -  - - - -  - - - - CONTENTS  - - - -   - - - -   - - - -   - - - -  //


//  - - - -   - - - - THE CODE BELOW IS FOR SYSTEM MAIN FUNCTIONS (DESCRIPTIONS)  - - - -   - - - - //
//BOX
int boxUI(int width, int height)
{
    //decelerations
    char topLeft = 201, topRight = 187, bottomLeft = 200, bottomRight = 188;
    char horizontal = 205, vertical = 186;

    //newlines for spacing TOP
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t");

    // Top border
    printf("%c", topLeft);
    for (int i = 0; i < width; i++)
    {
        printf("%c", horizontal);
    }
    printf("%c\n", topRight);

    // Middle part
    for (int i = 0; i < height; i++)
    {
        printf("\t\t\t\t\t%c", vertical);
        for (int j = 0; j < width; j++)
        {
            printf(" ");
        }
        printf("%c\n", vertical);
    }

    // Bottom border
    printf("\t\t\t\t\t%c", bottomLeft);
    for (int i = 0; i < width; i++)
    {
        printf("%c", horizontal);
    }
    printf("%c\n", bottomRight);
}

//BOX MAIN LOADING
int boxUIspecial(int width, int height)
{
    //decelerations
    char topLeft = 201, topRight = 187, bottomLeft = 200, bottomRight = 188;
    char horizontal = 205, vertical = 186;

    //newlines for spacing TOP
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t");

    // Top border
    printf("%c", topLeft);
    for (int i = 0; i < width; i++)
    {
        setColor(3);
        printf("%c", horizontal);
        setColor(15);
        waitMS(1);
    }
    printf("%c\n", topRight);

    // Middle part
    for (int i = 0; i < height; i++)
    {
        setColor(3);
        printf("\t\t\t\t\t%c", vertical);
        for (int j = 0; j < width; j++)
        {
            printf(" ");
        }
        printf("%c\n", vertical);
        setColor(15);
        waitMS(1);
    }

    // Bottom border
    printf("\t\t\t\t\t%c", bottomLeft);
    for (int i = 0; i < width; i++)
    {
        setColor(3);
        printf("%c", horizontal);
        setColor(15);
        waitMS(1);
    }
    printf("%c\n", bottomRight);
}

//NAVIGATE CURSUR
int gotoxy(int x, int y)
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//clear screen
int cls(int resColor)
{
    system("cls");
    setColor(resColor);
}

//Colourize line text
int setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int setColorv2(int foreground, int background)
{
    int color = foreground + (background << 4);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//loading bar
int loadbar(int duration_ms, int limit)
{
    duration_ms = duration_ms * 2;

    for(int i = 0; i < limit; i++)
    {
        printf("%c", 254); fflush(stdout);
        // Sleep in milliseconds
        Sleep(duration_ms);
    }
}

//show or hide cursor
bool cursorStatus(bool status)
{
    CONSOLE_CURSOR_INFO cursorInfo;
    // 0 is false and 1 is true
    cursorInfo.bVisible = status;
    // accept 2 values (0 and 1)
    cursorInfo.dwSize = 1;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

// WAIT
int waitSec(int seconds)
{
    //sleep milliseconds converted to seconds
    Sleep(seconds * 1000);
}
int waitMS(int seconds)
{
    // Sleep takes milliseconds
    Sleep(seconds);
}


// - - - -  - - - -  - - - -  - - - - CASHIER FUNCTIONS - - - -  - - - -  - - - -  - - - //

// Function to get the current date and time as a string
char* CurrentDateTime()
{
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    static char dateTime[100];
    strftime(dateTime, sizeof(dateTime), "%m-%d-%Y %H:%M:%S", t);

    return dateTime;
}

//Function to generate membership ID number
void initializeRandom()
{
    srand(time(0));  // Seed the random number generator with the current time
}

// Function to generate a unique ID number
long long int MEMidNumber(int generatedIDs[], int *numGenerated)
{
    long long int lower = 1000000000;
    long long int upper = 9999999999;
    int newID;
    bool unique;

    do {
        newID = (rand() % (upper - lower + 1)) + lower;
        unique = true;

        // Check if the ID has already been generated
        for (int i = 0; i < *numGenerated; i++) {
            if (generatedIDs[i] == newID) {
                unique = false;
                break;
            }
        }
    } while (!unique);

    // Store the new unique ID
    generatedIDs[*numGenerated] = newID;
    (*numGenerated)++;

    return newID;
}

long long int ENHANCEMENTidNumber(int ENHAgeneratedIDs[], int *ENHAnumGenerated)
{
    long long int lower = 10000000;
    long long int upper = 99999999;
    int ENHAnewID;
    bool ENHAunique;

    do {
        ENHAnewID = (rand() % (upper - lower + 1)) + lower;
        ENHAunique = true;

        // Check if the ID has already been generated
        for (int i = 0; i < *ENHAnumGenerated; i++) {
            if (ENHAgeneratedIDs[i] == ENHAnewID) {
                ENHAunique = false;
                break;
            }
        }
    } while (!ENHAunique);

    // Store the new unique ID
    ENHAgeneratedIDs[*ENHAnumGenerated] = ENHAnewID;
    (*ENHAnumGenerated)++;

    return ENHAnewID;
}


long long int YOGAidNumber(int YOGAgeneratedIDs[], int *YOGAnumGenerated)
{
    long long int lower = 1000000;
    long long int upper = 9999999;
    int YOGAnewID;
    bool YOGAunique;

    do {
        YOGAnewID = (rand() % (upper - lower + 1)) + lower;
        YOGAunique = true;

        // Check if the ID has already been generated
        for (int i = 0; i < *YOGAnumGenerated; i++) {
            if (YOGAgeneratedIDs[i] == YOGAnewID) {
                YOGAunique = false;
                break;
            }
        }
    } while (!YOGAunique);

    // Store the new unique ID
    YOGAgeneratedIDs[*YOGAnumGenerated] = YOGAnewID;
    (*YOGAnumGenerated)++;

    return YOGAnewID;
}


long int ZUMBAidNumber(int ZUMBAgeneratedIDs[], int *ZUMBAnumGenerated)
{
    int lower = 100000;
    int upper = 999999;
    int newID;
    bool unique;

    do {
        newID = (rand() % (upper - lower + 1)) + lower;
        unique = true;

        // Check if the ID has already been generated
        for (int i = 0; i < *ZUMBAnumGenerated; i++) {
            if (ZUMBAgeneratedIDs[i] == newID) {
                unique = false;
                break;
            }
        }
    } while (!unique);

    // Store the new unique ID
    ZUMBAgeneratedIDs[*ZUMBAnumGenerated] = newID;
    (*ZUMBAnumGenerated)++;

    return newID;
}



// Function to handle file update
void updateMembershipFile(const char *filename, const char *memberName, int memberID)
{
    FILE *file = fopen(filename, "r");
        if (!file)
        {
            printf("Error opening %s.\n", filename);
            return;
        }

    // Read the entire file into memory
    char lines[1000][256]; // Assuming a maximum of 1000 lines, each up to 256 characters
    int lineCount = 0;
    while (fgets(lines[lineCount], sizeof(lines[0]), file))
        {
            lineCount++;
        }
    fclose(file);

    // Update the matching line
    int updated = 0;
    for (int i = 0; i < lineCount; i++)
    {
        long long int idNUM;
        char MEMBERSHIPname[50], MEMusername[50], MEMpassword[50], oldDateTime[50];
        if (sscanf(lines[i], "%lld - %49s - %49s - %49s - %49[^\n]", &idNUM, MEMBERSHIPname, MEMusername, MEMpassword, oldDateTime) == 5)
        {
            if (idNUM == memberID && strcmp(MEMBERSHIPname, memberName) == 0)
            {
                char updatedDateTime[50];
                strcpy(updatedDateTime, CurrentDateTime());
                sprintf(lines[i], "%lld - %s - %s - %s - %s\n", idNUM, MEMBERSHIPname, MEMusername, MEMpassword, updatedDateTime);
                updated = 1;
                break;
            }
        }
    }

    // Write the updated lines back to the file
    file = fopen(filename, "w");
    if (!file)
    {
        printf("Error opening %s for writing.\n", filename);
        return;
    }
    for (int i = 0; i < lineCount; i++)
    {
        fputs(lines[i], file);
    }


    if (updated)
        {
            setColor(10);
            gotoxy(52, 15);
            printf("Membership renewed successfully in %s!\n", filename);
        }
    else
        {
            setColor(12);
            gotoxy(52, 17);
            printf("No matching membership found in %s.\n", filename);
        }
}


void displayFile(const char *filename, const char *header, const char *format)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open %s\n", filename);
        return;
    }

    char line[256];
    printf("\n--- %s ---\n", header);
    printf(format);
    printf("\n------------------------------------------\n");

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

int isNewDay()
{
    FILE *dateFile = fopen("last_run_date.txt", "r");
    time_t now = time(NULL);
    struct tm *currentDate = localtime(&now);
    char lastDate[11]; // Format: YYYY-MM-DD

    if (dateFile)
    {
        fscanf(dateFile, "%10s", lastDate);
        fclose(dateFile);
    }
    else
    {
        lastDate[0] = '\0'; // No previous date recorded
    }

    char today[11];
    strftime(today, sizeof(today), "%Y-%m-%d", currentDate);

    // Compare dates
    if (strcmp(today, lastDate) != 0) {
        // Update last_run_date.txt with today's date
        dateFile = fopen("last_run_date.txt", "w");
        fprintf(dateFile, "%s", today);
        fclose(dateFile);
        return 1; // It's a new day
    }

    return 0; // Same day
}


void remove_line(const char *filename, int line_number) {
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");

    char buffer[256];
    int current_line = 1;

    while (fgets(buffer, sizeof(buffer), file)) {
        if (current_line != line_number) {
            fputs(buffer, temp);
        }
        current_line++;
    }

    fclose(file);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);
}
