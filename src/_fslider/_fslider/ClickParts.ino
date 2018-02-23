boolean clickButton(int pos, int lvl, boolean delaybtn)
{
  int hSize = 70;
  int textpos = 25;
  int tmpp = (pos * hSize) + 20;
  int delayms = 400;
  if (!delaybtn)
  {
    delayms = 0;
  }
  if (myTouch.dataAvailable()) {
    myTouch.read();
    x = myTouch.getX(); // X coordinate where the screen has been pressed
    y = myTouch.getY(); // Y coordinates where the screen has been pressed

    if ((y >= 0) && (y <= 239) && (x >= tmpp) && (x <= tmpp + hSize)) {
      if (lvl != -1)
      {
        guiChange = 1;
        currentLvl = lvl;
        delay(delayms);
        return true;
      }
      delay(delayms);
      return false;
    }
  }
}
boolean clickHalfButton(int pos, int lvl, boolean left, boolean delaybtn)
{
  int delayms = 50;
  if (!delaybtn)
  {
    delayms = 0;
  }
  int hSize = 70;
  int textpos = 25;
  int tmpp = (pos * hSize) + 20;

  if (myTouch.dataAvailable()) {
    myTouch.read();
    x = myTouch.getX(); // X coordinate where the screen has been pressed
    y = myTouch.getY(); // Y coordinates where the screen has been pressed
    if (left)
    {
      if ((y >= 0) && (y <= 119) && (x >= tmpp) && (x <= tmpp + hSize)) {
        if (lvl != -1)
        {
          guiChange = 1;
          currentLvl = lvl;
        }
        delay(delayms);
        return true;
      }
    }
    else
    {
      if ((y >= 119) && (y <= 239) && (x >= tmpp) && (x <= tmpp + hSize)) {
        if (lvl != -1)
        {
          guiChange = 1;
          currentLvl = lvl;
        }
        delay(delayms);
        return true;
      }
    }
    delay(delayms);
    return false;
  }
}
boolean clickThirdHalfButton(int pos, int lvl, int index, boolean delaybtn)
{
  int delayms = 50;
  if (!delaybtn)
  {
    delayms = 0;
  }
  int hSize = 70;
  int textpos = 25;
  int tmpp = (pos * hSize) + 20;

  if (myTouch.dataAvailable()) {
    myTouch.read();
    //this is changed in landscape mode
    y = myTouch.getX(); // X coordinate where the screen has been pressed
    x = myTouch.getY(); // Y coordinates where the screen has been pressed
    if (index == 1)
    {
      if (y >= tmpp && y <= tmpp + hSize && x >= 0 && x < 80)
      {
        if (lvl != -1)
        {
          guiChange = 1;
          currentLvl = lvl;
        }
        delay(delayms);
        return true;
      }
    }
    if (index == 2)
    {

     if (y >= tmpp && y <= tmpp + hSize && x > 79 && x < 160)
      {
        if (lvl != -1)
        {
          guiChange = 1;
          currentLvl = lvl;
        }
        delay(delayms);
        return true;
      }

    } 
    if (index == 3)
    {
      
     if (y >= tmpp && y <= tmpp + hSize && x > 159 && x <320 )
      {      
        if (lvl != -1)
        {
          guiChange = 1;
          currentLvl = lvl;
        }
        delay(delayms);
        return true;
      }
    }
    delay(delayms);
    return false;
  }
}
