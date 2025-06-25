/**
 * @file SMApp.cpp
 * @author Maxim Meadow
 *
 * SMApp class that holds the Spartanmind game application.
 */

#include "pch.h"
#include "SMApp.h"
#include <MainFrame.h>

/**
 * Initialize the application.
 * @return true
 */
bool SMApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;

    // Add image type handlers
    wxInitAllImageHandlers();

    auto frame = new MainFrame();
    frame->Initialize();
    frame->Show(true);

    wxLog::SetActiveTarget(new wxLogStderr());
    return true;
}