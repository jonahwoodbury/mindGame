//
//  main.cpp
//  mindGame
//
//  Created by Jonah Woodbury on 5/5/15.
//  Copyright (c) 2015 Jonah Woodbury. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int input, total = 0;
    while(true){
        
        if(total == 0) cout << "Enter any number other than " << total << endl;
        if(total != 0) cout << "enter any number other than " << total << endl;
        cin >> input;
        
        if(input != total && total < 10){
            total += 1;
            cout << "Good, ";
        }
        else if(input == total){
            cout << "I told you not to do that.";
            break;
        }
        else if(total >= 10){
            cout << "Ok, enough";
            break;
        }
        else{
            cout << "That's not a number";
        }
    }
    return 0;
}
