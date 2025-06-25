/**
 * @file SMApp.h
 * @author maxst
 *
 * Class that initializes the MainFrame of a wxWidgets based application for the Spartanmind game
 */
 
#ifndef SMAPP_H
#define SMAPP_H

#include <wx/wx.h>

/**
 * Main application class
 */
class SMApp : public wxApp {
private:

public:
    bool OnInit() override;
};



#endif //SMAPP_H
