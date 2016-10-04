#define CALIBRATION      // enable calibration mode

// When in calibration mode, adjust the following factor until the servos move exactly 90 degrees
#define SERVOFAKTORLEFT 500
#define SERVOFAKTORRIGHT 700

// Zero-position of left and right servo
// When in calibration mode, adjust the NULL-values so that the servo arms are at all times parallel
// either to the X or Y axis
#define SERVOLEFTNULL 1700
#define SERVORIGHTNULL 700


#define LIFT0 1800  // Surface of drawing, as higher the number, closer to the surface
#define LIFT1 825  // How much high the arms will be between numbers
#define LIFT2 605  // going towards sweeper

// speed of liftimg arm, higher is slower
#define LIFTSPEED 3000

// origin points of left and right servo 
#define O1X 21
#define O1Y -18
#define O2X 48
#define O2Y -18

#define PARKX 76  //X position to the eraser
#define PARKY 52  //Y position to the eraser

#define ERASEMAXX 58 //The lenght of the erase

//If after erasing the arms dont came to the hight position, change this parameters
#define EPARKX PARKX+10 
#define EPARKY PARKY-6  
