//Tommy Truong

//our project shows a small setup where if you press a button
//the mouse will go to where it needs to be
//in this case when a button is pressed, that is where the mouse will go

//the first set of int sets the names and variables
int front_wall = 1; 
int right_wall = 0;
int left_wall = 2;
int turn_around = 12; 
int go_right = 6; 
int go_left = 9;
int go_forward = 10;
 //this part would indicate the led and switches for input and output
void setup() 
{
  pinMode(right_wall, INPUT_PULLUP);
  pinMode(left_wall, INPUT_PULLUP);
  pinMode(front_wall, INPUT_PULLUP);
  pinMode(go_right, OUTPUT);
  pinMode(go_left, OUTPUT);
  pinMode(go_forward, OUTPUT);
   
}
 //this is where the program starts
void loop() 
{
  //since this is a continuous loop, this would make the led to turn off by default as we would want them to turn off after clicking the buttons
  digitalWrite (go_right, LOW);
  digitalWrite (go_left, LOW);
  digitalWrite (go_forward, LOW);
  digitalWrite (turn_around, LOW);
 //this will light up the right wall and indicate that the mouse can go right
 if (digitalRead (right_wall) == 0)
 { 
  digitalWrite (go_right, HIGH);
 }
  else
  {
    //this shows that if the right and front walls are down then the mouse will go left
    if (digitalRead (left_wall) == 0)
    {
      digitalWrite (go_left, HIGH);
    }
    else
    {
      //if the right wall were not to be pressed, then the mouse can go front if pressed down
      if (digitalRead (front_wall) == 0)
    {
      digitalWrite (go_forward, HIGH);
    }
        else
        //as a default the light will be turned on and if no buttons are pressed then the mouse will turn around
        {
          digitalWrite (turn_around, HIGH);
      }
  }
 }
}

