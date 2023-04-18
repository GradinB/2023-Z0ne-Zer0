#include <kipr/wombat.h>
void swept();
void sweep();
int main()
{
    printf("Hello World\n");
    create_connect();
    enable_servos();
   shut_down_in(119);
     
    wait_for_light(0);
    create_stop();
    msleep (1600);
    
    set_servo_position (0,1200);
    msleep (500);
    
    create_drive_direct(200,-200);
    msleep (300);
    
    create_drive_direct(-200,-200);
    msleep (1480);
    
    set_servo_position(0,650);
    msleep (500);
    
    create_drive_direct(200,-200);
    msleep (665);
    
    
    
    swept();
    create_stop();
    msleep (5000);
    create_drive_direct(200,-200);
    msleep (25);
    swept();
    create_stop();
    msleep (56);
    set_servo_position (0,600);
    msleep (100);
    
    create_drive_direct(-140,-140);
     msleep (830);
        
     create_drive_direct(100,-140);
    msleep (20);
    create_stop();
    msleep(10);
    
    ao();
    msleep (320);
    set_servo_position (0,1560);
    msleep (100);
    
     create_drive_direct(-100,140);
    msleep (100);
        
    create_drive_direct(-132,-145);
    msleep (1150);
    
     ao();
    msleep (300);
    
    set_servo_position(0,750);
    msleep (100);
    
    create_drive_direct(140,-100);
    msleep (110);
    
    //////////////
    
    
   create_drive_direct(-150,-150);
    msleep (500);
    
    create_drive_direct(-100,-100);
    msleep (1000);
    
    set_servo_position (0,750);
    msleep (100);
    
    create_drive_direct(-100,-100);
    msleep (50);
    
     set_servo_position (0,1600);
    msleep (100);
    
    create_drive_direct(-100,-100);
    msleep (80);
    
    set_servo_position (0,750);
    msleep (100);
    
    create_drive_direct(200,-200);
    msleep (500);
        
    create_drive_direct(200,200);
    msleep (800);
    
    
    create_stop(); 
    msleep(1000);
    
    create_drive_direct(200,-200);
    msleep (1400);
    
    create_drive_direct(-100,-100);
    msleep (1500);
    
    create_stop();
    msleep (8000);
    
     create_drive_direct(-100,-100);
    msleep (2500); //
    
    create_drive_direct(-200,200);
    msleep (500);
    
    create_drive_direct(-200,-200);
    msleep (1000);
    
    create_stop();
    msleep (100);
    
    set_servo_position(0,1560);
    msleep (100);
    
     create_drive_direct(200,200);
    msleep (2000);
    
     create_drive_direct(-200,200);
    msleep (1400);
    
     create_drive_direct(-200,-200);
    msleep (2300);
    
     create_drive_direct(200,-200);
    msleep (400);
    
     create_drive_direct(-200,-200);
    msleep (1150);
    
    set_servo_position(0,750);
    msleep (100);
    
    create_drive_direct(200,-200);
    msleep (1500);
    
    create_drive_direct(-200,-200);
    msleep (5000);
    
    create_disconnect();
    disable_servos();
    return 0;
    //////////////////////////////////////////////////////////////end code
}
void sweep()
{
enable_servos();
     create_drive_direct(-125,-140);
     msleep (1320);
        
    set_servo_position (0,1560);
    msleep (100);
        
    create_drive_direct(-136,-121);
    msleep (1350);
        
    set_servo_position(0,750);
    msleep (100);
}

void swept()
{
enable_servos();
     create_drive_direct(-140,-140);
     msleep (1200);
        
    ao();
    msleep (300);
    
    set_servo_position (0,1560);
    msleep (100);
        
    create_drive_direct(-131,-144);
    msleep (1150);
    
     ao();
    msleep (300);
    
    set_servo_position(0,750);
    msleep (100);
        
}