// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FPBDIsland @ 143b57240

FPBDIsland * __thiscall Chaos::Private::FPBDIsland::FPBDIsland(FPBDIsland *this)

{
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->ContainerEdges).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>)
       0x0;
  (this->ContainerEdges).ArrayNum = 0;
  (this->ContainerEdges).ArrayMax = 5;
  this->MergeSet = (FPBDIslandMergeSet *)0x0;
  this->NumEdges = 0;
  this->SleepCounter = 0;
  this->DisableCounter = 0;
  this->SleepTypeSwitchCounter = 0;
  this->MergeSetIslandIndex = -1;
  this->ArrayIndex = -1;
  this->ResimFrame = -1;
  (this->Iterations).NumPositionIterations = -1;
  (this->Iterations).NumVelocityIterations = -1;
  (this->Iterations).NumProjectionIterations = -1;
  (this->Flags).Bits = 0x6c;
  return this;
}

// ~FPBDIsland @ 143b581a0

void __thiscall Chaos::Private::FPBDIsland::~FPBDIsland(FPBDIsland *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar2;
  
  Trash(this);
  FVar2 = (this->ContainerEdges).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )0x0) {
    FVar2 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )&this->ContainerEdges;
  }
  DestructItems<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_> *)FVar2,
             (this->ContainerEdges).ArrayNum);
  FVar2 = (this->ContainerEdges).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// IsPartialSleepEnabled @ 143b6a0a0

bool __thiscall Chaos::Private::FPBDIsland::IsPartialSleepEnabled(FPBDIsland *this)

{
  if ((CVars::bChaosSolverPartialIslandSleep) && (((byte)(this->Flags).Bits & 0x28) == 0x28)) {
    return true;
  }
  return false;
}

// Reuse @ 143b75550

void __thiscall Chaos::Private::FPBDIsland::Reuse(FPBDIsland *this)

{
  (this->Flags).Bits = (this->Flags).Bits & 0xffffffef | 0x6c;
  return;
}

// Trash @ 143b7c9a0

void __thiscall Chaos::Private::FPBDIsland::Trash(FPBDIsland *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Nodes).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Nodes.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x20a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NumEdges != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumEdges == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x20b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ArrayIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x20c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->MergeSetIslandIndex = -1;
  this->MergeSet = (FPBDIslandMergeSet *)0x0;
  this->SleepCounter = 0;
  this->DisableCounter = 0;
  (this->Flags).Bits = 0;
  this->ResimFrame = -1;
  return;
}

// UpdateSyncState @ 143b7e9c0

void __thiscall Chaos::Private::FPBDIsland::UpdateSyncState(FPBDIsland *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar9;
  ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_> FVar10
  ;
  undefined1 local_res8 [8];
  
  (this->Flags).Bits = (this->Flags).Bits & 0xfffffdff;
  this->ResimFrame = -1;
  FVar9 = (this->ContainerEdges).AllocatorInstance.SecondaryData;
  iVar2 = (this->ContainerEdges).ArrayNum;
  if (FVar9 == (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
                )0x0) {
    FVar9 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )&this->ContainerEdges;
  }
  FVar10 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
            )((longlong)iVar2 * 0x10 + (longlong)FVar9);
  while( true ) {
    if ((this->ContainerEdges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar9 == FVar10) break;
    plVar8 = *(longlong **)FVar9;
    iVar3 = *(int *)((longlong)FVar9 + 8);
    plVar1 = plVar8 + iVar3;
    while( true ) {
      if (*(int *)((longlong)FVar9 + 8) != iVar3) {
        `TCheckedPointerIterator<Chaos::Private::FPBDIslandConstraint_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (plVar8 == plVar1) break;
      lVar5 = *plVar8;
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if (lVar6 != 0) {
        (this->Flags).Bits =
             (*(int *)(lVar6 + 0x2c) << 6 | (this->Flags).Bits) & 0x200 ^
             (this->Flags).Bits & 0xfffffdff;
        iVar4 = this->ResimFrame;
        iVar7 = *(int *)(lVar6 + 0x50);
        if ((iVar4 != -1) && (iVar4 < iVar7)) {
          iVar7 = iVar4;
        }
        this->ResimFrame = iVar7;
      }
      lVar5 = *(longlong *)(lVar5 + 0x18);
      if (lVar5 != 0) {
        (this->Flags).Bits =
             (*(int *)(lVar5 + 0x2c) << 6 | (this->Flags).Bits) & 0x200 ^
             (this->Flags).Bits & 0xfffffdff;
        iVar4 = this->ResimFrame;
        iVar7 = *(int *)(lVar5 + 0x50);
        if ((iVar4 != -1) && (iVar4 < iVar7)) {
          iVar7 = iVar4;
        }
        this->ResimFrame = iVar7;
      }
      plVar8 = plVar8 + 1;
    }
    FVar9 = (ForElementType<TArray<Chaos::Private::FPBDIslandConstraint_*,TSizedDefaultAllocator<32>_>_>
             )((longlong)FVar9 + 0x10);
  }
  return;
}

