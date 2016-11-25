#ifndef PLAYGAME_H
#define PLAYGAME_H
#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include"SPARSEMATRIX.h"
using namespace std;

// Template class to play game for a player
template<class T>
class playGame
{
private:
    int score;
    int coins;
    int moves;
    int n;
public:
    // Constructor
    playGame(int sze)
    {
        score=0;
        coins=0;
        moves=0;
        n=sze;
    }
    // Function return's final score of the player
    pair<pair<int, int>, int> playerResult()
    {
        pair<pair<int, int>, int> res;
        res.first.first = coins;
        res.first.second = moves;
        score = coins+moves;
        res.second = score;
        return res;
    }
    // Prints the Maze at each Step
    int printMaze(int x, int y,int isGameOver)
    {
        if(x<0 || x>n-1 || y<0 || y>n-1)
        {
                isGameOver=-1;
                return isGameOver;
        }
        for(int i=0; i<n-1; i++)
        {
            cout<<"          ";
            for(int j=0; j<n; j++)
            {
                if(isGameOver==1)
                    cout<<"X ";
                else if(i==x && j==y)
                    printf("%c ",1);
				else if(x==n-2 && y==n-1)
					{printf("%c ",1);
					isGameOver=0;}
                else if(i==n-2 && j==n-1)
                    cout<<"END";
                else
                    cout<<"_ ";
            }
            cout<<endl;
        }
    return isGameOver;
	}
	void riddles(int i){
		char a[100];
		fflush(stdin);
		fflush(stdout);
		system("pause");
		system("cls");
		cout<<"\n\n\t\tAnswer the Question Correctly\n\t\tTo Know where the Danger is coming from :)\n\tWarning:Only type your answer in lowercase.";
		if(i==1){
			cout<<"\n\t\tWhat number is represented by the letters XIX in Roman numerals?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"19")==0)
				cout<<"\n\tDanger is below you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;
		}
		else if(i==2){
			cout<<"\n\t\tWho was the first man on the moon?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"neil armstrong")==0)
				cout<<"\n\tDanger is at right of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
			system("pause");
		return;
		}
		else if(i==3){
			cout<<"\n\t\t12x12/12=...:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"12")==0)
				cout<<"\n\tDanger is above you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
				system("pause");
		return;
		}
		else if(i==4){
			cout<<"\n\t\t12x12/12=...:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"12")==0)
				cout<<"\n\tDanger is at left of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
				system("pause");
		return;
		}
		else if(i==5){
			cout<<"\n\t\tTomatoes are...?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"fruits")==0)
				cout<<"\n\tDanger is below you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
				system("pause");
		return;
		}
		else if(i==6){
			cout<<"\n\t\t'DB' computer abbreviation usually means ?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"database")==0)
				cout<<"\n\tDanger is at right of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==7){
			cout<<"\n\t\tWhat is a GPU?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"graphics processing unit")==0)
				cout<<"\n\tDanger is above you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==8){
			cout<<"\n\t\tHow many bits is a byte?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"8")==0)
				cout<<"\n\tDanger is at left of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==9){
			cout<<"\n\t\tUbuntu is which type of operating system:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"open source")==0)
				cout<<"\n\tDanger is below you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==10){
			cout<<"\n\t\tIf Ramesh's mother's brother is Alok's father's brother, then Ramesh's mother is Alok's:";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"aunt")==0)
				cout<<"\n\tDanger is at right of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==11){
			cout<<"\n\t\tD is A's son, C is the mother of P and wife of D. How is A related to C?:";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"father-in-law")==0)
				cout<<"\n\tDanger is above you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==12){
			cout<<"\n\t\tIf + means ÷,÷ means x, x means - and - means +,\n\t\t what will be the value of the following expression?\n\t\t15 ÷ 5 x 9 + 3 - 6:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"78")==0)
				cout<<"\n\tDanger is at left of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==13){
			cout<<"\n\t\tIf 8 + 12 = 2, 7 + 14 = 3 then 10 + 18 = ?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"10")==0)
				cout<<"\n\tDanger is below you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==14){
			cout<<"\n\t\tA man has two children. If the older child is a boy,\n\t\twhat are the odds that the other child is also a boy?:";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"50%")==0)
				cout<<"\n\tDanger is at right of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==15){
			cout<<"\n\t\tIf 'X' means 'added to', '÷' means 'multiplied by',\n\t\t '+' means 'subtracted from' and '-' means 'divided by'\n\t\t then 24 + 36 - 12 X 8 ÷ 4 = ?:";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"53")==0)
				cout<<"\n\tDanger is above you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==16){
			cout<<"\n\t\tCan you get sum of 99 by using all the numbers (0-99) and only one mathematical symbol:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"+")==0)
				cout<<"\n\tDanger is at left of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==17){
			cout<<"\n\t\tIf you take 3 apples from a group of 5, how many do you have?:";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"3")==0)
				cout<<"\n\tDanger is below you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==18){
			cout<<"\n\t\tWhat weighs more- a pound of Iron or a pound of feathers?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"both")==0)
				cout<<"\n\tDanger is at right of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==19){
			cout<<"\n\t\tHow many eggs can you put in an empty basket of 12 foot?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"1")==0)
				cout<<"\n\tDanger is above you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
		else if(i==20){
			cout<<"\n\t\tHow many 9's are there between 1 and 100?:\t";
			fflush(stdin);
			gets(a);
			if(strcmp(a,"20")==0)
				cout<<"\n\tDanger is at left of you\n";
			else
				cout<<"\n\tOppps, wrong answer\n";
		system("pause");
		return;}
	}
     // Prints player Current score at each step
    void printCurrentScore()
    {
        cout<<"\n\n";
        cout<<"   Player Current Score is:\n";
        cout<<"      Coins Collected So Far: "<<coins;
        cout<<"\n      Moves Moved: "<<moves<<endl;
    }

    // Main Function of the Game
    void startGame(T sp)
    {
        cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
        char ch;
        int flag=1;
        int x=0,y=0,i=1;
        int a,b;
        SparseMatrix sm;
        int z = printMaze(x,y,2);
        printCurrentScore();
        while(1)
            {	if(i==1){
            	if(sp.get(x+1,y)==-1)
            	{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(1);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            	else if(sp.get(x,y+1)==-1)
            	{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(2);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            	else if(sp.get(x-1,y)==-1)
            	{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(3);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            	else if(sp.get(x,y-1)==-1)
            	{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(4);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
			}
			i++;
                if(sp.get(x,y)==-1)
      	    	{
      	    	    flag=0;
      	    		cout<<"\t\t\tOOPS!!! YOU STEPPED ON THE PITHOLE\n\t\t\tGAME OVER\n\n";
      	    		break;
                }
                else
                {
                        coins+=sp.get(x,y);
                }
                fflush(stdin);
                ch=getchar();
                switch(ch)
                {
                    case 'w':
                        system("cls");
                        cout<<"-----------------------------------The UseLess Game--------------------------------------------\n\n\n";
                        cout<<"\t             USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
                        a=x;
                        b=y;
                        x=x-1;
                        y=y;
                        z=printMaze(x,y,z);
                        if(sp.get(x+1,y)==-1)
            				{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(5);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x,y+1)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(6);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x-1,y)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(7);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x,y-1)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(8);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
                        if(z!=-1)
                            moves++;
                        else
                            {
                                if(sp.get(x,y)==-1)
                                {
                                    flag=0;
                                    cout<<"\t\t\tOOPS!!! YOU STEPPED ON THE PITHOLE\n\t\t\tGAME OVER\n\n";
                                    break;
				                }
				                else
                                {
                                    coins+=sp.get(x,y);
                                   printCurrentScore();
                                }
                            }
                        break;
      	    	case 'a':
      	    	    system("cls");
      	    	    cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
      	    	    a=x;
                    b=y;
                    x=x;
      	    	    y=y-1;
      	    	    z=printMaze(x,y,z);
                        if(sp.get(x+1,y)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(9);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x,y+1)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(10);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x-1,y)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(11);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x,y-1)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(12);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
      	    	    if(z!=-1)
                        moves++;
                    else
                        {
                            if(sp.get(x,y)==-1)
                            {
                                flag=0;
                                cout<<"\t\t\tOOPS!!! YOU STEPPED ON THE PITHOLE\n\t\t\tGAME OVER\n\n";
                                break;
                            }
                            else
                            {
                                coins+=sp.get(x,y);
                                printCurrentScore();
                            }
                        }
                    break;
      	    	case 's':
      	    	    system("cls");
      	    	    cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
      	    	    a=x;
      	    	    b=y;
      	    	    x=x+1;
      	    	    y=y;
                    if(x==n-1){
                            z=-1;
                       goto abc;
                    }
      	    	    z=printMaze(x,y,z);
                        if(sp.get(x+1,y)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(13);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x,y+1)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(14);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x-1,y)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(15);
				system("cls");cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            			else if(sp.get(x,y-1)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(16);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
      	    	    if(z!=-1)
                        moves++;
                    else
                    {
                        if(sp.get(x,y)==-1)
                        {
                            cout<<"\t\t\tOOPS!!! YOU STEPPED ON THE PITHOLE\n\t\t\tGAME OVER\n\n";
                            flag=0;
                            break;
                        }
                        else
                        {
                            coins+=sp.get(x,y);
                            printCurrentScore();
                        }
                    }
                    break;
      	    	case 'd':
      	    	    system("cls");
      	    	    cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
      	    	    a=x;
      	    	    b=y;
      	    	    x=x;
      	    	    y=y+1;
      	    	    z=printMaze(x,y,z);
                        if(sp.get(x+1,y)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(17);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            		else 	if(sp.get(x,y+1)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(18);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            		else 	if(sp.get(x-1,y)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(19);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
            		else 	if(sp.get(x,y-1)==-1)
            			{cout<<"\n\n\n\t\tWatch Your Step You have a danger near you!!!\n\n";
				riddles(20);
				system("cls");
				cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
      	    	    cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
				z=printMaze(x,y,z);}
      	    	    if(z!=-1)
                        moves++;
                    else
                    {
                        if(sp.get(x,y)==-1)
                        {
                            cout<<"\t\t\tOOPS!!! YOU STEPPED ON THE PITHOLE\n\t\t\tGAME OVER\n\n";
                            flag=0;
                            break;
                        }
                        else
                        {
                            coins+=sp.get(x,y);
                            printCurrentScore();
                        }
                    }
                    break;
      	    	default:
      	    	    cout<<"Please enter a valid key\n";
      	    	    continue;
			  }
			  fflush(stdout);
		abc:
		if(z==-1)
        {
			system("cls");
            cout<<"-----------------------------------\bThe UseLess Game--------------------------------------------\n\n\n";
            cout<<"               USE --W A S D--(in lowerCase) TO MOVE UP LEFT RIGHT AND DOWN respectively\n\n\n";
            z = printMaze(a,b,2);
            x=a;
            y=b;
            cout<<"\n\n\t\tINVALID MOVE\n\n";
		}
		if(z==0)
        {
            break;
		}
		if(flag==0)
		{
		    break;
		}
        printCurrentScore();
        cout<<endl;
    }
    }
};
#endif
