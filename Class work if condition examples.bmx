'PROGRAM: If condition.
'OBJECTIVE: Working with If condition.
'PROGRAMMER: Yaowei Lei.
'Date: 09/23/2021

'find out how old the user is 
Global age_str:String = Input("How old are you? ")
Global age:Int = Int(age_str)
If age>=18 Then
Print "Congratulations, you are legal to vote."
Else 
Print "Sorry, you are illegal to vote."
EndIf
