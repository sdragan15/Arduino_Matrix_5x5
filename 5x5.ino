void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);   /// rows
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

  
  pinMode(8,OUTPUT);   /// colums
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
}

int Hz = 4;

int t = 700;

  int A[] = {0,1,1,0,0,
             1,0,0,1,0,
             1,1,1,1,0,
             1,0,0,1,0,
             1,0,0,1,0};

  int B[] = {1,1,1,0,0,
             1,0,0,1,0,
             1,1,1,0,0,
             1,0,0,1,0,
             1,1,1,0,0};

  int V[] = {1,0,0,0,1,
             1,0,0,0,1,
             1,0,0,0,1,
             0,1,0,1,0,
             0,0,1,0,0};

  int space[] = {0,0,0,0,0,
             0,0,0,0,0,
             0,0,0,0,0,
             0,0,0,0,0,
             0,0,0,0,0};

  int S[] = {0,1,1,0,0,
             1,0,0,0,0,
             0,1,0,0,0,
             0,0,1,0,0,
             1,1,0,0,0};

  int T[] = {1,1,1,1,1,
             0,0,1,0,0,
             0,0,1,0,0,
             0,0,1,0,0,
             0,0,1,0,0};

  int R[] = {1,1,1,0,0,
             1,0,0,1,0,
             1,1,1,0,0,
             1,0,1,0,0,
             1,0,0,1,0};

  int D[] = {1,1,1,0,0,
             1,0,0,1,0,
             1,0,0,1,0,
             1,0,0,1,0,
             1,1,1,0,0};

  int I[] = {1,1,1,0,0,
             0,1,0,0,0,
             0,1,0,0,0,
             0,1,0,0,0,
             1,1,1,0,0};

  int O[] = {0,1,1,0,0,
             1,0,0,1,0,
             1,0,0,1,0,
             1,0,0,1,0,
             0,1,1,0,0};

  int quest[] = {0,1,1,1,0,
                 1,0,0,0,1,
                 0,0,1,1,0,
                 0,0,0,0,0,
                 0,0,1,0,0};

  int G[] = {0,1,1,1,0,
             1,0,0,0,0,
             1,0,1,1,0,
             1,0,0,1,0,
             0,1,1,0,0};

  int E[] = {1,1,1,1,0,
             1,0,0,0,0,
             1,1,1,0,0,
             1,0,0,0,0,
             1,1,1,1,0};

  int Z[] = {1,1,1,1,1,
             0,0,0,1,0,
             0,0,1,0,0,
             0,1,0,0,0,
             1,1,1,1,1};

  int J[] = {0,0,1,0,0,
             0,0,1,0,0,
             0,0,1,0,0,
             1,0,1,0,0,
             0,1,0,0,0};

  int K[] = {1,0,0,1,0,
             1,0,1,0,0,
             1,1,0,0,0,
             1,0,1,0,0,
             1,0,0,1,0};

  int L[] = {1,0,0,0,0,
             1,0,0,0,0,
             1,0,0,0,0,
             1,0,0,0,0,
             1,1,1,0,0};

  int P[] = {1,1,1,0,0,
             1,0,0,1,0,
             1,1,1,0,0,
             1,0,0,0,0,
             1,0,0,0,0};

  int U[] = {1,0,0,1,0,
             1,0,0,1,0,
             1,0,0,1,0,
             1,0,0,1,0,
             0,1,1,0,0};

  int F[] = {1,1,1,0,0,
             1,0,0,0,0,
             1,1,1,0,0,
             1,0,0,0,0,
             1,0,0,0,0};

  int H[] = {1,0,0,1,0,
             1,0,0,1,0,
             1,1,1,1,0,
             1,0,0,1,0,
             1,0,0,1,0};

  int C[] = {0,1,1,0,0,
             1,0,0,1,0,
             1,0,0,0,0,
             1,0,0,1,0,
             0,1,1,0,0};

  int N[] = {1,0,0,1,0,
             1,0,0,1,0,
             1,1,0,1,0,
             1,0,1,1,0,
             1,0,0,1,0};

  int M[] = {1,0,0,0,1,
             1,0,0,0,1,
             1,1,0,1,1,
             1,0,1,0,1,
             1,0,0,0,1};

  int uzvik[] = {0,0,1,0,0,
                 0,0,1,0,0,
                 0,0,1,0,0,
                 0,0,0,0,0,
                 0,0,1,0,0};

  int one[] = {0,0,1,0,0,
               0,1,1,0,0,
               1,0,1,0,0,
               0,0,1,0,0,
               0,0,1,0,0};

  int two[] = {0,1,1,0,0,
               1,0,0,1,0,
               0,0,1,0,0,
               0,1,0,0,0,
               1,1,1,1,0};


  int tree[] =  {1,1,1,0,0,
                 0,0,0,1,0,
                 0,1,1,0,0,
                 0,0,0,1,0,
                 1,1,1,0,0};

  int four[] =  {1,0,0,1,0,
                 1,0,0,1,0,
                 1,1,1,1,0,
                 0,0,0,1,0,
                 0,0,0,1,0};

  int five[] =  {1,1,1,1,0,
                 1,0,0,0,0,
                 1,1,1,0,0,
                 0,0,0,1,0,
                 1,1,1,0,0};

  int six[] = {0,1,1,1,0,
               1,0,0,0,0,
               1,1,1,0,0,
               1,0,0,1,0,
               0,1,1,0,0};

  int seven[] = {1,1,1,1,0,
                 0,0,1,0,0,
                 0,1,0,0,0,
                 0,1,0,0,0,
                 0,1,0,0,0};

  int eight[] = {0,1,1,0,0,
                 1,0,0,1,0,
                 0,1,1,0,0,
                 1,0,0,1,0,
                 0,1,1,0,0};

  int nine[] =  {0,1,1,0,0,
                 1,0,0,1,0,
                 0,1,1,1,0,
                 0,0,0,1,0,
                 1,1,1,0,0};

  int zero[] =  {0,1,1,0,0,
                 1,0,0,1,0,
                 1,0,0,1,0,
                 1,0,0,1,0,
                 0,1,1,0,0};

  int p[] = {0,0,0,0,0,
             0,0,0,0,0,
             0,0,0,0,0,
             0,0,0,0,0,
             0,0,0,1,0};

void loop() {
  // put your main code here, to run repeatedly:

    //open(p,10000,0);
//    sara1(2,100);
//    kaplja(10,300);
//    berke(1000);

  char* text = "HERE YOU PUT YOUR TEXT WITH CAPITAL ON!";
  
  write(text,300);
  kaplja(5,300);
    
  

}

void write(char* s, int t){
  int n=0;
  while(s[n] != NULL){
    if(s[n] == 'A'){
      right(A,t);
    }
    else if(s[n] == 'B'){
      right(B,t);
    }
    else if(s[n] == 'C'){
      right(C,t);
    }
    else if(s[n] == 'D'){
      right(D,t);
    }
    else if(s[n] == 'E'){
      right(E,t);
    }
    else if(s[n] == 'F'){
      right(F,t);
    }
    else if(s[n] == 'G'){
      right(G,t);
    }
    else if(s[n] == 'I'){
      right(I,t);
    }
    else if(s[n] == 'J'){
      right(J,t);
    }
    else if(s[n] == 'K'){
      right(K,t);
    }
    else if(s[n] == 'L'){
      right(L,t);
    }
    else if(s[n] == 'M'){
      right(M,t);
    }
    else if(s[n] == 'N'){
      right(N,t);
    }
    else if(s[n] == 'O'){
      right(O,t);
    }
    else if(s[n] == 'P'){
      right(P,t);
    }
    else if(s[n] == 'R'){
      right(R,t);
    }
    else if(s[n] == 'S'){
      right(S,t);
    }
    else if(s[n] == 'T'){
      right(T,t);
    }
    else if(s[n] == 'U'){
      right(U,t);
    }
    else if(s[n] == 'F'){
      right(F,t);
    }
    else if(s[n] == 'G'){
      right(G,t);
    }
    else if(s[n] == 'H'){
      right(H,t);
    }
    else if(s[n] == 'Z'){
      right(Z,t);
    } 
    else if(s[n] == 'V'){
      right(V,t);
    }
    n++;
  }
}

void right(int* a, int t){
  int n=0;
  int b[25];

  for(int i=0; i<25; i++){
    b[i] = 0;
  }
  
  for(int k=0; k<=9; k++){
    n=0;
    open(b,t,0);
    for(int i=0; i<=4; i++){
      for(int j=0; j<=4; j++){
        if(j == 4){
          if(k>4){
            b[n] = 0;
          }
          else{
            b[n] = a[n-4+k];
          }
          
        }
        else{
          b[n] = b[n+1];
        }
        
        n++;
      }
    }
    
  }
  
}

void kaplja(int t, int fast){
  int a1[] = {1,1,1,1,1,
              1,0,0,0,1,
              1,0,1,0,1,
              1,0,0,0,1,
              1,1,1,1,1};

  int a2[] = {0,0,0,0,0,
              0,1,1,1,0,
              0,1,0,1,0,
              0,1,1,1,0,
              0,0,0,0,0};
  int n=0;
  while(n<t){
    open(a1,fast,0);
    open(a2,fast,0);
    n++;
  }
 
}

void sara1(int t, int fast){
  int m = 1;
  while(m<=t){
    int a[25];
    int n=0;
    while(n<25){
      for(int i=0; i<=24; i++){
          if(i==n){
            a[i] = 1;
          }
          else{
            a[i] = 0;
          }
      }
      open(a,fast,0);
      n++;
    }
    m++;
  }
  
  
}

void welcome(int t){
  open(D,t,10);
  open(O,t,10);
  open(B,t,10);
  open(R,t,10);
  open(O,t,10);
  open(D,t,10);
  open(O,t,10);
  open(S,t,10);
  open(L,t,10);
  open(I,t,10);
  open(uzvik,t,10);
  open(space,2*t,10);
}

void berke(int t){
  open(S,t,10);
  open(T,t,10);
  open(A,t,10);
  open(space,t,10);
  open(R,t,10);
  open(A,t,10);
  open(D,t,10);
  open(I,t,10);
  open(S,t,10);
  open(space,t,10);
  open(S,t,10);
  open(I,t,10);
  open(S,t,10);
  open(O,t,10);
  open(quest,2*t,10);
  open(space,t,10);
}

void open(int* a, int t, int v){
  int f=0;
  int b;
  while(t>=f){
    int n=0;
    for(int i=0; i<5; i++){
      for(int k=4; k<=8; k++){
        if(k!=4+i){
          digitalWrite(k,LOW);
        }
        else{
          digitalWrite(k,HIGH);
           b = k;
        }
      }
      for(int j=0; j<5; j++){
        if(a[n] == 0){
          digitalWrite(13-j,LOW);
        }
        else{
          digitalWrite(13-j,HIGH);
        }
        n++;
      }
      
      
      delay(Hz);
      digitalWrite(b,LOW);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      digitalWrite(10,LOW);
      digitalWrite(9,LOW);
 
      f+=Hz;
    }
  }
  delay(v);
  
}
