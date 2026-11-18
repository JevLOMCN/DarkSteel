// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FContext @ 145ded1a0

FContext * __thiscall FRenderCommandPipeBase::FContext::FContext(FContext *this,FContext *param_1)

{
  bool bVar1;
  FMemStackBase *pFVar2;
  FCommand *pFVar3;
  undefined4 uVar4;
  uint uStack_14;
  
  FMemStackBase::FMemStackBase(&this->Allocator,Small);
  (this->CommandList).Allocator = &this->Allocator;
  (this->CommandList).Commands.Head = (FCommand *)0x0;
  (this->CommandList).Commands.Tail = (FCommand *)0x0;
  (this->CommandList).Commands.Num = 0;
  (this->CommandList).bClosed = false;
  pFVar2 = (param_1->CommandList).Allocator;
  FMemStackBase::FreeChunks(&this->Allocator,(FTaggedMemory *)0x0);
  (this->Allocator).Top = pFVar2->Top;
  (this->Allocator).End = pFVar2->End;
  (this->Allocator).TopChunk = pFVar2->TopChunk;
  (this->Allocator).TopMark = pFVar2->TopMark;
  (this->Allocator).NumMarks = pFVar2->NumMarks;
  (this->Allocator).bShouldEnforceAllocMarks = pFVar2->bShouldEnforceAllocMarks;
  pFVar2->Top = (uchar *)0x0;
  pFVar2->End = (uchar *)0x0;
  pFVar2->TopChunk = (FTaggedMemory *)0x0;
  pFVar2->NumMarks = 0;
  pFVar2->bShouldEnforceAllocMarks = false;
  pFVar3 = (param_1->CommandList).Commands.Tail;
  (this->CommandList).Commands.Head = (param_1->CommandList).Commands.Head;
  (this->CommandList).Commands.Tail = pFVar3;
  uVar4 = *(undefined4 *)&(param_1->CommandList).Commands.field_0x14;
  (this->CommandList).Commands.Num = (param_1->CommandList).Commands.Num;
  *(undefined4 *)&(this->CommandList).Commands.field_0x14 = uVar4;
  bVar1 = (param_1->CommandList).bClosed;
  (param_1->CommandList).Commands.Head = (FCommand *)0x0;
  (param_1->CommandList).Commands.Tail = (FCommand *)0x0;
  *(ulonglong *)&(param_1->CommandList).Commands.Num = (ulonglong)uStack_14 << 0x20;
  (this->CommandList).bClosed = bVar1;
  (param_1->CommandList).bClosed = false;
  this->bDeleteAfterExecute = param_1->bDeleteAfterExecute;
  return this;
}

