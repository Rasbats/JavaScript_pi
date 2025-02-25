///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "toolsDialogGui.h"

///////////////////////////////////////////////////////////////////////////

ToolsClassBase::ToolsClassBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* TopSizer;
	TopSizer = new wxBoxSizer( wxVERTICAL );

	m_notebook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxSize( 590,460 ), 0 );
	m_notebook->SetForegroundColour( wxColour( 0, 0, 0 ) );
	m_notebook->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	Consoles = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxSize( 590,255 ), 0 );
	Consoles->SetFont( wxFont( 13, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Lucida Grande") ) );
	Consoles->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	Consoles->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* ConsolesSizer;
	ConsolesSizer = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* ConsolesChoiceSizer;
	ConsolesChoiceSizer = new wxStaticBoxSizer( new wxStaticBox( Consoles, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_prompt = new wxStaticText( ConsolesChoiceSizer->GetStaticBox(), wxID_ANY, wxT("Add a new console with name  "), wxDefaultPosition, wxDefaultSize, 0|wxBORDER_NONE );
	m_prompt->Wrap( -1 );
	m_prompt->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	ConsolesChoiceSizer->Add( m_prompt, 0, wxALL, 5 );

	m_newConsoleName = new wxTextCtrl( ConsolesChoiceSizer->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	#ifdef __WXGTK__
	if ( !m_newConsoleName->HasFlag( wxTE_MULTILINE ) )
	{
	m_newConsoleName->SetMaxLength( 14 );
	}
	#else
	m_newConsoleName->SetMaxLength( 14 );
	#endif
	m_newConsoleName->SetFont( wxFont( 13, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Lucida Grande") ) );

	m_newConsoleName->SetValidator( wxTextValidator( wxFILTER_ALPHANUMERIC, &mNewNameInput ) );

	ConsolesChoiceSizer->Add( m_newConsoleName, 0, wxALL|wxEXPAND, 2 );


	ConsolesChoiceSizer->Add( 130, 0, 1, 0, 5 );

	m_addButton = new wxButton( ConsolesChoiceSizer->GetStaticBox(), wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	ConsolesChoiceSizer->Add( m_addButton, 0, wxALL, 5 );


	ConsolesSizer->Add( ConsolesChoiceSizer, 0, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 0 );

	wxStaticBoxSizer* ConsolesRenameSizer;
	ConsolesRenameSizer = new wxStaticBoxSizer( new wxStaticBox( Consoles, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_rename_prompt = new wxStaticText( ConsolesRenameSizer->GetStaticBox(), wxID_ANY, wxT("Change name of console"), wxDefaultPosition, wxDefaultSize, 0|wxBORDER_NONE );
	m_rename_prompt->Wrap( -1 );
	m_rename_prompt->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	ConsolesRenameSizer->Add( m_rename_prompt, 0, wxALL, 5 );

	wxArrayString m_oldNamesChoices;
	m_oldNames = new wxChoice( ConsolesRenameSizer->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( 130,-1 ), m_oldNamesChoices, wxCB_SORT );
	m_oldNames->SetSelection( 0 );
	ConsolesRenameSizer->Add( m_oldNames, 0, wxALL|wxEXPAND, 5 );

	m_staticText15 = new wxStaticText( ConsolesRenameSizer->GetStaticBox(), wxID_ANY, wxT("to"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	ConsolesRenameSizer->Add( m_staticText15, 0, wxALL, 5 );

	m_changedName = new wxTextCtrl( ConsolesRenameSizer->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	#ifdef __WXGTK__
	if ( !m_changedName->HasFlag( wxTE_MULTILINE ) )
	{
	m_changedName->SetMaxLength( 14 );
	}
	#else
	m_changedName->SetMaxLength( 14 );
	#endif
	m_changedName->SetFont( wxFont( 13, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Lucida Grande") ) );

	m_changedName->SetValidator( wxTextValidator( wxFILTER_ALPHANUMERIC, &m_changedNameInput ) );

	ConsolesRenameSizer->Add( m_changedName, 0, wxALL|wxEXPAND, 2 );


	ConsolesRenameSizer->Add( 120, 0, 1, 0, 5 );

	m_changeButton = new wxButton( ConsolesRenameSizer->GetStaticBox(), wxID_ANY, wxT("Change"), wxDefaultPosition, wxDefaultSize, 0 );
	ConsolesRenameSizer->Add( m_changeButton, 0, wxALL, 5 );


	ConsolesSizer->Add( ConsolesRenameSizer, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_TOP|wxEXPAND, 5 );

	wxStaticBoxSizer* ConsolesFind;
	ConsolesFind = new wxStaticBoxSizer( new wxStaticBox( Consoles, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_findAllButton = new wxButton( ConsolesFind->GetStaticBox(), wxID_ANY, wxT("Find all consoles"), wxDefaultPosition, wxDefaultSize, 0 );
	ConsolesFind->Add( m_findAllButton, 0, wxALL|wxTOP, 5 );


	ConsolesSizer->Add( ConsolesFind, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_TOP|wxEXPAND, 5 );

	wxStaticBoxSizer* ConsolesMessageSizer;
	ConsolesMessageSizer = new wxStaticBoxSizer( new wxStaticBox( Consoles, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_ConsolesMessage = new wxTextCtrl( ConsolesMessageSizer->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 550,20 ), 0|wxBORDER_NONE );
	m_ConsolesMessage->SetFont( wxFont( 13, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Lucida Grande") ) );
	m_ConsolesMessage->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );
	m_ConsolesMessage->SetBackgroundColour( wxColour( 242, 242, 242 ) );

	ConsolesMessageSizer->Add( m_ConsolesMessage, 0, wxALL, 5 );


	ConsolesSizer->Add( ConsolesMessageSizer, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_TOP|wxEXPAND, 0 );

	wxStaticBoxSizer* sbSizer18;
	sbSizer18 = new wxStaticBoxSizer( new wxStaticBox( Consoles, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	sbSizer18->SetMinSize( wxSize( -1,70 ) );
	m_floatOnParent = new wxCheckBox( sbSizer18->GetStaticBox(), wxID_ANY, wxT("Float consoles on top"), wxDefaultPosition, wxDefaultSize, 0 );
	m_floatOnParent->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_floatOnParent->SetForegroundColour( wxColour( 0, 0, 0 ) );
	m_floatOnParent->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	sbSizer18->Add( m_floatOnParent, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	m_rememberToggleStatus = new wxCheckBox( sbSizer18->GetStaticBox(), wxID_ANY, wxT("Remember toggle status"), wxDefaultPosition, wxDefaultSize, 0 );
	m_rememberToggleStatus->SetValue(true);
	m_rememberToggleStatus->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	m_rememberToggleStatus->SetForegroundColour( wxColour( 0, 0, 0 ) );
	m_rememberToggleStatus->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	sbSizer18->Add( m_rememberToggleStatus, 0, wxALL, 5 );


	ConsolesSizer->Add( sbSizer18, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_TOP|wxEXPAND, 0 );

	wxStaticBoxSizer* sbSizer30;
	sbSizer30 = new wxStaticBoxSizer( new wxStaticBox( Consoles, wxID_ANY, wxT("label") ), wxVERTICAL );


	ConsolesSizer->Add( sbSizer30, 1, wxEXPAND, 0 );


	Consoles->SetSizer( ConsolesSizer );
	Consoles->Layout();
	m_notebook->AddPage( Consoles, wxT("Consoles"), false );
	Directory = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxSize( 590,150 ), 0 );
	Directory->SetFont( wxFont( 13, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Lucida Grande") ) );
	Directory->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	Directory->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* DirectorySizer1;
	DirectorySizer1 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* DirectorySizer;
	DirectorySizer = new wxStaticBoxSizer( new wxStaticBox( Directory, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	mCurrentDirectory = new wxStaticText( DirectorySizer->GetStaticBox(), wxID_ANY, wxT("Current directory"), wxDefaultPosition, wxDefaultSize, 0|wxBORDER_NONE );
	mCurrentDirectory->Wrap( -1 );
	mCurrentDirectory->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	DirectorySizer->Add( mCurrentDirectory, 0, wxALL, 5 );


	DirectorySizer->Add( 130, 0, 1, wxEXPAND, 5 );

	mDirectoryChangeButton = new wxButton( DirectorySizer->GetStaticBox(), wxID_ANY, wxT("Change..."), wxDefaultPosition, wxDefaultSize, 0 );
	mDirectoryChangeButton->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	DirectorySizer->Add( mDirectoryChangeButton, 0, wxALL|wxEXPAND, 5 );


	DirectorySizer1->Add( DirectorySizer, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* DrectoryStringSizer;
	DrectoryStringSizer = new wxStaticBoxSizer( new wxStaticBox( Directory, wxID_ANY, wxEmptyString ), wxVERTICAL );

	mCurrentDirectoryString = new wxStaticText( DrectoryStringSizer->GetStaticBox(), wxID_ANY, wxT("Will be directory string"), wxDefaultPosition, wxSize( 560,-1 ), 0 );
	mCurrentDirectoryString->Wrap( -1 );
	mCurrentDirectoryString->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	mCurrentDirectoryString->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	DrectoryStringSizer->Add( mCurrentDirectoryString, 0, wxALL|wxEXPAND, 5 );


	DirectorySizer1->Add( DrectoryStringSizer, 0, wxEXPAND, 5 );


	Directory->SetSizer( DirectorySizer1 );
	Directory->Layout();
	m_notebook->AddPage( Directory, wxT("Directory"), false );
	NMEA = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxSize( 590,160 ), 0 );
	NMEA->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxBoxSizer* NMEASizer;
	NMEASizer = new wxBoxSizer( wxVERTICAL );

	NMEAtopText = new wxStaticText( NMEA, wxID_ANY, wxT("Receive an NMEA message into plugin         (will not be seen by OpenCPN)"), wxDefaultPosition, wxDefaultSize, 0 );
	NMEAtopText->Wrap( -1 );
	NMEASizer->Add( NMEAtopText, 0, wxALL, 5 );

	wxStaticBoxSizer* NMEASizer1;
	NMEASizer1 = new wxStaticBoxSizer( new wxStaticBox( NMEA, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_NMEAmessage = new wxTextCtrl( NMEASizer1->GetStaticBox(), wxID_ANY, wxT("$GPRMC,152912,A,5041.0535,N,00205.3070,W,0.06,0,070600,,,A,V*3D"), wxDefaultPosition, wxSize( 500,-1 ), 0 );
	NMEASizer1->Add( m_NMEAmessage, 0, wxALL, 5 );


	NMEASizer->Add( NMEASizer1, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* ReceivedMessageButtonSizer;
	ReceivedMessageButtonSizer = new wxStaticBoxSizer( new wxStaticBox( NMEA, wxID_ANY, wxEmptyString ), wxHORIZONTAL );


	ReceivedMessageButtonSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	m_NMEAReceiveMessageButton = new wxButton( ReceivedMessageButtonSizer->GetStaticBox(), wxID_ANY, wxT("Receive"), wxDefaultPosition, wxDefaultSize, 0 );
	m_NMEAReceiveMessageButton->SetLabelMarkup( wxT("Receive") );
	ReceivedMessageButtonSizer->Add( m_NMEAReceiveMessageButton, 0, wxALL, 5 );


	NMEASizer->Add( ReceivedMessageButtonSizer, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer28;
	sbSizer28 = new wxStaticBoxSizer( new wxStaticBox( NMEA, wxID_ANY, wxEmptyString ), wxVERTICAL );


	NMEASizer->Add( sbSizer28, 1, wxEXPAND, 5 );


	NMEA->SetSizer( NMEASizer );
	NMEA->Layout();
	m_notebook->AddPage( NMEA, wxT("NMEA"), false );
	Message = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxSize( 590,320 ), 0 );
	Message->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxBoxSizer* MessageSizer;
	MessageSizer = new wxBoxSizer( wxVERTICAL );

	MessageTopText = new wxStaticText( Message, wxID_ANY, wxT("Receive an OPCN message into plugin         (will not be seen by OpenCPN)"), wxDefaultPosition, wxDefaultSize, 0 );
	MessageTopText->Wrap( -1 );
	MessageSizer->Add( MessageTopText, 0, wxALL, 5 );

	wxStaticBoxSizer* MessageIDSizer;
	MessageIDSizer = new wxStaticBoxSizer( new wxStaticBox( Message, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_MessageIDText1 = new wxStaticText( MessageIDSizer->GetStaticBox(), wxID_ANY, wxT("Message ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_MessageIDText1->Wrap( -1 );
	m_MessageIDText1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	MessageIDSizer->Add( m_MessageIDText1, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_MessageID = new wxTextCtrl( MessageIDSizer->GetStaticBox(), wxID_ANY, wxT("EXAMPLE_MESSAGE_ID"), wxDefaultPosition, wxSize( 300,-1 ), 0 );
	MessageIDSizer->Add( m_MessageID, 0, wxALIGN_CENTER_VERTICAL, 5 );


	MessageIDSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	m_receiveMessageButton = new wxButton( MessageIDSizer->GetStaticBox(), wxID_ANY, wxT("Receive"), wxDefaultPosition, wxDefaultSize, 0 );
	MessageIDSizer->Add( m_receiveMessageButton, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	MessageSizer->Add( MessageIDSizer, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxStaticBoxSizer* MessageBodySizer1;
	MessageBodySizer1 = new wxStaticBoxSizer( new wxStaticBox( Message, wxID_ANY, wxEmptyString ), wxVERTICAL );

	m_MessageText11 = new wxStaticText( MessageBodySizer1->GetStaticBox(), wxID_ANY, wxT("Message"), wxDefaultPosition, wxDefaultSize, 0 );
	m_MessageText11->Wrap( -1 );
	m_MessageText11->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	MessageBodySizer1->Add( m_MessageText11, 0, wxALL, 5 );

	m_MessageBody = new wxTextCtrl( MessageBodySizer1->GetStaticBox(), wxID_ANY, wxT("\"Latitude\" : 61.234,\n\"Longitude\" : -1.234"), wxDefaultPosition, wxSize( 580,250 ), wxTE_MULTILINE|wxTE_WORDWRAP|wxVSCROLL );
	MessageBodySizer1->Add( m_MessageBody, 0, 0, 5 );


	MessageSizer->Add( MessageBodySizer1, 0, 0, 5 );


	Message->SetSizer( MessageSizer );
	Message->Layout();
	m_notebook->AddPage( Message, wxT("Message"), false );
	Parking = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxSize( 590,300 ), wxTAB_TRAVERSAL );
	Parking->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	Parking->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxBoxSizer* ParkingTopSizer1;
	ParkingTopSizer1 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* parkingAdviceSizer1;
	parkingAdviceSizer1 = new wxStaticBoxSizer( new wxStaticBox( Parking, wxID_ANY, wxEmptyString ), wxVERTICAL );

	m_buttonAdvice = new wxStaticText( parkingAdviceSizer1->GetStaticBox(), wxID_ANY, wxT("Configure custom parking details\nChanges will be preserved on normal  plugin/OpenCPN deactivation"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAdvice->Wrap( -1 );
	m_buttonAdvice->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Lucida Grande") ) );
	m_buttonAdvice->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	parkingAdviceSizer1->Add( m_buttonAdvice, 0, wxALL, 0 );


	ParkingTopSizer1->Add( parkingAdviceSizer1, 0, 0, 5 );

	wxStaticBoxSizer* RevertTopSizer1;
	RevertTopSizer1 = new wxStaticBoxSizer( new wxStaticBox( Parking, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_revertPrompt = new wxStaticText( RevertTopSizer1->GetStaticBox(), wxID_ANY, wxT("Revert to platform defaults"), wxDefaultPosition, wxDefaultSize, 0 );
	m_revertPrompt->Wrap( -1 );
	m_revertPrompt->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	RevertTopSizer1->Add( m_revertPrompt, 0, wxALL, 5 );


	RevertTopSizer1->Add( 28, 0, 1, wxEXPAND, 5 );

	m_parking_revert_button = new wxButton( RevertTopSizer1->GetStaticBox(), wxID_ANY, wxT("Revert"), wxDefaultPosition, wxDefaultSize, 0 );
	RevertTopSizer1->Add( m_parking_revert_button, 0, wxALL, 5 );


	ParkingTopSizer1->Add( RevertTopSizer1, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* CustomTopSizer1;
	CustomTopSizer1 = new wxStaticBoxSizer( new wxStaticBox( Parking, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_customPrompt = new wxStaticText( CustomTopSizer1->GetStaticBox(), wxID_ANY, wxT("Customise parking settings"), wxDefaultPosition, wxDefaultSize, 0 );
	m_customPrompt->Wrap( -1 );
	m_customPrompt->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	CustomTopSizer1->Add( m_customPrompt, 0, wxALL, 5 );


	CustomTopSizer1->Add( 40, 0, 1, wxEXPAND, 5 );

	m_customiseButton = new wxButton( CustomTopSizer1->GetStaticBox(), wxID_ANY, wxT("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	CustomTopSizer1->Add( m_customiseButton, 0, wxALL, 5 );


	ParkingTopSizer1->Add( CustomTopSizer1, 0, wxEXPAND, 0 );

	wxStaticBoxSizer* RevealTopSizer;
	RevealTopSizer = new wxStaticBoxSizer( new wxStaticBox( Parking, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_revealPrompt = new wxStaticText( RevealTopSizer->GetStaticBox(), wxID_ANY, wxT("Show parameters for consolePositioning.h"), wxDefaultPosition, wxDefaultSize, 0 );
	m_revealPrompt->Wrap( -1 );
	m_revealPrompt->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	RevealTopSizer->Add( m_revealPrompt, 0, wxALL, 5 );


	RevealTopSizer->Add( 40, 0, 1, wxEXPAND, 5 );

	m_revealButton = new wxButton( RevealTopSizer->GetStaticBox(), wxID_ANY, wxT("Reveal"), wxDefaultPosition, wxDefaultSize, 0 );
	RevealTopSizer->Add( m_revealButton, 0, wxALL, 5 );


	ParkingTopSizer1->Add( RevealTopSizer, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* ConsolesMessageSizer1;
	ConsolesMessageSizer1 = new wxStaticBoxSizer( new wxStaticBox( Parking, wxID_ANY, wxEmptyString ), wxVERTICAL );

	ConsolesMessageSizer1->SetMinSize( wxSize( -1,145 ) );
	m_parkingMessage = new wxTextCtrl( ConsolesMessageSizer1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 700,220 ), wxTE_MULTILINE|wxTE_READONLY );
	ConsolesMessageSizer1->Add( m_parkingMessage, 0, wxALL, 5 );


	ParkingTopSizer1->Add( ConsolesMessageSizer1, 0, wxEXPAND, 5 );


	Parking->SetSizer( ParkingTopSizer1 );
	Parking->Layout();
	m_notebook->AddPage( Parking, wxT("Parking"), false );
	Help = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxSize( 590,600 ), 0 );
	Help->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxBoxSizer* HelpSizer1;
	HelpSizer1 = new wxBoxSizer( wxVERTICAL );

	HelpTopText1 = new wxStaticText( Help, wxID_ANY, wxT("There is a detailed UserGuide for this plugin,. You can download the latest version from the following links.  Please consult this before raising queries.\n\nIf reading on a mobile device, you may find the .epub format more convenient as you can bookmark pages and keep track of where you have got to."), wxDefaultPosition, wxDefaultSize, 0 );
	HelpTopText1->Wrap( 550 );
	HelpSizer1->Add( HelpTopText1, 0, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer24;
	sbSizer24 = new wxStaticBoxSizer( new wxStaticBox( Help, wxID_ANY, wxEmptyString ), wxHORIZONTAL );


	sbSizer24->Add( 0, 0, 1, wxEXPAND, 0 );

	m_userGuidePdf = new wxHyperlinkCtrl( sbSizer24->GetStaticBox(), wxID_ANY, wxT("User guide .pdf"), wxT("https://github.com/antipole2/JavaScript_pi/raw/master/documentation/JavaScript_plugin_user_guide.pdf"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	sbSizer24->Add( m_userGuidePdf, 0, wxALL, 5 );


	sbSizer24->Add( 0, 0, 1, 0, 5 );

	m_userGuideEpub = new wxHyperlinkCtrl( sbSizer24->GetStaticBox(), wxID_ANY, wxT("User guide .epub"), wxT("https://github.com/antipole2/JavaScript_pi/raw/master/documentation/JavaScript_plugin_user_guide.epub"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	sbSizer24->Add( m_userGuideEpub, 0, wxALL, 5 );


	sbSizer24->Add( 0, 0, 1, wxEXPAND, 5 );


	HelpSizer1->Add( sbSizer24, 0, wxEXPAND, 0 );


	HelpSizer1->Add( 0, 25, 0, 0, 0 );

	HelpTopText11 = new wxStaticText( Help, wxID_ANY, wxT("There is a library of sample scripts available.  These can be used ‘as is’ or adapted  as rquired. They are also useful examples of how to achive various tasks."), wxDefaultPosition, wxDefaultSize, 0 );
	HelpTopText11->Wrap( 550 );
	HelpSizer1->Add( HelpTopText11, 0, wxALL|wxEXPAND, 5 );

	m_hyperlink5 = new wxHyperlinkCtrl( Help, wxID_ANY, wxT("The shared library"), wxT("https://github.com/antipole2/JavaScripts-shared/blob/main/library/library_index.adoc"), wxDefaultPosition, wxDefaultSize, wxHL_ALIGN_CENTRE|wxHL_DEFAULT_STYLE );
	HelpSizer1->Add( m_hyperlink5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	HelpSizer1->Add( 0, 25, 0, wxEXPAND, 5 );

	HelpTopText111 = new wxStaticText( Help, wxID_ANY, wxT("The plugin discussion forum is the place to ask questions,  share ideas about its application or share how you are using it.  It also contains release notices for versions of the plugin."), wxDefaultPosition, wxDefaultSize, 0 );
	HelpTopText111->Wrap( 550 );
	HelpSizer1->Add( HelpTopText111, 0, wxALL|wxEXPAND, 5 );

	m_hyperlink511 = new wxHyperlinkCtrl( Help, wxID_ANY, wxT("Plugin discussions"), wxT("https://github.com/antipole2/JavaScript_pi/discussions"), wxDefaultPosition, wxDefaultSize, wxHL_ALIGN_CENTRE|wxHL_DEFAULT_STYLE );
	HelpSizer1->Add( m_hyperlink511, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	HelpSizer1->Add( 0, 20, 0, wxEXPAND, 5 );

	HelpTopText1111 = new wxStaticText( Help, wxID_ANY, wxT("Technical problems can be raised in the plugin issues here."), wxDefaultPosition, wxDefaultSize, 0 );
	HelpTopText1111->Wrap( 550 );
	HelpSizer1->Add( HelpTopText1111, 0, wxALL, 5 );

	m_hyperlink10 = new wxHyperlinkCtrl( Help, wxID_ANY, wxT("Plugin issues"), wxT("https://github.com/antipole2/JavaScript_pi/issues"), wxDefaultPosition, wxDefaultSize, wxHL_ALIGN_CENTRE|wxHL_DEFAULT_STYLE );
	HelpSizer1->Add( m_hyperlink10, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	HelpSizer1->Add( 0, 15, 1, wxEXPAND, 5 );

	m_staticline1 = new wxStaticLine( Help, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxLI_HORIZONTAL );
	m_staticline1->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	HelpSizer1->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	HelpTopText11111 = new wxStaticText( Help, wxID_ANY, wxT("There is also a Technical Guide for those needing to understand the workings of the plugin or maintain it.  This is not needed or helpful for using the plugin or writing scripts."), wxDefaultPosition, wxDefaultSize, 0 );
	HelpTopText11111->Wrap( 550 );
	HelpSizer1->Add( HelpTopText11111, 0, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer33;
	sbSizer33 = new wxStaticBoxSizer( new wxStaticBox( Help, wxID_ANY, wxEmptyString ), wxHORIZONTAL );


	sbSizer33->Add( 0, 0, 1, wxEXPAND, 5 );

	m_techGuidePdf = new wxHyperlinkCtrl( sbSizer33->GetStaticBox(), wxID_ANY, wxT("Technical Guide .pdf"), wxT("https://github.com/antipole2/JavaScript_pi/raw/master/documentation/JavaScript_plugin_technical_guide.pdf"), wxDefaultPosition, wxDefaultSize, wxHL_ALIGN_CENTRE|wxHL_DEFAULT_STYLE );
	sbSizer33->Add( m_techGuidePdf, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	sbSizer33->Add( 0, 0, 1, wxEXPAND, 5 );

	m_techGuideEpub = new wxHyperlinkCtrl( sbSizer33->GetStaticBox(), wxID_ANY, wxT("Technical Guide .epub"), wxT("https://github.com/antipole2/JavaScript_pi/raw/master/documentation/JavaScript_plugin_technical_guide.epub"), wxDefaultPosition, wxDefaultSize, wxHL_ALIGN_CENTRE|wxHL_DEFAULT_STYLE );
	sbSizer33->Add( m_techGuideEpub, 0, wxALL, 5 );


	sbSizer33->Add( 0, 0, 1, wxEXPAND, 5 );


	HelpSizer1->Add( sbSizer33, 1, wxEXPAND, 5 );


	Help->SetSizer( HelpSizer1 );
	Help->Layout();
	m_notebook->AddPage( Help, wxT("Help"), true );
	Diagnostics = new wxPanel( m_notebook, wxID_ANY, wxDefaultPosition, wxSize( 590,200 ), wxTAB_TRAVERSAL );
	Diagnostics->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	Diagnostics->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxBoxSizer* DiagnosticsTpSizer;
	DiagnosticsTpSizer = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* diagnosticAdviceSizer;
	diagnosticAdviceSizer = new wxStaticBoxSizer( new wxStaticBox( Diagnostics, wxID_ANY, wxEmptyString ), wxVERTICAL );

	m_diagnosticAdvice = new wxStaticText( diagnosticAdviceSizer->GetStaticBox(), wxID_ANY, wxT("For help using these functions, see the section Tools panel diagnostics tab  in the plugin technical guide."), wxDefaultPosition, wxDefaultSize, 0 );
	m_diagnosticAdvice->Wrap( -1 );
	m_diagnosticAdvice->SetFont( wxFont( 10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Lucida Grande") ) );
	m_diagnosticAdvice->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	diagnosticAdviceSizer->Add( m_diagnosticAdvice, 0, wxALL, 0 );


	DiagnosticsTpSizer->Add( diagnosticAdviceSizer, 0, 0, 5 );

	wxStaticBoxSizer* DumpTopSizer;
	DumpTopSizer = new wxStaticBoxSizer( new wxStaticBox( Diagnostics, wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_dumpPrompt = new wxStaticText( DumpTopSizer->GetStaticBox(), wxID_ANY, wxT("Plugin and consoles diagnostic information"), wxDefaultPosition, wxDefaultSize, 0 );
	m_dumpPrompt->Wrap( -1 );
	m_dumpPrompt->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	DumpTopSizer->Add( m_dumpPrompt, 0, wxALL, 5 );


	DumpTopSizer->Add( 28, 0, 1, wxEXPAND, 5 );

	m_dumpButton = new wxButton( DumpTopSizer->GetStaticBox(), wxID_ANY, wxT("Dump"), wxDefaultPosition, wxDefaultSize, 0 );
	DumpTopSizer->Add( m_dumpButton, 0, wxALL, 5 );


	DiagnosticsTpSizer->Add( DumpTopSizer, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* cleanSizer;
	cleanSizer = new wxStaticBoxSizer( new wxStaticBox( Diagnostics, wxID_ANY, wxEmptyString ), wxVERTICAL );

	m_charsToClean = new wxTextCtrl( cleanSizer->GetStaticBox(), wxID_ANY, wxT("‟Fancy quotes” degrees°º⁰ primes ‘’‛’′´`"), wxDefaultPosition, wxSize( 550,-1 ), 0 );
	cleanSizer->Add( m_charsToClean, 0, wxALL, 5 );

	wxStaticBoxSizer* CharsTopSizer;
	CharsTopSizer = new wxStaticBoxSizer( new wxStaticBox( cleanSizer->GetStaticBox(), wxID_ANY, wxEmptyString ), wxHORIZONTAL );

	m_cleanPrompt = new wxStaticText( CharsTopSizer->GetStaticBox(), wxID_ANY, wxT("Clean and dump string"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cleanPrompt->Wrap( -1 );
	m_cleanPrompt->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );

	CharsTopSizer->Add( m_cleanPrompt, 0, wxALL, 5 );


	CharsTopSizer->Add( 40, 0, 1, wxEXPAND, 5 );

	m_cleanButton = new wxButton( CharsTopSizer->GetStaticBox(), wxID_ANY, wxT("Clean"), wxDefaultPosition, wxDefaultSize, 0 );
	CharsTopSizer->Add( m_cleanButton, 0, wxALL, 5 );


	cleanSizer->Add( CharsTopSizer, 0, wxEXPAND, 0 );

	wxStaticBoxSizer* sbSizer29;
	sbSizer29 = new wxStaticBoxSizer( new wxStaticBox( cleanSizer->GetStaticBox(), wxID_ANY, wxEmptyString ), wxVERTICAL );


	cleanSizer->Add( sbSizer29, 1, wxEXPAND, 0 );


	DiagnosticsTpSizer->Add( cleanSizer, 0, 0, 0 );


	Diagnostics->SetSizer( DiagnosticsTpSizer );
	Diagnostics->Layout();
	m_notebook->AddPage( Diagnostics, wxT("Diagnostics"), false );

	TopSizer->Add( m_notebook, 1, wxEXPAND, 5 );


	this->SetSizer( TopSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ToolsClassBase::onClose ) );
	m_notebook->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( ToolsClassBase::onPageChanged ), NULL, this );
	m_addButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onAddConsole ), NULL, this );
	m_changeButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onChangeName ), NULL, this );
	m_findAllButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onFindAllConsoles ), NULL, this );
	m_floatOnParent->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ToolsClassBase::onFloatOnParent ), NULL, this );
	m_rememberToggleStatus->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ToolsClassBase::onToggleStatus ), NULL, this );
	mDirectoryChangeButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onChangeDirectory ), NULL, this );
	m_NMEAReceiveMessageButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onRecieveNMEAmessage ), NULL, this );
	m_receiveMessageButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onRecieveMessage ), NULL, this );
	m_parking_revert_button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onParkingRevert ), NULL, this );
	m_customiseButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onParkingCustomise ), NULL, this );
	m_revealButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onParkingReveal ), NULL, this );
	m_dumpButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onDump ), NULL, this );
	m_cleanButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onClean ), NULL, this );
}

ToolsClassBase::~ToolsClassBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ToolsClassBase::onClose ) );
	m_notebook->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( ToolsClassBase::onPageChanged ), NULL, this );
	m_addButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onAddConsole ), NULL, this );
	m_changeButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onChangeName ), NULL, this );
	m_findAllButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onFindAllConsoles ), NULL, this );
	m_floatOnParent->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ToolsClassBase::onFloatOnParent ), NULL, this );
	m_rememberToggleStatus->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ToolsClassBase::onToggleStatus ), NULL, this );
	mDirectoryChangeButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onChangeDirectory ), NULL, this );
	m_NMEAReceiveMessageButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onRecieveNMEAmessage ), NULL, this );
	m_receiveMessageButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onRecieveMessage ), NULL, this );
	m_parking_revert_button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onParkingRevert ), NULL, this );
	m_customiseButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onParkingCustomise ), NULL, this );
	m_revealButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onParkingReveal ), NULL, this );
	m_dumpButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onDump ), NULL, this );
	m_cleanButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ToolsClassBase::onClean ), NULL, this );

}
