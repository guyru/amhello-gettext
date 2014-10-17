#include <config.h>
#include <stdio.h>
#include "gettext.h"

int
main (void)
{
  setlocale (LC_ALL, "");
  bindtextdomain (PACKAGE, LOCALEDIR);
  textdomain (PACKAGE);

  puts ("Hello World!");
  return 0;
}
