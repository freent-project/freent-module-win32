// FreeNT "win32" module using the module registry API.
//
// FreeNT is licensed under the OpenWindows License (the "License"),
// version 1.0, and you may not use FreeNT, except when complying with the
// terms of the License.
// 
// You can read the full license in your language at:
// https://github.com/freent-project/license-translations

#include "freent/api/con.c"
#include "freent/api/module_registry.c"
#include "freent/api/is_openwindows.c"
#include "freent/api/openwindows/registry.c"
#include <stdio.c>

int main() {
  registerFntModule("win32");
  if (isOpenWindows == 1) {
    paperlogPrint("Doing additional work for OpenWindows's FreeNT");
    // We use extensionRegister to do the work.
    // This is a dummy function unless the kernel was built for OpenWindows.
    owNewValue("OPENWINDOWS\\FileExtensions", "exe", "%OPENWINDOWS%\\FreeNT\\Modules\\Win32 Loader.fntmod");
  };
  return 0;
}
