/////////////////////////////////////////////////////////////////////////////
// Name:        splitterdialog.cpp
// Purpose:     
// Author:      Anthemion Software Ltd
// Modified by: 
// Created:     14/06/2006 18:38:16
// RCS-ID:      
// Copyright:   (c) Anthemion Software Ltd
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

#include "splitterdialog.h"

////@begin XPM images
////@end XPM images

/*!
 * SplitterDialog type definition
 */

IMPLEMENT_DYNAMIC_CLASS( SplitterDialog, wxDialog )

/*!
 * SplitterDialog event table definition
 */

BEGIN_EVENT_TABLE( SplitterDialog, wxDialog )

////@begin SplitterDialog event table entries
////@end SplitterDialog event table entries

END_EVENT_TABLE()

/*!
 * SplitterDialog constructors
 */

SplitterDialog::SplitterDialog( )
{
}

SplitterDialog::SplitterDialog( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Create(parent, id, caption, pos, size, style);
}

/*!
 * SplitterDialog creator
 */

bool SplitterDialog::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin SplitterDialog member initialisation
    m_splitter = NULL;
////@end SplitterDialog member initialisation

////@begin SplitterDialog creation
    SetExtraStyle(wxWS_EX_BLOCK_EVENTS);
    wxDialog::Create( parent, id, caption, pos, size, style );

    CreateControls();
    Centre();
////@end SplitterDialog creation

    m_splitter->UpdateSize();
    
    return true;
}

/*!
 * Control creation for SplitterDialog
 */

void SplitterDialog::CreateControls()
{    
////@begin SplitterDialog content construction
    SplitterDialog* itemDialog1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemDialog1->SetSizer(itemBoxSizer2);

    wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer2->Add(itemBoxSizer3, 1, wxGROW|wxALL, 5);

    wxStaticText* itemStaticText4 = new wxStaticText( itemDialog1, wxID_STATIC, _("This is a wxSplitterWindow containing a wxListBox and a wxPanel."), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_LEFT|wxALL, 5);

    itemBoxSizer3->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    m_splitter = new wxSplitterWindow( itemDialog1, ID_SPLITTERDIALOG_SPLITTERWINDOW, wxDefaultPosition, wxSize(100, 100), wxSP_3DBORDER|wxSP_3DSASH|wxNO_BORDER );
    m_splitter->SetMinimumPaneSize(0);

    wxArrayString itemListBox7Strings;
    itemListBox7Strings.Add(_("One"));
    itemListBox7Strings.Add(_("Two"));
    itemListBox7Strings.Add(_("Three"));
    itemListBox7Strings.Add(_("Four"));
    wxListBox* itemListBox7 = new wxListBox( m_splitter, ID_SPLITTERDIALOG_LISTBOX, wxDefaultPosition, wxDefaultSize, itemListBox7Strings, wxLB_SINGLE );
    itemListBox7->SetStringSelection(_("Two"));

    wxPanel* itemPanel8 = new wxPanel( m_splitter, ID_SPLITTERDIALOG_PANEL, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer9 = new wxBoxSizer(wxVERTICAL);
    itemPanel8->SetSizer(itemBoxSizer9);

    wxBoxSizer* itemBoxSizer10 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer9->Add(itemBoxSizer10, 1, wxGROW|wxALL, 5);
    wxStaticText* itemStaticText11 = new wxStaticText( itemPanel8, wxID_STATIC, _("&Name:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer10->Add(itemStaticText11, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxTextCtrl* itemTextCtrl12 = new wxTextCtrl( itemPanel8, ID_SPLITTERDIALOG_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer10->Add(itemTextCtrl12, 0, wxGROW|wxALL, 5);

    itemBoxSizer10->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxStaticText* itemStaticText14 = new wxStaticText( itemPanel8, wxID_STATIC, _("N&otes:"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer10->Add(itemStaticText14, 0, wxALIGN_LEFT|wxLEFT|wxRIGHT|wxTOP, 5);

    wxTextCtrl* itemTextCtrl15 = new wxTextCtrl( itemPanel8, ID_SPLITTERDIALOG_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
    itemBoxSizer10->Add(itemTextCtrl15, 1, wxGROW|wxALL, 5);

    m_splitter->SplitVertically(itemListBox7, itemPanel8, 150);
    itemBoxSizer3->Add(m_splitter, 1, wxGROW|wxALL, 5);

#if defined(__WXMSW__) || defined(__WXGTK__)
    wxBoxSizer* itemBoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    itemBoxSizer3->Add(itemBoxSizer16, 0, wxGROW, 5);

    itemBoxSizer16->Add(5, 5, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton18 = new wxButton( itemDialog1, wxID_OK, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer16->Add(itemButton18, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton19 = new wxButton( itemDialog1, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer16->Add(itemButton19, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton20 = new wxButton( itemDialog1, wxID_HELP, _("&Help"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer16->Add(itemButton20, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

#endif

////@end SplitterDialog content construction
}

/*!
 * Should we show tooltips?
 */

bool SplitterDialog::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap SplitterDialog::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin SplitterDialog bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end SplitterDialog bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon SplitterDialog::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin SplitterDialog icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end SplitterDialog icon retrieval
}
