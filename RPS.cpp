#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime> 
using namespace std;


int randy(){
    srand(static_cast<unsigned int>(time(0)));// ensures that the random number generated is 
    //different each time the program is run
    
    string options[3] = {"rock", "paper", "scissors"};
    int random = rand() % 3;
    string your_frnd = options[random];
    cout << "Your friend chose " << your_frnd << endl;
    return random;
}


int referee(int random, string mine) {
    if((mine == "r" && random == 2) ||
        (mine == "p" && random == 0) || 
        (mine == "s" && random == 1)){
        cout << "You Win!" << endl;
    } else if((mine == "r" && random == 1) || 
                (mine == "p" && random == 2) || 
                (mine == "s" && random == 0)){
        cout << "You Lose!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}

int main(){

    string choice;
    cout << "Rock(r), Paper(p), Scissors(s) Shoot!:" << endl;
    cin >> choice;
    int oppo = randy();
    referee(oppo, choice);
}