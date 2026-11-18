// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 3

// FPrimitiveComponentId @ 146d03620

FPrimitiveComponentId * __thiscall
FPrimitiveComponentId::FPrimitiveComponentId(FPrimitiveComponentId *this)

{
  this->PrimIDValue = 0;
  return this;
}

// operator== @ 146d06450

bool __thiscall
FPrimitiveComponentId::operator==(FPrimitiveComponentId *this,FPrimitiveComponentId param_1)

{
  return this->PrimIDValue == param_1.PrimIDValue;
}

// IsValid @ 146d24870

bool __thiscall FPrimitiveComponentId::IsValid(FPrimitiveComponentId *this)

{
  return this->PrimIDValue != 0;
}

