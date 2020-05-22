#include <iostream>
#include <vector>

using namespace std;
#include "dir.hpp"


void afficheDirection(Direction d){
  string res;
  switch(d){
    case nord:           res = "nord"; break;
    case nord_ouest :    res = "nord-ouest"; break;
    case ouest :         res = "ouest"; break;
    case sud_ouest :     res = "sud-ouest"; break;
    case sud :           res = "sud"; break;
    case sud_est :       res = "sud-est"; break;
    case est :           res = "est"; break;
    case nord_est :      res = "nord-est"; break;
    }
    cout<<res<<endl;
}

Direction aDroite(Direction d){
  Direction res;
  switch(d){
    case nord_ouest:  res = nord; break;
    case ouest :      res = nord_ouest; break;
    case sud_ouest :  res = ouest; break;
    case sud :        res = sud_ouest; break;
    case sud_est :    res = sud; break;
    case est :        res = sud_est; break;
    case nord_est :   res = est; break;
    case nord:        res = nord_est; break;
    }
    return res;
}

Direction aGauche(Direction d){
  Direction res;
  switch(d){
    case nord:           res = nord_ouest; break;
    case nord_ouest :    res = ouest; break;
    case ouest :         res = sud_ouest; break;
    case sud_ouest :     res = sud; break;
    case sud :           res = sud_est; break;
    case sud_est :       res = est; break;
    case est :           res = nord_est; break;
    case nord_est :      res = nord; break;
    }
    return res;
}

void testAGAD(){
  Direction d,d1;
  d1=nord;
  d=d1;
  for(int i=0;i<8;i++){
    aDroite(d);
  }
  d=d1;
  if(d!=d1)
    cout<<"aD ne fonctionne pas"<<endl;
  for(int i=0;i<8;i++){
    aGauche(d);
  }
  if(d!=d1)
    cout<<"aG ne fonctionne pas"<<endl;
}

int dirToInt(Direction d){
  int res;
  switch(d){
    case nord:           res = 0; break;
    case nord_ouest :    res = 1; break;
    case ouest :         res = 2; break;
    case sud_ouest :     res = 3; break;
    case sud :           res = 4; break;
    case sud_est :       res = 5; break;
    case est :           res = 6; break;
    case nord_est :      res = 7; break;
    }
    return res;
}

Direction intToDir(int I){
  Direction res;
  switch(I){
    case 0:        res = nord; break;
    case 1 :       res = nord_ouest; break;
    case 2 :       res = ouest; break;
    case 3 :       res = sud_ouest; break;
    case 4 :       res = sud; break;
    case 5 :       res = sud_est; break;
    case 6 :       res = est; break;
    case 7:        res = nord_est; break;
    }
    return res;
}
