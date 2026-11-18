// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMemStackBase @ 145362c00

FMemStackBase * __thiscall FMemStackBase::FMemStackBase(FMemStackBase *this,FMemStackBase *param_1)

{
  this->Top = (uchar *)0x0;
  this->End = (uchar *)0x0;
  this->TopChunk = (FTaggedMemory *)0x0;
  this->TopMark = (FMemMark *)0x0;
  this->NumMarks = 0;
  this->PageSize = Small;
  this->bShouldEnforceAllocMarks = false;
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

