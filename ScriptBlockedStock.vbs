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
session.findById("wnd[0]/usr/btn%_WERKS_%_APP_%-VALU_PUSH").press
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,0]").text = "CH01"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,1]").text = "CH10"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,2]").text = "CH11"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,3]").text = "CH12"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,4]").text = "CH41"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,4]").setFocus
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,4]").caretPosition = 4
session.findById("wnd[1]/tbar[0]/btn[8]").press
session.findById("wnd[0]/usr/btn%_LGORT_%_APP_%-VALU_PUSH").press
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/btnRSCSEL_255-SOP_I[0,0]").setFocus
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/btnRSCSEL_255-SOP_I[0,0]").press
session.findById("wnd[2]/usr/cntlOPTION_CONTAINER/shellcont/shell").currentCellRow = 5
session.findById("wnd[2]/usr/cntlOPTION_CONTAINER/shellcont/shell").selectedRows = "5"
session.findById("wnd[2]/usr/cntlOPTION_CONTAINER/shellcont/shell").doubleClickCurrentCell
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,0]").text = "SP01"
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,0]").setFocus
session.findById("wnd[1]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/ctxtRSCSEL_255-SLOW_I[1,0]").caretPosition = 4
session.findById("wnd[1]/tbar[0]/btn[8]").press
session.findById("wnd[0]/tbar[1]/btn[8]").press
session.findById("wnd[0]/tbar[1]/btn[29]").press
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST_820").verticalScrollbar.position = 5
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST_820").verticalScrollbar.position = 10
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST_820").getAbsoluteRow(21).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST_820/txtGT_FIELD_LIST-SELTEXT[0,11]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST_820/txtGT_FIELD_LIST-SELTEXT[0,11]").caretPosition = 0
session.findById("wnd[1]/usr/btnAPP_WL_SING").press
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[1]").sendVKey 0
session.findById("wnd[0]/tbar[1]/btn[29]").press
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST_820").getAbsoluteRow(21).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST_820/txtGT_FIELD_LIST-SELTEXT[0,11]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST_820/txtGT_FIELD_LIST-SELTEXT[0,11]").caretPosition = 0
session.findById("wnd[1]/usr/btnAPP_WL_SING").press
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[1]/usr/ssub%_SUBSCREEN_FREESEL:SAPLSSEL:1105/ctxt%%DYN001-LOW").text = ""
session.findById("wnd[1]/usr/ssub%_SUBSCREEN_FREESEL:SAPLSSEL:1105/txt%%DYN002-LOW").setFocus
session.findById("wnd[1]/usr/ssub%_SUBSCREEN_FREESEL:SAPLSSEL:1105/txt%%DYN002-LOW").caretPosition = 0
session.findById("wnd[1]/usr/ssub%_SUBSCREEN_FREESEL:SAPLSSEL:1105/btn%_%%DYN002_%_APP_%-VALU_PUSH").press
session.findById("wnd[2]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/btnRSCSEL_255-SOP_I[0,0]").setFocus
session.findById("wnd[2]/usr/tabsTAB_STRIP/tabpSIVA/ssubSCREEN_HEADER:SAPLALDB:3010/tblSAPLALDBSINGLE/btnRSCSEL_255-SOP_I[0,0]").press
session.findById("wnd[3]/usr/cntlOPTION_CONTAINER/shellcont/shell").currentCellRow = 3
session.findById("wnd[3]/usr/cntlOPTION_CONTAINER/shellcont/shell").selectedRows = "3"
session.findById("wnd[3]/usr/cntlOPTION_CONTAINER/shellcont/shell").doubleClickCurrentCell
session.findById("wnd[2]/tbar[0]/btn[8]").press
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[0]/tbar[1]/btn[32]").press
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(5).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(7).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(8).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(10).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(11).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,11]").setFocus
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,11]").caretPosition = 0
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").verticalScrollbar.position = 5
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").getAbsoluteRow(12).selected = true
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,7]").setFocus
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-SELTEXT[0,7]").caretPosition = 0
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST").verticalScrollbar.position = 0
session.findById("wnd[1]/usr/btnAPP_FL_SING").press
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(1).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(7).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,7]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,7]").caretPosition = 0
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").verticalScrollbar.position = 5
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(15).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,10]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,10]").caretPosition = 0
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").verticalScrollbar.position = 10
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").verticalScrollbar.position = 15
session.findById("wnd[1]/usr/btnAPP_WL_SING").press
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,3]").text = "5"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,4]").text = "6"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,5]").text = "7"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,6]").text = "8"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,7]").text = "4"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,8]").text = "10"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,9]").text = "9"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,8]").setFocus
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,8]").caretPosition = 2
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,3]").text = "5"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,4]").text = "6"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,5]").text = "7"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,6]").text = "8"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,7]").text = "4"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,8]").text = "10"
session.findById("wnd[1]/usr/tabsTS_LINES/tabpLI01/ssubSUB810:SAPLSKBH:0810/tblSAPLSKBHTC_WRITE_LIST/txtGT_WRITE_LIST-COL_POS[1,9]").text = "9"
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").verticalScrollbar.position = 0
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(0).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(1).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(2).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(3).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(4).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(5).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(6).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(7).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(8).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(9).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(10).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(11).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,11]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,11]").caretPosition = 0
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").verticalScrollbar.position = 5
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST").getAbsoluteRow(12).selected = true
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,7]").setFocus
session.findById("wnd[1]/usr/tblSAPLSKBHTC_FIELD_LIST/txtGT_FIELD_LIST-SELTEXT[0,7]").caretPosition = 0
session.findById("wnd[1]/usr/btnAPP_WL_SING").press
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[0]/tbar[1]/btn[43]").press
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[1]/tbar[0]/btn[0]").press
session.findById("wnd[0]").close
session.findById("wnd[1]/usr/btnSPOP-OPTION1").press