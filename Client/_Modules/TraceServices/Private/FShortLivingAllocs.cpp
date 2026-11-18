// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 3

// FShortLivingAllocs @ 14d3cce80

FShortLivingAllocs * __thiscall
TraceServices::FShortLivingAllocs::FShortLivingAllocs(FShortLivingAllocs *this)

{
  FNode *pFVar1;
  
  this->AllNodes = (FNode *)0x0;
  this->LastAddedAllocNode = (FNode *)0x0;
  this->OldestAllocNode = (FNode *)0x0;
  this->FirstUnusedNode = (FNode *)0x0;
  this->AllocCount = 0;
  pFVar1 = operator_new__(0x600);
  this->AllNodes = pFVar1;
  this->FirstUnusedNode = pFVar1;
  pFVar1->Next = pFVar1 + 1;
  this->AllNodes[1].Next = this->AllNodes + 2;
  this->AllNodes[2].Next = this->AllNodes + 3;
  this->AllNodes[3].Next = this->AllNodes + 4;
  this->AllNodes[4].Next = this->AllNodes + 5;
  this->AllNodes[5].Next = this->AllNodes + 6;
  this->AllNodes[6].Next = this->AllNodes + 7;
  this->AllNodes[7].Next = this->AllNodes + 8;
  this->AllNodes[8].Next = this->AllNodes + 9;
  this->AllNodes[9].Next = this->AllNodes + 10;
  this->AllNodes[10].Next = this->AllNodes + 0xb;
  this->AllNodes[0xb].Next = this->AllNodes + 0xc;
  this->AllNodes[0xc].Next = this->AllNodes + 0xd;
  this->AllNodes[0xd].Next = this->AllNodes + 0xe;
  this->AllNodes[0xe].Next = this->AllNodes + 0xf;
  this->AllNodes[0xf].Next = this->AllNodes + 0x10;
  this->AllNodes[0x10].Next = this->AllNodes + 0x11;
  this->AllNodes[0x11].Next = this->AllNodes + 0x12;
  this->AllNodes[0x12].Next = this->AllNodes + 0x13;
  this->AllNodes[0x13].Next = this->AllNodes + 0x14;
  this->AllNodes[0x14].Next = this->AllNodes + 0x15;
  this->AllNodes[0x15].Next = this->AllNodes + 0x16;
  this->AllNodes[0x16].Next = this->AllNodes + 0x17;
  this->AllNodes[0x17].Next = this->AllNodes + 0x18;
  this->AllNodes[0x18].Next = this->AllNodes + 0x19;
  this->AllNodes[0x19].Next = this->AllNodes + 0x1a;
  this->AllNodes[0x1a].Next = this->AllNodes + 0x1b;
  this->AllNodes[0x1b].Next = this->AllNodes + 0x1c;
  this->AllNodes[0x1c].Next = this->AllNodes + 0x1d;
  this->AllNodes[0x1d].Next = this->AllNodes + 0x1e;
  this->AllNodes[0x1e].Next = this->AllNodes + 0x1f;
  this->AllNodes[0x1f].Next = this->AllNodes + 0x20;
  this->AllNodes[0x20].Next = this->AllNodes + 0x21;
  this->AllNodes[0x21].Next = this->AllNodes + 0x22;
  this->AllNodes[0x22].Next = this->AllNodes + 0x23;
  this->AllNodes[0x23].Next = this->AllNodes + 0x24;
  this->AllNodes[0x24].Next = this->AllNodes + 0x25;
  this->AllNodes[0x25].Next = this->AllNodes + 0x26;
  this->AllNodes[0x26].Next = this->AllNodes + 0x27;
  this->AllNodes[0x27].Next = this->AllNodes + 0x28;
  this->AllNodes[0x28].Next = this->AllNodes + 0x29;
  this->AllNodes[0x29].Next = this->AllNodes + 0x2a;
  this->AllNodes[0x2a].Next = this->AllNodes + 0x2b;
  this->AllNodes[0x2b].Next = this->AllNodes + 0x2c;
  this->AllNodes[0x2c].Next = this->AllNodes + 0x2d;
  this->AllNodes[0x2d].Next = this->AllNodes + 0x2e;
  this->AllNodes[0x2e].Next = this->AllNodes + 0x2f;
  this->AllNodes[0x2f].Next = this->AllNodes + 0x30;
  this->AllNodes[0x30].Next = this->AllNodes + 0x31;
  this->AllNodes[0x31].Next = this->AllNodes + 0x32;
  this->AllNodes[0x32].Next = this->AllNodes + 0x33;
  this->AllNodes[0x33].Next = this->AllNodes + 0x34;
  this->AllNodes[0x34].Next = this->AllNodes + 0x35;
  this->AllNodes[0x35].Next = this->AllNodes + 0x36;
  this->AllNodes[0x36].Next = this->AllNodes + 0x37;
  this->AllNodes[0x37].Next = this->AllNodes + 0x38;
  this->AllNodes[0x38].Next = this->AllNodes + 0x39;
  this->AllNodes[0x39].Next = this->AllNodes + 0x3a;
  this->AllNodes[0x3a].Next = this->AllNodes + 0x3b;
  this->AllNodes[0x3b].Next = this->AllNodes + 0x3c;
  this->AllNodes[0x3c].Next = this->AllNodes + 0x3d;
  this->AllNodes[0x3d].Next = this->AllNodes + 0x3e;
  this->AllNodes[0x3e].Next = this->AllNodes + 0x3f;
  this->AllNodes[0x3f].Next = (FNode *)0x0;
  return this;
}

// ~FShortLivingAllocs @ 14d3d1260

void __thiscall TraceServices::FShortLivingAllocs::~FShortLivingAllocs(FShortLivingAllocs *this)

{
  FNode *pFVar1;
  
  for (pFVar1 = this->LastAddedAllocNode; pFVar1 != (FNode *)0x0; pFVar1 = pFVar1->Prev) {
    ::operator_delete(pFVar1->Alloc,0x40);
  }
  operator_delete__(this->AllNodes);
  this->AllNodes = (FNode *)0x0;
  this->LastAddedAllocNode = (FNode *)0x0;
  this->OldestAllocNode = (FNode *)0x0;
  this->FirstUnusedNode = (FNode *)0x0;
  this->AllocCount = 0;
  return;
}

// Reset @ 14d401950

void __thiscall TraceServices::FShortLivingAllocs::Reset(FShortLivingAllocs *this)

{
  FNode *pFVar1;
  
  for (pFVar1 = this->LastAddedAllocNode; pFVar1 != (FNode *)0x0; pFVar1 = pFVar1->Prev) {
    ::operator_delete(pFVar1->Alloc,0x40);
  }
  operator_delete__(this->AllNodes);
  this->AllNodes = (FNode *)0x0;
  this->LastAddedAllocNode = (FNode *)0x0;
  this->OldestAllocNode = (FNode *)0x0;
  this->FirstUnusedNode = (FNode *)0x0;
  this->AllocCount = 0;
  return;
}

