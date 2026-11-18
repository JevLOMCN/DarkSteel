// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// Reset @ 1441e9590

void __thiscall FNetTraceCollector::Reset(FNetTraceCollector *this)

{
  int *piVar1;
  
  this->PendingBunchEventIndex = 0xffffffff;
  this->EventCount = 0;
  this->CurrentNestingLevel = 0;
  this->OffsetStackLevel = 0;
  this->LastBunchEventIndex = 0;
  this->BunchEventCount = 0;
  this->OffsetStack[0] = 0;
  piVar1 = &(this->ReferencedObjectIds).ArrayMax;
  (this->ReferencedObjectIds).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
              (8,8,0,&(this->ReferencedObjectIds).AllocatorInstance,0,piVar1);
  }
  return;
}

