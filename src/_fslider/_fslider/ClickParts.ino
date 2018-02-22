boolean clickButton(int pos, int lvl)
{
  int hSize = 70;
  int textpos = 25;
  int tmpp = (pos * hSize) + 20;
int delayms=50;
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
boolean clickHalfButton(int pos, int lvl, boolean left)
{
  int delayms=50;
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
