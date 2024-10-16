'PROGRAM: Lab_08.
'OBJECTIVE: Using the SELEVT...CASE.
'PROGRAMMER: Yaowei Lei.
'Date: 09/28/2021


Global info411:String = Input("Enter ZZ to say Hello, or GG to say Goodbye.")
Select info411
	Case "ZZ"
		Print "Hello! "
	Case "GG"
		Print "Goodbye! " 
	Default
		Print "Sorry, illegal input. "
End Select