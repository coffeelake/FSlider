void clickHandler()
{
  // this is the a>b function
  if (currentLvl == 0)
  {
    clickButton(0, 4);
    clickButton(1, 3);
    clickButton(2, 2);
    clickButton(3, 1);
  }
  // this is the a>b function ----> submenu
  if (currentLvl == 1)
  {
    if (clickHalfButton(2, -1, true))
    {
      drawBanner("-1");
    }

    if (clickHalfButton(2, -1, false))
    {
      drawBanner("+1");
    }
    clickButton(1, 5);
    clickButton(0, 0);
  }
  if (currentLvl == 2)
  {
    clickButton(0, 0);
    clickButton(1, 3);
    clickButton(2, 2);
    clickButton(3, 1);
  }
  if (currentLvl == 3)
  {
    clickButton(0, 0);
    clickButton(1, 3);
    clickButton(2, 2);
    clickButton(3, 1);
  }
  if (currentLvl == 4)
  {
    clickButton(0, 0);
    clickButton(1, 3);
    clickButton(2, 2);
    clickButton(3, 1);
  }
 // this is the a>b function ----> submenu
  if (currentLvl == 5)
  {
    if (clickHalfButton(2, -1, true))
    {
      drawBanner("-1");
    }

    if (clickHalfButton(2, -1, false))
    {
      drawBanner("+1");
    }
    clickButton(1, 6);
    clickButton(0, 1);
  }
    // this is the a>b function ----> submenu ---> ok button ----> ok button
  if (currentLvl == 6)
  {
   
    clickButton(3, 7);
    clickButton(0, 5);
  }
   // this is the a>b function ----> submenu
  if (currentLvl == 6)
  {
   
    clickButton(3, 7);
    clickButton(0, 5);
  }
   // this is the a>b function ----> submenu ---> ok button ----> ok button ---> start
 if (currentLvl == 7)
  {
   
    clickButton(0, 8);
  
  }
 // this is the a>b function ----> submenu ---> ok button ----> ok button ---> start -->pause
 if (currentLvl == 8)
  {
     clickButton(3, 7);
    clickButton(1, 6);
    clickButton(0, 0);
  
  }

   
 
}
