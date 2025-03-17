/////////////////////////////////////////////////////////////////////////////
// Name:        auiframe.h
// Purpose:     
// Author:      
// Modified by: 
// Created:     27/02/2007 11:59:26
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _AUIFRAME_H_
#define _AUIFRAME_H_

/*!
 * Includes
 */

////@begin includes
#include "wx/aui/framemanager.h"
#include "wx/frame.h"
#include "wx/toolbar.h"
#include "wx/aui/auibook.h"
#include "wx/statline.h"
#include "wx/treectrl.h"
#include "wx/html/htmlwin.h"
#include "wx/statusbr.h"
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
#define ID_AUIFRAME 10000
#define ID_TOOLBAR1 10001
#define ID_TOOL1 10004
#define ID_TOOL3 10007
#define ID_TOOL5 10013
#define ID_TOOL6 10014
#define ID_TOOLBAR2 10005
#define ID_TOOL2 10006
#define ID_TOOL4 10008
#define ID_TOOL7 10015
#define ID_AUINOTEBOOK1 10003
#define ID_PANEL2 10009
#define ID_STATICLINE 10017
#define ID_BUTTON1 10018
#define ID_PANEL3 10010
#define ID_STATICLINE1 10011
#define ID_CHECKLISTBOX1 10019
#define ID_TREECTRL1 10002
#define ID_HTMLWINDOW1 10016
#define ID_STATUSBAR1 10012
#define SYMBOL_AUIFRAME_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_AUIFRAME_TITLE _("AuiFrame")
#define SYMBOL_AUIFRAME_IDNAME ID_AUIFRAME
#define SYMBOL_AUIFRAME_SIZE wxSize(500, 500)
#define SYMBOL_AUIFRAME_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * AuiFrame class declaration
 */

class AuiFrame: public wxFrame
{    
    DECLARE_CLASS( AuiFrame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    AuiFrame();
    AuiFrame( wxWindow* parent, wxWindowID id = SYMBOL_AUIFRAME_IDNAME, const wxString& caption = SYMBOL_AUIFRAME_TITLE, const wxPoint& pos = SYMBOL_AUIFRAME_POSITION, const wxSize& size = SYMBOL_AUIFRAME_SIZE, long style = SYMBOL_AUIFRAME_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_AUIFRAME_IDNAME, const wxString& caption = SYMBOL_AUIFRAME_TITLE, const wxPoint& pos = SYMBOL_AUIFRAME_POSITION, const wxSize& size = SYMBOL_AUIFRAME_SIZE, long style = SYMBOL_AUIFRAME_STYLE );

    /// Destructor
    ~AuiFrame();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin AuiFrame event handler declarations

////@end AuiFrame event handler declarations

////@begin AuiFrame member function declarations

    /// Returns the AUI manager object
    wxAuiManager& GetAuiManager() { return m_auiManager; }

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end AuiFrame member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin AuiFrame member variables
    wxAuiManager m_auiManager;
////@end AuiFrame member variables
};

#endif
    // _AUIFRAME_H_
