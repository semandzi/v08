#pragma once

#include "resource.h"	

class MainDlg : public CDialog
{
public:
	MainDlg(CWnd* pParent = NULL);	// standard constructor
	enum { IDD = IDD_V8_DIALOG };

 protected:
	void DoDataExchange(CDataExchange* pDX) override;
	HICON m_hIcon;
	BOOL OnInitDialog() override;
	virtual void OnOk();

	DECLARE_MESSAGE_MAP()

	public:
	CListCtrl ListBox;
	afx_msg void OnClickedButton1();
	afx_msg void OnClickedButton2();
};
