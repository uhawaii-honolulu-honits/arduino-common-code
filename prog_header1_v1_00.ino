/*
   prog_header1_v1_00
   
   Routine to print a program header.  This routine assumes
   that the numerical values are from defines.  In this case
   the following constants need to be defined before this
   routine is called:
   
   MAJVER - Major version number
   MINVER - Minor version number
   BMON - Build month date
   BDAY - Build day date
   BYEAR - Build year date, last 2 digits of the year
   
   This routine needs to have character string as the input to
   prog_header1.  
   
*/

/*
   
   Code history
   
   04/26/13 - v1.00    Start date
                       
                       

*/

void prog_header1(char mystuff[]) {
  // put your setup code here, to run once:
  
  //
  //  print a blank line
  //
  Serial.println(" ");
  //
  //  print the program name
  //
  Serial.print("*** ");
  Serial.print(mystuff);
  Serial.println(" ***");
  //
  //  the following prints the version
  //
  Serial.print("Version ");
  Serial.print(MAJVER);
  Serial.print(".");
  if (MINVER < 10) Serial.print("0");
  Serial.println(MINVER);
  //
  //  the following prints the build date
  // 
  Serial.print("Build date: ");
  if (BMON < 10) Serial.print("0");
  Serial.print(BMON);
  Serial.print("/");
  if (BDAY < 10) Serial.print("0");
  Serial.print(BDAY);
  Serial.print("/");
  if (BYEAR < 10) Serial.print("0");
  Serial.println(BYEAR);
  //
  //  One more blank line
  //
  Serial.println(" ");
}


