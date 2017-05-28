//---------------------------------------------------------------------------
//
// Name:        othelloApp.cpp
// Author:      LuisCastro
// Created:     27/05/2017 20:56:59
// Description: 
//
//---------------------------------------------------------------------------

#include "othelloApp.h"
#include "othelloFrm.h"

IMPLEMENT_APP(othelloFrmApp)

bool othelloFrmApp::OnInit()
{
    othelloFrm* frame = new othelloFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int othelloFrmApp::OnExit()
{
	return 0;
}
