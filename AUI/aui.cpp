/////////////////////////////////////////////////////////////////////////////
// Name:        aui.cpp
// Purpose:     
// Author:      
// Modified by: 
// Created:     27/02/2007 11:59:08
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "aui.h"

////@begin XPM images
////@end XPM images

/*!
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( AuiApp )
////@end implement app

/*!
 * AuiApp type definition
 */

IMPLEMENT_CLASS( AuiApp, wxApp )

/*!
 * AuiApp event table definition
 */

BEGIN_EVENT_TABLE( AuiApp, wxApp )

////@begin AuiApp event table entries
////@end AuiApp event table entries

END_EVENT_TABLE()

/*!
 * Constructor for AuiApp
 */

AuiApp::AuiApp()
{
    Init();
}

/*!
 * Member initialisation 
 */

void AuiApp::Init()
{
////@begin AuiApp member initialisation
////@end AuiApp member initialisation
}
/*!
 * Initialisation for AuiApp
 */

bool AuiApp::OnInit()
{    
////@begin AuiApp initialisation
	// Remove the comment markers above and below this block
	// to make permanent changes to the code.

#if wxUSE_XPM
	wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
	wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
	wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
	wxImage::AddHandler(new wxGIFHandler);
#endif
	AuiFrame* mainWindow = new AuiFrame( NULL );
	mainWindow->Show(true);
////@end AuiApp initialisation

    return true;
}

/*!
 * Cleanup for AuiApp
 */
int AuiApp::OnExit()
{    
////@begin AuiApp cleanup
	return wxApp::OnExit();
////@end AuiApp cleanup
}

