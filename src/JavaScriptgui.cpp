///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "JavaScriptgui.h"

///////////////////////////////////////////////////////////////////////////

m_Console::m_Console( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* consoleTopSizer;
	consoleTopSizer = new wxBoxSizer( wxVERTICAL );

	consoleTopSizer->SetMinSize( wxSize( 600,200 ) );
	m_splitter = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxSize( -1,3000 ), wxSP_3D|wxSP_3DSASH|wxSP_LIVE_UPDATE );
	m_splitter->SetSashGravity( 0.5 );
	m_splitter->Connect( wxEVT_IDLE, wxIdleEventHandler( m_Console::m_splitterOnIdle ), NULL, this );
	m_splitter->SetMinimumPaneSize( 50 );

	m_scriptSizer = new wxPanel( m_splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	bSizer3->SetMinSize( wxSize( 600,20 ) );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_clearScript = new wxButton( m_scriptSizer, wxID_ANY, wxT("Clear"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_clearScript, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	copy_button = new wxButton( m_scriptSizer, wxID_ANY, wxT("Copy all"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( copy_button, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	load_button = new wxButton( m_scriptSizer, wxID_ANY, wxT("Load"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( load_button, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	save_button = new wxButton( m_scriptSizer, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( save_button, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	save_as_button = new wxButton( m_scriptSizer, wxID_ANY, wxT("Save as..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( save_as_button, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	run_button = new wxButton( m_scriptSizer, wxID_ANY, wxT("Run"), wxDefaultPosition, wxDefaultSize, 0 );
	run_button->SetLabelMarkup( wxT("Run") );
	bSizer10->Add( run_button, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	auto_run = new wxCheckBox( m_scriptSizer, wxID_ANY, wxT("Auto run"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( auto_run, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer10->Add( 0, 0, 1, 0, 0 );

	park_button = new wxButton( m_scriptSizer, wxID_ANY, wxT("P"), wxDefaultPosition, wxSize( 20,20 ), wxBU_EXACTFIT|wxBORDER_DEFAULT|wxBORDER_NONE );
	park_button->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );
	park_button->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	park_button->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );

	bSizer10->Add( park_button, 0, wxALIGN_CENTER_VERTICAL, 2 );

	tools_button = new wxButton( m_scriptSizer, wxID_ANY, wxT("Tools"), wxDefaultPosition, wxSize( -1,-1 ), wxBORDER_NONE|wxBU_EXACTFIT );
	tools_button->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer10->Add( tools_button, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	Help = new wxButton( m_scriptSizer, wxID_ANY, wxT("?"), wxDefaultPosition, wxSize( -1,-1 ), wxBORDER_NONE|wxBU_EXACTFIT );
	Help->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer10->Add( Help, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );


	bSizer3->Add( bSizer10, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	m_fileStringBox = new wxTextCtrl( m_scriptSizer, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 600,18 ), wxTE_READONLY );
	m_fileStringBox->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_fileStringBox->SetHelpText( wxT("This is the current accessed file") );

	bSizer11->Add( m_fileStringBox, 0, wxALL|wxEXPAND, 5 );


	bSizer3->Add( bSizer11, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	m_Script = new wxStyledTextCtrl( m_scriptSizer, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, wxEmptyString );
	m_Script->SetUseTabs( true );
	m_Script->SetTabWidth( 5 );
	m_Script->SetIndent( 5 );
	m_Script->SetTabIndents( true );
	m_Script->SetBackSpaceUnIndents( true );
	m_Script->SetViewEOL( false );
	m_Script->SetViewWhiteSpace( false );
	m_Script->SetMarginWidth( 2, 0 );
	m_Script->SetIndentationGuides( true );
	m_Script->SetReadOnly( false );
	m_Script->SetMarginType( 1, wxSTC_MARGIN_SYMBOL );
	m_Script->SetMarginMask( 1, wxSTC_MASK_FOLDERS );
	m_Script->SetMarginWidth( 1, 16);
	m_Script->SetMarginSensitive( 1, true );
	m_Script->SetProperty( wxT("fold"), wxT("1") );
	m_Script->SetFoldFlags( wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED | wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED );
	m_Script->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	m_Script->SetMarginWidth( 0, m_Script->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	{
		wxFont font = wxFont( 13, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Courier") );
		m_Script->StyleSetFont( wxSTC_STYLE_DEFAULT, font );
	}
	m_Script->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	m_Script->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	m_Script->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	m_Script->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	m_Script->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	m_Script->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	m_Script->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	m_Script->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	m_Script->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	m_Script->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	m_Script->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	m_Script->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	m_Script->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	m_Script->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	m_Script->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	m_Script->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_Script->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	m_Script->SetFont( wxFont( 13, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Courier") ) );
	m_Script->SetMinSize( wxSize( 600,500 ) );

	bSizer8->Add( m_Script, 1, wxEXPAND | wxALL, 5 );

	m_staticline1 = new wxStaticLine( m_scriptSizer, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer8->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );


	bSizer3->Add( bSizer8, 1, wxEXPAND, 5 );


	m_scriptSizer->SetSizer( bSizer3 );
	m_scriptSizer->Layout();
	bSizer3->Fit( m_scriptSizer );
	m_outputSizer = new wxPanel( m_splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_outputSizer->SetMinSize( wxSize( -1,100 ) );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	bSizer14->SetMinSize( wxSize( 600,20 ) );
	m_staticline2 = new wxStaticLine( m_outputSizer, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer14->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	m_clearOutput = new wxButton( m_outputSizer, wxID_ANY, wxT("Clear output"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer14->Add( m_clearOutput, 0, wxALL, 5 );

	m_Output = new wxStyledTextCtrl( m_outputSizer, wxID_ANY, wxDefaultPosition, wxSize( 600,500 ), 0, wxEmptyString );
	m_Output->SetUseTabs( true );
	m_Output->SetTabWidth( 5 );
	m_Output->SetIndent( 5 );
	m_Output->SetTabIndents( true );
	m_Output->SetBackSpaceUnIndents( true );
	m_Output->SetViewEOL( false );
	m_Output->SetViewWhiteSpace( false );
	m_Output->SetMarginWidth( 2, 0 );
	m_Output->SetIndentationGuides( true );
	m_Output->SetReadOnly( false );
	m_Output->SetMarginType( 1, wxSTC_MARGIN_SYMBOL );
	m_Output->SetMarginMask( 1, wxSTC_MASK_FOLDERS );
	m_Output->SetMarginWidth( 1, 16);
	m_Output->SetMarginSensitive( 1, true );
	m_Output->SetProperty( wxT("fold"), wxT("1") );
	m_Output->SetFoldFlags( wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED | wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED );
	m_Output->SetMarginWidth( 0, 0 );
	{
		wxFont font = wxFont( 13, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Courier") );
		m_Output->StyleSetFont( wxSTC_STYLE_DEFAULT, font );
	}
	m_Output->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	m_Output->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	m_Output->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	m_Output->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	m_Output->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	m_Output->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	m_Output->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	m_Output->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	m_Output->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	m_Output->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	m_Output->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	m_Output->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	m_Output->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	m_Output->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	m_Output->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	m_Output->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_Output->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	m_Output->SetFont( wxFont( 13, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Courier") ) );
	m_Output->SetMinSize( wxSize( 600,400 ) );

	bSizer14->Add( m_Output, 1, wxEXPAND | wxALL, 5 );


	m_outputSizer->SetSizer( bSizer14 );
	m_outputSizer->Layout();
	bSizer14->Fit( m_outputSizer );
	m_splitter->SplitHorizontally( m_scriptSizer, m_outputSizer, 600 );
	consoleTopSizer->Add( m_splitter, 0, wxEXPAND, 5 );


	this->SetSizer( consoleTopSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( m_Console::OnClose ) );
	m_splitter->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_MOTION, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_clearScript->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnClearScript ), NULL, this );
	copy_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnCopyAll ), NULL, this );
	load_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnLoad ), NULL, this );
	save_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnSave ), NULL, this );
	save_as_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnSaveAs ), NULL, this );
	run_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnRun ), NULL, this );
	auto_run->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( m_Console::OnAutoRun ), NULL, this );
	auto_run->Connect( wxEVT_SET_FOCUS, wxFocusEventHandler( m_Console::OnFocus ), NULL, this );
	park_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnPark ), NULL, this );
	tools_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnTools ), NULL, this );
	Help->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnHelp ), NULL, this );
	m_Script->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_MOTION, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_MOTION, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_clearOutput->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnClearOutput ), NULL, this );
}

m_Console::~m_Console()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( m_Console::OnClose ) );
	m_splitter->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_MOTION, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_splitter->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_clearScript->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnClearScript ), NULL, this );
	copy_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnCopyAll ), NULL, this );
	load_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnLoad ), NULL, this );
	save_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnSave ), NULL, this );
	save_as_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnSaveAs ), NULL, this );
	run_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnRun ), NULL, this );
	auto_run->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( m_Console::OnAutoRun ), NULL, this );
	auto_run->Disconnect( wxEVT_SET_FOCUS, wxFocusEventHandler( m_Console::OnFocus ), NULL, this );
	park_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnPark ), NULL, this );
	tools_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnTools ), NULL, this );
	Help->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnHelp ), NULL, this );
	m_Script->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_MOTION, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_Script->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_MOTION, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_outputSizer->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( m_Console::onMouse ), NULL, this );
	m_clearOutput->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_Console::OnClearOutput ), NULL, this );

}

m_Console_Exx::m_Console_Exx( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,10 ), wxSize( -1,-1 ) );


	// Connect Events
	this->Connect( wxEVT_ACTIVATE, wxActivateEventHandler( m_Console_Exx::OnActivate ) );
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( m_Console_Exx::OnClose ) );
	this->Connect( wxEVT_MOVE, wxMoveEventHandler( m_Console_Exx::OnMove ) );
}

m_Console_Exx::~m_Console_Exx()
{
	// Disconnect Events
	this->Disconnect( wxEVT_ACTIVATE, wxActivateEventHandler( m_Console_Exx::OnActivate ) );
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( m_Console_Exx::OnClose ) );
	this->Disconnect( wxEVT_MOVE, wxMoveEventHandler( m_Console_Exx::OnMove ) );

}
