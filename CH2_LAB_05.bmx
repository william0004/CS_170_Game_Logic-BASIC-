'PROGRAM: demo03-05 - Converts Fahrenheit To Celsius
'OBJECTIVE: 
'PROGRAMMER: Yaowei Lei.
'Date: 10/14/2021


'Main PROGRAM
Print "Welcome to our FtoC converter"
'get fahrenheit And put it in fvalue
Global fvalue:Int = Int(Input("What Fahrenheit value do you wish to convert? "))
'Convert fvalue To Celsius
Global cvalue = ConvertFtoC(fvalue)
'Print results
Print fvalue + " Fahrenheit = " + cvalue + " Celsius."
'End OF Main PROGRAM

Function ConvertFtoC(fvalue)
	'convert value And Return it
	Return 5.0/9.0 * (fvalue - 32.0)
End Function