/*
  simpleSeries
  function that gets the number in the position provided by the user
  Parameters: Position given by the user (integer)
  Returns: Number wanted (integer)
*/
int simpleSeries(int iMyPos)
{
  int iNum = 1, iCounter = 1;
  while (iCounter < iMyPos)
  {
    iNum += 2;
    iCounter++;
  }
  
  return iNum;
}