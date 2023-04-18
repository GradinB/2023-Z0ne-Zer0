#include <kipr/wombat.h>

int main()
{
 
int counter = 10;
int left = 3;
int right = 0;
int forward = 100;
int rforward = 95;
int rback = -95;
int back = -100;
int up = 1570;
int down = 0;
int out = 1170;
int close = 1120;
int open = 2047;
int arm = 0;
int claw = 2;
  printf("We Will Win!\n");

enable_servos();

    wait_for_light(0);
    shut_down_in(119);
    while (counter < 1100)
    {
        
        counter = counter + 35;
        set_servo_position(0, counter); // set up
        msleep(50);
	
        
    }
    msleep(100);

set_servo_position(claw, open);
msleep(500);


motor(right, rforward); // go to bg
  motor(left, forward);
  msleep(2500);
    motor(right, rforward); // go to bg part turn
  motor(left, back);
  msleep(100);
    motor(right, rforward); // go to bg continued
  motor(left, forward);
  msleep(750);
ao();
msleep(1000);


set_servo_position(claw, 1000);
msleep(500);
    while (counter <  2300)
    {
        msleep (100);
        counter = counter + 30;
        set_servo_position(arm, counter); // set lift uper

        
    }
    msleep(500);
ao();
msleep(500);
     motor(right, rback); // back it up
  motor(left, back);
  msleep(100);
    ao();
 msleep(500);

    
    


motor(right, 20); // turn 
  motor(left, -25);
  msleep(2800);
    ao();
msleep(500);
    while (counter >  40)
    {
        msleep (100);
        counter = counter - 35;
        set_servo_position(arm, counter); // set down

        
    }
ao();
    msleep(1000);
     motor (right, rforward); // up up away
  motor(left, forward);
  msleep(3800);
    ao();
msleep(2000);
   motor(right, 20); // turn 2 electric bogalo
 motor(left, -25);
 msleep(3700);
    
   ao();
   msleep(1000);
    
    
    motor(right, 45); // go to drop bg
  motor(left, 50);
  msleep(4000);
ao();
msleep(500);


set_servo_position(claw, open);
msleep(500);

ao();
 msleep(500);
    while (counter < 200)
    {
        
        counter = counter + 20;
        set_servo_position(0, counter); // set up
        msleep(100);
	
        
    }
    msleep(500);
    ao();
    msleep(50);
    motor(right, rforward); // shake
  motor(left, back);
  msleep(500);
    
    motor(right, rback); // SHAKE x2
  motor(left, forward);
  msleep(500);
    ao();
    msleep(500);
    
    while (counter < 1600)
    {
        
        counter = counter + 35;
        set_servo_position(0, counter); // set up
        msleep(100);
	
        
    }
    msleep(500);
    

    
    motor(right, rback); // back it up
  motor(left, back);
  msleep(1500);
    ao();
 msleep(500);
    
    motor(right, 50); // turn
  motor(left, -55);
  msleep(3000);
    ao();
 msleep(500);
    
  
    
    while (counter > 1100)
    {
        
        counter = counter - 20;
        set_servo_position(0, counter); // set up
        msleep(50);
	
        
    }
    ao();
    msleep(500);
    
    set_servo_position(claw, close);
msleep(500);
    ao();
    msleep(100);
    
    while (counter <  1600)
    {
        msleep (100);
        counter = counter + 30;
        set_servo_position(arm, counter); // set lift up
msleep(50);
        
    }
   
    
ao();
    msleep(500);
    
    motor(right, rback); // back it up
  motor(left, back);
  msleep(1500);
    ao();
 msleep(500);
    
    while (counter >  300)
    {
        msleep (100);
        counter = counter - 20;
        set_servo_position(arm, counter); // set down

        
    }
ao();
    msleep(1000);
    motor(right, 50); // turn
  motor(left, -55);
  msleep(3000);
    ao();
 msleep(500);
    
    
     set_servo_position(claw, open);
    
    
    ao();
    msleep(500);
    
    //cube 1 got
       
    
    motor(right, 50); // turn
  motor(left, -55);
  msleep(3000);
    ao();
 msleep(500);
    
    motor (right, rforward); // up up away
  motor(left, forward);
  msleep(1500);
    ao();
msleep(2000);
    
  
    
    while (counter < 850)
    {
        
        counter = counter + 20;
        set_servo_position(0, counter); // set up
        msleep(50);
	
        
    }
    ao();
    msleep(500);
    
    set_servo_position(claw, close);
msleep(500);
    ao();
    msleep(100);
    
    while (counter <  1100)
    {
        msleep (100);
        counter = counter + 30;
        set_servo_position(arm, counter); // set lift up
msleep(50);
        
    }
   
    
ao();
    msleep(500);
    
    motor(right, rback); // back it up
  motor(left, back);
  msleep(1500);
    ao();
 msleep(500);
    
    while (counter >  700)
    {
        msleep (100);
        counter = counter - 20;
        set_servo_position(arm, counter); // set down

        
    }
ao();
    msleep(1000);
    motor(right, 50); // turn
  motor(left, -55);
  msleep(3500);
    ao();
 msleep(500);
    
    
     set_servo_position(claw, open);
    
    
    ao();
    msleep(500);
    
    
    //this is preset time\/
    while (counter >  11)
    {
        counter = counter - 10;
        set_servo_position(arm, counter); // set down
        msleep(5);

        
    }
    ao();
 msleep(1000);
    set_servo_position(claw, close);
    ao();
    msleep(500);
    
    
    
    

disable_servos();
    return 0;
}


 
