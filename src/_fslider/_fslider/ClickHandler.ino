void clickHandler()
{
  // this is the a>b function
  if (currentLvl == 0)
  {
    motionType = 0;
    clickButton(0, 4, true);
    clickButton(1, 3, true);
    clickButton(2, 2, true);
    clickButton(3, 1, true);
  }
  // this is the a>b function ----> submenu
  if (currentLvl == 1)
  {
    motionType = 1;
    if (clickHalfButton(2, -1, true, false))
    {
      sliderEndPos = sliderEndPos - 1;
      drawBanner(String(sliderStartPos) + "," + String(sliderPos) + "," + String(sliderEndPos));
    }

    if (clickHalfButton(2, -1, false, false))
    {
      sliderEndPos = sliderEndPos + 1;
      if (sliderEndPos > 0)
      {
        sliderEndPos = 0;
      }
      drawBanner(String(sliderStartPos) + "," + String(sliderPos) + "," + String(sliderEndPos));
    }
    clickButton(1, 5, true);
    clickButton(0, 0, true);
  }
  if (currentLvl == 2)
  {
    clickButton(0, 0, true);
    clickButton(1, 3, true);
    clickButton(2, 2, true);
    clickButton(3, 1, true);
  }
  if (currentLvl == 3)
  {
    clickButton(0, 0, true);
    clickButton(1, 3, true);
    clickButton(2, 2, true);
    clickButton(3, 1, true);
  }
  if (currentLvl == 4)
  {
    clickButton(0, 0, true);
    clickButton(1, 3, true);
    clickButton(2, 2, true);
    clickButton(3, 1, true);
  }
  // this is the a>b function ----> submenu
  if (currentLvl == 5)
  {
    if (clickHalfButton(2, -1, true, false))
    {
      sliderStartPos = sliderStartPos - 1;
      drawBanner(String(sliderStartPos) + "," + String(sliderPos) + "," + String(sliderEndPos));
    }

    if (clickHalfButton(2, -1, false, false))
    {
      sliderStartPos = sliderStartPos + 1;
      if (sliderStartPos > 0)
      {
        sliderStartPos = 0;
      }
      drawBanner(String(sliderStartPos) + "," + String(sliderPos) + "," + String(sliderEndPos));
    }
    clickButton(1, 10, true);
    clickButton(0, 1, true);
  }
  // this is the a>b function ----> submenu ---> ok button ----> ok button
  if (currentLvl == 6)
  {

    clickButton(3, 7, true);
    clickButton(0, 5, true);
  }
  // this is the a>b function ----> submenu
  if (currentLvl == 6)
  {
    if (sliderStartPos < sliderEndPos)
    {
      sliderDirection = 1;
      sliderPos = sliderStartPos;
    }
    else
    {
      sliderDirection = 0;
      sliderPos = sliderStartPos;
    }


    clickButton(3, 7, true);
    clickButton(0, 5, true);
  }
  // this is the a>b function ----> submenu ---> ok button ----> ok button ---> start
  if (currentLvl == 7)
  {
    sliderInMotion = true;
    clickButton(0, 8, true);

  }
  // this is the a>b function ----> submenu ---> ok button ----> ok button ---> start -->pause
  if (currentLvl == 8)
  {
    clickButton(3, 7, true);
    clickButton(1, 6, true);
    clickButton(0, 0, true);

  }
  if (currentLvl == 10)
  {
    motionTime = 60;
    if (clickThirdHalfButton(2, -1, 1, false))
    {
      myGLCD.setBackColor(0, 162, 255);
      myGLCD.setFont(SevenSegNumFont);
      myGLCD.setColor(0, 162, 255);
      myGLCD.print(String(slideH), LEFT, 110);
      slideH = slideH + 1;
      if (slideH == 99)
      {
        slideH = 0;
      }
      myGLCD.setColor(255, 255, 255);
      myGLCD.print(String(slideH), LEFT, 110);

    }
    if (clickThirdHalfButton(2, -1, 2, false))
    {
      myGLCD.setBackColor(0, 162, 255);
      myGLCD.setFont(SevenSegNumFont);
      myGLCD.setColor(0, 162, 255);
      myGLCD.print(String(slideM), CENTER, 110);
      slideM = slideM + 1;
      if (slideM == 61)
      {
        slideM = 0;
      }
      myGLCD.setColor(255, 255, 255);
      myGLCD.print(String(slideM), CENTER, 110);



    }

    if (clickThirdHalfButton(2, -1, 3, false))
    {
      myGLCD.setBackColor(0, 162, 255);
      myGLCD.setFont(SevenSegNumFont);
      myGLCD.setColor(0, 162, 255);
      myGLCD.print(String(slideS), RIGHT, 110);
      slideS = slideS + 1;
      if (slideS == 61)
      {
        slideS = 0;
      }
      myGLCD.setColor(255, 255, 255);
      myGLCD.print(String(slideS), RIGHT, 110);

    }


    clickHalfButton(0, 5, true, true);
    clickHalfButton(0, 6, true, true);

  }



}
