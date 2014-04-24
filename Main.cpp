//
//  Main.cpp
//  CountObjects
//
//  Created by Don Johnson on 4/22/14.
//  Copyright (c) 2014 Donald Johnson. All rights reserved.
//
#include "Stack.hpp"
#define DEBUG 1

using namespace std;

int main()
{
    int menuChoice;
    Stack <int> *pS=NULL,*pD=NULL;
    
    while(true)
    {
        cout<<"\n******************M E N U**************\n";
        cout<<"1.Push\n2.Pop\n3.Print\n4.Demo\n5.Exit";
        cout<<"\n***************************************\n";
        cout<<"\nEnter option: ";
        cin>>menuChoice;
        
        switch(menuChoice)
        {
            case 1:
                if(pS==NULL)
                {
                    pS=new Stack<int>();
                }
                pS->push();
                break;
                
            case 2:
                if(pS==NULL)
                {
                    cout<<"Stack does not exist: select menu item #1 to start"<<endl;
                }
                else
                {
                    pS->pop();
                }
                break;
                
            case 3:
                if(pS==NULL)
                {
                    cout<<"Stack does not exist: select menu item #1 to start"<<endl;
                }
                else
                {
                    pS->print();
                }
                break;
                
            case 4:
                pD=new Stack<int>(5);
                pD->demo();
                pD->~Stack();
                break;
                
            case 5:
                return 0;
                break;
                
            default:
                cout<<"\n------- Wrong Option -------\n";
                break;
        }
    }
    
    return 0;
}
