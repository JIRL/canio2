// generated by NAnt buildscript
    

#ifndef _VCIVER_H_
#define _VCIVER_H_

  // macro to convert version number to text
  #define VCI_VERSION_ASTEXT2(x)     #x
  #define VCI_VERSION_ASTEXT(x) VCI_VERSION_ASTEXT2(x)

/*****************************************************************************
 * VCI version number
 ****************************************************************************/
   // Major version number
  #define VCI_MAJOR_VERSION        3
  #define VCI_MAJOR_VERSION_STR    VCI_VERSION_ASTEXT(VCI_MAJOR_VERSION)

  // Minor version number
  #define VCI_MINOR_VERSION        2
  #define VCI_MINOR_VERSION_STR    VCI_VERSION_ASTEXT(VCI_MINOR_VERSION)

  // Revision number
  #define VCI_RELEASE_VERSION      2
  #define VCI_VERSION_RELEASE_STR  VCI_VERSION_ASTEXT(VCI_RELEASE_VERSION)
  
  // Build number
  #define VCI_BUILD_VERSION        2098
  #define VCI_BUILD_VERSION_STR    VCI_VERSION_ASTEXT(VCI_BUILD_VERSION)
  
  // debug/release
  //
  #ifdef _DEBUG
    #define VCI_VI_BUILDTYPE_STR   "debug"
  #else
    #define VCI_VI_BUILDTYPE_STR   "release"
  #endif

/*****************************************************************************
 * VCI version information
 ****************************************************************************/
  #define VCI_VI_COPYRIGHT_STR     "Copyright 2005-2008, IXXAT Automation"  
  #define VCI_VI_COMPANY_NAME_STR  "IXXAT Automation GmbH"
  #define VCI_VI_PRODUCT_NAME_STR  "VCI 3"     
  #define VCI_VI_SPECIALBUILD_STR  ""  

  #define VCI_VI_PRODUCT_VERS      VCI_MAJOR_VERSION, VCI_MINOR_VERSION, VCI_RELEASE_VERSION, VCI_BUILD_VERSION
  #define VCI_VI_PRODUCT_VERS_STR  VCI_VERSION_ASTEXT(VCI_VI_PRODUCT_VERS)
#endif
    