/////////////////////////////////////////////////////////////////////////////
// Name:        auiframe.cpp
// Purpose:     
// Author:      
// Modified by: 
// Created:     27/02/2007 11:59:26
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
#include "wx/imaglist.h"
////@end includes

#include "auiframe.h"

////@begin XPM images
#include "copy.xpm"
#include "paste.xpm"
#include "undo.xpm"
#include "redo.xpm"
#include "find.xpm"
#include "save.xpm"
#include "open.xpm"
////@end XPM images

/*!
 * AuiFrame type definition
 */

IMPLEMENT_CLASS( AuiFrame, wxFrame )

/*!
 * AuiFrame event table definition
 */

BEGIN_EVENT_TABLE( AuiFrame, wxFrame )

////@begin AuiFrame event table entries
////@end AuiFrame event table entries

END_EVENT_TABLE()

/*!
 * AuiFrame constructors
 */

AuiFrame::AuiFrame()
{
    Init();
}

AuiFrame::AuiFrame( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}

/*!
 * AuiFrame creator
 */

bool AuiFrame::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin AuiFrame creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    Centre();
////@end AuiFrame creation
    return true;
}

/*!
 * AuiFrame destructor
 */

AuiFrame::~AuiFrame()
{
////@begin AuiFrame destruction
    GetAuiManager().UnInit();
////@end AuiFrame destruction
}

/*!
 * Member initialisation 
 */

void AuiFrame::Init()
{
////@begin AuiFrame member initialisation
////@end AuiFrame member initialisation
}

/*!
 * Control creation for AuiFrame
 */

void AuiFrame::CreateControls()
{    
////@begin AuiFrame content construction
    AuiFrame* itemFrame1 = this;

    GetAuiManager().SetManagedWindow(this);

    wxMenuBar* menuBar = new wxMenuBar;
    wxMenu* itemMenu3 = new wxMenu;
    itemMenu3->Append(wxID_OPEN, _("Open..."), wxEmptyString, wxITEM_NORMAL);
    itemMenu3->AppendSeparator();
    itemMenu3->Append(wxID_EXIT, _("&Exit"), wxEmptyString, wxITEM_NORMAL);
    menuBar->Append(itemMenu3, _("&File"));
    itemFrame1->SetMenuBar(menuBar);

    wxToolBar* itemToolBar7 = new wxToolBar( itemFrame1, ID_TOOLBAR1, wxDefaultPosition, wxSize(120, -1), wxTB_FLAT|wxTB_HORIZONTAL|wxTB_NODIVIDER|wxTB_NOALIGN|wxNO_BORDER );
    wxBitmap itemtool8Bitmap(itemFrame1->GetBitmapResource(wxT("copy.xpm")));
    wxBitmap itemtool8BitmapDisabled;
    itemToolBar7->AddTool(ID_TOOL1, wxEmptyString, itemtool8Bitmap, itemtool8BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    wxBitmap itemtool9Bitmap(itemFrame1->GetBitmapResource(wxT("paste.xpm")));
    wxBitmap itemtool9BitmapDisabled;
    itemToolBar7->AddTool(ID_TOOL3, wxEmptyString, itemtool9Bitmap, itemtool9BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    wxBitmap itemtool10Bitmap(itemFrame1->GetBitmapResource(wxT("undo.xpm")));
    wxBitmap itemtool10BitmapDisabled;
    itemToolBar7->AddTool(ID_TOOL5, wxEmptyString, itemtool10Bitmap, itemtool10BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    wxBitmap itemtool11Bitmap(itemFrame1->GetBitmapResource(wxT("redo.xpm")));
    wxBitmap itemtool11BitmapDisabled;
    itemToolBar7->AddTool(ID_TOOL6, wxEmptyString, itemtool11Bitmap, itemtool11BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    itemToolBar7->Realize();
    itemFrame1->GetAuiManager().AddPane(itemToolBar7, wxAuiPaneInfo()
        .ToolbarPane().Name(wxT("Pane5")).Top().Layer(10).LeftDockable(false).RightDockable(false).CaptionVisible(false).CloseButton(false).DestroyOnClose(false).Resizable(false).Floatable(false).Gripper(true).PaneBorder(false));

    wxToolBar* itemToolBar12 = new wxToolBar( itemFrame1, ID_TOOLBAR2, wxDefaultPosition, wxSize(100, -1), wxTB_FLAT|wxTB_HORIZONTAL|wxTB_NODIVIDER|wxNO_BORDER );
    wxBitmap itemtool13Bitmap(itemFrame1->GetBitmapResource(wxT("find.xpm")));
    wxBitmap itemtool13BitmapDisabled;
    itemToolBar12->AddTool(ID_TOOL2, wxEmptyString, itemtool13Bitmap, itemtool13BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    wxBitmap itemtool14Bitmap(itemFrame1->GetBitmapResource(wxT("save.xpm")));
    wxBitmap itemtool14BitmapDisabled;
    itemToolBar12->AddTool(ID_TOOL4, wxEmptyString, itemtool14Bitmap, itemtool14BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    wxBitmap itemtool15Bitmap(itemFrame1->GetBitmapResource(wxT("open.xpm")));
    wxBitmap itemtool15BitmapDisabled;
    itemToolBar12->AddTool(ID_TOOL7, wxEmptyString, itemtool15Bitmap, itemtool15BitmapDisabled, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    itemToolBar12->Realize();
    itemFrame1->GetAuiManager().AddPane(itemToolBar12, wxAuiPaneInfo()
        .ToolbarPane().Name(wxT("Pane6")).Top().Layer(10).LeftDockable(false).RightDockable(false).CaptionVisible(false).CloseButton(false).DestroyOnClose(false).Resizable(false).Floatable(false).Gripper(true).PaneBorder(false));

    wxAuiNotebook* itemAuiNotebook16 = new wxAuiNotebook( itemFrame1, ID_AUINOTEBOOK1, wxDefaultPosition, wxDefaultSize, wxAUI_NB_DEFAULT_STYLE|wxNO_BORDER );

    wxPanel* itemPanel17 = new wxPanel( itemAuiNotebook16, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer18 = new wxBoxSizer(wxVERTICAL);
    itemPanel17->SetSizer(itemBoxSizer18);

    wxBoxSizer* itemBoxSizer19 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer18->Add(itemBoxSizer19, 1, wxGROW|wxALL, 5);
    wxStaticText* itemStaticText20 = new wxStaticText( itemPanel17, wxID_STATIC, _("This is a first panel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer19->Add(itemStaticText20, 0, wxALIGN_LEFT|wxALL, 5);

    wxStaticLine* itemStaticLine21 = new wxStaticLine( itemPanel17, ID_STATICLINE, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
    itemBoxSizer19->Add(itemStaticLine21, 0, wxGROW|wxALL, 5);

    itemBoxSizer19->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxButton* itemButton23 = new wxButton( itemPanel17, ID_BUTTON1, _("A Button"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer19->Add(itemButton23, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    itemAuiNotebook16->AddPage(itemPanel17, _("First"), false);

    wxPanel* itemPanel24 = new wxPanel( itemAuiNotebook16, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    wxBoxSizer* itemBoxSizer25 = new wxBoxSizer(wxVERTICAL);
    itemPanel24->SetSizer(itemBoxSizer25);

    wxBoxSizer* itemBoxSizer26 = new wxBoxSizer(wxVERTICAL);
    itemBoxSizer25->Add(itemBoxSizer26, 1, wxGROW|wxALL, 5);
    wxStaticText* itemStaticText27 = new wxStaticText( itemPanel24, wxID_STATIC, _("This is a second panel"), wxDefaultPosition, wxDefaultSize, 0 );
    itemBoxSizer26->Add(itemStaticText27, 0, wxALIGN_LEFT|wxALL, 5);

    wxStaticLine* itemStaticLine28 = new wxStaticLine( itemPanel24, ID_STATICLINE1, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
    itemBoxSizer26->Add(itemStaticLine28, 0, wxGROW|wxALL, 5);

    itemBoxSizer26->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    wxArrayString itemCheckListBox30Strings;
    itemCheckListBox30Strings.Add(_("One"));
    itemCheckListBox30Strings.Add(_("Two"));
    itemCheckListBox30Strings.Add(_("Three"));
    itemCheckListBox30Strings.Add(_("Four"));
    wxCheckListBox* itemCheckListBox30 = new wxCheckListBox( itemPanel24, ID_CHECKLISTBOX1, wxDefaultPosition, wxDefaultSize, itemCheckListBox30Strings, wxLB_SINGLE );
    itemBoxSizer26->Add(itemCheckListBox30, 1, wxGROW|wxALL, 5);

    itemAuiNotebook16->AddPage(itemPanel24, _("Second"), false);

    itemFrame1->GetAuiManager().AddPane(itemAuiNotebook16, wxAuiPaneInfo()
        .Name(wxT("Pane3")).Centre().CaptionVisible(false).CloseButton(false).DestroyOnClose(false).Resizable(true).Floatable(false).PaneBorder(false));

    wxTreeCtrl* itemTreeCtrl31 = new wxTreeCtrl( itemFrame1, ID_TREECTRL1, wxDefaultPosition, wxSize(100, 100), wxTR_SINGLE|wxNO_BORDER );
    itemFrame1->GetAuiManager().AddPane(itemTreeCtrl31, wxAuiPaneInfo()
        .Name(wxT("Pane1")).Caption(_("Tree")).MinSize(wxSize(150, -1)).DestroyOnClose(false).Resizable(true).MaximizeButton(true));

    wxHtmlWindow* itemHtmlWindow32 = new wxHtmlWindow( itemFrame1, ID_HTMLWINDOW1, wxDefaultPosition, wxSize(200, 150), wxHW_SCROLLBAR_AUTO|wxNO_BORDER|wxHSCROLL|wxVSCROLL );
    itemHtmlWindow32->SetPage(_("<B>AUI demo</B><P>\n\nThis is a little demo of AUI functionality as prototyped in DialogBlocks. The two toolbars, wxTreeCtrl, wxAuiNotebook and wxHtmlWindow are all managed by AUI. The wxStatusBar is managed by the wxFrame."));
    itemFrame1->GetAuiManager().AddPane(itemHtmlWindow32, wxAuiPaneInfo()
        .Name(wxT("Pane2")).Caption(_("HTML window")).Bottom().MinSize(wxSize(-1, 150)).DestroyOnClose(false).Resizable(true).PinButton(true));

    wxStatusBar* itemStatusBar33 = new wxStatusBar( itemFrame1, ID_STATUSBAR1, wxST_SIZEGRIP|wxNO_BORDER );
    itemStatusBar33->SetFieldsCount(2);
    itemFrame1->SetStatusBar(itemStatusBar33);

    GetAuiManager().Update();

////@end AuiFrame content construction
}

/*!
 * Should we show tooltips?
 */

bool AuiFrame::ShowToolTips()
{
    return true;
}

/*!
 * Get bitmap resources
 */

wxBitmap AuiFrame::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin AuiFrame bitmap retrieval
    wxUnusedVar(name);
    if (name == wxT("copy.xpm"))
    {
        wxBitmap bitmap(copy_xpm);
        return bitmap;
    }
    else if (name == wxT("paste.xpm"))
    {
        wxBitmap bitmap(paste_xpm);
        return bitmap;
    }
    else if (name == wxT("undo.xpm"))
    {
        wxBitmap bitmap(undo_xpm);
        return bitmap;
    }
    else if (name == wxT("redo.xpm"))
    {
        wxBitmap bitmap(redo_xpm);
        return bitmap;
    }
    else if (name == wxT("find.xpm"))
    {
        wxBitmap bitmap(find_xpm);
        return bitmap;
    }
    else if (name == wxT("save.xpm"))
    {
        wxBitmap bitmap(save_xpm);
        return bitmap;
    }
    else if (name == wxT("open.xpm"))
    {
        wxBitmap bitmap(open_xpm);
        return bitmap;
    }
    return wxNullBitmap;
////@end AuiFrame bitmap retrieval
}

/*!
 * Get icon resources
 */

wxIcon AuiFrame::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin AuiFrame icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end AuiFrame icon retrieval
}
