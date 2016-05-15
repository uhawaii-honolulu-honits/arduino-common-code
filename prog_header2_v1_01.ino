/*
   prog_header2
   
   Routine to print a program header.  This routine requires the
   following things to be defined before it is called.
   
   mystuff - Name of program - type: character string
   majver - Major version number - type: int
   minver - Minor version number - type: int
   bmon - Build month date - type: int
   bday - Build day date - type: int
   byear - Build year date, last 2 digits of the year - type: int
   xunit - unit number - type: int

   This routine was originally done by
   Helen Rapozo 
   Honolulu Community College
   Informational Technology Services (ITS)
   
*/

/*
   
   Code history
   
   04/26/13 - v1.00 - hrr    Start date
   
   04/26/13 - v1.01 - hrr    Add comments to the code
                             also add a colon after the version subtitle
                       
                       

*/

void prog_header2(char mystuff[], int majver, int minver, int bmon, int bday, int byear, int xunit) {
  
  //
  //  print a blank line (line #1)
  //
  Serial.println(" ");
  //
  //  print the program name (line #2)
  //
  Serial.print("*** ");
  Serial.print(mystuff);
  Serial.println(" ***");
  //
  //  the following prints the version (line #3)
  //
  Serial.print("Version: ");
  Serial.print(majver);
  Serial.print(".");
  if (minver < 10) Serial.print("0");
  Serial.println(minver);
  //
  //  the following prints the build date (line #4, optional if bmon is less than 1)
  // 
  if (bmon > 0) {
    Serial.print("Build date: ");
    if (bmon < 10) Serial.print("0");
    Serial.print(bmon);
    Serial.print("/");
    if (bday < 10) Serial.print("0");
    Serial.print(bday);
    Serial.print("/");
    if (byear < 10) Serial.print("0");
    Serial.println(byear);
  }
  //
  //  The following prints the unit number (line #5, optional if xunit is less than 1)
  if (xunit > 0) {
    Serial.print("Unit Number: ");
    Serial.println(xunit);
  }
  //
  //  One more blank line (line #6)
  //
  Serial.println(" ");
}


