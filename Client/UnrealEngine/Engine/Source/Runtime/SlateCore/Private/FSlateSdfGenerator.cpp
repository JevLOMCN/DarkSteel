// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FSlateSdfGenerator @ 142476b60

FSlateSdfGenerator * __thiscall FSlateSdfGenerator::FSlateSdfGenerator(FSlateSdfGenerator *this)

{
  *this = (FSlateSdfGenerator)&___7FSlateSdfGenerator__6B_;
  return this;
}

// ~FSlateSdfGenerator @ 142479cb0

void __thiscall FSlateSdfGenerator::~FSlateSdfGenerator(FSlateSdfGenerator *this)

{
  *this = (FSlateSdfGenerator)&___7FSlateSdfGenerator__6B_;
  return;
}

// create @ 1424b2aa0

TUniquePtr<FSlateSdfGenerator,TDefaultDelete<FSlateSdfGenerator>_> __cdecl
FSlateSdfGenerator::create(void)

{
  FSlateSdfGeneratorImpl *this;
  FSlateSdfGenerator FVar1;
  FSlateSdfGenerator *in_RCX;
  
  this = ::operator_new(0x50);
  if (this != (FSlateSdfGeneratorImpl *)0x0) {
    FVar1 = (FSlateSdfGenerator)FSlateSdfGeneratorImpl::FSlateSdfGeneratorImpl(this);
    *in_RCX = FVar1;
    return (TUniquePtr<FSlateSdfGenerator,TDefaultDelete<FSlateSdfGenerator>_>)in_RCX;
  }
  *in_RCX = (FSlateSdfGenerator)0x0;
  return (TUniquePtr<FSlateSdfGenerator,TDefaultDelete<FSlateSdfGenerator>_>)in_RCX;
}

