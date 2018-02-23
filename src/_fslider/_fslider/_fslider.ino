#include <UTFT.h>
#include <URTouch.h>

//==== Creating Objects
UTFT    myGLCD(SSD1289, 38, 39, 40, 41); //Parameters should be adjusted to your Display/Schield model
URTouch  myTouch( 6, 5, 4, 3, 2);

//==== Defining Variables
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t SevenSegNumFont[];
int  currentLvl;
int currentPage;
int guiChange;
int bannerChange;
int footerChange;
int x, y;
int colorGreen[3] {37, 155, 55};
int colorYellow[3] {232, 150, 9};
int colorRed[3] {239, 7, 7};

//==== Top Variables
String topText;

//==== Slider Variables
int sliderStartPos;
int sliderEndPos;
int sliderPos;
int motionType;
boolean sliderInMotion;
int motionTime;
int sliderDirection;

void setup() {
  // Initial setup
  myGLCD.InitLCD(PORTRAIT);
  myGLCD.clrScr();
  myTouch.InitTouch();
  myTouch.setPrecision(PREC_MEDIUM);
  // Defining Pin Modes
  topText = "";
  currentLvl = -1; // Indicates the menu lvl
  currentPage = 0; // Indicates that we are at Home Screen
  guiChange = 1;
  bannerChange = 1;
  footerChange = 1;
  motionType = 0;
  sliderStartPos = 0;
  sliderEndPos = 0;
  sliderPos = 0;
  sliderInMotion = false;
  motionTime=0;
  sliderDirection=0;
  
  DrawGuiHandler();
  delay(1500);
  currentLvl = 0;
  if (guiChange == 1)
  {
    DrawGuiHandler();
    guiChange = 0;
  }

}

void loop() {
  clickHandler();
  if (guiChange == 1)
  {
    DrawGuiHandler();
    guiChange = 0;
  }
  if (bannerChange == 1)
  {
    BannerHandler();
    bannerChange = 0;
  }
  if (footerChange == 1)
  {
    FooterHandler();
    footerChange = 0;
  }

  if (sliderInMotion)
  {
    MotionHandler();
  }

}
