from ida_name import set_name
from base_types import Ident

funcs = [
]

for f in funcs:
	ida_name.set_name(f.addr, f.name)
