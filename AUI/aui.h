/////////////////////////////////////////////////////////////////////////////
// Name:        aui.h
// Purpose:     
// Author:      
// Modified by: 
// Created:     27/02/2007 11:59:08
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _AUI_H_
#define _AUI_H_

/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
#include "auiframe.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
////@end control identifiers

/*!
 * AuiApp class declaration
 */

class AuiApp: public wxApp
{    
    DECLARE_CLASS( AuiApp )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    AuiApp();

    /// Initialises member variables
    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin AuiApp event handler declarations

////@end AuiApp event handler declarations

////@begin AuiApp member function declarations

////@end AuiApp member function declarations

////@begin AuiApp member variables
////@end AuiApp member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(AuiApp)
////@end declare app

#endif
    // _AUI_H_
