#include <iostream>
 using namespace std; 
int stairs(int &current){
switch(current){
    case 1 :
    current = 38;
    cout<<"taken the stairs and goes on the upper level "<<current<<endl;
    return current;
     case 4 :
    current = 14;
    cout<<"taken the stairs and goes on the upper level "<<current<<endl;
    return current;
     case 8 :
    current = 30;
    cout<<"taken the stairs and goes on the upper level "<<current<<endl;
    return current;
     case 21 :
    current = 42;
    cout<<"taken the stairs and goes on the upper level "<<current<<endl;
    return current;
     case 28 :
    current = 76;
    cout<<"taken the stairs and goes on the upper level "<<current<<endl;
    return current;
     case 50 :
    current = 67;
    cout<<"taken the stairs and goes on the upper level "<<current<<endl;
    return current;
     case 71 :
    current = 92;
    cout<<"taken the stairs and goes on the upper level "<<current<<endl;
    return current;
     case 80 :
    current = 99;
    cout<<"taken the stairs and goes on the upper level "<<current<<endl;
    return current;
}
}
int snake(int &current){
switch(current){
    case 32 :
    current = 10;
    cout<<"biten by the snake and fall down to "<<current<<endl;
    return current;
     case 36 :
    current = 6;
    cout<<"biten by the snake and fall down to "<<current<<endl;
    return current;
     case 48 :
    current = 26;
     cout<<"biten by the snake and fall down to "<<current<<endl;
    return current;
     case 62 :
    current = 18;
    cout<<"biten by the snake and fall down to "<<current<<endl;
    return current;
     case 88 :
    current = 24;
    cout<<"biten by the snake and fall down to "<<current<<endl;
    return current;
     case 95 :
    current = 56;
    cout<<"biten by the snake and fall down to "<<current<<endl;
    return current;
     case 97 :
    current = 78;
    cout<<"biten by the snake and fall down to "<<current<<endl;
    return current;
}
}
int main(){
    int initial = 0;
    int dice ;
    int current = 0;
    while(current!=100){
    cout<<"the number on the dice"<<endl;
    cin>>dice;
    current = current + dice;
    if(current>100){
        current = current-dice ;
    }
    stairs(current);
    snake(current);
    cout<<"the current position of the coin is "<<current<<endl;
    }
    cout<<" THANKS FOR THE PLAY "<<endl;
    
return 0;

}