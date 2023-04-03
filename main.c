#include <kipr/wombat.h>

int main()
{
 
int counter = 10;
int left = 3;
int right = 0;
int forward = 100;
int rforward = 88;
int rback = -95;
int back = -100;
int up = 1570;
int down = 0;
int out = 1170;
int close = 1150;
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
  motor(left, 0);
  msleep(270);
    motor(right, rforward); // go to bg continued
  motor(left, forward);
  msleep(800);
ao();
msleep(1000);


set_servo_position(claw, close);
msleep(500);
    while (counter <  1600)
    {
        msleep (100);
        counter = counter + 30;
        set_servo_position(arm, counter); // set lift uper

        
    }
    msleep(500);
ao();
msleep(500);
    
    motor (right, rforward); // forward
  motor(left, forward);
  msleep(400);
    ao();
    msleep(500);

    motor (right, rback); // back again
  motor(left, back);
  msleep(600);
    ao();
msleep(500);

motor(right, 20); // turn 
  motor(left, -25);
  msleep(3000);
    ao();
msleep(500);
    while (counter >  40)
    {
        msleep (100);
        counter = counter - 20;
        set_servo_position(arm, counter); // set down

        
    }
ao();
    msleep(1000);
     motor (right, rforward); // up up away
  motor(left, forward);
  msleep(3500);
    ao();
msleep(2000);
   motor(right, 20); // turn 2 electric bogalo
 motor(left, -25);
 msleep(2800);
    
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
    
    motor (right, 100); // shake that bot
  motor(left, -100);
  msleep(300);
    ao();
    msleep(500);
  
    motor (right, -100); // be GONE
  motor(left, 100);
  msleep(300);
    ao();
msleep(500);
    
    while (counter < 1500)
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
    
    while (counter >  100)
    {
        msleep (100);
        counter = counter - 20;
        set_servo_position(arm, counter); // set down

        
    }
ao();
    msleep(1000);
    motor(right, 50); // turn
  motor(left, -55);
  msleep(2500);
    ao();
 msleep(500);
    motor (right, rforward); // go to drop cube
  motor(left, forward);
  msleep(1000);
    ao();
    msleep(500);
    
     set_servo_position(claw, open);
    
    
    ao();
    msleep(500);
    
    
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


 
