// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator= @ 145df2340

FMemStackBase * __thiscall FMemStackBase::operator=(FMemStackBase *this,FMemStackBase *param_1)

{
  FreeChunks(this,(FTaggedMemory *)0x0);
  this->Top = param_1->Top;
  this->End = param_1->End;
  this->TopChunk = param_1->TopChunk;
  this->TopMark = param_1->TopMark;
  this->NumMarks = param_1->NumMarks;
  this->bShouldEnforceAllocMarks = param_1->bShouldEnforceAllocMarks;
  param_1->Top = (uchar *)0x0;
  param_1->End = (uchar *)0x0;
  param_1->TopChunk = (FTaggedMemory *)0x0;
  param_1->NumMarks = 0;
  param_1->bShouldEnforceAllocMarks = false;
  return this;
}

