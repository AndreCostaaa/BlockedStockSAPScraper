If Not IsObject(application) Then
   Set SapGuiAuto  = GetObject("SAPGUI")
   Set application = SapGuiAuto.GetScriptingEngine
End If
If Not IsObject(connection) Then
   Set connection = application.Children(0)
End If
If Not IsObject(session) Then
   Set session    = connection.Children(0)
End If
If IsObject(WScript) Then
   WScript.ConnectObject session,     "on"
   WScript.ConnectObject application, "on"
End If
session.findById("wnd[0]").maximize
session.findById("wnd[0]/tbar[0]/okcd").text = "MB52"
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/usr/ctxtMATNR-LOW").text = "*"
session.findById("wnd[0]/usr/ctxtWERKS-LOW").setFocus
session.findById("wnd[0]/usr/ctxtWERKS-LOW").caretPosition = 2
session.findById("wnd[0]").sendVKey 2
session.findById("wnd[1]").sendVKey 12
session.findById("wnd[0]").sendVKey 4
session.findById("wnd[1]").sendVKey 12
session.findById("wnd[0]/usr/btn%_WERKS_%_APP_%-VALU_PUSH").press
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE").columns.elementAt(1).width = 4
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,1]").text = "CH01"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,2]").text = "CH12"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,3]").text = "CH11"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,4]").text = "CH10"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,4]").setFocus
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,4]").caretPosition = 4
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE").verticalScrollbar.position = 8
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE").verticalScrollbar.position = 1
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE").verticalScrollbar.position = 0
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[1]").close
session.findById("wnd[2]/usr/btnSPOP-OPTION1").press
session.findById("wnd[0]/usr/chkXMCHB").selected = true
session.findById("wnd[0]/usr/chkXMCHB").setFocus
session.findById("wnd[0]").sendVKey 2
session.findById("wnd[0]/usr/chkNOZERO").selected = true
session.findById("wnd[0]/usr/chkNOZERO").setFocus
session.findById("wnd[0]").sendVKey 2
session.findById("wnd[0]").sendVKey 0
session.findById("wnd[0]/tbar[1]/btn[8]").press
session.findById("wnd[0]/tbar[1]/btn[32]").press
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").verticalScrollbar.position = 0
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,0]").setFocus
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").verticalScrollbar.position = 0
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(0).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(1).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(2).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(3).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(4).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(5).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(6).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(7).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(8).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(9).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(10).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,10]").setFocus
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,10]").caretPosition = 0
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").verticalScrollbar.position = 3
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(11).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(12).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,9]").setFocus
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,9]").caretPosition = 0
session.findById("wnd[1]/usr/btnAPP_FL_ALL").press
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(0).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(9).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,9]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,9]").caretPosition = 0
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").verticalScrollbar.position = 0
session.findById("wnd[1]/usr/btnAPP_WL_SING").press
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").verticalScrollbar.position = 0
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(0).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(3).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,3]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,3]").caretPosition = 0
session.findById("wnd[1]/usr/btnAPP_WL_SING").press
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(0).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(3).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(6).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,6]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,6]").caretPosition = 0
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").verticalScrollbar.position = 9
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(17).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(18).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,9]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,9]").caretPosition = 0
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").verticalScrollbar.position = 0
session.findById("wnd[1]/usr/btnAPP_WL_SING").press
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(6).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,6]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,6]").caretPosition = 0
session.findById("wnd[1]/usr/btnAPP_WL_SING").press
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[0]/tbar[1]/btn[32]").press
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-OUTPUTLEN[2,0]").text = "15"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-OUTPUTLEN[2,2]").text = "30"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-OUTPUTLEN[2,9]").setFocus
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-OUTPUTLEN[2,9]").caretPosition = 1
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[0]/tbar[1]/btn[43]").press
session.findById("wnd[1]").sendVKey 12
session.findById("wnd[0]/tbar[1]/btn[43]").press
session.findById("wnd[1]/usr/cmbG_LISTBOX").setFocus
session.findById("wnd[1]").sendVKey 12
session.findById("wnd[0]/tbar[1]/btn[44]").press
session.findById("wnd[1]").sendVKey 12
session.findById("wnd[0]/tbar[1]/btn[43]").press
session.findById("wnd[1]/usr/cmbG_LISTBOX").setFocus
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[1]").close
session.findById("wnd[0]/tbar[0]/btn[15]").press
session.findById("wnd[0]/tbar[0]/btn[15]").press
