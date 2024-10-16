'PROGRAM: .
'OBJECTIVE: .
'PROGRAMMER: Yaowei Lei.
'Date: 09/28/2021

Print
Print
#PrintHelloAgain
Global getINFO:Int = Int(Input("Enter 1 for a quick 'Hello' or 7 to exit program "))
Select getINFO
	Case 1
		Print "Hello"
	Case 7
		Print "Exiting... "
	Default
		Print "   ...."
End Selcet
