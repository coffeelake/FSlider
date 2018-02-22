void  drawBg() {
  myGLCD.setColor(0, 162, 255); // Sets green color
  myGLCD.fillRect (0, 20, 239, 300); // Draws filled rounded rectangle
}
// Highlights the button when pressed
void drawFrame(int x1, int y1, int x2, int y2) {
  myGLCD.setColor(255, 0, 0);
  myGLCD.drawRoundRect (x1, y1, x2, y2);
  while (myTouch.dataAvailable())
    myTouch.read();
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (x1, y1, x2, y2);
}
void drawBanner(String text)
{
  myGLCD.setColor(0, 0, 0);
  myGLCD.fillRect (0, 0, 239, 20);
  if (text)
  {
    if (topText != "")
    {
      myGLCD.setColor(0, 0, 0);
      myGLCD.setBackColor(0, 0, 0);
      myGLCD.print(topText, LEFT, 3);
    }
    topText = text;
    myGLCD.setColor(255, 255, 255);
    myGLCD.setBackColor(0, 0, 0);
    myGLCD.print(text, LEFT, 3);
  }



}
void drawFooter()
{
  myGLCD.setColor(0, 0, 0);
  myGLCD.fillRect (0, 300, 239, 325);
}



void drawButton(String text, int pos)
{
  int hSize = 70;
  int textpos = 25;
  int tmpp = (pos * hSize) + 20;
  int txt1 = (pos * hSize) + 20 + textpos;
  myGLCD.setColor(0, 162, 255); // Sets green color
  myGLCD.fillRect (0, tmpp, 239, tmpp + hSize); // Draws filled rounded rectangle
  myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.setFont(BigFont); // Sets the font to big
  myGLCD.setBackColor(0, 162, 255); // Sets the background color of the area where the text will be printed to green, same as the button
  myGLCD.print(text, CENTER, txt1); // Prints the string
  myGLCD.setColor(0, 162, 200);
  myGLCD.drawLine(0, (tmpp + hSize) - 1, 239, (tmpp + hSize) - 1);
}

void drawHalfButton(String text, int pos,boolean left)
{  
  int hSize = 70;
  int textpos = 25;
  int tmpp = (pos * hSize) + 20;
  int txt1 = (pos * hSize) + 20 + textpos;
 
 if(left)
 {
   myGLCD.setColor(0, 162, 10); // Sets green color
   myGLCD.fillRect (0, tmpp, 119, tmpp + hSize); // Draws filled rounded rectangle
    myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.setFont(BigFont); // Sets the font to big
  myGLCD.setBackColor(0, 162, 255); // Sets the background color of the area where the text will be printed to green, same as the button
  myGLCD.print(text, LEFT, txt1); // Prints the string
  myGLCD.setColor(0, 162, 200);
  myGLCD.drawLine(0, (tmpp + hSize) - 1, 119, (tmpp + hSize) - 1);
 }
 else
 {
    myGLCD.setColor(0, 162, 10); // Sets green color
   myGLCD.fillRect (119, tmpp, 239, tmpp + hSize); // Draws filled rounded rectangle
    myGLCD.setColor(255, 255, 255); // Sets color to white
  myGLCD.setFont(BigFont); // Sets the font to big
  myGLCD.setBackColor(0, 162, 255); // Sets the background color of the area where the text will be printed to green, same as the button
  myGLCD.print(text, RIGHT, txt1); // Prints the string
  myGLCD.setColor(0, 162, 200);
  myGLCD.drawLine(119, (tmpp + hSize) - 1, 239, (tmpp + hSize) - 1);
 }
 
}



