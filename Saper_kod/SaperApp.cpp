/***************************************************************
 * Name:      SaperApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Artur Kidaj, Kamil Kopiński, Krystian Knysz ()
 * Created:   2023-01-05
 * Copyright: Artur Kidaj, Kamil Kopiński, Krystian Knysz ()
 * License:
 **************************************************************/

#include "SaperApp.h"

//(*AppHeaders
#include "SaperMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(SaperApp);

bool SaperApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	SaperDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
