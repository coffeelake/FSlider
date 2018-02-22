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
    drawButton("tada1", 1);
    drawButton("tada2", 2);
    drawButton("tada3", 3);
  }
  // this is the a>b function ----> submenu
  else if (currentLvl == 1)
  {
      drawBg();
    drawBanner("A>B");
    drawButton("valj slut", 0);
    drawHalfButton("<<", 1, true);
    drawHalfButton(">>", 1, false);
    drawButton("Ok >>", 2);
    drawButton("<< Tillbaka", 3);
  }
  else if (currentLvl == 2)
  {
    drawBg();
    drawButton("undermeny2", 0);
    drawButton("undermeny2", 1);
    drawButton("undermeny2", 2);
    drawButton("<< Tillbaka", 3);
  }
  else if (currentLvl == 3)
  {
     drawBg();
    drawButton("undermeny3", 0);
    drawButton("undermeny3", 1);
    drawButton("undermeny3", 2);
    drawButton("<< Tillbaka", 3);
  }
  else if (currentLvl == 4)
  {
     drawBg();
    drawButton("undermeny4", 0);
    drawButton("undermeny4", 1);
    drawButton("undermeny4", 2);
    drawButton("<< Tillbaka", 3);
  }
   // this is the a>b function ----> submenu ---> ok button
  else if (currentLvl == 5)
  {   
     drawBg();
    drawButton("valj start", 0);
    drawHalfButton("<<", 1, true);
    drawHalfButton(">>", 1, false);
    drawButton("Ok >>", 2);
    drawButton("<< Tillbaka", 3);
  }
   // this is the a>b function ----> submenu ---> ok button ----> ok button
  else if (currentLvl == 6)
  {   
     drawBg();
    drawButton("start", 0);  
    drawButton("<< Tillbaka", 3);
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
    drawButton("Avsluta", 2);
    drawButton("back to menu", 3);
  }
}
