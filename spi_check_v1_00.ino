/*
  spi_check
  
  Routine to display to the serial monitor the 4 SPI parameters that
  an Arduino controller would use.  The values of these parameters
  can change between different Arduino boards.  This routine will
  help display those parameters.
  
  Best used in the setup routine. It does not require input parameters
  
  Also need the Serial.begin invoked before this routine is called
  
*/

/*
  Editing history
  
  07/19/14              V1.00:
                        Start date
                        
*/

void spi_check()
{
  Serial.println("SPI parameters");
  Serial.println(" ");
  Serial.print("MOSI = ");
  Serial.println(MOSI, DEC);
  Serial.print("MISO = ");
  Serial.println(MISO, DEC);
  Serial.print("SCK  = ");
  Serial.println(SCK, DEC);
  Serial.print("SS   = ");
  Serial.println(SS, DEC);
}

