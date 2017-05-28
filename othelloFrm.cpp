///-----------------------------------------------------------------
///
/// @file      othelloFrm.cpp
/// @author    LuisCastro
/// Created:   27/05/2017 20:56:59
/// @section   DESCRIPTION
///            othelloFrm class implementation
///
///------------------------------------------------------------------

#include "othelloFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// othelloFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(othelloFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(othelloFrm::OnClose)
	EVT_BUTTON(ID_WXBUTTON64,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON63,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON62,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON61,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON60,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON59,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON58,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON57,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON56,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON55,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON54,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON53,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON52,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON51,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON50,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON49,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON48,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON47,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON46,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON45,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON44,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON43,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON42,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON41,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON40,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON39,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON38,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON37,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON36,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON35,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON34,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON33,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON32,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON31,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON30,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON29,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON28,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON27,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON26,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON25,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON24,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON23,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON22,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON21,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON20,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON19,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON18,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON17,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON16,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON15,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON14,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON13,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON12,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON11,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON10,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON9,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON8,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON7,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON6,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON5,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON4,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON3,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON2,othelloFrm::WxButton1Click)
	EVT_BUTTON(ID_WXBUTTON1,othelloFrm::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

othelloFrm::othelloFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

othelloFrm::~othelloFrm()
{
}

void othelloFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxGridSizer1 = new wxGridSizer(0, 8, 0, 0);
	this->SetSizer(WxGridSizer1);
	this->SetAutoLayout(true);

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _(""), wxPoint(5, 5), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton1, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton2 = new wxButton(this, ID_WXBUTTON2, _(""), wxPoint(54, 5), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton2, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton3 = new wxButton(this, ID_WXBUTTON3, _(""), wxPoint(103, 5), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton3"));
	WxButton3->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton3, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton4 = new wxButton(this, ID_WXBUTTON4, _(""), wxPoint(152, 5), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton4"));
	WxButton4->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton4, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton5 = new wxButton(this, ID_WXBUTTON5, _(""), wxPoint(201, 5), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton5"));
	WxButton5->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton5, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton6 = new wxButton(this, ID_WXBUTTON6, _(""), wxPoint(250, 5), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton6"));
	WxButton6->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton6, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton7 = new wxButton(this, ID_WXBUTTON7, _(""), wxPoint(299, 5), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton7"));
	WxButton7->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton7, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton8 = new wxButton(this, ID_WXBUTTON8, _(""), wxPoint(348, 5), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton8"));
	WxButton8->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton8, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton9 = new wxButton(this, ID_WXBUTTON9, _(""), wxPoint(5, 52), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton9"));
	WxButton9->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton9, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton10 = new wxButton(this, ID_WXBUTTON10, _(""), wxPoint(54, 52), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton10"));
	WxButton10->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton10, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton11 = new wxButton(this, ID_WXBUTTON11, _(""), wxPoint(103, 52), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton11"));
	WxButton11->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton11, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton12 = new wxButton(this, ID_WXBUTTON12, _(""), wxPoint(152, 52), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton12"));
	WxButton12->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton12, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton13 = new wxButton(this, ID_WXBUTTON13, _(""), wxPoint(201, 52), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton13"));
	WxButton13->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton13, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton14 = new wxButton(this, ID_WXBUTTON14, _(""), wxPoint(250, 52), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton14"));
	WxButton14->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton14, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton15 = new wxButton(this, ID_WXBUTTON15, _(""), wxPoint(299, 52), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton15"));
	WxButton15->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton15, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton16 = new wxButton(this, ID_WXBUTTON16, _(""), wxPoint(348, 52), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton16"));
	WxButton16->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton16, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton17 = new wxButton(this, ID_WXBUTTON17, _(""), wxPoint(5, 99), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton17"));
	WxButton17->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton17, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton18 = new wxButton(this, ID_WXBUTTON18, _(""), wxPoint(54, 99), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton18"));
	WxButton18->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton18, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton19 = new wxButton(this, ID_WXBUTTON19, _(""), wxPoint(103, 99), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton19"));
	WxButton19->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton19, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton20 = new wxButton(this, ID_WXBUTTON20, _(""), wxPoint(152, 99), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton20"));
	WxButton20->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton20, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton21 = new wxButton(this, ID_WXBUTTON21, _(""), wxPoint(201, 99), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton21"));
	WxButton21->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton21, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton22 = new wxButton(this, ID_WXBUTTON22, _(""), wxPoint(250, 99), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton22"));
	WxButton22->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton22, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton23 = new wxButton(this, ID_WXBUTTON23, _(""), wxPoint(299, 99), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton23"));
	WxButton23->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton23, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton24 = new wxButton(this, ID_WXBUTTON24, _(""), wxPoint(348, 99), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton24"));
	WxButton24->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton24, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton25 = new wxButton(this, ID_WXBUTTON25, _(""), wxPoint(5, 146), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton25"));
	WxButton25->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton25, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton26 = new wxButton(this, ID_WXBUTTON26, _(""), wxPoint(54, 146), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton26"));
	WxButton26->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton26, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton27 = new wxButton(this, ID_WXBUTTON27, _(""), wxPoint(103, 146), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton27"));
	WxButton27->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton27, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton28 = new wxButton(this, ID_WXBUTTON28, _(""), wxPoint(152, 146), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton28"));
	WxButton28->Enable(false);
	WxButton28->SetForegroundColour(wxColour(_("GREY")));
	WxButton28->SetBackgroundColour(wxColour(_("WHITE")));
	WxGridSizer1->Add(WxButton28, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton29 = new wxButton(this, ID_WXBUTTON29, _(""), wxPoint(201, 146), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton29"));
	WxButton29->Enable(false);
	WxButton29->SetForegroundColour(wxColour(_("GREY")));
	WxButton29->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton29, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton30 = new wxButton(this, ID_WXBUTTON30, _(""), wxPoint(250, 146), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton30"));
	WxButton30->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton30, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton31 = new wxButton(this, ID_WXBUTTON31, _(""), wxPoint(299, 146), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton31"));
	WxButton31->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton31, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton32 = new wxButton(this, ID_WXBUTTON32, _(""), wxPoint(348, 146), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton32"));
	WxButton32->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton32, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton33 = new wxButton(this, ID_WXBUTTON33, _(""), wxPoint(5, 193), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton33"));
	WxButton33->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton33, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton34 = new wxButton(this, ID_WXBUTTON34, _(""), wxPoint(54, 193), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton34"));
	WxButton34->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton34, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton35 = new wxButton(this, ID_WXBUTTON35, _(""), wxPoint(103, 193), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton35"));
	WxButton35->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton35, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton36 = new wxButton(this, ID_WXBUTTON36, _(""), wxPoint(152, 193), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton36"));
	WxButton36->Enable(false);
	WxButton36->SetForegroundColour(wxColour(_("GREY")));
	WxButton36->SetBackgroundColour(wxColour(_("BLACK")));
	WxGridSizer1->Add(WxButton36, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton37 = new wxButton(this, ID_WXBUTTON37, _(""), wxPoint(201, 193), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton37"));
	WxButton37->Enable(false);
	WxButton37->SetForegroundColour(wxColour(_("GREY")));
	WxButton37->SetBackgroundColour(wxColour(_("WHITE")));
	WxGridSizer1->Add(WxButton37, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton38 = new wxButton(this, ID_WXBUTTON38, _(""), wxPoint(250, 193), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton38"));
	WxButton38->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton38, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton39 = new wxButton(this, ID_WXBUTTON39, _(""), wxPoint(299, 193), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton39"));
	WxButton39->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton39, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton40 = new wxButton(this, ID_WXBUTTON40, _(""), wxPoint(348, 193), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton40"));
	WxButton40->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton40, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton41 = new wxButton(this, ID_WXBUTTON41, _(""), wxPoint(5, 240), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton41"));
	WxButton41->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton41, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton42 = new wxButton(this, ID_WXBUTTON42, _(""), wxPoint(54, 240), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton42"));
	WxButton42->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton42, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton43 = new wxButton(this, ID_WXBUTTON43, _(""), wxPoint(103, 240), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton43"));
	WxButton43->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton43, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton44 = new wxButton(this, ID_WXBUTTON44, _(""), wxPoint(152, 240), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton44"));
	WxButton44->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton44, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton45 = new wxButton(this, ID_WXBUTTON45, _(""), wxPoint(201, 240), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton45"));
	WxButton45->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton45, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton46 = new wxButton(this, ID_WXBUTTON46, _(""), wxPoint(250, 240), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton46"));
	WxButton46->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton46, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton47 = new wxButton(this, ID_WXBUTTON47, _(""), wxPoint(299, 240), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton47"));
	WxButton47->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton47, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton48 = new wxButton(this, ID_WXBUTTON48, _(""), wxPoint(348, 240), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton48"));
	WxButton48->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton48, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton49 = new wxButton(this, ID_WXBUTTON49, _(""), wxPoint(5, 287), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton49"));
	WxButton49->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton49, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton50 = new wxButton(this, ID_WXBUTTON50, _(""), wxPoint(54, 287), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton50"));
	WxButton50->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton50, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton51 = new wxButton(this, ID_WXBUTTON51, _(""), wxPoint(103, 287), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton51"));
	WxButton51->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton51, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton52 = new wxButton(this, ID_WXBUTTON52, _(""), wxPoint(152, 287), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton52"));
	WxButton52->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton52, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton53 = new wxButton(this, ID_WXBUTTON53, _(""), wxPoint(201, 287), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton53"));
	WxButton53->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton53, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton54 = new wxButton(this, ID_WXBUTTON54, _(""), wxPoint(250, 287), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton54"));
	WxButton54->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton54, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton55 = new wxButton(this, ID_WXBUTTON55, _(""), wxPoint(299, 287), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton55"));
	WxButton55->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton55, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton56 = new wxButton(this, ID_WXBUTTON56, _(""), wxPoint(348, 287), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton56"));
	WxButton56->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton56, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton57 = new wxButton(this, ID_WXBUTTON57, _(""), wxPoint(5, 334), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton57"));
	WxButton57->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton57, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton58 = new wxButton(this, ID_WXBUTTON58, _(""), wxPoint(54, 334), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton58"));
	WxButton58->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton58, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton59 = new wxButton(this, ID_WXBUTTON59, _(""), wxPoint(103, 334), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton59"));
	WxButton59->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton59, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton60 = new wxButton(this, ID_WXBUTTON60, _(""), wxPoint(152, 334), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton60"));
	WxButton60->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton60, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton61 = new wxButton(this, ID_WXBUTTON61, _(""), wxPoint(201, 334), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton61"));
	WxButton61->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton61, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton62 = new wxButton(this, ID_WXBUTTON62, _(""), wxPoint(250, 334), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton62"));
	WxButton62->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton62, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton63 = new wxButton(this, ID_WXBUTTON63, _(""), wxPoint(299, 334), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton63"));
	WxButton63->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton63, 0, wxALIGN_CENTER | wxALL, 5);

	WxButton64 = new wxButton(this, ID_WXBUTTON64, _(""), wxPoint(348, 334), wxSize(39, 37), 0, wxDefaultValidator, _("WxButton64"));
	WxButton64->SetForegroundColour(wxColour(_("GREY")));
	WxGridSizer1->Add(WxButton64, 0, wxALIGN_CENTER | wxALL, 5);

	SetTitle(_("othello"));
	SetIcon(wxNullIcon);
	
	Layout();
	GetSizer()->Fit(this);
	GetSizer()->SetSizeHints(this);
	Center();
	
	////GUI Items Creation End
	turno=0;
}

void othelloFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxButton1Click
 */
void othelloFrm::WxButton1Click(wxCommandEvent& event)
{
	// insert your code here
	wxButton*boton= (wxButton*)event.GetEventObject();
	boton->Enable(false);
    if(turno==0){
        boton->SetBackgroundColour("BLACK");
    }else if(turno==1){
        boton->SetBackgroundColour("WHITE");
    }
    
    //REGLAS PARA LOS CAMBIOS
    //1)ALGUNOS BOTONES SOLO PUEDEN HACER 3 CAMBIOS(NORMALMENTE,LOS QUE ESTAN MAS CERCA DE LAS ESQUINAS)
    //2)OTROS HACEN 5 CAMBIOS(LOS QUE SE ENCUENTRAN A LOS BORDES DE LOS LADOS)
    //3)Y POR ULTIMO, ESTAN LOS QUE HACEN 8 CAMBIOS(QUE SON LOS QUE SE ENCUENTRAN EN EL CENTRO)
    //4)LOS DIVIDIREMOS POR GRUPO, ASI SERA MAS FACIL RECONOCER CUANTAS VECES SE TIENE QUE EJECUTAR LA FUNCION POR BOTON
    //5)ESTA FUNCION NO HACE CAMBIOS TAN ALTOS, SOLO CUANDO HAY QUE COMPARAR DE A 2 BOTONES
    
    
    //PRIMERO, LOS BOTONES CON 3 CAMBIOS
    
    //esquina superior izquierda
    if(boton==WxButton1){
        Cambiar(WxButton1,WxButton2,WxButton3,turno);
        Cambiar(WxButton1,WxButton10,WxButton19,turno);
        Cambiar(WxButton1,WxButton9,WxButton17,turno);
    }
    
    if(boton==WxButton2){
        Cambiar(WxButton2,WxButton3,WxButton4,turno);
        Cambiar(WxButton2,WxButton10,WxButton18,turno);
        Cambiar(WxButton2,WxButton11,WxButton20,turno);
    }
    
    if(boton==WxButton9){
        Cambiar(WxButton9,WxButton10,WxButton11,turno);
        Cambiar(WxButton9,WxButton18,WxButton27,turno);
        Cambiar(WxButton9,WxButton17,WxButton25,turno);
    }
    
    if(boton==WxButton10){
        Cambiar(WxButton10,WxButton11,WxButton12,turno);
        Cambiar(WxButton10,WxButton18,WxButton26,turno);
        Cambiar(WxButton10,WxButton19,WxButton28,turno);
    }
    
    //esquina superior derecha
    
    if(boton==WxButton8){
        Cambiar(WxButton8,WxButton7,WxButton6,turno);
        Cambiar(WxButton8,WxButton15,WxButton22,turno);
        Cambiar(WxButton8,WxButton16,WxButton24,turno);
    }
    
    if(boton==WxButton7){
        Cambiar(WxButton7,WxButton6,WxButton5,turno);
        Cambiar(WxButton7,WxButton14,WxButton21,turno);
        Cambiar(WxButton7,WxButton15,WxButton23,turno);
    }
    
    if(boton==WxButton16){
        Cambiar(WxButton16,WxButton24,WxButton32,turno);
        Cambiar(WxButton16,WxButton23,WxButton30,turno);
        Cambiar(WxButton16,WxButton15,WxButton14,turno);
    }
    
    if(boton==WxButton15){
        Cambiar(WxButton15,WxButton23,WxButton31,turno);
        Cambiar(WxButton15,WxButton22,WxButton29,turno);
        Cambiar(WxButton15,WxButton14,WxButton13,turno);
    }
    
    //esquina inferior izquierda
    
    if(boton==WxButton57){
        Cambiar(WxButton57,WxButton58,WxButton59,turno);
        Cambiar(WxButton57,WxButton49,WxButton41,turno);
        Cambiar(WxButton57,WxButton50,WxButton43,turno);
    }
    
    if(boton==WxButton58){
        Cambiar(WxButton58,WxButton59,WxButton60,turno);
        Cambiar(WxButton58,WxButton50,WxButton42,turno);
        Cambiar(WxButton58,WxButton51,WxButton44,turno);
    } 
    
    if(boton==WxButton50){
        Cambiar(WxButton50,WxButton51,WxButton52,turno);
        Cambiar(WxButton50,WxButton42,WxButton34,turno);
        Cambiar(WxButton50,WxButton43,WxButton36,turno);
    }
    
    if(boton==WxButton49){
        Cambiar(WxButton49,WxButton50,WxButton51,turno);
        Cambiar(WxButton49,WxButton41,WxButton33,turno);
        Cambiar(WxButton49,WxButton42,WxButton35,turno);
    }
    
    //esquina inferior derecha
    
    if(boton==WxButton64){
        Cambiar(WxButton64,WxButton63,WxButton62,turno);
        Cambiar(WxButton64,WxButton55,WxButton46,turno);
        Cambiar(WxButton64,WxButton56,WxButton48,turno);
    }
    
    if(boton==WxButton63){
        Cambiar(WxButton63,WxButton62,WxButton61,turno);
        Cambiar(WxButton63,WxButton55,WxButton47,turno);
        Cambiar(WxButton63,WxButton54,WxButton45,turno);
    }
    
    if(boton==WxButton55){
        Cambiar(WxButton55,WxButton54,WxButton53,turno);
        Cambiar(WxButton55,WxButton47,WxButton39,turno);
        Cambiar(WxButton55,WxButton46,WxButton37,turno);
    }
    
    if(boton==WxButton56){
        Cambiar(WxButton56,WxButton55,WxButton54,turno);
        Cambiar(WxButton56,WxButton47,WxButton38,turno);
        Cambiar(WxButton56,WxButton48,WxButton40,turno);
    }
    
    
    //AHORA, LOS BOTONES CON 5 CAMBIOS
    
    //LADO IZQUIERDO
    
    if(boton==WxButton17){
        Cambiar(WxButton17,WxButton9,WxButton1,turno);
        Cambiar(WxButton17,WxButton10,WxButton3,turno);
        Cambiar(WxButton17,WxButton18,WxButton19,turno);
        Cambiar(WxButton17,WxButton26,WxButton35,turno);
        Cambiar(WxButton17,WxButton25,WxButton33,turno);
    }
    
    if(boton==WxButton18){
        Cambiar(WxButton18,WxButton10,WxButton2,turno);
        Cambiar(WxButton18,WxButton11,WxButton4,turno);
        Cambiar(WxButton18,WxButton19,WxButton20,turno);
        Cambiar(WxButton18,WxButton27,WxButton36,turno);
        Cambiar(WxButton18,WxButton26,WxButton34,turno);
    }
    
    if(boton==WxButton25){
        Cambiar(WxButton25,WxButton26,WxButton27,turno);
        Cambiar(WxButton25,WxButton17,WxButton9,turno);
        Cambiar(WxButton25,WxButton18,WxButton11,turno);
        Cambiar(WxButton25,WxButton34,WxButton43,turno);
        Cambiar(WxButton25,WxButton33,WxButton41,turno);
    }
    
    if(boton==WxButton26){
        Cambiar(WxButton26,WxButton18,WxButton10,turno);
        Cambiar(WxButton26,WxButton19,WxButton12,turno);
        Cambiar(WxButton26,WxButton27,WxButton28,turno);
        Cambiar(WxButton26,WxButton35,WxButton44,turno);
        Cambiar(WxButton26,WxButton34,WxButton42,turno);
    }
    
    if(boton==WxButton33){
        Cambiar(WxButton33,WxButton25,WxButton17,turno);
        Cambiar(WxButton33,WxButton26,WxButton19,turno);
        Cambiar(WxButton33,WxButton34,WxButton35,turno);
        Cambiar(WxButton33,WxButton42,WxButton51,turno);
        Cambiar(WxButton33,WxButton41,WxButton49,turno);
    }
    
    if(boton==WxButton34){
        Cambiar(WxButton34,WxButton26,WxButton18,turno);
        Cambiar(WxButton34,WxButton27,WxButton20,turno);
        Cambiar(WxButton34,WxButton35,WxButton36,turno);
        Cambiar(WxButton34,WxButton43,WxButton52,turno);
        Cambiar(WxButton34,WxButton42,WxButton50,turno);
    }
    
    if(boton==WxButton41){
        Cambiar(WxButton41,WxButton33,WxButton25,turno);
        Cambiar(WxButton41,WxButton34,WxButton27,turno);
        Cambiar(WxButton41,WxButton42,WxButton43,turno);
        Cambiar(WxButton41,WxButton50,WxButton59,turno);
        Cambiar(WxButton41,WxButton49,WxButton57,turno);
    }
    
    if(boton==WxButton42){
        Cambiar(WxButton42,WxButton34,WxButton26,turno);
        Cambiar(WxButton42,WxButton35,WxButton28,turno);
        Cambiar(WxButton42,WxButton43,WxButton44,turno);
        Cambiar(WxButton42,WxButton51,WxButton60,turno);
        Cambiar(WxButton42,WxButton50,WxButton58,turno);
    }
    
    
    
    //LADO SUPERIOR
    
    if(boton==WxButton3){
        Cambiar(WxButton3,WxButton2,WxButton1,turno);
        Cambiar(WxButton3,WxButton10,WxButton17,turno);
        Cambiar(WxButton3,WxButton11,WxButton19,turno);
        Cambiar(WxButton3,WxButton12,WxButton21,turno);
        Cambiar(WxButton3,WxButton4,WxButton5,turno);
    }
    
    if(boton==WxButton4){
        Cambiar(WxButton4,WxButton3,WxButton2,turno);
        Cambiar(WxButton4,WxButton11,WxButton18,turno);
        Cambiar(WxButton4,WxButton12,WxButton20,turno);
        Cambiar(WxButton4,WxButton13,WxButton22,turno);
        Cambiar(WxButton4,WxButton5,WxButton6,turno);
    }
    
    if(boton==WxButton5){
        Cambiar(WxButton5,WxButton4,WxButton3,turno);
        Cambiar(WxButton5,WxButton12,WxButton19,turno);
        Cambiar(WxButton5,WxButton13,WxButton21,turno);
        Cambiar(WxButton5,WxButton14,WxButton23,turno);
        Cambiar(WxButton5,WxButton6,WxButton7,turno);
    }
    
    if(boton==WxButton6){
        Cambiar(WxButton6,WxButton5,WxButton4,turno);
        Cambiar(WxButton6,WxButton13,WxButton20,turno);
        Cambiar(WxButton6,WxButton14,WxButton22,turno);
        Cambiar(WxButton6,WxButton15,WxButton24,turno);
        Cambiar(WxButton6,WxButton7,WxButton8,turno);
    }
    
    if(boton==WxButton11){
        Cambiar(WxButton11,WxButton10,WxButton9,turno);
        Cambiar(WxButton11,WxButton18,WxButton25,turno);
        Cambiar(WxButton11,WxButton19,WxButton27,turno);
        Cambiar(WxButton11,WxButton20,WxButton29,turno);
        Cambiar(WxButton11,WxButton12,WxButton13,turno);
    }
    
    if(boton==WxButton12){
        Cambiar(WxButton12,WxButton11,WxButton10,turno);
        Cambiar(WxButton12,WxButton19,WxButton26,turno);
        Cambiar(WxButton12,WxButton20,WxButton28,turno);
        Cambiar(WxButton12,WxButton21,WxButton30,turno);
        Cambiar(WxButton12,WxButton13,WxButton14,turno);
    }
    
    if(boton==WxButton13){
        Cambiar(WxButton13,WxButton12,WxButton11,turno);
        Cambiar(WxButton13,WxButton20,WxButton27,turno);
        Cambiar(WxButton13,WxButton21,WxButton29,turno);
        Cambiar(WxButton13,WxButton22,WxButton31,turno);
        Cambiar(WxButton13,WxButton14,WxButton15,turno);
    }
    
    if(boton==WxButton14){
        Cambiar(WxButton14,WxButton13,WxButton12,turno);
        Cambiar(WxButton14,WxButton21,WxButton28,turno);
        Cambiar(WxButton14,WxButton22,WxButton30,turno);
        Cambiar(WxButton14,WxButton23,WxButton32,turno);
        Cambiar(WxButton14,WxButton15,WxButton16,turno);
    }
    
    //LADO DERECHO
    
    if(boton==WxButton24){
        Cambiar(WxButton24,WxButton16,WxButton8,turno);
        Cambiar(WxButton24,WxButton15,WxButton6,turno);
        Cambiar(WxButton24,WxButton23,WxButton22,turno);
        Cambiar(WxButton24,WxButton31,WxButton38,turno);
        Cambiar(WxButton24,WxButton32,WxButton40,turno);
    }
    
    if(boton==WxButton32){
        Cambiar(WxButton32,WxButton24,WxButton16,turno);
        Cambiar(WxButton32,WxButton23,WxButton14,turno);
        Cambiar(WxButton32,WxButton31,WxButton30,turno);
        Cambiar(WxButton32,WxButton39,WxButton46,turno);
        Cambiar(WxButton32,WxButton40,WxButton48,turno);
    }
    
    if(boton==WxButton40){
        Cambiar(WxButton40,WxButton32,WxButton24,turno);
        Cambiar(WxButton40,WxButton31,WxButton22,turno);
        Cambiar(WxButton40,WxButton39,WxButton38,turno);
        Cambiar(WxButton40,WxButton47,WxButton54,turno);
        Cambiar(WxButton40,WxButton48,WxButton56,turno);
    }
    
    if(boton==WxButton48){
        Cambiar(WxButton48,WxButton40,WxButton32,turno);
        Cambiar(WxButton48,WxButton39,WxButton30,turno);
        Cambiar(WxButton48,WxButton47,WxButton46,turno);
        Cambiar(WxButton48,WxButton55,WxButton62,turno);
        Cambiar(WxButton48,WxButton56,WxButton64,turno);
    }
    
    if(boton==WxButton23){
        Cambiar(WxButton23,WxButton15,WxButton7,turno);
        Cambiar(WxButton23,WxButton14,WxButton5,turno);
        Cambiar(WxButton23,WxButton22,WxButton21,turno);
        Cambiar(WxButton23,WxButton30,WxButton37,turno);
        Cambiar(WxButton23,WxButton31,WxButton39,turno);
    }
    
    if(boton==WxButton31){
        Cambiar(WxButton31,WxButton23,WxButton15,turno);
        Cambiar(WxButton31,WxButton22,WxButton13,turno);
        Cambiar(WxButton31,WxButton30,WxButton29,turno);
        Cambiar(WxButton31,WxButton38,WxButton45,turno);
        Cambiar(WxButton31,WxButton39,WxButton47,turno);
    }
    
    if(boton==WxButton39){
        Cambiar(WxButton39,WxButton31,WxButton23,turno);
        Cambiar(WxButton39,WxButton30,WxButton21,turno);
        Cambiar(WxButton39,WxButton38,WxButton37,turno);
        Cambiar(WxButton39,WxButton46,WxButton53,turno);
        Cambiar(WxButton39,WxButton47,WxButton55,turno);
    }
    
    if(boton==WxButton39){
        Cambiar(WxButton39,WxButton31,WxButton23,turno);
        Cambiar(WxButton39,WxButton30,WxButton21,turno);
        Cambiar(WxButton39,WxButton38,WxButton37,turno);
        Cambiar(WxButton39,WxButton46,WxButton53,turno);
        Cambiar(WxButton39,WxButton47,WxButton55,turno);
    }
    
    if(boton==WxButton47){
        Cambiar(WxButton47,WxButton39,WxButton31,turno);
        Cambiar(WxButton47,WxButton38,WxButton29,turno);
        Cambiar(WxButton47,WxButton46,WxButton45,turno);
        Cambiar(WxButton47,WxButton54,WxButton61,turno);
        Cambiar(WxButton47,WxButton55,WxButton63,turno);
    }
    
    //LADO INFERIOR
    
    if(boton==WxButton51){
        Cambiar(WxButton51,WxButton50,WxButton49,turno);
        Cambiar(WxButton51,WxButton42,WxButton33,turno);
        Cambiar(WxButton51,WxButton43,WxButton35,turno);
        Cambiar(WxButton51,WxButton44,WxButton37,turno);
        Cambiar(WxButton51,WxButton52,WxButton53,turno);
    }
    
    if(boton==WxButton52){
        Cambiar(WxButton52,WxButton51,WxButton50,turno);
        Cambiar(WxButton52,WxButton43,WxButton34,turno);
        Cambiar(WxButton52,WxButton44,WxButton36,turno);
        Cambiar(WxButton52,WxButton45,WxButton38,turno);
        Cambiar(WxButton52,WxButton53,WxButton54,turno);
    }
    
    if(boton==WxButton53){
        Cambiar(WxButton53,WxButton52,WxButton51,turno);
        Cambiar(WxButton53,WxButton44,WxButton35,turno);
        Cambiar(WxButton53,WxButton45,WxButton37,turno);
        Cambiar(WxButton53,WxButton46,WxButton39,turno);
        Cambiar(WxButton53,WxButton54,WxButton55,turno);
    }
    
    if(boton==WxButton54){
        Cambiar(WxButton54,WxButton53,WxButton52,turno);
        Cambiar(WxButton54,WxButton45,WxButton36,turno);
        Cambiar(WxButton54,WxButton46,WxButton38,turno);
        Cambiar(WxButton54,WxButton47,WxButton40,turno);
        Cambiar(WxButton54,WxButton55,WxButton56,turno);
    }
    
    if(boton==WxButton59){
        Cambiar(WxButton59,WxButton58,WxButton57,turno);
        Cambiar(WxButton59,WxButton50,WxButton41,turno);
        Cambiar(WxButton59,WxButton51,WxButton43,turno);
        Cambiar(WxButton59,WxButton52,WxButton45,turno);
        Cambiar(WxButton59,WxButton60,WxButton61,turno);
    }
    
    if(boton==WxButton60){
        Cambiar(WxButton60,WxButton59,WxButton58,turno);
        Cambiar(WxButton60,WxButton51,WxButton42,turno);
        Cambiar(WxButton60,WxButton52,WxButton44,turno);
        Cambiar(WxButton60,WxButton53,WxButton46,turno);
        Cambiar(WxButton60,WxButton61,WxButton62,turno);
    }
    
    if(boton==WxButton61){
        Cambiar(WxButton61,WxButton60,WxButton59,turno);
        Cambiar(WxButton61,WxButton52,WxButton43,turno);
        Cambiar(WxButton61,WxButton53,WxButton45,turno);
        Cambiar(WxButton61,WxButton54,WxButton47,turno);
        Cambiar(WxButton61,WxButton62,WxButton63,turno);
    }
    
    if(boton==WxButton62){
        Cambiar(WxButton62,WxButton61,WxButton60,turno);
        Cambiar(WxButton62,WxButton53,WxButton44,turno);
        Cambiar(WxButton62,WxButton54,WxButton46,turno);
        Cambiar(WxButton62,WxButton55,WxButton48,turno);
        Cambiar(WxButton62,WxButton63,WxButton64,turno);
    }
    
    
    //LOS BOTONES CON 8 CAMBIOS,LOS DEL CENTRO
    
    if(boton==WxButton19){
        Cambiar(WxButton19,WxButton10,WxButton1,turno);
        Cambiar(WxButton19,WxButton11,WxButton3,turno);
        Cambiar(WxButton19,WxButton12,WxButton5,turno);
        Cambiar(WxButton19,WxButton20,WxButton21,turno);
        Cambiar(WxButton19,WxButton28,WxButton37,turno);
        Cambiar(WxButton19,WxButton27,WxButton35,turno);
        Cambiar(WxButton19,WxButton26,WxButton33,turno);
        Cambiar(WxButton19,WxButton18,WxButton17,turno);
    }
    
    if(boton==WxButton20){
        Cambiar(WxButton20,WxButton11,WxButton2,turno);
        Cambiar(WxButton20,WxButton12,WxButton4,turno);
        Cambiar(WxButton20,WxButton13,WxButton6,turno);
        Cambiar(WxButton20,WxButton21,WxButton22,turno);
        Cambiar(WxButton20,WxButton29,WxButton38,turno);
        Cambiar(WxButton20,WxButton28,WxButton36,turno);
        Cambiar(WxButton20,WxButton27,WxButton34,turno);
        Cambiar(WxButton20,WxButton19,WxButton18,turno);
    }
    
    if(boton==WxButton21){
        Cambiar(WxButton21,WxButton12,WxButton3,turno);
        Cambiar(WxButton21,WxButton13,WxButton5,turno);
        Cambiar(WxButton21,WxButton14,WxButton7,turno);
        Cambiar(WxButton21,WxButton22,WxButton23,turno);
        Cambiar(WxButton21,WxButton30,WxButton39,turno);
        Cambiar(WxButton21,WxButton29,WxButton37,turno);
        Cambiar(WxButton21,WxButton28,WxButton35,turno);
        Cambiar(WxButton21,WxButton20,WxButton19,turno);
    }
    
    if(boton==WxButton22){
        Cambiar(WxButton22,WxButton13,WxButton4,turno);
        Cambiar(WxButton22,WxButton14,WxButton6,turno);
        Cambiar(WxButton22,WxButton15,WxButton8,turno);
        Cambiar(WxButton22,WxButton23,WxButton24,turno);
        Cambiar(WxButton22,WxButton31,WxButton40,turno);
        Cambiar(WxButton22,WxButton30,WxButton38,turno);
        Cambiar(WxButton22,WxButton29,WxButton36,turno);
        Cambiar(WxButton22,WxButton21,WxButton20,turno);
    }
    
    if(boton==WxButton27){
        Cambiar(WxButton27,WxButton18,WxButton9,turno);
        Cambiar(WxButton27,WxButton19,WxButton11,turno);
        Cambiar(WxButton27,WxButton20,WxButton13,turno);
        Cambiar(WxButton27,WxButton28,WxButton29,turno);
        Cambiar(WxButton27,WxButton36,WxButton45,turno);
        Cambiar(WxButton27,WxButton35,WxButton43,turno);
        Cambiar(WxButton27,WxButton34,WxButton41,turno);
        Cambiar(WxButton27,WxButton26,WxButton25,turno);
    }
    
    if(boton==WxButton30){
        Cambiar(WxButton30,WxButton21,WxButton12,turno);
        Cambiar(WxButton30,WxButton22,WxButton14,turno);
        Cambiar(WxButton30,WxButton23,WxButton16,turno);
        Cambiar(WxButton30,WxButton31,WxButton32,turno);
        Cambiar(WxButton30,WxButton39,WxButton48,turno);
        Cambiar(WxButton30,WxButton38,WxButton46,turno);
        Cambiar(WxButton30,WxButton37,WxButton44,turno);
        Cambiar(WxButton30,WxButton29,WxButton28,turno);
    }
    
    if(boton==WxButton35){
        Cambiar(WxButton35,WxButton26,WxButton17,turno);
        Cambiar(WxButton35,WxButton27,WxButton19,turno);
        Cambiar(WxButton35,WxButton28,WxButton21,turno);
        Cambiar(WxButton35,WxButton36,WxButton37,turno);
        Cambiar(WxButton35,WxButton44,WxButton53,turno);
        Cambiar(WxButton35,WxButton43,WxButton51,turno);
        Cambiar(WxButton35,WxButton42,WxButton49,turno);
        Cambiar(WxButton35,WxButton34,WxButton33,turno);
    }
    
    if(boton==WxButton38){
        Cambiar(WxButton38,WxButton29,WxButton20,turno);
        Cambiar(WxButton38,WxButton30,WxButton22,turno);
        Cambiar(WxButton38,WxButton31,WxButton24,turno);
        Cambiar(WxButton38,WxButton39,WxButton40,turno);
        Cambiar(WxButton38,WxButton47,WxButton56,turno);
        Cambiar(WxButton38,WxButton46,WxButton54,turno);
        Cambiar(WxButton38,WxButton45,WxButton52,turno);
        Cambiar(WxButton38,WxButton37,WxButton36,turno);
    }
    
    if(boton==WxButton43){
        Cambiar(WxButton43,WxButton34,WxButton25,turno);
        Cambiar(WxButton43,WxButton35,WxButton27,turno);
        Cambiar(WxButton43,WxButton36,WxButton29,turno);
        Cambiar(WxButton43,WxButton44,WxButton45,turno);
        Cambiar(WxButton43,WxButton52,WxButton61,turno);
        Cambiar(WxButton43,WxButton51,WxButton59,turno);
        Cambiar(WxButton43,WxButton50,WxButton57,turno);
        Cambiar(WxButton43,WxButton42,WxButton41,turno);
    }
    
    if(boton==WxButton44){
        Cambiar(WxButton44,WxButton35,WxButton26,turno);
        Cambiar(WxButton44,WxButton36,WxButton28,turno);
        Cambiar(WxButton44,WxButton37,WxButton30,turno);
        Cambiar(WxButton44,WxButton45,WxButton46,turno);
        Cambiar(WxButton44,WxButton53,WxButton62,turno);
        Cambiar(WxButton44,WxButton52,WxButton60,turno);
        Cambiar(WxButton44,WxButton51,WxButton58,turno);
        Cambiar(WxButton44,WxButton43,WxButton42,turno);
    }
    
    
    
    if(boton==WxButton45){
        Cambiar(WxButton45,WxButton37,WxButton29,turno);
        Cambiar(WxButton45,WxButton38,WxButton31,turno);
        Cambiar(WxButton45,WxButton46,WxButton47,turno);
        Cambiar(WxButton45,WxButton54,WxButton63,turno);
        Cambiar(WxButton45,WxButton53,WxButton61,turno);
        Cambiar(WxButton45,WxButton52,WxButton59,turno);
        Cambiar(WxButton45,WxButton44,WxButton43,turno);
        Cambiar(WxButton45,WxButton36,WxButton27,turno);
    }
    
    if(boton==WxButton46){
        Cambiar(WxButton46,WxButton38,WxButton30,turno);
        Cambiar(WxButton46,WxButton39,WxButton32,turno);
        Cambiar(WxButton46,WxButton47,WxButton48,turno);
        Cambiar(WxButton46,WxButton55,WxButton64,turno);
        Cambiar(WxButton46,WxButton54,WxButton62,turno);
        Cambiar(WxButton46,WxButton53,WxButton60,turno);
        Cambiar(WxButton46,WxButton45,WxButton44,turno);
        Cambiar(WxButton46,WxButton37,WxButton28,turno);
    }
    
	
	if(turno==1){
        turno=0;
    }else if(turno==0){
        turno=1;
    }
	
}
