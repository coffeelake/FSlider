void DrawGuiHandler() {
  if (currentLvl == -1)
  {
    //Startup Splash
    myGLCD.setBackColor(0, 0, 0); // Sets the background color of the area where the text will be printed to black
    myGLCD.setColor(255, 255, 255); // Sets color to white
    myGLCD.setFont(BigFont); // Sets font to big
    myGLCD.print("F-SLIDER", CENTER, 10); // Prints the string on the screen
    myGLCD.setColor(244, 134, 66); // Sets color to red
    myGLCD.drawLine(0, 32, 319, 32); // Draws the red line
    myGLCD.setColor(255, 255, 255); // Sets color to white
    myGLCD.setFont(SmallFont); // Sets the font to small
    myGLCD.print("git coffeelake/FSlider", CENTER, 41); // Prints the string
  }
  // this is the a>b function
  else if (currentLvl == 0)
  {
    drawBg();
    myGLCD.setColor(0, 162, 255);
    drawButton("A --> B", 0);
    drawButton(" ", 1);
    drawButton(" ", 2);
    drawButton(" ", 3);
  }
  // this is the a>b function ----> submenu
  else if (currentLvl == 1)
  {
    drawBg();
    drawBanner("A>B");
    drawButton("Choose endpoint", 0);
    drawHalfButton("<<", 1, true);
    drawHalfButton(">>", 1, false);
    drawButton("Ok >>", 2);
    drawButton("<< Back", 3);
  }
  else if (currentLvl == 2)
  {
    drawBg();
    drawButton("--", 0);
    drawButton("--", 1);
    drawButton("--", 2);
    drawButton("<< Back", 3);
  }
  else if (currentLvl == 3)
  {
    drawBg();
    drawButton("--", 0);
    drawButton("--", 1);
    drawButton("--", 2);
    drawButton("<< Back", 3);
  }
  else if (currentLvl == 4)
  {
    drawBg();
    drawButton("--", 0);
    drawButton("--", 1);
    drawButton("--", 2);
    drawButton("<< Back", 3);
  }
  // this is the a>b function ----> submenu ---> ok button
  else if (currentLvl == 5)
  {
    drawBg();
    drawButton("valj start", 0);
    drawHalfButton("<<", 1, true);
    drawHalfButton(">>", 1, false);
    drawButton("Ok >>", 2);
    drawButton("<< Back", 3);
  }
  // this is the a>b function ----> submenu ---> ok button ----> ok button
  else if (currentLvl == 6)
  {
    drawBg();
    drawButton("Start", 0);
    drawButton("<< Back", 3);
  }
  // this is the a>b function ----> submenu ---> ok button ----> ok button ---> start
  else if (currentLvl == 7)
  {
    drawBg();
    drawButton("Pause", 3);
  }
  // this is the a>b function ----> submenu ---> ok button ----> ok button ---> start --> pause
  else if (currentLvl == 8)
  {
    drawBg();
    drawButton("Continue", 0);
    drawButton("End", 2);
    drawButton("Back to menu", 3);
  }
  else if (currentLvl == 9)
  {
    drawBg();
    drawButton("Slide done", 0);
  }
  else if (currentLvl == 10)
  {
    drawBg();
    drawButton("Set time", 0);

    myGLCD.setColor(255, 255, 255);
    myGLCD.setFont(SmallFont);
    myGLCD.setBackColor(0, 162, 255);
    myGLCD.print("  Hour", LEFT, 75);
    myGLCD.print("Minute", CENTER, 75);
    myGLCD.print("Second ", RIGHT, 75);

    myGLCD.setFont(SevenSegNumFont);
    drawButtonArrow(90, 18, true);
   
    
   
    
    
    myGLCD.print(String(slideH), LEFT, 110);
    drawButtonArrow(165, 18, false);

    drawButtonArrow(90, 105, true);
    myGLCD.print(String(slideM), CENTER, 110);
    drawButtonArrow(165, 105, false);

    drawButtonArrow(90, 195, true);
    myGLCD.print(String(slideH), RIGHT, 110);
    drawButtonArrow(165, 195, false);



    myGLCD.setFont(SmallFont);
    myGLCD.print("=", CENTER, 220);
    myGLCD.print(" 3sec delay", LEFT, 200);
    myGLCD.print(" 24 fps", LEFT, 210);
    myGLCD.print(" 120ms exp", LEFT, 220);

    myGLCD.print("14sec film ", RIGHT, 220);

    drawHalfButton("Ok >>", 3, false);
    drawHalfButton("<< Back", 3, true);
  }
}
