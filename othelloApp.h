//---------------------------------------------------------------------------
//
// Name:        othelloApp.h
// Author:      LuisCastro
// Created:     27/05/2017 20:56:59
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __OTHELLOFRMApp_h__
#define __OTHELLOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class othelloFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
