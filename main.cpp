//Animation Module
#include "FEHLCD.h"
#include "FEHUtility.h"
#include "FEHImages.h"
#include "FEHRandom.h"
#include <string.h>
#include <iostream>

/* Name: Amogh Kuppa & Saket Kolluru */
/* Date: 11/29/2023 */
/* Assignment: SDP 5 */
/* Seat: 24 & 25 Instructor: Toney Time: 10:20 */

//Function Prototypes for the question generators and the back button function
int* plusMinusProbs();
int* multiplyDivideProbs();
void backButton();

//The fruits were accesed from the following location: “Collection of Fruits in Cartoon Style Vector Image on 
//VectorStock.” VectorStock, www.vectorstock.com/royalty-free-vector/collection-of-fruits-in-carto
//on-style-vector-18450758. Accessed 4 Dec. 2023.

//The Apple class has coordinates as an attribute
class Apple {
  public:
    int x_position;
    int y_position;
    //The drawApple method draws the apple image at the inputted coordinates
    void drawApple(int x, int y){
      FEHImage apple;
      apple.Open("Images/AppleFEH.pic");
      apple.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Apple
    Apple(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Orange class has coordinates as an attribute
class Orange {
  public:
    int x_position;
    int y_position;
    //The drawOrange method draws the apple image at the inputted coordinates
    void drawOrange(int x, int y){
      FEHImage orange;
      orange.Open("Images/OrangeFEH.pic");
      orange.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Orange
    Orange(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Orange2 class has coordinates as an attribute
class Orange2 {
  public:
    int x_position;
    int y_position;
    //The drawOrange2 method draws the orange image at the inputted coordinates
    void drawOrange2(int x, int y){
      FEHImage orange2;
      orange2.Open("Images/Orange2FEH.pic");
      orange2.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Orange2
    Orange2(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The GreenApple class has coordinates as an attribute
class GreenApple {
  public:
    int x_position;
    int y_position;
    //The drawGreenApple method draws the green apple image at the inputted coordinates
    void drawGreenApple(int x, int y){
      FEHImage greenApple;
      greenApple.Open("Images/GreenAppleFEH.pic");
      greenApple.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the GreenApple
    GreenApple(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Lemon class has coordinates as an attribute
class Lemon {
 public:
    int x_position;
    int y_position;
    //The drawLemon method draws the lemon image at the inputted coordinates
    void drawLemon(int x, int y){
      FEHImage lemon;
      lemon.Open("Images/LemonFEH.pic");
      lemon.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Lemon
    Lemon(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Mango class has coordinates as an attribute
class Mango {
  public:
    int x_position;
    int y_position;
    //The drawMango method draws the mango image at the inputted coordinates
    void drawMango(int x, int y){
      FEHImage mango;
      mango.Open("Images/MangoFEH.pic");
      mango.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Mango
    Mango(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Peach class has coordinates as an attribute
class Peach {
  public:
    int x_position;
    int y_position;
    //The drawPeach method draws the peach image at the inputted coordinates
    void drawPeach(int x, int y){
      FEHImage peach;
      peach.Open("Images/PeachFEH.pic");
      peach.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Peach
    Peach(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Pear class has coordinates as an attribute
class Pear {
  public:
    int x_position;
    int y_position;
    //The drawPear method draws the pear image at the inputted coordinates
    void drawPear(int x, int y){
      FEHImage pear;
      pear.Open("Images/PearFEH.pic");
      pear.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Pear
    Pear(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Pear2 class has coordinates as an attribute
class Pear2 {
  public:
    int x_position;
    int y_position;
    //The drawPear2 method draws the pear image at the inputted coordinates
    void drawPear2(int x, int y){
      FEHImage pear2;
      pear2.Open("Images/Pear2FEH.pic");
      pear2.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Pear
    Pear2(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Plum class has coordinates as an attribute
class Plum {
  public:
    int x_position;
    int y_position;
    //The drawPlum method draws the plum image at the inputted coordinates
    void drawPlum(int x, int y){
      FEHImage plum;
      plum.Open("Images/PlumFEH.pic");
      plum.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Plum
    Plum(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 
//The Strawberry class has coordinates as an attribute
class Strawberry {
  public:
    int x_position;
    int y_position;
    //The Strawberry method draws the strawberry image at the inputted coordinates
    void drawStrawberry(int x, int y){
      FEHImage strawberry;
      strawberry.Open("Images/StrawberryFEH.pic");
      strawberry.Draw(x, y);      
      LCD.Update();
    }
  public:
  //The constructor assigns the coordinates to the Strawberry
    Strawberry(int x, int y){ 
      x_position = x;
      y_position = y;
    }
}; 

//The constructors were completed by Saket and Amogh

//The q1Coordinates method randomly generates potential coordinates for the fruit in the upper left half of the screen
//This method was completed by Saket
int* q1Coordinates(){
  int* coords = new int[2];
  int x = Random.RandInt();
  x = (x%60)+30;

  int y = Random.RandInt();
  y = (y%40)+40;

  coords[0] = x;
  coords[1] = y;
  return coords;
}

//The q2Coordinates method randomly generates potential coordinates for the fruit in the upper right half of the screen
//This method was completed by Amogh
int* q2Coordinates(){
  int* coords = new int[2];
  int x = Random.RandInt();
  x = (x%60)+140;

  int y = Random.RandInt();
  y = (y%40)+40;

  coords[0] = x;
  coords[1] = y;
  return coords;
}

//The q3Coordinates method randomly generates potential coordinates for the fruit in the bottom left half of the screen
//This method was completed by Saket
int* q3Coordinates(){
  int* coords = new int[2];
  int x = Random.RandInt();
  x = (x%60)+30;

  int y = Random.RandInt();
  y = (y%40)+120;

  coords[0] = x;
  coords[1] = y;
  return coords;
}

//The q4Coordinates method randomly generates potential coordinates for the fruit in the bottom right half of the screen
//This method was completed by Amogh
int* q4Coordinates(){
  int* coords = new int[2];
  int x = Random.RandInt();
  x = (x%60)+140;

  int y = Random.RandInt();
  y = (y%40)+120;

  coords[0] = x;
  coords[1] = y;
  return coords;
}

//This method randomly generates a fruit and assigns it random coordinates generated by the q1Coordinates 
//method, ensuring the fruit is in the upper left of the screen
//This method was completed by Saket
int* q1Fruits(){
  float determinent = Random.RandInt();
  int x = q1Coordinates()[0];
  int y = q1Coordinates()[1];
  int coordinates[2] = {x, y};
  if(determinent < 2987.818){//The range of the randomly generated determinent varibale was checked to decide the displayed fruit
  FEHImage apple;
  apple.Open("Images/AppleFEH.pic");
  apple.Draw(x, y);      
  LCD.Update();
  }
  //The code is repeated for other fruits that correspond to different regions
  else if(determinent < 5975.636){
  FEHImage orange;
  orange.Open("Images/OrangeFEH.pic");
  orange.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 8963.454){
  FEHImage GreenApple;
  GreenApple.Open("Images/GreenAppleFEH.pic");
  GreenApple.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 11951.272){
  FEHImage Lemon;
  Lemon.Open("Images/LemonFEH.pic");
  Lemon.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 14939.09){
  FEHImage Mango;
  Mango.Open("Images/MangoFEH.pic");
  Mango.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 17926.908){
  FEHImage Orange2;
  Orange2.Open("Images/Orange2FEH.pic");
  Orange2.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 20914.726){
  FEHImage Peach;
  Peach.Open("Images/PeachFEH.pic");
  Peach.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 23902.544){
  FEHImage Pear;
  Pear.Open("Images/PearFEH.pic");
  Pear.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 26890.362){
  FEHImage Pear2;
  Pear2.Open("Images/Pear2FEH.pic");
  Pear2.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 209878.18){
  FEHImage Plum;
  Plum.Open("Images/PlumFEH.pic");
  Plum.Draw(x, y);      
  LCD.Update();
  }
  else{
  FEHImage Strawberry;
  Strawberry.Open("Images/StrawberryFEH.pic");
  Strawberry.Draw(x, y);      
  LCD.Update();
  }

  //The coordinates that were generated are returned
  return coordinates;
}

//This method randomly generates a fruit and assigns it random coordinates generated by the q2Coordinates 
//method, ensuring the fruit is in the upper right of the screen
//This method was completed by Amogh
int* q2Fruits(){
  float determinent = Random.RandInt();
  int x = q2Coordinates()[0];
  int y = q2Coordinates()[1];
  int coordinates[2] = {x, y};
  if(determinent < 2987.818){//The range of the randomly generated determinent varibale was checked to decide the displayed fruit
  FEHImage apple;
  apple.Open("Images/AppleFEH.pic");
  apple.Draw(x, y);      
  LCD.Update();
  }
  //The code is repeated for other fruits that correspond to different regions
  else if(determinent < 5975.636){
  FEHImage orange;
  orange.Open("Images/OrangeFEH.pic");
  orange.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 8963.454){
  FEHImage GreenApple;
  GreenApple.Open("Images/GreenAppleFEH.pic");
  GreenApple.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 11951.272){
  FEHImage Lemon;
  Lemon.Open("Images/LemonFEH.pic");
  Lemon.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 14939.09){
  FEHImage Mango;
  Mango.Open("Images/MangoFEH.pic");
  Mango.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 17926.908){
  FEHImage Orange2;
  Orange2.Open("Images/Orange2FEH.pic");
  Orange2.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 20914.726){
  FEHImage Peach;
  Peach.Open("Images/PeachFEH.pic");
  Peach.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 23902.544){
  FEHImage Pear;
  Pear.Open("Images/PearFEH.pic");
  Pear.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 26890.362){
  FEHImage Pear2;
  Pear2.Open("Images/Pear2FEH.pic");
  Pear2.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 209878.18){
  FEHImage Plum;
  Plum.Open("Images/PlumFEH.pic");
  Plum.Draw(x, y);      
  LCD.Update();
  }
  else{
  FEHImage Strawberry;
  Strawberry.Open("Images/StrawberryFEH.pic");
  Strawberry.Draw(x, y);      
  LCD.Update();
  }
  //The coordinates that are generates are then returned
  return coordinates;
}

//This method randomly generates a fruit and assigns it random coordinates generated by the q3Coordinates 
//method, ensuring the fruit is in the upper right of the screen
//This method was completed by Saket
int* q3Fruits(){
  float determinent = Random.RandInt();
  int x = q3Coordinates()[0];
  int y = q3Coordinates()[1];
  int coordinates[2] = {x, y};
  if(determinent < 2987.818){//The range of the randomly generated determinent varibale was checked to decide the displayed fruit
  FEHImage apple;
  apple.Open("Images/AppleFEH.pic");
  apple.Draw(x, y);      
  LCD.Update();
  }
  //The code is repeated for other fruits that correspond to different regions
  else if(determinent < 5975.636){
  FEHImage orange;
  orange.Open("Images/OrangeFEH.pic");
  orange.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 8963.454){
  FEHImage GreenApple;
  GreenApple.Open("Images/GreenAppleFEH.pic");
  GreenApple.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 11951.272){
  FEHImage Lemon;
  Lemon.Open("Images/LemonFEH.pic");
  Lemon.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 14939.09){
  FEHImage Mango;
  Mango.Open("Images/MangoFEH.pic");
  Mango.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 17926.908){
  FEHImage Orange2;
  Orange2.Open("Images/Orange2FEH.pic");
  Orange2.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 20914.726){
  FEHImage Peach;
  Peach.Open("Images/PeachFEH.pic");
  Peach.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 23902.544){
  FEHImage Pear;
  Pear.Open("Images/PearFEH.pic");
  Pear.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 26890.362){
  FEHImage Pear2;
  Pear2.Open("Images/Pear2FEH.pic");
  Pear2.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 209878.18){
  FEHImage Plum;
  Plum.Open("Images/PlumFEH.pic");
  Plum.Draw(x, y);      
  LCD.Update();
  }
  else{
  FEHImage Strawberry;
  Strawberry.Open("Images/StrawberryFEH.pic");
  Strawberry.Draw(x, y);      
  LCD.Update();
  }

  //The coordinates that are generates are then returned
  return coordinates;
}

//This method randomly generates a fruit and assigns it random coordinates generated by the q4Coordinates 
//method, ensuring the fruit is in the upper right of the screen
//This method was completed by Amogh
int* q4Fruits(){
  float determinent = Random.RandInt();
  int x = q4Coordinates()[0];
  int y = q4Coordinates()[1];
  int coordinates[2] = {x, y};
  if(determinent < 2987.818){//The range of the randomly generated determinent varibale was checked to decide the displayed fruit
  FEHImage apple;
  apple.Open("Images/AppleFEH.pic");
  apple.Draw(x, y);      
  LCD.Update();
  }
  //The code is repeated for other fruits that correspond to different regions
  else if(determinent < 5975.636){
  FEHImage orange;
  orange.Open("Images/OrangeFEH.pic");
  orange.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 8963.454){
  FEHImage GreenApple;
  GreenApple.Open("Images/GreenAppleFEH.pic");
  GreenApple.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 11951.272){
  FEHImage Lemon;
  Lemon.Open("Images/LemonFEH.pic");
  Lemon.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 14939.09){
  FEHImage Mango;
  Mango.Open("Images/MangoFEH.pic");
  Mango.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 17926.908){
  FEHImage Orange2;
  Orange2.Open("Images/Orange2FEH.pic");
  Orange2.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 20914.726){
  FEHImage Peach;
  Peach.Open("Images/PeachFEH.pic");
  Peach.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 23902.544){
  FEHImage Pear;
  Pear.Open("Images/PearFEH.pic");
  Pear.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 26890.362){
  FEHImage Pear2;
  Pear2.Open("Images/Pear2FEH.pic");
  Pear2.Draw(x, y);      
  LCD.Update();
  }
  else if(determinent < 209878.18){
  FEHImage Plum;
  Plum.Open("Images/PlumFEH.pic");
  Plum.Draw(x, y);      
  LCD.Update();
  }
  else{
  FEHImage Strawberry;
  Strawberry.Open("Images/StrawberryFEH.pic");
  Strawberry.Draw(x, y);      
  LCD.Update();
  }
  
  //The coordinates that are generates are then returned
  return coordinates;
}

//The fruitToNumberEasy method assigns the decoy values and the correct answer to 
//randomly generated and drawn fruits on the screen. It then stores all the coordinates 
//of the points and returns them within an array
//This method was completed by Saket
int* fruitToNumberEasy()
{
  //Receives the array from q1Fruits and stores it a duplicate array q1Coordinates
  int* return1 = q1Fruits();
  int q1Coordinates[2];
  memcpy(q1Coordinates, return1, sizeof(q1Coordinates));

  //Receives the array from q2Fruits and stores it a duplicate array q2Coordinates
  int* return2 = q2Fruits();
  int q2Coordinates[2];
  memcpy(q2Coordinates, return2, sizeof(q2Coordinates));

  //Receives the array from q3Fruits and stores it a duplicate array q3Coordinates
  int* return3 = q3Fruits();
  int q3Coordinates[2];
  memcpy(q3Coordinates, return3, sizeof(q3Coordinates));

  //Receives the array from q4Fruits and stores it a duplicate array q4Coordinates
  int* return4 = q4Fruits();
  int q4Coordinates[2];
  memcpy(q4Coordinates, return4, sizeof(q4Coordinates));

  //Creates an array storing the answer and duplicates values from the plusMinusProbs method
  int* return5 = plusMinusProbs();
  int data[5];
  memcpy(data, return5, sizeof(data));
  float determinant = Random.RandInt();

  int answerCoordinates[8];
  
  if(determinant < 8191.75)//Checks if the randomly generates determinant is within any of the 4 regions
  {
    //Assigns decoys and answer to certain fruits based on the determinant's region
    LCD.SetFontColor(BLACK);
    LCD.WriteAt(std::to_string(data[3]), q1Coordinates[0]+10, q1Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[0]), q2Coordinates[0]+10, q2Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[1]), q3Coordinates[0]+10, q3Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[2]), q4Coordinates[0]+10, q4Coordinates[1]+20);
    answerCoordinates[0] = q1Coordinates[0] + 10;
    answerCoordinates[1] = q1Coordinates[1] + 20;
    answerCoordinates[2] = q2Coordinates[0] + 10;
    answerCoordinates[3] = q2Coordinates[1] + 20;
    answerCoordinates[4] = q3Coordinates[0] + 10;
    answerCoordinates[5] = q3Coordinates[1] + 20;
    answerCoordinates[6] = q4Coordinates[0] + 10;
    answerCoordinates[7] = q4Coordinates[1] + 20;
  }

  //Code repeats to check the location of the determinant in 3 other regions
  else if(determinant < 16383.5)
  {
    LCD.SetFontColor(BLACK);
    LCD.WriteAt(std::to_string(data[0]), q1Coordinates[0]+10, q1Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[3]), q2Coordinates[0]+10, q2Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[1]), q3Coordinates[0]+10, q3Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[2]), q4Coordinates[0]+10, q4Coordinates[1]+20);
    answerCoordinates[0] = q2Coordinates[0] + 10;
    answerCoordinates[1] = q2Coordinates[1] + 20;
    answerCoordinates[2] = q1Coordinates[0] + 10;
    answerCoordinates[3] = q1Coordinates[1] + 20;
    answerCoordinates[4] = q3Coordinates[0] + 10;
    answerCoordinates[5] = q3Coordinates[1] + 20;
    answerCoordinates[6] = q4Coordinates[0] + 10;
    answerCoordinates[7] = q4Coordinates[1] + 20;

  }

  else if(determinant < 24575.25)
  {
    LCD.SetFontColor(BLACK);
    LCD.WriteAt(std::to_string(data[0]), q1Coordinates[0]+10, q1Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[1]), q2Coordinates[0]+10, q2Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[3]), q3Coordinates[0]+10, q3Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[2]), q4Coordinates[0]+10, q4Coordinates[1]+20);
    answerCoordinates[0] = q3Coordinates[0] + 10;
    answerCoordinates[1] = q3Coordinates[1] + 20;
    answerCoordinates[2] = q1Coordinates[0] + 10;
    answerCoordinates[3] = q1Coordinates[1] + 20;
    answerCoordinates[4] = q2Coordinates[0] + 10;
    answerCoordinates[5] = q2Coordinates[1] + 20;
    answerCoordinates[6] = q4Coordinates[0] + 10;
    answerCoordinates[7] = q4Coordinates[1] + 20;

  }

  else
  {
    LCD.SetFontColor(BLACK);
    LCD.WriteAt(std::to_string(data[0]), q1Coordinates[0]+10, q1Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[1]), q2Coordinates[0]+10, q2Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[2]), q3Coordinates[0]+10, q3Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[3]), q4Coordinates[0]+10, q4Coordinates[1]+20);
    answerCoordinates[0] = q4Coordinates[0] + 10;
    answerCoordinates[1] = q4Coordinates[1] + 20;
    answerCoordinates[2] = q1Coordinates[0] + 10;
    answerCoordinates[3] = q1Coordinates[1] + 20;
    answerCoordinates[4] = q2Coordinates[0] + 10;
    answerCoordinates[5] = q2Coordinates[1] + 20;
    answerCoordinates[6] = q3Coordinates[0] + 10;
    answerCoordinates[7] = q3Coordinates[1] + 20;
  }
  
  //returns the array with the 8 answer coordinates
  return answerCoordinates;
}

//This method is a repeat of fruitToNumberEasy, but 
//calls the multipleDivideProbs method in order to get the data for the hard level questions
//This method was completed by Saket
int* fruitToNumberHard()
{
  int* return1 = q1Fruits();
  int q1Coordinates[2];
  memcpy(q1Coordinates, return1, sizeof(q1Coordinates));

  int* return2 = q2Fruits();
  int q2Coordinates[2];
  memcpy(q2Coordinates, return2, sizeof(q2Coordinates));

  int* return3 = q3Fruits();
  int q3Coordinates[2];
  memcpy(q3Coordinates, return3, sizeof(q3Coordinates));

  int* return4 = q4Fruits();
  int q4Coordinates[2];
  memcpy(q4Coordinates, return4, sizeof(q4Coordinates));

  int* return5 = multiplyDivideProbs();//This is the only diffeence in this method compared to fruitToNumberEasy
  int data[5];
  memcpy(data, return5, sizeof(data));
  float determinant = Random.RandInt();

  int answerCoordinates[8];
  
  if(determinant < 8191.75)
  {
    LCD.SetFontColor(BLACK);
    LCD.WriteAt(std::to_string(data[3]), q1Coordinates[0]+10, q1Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[0]), q2Coordinates[0]+10, q2Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[1]), q3Coordinates[0]+10, q3Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[2]), q4Coordinates[0]+10, q4Coordinates[1]+20);
    answerCoordinates[0] = q1Coordinates[0] + 10;
    answerCoordinates[1] = q1Coordinates[1] + 20;
    answerCoordinates[2] = q2Coordinates[0] + 10;
    answerCoordinates[3] = q2Coordinates[1] + 20;
    answerCoordinates[4] = q3Coordinates[0] + 10;
    answerCoordinates[5] = q3Coordinates[1] + 20;
    answerCoordinates[6] = q4Coordinates[0] + 10;
    answerCoordinates[7] = q4Coordinates[1] + 20;
  }

  else if(determinant < 16383.5)
  {
    LCD.SetFontColor(BLACK);
    LCD.WriteAt(std::to_string(data[0]), q1Coordinates[0]+10, q1Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[3]), q2Coordinates[0]+10, q2Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[1]), q3Coordinates[0]+10, q3Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[2]), q4Coordinates[0]+10, q4Coordinates[1]+20);
    answerCoordinates[0] = q2Coordinates[0] + 10;
    answerCoordinates[1] = q2Coordinates[1] + 20;
    answerCoordinates[2] = q1Coordinates[0] + 10;
    answerCoordinates[3] = q1Coordinates[1] + 20;
    answerCoordinates[4] = q3Coordinates[0] + 10;
    answerCoordinates[5] = q3Coordinates[1] + 20;
    answerCoordinates[6] = q4Coordinates[0] + 10;
    answerCoordinates[7] = q4Coordinates[1] + 20;

  }

  else if(determinant < 24575.25)
  {
    LCD.SetFontColor(BLACK);
    LCD.WriteAt(std::to_string(data[0]), q1Coordinates[0]+10, q1Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[1]), q2Coordinates[0]+10, q2Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[3]), q3Coordinates[0]+10, q3Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[2]), q4Coordinates[0]+10, q4Coordinates[1]+20);
    answerCoordinates[0] = q3Coordinates[0] + 10;
    answerCoordinates[1] = q3Coordinates[1] + 20;
    answerCoordinates[2] = q1Coordinates[0] + 10;
    answerCoordinates[3] = q1Coordinates[1] + 20;
    answerCoordinates[4] = q2Coordinates[0] + 10;
    answerCoordinates[5] = q2Coordinates[1] + 20;
    answerCoordinates[6] = q4Coordinates[0] + 10;
    answerCoordinates[7] = q4Coordinates[1] + 20;

  }

  else
  {
    LCD.SetFontColor(BLACK);
    LCD.WriteAt(std::to_string(data[0]), q1Coordinates[0]+10, q1Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[1]), q2Coordinates[0]+10, q2Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[2]), q3Coordinates[0]+10, q3Coordinates[1]+20);
    LCD.WriteAt(std::to_string(data[3]), q4Coordinates[0]+10, q4Coordinates[1]+20);
    answerCoordinates[0] = q4Coordinates[0] + 10;
    answerCoordinates[1] = q4Coordinates[1] + 20;
    answerCoordinates[2] = q1Coordinates[0] + 10;
    answerCoordinates[3] = q1Coordinates[1] + 20;
    answerCoordinates[4] = q2Coordinates[0] + 10;
    answerCoordinates[5] = q2Coordinates[1] + 20;
    answerCoordinates[6] = q3Coordinates[0] + 10;
    answerCoordinates[7] = q3Coordinates[1] + 20;
  }
  return answerCoordinates;
}

//The stats class creates an object with the number of questions answered, the number of questions correct, the high score, and the lives
//This class was created by Amogh
class Stats{
   public:
   int numQAnswered;
   int numQCorrect;
   public: 
   Stats(int nqa, int nqc){
    numQAnswered = nqa;
    numQCorrect = nqc;
   }
};

//declare statistics object to track game stats
Stats statistics(0,0);

//The menu prototype has been instantiated
void menu();
//The backButton method displays a button to return to the menu as the player navigates the game.
//This function was created by Amogh
void backButton(){
  //Displays the word "Back" within a rectangle of predetermined size and coordinates
   LCD.DrawRectangle(10, 15, 55, 20);
   LCD.WriteAt("Back", 10, 15);
   int x_pos = 15;
   int y_pos = 180;
   int x_tras, y_tras;
   //Checks for touch with Touch function
   while(!LCD.Touch(&x_pos,&y_pos)) {};
       
   while(LCD.Touch(&x_tras,&y_tras)) {};
  
   if ((x_pos > 10 && x_pos < 65) && (y_pos > 15 && y_pos < 35)){
      LCD.Clear();
      //Returns to menu is user clicks in the region
      menu();
   }
   return;
}

//The levelOne function creates a button that displays the option to proceed to the easy game mode
//This function was created by Saket
void levelOne(){
  LCD.DrawRectangle(32, 150, 100, 50);
  LCD.WriteAt("+ and - ", 37, 165);
}
//The levelTwo function creates a button that displays the option to proceed to the hard game mode
//This function was created by Amogh
void levelTwo(){
   LCD.DrawRectangle(187, 150, 100, 50);
   LCD.WriteAt("x and / ", 196, 165);
}

//The multiplyDivideProbs method generates randomzied questions for the hard difficulty, which consist of 
//multiplication and division problems
//This method was created by Saket
int* multiplyDivideProbs()
{
    //Random variables are initialzied. These hold decoys, the answer, and random variables that determine the question
    int one = Random.RandInt();
    int two = Random.RandInt();
    int decider = Random.RandInt();
    int answer;
    int decoy1 = Random.RandInt();
    int decoy2 = Random.RandInt();
    int decoy3 = Random.RandInt();
    //This delcared array will hold the decoys, the answer, and the total number of questions generated
    int* output = new int[5];
    std::string question = " ";
    int counter = 0;

    //The first number of the equation is randomly generated and shrunk until it is less than 30
    while (one > 30)
    {
      one /= 10;
    }

    //The second number of the equation is randomly generated and shrunk until it is less than 10
    while (two > 10)
    {
      two /= 10;
    }

    //The answer is delcared to be the product of one and two
    answer = one * two;

    //If the random decider variable is within the first half of its maximum range, the displayed question will multiply one and two
    if(decider > 16383.5)
    {
      question = std::to_string(one) + " x " + std::to_string(two);
      counter++;
    }
    //If the random decider variable is within the second half of its maximum range, the displayed question will divide one and two
    else
    {
      question = std::to_string(answer) + " / " + std::to_string(two);
      answer = answer/two;
      counter++;
    }

    //The decoy variables are created by adding or subtracting anywhere from 1 to 10 from the answer
    //The while loops check to make sure they are a reasonable size and there are no repeated values in the answer choices
    while(decoy1 > 10)
    {
      decoy1 %= 10;
    }
    decoy1+= answer;

    while(decoy2 > 10)
    {
      decoy2 %= 10;
    }
    decoy2+= answer;

    while(decoy3 > 10)
    {
      decoy3 %= 10;
    }
    decoy3+= answer;

  //The outputted array is initalized with the decoys, the answer, and the counter
    output[0] = decoy1;
    output[1] = decoy2;
    output[2] = decoy3;
    output[3] = answer;
    output[4] = counter;

    //The question is written out to the screen and the array is returned
    LCD.WriteAt(question, 112, 210);
    return output;
}

//The plusMinusProbs method generates randomized questions for the easy difficulty, which consist of 
//additon and subtraction problems
//This method was created by Amogh
int* plusMinusProbs()
{
    //Random variables are initialized. These hold decoys, the answer, and random variables that determine the question
    int one = Random.RandInt();
    int two = Random.RandInt();
    int decider = Random.RandInt();
    int answer;
    int counter;
    int decoy1 = Random.RandInt();
    int decoy2 = Random.RandInt();
    int decoy3 = Random.RandInt();
    //This declared array will hold the decoys, the answer, and the total number of questions generated
    int* output = new int[5];
    std::string question = " ";

  //The first number of the equation is randomly generated and shrunk until it is less than 30
    while (one > 30)
    {
      one /= 10;
    }
    //The second number of the equation is randomly generated and shrunk until it is less than 10
    while (two > 30)
    {
      two /= 10;
    }

    //If the random decider variable is within the first half of its maximum range, the displayed question will add one and two
    if(decider > 16383.5)
    {
      question = std::to_string(one) + " + " + std::to_string(two);
      answer = one + two;
      counter++;
    }
    //If the random decider variable is within the second half of its maximum range, the displayed question will subtract one and two
    else
    {
      question = std::to_string(one) + " - " + std::to_string(two);
      answer = one - two;
      counter++;
    }
    //The decoy variables are created by adding or subtracting anywhere from 1 to 10 from the answer
    //The while loops check to make sure they are a reasonable size and there are no repeated values in the answer choices
    while(decoy1 > 10)
    {
      decoy1 %= 10;
    }

    while(decoy2 > 10)
    {
      decoy2 %= 10;
    }

    while(decoy3 > 10)
    {
      decoy3 %= 10;
    }

    decoy1+= answer;
    decoy2 = answer - decoy2;
    decoy3+= answer;

    if(decoy1 == decoy2)
    {
      decoy1++;
    }

    if(decoy2 == decoy3)
    {
      decoy2++;
    }

  if(decoy1 == decoy3)
    {
      decoy3++;
    }

  if(decoy1 == answer)
  {
    decoy1++;
  }

  if(decoy2 == answer)
  {
    decoy2--;
  }

  if(decoy3 == answer)
  {
    decoy3++;
  }
  //The outputted array is initalized with the decoys, the answer, and the counter
    output[0] = decoy1;
    output[1] = decoy2;
    output[2] = decoy3;
    output[3] = answer;
    output[4] = counter;
    
   //The question is written out to the screen and the array is returned
    LCD.WriteAt(question, 112, 210);
    return output;
}

//The menu function dislays the buttoms and options to navigate the game. 
//This method was created by Saket.
void menu() {
  //This opens a background image behind the buttons for the menu

  //The image was found through the following source: “Indoor Dojo Room in Japan.” IStock, 31 Mar. 2020, 
  //www.istockphoto.com/vector/web-gm1215850336-354288565. Accessed 4 Dec. 2023.
  FEHImage background_menu;
  background_menu.Open("Images/Background_menuFEH.pic");
  background_menu.Draw(0, 0);   
  LCD.Update();
  LCD.SetFontColor(WHITE);
  // declare statisics object to track stats throughout game
  //The coordinates for the lines are set and the menu is drawn out using 4 quadrants
   //int x1_1 = 15;
   //int x1_2 = 135;
   //The buttons display text to play the game, view stats, view instructions, and view the credits
   LCD.DrawHorizontalLine(119, 0, 319);
   LCD.DrawVerticalLine(160, 0, 239);
   LCD.WriteAt("Play Game", 25, 60);
   LCD.WriteAt("View Stats", 185, 60);
   LCD.WriteAt("Instructions", 7, 170);
   LCD.WriteAt("View Credits", 170, 170);
   float x_position, y_position;
   float x_trash, y_trash;
   //The touch buffer is cleared
        LCD.ClearBuffer();
        //The line waits for the user to click the keypad
        while(!LCD.Touch(&x_position,&y_position)) {};
        //The line waits for the user to release the touchpad
        while(LCD.Touch(&x_trash,&y_trash)) {};
        if((x_position > 15 && x_position < 158) && (y_position > 20 && y_position < 120)){
            LCD.Clear();
            //If the user selecs to play game, the background image is changed and the buttons for level one and level two are 
            //displayed

            //The image was found through the following source: “Dentokan Dojo.” 
            //Dentokan Dojo, www.dentokandojo.com/. Accessed 4 Dec. 2023.
            FEHImage background_level;
            background_level.Open("Images/Background_levelFEH.pic");
            background_level.Draw(0, 0);   
            LCD.Update();
            //The text "Play Number Ninja" is displayed in white font
            LCD.SetFontColor(WHITE);
            LCD.WriteAt("Play Number Ninja: ", 50, 80);
            levelOne();
            levelTwo();
            float x_position1, y_position1;
            float x_trash1, y_trash1;
          //The touch buffer is cleared
         LCD.ClearBuffer();
         int replay = 1;
         //The computer waits for the user to click the keypad
         while(!LCD.Touch(&x_position1,&y_position1)) {};
         //The computer waits for the touch of the keypad to release
         while(LCD.Touch(&x_trash1,&y_trash1)) {};
         while(replay == 1){
         
         if((x_position1 > 32 && x_position1 < 132) && (y_position1 > 150 && y_position1 < 200)){
            LCD.Clear();
            //If the player chooses to play the easy mode, a countdown timer is run before the round starts with the 
            //lives being displayed
            FEHImage background_easy;
            //The background is initally drawn

            //The image was found through the following source: “Free Stock Photos, PNGs, 
            //Templates & Mockups.” Rawpixel, www.rawpixel.com. Accessed 4 Dec. 2023.
            background_easy.Open("Images/Background_GameFEH.pic");
            background_easy.Draw(0, 0);   
            LCD.Update();
            //The countdown is displayed
            LCD.SetFontColor(BLACK);
              int lives = 3;
              Sleep(1.0);
              LCD.WriteAt('3', 150, 100);
              Sleep(.75);
              LCD.Clear();
              //Background is called again
              background_easy.Open("Images/Background_GameFEH.pic");
              background_easy.Draw(0, 0);   
              LCD.Update();
              //Countdown and background continue until the countdown is complete
              LCD.SetFontColor(BLACK);
              LCD.WriteAt('2', 150, 100);
              Sleep(.75);
              LCD.Clear();
              background_easy.Open("Images/Background_GameFEH.pic");
              background_easy.Draw(0, 0);   
              LCD.Update();
              LCD.SetFontColor(BLACK);
              LCD.WriteAt('1', 150, 100);
              Sleep(.75);
              LCD.Clear();
              background_easy.Open("Images/Background_GameFEH.pic");
              background_easy.Draw(0, 0);   
              LCD.Update();
              LCD.SetFontColor(BLACK);
              LCD.WriteAt("GO!", 140, 100);
              Sleep(.75);
              while(lives != 0){
              LCD.Clear();
              background_easy.Open("Images/Background_GameFEH.pic");
              background_easy.Draw(0, 0);   
              LCD.Update();
              //The fruitsToNumberEasy method is called to display the fruits randomly with random answer choices
              //The data from the outputted array is stored in variables
              int* return1 = fruitToNumberEasy();
              LCD.SetFontColor(BLACK);
              int fruitCoordinates[8];
              memcpy(fruitCoordinates, return1, sizeof(fruitCoordinates));
              LCD.SetFontColor(BLACK);
              float x_game, y_game;
              float x_trashGame, y_trashGame;
              LCD.ClearBuffer();
              //The touch from the user is detected and checked to ensure whether the selected answer is correct or incorrect
              while(!LCD.Touch(&x_game,&y_game)) {};
              while(LCD.Touch(&x_trashGame,&y_trashGame)) {};
              if((x_game > fruitCoordinates[0] && x_game < fruitCoordinates[0]+50) && (y_game > fruitCoordinates[1] && y_game < fruitCoordinates[1]+50)){
                int temp_x = 0;
                while(temp_x != 280){
                  if(temp_x == 279){
                      LCD.Clear();
                      //The background is redrawn and "CORRECT!" is displayed to the user
                      background_easy.Open("Images/Background_GameFEH.pic");
                      background_easy.Draw(0, 0);   
                      LCD.Update();
                      LCD.SetFontColor(BLACK);
                      LCD.WriteAt("CORRECT!", 110, 100);
                      // Number of questions correct and number of questions answered is incremented
                      statistics.numQAnswered++;
                      statistics.numQCorrect++;
                      Sleep(.5);
                      break;
                  }
                  LCD.Clear();
                  //This redraws the background and opens an image of a ninja on the screen
                  background_easy.Open("Images/Background_GameFEH.pic");
                  background_easy.Draw(0, 0);   
                  LCD.Update();
                  LCD.SetFontColor(BLACK);
                  temp_x++;
                  FEHImage ninja;
                  ninja.Open("Images/NinjaFEH.pic");
                  ninja.Draw(temp_x, 170);   
                  Sleep(1);
                  }
              }
             // backButton();
              else if(((x_game > fruitCoordinates[2] && x_game < fruitCoordinates[2] + 50) && (y_game > fruitCoordinates[3] && y_game < fruitCoordinates[3] + 50)) ||
           ((x_game > fruitCoordinates[4] && x_game < fruitCoordinates[4] + 50) && (y_game > fruitCoordinates[5] && y_game < fruitCoordinates[5] + 50)) ||
           ((x_game > fruitCoordinates[6] && x_game < fruitCoordinates[6] + 50) && (y_game > fruitCoordinates[7] && y_game < fruitCoordinates[7] + 50))){

             LCD.Clear();
             //Redraws the background image and decrements the lives
             background_easy.Open("Images/Background_GameFEH.pic");
             background_easy.Draw(0, 0);   
             LCD.Update();
             LCD.SetFontColor(BLACK);
             // decrement amount of lives left and increment number of questions answered
             lives--;
             statistics.numQAnswered++;
             //Notify the user everytime the answer chosen is wrong and they lose a life
             if(lives!=0){
            LCD.WriteAt("INCORRECT!", 80, 170);
            LCD.WriteAt("YOU LOST A LIFE!", 80, 190);
            Sleep(1.0);
             }
             //If the player is out of lives, notify them and give them the option to replay
             if(lives == 0){
                LCD.WriteAt("SORRY, YOU LOSE!", 60, 150);
                LCD.WriteAt("PLAY AGAIN?", 60, 170);
                LCD.DrawRectangle(100, 190, 85, 20);
                LCD.WriteAt("Replay", 100, 190);
                LCD.DrawRectangle(100, 210, 85, 20);
                LCD.WriteAt("Back", 100, 210);
                float x_replay, y_replay;
                float x_trashReplay, y_trashReplay;
                //The computer waits for the touch of the keypad to press
               while(!LCD.Touch(&x_replay,&y_replay)) {};
               //The computer waits for the touch of the keypad to release
                while(LCD.Touch(&x_trashReplay,&y_trashReplay)) {};
                // checks if replay or back button is clicked and performs corresponding task of button
                if((x_replay > 100 && x_replay < 185) && (y_replay > 190 && y_replay < 210)){
                  //continue game loop if replay is clicked
                  replay = 1;
                
                }
                else if((x_replay > 100 && x_replay < 185) && (y_replay > 210 && y_replay < 230)){
                  //return to menu if back is clicked
                  menu();
                }
          
        }
       }
      //  Sleep(1.0);
        LCD.SetFontColor(BLACK);
              
         }
  }
           else if((x_position1 > 187 && x_position1 < 287) && (y_position1 > 150 && y_position1 < 200)){
            LCD.Clear();
            //The background image for the hard level is displayed

            //The image was found through the following source: “Can Someone Translate the Writing in 
            //Martial Arts Dojo Interior?”Daz 3D Forums, 17 Apr. 2022, www.daz3d.com/forums/discussion/
            //563096/can-someone-translate-the-writing-in-martial-arts-dojo-interior. Accessed 4 Dec. 2023.
            FEHImage background_hard;
            background_hard.Open("Images/Background_hardFEH.pic");
            background_hard.Draw(0, 0);  
            LCD.Update();
             //The countdown is displayed
            LCD.SetFontColor(WHITE);
              int lives = 3;
              Sleep(1.0);
              LCD.WriteAt('3', 150, 100);
              Sleep(.75);
              LCD.Clear();
              //Background is called again
              background_hard.Open("Images/Background_hardFEH.pic");
              background_hard.Draw(0, 0);   
              LCD.Update();
              //Countdown and background continue until the countdown is complete
              LCD.SetFontColor(WHITE);
              LCD.WriteAt('2', 150, 100);
              Sleep(.75);
              LCD.Clear();
              background_hard.Open("Images/Background_hardFEH.pic");
              background_hard.Draw(0, 0);   
              LCD.Update();
              LCD.SetFontColor(WHITE);
              LCD.WriteAt('1', 150, 100);
              Sleep(.75);
              LCD.Clear();
              background_hard.Open("Images/Background_hardFEH.pic");
              background_hard.Draw(0, 0);   
              LCD.Update();
              LCD.SetFontColor(WHITE);
              LCD.WriteAt("GO!", 140, 100);
              Sleep(.75);
              while(lives != 0){
              LCD.Clear();
              background_hard.Open("Images/Background_hardFEH.pic");
              background_hard.Draw(0, 0);   
              LCD.Update();
              //The fruitsToNumberHard method is called to display the fruits randomly with random answer choices
              //The data from the outputted array is stored in variables
              int* return1 = fruitToNumberHard();
              LCD.SetFontColor(WHITE);
              int fruitCoordinates[8];
              memcpy(fruitCoordinates, return1, sizeof(fruitCoordinates));
              LCD.SetFontColor(WHITE);
              float x_game, y_game;
              float x_trashGame, y_trashGame;
              LCD.ClearBuffer();
              //The touch from the user is detected and checked to ensure whether the selcted answer is correct or incorrect
              while(!LCD.Touch(&x_game,&y_game)) {};
              while(LCD.Touch(&x_trashGame,&y_trashGame)) {};
              if((x_game > fruitCoordinates[0] && x_game < fruitCoordinates[0]+50) && (y_game > fruitCoordinates[1] && y_game < fruitCoordinates[1]+50)){
                int temp_x = 0;
                while(temp_x != 280){
                  if(temp_x == 279){
                      LCD.Clear();
                      //The background is redrawn and "CORRECT!" is displayed to the user
                      background_hard.Open("Images/Background_hardFEH.pic");
                      background_hard.Draw(0, 0);   
                      LCD.Update();
                      LCD.SetFontColor(WHITE);
                      LCD.WriteAt("CORRECT!", 110, 100);
                      // Number of questions correct and number of questions answered is incremented
                      statistics.numQAnswered++;
                      statistics.numQCorrect++;
                      Sleep(.5);
                      break;
                  }
                  LCD.Clear();
                  //This redraws the background and opens an image of a ninja on the screen
                  background_hard.Open("Images/Background_hardFEH.pic");
                  background_hard.Draw(0, 0);   
                  LCD.Update();
                  LCD.SetFontColor(WHITE);
                  temp_x++;
                  FEHImage ninja;
                  ninja.Open("Images/NinjaFEH.pic");
                  ninja.Draw(temp_x, 170);   
                  Sleep(1);
                  }
              }
             // backButton();
              else if(
                //Checks if the player selcected one of the incorrect answers
    ((x_game > fruitCoordinates[2] && x_game < fruitCoordinates[2] + 50) && (y_game > fruitCoordinates[3] && y_game < fruitCoordinates[3] + 50)) ||
    ((x_game > fruitCoordinates[4] && x_game < fruitCoordinates[4] + 50) && (y_game > fruitCoordinates[5] && y_game < fruitCoordinates[5] + 50)) ||
    ((x_game > fruitCoordinates[6] && x_game < fruitCoordinates[6] + 50) && (y_game > fruitCoordinates[7] && y_game < fruitCoordinates[7] + 50))){

             LCD.Clear();
             //Redraws the background image and decrements the lives
             background_hard.Open("Images/Background_hardFEH.pic");
             background_hard.Draw(0, 0);   
             LCD.Update();
             LCD.SetFontColor(WHITE);
             // decrement amount of lives left and increment number of questions answered
             lives--;
             statistics.numQAnswered++;
             //Notify the user everytime the answer chosen is wrong and they lose a life
             if(lives!=0){
            LCD.WriteAt("INCORRECT!", 80, 170);
            LCD.WriteAt("YOU LOST A LIFE!", 80, 190);
            Sleep(1.0);
             }
             //If the player is out of lives, notify them and give them the option to replay
             if(lives == 0){
                LCD.WriteAt("SORRY, YOU LOSE!", 60, 150);
                LCD.WriteAt("PLAY AGAIN?", 60, 170);
                LCD.DrawRectangle(100, 190, 85, 20);
                LCD.WriteAt("Replay", 100, 190);
                LCD.DrawRectangle(100, 210, 85, 20);
                LCD.WriteAt("Back", 100, 210);
                float x_replay, y_replay;
                float x_trashReplay, y_trashReplay;
                //The computer waits for the touch of the keypad to press
               while(!LCD.Touch(&x_replay,&y_replay)) {};
               //The computer waits for the touch of the keypad to release
                while(LCD.Touch(&x_trashReplay,&y_trashReplay)) {};
                // checks if replay or back button is clicked and performs corresponding task of button
                if((x_replay > 100 && x_replay < 185) && (y_replay > 190 && y_replay < 210)){
                  //continue game loop if replay is clicked
                  replay = 1;
                
                }
                else if((x_replay > 100 && x_replay < 185) && (y_replay > 210 && y_replay < 230)){
                  //return to menu if back is clicked
                  menu();
                }
             }
        }
      }
   }}}
        
        //This displays the game statistics including number of correct answers, total answered questions, and wrong answers
        //This part was written by Amogh
       else if((x_position > 158 && x_position < 300) && (y_position > 20 && y_position < 120)){
          LCD.Clear();
          //A plain background image is opened and displayed
          FEHImage background_plain;
          background_plain.Open("Images/Background_plainFEH.pic");
          background_plain.Draw(0, 0);   
          LCD.Update();
          LCD.SetFontColor(BLACK);
          //The text displaying the statistics is written to the screen
          LCD.WriteAt("Statistics: ", 80, 60);
          LCD.WriteAt("# of Q's Answered: ", 10, 100);
          LCD.WriteAt(std::to_string(statistics.numQAnswered), 230, 100);
          LCD.WriteAt("# of Q's Correct: ", 10, 120);
          LCD.WriteAt(std::to_string(statistics.numQCorrect), 230, 120);
          backButton();
         LCD.ClearBuffer();
        }
        //If the user clicks on instructions, they will see a quick summary on how to play the game
        //This part was written by Saket
         else if((x_position > 15 && x_position < 158) && (y_position > 120 && y_position < 220)){
          LCD.Clear();
          //A simple background image is opened and displayed
          FEHImage background_plain;
          background_plain.Open("Images/Background_plainFEH.pic");
          background_plain.Draw(0, 0);   
          LCD.Update();
          LCD.SetFontColor(BLACK);
          //The instructions on how to play the game are printed to the screen
          LCD.WriteAt("Instructions: ", 80, 60);
          LCD.WriteAt("Solve each problem", 10, 100);
          LCD.WriteAt("before time runs out!", 10, 120);
          LCD.WriteAt("Solve as many as possible!", 10, 160);
          backButton();
          LCD.ClearBuffer();
        }
        //If the player clicks the credits button, the names of the creators are shown
        //This part was written by Amogh 
         else if((x_position > 158 && x_position < 300) && (y_position > 120 && y_position < 220)){
          LCD.Clear();
          //A simple background image is opened and displayed
          //The image was found using the following source: “Indoor Dojo Room in Japan.” IStock, 31 Mar. 
          //2020, www.istockphoto.com/vector/web-gm1215850336-354288565. Accessed 4 Dec. 2023.

          FEHImage background_plain;
          background_plain.Open("Images/Background_plainFEH.pic");
          background_plain.Draw(0, 0);   
          LCD.Update();
          //The text attributing the game is shown 
          LCD.SetFontColor(BLACK);
          LCD.WriteAt("Developed by: ", 80, 60);
          LCD.WriteAt("Amogh Kuppa", 10, 100);
          LCD.WriteAt("Saket Kolluru", 10, 120);
          LCD.WriteAt("Thanks to FEH OSU", 10, 160);
          LCD.WriteAt("Proteus documentation", 10, 180);
          backButton();
          LCD.ClearBuffer();
        }
        
        
}
//The main method runs the program infinitley, until it is terminated
int main() {
   LCD.SetBackgroundColor(BLACK);
   LCD.Clear();
   menu();
   

   while (1) {
       LCD.Update();
       // Never end
   }
   return 0;
}
