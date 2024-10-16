'PROGRAM: Function...playing around.
'OBJECTIVE: Creating a function to print out a "welcome again to my world" message.
'PROGRAMMER: Yaowei Lei.
'Date: 09/30/2021


Global fullName:String = " "
Global getINFO:Int = 0
Print
Print

fullName = Input("					Your full name here:  ")
'getINFO = Int(Input("					Enter 1 to Repeat, or 7 to Exit.  "))
Repeat_it ()

Function Repeat_it ()
	Print
	getINFO = Int(Input("					Enter 1 to Repeat, or 7 to Exit.  "))
	Print
	
	Select getINFO
		Case 1
			Repeat_it ()
		Case 7
			Print "					Done with program"
		Default
			Print "					What???!!"
	End Select 
	
End Function

