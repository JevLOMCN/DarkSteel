// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 51

// TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_><TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_> @ 148c0b290

TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
* __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_><TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>
                 *param_1,int param_2,int param_3,double param_4,int param_5,bool param_6,
          bool param_7,bool param_8)

{
  TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
  *pTVar1;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar2;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  longlong local_18 [2];
  
  this_00 = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             *)0x0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x401;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->DirtyElementTree;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  *(undefined8 *)&this->Leaves = 0;
  *(undefined8 *)&(this->Leaves).field_0x8 = 0;
  (this->DirtyElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyElements).ArrayNum = 0;
  (this->DirtyElements).ArrayMax = 0;
  *(undefined8 *)&this->CellHashToFlatArray = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x8 = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x20 = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TAABBTree_HU__TAABBTreeLeafArray_H_0A_N_Chaos___0A_NU__TDefaultAABBTreeStorageTraits_H_2__Chaos__6B_
  ;
  *(undefined4 *)&this->_padding_ = 0;
  this->RootNode = -1;
  this->FirstFreeInternalNode = -1;
  this->FirstFreeLeafNode = -1;
  this->bDynamicTree = param_6;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x28 = 0;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x34 = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x40 = 0;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x48 = 0;
  this->MaxNumToProcess = param_5;
  this->bBuildOverlapCache = param_8;
  this->MaxPayloadBounds = param_4;
  (this->FlattenedCellArrayOfDirtyIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlattenedCellArrayOfDirtyIndices).ArrayNum = 0;
  (this->FlattenedCellArrayOfDirtyIndices).ArrayMax = 0;
  (this->DirtyElementsGridOverflow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyElementsGridOverflow).ArrayNum = 0;
  (this->DirtyElementsGridOverflow).ArrayMax = 0;
  pTVar1->Ptr = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)0x0;
  (this->TreeStats).StatNumNonEmptyCellsInGrid = 0;
  (this->TreeStats).StatNumElementsTooLargeForGrid = 0;
  (this->TreeStats).StatNumDirtyElements = 0;
  (this->TreeStats).StatNumGridOverflowElements = 0;
  (this->TreeExpensiveStats).StatMaxNumLeaves = 0;
  (this->TreeExpensiveStats).StatMaxDirtyElements = 0;
  (this->TreeExpensiveStats).StatMaxLeafSize = 0;
  (this->TreeExpensiveStats).StatMaxTreeDepth = 0;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize = 0;
  (this->GlobalPayloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalPayloads).ArrayNum = 0;
  (this->GlobalPayloads).ArrayMax = 0;
  (this->PayloadToInfo).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PayloadToInfo).Entries.ArrayNum = 0;
  (this->PayloadToInfo).Entries.ArrayMax = 0;
  this->MaxChildrenInLeaf = param_2;
  this->MaxTreeDepth = param_3;
  this->StartSliceTimeStamp = 0.0;
  this->CurrentProcessedNodesSinceChecked = 0;
  this->CurrentDataElementsCopiedSinceLastCheck = 0;
  (this->WorkStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkStack).ArrayNum = 0;
  (this->WorkStack).ArrayMax = 0;
  (this->WorkPoolFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPoolFreeList).ArrayNum = 0;
  (this->WorkPoolFreeList).ArrayMax = 0;
  (this->WorkPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPool).ArrayNum = 0;
  (this->WorkPool).ArrayMax = 0;
  this->bModifyingTreeMultiThreadingFastCheck = false;
  this->bShouldRebuild = true;
  (this->OverlappingLeaves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingLeaves).ArrayNum = 0;
  (this->OverlappingLeaves).ArrayMax = 0;
  (this->OverlappingOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingOffsets).ArrayNum = 0;
  (this->OverlappingOffsets).ArrayMax = 0;
  (this->OverlappingPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingPairs).ArrayNum = 0;
  (this->OverlappingPairs).ArrayMax = 0;
  (this->OverlappingCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingCounts).ArrayNum = 0;
  (this->OverlappingCounts).ArrayMax = 0;
  (this->PriorityQ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PriorityQ).ArrayNum = 0;
  (this->PriorityQ).ArrayMax = 0;
  if (!param_7) goto LAB_148c0b4ae;
  pTVar2 = ::operator_new(0x1d8);
  if (pTVar2 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)0x0) {
    this_00 = TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                        (pTVar2);
  }
  if (pTVar1 == (TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
                 *)local_18) {
    if (this_00 !=
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) {
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (this_00);
      goto LAB_148c0b498;
    }
  }
  else {
    pTVar2 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pTVar2 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                   *)0x0) {
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (pTVar2);
      this_00 = pTVar2;
LAB_148c0b498:
      ::operator_delete(this_00,0x1d8);
    }
  }
  pTVar1->Ptr->bDynamicTree = true;
LAB_148c0b4ae:
  GenerateTree<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_>
            (this,param_1);
  return this;
}

// GenerateTree<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_> @ 148c0ec70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::GenerateTree<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  double *pdVar5;
  uint uVar6;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree> FVar27;
  TStatId TVar28;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice> FVar29;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  FName FVar35;
  FScriptContainerElement *pFVar36;
  FName FVar37;
  FScriptContainerElement *pFVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_2f8 [2];
  double local_2f0 [6];
  undefined4 local_2c0;
  FColor_u_0 local_2bc;
  int local_2b8;
  uint local_2b4;
  uint local_2b0;
  FColor_u_0 local_2ac;
  FName local_2a8;
  FName local_2a0;
  byte local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_270;
  LARGE_INTEGER local_260;
  double *local_258;
  FScriptContainerElement *local_250;
  LARGE_INTEGER local_248;
  FStatMessage local_240;
  undefined4 local_230 [2];
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  undefined4 local_1f8 [2];
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  FSourceLocation local_1b8;
  FName local_198 [2];
  FName local_188;
  TAABB<double,3> local_180;
  double local_138;
  double dStack_130;
  double local_128;
  double local_108;
  double dStack_100;
  double local_f8;
  
  FVar27 = Chaos::StatPtr_STAT_AABBTreeGenerateTree;
  if (Chaos::StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar26 = ::FName::FName(local_198,"STAT_AABBTreeGenerateTree");
    FVar27 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&Chaos::StatPtr_STAT_AABBTreeGenerateTree,
                        *pFVar26,L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar27;
  bVar14 = false;
  bVar13 = false;
  local_280.ComparisonIndex.Value = 0;
  local_280.Number = 0;
  bVar22 = false;
  bVar21 = false;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_148c0eddc:
    bVar14 = bVar22;
    bVar13 = bVar21;
    bVar21 = false;
    local_2a8 = local_280;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2bc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2bc._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar14 = false;
      bVar13 = true;
      bVar22 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_290.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                   ,0xc94);
        bVar14 = true;
        bVar13 = true;
        bVar22 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c0eddc;
    local_2a8 = FVar37;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar21 = true;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  if (((this->WorkStack).ArrayNum != 0) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089986921>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0xc97,"WorkStack.Num() == 0"), bVar22)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = param_1->ArrayNum;
  uVar31 = (longlong)(int)uVar6 / (longlong)this->MaxChildrenInLeaf;
  iVar25 = (int)uVar31;
  local_2b0 = uVar6;
  if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar31 & 0xffffffff);
  }
  if ((this->WorkStack).ArrayMax < iVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar25,&(this->WorkStack).AllocatorInstance,(this->WorkStack).ArrayNum,
               &(this->WorkStack).ArrayMax);
  }
  uVar24 = GetNewWorkSnapshot(this);
  uVar30 = 0;
  if ((int)uVar24 < (this->WorkPool).ArrayNum) {
    uVar30 = ~uVar24 >> 0x1f;
  }
  local_2f8[0] = uVar24;
  if ((uVar30 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar33 = (this->WorkPool).AllocatorInstance.Data;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (*(int *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x44) < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar6,(ForAnyElementType *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x38),
               *(int *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x40),
               (int *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x44));
  }
  pTVar3 = &this->GlobalPayloads;
  (this->GlobalPayloads).ArrayNum = 0;
  if ((this->GlobalPayloads).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar3->AllocatorInstance,0,&(this->GlobalPayloads).ArrayMax);
  }
  puVar1 = &(this->Leaves).field_0xc;
  iVar25 = *(int *)&(this->Leaves).field_0x8;
  if (*(int *)puVar1 < 0) {
    DestructItems<Chaos::TAABBTreeLeafArray<int,0,double>,int>
              (*(TAABBTreeLeafArray<int,0,double> **)&this->Leaves,iVar25);
    *(undefined4 *)&(this->Leaves).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->Leaves,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<Chaos::TAABBTreeLeafArray<int,0,double>,int>
              (*(TAABBTreeLeafArray<int,0,double> **)&this->Leaves,iVar25);
    *(undefined4 *)&(this->Leaves).field_0x8 = 0;
  }
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(this->Nodes).AllocatorInstance,0,&(this->Nodes).ArrayMax);
  }
  this->RootNode = -1;
  this->FirstFreeInternalNode = -1;
  this->FirstFreeLeafNode = -1;
  piVar2 = &(this->DirtyElements).ArrayMax;
  (this->DirtyElements).ArrayNum = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->DirtyElements).AllocatorInstance,0,piVar2);
  }
  TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
           *)&this->CellHashToFlatArray);
  (this->FlattenedCellArrayOfDirtyIndices).ArrayNum = 0;
  if ((this->FlattenedCellArrayOfDirtyIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FlattenedCellArrayOfDirtyIndices).AllocatorInstance,0,
               &(this->FlattenedCellArrayOfDirtyIndices).ArrayMax);
  }
  (this->DirtyElementsGridOverflow).ArrayNum = 0;
  if ((this->DirtyElementsGridOverflow).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DirtyElementsGridOverflow).AllocatorInstance,0,
               &(this->DirtyElementsGridOverflow).ArrayMax);
  }
  this_00 = (this->DirtyElementTree).Ptr;
  if (this_00 !=
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    Reset(this_00);
  }
  (this->TreeStats).StatNumNonEmptyCellsInGrid = 0;
  (this->TreeStats).StatNumElementsTooLargeForGrid = 0;
  (this->TreeStats).StatNumDirtyElements = 0;
  (this->TreeStats).StatNumGridOverflowElements = 0;
  piVar2 = &(this->PayloadToInfo).Entries.ArrayMax;
  (this->TreeExpensiveStats).StatMaxNumLeaves = 0;
  (this->TreeExpensiveStats).StatMaxDirtyElements = 0;
  (this->TreeExpensiveStats).StatMaxLeafSize = 0;
  (this->TreeExpensiveStats).StatMaxTreeDepth = 0;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize = 0;
  iVar25 = *piVar2;
  (this->PayloadToInfo).Entries.ArrayNum = 0;
  if (iVar25 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->PayloadToInfo,0,piVar2);
  }
  this->NumProcessedThisSlice = 0;
  QueryPerformanceCounter(&local_260);
  dVar15 = __real_3ff0000000000000;
  this->StartSliceTimeStamp =
       (double)local_260.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  dVar16 = __real_3e45798ee0000000;
  dVar42 = (double)FAABBTreeDirtyGridCVars::DirtyElementGridCellSize;
  this->DirtyElementGridCellSize = dVar42;
  dVar39 = dVar15;
  if (dVar16 < dVar42) {
    dVar39 = dVar15 / dVar42;
  }
  this->DirtyElementGridCellSizeInv = dVar39;
  this->DirtyElementMaxGridCellQueryCount =
       FAABBTreeDirtyGridCVars::DirtyElementMaxGridCellQueryCount;
  this->DirtyElementMaxPhysicalSizeInCells =
       FAABBTreeDirtyGridCVars::DirtyElementMaxPhysicalSizeInCells;
  this->DirtyElementMaxCellCapacity = FAABBTreeDirtyGridCVars::DirtyElementMaxCellCapacity;
  dVar42 = _UNK_1508ffb58;
  dVar16 = ___xmm_ffefffffffffffffffefffffffffffff;
  dVar39 = __real_ffefffffffffffff;
  if (this->bDynamicTree != false) {
    pFVar38 = (param_1->AllocatorInstance).Data;
    iVar25 = param_1->ArrayNum;
    pFVar33 = pFVar38 + 0x20;
    pFVar36 = pFVar38 + (longlong)iVar25 * 0x38;
    while( true ) {
      if (param_1->ArrayNum != iVar25) {
        `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar38 == pFVar36) break;
      local_180.MMin._0_8_ = *(undefined8 *)(pFVar33 + -0x18);
      local_180.MMin._8_8_ = *(undefined8 *)(pFVar33 + -0x10);
      local_2b8 = *(int *)pFVar38;
      local_180.MMin._16_8_ = *(undefined8 *)(pFVar33 + -8);
      local_180.MMax._0_8_ = *(undefined8 *)pFVar33;
      local_180.MMax._8_8_ = *(undefined8 *)(pFVar33 + 8);
      local_180.MMax._16_8_ = *(undefined8 *)(pFVar33 + 0x10);
      UpdateElement(this,&local_2b8,&local_180,true);
      pFVar38 = pFVar38 + 0x38;
      pFVar33 = pFVar33 + 0x38;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    FVar37 = local_2a8;
    goto LAB_148c0fb1b;
  }
  local_128 = __real_ffefffffffffffff;
  local_138 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_130 = _UNK_1508ffb58;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 8) = 0x7fefffffffffffff;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x10) = 0x7fefffffffffffff;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x18) = 0x7fefffffffffffff;
  *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x20) = dVar16;
  *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x28) = dVar42;
  *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x30) = dVar39;
  TVar28 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1> *)
                      &Chaos::StatPtr_STAT_AABBTreeTimeSliceSetup);
  local_1b8.Impl._Line = 0xcd8;
  local_1b8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
  ;
  local_1b8.Impl._Column = 4;
  local_1b8.Impl._Function =
       "void __cdecl Chaos::TAABBTree<int,struct Chaos::TAABBTreeLeafArray<int,0,double>,0,double,struct Chaos::TDefaultAABBTreeStorageTraits<int> >::GenerateTree<class TArray<struct Chaos::TPayloadBoundsElement<int,double>,class TSizedDefaultAllocator<32> >>(const class TArray<struct Chaos::TPayloadBoundsElement<int,double>,class TSizedDefaultAllocator<32> > &)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_2a0,*(TStatIdData **)&(TVar28.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1b8);
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x48) = 0;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x50) = 0;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x58) = 0;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x60) = 0;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x68) = 0;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x70) = 0;
  dVar20 = _UNK_150a9e648;
  dVar19 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dVar18 = __real_7fefffffffffffff;
  dVar17 = __real_3fe0000000000000;
  local_2b4 = param_1->ArrayNum;
  uVar31 = (ulonglong)(int)local_2b4;
  pFVar36 = (param_1->AllocatorInstance).Data;
  pFVar38 = pFVar36 + 0x20;
  local_250 = pFVar36 + uVar31 * 0x38;
  while( true ) {
    pFVar7 = local_250;
    if (param_1->ArrayNum != (int)uVar31) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    FVar37 = local_2a8;
    if (pFVar36 == pFVar7) break;
    lVar34 = 0;
    local_2c0 = *(undefined4 *)pFVar36;
    local_2f0[0] = *(double *)(pFVar38 + -0x18);
    local_2f0[1] = *(double *)(pFVar38 + -0x10);
    local_2f0[2] = *(double *)(pFVar38 + -8);
    local_2f0[3] = *(double *)pFVar38;
    local_2f0[4] = *(double *)(pFVar38 + 8);
    local_2f0[5] = *(double *)(pFVar38 + 0x10);
    do {
      dVar40 = local_2f0[lVar34 + 3];
      if (((dVar40 < local_2f0[lVar34]) || (iVar25 = _finite(local_2f0[lVar34]), iVar25 == 0)) ||
         (iVar25 = _finite(dVar40), iVar25 == 0)) {
        local_258 = local_2f0;
        `Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        GenerateTree<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_>'
        ::__l23::<lambda_1>::operator()(&local_258);
        local_2f0[2] = dVar39;
        local_f8 = dVar18;
        local_108 = dVar19;
        dStack_100 = dVar20;
        local_2f0[0] = dVar16;
        local_2f0[1] = dVar42;
        local_2f0[3] = dVar19;
        local_2f0[4] = dVar20;
        local_2f0[5] = dVar18;
        goto LAB_148c0f6dd;
      }
      lVar34 = lVar34 + 1;
    } while (lVar34 < 3);
    dVar44 = local_2f0[4] - local_2f0[1];
    dVar40 = local_2f0[3] - local_2f0[0];
    dVar43 = local_2f0[5] - local_2f0[2];
    if (((dVar40 <= dVar44) || (dVar40 <= dVar43)) && (dVar40 = dVar43, dVar43 <= dVar44)) {
      dVar40 = dVar44;
    }
    if (this->MaxPayloadBounds <= dVar40 && dVar40 != this->MaxPayloadBounds) {
LAB_148c0f6dd:
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      local_1f8[0] = local_2c0;
      local_1e0 = local_2f0[2];
      local_1f0 = local_2f0[0];
      dStack_1e8 = local_2f0[1];
      local_1d8 = local_2f0[3];
      dStack_1d0 = local_2f0[4];
      local_1c8 = local_2f0[5];
      if (((pFVar7 <= (FScriptContainerElement *)local_1f8) &&
          ((FScriptContainerElement *)local_1f8 <
           pFVar7 + (longlong)(this->GlobalPayloads).ArrayMax * 0x38)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar25 = (this->GlobalPayloads).ArrayNum;
      if (iVar25 == (this->GlobalPayloads).ArrayMax) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar3->AllocatorInstance,&(this->GlobalPayloads).ArrayMax);
      }
      lVar34 = (longlong)iVar25 * 0x38;
      (this->GlobalPayloads).ArrayNum = iVar25 + 1;
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      *(undefined4 *)(pFVar7 + lVar34) = local_1f8[0];
      *(double *)(pFVar7 + lVar34 + 8) = local_1f0;
      *(double *)(pFVar7 + lVar34 + 8 + 8) = dStack_1e8;
      *(double *)(pFVar7 + lVar34 + 0x18) = local_1e0;
      *(double *)(pFVar7 + lVar34 + 0x20) = local_1d8;
      *(double *)(pFVar7 + lVar34 + 0x20 + 8) = dStack_1d0;
      *(double *)(pFVar7 + lVar34 + 0x30) = local_1c8;
    }
    else {
      local_230[0] = local_2c0;
      local_228 = local_2f0[0];
      dStack_220 = local_2f0[1];
      local_218 = local_2f0[2];
      local_200 = local_2f0[5];
      local_210 = local_2f0[3];
      dStack_208 = local_2f0[4];
      if (((*(undefined4 **)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x38) <= local_230) &&
          (local_230 <
           *(undefined4 **)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x38) +
           (longlong)*(int *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x44) * 0xe)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar25 = *(int *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x40);
      if (iVar25 == *(int *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x44)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)
                                  (pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x38),
                            (int *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x44));
      }
      lVar34 = *(longlong *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x38);
      *(int *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x40) = iVar25 + 1;
      lVar32 = (longlong)iVar25 * 0x38;
      *(undefined4 *)(lVar32 + lVar34) = local_230[0];
      pdVar5 = (double *)(lVar32 + 8 + lVar34);
      *pdVar5 = local_228;
      pdVar5[1] = dStack_220;
      *(double *)(lVar32 + 0x18 + lVar34) = local_218;
      pdVar5 = (double *)(lVar32 + 0x20 + lVar34);
      *pdVar5 = local_210;
      pdVar5[1] = dStack_208;
      *(double *)(lVar32 + 0x30 + lVar34) = local_200;
      dVar40 = local_2f0[0];
      if (*(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 8) <= local_2f0[0]) {
        dVar40 = *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 8);
      }
      dVar43 = local_2f0[1];
      if (*(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x10) <= local_2f0[1]) {
        dVar43 = *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x10);
      }
      dVar44 = local_2f0[2];
      if (*(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x18) <= local_2f0[2]) {
        dVar44 = *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x18);
      }
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 8) = dVar40;
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x10) = dVar43;
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x18) = dVar44;
      dVar40 = local_2f0[3];
      if (local_2f0[3] <= *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x20)) {
        dVar40 = *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x20);
      }
      dVar43 = *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x30);
      if (*(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x30) <= local_2f0[5]) {
        dVar43 = local_2f0[5];
      }
      dVar44 = *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x28);
      if (*(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x28) <= local_2f0[4]) {
        dVar44 = local_2f0[4];
      }
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x20) = dVar40;
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x28) = dVar44;
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x30) = dVar43;
      dVar40 = dVar15 / (double)(iVar25 + 1);
      dVar10 = (local_2f0[3] - local_2f0[0]) * dVar17 + local_2f0[0];
      dVar43 = dVar10 - *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x48);
      dVar9 = (local_2f0[4] - local_2f0[1]) * dVar17 + local_2f0[1];
      dVar44 = (local_2f0[5] - local_2f0[2]) * dVar17 + local_2f0[2];
      dVar47 = dVar44 - *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x58);
      dVar48 = dVar9 - *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x50);
      dVar46 = dVar40 * dVar43 + *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x48);
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x48) = dVar46;
      dVar45 = dVar40 * dVar47 + *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x58);
      dVar41 = dVar40 * dVar48 + *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x50);
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x58) = dVar45;
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x50) = dVar41;
      dVar40 = *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x70);
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x60) =
           (dVar10 - dVar46) * dVar43 + *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x60);
      dVar43 = *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x68);
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x70) =
           (dVar44 - dVar45) * dVar47 + dVar40;
      *(double *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x68) =
           (dVar9 - dVar41) * dVar48 + dVar43;
    }
    pFVar36 = pFVar36 + 0x38;
    pFVar38 = pFVar38 + 0x38;
    uVar31 = (ulonglong)local_2b4;
  }
  if ((local_298 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_298 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_298 & 4) != 0) {
    FThreadStats::AddMessage(local_2a0,CycleScopeEnd);
  }
  this->NumProcessedThisSlice = local_2b0;
  local_298 = 0;
  FVar29 = Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice;
  if (Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar26 = ::FName::FName(&local_188,"STAT_AABBTreeInitialTimeSlice");
    FVar29 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice,
                        *pFVar26,L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar29;
  bVar22 = false;
  bVar12 = false;
  local_270.ComparisonIndex.Value = 0;
  local_270.Number = 0;
  if ((FVar35.ComparisonIndex.Value.Value == 0) && (FVar35.Number == 0)) {
LAB_148c0f99a:
    bVar11 = false;
    FVar35 = local_270;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2ac.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2ac._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar22 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_288.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_288.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_288,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                   ,0xd1c);
        bVar22 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c0f99a;
    FThreadStats::AddMessage(FVar35,CycleScopeStart);
    bVar11 = true;
  }
  pTVar4 = &this->WorkStack;
  *(undefined8 *)(pFVar33 + (longlong)(int)uVar24 * 0xf8 + 0x78) = 0;
  pFVar33 = (pTVar4->AllocatorInstance).Data;
  piVar2 = &(this->WorkStack).ArrayMax;
  if (((pFVar33 <= (FScriptContainerElement *)local_2f8) &&
      ((FScriptContainerElement *)local_2f8 < pFVar33 + (longlong)*piVar2 * 4)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar23)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar25 = (this->WorkStack).ArrayNum;
  if (iVar25 == *piVar2) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,piVar2);
  }
  (this->WorkStack).ArrayNum = iVar25 + 1;
  *(uint *)((pTVar4->AllocatorInstance).Data + (longlong)iVar25 * 4) = local_2f8[0];
  SplitNode(this);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar35 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_240.NameAndInfo.Index = FVar35.ComparisonIndex.Value;
      local_240.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_248);
      local_240.StatData.Pad[4] = '\0';
      local_240.StatData.Pad[5] = '\0';
      local_240.StatData.Pad[6] = '\0';
      local_240.StatData.Pad[7] = '\0';
      local_240.StatData.Pad[0] = local_248.s.LowPart._0_1_;
      local_240.StatData.Pad[1] = local_248.s.LowPart._1_1_;
      local_240.StatData.Pad[2] = local_248.s.LowPart._2_1_;
      local_240.StatData.Pad[3] = local_248.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_240);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_148c0fb1b:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar37,CycleScopeEnd);
  }
  return;
}

// GenerateTree<TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_>_> @ 148c0fb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::GenerateTree<TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  TStatId TVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice> FVar23;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  FName FVar28;
  FClothBvEntry *pFVar29;
  int iVar30;
  FClothBvEntry *pFVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_318 [2];
  TVector<double>_u_0 local_310;
  TVector<double>_u_0 local_2f8;
  uint local_2e0;
  FColor_u_0 local_2dc;
  FName local_2d8;
  byte local_2d0;
  FName local_2c8;
  byte local_2c0;
  FName local_2b8;
  FName local_2b0;
  undefined8 local_2a0;
  TVector<double>_u_0 *local_298;
  FClothBvEntry *local_290;
  LARGE_INTEGER local_288;
  FString local_280;
  FString local_270;
  FStatMessage local_260;
  int local_250 [2];
  double local_248;
  double dStack_240;
  double local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  double local_220;
  int local_218 [2];
  double local_210;
  double dStack_208;
  double local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  FSourceLocation local_1d8;
  FSourceLocation local_1b8;
  undefined1 local_198 [24];
  double local_180 [5];
  FName local_158 [4];
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  
  local_res10 = (FName)param_1;
  TVar21 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeGenerateTree,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeGenerateTree,1> *)
                      &Chaos::StatPtr_STAT_AABBTreeGenerateTree);
  local_1d8.Impl._Line = 0xc94;
  local_1d8.Impl._Function =
       "void __cdecl Chaos::TAABBTree<int,struct Chaos::TAABBTreeLeafArray<int,0,double>,0,double,struct Chaos::TDefaultAABBTreeStorageTraits<int> >::GenerateTree<class TArray<struct ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,class TSizedDefaultAllocator<32> >>(const class TArray<struct ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,class TSizedDefaultAllocator<32> > &)"
  ;
  local_1d8.Impl._Column = 3;
  local_1d8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_2c8,*(TStatIdData **)&(TVar21.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1d8);
  iVar30 = (this->WorkStack).ArrayNum;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  if ((iVar30 != 0) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089986921>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0xc97,"WorkStack.Num() == 0"), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar7 = param_1->ArrayNum;
  uVar10 = (longlong)(int)uVar7 / (longlong)this->MaxChildrenInLeaf;
  iVar30 = (int)uVar10;
  local_2e0 = uVar7;
  if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10 & 0xffffffff);
  }
  piVar1 = &(this->WorkStack).ArrayMax;
  if (*piVar1 < iVar30) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar30,&(this->WorkStack).AllocatorInstance,(this->WorkStack).ArrayNum,piVar1);
  }
  uVar18 = GetNewWorkSnapshot(this);
  iVar30 = 0;
  uVar24 = 0;
  if ((int)uVar18 < (this->WorkPool).ArrayNum) {
    uVar24 = ~uVar18 >> 0x1f;
  }
  local_318[0] = uVar18;
  if ((uVar24 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar8 = (this->WorkPool).AllocatorInstance.Data;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (*(int *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x44) < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar7,(ForAnyElementType *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x38),
               *(int *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x40),
               (int *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x44));
  }
  pTVar2 = &this->GlobalPayloads;
  (this->GlobalPayloads).ArrayNum = 0;
  if ((this->GlobalPayloads).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar2->AllocatorInstance,0,&(this->GlobalPayloads).ArrayMax);
  }
  TArray<Chaos::TAABBTreeLeafArray<int,0,double>,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<Chaos::TAABBTreeLeafArray<int,0,double>,TSizedDefaultAllocator<32>_> *)
             &this->Leaves,0);
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(this->Nodes).AllocatorInstance,0,&(this->Nodes).ArrayMax);
  }
  this->RootNode = -1;
  this->FirstFreeInternalNode = -1;
  this->FirstFreeLeafNode = -1;
  piVar1 = &(this->DirtyElements).ArrayMax;
  (this->DirtyElements).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->DirtyElements).AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
           *)&this->CellHashToFlatArray);
  (this->FlattenedCellArrayOfDirtyIndices).ArrayNum = 0;
  if ((this->FlattenedCellArrayOfDirtyIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FlattenedCellArrayOfDirtyIndices).AllocatorInstance,0,
               &(this->FlattenedCellArrayOfDirtyIndices).ArrayMax);
  }
  (this->DirtyElementsGridOverflow).ArrayNum = 0;
  if ((this->DirtyElementsGridOverflow).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DirtyElementsGridOverflow).AllocatorInstance,0,
               &(this->DirtyElementsGridOverflow).ArrayMax);
  }
  this_00 = (this->DirtyElementTree).Ptr;
  if (this_00 !=
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    Reset(this_00);
  }
  (this->TreeStats).StatNumNonEmptyCellsInGrid = 0;
  (this->TreeStats).StatNumElementsTooLargeForGrid = 0;
  (this->TreeStats).StatNumDirtyElements = 0;
  (this->TreeStats).StatNumGridOverflowElements = 0;
  (this->TreeExpensiveStats).StatMaxNumLeaves = 0;
  (this->TreeExpensiveStats).StatMaxDirtyElements = 0;
  (this->TreeExpensiveStats).StatMaxLeafSize = 0;
  (this->TreeExpensiveStats).StatMaxTreeDepth = 0;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize = 0;
  TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Reset(&this->PayloadToInfo);
  this->NumProcessedThisSlice = 0;
  dVar32 = FWindowsPlatformTime::Seconds();
  this->StartSliceTimeStamp = dVar32;
  GetCVars(this);
  dVar15 = _UNK_1508ffb58;
  dVar32 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar6 = __real_ffefffffffffffff;
  if (this->bDynamicTree != false) {
    iVar30 = param_1->ArrayNum;
    pFVar29 = (FClothBvEntry *)(param_1->AllocatorInstance).Data;
    pFVar31 = pFVar29 + iVar30;
    while( true ) {
      if (param_1->ArrayNum != iVar30) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar29 == pFVar31) break;
      ComputeWorldSpaceBoundingBox<double,ClothingMeshUtils::ClothMeshDesc::FClothBvEntry>
                ((TAABB<double,3> *)local_198,pFVar29,false,0.0);
      if (this->bModifyingTreeMultiThreadingFastCheck != false) {
        bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181246422089988253>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                            ,0x763,"bModifyingTreeMultiThreadingFastCheck == false");
        if (bVar16) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (2 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_virtual_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::UpdateElement(int_const&___ptr64,Chaos::TAABB<double,3>_const&___ptr64,bool)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      this->bModifyingTreeMultiThreadingFastCheck = true;
      lVar27 = 0;
      do {
        dVar32 = local_180[lVar27];
        if (((dVar32 < *(double *)(local_198 + lVar27 * 8)) ||
            (iVar19 = _finite(*(double *)(local_198 + lVar27 * 8)), iVar19 == 0)) ||
           (iVar19 = _finite(dVar32), iVar19 == 0)) {
          if (2 < (byte)LogChaos._0_1_) {
            ::FString::PrintfImpl(&local_270,L"X=%3.3f Y=%3.3f Z=%3.3f");
            ::FString::PrintfImpl(&local_280,L"X=%3.3f Y=%3.3f Z=%3.3f");
            UE::Logging::Private::BasicLog<3>
                      (&`public:_virtual_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::UpdateElement(int_const&___ptr64,Chaos::TAABB<double,3>_const&___ptr64,bool)___ptr64'
                        ::__l29::LOG_Static,(FLogCategoryBase *)&LogChaos);
            if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_280.Data.AllocatorInstance.Data);
            }
            if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data.AllocatorInstance.Data);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          break;
        }
        lVar27 = lVar27 + 1;
      } while (lVar27 < 3);
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089988211>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0x78d,"bMutable");
      if (bVar16) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((((this->DirtyElementTree).Ptr ==
            (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             *)0x0) && (this->bDynamicTree == false)) &&
         (MaxDirtyElements < (this->DirtyElements).ArrayNum)) {
        if (5 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<6>
                    (&`public:_virtual_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::UpdateElement(int_const&___ptr64,Chaos::TAABB<double,3>_const&___ptr64,bool)___ptr64'
                      ::__l148::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
        ReoptimizeTree(this);
      }
      this->bModifyingTreeMultiThreadingFastCheck = false;
      pFVar29 = pFVar29 + 1;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    goto LAB_148c10b7c;
  }
  uVar55 = (undefined4)__real_ffefffffffffffff;
  uVar56 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
  local_138 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_130 = _UNK_1508ffb58;
  local_128 = __real_ffefffffffffffff;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 8) = 0x7fefffffffffffff;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x10) = 0x7fefffffffffffff;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x18) = 0x7fefffffffffffff;
  *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x20) = dVar32;
  *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x28) = dVar15;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x30) = uVar6;
  local_2a0 = uVar6;
  TVar21 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1> *)
                      &Chaos::StatPtr_STAT_AABBTreeTimeSliceSetup);
  local_1b8.Impl._Line = 0xcd8;
  local_1b8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
  ;
  local_1b8.Impl._Column = 4;
  local_1b8.Impl._Function =
       "void __cdecl Chaos::TAABBTree<int,struct Chaos::TAABBTreeLeafArray<int,0,double>,0,double,struct Chaos::TDefaultAABBTreeStorageTraits<int> >::GenerateTree<class TArray<struct ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,class TSizedDefaultAllocator<32> >>(const class TArray<struct ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,class TSizedDefaultAllocator<32> > &)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_2d8,*(TStatIdData **)&(TVar21.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1b8);
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48) = 0;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x50) = 0;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x58) = 0;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x60) = 0;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x68) = 0;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x70) = 0;
  dVar14 = __real_7fefffffffffffff;
  pFVar29 = (FClothBvEntry *)(param_1->AllocatorInstance).Data;
  uVar57 = SUB84(__real_3fe0000000000000,0);
  uVar58 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  local_res20 = *(uint *)((longlong)local_res10 + 8);
  uVar25 = (ulonglong)(int)local_res20;
  uVar59 = SUB84(__real_7fefffffffffffff,0);
  uVar10 = (ulonglong)__real_7fefffffffffffff >> 0x20;
  local_290 = pFVar29 + uVar25;
  uVar49 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar51 = _UNK_150a9e644;
  uVar50 = _UNK_150a9e648;
  uVar52 = _UNK_150a9e64c;
  while( true ) {
    pFVar31 = local_290;
    if (*(int *)((longlong)local_res10 + 8) != (int)uVar25) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar29 == pFVar31) break;
    ComputeWorldSpaceBoundingBox<double,ClothingMeshUtils::ClothMeshDesc::FClothBvEntry>
              ((TAABB<double,3> *)&local_310._s_0,pFVar29,false,0.0);
    iVar19 = 0;
    do {
      dVar33 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,iVar19);
      dVar34 = UE::Math::TVector<double>::Component((TVector<double> *)&local_2f8._s_0,iVar19);
      if (((dVar34 < dVar33) || (iVar20 = _finite(dVar33), iVar20 == 0)) ||
         (iVar20 = _finite(dVar34), iVar20 == 0)) {
        local_298 = &local_310;
        `Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::
        GenerateTree<TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_>_>'
        ::__l23::<lambda_1>::operator()(&local_298);
        local_310._s_0.Z = (double)CONCAT44(uVar56,uVar55);
        local_f8 = dVar14;
        local_310._s_0.X = dVar32;
        local_310._s_0.Y = dVar15;
        local_2f8._s_0.Z = dVar14;
        uVar53 = uVar59;
        uVar54 = (int)uVar10;
        local_2f8._0_4_ = uVar49;
        local_2f8._4_4_ = uVar51;
        local_2f8._8_4_ = uVar50;
        local_2f8._12_4_ = uVar52;
        local_108 = uVar49;
        uStack_104 = uVar51;
        uStack_100 = uVar50;
        uStack_fc = uVar52;
        goto LAB_148c10745;
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < 3);
    dVar34 = (double)CONCAT44(local_2f8._12_4_,local_2f8._8_4_) - local_310._s_0.Y;
    dVar35 = (double)CONCAT44(local_2f8._4_4_,local_2f8._0_4_) - local_310._s_0.X;
    dVar33 = local_2f8._s_0.Z - local_310._s_0.Z;
    if (((dVar35 <= dVar34) || (dVar35 <= dVar33)) && (dVar35 = dVar33, dVar33 <= dVar34)) {
      dVar35 = dVar34;
    }
    if (this->MaxPayloadBounds <= dVar35 && dVar35 != this->MaxPayloadBounds) {
      uVar53 = SUB84(local_2f8._s_0.Z,0);
      uVar54 = (int)((ulonglong)local_2f8._16_8_ >> 0x20);
LAB_148c10745:
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      piVar1 = &(this->GlobalPayloads).ArrayMax;
      local_1e8 = CONCAT44(uVar54,uVar53);
      local_200 = local_310._s_0.Z;
      local_218[0] = iVar30;
      local_210 = local_310._s_0.X;
      dStack_208 = local_310._s_0.Y;
      local_1f8 = local_2f8._0_4_;
      uStack_1f4 = local_2f8._4_4_;
      uStack_1f0 = local_2f8._8_4_;
      uStack_1ec = local_2f8._12_4_;
      if (((pFVar9 <= (FScriptContainerElement *)local_218) &&
          ((FScriptContainerElement *)local_218 < pFVar9 + (longlong)*piVar1 * 0x38)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->GlobalPayloads).ArrayNum;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar2->AllocatorInstance,piVar1);
      }
      lVar27 = (longlong)iVar19 * 0x38;
      (this->GlobalPayloads).ArrayNum = iVar19 + 1;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      *(int *)(pFVar9 + lVar27) = local_218[0];
      *(double *)(pFVar9 + lVar27 + 8) = local_210;
      *(double *)(pFVar9 + lVar27 + 8 + 8) = dStack_208;
      *(double *)(pFVar9 + lVar27 + 0x18) = local_200;
      *(ulonglong *)(pFVar9 + lVar27 + 0x20) = CONCAT44(uStack_1f4,local_1f8);
      *(ulonglong *)(pFVar9 + lVar27 + 0x20 + 8) = CONCAT44(uStack_1ec,uStack_1f0);
      *(undefined8 *)(pFVar9 + lVar27 + 0x30) = local_1e8;
    }
    else {
      local_248 = local_310._s_0.X;
      dStack_240 = local_310._s_0.Y;
      local_238 = local_310._s_0.Z;
      local_220 = local_2f8._s_0.Z;
      local_230 = local_2f8._0_4_;
      uStack_22c = local_2f8._4_4_;
      uStack_228 = local_2f8._8_4_;
      uStack_224 = local_2f8._12_4_;
      local_250[0] = iVar30;
      if (((*(int **)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x38) <= local_250) &&
          (local_250 <
           *(int **)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x38) +
           (longlong)*(int *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x44) * 0xe)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = *(int *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x40);
      if (iVar19 == *(int *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x44)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)
                                  (pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x38),
                            (int *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x44));
      }
      lVar27 = *(longlong *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x38);
      *(int *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x40) = iVar19 + 1;
      lVar26 = (longlong)iVar19 * 0x38;
      *(int *)(lVar26 + lVar27) = local_250[0];
      pdVar4 = (double *)(lVar26 + 8 + lVar27);
      *pdVar4 = local_248;
      pdVar4[1] = dStack_240;
      *(double *)(lVar26 + 0x18 + lVar27) = local_238;
      puVar5 = (undefined8 *)(lVar26 + 0x20 + lVar27);
      *puVar5 = CONCAT44(uStack_22c,local_230);
      puVar5[1] = CONCAT44(uStack_224,uStack_228);
      *(double *)(lVar26 + 0x30 + lVar27) = local_220;
      dVar33 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x10);
      uVar49 = SUB84(dVar33,0);
      uVar51 = (undefined4)((ulonglong)dVar33 >> 0x20);
      uVar6 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 8);
      if (local_310._s_0.X <= *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 8)) {
        uVar6 = local_310._s_0.X;
      }
      dVar34 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x18);
      uVar50 = SUB84(dVar34,0);
      uVar52 = (undefined4)((ulonglong)dVar34 >> 0x20);
      if (local_310._s_0.Y <= dVar33) {
        uVar49 = SUB84(local_310._s_0.Y,0);
        uVar51 = (undefined4)((ulonglong)local_310._8_8_ >> 0x20);
      }
      if (local_310._s_0.Z <= dVar34) {
        uVar50 = SUB84(local_310._s_0.Z,0);
        uVar52 = (undefined4)((ulonglong)local_310._16_8_ >> 0x20);
      }
      *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 8) = uVar6;
      *(ulonglong *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x10) = CONCAT44(uVar51,uVar49);
      *(ulonglong *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x18) = CONCAT44(uVar52,uVar50);
      dVar33 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x28);
      dVar34 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x30);
      uVar49 = SUB84(dVar34,0);
      uVar51 = (undefined4)((ulonglong)dVar34 >> 0x20);
      dVar35 = (double)CONCAT44(local_2f8._4_4_,local_2f8._0_4_);
      if ((double)CONCAT44(local_2f8._4_4_,local_2f8._0_4_) <=
          *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x20)) {
        dVar35 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x20);
      }
      uVar50 = SUB84(dVar33,0);
      uVar52 = (int)((ulonglong)dVar33 >> 0x20);
      if (dVar33 <= (double)CONCAT44(local_2f8._12_4_,local_2f8._8_4_)) {
        uVar50 = local_2f8._8_4_;
        uVar52 = local_2f8._12_4_;
      }
      if (dVar34 <= local_2f8._s_0.Z) {
        uVar49 = SUB84(local_2f8._s_0.Z,0);
        uVar51 = (undefined4)((ulonglong)local_2f8._16_8_ >> 0x20);
      }
      *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x20) = dVar35;
      *(ulonglong *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x28) = CONCAT44(uVar52,uVar50);
      *(ulonglong *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x30) = CONCAT44(uVar51,uVar49);
      dVar33 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,2);
      dVar33 = local_2f8._s_0.Z - dVar33;
      dVar36 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,1);
      dVar35 = (double)CONCAT44(local_2f8._12_4_,local_2f8._8_4_);
      dVar37 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,0);
      dVar34 = (double)CONCAT44(local_2f8._4_4_,local_2f8._0_4_);
      dVar38 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,2);
      dVar39 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,1);
      dVar40 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,0);
      dVar41 = UE::Math::TVector<double>::Component
                         ((TVector<double> *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48),2);
      dVar41 = (dVar38 + dVar33 * (double)CONCAT44(uVar58,uVar57)) - dVar41;
      dVar42 = UE::Math::TVector<double>::Component
                         ((TVector<double> *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48),1);
      dVar42 = (dVar39 + (dVar35 - dVar36) * (double)CONCAT44(uVar58,uVar57)) - dVar42;
      dVar38 = UE::Math::TVector<double>::Component
                         ((TVector<double> *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48),0);
      dVar38 = (dVar40 + (dVar34 - dVar37) * (double)CONCAT44(uVar58,uVar57)) - dVar38;
      dVar35 = __real_3ff0000000000000 / (double)(iVar19 + 1);
      dVar33 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x50);
      dVar34 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x58);
      *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48) =
           dVar35 * dVar38 + *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48);
      *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x50) = dVar35 * dVar42 + dVar33;
      *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x58) = dVar35 * dVar41 + dVar34;
      dVar35 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,2);
      dVar35 = local_2f8._s_0.Z - dVar35;
      dVar34 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,1);
      dVar33 = (double)CONCAT44(local_2f8._12_4_,local_2f8._8_4_);
      dVar40 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,0);
      dVar39 = (double)CONCAT44(local_2f8._4_4_,local_2f8._0_4_);
      dVar37 = (double)CONCAT44(uVar58,uVar57);
      dVar43 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,2);
      dVar35 = dVar35 * __real_3fe0000000000000;
      dVar44 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,1);
      dVar36 = (dVar33 - dVar34) * __real_3fe0000000000000;
      dVar45 = UE::Math::TVector<double>::Component((TVector<double> *)&local_310._s_0,0);
      dVar46 = UE::Math::TVector<double>::Component
                         ((TVector<double> *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48),2);
      dVar47 = UE::Math::TVector<double>::Component
                         ((TVector<double> *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48),1);
      dVar48 = UE::Math::TVector<double>::Component
                         ((TVector<double> *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x48),0);
      uVar55 = (undefined4)local_2a0;
      uVar56 = (undefined4)((ulonglong)local_2a0 >> 0x20);
      dVar33 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x68);
      dVar34 = *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x60);
      *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x70) =
           ((dVar43 + dVar35) - dVar46) * dVar41 +
           *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x70);
      uVar57 = SUB84(__real_3fe0000000000000,0);
      uVar58 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x68) =
           ((dVar44 + dVar36) - dVar47) * dVar42 + dVar33;
      uVar52 = _UNK_150a9e64c;
      uVar50 = _UNK_150a9e648;
      uVar51 = _UNK_150a9e644;
      uVar49 = ___xmm_7fefffffffffffff7fefffffffffffff;
      *(double *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x60) =
           ((dVar45 + (dVar39 - dVar40) * dVar37) - dVar48) * dVar38 + dVar34;
    }
    iVar30 = iVar30 + 1;
    pFVar29 = pFVar29 + 1;
    uVar25 = (ulonglong)local_res20;
  }
  if ((local_2d0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2d0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2d0 & 4) != 0) {
    FThreadStats::AddMessage(local_2d8,CycleScopeEnd);
  }
  this->NumProcessedThisSlice = local_2e0;
  local_2d0 = 0;
  FVar23 = Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice;
  if (Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar22 = ::FName::FName(local_158,"STAT_AABBTreeInitialTimeSlice");
    FVar23 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice,
                        *pFVar22,L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar23;
  bVar16 = false;
  bVar13 = false;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_148c109fd:
    bVar12 = false;
    FVar28 = local_2b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2dc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2dc._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar16 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_2b8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                   ,0xd1c);
        bVar16 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c109fd;
    local_res10 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar12 = true;
  }
  pTVar3 = &this->WorkStack;
  *(undefined8 *)(pFVar8 + (longlong)(int)uVar18 * 0xf8 + 0x78) = 0;
  pFVar8 = (pTVar3->AllocatorInstance).Data;
  piVar1 = &(this->WorkStack).ArrayMax;
  if (((pFVar8 <= (FScriptContainerElement *)local_318) &&
      ((FScriptContainerElement *)local_318 < pFVar8 + (longlong)*piVar1 * 4)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar30 = (this->WorkStack).ArrayNum;
  if (iVar30 == *piVar1) {
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->WorkStack).ArrayNum = iVar30 + 1;
  *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar30 * 4) = local_318[0];
  SplitNode(this);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar12) && (FVar28 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_260.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_260.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_288);
      local_260.StatData.Pad[4] = '\0';
      local_260.StatData.Pad[5] = '\0';
      local_260.StatData.Pad[6] = '\0';
      local_260.StatData.Pad[7] = '\0';
      local_260.StatData.Pad[0] = local_288.s.LowPart._0_1_;
      local_260.StatData.Pad[1] = local_288.s.LowPart._1_1_;
      local_260.StatData.Pad[2] = local_288.s.LowPart._2_1_;
      local_260.StatData.Pad[3] = local_288.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_260);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_148c10b7c:
  if ((local_2c0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2c0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2c0 & 4) != 0) {
    FThreadStats::AddMessage(local_2c8,CycleScopeEnd);
  }
  return;
}

// OverlapCached<2,Chaos::TSpatialVisitor<int,double>_> @ 148c14030

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::OverlapCached<2,Chaos::TSpatialVisitor<int,double>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TAABB<double,3> *param_1,TSpatialVisitor<int,double> *param_2,bool *param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  FAABBTreePayloadInfo *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  
  *param_3 = true;
  lVar8 = (**(code **)((longlong)*param_2->Visitor + 0x38))();
  if (lVar8 != 0) {
    piVar9 = (int *)(**(code **)((longlong)*param_2->Visitor + 0x38))();
    pFVar10 = TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Find(&this->PayloadToInfo,piVar9);
    if (pFVar10 != (FAABBTreePayloadInfo *)0x0) {
      uVar1 = pFVar10->LeafIdx;
      if ((uVar1 == 0xffffffff) ||
         (iVar2 = (this->OverlappingOffsets).ArrayNum, iVar2 + -1 <= (int)uVar1)) {
        return false;
      }
      uVar11 = 0;
      if ((int)uVar1 < iVar2) {
        uVar11 = ~uVar1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar12 = (ulonglong)
               *(int *)((this->OverlappingOffsets).AllocatorInstance.Data + (longlong)(int)uVar1 * 4
                       );
      lVar8 = uVar12 * 4;
      while( true ) {
        uVar11 = 0;
        if ((int)(uVar1 + 1) < (this->OverlappingOffsets).ArrayNum) {
          uVar11 = ~(uVar1 + 1) >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar11 = (uint)uVar12;
        if (*(int *)((this->OverlappingOffsets).AllocatorInstance.Data +
                    (longlong)(int)uVar1 * 4 + 4) <= (int)uVar11) {
          return true;
        }
        uVar6 = 0;
        if ((int)uVar11 < (this->OverlappingLeaves).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) break;
        uVar6 = *(uint *)((this->OverlappingLeaves).AllocatorInstance.Data + lVar8);
        uVar7 = 0;
        if ((int)uVar6 < *(int *)&(this->Leaves).field_0x8) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar4 = TAABBTreeLeafArray<int,0,double>::OverlapFast<Chaos::TSpatialVisitor<int,double>_>
                          ((TAABBTreeLeafArray<int,0,double> *)
                           (*(longlong *)&this->Leaves + (longlong)(int)uVar6 * 0x18),param_1,
                           param_2);
        if (!bVar4) {
          *param_3 = false;
          return true;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        lVar8 = lVar8 + 4;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_> @ 148c15240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TVector<double,3> *param_1,FQueryFastData *param_2,TVector<double,3> *param_3,
          TAABB<double,3> *param_4,TSpatialVisitor<int,double> *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,bool *param_8)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool *pbVar10;
  bool *pbVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  bool bVar17;
  bool *pbVar18;
  char cVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  uint uVar23;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  FVar24;
  longlong lVar25;
  longlong lVar26;
  void *_Dst;
  int iVar27;
  longlong lVar28;
  double *pdVar29;
  FScriptContainerElement *pFVar30;
  bool *pbVar31;
  undefined4 *puVar32;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar33;
  TVector<double,3> *pTVar34;
  undefined4 *puVar35;
  FScriptContainerElement *pFVar36;
  FQueryFastData *pFVar37;
  FScriptContainerElement *pFVar38;
  TVector<double,3> *pTVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  bool *pbVar44;
  bool *pbVar45;
  bool *pbVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStackY_1468 [32];
  undefined1 local_1418;
  undefined1 local_1417 [7];
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_1410;
  bool *local_1408;
  FQueryFastData *local_1400;
  TVector<double,3> *local_13f8;
  TVector<double,3> *local_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  TVector<double,3> *local_13d8;
  TSpatialVisitor<int,double> *local_13d0;
  double local_13c8;
  double dStack_13c0;
  TVector<double>_u_0 local_13b8;
  double local_13a0 [6];
  double local_1370 [3];
  TVector<double>_u_0 local_1358;
  undefined4 local_1340;
  undefined4 uStack_133c;
  undefined8 uStack_1338;
  undefined4 local_1330;
  undefined4 uStack_132c;
  undefined8 uStack_1328;
  undefined4 local_1320;
  undefined4 uStack_131c;
  undefined8 uStack_1318;
  undefined4 local_1310;
  undefined4 uStack_130c;
  undefined8 uStack_1308;
  TVector<double>_u_0 local_12f8;
  double local_12d8 [6];
  double local_12a8 [4];
  double local_1288 [4];
  double local_1268 [4];
  double local_1248 [4];
  undefined4 local_1228;
  undefined1 local_1224;
  double local_1220;
  double dStack_1218;
  double local_1210;
  double local_1208;
  double dStack_1200;
  double local_11f8;
  undefined4 local_11f0;
  undefined1 local_11ec;
  double local_11e8;
  double dStack_11e0;
  double local_11d8;
  undefined4 local_11d0;
  undefined4 uStack_11cc;
  undefined4 uStack_11c8;
  undefined4 uStack_11c4;
  double local_11c0;
  double local_11b8;
  double dStack_11b0;
  double local_11a8;
  double local_11a0;
  double dStack_1198;
  double local_1190;
  double local_1188;
  double dStack_1180;
  double local_1178;
  double local_1170;
  double dStack_1168;
  double local_1160;
  double local_1158;
  double dStack_1150;
  double local_1148;
  double local_1140;
  double dStack_1138;
  double local_1130;
  double local_1128;
  double dStack_1120;
  double local_1118;
  double local_1110;
  double dStack_1108;
  double local_1100;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  local_10f8;
  int local_100;
  int local_fc;
  ulonglong local_f8;
  undefined8 local_48;
  
  pbVar18 = __real_7fefffffffffffff;
  local_48 = 0x148c1525f;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_1468;
  pFVar30 = (this->GlobalPayloads).AllocatorInstance.Data;
  iVar22 = (this->GlobalPayloads).ArrayNum;
  pFVar36 = pFVar30 + 0x20;
  pFVar38 = pFVar30 + (longlong)iVar22 * 0x38;
  local_13d0 = param_5;
  local_13e8 = param_6;
  local_13d8 = param_7;
  local_1408 = param_8;
  local_1410 = this;
  local_1400 = param_2;
  local_13f8 = param_1;
  local_13f0 = param_3;
  while( true ) {
    pTVar33 = local_1410;
    if ((local_1410->GlobalPayloads).ArrayNum != iVar22) {
      local_1418 = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1418);
    }
    pTVar34 = local_13f0;
    pTVar39 = local_13f8;
    pFVar37 = local_1400;
    pbVar10 = local_1408;
    if (pFVar30 == pFVar38) break;
    dVar12 = *(double *)(pFVar36 + -0x18);
    dVar13 = *(double *)(pFVar36 + -0x10);
    iVar27 = 0;
    dVar14 = *(double *)pFVar36;
    dVar15 = *(double *)(pFVar36 + 8);
    local_13c8 = *(double *)(pFVar36 + 0x10);
    local_12f8._s_0.X = (double)*(undefined8 *)local_13d8;
    local_12f8._s_0.Y = (double)*(undefined8 *)&local_13d8->field_0x8;
    dVar2 = *(double *)(pFVar36 + -8);
    local_12f8._s_0.Z = (double)*(undefined8 *)&local_13d8->field_0x10;
    dVar3 = local_1400->CurrentLength;
    local_1358._s_0.X = (dVar12 - *(double *)local_13f0) - *(double *)local_13f8;
    local_13b8._s_0.X = (*(double *)local_13f0 + dVar14) - *(double *)local_13f8;
    local_1358._s_0.Y =
         (dVar13 - *(double *)&local_13f0->field_0x8) - *(double *)&local_13f8->field_0x8;
    local_1358._s_0.Z =
         (dVar2 - *(double *)&local_13f0->field_0x10) - *(double *)&local_13f8->field_0x10;
    local_13b8._s_0.Z =
         (*(double *)&local_13f0->field_0x10 + local_13c8) - *(double *)&local_13f8->field_0x10;
    local_13b8._s_0.Y =
         (*(double *)&local_13f0->field_0x8 + dVar15) - *(double *)&local_13f8->field_0x8;
    pbVar31 = local_1408;
    pbVar10 = (bool *)0x0;
    pbVar11 = pbVar18;
    local_11b8 = dVar12;
    dStack_11b0 = dVar13;
    local_11a8 = dVar2;
    local_11a0 = dVar14;
    dStack_1198 = dVar15;
    local_1190 = local_13c8;
    do {
      if (*pbVar31 == false) {
        dVar8 = UE::Math::TVector<double>::Component((TVector<double> *)&local_1358._s_0,iVar27);
        dVar9 = UE::Math::TVector<double>::Component((TVector<double> *)&local_12f8._s_0,iVar27);
        pbVar46 = (bool *)(dVar9 * dVar8);
        dVar8 = UE::Math::TVector<double>::Component((TVector<double> *)&local_13b8._s_0,iVar27);
        dVar9 = UE::Math::TVector<double>::Component((TVector<double> *)&local_12f8._s_0,iVar27);
        pbVar45 = (bool *)(dVar9 * dVar8);
        pbVar44 = pbVar46;
        if ((double)pbVar45 < (double)pbVar46) {
          pbVar44 = pbVar45;
          pbVar45 = pbVar46;
        }
      }
      else {
        dVar8 = UE::Math::TVector<double>::Component((TVector<double> *)&local_1358._s_0,iVar27);
        if ((0.0 < dVar8) ||
           (dVar8 = UE::Math::TVector<double>::Component((TVector<double> *)&local_13b8._s_0,iVar27)
           , dVar8 < 0.0)) goto LAB_148c1556b;
        pbVar44 = (bool *)0x0;
        pbVar45 = pbVar18;
      }
      if ((double)pbVar44 <= (double)pbVar10) {
        pbVar44 = pbVar10;
      }
      if ((double)pbVar11 <= (double)pbVar45) {
        pbVar45 = pbVar11;
      }
      if ((double)pbVar45 < (double)pbVar44) goto LAB_148c1556b;
      iVar27 = iVar27 + 1;
      pbVar31 = pbVar31 + 1;
      pbVar10 = pbVar44;
      pbVar11 = pbVar45;
    } while (iVar27 < 3);
    if (((double)pbVar44 <= dVar3) && (0.0 <= (double)pbVar45)) {
      local_1228 = *(undefined4 *)pFVar30;
      local_1224 = 1;
      local_11f8 = local_13c8;
      local_1220 = dVar12;
      dStack_1218 = dVar13;
      local_1210 = dVar2;
      local_1208 = dVar14;
      dStack_1200 = dVar15;
      cVar19 = (**(code **)((longlong)*local_13d0->Visitor + 0x18))
                         (local_13d0->Visitor,&local_1228,local_1400);
      if (cVar19 == '\0') {
        return false;
      }
    }
LAB_148c1556b:
    pFVar30 = pFVar30 + 0x38;
    pFVar36 = pFVar36 + 0x38;
  }
  pTVar6 = (pTVar33->DirtyElementTree).Ptr;
  if ((pTVar6 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  *)0x0) &&
     (bVar20 = QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>
                         (pTVar6,local_13f8,local_1400,local_13f0,param_4,local_13d0,local_13e8,
                          local_13d8,local_1408), !bVar20)) {
    return false;
  }
  local_fc = 0xff;
  local_10f8.SecondaryData =
       (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
        )0x0;
  local_100 = 0;
  if (pTVar33->bDynamicTree == false) {
    if ((pTVar33->Nodes).ArrayNum == 0) goto LAB_148c15f13;
    local_13e8 = (TVector<double,3> *)((ulonglong)local_13e8._4_4_ << 0x20);
  }
  else {
    if (pTVar33->RootNode == -1) goto LAB_148c15f13;
    local_13e8 = (TVector<double,3> *)CONCAT44(local_13e8._4_4_,pTVar33->RootNode);
  }
  local_100 = 1;
  uStack_13e0 = 0;
  uVar47 = SUB84(local_13e8,0);
  uVar48 = (undefined4)((ulonglong)local_13e8 >> 0x20);
  local_10f8.InlineData._0_8_ = local_13e8;
  local_10f8.InlineData[8] = '\0';
  local_10f8.InlineData[9] = '\0';
  local_10f8.InlineData[10] = '\0';
  local_10f8.InlineData[0xb] = '\0';
  local_10f8.InlineData[0xc] = '\0';
  local_10f8.InlineData[0xd] = '\0';
  local_10f8.InlineData[0xe] = '\0';
  local_10f8.InlineData[0xf] = '\0';
  do {
    lVar28 = 0;
    if ((local_100 < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar7 = (code *)swi(3);
      uVar21 = (*pcVar7)();
      return (bool)uVar21;
    }
    FVar24 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_10f8;
    if (local_10f8.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar24 = local_10f8.SecondaryData;
    }
    lVar26 = (longlong)(local_100 + -1) * 0x10;
    puVar1 = (undefined8 *)(lVar26 + (longlong)FVar24);
    dVar2 = (double)puVar1[1];
    uVar5 = (uint)*puVar1;
    FVar24 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_10f8;
    if (local_10f8.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar24 = local_10f8.SecondaryData;
    }
    _Dst = (void *)(lVar26 + (longlong)FVar24);
    iVar22 = (local_100 - (local_100 + -1)) + -1;
    if (iVar22 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar22 << 4);
    }
    local_100 = local_100 + -1;
    if (dVar2 < pFVar37->CurrentLength || dVar2 == pFVar37->CurrentLength) {
      uVar23 = 0;
      if ((int)uVar5 < (pTVar33->Nodes).ArrayNum) {
        uVar23 = ~uVar5 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        uVar21 = (*pcVar7)();
        return (bool)uVar21;
      }
      pTVar6 = local_1410;
      pFVar36 = (pTVar33->Nodes).AllocatorInstance.Data;
      lVar26 = (longlong)(int)uVar5 * 0x70;
      if (((byte)pFVar36[lVar26 + 0x6c] & 1) == 0) {
        local_1158 = *(double *)(pFVar36 + lVar26);
        dStack_1150 = *(double *)(pFVar36 + lVar26 + 8);
        local_1140 = *(double *)(pFVar36 + lVar26 + 0x18);
        dStack_1138 = *(double *)(pFVar36 + lVar26 + 0x18 + 8);
        local_1148 = *(double *)(pFVar36 + lVar26 + 0x10);
        local_1130 = *(double *)(pFVar36 + lVar26 + 0x28);
        dVar2 = *(double *)&pTVar39->field_0x10;
        local_1268[0] = *(double *)local_13d8;
        local_1268[1] = (double)*(undefined8 *)&local_13d8->field_0x8;
        local_1268[2] = (double)*(undefined8 *)&local_13d8->field_0x10;
        local_12d8[4] =
             (dStack_1150 - *(double *)&pTVar34->field_0x8) - *(double *)&pTVar39->field_0x8;
        local_12d8[3] = (local_1158 - *(double *)pTVar34) - *(double *)pTVar39;
        local_13a0[3] = (*(double *)pTVar34 + local_1140) - *(double *)pTVar39;
        local_12d8[5] = (local_1148 - *(double *)&pTVar34->field_0x10) - dVar2;
        local_13a0[5] = (*(double *)&pTVar34->field_0x10 + local_1130) - dVar2;
        local_13a0[4] =
             (*(double *)&pTVar34->field_0x8 + dStack_1138) - *(double *)&pTVar39->field_0x8;
        lVar25 = lVar28;
        pbVar31 = (bool *)0x0;
        pbVar11 = pbVar18;
        do {
          if (pbVar10[lVar25] == false) {
            pbVar44 = (bool *)(local_12d8[lVar25 + 3] * local_1268[lVar25]);
            pbVar46 = (bool *)(local_1268[lVar25] * local_13a0[lVar25 + 3]);
            pbVar45 = pbVar44;
            if ((double)pbVar46 < (double)pbVar44) {
              pbVar45 = pbVar46;
              pbVar46 = pbVar44;
            }
          }
          else {
            if ((0.0 < local_12d8[lVar25 + 3]) ||
               (local_13a0[lVar25 + 3] <= 0.0 && local_13a0[lVar25 + 3] != 0.0)) goto LAB_148c15b4f;
            pbVar45 = (bool *)0x0;
            pbVar46 = pbVar18;
          }
          if ((double)pbVar45 <= (double)pbVar31) {
            pbVar45 = pbVar31;
          }
          if ((double)pbVar11 <= (double)pbVar46) {
            pbVar46 = pbVar11;
          }
          if ((double)pbVar46 < (double)pbVar45) goto LAB_148c15b4f;
          lVar25 = lVar25 + 1;
          pbVar31 = pbVar45;
          pbVar11 = pbVar46;
        } while (lVar25 < 3);
        if ((pFVar37->CurrentLength <= (double)pbVar45 && (double)pbVar45 != pFVar37->CurrentLength)
           || ((double)pbVar46 < 0.0)) {
LAB_148c15b4f:
          bVar20 = false;
        }
        else {
          bVar20 = true;
          uVar47 = (int)pbVar45;
          uVar48 = (int)((ulonglong)pbVar45 >> 0x20);
        }
        local_1128 = *(double *)(pFVar36 + lVar26 + 0x30);
        dStack_1120 = *(double *)(pFVar36 + lVar26 + 0x30 + 8);
        local_1110 = *(double *)(pFVar36 + lVar26 + 0x48);
        dStack_1108 = *(double *)(pFVar36 + lVar26 + 0x48 + 8);
        local_1118 = *(double *)(pFVar36 + lVar26 + 0x40);
        local_1100 = *(double *)(pFVar36 + lVar26 + 0x58);
        local_1248[0] = *(double *)local_13d8;
        local_1248[1] = (double)*(undefined8 *)&local_13d8->field_0x8;
        local_1248[2] = (double)*(undefined8 *)&local_13d8->field_0x10;
        local_12a8[1] =
             (dStack_1120 - *(double *)&pTVar34->field_0x8) - *(double *)&pTVar39->field_0x8;
        local_12a8[0] = (local_1128 - *(double *)pTVar34) - *(double *)pTVar39;
        local_1370[0] = (*(double *)pTVar34 + local_1110) - *(double *)pTVar39;
        local_12a8[2] = (local_1118 - *(double *)&pTVar34->field_0x10) - dVar2;
        local_1370[2] = (*(double *)&pTVar34->field_0x10 + local_1100) - dVar2;
        local_1370[1] =
             (*(double *)&pTVar34->field_0x8 + dStack_1108) - *(double *)&pTVar39->field_0x8;
        pbVar31 = (bool *)0x0;
        pbVar11 = pbVar18;
        do {
          if (pbVar10[lVar28] == false) {
            pbVar44 = (bool *)(local_12d8[lVar28 + 6] * local_1248[lVar28]);
            pbVar46 = (bool *)(local_1248[lVar28] * local_13a0[lVar28 + 6]);
            pbVar45 = pbVar44;
            if ((double)pbVar46 < (double)pbVar44) {
              pbVar45 = pbVar46;
              pbVar46 = pbVar44;
            }
          }
          else {
            if ((0.0 < local_12d8[lVar28 + 6]) ||
               (local_13a0[lVar28 + 6] <= 0.0 && local_13a0[lVar28 + 6] != 0.0)) goto LAB_148c15cb4;
            pbVar45 = (bool *)0x0;
            pbVar46 = pbVar18;
          }
          if ((double)pbVar45 <= (double)pbVar31) {
            pbVar45 = pbVar31;
          }
          if ((double)pbVar11 <= (double)pbVar46) {
            pbVar46 = pbVar11;
          }
          uVar40 = SUB84(pbVar45,0);
          uVar41 = (undefined4)((ulonglong)pbVar45 >> 0x20);
          if ((double)pbVar46 < (double)pbVar45) goto LAB_148c15cb4;
          lVar28 = lVar28 + 1;
          pbVar31 = pbVar45;
          pbVar11 = pbVar46;
        } while (lVar28 < 3);
        if ((pFVar37->CurrentLength <= (double)pbVar45 && (double)pbVar45 != pFVar37->CurrentLength)
           || ((double)pbVar46 < 0.0)) {
LAB_148c15cb4:
          uVar40 = SUB84(local_1408,0);
          uVar41 = (undefined4)((ulonglong)local_1408 >> 0x20);
          bVar17 = false;
        }
        else {
          bVar17 = true;
          local_1408 = pbVar45;
        }
        if (bVar20) {
          if (!bVar17) {
            local_1320 = *(undefined4 *)(pFVar36 + lVar26 + 0x60);
            uStack_1318 = CONCAT44(uVar48,uVar47);
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            uVar40 = local_1320;
            uVar41 = uStack_131c;
            uVar42 = (undefined4)uStack_1318;
            uVar43 = uStack_1318._4_4_;
            iVar22 = local_100;
            goto LAB_148c15ec6;
          }
          if ((double)CONCAT44(uVar41,uVar40) < (double)CONCAT44(uVar48,uVar47) ||
              (double)CONCAT44(uVar41,uVar40) == (double)CONCAT44(uVar48,uVar47)) {
            local_1340 = *(undefined4 *)(pFVar36 + lVar26 + 0x60);
            uStack_1338 = CONCAT44(uVar48,uVar47);
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            uStack_1328 = CONCAT44(uVar41,uVar40);
            FVar24 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar24 = local_10f8.SecondaryData;
            }
            puVar1 = (undefined8 *)((longlong)FVar24 + (longlong)local_100 * 0x10);
            local_100 = local_100 + 1;
            *puVar1 = CONCAT44(uStack_133c,local_1340);
            puVar1[1] = uStack_1338;
            local_1330 = *(undefined4 *)(pFVar36 + lVar26 + 100);
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            lVar28 = (longlong)local_100;
            local_100 = local_100 + 1;
            FVar24 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar24 = local_10f8.SecondaryData;
            }
            puVar1 = (undefined8 *)((longlong)FVar24 + lVar28 * 0x10);
            *puVar1 = CONCAT44(uStack_132c,local_1330);
            puVar1[1] = uStack_1328;
            pTVar33 = local_1410;
          }
          else {
            local_13e8 = (TVector<double,3> *)
                         CONCAT44(local_13e8._4_4_,*(undefined4 *)(pFVar36 + lVar26 + 100));
            uStack_13e0 = CONCAT44(uVar41,uVar40);
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            FVar24 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar24 = local_10f8.SecondaryData;
            }
            dStack_13c0 = (double)CONCAT44(uVar48,uVar47);
            puVar1 = (undefined8 *)((longlong)FVar24 + (longlong)local_100 * 0x10);
            local_100 = local_100 + 1;
            *puVar1 = local_13e8;
            puVar1[1] = uStack_13e0;
            local_13c8 = (double)CONCAT44(local_13c8._4_4_,*(undefined4 *)(pFVar36 + lVar26 + 0x60))
            ;
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            lVar28 = (longlong)local_100;
            local_100 = local_100 + 1;
            FVar24 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar24 = local_10f8.SecondaryData;
            }
            pdVar29 = (double *)((longlong)FVar24 + lVar28 * 0x10);
            *pdVar29 = local_13c8;
            pdVar29[1] = dStack_13c0;
            pTVar33 = local_1410;
          }
        }
        else {
          pTVar33 = local_1410;
          if (bVar17) {
            local_1310 = *(undefined4 *)(pFVar36 + lVar26 + 100);
            uStack_1308 = CONCAT44(uVar41,uVar40);
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            uVar40 = local_1310;
            uVar41 = uStack_130c;
            uVar42 = (undefined4)uStack_1308;
            uVar43 = uStack_1308._4_4_;
            iVar22 = local_100;
LAB_148c15ec6:
            local_100 = iVar22 + 1;
            FVar24 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar24 = local_10f8.SecondaryData;
            }
            puVar32 = (undefined4 *)((longlong)FVar24 + (longlong)iVar22 * 0x10);
            *puVar32 = uVar40;
            puVar32[1] = uVar41;
            puVar32[2] = uVar42;
            puVar32[3] = uVar43;
            pTVar33 = local_1410;
          }
        }
      }
      else {
        uVar5 = *(uint *)(pFVar36 + lVar26 + 0x60);
        lVar28 = (longlong)(int)uVar5;
        uVar23 = 0;
        if ((int)uVar5 < *(int *)&(local_1410->Leaves).field_0x8) {
          uVar23 = ~uVar5 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar7 = (code *)swi(3);
          uVar21 = (*pcVar7)();
          return (bool)uVar21;
        }
        lVar26 = *(longlong *)&pTVar6->Leaves;
        puVar32 = *(undefined4 **)(lVar26 + lVar28 * 0x18);
        iVar22 = *(int *)(lVar26 + 8 + lVar28 * 0x18);
        dVar2 = *(double *)local_13d8;
        uVar16 = *(undefined8 *)&local_13d8->field_0x8;
        uVar4 = *(undefined8 *)&local_13d8->field_0x10;
        pdVar29 = (double *)(puVar32 + 8);
        puVar35 = puVar32 + (longlong)iVar22 * 0xe;
        while( true ) {
          if (*(int *)(lVar26 + 8 + lVar28 * 0x18) != iVar22) {
            local_1417[0] = 0;
            `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_1417);
          }
          pTVar33 = local_1410;
          pFVar37 = local_1400;
          if (puVar32 == puVar35) break;
          local_1188 = pdVar29[-3];
          dStack_1180 = pdVar29[-2];
          local_1170 = *pdVar29;
          dStack_1168 = pdVar29[1];
          local_1178 = pdVar29[-1];
          local_1160 = pdVar29[2];
          local_1288[0] = dVar2;
          local_1288[1] = (double)uVar16;
          local_12d8[0] = (local_1188 - *(double *)local_13f0) - *(double *)local_13f8;
          local_13a0[0] = (*(double *)local_13f0 + local_1170) - *(double *)local_13f8;
          local_12d8[1] =
               (dStack_1180 - *(double *)&local_13f0->field_0x8) - *(double *)&local_13f8->field_0x8
          ;
          local_12d8[2] =
               (local_1178 - *(double *)&local_13f0->field_0x10) -
               *(double *)&local_13f8->field_0x10;
          local_1288[2] = (double)uVar4;
          lVar25 = 0;
          local_13a0[2] =
               (*(double *)&local_13f0->field_0x10 + local_1160) -
               *(double *)&local_13f8->field_0x10;
          local_13a0[1] =
               (*(double *)&local_13f0->field_0x8 + dStack_1168) - *(double *)&local_13f8->field_0x8
          ;
          pbVar31 = (bool *)0x0;
          pbVar11 = pbVar18;
          do {
            if (pbVar10[lVar25] == false) {
              pbVar44 = (bool *)(local_1288[lVar25] * local_13a0[lVar25]);
              pbVar46 = (bool *)(local_1288[lVar25] * local_12d8[lVar25]);
              pbVar45 = pbVar44;
              if ((double)pbVar44 < (double)pbVar46) {
                pbVar45 = pbVar46;
                pbVar46 = pbVar44;
              }
            }
            else {
              if ((0.0 < local_12d8[lVar25]) ||
                 (local_13a0[lVar25] <= 0.0 && local_13a0[lVar25] != 0.0)) goto LAB_148c159cf;
              pbVar45 = pbVar18;
              pbVar46 = (bool *)0x0;
            }
            if ((double)pbVar46 <= (double)pbVar31) {
              pbVar46 = pbVar31;
            }
            if ((double)pbVar11 <= (double)pbVar45) {
              pbVar45 = pbVar11;
            }
            if ((double)pbVar45 < (double)pbVar46) goto LAB_148c159cf;
            lVar25 = lVar25 + 1;
            pbVar31 = pbVar46;
            pbVar11 = pbVar45;
          } while (lVar25 < 3);
          if (((double)pbVar46 < local_1400->CurrentLength ||
               (double)pbVar46 == local_1400->CurrentLength) && (0.0 <= (double)pbVar45)) {
            local_11f0 = *puVar32;
            local_11e8 = pdVar29[-3];
            dStack_11e0 = pdVar29[-2];
            local_11d8 = pdVar29[-1];
            local_11ec = 1;
            local_11d0 = *(undefined4 *)pdVar29;
            uStack_11cc = *(undefined4 *)((longlong)pdVar29 + 4);
            uStack_11c8 = *(undefined4 *)(pdVar29 + 1);
            uStack_11c4 = *(undefined4 *)((longlong)pdVar29 + 0xc);
            local_11c0 = local_1160;
            cVar19 = (**(code **)((longlong)*local_13d0->Visitor + 0x18))
                               (local_13d0->Visitor,&local_11f0,local_1400);
            if (cVar19 == '\0') {
              bVar20 = false;
              goto LAB_148c15f15;
            }
          }
LAB_148c159cf:
          puVar32 = puVar32 + 0xe;
          pdVar29 = pdVar29 + 7;
        }
      }
    }
    pTVar34 = local_13f0;
    pTVar39 = local_13f8;
  } while (local_100 != 0);
LAB_148c15f13:
  bVar20 = true;
LAB_148c15f15:
  if (local_10f8.SecondaryData !=
      (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
       )0x0) {
    FMemory::Free((void *)local_10f8.SecondaryData);
  }
  return bVar20;
}

// QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_> @ 148c16510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TVector<double,3> *param_1,FQueryFastDataVoid *param_2,TVector<double,3> *param_3,
          TAABB<double,3> *param_4,TSpatialVisitor<int,double> *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,bool *param_8)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  uint uVar4;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  code *pcVar5;
  TSpatialVisitor<int,double> *pTVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  FVar14;
  void *_Dst;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_01;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_1198 [32];
  bool local_1148;
  undefined1 local_1147 [7];
  TSpatialVisitor<int,double> *local_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_1128;
  bool *local_1120;
  TVector<double,3> *local_1118;
  TVector<double,3> *local_1110;
  double local_1108 [12];
  undefined4 local_10a8;
  undefined1 local_10a4;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined4 local_1088;
  undefined4 uStack_1084;
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  undefined8 local_1078;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  local_1070;
  int local_78;
  int local_74;
  ulonglong local_70;
  undefined8 uStack_48;
  
  uStack_48 = 0x148c1652f;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1198;
  pFVar16 = (this->GlobalPayloads).AllocatorInstance.Data;
  iVar12 = (this->GlobalPayloads).ArrayNum;
  local_1110 = param_6;
  pFVar15 = pFVar16 + 0x20;
  local_1118 = param_7;
  pFVar17 = pFVar16 + (longlong)iVar12 * 0x38;
  local_1140 = param_5;
  local_1120 = param_8;
  local_1138 = param_3;
  local_1128 = this;
  while( true ) {
    if ((local_1128->GlobalPayloads).ArrayNum != iVar12) {
      local_1147[0] = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1147);
    }
    this_01 = local_1128;
    if (pFVar16 == pFVar17) break;
    lVar13 = 0;
    local_1108[0] = *(double *)(pFVar15 + -0x18);
    local_1108[1] = (double)*(undefined8 *)(pFVar15 + -0x10);
    local_1108[2] = (double)*(undefined8 *)(pFVar15 + -8);
    local_1108[3] = (double)*(undefined8 *)pFVar15;
    local_1108[4] = (double)*(undefined8 *)(pFVar15 + 8);
    local_1108[5] = (double)*(undefined8 *)(pFVar15 + 0x10);
    do {
      dVar3 = *(double *)(&(param_4->MMin).field_0x0 + lVar13);
      pdVar2 = (double *)((longlong)local_1108 + lVar13 + 0x18);
      if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
         (*(double *)(&(param_4->MMax).field_0x0 + lVar13) <
          *(double *)((longlong)local_1108 + lVar13))) goto LAB_148c16652;
      lVar13 = lVar13 + 8;
    } while (lVar13 < 0x18);
    local_10a0 = *(undefined8 *)(pFVar15 + -0x18);
    uStack_1098 = *(undefined8 *)(pFVar15 + -0x10);
    local_1090 = *(undefined8 *)(pFVar15 + -8);
    local_10a8 = *(undefined4 *)pFVar16;
    local_1088 = *(undefined4 *)pFVar15;
    uStack_1084 = *(undefined4 *)(pFVar15 + 4);
    uStack_1080 = *(undefined4 *)(pFVar15 + 8);
    uStack_107c = *(undefined4 *)(pFVar15 + 0xc);
    local_10a4 = 1;
    local_1078 = *(undefined8 *)(pFVar15 + 0x10);
    cVar7 = (**(code **)((longlong)*local_1140->Visitor + 8))(local_1140->Visitor,&local_10a8);
    if (cVar7 == '\0') {
      return false;
    }
LAB_148c16652:
    pFVar16 = pFVar16 + 0x38;
    pFVar15 = pFVar15 + 0x38;
  }
  this_00 = (local_1128->DirtyElementTree).Ptr;
  if ((this_00 !=
       (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        *)0x0) &&
     (bVar8 = QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>
                        (this_00,param_1,param_2,local_1138,param_4,local_1140,local_1110,local_1118
                         ,local_1120), !bVar8)) {
    return false;
  }
  pTVar6 = local_1140;
  if ((this_01->bDynamicTree != false) && ((this_01->OverlappingLeaves).ArrayNum != 0)) {
    local_1148 = true;
    bVar8 = OverlapCached<2,Chaos::TSpatialVisitor<int,double>_>
                      (this_01,param_4,local_1140,&local_1148);
    if (bVar8) {
      return local_1148;
    }
  }
  local_1070.SecondaryData =
       (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
        )0x0;
  local_78 = 0;
  local_74 = 0xff;
  if (this_01->bDynamicTree == false) {
    if ((this_01->Nodes).ArrayNum == 0) goto LAB_148c169c3;
    local_1138 = (TVector<double,3> *)((ulonglong)local_1138._4_4_ << 0x20);
  }
  else {
    if (this_01->RootNode == -1) goto LAB_148c169c3;
    local_1138 = (TVector<double,3> *)CONCAT44(local_1138._4_4_,this_01->RootNode);
  }
  iVar12 = 1;
  local_78 = 1;
  bVar8 = false;
  local_1070.InlineData._0_8_ = local_1138;
  local_1070.InlineData[8] = '\0';
  local_1070.InlineData[9] = '\0';
  local_1070.InlineData[10] = '\0';
  local_1070.InlineData[0xb] = '\0';
  local_1070.InlineData[0xc] = '\0';
  local_1070.InlineData[0xd] = '\0';
  local_1070.InlineData[0xe] = '\0';
  local_1070.InlineData[0xf] = '\0';
  uStack_1130 = 0;
  do {
    if ((bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar12 = local_78, bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar14 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_1070;
    if (local_1070.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar14 = local_1070.SecondaryData;
    }
    lVar13 = (longlong)(iVar12 + -1) * 0x10;
    uVar4 = *(uint *)(lVar13 + (longlong)FVar14);
    FVar14 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_1070;
    if (local_1070.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar14 = local_1070.SecondaryData;
    }
    _Dst = (void *)(lVar13 + (longlong)FVar14);
    iVar10 = (iVar12 - (iVar12 + -1)) + -1;
    if (iVar10 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar10 << 4);
      iVar12 = local_78;
    }
    local_78 = iVar12 + -1;
    uVar11 = 0;
    if ((int)uVar4 < (this_01->Nodes).ArrayNum) {
      uVar11 = ~uVar4 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar16 = (this_01->Nodes).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x70;
    pFVar15 = pFVar16 + 0x60;
    pFVar17 = pFVar15;
    iVar12 = local_78;
    if (((byte)pFVar16[0x6c] & 1) == 0) {
      for (; pFVar16 != pFVar15; pFVar16 = pFVar16 + 0x30) {
        local_1108[6] = (double)*(undefined8 *)pFVar16;
        local_1108[7] = (double)*(undefined8 *)(pFVar16 + 8);
        local_1108[8] = (double)*(undefined8 *)(pFVar16 + 0x10);
        local_1108[9] = (double)*(undefined8 *)(pFVar16 + 0x18);
        local_1108[10] = (double)*(undefined8 *)(pFVar16 + 0x20);
        local_1108[0xb] = (double)*(undefined8 *)(pFVar16 + 0x28);
        lVar13 = 0;
        do {
          dVar3 = *(double *)(&(param_4->MMin).field_0x0 + lVar13);
          pdVar2 = (double *)((longlong)local_1108 + lVar13 + 0x48);
          if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
             (*(double *)(&(param_4->MMax).field_0x0 + lVar13) <
              *(double *)((longlong)local_1108 + lVar13 + 0x30))) goto LAB_148c169a4;
          lVar13 = lVar13 + 8;
        } while (lVar13 < 0x18);
        local_1138._4_4_ = (uint)((ulonglong)local_1138 >> 0x20);
        local_1138 = (TVector<double,3> *)CONCAT44(local_1138._4_4_,*(uint *)pFVar17);
        uStack_1130 = 0;
        if (iVar12 == local_74) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                             (0x810,&local_1070,&local_74);
        }
        local_78 = iVar12 + 1;
        FVar14 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                  )&local_1070;
        if (local_1070.SecondaryData !=
            (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
             )0x0) {
          FVar14 = local_1070.SecondaryData;
        }
        puVar1 = (undefined8 *)((longlong)FVar14 + (longlong)iVar12 * 0x10);
        *puVar1 = local_1138;
        puVar1[1] = uStack_1130;
        iVar12 = local_78;
LAB_148c169a4:
        pFVar17 = pFVar17 + 4;
        this_01 = local_1128;
      }
    }
    else {
      uVar4 = *(uint *)pFVar15;
      uVar11 = 0;
      if ((int)uVar4 < *(int *)&(this_01->Leaves).field_0x8) {
        uVar11 = ~uVar4 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      bVar8 = TAABBTreeLeafArray<int,0,double>::OverlapFast<Chaos::TSpatialVisitor<int,double>_>
                        ((TAABBTreeLeafArray<int,0,double> *)
                         (*(longlong *)&this_01->Leaves + (longlong)(int)uVar4 * 0x18),param_4,
                         pTVar6);
      iVar12 = local_78;
      if (!bVar8) {
        bVar8 = false;
        goto LAB_148c169c5;
      }
    }
    bVar8 = iVar12 < 0;
  } while (iVar12 != 0);
LAB_148c169c3:
  bVar8 = true;
LAB_148c169c5:
  if (local_1070.SecondaryData !=
      (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
       )0x0) {
    FMemory::Free((void *)local_1070.SecondaryData);
  }
  return bVar8;
}

// QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_> @ 148c16a20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TVector<double,3> *param_1,FQueryFastData *param_2,TVector<double,3> *param_3,
          TAABB<double,3> *param_4,TSpatialVisitor<int,double> *param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7,bool *param_8)

{
  undefined8 *puVar1;
  double dVar2;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  char cVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  undefined4 uVar18;
  longlong lVar19;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  FVar20;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ISpatialVisitor<int,double> *pIVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  void *_Dst;
  char *pcVar27;
  undefined1 *this_01;
  uint uVar28;
  double *pdVar29;
  TVector<double,3> *pTVar30;
  undefined4 *puVar31;
  undefined4 *puVar32;
  bool bVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar81;
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar88;
  double dVar95;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar96;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar109;
  TVector<double,3> *pTVar110;
  undefined1 auVar111 [16];
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  undefined1 auStackY_12e8 [32];
  undefined1 local_1280;
  undefined1 local_127f [15];
  undefined1 local_1270 [16];
  TVector<double,3> *local_1260;
  TVector<double,3> *local_1258;
  uint local_1250;
  TSpatialVisitor<int,double> *local_1248;
  undefined1 local_1240 [16];
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *local_1230;
  undefined4 local_1228;
  undefined4 uStack_1224;
  TVector<double,3> *pTStack_1220;
  double local_1218;
  double local_1210 [3];
  undefined4 local_11f8;
  undefined4 uStack_11f4;
  TVector<double,3> *pTStack_11f0;
  undefined4 local_11e8;
  undefined4 uStack_11e4;
  TVector<double,3> *pTStack_11e0;
  undefined4 local_11d8;
  undefined4 uStack_11d4;
  TVector<double,3> *pTStack_11d0;
  undefined4 local_11c8;
  undefined4 uStack_11c4;
  TVector<double,3> *pTStack_11c0;
  undefined4 local_11b8;
  undefined4 uStack_11b4;
  TVector<double,3> *pTStack_11b0;
  double local_11a8 [3];
  TVector<double,3> *local_1190 [4];
  undefined4 local_1170;
  undefined1 local_116c;
  double local_1168;
  double dStack_1160;
  double local_1158;
  double local_1150;
  double dStack_1148;
  double local_1140;
  undefined4 local_1138;
  undefined1 local_1134;
  double local_1130;
  double dStack_1128;
  double local_1120;
  double local_1118;
  double dStack_1110;
  double local_1108;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  local_1100;
  int local_108;
  int local_104;
  ulonglong local_100;
  undefined8 uVar55;
  
  dVar2 = __real_7fefffffffffffff;
  local_100 = __security_cookie.value ^ (ulonglong)auStackY_12e8;
  pTVar30 = (TVector<double,3> *)(this->GlobalPayloads).AllocatorInstance.Data;
  pdVar29 = (double *)&pTVar30[1].field_0x8;
  local_1240._0_8_ = param_4;
  local_1258 = param_6;
  local_1250 = (this->GlobalPayloads).ArrayNum;
  uVar26 = (ulonglong)(int)local_1250;
  local_1270._0_8_ = param_3;
  local_1260 = (TVector<double,3> *)((longlong)pTVar30 + uVar26 * 0x38);
  local_1248 = param_5;
  local_1230 = this;
  while( true ) {
    if ((this->GlobalPayloads).ArrayNum != (int)uVar26) {
      local_1280 = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1280);
    }
    pTVar110 = local_1258;
    if (pTVar30 == local_1260) break;
    lVar19 = 0;
    local_1190[2] = (TVector<double,3> *)*(undefined8 *)&param_7->field_0x10;
    local_1190[0] = *(TVector<double,3> **)param_7;
    local_1190[1] = (TVector<double,3> *)*(undefined8 *)&param_7->field_0x8;
    local_11a8[0] = pdVar29[-3] - *(double *)param_1;
    local_11a8[2] = pdVar29[-1] - *(double *)&param_1->field_0x10;
    local_1218 = pdVar29[2];
    local_11a8[1] = pdVar29[-2] - *(double *)&param_1->field_0x8;
    local_1210[2] = local_1218 - *(double *)&param_1->field_0x10;
    local_1210[1] = pdVar29[1] - *(double *)&param_1->field_0x8;
    local_1210[0] = *pdVar29 - *(double *)param_1;
    dVar82 = dVar2;
    dVar81 = 0.0;
    do {
      if (param_8[lVar19] == false) {
        dVar56 = (double)local_1190[lVar19] * local_1210[lVar19];
        dVar68 = (double)local_1190[lVar19] * local_11a8[lVar19];
        dVar96 = dVar56;
        if (dVar56 < dVar68) {
          dVar96 = dVar68;
          dVar68 = dVar56;
        }
      }
      else {
        if ((0.0 < local_11a8[lVar19]) || (local_1210[lVar19] <= 0.0 && local_1210[lVar19] != 0.0))
        goto LAB_148c16cb6;
        dVar96 = dVar2;
        dVar68 = 0.0;
      }
      if (dVar68 <= dVar81) {
        dVar68 = dVar81;
      }
      if (dVar82 <= dVar96) {
        dVar96 = dVar82;
      }
      if (dVar96 < dVar68) goto LAB_148c16cb6;
      lVar19 = lVar19 + 1;
      dVar82 = dVar96;
      dVar81 = dVar68;
    } while (lVar19 < 3);
    if ((dVar68 < param_2->CurrentLength || dVar68 == param_2->CurrentLength) && (0.0 <= dVar96)) {
      local_1168 = pdVar29[-3];
      dStack_1160 = pdVar29[-2];
      local_1158 = pdVar29[-1];
      local_1170 = *(undefined4 *)pTVar30;
      local_1150 = *pdVar29;
      dStack_1148 = pdVar29[1];
      local_116c = 1;
      local_1140 = pdVar29[2];
      cVar14 = (**(code **)((longlong)*local_1248->Visitor + 0x10))
                         (local_1248->Visitor,&local_1170,param_2);
      if (cVar14 == '\0') {
        return false;
      }
    }
LAB_148c16cb6:
    pTVar30 = (TVector<double,3> *)&pTVar30[2].field_0x8;
    pdVar29 = pdVar29 + 7;
    uVar26 = (ulonglong)local_1250;
  }
  this_00 = (this->DirtyElementTree).Ptr;
  if (this_00 !=
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    bVar15 = QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>
                       (this_00,param_1,param_2,(TVector<double,3> *)local_1270._0_8_,
                        (TAABB<double,3> *)local_1240._0_8_,local_1248,local_1258,param_7,param_8);
    if (!bVar15) {
      return false;
    }
  }
  local_104 = 0xff;
  bVar15 = false;
  iVar24 = 0;
  local_1100.SecondaryData =
       (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
        )0x0;
  local_108 = 0;
  if (this->bDynamicTree == false) {
    if ((this->Nodes).ArrayNum == 0) goto LAB_148c16d72;
    local_1270._0_8_ = local_1270._4_8_ << 0x20;
  }
  else {
    iVar24 = 0;
    if (this->RootNode == -1) goto LAB_148c16d72;
    local_1270._0_4_ = this->RootNode;
  }
  bVar15 = true;
  local_108 = 1;
  iVar24 = 1;
  local_1100.InlineData[0] = local_1270[0];
  local_1100.InlineData[1] = local_1270[1];
  local_1100.InlineData[2] = local_1270[2];
  local_1100.InlineData[3] = local_1270[3];
  local_1100.InlineData[4] = local_1270[4];
  local_1100.InlineData[5] = local_1270[5];
  local_1100.InlineData[6] = local_1270[6];
  local_1100.InlineData[7] = local_1270[7];
  local_1100.InlineData[8] = '\0';
  local_1100.InlineData[9] = '\0';
  local_1100.InlineData[10] = '\0';
  local_1100.InlineData[0xb] = '\0';
  local_1100.InlineData[0xc] = '\0';
  local_1100.InlineData[0xd] = '\0';
  local_1100.InlineData[0xe] = '\0';
  local_1100.InlineData[0xf] = '\0';
LAB_148c16d72:
  uVar26 = *(ulonglong *)&pTVar110->field_0x10;
  auVar90._8_8_ = 0;
  auVar90._0_8_ = uVar26;
  dVar2 = param_2->CurrentLength;
  uVar119 = SUB84(dVar2,0);
  uVar120 = (uint)((ulonglong)dVar2 >> 0x20);
  dVar82 = *(double *)&param_1->field_0x10;
  auVar38 = *(undefined1 (*) [16])pTVar110;
  bVar6 = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & (uint)(uVar26 >> 0x20),
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar26) <
          GlobalVectorConstants::DoubleSmallNumber.ZW.m128d_f64[0];
  dVar34 = (double)-(ulonglong)bVar6;
  dVar36 = (double)-(ulonglong)(0.0 < GlobalVectorConstants::DoubleSmallNumber.ZW.m128d_f64[1]);
  dVar35 = (double)-(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar38._4_4_,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar38._0_4_)
                    < GlobalVectorConstants::DoubleSmallNumber.XY.m128d_f64[0]);
  dVar37 = (double)-(ulonglong)
                    ((double)CONCAT44(_UNK_15061cc8c & auVar38._12_4_,_UNK_15061cc88 & auVar38._8_4_
                                     ) < GlobalVectorConstants::DoubleSmallNumber.XY.m128d_f64[1]);
  uVar115 = SUB84(dVar35,0);
  uVar116 = (uint)((ulonglong)dVar35 >> 0x20);
  uVar117 = SUB84(dVar37,0);
  uVar118 = (uint)((ulonglong)dVar37 >> 0x20);
  dVar68 = *(double *)param_1;
  dVar56 = *(double *)&param_1->field_0x8;
  auVar39._0_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[0];
  auVar39._8_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[1];
  auVar38 = divpd(auVar39,auVar38);
  auVar84._0_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[2];
  auVar84._8_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[3];
  dVar81 = (double)(float)(~(uint)(float)dVar35 & (uint)(float)auVar38._0_8_);
  dVar96 = (double)(float)(~(uint)(float)dVar37 & (uint)(float)auVar38._8_8_);
  auVar39 = divpd(auVar84,auVar90);
  local_1270._8_4_ = SUB84(dVar96,0);
  local_1270._0_8_ = dVar81;
  local_1270._12_4_ = (int)((ulonglong)dVar96 >> 0x20);
  auVar38._0_4_ = (float)auVar39._0_8_;
  auVar38._4_4_ = (float)auVar39._8_8_;
  auVar38._8_8_ = 0;
  local_1240._0_8_ = (undefined8)(float)(~(uint)(float)dVar34 & (uint)auVar38._0_4_);
  local_1240._8_8_ = (undefined8)(float)(~(uint)(float)dVar36 & (uint)auVar38._4_4_);
  if (bVar15) {
    bVar15 = iVar24 == 0;
    do {
      uVar55 = auVar38._8_8_;
      if (bVar15 || iVar24 < 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar55 = extraout_XMM0._8_8_;
        iVar24 = local_108;
        if (bVar15) {
          pcVar5 = (code *)swi(3);
          uVar16 = (*pcVar5)();
          return (bool)uVar16;
        }
      }
      FVar20 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                )&local_1100;
      if (local_1100.SecondaryData !=
          (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
           )0x0) {
        FVar20 = local_1100.SecondaryData;
      }
      lVar19 = (longlong)(iVar24 + -1) * 0x10;
      auVar39 = *(undefined1 (*) [16])(lVar19 + (longlong)FVar20);
      FVar20 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                )&local_1100;
      if (local_1100.SecondaryData !=
          (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
           )0x0) {
        FVar20 = local_1100.SecondaryData;
      }
      _Dst = (void *)(lVar19 + (longlong)FVar20);
      iVar17 = (iVar24 - (iVar24 + -1)) + -1;
      if (iVar17 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar17 << 4);
        uVar55 = extraout_XMM0_00._8_8_;
        iVar24 = local_108;
      }
      auVar13._4_8_ = uVar55;
      auVar13._0_4_ = auVar39._4_4_;
      auVar98._0_8_ = auVar13._0_8_ << 0x20;
      auVar98._8_4_ = auVar39._8_4_;
      auVar98._12_4_ = auVar39._12_4_;
      dVar88 = auVar98._8_8_;
      auVar38._8_8_ = auVar39._8_8_;
      auVar38._0_8_ = (ulonglong)dVar88;
      local_108 = iVar24 + -1;
      if (dVar88 < param_2->CurrentLength || dVar88 == param_2->CurrentLength) {
        uVar28 = auVar39._0_4_;
        uVar22 = ~uVar28 >> 0x1f;
        uVar25 = 0;
        if ((int)uVar28 < (this->Nodes).ArrayNum) {
          uVar25 = uVar22;
        }
        if (uVar25 == 0) {
          uVar22 = 0x506106c8;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          auVar38 = extraout_XMM0_01;
          if (bVar15) {
            pcVar5 = (code *)swi(3);
            uVar16 = (*pcVar5)();
            return (bool)uVar16;
          }
        }
        pFVar3 = (this->Nodes).AllocatorInstance.Data;
        lVar19 = (longlong)(int)uVar28 * 0x70;
        uVar25 = SUB84(dVar34,0);
        uVar112 = (uint)((ulonglong)dVar34 >> 0x20);
        uVar113 = SUB84(dVar36,0);
        uVar114 = (uint)((ulonglong)dVar36 >> 0x20);
        if (((byte)pFVar3[lVar19 + 0x6c] & 1) == 0) {
          dVar88 = *(double *)(pFVar3 + lVar19 + 0x18);
          dVar95 = *(double *)(pFVar3 + lVar19 + 0x20);
          auVar111._8_4_ = SUB84(dVar95,0);
          auVar111._0_8_ = dVar88;
          auVar111._12_4_ = (int)((ulonglong)dVar95 >> 0x20);
          auVar73._8_8_ = -(ulonglong)(auVar111._8_8_ < dVar56);
          auVar73._0_8_ = -(ulonglong)(dVar88 < dVar68);
          auVar105._8_8_ = -(ulonglong)(dVar56 < *(double *)(pFVar3 + lVar19 + 8));
          auVar105._0_8_ = -(ulonglong)(dVar68 < *(double *)(pFVar3 + lVar19));
          auVar73 = auVar73 | auVar105;
          auVar108._0_8_ =
               -(ulonglong)
                ((dVar82 < *(double *)(pFVar3 + lVar19 + 0x10) ||
                 *(double *)(pFVar3 + lVar19 + 0x28) < dVar82) && bVar6);
          auVar108._8_8_ = 0;
          auVar74._0_4_ = auVar73._0_4_ & uVar115;
          auVar74._4_4_ = auVar73._4_4_ & uVar116;
          auVar74._8_4_ = auVar73._8_4_ & uVar117;
          auVar74._12_4_ = auVar73._12_4_ & uVar118;
          iVar24 = movmskpd(uVar22,auVar108);
          uVar22 = movmskpd(uVar28,auVar74);
          uVar28 = iVar24 << 2 | uVar22;
          if (uVar28 == 0) {
            dVar109 = (*(double *)(pFVar3 + lVar19 + 0x28) - dVar82) * (double)local_1240._0_8_;
            dVar88 = (dVar88 - dVar68) * dVar81;
            dVar95 = (dVar95 - dVar56) * dVar96;
            auVar106._0_8_ =
                 (double)(float)(~(uint)(float)dVar35 &
                                (uint)(float)((*(double *)(pFVar3 + lVar19) - dVar68) * dVar81));
            auVar106._8_8_ =
                 (double)(float)(~(uint)(float)dVar37 &
                                (uint)(float)((*(double *)(pFVar3 + lVar19 + 8) - dVar56) * dVar96))
            ;
            auVar61._0_4_ = ~uVar25 & SUB84(dVar109,0);
            auVar61._4_4_ = ~uVar112 & (uint)((ulonglong)dVar109 >> 0x20);
            auVar61._8_4_ = ~uVar113 & SUB84((double)local_1240._8_8_ * 0.0,0);
            auVar61._12_4_ = ~uVar114 & (uint)((ulonglong)((double)local_1240._8_8_ * 0.0) >> 0x20);
            auVar100._0_8_ =
                 (double)(float)(~(uint)(float)dVar34 &
                                (uint)(float)((*(double *)(pFVar3 + lVar19 + 0x10) - dVar82) *
                                             (double)local_1240._0_8_));
            auVar100._8_8_ =
                 (double)(float)(~(uint)(float)dVar36 &
                                (uint)(float)((double)local_1240._8_8_ * 0.0));
            auVar45._0_4_ = uVar119 & uVar115;
            auVar45._4_4_ = uVar120 & uVar116;
            auVar45._8_4_ = uVar119 & uVar117;
            auVar45._12_4_ = uVar120 & uVar118;
            auVar75._0_4_ = ~uVar115 & SUB84(dVar88,0);
            auVar75._4_4_ = ~uVar116 & (uint)((ulonglong)dVar88 >> 0x20);
            auVar75._8_4_ = ~uVar117 & SUB84(dVar95,0);
            auVar75._12_4_ = ~uVar118 & (uint)((ulonglong)dVar95 >> 0x20);
            auVar86._8_4_ = SUB84(auVar100._8_8_,0);
            auVar86._0_8_ = auVar100._0_8_;
            auVar86._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
            auVar91._8_4_ = SUB84(auVar106._8_8_,0);
            auVar91._0_8_ = auVar106._0_8_;
            auVar91._12_4_ = (int)((ulonglong)auVar106._8_8_ >> 0x20);
            auVar98 = minpd(auVar91,auVar75 | auVar45);
            auVar46._0_4_ = uVar119 & uVar25;
            auVar46._4_4_ = uVar120 & uVar112;
            auVar46._8_4_ = uVar119 & uVar113;
            auVar46._12_4_ = uVar120 & uVar114;
            auVar90 = minpd(auVar86,auVar61 | auVar46);
            auVar105 = maxpd(auVar100,auVar61 | auVar46);
            auVar108 = maxpd(auVar106,auVar75 | auVar45);
            auVar47._8_8_ = auVar90._0_8_;
            auVar47._0_8_ = auVar98._8_8_;
            auVar38 = maxpd(auVar98,auVar47);
            auVar62._8_8_ = auVar98._0_8_;
            auVar62._0_8_ = auVar90._0_8_;
            auVar38 = maxpd(auVar38,auVar62);
            auVar111 = maxpd(auVar38,ZEXT816(0));
            auVar39 = blendpd(auVar108,auVar105,2);
            auVar38 = blendpd(auVar98,auVar90,2);
            auVar84 = maxpd(auVar90,auVar38);
            auVar92._8_8_ = auVar90._8_8_;
            auVar92._0_8_ = auVar98._8_8_;
            auVar38 = minpd(auVar105,auVar39);
            auVar39 = maxpd(auVar84,auVar92);
            auVar84 = maxpd(auVar39,ZEXT816(0));
            auVar48._8_8_ = auVar105._8_8_;
            auVar48._0_8_ = auVar108._8_8_;
            auVar39 = minpd(auVar38,auVar48);
            auVar49._8_8_ = auVar105._0_8_;
            auVar49._0_8_ = auVar108._8_8_;
            auVar38 = minpd(auVar108,auVar49);
            auVar101._8_8_ = auVar108._0_8_;
            auVar101._0_8_ = auVar105._0_8_;
            auVar38 = minpd(auVar38,auVar101);
            auVar11._8_4_ = uVar119;
            auVar11._0_8_ = dVar2;
            auVar11._12_4_ = uVar120;
            auVar39 = minpd(auVar39,auVar11);
            auVar12._8_4_ = uVar119;
            auVar12._0_8_ = dVar2;
            auVar12._12_4_ = uVar120;
            auVar38 = minpd(auVar38,auVar12);
            auVar76._8_8_ = -(ulonglong)(auVar39._8_8_ < auVar84._8_8_);
            auVar76._0_8_ = -(ulonglong)(auVar39._0_8_ < auVar84._0_8_);
            pTVar30 = auVar111._0_8_;
            auVar63._8_8_ = -(ulonglong)(auVar38._8_8_ < auVar111._8_8_);
            auVar63._0_8_ = -(ulonglong)(auVar38._0_8_ < (double)pTVar30);
            iVar24 = movmskpd(0,auVar76);
            uVar22 = movmskpd(uVar22,auVar63);
            uVar28 = iVar24 << 2 | uVar22;
            bVar15 = uVar28 == 0;
          }
          else {
            bVar15 = false;
            pTVar30 = local_1190[0];
          }
          dVar81 = *(double *)(pFVar3 + lVar19 + 0x48);
          dVar96 = *(double *)(pFVar3 + lVar19 + 0x50);
          auVar77._8_8_ = -(ulonglong)(dVar56 < *(double *)(pFVar3 + lVar19 + 0x38));
          auVar77._0_8_ = -(ulonglong)(dVar68 < *(double *)(pFVar3 + lVar19 + 0x30));
          auVar50._8_4_ = SUB84(dVar96,0);
          auVar50._0_8_ = dVar81;
          auVar50._12_4_ = (int)((ulonglong)dVar96 >> 0x20);
          auVar38._8_8_ = -(ulonglong)(auVar50._8_8_ < dVar56);
          auVar38._0_8_ = -(ulonglong)(dVar81 < dVar68);
          auVar77 = auVar77 | auVar38;
          auVar64._0_8_ =
               -(ulonglong)
                ((dVar82 < *(double *)(pFVar3 + lVar19 + 0x40) ||
                 *(double *)(pFVar3 + lVar19 + 0x58) < dVar82) && bVar6);
          auVar64._8_8_ = 0;
          auVar78._0_4_ = auVar77._0_4_ & uVar115;
          auVar78._4_4_ = auVar77._4_4_ & uVar116;
          auVar78._8_4_ = auVar77._8_4_ & uVar117;
          auVar78._12_4_ = auVar77._12_4_ & uVar118;
          uVar28 = movmskpd(uVar28,auVar64);
          iVar24 = movmskpd(uVar22,auVar78);
          if ((uVar28 & 0x3fffffff) == 0 && iVar24 == 0) {
            dVar88 = (dVar81 - dVar68) * (double)local_1270._0_8_;
            dVar96 = (dVar96 - dVar56) * (double)local_1270._8_8_;
            auVar107._0_8_ =
                 (double)(float)(~(uint)(float)dVar35 &
                                (uint)(float)((*(double *)(pFVar3 + lVar19 + 0x30) - dVar68) *
                                             (double)local_1270._0_8_));
            auVar107._8_8_ =
                 (double)(float)(~(uint)(float)dVar37 &
                                (uint)(float)((*(double *)(pFVar3 + lVar19 + 0x38) - dVar56) *
                                             (double)local_1270._8_8_));
            dVar81 = (*(double *)(pFVar3 + lVar19 + 0x58) - dVar82) * (double)local_1240._0_8_;
            auVar102._0_8_ =
                 (double)(float)(~(uint)(float)dVar34 &
                                (uint)(float)((*(double *)(pFVar3 + lVar19 + 0x40) - dVar82) *
                                             (double)local_1240._0_8_));
            auVar102._8_8_ =
                 (double)(float)(~(uint)(float)dVar36 &
                                (uint)(float)((double)local_1240._8_8_ * 0.0));
            auVar65._0_4_ = ~uVar25 & SUB84(dVar81,0);
            auVar65._4_4_ = ~uVar112 & (uint)((ulonglong)dVar81 >> 0x20);
            auVar65._8_4_ = ~uVar113 & SUB84((double)local_1240._8_8_ * 0.0,0);
            auVar65._12_4_ = ~uVar114 & (uint)((ulonglong)((double)local_1240._8_8_ * 0.0) >> 0x20);
            auVar79._0_4_ = ~uVar115 & SUB84(dVar88,0);
            auVar79._4_4_ = ~uVar116 & (uint)((ulonglong)dVar88 >> 0x20);
            auVar79._8_4_ = ~uVar117 & SUB84(dVar96,0);
            auVar79._12_4_ = ~uVar118 & (uint)((ulonglong)dVar96 >> 0x20);
            auVar87._8_4_ = SUB84(auVar102._8_8_,0);
            auVar87._0_8_ = auVar102._0_8_;
            auVar87._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
            auVar93._8_4_ = SUB84(auVar107._8_8_,0);
            auVar93._0_8_ = auVar107._0_8_;
            auVar93._12_4_ = (int)((ulonglong)auVar107._8_8_ >> 0x20);
            auVar51._0_4_ = uVar119 & uVar115;
            auVar51._4_4_ = uVar120 & uVar116;
            auVar51._8_4_ = uVar119 & uVar117;
            auVar51._12_4_ = uVar120 & uVar118;
            auVar98 = minpd(auVar93,auVar79 | auVar51);
            auVar52._0_4_ = uVar119 & uVar25;
            auVar52._4_4_ = uVar120 & uVar112;
            auVar52._8_4_ = uVar119 & uVar113;
            auVar52._12_4_ = uVar120 & uVar114;
            auVar90 = minpd(auVar87,auVar65 | auVar52);
            auVar105 = maxpd(auVar102,auVar65 | auVar52);
            auVar108 = maxpd(auVar107,auVar79 | auVar51);
            auVar53._8_8_ = auVar90._0_8_;
            auVar53._0_8_ = auVar98._8_8_;
            auVar38 = maxpd(auVar98,auVar53);
            auVar66._8_8_ = auVar98._0_8_;
            auVar66._0_8_ = auVar90._0_8_;
            auVar38 = maxpd(auVar38,auVar66);
            auVar111 = maxpd(auVar38,ZEXT816(0));
            auVar39 = blendpd(auVar108,auVar105,2);
            auVar38 = blendpd(auVar98,auVar90,2);
            auVar84 = maxpd(auVar90,auVar38);
            auVar94._8_8_ = auVar90._8_8_;
            auVar94._0_8_ = auVar98._8_8_;
            auVar38 = minpd(auVar105,auVar39);
            auVar39 = maxpd(auVar84,auVar94);
            auVar90 = maxpd(auVar39,ZEXT816(0));
            auVar54._8_8_ = auVar105._8_8_;
            auVar54._0_8_ = auVar108._8_8_;
            auVar84 = minpd(auVar38,auVar54);
            auVar38._8_8_ = auVar105._0_8_;
            auVar38._0_8_ = auVar108._8_8_;
            auVar39 = minpd(auVar108,auVar38);
            auVar103._8_8_ = auVar108._0_8_;
            auVar103._0_8_ = auVar105._0_8_;
            auVar39 = minpd(auVar39,auVar103);
            auVar9._8_4_ = uVar119;
            auVar9._0_8_ = dVar2;
            auVar9._12_4_ = uVar120;
            auVar84 = minpd(auVar84,auVar9);
            auVar10._8_4_ = uVar119;
            auVar10._0_8_ = dVar2;
            auVar10._12_4_ = uVar120;
            auVar39 = minpd(auVar39,auVar10);
            auVar80._8_8_ = -(ulonglong)(auVar84._8_8_ < auVar90._8_8_);
            auVar80._0_8_ = -(ulonglong)(auVar84._0_8_ < auVar90._0_8_);
            pTVar110 = auVar111._0_8_;
            auVar67._8_8_ = -(ulonglong)(auVar39._8_8_ < auVar111._8_8_);
            auVar67._0_8_ = -(ulonglong)(auVar39._0_8_ < (double)pTVar110);
            iVar24 = movmskpd(iVar24,auVar67);
            uVar25 = movmskpd(0,auVar80);
            bVar33 = (uVar25 & 0x3fffffff) == 0 && iVar24 == 0;
          }
          else {
            bVar33 = false;
            pTVar110 = pTVar30;
          }
          iVar24 = local_108;
          local_1260 = pTVar110;
          local_1258 = pTVar30;
          if (bVar15) {
            if (bVar33) {
              if ((double)pTVar110 <= (double)pTVar30) {
                local_11d8 = *(undefined4 *)(pFVar3 + lVar19 + 0x60);
                pTStack_11d0 = pTVar30;
                if (local_108 == local_104) {
                  local_108 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                        (0x810,&local_1100,&local_104);
                }
                FVar20 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                          )&local_1100;
                if (local_1100.SecondaryData !=
                    (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                     )0x0) {
                  FVar20 = local_1100.SecondaryData;
                }
                puVar1 = (undefined8 *)((longlong)FVar20 + (longlong)local_108 * 0x10);
                local_108 = local_108 + 1;
                *puVar1 = CONCAT44(uStack_11d4,local_11d8);
                puVar1[1] = pTStack_11d0;
                local_11c8 = *(undefined4 *)(pFVar3 + lVar19 + 100);
                pTStack_11c0 = pTVar110;
                if (local_108 == local_104) {
                  local_108 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                        (0x810,&local_1100,&local_104);
                }
                auVar38._4_4_ = (float)uStack_11c4;
                auVar38._0_4_ = (float)local_11c8;
                auVar38._8_8_ = pTStack_11c0;
                lVar19 = (longlong)local_108;
                local_108 = local_108 + 1;
                FVar20 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                          )&local_1100;
                if (local_1100.SecondaryData !=
                    (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                     )0x0) {
                  FVar20 = local_1100.SecondaryData;
                }
                *(undefined1 (*) [16])((longlong)FVar20 + lVar19 * 0x10) = auVar38;
              }
              else {
                local_11f8 = *(undefined4 *)(pFVar3 + lVar19 + 100);
                pTStack_11f0 = pTVar110;
                if (local_108 == local_104) {
                  local_108 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                        (0x810,&local_1100,&local_104);
                }
                FVar20 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                          )&local_1100;
                if (local_1100.SecondaryData !=
                    (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                     )0x0) {
                  FVar20 = local_1100.SecondaryData;
                }
                puVar1 = (undefined8 *)((longlong)FVar20 + (longlong)local_108 * 0x10);
                local_108 = local_108 + 1;
                *puVar1 = CONCAT44(uStack_11f4,local_11f8);
                puVar1[1] = pTStack_11f0;
                local_11e8 = *(undefined4 *)(pFVar3 + lVar19 + 0x60);
                pTStack_11e0 = pTVar30;
                if (local_108 == local_104) {
                  local_108 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                        (0x810,&local_1100,&local_104);
                }
                auVar38._4_4_ = (float)uStack_11e4;
                auVar38._0_4_ = (float)local_11e8;
                auVar38._8_8_ = pTStack_11e0;
                lVar19 = (longlong)local_108;
                local_108 = local_108 + 1;
                FVar20 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                          )&local_1100;
                if (local_1100.SecondaryData !=
                    (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                     )0x0) {
                  FVar20 = local_1100.SecondaryData;
                }
                *(undefined1 (*) [16])((longlong)FVar20 + lVar19 * 0x10) = auVar38;
              }
            }
            else {
              local_11b8 = *(undefined4 *)(pFVar3 + lVar19 + 0x60);
              pTStack_11b0 = pTVar30;
              if (local_108 == local_104) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                   (0x810,&local_1100,&local_104);
              }
              auVar38._4_4_ = (float)uStack_11b4;
              auVar38._0_4_ = (float)local_11b8;
              auVar38._8_8_ = pTStack_11b0;
LAB_148c17770:
              local_108 = iVar24 + 1;
              FVar20 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                        )&local_1100;
              if (local_1100.SecondaryData !=
                  (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                   )0x0) {
                FVar20 = local_1100.SecondaryData;
              }
              *(undefined1 (*) [16])((longlong)FVar20 + (longlong)iVar24 * 0x10) = auVar38;
            }
          }
          else if (bVar33) {
            local_1228 = *(undefined4 *)(pFVar3 + lVar19 + 100);
            pTStack_1220 = pTVar110;
            if (local_108 == local_104) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>_::__l2::FNodeQueueEntry>_>
                                 (0x810,&local_1100,&local_104);
            }
            auVar38._4_4_ = (float)uStack_1224;
            auVar38._0_4_ = (float)local_1228;
            auVar38._8_8_ = pTStack_1220;
            goto LAB_148c17770;
          }
          dVar81 = (double)local_1270._0_8_;
          dVar96 = (double)local_1270._8_8_;
        }
        else {
          uVar22 = *(uint *)(pFVar3 + lVar19 + 0x60);
          lVar19 = (longlong)(int)uVar22;
          pcVar27 = (char *)(ulonglong)(~uVar22 >> 0x1f);
          pIVar21 = (ISpatialVisitor<int,double> *)0x0;
          if ((int)uVar22 < *(int *)&(this->Leaves).field_0x8) {
            pIVar21 = (ISpatialVisitor<int,double> *)pcVar27;
          }
          if ((int)pIVar21 == 0) {
            pcVar27 = "(Index >= 0) & (Index < ArrayNum)";
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            pIVar21 = (ISpatialVisitor<int,double> *)CONCAT71(extraout_var,bVar15);
            auVar38 = extraout_XMM0_02;
            if (bVar15) {
              pcVar5 = (code *)swi(3);
              uVar16 = (*pcVar5)();
              return (bool)uVar16;
            }
          }
          lVar4 = *(longlong *)&this->Leaves;
          puVar31 = *(undefined4 **)(lVar4 + lVar19 * 0x18);
          iVar24 = *(int *)(lVar4 + 8 + lVar19 * 0x18);
          pdVar29 = (double *)(puVar31 + 6);
          puVar32 = puVar31 + (longlong)iVar24 * 0xe;
          while( true ) {
            uVar18 = SUB84(pIVar21,0);
            uVar23 = SUB84(pcVar27,0);
            if (*(int *)(lVar4 + 8 + lVar19 * 0x18) != iVar24) {
              this_01 = local_127f;
              local_127f[0] = 0;
              bVar15 = `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>
                       ::operator!='::__l2::<lambda_1>::operator()(this_01);
              uVar23 = SUB84(this_01,0);
              uVar18 = (undefined4)CONCAT71(extraout_var_00,bVar15);
              auVar38 = extraout_XMM0_03;
            }
            this = local_1230;
            if (puVar31 == puVar32) break;
            dVar88 = *(double *)*(undefined1 (*) [12])(pdVar29 + 1);
            auVar69._8_8_ = -(ulonglong)(dVar56 < pdVar29[-1]);
            auVar69._0_8_ = -(ulonglong)(dVar68 < pdVar29[-2]);
            auVar40._12_4_ = (int)((ulonglong)pdVar29[2] >> 0x20);
            auVar40._0_12_ = *(undefined1 (*) [12])(pdVar29 + 1);
            auVar38._8_8_ = -(ulonglong)(auVar40._8_8_ < dVar56);
            auVar38._0_8_ = -(ulonglong)(dVar88 < dVar68);
            auVar69 = auVar69 | auVar38;
            auVar57._0_8_ = -(ulonglong)((dVar82 < *pdVar29 || pdVar29[3] < dVar82) && bVar6);
            auVar57._8_8_ = 0;
            auVar70._0_4_ = auVar69._0_4_ & uVar115;
            auVar70._4_4_ = auVar69._4_4_ & uVar116;
            auVar70._8_4_ = auVar69._8_4_ & uVar117;
            auVar70._12_4_ = auVar69._12_4_ & uVar118;
            iVar17 = movmskpd(uVar23,auVar57);
            uVar22 = movmskpd(uVar18,auVar70);
            pIVar21 = (ISpatialVisitor<int,double> *)(ulonglong)uVar22;
            uVar28 = iVar17 << 2 | uVar22;
            pcVar27 = (char *)(ulonglong)uVar28;
            if (uVar28 == 0) {
              dVar88 = (dVar88 - dVar68) * dVar81;
              dVar95 = (pdVar29[2] - dVar56) * dVar96;
              auVar104._0_8_ =
                   (double)(float)(~(uint)(float)dVar35 &
                                  (uint)(float)((pdVar29[-2] - dVar68) * dVar81));
              auVar104._8_8_ =
                   (double)(float)(~(uint)(float)dVar37 &
                                  (uint)(float)((pdVar29[-1] - dVar56) * dVar96));
              dVar109 = (pdVar29[3] - dVar82) * (double)local_1240._0_8_;
              auVar97._0_8_ =
                   (double)(float)(~(uint)(float)dVar34 &
                                  (uint)(float)((*pdVar29 - dVar82) * (double)local_1240._0_8_));
              auVar97._8_8_ =
                   (double)(float)(~(uint)(float)dVar36 &
                                  (uint)(float)((double)local_1240._8_8_ * 0.0));
              auVar58._0_4_ = ~uVar25 & SUB84(dVar109,0);
              auVar58._4_4_ = ~uVar112 & (uint)((ulonglong)dVar109 >> 0x20);
              auVar58._8_4_ = ~uVar113 & SUB84((double)local_1240._8_8_ * 0.0,0);
              auVar58._12_4_ =
                   ~uVar114 & (uint)((ulonglong)((double)local_1240._8_8_ * 0.0) >> 0x20);
              auVar71._0_4_ = ~uVar115 & SUB84(dVar88,0);
              auVar71._4_4_ = ~uVar116 & (uint)((ulonglong)dVar88 >> 0x20);
              auVar71._8_4_ = ~uVar117 & SUB84(dVar95,0);
              auVar71._12_4_ = ~uVar118 & (uint)((ulonglong)dVar95 >> 0x20);
              auVar83._8_4_ = SUB84(auVar97._8_8_,0);
              auVar83._0_8_ = auVar97._0_8_;
              auVar83._12_4_ = (int)((ulonglong)auVar97._8_8_ >> 0x20);
              auVar89._8_4_ = SUB84(auVar104._8_8_,0);
              auVar89._0_8_ = auVar104._0_8_;
              auVar89._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
              auVar41._0_4_ = uVar119 & uVar115;
              auVar41._4_4_ = uVar120 & uVar116;
              auVar41._8_4_ = uVar119 & uVar117;
              auVar41._12_4_ = uVar120 & uVar118;
              auVar105 = maxpd(auVar104,auVar71 | auVar41);
              auVar90 = minpd(auVar89,auVar71 | auVar41);
              auVar42._0_4_ = uVar119 & uVar25;
              auVar42._4_4_ = uVar120 & uVar112;
              auVar42._8_4_ = uVar119 & uVar113;
              auVar42._12_4_ = uVar120 & uVar114;
              auVar84 = minpd(auVar83,auVar58 | auVar42);
              auVar98 = maxpd(auVar97,auVar58 | auVar42);
              auVar38 = blendpd(auVar90,auVar84,2);
              auVar38 = maxpd(auVar84,auVar38);
              auVar59._8_8_ = auVar84._8_8_;
              auVar59._0_8_ = auVar90._8_8_;
              auVar38 = maxpd(auVar38,auVar59);
              auVar39 = maxpd(auVar38,ZEXT816(0));
              auVar38 = blendpd(auVar105,auVar98,2);
              auVar38 = minpd(auVar98,auVar38);
              auVar43._8_8_ = auVar98._8_8_;
              auVar43._0_8_ = auVar105._8_8_;
              auVar38 = minpd(auVar38,auVar43);
              auVar60._8_8_ = auVar98._0_8_;
              auVar60._0_8_ = auVar105._8_8_;
              auVar44._8_8_ = auVar84._0_8_;
              auVar44._0_8_ = auVar90._8_8_;
              auVar7._8_4_ = uVar119;
              auVar7._0_8_ = dVar2;
              auVar7._12_4_ = uVar120;
              auVar38 = minpd(auVar38,auVar7);
              auVar85._8_8_ = auVar90._0_8_;
              auVar85._0_8_ = auVar84._0_8_;
              auVar72._8_8_ = -(ulonglong)(auVar38._8_8_ < auVar39._8_8_);
              auVar72._0_8_ = -(ulonglong)(auVar38._0_8_ < auVar39._0_8_);
              iVar17 = movmskpd(0,auVar72);
              auVar38 = maxpd(auVar90,auVar44);
              auVar99._8_8_ = auVar105._0_8_;
              auVar99._0_8_ = auVar98._0_8_;
              auVar38 = maxpd(auVar38,auVar85);
              auVar84 = maxpd(auVar38,ZEXT816(0));
              auVar38 = minpd(auVar105,auVar60);
              auVar38 = minpd(auVar38,auVar99);
              auVar8._8_4_ = uVar119;
              auVar8._0_8_ = dVar2;
              auVar8._12_4_ = uVar120;
              auVar39 = minpd(auVar38,auVar8);
              auVar38._8_8_ = -(ulonglong)(auVar39._8_8_ < auVar84._8_8_);
              auVar38._0_8_ = -(ulonglong)(auVar39._0_8_ < auVar84._0_8_);
              uVar22 = movmskpd(uVar22,auVar38);
              pIVar21 = (ISpatialVisitor<int,double> *)(ulonglong)uVar22;
              uVar22 = iVar17 << 2 | uVar22;
              pcVar27 = (char *)(ulonglong)uVar22;
              if (uVar22 == 0) {
                local_1138 = *puVar31;
                local_1130 = pdVar29[-2];
                dStack_1128 = pdVar29[-1];
                local_1120 = *pdVar29;
                local_1134 = 1;
                local_1118 = pdVar29[1];
                dStack_1110 = pdVar29[2];
                pcVar27 = (char *)local_1248->Visitor;
                local_1108 = pdVar29[3];
                pIVar21 = (ISpatialVisitor<int,double> *)
                          (**(code **)((longlong)*(ISpatialVisitor<int,double> *)pcVar27 + 0x10))
                                    (pcVar27,&local_1138,param_2);
                auVar38._8_8_ = extraout_XMM0_Qb;
                auVar38._0_8_ = extraout_XMM0_Qa;
                if ((char)pIVar21 == '\0') {
                  bVar15 = false;
                  goto LAB_148c177b0;
                }
              }
            }
            puVar31 = puVar31 + 0xe;
            pdVar29 = pdVar29 + 7;
          }
        }
      }
      bVar15 = false;
      iVar24 = local_108;
    } while (local_108 != 0);
  }
  bVar15 = true;
LAB_148c177b0:
  if (local_1100.SecondaryData !=
      (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<int,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
       )0x0) {
    FMemory::Free((void *)local_1100.SecondaryData);
  }
  return bVar15;
}

// TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_> @ 148c18390

TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
* __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *param_1)

{
  TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_> *pTVar3;
  undefined1 *puVar4;
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
  *pTVar7;
  TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *pTVar8;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  TAABBTreeNode<double> *pTVar11;
  TAABBTreeLeafArray<int,0,double> *pTVar12;
  TPayloadBoundsElement<int,double> *pTVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar19;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar20;
  undefined8 local_28 [2];
  
  pTVar19 = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             *)0x0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x401;
  pTVar1 = &this->Nodes;
  *(undefined4 *)&this->_padding_ = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ =
       (longlong)
       &
       ___7__TAABBTree_HU__TAABBTreeLeafArray_H_0A_N_Chaos___0A_NU__TDefaultAABBTreeStorageTraits_H_2__Chaos__6B_
  ;
  iVar10 = (param_1->Nodes).ArrayNum;
  piVar2 = &(this->Nodes).ArrayMax;
  pTVar11 = (TAABBTreeNode<double> *)(param_1->Nodes).AllocatorInstance.Data;
  (this->Nodes).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,iVar10,0,&pTVar1->AllocatorInstance,iVar10,piVar2);
    ConstructItems<Chaos::TAABBTreeNode<double>,Chaos::TAABBTreeNode<double>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar11,iVar10);
  }
  pTVar3 = &this->Leaves;
  *(undefined8 *)pTVar3 = 0;
  puVar4 = &(this->Leaves).field_0xc;
  iVar10 = *(int *)&(param_1->Leaves).field_0x8;
  pTVar12 = *(TAABBTreeLeafArray<int,0,double> **)&param_1->Leaves;
  *(int *)&(this->Leaves).field_0x8 = iVar10;
  if (iVar10 == 0) {
    *(undefined4 *)puVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar10,0,(ForAnyElementType *)pTVar3,iVar10,(int *)puVar4);
    ConstructItems<Chaos::TAABBTreeLeafArray<int,0,double>,Chaos::TAABBTreeLeafArray<int,0,double>,int>
              (*(void **)pTVar3,pTVar12,iVar10);
  }
  pTVar5 = &this->DirtyElements;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DirtyElements).ArrayMax;
  iVar10 = (param_1->DirtyElements).ArrayNum;
  pTVar13 = (TPayloadBoundsElement<int,double> *)(param_1->DirtyElements).AllocatorInstance.Data;
  (this->DirtyElements).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar10,0,&pTVar5->AllocatorInstance,iVar10,piVar2);
    ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
              ((pTVar5->AllocatorInstance).Data,pTVar13,iVar10);
  }
  this->bDynamicTree = param_1->bDynamicTree;
  this->RootNode = param_1->RootNode;
  this->FirstFreeInternalNode = param_1->FirstFreeInternalNode;
  this->FirstFreeLeafNode = param_1->FirstFreeLeafNode;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x0 = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x8 = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x20 = 0;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x28 = 0;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x34 = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x40 = 0;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x48 = 0;
  TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
               *)&this->CellHashToFlatArray,
              (TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
               *)&param_1->CellHashToFlatArray);
  pTVar6 = &this->FlattenedCellArrayOfDirtyIndices;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->FlattenedCellArrayOfDirtyIndices).ArrayMax;
  iVar10 = (param_1->FlattenedCellArrayOfDirtyIndices).ArrayNum;
  pFVar14 = (param_1->FlattenedCellArrayOfDirtyIndices).AllocatorInstance.Data;
  (this->FlattenedCellArrayOfDirtyIndices).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar6->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar14,(longlong)iVar10 << 2);
  }
  pTVar6 = &this->DirtyElementsGridOverflow;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DirtyElementsGridOverflow).ArrayMax;
  iVar10 = (param_1->DirtyElementsGridOverflow).ArrayNum;
  pFVar14 = (param_1->DirtyElementsGridOverflow).AllocatorInstance.Data;
  (this->DirtyElementsGridOverflow).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar6->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar14,(longlong)iVar10 << 2);
  }
  pTVar5 = &this->GlobalPayloads;
  pTVar7 = &this->DirtyElementTree;
  pTVar7->Ptr = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)0x0;
  this->DirtyElementGridCellSize = param_1->DirtyElementGridCellSize;
  this->DirtyElementGridCellSizeInv = param_1->DirtyElementGridCellSizeInv;
  this->DirtyElementMaxGridCellQueryCount = param_1->DirtyElementMaxGridCellQueryCount;
  this->DirtyElementMaxPhysicalSizeInCells = param_1->DirtyElementMaxPhysicalSizeInCells;
  this->DirtyElementMaxCellCapacity = param_1->DirtyElementMaxCellCapacity;
  iVar10 = (param_1->TreeStats).StatNumElementsTooLargeForGrid;
  iVar16 = (param_1->TreeStats).StatNumDirtyElements;
  iVar17 = (param_1->TreeStats).StatNumGridOverflowElements;
  (this->TreeStats).StatNumNonEmptyCellsInGrid = (param_1->TreeStats).StatNumNonEmptyCellsInGrid;
  (this->TreeStats).StatNumElementsTooLargeForGrid = iVar10;
  (this->TreeStats).StatNumDirtyElements = iVar16;
  (this->TreeStats).StatNumGridOverflowElements = iVar17;
  iVar10 = (param_1->TreeExpensiveStats).StatMaxDirtyElements;
  iVar16 = (param_1->TreeExpensiveStats).StatMaxLeafSize;
  iVar17 = (param_1->TreeExpensiveStats).StatMaxTreeDepth;
  (this->TreeExpensiveStats).StatMaxNumLeaves = (param_1->TreeExpensiveStats).StatMaxNumLeaves;
  (this->TreeExpensiveStats).StatMaxDirtyElements = iVar10;
  (this->TreeExpensiveStats).StatMaxLeafSize = iVar16;
  (this->TreeExpensiveStats).StatMaxTreeDepth = iVar17;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize =
       (param_1->TreeExpensiveStats).StatGlobalPayloadsSize;
  piVar2 = &(this->GlobalPayloads).ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar10 = (param_1->GlobalPayloads).ArrayNum;
  pTVar13 = (TPayloadBoundsElement<int,double> *)(param_1->GlobalPayloads).AllocatorInstance.Data;
  (this->GlobalPayloads).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar10,0,&pTVar5->AllocatorInstance,iVar10,piVar2);
    ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
              ((pTVar5->AllocatorInstance).Data,pTVar13,iVar10);
  }
  pTVar8 = &this->PayloadToInfo;
  (pTVar8->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PayloadToInfo).Entries.ArrayMax;
  iVar10 = (param_1->PayloadToInfo).Entries.ArrayNum;
  pFVar14 = (param_1->PayloadToInfo).Entries.AllocatorInstance.Data;
  (this->PayloadToInfo).Entries.ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar10,0,(ForAnyElementType *)pTVar8,iVar10,piVar2);
    memcpy((pTVar8->Entries).AllocatorInstance.Data,pFVar14,(longlong)iVar10 * 0x18);
  }
  pTVar6 = &this->OverlappingLeaves;
  this->MaxChildrenInLeaf = param_1->MaxChildrenInLeaf;
  this->MaxTreeDepth = param_1->MaxTreeDepth;
  this->MaxPayloadBounds = param_1->MaxPayloadBounds;
  this->MaxNumToProcess = param_1->MaxNumToProcess;
  this->NumProcessedThisSlice = param_1->NumProcessedThisSlice;
  this->StartSliceTimeStamp = param_1->StartSliceTimeStamp;
  this->CurrentProcessedNodesSinceChecked = 0;
  this->CurrentDataElementsCopiedSinceLastCheck = 0;
  (this->WorkStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkStack).ArrayNum = 0;
  (this->WorkStack).ArrayMax = 0;
  (this->WorkPoolFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPoolFreeList).ArrayNum = 0;
  (this->WorkPoolFreeList).ArrayMax = 0;
  (this->WorkPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPool).ArrayNum = 0;
  (this->WorkPool).ArrayMax = 0;
  this->bModifyingTreeMultiThreadingFastCheck = param_1->bModifyingTreeMultiThreadingFastCheck;
  this->bShouldRebuild = param_1->bShouldRebuild;
  this->bBuildOverlapCache = param_1->bBuildOverlapCache;
  piVar2 = &(this->OverlappingLeaves).ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar10 = (param_1->OverlappingLeaves).ArrayNum;
  pFVar14 = (param_1->OverlappingLeaves).AllocatorInstance.Data;
  (this->OverlappingLeaves).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar6->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar14,(longlong)iVar10 << 2);
  }
  pTVar6 = &this->OverlappingOffsets;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OverlappingOffsets).ArrayMax;
  iVar10 = (param_1->OverlappingOffsets).ArrayNum;
  pFVar14 = (param_1->OverlappingOffsets).AllocatorInstance.Data;
  (this->OverlappingOffsets).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar6->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar14,(longlong)iVar10 << 2);
  }
  pTVar9 = &this->OverlappingPairs;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OverlappingPairs).ArrayMax;
  iVar10 = (param_1->OverlappingPairs).ArrayNum;
  pFVar14 = (param_1->OverlappingPairs).AllocatorInstance.Data;
  (this->OverlappingPairs).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar10,0,&pTVar9->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar9->AllocatorInstance).Data,pFVar14,(longlong)iVar10 << 3);
  }
  pTVar6 = &this->OverlappingCounts;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OverlappingCounts).ArrayMax;
  iVar10 = (param_1->OverlappingCounts).ArrayNum;
  pFVar14 = (param_1->OverlappingCounts).AllocatorInstance.Data;
  (this->OverlappingCounts).ArrayNum = iVar10;
  if (iVar10 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&pTVar6->AllocatorInstance,iVar10,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar14,(longlong)iVar10 << 2);
  }
  piVar2 = &(this->PriorityQ).ArrayMax;
  (this->PriorityQ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  (this->PriorityQ).ArrayNum = 0;
  if ((this->bDynamicTree != param_1->bDynamicTree) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089986259>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0xf2d,"bDynamicTree == Other.IsTreeDynamic()"), bVar18)) {
    pcVar15 = (code *)swi(3);
    pTVar19 = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)(*pcVar15)();
    return pTVar19;
  }
  if (*piVar2 < 0x20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x20,&(this->PriorityQ).AllocatorInstance,(this->PriorityQ).ArrayNum,piVar2);
  }
  if ((param_1->DirtyElementTree).Ptr !=
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    pTVar20 = ::operator_new(0x1d8);
    if (pTVar20 !=
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) {
      pTVar19 = TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                          (pTVar20,(param_1->DirtyElementTree).Ptr);
    }
    if (pTVar7 == (TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
                   *)local_28) {
      if (pTVar19 ==
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)0x0) {
        return this;
      }
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (pTVar19);
    }
    else {
      pTVar20 = pTVar7->Ptr;
      pTVar7->Ptr = pTVar19;
      if (pTVar20 ==
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)0x0) {
        return this;
      }
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (pTVar20);
      pTVar19 = pTVar20;
    }
    ::operator_delete(pTVar19,0x1d8);
  }
  return this;
}

// TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_> @ 148c18a10

TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
* __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x401;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  *(undefined8 *)&this->Leaves = 0;
  *(undefined8 *)&(this->Leaves).field_0x8 = 0;
  (this->DirtyElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyElements).ArrayNum = 0;
  (this->DirtyElements).ArrayMax = 0;
  *(undefined8 *)&this->CellHashToFlatArray = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x8 = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x20 = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TAABBTree_HU__TAABBTreeLeafArray_H_0A_N_Chaos___0A_NU__TDefaultAABBTreeStorageTraits_H_2__Chaos__6B_
  ;
  *(undefined4 *)&this->_padding_ = 0;
  this->bDynamicTree = false;
  this->RootNode = -1;
  this->FirstFreeInternalNode = -1;
  this->FirstFreeLeafNode = -1;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x28 = 0;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x34 = 0;
  *(undefined8 *)&(this->CellHashToFlatArray).field_0x40 = 0;
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x48 = 0;
  dVar2 = __real_3ff0000000000000;
  (this->FlattenedCellArrayOfDirtyIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlattenedCellArrayOfDirtyIndices).ArrayNum = 0;
  (this->FlattenedCellArrayOfDirtyIndices).ArrayMax = 0;
  (this->DirtyElementsGridOverflow).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirtyElementsGridOverflow).ArrayNum = 0;
  (this->DirtyElementsGridOverflow).ArrayMax = 0;
  (this->DirtyElementTree).Ptr =
       (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        *)0x0;
  (this->TreeStats).StatNumNonEmptyCellsInGrid = 0;
  (this->TreeStats).StatNumElementsTooLargeForGrid = 0;
  (this->TreeStats).StatNumDirtyElements = 0;
  (this->TreeStats).StatNumGridOverflowElements = 0;
  (this->TreeExpensiveStats).StatMaxNumLeaves = 0;
  (this->TreeExpensiveStats).StatMaxDirtyElements = 0;
  (this->TreeExpensiveStats).StatMaxLeafSize = 0;
  (this->TreeExpensiveStats).StatMaxTreeDepth = 0;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize = 0;
  (this->GlobalPayloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalPayloads).ArrayNum = 0;
  (this->GlobalPayloads).ArrayMax = 0;
  (this->PayloadToInfo).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PayloadToInfo).Entries.ArrayNum = 0;
  (this->PayloadToInfo).Entries.ArrayMax = 0;
  (this->WorkStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkStack).ArrayNum = 0;
  (this->WorkStack).ArrayMax = 0;
  (this->WorkPoolFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPoolFreeList).ArrayNum = 0;
  (this->WorkPoolFreeList).ArrayMax = 0;
  (this->WorkPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkPool).ArrayNum = 0;
  (this->WorkPool).ArrayMax = 0;
  (this->OverlappingLeaves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingLeaves).ArrayNum = 0;
  (this->OverlappingLeaves).ArrayMax = 0;
  (this->OverlappingOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingOffsets).ArrayNum = 0;
  (this->OverlappingOffsets).ArrayMax = 0;
  (this->OverlappingPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingPairs).ArrayNum = 0;
  (this->OverlappingPairs).ArrayMax = 0;
  (this->OverlappingCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingCounts).ArrayNum = 0;
  (this->OverlappingCounts).ArrayMax = 0;
  (this->PriorityQ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PriorityQ).ArrayNum = 0;
  (this->PriorityQ).ArrayMax = 0;
  this->MaxChildrenInLeaf = 0xc;
  this->MaxTreeDepth = 0x10;
  this->MaxPayloadBounds = 100000.0;
  this->MaxNumToProcess = 0;
  this->StartSliceTimeStamp = 0.0;
  this->CurrentProcessedNodesSinceChecked = 0;
  this->CurrentDataElementsCopiedSinceLastCheck = 0;
  this->bModifyingTreeMultiThreadingFastCheck = false;
  this->bShouldRebuild = true;
  this->bBuildOverlapCache = true;
  dVar1 = __real_3e45798ee0000000;
  dVar3 = (double)FAABBTreeDirtyGridCVars::DirtyElementGridCellSize;
  this->DirtyElementGridCellSize = dVar3;
  if (dVar1 < dVar3) {
    dVar2 = dVar2 / dVar3;
  }
  this->DirtyElementGridCellSizeInv = dVar2;
  this->DirtyElementMaxGridCellQueryCount =
       FAABBTreeDirtyGridCVars::DirtyElementMaxGridCellQueryCount;
  this->DirtyElementMaxPhysicalSizeInCells =
       FAABBTreeDirtyGridCVars::DirtyElementMaxPhysicalSizeInCells;
  this->DirtyElementMaxCellCapacity = FAABBTreeDirtyGridCVars::DirtyElementMaxCellCapacity;
  return this;
}

// ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_> @ 148c1a430

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  void *pvVar2;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TAABBTree_HU__TAABBTreeLeafArray_H_0A_N_Chaos___0A_NU__TDefaultAABBTreeStorageTraits_H_2__Chaos__6B_
  ;
  pFVar1 = (this->PriorityQ).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverlappingCounts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverlappingPairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverlappingOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverlappingLeaves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
            ((FWorkSnapshot *)(this->WorkPool).AllocatorInstance.Data,(this->WorkPool).ArrayNum);
  pFVar1 = (this->WorkPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkPoolFreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PayloadToInfo).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GlobalPayloads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->DirtyElementTree).Ptr;
  if (this_00 !=
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
              (this_00);
    ::operator_delete(this_00,0x1d8);
  }
  pFVar1 = (this->DirtyElementsGridOverflow).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FlattenedCellArrayOfDirtyIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CellHashToFlatArray).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CellHashToFlatArray).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Chaos::DirtyGridHashEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Chaos::DirtyGridHashEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Chaos::DirtyGridHashEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CellHashToFlatArray);
  pFVar1 = (this->DirtyElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::TAABBTreeLeafArray<int,0,double>,int>
            (*(TAABBTreeLeafArray<int,0,double> **)&this->Leaves,*(int *)&(this->Leaves).field_0x8);
  if (*(void **)&this->Leaves != (void *)0x0) {
    FMemory::Free(*(void **)&this->Leaves);
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator= @ 148c1acc0

TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
* __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::operator=(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            *this,TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  *param_1)

{
  int *piVar1;
  TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_> *pTVar3;
  undefined1 *puVar4;
  TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *pTVar5;
  TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
  *pTVar6;
  int iVar7;
  int iVar8;
  TAABBTreeNode<double> *pTVar9;
  TAABBTreeLeafArray<int,0,double> *pTVar10;
  FScriptContainerElement *_Src;
  code *pcVar11;
  int iVar12;
  bool bVar13;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar14;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar15;
  longlong local_28 [2];
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  if (((param_1->WorkStack).ArrayNum != 0) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089986242>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0xf3e,"Rhs.WorkStack.Num() == 0"), bVar13)) {
    pcVar11 = (code *)swi(3);
    pTVar14 = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)(*pcVar11)();
    return pTVar14;
  }
  pTVar14 = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             *)0x0;
  piVar1 = &(this->WorkStack).ArrayMax;
  (this->WorkStack).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->WorkStack).AllocatorInstance,0,piVar1);
  }
  DestructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
            ((FWorkSnapshot *)(this->WorkPool).AllocatorInstance.Data,(this->WorkPool).ArrayNum);
  piVar1 = &(this->WorkPool).ArrayMax;
  (this->WorkPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf8,8,0,&(this->WorkPool).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WorkPoolFreeList).ArrayMax;
  (this->WorkPoolFreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->WorkPoolFreeList).AllocatorInstance,0,piVar1);
  }
  if (this == param_1) {
    return this;
  }
  pTVar2 = &this->Nodes;
  if (pTVar2 != &param_1->Nodes) {
    iVar7 = (param_1->Nodes).ArrayNum;
    piVar1 = &(this->Nodes).ArrayMax;
    pTVar9 = (TAABBTreeNode<double> *)(param_1->Nodes).AllocatorInstance.Data;
    (this->Nodes).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar7,*piVar1,&pTVar2->AllocatorInstance,iVar7,piVar1);
      ConstructItems<Chaos::TAABBTreeNode<double>,Chaos::TAABBTreeNode<double>,int>
                ((pTVar2->AllocatorInstance).Data,pTVar9,iVar7);
    }
  }
  pTVar3 = &this->Leaves;
  if (pTVar3 != &param_1->Leaves) {
    DestructItems<Chaos::TAABBTreeLeafArray<int,0,double>,int>
              (*(TAABBTreeLeafArray<int,0,double> **)pTVar3,*(int *)&(this->Leaves).field_0x8);
    iVar7 = *(int *)&(param_1->Leaves).field_0x8;
    puVar4 = &(this->Leaves).field_0xc;
    pTVar10 = *(TAABBTreeLeafArray<int,0,double> **)&param_1->Leaves;
    *(int *)&(this->Leaves).field_0x8 = iVar7;
    if ((iVar7 == 0) && (*(int *)puVar4 == 0)) {
      *(undefined4 *)puVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,*(int *)puVar4,(ForAnyElementType *)pTVar3,iVar7,(int *)puVar4);
      ConstructItems<Chaos::TAABBTreeLeafArray<int,0,double>,Chaos::TAABBTreeLeafArray<int,0,double>,int>
                (*(void **)pTVar3,pTVar10,iVar7);
    }
  }
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->DirtyElements,&param_1->DirtyElements);
  this->bDynamicTree = param_1->bDynamicTree;
  this->RootNode = param_1->RootNode;
  this->FirstFreeInternalNode = param_1->FirstFreeInternalNode;
  this->FirstFreeLeafNode = param_1->FirstFreeLeafNode;
  TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
               *)&this->CellHashToFlatArray,
              (TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
               *)&param_1->CellHashToFlatArray);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->FlattenedCellArrayOfDirtyIndices,&param_1->FlattenedCellArrayOfDirtyIndices);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->DirtyElementsGridOverflow,&param_1->DirtyElementsGridOverflow);
  iVar7 = (param_1->TreeStats).StatNumElementsTooLargeForGrid;
  iVar8 = (param_1->TreeStats).StatNumDirtyElements;
  iVar12 = (param_1->TreeStats).StatNumGridOverflowElements;
  (this->TreeStats).StatNumNonEmptyCellsInGrid = (param_1->TreeStats).StatNumNonEmptyCellsInGrid;
  (this->TreeStats).StatNumElementsTooLargeForGrid = iVar7;
  (this->TreeStats).StatNumDirtyElements = iVar8;
  (this->TreeStats).StatNumGridOverflowElements = iVar12;
  iVar7 = (param_1->TreeExpensiveStats).StatMaxDirtyElements;
  iVar8 = (param_1->TreeExpensiveStats).StatMaxLeafSize;
  iVar12 = (param_1->TreeExpensiveStats).StatMaxTreeDepth;
  (this->TreeExpensiveStats).StatMaxNumLeaves = (param_1->TreeExpensiveStats).StatMaxNumLeaves;
  (this->TreeExpensiveStats).StatMaxDirtyElements = iVar7;
  (this->TreeExpensiveStats).StatMaxLeafSize = iVar8;
  (this->TreeExpensiveStats).StatMaxTreeDepth = iVar12;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize =
       (param_1->TreeExpensiveStats).StatGlobalPayloadsSize;
  this->DirtyElementGridCellSize = param_1->DirtyElementGridCellSize;
  this->DirtyElementGridCellSizeInv = param_1->DirtyElementGridCellSizeInv;
  this->DirtyElementMaxGridCellQueryCount = param_1->DirtyElementMaxGridCellQueryCount;
  this->DirtyElementMaxPhysicalSizeInCells = param_1->DirtyElementMaxPhysicalSizeInCells;
  this->DirtyElementMaxCellCapacity = param_1->DirtyElementMaxCellCapacity;
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->GlobalPayloads,&param_1->GlobalPayloads);
  pTVar5 = &this->PayloadToInfo;
  if (pTVar5 != &param_1->PayloadToInfo) {
    iVar7 = (param_1->PayloadToInfo).Entries.ArrayNum;
    piVar1 = &(this->PayloadToInfo).Entries.ArrayMax;
    _Src = (param_1->PayloadToInfo).Entries.AllocatorInstance.Data;
    iVar8 = *piVar1;
    (this->PayloadToInfo).Entries.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar7,iVar8,(ForAnyElementType *)pTVar5,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar5->Entries).AllocatorInstance.Data,_Src,(longlong)iVar7 * 0x18);
      }
    }
  }
  pTVar6 = &this->DirtyElementTree;
  this->MaxChildrenInLeaf = param_1->MaxChildrenInLeaf;
  this->MaxTreeDepth = param_1->MaxTreeDepth;
  this->MaxPayloadBounds = param_1->MaxPayloadBounds;
  this->MaxNumToProcess = param_1->MaxNumToProcess;
  this->NumProcessedThisSlice = param_1->NumProcessedThisSlice;
  this->StartSliceTimeStamp = param_1->StartSliceTimeStamp;
  this->bModifyingTreeMultiThreadingFastCheck = param_1->bModifyingTreeMultiThreadingFastCheck;
  this->bShouldRebuild = param_1->bShouldRebuild;
  this->bBuildOverlapCache = param_1->bBuildOverlapCache;
  if ((param_1->DirtyElementTree).Ptr ==
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    pTVar14 = pTVar6->Ptr;
    pTVar6->Ptr = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                   *)0x0;
    if (pTVar14 ==
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) {
      return this;
    }
    ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
              (pTVar14);
    ::operator_delete(pTVar14,0x1d8);
    return this;
  }
  if (pTVar6->Ptr ==
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    pTVar15 = ::operator_new(0x1d8);
    if (pTVar15 !=
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) {
      pTVar14 = TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                          (pTVar15);
    }
    if (pTVar6 == (TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
                   *)local_28) {
      if (pTVar14 ==
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)0x0) goto LAB_148c1b0b3;
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (pTVar14);
    }
    else {
      pTVar15 = pTVar6->Ptr;
      pTVar6->Ptr = pTVar14;
      if (pTVar15 ==
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)0x0) goto LAB_148c1b0b3;
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (pTVar15);
      pTVar14 = pTVar15;
    }
    ::operator_delete(pTVar14,0x1d8);
  }
LAB_148c1b0b3:
  operator=(pTVar6->Ptr,(param_1->DirtyElementTree).Ptr);
  return this;
}

// operator() @ 148c1c840

bool __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::ProgressCopyTimeSliced'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  double dVar1;
  bool bVar2;
  LARGE_INTEGER local_res20;
  
  bVar2 = true;
  if (param_1 != -1) {
    if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget) {
      *(int *)(*(longlong *)this + 0x14c) = *(int *)(*(longlong *)this + 0x14c) + 1;
      if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
          *(int *)(*(longlong *)this + 0x14c)) {
        *(undefined4 *)(*(longlong *)this + 0x14c) = 0;
        return true;
      }
      QueryPerformanceCounter(&local_res20);
      dVar1 = *(double *)(*(longlong *)this + 0x140);
      if ((__real_3e45798ee2308c3a <
           (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
         ((double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds <
          ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - dVar1)) {
        return false;
      }
    }
    else if ((-1 < param_1) && (param_1 <= param_2)) {
      bVar2 = false;
    }
  }
  return bVar2;
}

// operator() @ 148c1e310

void __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::SplitNode'::__l4::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  longlong *plVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  TPayloadBoundsElement<int,double> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ForAnyElementType local_38;
  undefined8 local_30;
  FScriptContainerElement local_28;
  
  uVar3 = *(uint *)this;
  plVar4 = *(longlong **)((longlong)this + 0x28);
  uVar12 = 0;
  if ((int)uVar3 < (int)plVar4[1]) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pbVar2 = (byte *)((longlong)(int)uVar3 * 0x70 + 0x6c + *plVar4);
  *pbVar2 = *pbVar2 | 1;
  uVar3 = *(uint *)((longlong)this + 0x18);
  plVar4 = *(longlong **)((longlong)this + 0x10);
  pFVar5 = *(ForAnyElementType **)((longlong)this + 0x20);
  uVar12 = 0;
  if ((int)uVar3 < (int)plVar4[1]) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar6 = *plVar4;
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar11 = *(int *)((longlong)(int)uVar3 * 0xf8 + 0x40 + lVar6);
  pTVar7 = *(TPayloadBoundsElement<int,double> **)((longlong)(int)uVar3 * 0xf8 + 0x38 + lVar6);
  local_30 = CONCAT44(local_30._4_4_,iVar11);
  if (iVar11 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar11,0,&local_38,iVar11,(int *)((longlong)&local_30 + 4));
    ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
              (local_38.Data,pTVar7,iVar11);
  }
  local_28 = (FScriptContainerElement)0x0;
  if ((pFVar5->Data <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 0x18)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar11 = *(int *)&pFVar5[1].Data;
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar11 + 1;
  pFVar8 = pFVar5->Data;
  *(undefined8 *)(pFVar8 + (longlong)iVar11 * 0x18) = 0;
  pFVar8 = pFVar8 + (longlong)iVar11 * 0x18;
  *(FScriptContainerElement **)pFVar8 = local_38.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(pFVar8 + 8) = (undefined4)local_30;
  *(undefined4 *)(pFVar8 + 0xc) = local_30._4_4_;
  local_30 = 0;
  pFVar8[0x10] = local_28;
  uVar3 = *(uint *)this;
  plVar4 = *(longlong **)((longlong)this + 0x28);
  uVar12 = 0;
  if ((int)uVar3 < (int)plVar4[1]) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  *(int *)((longlong)(int)uVar3 * 0x70 + 0x60 + *plVar4) = iVar11;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// operator() @ 148c1ec40

void __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>'::__l42::<lambda_3>::
operator()(void *this,double param_1,double param_2)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  double dVar13;
  undefined8 in_XMM2_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar14._8_8_ = in_XMM2_Qb;
  auVar14._0_8_ = param_2;
  lVar2 = *(longlong *)this;
  dVar6 = *(double *)(lVar2 + 0xd0) * param_2;
  dVar13 = *(double *)(lVar2 + 0xd0) * param_1;
  auVar15._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
       __real_3cb0000000000000 + dVar13;
  auVar15._8_8_ = 0;
  auVar14 = roundpd(auVar14,auVar15,1);
  auVar16._8_8_ = 0;
  auVar16._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
       __real_3cb0000000000000 + dVar6;
  auVar16 = roundpd(auVar15,auVar16,1);
  uVar9 = (uint)(longlong)auVar14._0_8_ & 0xffff;
  uVar9 = (uVar9 << 8 ^ uVar9) & 0xff00ff;
  uVar9 = (uVar9 << 4 ^ uVar9) & 0xf0f0f0f;
  uVar12 = (uVar9 * 4 ^ uVar9) & 0x33333333;
  uVar9 = (uint)(longlong)auVar16._0_8_ & 0xffff;
  uVar9 = (uVar9 << 8 ^ uVar9) & 0xff00ff;
  uVar9 = (uVar9 << 4 ^ uVar9) & 0xf0f0f0f;
  uVar12 = uVar12 * 2 ^ uVar12;
  uVar9 = (uVar9 * 4 ^ uVar9) & 0x33333333;
  uVar12 = ((uVar9 * 2 ^ uVar9) * 2 ^ uVar12) & 0xaaaaaaaa ^ uVar12;
  if (*(int *)(lVar2 + 0x58) != *(int *)(lVar2 + 0x84)) {
    lVar10 = *(longlong *)(lVar2 + 0x90);
    if (*(longlong *)(lVar2 + 0x90) == 0) {
      lVar10 = lVar2 + 0x88;
    }
    iVar8 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & uVar12) * 4);
    if (iVar8 != -1) {
      while (lVar10 = *(longlong *)(lVar2 + 0x50) + (longlong)iVar8 * 0x14,
            *(uint *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar8 * 0x14) != uVar12) {
        iVar8 = *(int *)(lVar10 + 0xc);
        if (iVar8 == -1) {
          return;
        }
      }
      pFVar11 = (FScriptContainerElement *)(lVar10 + 4);
      if (lVar10 == 0) {
        pFVar11 = (FScriptContainerElement *)0x0;
      }
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        if (((pFVar3->Data <= pFVar11) &&
            (pFVar11 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar8 + 1;
        pFVar4 = pFVar3->Data;
        *(undefined4 *)(pFVar4 + (longlong)iVar8 * 8) = *(undefined4 *)pFVar11;
        *(undefined4 *)(pFVar4 + (longlong)iVar8 * 8 + 4) = *(undefined4 *)(pFVar11 + 4);
      }
    }
  }
  return;
}

// AddNodesOverlappingLeaves @ 148c1fff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::AddNodesOverlappingLeaves
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TAABBTreeNode<double> *param_1,TAABB<double,3> *param_2,
          TAABBTreeNode<double> *param_3,TAABB<double,3> *param_4,bool param_5)

{
  TVector<double,3> *pTVar1;
  int *piVar2;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  double *pdVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  TVector<double,3> *pTVar15;
  longlong lVar16;
  uint local_98;
  uint uStack_94;
  double local_90 [13];
  
  lVar14 = 0;
  while( true ) {
    while( true ) {
      if (((param_5) && (!param_1->bDirtyNode)) && (!param_3->bDirtyNode)) {
        return;
      }
      pTVar1 = &param_4->MMax;
      pTVar15 = pTVar1;
      lVar16 = lVar14;
      do {
        dVar5 = *(double *)((longlong)pTVar15 + ((longlong)param_2 - (longlong)pTVar1));
        if (*(double *)pTVar15 <= dVar5 && dVar5 != *(double *)pTVar15) {
          return;
        }
        if (*(double *)((longlong)param_2 + (0x18 - (longlong)pTVar1) + (longlong)pTVar15) <
            *(double *)&((TAABB<double,3> *)(pTVar15 + -1))->MMin) {
          return;
        }
        lVar16 = lVar16 + 1;
        pTVar15 = (TVector<double,3> *)&pTVar15->field_0x8;
      } while (lVar16 < 3);
      uVar10 = 0;
      uVar11 = 0;
      if (param_1->bLeaf) break;
      uVar9 = param_1->ChildrenNodes[0];
      if ((int)uVar9 < (this->Nodes).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      AddNodesOverlappingLeaves
                (this,(TAABBTreeNode<double> *)
                      ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x70),
                 param_1->ChildrenBounds,param_3,param_4,param_5);
      uVar10 = param_1->ChildrenNodes[1];
      if ((int)uVar10 < (this->Nodes).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      param_2 = param_1->ChildrenBounds + 1;
      param_1 = (TAABBTreeNode<double> *)
                ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x70);
    }
    if (param_3->bLeaf) break;
    uVar11 = param_3->ChildrenNodes[0];
    uVar9 = uVar10;
    if ((int)uVar11 < (this->Nodes).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    AddNodesOverlappingLeaves
              (this,param_1,param_2,
               (TAABBTreeNode<double> *)
               ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x70),
               param_3->ChildrenBounds,param_5);
    uVar11 = param_3->ChildrenNodes[1];
    if ((int)uVar11 < (this->Nodes).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_4 = param_3->ChildrenBounds + 1;
    param_3 = (TAABBTreeNode<double> *)
              ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x70);
  }
  uVar10 = param_1->ChildrenNodes[0];
  uVar9 = param_3->ChildrenNodes[0];
  if (param_5) {
    uVar12 = uVar11;
    if ((int)uVar10 < *(int *)&(this->Leaves).field_0x8) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(char *)(*(longlong *)&this->Leaves + 0x10 + (longlong)(int)uVar10 * 0x18) == '\0') {
      uVar12 = uVar11;
      if ((int)uVar9 < *(int *)&(this->Leaves).field_0x8) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(char *)(*(longlong *)&this->Leaves + 0x10 + (longlong)(int)uVar9 * 0x18) == '\0') {
        return;
      }
    }
  }
  uVar12 = uVar11;
  if ((int)uVar10 < *(int *)&(this->Leaves).field_0x8) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_90[0] = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_90[1] = (double)_UNK_150a9e648;
  if ((int)uVar9 < *(int *)&(this->Leaves).field_0x8) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  local_90[2] = (double)___xmm_ffefffffffffffff7fefffffffffffff;
  local_90[3] = (double)_UNK_150a9e6d8;
  local_90[4] = (double)___xmm_ffefffffffffffffffefffffffffffff;
  local_90[5] = (double)_UNK_1508ffb58;
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_90[6] = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_90[7] = (double)_UNK_150a9e648;
  local_90[8] = (double)___xmm_ffefffffffffffff7fefffffffffffff;
  local_90[9] = (double)_UNK_150a9e6d8;
  local_90[10] = (double)___xmm_ffefffffffffffffffefffffffffffff;
  local_90[0xb] = (double)_UNK_1508ffb58;
  do {
    pdVar4 = (double *)((longlong)local_90 + lVar14 + 0x48);
    if (*pdVar4 <= *(double *)((longlong)local_90 + lVar14) &&
        *(double *)((longlong)local_90 + lVar14) != *pdVar4) {
      return;
    }
    if (*(double *)((longlong)local_90 + lVar14 + 0x18) <
        *(double *)((longlong)local_90 + lVar14 + 0x30)) {
      return;
    }
    lVar14 = lVar14 + 8;
  } while (lVar14 < 0x18);
  pTVar3 = &this->OverlappingPairs;
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  local_98 = uVar10;
  uStack_94 = uVar9;
  if (((pFVar6 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 <
       pFVar6 + (longlong)(this->OverlappingPairs).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = (this->OverlappingPairs).ArrayNum;
  piVar2 = &(this->OverlappingPairs).ArrayMax;
  if (iVar13 == *piVar2) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->OverlappingPairs).ArrayNum = iVar13 + 1;
  *(ulonglong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 8) =
       CONCAT44(uStack_94,local_98);
  uVar11 = 0;
  if ((int)uVar10 < (this->OverlappingCounts).ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->OverlappingCounts).AllocatorInstance.Data + (longlong)(int)uVar10 * 4;
  *(int *)pFVar6 = *(int *)pFVar6 + 1;
  uVar10 = 0;
  if ((int)uVar9 < (this->OverlappingCounts).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar6 = (this->OverlappingCounts).AllocatorInstance.Data + (longlong)(int)uVar9 * 4;
  *(int *)pFVar6 = *(int *)pFVar6 + 1;
  return;
}

// AddRootOverlappingLeaves @ 148c205a0

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::AddRootOverlappingLeaves
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TAABBTreeNode<double> *param_1,bool param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if (!param_1->bLeaf) {
    uVar1 = param_1->ChildrenNodes[0];
    uVar5 = 0;
    if ((int)uVar1 < (this->Nodes).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AddRootOverlappingLeaves
              (this,(TAABBTreeNode<double> *)
                    ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x70),param_2);
    uVar1 = param_1->ChildrenNodes[1];
    uVar5 = 0;
    if ((int)uVar1 < (this->Nodes).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AddRootOverlappingLeaves
              (this,(TAABBTreeNode<double> *)
                    ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x70),param_2);
    uVar1 = param_1->ChildrenNodes[1];
    uVar5 = 0;
    if ((int)uVar1 < (this->Nodes).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar5 = param_1->ChildrenNodes[0];
    pFVar2 = (this->Nodes).AllocatorInstance.Data;
    uVar6 = 0;
    if ((int)uVar5 < (this->Nodes).ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AddNodesOverlappingLeaves
              (this,(TAABBTreeNode<double> *)
                    ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x70),
               param_1->ChildrenBounds,
               (TAABBTreeNode<double> *)(pFVar2 + (longlong)(int)uVar1 * 0x70),
               param_1->ChildrenBounds + 1,param_2);
  }
  return;
}

// CacheOverlappingLeaves @ 148c20c90

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::CacheOverlappingLeaves
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this)

{
  if (this->bBuildOverlapCache != false) {
    ComputeOverlappingCacheFromRoot(this,false);
    return;
  }
  return;
}

// CanContinueProcessingNodes @ 148c226d0

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::CanContinueProcessingNodes
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,bool param_1)

{
  double dVar1;
  LARGE_INTEGER local_res18 [2];
  
  if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget) {
    if (!param_1) {
      this->CurrentProcessedNodesSinceChecked = this->CurrentProcessedNodesSinceChecked + 1;
      if (this->CurrentProcessedNodesSinceChecked <=
          FAABBTimeSliceCVars::MinNodesChunkToProcessBetweenTimeChecks) {
        return true;
      }
      this->CurrentProcessedNodesSinceChecked = 0;
    }
    QueryPerformanceCounter(local_res18);
    dVar1 = this->StartSliceTimeStamp;
    if ((((0.0 < FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds) &&
         (0 < this->MaxNumToProcess)) &&
        (__real_3e45798ee2308c3a <
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
       ((double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds <
        ((double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - dVar1)) {
      return false;
    }
  }
  else if (0 < this->MaxNumToProcess) {
    return this->NumProcessedThisSlice < this->MaxNumToProcess;
  }
  return true;
}

// ClearShouldRebuild @ 148c227c0

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::ClearShouldRebuild
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this)

{
  this->bShouldRebuild = false;
  return;
}

// ComputeOverlappingCacheFromRoot @ 148c23e00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::ComputeOverlappingCacheFromRoot
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,bool param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *this_02;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  uint uVar17;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined1 local_res18 [8];
  longlong local_res20;
  uint local_68;
  uint uStack_64;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *local_58;
  
  if ((this->bDynamicTree != false) && (this->RootNode != -1)) {
    this_00 = &this->OverlappingOffsets;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (this_00,*(int *)&(this->Leaves).field_0x8 + 1,No);
    this_01 = &this->OverlappingCounts;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_01,*(int *)&(this->Leaves).field_0x8,No);
    pTVar18 = &this->OverlappingPairs;
    uVar11 = 0;
    piVar1 = &(this->OverlappingPairs).ArrayMax;
    (this->OverlappingPairs).ArrayNum = 0;
    local_58 = pTVar18;
    if ((this->OverlappingPairs).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar18->AllocatorInstance,0,piVar1);
    }
    if (param_1) {
      FillPersistentOverlappingPairs(this);
      PropagateLeavesDirtyFlag(this);
    }
    else {
      lVar9 = (longlong)*(int *)&(this->Leaves).field_0x8;
      if (0 < lVar9) {
        lVar16 = 0;
        do {
          pFVar4 = (pTVar18->AllocatorInstance).Data;
          local_68 = uVar11;
          uStack_64 = uVar11;
          if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (this->OverlappingPairs).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&pTVar18->AllocatorInstance,piVar1);
          }
          (this->OverlappingPairs).ArrayNum = iVar8 + 1;
          *(ulonglong *)((pTVar18->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               CONCAT44(uStack_64,local_68);
          uVar10 = 0;
          if ((int)uVar11 < (this->OverlappingCounts).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 1;
          *(undefined4 *)((this_01->AllocatorInstance).Data + lVar16 * 4) = 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 < lVar9);
      }
    }
    uVar12 = 0;
    uVar11 = this->RootNode;
    uVar10 = 0;
    if ((int)uVar11 < (this->Nodes).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    AddRootOverlappingLeaves
              (this,(TAABBTreeNode<double> *)
                    ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x70),param_1);
    if (((this->OverlappingOffsets).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(this_00->AllocatorInstance).Data = 0;
    lVar9 = (longlong)*(int *)&(this->Leaves).field_0x8;
    if (0 < lVar9) {
      local_res20 = 0;
      uVar13 = uVar12;
      do {
        lVar16 = local_res20;
        uVar10 = (uint)uVar12;
        uVar14 = ~uVar10 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar10 < (this->OverlappingCounts).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this_01->AllocatorInstance).Data;
        uVar11 = 0;
        if ((int)uVar10 < (this->OverlappingOffsets).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = *(int *)((this_00->AllocatorInstance).Data + uVar13 * 4);
        iVar2 = *(int *)(pFVar4 + lVar16);
        uVar17 = uVar10 + 1;
        uVar11 = 0;
        if ((int)uVar17 < (this->OverlappingOffsets).ArrayNum) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)((this_00->AllocatorInstance).Data + uVar13 * 4 + 4) = iVar8 + iVar2;
        uVar11 = 0;
        if ((int)uVar10 < (this->OverlappingOffsets).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined4 *)((this_00->AllocatorInstance).Data + uVar13 * 4);
        uVar11 = 0;
        if ((int)uVar10 < (this->OverlappingCounts).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = (ulonglong)uVar17;
        *(undefined4 *)((this_01->AllocatorInstance).Data + uVar13 * 4) = uVar3;
        uVar13 = uVar13 + 1;
        local_res20 = local_res20 + 4;
        pTVar18 = local_58;
      } while ((longlong)uVar13 < lVar9);
    }
    iVar8 = (this->OverlappingOffsets).ArrayNum;
    this_02 = &this->OverlappingLeaves;
    uVar10 = iVar8 - 1;
    uVar11 = 0;
    if ((int)uVar10 < iVar8) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (this_02,*(int *)((this_00->AllocatorInstance).Data +
                               (longlong)(this->OverlappingOffsets).ArrayNum * 4 + -4),No);
    pFVar15 = (pTVar18->AllocatorInstance).Data;
    iVar8 = pTVar18->ArrayNum;
    pFVar4 = pFVar15 + (longlong)iVar8 * 8;
    while( true ) {
      if ((this->OverlappingPairs).ArrayNum != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::Math::TIntVector2<int>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar15 == pFVar4) break;
      uVar11 = *(uint *)pFVar15;
      lVar9 = (longlong)(int)uVar11;
      uVar10 = *(uint *)(pFVar15 + 4);
      iVar2 = (this->OverlappingCounts).ArrayNum;
      if (uVar11 == uVar10) {
        uVar10 = 0;
        if ((int)uVar11 < iVar2) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this_01->AllocatorInstance).Data;
        uVar10 = *(uint *)(pFVar5 + lVar9 * 4);
        *(uint *)(pFVar5 + lVar9 * 4) = uVar10 + 1;
        uVar14 = 0;
        if ((int)uVar10 < (this->OverlappingLeaves).ArrayNum) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar15 = pFVar15 + 8;
        *(uint *)((this_02->AllocatorInstance).Data + (longlong)(int)uVar10 * 4) = uVar11;
      }
      else {
        uVar14 = 0;
        if ((int)uVar11 < iVar2) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this_01->AllocatorInstance).Data;
        uVar11 = *(uint *)(pFVar5 + lVar9 * 4);
        *(uint *)(pFVar5 + lVar9 * 4) = uVar11 + 1;
        uVar14 = 0;
        if ((int)uVar11 < (this->OverlappingLeaves).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(uint *)((this_02->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) = uVar10;
        uVar11 = *(uint *)(pFVar15 + 4);
        uVar10 = *(uint *)pFVar15;
        uVar14 = 0;
        if ((int)uVar11 < (this->OverlappingCounts).ArrayNum) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this_01->AllocatorInstance).Data;
        uVar14 = *(uint *)(pFVar5 + (longlong)(int)uVar11 * 4);
        *(uint *)(pFVar5 + (longlong)(int)uVar11 * 4) = uVar14 + 1;
        uVar11 = 0;
        if ((int)uVar14 < (this->OverlappingLeaves).ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar15 = pFVar15 + 8;
        *(uint *)((this_02->AllocatorInstance).Data + (longlong)(int)uVar14 * 4) = uVar10;
      }
    }
    if (param_1) {
      lVar9 = (longlong)*(int *)&(this->Leaves).field_0x8;
      uVar11 = 0;
      if (0 < lVar9) {
        lVar16 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar11 < *(int *)&(this->Leaves).field_0x8) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 1;
          *(undefined1 *)(lVar16 + 0x10 + *(longlong *)&this->Leaves) = 0;
          lVar16 = lVar16 + 0x18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar9 = (longlong)(this->Nodes).ArrayNum;
      uVar11 = 0;
      if (0 < lVar9) {
        lVar16 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar11 < (this->Nodes).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 1;
          pFVar4 = (this->Nodes).AllocatorInstance.Data + lVar16 + 0x6c;
          *pFVar4 = (FScriptContainerElement)((byte)*pFVar4 & 0xfd);
          lVar16 = lVar16 + 0x70;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
  }
  return;
}

// Copy @ 148c25030

TUniquePtr<Chaos::ISpatialAcceleration<int,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,double,3>_>_>
 __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::Copy(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *this)

{
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar1;
  ISpatialAcceleration<int,double,3> *in_RDX;
  
  pTVar1 = ::operator_new(0x1d8);
  if (pTVar1 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)0x0) {
    pTVar1 = TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                       (pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<Chaos::ISpatialAcceleration<int,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,double,3>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<int,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,double,3>_>_>
          )in_RDX;
}

// DebugDraw @ 148c252e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::DebugDraw(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            *this,ISpacialDebugDrawInterface<double> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  FLinearColor *pFVar7;
  int iVar8;
  uint uVar9;
  FLinearColor local_48;
  TVector<double,3> local_38 [2];
  
  if (param_1 != (ISpacialDebugDrawInterface<double> *)0x0) {
    if (this->bDynamicTree == false) {
      iVar8 = 0;
    }
    else {
      iVar8 = this->RootNode;
    }
    iVar1 = (this->Nodes).ArrayNum;
    if (((0 < iVar1) && (-1 < iVar8)) && (iVar8 < iVar1)) {
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_38[0]._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
      local_38[0]._8_8_ = _UNK_150689688;
      local_38[0]._16_8_ = __real_3ff0000000000000;
      TAABBTreeNode<double>::DebugDraw
                ((TAABBTreeNode<double> *)
                 ((this->Nodes).AllocatorInstance.Data + (longlong)iVar8 * 0x70),param_1,
                 &this->Nodes,local_38,__real_40a00000);
    }
    fVar4 = __real_41200000;
    uVar9 = 0;
    if (0 < *(int *)&(this->Leaves).field_0x8) {
      do {
        uVar6 = 0;
        if ((int)uVar9 < *(int *)&(this->Leaves).field_0x8) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)&this->Leaves;
        pFVar7 = FLinearColor::MakeRandomColor(&local_48);
        TAABBTreeLeafArray<int,0,double>::DebugDrawLeaf
                  ((TAABBTreeLeafArray<int,0,double> *)(lVar2 + (longlong)(int)uVar9 * 0x18),param_1
                   ,pFVar7,fVar4);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < *(int *)&(this->Leaves).field_0x8);
    }
  }
  return;
}

// DebugGetElementsCollection @ 148c25480

FElementsCollection * __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::DebugGetElementsCollection
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,FElementsCollection *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FElementsCollection *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  ForAnyElementType *pFVar13;
  TPayloadBoundsElement<int,double> *pTVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  FElementsCollection *local_res10;
  uint local_res18;
  ForAnyElementType local_48;
  uint local_40 [2];
  
  uVar9 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_res10 = __return_storage_ptr__;
  if (0 < *(int *)&(this->Leaves).field_0x8) {
    lVar15 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&(this->Leaves).field_0x8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FElementsCollection *)(*pcVar2)();
        return pFVar7;
      }
      pFVar13 = (ForAnyElementType *)(*(longlong *)&this->Leaves + lVar15);
      if ((&local_48 == pFVar13) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FElementsCollection *)(*pcVar2)();
        return pFVar7;
      }
      iVar11 = *(int *)&pFVar13[1].Data;
      if (iVar11 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x38,8,iVar11,&local_48,(int *)local_40,(int *)(local_40 + 1));
        ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
                  (local_48.Data + (longlong)iVar6 * 0x38,
                   (TPayloadBoundsElement<int,double> *)pFVar13->Data,iVar11);
      }
      uVar9 = uVar9 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar9 < *(int *)&(this->Leaves).field_0x8);
  }
  uVar8 = (ulonglong)(int)local_40[0];
  iVar11 = 0;
  iVar6 = 0;
  local_res18 = local_40[0];
  pTVar14 = (TPayloadBoundsElement<int,double> *)(local_48.Data + uVar8 * 0x38);
  FVar16.Data = local_48.Data;
  do {
    if (local_40[0] != (uint)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    FVar3.Data = local_48.Data;
    pFVar7 = local_res10;
    if ((TPayloadBoundsElement<int,double> *)FVar16.Data == pTVar14) {
      uVar9 = local_40[0];
      piVar1 = &(local_res10->AllElements).ArrayMax;
      (local_res10->AllElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_res10->AllElements).ArrayNum = local_40[0];
      if (local_40[0] == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,local_40[0],0,(ForAnyElementType *)local_res10,local_40[0],piVar1);
        ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
                  ((pFVar7->AllElements).AllocatorInstance.Data,
                   (TPayloadBoundsElement<int,double> *)FVar3.Data,uVar9);
      }
      pFVar7->DepthTotal = iVar6;
      pFVar7->MaxDepth = iVar11;
      pFVar7->DirtyElementCount = (this->DirtyElements).ArrayNum;
      if ((TPayloadBoundsElement<int,double> *)local_48.Data !=
          (TPayloadBoundsElement<int,double> *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return pFVar7;
    }
    uVar9 = ((TPayloadBoundsElement<int,double> *)FVar16.Data)->Payload;
    if (((int)uVar9 < 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7431867033672745173>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0xd5,"Payload >=0"), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FElementsCollection *)(*pcVar2)();
      return pFVar7;
    }
    if ((int)uVar9 < (this->PayloadToInfo).Entries.ArrayNum) {
      if (((int)uVar9 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FElementsCollection *)(*pcVar2)();
        return pFVar7;
      }
      if ((this->PayloadToInfo).Entries.AllocatorInstance.Data[(longlong)(int)uVar9 * 0x18 + 0x14]
          != (FScriptContainerElement)0x0) {
        uVar5 = 0;
        if ((int)uVar9 < (this->PayloadToInfo).Entries.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FElementsCollection *)(*pcVar2)();
          return pFVar7;
        }
        pFVar10 = (this->PayloadToInfo).Entries.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18
        ;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          uVar9 = *(uint *)(pFVar10 + 0x10);
          iVar12 = 0;
          if (uVar9 != 0xffffffff) {
            while( true ) {
              uVar5 = 0;
              if ((int)uVar9 < (this->Nodes).ArrayNum) {
                uVar5 = ~uVar9 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pFVar7 = (FElementsCollection *)(*pcVar2)();
                return pFVar7;
              }
              uVar9 = *(uint *)((this->Nodes).AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 0x70 + 0x68);
              if (uVar9 == 0xffffffff) break;
              iVar12 = iVar12 + 1;
            }
          }
          if (iVar11 < iVar12) {
            iVar11 = iVar12;
          }
          iVar6 = iVar6 + iVar12;
        }
      }
    }
    uVar8 = (ulonglong)local_res18;
    FVar16.Data = FVar16.Data + 0x38;
  } while( true );
}

// DeepAssign @ 148c25820

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::DeepAssign(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             *this,ISpatialAcceleration<int,double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Type != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.GetType() == ESpatialAcceleration::AABBTree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                       ,0xf37,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  operator=(this,(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  *)param_1);
  return;
}

// DumpStats @ 148c25bf0

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::DumpStats(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            *this)

{
  FOutputDeviceRedirector *pFVar1;
  
  pFVar1 = GetGlobalLogSingleton();
  if (pFVar1 != (FOutputDeviceRedirector *)0x0) {
    pFVar1 = GetGlobalLogSingleton();
    DumpStatsTo(this,(FOutputDevice *)pFVar1);
    return;
  }
  return;
}

// DumpStatsTo @ 148c25c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::DumpStatsTo(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
              *this,FOutputDevice *param_1)

{
  FElementsCollection local_48;
  
  DebugGetElementsCollection(this,&local_48);
  FOutputDevice::LogfImpl(param_1,Log,L"\t\tContains %d elements");
  FOutputDevice::LogfImpl(param_1,Log,L"\t\tMax depth is %d");
  FOutputDevice::LogfImpl(param_1,Log,L"\t\tAvg depth is %.3f");
  FOutputDevice::LogfImpl(param_1,Log,L"\t\tDirty element count is %d");
  FOutputDevice::LogfImpl(param_1,Log,L"\t\tPayload container size is %d elements");
  FOutputDevice::LogfImpl(param_1,Log,L"\t\tPayload container capacity is %d elements");
  FOutputDevice::LogfImpl
            (param_1,Log,
             L"\t\tAllocated size of payload container is %u bytes (%u per tree element)");
  if ((this->DirtyElementTree).Ptr !=
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    FOutputDevice::LogfImpl(param_1,Log,L"");
    FOutputDevice::LogfImpl(param_1,Log,L"\t\tDirty Tree:");
    DumpStatsTo((this->DirtyElementTree).Ptr,param_1);
  }
  if (local_48.AllElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllElements.AllocatorInstance.Data);
  }
  return;
}

// FillPersistentOverlappingPairs @ 148c26c90

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::FillPersistentOverlappingPairs
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this)

{
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  int local_res8;
  uint local_78;
  undefined4 uStack_74;
  uint local_70;
  uint uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  local_58 = (longlong)*(int *)&(this->Leaves).field_0x8;
  uVar16 = 0;
  if (0 < local_58) {
    pTVar1 = &this->OverlappingPairs;
    local_68 = 0;
    local_60 = 0;
    do {
      lVar11 = local_60;
      lVar12 = local_68;
      local_res8 = 0;
      uVar13 = ~uVar16 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar16 < *(int *)&(this->Leaves).field_0x8) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = 0;
      if (*(char *)(*(longlong *)&this->Leaves + 0x10 + lVar11) == '\0') {
        uVar14 = 0;
        if ((int)uVar16 < (this->OverlappingOffsets).ArrayNum) {
          uVar14 = uVar13;
        }
        if ((uVar14 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = (ulonglong)*(int *)((this->OverlappingOffsets).AllocatorInstance.Data + lVar12 * 4)
        ;
        lVar10 = uVar15 * 4;
        while( true ) {
          uVar14 = 0;
          if ((int)(uVar16 + 1) < (this->OverlappingOffsets).ArrayNum) {
            uVar14 = ~(uVar16 + 1) >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar14 = (uint)uVar15;
          lVar11 = local_60;
          iVar8 = local_res8;
          if (*(int *)((this->OverlappingOffsets).AllocatorInstance.Data + lVar12 * 4 + 4) <=
              (int)uVar14) break;
          pTVar2 = &this->OverlappingLeaves;
          uVar17 = ~uVar14 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar14 < (this->OverlappingLeaves).ArrayNum) {
            uVar6 = uVar17;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar6 = *(uint *)((pTVar2->AllocatorInstance).Data + lVar10);
          uVar7 = 0;
          if ((int)uVar6 < *(int *)&(this->Leaves).field_0x8) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(char *)(*(longlong *)&this->Leaves + 0x10 + (longlong)(int)uVar6 * 0x18) == '\0') {
            uVar6 = 0;
            if ((int)uVar14 < (this->OverlappingLeaves).ArrayNum) {
              uVar6 = uVar17;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((int)uVar16 < *(int *)((pTVar2->AllocatorInstance).Data + lVar10)) {
              uVar6 = 0;
              if ((int)uVar14 < (this->OverlappingLeaves).ArrayNum) {
                uVar6 = uVar17;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uStack_74 = *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar10);
              pFVar3 = (pTVar1->AllocatorInstance).Data;
              local_78 = uVar16;
              if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
                  ((FScriptContainerElement *)&local_78 <
                   pFVar3 + (longlong)(this->OverlappingPairs).ArrayMax * 8)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = (this->OverlappingPairs).ArrayNum;
              piVar18 = &(this->OverlappingPairs).ArrayMax;
              if (iVar8 == *piVar18) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&pTVar1->AllocatorInstance,piVar18);
              }
              (this->OverlappingPairs).ArrayNum = iVar8 + 1;
              *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
                   CONCAT44(uStack_74,local_78);
            }
            uVar6 = 0;
            if ((int)uVar14 < (this->OverlappingLeaves).ArrayNum) {
              uVar6 = uVar17;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (uVar16 != *(uint *)((this->OverlappingLeaves).AllocatorInstance.Data + lVar10)) {
              local_res8 = local_res8 + 1;
            }
          }
          uVar15 = (ulonglong)(uVar14 + 1);
          lVar10 = lVar10 + 4;
          lVar12 = local_68;
        }
      }
      piVar18 = &(this->OverlappingPairs).ArrayMax;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      local_70 = uVar16;
      uStack_6c = uVar16;
      if (((pFVar3 <= (FScriptContainerElement *)&local_70) &&
          ((FScriptContainerElement *)&local_70 <
           pFVar3 + (longlong)(this->OverlappingPairs).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->OverlappingPairs).ArrayNum;
      if (iVar9 == *piVar18) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar1->AllocatorInstance,piVar18);
      }
      (this->OverlappingPairs).ArrayNum = iVar9 + 1;
      *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           CONCAT44(uStack_6c,local_70);
      uVar14 = 0;
      if ((int)uVar16 < (this->OverlappingCounts).ArrayNum) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_60 = lVar11 + 0x18;
      uVar16 = uVar16 + 1;
      *(int *)((this->OverlappingCounts).AllocatorInstance.Data + lVar12 * 4) = iVar8 + 1;
      local_68 = lVar12 + 1;
    } while (local_68 < local_58);
  }
  return;
}

// FindAllIntersections @ 148c27620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::FindAllIntersections
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TAABB<double,3> *param_1)

{
  undefined1 auStackY_f8 [32];
  FSimpleVisitor local_a8;
  TVector<double,3> local_a0;
  TVector<double,3> local_88;
  undefined1 local_68 [16];
  longlong lStack_58;
  longlong local_50;
  bool local_38 [8];
  TVector<double,3> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_50 = 0;
  local_68._0_8_ = &local_30;
  local_38[0] = false;
  local_38[1] = false;
  local_38[2] = false;
  local_a0._16_8_ = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._16_8_ = 0;
  local_68._8_8_ = 0;
  lStack_58 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a8.CollectedResults = __return_storage_ptr__;
  QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
            (this,&local_88,(FQueryFastDataVoid *)local_68,&local_a0,param_1,&local_a8,
             (TVector<double,3> *)local_68._0_8_,(TVector<double,3> *)(local_68 + 8),local_38);
  return __return_storage_ptr__;
}

// FindBestBounds @ 148c276e0

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::FindBestBounds(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *this,int param_1,int *param_2,FWorkSnapshot *param_3,int param_4,
                TVector<double,3> *param_5)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  LARGE_INTEGER local_res8;
  int local_res10;
  int *local_res18;
  
  uVar22 = (ulonglong)param_4;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((2 < (uint)param_4) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7ab,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar13 = __real_4170000000000000;
  dVar12 = __real_3fe0000000000000;
  dVar11 = __real_3e45798ee2308c3a;
  iVar19 = *param_2;
  dVar2 = *(double *)(&param_5->field_0x0 + uVar22 * 8);
  if (param_1 < iVar19) {
    lVar23 = (longlong)param_1 * 0x38;
    uVar21 = param_1;
    while( true ) {
      uVar17 = 0;
      if ((int)uVar21 < (param_3->Elems).ArrayNum) {
        uVar17 = ~uVar21 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar24 = (param_3->Elems).AllocatorInstance.Data + lVar23;
      dVar8 = (*(double *)(pFVar24 + 0x20) - *(double *)(pFVar24 + 8)) * dVar12 +
              *(double *)(pFVar24 + 8);
      dVar9 = (*(double *)(pFVar24 + 0x28) - *(double *)(pFVar24 + 0x10)) * dVar12 +
              *(double *)(pFVar24 + 0x10);
      dVar7 = (*(double *)(pFVar24 + 0x30) - *(double *)(pFVar24 + 0x18)) * dVar12 +
              *(double *)(pFVar24 + 0x18);
      dVar27 = dVar9;
      if (((int)uVar22 != 1) && (dVar27 = dVar8, (int)uVar22 == 2)) {
        dVar27 = dVar7;
      }
      lVar25 = 0xc0;
      if (dVar27 <= dVar2) {
        lVar25 = 0x88;
      }
      uVar17 = *(uint *)((longlong)param_3->SplitInfos + lVar25 + -0x58);
      uVar18 = 0;
      if ((int)uVar17 < (this->WorkPool).ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->WorkPool).AllocatorInstance.Data;
      lVar26 = (longlong)(int)uVar17 * 0xf8;
      if (((*(FScriptContainerElement **)(pFVar4 + lVar26 + 0x38) <= pFVar24) &&
          (pFVar24 < *(FScriptContainerElement **)(pFVar4 + lVar26 + 0x38) +
                     (longlong)*(int *)(pFVar4 + lVar26 + 0x44) * 0x38)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = *(int *)(pFVar4 + lVar26 + 0x40);
      if (iVar19 == *(int *)(pFVar4 + lVar26 + 0x44)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)(pFVar4 + lVar26 + 0x38),
                            (int *)(pFVar4 + lVar26 + 0x44));
      }
      lVar5 = *(longlong *)(pFVar4 + lVar26 + 0x38);
      *(int *)(pFVar4 + lVar26 + 0x40) = iVar19 + 1;
      lVar20 = (longlong)iVar19 * 0x38;
      *(undefined4 *)(lVar20 + lVar5) = *(undefined4 *)pFVar24;
      uVar10 = *(undefined8 *)(pFVar24 + 0x10);
      puVar1 = (undefined8 *)(lVar20 + 8 + lVar5);
      *puVar1 = *(undefined8 *)(pFVar24 + 8);
      puVar1[1] = uVar10;
      *(undefined8 *)(lVar20 + 0x18 + lVar5) = *(undefined8 *)(pFVar24 + 0x18);
      uVar10 = *(undefined8 *)(pFVar24 + 0x28);
      puVar1 = (undefined8 *)(lVar20 + 0x20 + lVar5);
      *puVar1 = *(undefined8 *)(pFVar24 + 0x20);
      puVar1[1] = uVar10;
      *(undefined8 *)(lVar20 + 0x30 + lVar5) = *(undefined8 *)(pFVar24 + 0x30);
      dVar27 = *(double *)((longlong)&param_3->TimeslicePhase + lVar25);
      dVar3 = *(double *)(pFVar24 + 8);
      if (dVar27 <= *(double *)(pFVar24 + 8)) {
        dVar3 = dVar27;
      }
      dVar27 = *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x80);
      dVar29 = *(double *)(pFVar24 + 0x10);
      if (dVar27 <= *(double *)(pFVar24 + 0x10)) {
        dVar29 = dVar27;
      }
      dVar27 = *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x78);
      dVar28 = *(double *)(pFVar24 + 0x18);
      if (dVar27 <= *(double *)(pFVar24 + 0x18)) {
        dVar28 = dVar27;
      }
      *(double *)((longlong)&param_3->TimeslicePhase + lVar25) = dVar3;
      *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x80) = dVar29;
      *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x78) = dVar28;
      dVar27 = *(double *)(pFVar24 + 0x20);
      if (*(double *)(pFVar24 + 0x20) <= *(double *)((longlong)(param_3->SplitInfos + -2) + lVar25))
      {
        dVar27 = *(double *)((longlong)(param_3->SplitInfos + -2) + lVar25);
      }
      bVar16 = true;
      dVar3 = *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x60);
      dVar29 = *(double *)(pFVar24 + 0x30);
      if (*(double *)(pFVar24 + 0x30) <= dVar3) {
        dVar29 = dVar3;
      }
      dVar3 = *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x68);
      dVar28 = *(double *)(pFVar24 + 0x28);
      if (*(double *)(pFVar24 + 0x28) <= dVar3) {
        dVar28 = dVar3;
      }
      *(double *)((longlong)(param_3->SplitInfos + -2) + lVar25) = dVar27;
      *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x68) = dVar28;
      *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x60) = dVar29;
      dVar27 = *(double *)(pFVar4 + lVar26 + 0x58);
      dVar3 = *(double *)(pFVar4 + lVar26 + 0x50);
      dVar29 = *(double *)(pFVar4 + lVar26 + 0x48);
      dVar30 = __real_3ff0000000000000 / (double)(iVar19 + 1);
      dVar28 = (dVar9 - dVar3) * dVar30 + *(double *)(pFVar4 + lVar26 + 0x50);
      dVar31 = dVar30 * (dVar8 - dVar29) + *(double *)(pFVar4 + lVar26 + 0x48);
      dVar30 = (dVar7 - dVar27) * dVar30 + *(double *)(pFVar4 + lVar26 + 0x58);
      *(double *)(pFVar4 + lVar26 + 0x50) = dVar28;
      *(double *)(pFVar4 + lVar26 + 0x48) = dVar31;
      *(double *)(pFVar4 + lVar26 + 0x58) = dVar30;
      *(double *)(pFVar4 + lVar26 + 0x68) =
           (dVar9 - dVar28) * (dVar9 - dVar3) + *(double *)(pFVar4 + lVar26 + 0x68);
      *(double *)(pFVar4 + lVar26 + 0x60) =
           (dVar8 - dVar31) * (dVar8 - dVar29) + *(double *)(pFVar4 + lVar26 + 0x60);
      *(double *)(pFVar4 + lVar26 + 0x70) =
           (dVar7 - dVar30) * (dVar7 - dVar27) + *(double *)(pFVar4 + lVar26 + 0x70);
      if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) break;
      this->CurrentProcessedNodesSinceChecked = this->CurrentProcessedNodesSinceChecked + 1;
      if (FAABBTimeSliceCVars::MinNodesChunkToProcessBetweenTimeChecks <
          this->CurrentProcessedNodesSinceChecked) {
        this->CurrentProcessedNodesSinceChecked = 0;
        QueryPerformanceCounter(&local_res8);
        dVar7 = this->StartSliceTimeStamp;
        if (((0.0 < FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds) &&
            (0 < this->MaxNumToProcess)) &&
           ((dVar11 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar15,
                                       SUB84(dVar7,0) & uVar14) &&
            ((double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds <
             ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar13) - dVar7)
            ))) {
          bVar16 = false;
        }
      }
LAB_148c27b93:
      iVar19 = *local_res18;
      if (!bVar16) goto LAB_148c27bd8;
      lVar23 = lVar23 + 0x38;
      param_1 = local_res10;
      if (iVar19 <= (int)(uVar21 + 1)) goto LAB_148c27c4b;
      uVar22 = (ulonglong)(uint)param_4;
      uVar21 = uVar21 + 1;
    }
    if ((this->MaxNumToProcess < 1) || (this->NumProcessedThisSlice < this->MaxNumToProcess))
    goto LAB_148c27b93;
    iVar19 = *local_res18;
LAB_148c27bd8:
    if (uVar21 != iVar19 - 1U) {
      iVar19 = uVar21 + 1;
    }
    *local_res18 = iVar19;
    param_1 = local_res10;
  }
LAB_148c27c4b:
  this->NumProcessedThisSlice = this->NumProcessedThisSlice + (iVar19 - param_1);
  return;
}

// FreeWorkSnapshot @ 148c28bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::FreeWorkSnapshot(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                   *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_198 [32];
  int *local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  int local_148 [6];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  FScriptContainerElement local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  iVar7 = (this->WorkPool).ArrayNum;
  local_108 = __real_ffefffffffffffff;
  local_88 = __real_ffefffffffffffff;
  uVar6 = 0;
  if (param_1 < iVar7) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  local_130 = __real_7fefffffffffffff;
  local_b0 = __real_7fefffffffffffff;
  uStack_128 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uStack_120 = _UNK_150a9e648;
  local_118 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_110 = _UNK_1508ffb58;
  uStack_a8 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uStack_a0 = _UNK_150a9e648;
  local_98 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_90 = _UNK_1508ffb58;
  local_78 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uStack_70 = _UNK_150a9e648;
  local_68 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_60 = _UNK_150a9e6d8;
  local_58 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_50 = _UNK_1508ffb58;
  local_148[0] = param_1;
  if (uVar6 == 0) {
    local_178 = (int *)(longlong)param_1;
    local_170 = (FScriptContainerElement *)(longlong)iVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->WorkPool).AllocatorInstance.Data;
  lVar8 = (longlong)param_1 * 0xf8;
  pFVar9 = pFVar3 + lVar8 + 0x38;
  *(undefined4 *)(pFVar3 + lVar8) = 0;
  *(undefined8 *)(pFVar3 + lVar8 + 8) = local_130;
  *(undefined8 *)(pFVar3 + lVar8 + 8 + 8) = uStack_128;
  *(undefined8 *)(pFVar3 + lVar8 + 0x18) = uStack_120;
  *(undefined8 *)(pFVar3 + lVar8 + 0x20) = local_118;
  *(undefined8 *)(pFVar3 + lVar8 + 0x20 + 8) = uStack_110;
  *(undefined8 *)(pFVar3 + lVar8 + 0x30) = local_108;
  if (pFVar9 != local_100) {
    if (*(void **)pFVar9 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar9);
    }
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)(pFVar9 + 8) = 0;
  }
  *(undefined4 *)(pFVar3 + lVar8 + 0x78) = local_c0;
  *(undefined8 *)(pFVar3 + lVar8 + 0x48) = local_f0;
  *(undefined8 *)(pFVar3 + lVar8 + 0x48 + 8) = uStack_e8;
  *(undefined4 *)(pFVar3 + lVar8 + 0x7c) = local_bc;
  *(undefined8 *)(pFVar3 + lVar8 + 0x60) = local_d8;
  *(undefined8 *)(pFVar3 + lVar8 + 0x60 + 8) = uStack_d0;
  *(undefined4 *)(pFVar3 + lVar8 + 0x80) = local_b8;
  *(undefined8 *)(pFVar3 + lVar8 + 0x58) = local_e0;
  *(undefined8 *)(pFVar3 + lVar8 + 0x70) = local_c8;
  *(undefined8 *)(pFVar3 + lVar8 + 0x88) = local_b0;
  *(undefined8 *)(pFVar3 + lVar8 + 0x88 + 8) = uStack_a8;
  *(undefined8 *)(pFVar3 + lVar8 + 0x98) = uStack_a0;
  *(undefined8 *)(pFVar3 + lVar8 + 0xa0) = local_98;
  *(undefined8 *)(pFVar3 + lVar8 + 0xa0 + 8) = uStack_90;
  *(undefined8 *)(pFVar3 + lVar8 + 0xb0) = local_88;
  *(undefined4 *)(pFVar3 + lVar8 + 0xb8) = local_80;
  *(undefined8 *)(pFVar3 + lVar8 + 0xc0) = local_78;
  *(undefined8 *)(pFVar3 + lVar8 + 0xc0 + 8) = uStack_70;
  *(undefined8 *)(pFVar3 + lVar8 + 0xd0) = local_68;
  *(undefined8 *)(pFVar3 + lVar8 + 0xd8) = uStack_60;
  *(undefined8 *)(pFVar3 + lVar8 + 0xd8 + 8) = local_58;
  *(undefined8 *)(pFVar3 + lVar8 + 0xe8) = uStack_50;
  *(undefined4 *)(pFVar3 + lVar8 + 0xf0) = local_48;
  pTVar2 = &this->WorkPoolFreeList;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_148) &&
     (lVar8 = (longlong)(this->WorkPoolFreeList).ArrayMax,
     (FScriptContainerElement *)local_148 < pFVar3 + lVar8 * 4)) {
    local_160 = (longlong)(this->WorkPoolFreeList).ArrayNum;
    local_158 = 4;
    local_178 = local_148;
    local_170 = pFVar3;
    local_168 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->WorkPoolFreeList).ArrayNum;
  piVar1 = &(this->WorkPoolFreeList).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->WorkPoolFreeList).ArrayNum = iVar7 + 1;
  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_148[0];
  return;
}

// GetCVars @ 148c2c0c0

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::GetCVars(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = __real_3e45798ee0000000;
  dVar2 = __real_3ff0000000000000;
  dVar3 = (double)FAABBTreeDirtyGridCVars::DirtyElementGridCellSize;
  this->DirtyElementGridCellSize = dVar3;
  if (dVar1 < dVar3) {
    dVar2 = dVar2 / dVar3;
  }
  this->DirtyElementGridCellSizeInv = dVar2;
  this->DirtyElementMaxGridCellQueryCount =
       FAABBTreeDirtyGridCVars::DirtyElementMaxGridCellQueryCount;
  this->DirtyElementMaxPhysicalSizeInCells =
       FAABBTreeDirtyGridCVars::DirtyElementMaxPhysicalSizeInCells;
  this->DirtyElementMaxCellCapacity = FAABBTreeDirtyGridCVars::DirtyElementMaxCellCapacity;
  return;
}

// GetLastIndexToProcess @ 148c2c120

int __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::GetLastIndexToProcess
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  uVar7 = (uint)~param_1 >> 0x1f;
  if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget) {
    uVar6 = 0;
    if (param_1 < (this->WorkPool).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    return *(int *)((this->WorkPool).AllocatorInstance.Data + lVar8 * 0xf8 + 0x40);
  }
  iVar4 = this->MaxNumToProcess;
  iVar1 = this->NumProcessedThisSlice;
  iVar5 = (this->WorkPool).ArrayNum;
  if (iVar4 < 1) {
    uVar6 = 0;
    if (param_1 < iVar5) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar5 = *(int *)((this->WorkPool).AllocatorInstance.Data + lVar8 * 0xf8 + 0x40);
  }
  else {
    uVar6 = 0;
    if (param_1 < iVar5) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar5 = *(int *)((this->WorkPool).AllocatorInstance.Data + lVar8 * 0xf8 + 0x40);
    uVar6 = 0;
    if (param_1 < (this->WorkPool).ArrayNum) {
      uVar6 = uVar7;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar4 = *(int *)((this->WorkPool).AllocatorInstance.Data + lVar8 * 0xf8 + 0x80) +
            (iVar4 - iVar1);
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
  }
  return iVar5;
}

// GetNewWorkSnapshot @ 148c2c770

int __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::GetNewWorkSnapshot
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (this->WorkPoolFreeList).ArrayNum;
  if (iVar3 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf8,8,1,&(this->WorkPool).AllocatorInstance,&(this->WorkPool).ArrayNum,
                       &(this->WorkPool).ArrayMax);
    DefaultConstructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
              ((this->WorkPool).AllocatorInstance.Data + (longlong)iVar3 * 0xf8,1);
    return iVar3;
  }
  if (iVar3 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = (this->WorkPoolFreeList).ArrayNum;
  iVar4 = iVar3 + -1;
  iVar3 = *(int *)((this->WorkPoolFreeList).AllocatorInstance.Data + (longlong)iVar3 * 4 + -4);
  (this->WorkPoolFreeList).ArrayNum = iVar4;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->WorkPoolFreeList).AllocatorInstance,iVar4,
             &(this->WorkPoolFreeList).ArrayMax);
  return iVar3;
}

// IsTreeDynamic @ 148c2da90

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::IsTreeDynamic(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                *this)

{
  return this->bDynamicTree;
}

// NeedUpdateElement @ 148c2e1c0

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::NeedUpdateElement(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                    *this,int *param_1,TAABB<double,3> *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  FAABBTreePayloadInfo *pFVar12;
  TVector<double,3> *pTVar13;
  TAABB<double,3> *pTVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  
  bVar9 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9181246422089988275>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                     ,0x74d,"bMutable");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar12 = TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Find(&this->PayloadToInfo,param_1);
  if (((pFVar12 == (FAABBTreePayloadInfo *)0x0) || (this->bDynamicTree == false)) ||
     (pFVar12->LeafIdx == -1)) {
LAB_148c2e4ca:
    bVar9 = true;
  }
  else {
    uVar11 = pFVar12->NodeIdx;
    uVar19 = 0;
    uVar18 = 0;
    if ((int)uVar11 < (this->Nodes).ArrayNum) {
      uVar18 = ~uVar11 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pFVar4 = (this->Nodes).AllocatorInstance.Data;
    pTVar14 = param_2;
    uVar17 = uVar19;
    do {
      dVar3 = *(double *)&pTVar14->MMin;
      if ((dVar3 < *(double *)
                    (pFVar4 + ((longlong)(int)uVar11 * 0x70 - (longlong)param_2) + (longlong)pTVar14
                    )) ||
         (*(double *)
           (pFVar4 + ((longlong)(int)uVar11 * 0x70 - (longlong)param_2) + 0x18 + (longlong)pTVar14)
          <= dVar3 &&
          dVar3 != *(double *)
                    (pFVar4 + ((longlong)(int)uVar11 * 0x70 - (longlong)param_2) + 0x18 +
                    (longlong)pTVar14))) goto LAB_148c2e4ca;
      uVar17 = uVar17 + 1;
      pTVar14 = (TAABB<double,3> *)&(pTVar14->MMin).field_0x8;
    } while ((longlong)uVar17 < 3);
    pTVar13 = &param_2->MMax;
    lVar21 = (longlong)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x18) - (longlong)pTVar13;
    uVar17 = uVar19;
    do {
      dVar3 = *(double *)pTVar13;
      pdVar1 = (double *)(lVar21 + (longlong)pTVar13);
      if ((dVar3 < *(double *)
                    (pFVar4 + ((longlong)(int)uVar11 * 0x70 -
                              (longlong)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x18)) +
                    (longlong)pdVar1)) || (*pdVar1 <= dVar3 && dVar3 != *pdVar1))
      goto LAB_148c2e4ca;
      uVar17 = uVar17 + 1;
      pTVar13 = (TVector<double,3> *)&pTVar13->field_0x8;
    } while ((longlong)uVar17 < 3);
    uVar11 = pFVar12->LeafIdx;
    lVar21 = (longlong)(int)uVar11;
    uVar18 = 0;
    if ((int)uVar11 < *(int *)&(this->Leaves).field_0x8) {
      uVar18 = ~uVar11 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    lVar5 = *(longlong *)&this->Leaves;
    iVar16 = *(int *)(lVar5 + 8 + lVar21 * 0x18);
    uVar17 = uVar19;
    if (iVar16 < 1) {
LAB_148c2e4c1:
      bVar9 = false;
    }
    else {
      do {
        uVar18 = (uint)uVar19;
        uVar20 = ~uVar18 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar18 < iVar16) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        iVar16 = *(int *)(lVar5 + 8 + lVar21 * 0x18);
        if (*(int *)(uVar17 + *(longlong *)(lVar5 + lVar21 * 0x18)) == *param_1) {
          uVar11 = 0;
          if ((int)uVar18 < iVar16) {
            uVar11 = uVar20;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          lVar6 = *(longlong *)(lVar5 + lVar21 * 0x18);
          uVar8 = *(undefined8 *)&(param_2->MMin).field_0x8;
          lVar15 = (longlong)(int)uVar18 * 0x38;
          puVar2 = (undefined8 *)(lVar15 + 8 + lVar6);
          *puVar2 = *(undefined8 *)&param_2->MMin;
          puVar2[1] = uVar8;
          *(undefined8 *)(lVar15 + 0x18 + lVar6) = *(undefined8 *)&(param_2->MMin).field_0x10;
          uVar8 = *(undefined8 *)&(param_2->MMax).field_0x8;
          puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar6);
          *puVar2 = *(undefined8 *)&param_2->MMax;
          puVar2[1] = uVar8;
          *(undefined8 *)(lVar15 + 0x30 + lVar6) = *(undefined8 *)&(param_2->MMax).field_0x10;
          uVar11 = 0;
          if ((int)uVar18 < *(int *)(lVar5 + 8 + lVar21 * 0x18)) {
            uVar11 = uVar20;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          goto LAB_148c2e4c1;
        }
        uVar19 = (ulonglong)(uVar18 + 1);
        uVar17 = uVar17 + 0x38;
      } while ((int)(uVar18 + 1) < iVar16);
      bVar9 = false;
    }
  }
  return bVar9;
}

// Overlap @ 148c2e530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::Overlap(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *this,TAABB<double,3> *param_1,ISpatialVisitor<int,double> *param_2)

{
  undefined1 auStackY_f8 [32];
  TSpatialVisitor<int,double> local_a8;
  TVector<double,3> local_a0;
  TVector<double,3> local_88;
  undefined1 local_68 [16];
  longlong lStack_58;
  longlong local_50;
  bool local_38 [8];
  TVector<double,3> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_50 = 0;
  local_68._0_8_ = &local_30;
  local_38[0] = false;
  local_38[1] = false;
  local_38[2] = false;
  local_a0._16_8_ = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._16_8_ = 0;
  local_68._8_8_ = 0;
  lStack_58 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a8.Visitor = param_2;
  QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<int,double>_>
            (this,&local_88,(FQueryFastDataVoid *)local_68,&local_a0,param_1,&local_a8,
             (TVector<double,3> *)local_68._0_8_,(TVector<double,3> *)(local_68 + 8),local_38);
  return;
}

// PrepareCopyTimeSliced @ 148c2e660

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::PrepareCopyTimeSliced
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,ISpatialAcceleration<int,double,3> *param_1)

{
  uint uVar1;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  code *pcVar2;
  bool bVar3;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar4;
  TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
  *pTVar5;
  longlong local_18 [2];
  
  do {
    if (this == (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("this != &InFrom",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x88b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(uchar *)((longlong)
                   &((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                      *)param_1)->_padding_ + 5) != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFrom.GetType() == ESpatialAcceleration::AABBTree",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x88c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Reset(this);
    *(uchar *)((longlong)&this->_padding_ + 5) =
         *(uchar *)((longlong)
                    &((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                       *)param_1)->_padding_ + 5);
    *(int *)&this->_padding_ =
         (int)((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                *)param_1)->_padding_;
    *(bool *)((longlong)&this->_padding_ + 4) =
         *(bool *)((longlong)
                   &((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                      *)param_1)->_padding_ + 4);
    this->DirtyElementGridCellSize =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->DirtyElementGridCellSize;
    this->DirtyElementGridCellSizeInv =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->DirtyElementGridCellSizeInv;
    this->DirtyElementMaxGridCellQueryCount =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->DirtyElementMaxGridCellQueryCount;
    this->DirtyElementMaxPhysicalSizeInCells =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->DirtyElementMaxPhysicalSizeInCells;
    this->DirtyElementMaxCellCapacity =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->DirtyElementMaxCellCapacity;
    this->MaxChildrenInLeaf =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->MaxChildrenInLeaf;
    this->MaxTreeDepth =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->MaxTreeDepth;
    this->MaxPayloadBounds =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->MaxPayloadBounds;
    this->MaxNumToProcess =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->MaxNumToProcess;
    this->NumProcessedThisSlice =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->NumProcessedThisSlice;
    this->StartSliceTimeStamp =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->StartSliceTimeStamp;
    this->bShouldRebuild =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->bShouldRebuild;
    this->RootNode =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->RootNode;
    this->FirstFreeInternalNode =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->FirstFreeInternalNode;
    this->FirstFreeLeafNode =
         ((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->FirstFreeLeafNode;
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->Nodes).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->Nodes).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,uVar1,&(this->Nodes).AllocatorInstance,(this->Nodes).ArrayNum,
                 &(this->Nodes).ArrayMax);
    }
    uVar1 = *(uint *)&(((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                         *)param_1)->Leaves).field_0x8;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (*(int *)&(this->Leaves).field_0xc < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,(ForAnyElementType *)&this->Leaves,*(int *)&(this->Leaves).field_0x8,
                 (int *)&(this->Leaves).field_0xc);
    }
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->DirtyElements).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->DirtyElements).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar1,&(this->DirtyElements).AllocatorInstance,
                 (this->DirtyElements).ArrayNum,&(this->DirtyElements).ArrayMax);
    }
    TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
               *)&this->CellHashToFlatArray,
              *(int *)&(((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                          *)param_1)->CellHashToFlatArray).field_0x8 -
              *(int *)&(((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                          *)param_1)->CellHashToFlatArray).field_0x34);
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->FlattenedCellArrayOfDirtyIndices).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->FlattenedCellArrayOfDirtyIndices).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,&(this->FlattenedCellArrayOfDirtyIndices).AllocatorInstance,
                 (this->FlattenedCellArrayOfDirtyIndices).ArrayNum,
                 &(this->FlattenedCellArrayOfDirtyIndices).ArrayMax);
    }
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->DirtyElementsGridOverflow).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->DirtyElementsGridOverflow).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,&(this->DirtyElementsGridOverflow).AllocatorInstance,
                 (this->DirtyElementsGridOverflow).ArrayNum,
                 &(this->DirtyElementsGridOverflow).ArrayMax);
    }
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->GlobalPayloads).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->GlobalPayloads).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar1,&(this->GlobalPayloads).AllocatorInstance,
                 (this->GlobalPayloads).ArrayNum,&(this->GlobalPayloads).ArrayMax);
    }
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->PayloadToInfo).Entries.ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->PayloadToInfo).Entries.ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar1,(ForAnyElementType *)&this->PayloadToInfo,
                 (this->PayloadToInfo).Entries.ArrayNum,&(this->PayloadToInfo).Entries.ArrayMax);
    }
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->OverlappingLeaves).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->OverlappingLeaves).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,&(this->OverlappingLeaves).AllocatorInstance,
                 (this->OverlappingLeaves).ArrayNum,&(this->OverlappingLeaves).ArrayMax);
    }
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->OverlappingOffsets).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->OverlappingOffsets).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,&(this->OverlappingOffsets).AllocatorInstance,
                 (this->OverlappingOffsets).ArrayNum,&(this->OverlappingOffsets).ArrayMax);
    }
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->OverlappingPairs).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->OverlappingPairs).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar1,&(this->OverlappingPairs).AllocatorInstance,
                 (this->OverlappingPairs).ArrayNum,&(this->OverlappingPairs).ArrayMax);
    }
    uVar1 = (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
               *)param_1)->OverlappingCounts).ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((this->OverlappingCounts).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,&(this->OverlappingCounts).AllocatorInstance,
                 (this->OverlappingCounts).ArrayNum,&(this->OverlappingCounts).ArrayMax);
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    pTVar5 = &this->DirtyElementTree;
    if ((((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *)param_1)->DirtyElementTree).Ptr ==
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) {
      pTVar4 = pTVar5->Ptr;
      pTVar5->Ptr = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                     *)0x0;
      if (pTVar4 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                     *)0x0) {
        ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  (pTVar4);
        ::operator_delete(pTVar4,0x1d8);
      }
      return;
    }
    if (pTVar5->Ptr ==
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) {
      pTVar4 = ::operator_new(0x1d8);
      if (pTVar4 == (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                     *)0x0) {
        pTVar4 = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                  *)0x0;
      }
      else {
        pTVar4 = TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                           (pTVar4);
      }
      if (pTVar5 == (TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
                     *)local_18) {
        if (pTVar4 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                       *)0x0) {
          ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                    (pTVar4);
          goto LAB_148c2eaa7;
        }
      }
      else {
        this_00 = pTVar5->Ptr;
        pTVar5->Ptr = pTVar4;
        if (this_00 !=
            (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             *)0x0) {
          ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                    (this_00);
          pTVar4 = this_00;
LAB_148c2eaa7:
          ::operator_delete(pTVar4,0x1d8);
        }
      }
    }
    this = pTVar5->Ptr;
    param_1 = (ISpatialAcceleration<int,double,3> *)
              (((TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)param_1)->DirtyElementTree).Ptr;
  } while( true );
}

// ProgressAsyncTimeSlicing @ 148c2eb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::ProgressAsyncTimeSlicing
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,bool param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  FVar10.Value = 0;
  FVar6 = Chaos::StatPtr_STAT_AABBTreeProgressTimeSlice;
  if (Chaos::StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_AABBTreeProgressTimeSlice");
    FVar6 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&Chaos::StatPtr_STAT_AABBTreeProgressTimeSlice,
                       *pFVar5,L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                   ,0x35f);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_148c2ecac;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_148c2ecac:
  if (this->bDynamicTree == false) {
    if (param_1) {
      this->MaxNumToProcess = 0;
    }
    if ((this->WorkStack).ArrayNum != 0) {
      this->NumProcessedThisSlice = 0;
      QueryPerformanceCounter(&local_res8);
      this->StartSliceTimeStamp =
           (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
           FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
      SplitNode(this);
    }
  }
  else {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ProgressCopyTimeSliced @ 148c2ee10

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::ProgressCopyTimeSliced
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,ISpatialAcceleration<int,double,3> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  LARGE_INTEGER local_res10;
  int local_res18 [2];
  
  if ((this == (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                *)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("this != &InFrom",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x8ca,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1->Type != '\x01') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFrom.GetType() == ESpatialAcceleration::AABBTree",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x8cb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18[0] = param_2;
  if ((param_1[5].SyncTimestamp != *(int *)((longlong)&param_1[8]._padding_ + 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("From.CellHashToFlatArray.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x8cf,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8.__this = this;
  bVar2 = `Chaos::
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          ::ProgressCopyTimeSliced'::__l2::<lambda_1>::operator()(&local_res8,param_2,0);
  if (!bVar2) {
    this->StartSliceTimeStamp = 0.0;
    return;
  }
  if ((double)CONCAT44((uint)((ulonglong)this->StartSliceTimeStamp >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(this->StartSliceTimeStamp,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee2308c3a) {
    QueryPerformanceCounter(&local_res10);
    this->StartSliceTimeStamp =
         (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  bVar2 = ContinueTimeSliceCopy<TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                    ((TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *)
                     (param_1 + 1),&this->Nodes,local_res18,&local_res8);
  if ((((((bVar2) &&
         (bVar2 = ContinueTimeSliceCopy<Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                            ((TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_> *)
                             (param_1 + 2),&this->Leaves,local_res18,&local_res8), bVar2)) &&
        (bVar2 = ContinueTimeSliceCopy<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                           ((TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>
                             *)(param_1 + 3),&this->DirtyElements,local_res18,&local_res8), bVar2))
       && ((bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_1 + 10),
                               &this->FlattenedCellArrayOfDirtyIndices,local_res18,&local_res8),
           bVar2 && (bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                                       ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_1 + 0xb),
                                        &this->DirtyElementsGridOverflow,local_res18,&local_res8),
                    bVar2)))) &&
      ((bVar2 = ContinueTimeSliceCopy<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                          ((TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>
                            *)&param_1[0x10].SyncTimestamp,&this->GlobalPayloads,local_res18,
                           &local_res8), bVar2 &&
       ((bVar2 = ContinueTimeSliceCopy<Chaos::TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                           ((TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *)
                            &param_1[0x11].SyncTimestamp,&this->PayloadToInfo,local_res18,
                            &local_res8), bVar2 &&
        (bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                           ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[0x18].SyncTimestamp,
                            &this->OverlappingLeaves,local_res18,&local_res8), bVar2)))))) &&
     ((bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                         ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[0x19].SyncTimestamp,
                          &this->OverlappingOffsets,local_res18,&local_res8), bVar2 &&
      ((bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                          ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[0x1b].SyncTimestamp,
                           &this->OverlappingCounts,local_res18,&local_res8), bVar2 &&
       (bVar2 = ContinueTimeSliceCopy<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                          ((TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)
                           &param_1[0x1a].SyncTimestamp,&this->OverlappingPairs,local_res18,
                           &local_res8), bVar2)))))) {
    if ((this->DirtyElementTree).Ptr !=
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) {
      if ((param_1[0xc]._padding_ == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("From.DirtyElementTree",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                             ,0x932,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ProgressCopyTimeSliced
                ((this->DirtyElementTree).Ptr,
                 (ISpatialAcceleration<int,double,3> *)param_1[0xc]._padding_,param_2);
      if (*(char *)((longlong)&((this->DirtyElementTree).Ptr)->_padding_ + 4) == '\0') {
        return;
      }
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  return;
}

// PropagateLeavesDirtyFlag @ 148c2f110

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::PropagateLeavesDirtyFlag
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  lVar7 = (longlong)(this->Nodes).ArrayNum;
  uVar13 = 0;
  if (0 < lVar7) {
    lVar12 = 0;
    lVar11 = 0;
    do {
      uVar8 = ~uVar13 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar13 < (this->Nodes).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((byte)(this->Nodes).AllocatorInstance.Data[lVar11 + 0x6c] & 1) != 0) {
        uVar6 = 0;
        if ((int)uVar13 < (this->Nodes).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar11 + 0x60);
        uVar10 = 0;
        if ((int)uVar6 < *(int *)&(this->Leaves).field_0x8) {
          uVar10 = ~uVar6 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar2 = *(char *)(*(longlong *)&this->Leaves + 0x10 + (longlong)(int)uVar6 * 0x18);
        uVar6 = 0;
        if ((int)uVar13 < (this->Nodes).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Nodes).AllocatorInstance.Data;
        pFVar1 = pFVar3 + lVar11 + 0x6c;
        *pFVar1 = (FScriptContainerElement)
                  ((byte)*pFVar1 ^ (cVar2 * '\x02' ^ (byte)pFVar3[lVar11 + 0x6c]) & 2);
        uVar6 = 0;
        if ((int)uVar13 < (this->Nodes).ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((byte)(this->Nodes).AllocatorInstance.Data[lVar11 + 0x6c] & 2) != 0) {
          uVar6 = 0;
          if ((int)uVar13 < (this->Nodes).ArrayNum) {
            uVar6 = uVar8;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar6 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar11 + 0x68);
          while (uVar6 != 0xffffffff) {
            uVar10 = ~uVar6 >> 0x1f;
            uVar8 = 0;
            if ((int)uVar6 < (this->Nodes).ArrayNum) {
              uVar8 = uVar10;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar9 = (longlong)(int)uVar6 * 0x70;
            if (((byte)(this->Nodes).AllocatorInstance.Data[lVar9 + 0x6c] & 2) != 0) break;
            uVar8 = 0;
            if ((int)uVar6 < (this->Nodes).ArrayNum) {
              uVar8 = uVar10;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar1 = (this->Nodes).AllocatorInstance.Data + lVar9 + 0x6c;
            *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 2);
            uVar8 = 0;
            if ((int)uVar6 < (this->Nodes).ArrayNum) {
              uVar8 = uVar10;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar6 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar9 + 0x68);
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x70;
    } while (lVar12 < lVar7);
  }
  return;
}

// Raycast @ 148c30170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::Raycast(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
         ISpatialVisitor<int,double> *param_4)

{
  undefined1 auStackY_e8 [32];
  TSpatialVisitor<int,double> local_98;
  TVector<double,3> local_90;
  TAABB<double,3> local_78;
  FQueryFastData local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_98.Visitor = param_4;
  FQueryFastData::FQueryFastData(&local_48,param_2,param_3);
  local_90._16_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_78.MMin._0_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_78.MMin._8_8_ = _UNK_150a9e648;
  local_78.MMin._16_8_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_78.MMax._0_8_ = _UNK_150a9e6d8;
  local_78.MMax._8_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_78.MMax._16_8_ = _UNK_1508ffb58;
  QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>
            (this,param_1,&local_48,&local_90,&local_78,&local_98,local_48.Dir,&local_48.InvDir,
             local_48.bParallel);
  return;
}

// RemoveElement @ 148c30af0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::RemoveElement(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->bModifyingTreeMultiThreadingFastCheck != false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181246422089988342>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                       ,0x70a,"bModifyingTreeMultiThreadingFastCheck == false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::RemoveElement(int_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  this->bModifyingTreeMultiThreadingFastCheck = true;
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9181246422089988337>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                     ,0x70f,"bMutable");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this->bModifyingTreeMultiThreadingFastCheck = false;
  return false;
}

// ReoptimizeTree @ 148c30ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::ReoptimizeTree(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  undefined1 auStackY_278 [32];
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> local_228;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  local_218;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if ((((this->DirtyElementTree).Ptr !=
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) || (this->bDynamicTree != false)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!DirtyElementTree && !bDynamicTree",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0xaa7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ReoptimizeTree(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId2728,"TAABBTree::ReoptimizeTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
               ,0xaa8);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::ReoptimizeTree(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId2728);
  }
  uVar8 = (this->GlobalPayloads).ArrayNum + (this->DirtyElements).ArrayNum;
  uVar7 = 0;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)&(this->Leaves).field_0x8) {
    lVar10 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&(this->Leaves).field_0x8) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 + *(int *)(lVar10 + 8 + *(longlong *)&this->Leaves);
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar7 < *(int *)&(this->Leaves).field_0x8);
    iVar5 = local_228.ArrayMax;
    iVar6 = local_228.ArrayNum;
  }
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (iVar5 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar8,&local_228.AllocatorInstance,iVar6,&local_228.ArrayMax);
  }
  if ((&local_228 == &this->DirtyElements) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->DirtyElements).ArrayNum;
  if (iVar5 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,iVar5,&local_228.AllocatorInstance,&local_228.ArrayNum,
                       &local_228.ArrayMax);
    ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
              (local_228.AllocatorInstance.Data + (longlong)iVar6 * 0x38,
               (TPayloadBoundsElement<int,double> *)(this->DirtyElements).AllocatorInstance.Data,
               iVar5);
  }
  if ((&local_228 == &this->GlobalPayloads) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = (this->GlobalPayloads).ArrayNum;
  if (iVar5 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,iVar5,&local_228.AllocatorInstance,&local_228.ArrayNum,
                       &local_228.ArrayMax);
    ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
              (local_228.AllocatorInstance.Data + (longlong)iVar6 * 0x38,
               (TPayloadBoundsElement<int,double> *)(this->GlobalPayloads).AllocatorInstance.Data,
               iVar5);
  }
  uVar7 = 0;
  if (0 < *(int *)&(this->Leaves).field_0x8) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar7 < *(int *)&(this->Leaves).field_0x8) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar9 = (TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&this->Leaves + lVar10);
      if ((&local_228 == pTVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = pTVar9->ArrayNum;
      if (iVar5 != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x38,8,iVar5,&local_228.AllocatorInstance,&local_228.ArrayNum,
                           &local_228.ArrayMax);
        ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
                  (local_228.AllocatorInstance.Data + (longlong)iVar6 * 0x38,
                   (TPayloadBoundsElement<int,double> *)(pTVar9->AllocatorInstance).Data,iVar5);
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar7 < *(int *)&(this->Leaves).field_0x8);
  }
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_><TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_>
            (&local_218,&local_228,0xc,0x10,__real_40f86a0000000000,0,false,false,true);
  operator=(this,&local_218);
  this->bShouldRebuild = true;
  ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            (&local_218);
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Reset @ 148c310d0

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::Reset(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FWorkSnapshot *pFVar4;
  
  do {
    (this->Nodes).ArrayNum = 0;
    if ((this->Nodes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,0,&(this->Nodes).AllocatorInstance,0,&(this->Nodes).ArrayMax);
    }
    puVar1 = &(this->Leaves).field_0xc;
    iVar3 = *(int *)&(this->Leaves).field_0x8;
    if (*(int *)puVar1 < 0) {
      DestructItems<Chaos::TAABBTreeLeafArray<int,0,double>,int>
                (*(TAABBTreeLeafArray<int,0,double> **)&this->Leaves,iVar3);
      *(undefined4 *)&(this->Leaves).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&this->Leaves,0,(int *)puVar1);
      }
    }
    else {
      DestructItems<Chaos::TAABBTreeLeafArray<int,0,double>,int>
                (*(TAABBTreeLeafArray<int,0,double> **)&this->Leaves,iVar3);
      *(undefined4 *)&(this->Leaves).field_0x8 = 0;
    }
    (this->DirtyElements).ArrayNum = 0;
    if ((this->DirtyElements).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->DirtyElements).AllocatorInstance,0,&(this->DirtyElements).ArrayMax
                );
    }
    TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
             *)&this->CellHashToFlatArray);
    (this->FlattenedCellArrayOfDirtyIndices).ArrayNum = 0;
    if ((this->FlattenedCellArrayOfDirtyIndices).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->FlattenedCellArrayOfDirtyIndices).AllocatorInstance,0,
                 &(this->FlattenedCellArrayOfDirtyIndices).ArrayMax);
    }
    (this->DirtyElementsGridOverflow).ArrayNum = 0;
    if ((this->DirtyElementsGridOverflow).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->DirtyElementsGridOverflow).AllocatorInstance,0,
                 &(this->DirtyElementsGridOverflow).ArrayMax);
    }
    (this->TreeStats).StatNumNonEmptyCellsInGrid = 0;
    (this->TreeStats).StatNumElementsTooLargeForGrid = 0;
    (this->TreeStats).StatNumDirtyElements = 0;
    (this->TreeStats).StatNumGridOverflowElements = 0;
    piVar2 = &(this->GlobalPayloads).ArrayMax;
    (this->TreeExpensiveStats).StatMaxNumLeaves = 0;
    (this->TreeExpensiveStats).StatMaxDirtyElements = 0;
    (this->TreeExpensiveStats).StatMaxLeafSize = 0;
    (this->TreeExpensiveStats).StatMaxTreeDepth = 0;
    (this->TreeExpensiveStats).StatGlobalPayloadsSize = 0;
    (this->GlobalPayloads).ArrayNum = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->GlobalPayloads).AllocatorInstance,0,piVar2);
    }
    iVar3 = (this->PayloadToInfo).Entries.ArrayMax;
    (this->PayloadToInfo).Entries.ArrayNum = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)&this->PayloadToInfo,0,
                 &(this->PayloadToInfo).Entries.ArrayMax);
    }
    (this->OverlappingLeaves).ArrayNum = 0;
    if ((this->OverlappingLeaves).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->OverlappingLeaves).AllocatorInstance,0,
                 &(this->OverlappingLeaves).ArrayMax);
    }
    (this->OverlappingOffsets).ArrayNum = 0;
    if ((this->OverlappingOffsets).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->OverlappingOffsets).AllocatorInstance,0,
                 &(this->OverlappingOffsets).ArrayMax);
    }
    (this->OverlappingPairs).ArrayNum = 0;
    if ((this->OverlappingPairs).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->OverlappingPairs).AllocatorInstance,0,
                 &(this->OverlappingPairs).ArrayMax);
    }
    (this->OverlappingCounts).ArrayNum = 0;
    if ((this->OverlappingCounts).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->OverlappingCounts).AllocatorInstance,0,
                 &(this->OverlappingCounts).ArrayMax);
    }
    this->NumProcessedThisSlice = 0;
    this->StartSliceTimeStamp = 0.0;
    piVar2 = &(this->WorkStack).ArrayMax;
    this->CurrentProcessedNodesSinceChecked = 0;
    this->CurrentDataElementsCopiedSinceLastCheck = 0;
    (this->WorkStack).ArrayNum = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->WorkStack).AllocatorInstance,0,piVar2);
    }
    (this->WorkPoolFreeList).ArrayNum = 0;
    if ((this->WorkPoolFreeList).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->WorkPoolFreeList).AllocatorInstance,0,
                 &(this->WorkPoolFreeList).ArrayMax);
    }
    piVar2 = &(this->WorkPool).ArrayMax;
    pFVar4 = (FWorkSnapshot *)(this->WorkPool).AllocatorInstance.Data;
    iVar3 = (this->WorkPool).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
                (pFVar4,iVar3);
      (this->WorkPool).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf8,8,0,&(this->WorkPool).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,int>
                (pFVar4,iVar3);
      (this->WorkPool).ArrayNum = 0;
    }
    this->bShouldRebuild = true;
    this->RootNode = -1;
    this->FirstFreeInternalNode = -1;
    this->FirstFreeLeafNode = -1;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    this = (this->DirtyElementTree).Ptr;
  } while (this != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                    *)0x0);
  return;
}

// Serialize @ 148c319c0

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::Serialize(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            *this,FChaosArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulonglong *puVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  uint local_res8 [2];
  float local_res10 [2];
  TAABB<double,3> local_58;
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar8 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar8 < 0x28) {
    local_58.MMin._0_8_ = 0;
    local_58.MMin._8_8_ = 0;
    local_58.MMin._16_8_ = 0;
    local_58.MMax._0_8_ = 0;
    local_58.MMax._8_8_ = 0;
    local_58.MMax._16_8_ = 0;
    TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&local_58);
  }
  operator<<<Chaos::TAABBTreeNode<double>_TSizedDefaultAllocator<32>_>(param_1,&this->Nodes);
  operator<<<Chaos::TAABBTreeLeafArray<int,0,double>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TAABBTreeLeafArray<int,0,double>,TSizedDefaultAllocator<32>_> *)
                     &this->Leaves);
  operator<<<Chaos::TPayloadBoundsElement<int,double>_TSizedDefaultAllocator<32>_>
            (param_1,&this->DirtyElements);
  operator<<<Chaos::TPayloadBoundsElement<int,double>_TSizedDefaultAllocator<32>_>
            (param_1,&this->GlobalPayloads);
  iVar8 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x1a < iVar8) {
    puVar4 = (ulonglong *)param_1->_padding_;
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_res8[0] = (uint)((param_1->_padding_ & 1) == 0);
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res8[0];
      if ((param_1->_padding_ & 1) == 0) goto LAB_148c31b06;
    }
    else {
      uVar3 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) goto LAB_148c31b4e;
  }
LAB_148c31b06:
  TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Serialize(&this->PayloadToInfo,param_1);
  piVar2 = &(this->PayloadToInfo).Entries.ArrayMax;
  (this->PayloadToInfo).Entries.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->PayloadToInfo,0,piVar2);
  }
LAB_148c31b4e:
  plVar9 = &param_1->_padding_;
  piVar2 = &this->MaxChildrenInLeaf;
  piVar5 = *(int **)*plVar9;
  if ((int *)((undefined8 *)*plVar9)[1] < piVar5 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    *(longlong *)*plVar9 = *(longlong *)*plVar9 + 4;
  }
  piVar2 = &this->MaxTreeDepth;
  piVar5 = *(int **)*plVar9;
  if ((int *)((undefined8 *)*plVar9)[1] < piVar5 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    *(longlong *)*plVar9 = *(longlong *)*plVar9 + 4;
  }
  if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
    plVar9 = (longlong *)*plVar9;
    local_res10[0] = (float)this->MaxPayloadBounds;
    if ((float *)plVar9[1] < (float *)*plVar9 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    if ((param_1->_padding_ & 1) != 0) {
      this->MaxPayloadBounds = (double)local_res10[0];
    }
  }
  else {
    ::operator<<((FArchive *)param_1,&this->MaxPayloadBounds);
  }
  if ((param_1->_padding_ & 1) != 0) {
    this->DirtyElementGridCellSize = 0.0;
    this->DirtyElementGridCellSizeInv = 1.0;
    this->bShouldRebuild = true;
  }
  if ((param_1->_padding_ & 1) != 0) {
    this->bModifyingTreeMultiThreadingFastCheck = false;
    this->bDynamicTree = false;
    this->bBuildOverlapCache = true;
    this->RootNode = -1;
    this->FirstFreeInternalNode = -1;
    this->FirstFreeLeafNode = -1;
    return;
  }
  if ((this->bDynamicTree != false) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181246422089987693>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x993,"bDynamicTree == false"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// ShouldRebuild @ 148c322c0

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::ShouldRebuild(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                *this)

{
  if (this->bDynamicTree != false) {
    return false;
  }
  return this->bShouldRebuild;
}

// SplitNode @ 148c329e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::SplitNode(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
            *this)

{
  int *piVar1;
  TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TArray<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  double dVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  double dVar35;
  uint local_168;
  uint local_164;
  uint local_160;
  int local_15c;
  longlong local_158;
  longlong local_150;
  LARGE_INTEGER local_148;
  longlong local_140;
  uint local_138 [2];
  TArrayAsMap<int,Chaos::FAABBTreePayloadInfo> *local_130;
  TArray<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::FWorkSnapshot,TSizedDefaultAllocator<32>_>
  *local_128;
  uint local_120;
  TLeafContainer<Chaos::TAABBTreeLeafArray<int,0,double>_> *local_118;
  TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *local_110;
  AABBTreeExpensiveStatistics *local_108;
  undefined1 local_100 [16];
  double local_f0;
  double local_d8;
  undefined8 local_c0;
  
  uVar17 = _UNK_1508ffb58;
  uVar16 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar15 = __real_ffefffffffffffff;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar12 = __real_4170000000000000;
  dVar11 = __real_3fe0000000000000;
  dVar10 = __real_3e45798ee2308c3a;
  if ((this->WorkStack).ArrayNum != 0) {
    pTVar4 = &this->WorkPool;
    do {
      iVar23 = (this->WorkStack).ArrayNum;
      uVar26 = iVar23 - 1;
      uVar19 = 0;
      if ((int)uVar26 < iVar23) {
        uVar19 = ~uVar26 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = *(uint *)((this->WorkStack).AllocatorInstance.Data +
                        (longlong)(this->WorkStack).ArrayNum * 4 + -4);
      lVar27 = (longlong)(int)uVar19;
      uVar26 = ~uVar19 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar19 < (this->WorkPool).ArrayNum) {
        uVar20 = uVar26;
      }
      local_160 = uVar26;
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar29 = lVar27 * 0xf8;
      local_140 = lVar29;
      if (*(int *)((pTVar4->AllocatorInstance).Data + lVar29) == 2) {
        if (((this->WorkStack).ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar23 = (this->WorkStack).ArrayNum;
        uVar26 = iVar23 - 1;
        pFVar24 = (this->WorkStack).AllocatorInstance.Data + (longlong)(int)uVar26 * 4;
        iVar23 = ~uVar26 + iVar23;
        if (iVar23 != 0) {
          memmove(pFVar24,pFVar24 + 4,(longlong)iVar23 << 2);
        }
        piVar1 = &(this->WorkStack).ArrayNum;
        *piVar1 = *piVar1 + -1;
        FreeWorkSnapshot(this,uVar19);
      }
      else {
        uVar20 = 0;
        if ((int)uVar19 < (this->WorkPool).ArrayNum) {
          uVar20 = uVar26;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar2 = &this->Nodes;
        iVar23 = (this->Nodes).ArrayNum;
        uVar20 = *(uint *)((pTVar4->AllocatorInstance).Data + lVar29 + 0x7c);
        if (iVar23 <= (int)uVar20) {
          iVar23 = (uVar20 - iVar23) + 1;
          iVar21 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x70,8,iVar23,&pTVar2->AllocatorInstance,&(this->Nodes).ArrayNum,
                              &(this->Nodes).ArrayMax);
          DefaultConstructItems<Chaos::TAABBTreeNode<double>,int>
                    ((pTVar2->AllocatorInstance).Data + (longlong)iVar21 * 0x70,iVar23);
          uVar26 = local_160;
        }
        if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget == false) {
          if ((0 < this->MaxNumToProcess) && (this->MaxNumToProcess <= this->NumProcessedThisSlice))
          {
            return;
          }
        }
        else {
          QueryPerformanceCounter(&local_148);
          dVar6 = this->StartSliceTimeStamp;
          if ((((0.0 < FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds) &&
               (0 < this->MaxNumToProcess)) &&
              (uVar33 = SUB84(dVar6,0) & uVar13, uVar34 = (uint)((ulonglong)dVar6 >> 0x20) & uVar14,
              dVar10 <= (double)CONCAT44(uVar34,uVar33) && (double)CONCAT44(uVar34,uVar33) != dVar10
              )) && ((double)FAABBTimeSliceCVars::MaxProcessingTimePerSliceSeconds <
                     ((double)local_148.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12) -
                     dVar6)) {
            return;
          }
        }
        local_130 = &this->PayloadToInfo;
        local_118 = &this->Leaves;
        local_108 = &this->TreeExpensiveStats;
        uVar33 = 0;
        if ((int)uVar19 < (this->WorkPool).ArrayNum) {
          uVar33 = uVar26;
        }
        local_138[0] = uVar20;
        local_128 = pTVar4;
        local_120 = uVar19;
        local_110 = pTVar2;
        if ((uVar33 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (this->MaxChildrenInLeaf < *(int *)((pTVar4->AllocatorInstance).Data + lVar29 + 0x40)) {
          uVar33 = 0;
          if ((int)uVar19 < (this->WorkPool).ArrayNum) {
            uVar33 = uVar26;
          }
          if ((uVar33 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (this->MaxTreeDepth <= *(int *)((pTVar4->AllocatorInstance).Data + lVar29 + 0x78))
          goto LAB_148c343fd;
          uVar33 = 0;
          if ((int)uVar19 < (this->WorkPool).ArrayNum) {
            uVar33 = uVar26;
          }
          if ((uVar33 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)((pTVar4->AllocatorInstance).Data + lVar29) == 0) {
            uVar34 = GetNewWorkSnapshot(this);
            uVar22 = GetNewWorkSnapshot(this);
            uVar33 = 0;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar33 = uVar26;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(uint *)((pTVar4->AllocatorInstance).Data + lVar29 + 0xb8) = uVar34;
            uVar33 = 0;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar33 = uVar26;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(uint *)((pTVar4->AllocatorInstance).Data + lVar29 + 0xf0) = uVar22;
            uVar32 = 0;
            uVar33 = uVar32;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar33 = uVar26;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar24 = (pTVar4->AllocatorInstance).Data + lVar29 + 0x88;
            if (pFVar24 != pFVar24 + 0x70) {
              pFVar25 = pFVar24 + 0x10;
              do {
                local_c0 = uVar15;
                *(undefined8 *)(pFVar25 + -0x10) = 0x7fefffffffffffff;
                *(undefined8 *)(pFVar25 + -8) = 0x7fefffffffffffff;
                *(undefined8 *)pFVar25 = 0x7fefffffffffffff;
                *(undefined8 *)(pFVar25 + 8) = uVar16;
                *(undefined8 *)(pFVar25 + 0x10) = uVar17;
                *(undefined8 *)(pFVar25 + 0x18) = uVar15;
                pFVar3 = pFVar25 + 0x28;
                pFVar25 = pFVar25 + 0x38;
              } while (pFVar3 != pFVar24 + 0x70);
            }
            uVar33 = uVar32;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar33 = uVar26;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar29 + 0x80) = 0;
            uVar33 = uVar32;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar33 = uVar26;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar29) = 1;
            uVar33 = uVar32;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar33 = uVar26;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar33 = ~uVar34 >> 0x1f;
            uVar26 = *(int *)((pTVar4->AllocatorInstance).Data + lVar29 + 0x40) / 2;
            if ((int)uVar34 < (this->WorkPool).ArrayNum) {
              uVar32 = uVar33;
            }
            if ((uVar32 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_158 = (longlong)(int)uVar34;
            lVar29 = local_158 * 0xf8;
            pFVar24 = (pTVar4->AllocatorInstance).Data + lVar29 + 0x38;
            if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
            }
            if (*(int *)(pFVar24 + 0xc) < (int)uVar26) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,uVar26,(ForAnyElementType *)pFVar24,*(int *)&pFVar24[8].field_0x0,
                         (int *)(pFVar24 + 0xc));
            }
            lVar30 = (longlong)(int)uVar22;
            uVar28 = ~uVar22 >> 0x1f;
            uVar32 = 0;
            if ((int)uVar22 < (this->WorkPool).ArrayNum) {
              uVar32 = uVar28;
            }
            if ((uVar32 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar31 = lVar30 * 0xf8;
            pFVar24 = (pTVar4->AllocatorInstance).Data + lVar31 + 0x38;
            local_150 = lVar30;
            if (*(int *)(pFVar24 + 0xc) < (int)uVar26) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,uVar26,(ForAnyElementType *)pFVar24,*(int *)&pFVar24[8].field_0x0,
                         (int *)(pFVar24 + 0xc));
            }
            uVar26 = 0;
            if ((int)uVar34 < (this->WorkPool).ArrayNum) {
              uVar26 = uVar33;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar24 = (pTVar4->AllocatorInstance).Data;
            *(undefined8 *)(pFVar24 + lVar29 + 0x48) = 0;
            *(undefined8 *)(pFVar24 + lVar29 + 0x50) = 0;
            *(undefined8 *)(pFVar24 + lVar29 + 0x58) = 0;
            uVar26 = 0;
            if ((int)uVar34 < (this->WorkPool).ArrayNum) {
              uVar26 = uVar33;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar24 = (pTVar4->AllocatorInstance).Data;
            *(undefined8 *)(pFVar24 + lVar29 + 0x60) = 0;
            *(undefined8 *)(pFVar24 + lVar29 + 0x68) = 0;
            *(undefined8 *)(pFVar24 + lVar29 + 0x70) = 0;
            uVar26 = 0;
            if ((int)uVar22 < (this->WorkPool).ArrayNum) {
              uVar26 = uVar28;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar24 = (pTVar4->AllocatorInstance).Data;
            *(undefined8 *)(pFVar24 + lVar31 + 0x48) = 0;
            *(undefined8 *)(pFVar24 + lVar31 + 0x50) = 0;
            *(undefined8 *)(pFVar24 + lVar31 + 0x58) = 0;
            uVar26 = 0;
            if ((int)uVar22 < (this->WorkPool).ArrayNum) {
              uVar26 = uVar28;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar24 = (pTVar4->AllocatorInstance).Data;
            *(undefined8 *)(pFVar24 + lVar31 + 0x60) = 0;
            *(undefined8 *)(pFVar24 + lVar31 + 0x68) = 0;
            *(undefined8 *)(pFVar24 + lVar31 + 0x70) = 0;
            bVar18 = CanContinueProcessingNodes(this,true);
            lVar29 = local_140;
            uVar26 = local_160;
            if (!bVar18) {
              return;
            }
          }
          uVar33 = 0;
          if ((int)uVar19 < (this->WorkPool).ArrayNum) {
            uVar33 = uVar26;
          }
          if ((uVar33 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)((pTVar4->AllocatorInstance).Data + lVar29) == 1) {
            local_15c = GetLastIndexToProcess(this,uVar19);
            iVar23 = (this->WorkPool).ArrayNum;
            uVar26 = 0;
            if (FAABBTreeCVars::SplitOnVarianceAxis == 1) {
              uVar34 = 0;
              uVar33 = uVar34;
              if ((int)uVar19 < iVar23) {
                uVar33 = ~uVar19 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (this->WorkPool).AllocatorInstance.Data;
              uVar33 = uVar34;
              if ((int)uVar19 < (this->WorkPool).ArrayNum) {
                uVar33 = ~uVar19 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar23 = (this->WorkPool).ArrayNum;
              if (*(double *)(pFVar24 + lVar27 * 0xf8 + 0x60) <=
                  *(double *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0x68)) {
                uVar33 = uVar26;
                if ((int)uVar19 < iVar23) {
                  uVar33 = ~uVar19 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar24 = (this->WorkPool).AllocatorInstance.Data;
                uVar33 = uVar26;
                if ((int)uVar19 < (this->WorkPool).ArrayNum) {
                  uVar33 = ~uVar19 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                bVar18 = *(double *)(pFVar24 + lVar27 * 0xf8 + 0x68) <=
                         *(double *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0x70);
                goto LAB_148c33644;
              }
              uVar33 = uVar34;
              if ((int)uVar19 < iVar23) {
                uVar33 = ~uVar19 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (this->WorkPool).AllocatorInstance.Data;
              if ((int)uVar19 < (this->WorkPool).ArrayNum) {
                uVar34 = ~uVar19 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar33 = 2;
              if (*(double *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0x70) <
                  *(double *)(pFVar24 + lVar27 * 0xf8 + 0x60)) {
                uVar33 = uVar26;
              }
            }
            else {
              uVar33 = 0;
              uVar34 = uVar33;
              if ((int)uVar19 < iVar23) {
                uVar34 = ~uVar19 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (this->WorkPool).AllocatorInstance.Data;
              lVar29 = lVar27 * 0xf8;
              if ((*(double *)(pFVar24 + lVar29 + 0x20) - *(double *)(pFVar24 + lVar29 + 8) <=
                   *(double *)(pFVar24 + lVar29 + 0x28) - *(double *)(pFVar24 + lVar29 + 0x10)) ||
                 (*(double *)(pFVar24 + lVar29 + 0x20) - *(double *)(pFVar24 + lVar29 + 8) <=
                  *(double *)(pFVar24 + lVar29 + 0x30) - *(double *)(pFVar24 + lVar29 + 0x18))) {
                bVar18 = *(double *)(pFVar24 + lVar29 + 0x28) - *(double *)(pFVar24 + lVar29 + 0x10)
                         <= *(double *)(pFVar24 + lVar29 + 0x30) -
                            *(double *)(pFVar24 + lVar29 + 0x18);
LAB_148c33644:
                uVar33 = bVar18 + 1;
              }
            }
            iVar23 = (this->WorkPool).ArrayNum;
            if (FAABBTreeCVars::SplitAtAverageCenter == 1) {
              uVar34 = uVar26;
              if ((int)uVar19 < iVar23) {
                uVar34 = ~uVar19 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar25 = (this->WorkPool).AllocatorInstance.Data;
              pFVar24 = pFVar25 + lVar27 * 0xf8 + 0x48;
              dVar6 = *(double *)pFVar24;
              dVar35 = *(double *)(pFVar24 + 8);
              local_f0 = *(double *)(pFVar25 + lVar27 * 0xf8 + 0x58);
            }
            else {
              uVar34 = uVar26;
              if ((int)uVar19 < iVar23) {
                uVar34 = ~uVar19 >> 0x1f;
              }
              if ((uVar34 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (this->WorkPool).AllocatorInstance.Data;
              lVar29 = lVar27 * 0xf8;
              dVar6 = (*(double *)(pFVar24 + lVar29 + 0x20) - *(double *)(pFVar24 + lVar29 + 8)) *
                      dVar11 + *(double *)(pFVar24 + lVar29 + 8);
              local_f0 = (*(double *)(pFVar24 + lVar29 + 0x30) -
                         *(double *)(pFVar24 + lVar29 + 0x18)) * dVar11 +
                         *(double *)(pFVar24 + lVar29 + 0x18);
              dVar35 = (*(double *)(pFVar24 + lVar29 + 0x28) - *(double *)(pFVar24 + lVar29 + 0x10))
                       * dVar11 + *(double *)(pFVar24 + lVar29 + 0x10);
              local_d8 = local_f0;
            }
            local_100._8_4_ = SUB84(dVar35,0);
            local_100._0_8_ = dVar6;
            local_100._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
            uVar34 = uVar26;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar34 = ~uVar19 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar24 = (pTVar4->AllocatorInstance).Data;
            uVar34 = uVar26;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar34 = ~uVar19 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            FindBestBounds(this,*(int *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0x80),
                           &local_15c,(FWorkSnapshot *)(pFVar24 + lVar27 * 0xf8),uVar33,
                           (TVector<double,3> *)local_100);
            iVar23 = local_15c;
            if ((int)uVar19 < (this->WorkPool).ArrayNum) {
              uVar26 = ~uVar19 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(int *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0x80) = iVar23;
            bVar18 = CanContinueProcessingNodes(this,true);
            if (!bVar18) {
              return;
            }
          }
          uVar26 = 0;
          if ((int)uVar19 < (this->WorkPool).ArrayNum) {
            uVar26 = ~uVar19 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_164 = *(uint *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0xb8);
          uVar26 = 0;
          if ((int)uVar19 < (this->WorkPool).ArrayNum) {
            uVar26 = ~uVar19 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar29 = (longlong)(int)local_164;
          local_168 = *(uint *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0xf0);
          uVar33 = 0;
          uVar26 = uVar33;
          if ((int)local_164 < (this->WorkPool).ArrayNum) {
            uVar26 = ~local_164 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)((pTVar4->AllocatorInstance).Data + lVar29 * 0xf8 + 0x40) != 0) {
            lVar29 = (longlong)(int)local_168;
            uVar26 = uVar33;
            if ((int)local_168 < (this->WorkPool).ArrayNum) {
              uVar26 = ~local_168 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (*(int *)((pTVar4->AllocatorInstance).Data + lVar29 * 0xf8 + 0x40) != 0) {
              if ((int)uVar20 < (this->Nodes).ArrayNum) {
                uVar33 = ~uVar20 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar29 = (longlong)(int)uVar20 * 0x70;
              pFVar24 = (this->Nodes).AllocatorInstance.Data + lVar29 + 0x6c;
              *pFVar24 = (FScriptContainerElement)((byte)*pFVar24 & 0xfe);
              uVar26 = 0;
              if ((int)uVar19 < (this->WorkPool).ArrayNum) {
                uVar26 = ~uVar19 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (pTVar4->AllocatorInstance).Data;
              lVar30 = lVar27 * 0xf8;
              uVar26 = 0;
              if ((int)uVar20 < (this->Nodes).ArrayNum) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar9 = *(undefined8 *)(pFVar24 + lVar30 + 0x88 + 8);
              pFVar25 = (this->Nodes).AllocatorInstance.Data;
              *(undefined8 *)(pFVar25 + lVar29) = *(undefined8 *)(pFVar24 + lVar30 + 0x88);
              *(undefined8 *)(pFVar25 + lVar29 + 8) = uVar9;
              *(undefined8 *)(pFVar25 + lVar29 + 0x10) = *(undefined8 *)(pFVar24 + lVar30 + 0x98);
              uVar9 = *(undefined8 *)(pFVar24 + lVar30 + 0xa0 + 8);
              *(undefined8 *)(pFVar25 + lVar29 + 0x18) = *(undefined8 *)(pFVar24 + lVar30 + 0xa0);
              *(undefined8 *)(pFVar25 + lVar29 + 0x18 + 8) = uVar9;
              lVar31 = (longlong)(int)uVar20;
              *(undefined8 *)(pFVar25 + lVar29 + 0x28) = *(undefined8 *)(pFVar24 + lVar30 + 0xb0);
              uVar26 = 0;
              if ((int)uVar20 < (this->Nodes).ArrayNum) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar29 = (longlong)(int)local_164;
              pFVar24 = (this->Nodes).AllocatorInstance.Data + lVar31 * 0x70;
              uVar26 = 0;
              if ((int)local_164 < (this->WorkPool).ArrayNum) {
                uVar26 = ~local_164 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar25 = (pTVar4->AllocatorInstance).Data;
              uVar9 = *(undefined8 *)(pFVar24 + 8);
              lVar29 = lVar29 * 0xf8;
              *(undefined8 *)(pFVar25 + lVar29 + 8) = *(undefined8 *)pFVar24;
              *(undefined8 *)(pFVar25 + lVar29 + 8 + 8) = uVar9;
              *(undefined8 *)(pFVar25 + lVar29 + 0x18) = *(undefined8 *)(pFVar24 + 0x10);
              uVar9 = *(undefined8 *)(pFVar24 + 0x20);
              *(undefined8 *)(pFVar25 + lVar29 + 0x20) = *(undefined8 *)(pFVar24 + 0x18);
              *(undefined8 *)(pFVar25 + lVar29 + 0x20 + 8) = uVar9;
              *(undefined8 *)(pFVar25 + lVar29 + 0x30) = *(undefined8 *)(pFVar24 + 0x28);
              iVar23 = (this->Nodes).ArrayNum;
              uVar26 = 0;
              if ((int)uVar20 < iVar23) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(int *)((this->Nodes).AllocatorInstance.Data + lVar31 * 0x70 + 0x60) = iVar23;
              uVar26 = 0;
              if ((int)uVar19 < (this->WorkPool).ArrayNum) {
                uVar26 = ~uVar19 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (pTVar4->AllocatorInstance).Data;
              lVar29 = lVar27 * 0xf8;
              uVar26 = 0;
              if ((int)uVar20 < (this->Nodes).ArrayNum) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar25 = (this->Nodes).AllocatorInstance.Data;
              uVar9 = *(undefined8 *)(pFVar24 + lVar29 + 0xc0 + 8);
              lVar30 = lVar31 * 0x70;
              *(undefined8 *)(pFVar25 + lVar30 + 0x30) = *(undefined8 *)(pFVar24 + lVar29 + 0xc0);
              *(undefined8 *)(pFVar25 + lVar30 + 0x30 + 8) = uVar9;
              *(undefined8 *)(pFVar25 + lVar30 + 0x40) = *(undefined8 *)(pFVar24 + lVar29 + 0xd0);
              uVar9 = *(undefined8 *)(pFVar24 + lVar29 + 0xd8 + 8);
              *(undefined8 *)(pFVar25 + lVar30 + 0x48) = *(undefined8 *)(pFVar24 + lVar29 + 0xd8);
              *(undefined8 *)(pFVar25 + lVar30 + 0x48 + 8) = uVar9;
              *(undefined8 *)(pFVar25 + lVar30 + 0x58) = *(undefined8 *)(pFVar24 + lVar29 + 0xe8);
              uVar26 = 0;
              if ((int)uVar20 < (this->Nodes).ArrayNum) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (this->Nodes).AllocatorInstance.Data;
              lVar30 = lVar31 * 0x70;
              lVar29 = (longlong)(int)local_168;
              uVar26 = 0;
              if ((int)local_168 < (this->WorkPool).ArrayNum) {
                uVar26 = ~local_168 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar9 = *(undefined8 *)(pFVar24 + lVar30 + 0x30 + 8);
              pFVar25 = (pTVar4->AllocatorInstance).Data;
              lVar29 = lVar29 * 0xf8;
              *(undefined8 *)(pFVar25 + lVar29 + 8) = *(undefined8 *)(pFVar24 + lVar30 + 0x30);
              *(undefined8 *)(pFVar25 + lVar29 + 8 + 8) = uVar9;
              *(undefined8 *)(pFVar25 + lVar29 + 0x18) = *(undefined8 *)(pFVar24 + lVar30 + 0x40);
              uVar9 = *(undefined8 *)(pFVar24 + lVar30 + 0x48 + 8);
              *(undefined8 *)(pFVar25 + lVar29 + 0x20) = *(undefined8 *)(pFVar24 + lVar30 + 0x48);
              *(undefined8 *)(pFVar25 + lVar29 + 0x20 + 8) = uVar9;
              *(undefined8 *)(pFVar25 + lVar29 + 0x30) = *(undefined8 *)(pFVar24 + lVar30 + 0x58);
              iVar23 = (this->Nodes).ArrayNum;
              uVar26 = 0;
              if ((int)uVar20 < iVar23) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(int *)((this->Nodes).AllocatorInstance.Data + lVar31 * 0x70 + 100) = iVar23 + 1;
              uVar26 = 0;
              if ((int)uVar19 < (this->WorkPool).ArrayNum) {
                uVar26 = ~uVar19 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar29 = (longlong)(int)local_164;
              iVar23 = *(int *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0x78);
              uVar26 = 0;
              if ((int)local_164 < (this->WorkPool).ArrayNum) {
                uVar26 = ~local_164 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(int *)((pTVar4->AllocatorInstance).Data + lVar29 * 0xf8 + 0x78) = iVar23 + 1;
              uVar26 = 0;
              if ((int)uVar19 < (this->WorkPool).ArrayNum) {
                uVar26 = ~uVar19 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar29 = (longlong)(int)local_168;
              iVar23 = *(int *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8 + 0x78);
              uVar26 = 0;
              if ((int)local_168 < (this->WorkPool).ArrayNum) {
                uVar26 = ~local_168 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(int *)((pTVar4->AllocatorInstance).Data + lVar29 * 0xf8 + 0x78) = iVar23 + 1;
              uVar26 = 0;
              if ((int)uVar20 < (this->Nodes).ArrayNum) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar29 = (longlong)(int)local_164;
              uVar7 = *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 * 0x70 + 0x60);
              uVar26 = 0;
              if ((int)local_164 < (this->WorkPool).ArrayNum) {
                uVar26 = ~local_164 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar29 * 0xf8 + 0x7c) = uVar7;
              uVar26 = 0;
              if ((int)uVar20 < (this->Nodes).ArrayNum) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar29 = (longlong)(int)local_168;
              uVar7 = *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar31 * 0x70 + 100);
              uVar26 = 0;
              if ((int)local_168 < (this->WorkPool).ArrayNum) {
                uVar26 = ~local_168 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar29 * 0xf8 + 0x7c) = uVar7;
              pTVar5 = &this->WorkStack;
              pFVar24 = (pTVar5->AllocatorInstance).Data;
              if (((pFVar24 <= (FScriptContainerElement *)&local_168) &&
                  ((FScriptContainerElement *)&local_168 <
                   pFVar24 + (longlong)(this->WorkStack).ArrayMax * 4)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar23 = (this->WorkStack).ArrayNum;
              if (iVar23 == (this->WorkStack).ArrayMax) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar5->AllocatorInstance,&(this->WorkStack).ArrayMax);
              }
              (this->WorkStack).ArrayNum = iVar23 + 1;
              *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_168;
              pFVar24 = (pTVar5->AllocatorInstance).Data;
              if (((pFVar24 <= (FScriptContainerElement *)&local_164) &&
                  ((FScriptContainerElement *)&local_164 <
                   pFVar24 + (longlong)(this->WorkStack).ArrayMax * 4)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar23 = (this->WorkStack).ArrayNum;
              if (iVar23 == (this->WorkStack).ArrayMax) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar5->AllocatorInstance,&(this->WorkStack).ArrayMax);
              }
              (this->WorkStack).ArrayNum = iVar23 + 1;
              *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)iVar23 * 4) = local_164;
              uVar26 = 0;
              if ((int)uVar20 < (this->Nodes).ArrayNum) {
                uVar26 = ~uVar20 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar21 = *(int *)((this->Nodes).AllocatorInstance.Data + lVar31 * 0x70 + 100) -
                       (this->Nodes).ArrayNum;
              iVar23 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x70,8,iVar21 + 1,&(this->Nodes).AllocatorInstance,
                                  &(this->Nodes).ArrayNum,&(this->Nodes).ArrayMax);
              DefaultConstructItems<Chaos::TAABBTreeNode<double>,int>
                        ((this->Nodes).AllocatorInstance.Data + (longlong)iVar23 * 0x70,iVar21 + 1);
              uVar26 = 0;
              if ((int)uVar19 < (this->WorkPool).ArrayNum) {
                uVar26 = ~uVar19 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(undefined4 *)((pTVar4->AllocatorInstance).Data + lVar27 * 0xf8) = 2;
              goto LAB_148c34482;
            }
          }
          `Chaos::
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          ::SplitNode'::__l4::<lambda_1>::operator()(local_138);
          if (((this->WorkStack).ArrayNum < 1) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar23 = (this->WorkStack).ArrayNum;
          uVar26 = iVar23 - 1;
          pFVar24 = (this->WorkStack).AllocatorInstance.Data + (longlong)(int)uVar26 * 4;
          iVar23 = ~uVar26 + iVar23;
        }
        else {
LAB_148c343fd:
          `Chaos::
          TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
          ::SplitNode'::__l4::<lambda_1>::operator()(local_138);
          if (((this->WorkStack).ArrayNum < 1) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar23 = (this->WorkStack).ArrayNum;
          uVar26 = iVar23 - 1;
          pFVar24 = (this->WorkStack).AllocatorInstance.Data + (longlong)(int)uVar26 * 4;
          iVar23 = ~uVar26 + iVar23;
        }
        if (iVar23 != 0) {
          memmove(pFVar24,pFVar24 + 4,(longlong)iVar23 << 2);
        }
        piVar1 = &(this->WorkStack).ArrayNum;
        *piVar1 = *piVar1 + -1;
        FreeWorkSnapshot(this,uVar19);
      }
LAB_148c34482:
    } while ((this->WorkStack).ArrayNum != 0);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return;
}

// Sweep @ 148c34540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::Sweep(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
       TVector<double,3> *param_4,ISpatialVisitor<int,double> *param_5)

{
  undefined1 auStackY_f8 [32];
  TSpatialVisitor<int,double> local_a8 [2];
  TVector<double,3> local_98;
  TAABB<double,3> local_78;
  FQueryFastData local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_a8[0].Visitor = param_5;
  local_98._0_8_ = *(undefined8 *)param_4;
  local_98._8_8_ = *(undefined8 *)&param_4->field_0x8;
  local_98._16_8_ = *(undefined8 *)&param_4->field_0x10;
  FQueryFastData::FQueryFastData(&local_48,param_2,param_3);
  local_78.MMin._0_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_78.MMin._8_8_ = _UNK_150a9e648;
  local_78.MMin._16_8_ = ___xmm_ffefffffffffffff7fefffffffffffff;
  local_78.MMax._0_8_ = _UNK_150a9e6d8;
  local_78.MMax._8_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_78.MMax._16_8_ = _UNK_1508ffb58;
  QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<int,double>_>
            (this,param_1,&local_48,&local_98,&local_78,local_a8,local_48.Dir,&local_48.InvDir,
             local_48.bParallel);
  return;
}

// UpdateElement @ 148c34df0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::UpdateElement(TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                *this,int *param_1,TAABB<double,3> *param_2,bool param_3)

{
  double _X;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TVector<double,3> *pTVar5;
  longlong lVar6;
  FString local_38;
  FString local_28 [2];
  
  if (this->bModifyingTreeMultiThreadingFastCheck != false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181246422089988253>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                       ,0x763,"bModifyingTreeMultiThreadingFastCheck == false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::UpdateElement(int_const&___ptr64,Chaos::TAABB<double,3>_const&___ptr64,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  this->bModifyingTreeMultiThreadingFastCheck = true;
  if (param_3) {
    pTVar5 = &param_2->MMax;
    lVar6 = 0;
    do {
      _X = *(double *)pTVar5;
      if (((_X < *(double *)&((TAABB<double,3> *)(pTVar5 + -1))->MMin) ||
          (iVar4 = _finite(*(double *)&((TAABB<double,3> *)(pTVar5 + -1))->MMin), iVar4 == 0)) ||
         (iVar4 = _finite(_X), iVar4 == 0)) {
        if (2 < (byte)LogChaos._0_1_) {
          ::FString::PrintfImpl(local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
          ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
          UE::Logging::Private::BasicLog<3>
                    (&`public:_virtual_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::UpdateElement(int_const&___ptr64,Chaos::TAABB<double,3>_const&___ptr64,bool)___ptr64'
                      ::__l29::LOG_Static,(FLogCategoryBase *)&LogChaos);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        break;
      }
      lVar6 = lVar6 + 1;
      pTVar5 = (TVector<double,3> *)&pTVar5->field_0x8;
    } while (lVar6 < 3);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9181246422089988211>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                     ,0x78d,"bMutable");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((((this->DirtyElementTree).Ptr ==
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) && (this->bDynamicTree == false)) &&
     (MaxDirtyElements < (this->DirtyElements).ArrayNum)) {
    if (5 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_bool___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::UpdateElement(int_const&___ptr64,Chaos::TAABB<double,3>_const&___ptr64,bool)___ptr64'
                  ::__l148::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    ReoptimizeTree(this);
  }
  this->bModifyingTreeMultiThreadingFastCheck = false;
  return true;
}

// operator() @ 150538b30

bool __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::GenerateTree<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_>'::
__l23::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9181246422089986832>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9181246422089986832>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::GenerateTree<TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_>(TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`23'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150538c17;
    }
  }
  bVar4 = false;
LAB_150538c17:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150538c70

bool __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
GenerateTree<TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_>_>'
::__l23::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9181246422089986832>);
  if (bVar4) {
    ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9181246422089986832>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,double>,0,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::GenerateTree<TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_>_>(TArray<ClothingMeshUtils::ClothMeshDesc::FClothBvEntry,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`23'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150538d57;
    }
  }
  bVar4 = false;
LAB_150538d57:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

