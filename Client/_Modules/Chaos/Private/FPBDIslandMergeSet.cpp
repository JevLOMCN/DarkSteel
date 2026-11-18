// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FPBDIslandMergeSet @ 143b57960

FPBDIslandMergeSet * __thiscall
Chaos::Private::FPBDIslandMergeSet::FPBDIslandMergeSet(FPBDIslandMergeSet *this)

{
  this->ArrayIndex = -1;
  (this->Islands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Islands).ArrayNum = 0;
  (this->Islands).ArrayMax = 0;
  this->NumEdges = 0;
  return this;
}

// ~FPBDIslandMergeSet @ 143b58340

void __thiscall Chaos::Private::FPBDIslandMergeSet::~FPBDIslandMergeSet(FPBDIslandMergeSet *this)

{
  FScriptContainerElement *pFVar1;
  
  Trash(this);
  pFVar1 = (this->Islands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Reuse @ 143b755f0

void __thiscall Chaos::Private::FPBDIslandMergeSet::Reuse(FPBDIslandMergeSet *this)

{
  return;
}

// Trash @ 143b7cc10

void __thiscall Chaos::Private::FPBDIslandMergeSet::Trash(FPBDIslandMergeSet *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ArrayIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x24a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->Islands).ArrayNum = 0;
  if ((this->Islands).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->Islands).ArrayMax);
  }
  this->NumEdges = 0;
  return;
}

