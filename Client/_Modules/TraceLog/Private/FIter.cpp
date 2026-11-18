// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 1

// GetNext @ 14145e7f0

FEventNode * __thiscall UE::Trace::Private::FEventNode::FIter::GetNext(FIter *this)

{
  FEventNode *pFVar1;
  FEventNode *pFVar2;
  
  pFVar1 = this->Inner;
  if ((pFVar1 != (FEventNode *)0x0) &&
     (pFVar2 = pFVar1->Next, this->Inner = pFVar2, pFVar2 == (FEventNode *)0x0)) {
    GEventListTail = pFVar1;
  }
  return pFVar1;
}

