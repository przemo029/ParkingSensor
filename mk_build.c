#include <avr/io.h>
#include <avr/pgmspace.h>

#include "mk_build.h"

/* -------------- INSTRUKCJA U�YCIA --------------------------
  je�li chcesz u�ywa� opcji MkBuild w MkClipse 
  zainkluduj do dowolnego pliku projektu "mk_build.h" po to 
  aby m�c korzysta� ze string�w zdefiniowanych poni�ej
  -------------- przyk�ad: --------------
    // zainkluduj na pocz�tku dowolnego pliku projektu
    #include <avr/pgmspace.h>
    #include "mk_build.h"

    // nast�pnie u�yj w kodzie swojego programu
    lcd_cls();
    lcd_str_P( PSTR("FW version:") );
    lcd_str_P( MkBuildVersion );
    lcd_locate( 1,0 );
    lcd_str_P( PSTR("build:") );
    lcd_str_P( MkBuildNumber );
------------------------------------------------------------ */

/* Do not any changes in next four lines */
/* These lines will be updated automaticaly by MkClipse */
const char MkBuildVersion[] PROGMEM = {"1.0.0"};
const char MkBuildNumber[] PROGMEM = {"366"};
const char MkBuildDate[] PROGMEM = {"2018-12-19"};
const char MkBuildTime[] PROGMEM = {"00:54:14"};

