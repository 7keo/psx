from ida_name import set_name
from base_types import Ident

funcs = [
	# diabpsx/source/automap.cpp
	Ident(addr=0x80161F58, name="StartAutomap__Fv", decl="void StartAutomap__Fv()"),
	Ident(addr=0x80161F68, name="AutomapUp__Fv", decl="void AutomapUp__Fv()"),
	Ident(addr=0x80161F88, name="AutomapDown__Fv", decl="void AutomapDown__Fv()"),
	Ident(addr=0x80161FA8, name="AutomapLeft__Fv", decl="void AutomapLeft__Fv()"),
	Ident(addr=0x80161FC8, name="AutomapRight__Fv", decl="void AutomapRight__Fv()"),
	Ident(addr=0x80161FE8, name="AMGetLine__FUcUcUc", decl="struct LINE_F2* AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B)"),
	Ident(addr=0x801620A0, name="AmDrawPlayer__Fiiiii", decl="void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum)"),
	Ident(addr=0x80162124, name="DrawAutomapPlr__Fv", decl="void DrawAutomapPlr__Fv()"),
	Ident(addr=0x80162490, name="DrawAutoMapVertDoor__Fii", decl="void DrawAutoMapVertDoor__Fii(int X, int Y)"),
	Ident(addr=0x8016264C, name="DrawAutoMapHorzDoor__Fii", decl="void DrawAutoMapHorzDoor__Fii(int X, int Y)"),
	Ident(addr=0x8016280C, name="DrawAutoMapVertGrate__Fii", decl="void DrawAutoMapVertGrate__Fii(int X, int Y)"),
	Ident(addr=0x801628A4, name="DrawAutoMapHorzGrate__Fii", decl="void DrawAutoMapHorzGrate__Fii(int X, int Y)"),
	Ident(addr=0x8016293C, name="DrawAutoMapSquare__Fii", decl="void DrawAutoMapSquare__Fii(int X, int Y)"),
	Ident(addr=0x80162A70, name="DrawVertArch__Fii", decl="void DrawVertArch__Fii(int X, int Y)"),
	Ident(addr=0x80162BA4, name="DrawHorzArch__Fii", decl="void DrawHorzArch__Fii(int X, int Y)"),
	Ident(addr=0x80162CD8, name="DrawAutoMapStairs__Fii", decl="void DrawAutoMapStairs__Fii(int X, int Y)"),
	Ident(addr=0x80162E50, name="DrawAutomap__Fv", decl="void DrawAutomap__Fv()"),
]

for f in funcs:
	ida_name.set_name(f.addr, f.name)
