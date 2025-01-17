
Graphics 800,600

Type TPoint
	Field x,y
End Type

Global point1 : TPoint = New Tpoint
Global point2 : TPoint = New Tpoint
Global point3 : TPoint = New Tpoint

'These variables define each vertex And are in Local coordinates
point1.x= 0
point1.y= -100
point2.x= 100
point2.y= 100
point3.x= -100
point3.y = 100


'CONSTANTS
'The Global indicators that are added To each Local coordinate
'To place it on screen
Const xs = 400
Const ys = 300
Const sxy:Float = 2.0

'Draw out first triangle
DrawLine point1.x + xs, point1.y + ys, point2.x + xs, point2.y + ys
DrawLine point2.x + xs, point2.y + ys, point3.x + xs, point3.y + ys
DrawLine point3.x + xs, point3.y + ys, point1.x + xs, point1.y + ys


'Multiply all the coordinates by the Scaling factor
point1.x = point1.x * sxy
point1.y = point1.y * sxy
point2.x = point2.x * sxy
point2.y = point2.y * sxy
point3.x = point3.x * sxy
point3.y = point3.y * sxy

'Change the Default color To green
SetColor 0,255,0
'Draw Final triangle (with scaled coordinates) in green
DrawLine point1.x + xs, point1.y + ys, point2.x + xs, point2.y + ys
DrawLine point2.x + xs, point2.y + ys, point3.x + xs, point3.y + ys
DrawLine point3.x + xs, point3.y + ys, point1.x + xs, point1.y + ys
Flip

'Wait For user To press a key before exiting
WaitKey


