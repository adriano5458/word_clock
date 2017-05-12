int ora = 0;
int minuti = 0;
int secondi = 0;
int pausam = 5;


void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  
}
void pausa(){
  digitalWrite(A0, 0);
  digitalWrite(A1, 0);
  digitalWrite(A2, 0);
  digitalWrite(A3, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  delayMicroseconds(1);
}
void setMinR(){
  digitalWrite(A3, 0);
  digitalWrite(A0, 1); //abilito row
  int minS = minuti % 5;
  if(minS != 0){
    if(minuti > 40){
      minS = 5 - minS;
      c4();// abilito meno
      //pausa();
      if(minS == 1){
        c6();
      }
      else if(minS == 2){
        
        c6();
        c8();
        
      }
      else if(minS == 3){
        c6();
        c8();
        c10();
        
      }
      else if(minS == 4){
        c6();
        c8();
        c10();
        c12();
      }
      
    }
    else{
      c2();// abilito piu
      
      if(minS == 1){
        c6();
      }
      else if(minS == 2){
        
        c6();
        c8();
        
      }
      else if(minS == 3){
        c6();
        c8();
        c10();
        
      }
      else if(minS == 4){
        c6();
        c8();
        c10();
        c12();
      }
    }
  }
}
void setR1(){
  digitalWrite(A3, 0);
  digitalWrite(A1, 1); //abilito row
  digitalWrite(A0, 0);
  digitalWrite(A2, 0);
  
  if(ora == 1 || ora == 13 || ora == 12 || ora == 0){
      c1();
      if(ora == 1 || ora == 13){
        c10();
        c11();
        c12();
        c13();
        c14();
        c15();
      }
  }
  else{
    c2();
    c3();
    c4();
    c5();
    c7();
    c8();
     
  }
}

void setR2(){
  digitalWrite(A3, 0);
  digitalWrite(A0, 1); //abilito row
  digitalWrite(A1, 1);
  digitalWrite(A2, 0);
  if(ora == 12){
    c1();
    c2();
    c3();
    c4();
    c5();
    c6();
    c7();
    c8();
    c9();
    c10();
    c11();
  }
  else if(ora == 2){
    c12();
    c13();
    c14();
  } 
}

void setR3(){
  digitalWrite(A3, 0);
  digitalWrite(A0, 0); //abilito row
  digitalWrite(A1, 0);
  digitalWrite(A2, 1);
  if(ora == 3){
    c1();
    c2();
    c3();
  }
  else if(ora == 4){
    c4();
    c5();
    c6();
    c7();
    c8();
    c9();
    c10(); 
    c11(); 
  }
  else if(ora == 6){
    c12();
    c13();
    c14();  
  }
}

void setR4(){
  digitalWrite(A3, 0);
  digitalWrite(A0, 1); //abilito row
  digitalWrite(A1, 0);
  digitalWrite(A2, 1);
  if(ora == 5){
    c1();
    c2();
    c3();
    c4();
    c5();
    c6();
    
  }
  else if(ora == 7){
    
    c10(); 
    c11();
    c12();
    c13();
    c14();
  }
}
void setR5(){
  digitalWrite(A3, 0);
  digitalWrite(A0, 0); //abilito row
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
  if(ora == 8){
    c1();
    c2();
    c3();
    c4();
    
    
  }
  else if(ora == 9){
    c5();
    c6(); 
    c7();
    c8();
    
  }
  else if(ora == 10){
    
    c10();
    c11();
    c12();
    c13();
    c14();
  }
}
void setR6(){
  digitalWrite(A3, 0);
  digitalWrite(A0, 1); //abilito row
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
  if(ora == 11){
    c1();
    c2();
    c3();
    c4();
    c5();
    c6();
    
  }
}
void setR7(){
  digitalWrite(A3, 1);
  digitalWrite(A0, 1); //abilito row
  digitalWrite(A1, 0);
  digitalWrite(A2, 0);
  if(ora == 24){
    c1();
    c2();
    c3();
    c4();
    c5();
    c6();
    c7();
    c8();
    c9();
    c10();
    
  }
}
void setR8(){
  digitalWrite(A3, 1);
  digitalWrite(A0, 0); //abilito row
  digitalWrite(A1, 1);
  digitalWrite(A2, 0);
  if(minuti > 32 && minuti < 39){
    c1();
    c2();
    c3();
    c4();
    c5();
    c6();
    c7();
    c8();
    c9();
    c10();
    c11();
    c12();
  }
}
void setR9(){
  digitalWrite(A3, 1);
  digitalWrite(A0, 1); //abilito row
  digitalWrite(A1, 1);
  digitalWrite(A2, 0);
  if(minuti >= 40){
    c1();
    c2();
    c3();
    c4();
  }
}
void setR10(){
  digitalWrite(A3, 1);
  digitalWrite(A0, 0); //abilito row
  digitalWrite(A1, 0);
  digitalWrite(A2, 1);
}
void setR11(){
  digitalWrite(A3, 1);
  digitalWrite(A0, 1); //abilito row
  digitalWrite(A1, 0);
  digitalWrite(A2, 1);
}
void setR12(){
  digitalWrite(A3, 1);
  digitalWrite(A0, 0); //abilito row
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
}
void setR13(){
  digitalWrite(A3, 1);
  digitalWrite(A0, 1); //abilito row
  digitalWrite(A1, 1);
  digitalWrite(A2, 1);
}
void c1(){
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  delay(pausam);
}
void c2(){
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  delay(pausam);
}
void c3(){
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  delay(pausam);
}
void c4(){
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  delay(pausam);
}
void c5(){
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  delay(pausam);
}
void c6(){
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  delay(pausam);
}
void c7(){
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(9, 0);
  delay(pausam);
}
void c8(){
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  delay(pausam);
}
void c9(){
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  delay(pausam);
}
void c10(){
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  delay(pausam);
}
void c11(){
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 1);
  delay(pausam);
}
void c12(){
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  digitalWrite(9, 1);
  delay(pausam);
}
void c13(){
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(9, 1);
  delay(pausam);
}
void c14(){
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  digitalWrite(9, 1);
  delay(pausam);
}
