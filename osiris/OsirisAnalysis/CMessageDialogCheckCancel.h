/*
* ===========================================================================
*
*                            PUBLIC DOMAIN NOTICE                          
*               National Center for Biotechnology Information
*                                                                          
*  This software/database is a "United States Government Work" under the   
*  terms of the United States Copyright Act.  It was written as part of    
*  the author's official duties as a United States Government employee and 
*  thus cannot be copyrighted.  This software/database is freely available 
*  to the public for use. The National Library of Medicine and the U.S.    
*  Government have not placed any restriction on its use or reproduction.  
*                                                                          
*  Although all reasonable efforts have been taken to ensure the accuracy  
*  and reliability of the software and data, the NLM and the U.S.          
*  Government do not and cannot warrant the performance or results that    
*  may be obtained by using this software or data. The NLM and the U.S.    
*  Government disclaim all warranties, express or implied, including       
*  warranties of performance, merchantability or fitness for any particular
*  purpose.                                                                
*                                                                          
*  Please cite the author in any work or product based on this material.   
*
* ===========================================================================
*

*  FileName: CMessageDialogCheckCancel.h
*  Author:   Douglas Hoffman
*
*/
#ifndef __C_MESSAGE_DIALOG_CHECK_CANCEL_H__
#define __C_MESSAGE_DIALOG_CHECK_CANCEL_H__

#include <wx/msgdlg.h>

class CMessageDialogCheckCancel : public wxMessageDialog
{
public:
  CMessageDialogCheckCancel(wxWindow *parent) :
    wxMessageDialog(
      parent,
      "Warning: Modifications will be lost!\n"
          "Do you wish to continue?",
      "Warning",
      wxYES_NO | wxNO_DEFAULT | wxICON_EXCLAMATION)
  {;}
  virtual ~CMessageDialogCheckCancel() {;}
  bool Verify()
  {
    int n = ShowModal();
    bool bRtn = (n == wxID_YES) || (n == wxID_OK);
    return bRtn;
  }
};

#endif
