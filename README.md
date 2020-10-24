# Arduino_Matrix_5x5
Arduino program for making text and a lot of different shapes on led 5x5 matrix.

If you want to write something, make:
  char* text = "write something";
  int speed_of_text = 300;
  write(text,speed_of_text);
  
You have some paterns:
  -kaplja(num_of_repeats,speed);
  -sara(num_of_repeats,speed);
  -welcome(speed);
  
If you want to change fps, you can do it by changing Hz;
  -int Hz = something;
