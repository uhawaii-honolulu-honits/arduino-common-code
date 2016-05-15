//   make_project_id

/*

  make_project_id
  
  Routine to generate a project id to a string so that it can
  be used to display when data is outputted
  
  editing history
  
  07/21/13 - v1.00 - hrr - Start Date
  
  07/21/13 - v1.01 - hrr - making a setup routine to help test this project
  
  07/21/13 - v1.02 - hrr - adding more to the code
  
  07/21/13 - v1.03 - hrr - So just added the major version 1.02.  will add
                           the minor version and then the unit to the string
  
  02/18/15 - v1.04 - hrr - adding mission number to the project id routine

  02/18/15 - v1.05 - hrr - renaming the routine to make_project_id  
  
  02/18/15 - v1.06 - hrr - don't know why the itoa function needs to be 10 
                           instead of 5 on the 3rd parameter.
  
*/



void make_project_id(char qaz[], char xname[], int majver, int minver, int qunit, int mission) {
  int i,j,la,lb,lc,ld,le;
  char temp1[5], temp2[5], temp3[5], temp4[5];
  
  //
  //  converting numbers to strings
  //
  itoa(majver,temp1,10);
  itoa(minver,temp2,10);
  itoa(qunit,temp3,10);
  itoa(mission,temp4,10);
  
  //
  //  dealing with the minor version being last than 10
  //
  if (minver < 10) {
    temp2[1]=temp2[0];
    temp2[0]='0';
    temp2[2]='\0';
  }
  
  //
  //  Start buiding the project id string
  //
  
  //
  //  name of project
  //
  la = strlen(xname);
  for (i=0; i<la; i++) {
    qaz[i] = xname[i];
  }
  
  //
  //  the version
  //
  
  //
  //  the major version number
  //
  qaz[i++]='-';
  qaz[i++]='v';
  lb = strlen(temp1);
  for (j=0; j<lb; j++) {
    qaz[i++] = temp1[j];
  }
  //
  //  the minor version number
  //
  qaz[i++]='-';
  lc = strlen(temp2);
  for (j=0; j<lc; j++) {
    qaz[i++] = temp2[j];
  }
  
  //
  //  now the unit number
  //
  qaz[i++] = '-';
  qaz[i++] = 'u';
  ld = strlen(temp3);
  for (j=0; j<ld; j++) {
    qaz[i++] = temp3[j];
  }
  
  //
  //  the mission number
  //
  qaz[i++] = '-';
  qaz[i++] = 'm';
  le = strlen(temp4);
  for (j=0; j<le; j++) {
    qaz[i++] = temp4[j];
  }
  
  //
  //  end the string
  //
  qaz[i]='\0';
}

