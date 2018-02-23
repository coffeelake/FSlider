void MotionHandler() {
  if (motionType == 1)
  {
    if (sliderDirection)
    {
      if (sliderPos < sliderEndPos)
      {
        sliderPos = sliderPos + 1;
      }
      else
      {
        sliderInMotion = false;
        guiChange = 1;
        currentLvl = 9;
      }
    }
    else
    {
      if (sliderPos > sliderEndPos)
      {
        sliderPos = sliderPos - 1;
      }
      else
      {
        sliderInMotion = false;
        guiChange = 1;
        currentLvl = 9;
      }
    }



    drawBanner(String(sliderStartPos) + "," + String(sliderPos) + "," + String(sliderEndPos));
  }
}

