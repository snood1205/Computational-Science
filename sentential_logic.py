class Bool:
	def __init__(self, a):
		if a != 0 and a != 1:
			raise TypeError("A must be a 1 or 0")
		self.value = a

	def __str__(self):
		if self.value == 1: return "1"
		return "0"

	# Unary Operations

	def false(self):
		self.value = 0

	def identity(self):
		return self

	def lnot(self):
		if self.value == 0: return 1
		return 0

	def true(self):
		self.value = 1

	# Binary Opeartions
	
	def land(self,b):
		if self.value == 0 or b.value == 0: return 0
		return 1

	def lor(self,b):
		if self.value == 1 or b.value == 1: return 1
		return 0

	def nand(self,b):
		if self.value == 0 or b.value == 0: return 1
		return 0

	def nor(self,b):
		if self.value == 1 or b.value == 1: return 0
		return 1

	def xor(self,b):
		if self.value != b.value: return 1
		return 0

	def xnor(self,b):
		if self.value == b.value: return 1
		return 0

	def implies(self,b):
		if self.value == 1 and b.value == 0: return 0
		return 1

	def iff(self,b):
		return self.xnor(b)

	def bool(self):
		if self.value == 1: return "T"
		return "F"


true = Bool(1)
false = Bool(0)


print("A","IDENTITY")
print(true,true.identity())
print(false,false.identity())

print("\nA","NOT")
print(true,true.lnot())
print(false,false.lnot())


print("\nA","B","AND")
print(true,true,true.land(true))
print(true,false,true.land(false))
print(false,true,false.land(true))
print(false,false,false.land(false))

print("\nA","B","OR")
print(true,true,true.lor(true))
print(true,false,true.lor(false))
print(false,true,false.lor(true))
print(false,false,false.lor(false))

print("\nA","B","NAND")
print(true,true,true.nand(true))
print(true,false,true.nand(false))
print(false,true,false.nand(true))
print(false,false,false.nand(false))

print("\nA","B","NOR")
print(true,true,true.nor(true))
print(true,false,true.nor(false))
print(false,true,false.nor(true))
print(false,false,false.nor(false))

print("\nA","B","XOR")
print(true,true,true.xor(true))
print(true,false,true.xor(false))
print(false,true,false.xor(true))
print(false,false,false.xor(false))

print("\nA","B","XNOR")
print(true,true,true.xnor(true))
print(true,false,true.xnor(false))
print(false,true,false.xnor(true))
print(false,false,false.xnor(false))

print("\nA","B","Implies")
print(true,true,true.implies(true))
print(true,false,true.implies(false))
print(false,true,false.implies(true))
print(false,false,false.implies(false))

print("\nA","B","IFF")
print(true,true,true.iff(true))
print(true,false,true.iff(false))
print(false,true,false.iff(true))
print(false,false,false.iff(false))
