'PROGRAM: while wend loop
'OBJECTIVE: 
'PROGRAMMER: Yaowei Lei.
'Date: 10/07/2021


Graphics 640, 480
DrawText "This program is worthless.",0,0
DrawText "Press escape to exit.",0,12
Flip

Global y:Int = 12

'Wait Until user presses 1 To Escape
While Not KeyDown(KEY_ESCAPE)
	If KeyHit(KEY_ENTER)
		y = y + 12
		DrawText "End it soon!!" ,0,y
		Flip
	End If	
Wend
End
