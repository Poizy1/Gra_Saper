/***************************************************************
 * Name:      SaperApp.h
 * Purpose:   Defines Application Class
 * Author:    Artur Kidaj, Kamil Kopiński, Krystian Knysz ()
 * Created:   2023-01-05
 * Copyright: Artur Kidaj, Kamil Kopiński, Krystian Knysz ()
 * License:
 **************************************************************/

#ifndef SAPERAPP_H
#define SAPERAPP_H

#include <wx/app.h>

class SaperApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // SAPERAPP_H
