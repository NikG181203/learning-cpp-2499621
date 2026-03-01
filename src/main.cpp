#include <iostream>
#include <cstdlib> //2 Header für rand
#include <ctime>
#define ARRAYLAENGE 5

//Aufgabe4.1
/*
void ausgabeMeinArray(int Array[], int laenge){
  for(int i = 0; i < laenge; i++){
    std::cout << "Inhalt des Arrays an Position " << i << " enthält: " << Array[i] << std::endl;
  }
}
int main(){
  int size = ARRAYLAENGE;
  int meinArray[size] = {1,2,3,4,5};
  ausgabeMeinArray(meinArray, size);
  return 0;
}
*/

//Aufgabe4.2
/*
float funct(float a, float b){
  float ergebnis = a * (b+2);
  return ergebnis;
}
int main(){
  float a = 2.5;
  float b = 3.0;
  std::cout << "Ergebnis der Berechnung: " << funct(a, b) << std::endl;
  return 0;
}
*/

/*
//Aufgabe4.3
bool ret(int a, int b, int c){
  if((a<b)&&(b<c)){
    return true;
  } else{
    return false;
  }
}
int main(){
  int a = 1;
  int b = 2;
  int c = 3;
  std::cout << "Funktionsaufruf ist " << ret(a, b, c) << std::endl;
}
*/


//Einarbeitung
/*
int main()
{
  // standart cout für Konsolenausgabe
  // std::cout << "Hallo ein Name ist Nikola!" << std::endl;


  // Datentypen und Berechnung
  /*
  int a = -5;
  uint b = 20;
  std::cout << "Meine Integer Variable: " << a << std::endl;
  std::cout << "Meine Unsinged Integer Variable: " << b << std::endl;
  */
  // Aufgabe - Summe Integer
  /*
  int erste_variable = 4;
  int zweite_variable = 2;
  int ergebnis = erste_variable + zweite_variable;
  std::cout << "Die Summe der Integer " << erste_variable << " und " << zweite_variable << " ist " << ergebnis << std::endl;
  */
  // Aufgabe - float
  /*
  float erste_variable = -3.5;
  float zweite_variable = -2;
  int ergebnis = erste_variable * zweite_variable;
  std::cout << "Das Ergebnis der Multiplkation der Float Zahlen " << erste_variable << " und " << zweite_variable << " ist " << ergebnis;
  */
  // Aufgabe - bool
  /*
  bool erste_variable = true;
  bool zweite_variable = false;
  std::cout << "Boolscher Wert der ersten Variable: " << erste_variable << std::endl;
  std::cout << "Boolscher Wert der zweiten Variable: " << zweite_variable << std::endl;
  */
  //Aufgabe - char
  /*
  char erste_var = 'x';
  std::cout << "Meine Variable: " << erste_var << std::endl;
  */
  //Aufgabe - array
  /*
  int mein_array [5] = {};
  mein_array[3] = 15;
  std::cout << "Array an Position 3 enthält: " << mein_array[2] << std::endl;
  std::cout << "Array an Position 4 enthält: " << mein_array[3] << std::endl;
  */


  //Vergleiche und Schleifen
  //if
  /*
  float var_1 = 5.7;
  float var_2 = 6.0;
  if(var_1 < var_2){ //AND: &&, ODER: ||, NOT: !
    std::cout << "IF-Bedingung wurde erfüllt" << std::endl;
  }
  */
  //if, else
  /*
  float var_1 = 5.7;
  float var_2 = 6.0;
  float var_3 = 4.3;
  if (var_1 > var_2)
  { 
    std::cout << "IF-Bedingung wurde erfüllt" << std::endl;
  }
  else if(var_1 > var_3){
    std::cout << "ELSE IF-Bedingung wurde erfüllt" << std::endl;
  }
  else{
    std::cout << "ELSE-Pfad wird ausgeführt" << std::endl;
  }
  */
  //for
  /*
  int array[5] = {};
  for(int index = 0; index < 5; index++){
    //std::cout << "Wert des Index: " << std::endl;
    array[index] = index * 3;
    std::cout << "Wert im Array: " << array[index] << std::endl;
  }
  */
  //while
  /*
  int var = 2;
  while(var < 20){
    std::cout << "aktuelle Variable: " << var << std::endl;
    var = var*2;
  }
  */
  //Aufgabe 1
  /*
  int array[5] = {};
  int g6 = 0;
  for (int index = 0; index < 5; index++)
  {
    // std::cout << "Wert des Index: " << std::endl;
    array[index] = index * 3;
    std::cout << "Wert im Array: " << array[index] << std::endl;
    if (array[index] >= 6)
    {
      g6++;
    }
  }
  std::cout << "Anzahl der Werte größer gleich 6: " << g6 << std::endl;
  */
  //Aufgabe 2
  /*
  int var1 = 10;
  int var2 = 2;
  while(!(var2 > var1)){
    var1 += 1;
    var2 = var2 +2;
  }
  std::cout << "Variable 1 ist mit " << var1 << " kleiner als Variable 2 mit " << var2 << std::endl;
  */
 /*
  return 0;
}
*/


//Aufgabe 5
/*
int solve(int user, int comp){
  if(user == comp){
    return 2;
  }else if(
    (user==1 && comp==2) ||
    (user==2 && comp==3) ||
    (user==3 && comp==1)
  ){
    return 1;
  }else{
    return 0;
  }
}
//User Eingabe -> std::cin >> VARIABLE
int main(){ //Schere = 1, Stein = 2, Papier = 3
  std::cout << "User wählt: ";
  int user_var; // Variabe für Eingabe in Terminal
  std::cin >> user_var; // Eingabe speichern
  std::cout <<"User input ist " << user_var << std::endl;
  std::srand(std::time(0)); //Initialisierung von Randomiser
  int comp_var = std::rand()%3 +1; //Zahlen zwischen 1 und 3
  std::cout << "Computer wählt: " << comp_var << std::endl;
  int returned = solve(user_var, comp_var);
  if(returned==0){
    std::cout << "User hat gewonnen!" << std::endl;
  }else if(returned==1){
    std::cout << "Computer hat gewonnen!" << std::endl;
  }else{
    std::cout << "Unentschieden!" << std::endl;
  }
  return 0;
}
*/


//Aufgabe 6
bool solve(int array[]);
bool winner(int array[], int a);
char wandler(int a);
void spielfeld(int array[]);

int main(){
  bool play = true;
  while(play){
    int array[9] = {};
    while(true){
      std::cout << "Feld für Zug wählen: "; //Eingabeaufforderung
      int user = 0; //Feldwahl
      std::cin >> user; //user Input
      array[user-1] = 1; //1-9 auf 0-8 für User=1
      spielfeld(array); 
      if(solve(array)){
        return 0;
      }
      std::srand(std::time(0)); //rand Init
      int comp = std::rand()%9; //rand Modulo 0-8
      /*if(array[comp] == 1){
        comp += 1;
        if(comp < 9){

        }
      }else{
        array[comp] == 2;
      }*/
      std::cout << std::endl;
      spielfeld(array);
      if (solve(array))
      {
        return 0;
      }
    }
    /*
    std::cout << std::endl;
    char cont = 'n';
    std::cin >> cont;
    if(cont == 'n'){
      play == false;
    }
      */
  }
  return 0;
}

bool solve(int array[]){
  int win = 0;
  int voll = 0;
  //volle Karte
  for(int i = 0; i<9;i++){
    if((array[i] == 1) || (array[i] == 2)){
      voll += 1;
    }
    if(voll == 9){
      win == 3;
    }
  }
  //Gewinne
  if(win == 0){
    if(winner(array, 1)){
      win = 1;
    }else if(winner(array, 2)){
      win = 2;
    }
  }
  if(win == 0){
    return false;
  }else if(win == 1){
    std::cout << "Spieler hat gewonnen!" << std::endl;
    return true;
  }else if(win == 2){
    std::cout << "Computer hat gewonnen!" << std::endl;
    return true;
  }else if(win == 3){
    std::cout << "Karte ist voll. Kein Gewinner." << std::endl;
    return true;
  }
};

bool winner(int array[], int a){
  //Reihe
  if ((array[0] == a) && (array[1] == a) && (array[2] == a)){
    return true;
  }
  if ((array[3] == a) && (array[4] == a) && (array[5] == a)){
    return true;
  }
  if ((array[6] == a) && (array[7] == a) && (array[8] == a)){
    return true;
  }
  //Spalte
  if ((array[0] == a) && (array[3] == a) && (array[6] == a)){
    return true;
  }
  if ((array[1] == a) && (array[4] == a) && (array[7] == a)){
    return true;
  }
  if ((array[2] == a) && (array[5] == a) && (array[8] == a)){
    return true;
  }
  //Diagonal
  if ((array[0] == a) && (array[4] == a) && (array[8] == a)){
    return true;
  }
  if ((array[2] == a) && (array[4] == a) && (array[6] == a)){
    return true;
  }
}

char wandler(int a)
{ // Spieler: 1=X, Comp: 2=O, leer = ' '
  if (a == 1)
  {
    return 'X';
  }
  else if (a == 2)
  {
    return 'O';
  }
  else
  {
    return ' ';
  }
}

void spielfeld(int array[])
{
  std::cout << wandler(array[0]) << " | " << wandler(array[1]) << " | " << wandler(array[2]) << std::endl;
  std::cout << wandler(array[3]) << " | " << wandler(array[4]) << " | " << wandler(array[5]) << std::endl;
  std::cout << wandler(array[6]) << " | " << wandler(array[7]) << " | " << wandler(array[8]) << std::endl;
}