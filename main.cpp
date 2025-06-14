#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Participant
{
    private:
//    char title[10];
//    char name[100];

    public:
    char title[10];
    char name[100];
    int score;
    int num_attempt;
    int mod1_attempted;

    
    void set_name(char name_input[100])
    {
        strcpy(name, name_input);
    }

    void set_title(char gender_input)
    {
        if (gender_input=='F')
        {
            strcpy(title,"Ms.");
        }

        if (gender_input=='M')
        {
            strcpy(title,"Mr.");
        }
    }

    string combine_name_with_title()
    {
        char title_name[120];
        strcpy(title_name, title);
        strcat(title_name, name);
        return title_name;
    }
};

class Module2
{
    private:
    int correct;
    char anslist[10];
    int sum;

    public:
    int wrong_counter;
    char answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9, answer10;
    char Ch, failed_attempt;
    string participant_name;
    
    void start_mod2(Participant &p)
    {
        failed_attempt = 0;
        participant_name = p.name;
        Q1();
    }

    void Q1()
    {
        wrong_counter = 0;
        correct=0;
        sum = 0;
        do
        {
            cout << "Question 1: " << endl;
            cout << "What's the meaning of 'O'?" << endl<<endl;
            cout << "\tA. Yes" << endl;
            cout << "\tB. Black" << endl;
            cout << "\tC. Want" << endl;
            cout << "\tD. Okay" << endl;
            cin >> answer1;
            answer1 = toupper (answer1);
    
            if (answer1 == 'A' || answer1 == 'C' || answer1 == 'D')
                {
                    cout << "Wrong" << endl;
                    anslist[0] = answer1;
                }
    
            else if (answer1 == 'B')
                {
                    cout << "Correct" << endl;
                    correct = correct + 10;
                    anslist[0] = answer1;
                    Q2();
                }
            
            else
            {
                wrong_counter++;
                cout << "Invalid. Please enter A - D only " << endl;
                if (wrong_counter == 3)
                {
                        cout << "You have attempted more than 3 times" << endl;
                        failed_attempt = failed_attempt + 1;
                        system("pause");
                        //don't do anything- let the loop exit
                }
            }
        } while (wrong_counter < 3); //exit when counter > 3
    }

     void Q2()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "Question 2: " << endl;
            cout << "What's the meaning of 'Pek'?" << endl;
            cout << "\tA. White" << endl;
            cout << "\tB. Don't want" << endl;
            cout << "\tC. Throw" << endl;
            cout << "\tD. Buy" << endl;
            cin >> answer2;
            answer2 = toupper (answer2);
            
            if (answer2 == 'B' || answer2 == 'C' || answer2 == 'D')
                {
                    cout << "Wrong" << endl;
                    anslist[1] = answer2;
                }
                
            else if (answer2 == 'A')
                {
                    cout << "Correct" << endl;
                    correct = correct + 10;
                    anslist[1] = answer2;
                    Q3();
                }
                
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        } while (wrong_counter < 3); //exit when counter > 3
    }
   
    void Q3()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "Question 3: " << endl;
            cout << "What's the meaning of 'Dhim'?" << endl;
            cout << "\tA. Why" << endl;
            cout << "\tB. Don't want" << endl;
            cout << "\tC. Throw" << endl;
            cout << "\tD. Buy" << endl;
            cin >> answer3;
            answer3 = toupper (answer3);
    
            if (answer3 == 'A' || answer3 == 'B' || answer3 == 'D')
            {
                cout << "Wrong" << endl;
                anslist[2] = answer3;
            }
    
            else if (answer3 == 'C')
            {
                cout << "Correct" << endl;
                correct = correct + 10;
                anslist[2] = answer3;
                Q4();
            }
                
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        }while (wrong_counter < 3); //exit when counter > 3
    }
    
    void Q4()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "Question 4: " << endl;
            cout << "What's the meaning of 'Khi'?" << endl;
            cout << "\tA. Yes" << endl;
            cout << "\tB. Eat" << endl;
            cout << "\tC. Raining" << endl;
            cout << "\tD. Go" << endl;
            cin >> answer4;
            answer4 = toupper (answer4);
    
            if (answer4 == 'A' || answer4 == 'B' || answer4 == 'C')
                {
                    cout << "Wrong" << endl;
                    anslist[3] = answer4;
                }
    
            else if (answer4 == 'D')
                {
                    cout << "Correct" << endl;
                    correct = correct + 10;
                    anslist[3] = answer4;
                    Q5();
                }
           
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        }while (wrong_counter < 3); //exit when counter > 3
    }
   
    void Q5()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "Question 5: " << endl;
            cout << "What's the meaning of 'Dueh'?" << endl;
            cout << "\tA. Cannot" << endl;
            cout << "\tB. Raining" << endl;
            cout << "\tC. Come" << endl;
            cout << "\tD. Buy" << endl;
            cin >> answer5;
            answer5 = toupper (answer5);

            if (answer5 == 'A' || answer5 == 'B' || answer5 == 'D')
            {
                cout << "Wrong" << endl;
                anslist[4] = answer5;
            }
    
            else if (answer5 == 'C')
            {
                cout << "Correct" << endl;
                correct = correct + 10;
                anslist[4] = answer5;
                Q6();
            }
           
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        } while (wrong_counter < 3); //exit when counter > 3
    }

    void Q6()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "Question 6: " << endl;
            cout << "What's the meaning of 'Lok Hor'?" << endl;
            cout << "\tA. Go" << endl;
            cout << "\tB. Eat" << endl;
            cout << "\tC. Raining" << endl;
            cout << "\tD. Buy" << endl;
            cin >> answer6;
            answer6 = toupper (answer6);
    
            if (answer6 == 'A' || answer6 == 'B' || answer6 == 'D')
            {
                cout << "Wrong" << endl;
                anslist[5] = answer6;
            }
    
            else if (answer6 == 'C')
            {
                cout << "Correct" << endl;
                correct = correct + 10;
                anslist[5] = answer6;
                Q7();
            }
           
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        } while (wrong_counter < 3); //exit when counter > 3
    }

    void Q7()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "Question 7: " << endl;
            cout << "What's the meaning of 'Jiak Png'?" << endl;
            cout << "\tA. Eat" << endl;
            cout << "\tB. Don't want" << endl;
            cout << "\tC. Go back" << endl;
            cout << "\tD. Raining" << endl;
            cin >> answer7;
            answer7 = toupper (answer7);

            if (answer7 == 'B' || answer7 == 'C' || answer7 == 'D')
            {
                cout << "Wrong" << endl;
                anslist[6] = answer7;
            }
    
            else if (answer7 == 'A')
            {
                cout << "Correct" << endl;
                correct = correct + 10;
                anslist[6] = answer7;
                Q8();
            }
               
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        } while (wrong_counter < 3); //exit when counter > 3
    }

    void Q8()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "Question 8: " << endl;
            cout << "What's the meaning of 'Kun'?" << endl;
            cout << "\tA. Can" << endl;
            cout << "\tB. Sleep" << endl;
            cout << "\tC. Want" << endl;
            cout << "\tD. Buy" << endl;
            cin >> answer8;
            answer8 = toupper (answer8);
    
            if (answer8 == 'A' || answer8 == 'C' || answer8 == 'D')
            {
                cout << "Wrong" << endl;
                anslist[7] = answer8;
            }
    
            else if (answer8 == 'B')
            {
                cout << "Correct" << endl;
                correct = correct + 10;
                anslist[7] = answer8;
                Q9();
            }
            
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        } while (wrong_counter < 3); //exit when counter > 3
    }

    void Q9()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "Question 9: " << endl;
            cout << "What's the meaning of 'Wa'?" << endl;
            cout << "\tA. Wow" << endl;
            cout << "\tB. Me" << endl;
            cout << "\tC. You" << endl;
            cout << "\tD. Go" << endl;
            cin >> answer9;
            answer9 = toupper (answer9);
    
            if (answer9 == 'A' || answer9 == 'C' || answer9 == 'D')
            {
                cout << "Wrong" << endl;
                anslist[8] = answer9;
            }
    
            else if (answer9 == 'B')
            {
                cout << "Correct" << endl;
                correct = correct + 10;
                anslist[8] = answer9;
                Q10();
                break;
            }
            
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        } while (wrong_counter < 3); //exit when counter > 3
    }

    void Q10()
    {
        //if can't run put finish_attempt=0, f_n = f_n + 1 , then put in while (f_a >0 )
        do
        {
            system("pause");
            system("cls");
            cout << "Question 10: " << endl;
            cout << "What's the meaning of 'Hi Peng'?" << endl;
            cout << "\tA. Over here" << endl;
            cout << "\tB. Don't want" << endl;
            cout << "\tC. Hello" << endl;
            cout << "\tD. Over there" << endl;
            cin >> answer10;
            answer10 = toupper (answer10);
    
            if (answer10 == 'A' || answer10 == 'B' || answer10 == 'C')
            {
                cout << "Wrong" << endl;
                anslist[9] = answer10;
            }
    
            else if (answer10 == 'D')
            {
                cout << "Correct" << endl;
                correct = correct + 10;
                anslist[9] = answer10;
                break;
            }
            
            else
            {
                wrong_counter++;
                cout<< " Invalid. Please enter A - D only " <<endl;
                if (wrong_counter == 3)
                {
                    cout << "You have attempted more than 3 times" << endl;
                    failed_attempt = failed_attempt + 1;
                    system("pause");
                    //don't do anything- let the loop exit
                }
            }
        } while (wrong_counter < 3 ); //exit when counter > 3
        
        cout << endl;
        system("cls");
        
        ofstream Score("Scorecard.txt", ios::app);
        sum = sum + correct;
        Score << "Result" <<endl<<"******************************************* "<<endl;
        Score <<"Name     Total Marks"<<endl;
        Score << participant_name <<"     "<< sum << endl;
        cout<<"\t You have awarded with a total of "<<sum<< " marks!"<<endl;
        system("pause");
        
        if(anslist[0]!='B')
        {
            cout<< anslist[0] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[0] << " Correct " <<endl;
        }
    
        if(anslist[1]!='A')
        {
            cout<< anslist[1] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[1] << " Correct " <<endl;
        }
    
        if(anslist[2]!='C')
        {
            cout<< anslist[2] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[2] << " Correct " <<endl;
        }
    
        if(anslist[3]!='D')
        {
            cout<< anslist[3] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[3] << " Correct " <<endl;
        }
    
        if(anslist[4]!='C')
        {
            cout<< anslist[4] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[4] << " Correct " <<endl;
        }
    
        if(anslist[5]!='C')
        {
            cout<< anslist[5] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[5] << " Correct " <<endl;
        }
    
        if(anslist[6]!='A')
        {
            cout<< anslist[6] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[6] << " Correct " <<endl;
        }
    
        if(anslist[7]!='B')
        {
            cout<< anslist[7] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[7] << " Correct " <<endl;
        }
    
        if(anslist[8]!='B')
        {
            cout<< anslist[8] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[8] << " Correct " <<endl;
        }
    
        if(anslist[9]!='D')
        {
            cout<< anslist[9] << " Incorrect " <<endl;
        }
        else
        {
            cout<< anslist[9] << " Correct " <<endl;
        }
        
    }
};

void mod_learn(Participant &p) //for Module 1
{
    int choose;

    cout << "Learn Basic Hokkien Phrases (" << p.combine_name_with_title() << ")" << endl << endl;
    cout << "In this module, you'll learn 10 basic phrases in Hokkien." << endl;
    cout << "Hokkien is a variety of chinese and is a Southern Min language native in southeastern mainland China." << endl << endl;
    cout << "---------------------------------------------------------------------------------------------------------" << endl << endl;

    do
    {
        cin.ignore(1000, '\n');
        //system("cls");
        cout << "Please choose a phrase to learn: " << endl << endl;
        cout << "\t1. O" << endl;
        cout << "\t2. Pek" << endl;
        cout << "\t3. Dhim" << endl;
        cout << "\t4. Khi" << endl;
        cout << "\t5. Dueh" << endl;
        cout << "\t6. Lok Hor" << endl;
        cout << "\t7. Jiak Png" << endl;
        cout << "\t8. Kun" << endl;
        cout << "\t9. Wa" << endl;
        cout << "\t10. Hi Peng" << endl;
        cout << "\tKey in '13' to return to Selection Menu" << endl << endl;
        cout << "---------------------------------------------------------------------------------------------------------" << endl << endl;
        cout << "Choose: ";
        cin >> choose;

        if (choose == 1)
        {
            system("cls");
            cout << "1. O" << endl << endl;
            system("start black.jpg");
            cout << "\t'O' means the colour black." << endl;
            cout << "\tFor Example: This dog is O in colour" << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 2)
        {
            system("cls");
            cout << "2. Pek" << endl << endl;
            system("start white.jpg");
            cout << "\t'Pek' means the colour white" << endl;
            cout << "\tFor Example: This shirt is pek in colour" << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 3)
        {
            system("cls");
            cout << "3. Dhim" << endl << endl;
            system("start throw.jpg");
            cout << "\t'Dhim' means to throw something" << endl;
            cout << "\tFor Example: Help me dhim this rubbish" << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 4)
        {
            system("cls");
            cout << "4. Khi" << endl << endl;
            system("start go.jpg");
            cout << "\tThe meaning of the word is go" << endl;
            cout << "\tFor Example: Kate khi Japan for an exchange program" << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 5)
        {
            system("cls");
            cout << "5. Dueh" << endl << endl;
            system("start follow.jpg");
            cout << "\tIt means 'come'" << endl;
            cout << "\tFor Example: Dueh with me to the temple." << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 6)
        {
            system("cls");
            cout << "6. Lok Hor" << endl << endl;
            system("start rain.jpg");
            cout << "\tLok Hor means 'raining'" << endl;
            cout << "\tFor Example: Help me keep the clothes, lok hor already" << endl << endl;
            system("pause");
            system("cls");
        }
        
        else if (choose == 7)
        {
            system("cls");
            cout << "7. Jiak Png" << endl << endl;
            system("start eat.jpg");
            cout << "\tJiak Png means 'to have lunch/dinner' or 'to eat'" << endl;
            cout << "\tFor Example: Oh look at the time, let's go jiak png" << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 8)
        {
            system("cls");
            cout << "8. Kun" << endl << endl;
            system("start sleep.jpg");
            cout << "\tKun in hokkien means 'to sleep'" << endl;
            cout << "\tFor Example: This lecture is so boring, I want to kun already" << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 9)
        {
            system("cls");
            cout << "9. Wa" << endl << endl;
            system("start me.jpg");
            cout << "\tIt means me" << endl;
            cout << "\tFor Example: Follow wa to the market" << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 10)
        {
            system("cls");
            cout << "10. Hi Peng" << endl;
            system("start there.jpg");
            cout << "\tIt means 'over there'" << endl;
            cout << "\tFor Example: Hi peng got dog" << endl << endl;
            system("pause");
            system("cls");
        }

        else if (choose == 13)
        {
            // dont do anything - let the loop exit
        }

        else
        {
            // not 1 to 10
            system("cls");
            cout << "Invalid Option. Please choose 1 - 10." << endl;
            system("pause");
            system("cls");
        }
    } while (choose != 13);
}

void mod_test(Participant &p, Module2 &m) //for Module 2
{
    char ans;
    //ans = '1';

    do
    {
        if (p.mod1_attempted == 0)
        {
            // user has not done module 1 yet
            cout << "You have not view Module 1, do you want to exit (E) or proceed (P)" << endl;
            cin >> ans;
            ans = toupper(ans);

            if (ans == 'P')
            {
                system("pause");
                system("cls");
                cout << "Test Your Hokkien Skill (" << p.combine_name_with_title() << ")" << endl;
                cout << "Instruction: Choose A, B, C or D only" << endl;
                // Module2 q;
                m.start_mod2(p);
                //q.Q1();
                break;
            }
            
            else if (ans == 'E')
            {
                // do nothing - let the loop exit
            }

            else
            {
                cout << "Please enter E/P only" << endl;
                cin.ignore(1000, '\n');
                cin >> ans;
                ans = toupper(ans);
            }
        }

        if (p.mod1_attempted > 0)
        {
               Module2 q;
               q.Q1();
               break;
        }
    } while (ans != 'E');
}

void mod_view(Participant &p, Module2 m) // for module 3 (nd test run)
{

    if(p.num_attempt==0)
    {
        cout<<"Please attempt Test Your Skill module before proceeding.";
        system("exit");
    }

    if( m.failed_attempt > 0)
    {
        cout<<"Please finish Test Your Skill module before proceeding.";
    }

    if(p.num_attempt>0)
    {
        system("start Scorecard.txt");
    }
    system("pause");
}

void mod_DevInfo(Participant p) //for module 4 (nd test run)
{
    char Ch;
    
    system("start groupphoto.jpg");
    cout<< "Developer Information (" << p.combine_name_with_title() << ")" << endl;
    cout<< "Group 1F1 - C";
    cout<<endl;
    ifstream Read("teammembers.txt");
    while(Read)
    {
        Read.get(Ch);
        cout << Ch;
    }
    cout<<endl;
    cout<<"Team Member\t\t\t\t\t\t\t Task Description"<<endl;
    cout<<"***************************************************************************************"<<endl;
    cout<<"Jasmine Choo Shin Ke\t\t\t\t\t\t\Create relevant question for the program and scoreboard"<<endl;
    cout<<"Keith Shana Dawson\t\t\t\t\t\t\ Program closing and display scoreboard"<<endl;
    cout<<"Melissa Sim Rui Qi\t\t\t\t\t\t\ Research language, and input necessary audios or images"<<endl;
    system("pause");
}

void mod_exit(Participant p) // for module 5
{
    char ans;
    cout << "Exit (" << p.combine_name_with_title() << ")" << endl;
    ans = '1'; //initialise invalid answer for first time

    do
    {
        if (p.num_attempt == 0) // user didn't attempt the test
        {
            cout << "Are you sure you want to exit before attempting the test, " << p.combine_name_with_title() << "? (Y/N)" << endl;
            cin >> ans;
            ans = toupper(ans);

            do
            {
                if (ans == 'Y')
                {
                    exit(0);
                }
                else if (ans == 'N')
                {
                    //dont do anything - exit the loop
                }
            }while (ans != 'N');
        }

        else if (p.num_attempt > 0) // user got attempt the test
        {
            cout << "Are you sure you want to exit the program? (Y/N)" << endl;
            cin >> ans;
            ans = toupper(ans);

            do
            {
                if (ans == 'Y')
                {
                    cout << "Thank you " << p.combine_name_with_title() << " for using our program" << endl;
                    exit(0);
                }

                else if (ans == 'N')
                {
                    //dont do anything - exit the loop
                }

                else
                {
                    cout << "Error. Please enter Y or N only" << endl;
                    cin.ignore(1000, '\n');
                    cin >> ans;
                    ans = toupper(ans);
                }
            }while (ans != 'N');
        }
    }while (ans != 'N');
}




int main (int argc, const char * argv[])
{
    Participant p;
    Module2 m;
    
    string received_input;
    char gender_input;
    char name_input[100];
    int option, input_length;
    char valid_input;

    // initialise all flags and counters
    p.num_attempt = 0;
    p.score = 0;
    p.mod1_attempted = 0;
    

    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\tLearn Basic Phrases in Hokkien application";
    cout << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\tName: ";
    cin >> name_input;

    p.set_name(name_input);
    gender_input = '-';
    valid_input = 'N'; //only change when it's Y

    do
    {
        //cin.ignore(1000, '\n');  // clear buffer to prepare for next input, max 1000 chars assumed
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\tGender (F/M): ";
        cin >> received_input;

        input_length = int(received_input.length());

        if (input_length == 1)
        {
            gender_input = toupper(received_input[0]);
            if ((gender_input == 'F') || (gender_input == 'M'))
            {
                valid_input = 'Y';
            }

            else
            {
                cout << "\t\t\t\t\t\t\t\t\t\t\t\t\tInvalid. Please enter F or M only.";
                cout << endl;
            }
        }

        else
        {
            cout << "\t\t\t\t\t\t\t\t\t\t\t\t\tPlease enter 1 character only";
            cout << endl;
        }
    } while (valid_input != 'Y');

    p.set_title(gender_input);
    
    do
    {
        system("cls");
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tSelection Menu: " << endl << endl << endl << endl;
        cout << "=============================================================================================================================================================================================================================================" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t1. Learn Basic Hokkien Phrases" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t2. Test Your Hokkien Skill" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t3. View Scoreboard" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t4. Developer Information" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t5. Exit" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "=============================================================================================================================================================================================================================================" << endl << endl;
        cout << endl << endl << endl << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t  Please choose a module: " ;
        cin >> option;

        if (option == 1)
        {
            system("cls");
            mod_learn(p);
            // record module 1 as attempted
            p.mod1_attempted = 1;
        }

        else if (option == 2)
        {
            system("cls");
            mod_test(p, m);
            //declare module2 questions 1-10
            p.num_attempt++;
        }

        else if (option == 3)
        {
            system("cls");
            mod_view(p,m);
        }

        else if (option == 4)
        {
            system("cls");
            mod_DevInfo(p);
        }

        else if (option == 5)
        {
            system("cls");
            mod_exit(p);
        }

        else //????
        {
            cout << "\t\t\t\t\t\t\t\t\t\t\t\t\tPlease select 1, 2, 3, 4 or 5 only" << endl;
            system("pause");
            system("cls");
        }
    } while (1==1); //infinite loop (have to break inside)
    return 0;
}


