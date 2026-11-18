// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 64

// TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_><TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_> @ 14822f7b0

TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
* __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_><TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          int param_3,double param_4,int param_5,bool param_6,bool param_7,bool param_8)

{
  TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
  *pTVar1;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar2;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  longlong local_18 [2];
  
  this_00 = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
             *)0x0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x101;
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
       ___7__TAABBTree_HU__TAABBTreeLeafArray_H_00N_Chaos___00NU__TDefaultAABBTreeStorageTraits_H_2__Chaos__6B_
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
  pTVar1->Ptr = (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
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
  if (!param_7) goto LAB_14822f9ce;
  pTVar2 = ::operator_new(0x1d8);
  if (pTVar2 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                 *)0x0) {
    this_00 = TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                        (pTVar2);
  }
  if (pTVar1 == (TUniquePtr<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>,TDefaultDelete<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>_>_>
                 *)local_18) {
    if (this_00 !=
        (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
         *)0x0) {
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (this_00);
      goto LAB_14822f9b8;
    }
  }
  else {
    pTVar2 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pTVar2 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                   *)0x0) {
      ~TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                (pTVar2);
      this_00 = pTVar2;
LAB_14822f9b8:
      ::operator_delete(this_00,0x1d8);
    }
  }
  pTVar1->Ptr->bDynamicTree = true;
LAB_14822f9ce:
  GenerateTree<TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_>(this,param_1);
  return this;
}

// GenerateTree<TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>_> @ 14823df80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
GenerateTree<TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>_>
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FObjectKey FVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  FObjectKey FVar21;
  FObjectKey FVar22;
  FObjectKey FVar23;
  FObjectKey FVar24;
  FObjectKey FVar25;
  FObjectKey FVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  int iVar31;
  FName *pFVar32;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree> FVar33;
  TStatId TVar34;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice> FVar35;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar36;
  ulonglong uVar37;
  longlong lVar38;
  FObjectKey *pFVar39;
  longlong lVar40;
  FName FVar41;
  FObjectKey *pFVar42;
  FName FVar43;
  FObjectKey *pFVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  FObjectKey FVar49;
  double dVar50;
  FObjectKey FVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_328 [2];
  FObjectKey local_320 [6];
  FCycleCounter local_2f0;
  FColor_u_0 local_2e0;
  uint local_2dc;
  uint local_2d8;
  FColor_u_0 local_2d4;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2a8;
  LARGE_INTEGER local_298;
  FObjectKey *local_290;
  FObjectKey *local_288;
  LARGE_INTEGER local_280;
  FStatMessage local_278;
  FSourceLocation local_268;
  FObjectKey local_248;
  FObjectKey FStack_240;
  FObjectKey local_238;
  FObjectKey FStack_230;
  FObjectKey local_228;
  FObjectKey local_220;
  FObjectKey FStack_218;
  FObjectKey local_210;
  FObjectKey local_208;
  FObjectKey FStack_200;
  FObjectKey local_1f8;
  FObjectKey FStack_1f0;
  FObjectKey local_1e8;
  FObjectKey local_1e0;
  FObjectKey FStack_1d8;
  FObjectKey local_1d0;
  FAABBTreePayloadInfo local_1c8;
  FName local_1b4 [2];
  FName local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  FObjectKey local_178;
  FObjectKey FStack_170;
  FObjectKey local_168;
  FObjectKey local_160;
  FObjectKey FStack_158;
  FObjectKey local_150;
  FObjectKey local_130;
  FObjectKey FStack_128;
  FObjectKey local_120;
  FObjectKey local_100;
  FObjectKey FStack_f8;
  FObjectKey local_f0;
  
  FVar33 = Chaos::StatPtr_STAT_AABBTreeGenerateTree;
  if (Chaos::StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar32 = ::FName::FName(local_1b4,"STAT_AABBTreeGenerateTree");
    FVar33 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&Chaos::StatPtr_STAT_AABBTreeGenerateTree,
                        *pFVar32,L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar43 = *(FName *)FVar33;
  bVar15 = false;
  bVar14 = false;
  local_2b8.ComparisonIndex.Value = 0;
  local_2b8.Number = 0;
  bVar28 = false;
  bVar27 = false;
  if ((FVar43.ComparisonIndex.Value.Value == 0) && (FVar43.Number == 0)) {
LAB_14823e0ec:
    bVar15 = bVar28;
    bVar14 = bVar27;
    bVar27 = false;
    local_2d0 = local_2b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e0._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
      bVar15 = false;
      bVar14 = true;
      bVar28 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c8.ComparisonIndex.Value = FVar43.ComparisonIndex.Value.Value;
        local_2c8.Number = FVar43.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c8,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                   ,0xc94);
        bVar15 = true;
        bVar14 = true;
        bVar28 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14823e0ec;
    local_2d0 = FVar43;
    FThreadStats::AddMessage(FVar43,CycleScopeStart);
    bVar27 = true;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  if (((this->WorkStack).ArrayNum != 0) &&
     (bVar28 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089986921>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0xc97,"WorkStack.Num() == 0"), bVar28)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = param_1->ArrayNum;
  uVar37 = (longlong)(int)uVar6 / (longlong)this->MaxChildrenInLeaf;
  iVar31 = (int)uVar37;
  local_2d8 = uVar6;
  if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar37 & 0xffffffff);
  }
  if ((this->WorkStack).ArrayMax < iVar31) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar31,&(this->WorkStack).AllocatorInstance,(this->WorkStack).ArrayNum,
               &(this->WorkStack).ArrayMax);
  }
  uVar30 = GetNewWorkSnapshot(this);
  uVar36 = 0;
  if ((int)uVar30 < (this->WorkPool).ArrayNum) {
    uVar36 = ~uVar30 >> 0x1f;
  }
  local_328[0] = uVar30;
  if ((uVar36 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar7 = (this->WorkPool).AllocatorInstance.Data;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (*(int *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x44) < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar6,(ForAnyElementType *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x38),
               *(int *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x40),
               (int *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x44));
  }
  pTVar3 = &this->GlobalPayloads;
  (this->GlobalPayloads).ArrayNum = 0;
  if ((this->GlobalPayloads).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&pTVar3->AllocatorInstance,0,&(this->GlobalPayloads).ArrayMax);
  }
  puVar1 = &(this->Leaves).field_0xc;
  iVar31 = *(int *)&(this->Leaves).field_0x8;
  if (*(int *)puVar1 < 0) {
    DestructItems<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,int>
              (*(TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> **)&this->Leaves,
               iVar31);
    *(undefined4 *)&(this->Leaves).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)&this->Leaves,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,int>
              (*(TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> **)&this->Leaves,
               iVar31);
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
              (0x40,8,0,&(this->DirtyElements).AllocatorInstance,0,piVar2);
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
      (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
       *)0x0) {
    Reset(this_00);
  }
  (this->TreeStats).StatNumNonEmptyCellsInGrid = 0;
  (this->TreeStats).StatNumElementsTooLargeForGrid = 0;
  (this->TreeStats).StatNumDirtyElements = 0;
  (this->TreeStats).StatNumGridOverflowElements = 0;
  piVar2 = &(this->PayloadToInfo).Elements.ArrayMax;
  (this->TreeExpensiveStats).StatMaxNumLeaves = 0;
  (this->TreeExpensiveStats).StatMaxDirtyElements = 0;
  (this->TreeExpensiveStats).StatMaxLeafSize = 0;
  (this->TreeExpensiveStats).StatMaxTreeDepth = 0;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize = 0;
  iVar31 = *piVar2;
  (this->PayloadToInfo).Elements.ArrayNum = 0;
  if (iVar31 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)&this->PayloadToInfo,0,piVar2);
  }
  if (*(int *)&(this->PayloadToInfo).HashTable.field_0x8 != 0) {
    memset(*(void **)&(this->PayloadToInfo).HashTable.field_0x10,0xff,
           (ulonglong)(uint)(*(int *)&(this->PayloadToInfo).HashTable << 2));
  }
  this->NumProcessedThisSlice = 0;
  QueryPerformanceCounter(&local_298);
  dVar16 = __real_3ff0000000000000;
  this->StartSliceTimeStamp =
       (double)local_298.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  dVar48 = __real_3e45798ee0000000;
  dVar47 = (double)FAABBTreeDirtyGridCVars::DirtyElementGridCellSize;
  this->DirtyElementGridCellSize = dVar47;
  dVar45 = dVar16;
  if (dVar48 < dVar47) {
    dVar45 = dVar16 / dVar47;
  }
  this->DirtyElementGridCellSizeInv = dVar45;
  this->DirtyElementMaxGridCellQueryCount =
       FAABBTreeDirtyGridCVars::DirtyElementMaxGridCellQueryCount;
  this->DirtyElementMaxPhysicalSizeInCells =
       FAABBTreeDirtyGridCVars::DirtyElementMaxPhysicalSizeInCells;
  this->DirtyElementMaxCellCapacity = FAABBTreeDirtyGridCVars::DirtyElementMaxCellCapacity;
  FVar24 = _UNK_1508ffb58;
  FVar23 = ___xmm_ffefffffffffffffffefffffffffffff;
  FVar22 = __real_ffefffffffffffff;
  if (this->bDynamicTree != false) {
    pFVar42 = (FObjectKey *)(param_1->AllocatorInstance).Data;
    iVar31 = param_1->ArrayNum;
    pFVar44 = pFVar42 + (longlong)iVar31 * 8;
    pFVar39 = pFVar42 + 5;
    while( true ) {
      if (param_1->ArrayNum != iVar31) {
        `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar42 == pFVar44) break;
      local_198._0_8_ = *pFVar42;
      local_198._8_8_ = pFVar42[1];
      local_178 = pFVar39[-3];
      FStack_170 = pFVar39[-2];
      local_168 = pFVar39[-1];
      local_160 = *pFVar39;
      FStack_158 = pFVar39[1];
      local_150 = pFVar39[2];
      UpdateElement(this,(FExternalSpatialAccelerationPayload *)local_198,
                    (TAABB<double,3> *)&local_178,true);
      pFVar42 = pFVar42 + 8;
      pFVar39 = pFVar39 + 8;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    FVar43 = local_2d0;
    goto LAB_14823eea8;
  }
  local_120 = __real_ffefffffffffffff;
  local_130 = ___xmm_ffefffffffffffffffefffffffffffff;
  FStack_128 = _UNK_1508ffb58;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 8) = 0x7fefffffffffffff;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x10) = 0x7fefffffffffffff;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x18) = 0x7fefffffffffffff;
  *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x20) = FVar23;
  *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x28) = FVar24;
  *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x30) = FVar22;
  TVar34 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1> *)
                      &Chaos::StatPtr_STAT_AABBTreeTimeSliceSetup);
  local_268.Impl._Line = 0xcd8;
  local_268.Impl._Column = 4;
  local_268.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
  ;
  local_268.Impl._Function =
       "void __cdecl Chaos::TAABBTree<struct FExternalSpatialAccelerationPayload,struct Chaos::TAABBTreeLeafArray<struct FExternalSpatialAccelerationPayload,1,double>,1,double,struct `anonymous namespace\'::TClusterUnionAABBTreeStorageTraits<struct FExternalSpatialAccelerationPayload> >::GenerateTree<class TArray<struct Chaos::TPayloadBoundsElement<struct FExternalSpatialAccelerationPayload,double>,class TSizedDefaultAllocator<32> >>(const class TArray<struct Chaos::TPayloadBoundsElement<struct FExternalSpatialAccelerationPayload,double>,class TSizedDefaultAllocator<32> > &)"
  ;
  local_2f0.StatId.ComparisonIndex.Value = 0;
  local_2f0.StatId.Number = 0;
  local_2f0.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_2f0,*(TStatIdData **)&(TVar34.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_268);
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x48) = 0;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x50) = 0;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x58) = 0;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x60) = 0;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x68) = 0;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x70) = 0;
  FVar26 = _UNK_150a9e648;
  FVar25 = ___xmm_7fefffffffffffff7fefffffffffffff;
  FVar21 = __real_7fefffffffffffff;
  uVar19 = _UNK_15060db28;
  uVar17 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_2dc = param_1->ArrayNum;
  uVar37 = (ulonglong)(int)local_2dc;
  pFVar42 = (FObjectKey *)(param_1->AllocatorInstance).Data;
  local_288 = pFVar42 + uVar37 * 8;
  pFVar39 = pFVar42 + 5;
  while( true ) {
    pFVar44 = local_288;
    if (param_1->ArrayNum != (int)uVar37) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    FVar43 = local_2d0;
    if (pFVar42 == pFVar44) break;
    lVar40 = 0;
    FVar49 = *pFVar42;
    FVar51 = pFVar42[1];
    local_320[0] = pFVar39[-3];
    local_320[1] = pFVar39[-2];
    local_320[2] = pFVar39[-1];
    local_320[3] = *pFVar39;
    local_320[4] = pFVar39[1];
    local_320[5] = pFVar39[2];
    local_188._0_8_ = FVar49;
    local_188._8_8_ = FVar51;
    do {
      FVar5 = local_320[lVar40 + 3];
      if ((((double)FVar5 < (double)local_320[lVar40]) ||
          (iVar31 = _finite((double)local_320[lVar40]), iVar31 == 0)) ||
         (iVar31 = _finite((double)FVar5), iVar31 == 0)) {
        local_290 = local_320;
        `Chaos::
        TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
        ::
        GenerateTree<TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>_>'
        ::__l23::<lambda_1>::operator()(&local_290);
        local_320[2] = FVar22;
        local_f0 = FVar21;
        local_100 = FVar25;
        FStack_f8 = FVar26;
        local_320[0] = FVar23;
        local_320[1] = FVar24;
        local_320[3] = FVar25;
        local_320[4] = FVar26;
        local_320[5] = FVar21;
        goto LAB_14823ea0e;
      }
      lVar40 = lVar40 + 1;
    } while (lVar40 < 3);
    dVar47 = (double)local_320[4] - (double)local_320[1];
    dVar45 = (double)local_320[3] - (double)local_320[0];
    dVar48 = (double)local_320[5] - (double)local_320[2];
    if (((dVar45 <= dVar47) || (dVar45 <= dVar48)) && (dVar45 = dVar48, dVar48 <= dVar47)) {
      dVar45 = dVar47;
    }
    if (this->MaxPayloadBounds <= dVar45 && dVar45 != this->MaxPayloadBounds) {
LAB_14823ea0e:
      uVar20 = _UNK_15060db28;
      uVar18 = ___xmm_ffffffffffffffffffffffffffffffff;
      local_1c8.GlobalPayloadIdx = (this->GlobalPayloads).ArrayNum;
      ___xmm_ffffffffffffffffffffffffffffffff = (int)uVar17;
      _UNK_15060db24 = SUB84(uVar17,4);
      local_1c8.DirtyPayloadIdx = ___xmm_ffffffffffffffffffffffffffffffff;
      local_1c8.LeafIdx = _UNK_15060db24;
      _UNK_15060db28 = (int)uVar19;
      _UNK_15060db2c = SUB84(uVar19,4);
      local_1c8.DirtyGridOverflowIdx = _UNK_15060db28;
      local_1c8.NodeIdx = _UNK_15060db2c;
      ___xmm_ffffffffffffffffffffffffffffffff = uVar18;
      _UNK_15060db28 = uVar20;
      TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Add
                (&this->PayloadToInfo,(FExternalSpatialAccelerationPayload *)local_188,&local_1c8);
      pFVar44 = (FObjectKey *)(pTVar3->AllocatorInstance).Data;
      local_1e8 = local_320[2];
      local_1d0 = local_320[5];
      local_1f8 = local_320[0];
      FStack_1f0 = local_320[1];
      local_1e0 = local_320[3];
      FStack_1d8 = local_320[4];
      local_208 = FVar49;
      FStack_200 = FVar51;
      if (((pFVar44 <= &local_208) &&
          (&local_208 < pFVar44 + (longlong)(this->GlobalPayloads).ArrayMax * 8)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar28)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar31 = (this->GlobalPayloads).ArrayNum;
      if (iVar31 == (this->GlobalPayloads).ArrayMax) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar3->AllocatorInstance,&(this->GlobalPayloads).ArrayMax);
      }
      (this->GlobalPayloads).ArrayNum = iVar31 + 1;
      pFVar8 = (pTVar3->AllocatorInstance).Data;
      lVar40 = (longlong)iVar31 * 0x40;
      *(FObjectKey *)(pFVar8 + lVar40) = local_208;
      ((FObjectKey *)(pFVar8 + lVar40))[1] = FStack_200;
      *(FObjectKey *)(pFVar8 + lVar40 + 0x10) = local_1f8;
      ((FObjectKey *)(pFVar8 + lVar40 + 0x10))[1] = FStack_1f0;
      *(FObjectKey *)(pFVar8 + lVar40 + 0x20) = local_1e8;
      *(FObjectKey *)(pFVar8 + lVar40 + 0x28) = local_1e0;
      ((FObjectKey *)(pFVar8 + lVar40 + 0x28))[1] = FStack_1d8;
      *(FObjectKey *)(pFVar8 + lVar40 + 0x38) = local_1d0;
    }
    else {
      local_238 = local_320[0];
      FStack_230 = local_320[1];
      local_228 = local_320[2];
      local_210 = local_320[5];
      local_220 = local_320[3];
      FStack_218 = local_320[4];
      local_248 = FVar49;
      FStack_240 = FVar51;
      if (((*(FObjectKey **)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x38) <= &local_248) &&
          (&local_248 <
           *(FObjectKey **)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x38) +
           (longlong)*(int *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x44) * 8)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar28)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar31 = *(int *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x40);
      if (iVar31 == *(int *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x44)) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,(ForAnyElementType *)
                                  (pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x38),
                            (int *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x44));
      }
      lVar40 = *(longlong *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x38);
      *(int *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x40) = iVar31 + 1;
      lVar38 = (longlong)iVar31 * 0x40;
      *(FObjectKey *)(lVar38 + lVar40) = local_248;
      ((FObjectKey *)(lVar38 + lVar40))[1] = FStack_240;
      pFVar44 = (FObjectKey *)(lVar38 + 0x10 + lVar40);
      *pFVar44 = local_238;
      pFVar44[1] = FStack_230;
      *(FObjectKey *)(lVar38 + 0x20 + lVar40) = local_228;
      pFVar44 = (FObjectKey *)(lVar38 + 0x28 + lVar40);
      *pFVar44 = local_220;
      pFVar44[1] = FStack_218;
      *(FObjectKey *)(lVar38 + 0x38 + lVar40) = local_210;
      FVar49 = *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x18);
      if ((double)local_320[2] <=
          (double)*(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x18)) {
        FVar49 = local_320[2];
      }
      FVar51 = *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x10);
      if ((double)local_320[1] <=
          (double)*(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x10)) {
        FVar51 = local_320[1];
      }
      FVar5 = local_320[0];
      if ((double)*(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 8) <= (double)local_320[0]
         ) {
        FVar5 = *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 8);
      }
      *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 8) = FVar5;
      *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x10) = FVar51;
      *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x18) = FVar49;
      FVar49 = local_320[3];
      if ((double)local_320[3] <=
          (double)*(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x20)) {
        FVar49 = *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x20);
      }
      FVar51 = *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x30);
      if ((double)*(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x30) <=
          (double)local_320[5]) {
        FVar51 = local_320[5];
      }
      FVar5 = *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x28);
      if ((double)*(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x28) <=
          (double)local_320[4]) {
        FVar5 = local_320[4];
      }
      *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x20) = FVar49;
      *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x28) = FVar5;
      *(FObjectKey *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x30) = FVar51;
      dVar45 = dVar16 / (double)(iVar31 + 1);
      dVar11 = ((double)local_320[3] - (double)local_320[0]) * __real_3fe0000000000000 +
               (double)local_320[0];
      dVar48 = dVar11 - *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x48);
      dVar10 = ((double)local_320[4] - (double)local_320[1]) * __real_3fe0000000000000 +
               (double)local_320[1];
      dVar47 = ((double)local_320[5] - (double)local_320[2]) * __real_3fe0000000000000 +
               (double)local_320[2];
      dVar53 = dVar47 - *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x58);
      dVar54 = dVar10 - *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x50);
      dVar52 = dVar45 * dVar48 + *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x48);
      *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x48) = dVar52;
      dVar50 = dVar45 * dVar53 + *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x58);
      dVar46 = dVar45 * dVar54 + *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x50);
      *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x58) = dVar50;
      *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x50) = dVar46;
      dVar45 = *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x70);
      *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x60) =
           (dVar11 - dVar52) * dVar48 + *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x60);
      dVar48 = *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x68);
      *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x70) =
           (dVar47 - dVar50) * dVar53 + dVar45;
      *(double *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x68) =
           (dVar10 - dVar46) * dVar54 + dVar48;
    }
    pFVar42 = pFVar42 + 8;
    pFVar39 = pFVar39 + 8;
    uVar37 = (ulonglong)local_2dc;
  }
  if ((local_2f0.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2f0.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2f0.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_2f0.StatId,CycleScopeEnd);
  }
  this->NumProcessedThisSlice = local_2d8;
  local_2f0.EmittedEvent = '\0';
  FVar35 = Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice;
  if (Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar32 = ::FName::FName(&local_1a0,"STAT_AABBTreeInitialTimeSlice");
    FVar35 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice,
                        *pFVar32,L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar35;
  bVar28 = false;
  bVar13 = false;
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_14823ed27:
    bVar12 = false;
    FVar41 = local_2a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2d4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2d4._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar28 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_2c0.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c0,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                   ,0xd1c);
        bVar28 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14823ed27;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar12 = true;
  }
  pTVar4 = &this->WorkStack;
  *(undefined8 *)(pFVar7 + (longlong)(int)uVar30 * 0xf8 + 0x78) = 0;
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  piVar2 = &(this->WorkStack).ArrayMax;
  if (((pFVar7 <= (FScriptContainerElement *)local_328) &&
      ((FScriptContainerElement *)local_328 < pFVar7 + (longlong)*piVar2 * 4)) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar29)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar31 = (this->WorkStack).ArrayNum;
  if (iVar31 == *piVar2) {
    iVar31 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar4->AllocatorInstance,piVar2);
  }
  (this->WorkStack).ArrayNum = iVar31 + 1;
  *(uint *)((pTVar4->AllocatorInstance).Data + (longlong)iVar31 * 4) = local_328[0];
  SplitNode(this);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar12) && (FVar41 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_278.NameAndInfo.Index = FVar41.ComparisonIndex.Value;
      local_278.NameAndInfo.Number = FVar41.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_280);
      local_278.StatData.Pad[4] = '\0';
      local_278.StatData.Pad[5] = '\0';
      local_278.StatData.Pad[6] = '\0';
      local_278.StatData.Pad[7] = '\0';
      local_278.StatData.Pad[0] = local_280.s.LowPart._0_1_;
      local_278.StatData.Pad[1] = local_280.s.LowPart._1_1_;
      local_278.StatData.Pad[2] = local_280.s.LowPart._2_1_;
      local_278.StatData.Pad[3] = local_280.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_278);
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
LAB_14823eea8:
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar27) {
    FThreadStats::AddMessage(FVar43,CycleScopeEnd);
  }
  return;
}

// GenerateTree<TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_> @ 14823ef10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::GenerateTree<TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_>
          (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
           *this,TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 *puVar2;
  int *piVar3;
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree> FVar28;
  TStatId TVar29;
  FAABBTreePayloadInfo *pFVar30;
  FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice> FVar31;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  int iVar34;
  ulonglong uVar35;
  longlong lVar36;
  FName FVar37;
  ulonglong uVar38;
  FName FVar39;
  ulonglong uVar40;
  FScriptContainerElement *pFVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_304;
  double local_300 [6];
  FCycleCounter local_2d0;
  FColor_u_0 local_2c0;
  int local_2bc;
  int local_2b8;
  uint local_2b4;
  FColor_u_0 local_2b0 [2];
  FName local_2a8;
  FScriptContainerElement *local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_278;
  LARGE_INTEGER local_268;
  double *local_260;
  FScriptContainerElement *local_258;
  LARGE_INTEGER local_250;
  FStatMessage local_248;
  int local_238 [2];
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  int local_200 [2];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  FSourceLocation local_1c8;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  FName local_194 [2];
  FName local_180;
  TAABB<double,3> local_178;
  double local_130;
  double dStack_128;
  double local_120;
  double local_100;
  double dStack_f8;
  double local_f0;
  
  uVar38 = 0;
  FVar28 = Chaos::StatPtr_STAT_AABBTreeGenerateTree;
  if (Chaos::StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar27 = ::FName::FName(local_194,"STAT_AABBTreeGenerateTree");
    FVar28 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&Chaos::StatPtr_STAT_AABBTreeGenerateTree,
                        *pFVar27,L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar39 = *(FName *)FVar28;
  bVar13 = false;
  bVar12 = false;
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  bVar23 = false;
  bVar22 = false;
  if ((FVar39.ComparisonIndex.Value.Value == 0) && (FVar39.Number == 0)) {
LAB_14823f078:
    bVar13 = bVar23;
    bVar12 = bVar22;
    bVar22 = false;
    local_2a8 = local_288;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c0._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar23 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_298.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_298.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_298,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                   ,0xc94);
        bVar13 = true;
        bVar12 = true;
        bVar23 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14823f078;
    local_2a8 = FVar39;
    FThreadStats::AddMessage(FVar39,CycleScopeStart);
    bVar22 = true;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  if ((this->WorkStack).ArrayNum != 0) {
    bVar23 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_9181246422089986921>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                        ,0xc97,"WorkStack.Num() == 0");
    if (bVar23) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar6 = param_1->ArrayNum;
  uVar40 = (longlong)(int)uVar6 / (longlong)this->MaxChildrenInLeaf;
  iVar26 = (int)uVar40;
  local_2b4 = uVar6;
  if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar40 & 0xffffffff);
  }
  if ((this->WorkStack).ArrayMax < iVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar26,&(this->WorkStack).AllocatorInstance,(this->WorkStack).ArrayNum,
               &(this->WorkStack).ArrayMax);
  }
  local_304 = GetNewWorkSnapshot(this);
  lVar36 = (longlong)(int)local_304;
  uVar32 = 0;
  if ((int)local_304 < (this->WorkPool).ArrayNum) {
    uVar32 = ~local_304 >> 0x1f;
  }
  if (uVar32 == 0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar33 = (this->WorkPool).AllocatorInstance.Data + lVar36 * 0xf8;
  pFVar1 = pFVar33 + 0x38;
  local_2a0 = pFVar33;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (*(int *)(pFVar33 + 0x44) < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar6,(ForAnyElementType *)pFVar1,*(int *)(pFVar33 + 0x40),
               (int *)(pFVar33 + 0x44));
  }
  pTVar4 = &this->GlobalPayloads;
  (this->GlobalPayloads).ArrayNum = 0;
  if ((this->GlobalPayloads).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar4->AllocatorInstance,0,&(this->GlobalPayloads).ArrayMax);
  }
  puVar2 = &(this->Leaves).field_0xc;
  iVar26 = *(int *)&(this->Leaves).field_0x8;
  if (*(int *)puVar2 < 0) {
    DestructItems<Chaos::TAABBTreeLeafArray<int,1,double>,int>
              (*(TAABBTreeLeafArray<int,1,double> **)&this->Leaves,iVar26);
    *(undefined4 *)&(this->Leaves).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)&this->Leaves,0,(int *)puVar2);
    }
  }
  else {
    DestructItems<Chaos::TAABBTreeLeafArray<int,1,double>,int>
              (*(TAABBTreeLeafArray<int,1,double> **)&this->Leaves,iVar26);
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
  piVar3 = &(this->DirtyElements).ArrayMax;
  (this->DirtyElements).ArrayNum = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->DirtyElements).AllocatorInstance,0,piVar3);
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
      (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
       *)0x0) {
    Reset(this_00);
  }
  (this->TreeStats).StatNumNonEmptyCellsInGrid = 0;
  (this->TreeStats).StatNumElementsTooLargeForGrid = 0;
  piVar3 = &(this->PayloadToInfo).Entries.ArrayMax;
  (this->TreeStats).StatNumDirtyElements = 0;
  (this->TreeStats).StatNumGridOverflowElements = 0;
  (this->TreeExpensiveStats).StatMaxNumLeaves = 0;
  (this->TreeExpensiveStats).StatMaxDirtyElements = 0;
  (this->TreeExpensiveStats).StatMaxLeafSize = 0;
  (this->TreeExpensiveStats).StatMaxTreeDepth = 0;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize = 0;
  iVar26 = *piVar3;
  (this->PayloadToInfo).Entries.ArrayNum = 0;
  if (iVar26 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)&this->PayloadToInfo,0,piVar3);
  }
  this->NumProcessedThisSlice = 0;
  QueryPerformanceCounter(&local_268);
  pFVar41 = local_2a0;
  dVar14 = __real_3ff0000000000000;
  this->StartSliceTimeStamp =
       (double)local_268.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  dVar18 = __real_3e45798ee0000000;
  dVar45 = (double)FAABBTreeDirtyGridCVars::DirtyElementGridCellSize;
  this->DirtyElementGridCellSize = dVar45;
  dVar42 = dVar14;
  if (dVar18 < dVar45) {
    dVar42 = dVar14 / dVar45;
  }
  this->DirtyElementGridCellSizeInv = dVar42;
  this->DirtyElementMaxGridCellQueryCount =
       FAABBTreeDirtyGridCVars::DirtyElementMaxGridCellQueryCount;
  this->DirtyElementMaxPhysicalSizeInCells =
       FAABBTreeDirtyGridCVars::DirtyElementMaxPhysicalSizeInCells;
  this->DirtyElementMaxCellCapacity = FAABBTreeDirtyGridCVars::DirtyElementMaxCellCapacity;
  dVar45 = _UNK_1508ffb58;
  dVar18 = ___xmm_ffefffffffffffffffefffffffffffff;
  dVar42 = __real_ffefffffffffffff;
  if (this->bDynamicTree != false) {
    iVar26 = param_1->ArrayNum;
    pFVar33 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar33 + (longlong)iVar26 * 0x18;
    while( true ) {
      if (param_1->ArrayNum != iVar26) {
        `TCheckedPointerIterator<Chaos::FCleanMeshWrapper_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar33 == pFVar1) break;
      local_178.MMin._0_8_ = *(undefined8 *)pFVar33;
      local_178.MMin._8_8_ = *(undefined8 *)(pFVar33 + 8);
      local_178.MMin._16_8_ = *(undefined8 *)(pFVar33 + 0x10);
      local_2bc = (int)uVar38;
      local_178.MMax._0_8_ = local_178.MMin._0_8_;
      local_178.MMax._8_8_ = local_178.MMin._8_8_;
      local_178.MMax._16_8_ = local_178.MMin._16_8_;
      UpdateElement(this,&local_2bc,&local_178,true);
      uVar38 = (ulonglong)((int)uVar38 + 1);
      pFVar33 = pFVar33 + 0x18;
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    FVar39 = local_2a8;
    goto LAB_14823fe02;
  }
  local_120 = __real_ffefffffffffffff;
  local_130 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_128 = _UNK_1508ffb58;
  *(undefined8 *)(local_2a0 + 8) = 0x7fefffffffffffff;
  *(undefined8 *)(local_2a0 + 0x10) = 0x7fefffffffffffff;
  *(undefined8 *)(local_2a0 + 0x18) = 0x7fefffffffffffff;
  *(double *)(local_2a0 + 0x20) = dVar18;
  *(double *)(local_2a0 + 0x28) = dVar45;
  *(double *)(local_2a0 + 0x30) = dVar42;
  TVar29 = FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::FStat_STAT_AABBTreeTimeSliceSetup,1> *)
                      &Chaos::StatPtr_STAT_AABBTreeTimeSliceSetup);
  local_1c8.Impl._Line = 0xcd8;
  local_1c8.Impl._Column = 4;
  local_1c8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
  ;
  local_1c8.Impl._Function =
       "void __cdecl Chaos::TAABBTree<int,struct Chaos::TAABBTreeLeafArray<int,1,double>,1,double,struct Chaos::TDefaultAABBTreeStorageTraits<int> >::GenerateTree<class TArray<struct Chaos::FCleanMeshWrapper,class TSizedDefaultAllocator<32> >>(const class TArray<struct Chaos::FCleanMeshWrapper,class TSizedDefaultAllocator<32> > &)"
  ;
  local_2d0.StatId.ComparisonIndex.Value = 0;
  local_2d0.StatId.Number = 0;
  local_2d0.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_2d0,*(TStatIdData **)&(TVar29.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_1c8);
  *(undefined8 *)(pFVar41 + 0x48) = 0;
  *(undefined8 *)(pFVar41 + 0x50) = 0;
  *(undefined8 *)(pFVar41 + 0x58) = 0;
  *(undefined8 *)(pFVar41 + 0x60) = 0;
  *(undefined8 *)(pFVar41 + 0x68) = 0;
  *(undefined8 *)(pFVar41 + 0x70) = 0;
  dVar21 = _UNK_150a9e648;
  dVar20 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dVar19 = __real_7fefffffffffffff;
  iVar26 = _UNK_15060db2c;
  uVar17 = _UNK_15060db28;
  uVar16 = _UNK_15060db24;
  uVar15 = ___xmm_ffffffffffffffffffffffffffffffff;
  uVar52 = SUB84(__real_3fe0000000000000,0);
  uVar53 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  uVar6 = param_1->ArrayNum;
  uVar40 = (ulonglong)(int)uVar6;
  pFVar41 = (param_1->AllocatorInstance).Data;
  local_258 = pFVar41 + uVar40 * 0x18;
  uVar35 = uVar38;
  while( true ) {
    pFVar7 = local_258;
    iVar34 = (int)uVar35;
    if (param_1->ArrayNum != (int)uVar40) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::FCleanMeshWrapper_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    FVar39 = local_2a8;
    if (pFVar41 == pFVar7) break;
    local_300[0] = *(double *)pFVar41;
    local_300[1] = *(double *)(pFVar41 + 8);
    local_300[3] = *(double *)pFVar41;
    local_300[4] = *(double *)(pFVar41 + 8);
    local_300[2] = *(double *)(pFVar41 + 0x10);
    local_300[5] = *(double *)(pFVar41 + 0x10);
    uVar40 = uVar38;
    local_2b8 = iVar34;
    do {
      dVar43 = local_300[uVar40 + 3];
      if (dVar43 < local_300[uVar40]) {
LAB_14823f933:
        local_260 = local_300;
        `Chaos::
        TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
        ::GenerateTree<TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_>'::__l23::
        <lambda_1>::operator()(&local_260);
        local_300[2] = dVar42;
        local_f0 = dVar19;
        local_100 = dVar20;
        dStack_f8 = dVar21;
        local_300[0] = dVar18;
        local_300[1] = dVar45;
        local_300[3] = dVar20;
        local_300[4] = dVar21;
        local_300[5] = dVar19;
        goto LAB_14823f96e;
      }
      iVar25 = _finite(local_300[uVar40]);
      if (iVar25 == 0) goto LAB_14823f933;
      iVar25 = _finite(dVar43);
      if (iVar25 == 0) goto LAB_14823f933;
      uVar40 = uVar40 + 1;
    } while ((longlong)uVar40 < 3);
    dVar47 = local_300[4] - local_300[1];
    dVar43 = local_300[3] - local_300[0];
    dVar46 = local_300[5] - local_300[2];
    if (((dVar43 <= dVar47) || (dVar43 <= dVar46)) && (dVar43 = dVar46, dVar46 <= dVar47)) {
      dVar43 = dVar47;
    }
    if (this->MaxPayloadBounds <= dVar43 && dVar43 != this->MaxPayloadBounds) {
LAB_14823f96e:
      local_1a8 = (this->GlobalPayloads).ArrayNum;
      uStack_1a4 = uVar15;
      uStack_1a0 = uVar16;
      uStack_19c = uVar17;
      iStack_198 = iVar26;
      pFVar30 = TArrayAsMap<int,Chaos::FAABBTreePayloadInfo>::Add(&this->PayloadToInfo,&local_2b8);
      pFVar30->GlobalPayloadIdx = local_1a8;
      pFVar30->DirtyPayloadIdx = uStack_1a4;
      pFVar30->LeafIdx = uStack_1a0;
      pFVar30->DirtyGridOverflowIdx = uStack_19c;
      pFVar30->NodeIdx = iVar26;
      pFVar7 = (pTVar4->AllocatorInstance).Data;
      local_1f8 = local_300[0];
      dStack_1f0 = local_300[1];
      local_1e8 = local_300[2];
      local_1d0 = local_300[5];
      local_1e0 = local_300[3];
      dStack_1d8 = local_300[4];
      local_200[0] = iVar34;
      if ((pFVar7 <= (FScriptContainerElement *)local_200) &&
         ((FScriptContainerElement *)local_200 <
          pFVar7 + (longlong)(this->GlobalPayloads).ArrayMax * 0x38)) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar23) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar25 = (this->GlobalPayloads).ArrayNum;
      if (iVar25 == (this->GlobalPayloads).ArrayMax) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar4->AllocatorInstance,&(this->GlobalPayloads).ArrayMax);
      }
      lVar36 = (longlong)iVar25 * 0x38;
      (this->GlobalPayloads).ArrayNum = iVar25 + 1;
      pFVar7 = (pTVar4->AllocatorInstance).Data;
      *(int *)(pFVar7 + lVar36) = local_200[0];
      *(double *)(pFVar7 + lVar36 + 8) = local_1f8;
      *(double *)(pFVar7 + lVar36 + 8 + 8) = dStack_1f0;
      *(double *)(pFVar7 + lVar36 + 0x18) = local_1e8;
      *(double *)(pFVar7 + lVar36 + 0x20) = local_1e0;
      *(double *)(pFVar7 + lVar36 + 0x20 + 8) = dStack_1d8;
      *(double *)(pFVar7 + lVar36 + 0x30) = local_1d0;
    }
    else {
      local_230 = local_300[0];
      dStack_228 = local_300[1];
      local_220 = local_300[2];
      local_208 = local_300[5];
      local_218 = local_300[3];
      dStack_210 = local_300[4];
      local_238[0] = iVar34;
      if ((*(FScriptContainerElement **)&pFVar1->field_0x0 <= (FScriptContainerElement *)local_238)
         && ((FScriptContainerElement *)local_238 <
             *(FScriptContainerElement **)&pFVar1->field_0x0 +
             (longlong)*(int *)(pFVar33 + 0x44) * 0x38)) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar23) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar25 = *(int *)(pFVar33 + 0x40);
      if (iVar25 == *(int *)(pFVar33 + 0x44)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,(ForAnyElementType *)pFVar1,(int *)(pFVar33 + 0x44));
      }
      pFVar7 = *(FScriptContainerElement **)&pFVar1->field_0x0;
      *(int *)(pFVar33 + 0x40) = iVar25 + 1;
      lVar36 = (longlong)iVar25 * 0x38;
      *(int *)(pFVar7 + lVar36) = local_238[0];
      *(double *)(pFVar7 + lVar36 + 8) = local_230;
      *(double *)(pFVar7 + lVar36 + 8 + 8) = dStack_228;
      *(double *)(pFVar7 + lVar36 + 0x18) = local_220;
      *(double *)(pFVar7 + lVar36 + 0x20) = local_218;
      *(double *)(pFVar7 + lVar36 + 0x20 + 8) = dStack_210;
      *(double *)(pFVar7 + lVar36 + 0x30) = local_208;
      dVar43 = local_300[0];
      if (*(double *)(local_2a0 + 8) <= local_300[0]) {
        dVar43 = *(double *)(local_2a0 + 8);
      }
      dVar46 = local_300[2];
      if (*(double *)(local_2a0 + 0x18) <= local_300[2]) {
        dVar46 = *(double *)(local_2a0 + 0x18);
      }
      dVar47 = *(double *)(local_2a0 + 0x10);
      if (local_300[1] <= *(double *)(local_2a0 + 0x10)) {
        dVar47 = local_300[1];
      }
      *(double *)(local_2a0 + 8) = dVar43;
      *(double *)(local_2a0 + 0x10) = dVar47;
      *(double *)(local_2a0 + 0x18) = dVar46;
      dVar43 = local_300[3];
      if (local_300[3] <= *(double *)(local_2a0 + 0x20)) {
        dVar43 = *(double *)(local_2a0 + 0x20);
      }
      dVar46 = *(double *)(local_2a0 + 0x30);
      if (*(double *)(local_2a0 + 0x30) <= local_300[5]) {
        dVar46 = local_300[5];
      }
      dVar47 = *(double *)(local_2a0 + 0x28);
      if (*(double *)(local_2a0 + 0x28) <= local_300[4]) {
        dVar47 = local_300[4];
      }
      *(double *)(local_2a0 + 0x20) = dVar43;
      *(double *)(local_2a0 + 0x28) = dVar47;
      *(double *)(local_2a0 + 0x30) = dVar46;
      dVar9 = (local_300[3] - local_300[0]) * (double)CONCAT44(uVar53,uVar52) + local_300[0];
      dVar47 = (local_300[4] - local_300[1]) * (double)CONCAT44(uVar53,uVar52) + local_300[1];
      dVar48 = dVar14 / (double)(iVar25 + 1);
      dVar43 = dVar9 - *(double *)(local_2a0 + 0x48);
      dVar51 = dVar47 - *(double *)(local_2a0 + 0x50);
      dVar46 = (local_300[5] - local_300[2]) * __real_3fe0000000000000 + local_300[2];
      dVar50 = dVar46 - *(double *)(local_2a0 + 0x58);
      dVar49 = dVar48 * dVar43 + *(double *)(local_2a0 + 0x48);
      dVar44 = dVar48 * dVar51 + *(double *)(local_2a0 + 0x50);
      *(double *)(local_2a0 + 0x48) = dVar49;
      *(double *)(local_2a0 + 0x50) = dVar44;
      dVar48 = dVar48 * dVar50 + *(double *)(local_2a0 + 0x58);
      *(double *)(local_2a0 + 0x58) = dVar48;
      *(double *)(local_2a0 + 0x60) = (dVar9 - dVar49) * dVar43 + *(double *)(local_2a0 + 0x60);
      *(double *)(local_2a0 + 0x68) = (dVar47 - dVar44) * dVar51 + *(double *)(local_2a0 + 0x68);
      *(double *)(local_2a0 + 0x70) = (dVar46 - dVar48) * dVar50 + *(double *)(local_2a0 + 0x70);
      uVar52 = SUB84(__real_3fe0000000000000,0);
      uVar53 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    }
    uVar40 = (ulonglong)uVar6;
    uVar35 = (ulonglong)(iVar34 + 1);
    pFVar41 = pFVar41 + 0x18;
  }
  if ((local_2d0.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2d0.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2d0.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_2d0.StatId,CycleScopeEnd);
  }
  this->NumProcessedThisSlice = local_2b4;
  local_2d0.EmittedEvent = '\0';
  FVar31 = Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice;
  if (Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar27 = ::FName::FName(&local_180,"STAT_AABBTreeInitialTimeSlice");
    FVar31 = (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&Chaos::StatPtr_STAT_AABBTreeInitialTimeSlice,
                        *pFVar27,L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar31;
  bVar23 = false;
  bVar11 = false;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_14823fc83:
    bVar10 = false;
    FVar37 = local_278;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b0[0]._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar23 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_290.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                   ,0xd1c);
        bVar23 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14823fc83;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar10 = true;
  }
  *(undefined8 *)(local_2a0 + 0x78) = 0;
  pTVar5 = &this->WorkStack;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  piVar3 = &(this->WorkStack).ArrayMax;
  if ((pFVar1 <= (FScriptContainerElement *)&local_304) &&
     ((FScriptContainerElement *)&local_304 < pFVar1 + (longlong)*piVar3 * 4)) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar26 = (this->WorkStack).ArrayNum;
  if (iVar26 == *piVar3) {
    iVar26 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar5->AllocatorInstance,piVar3);
  }
  (this->WorkStack).ArrayNum = iVar26 + 1;
  *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_304;
  SplitNode(this);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar37 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_248.NameAndInfo.Index = FVar37.ComparisonIndex.Value;
      local_248.NameAndInfo.Number = FVar37.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_250);
      local_248.StatData.Pad[4] = '\0';
      local_248.StatData.Pad[5] = '\0';
      local_248.StatData.Pad[6] = '\0';
      local_248.StatData.Pad[7] = '\0';
      local_248.StatData.Pad[0] = local_250.s.LowPart._0_1_;
      local_248.StatData.Pad[1] = local_250.s.LowPart._1_1_;
      local_248.StatData.Pad[2] = local_250.s.LowPart._2_1_;
      local_248.StatData.Pad[3] = local_250.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_248);
      piVar3 = &this_01->ScopeCount;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_14823fe02:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(FVar39,CycleScopeEnd);
  }
  return;
}

// OverlapCached<2,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_> @ 1482425a0

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::OverlapCached<2,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,TAABB<double,3> *param_1,
          TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_2,bool *param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FExternalSpatialAccelerationPayload *pFVar9;
  FAABBTreePayloadInfo *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  
  *param_3 = true;
  lVar8 = (**(code **)((longlong)*param_2->Visitor + 0x38))();
  if (lVar8 != 0) {
    pFVar9 = (FExternalSpatialAccelerationPayload *)
             (**(code **)((longlong)*param_2->Visitor + 0x38))();
    pFVar10 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Find
                        (&this->PayloadToInfo,pFVar9);
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
        bVar4 = TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::
                OverlapFast<Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                          ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
                           (*(longlong *)&this->Leaves + (longlong)(int)uVar6 * 0x48),param_1,
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

// QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_> @ 148245da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,TVector<double,3> *param_1,FQueryFastData *param_2,TVector<double,3> *param_3,
          TAABB<double,3> *param_4,
          TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,bool *param_8)

{
  undefined4 *puVar1;
  FObjectKey FVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *this_00;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  TVector<double,3> *pTVar13;
  TVector<double,3> *pTVar14;
  TVector<double,3> *pTVar15;
  ForAnyElementType FVar16;
  undefined8 uVar17;
  bool bVar18;
  TVector<double,3> *pTVar19;
  bool bVar20;
  char cVar21;
  undefined1 uVar22;
  int iVar23;
  uint uVar24;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  FVar25;
  longlong lVar26;
  longlong lVar27;
  void *_Dst;
  longlong lVar28;
  int iVar29;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *pTVar30;
  double *pdVar31;
  FExternalSpatialAccelerationPayload *pFVar32;
  TVector<double,3> *pTVar33;
  bool *pbVar34;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *pTVar35;
  undefined8 *puVar36;
  longlong lVar37;
  TVector<double,3> *pTVar38;
  int *piVar39;
  undefined8 *puVar40;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *this_01;
  FExternalSpatialAccelerationPayload *pFVar41;
  TVector<double,3> *pTVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  undefined1 auStackY_1608 [32];
  undefined1 local_15b8;
  undefined1 local_15b7;
  undefined1 local_15b6 [6];
  FQueryFastData *local_15b0;
  TVector<double,3> *local_15a8;
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *local_15a0;
  bool *local_1598;
  TVector<double,3> *local_1590;
  TVector<double,3> *local_1588;
  undefined8 local_1580;
  undefined8 uStack_1578;
  TArray<Chaos::DirtyGridHashEntry,TSizedDefaultAllocator<32>_> local_1570;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *local_1560;
  TVector<double,3> *local_1558;
  TVector<double>_u_0 local_1550;
  double local_1538 [3];
  TVector<double>_u_0 local_1520;
  double local_1508 [6];
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *local_14d8;
  TVector<double,3> *pTStack_14d0;
  FQueryFastData *local_14c8;
  TVector<double,3> **ppTStack_14c0;
  TAABB<double,3> *local_14b8;
  TVector<double,3> *pTStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  bool **local_1498;
  undefined4 local_1488;
  undefined4 uStack_1484;
  TVector<double,3> *pTStack_1480;
  undefined4 local_1478;
  undefined4 uStack_1474;
  undefined8 uStack_1470;
  undefined4 local_1468;
  undefined4 uStack_1464;
  undefined8 uStack_1460;
  undefined4 local_1458;
  undefined4 uStack_1454;
  TVector<double,3> *pTStack_1450;
  <lambda_3> local_1448;
  undefined4 local_1438;
  undefined4 uStack_1434;
  TVector<double,3> *pTStack_1430;
  undefined4 local_1428;
  undefined4 uStack_1424;
  TVector<double,3> *pTStack_1420;
  double local_1418 [6];
  double local_13e8 [4];
  TVector<double>_u_0 local_13c8;
  TVector<double,3> local_13a8;
  double local_1388 [4];
  double local_1368 [4];
  double local_1348 [4];
  FObjectKey local_1328;
  undefined8 uStack_1320;
  undefined1 local_1318;
  undefined1 local_1310 [16];
  FObjectKey local_1300;
  double local_12f8;
  double dStack_12f0;
  TVector<double,3> *local_12e8;
  undefined4 local_12d8;
  undefined4 uStack_12d4;
  undefined4 uStack_12d0;
  undefined4 uStack_12cc;
  undefined1 local_12c8;
  undefined8 local_12c0;
  undefined8 uStack_12b8;
  undefined8 local_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined1 local_1278;
  double local_1270;
  double dStack_1268;
  double local_1260;
  undefined4 local_1258;
  undefined4 uStack_1254;
  undefined4 uStack_1250;
  undefined4 uStack_124c;
  double local_1248;
  double local_1238;
  double dStack_1230;
  double local_1228;
  double local_1220;
  double dStack_1218;
  double local_1210;
  double local_1208;
  double dStack_1200;
  double local_11f8;
  double local_11f0;
  double dStack_11e8;
  double local_11e0;
  undefined1 local_11d8 [16];
  double local_11c8;
  double local_11c0;
  double dStack_11b8;
  double local_11b0;
  undefined1 local_11a8 [16];
  FObjectKey local_1198;
  double local_1190;
  double dStack_1188;
  TVector<double,3> *local_1180;
  <lambda_1> local_1178;
  undefined8 local_1100;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  local_10f8;
  int local_100;
  int local_fc;
  ulonglong local_f8;
  undefined8 local_48;
  
  pTVar19 = __real_7fefffffffffffff;
  local_48 = 0x148245dbf;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_1608;
  pFVar32 = (FExternalSpatialAccelerationPayload *)(this->GlobalPayloads).AllocatorInstance.Data;
  iVar23 = (this->GlobalPayloads).ArrayNum;
  piVar39 = &pFVar32[2].BoneId;
  local_1580 = param_6;
  pFVar41 = pFVar32 + (longlong)iVar23 * 4;
  local_1558 = (TVector<double,3> *)0x0;
  local_15a0 = param_5;
  local_15a8 = param_7;
  local_1598 = param_8;
  local_15b0 = param_2;
  local_1590 = param_3;
  local_1588 = param_1;
  local_1560 = this;
  while( true ) {
    if ((local_1560->GlobalPayloads).ArrayNum != iVar23) {
      local_15b8 = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_15b8);
    }
    this_01 = local_1560;
    pTVar42 = local_1588;
    pTVar33 = local_1590;
    pTVar38 = local_15a8;
    if (pFVar32 == pFVar41) break;
    bVar20 = PrePreFilterHelper<FExternalSpatialAccelerationPayload,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                       (pFVar32,local_15a0);
    if (!bVar20) {
      auVar8 = *(undefined1 (*) [16])(piVar39 + -6);
      dVar5 = *(double *)piVar39;
      dVar6 = *(double *)(piVar39 + 2);
      local_13c8._s_0.X = (double)*(undefined8 *)param_7;
      local_13c8._s_0.Y = (double)*(undefined8 *)&param_7->field_0x8;
      local_1570.AllocatorInstance.Data = *(FScriptContainerElement **)(piVar39 + 4);
      local_13c8._s_0.Z = (double)*(undefined8 *)&param_7->field_0x10;
      iVar29 = 0;
      FVar2 = (((FExternalSpatialAccelerationPayload *)(piVar39 + -2))->Component).ObjectKey;
      dVar3 = param_2->CurrentLength;
      local_1520._s_0.X = (auVar8._0_8_ - *(double *)local_1590) - *(double *)local_1588;
      local_1550._s_0.X = (*(double *)local_1590 + dVar5) - *(double *)local_1588;
      local_1520._s_0.Y =
           (auVar8._8_8_ - *(double *)&local_1590->field_0x8) - *(double *)&local_1588->field_0x8;
      local_1520._s_0.Z =
           ((double)FVar2 - *(double *)&local_1590->field_0x10) - *(double *)&local_1588->field_0x10
      ;
      local_1550._s_0.Z =
           (*(double *)&local_1590->field_0x10 + (double)local_1570.AllocatorInstance.Data) -
           *(double *)&local_1588->field_0x10;
      local_1550._s_0.Y =
           (*(double *)&local_1590->field_0x8 + dVar6) - *(double *)&local_1588->field_0x8;
      pbVar34 = local_1598;
      pTVar38 = (TVector<double,3> *)0x0;
      pTVar33 = pTVar19;
      local_11a8 = auVar8;
      local_1198 = FVar2;
      local_1190 = dVar5;
      dStack_1188 = dVar6;
      local_1180 = (TVector<double,3> *)local_1570.AllocatorInstance.Data;
      do {
        if (*pbVar34 == false) {
          dVar47 = UE::Math::TVector<double>::Component((TVector<double> *)&local_1520._s_0,iVar29);
          dVar12 = UE::Math::TVector<double>::Component((TVector<double> *)&local_13c8._s_0,iVar29);
          pTVar14 = (TVector<double,3> *)(dVar12 * dVar47);
          dVar47 = UE::Math::TVector<double>::Component((TVector<double> *)&local_1550._s_0,iVar29);
          dVar12 = UE::Math::TVector<double>::Component((TVector<double> *)&local_13c8._s_0,iVar29);
          pTVar42 = (TVector<double,3> *)(dVar12 * dVar47);
          pTVar13 = pTVar14;
          if ((double)pTVar42 < (double)pTVar14) {
            pTVar13 = pTVar42;
            pTVar42 = pTVar14;
          }
        }
        else {
          dVar47 = UE::Math::TVector<double>::Component((TVector<double> *)&local_1520._s_0,iVar29);
          param_7 = local_15a8;
          param_2 = local_15b0;
          if ((0.0 < dVar47) ||
             (dVar47 = UE::Math::TVector<double>::Component
                                 ((TVector<double> *)&local_1550._s_0,iVar29), param_7 = local_15a8,
             param_2 = local_15b0, dVar47 < 0.0)) goto LAB_1482460fd;
          pTVar13 = (TVector<double,3> *)0x0;
          pTVar42 = pTVar19;
        }
        param_2 = local_15b0;
        if ((double)pTVar13 <= (double)pTVar38) {
          pTVar13 = pTVar38;
        }
        if ((double)pTVar33 <= (double)pTVar42) {
          pTVar42 = pTVar33;
        }
        param_7 = local_15a8;
        if ((double)pTVar42 < (double)pTVar13) goto LAB_1482460fd;
        iVar29 = iVar29 + 1;
        pbVar34 = pbVar34 + 1;
        pTVar38 = pTVar13;
        pTVar33 = pTVar42;
      } while (iVar29 < 3);
      if (((double)pTVar13 <= dVar3) && (0.0 <= (double)pTVar42)) {
        local_1328 = (pFVar32->Component).ObjectKey;
        uStack_1320._0_4_ = pFVar32->BoneId;
        uStack_1320._4_4_ = pFVar32->CachedUniqueIdx;
        local_1318 = 1;
        local_12e8 = (TVector<double,3> *)local_1570.AllocatorInstance.Data;
        local_1558 = pTVar13;
        local_1310 = auVar8;
        local_1300 = FVar2;
        local_12f8 = dVar5;
        dStack_12f0 = dVar6;
        cVar21 = (**(code **)((longlong)*local_15a0->Visitor + 0x18))
                           (local_15a0->Visitor,&local_1328);
        param_7 = local_15a8;
        if (cVar21 == '\0') {
          return false;
        }
      }
    }
LAB_1482460fd:
    pFVar32 = pFVar32 + 4;
    piVar39 = piVar39 + 0x10;
  }
  this_00 = (local_1560->DirtyElementTree).Ptr;
  if (this_00 ==
      (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
       *)0x0) {
    iVar23 = (local_1560->DirtyElements).ArrayNum;
    ppTStack_14c0 = &local_1558;
    local_14a8 = local_1580;
    local_1498 = &local_1598;
    pTStack_14d0 = local_1588;
    local_14b8 = param_4;
    pTStack_14b0 = local_1590;
    uStack_14a0 = local_15a8;
    local_14d8 = local_15a0;
    local_14c8 = param_2;
    if (0 < iVar23) {
      if ((((0.0 < local_1560->DirtyElementGridCellSize) &&
           (0 < local_1560->DirtyElementMaxGridCellQueryCount)) &&
          (0 < local_1560->DirtyElementMaxPhysicalSizeInCells)) &&
         ((0 < local_1560->DirtyElementMaxCellCapacity &&
          (0 < *(int *)&(local_1560->CellHashToFlatArray).field_0x8 -
               *(int *)&(local_1560->CellHashToFlatArray).field_0x34)))) {
        dVar3 = param_2->CurrentLength;
        dVar5 = local_1560->DirtyElementGridCellSizeInv;
        if (dVar3 <= __real_43f0000000000000) {
          dVar6 = *(double *)local_1590;
          uVar43 = SUB84(dVar6,0);
          uVar44 = (undefined4)((ulonglong)dVar6 >> 0x20);
          lVar27 = 0;
          dVar47 = *(double *)&local_1590->field_0x8;
          if (dVar6 <= dVar47) {
            uVar43 = SUB84(dVar47,0);
            uVar44 = (undefined4)((ulonglong)dVar47 >> 0x20);
          }
          dVar6 = (dVar6 + dVar6) * dVar5;
          if ((__real_43e0000000000000 <= dVar6) &&
             (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
            lVar27 = -0x8000000000000000;
          }
          lVar28 = 0;
          dVar47 = (dVar47 + dVar47) * dVar5;
          if ((__real_43e0000000000000 <= dVar47) &&
             (dVar47 = dVar47 - __real_43e0000000000000, dVar47 < __real_43e0000000000000)) {
            lVar28 = -0x8000000000000000;
          }
          dVar12 = ((double)CONCAT44(uVar44,uVar43) + (double)CONCAT44(uVar44,uVar43)) * dVar5;
          lVar26 = 0;
          if ((__real_43e0000000000000 <= dVar12) &&
             (dVar12 = dVar12 - __real_43e0000000000000, dVar12 < __real_43e0000000000000)) {
            lVar26 = -0x8000000000000000;
          }
          lVar37 = 0;
          dVar7 = dVar3 * dVar5;
          if ((__real_43e0000000000000 <= dVar7) &&
             (dVar7 = dVar7 - __real_43e0000000000000, dVar7 < __real_43e0000000000000)) {
            lVar37 = -0x8000000000000000;
          }
          bVar20 = (ulonglong)
                   (((longlong)dVar6 + 2 + lVar27) * ((longlong)dVar47 + 2 + lVar28) +
                   ((longlong)dVar12 + 2 + lVar26) * ((longlong)dVar7 + 2 + lVar37)) <=
                   (ulonglong)(longlong)local_1560->DirtyElementMaxGridCellQueryCount;
        }
        else {
          bVar20 = false;
        }
        if (bVar20) {
          local_13a8._0_8_ = *(undefined8 *)local_1590;
          local_13a8._8_8_ = *(undefined8 *)&local_1590->field_0x8;
          local_1448.HashEntryForOverlappedCells = &local_1570;
          local_13a8._16_8_ = *(undefined8 *)&local_1590->field_0x10;
          local_1570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1570.ArrayNum = 0;
          local_1570.ArrayMax = 0;
          local_1448.__this = local_1560;
          DoForSweepIntersectCells<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l42::<lambda_3>_>
                    (&local_13a8,local_1588,param_2->Dir,dVar3,local_1560->DirtyElementGridCellSize,
                     dVar5,&local_1448);
          local_1178.Visitor = local_14d8;
          local_1178.Start = pTStack_14d0;
          local_1178.QueryBounds = local_14b8;
          local_1178.QueryHalfExtents = pTStack_14b0;
          local_1178.CurData = local_14c8;
          local_1178.TOI = (double *)ppTStack_14c0;
          local_1178.bParallel = local_1498;
          local_1178.Dir._0_4_ = (undefined4)local_14a8;
          local_1178.Dir._4_4_ = local_14a8._4_4_;
          local_1178.InvDir._0_4_ = (undefined4)uStack_14a0;
          local_1178.InvDir._4_4_ = uStack_14a0._4_4_;
          bVar20 = DoForHitGridCellsAndOverflow<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l31::<lambda_1>_>
                             (this_01,&local_1570,&local_1178);
          if (!bVar20) {
            if ((TVector<double,3> *)local_1570.AllocatorInstance.Data == (TVector<double,3> *)0x0)
            {
              return false;
            }
            FMemory::Free(local_1570.AllocatorInstance.Data);
            return false;
          }
          if ((TVector<double,3> *)local_1570.AllocatorInstance.Data != (TVector<double,3> *)0x0) {
            FMemory::Free(local_1570.AllocatorInstance.Data);
          }
          goto LAB_148246424;
        }
      }
      pTVar30 = (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
                (local_1560->DirtyElements).AllocatorInstance.Data;
      iVar29 = (local_1560->DirtyElements).ArrayNum;
      pTVar35 = pTVar30 + iVar23;
      while( true ) {
        if ((this_01->DirtyElements).ArrayNum != iVar29) {
          local_15b7 = 0;
          `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_15b7);
        }
        pTVar33 = local_1590;
        param_2 = local_15b0;
        if (pTVar30 == pTVar35) break;
        bVar20 = `Chaos::
                 TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                 ::
                 QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'
                 ::__l31::<lambda_1>::operator()(&local_14d8,pTVar30);
        if (!bVar20) {
          return false;
        }
        pTVar30 = pTVar30 + 1;
      }
    }
  }
  else {
    bVar20 = QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                       (this_00,local_1588,param_2,local_1590,param_4,local_15a0,local_1580,
                        local_15a8,local_1598);
    if (!bVar20) {
      return false;
    }
  }
LAB_148246424:
  local_10f8.SecondaryData =
       (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
        )0x0;
  local_100 = 0;
  local_fc = 0xff;
  if (this_01->bDynamicTree == false) {
    if ((this_01->Nodes).ArrayNum == 0) goto LAB_148246e00;
    local_1580 = (TVector<double,3> *)((ulonglong)local_1580._4_4_ << 0x20);
  }
  else {
    if (this_01->RootNode == -1) goto LAB_148246e00;
    local_1580 = (TVector<double,3> *)CONCAT44(local_1580._4_4_,this_01->RootNode);
  }
  local_10f8.InlineData._0_8_ = local_1580;
  local_10f8.InlineData[8] = '\0';
  local_10f8.InlineData[9] = '\0';
  local_10f8.InlineData[10] = '\0';
  local_10f8.InlineData[0xb] = '\0';
  local_10f8.InlineData[0xc] = '\0';
  local_10f8.InlineData[0xd] = '\0';
  local_10f8.InlineData[0xe] = '\0';
  local_10f8.InlineData[0xf] = '\0';
  local_100 = 1;
  uStack_1578 = 0;
  FVar16.Data = local_1570.AllocatorInstance.Data;
  do {
    if ((local_100 < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar11 = (code *)swi(3);
      uVar22 = (*pcVar11)();
      return (bool)uVar22;
    }
    FVar25 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_10f8;
    if (local_10f8.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar25 = local_10f8.SecondaryData;
    }
    lVar27 = (longlong)(local_100 + -1) * 0x10;
    puVar36 = (undefined8 *)(lVar27 + (longlong)FVar25);
    dVar3 = (double)puVar36[1];
    uVar9 = (uint)*puVar36;
    FVar25 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_10f8;
    if (local_10f8.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar25 = local_10f8.SecondaryData;
    }
    _Dst = (void *)(lVar27 + (longlong)FVar25);
    iVar23 = (local_100 - (local_100 + -1)) + -1;
    if (iVar23 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar23 << 4);
    }
    local_100 = local_100 + -1;
    if (dVar3 < param_2->CurrentLength || dVar3 == param_2->CurrentLength) {
      uVar24 = 0;
      if ((int)uVar9 < (this_01->Nodes).ArrayNum) {
        uVar24 = ~uVar9 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
      pFVar10 = (this_01->Nodes).AllocatorInstance.Data;
      lVar27 = (longlong)(int)uVar9 * 0x70;
      if (((byte)pFVar10[lVar27 + 0x6c] & 1) == 0) {
        local_1208 = *(double *)(pFVar10 + lVar27);
        dStack_1200 = *(double *)(pFVar10 + lVar27 + 8);
        lVar28 = 0;
        local_11f0 = *(double *)(pFVar10 + lVar27 + 0x18);
        dStack_11e8 = *(double *)(pFVar10 + lVar27 + 0x18 + 8);
        local_11f8 = *(double *)(pFVar10 + lVar27 + 0x10);
        dVar3 = *(double *)pTVar33;
        dVar5 = *(double *)pTVar42;
        dVar6 = *(double *)&pTVar33->field_0x10;
        dVar47 = *(double *)&pTVar33->field_0x8;
        local_11e0 = *(double *)(pFVar10 + lVar27 + 0x28);
        dVar12 = *(double *)&pTVar42->field_0x10;
        dVar7 = *(double *)&pTVar42->field_0x8;
        local_1368[0] = *(double *)pTVar38;
        local_1368[1] = (double)*(undefined8 *)&pTVar38->field_0x8;
        local_1368[2] = (double)*(undefined8 *)&pTVar38->field_0x10;
        local_1418[3] = (local_1208 - dVar3) - dVar5;
        local_1418[5] = (local_11f8 - dVar6) - dVar12;
        pTVar33 = (TVector<double,3> *)0x0;
        local_1418[4] = (dStack_1200 - dVar47) - dVar7;
        local_1508[0] = (dVar3 + local_11f0) - dVar5;
        local_1508[1] = (dVar47 + dStack_11e8) - dVar7;
        local_1508[2] = (dVar6 + local_11e0) - dVar12;
        pTVar42 = pTVar19;
        do {
          if (local_1598[lVar28] == false) {
            pTVar14 = (TVector<double,3> *)(local_1418[lVar28 + 3] * local_1368[lVar28]);
            pTVar13 = (TVector<double,3> *)(local_1368[lVar28] * local_1508[lVar28]);
            pTVar15 = pTVar14;
            if ((double)pTVar13 < (double)pTVar14) {
              pTVar15 = pTVar13;
              pTVar13 = pTVar14;
            }
          }
          else {
            if ((0.0 < local_1418[lVar28 + 3]) ||
               (local_1508[lVar28] <= 0.0 && local_1508[lVar28] != 0.0)) goto LAB_148246a14;
            pTVar15 = (TVector<double,3> *)0x0;
            pTVar13 = pTVar19;
          }
          if ((double)pTVar15 <= (double)pTVar33) {
            pTVar15 = pTVar33;
          }
          pTVar33 = pTVar15;
          if ((double)pTVar42 <= (double)pTVar13) {
            pTVar13 = pTVar42;
          }
          if ((double)pTVar13 < (double)pTVar33) goto LAB_148246a14;
          lVar28 = lVar28 + 1;
          pTVar42 = pTVar13;
        } while (lVar28 < 3);
        if ((local_15b0->CurrentLength < (double)pTVar33) || ((double)pTVar13 < 0.0)) {
LAB_148246a14:
          bVar20 = false;
        }
        else {
          bVar20 = true;
          local_1580 = pTVar33;
        }
        pTVar42 = local_1580;
        local_11d8 = *(undefined1 (*) [16])(pFVar10 + lVar27 + 0x30);
        lVar28 = 0;
        local_11c0 = *(double *)(pFVar10 + lVar27 + 0x48);
        dStack_11b8 = *(double *)(pFVar10 + lVar27 + 0x48 + 8);
        local_11c8 = *(double *)(pFVar10 + lVar27 + 0x40);
        local_11b0 = *(double *)(pFVar10 + lVar27 + 0x58);
        local_1348[0] = *(double *)pTVar38;
        local_1348[1] = (double)*(undefined8 *)&pTVar38->field_0x8;
        local_1348[2] = (double)*(undefined8 *)&pTVar38->field_0x10;
        local_13e8[0] = (local_11d8._0_8_ - dVar3) - dVar5;
        local_13e8[2] = (local_11c8 - dVar6) - dVar12;
        pTVar38 = (TVector<double,3> *)0x0;
        local_13e8[1] = (local_11d8._8_8_ - dVar47) - dVar7;
        local_1508[5] = (local_11b0 + dVar6) - dVar12;
        local_1508[3] = (local_11c0 + dVar3) - dVar5;
        local_1508[4] = (dVar47 + dStack_11b8) - dVar7;
        pTVar33 = pTVar19;
        do {
          if (local_1598[lVar28] == false) {
            pTVar14 = (TVector<double,3> *)(local_1418[lVar28 + 6] * local_1348[lVar28]);
            pTVar13 = (TVector<double,3> *)(local_1348[lVar28] * local_1508[lVar28 + 3]);
            pTVar15 = pTVar14;
            if ((double)pTVar13 < (double)pTVar14) {
              pTVar15 = pTVar13;
              pTVar13 = pTVar14;
            }
          }
          else {
            if ((0.0 < local_1418[lVar28 + 6]) ||
               (local_1508[lVar28 + 3] <= 0.0 && local_1508[lVar28 + 3] != 0.0)) goto LAB_148246b63;
            pTVar15 = (TVector<double,3> *)0x0;
            pTVar13 = pTVar19;
          }
          if ((double)pTVar15 <= (double)pTVar38) {
            pTVar15 = pTVar38;
          }
          pTVar38 = pTVar15;
          if ((double)pTVar33 <= (double)pTVar13) {
            pTVar13 = pTVar33;
          }
          if ((double)pTVar13 < (double)pTVar38) goto LAB_148246b63;
          lVar28 = lVar28 + 1;
          pTVar33 = pTVar13;
        } while (lVar28 < 3);
        if ((local_15b0->CurrentLength < (double)pTVar38) || ((double)pTVar13 < 0.0)) {
LAB_148246b63:
          bVar18 = false;
        }
        else {
          bVar18 = true;
          FVar16.Data = (FScriptContainerElement *)pTVar38;
        }
        if (bVar20) {
          if (!bVar18) {
            local_1478 = *(undefined4 *)(pFVar10 + lVar27 + 0x60);
            uStack_1470 = local_1580;
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            uVar43 = local_1478;
            uVar44 = uStack_1474;
            uVar45 = (undefined4)uStack_1470;
            uVar46 = uStack_1470._4_4_;
            iVar23 = local_100;
            goto LAB_148246daf;
          }
          if ((double)FVar16.Data <= (double)local_1580) {
            local_1488 = *(undefined4 *)(pFVar10 + lVar27 + 0x60);
            pTStack_1480 = local_1580;
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            FVar25 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar25 = local_10f8.SecondaryData;
            }
            puVar36 = (undefined8 *)((longlong)FVar25 + (longlong)local_100 * 0x10);
            local_100 = local_100 + 1;
            *puVar36 = CONCAT44(uStack_1484,local_1488);
            puVar36[1] = pTStack_1480;
            local_1458 = *(undefined4 *)(pFVar10 + lVar27 + 100);
            pTStack_1450 = (TVector<double,3> *)FVar16.Data;
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            lVar27 = (longlong)local_100;
            local_100 = local_100 + 1;
            FVar25 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar25 = local_10f8.SecondaryData;
            }
            puVar36 = (undefined8 *)((longlong)FVar25 + lVar27 * 0x10);
            *puVar36 = CONCAT44(uStack_1454,local_1458);
            puVar36[1] = pTStack_1450;
            param_2 = local_15b0;
          }
          else {
            local_1438 = *(undefined4 *)(pFVar10 + lVar27 + 100);
            pTStack_1430 = (TVector<double,3> *)FVar16.Data;
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            FVar25 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar25 = local_10f8.SecondaryData;
            }
            pTStack_1420 = pTVar42;
            puVar36 = (undefined8 *)((longlong)FVar25 + (longlong)local_100 * 0x10);
            local_100 = local_100 + 1;
            *puVar36 = CONCAT44(uStack_1434,local_1438);
            puVar36[1] = pTStack_1430;
            local_1428 = *(undefined4 *)(pFVar10 + lVar27 + 0x60);
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            lVar27 = (longlong)local_100;
            local_100 = local_100 + 1;
            FVar25 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar25 = local_10f8.SecondaryData;
            }
            puVar36 = (undefined8 *)((longlong)FVar25 + lVar27 * 0x10);
            *puVar36 = CONCAT44(uStack_1424,local_1428);
            puVar36[1] = pTStack_1420;
            param_2 = local_15b0;
          }
        }
        else {
          param_2 = local_15b0;
          if (bVar18) {
            local_1468 = *(undefined4 *)(pFVar10 + lVar27 + 100);
            uStack_1460 = (TVector<double,3> *)FVar16.Data;
            if (local_100 == local_fc) {
              local_100 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                    (0x810,&local_10f8,&local_fc);
            }
            uVar43 = local_1468;
            uVar44 = uStack_1464;
            uVar45 = (undefined4)uStack_1460;
            uVar46 = uStack_1460._4_4_;
            iVar23 = local_100;
LAB_148246daf:
            local_100 = iVar23 + 1;
            FVar25 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                      )&local_10f8;
            if (local_10f8.SecondaryData !=
                (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                 )0x0) {
              FVar25 = local_10f8.SecondaryData;
            }
            puVar1 = (undefined4 *)((longlong)FVar25 + (longlong)iVar23 * 0x10);
            *puVar1 = uVar43;
            puVar1[1] = uVar44;
            puVar1[2] = uVar45;
            puVar1[3] = uVar46;
            param_2 = local_15b0;
          }
        }
      }
      else {
        uVar9 = *(uint *)(pFVar10 + lVar27 + 0x60);
        lVar27 = (longlong)(int)uVar9;
        uVar24 = 0;
        if ((int)uVar9 < *(int *)&(this_01->Leaves).field_0x8) {
          uVar24 = ~uVar9 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar11 = (code *)swi(3);
          uVar22 = (*pcVar11)();
          return (bool)uVar22;
        }
        pbVar34 = local_1598;
        dVar3 = *(double *)pTVar38;
        uVar17 = *(undefined8 *)&pTVar38->field_0x8;
        uVar4 = *(undefined8 *)&pTVar38->field_0x10;
        lVar28 = *(longlong *)&this_01->Leaves;
        puVar36 = *(undefined8 **)(lVar28 + 0x30 + lVar27 * 0x48);
        iVar23 = *(int *)(lVar28 + 0x38 + lVar27 * 0x48);
        puVar40 = puVar36 + (longlong)iVar23 * 8;
        pdVar31 = (double *)(puVar36 + 5);
        while( true ) {
          if (*(int *)(lVar28 + 0x38 + lVar27 * 0x48) != iVar23) {
            local_15b6[0] = 0;
            `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_15b6);
          }
          param_2 = local_15b0;
          this_01 = local_1560;
          if (puVar36 == puVar40) break;
          local_12d8 = *(undefined4 *)puVar36;
          uStack_12d4 = *(undefined4 *)((longlong)puVar36 + 4);
          uStack_12d0 = *(undefined4 *)(puVar36 + 1);
          uStack_12cc = *(undefined4 *)((longlong)puVar36 + 0xc);
          local_12c8 = 0;
          local_12b0 = 0;
          local_12c0 = 0;
          uStack_12b8 = 0;
          local_12a8 = 0;
          uStack_12a0 = 0;
          local_1298 = 0;
          local_1100 = 0;
          cVar21 = (**(code **)((longlong)*local_15a0->Visitor + 0x30))
                             (local_15a0->Visitor,&local_12d8);
          if (cVar21 == '\0') {
            lVar26 = (**(code **)((longlong)*local_15a0->Visitor + 0x20))();
            if (lVar26 == 0) {
              (**(code **)((longlong)*local_15a0->Visitor + 0x28))();
            }
            pTVar38 = (TVector<double,3> *)0x0;
            local_1238 = pdVar31[-3];
            dStack_1230 = pdVar31[-2];
            local_1220 = *pdVar31;
            dStack_1218 = pdVar31[1];
            local_1228 = pdVar31[-1];
            local_1210 = pdVar31[2];
            local_1388[0] = dVar3;
            local_1388[1] = (double)uVar17;
            local_1418[0] = (local_1238 - *(double *)local_1590) - *(double *)local_1588;
            local_1538[0] = (*(double *)local_1590 + local_1220) - *(double *)local_1588;
            local_1418[1] =
                 (dStack_1230 - *(double *)&local_1590->field_0x8) -
                 *(double *)&local_1588->field_0x8;
            local_1418[2] =
                 (local_1228 - *(double *)&local_1590->field_0x10) -
                 *(double *)&local_1588->field_0x10;
            local_1388[2] = (double)uVar4;
            lVar26 = 0;
            local_1538[2] =
                 (*(double *)&local_1590->field_0x10 + local_1210) -
                 *(double *)&local_1588->field_0x10;
            local_1538[1] =
                 (*(double *)&local_1590->field_0x8 + dStack_1218) -
                 *(double *)&local_1588->field_0x8;
            pTVar33 = pTVar19;
            do {
              if (pbVar34[lVar26] == false) {
                pTVar42 = (TVector<double,3> *)(local_1388[lVar26] * local_1538[lVar26]);
                pTVar14 = (TVector<double,3> *)(local_1388[lVar26] * local_1418[lVar26]);
                pTVar13 = pTVar42;
                if ((double)pTVar42 < (double)pTVar14) {
                  pTVar13 = pTVar14;
                  pTVar14 = pTVar42;
                }
              }
              else {
                if ((0.0 < local_1418[lVar26]) ||
                   (local_1538[lVar26] <= 0.0 && local_1538[lVar26] != 0.0)) goto LAB_148246882;
                pTVar13 = pTVar19;
                pTVar14 = (TVector<double,3> *)0x0;
              }
              if ((double)pTVar14 <= (double)pTVar38) {
                pTVar14 = pTVar38;
              }
              pTVar38 = pTVar14;
              if ((double)pTVar33 <= (double)pTVar13) {
                pTVar13 = pTVar33;
              }
              if ((double)pTVar13 < (double)pTVar38) goto LAB_148246882;
              lVar26 = lVar26 + 1;
              pTVar33 = pTVar13;
            } while (lVar26 < 3);
            if (((double)pTVar38 < local_15b0->CurrentLength ||
                 (double)pTVar38 == local_15b0->CurrentLength) && (0.0 <= (double)pTVar13)) {
              local_1288 = *puVar36;
              uStack_1280 = puVar36[1];
              local_1260 = pdVar31[-1];
              local_1270 = pdVar31[-3];
              dStack_1268 = pdVar31[-2];
              local_1278 = 1;
              local_1258 = *(undefined4 *)pdVar31;
              uStack_1254 = *(undefined4 *)((longlong)pdVar31 + 4);
              uStack_1250 = *(undefined4 *)(pdVar31 + 1);
              uStack_124c = *(undefined4 *)((longlong)pdVar31 + 0xc);
              local_1248 = local_1210;
              cVar21 = (**(code **)((longlong)*local_15a0->Visitor + 0x18))
                                 (local_15a0->Visitor,&local_1288,local_15b0);
              if (cVar21 == '\0') {
                bVar20 = false;
                goto LAB_148246e02;
              }
            }
          }
LAB_148246882:
          puVar36 = puVar36 + 8;
          pdVar31 = pdVar31 + 8;
        }
      }
    }
    pTVar33 = local_1590;
    pTVar38 = local_15a8;
    pTVar42 = local_1588;
  } while (local_100 != 0);
LAB_148246e00:
  bVar20 = true;
LAB_148246e02:
  if (local_10f8.SecondaryData !=
      (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
       )0x0) {
    FMemory::Free((void *)local_10f8.SecondaryData);
  }
  return bVar20;
}

// QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_> @ 148247910

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,TVector<double,3> *param_1,FQueryFastDataVoid *param_2,TVector<double,3> *param_3,
          TAABB<double,3> *param_4,
          TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,bool *param_8)

{
  longlong lVar1;
  longlong *plVar2;
  double *pdVar3;
  FObjectKey FVar4;
  undefined8 uVar5;
  double dVar6;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *this_00;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  bool bVar19;
  undefined1 uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  TVector<double,3> *pTVar25;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  FVar26;
  ulonglong uVar27;
  TVector<double,3> *pTVar28;
  void *_Dst;
  uint uVar29;
  uint uVar30;
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *pTVar31;
  ulonglong uVar32;
  undefined1 *puVar33;
  TVector<double,3> *pTVar34;
  FExternalSpatialAccelerationPayload *pFVar35;
  FScriptContainerElement *pFVar36;
  int *piVar37;
  FScriptContainerElement *pFVar38;
  FScriptContainerElement *pFVar39;
  FExternalSpatialAccelerationPayload *pFVar40;
  bool bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 in_XMM3 [16];
  double dVar50;
  undefined1 auStackY_1368 [32];
  bool local_1318;
  undefined1 local_1317;
  undefined1 local_1316 [6];
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *local_1310;
  TArray<Chaos::DirtyGridHashEntry,TSizedDefaultAllocator<32>_> local_1308;
  undefined8 local_12f8;
  double dStack_12f0;
  TVector<double,3> *local_12e8;
  FQueryFastDataVoid *local_12e0;
  bool *local_12d8;
  double local_12d0;
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *local_12c8;
  TVector<double,3> *pTStack_12c0;
  FQueryFastDataVoid *local_12b8;
  double *pdStack_12b0;
  TAABB<double,3> *local_12a8;
  TVector<double,3> *pTStack_12a0;
  TVector<double,3> *local_1298;
  TVector<double,3> *pTStack_1290;
  bool **local_1288;
  double local_1278 [14];
  FObjectKey local_1208;
  double local_1200 [4];
  undefined8 uStack_11e0;
  undefined1 local_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 local_11a8;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined1 local_1188;
  undefined8 local_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  FObjectKey local_1148;
  undefined8 uStack_1140;
  undefined1 local_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  FObjectKey local_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  <lambda_1> local_10f8;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  local_10a8;
  int local_b0;
  int local_ac;
  ulonglong local_a8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14824792f;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1368;
  pFVar38 = (this->GlobalPayloads).AllocatorInstance.Data;
  iVar22 = (this->GlobalPayloads).ArrayNum;
  pFVar36 = pFVar38 + 0x28;
  local_12e8 = param_6;
  pFVar39 = pFVar38 + (longlong)iVar22 * 0x40;
  local_12f8 = param_7;
  local_12d8 = param_8;
  local_12d0 = 0.0;
  local_1310 = param_5;
  local_1308.AllocatorInstance.Data = (FScriptContainerElement *)param_3;
  local_12e0 = param_2;
  while( true ) {
    if ((this->GlobalPayloads).ArrayNum != iVar22) {
      local_1317 = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_1317);
    }
    if (pFVar38 == pFVar39) break;
    local_1200[3] = *(double *)pFVar38;
    uStack_11e0 = *(undefined8 *)(pFVar38 + 8);
    local_11d8 = 0;
    local_11c0 = 0;
    local_11d0 = 0;
    uStack_11c8 = 0;
    local_11b8 = 0;
    uStack_11b0 = 0;
    local_11a8 = 0;
    local_1278[5] = 0.0;
    cVar18 = (**(code **)((longlong)*local_1310->Visitor + 0x30))
                       (local_1310->Visitor,local_1278 + 0x12);
    if (cVar18 == '\0') {
      lVar23 = (**(code **)((longlong)*local_1310->Visitor + 0x20))();
      if (lVar23 == 0) {
        (**(code **)((longlong)*local_1310->Visitor + 0x28))();
      }
      lVar23 = 0;
      local_1278[6] = (double)*(undefined8 *)(pFVar36 + -0x18);
      local_1278[7] = (double)*(undefined8 *)(pFVar36 + -0x10);
      local_1278[8] = (double)*(undefined8 *)(pFVar36 + -8);
      local_1278[9] = (double)*(undefined8 *)pFVar36;
      local_1278[10] = (double)*(undefined8 *)(pFVar36 + 8);
      local_1278[0xb] = (double)*(undefined8 *)(pFVar36 + 0x10);
      do {
        dVar50 = *(double *)(&(param_4->MMin).field_0x0 + lVar23);
        pdVar3 = (double *)((longlong)local_1278 + lVar23 + 0x48);
        if ((*pdVar3 <= dVar50 && dVar50 != *pdVar3) ||
           (*(double *)(&(param_4->MMax).field_0x0 + lVar23) <
            *(double *)((longlong)local_1278 + lVar23 + 0x30))) goto LAB_148247b35;
        lVar23 = lVar23 + 8;
      } while (lVar23 < 0x18);
      local_1198 = *(undefined8 *)pFVar38;
      uStack_1190 = *(undefined8 *)(pFVar38 + 8);
      local_1170 = *(undefined8 *)(pFVar36 + -8);
      local_1180 = *(undefined8 *)(pFVar36 + -0x18);
      uStack_1178 = *(undefined8 *)(pFVar36 + -0x10);
      local_1158 = *(undefined8 *)(pFVar36 + 0x10);
      local_1188 = 1;
      local_1168 = *(undefined8 *)pFVar36;
      uStack_1160 = *(undefined8 *)(pFVar36 + 8);
      cVar18 = (**(code **)((longlong)*local_1310->Visitor + 8))(local_1310->Visitor,&local_1198);
      if (cVar18 == '\0') {
        return false;
      }
    }
LAB_148247b35:
    pFVar38 = pFVar38 + 0x40;
    pFVar36 = pFVar36 + 0x40;
  }
  this_00 = (this->DirtyElementTree).Ptr;
  if (this_00 ==
      (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
       *)0x0) {
    local_12b8 = local_12e0;
    pdStack_12b0 = &local_12d0;
    pTStack_12a0 = (TVector<double,3> *)local_1308.AllocatorInstance.Data;
    local_1298 = local_12e8;
    pTStack_1290 = local_12f8;
    local_1288 = &local_12d8;
    local_12a8 = param_4;
    pTVar31 = local_1310;
    local_12c8 = local_1310;
    pTStack_12c0 = param_1;
    if (0 < (this->DirtyElements).ArrayNum) {
      if ((((0.0 < this->DirtyElementGridCellSize) &&
           (uVar27 = (ulonglong)this->DirtyElementMaxGridCellQueryCount,
           0 < this->DirtyElementMaxGridCellQueryCount)) &&
          (0 < this->DirtyElementMaxPhysicalSizeInCells)) &&
         ((0 < this->DirtyElementMaxCellCapacity &&
          (0 < *(int *)&(this->CellHashToFlatArray).field_0x8 -
               *(int *)&(this->CellHashToFlatArray).field_0x34)))) {
        dVar50 = this->DirtyElementGridCellSizeInv;
        auVar42._0_8_ = dVar50 * *(double *)&param_4->MMin;
        auVar42._8_8_ = 0;
        auVar43._8_8_ = 0;
        auVar43._0_8_ =
             (double)CONCAT44((uint)((ulonglong)auVar42._0_8_ >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(auVar42._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
             * __real_3cb0000000000000 + auVar42._0_8_;
        auVar43 = roundpd(auVar42,auVar43,1);
        auVar44._0_8_ = dVar50 * *(double *)&(param_4->MMin).field_0x8;
        auVar44._8_8_ = 0;
        auVar45._8_8_ = 0;
        auVar45._0_8_ =
             (double)CONCAT44((uint)((ulonglong)auVar44._0_8_ >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(auVar44._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
             * __real_3cb0000000000000 + auVar44._0_8_;
        auVar45 = roundpd(auVar44,auVar45,1);
        dVar6 = dVar50 * *(double *)&(param_4->MMax).field_0x8;
        auVar46._0_8_ = dVar50 * *(double *)&param_4->MMax;
        auVar46._8_8_ = 0;
        auVar47._8_8_ = 0;
        auVar47._0_8_ =
             (double)CONCAT44((uint)((ulonglong)auVar46._0_8_ >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(auVar46._0_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
             * __real_3cb0000000000000 + auVar46._0_8_;
        auVar47 = roundpd(auVar46,auVar47,1);
        auVar48._8_8_ = 0;
        auVar48._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             __real_3cb0000000000000 + dVar6;
        auVar48 = roundpd(auVar47,auVar48,1);
        if (((longlong)auVar47._0_8_ < (longlong)auVar43._0_8_) ||
           ((longlong)auVar48._0_8_ < (longlong)auVar45._0_8_)) {
          bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<613042642325864502>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTreeDirtyGridUtils.h"
                              ,0x36,"CellEndX >= CellStartX && CellEndY >= CellStartY");
          if (bVar19) {
            pcVar8 = (code *)swi(3);
            uVar20 = (*pcVar8)();
            return (bool)uVar20;
          }
        }
        else {
          uVar32 = ((longlong)auVar47._0_8_ - (longlong)auVar43._0_8_) + 1;
          uVar24 = ((longlong)auVar48._0_8_ - (longlong)auVar45._0_8_) + 1;
          if (((uVar32 <= uVar27) && (uVar24 <= uVar27)) &&
             (uVar24 = uVar24 * uVar32, uVar24 < uVar27 || uVar24 - uVar27 == 0)) {
            dVar50 = this->DirtyElementGridCellSizeInv;
            local_1308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            auVar49._0_8_ = dVar50 * *(double *)&param_4->MMin;
            auVar49._8_8_ = 0;
            local_1308.ArrayNum = 0;
            local_1308.ArrayMax = 0;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (double)CONCAT44((uint)((ulonglong)auVar49._0_8_ >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(auVar49._0_8_,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                           __real_3cb0000000000000 + auVar49._0_8_;
            auVar43 = roundpd(in_XMM3,auVar9,1);
            dVar6 = dVar50 * *(double *)&(param_4->MMin).field_0x8;
            lVar23 = (longlong)auVar43._0_8_;
            dVar11 = dVar50 * *(double *)&param_4->MMax;
            dVar50 = dVar50 * *(double *)&(param_4->MMax).field_0x8;
            auVar12._8_8_ = 0;
            auVar12._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar6;
            auVar43 = roundpd(auVar49,auVar12,1);
            pTVar25 = (TVector<double,3> *)(longlong)auVar43._0_8_;
            auVar13._8_8_ = 0;
            auVar13._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar11;
            auVar43 = roundpd(auVar43,auVar13,1);
            pTVar28 = (TVector<double,3> *)(longlong)auVar43._0_8_;
            auVar10._8_8_ = 0;
            auVar10._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar50;
            auVar43 = roundpd(auVar43,auVar10,1);
            local_12f8 = pTVar25;
            local_12e8 = pTVar28;
            if (lVar23 <= (longlong)pTVar28) {
              do {
                if ((longlong)pTVar25 <= (longlong)auVar43._0_8_) {
                  uVar29 = (uint)lVar23 & 0xffff;
                  uVar29 = (uVar29 << 8 ^ uVar29) & 0xff00ff;
                  uVar29 = (uVar29 << 4 ^ uVar29) & 0xf0f0f0f;
                  uVar29 = (uVar29 * 4 ^ uVar29) & 0x33333333;
                  uVar29 = uVar29 * 2 ^ uVar29;
                  pTVar34 = pTVar25;
                  do {
                    uVar30 = (uint)pTVar34 & 0xffff;
                    uVar30 = (uVar30 << 8 ^ uVar30) & 0xff00ff;
                    uVar30 = (uVar30 << 4 ^ uVar30) & 0xf0f0f0f;
                    uVar30 = (uVar30 * 4 ^ uVar30) & 0x33333333;
                    uVar30 = ((uVar30 * 2 ^ uVar30) * 2 ^ uVar29) & 0xaaaaaaaa ^ uVar29;
                    if (*(int *)&(this->CellHashToFlatArray).field_0x8 !=
                        *(int *)&(this->CellHashToFlatArray).field_0x34) {
                      puVar7 = *(undefined1 **)&(this->CellHashToFlatArray).field_0x40;
                      puVar33 = &(this->CellHashToFlatArray).field_0x38;
                      if (puVar7 != (undefined1 *)0x0) {
                        puVar33 = puVar7;
                      }
                      iVar22 = *(int *)(puVar33 +
                                       (ulonglong)
                                       (*(int *)&(this->CellHashToFlatArray).field_0x48 - 1U &
                                       uVar30) * 4);
                      if (iVar22 != -1) {
                        do {
                          lVar1 = *(longlong *)&this->CellHashToFlatArray + (longlong)iVar22 * 0x14;
                          if (*(uint *)(*(longlong *)&this->CellHashToFlatArray +
                                       (longlong)iVar22 * 0x14) == uVar30) {
                            pTVar25 = (TVector<double,3> *)(lVar1 + 4);
                            if (lVar1 == 0) {
                              pTVar25 = (TVector<double,3> *)0x0;
                            }
                            if (pTVar25 != (TVector<double,3> *)0x0) {
                              if (((local_1308.AllocatorInstance.Data <= pTVar25) &&
                                  (pTVar25 < (TVector<double,3> *)
                                             (local_1308.AllocatorInstance.Data +
                                             (longlong)local_1308.ArrayMax * 8))) &&
                                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar19)) {
                                pcVar8 = (code *)swi(3);
                                uVar20 = (*pcVar8)();
                                return (bool)uVar20;
                              }
                              iVar22 = local_1308.ArrayNum;
                              if (local_1308.ArrayNum == local_1308.ArrayMax) {
                                iVar22 = UE::Core::Private::
                                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x408,&local_1308.AllocatorInstance,
                                                    &local_1308.ArrayMax);
                              }
                              local_1308.ArrayNum = iVar22 + 1;
                              *(undefined4 *)
                               (local_1308.AllocatorInstance.Data + (longlong)iVar22 * 8) =
                                   *(undefined4 *)pTVar25;
                              *(undefined4 *)
                               (local_1308.AllocatorInstance.Data + (longlong)iVar22 * 8 + 4) =
                                   *(undefined4 *)&pTVar25->field_0x4;
                            }
                            break;
                          }
                          iVar22 = *(int *)(lVar1 + 0xc);
                        } while (iVar22 != -1);
                      }
                    }
                    pTVar34 = (TVector<double,3> *)&pTVar34->field_0x1;
                    pTVar25 = local_12f8;
                    pTVar28 = local_12e8;
                  } while ((longlong)pTVar34 <= (longlong)auVar43._0_8_);
                }
                lVar23 = lVar23 + 1;
              } while (lVar23 <= (longlong)pTVar28);
            }
            local_10f8.Visitor = local_12c8;
            local_10f8.Start = pTStack_12c0;
            local_10f8.QueryBounds = local_12a8;
            local_10f8.QueryHalfExtents = pTStack_12a0;
            local_10f8.CurData = local_12b8;
            local_10f8.TOI = pdStack_12b0;
            local_10f8.bParallel = local_1288;
            local_10f8.Dir = local_1298;
            local_10f8.InvDir = pTStack_1290;
            bVar19 = DoForHitGridCellsAndOverflow<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l31::<lambda_1>_>
                               (this,&local_1308,&local_10f8);
            if (!bVar19) {
              if ((TVector<double,3> *)local_1308.AllocatorInstance.Data == (TVector<double,3> *)0x0
                 ) {
                return false;
              }
              FMemory::Free(local_1308.AllocatorInstance.Data);
              return false;
            }
            pTVar31 = local_1310;
            if ((TVector<double,3> *)local_1308.AllocatorInstance.Data != (TVector<double,3> *)0x0)
            {
              FMemory::Free(local_1308.AllocatorInstance.Data);
              pTVar31 = local_1310;
            }
            goto LAB_148247b9b;
          }
        }
      }
      pTVar31 = local_1310;
      pFVar35 = (FExternalSpatialAccelerationPayload *)(this->DirtyElements).AllocatorInstance.Data;
      iVar22 = (this->DirtyElements).ArrayNum;
      pFVar40 = pFVar35 + (longlong)iVar22 * 4;
      piVar37 = &pFVar35[2].BoneId;
      while( true ) {
        if ((this->DirtyElements).ArrayNum != iVar22) {
          local_1316[0] = 0;
          `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1316);
        }
        if (pFVar35 == pFVar40) break;
        uVar14 = *(undefined8 *)(piVar37 + -6);
        uVar15 = *(undefined8 *)(piVar37 + -4);
        uVar16 = *(undefined8 *)piVar37;
        uVar17 = *(undefined8 *)(piVar37 + 2);
        FVar4 = (((FExternalSpatialAccelerationPayload *)(piVar37 + -2))->Component).ObjectKey;
        uVar5 = *(undefined8 *)(piVar37 + 4);
        local_1278[0xc] = (double)uVar14;
        local_1278[0xd] = (double)uVar15;
        local_1208 = FVar4;
        local_1200[0] = (double)uVar16;
        local_1200[1] = (double)uVar17;
        local_1200[2] = (double)uVar5;
        bVar19 = PrePreFilterHelper<FExternalSpatialAccelerationPayload,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                           (pFVar35,pTVar31);
        if (!bVar19) {
          lVar23 = 0;
          do {
            dVar50 = *(double *)(&(param_4->MMin).field_0x0 + lVar23);
            pdVar3 = (double *)((longlong)local_1278 + lVar23 + 0x78);
            if ((*pdVar3 <= dVar50 && dVar50 != *pdVar3) ||
               (*(double *)(&(param_4->MMax).field_0x0 + lVar23) <
                *(double *)((longlong)local_1278 + lVar23 + 0x60))) goto LAB_14824814f;
            lVar23 = lVar23 + 8;
          } while (lVar23 < 0x18);
          local_1148 = (pFVar35->Component).ObjectKey;
          uStack_1140._0_4_ = pFVar35->BoneId;
          uStack_1140._4_4_ = pFVar35->CachedUniqueIdx;
          local_1138 = 1;
          local_1130 = uVar14;
          uStack_1128 = uVar15;
          local_1120 = FVar4;
          local_1118 = uVar16;
          uStack_1110 = uVar17;
          local_1108 = uVar5;
          cVar18 = (**(code **)((longlong)*pTVar31->Visitor + 8))(pTVar31->Visitor,&local_1148);
          if (cVar18 == '\0') {
            return false;
          }
        }
LAB_14824814f:
        pFVar35 = pFVar35 + 4;
        piVar37 = piVar37 + 0x10;
      }
    }
  }
  else {
    bVar19 = QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                       (this_00,param_1,local_12e0,
                        (TVector<double,3> *)local_1308.AllocatorInstance.Data,param_4,local_1310,
                        local_12e8,local_12f8,local_12d8);
    pTVar31 = local_1310;
    if (!bVar19) {
      return false;
    }
  }
LAB_148247b9b:
  if ((this->bDynamicTree != false) && ((this->OverlappingLeaves).ArrayNum != 0)) {
    local_1318 = true;
    bVar19 = OverlapCached<2,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                       (this,param_4,pTVar31,&local_1318);
    if (bVar19) {
      return local_1318;
    }
  }
  local_ac = 0xff;
  local_10a8.SecondaryData =
       (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
        )0x0;
  local_b0 = 0;
  if (this->bDynamicTree == false) {
    if ((this->Nodes).ArrayNum == 0) goto LAB_14824842d;
    local_12f8 = (TVector<double,3> *)((ulonglong)local_12f8._4_4_ << 0x20);
  }
  else {
    if (this->RootNode == -1) goto LAB_14824842d;
    local_12f8 = (TVector<double,3> *)CONCAT44(local_12f8._4_4_,this->RootNode);
  }
  iVar22 = 1;
  local_b0 = 1;
  bVar19 = false;
  bVar41 = false;
  local_10a8.InlineData._0_8_ = local_12f8;
  local_10a8.InlineData[8] = '\0';
  local_10a8.InlineData[9] = '\0';
  local_10a8.InlineData[10] = '\0';
  local_10a8.InlineData[0xb] = '\0';
  local_10a8.InlineData[0xc] = '\0';
  local_10a8.InlineData[0xd] = '\0';
  local_10a8.InlineData[0xe] = '\0';
  local_10a8.InlineData[0xf] = '\0';
  dStack_12f0 = 0.0;
  do {
    if ((bVar41 || bVar19) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       iVar22 = local_b0, bVar19)) {
      pcVar8 = (code *)swi(3);
      uVar20 = (*pcVar8)();
      return (bool)uVar20;
    }
    FVar26 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_10a8;
    if (local_10a8.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar26 = local_10a8.SecondaryData;
    }
    lVar23 = (longlong)(iVar22 + -1) * 0x10;
    uVar29 = *(uint *)(lVar23 + (longlong)FVar26);
    FVar26 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
              )&local_10a8;
    if (local_10a8.SecondaryData !=
        (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
         )0x0) {
      FVar26 = local_10a8.SecondaryData;
    }
    _Dst = (void *)(lVar23 + (longlong)FVar26);
    iVar21 = (iVar22 - (iVar22 + -1)) + -1;
    if (iVar21 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar21 << 4);
      iVar22 = local_b0;
    }
    local_b0 = iVar22 + -1;
    uVar30 = 0;
    if ((int)uVar29 < (this->Nodes).ArrayNum) {
      uVar30 = ~uVar29 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar8 = (code *)swi(3);
      uVar20 = (*pcVar8)();
      return (bool)uVar20;
    }
    pFVar38 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x70;
    pFVar36 = pFVar38 + 0x60;
    pFVar39 = pFVar36;
    dVar50 = dStack_12f0;
    dVar6 = local_12d0;
    iVar22 = local_b0;
    if (((byte)pFVar38[0x6c] & 1) == 0) {
      for (; dStack_12f0 = dVar6, local_12d0 = dStack_12f0, pFVar38 != pFVar36;
          pFVar38 = pFVar38 + 0x30) {
        local_1278[0] = *(double *)pFVar38;
        local_1278[1] = (double)*(undefined8 *)(pFVar38 + 8);
        local_1278[2] = (double)*(undefined8 *)(pFVar38 + 0x10);
        local_1278[3] = (double)*(undefined8 *)(pFVar38 + 0x18);
        local_1278[4] = (double)*(undefined8 *)(pFVar38 + 0x20);
        local_1278[5] = (double)*(undefined8 *)(pFVar38 + 0x28);
        lVar23 = 0;
        do {
          dVar6 = *(double *)(&(param_4->MMin).field_0x0 + lVar23);
          pdVar3 = (double *)((longlong)local_1278 + lVar23 + 0x18);
          if ((*pdVar3 <= dVar6 && dVar6 != *pdVar3) ||
             (*(double *)(&(param_4->MMax).field_0x0 + lVar23) <
              *(double *)((longlong)local_1278 + lVar23))) goto LAB_148248413;
          lVar23 = lVar23 + 8;
        } while (lVar23 < 0x18);
        local_12f8._4_4_ = (uint)((ulonglong)local_12f8 >> 0x20);
        local_12f8 = (TVector<double,3> *)CONCAT44(local_12f8._4_4_,*(uint *)pFVar39);
        if (iVar22 == local_ac) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                             (0x810,&local_10a8,&local_ac);
        }
        local_b0 = iVar22 + 1;
        FVar26 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                  )&local_10a8;
        if (local_10a8.SecondaryData !=
            (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
             )0x0) {
          FVar26 = local_10a8.SecondaryData;
        }
        plVar2 = (longlong *)((longlong)FVar26 + (longlong)iVar22 * 0x10);
        *plVar2 = (longlong)local_12f8;
        plVar2[1] = (longlong)dStack_12f0;
        iVar22 = local_b0;
        dVar50 = dStack_12f0;
LAB_148248413:
        dStack_12f0 = dVar50;
        pFVar39 = pFVar39 + 4;
        dVar50 = dStack_12f0;
        dVar6 = local_12d0;
      }
    }
    else {
      uVar29 = *(uint *)pFVar36;
      uVar30 = 0;
      if ((int)uVar29 < *(int *)&(this->Leaves).field_0x8) {
        uVar30 = ~uVar29 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      bVar19 = TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::
               OverlapFast<Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                         ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
                          (*(longlong *)&this->Leaves + (longlong)(int)uVar29 * 0x48),param_4,
                          local_1310);
      iVar22 = local_b0;
      dVar50 = dStack_12f0;
      if (!bVar19) {
        bVar19 = false;
        goto LAB_14824842f;
      }
    }
    dStack_12f0 = dVar50;
    bVar19 = iVar22 < 0;
    bVar41 = iVar22 == 0;
  } while (!bVar41);
LAB_14824842d:
  bVar19 = true;
LAB_14824842f:
  if (local_10a8.SecondaryData !=
      (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastDataVoid_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
       )0x0) {
    FMemory::Free((void *)local_10a8.SecondaryData);
  }
  return bVar19;
}

// QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_> @ 1482484a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,TVector<double,3> *param_1,FQueryFastData *param_2,TVector<double,3> *param_3,
          TAABB<double,3> *param_4,
          TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,bool *param_8)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *this_00;
  TVector<double,3> *pTVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  TVector<double,3> *pTVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  DirtyGridHashEntry *pDVar22;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  FVar23;
  undefined7 extraout_var;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  void *_Dst;
  char *pcVar31;
  undefined1 *this_01;
  uint uVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *pTVar35;
  double *pdVar36;
  FScriptContainerElement *pFVar37;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *pTVar38;
  undefined8 *puVar39;
  FScriptContainerElement *pFVar40;
  undefined8 *puVar41;
  longlong lVar42;
  bool bVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
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
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  double dVar112;
  double dVar113;
  double dVar120;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar121;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  double dVar134;
  TAABB<double,3> *pTVar135;
  TAABB<double,3> *pTVar136;
  undefined1 auVar137 [16];
  uint uVar138;
  uint uVar139;
  uint uVar140;
  uint uVar141;
  uint uVar142;
  uint uVar143;
  uint uVar144;
  undefined1 auStackY_14f8 [32];
  undefined1 local_14a0;
  undefined1 local_149f;
  char local_149e;
  undefined1 local_149d [5];
  TVector<double,3> *local_1498;
  uint local_1490;
  undefined1 local_1480 [16];
  TVector<double,3> *local_1470;
  FQueryFastData *local_1468;
  TAABB<double,3> *local_1460;
  TAABB<double,3> *local_1458;
  bool *local_1450;
  TArray<Chaos::DirtyGridHashEntry,TSizedDefaultAllocator<32>_> local_1448;
  double local_1438;
  undefined1 local_1430 [16];
  uint local_1420;
  int iStack_141c;
  TAABB<double,3> *pTStack_1418;
  undefined8 local_1410;
  TAABB<double,3> *pTStack_1408;
  longlong local_1400;
  TAABB<double,3> *pTStack_13f8;
  undefined8 local_13f0;
  TAABB<double,3> *pTStack_13e8;
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *local_13e0;
  TAABB<double,3> *pTStack_13d8;
  uint local_13d0;
  undefined4 uStack_13cc;
  TAABB<double,3> *pTStack_13c8;
  longlong local_13c0;
  longlong local_13b8;
  double local_13b0 [4];
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *local_1390;
  TVector<double,3> *pTStack_1388;
  FQueryFastData *local_1380;
  double *pdStack_1378;
  TAABB<double,3> *local_1370;
  TAABB<double,3> *pTStack_1368;
  TVector<double,3> *local_1360;
  TVector<double,3> *pTStack_1358;
  bool **local_1350;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *local_1340;
  TArray<Chaos::DirtyGridHashEntry,TSizedDefaultAllocator<32>_> *local_1338;
  double local_1330;
  undefined8 local_1318;
  double local_1310 [4];
  TAABB<double,3> *local_12f0 [4];
  undefined8 local_12d0;
  undefined8 uStack_12c8;
  undefined1 local_12c0;
  undefined1 local_12b8 [16];
  undefined8 local_12a8;
  undefined1 local_12a0 [16];
  undefined8 local_1290;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined1 local_1270;
  undefined1 local_1268 [16];
  double local_1258;
  double local_1250;
  double dStack_1248;
  double local_1240;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined1 local_1220;
  undefined1 local_1218 [16];
  undefined8 local_1208;
  undefined1 local_1200 [16];
  undefined8 local_11f0;
  undefined8 local_11e0;
  undefined8 uStack_11d8;
  undefined1 local_11d0;
  double local_11c8;
  double dStack_11c0;
  double local_11b8;
  double local_11b0;
  double dStack_11a8;
  double local_11a0;
  <lambda_1> local_1190;
  undefined8 local_1118;
  ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
  local_1110;
  int local_118;
  int local_114;
  ulonglong local_110;
  undefined8 uVar68;
  
  dVar4 = __real_7fefffffffffffff;
  local_110 = __security_cookie.value ^ (ulonglong)auStackY_14f8;
  pFVar37 = (this->GlobalPayloads).AllocatorInstance.Data;
  local_1460 = param_4;
  pFVar34 = pFVar37 + 0x28;
  local_1470 = param_6;
  local_1450 = param_8;
  local_1490 = (this->GlobalPayloads).ArrayNum;
  uVar20 = (ulonglong)(int)local_1490;
  local_1480._0_8_ = param_1;
  pFVar40 = pFVar37 + uVar20 * 0x40;
  local_1438 = 0.0;
  local_1430._0_8_ = this;
  local_13e0 = param_5;
  local_1498 = param_7;
  local_1468 = param_2;
  local_1458 = (TAABB<double,3> *)param_3;
  while( true ) {
    if ((this->GlobalPayloads).ArrayNum != (int)uVar20) {
      local_149f = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_149f);
    }
    pTVar14 = local_1498;
    uVar144 = _UNK_15061cc8c;
    uVar143 = _UNK_15061cc88;
    uVar142 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar141 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if (pFVar37 == pFVar40) break;
    local_12d0 = *(undefined8 *)pFVar37;
    uStack_12c8 = *(undefined8 *)(pFVar37 + 8);
    local_12a0 = ZEXT816(0);
    local_12a8 = 0;
    local_12b8 = ZEXT816(0);
    local_12c0 = 0;
    local_1290 = 0;
    local_1318 = 0;
    cVar15 = (**(code **)((longlong)*param_5->Visitor + 0x30))(param_5->Visitor,&local_12d0);
    if (cVar15 == '\0') {
      lVar21 = (**(code **)((longlong)*param_5->Visitor + 0x20))();
      if (lVar21 == 0) {
        (**(code **)((longlong)*param_5->Visitor + 0x28))();
      }
      auVar103._0_12_ = ZEXT812(0);
      auVar103._12_4_ = 0;
      auVar49 = *(undefined1 (*) [16])(pFVar34 + -0x18);
      lVar21 = 0;
      auVar105._8_8_ = 0;
      auVar105._0_8_ = dVar4;
      local_1330 = *(double *)(pFVar34 + 0x10);
      local_12f0[2] = (TAABB<double,3> *)*(undefined8 *)&local_1498->field_0x10;
      local_12f0[0] = *(TAABB<double,3> **)local_1498;
      local_12f0[1] = (TAABB<double,3> *)*(undefined8 *)&local_1498->field_0x8;
      local_1310[0] = auVar49._0_8_ - *(double *)param_1;
      local_1310[1] = auVar49._8_8_ - *(double *)&param_1->field_0x8;
      local_1310[2] = *(double *)(pFVar34 + -8) - *(double *)&param_1->field_0x10;
      local_13b0[1] = *(double *)(pFVar34 + 8) - *(double *)&param_1->field_0x8;
      local_13b0[0] = *(double *)pFVar34 - *(double *)param_1;
      local_13b0[2] = local_1330 - *(double *)&param_1->field_0x10;
      do {
        if (local_1450[lVar21] == false) {
          auVar69._0_8_ = (double)local_12f0[lVar21] * local_13b0[lVar21];
          auVar69._8_8_ = 0;
          auVar86._0_8_ = (double)local_12f0[lVar21] * local_1310[lVar21];
          auVar86._8_8_ = 0;
          auVar87 = auVar86;
          if (auVar69._0_8_ < auVar86._0_8_) {
            auVar87._8_8_ = 0;
            auVar87._0_8_ = auVar69._0_8_;
            auVar69._8_8_ = 0;
            auVar69._0_8_ = auVar86._0_8_;
          }
        }
        else {
          if ((0.0 < local_1310[lVar21]) || (local_13b0[lVar21] <= 0.0 && local_13b0[lVar21] != 0.0)
             ) goto LAB_1482487dd;
          auVar69._8_8_ = 0;
          auVar69._0_8_ = dVar4;
          auVar87 = ZEXT816(0);
        }
        if (auVar87._0_8_ <= auVar103._0_8_) {
          auVar87._0_8_ = auVar103._0_8_;
        }
        if (auVar105._0_8_ <= auVar69._0_8_) {
          auVar69._0_8_ = auVar105._0_8_;
        }
        dVar102 = auVar87._0_8_;
        if (auVar69._0_8_ < dVar102) goto LAB_1482487dd;
        lVar21 = lVar21 + 1;
        auVar103 = auVar87;
        auVar105 = auVar69;
      } while (lVar21 < 3);
      if ((dVar102 < param_2->CurrentLength || dVar102 == param_2->CurrentLength) &&
         (0.0 <= auVar69._0_8_)) {
        local_1280 = *(undefined8 *)pFVar37;
        uStack_1278 = *(undefined8 *)(pFVar37 + 8);
        local_1270 = 1;
        local_1438 = dVar102;
        local_1268 = auVar49;
        local_1258 = *(double *)(pFVar34 + -8);
        local_1250 = *(double *)pFVar34;
        dStack_1248 = *(double *)(pFVar34 + 8);
        local_1240 = local_1330;
        cVar15 = (**(code **)((longlong)*param_5->Visitor + 0x10))
                           (param_5->Visitor,&local_1280,param_2);
        if (cVar15 == '\0') {
          return false;
        }
      }
    }
LAB_1482487dd:
    uVar20 = (ulonglong)local_1490;
    pFVar37 = pFVar37 + 0x40;
    pFVar34 = pFVar34 + 0x40;
  }
  this_00 = (this->DirtyElementTree).Ptr;
  if (this_00 ==
      (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
       *)0x0) {
    pdStack_1378 = &local_1438;
    local_1370 = local_1460;
    pTStack_1368 = local_1458;
    local_1350 = &local_1450;
    local_1390 = param_5;
    local_1360 = local_1470;
    pTStack_1388 = param_1;
    local_1380 = param_2;
    pTStack_1358 = local_1498;
    if (0 < (this->DirtyElements).ArrayNum) {
      dVar102 = this->DirtyElementGridCellSize;
      if ((((0.0 < dVar102) && (0 < this->DirtyElementMaxGridCellQueryCount)) &&
          (0 < this->DirtyElementMaxPhysicalSizeInCells)) &&
         ((0 < this->DirtyElementMaxCellCapacity &&
          (0 < *(int *)&(this->CellHashToFlatArray).field_0x8 -
               *(int *)&(this->CellHashToFlatArray).field_0x34)))) {
        dVar112 = param_2->CurrentLength;
        pTVar5 = param_2->Dir;
        dVar121 = this->DirtyElementGridCellSizeInv;
        if ((dVar112 <= __real_43f0000000000000) && (dVar121 != 0.0)) {
          dVar2 = *(double *)&param_1->field_0x8;
          dVar3 = *(double *)param_1;
          dVar44 = *(double *)&param_1->field_0x10;
          dVar45 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dVar46 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          if (dVar45 <= dVar46) {
            dVar45 = dVar46;
          }
          dVar47 = dVar112 * *(double *)&pTVar5->field_0x10 + dVar44;
          dVar44 = (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar44,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dVar46 = dVar112 * *(double *)&pTVar5->field_0x8 + dVar2;
          if (dVar45 <= dVar44) {
            dVar45 = dVar44;
          }
          dVar44 = dVar112 * *(double *)pTVar5 + dVar3;
          if (dVar45 < __real_43e0000000000000 / dVar121) {
            dVar45 = (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar46,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     );
            dVar113 = (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar44,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            if (dVar45 <= dVar113) {
              dVar45 = dVar113;
            }
            dVar47 = (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar47,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     );
            if (dVar45 <= dVar47) {
              dVar45 = dVar47;
            }
            if (dVar45 < __real_43e0000000000000 / dVar121) {
              auVar49._0_8_ = dVar121 * dVar2;
              auVar49._8_8_ = 0;
              dVar46 = dVar121 * dVar46;
              dVar45 = dVar121 * dVar3;
              dVar44 = dVar121 * dVar44;
              auVar104._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)auVar49._0_8_ >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(auVar49._0_8_,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                   __real_3cb0000000000000 + auVar49._0_8_;
              auVar104._8_8_ = 0;
              auVar49 = roundpd(auVar49,auVar104,1);
              auVar108._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar46,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   * __real_3cb0000000000000 + dVar46;
              auVar108._8_8_ = 0;
              auVar104 = roundpd(auVar49,auVar108,1);
              lVar30 = (longlong)auVar49._0_8_ - (longlong)auVar104._0_8_;
              lVar21 = -lVar30;
              if (lVar21 < 0) {
                lVar21 = lVar30;
              }
              auVar115._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   * __real_3cb0000000000000 + dVar45;
              auVar115._8_8_ = 0;
              auVar49 = roundpd(auVar104,auVar115,1);
              auVar123._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar44,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   * __real_3cb0000000000000 + dVar44;
              auVar123._8_8_ = 0;
              auVar104 = roundpd(auVar49,auVar123,1);
              lVar24 = (longlong)auVar49._0_8_ - (longlong)auVar104._0_8_;
              lVar30 = -lVar24;
              if (lVar30 < 0) {
                lVar30 = lVar24;
              }
              if ((ulonglong)(lVar21 + lVar30) <=
                  (ulonglong)(longlong)this->DirtyElementMaxGridCellQueryCount) {
                local_1448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1448.ArrayNum = 0;
                local_1448.ArrayMax = 0;
                auVar130._0_8_ = dVar3 * dVar121;
                auVar130._8_8_ = 0;
                dVar45 = dVar112 * *(double *)pTVar5;
                dVar112 = dVar112 * *(double *)&pTVar5->field_0x8;
                auVar70._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)auVar130._0_8_ >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(auVar130._0_8_,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                     __real_3cb0000000000000 + auVar130._0_8_;
                auVar70._8_8_ = 0;
                dVar44 = (dVar112 + dVar2) * dVar121;
                auVar49 = roundpd(auVar130,auVar70,1);
                lVar21 = (longlong)auVar49._0_8_;
                auVar133._0_8_ = dVar2 * dVar121;
                auVar133._8_8_ = 0;
                auVar71._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)auVar133._0_8_ >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(auVar133._0_8_,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                     __real_3cb0000000000000 + auVar133._0_8_;
                auVar71._8_8_ = 0;
                auVar49 = roundpd(auVar133,auVar71,1);
                lVar30 = (longlong)auVar49._0_8_;
                local_13d0 = (uint)lVar30;
                uStack_13cc = (undefined4)((ulonglong)lVar30 >> 0x20);
                dVar3 = dVar3 - (double)lVar21 * dVar102;
                dVar2 = dVar2 - (double)lVar30 * dVar102;
                auVar137._0_8_ = (dVar45 + dVar3 + (double)lVar21 * dVar102) * dVar121;
                auVar137._8_8_ = 0;
                auVar72._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)auVar137._0_8_ >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(auVar137._0_8_,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                     __real_3cb0000000000000 + auVar137._0_8_;
                auVar72._8_8_ = 0;
                auVar49 = roundpd(auVar137,auVar72,1);
                auVar73._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar44,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                     ) * __real_3cb0000000000000 + dVar44;
                auVar73._8_8_ = 0;
                dVar44 = (double)CONCAT44((uint)((ulonglong)dVar112 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar112,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                auVar104 = roundpd(auVar49,auVar73,1);
                local_13f0 = (longlong)auVar104._0_8_;
                dVar121 = (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar45,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
                local_149e = dVar121 <= __real_3e45798ee0000000;
                bVar16 = dVar44 <= __real_3e45798ee0000000;
                local_14a0 = bVar16;
                local_13b8 = lVar21;
                local_1340 = this;
                local_1338 = &local_1448;
                if ((__real_3e45798ee0000000 < dVar121) || (__real_3e45798ee0000000 < dVar44)) {
                  iVar28 = -1;
                  local_1490 = 0xffffffff;
                  if (0.0 <= dVar45) {
                    local_1490 = 1;
                  }
                  if (0.0 <= dVar112) {
                    iVar28 = 1;
                  }
                  local_1498 = (TVector<double,3> *)CONCAT44(local_1498._4_4_,iVar28);
                  if (dVar121 < dVar44) {
                    dVar46 = (double)iVar28;
                    dVar44 = __real_3ff0000000000000;
                    if (__real_3e45798ee0000000 < dVar121) {
                      dVar44 = (dVar46 * dVar112) / dVar45;
                    }
                  }
                  else {
                    dVar44 = (double)(int)local_1490;
                    dVar46 = __real_3ff0000000000000;
                    if (!bVar16) {
                      dVar46 = (dVar44 * dVar45) / dVar112;
                    }
                  }
                  lVar24 = (longlong)iVar28;
                  local_1410 = (longlong)(int)local_1490;
                  local_1400 = (longlong)auVar49._0_8_ * local_1410;
                  lVar42 = local_1410 * lVar21;
                  iStack_141c = (int)local_1490 >> 0x1f;
                  local_1410 = local_1410 * local_1410;
                  local_1420 = local_1490;
                  local_13c0 = lVar24;
                  pTStack_1358 = pTVar14;
                  do {
                    uVar25 = (uint)lVar21 & 0xffff;
                    uVar25 = (uVar25 << 8 ^ uVar25) & 0xff00ff;
                    uVar25 = (uVar25 << 4 ^ uVar25) & 0xf0f0f0f;
                    uVar32 = (uint)lVar30 & 0xffff;
                    uVar29 = (uVar25 * 4 ^ uVar25) & 0x33333333;
                    uVar25 = (uVar32 << 8 ^ uVar32) & 0xff00ff;
                    uVar25 = (uVar25 << 4 ^ uVar25) & 0xf0f0f0f;
                    uVar29 = uVar29 * 2 ^ uVar29;
                    uVar25 = (uVar25 * 4 ^ uVar25) & 0x33333333;
                    pDVar22 = TMapBase<int,Chaos::DirtyGridHashEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>_>
                              ::Find((TMapBase<int,Chaos::DirtyGridHashEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>_>
                                      *)&local_1340->CellHashToFlatArray,
                                     ((uVar25 * 2 ^ uVar25) * 2 ^ uVar29) & 0xaaaaaaaa ^ uVar29);
                    if (pDVar22 != (DirtyGridHashEntry *)0x0) {
                      if ((local_1448.AllocatorInstance.Data <= pDVar22) &&
                         (pDVar22 < (DirtyGridHashEntry *)
                                    (local_1448.AllocatorInstance.Data +
                                    (longlong)local_1448.ArrayMax * 8))) {
                        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           );
                        if (bVar17) {
                          pcVar6 = (code *)swi(3);
                          uVar18 = (*pcVar6)();
                          return (bool)uVar18;
                        }
                      }
                      iVar28 = local_1448.ArrayNum;
                      if (local_1448.ArrayNum == local_1448.ArrayMax) {
                        iVar28 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x408,&local_1448.AllocatorInstance,&local_1448.ArrayMax
                                           );
                      }
                    /* WARNING: Ignoring partial resolution of indirect */
                      local_1448.ArrayNum = iVar28 + 1;
                      *(int *)&local_1448.AllocatorInstance.Data[(longlong)iVar28 * 8].field_0x0 =
                           pDVar22->Index;
                      *(int *)(local_1448.AllocatorInstance.Data + (longlong)iVar28 * 8 + 4) =
                           pDVar22->Count;
                      lVar24 = local_13c0;
                    }
                    dVar112 = dVar4;
                    if (local_149e == '\0') {
                      dVar112 = ((double)(longlong)
                                         (((ulonglong)(0 < (int)local_1490) - local_13b8) + lVar21)
                                 * dVar102 - dVar3) * dVar44;
                    }
                    dVar121 = dVar4;
                    if (!bVar16) {
                      dVar121 = ((double)(longlong)
                                         (((ulonglong)(0 < (int)local_1498) -
                                          CONCAT44(uStack_13cc,local_13d0)) + lVar30) * dVar102 -
                                dVar2) * dVar46;
                    }
                    if (dVar121 < dVar112) {
                      lVar30 = lVar30 + lVar24;
                    }
                    else {
                      lVar21 = lVar21 + CONCAT44(iStack_141c,local_1420);
                      lVar42 = lVar42 + local_1410;
                      dVar121 = dVar112;
                    }
                    if (local_149e == '\0') {
                      dVar3 = dVar3 + dVar121 / dVar44;
                    }
                    if (!bVar16) {
                      dVar2 = dVar2 + dVar121 / dVar46;
                    }
                  } while ((lVar42 <= local_1400) &&
                          (lVar24 * lVar30 - local_13f0 * lVar24 == 0 ||
                           lVar24 * lVar30 < local_13f0 * lVar24));
                  param_5 = local_13e0;
                  this = (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                          *)local_1430._0_8_;
                  param_1 = (TVector<double,3> *)local_1480._0_8_;
                }
                else {
                  uVar25 = (uint)lVar21 & 0xffff;
                  uVar25 = (uVar25 << 8 ^ uVar25) & 0xff00ff;
                  uVar25 = (uVar25 << 4 ^ uVar25) & 0xf0f0f0f;
                  uVar32 = (uVar25 * 4 ^ uVar25) & 0x33333333;
                  uVar25 = ((local_13d0 & 0xffff) << 8 ^ local_13d0 & 0xffff) & 0xff00ff;
                  uVar25 = (uVar25 << 4 ^ uVar25) & 0xf0f0f0f;
                  uVar32 = uVar32 * 2 ^ uVar32;
                  uVar25 = (uVar25 * 4 ^ uVar25) & 0x33333333;
                  `Chaos::
                  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  ::
                  QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'
                  ::__l41::<lambda_2>::operator()
                            (&local_1340,((uVar25 * 2 ^ uVar25) * 2 ^ uVar32) & 0xaaaaaaaa ^ uVar32)
                  ;
                }
                local_1190.Visitor = local_1390;
                local_1190.Start = pTStack_1388;
                local_1190.QueryBounds = local_1370;
                local_1190.QueryHalfExtents = &pTStack_1368->MMin;
                local_1190.CurData = local_1380;
                local_1190.TOI = pdStack_1378;
                local_1190.bParallel = local_1350;
                local_1190.Dir = local_1360;
                local_1190.InvDir = pTStack_1358;
                bVar16 = DoForHitGridCellsAndOverflow<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l31::<lambda_1>_>
                                   (this,&local_1448,&local_1190);
                if (!bVar16) {
                  if ((DirtyGridHashEntry *)local_1448.AllocatorInstance.Data ==
                      (DirtyGridHashEntry *)0x0) {
                    return false;
                  }
                  FMemory::Free(local_1448.AllocatorInstance.Data);
                  return false;
                }
                param_2 = local_1468;
                if ((DirtyGridHashEntry *)local_1448.AllocatorInstance.Data !=
                    (DirtyGridHashEntry *)0x0) {
                  FMemory::Free(local_1448.AllocatorInstance.Data);
                  param_2 = local_1468;
                }
                goto LAB_148248f8a;
              }
            }
          }
        }
      }
      iVar28 = (this->DirtyElements).ArrayNum;
      pTVar35 = (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
                (this->DirtyElements).AllocatorInstance.Data;
      pTVar38 = pTVar35 + iVar28;
      while( true ) {
        if ((this->DirtyElements).ArrayNum != iVar28) {
          local_14a0 = 0;
          `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_14a0);
        }
        param_2 = local_1468;
        if (pTVar35 == pTVar38) break;
        bVar16 = `Chaos::
                 TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                 ::
                 QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'
                 ::__l31::<lambda_1>::operator()(&local_1390,pTVar35);
        if (!bVar16) {
          return false;
        }
        pTVar35 = pTVar35 + 1;
      }
    }
  }
  else {
    bVar16 = QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                       (this_00,param_1,param_2,&local_1458->MMin,local_1460,param_5,local_1470,
                        local_1498,local_1450);
    if (!bVar16) {
      return false;
    }
  }
LAB_148248f8a:
  local_114 = 0xff;
  bVar16 = false;
  iVar28 = 0;
  local_1110.SecondaryData =
       (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
        )0x0;
  local_118 = 0;
  if (this->bDynamicTree == false) {
    if ((this->Nodes).ArrayNum == 0) goto LAB_148249031;
    local_1480._0_8_ = local_1480._4_8_ << 0x20;
  }
  else {
    iVar28 = 0;
    if (this->RootNode == -1) goto LAB_148249031;
    local_1480._0_4_ = this->RootNode;
  }
  bVar16 = true;
  local_118 = 1;
  iVar28 = 1;
  local_1110.InlineData[0] = local_1480[0];
  local_1110.InlineData[1] = local_1480[1];
  local_1110.InlineData[2] = local_1480[2];
  local_1110.InlineData[3] = local_1480[3];
  local_1110.InlineData[4] = local_1480[4];
  local_1110.InlineData[5] = local_1480[5];
  local_1110.InlineData[6] = local_1480[6];
  local_1110.InlineData[7] = local_1480[7];
  local_1110.InlineData[8] = '\0';
  local_1110.InlineData[9] = '\0';
  local_1110.InlineData[10] = '\0';
  local_1110.InlineData[0xb] = '\0';
  local_1110.InlineData[0xc] = '\0';
  local_1110.InlineData[0xd] = '\0';
  local_1110.InlineData[0xe] = '\0';
  local_1110.InlineData[0xf] = '\0';
LAB_148249031:
  uVar20 = *(ulonglong *)&local_1470->field_0x10;
  auVar106._8_8_ = 0;
  auVar106._0_8_ = uVar20;
  dVar4 = param_2->CurrentLength;
  uVar25 = SUB84(dVar4,0);
  uVar32 = (uint)((ulonglong)dVar4 >> 0x20);
  dVar102 = *(double *)&param_1->field_0x10;
  auVar49 = *(undefined1 (*) [16])local_1470;
  bVar17 = (double)CONCAT44(uVar142 & (uint)(uVar20 >> 0x20),uVar141 & (uint)uVar20) <
           GlobalVectorConstants::DoubleSmallNumber.ZW.m128d_f64[0];
  dVar44 = (double)-(ulonglong)bVar17;
  dVar46 = (double)-(ulonglong)(0.0 < GlobalVectorConstants::DoubleSmallNumber.ZW.m128d_f64[1]);
  dVar45 = (double)-(ulonglong)
                    ((double)CONCAT44(uVar142 & auVar49._4_4_,uVar141 & auVar49._0_4_) <
                    GlobalVectorConstants::DoubleSmallNumber.XY.m128d_f64[0]);
  dVar47 = (double)-(ulonglong)
                    ((double)CONCAT44(uVar144 & auVar49._12_4_,uVar143 & auVar49._8_4_) <
                    GlobalVectorConstants::DoubleSmallNumber.XY.m128d_f64[1]);
  uVar141 = SUB84(dVar45,0);
  uVar142 = (uint)((ulonglong)dVar45 >> 0x20);
  uVar143 = SUB84(dVar47,0);
  uVar144 = (uint)((ulonglong)dVar47 >> 0x20);
  dVar2 = *(double *)param_1;
  dVar3 = *(double *)&param_1->field_0x8;
  auVar48._0_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[0];
  auVar48._8_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[1];
  auVar49 = divpd(auVar48,auVar49);
  auVar50._0_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[2];
  auVar50._8_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[3];
  dVar112 = (double)(float)(~(uint)(float)dVar45 & (uint)(float)auVar49._0_8_);
  dVar121 = (double)(float)(~(uint)(float)dVar47 & (uint)(float)auVar49._8_8_);
  auVar49 = divpd(auVar50,auVar106);
  local_1480._8_4_ = SUB84(dVar121,0);
  local_1480._0_8_ = dVar112;
  local_1480._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
  auVar52._0_4_ = (float)auVar49._0_8_;
  auVar52._4_4_ = (float)auVar49._8_8_;
  auVar52._8_8_ = 0;
  local_1430._0_8_ = (undefined8)(float)(~(uint)(float)dVar44 & (uint)auVar52._0_4_);
  local_1430._8_8_ = (undefined8)(float)(~(uint)(float)dVar46 & (uint)auVar52._4_4_);
  if (bVar16) {
    bVar16 = iVar28 == 0;
    do {
      uVar68 = auVar52._8_8_;
      if (bVar16 || iVar28 < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar68 = extraout_XMM0._8_8_;
        iVar28 = local_118;
        if (bVar16) {
          pcVar6 = (code *)swi(3);
          uVar18 = (*pcVar6)();
          return (bool)uVar18;
        }
      }
      FVar23 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                )&local_1110;
      if (local_1110.SecondaryData !=
          (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
           )0x0) {
        FVar23 = local_1110.SecondaryData;
      }
      lVar21 = (longlong)(iVar28 + -1) * 0x10;
      auVar49 = *(undefined1 (*) [16])(lVar21 + (longlong)FVar23);
      FVar23 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                )&local_1110;
      if (local_1110.SecondaryData !=
          (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
           )0x0) {
        FVar23 = local_1110.SecondaryData;
      }
      _Dst = (void *)(lVar21 + (longlong)FVar23);
      iVar19 = (iVar28 - (iVar28 + -1)) + -1;
      if (iVar19 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)iVar19 << 4);
        uVar68 = extraout_XMM0_00._8_8_;
        iVar28 = local_118;
      }
      auVar13._4_8_ = uVar68;
      auVar13._0_4_ = auVar49._4_4_;
      auVar51._0_8_ = auVar13._0_8_ << 0x20;
      auVar51._8_4_ = auVar49._8_4_;
      auVar51._12_4_ = auVar49._12_4_;
      dVar113 = auVar51._8_8_;
      auVar52._8_8_ = auVar49._8_8_;
      auVar52._0_8_ = (ulonglong)dVar113;
      local_118 = iVar28 + -1;
      if (dVar113 < param_2->CurrentLength || dVar113 == param_2->CurrentLength) {
        uVar33 = auVar49._0_4_;
        uVar26 = ~uVar33 >> 0x1f;
        uVar29 = 0;
        if ((int)uVar33 < (this->Nodes).ArrayNum) {
          uVar29 = uVar26;
        }
        if (uVar29 == 0) {
          uVar26 = 0x506106c8;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          auVar52 = extraout_XMM0_01;
          if (bVar16) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
        }
        pFVar34 = (this->Nodes).AllocatorInstance.Data;
        lVar21 = (longlong)(int)uVar33 * 0x70;
        uVar29 = SUB84(dVar44,0);
        uVar138 = (uint)((ulonglong)dVar44 >> 0x20);
        uVar139 = SUB84(dVar46,0);
        uVar140 = (uint)((ulonglong)dVar46 >> 0x20);
        if (((byte)pFVar34[lVar21 + 0x6c] & 1) == 0) {
          dVar113 = *(double *)(pFVar34 + lVar21 + 0x18);
          dVar120 = *(double *)(pFVar34 + lVar21 + 0x20);
          auVar93._8_8_ = -(ulonglong)(dVar3 < *(double *)(pFVar34 + lVar21 + 8));
          auVar93._0_8_ = -(ulonglong)(dVar2 < *(double *)(pFVar34 + lVar21));
          auVar57._8_4_ = SUB84(dVar120,0);
          auVar57._0_8_ = dVar113;
          auVar57._12_4_ = (int)((ulonglong)dVar120 >> 0x20);
          auVar58._8_8_ = -(ulonglong)(auVar57._8_8_ < dVar3);
          auVar58._0_8_ = -(ulonglong)(dVar113 < dVar2);
          auVar93 = auVar93 | auVar58;
          auVar78._0_8_ =
               -(ulonglong)
                ((dVar102 < *(double *)(pFVar34 + lVar21 + 0x10) ||
                 *(double *)(pFVar34 + lVar21 + 0x28) < dVar102) && bVar17);
          auVar78._8_8_ = 0;
          auVar94._0_4_ = auVar93._0_4_ & uVar141;
          auVar94._4_4_ = auVar93._4_4_ & uVar142;
          auVar94._8_4_ = auVar93._8_4_ & uVar143;
          auVar94._12_4_ = auVar93._12_4_ & uVar144;
          iVar28 = movmskpd(uVar26,auVar78);
          uVar26 = movmskpd(uVar33,auVar94);
          uVar33 = iVar28 << 2 | uVar26;
          if (uVar33 == 0) {
            dVar134 = (*(double *)(pFVar34 + lVar21 + 0x28) - dVar102) * (double)local_1430._0_8_;
            dVar113 = (dVar113 - dVar2) * dVar112;
            dVar120 = (dVar120 - dVar3) * dVar121;
            auVar131._0_8_ =
                 (double)(float)(~(uint)(float)dVar45 &
                                (uint)(float)((*(double *)(pFVar34 + lVar21) - dVar2) * dVar112));
            auVar131._8_8_ =
                 (double)(float)(~(uint)(float)dVar47 &
                                (uint)(float)((*(double *)(pFVar34 + lVar21 + 8) - dVar3) * dVar121)
                                );
            auVar79._0_4_ = ~uVar29 & SUB84(dVar134,0);
            auVar79._4_4_ = ~uVar138 & (uint)((ulonglong)dVar134 >> 0x20);
            auVar79._8_4_ = ~uVar139 & SUB84((double)local_1430._8_8_ * 0.0,0);
            auVar79._12_4_ = ~uVar140 & (uint)((ulonglong)((double)local_1430._8_8_ * 0.0) >> 0x20);
            auVar125._0_8_ =
                 (double)(float)(~(uint)(float)dVar44 &
                                (uint)(float)((*(double *)(pFVar34 + lVar21 + 0x10) - dVar102) *
                                             (double)local_1430._0_8_));
            auVar125._8_8_ =
                 (double)(float)(~(uint)(float)dVar46 &
                                (uint)(float)((double)local_1430._8_8_ * 0.0));
            auVar59._0_4_ = uVar25 & uVar141;
            auVar59._4_4_ = uVar32 & uVar142;
            auVar59._8_4_ = uVar25 & uVar143;
            auVar59._12_4_ = uVar32 & uVar144;
            auVar95._0_4_ = ~uVar141 & SUB84(dVar113,0);
            auVar95._4_4_ = ~uVar142 & (uint)((ulonglong)dVar113 >> 0x20);
            auVar95._8_4_ = ~uVar143 & SUB84(dVar120,0);
            auVar95._12_4_ = ~uVar144 & (uint)((ulonglong)dVar120 >> 0x20);
            auVar110._8_4_ = SUB84(auVar125._8_8_,0);
            auVar110._0_8_ = auVar125._0_8_;
            auVar110._12_4_ = (int)((ulonglong)auVar125._8_8_ >> 0x20);
            auVar116._8_4_ = SUB84(auVar131._8_8_,0);
            auVar116._0_8_ = auVar131._0_8_;
            auVar116._12_4_ = (int)((ulonglong)auVar131._8_8_ >> 0x20);
            auVar123 = minpd(auVar116,auVar95 | auVar59);
            auVar60._0_4_ = uVar25 & uVar29;
            auVar60._4_4_ = uVar32 & uVar138;
            auVar60._8_4_ = uVar25 & uVar139;
            auVar60._12_4_ = uVar32 & uVar140;
            auVar115 = minpd(auVar110,auVar79 | auVar60);
            auVar130 = maxpd(auVar125,auVar79 | auVar60);
            auVar133 = maxpd(auVar131,auVar95 | auVar59);
            auVar61._8_8_ = auVar115._0_8_;
            auVar61._0_8_ = auVar123._8_8_;
            auVar49 = maxpd(auVar123,auVar61);
            auVar80._8_8_ = auVar123._0_8_;
            auVar80._0_8_ = auVar115._0_8_;
            auVar49 = maxpd(auVar49,auVar80);
            auVar137 = maxpd(auVar49,ZEXT816(0));
            auVar104 = blendpd(auVar133,auVar130,2);
            auVar49 = blendpd(auVar123,auVar115,2);
            auVar108 = maxpd(auVar115,auVar49);
            auVar117._8_8_ = auVar115._8_8_;
            auVar117._0_8_ = auVar123._8_8_;
            auVar49 = minpd(auVar130,auVar104);
            auVar104 = maxpd(auVar108,auVar117);
            auVar108 = maxpd(auVar104,ZEXT816(0));
            auVar62._8_8_ = auVar130._8_8_;
            auVar62._0_8_ = auVar133._8_8_;
            auVar104 = minpd(auVar49,auVar62);
            auVar63._8_8_ = auVar130._0_8_;
            auVar63._0_8_ = auVar133._8_8_;
            auVar49 = minpd(auVar133,auVar63);
            auVar126._8_8_ = auVar133._0_8_;
            auVar126._0_8_ = auVar130._0_8_;
            auVar49 = minpd(auVar49,auVar126);
            auVar11._8_4_ = uVar25;
            auVar11._0_8_ = dVar4;
            auVar11._12_4_ = uVar32;
            auVar104 = minpd(auVar104,auVar11);
            auVar12._8_4_ = uVar25;
            auVar12._0_8_ = dVar4;
            auVar12._12_4_ = uVar32;
            auVar49 = minpd(auVar49,auVar12);
            auVar96._8_8_ = -(ulonglong)(auVar104._8_8_ < auVar108._8_8_);
            auVar96._0_8_ = -(ulonglong)(auVar104._0_8_ < auVar108._0_8_);
            pTVar135 = auVar137._0_8_;
            auVar81._8_8_ = -(ulonglong)(auVar49._8_8_ < auVar137._8_8_);
            auVar81._0_8_ = -(ulonglong)(auVar49._0_8_ < (double)pTVar135);
            iVar28 = movmskpd(0,auVar96);
            uVar26 = movmskpd(uVar26,auVar81);
            uVar33 = iVar28 << 2 | uVar26;
            bVar16 = uVar33 == 0;
          }
          else {
            bVar16 = false;
            pTVar135 = local_12f0[0];
          }
          dVar112 = *(double *)(pFVar34 + lVar21 + 0x48);
          dVar121 = *(double *)(pFVar34 + lVar21 + 0x50);
          auVar97._8_4_ = SUB84(dVar121,0);
          auVar97._0_8_ = dVar112;
          auVar97._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
          auVar98._8_8_ = -(ulonglong)(auVar97._8_8_ < dVar3);
          auVar98._0_8_ = -(ulonglong)(dVar112 < dVar2);
          auVar52._8_8_ = -(ulonglong)(dVar3 < *(double *)(pFVar34 + lVar21 + 0x38));
          auVar52._0_8_ = -(ulonglong)(dVar2 < *(double *)(pFVar34 + lVar21 + 0x30));
          auVar98 = auVar98 | auVar52;
          auVar82._0_8_ =
               -(ulonglong)
                ((*(double *)(pFVar34 + lVar21 + 0x58) < dVar102 ||
                 dVar102 < *(double *)(pFVar34 + lVar21 + 0x40)) && bVar17);
          auVar82._8_8_ = 0;
          auVar99._0_4_ = auVar98._0_4_ & uVar141;
          auVar99._4_4_ = auVar98._4_4_ & uVar142;
          auVar99._8_4_ = auVar98._8_4_ & uVar143;
          auVar99._12_4_ = auVar98._12_4_ & uVar144;
          uVar33 = movmskpd(uVar33,auVar82);
          iVar28 = movmskpd(uVar26,auVar99);
          if ((uVar33 & 0x3fffffff) == 0 && iVar28 == 0) {
            dVar113 = (dVar112 - dVar2) * (double)local_1480._0_8_;
            dVar121 = (dVar121 - dVar3) * (double)local_1480._8_8_;
            auVar132._0_8_ =
                 (double)(float)(~(uint)(float)dVar45 &
                                (uint)(float)((*(double *)(pFVar34 + lVar21 + 0x30) - dVar2) *
                                             (double)local_1480._0_8_));
            auVar132._8_8_ =
                 (double)(float)(~(uint)(float)dVar47 &
                                (uint)(float)((*(double *)(pFVar34 + lVar21 + 0x38) - dVar3) *
                                             (double)local_1480._8_8_));
            dVar112 = (*(double *)(pFVar34 + lVar21 + 0x58) - dVar102) * (double)local_1430._0_8_;
            auVar127._0_8_ =
                 (double)(float)(~(uint)(float)dVar44 &
                                (uint)(float)((*(double *)(pFVar34 + lVar21 + 0x40) - dVar102) *
                                             (double)local_1430._0_8_));
            auVar127._8_8_ =
                 (double)(float)(~(uint)(float)dVar46 &
                                (uint)(float)((double)local_1430._8_8_ * 0.0));
            auVar83._0_4_ = ~uVar29 & SUB84(dVar112,0);
            auVar83._4_4_ = ~uVar138 & (uint)((ulonglong)dVar112 >> 0x20);
            auVar83._8_4_ = ~uVar139 & SUB84((double)local_1430._8_8_ * 0.0,0);
            auVar83._12_4_ = ~uVar140 & (uint)((ulonglong)((double)local_1430._8_8_ * 0.0) >> 0x20);
            auVar100._0_4_ = ~uVar141 & SUB84(dVar113,0);
            auVar100._4_4_ = ~uVar142 & (uint)((ulonglong)dVar113 >> 0x20);
            auVar100._8_4_ = ~uVar143 & SUB84(dVar121,0);
            auVar100._12_4_ = ~uVar144 & (uint)((ulonglong)dVar121 >> 0x20);
            auVar111._8_4_ = SUB84(auVar127._8_8_,0);
            auVar111._0_8_ = auVar127._0_8_;
            auVar111._12_4_ = (int)((ulonglong)auVar127._8_8_ >> 0x20);
            auVar118._8_4_ = SUB84(auVar132._8_8_,0);
            auVar118._0_8_ = auVar132._0_8_;
            auVar118._12_4_ = (int)((ulonglong)auVar132._8_8_ >> 0x20);
            auVar64._0_4_ = uVar25 & uVar141;
            auVar64._4_4_ = uVar32 & uVar142;
            auVar64._8_4_ = uVar25 & uVar143;
            auVar64._12_4_ = uVar32 & uVar144;
            auVar123 = minpd(auVar118,auVar100 | auVar64);
            auVar65._0_4_ = uVar25 & uVar29;
            auVar65._4_4_ = uVar32 & uVar138;
            auVar65._8_4_ = uVar25 & uVar139;
            auVar65._12_4_ = uVar32 & uVar140;
            auVar115 = minpd(auVar111,auVar83 | auVar65);
            auVar130 = maxpd(auVar127,auVar83 | auVar65);
            auVar133 = maxpd(auVar132,auVar100 | auVar64);
            auVar66._8_8_ = auVar115._0_8_;
            auVar66._0_8_ = auVar123._8_8_;
            auVar49 = maxpd(auVar123,auVar66);
            auVar84._8_8_ = auVar123._0_8_;
            auVar84._0_8_ = auVar115._0_8_;
            auVar49 = maxpd(auVar49,auVar84);
            auVar137 = maxpd(auVar49,ZEXT816(0));
            auVar104 = blendpd(auVar133,auVar130,2);
            auVar49 = blendpd(auVar123,auVar115,2);
            auVar108 = maxpd(auVar115,auVar49);
            auVar119._8_8_ = auVar115._8_8_;
            auVar119._0_8_ = auVar123._8_8_;
            auVar49 = minpd(auVar130,auVar104);
            auVar104 = maxpd(auVar108,auVar119);
            auVar108 = maxpd(auVar104,ZEXT816(0));
            auVar67._8_8_ = auVar130._8_8_;
            auVar67._0_8_ = auVar133._8_8_;
            auVar104 = minpd(auVar49,auVar67);
            auVar52._8_8_ = auVar130._0_8_;
            auVar52._0_8_ = auVar133._8_8_;
            auVar49 = minpd(auVar133,auVar52);
            auVar128._8_8_ = auVar133._0_8_;
            auVar128._0_8_ = auVar130._0_8_;
            auVar49 = minpd(auVar49,auVar128);
            auVar9._8_4_ = uVar25;
            auVar9._0_8_ = dVar4;
            auVar9._12_4_ = uVar32;
            auVar104 = minpd(auVar104,auVar9);
            auVar10._8_4_ = uVar25;
            auVar10._0_8_ = dVar4;
            auVar10._12_4_ = uVar32;
            auVar49 = minpd(auVar49,auVar10);
            auVar101._8_8_ = -(ulonglong)(auVar104._8_8_ < auVar108._8_8_);
            auVar101._0_8_ = -(ulonglong)(auVar104._0_8_ < auVar108._0_8_);
            pTVar136 = auVar137._0_8_;
            auVar85._8_8_ = -(ulonglong)(auVar49._8_8_ < auVar137._8_8_);
            auVar85._0_8_ = -(ulonglong)(auVar49._0_8_ < (double)pTVar136);
            iVar28 = movmskpd(iVar28,auVar85);
            uVar29 = movmskpd(0,auVar101);
            bVar43 = (uVar29 & 0x3fffffff) == 0 && iVar28 == 0;
          }
          else {
            bVar43 = false;
            pTVar136 = pTVar135;
          }
          iVar28 = local_118;
          local_1460 = pTVar136;
          local_1458 = pTVar135;
          if (bVar16) {
            if (bVar43) {
              if ((double)pTVar136 <= (double)pTVar135) {
                local_1400 = CONCAT44(local_1400._4_4_,*(undefined4 *)(pFVar34 + lVar21 + 0x60));
                pTStack_13f8 = pTVar135;
                if (local_118 == local_114) {
                  local_118 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                        (0x810,&local_1110,&local_114);
                }
                local_1410._4_4_ = (undefined4)((ulonglong)local_1410 >> 0x20);
                FVar23 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                          )&local_1110;
                if (local_1110.SecondaryData !=
                    (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                     )0x0) {
                  FVar23 = local_1110.SecondaryData;
                }
                plVar1 = (longlong *)((longlong)FVar23 + (longlong)local_118 * 0x10);
                local_118 = local_118 + 1;
                *plVar1 = local_1400;
                plVar1[1] = (longlong)pTStack_13f8;
                local_1410._0_4_ = *(undefined4 *)(pFVar34 + lVar21 + 100);
                pTStack_1408 = pTVar136;
                if (local_118 == local_114) {
                  local_118 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                        (0x810,&local_1110,&local_114);
                }
                auVar52._8_8_ = pTStack_1408;
                auVar52._0_8_ = local_1410;
                lVar21 = (longlong)local_118;
                local_118 = local_118 + 1;
                FVar23 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                          )&local_1110;
                if (local_1110.SecondaryData !=
                    (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                     )0x0) {
                  FVar23 = local_1110.SecondaryData;
                }
                *(undefined1 (*) [16])((longlong)FVar23 + lVar21 * 0x10) = auVar52;
              }
              else {
                local_13e0 = (TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *)
                             CONCAT44(local_13e0._4_4_,*(undefined4 *)(pFVar34 + lVar21 + 100));
                pTStack_13d8 = pTVar136;
                if (local_118 == local_114) {
                  local_118 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                        (0x810,&local_1110,&local_114);
                }
                local_13f0._4_4_ = (undefined4)((ulonglong)local_13f0 >> 0x20);
                FVar23 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                          )&local_1110;
                if (local_1110.SecondaryData !=
                    (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                     )0x0) {
                  FVar23 = local_1110.SecondaryData;
                }
                plVar1 = (longlong *)((longlong)FVar23 + (longlong)local_118 * 0x10);
                local_118 = local_118 + 1;
                *plVar1 = (longlong)local_13e0;
                plVar1[1] = (longlong)pTStack_13d8;
                local_13f0._0_4_ = *(undefined4 *)(pFVar34 + lVar21 + 0x60);
                pTStack_13e8 = pTVar135;
                if (local_118 == local_114) {
                  local_118 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                        (0x810,&local_1110,&local_114);
                }
                auVar52._8_8_ = pTStack_13e8;
                auVar52._0_8_ = local_13f0;
                lVar21 = (longlong)local_118;
                local_118 = local_118 + 1;
                FVar23 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                          )&local_1110;
                if (local_1110.SecondaryData !=
                    (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                     )0x0) {
                  FVar23 = local_1110.SecondaryData;
                }
                *(undefined1 (*) [16])((longlong)FVar23 + lVar21 * 0x10) = auVar52;
              }
            }
            else {
              local_1420 = *(uint *)(pFVar34 + lVar21 + 0x60);
              pTStack_1418 = pTVar135;
              if (local_118 == local_114) {
                iVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                   (0x810,&local_1110,&local_114);
              }
              auVar52._4_4_ = (float)iStack_141c;
              auVar52._0_4_ = (float)local_1420;
              auVar52._8_8_ = pTStack_1418;
LAB_148249aab:
              local_118 = iVar28 + 1;
              FVar23 = (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                        )&local_1110;
              if (local_1110.SecondaryData !=
                  (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
                   )0x0) {
                FVar23 = local_1110.SecondaryData;
              }
              *(undefined1 (*) [16])((longlong)FVar23 + (longlong)iVar28 * 0x10) = auVar52;
            }
          }
          else if (bVar43) {
            local_13d0 = *(uint *)(pFVar34 + lVar21 + 100);
            pTStack_13c8 = pTVar136;
            if (local_118 == local_114) {
              iVar28 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<255,32,TSizedDefaultAllocator<32>_>::ForElementType<_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>_::__l2::FNodeQueueEntry>_>
                                 (0x810,&local_1110,&local_114);
            }
            auVar52._4_4_ = (float)uStack_13cc;
            auVar52._0_4_ = (float)local_13d0;
            auVar52._8_8_ = pTStack_13c8;
            goto LAB_148249aab;
          }
          dVar112 = (double)local_1480._0_8_;
          dVar121 = (double)local_1480._8_8_;
        }
        else {
          uVar26 = *(uint *)(pFVar34 + lVar21 + 0x60);
          lVar21 = (longlong)(int)uVar26;
          pcVar31 = (char *)(ulonglong)(~uVar26 >> 0x1f);
          uVar33 = 0;
          if ((int)uVar26 < *(int *)&(this->Leaves).field_0x8) {
            uVar33 = ~uVar26 >> 0x1f;
          }
          if (uVar33 == 0) {
            pcVar31 = "(Index >= 0) & (Index < ArrayNum)";
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            auVar52 = extraout_XMM0_02;
            if (bVar16) {
              pcVar6 = (code *)swi(3);
              uVar18 = (*pcVar6)();
              return (bool)uVar18;
            }
          }
          lVar30 = *(longlong *)&this->Leaves;
          iVar28 = *(int *)(lVar30 + 0x38 + lVar21 * 0x48);
          uVar20 = (ulonglong)iVar28;
          puVar39 = *(undefined8 **)(lVar30 + 0x30 + lVar21 * 0x48);
          puVar41 = puVar39 + uVar20 * 8;
          local_1498 = (TVector<double,3> *)CONCAT44(local_1498._4_4_,iVar28);
          pdVar36 = (double *)(puVar39 + 4);
          while( true ) {
            uVar27 = SUB84(pcVar31,0);
            iVar28 = (int)uVar20;
            if (*(int *)(lVar30 + 0x38 + lVar21 * 0x48) != iVar28) {
              this_01 = local_149d;
              local_149d[0] = 0;
              bVar16 = `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
                       ::operator!='::__l2::<lambda_1>::operator()(this_01);
              uVar27 = SUB84(this_01,0);
              iVar28 = (int)CONCAT71(extraout_var,bVar16);
              auVar52 = extraout_XMM0_03;
            }
            param_2 = local_1468;
            if (puVar39 == puVar41) break;
            dVar113 = *(double *)*(undefined1 (*) [12])(pdVar36 + 1);
            auVar88._12_4_ = (int)((ulonglong)pdVar36[2] >> 0x20);
            auVar88._0_12_ = *(undefined1 (*) [12])(pdVar36 + 1);
            auVar89._8_8_ = -(ulonglong)(auVar88._8_8_ < dVar3);
            auVar89._0_8_ = -(ulonglong)(dVar113 < dVar2);
            auVar52._8_8_ = -(ulonglong)(dVar3 < pdVar36[-1]);
            auVar52._0_8_ = -(ulonglong)(dVar2 < pdVar36[-2]);
            auVar89 = auVar89 | auVar52;
            auVar74._0_8_ = -(ulonglong)((dVar102 < *pdVar36 || pdVar36[3] < dVar102) && bVar17);
            auVar74._8_8_ = 0;
            auVar90._0_4_ = auVar89._0_4_ & uVar141;
            auVar90._4_4_ = auVar89._4_4_ & uVar142;
            auVar90._8_4_ = auVar89._8_4_ & uVar143;
            auVar90._12_4_ = auVar89._12_4_ & uVar144;
            iVar19 = movmskpd(uVar27,auVar74);
            uVar26 = movmskpd(iVar28,auVar90);
            uVar33 = iVar19 << 2 | uVar26;
            pcVar31 = (char *)(ulonglong)uVar33;
            if (uVar33 == 0) {
              dVar113 = (dVar113 - dVar2) * dVar112;
              dVar120 = (pdVar36[2] - dVar3) * dVar121;
              auVar129._0_8_ =
                   (double)(float)(~(uint)(float)dVar45 &
                                  (uint)(float)((pdVar36[-2] - dVar2) * dVar112));
              auVar129._8_8_ =
                   (double)(float)(~(uint)(float)dVar47 &
                                  (uint)(float)((pdVar36[-1] - dVar3) * dVar121));
              dVar134 = (pdVar36[3] - dVar102) * (double)local_1430._0_8_;
              auVar122._0_8_ =
                   (double)(float)(~(uint)(float)dVar44 &
                                  (uint)(float)((*pdVar36 - dVar102) * (double)local_1430._0_8_));
              auVar122._8_8_ =
                   (double)(float)(~(uint)(float)dVar46 &
                                  (uint)(float)((double)local_1430._8_8_ * 0.0));
              auVar75._0_4_ = ~uVar29 & SUB84(dVar134,0);
              auVar75._4_4_ = ~uVar138 & (uint)((ulonglong)dVar134 >> 0x20);
              auVar75._8_4_ = ~uVar139 & SUB84((double)local_1430._8_8_ * 0.0,0);
              auVar75._12_4_ =
                   ~uVar140 & (uint)((ulonglong)((double)local_1430._8_8_ * 0.0) >> 0x20);
              auVar91._0_4_ = ~uVar141 & SUB84(dVar113,0);
              auVar91._4_4_ = ~uVar142 & (uint)((ulonglong)dVar113 >> 0x20);
              auVar91._8_4_ = ~uVar143 & SUB84(dVar120,0);
              auVar91._12_4_ = ~uVar144 & (uint)((ulonglong)dVar120 >> 0x20);
              auVar107._8_4_ = SUB84(auVar122._8_8_,0);
              auVar107._0_8_ = auVar122._0_8_;
              auVar107._12_4_ = (int)((ulonglong)auVar122._8_8_ >> 0x20);
              auVar114._8_4_ = SUB84(auVar129._8_8_,0);
              auVar114._0_8_ = auVar129._0_8_;
              auVar114._12_4_ = (int)((ulonglong)auVar129._8_8_ >> 0x20);
              auVar53._0_4_ = uVar25 & uVar141;
              auVar53._4_4_ = uVar32 & uVar142;
              auVar53._8_4_ = uVar25 & uVar143;
              auVar53._12_4_ = uVar32 & uVar144;
              auVar130 = maxpd(auVar129,auVar91 | auVar53);
              auVar115 = minpd(auVar114,auVar91 | auVar53);
              auVar54._0_4_ = uVar25 & uVar29;
              auVar54._4_4_ = uVar32 & uVar138;
              auVar54._8_4_ = uVar25 & uVar139;
              auVar54._12_4_ = uVar32 & uVar140;
              auVar108 = minpd(auVar107,auVar75 | auVar54);
              auVar123 = maxpd(auVar122,auVar75 | auVar54);
              auVar49 = blendpd(auVar115,auVar108,2);
              auVar49 = maxpd(auVar108,auVar49);
              auVar76._8_8_ = auVar108._8_8_;
              auVar76._0_8_ = auVar115._8_8_;
              auVar49 = maxpd(auVar49,auVar76);
              auVar104 = maxpd(auVar49,ZEXT816(0));
              auVar49 = blendpd(auVar130,auVar123,2);
              auVar49 = minpd(auVar123,auVar49);
              auVar55._8_8_ = auVar123._8_8_;
              auVar55._0_8_ = auVar130._8_8_;
              auVar49 = minpd(auVar49,auVar55);
              auVar77._8_8_ = auVar123._0_8_;
              auVar77._0_8_ = auVar130._8_8_;
              auVar56._8_8_ = auVar108._0_8_;
              auVar56._0_8_ = auVar115._8_8_;
              auVar7._8_4_ = uVar25;
              auVar7._0_8_ = dVar4;
              auVar7._12_4_ = uVar32;
              auVar49 = minpd(auVar49,auVar7);
              auVar109._8_8_ = auVar115._0_8_;
              auVar109._0_8_ = auVar108._0_8_;
              auVar92._8_8_ = -(ulonglong)(auVar49._8_8_ < auVar104._8_8_);
              auVar92._0_8_ = -(ulonglong)(auVar49._0_8_ < auVar104._0_8_);
              iVar28 = movmskpd(0,auVar92);
              auVar49 = maxpd(auVar115,auVar56);
              auVar124._8_8_ = auVar130._0_8_;
              auVar124._0_8_ = auVar123._0_8_;
              auVar49 = maxpd(auVar49,auVar109);
              auVar104 = maxpd(auVar49,ZEXT816(0));
              auVar49 = minpd(auVar130,auVar77);
              auVar49 = minpd(auVar49,auVar124);
              auVar8._8_4_ = uVar25;
              auVar8._0_8_ = dVar4;
              auVar8._12_4_ = uVar32;
              auVar49 = minpd(auVar49,auVar8);
              auVar52._8_8_ = -(ulonglong)(auVar49._8_8_ < auVar104._8_8_);
              auVar52._0_8_ = -(ulonglong)(auVar49._0_8_ < auVar104._0_8_);
              uVar26 = movmskpd(uVar26,auVar52);
              uVar26 = iVar28 << 2 | uVar26;
              pcVar31 = (char *)(ulonglong)uVar26;
              if (uVar26 == 0) {
                local_1230 = *puVar39;
                uStack_1228 = puVar39[1];
                local_1220 = 0;
                pcVar31 = (char *)param_5->Visitor;
                local_1200 = ZEXT816(0);
                local_1218 = ZEXT816(0);
                local_1208 = 0;
                local_11f0 = 0;
                local_1118 = 0;
                cVar15 = (**(code **)((longlong)
                                      *(ISpatialVisitor<FExternalSpatialAccelerationPayload,double>
                                        *)pcVar31 + 0x30))(pcVar31,&local_1230);
                auVar52._8_8_ = extraout_XMM0_Qb;
                auVar52._0_8_ = extraout_XMM0_Qa;
                if (cVar15 == '\0') {
                  lVar24 = (**(code **)((longlong)*param_5->Visitor + 0x20))();
                  if (lVar24 == 0) {
                    (**(code **)((longlong)*param_5->Visitor + 0x28))();
                  }
                  local_11e0 = *puVar39;
                  uStack_11d8 = puVar39[1];
                  pcVar31 = (char *)param_5->Visitor;
                  local_11b8 = *pdVar36;
                  local_11c8 = pdVar36[-2];
                  dStack_11c0 = pdVar36[-1];
                  local_11d0 = 1;
                  local_11a0 = pdVar36[3];
                  local_11b0 = pdVar36[1];
                  dStack_11a8 = pdVar36[2];
                  cVar15 = (**(code **)((longlong)
                                        *(ISpatialVisitor<FExternalSpatialAccelerationPayload,double>
                                          *)pcVar31 + 0x10))(pcVar31,&local_11e0,local_1468);
                  auVar52._8_8_ = extraout_XMM0_Qb_00;
                  auVar52._0_8_ = extraout_XMM0_Qa_00;
                  if (cVar15 == '\0') {
                    bVar16 = false;
                    goto LAB_148249aeb;
                  }
                }
              }
            }
            uVar20 = (ulonglong)local_1498 & 0xffffffff;
            puVar39 = puVar39 + 8;
            pdVar36 = pdVar36 + 8;
          }
        }
      }
      bVar16 = local_118 == 0;
      iVar28 = local_118;
    } while (!bVar16);
  }
  bVar16 = true;
LAB_148249aeb:
  if (local_1110.SecondaryData !=
      (ForElementType<_private:_bool___cdecl_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>(Chaos::TVector<double,3>_const_&,Chaos::FQueryFastData_&,Chaos::TVector<double,3>_const_&,Chaos::TAABB<double,3>_const_&,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_&,Chaos::TVector<double,3>_const_&,Chaos::TVector<double,3>_const_&,bool_const_*_const)const_::_2_::FNodeQueueEntry>
       )0x0) {
    FMemory::Free((void *)local_1110.SecondaryData);
  }
  return bVar16;
}

// operator= @ 148253960

TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
* __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::operator=(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
            *this,TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  *param_1)

{
  int *piVar1;
  TLeafContainer<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>_> *pTVar2;
  undefined1 *puVar3;
  TUniquePtr<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>,TDefaultDelete<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>_>_>
  *pTVar4;
  int iVar5;
  TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *pTVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *pTVar11;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *pTVar12;
  longlong local_28 [2];
  
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  if (((param_1->WorkStack).ArrayNum != 0) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089986242>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0xf3e,"Rhs.WorkStack.Num() == 0"), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)(*pcVar7)();
    return pTVar11;
  }
  pTVar11 = (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
             *)0x0;
  piVar1 = &(this->WorkStack).ArrayMax;
  (this->WorkStack).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->WorkStack).AllocatorInstance,0,piVar1);
  }
  DestructItems<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::FWorkSnapshot,int>
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
  TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Nodes,&param_1->Nodes);
  pTVar2 = &this->Leaves;
  if (pTVar2 != &param_1->Leaves) {
    DestructItems<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,int>
              (*(TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> **)pTVar2,
               *(int *)&(this->Leaves).field_0x8);
    iVar5 = *(int *)&(param_1->Leaves).field_0x8;
    puVar3 = &(this->Leaves).field_0xc;
    pTVar6 = *(TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> **)&param_1->Leaves;
    *(int *)&(this->Leaves).field_0x8 = iVar5;
    if ((iVar5 == 0) && (*(int *)puVar3 == 0)) {
      *(undefined4 *)puVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar5,*(int *)puVar3,(ForAnyElementType *)pTVar2,iVar5,(int *)puVar3);
      ConstructItems<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,int>
                (*(void **)pTVar2,pTVar6,iVar5);
    }
  }
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->DirtyElements,&param_1->DirtyElements);
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
  iVar5 = (param_1->TreeStats).StatNumElementsTooLargeForGrid;
  iVar8 = (param_1->TreeStats).StatNumDirtyElements;
  iVar9 = (param_1->TreeStats).StatNumGridOverflowElements;
  (this->TreeStats).StatNumNonEmptyCellsInGrid = (param_1->TreeStats).StatNumNonEmptyCellsInGrid;
  (this->TreeStats).StatNumElementsTooLargeForGrid = iVar5;
  (this->TreeStats).StatNumDirtyElements = iVar8;
  (this->TreeStats).StatNumGridOverflowElements = iVar9;
  iVar5 = (param_1->TreeExpensiveStats).StatMaxDirtyElements;
  iVar8 = (param_1->TreeExpensiveStats).StatMaxLeafSize;
  iVar9 = (param_1->TreeExpensiveStats).StatMaxTreeDepth;
  (this->TreeExpensiveStats).StatMaxNumLeaves = (param_1->TreeExpensiveStats).StatMaxNumLeaves;
  (this->TreeExpensiveStats).StatMaxDirtyElements = iVar5;
  (this->TreeExpensiveStats).StatMaxLeafSize = iVar8;
  (this->TreeExpensiveStats).StatMaxTreeDepth = iVar9;
  (this->TreeExpensiveStats).StatGlobalPayloadsSize =
       (param_1->TreeExpensiveStats).StatGlobalPayloadsSize;
  this->DirtyElementGridCellSize = param_1->DirtyElementGridCellSize;
  this->DirtyElementGridCellSizeInv = param_1->DirtyElementGridCellSizeInv;
  this->DirtyElementMaxGridCellQueryCount = param_1->DirtyElementMaxGridCellQueryCount;
  this->DirtyElementMaxPhysicalSizeInCells = param_1->DirtyElementMaxPhysicalSizeInCells;
  this->DirtyElementMaxCellCapacity = param_1->DirtyElementMaxCellCapacity;
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->GlobalPayloads,&param_1->GlobalPayloads);
  TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::operator=
            (&this->PayloadToInfo,&param_1->PayloadToInfo);
  pTVar4 = &this->DirtyElementTree;
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
      (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
       *)0x0) {
    pTVar11 = pTVar4->Ptr;
    pTVar4->Ptr = (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                   *)0x0;
    if (pTVar11 ==
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
         *)0x0) {
      return this;
    }
    ~TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
              (pTVar11);
    ::operator_delete(pTVar11,0x1f8);
    return this;
  }
  if (pTVar4->Ptr ==
      (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
       *)0x0) {
    pTVar12 = ::operator_new(0x1f8);
    if (pTVar12 !=
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
         *)0x0) {
      pTVar11 = TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                          (pTVar12);
    }
    if (pTVar4 == (TUniquePtr<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>,TDefaultDelete<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>_>_>
                   *)local_28) {
      if (pTVar11 ==
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)0x0) goto LAB_148253caa;
      ~TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                (pTVar11);
    }
    else {
      pTVar12 = pTVar4->Ptr;
      pTVar4->Ptr = pTVar11;
      if (pTVar12 ==
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)0x0) goto LAB_148253caa;
      ~TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                (pTVar12);
      pTVar11 = pTVar12;
    }
    ::operator_delete(pTVar11,0x1f8);
  }
LAB_148253caa:
  operator=(pTVar4->Ptr,(param_1->DirtyElementTree).Ptr);
  return this;
}

// operator() @ 148255b30

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::ProgressCopyTimeSliced'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  double dVar1;
  bool bVar2;
  LARGE_INTEGER local_res20;
  
  bVar2 = true;
  if (param_1 != -1) {
    if (FAABBTimeSliceCVars::bUseTimeSliceMillisecondBudget) {
      *(int *)(*(longlong *)this + 0x16c) = *(int *)(*(longlong *)this + 0x16c) + 1;
      if (FAABBTimeSliceCVars::MinDataChunkToProcessBetweenTimeChecks <
          *(int *)(*(longlong *)this + 0x16c)) {
        *(undefined4 *)(*(longlong *)this + 0x16c) = 0;
        return true;
      }
      QueryPerformanceCounter(&local_res20);
      dVar1 = *(double *)(*(longlong *)this + 0x160);
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

// operator() @ 148256490

void __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::SplitNode'::__l4::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  longlong *plVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *pTVar10;
  uint uVar11;
  longlong lVar12;
  FExternalSpatialAccelerationPayload *pFVar13;
  FExternalSpatialAccelerationPayload *pFVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  FAABBTreePayloadInfo local_78;
  TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> local_60;
  
  uVar3 = *(uint *)((longlong)this + 0x18);
  plVar4 = *(longlong **)((longlong)this + 0x10);
  uVar11 = 0;
  if ((int)uVar3 < (int)plVar4[1]) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar15 = (longlong)(int)uVar3 * 0xf8 + *plVar4;
  iVar9 = *(int *)(lVar15 + 0x40);
  pFVar13 = *(FExternalSpatialAccelerationPayload **)(lVar15 + 0x38);
  pFVar14 = pFVar13 + (longlong)iVar9 * 4;
  while( true ) {
    if (*(int *)(lVar15 + 0x40) != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar14) break;
    local_78.GlobalPayloadIdx = -1;
    local_78.DirtyPayloadIdx = -1;
    local_78.DirtyGridOverflowIdx = -1;
    local_78.NodeIdx = -1;
    local_78.LeafIdx = *(int *)(*(longlong *)((longlong)this + 0x20) + 8);
    Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Add
              (*(TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> **)
                ((longlong)this + 8),pFVar13,&local_78);
    pFVar13 = pFVar13 + 4;
  }
  uVar3 = *(uint *)this;
  plVar4 = *(longlong **)((longlong)this + 0x28);
  uVar11 = 0;
  if ((int)uVar3 < (int)plVar4[1]) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pbVar2 = (byte *)((longlong)(int)uVar3 * 0x70 + 0x6c + *plVar4);
  *pbVar2 = *pbVar2 | 1;
  uVar3 = *(uint *)((longlong)this + 0x18);
  plVar4 = *(longlong **)((longlong)this + 0x10);
  pFVar5 = *(ForAnyElementType **)((longlong)this + 0x20);
  uVar11 = 0;
  if ((int)uVar3 < (int)plVar4[1]) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar10 = Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::
            TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>
                      (&local_60,
                       (TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                        *)(*plVar4 + (longlong)(int)uVar3 * 0xf8 + 0x38));
  if (((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)pFVar5->Data <= pTVar10)
     && (pTVar10 < (TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)pFVar5->Data
                   + *(int *)((longlong)&pFVar5[1].Data + 4))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = *(int *)&pFVar5[1].Data;
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar9 + 1;
  lVar15 = pTVar10->_padding_;
  lVar12 = (longlong)iVar9;
  pFVar6 = pFVar5->Data;
  *(longlong *)(pFVar6 + lVar12 * 0x48) = pTVar10->_padding_;
  *(longlong *)(pFVar6 + lVar12 * 0x48 + 8) = lVar15;
  *(longlong *)(pFVar6 + lVar12 * 0x48 + 0x10) = pTVar10->_padding_;
  lVar15 = pTVar10->_padding_;
  *(longlong *)(pFVar6 + lVar12 * 0x48 + 0x18) = pTVar10->_padding_;
  *(longlong *)(pFVar6 + lVar12 * 0x48 + 0x18 + 8) = lVar15;
  *(longlong *)(pFVar6 + lVar12 * 0x48 + 0x28) = pTVar10->_padding_;
  *(undefined8 *)(pFVar6 + lVar12 * 0x48 + 0x30) = 0;
  *(FScriptContainerElement **)(pFVar6 + lVar12 * 0x48 + 0x30) =
       (pTVar10->Elems).AllocatorInstance.Data;
  (pTVar10->Elems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar6 + lVar12 * 0x48 + 0x38) = (pTVar10->Elems).ArrayNum;
  *(int *)(pFVar6 + lVar12 * 0x48 + 0x3c) = (pTVar10->Elems).ArrayMax;
  (pTVar10->Elems).ArrayNum = 0;
  (pTVar10->Elems).ArrayMax = 0;
  pFVar6[lVar12 * 0x48 + 0x40] = (FScriptContainerElement)pTVar10->bDirtyLeaf;
  uVar3 = *(uint *)this;
  plVar4 = *(longlong **)((longlong)this + 0x28);
  uVar11 = 0;
  if ((int)uVar3 < (int)plVar4[1]) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(int *)((longlong)(int)uVar3 * 0x70 + 0x60 + *plVar4) = iVar9;
  if (local_60.Elems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Elems.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1482567b0

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::DeleteDirtyParticleEverywhere'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  uint *puVar15;
  
  lVar3 = *(longlong *)this;
  iVar1 = **(int **)((longlong)this + 8);
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar12 = *(longlong *)(lVar3 + 0x90);
    if (*(longlong *)(lVar3 + 0x90) == 0) {
      lVar12 = lVar3 + 0x88;
    }
    iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        lVar12 = *(longlong *)(lVar3 + 0x50) + (longlong)iVar7 * 0x14;
        if (*(int *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar7 * 0x14) == param_1) {
          puVar15 = (uint *)(lVar12 + 4);
          if (lVar12 == 0) {
            puVar15 = (uint *)0x0;
          }
          if ((puVar15 == (uint *)0x0) || ((int)puVar15[1] < 1)) break;
          uVar13 = *puVar15;
          uVar11 = (puVar15[1] - 1) + uVar13;
          pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0xa0);
          uVar8 = (int)(uVar13 + uVar11) / 2;
          uVar10 = (ulonglong)(int)uVar8;
          uVar9 = 0;
          if ((int)uVar8 < *(int *)(lVar3 + 0xa8)) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar7 = *(int *)((pTVar14->AllocatorInstance).Data + uVar10 * 4);
          if (iVar7 != iVar1) {
            if (uVar13 == uVar11) break;
            if (iVar7 < iVar1) {
              uVar13 = uVar8 + 1;
              uVar8 = uVar11;
            }
            else {
              if (uVar13 == uVar8) break;
              uVar8 = uVar8 - 1;
            }
            uVar13 = Chaos::FindInSortedArray(pTVar14,iVar1,uVar13,uVar8);
            uVar10 = (ulonglong)uVar13;
          }
          if ((int)uVar10 != -1) {
            lVar12 = (longlong)(int)uVar10;
            while( true ) {
              if ((int)uVar11 <= lVar12) {
                puVar15[1] = puVar15[1] - 1;
                return true;
              }
              uVar13 = (uint)uVar10;
              uVar8 = uVar13 + 1;
              uVar9 = 0;
              if ((int)uVar8 < *(int *)(lVar3 + 0xa8)) {
                uVar9 = ~uVar8 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) break;
              uVar2 = *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar12 * 4 + 4);
              uVar9 = 0;
              if ((int)uVar13 < *(int *)(lVar3 + 0xa8)) {
                uVar9 = ~uVar13 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              uVar10 = (ulonglong)uVar8;
              *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar12 * 4) = uVar2;
              lVar12 = lVar12 + 1;
            }
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          break;
        }
        iVar7 = *(int *)(lVar12 + 0xc);
      } while (iVar7 != -1);
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9181246422089989019>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                     ,0x465,"DeleteDirtyParticleIndexFromGridCell(Hash, DeleteDirtyParticleIdx)");
  if (!bVar5) {
    return true;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// operator() @ 148257420

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'
::__l31::<lambda_1>::operator()
          (void *this,TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double local_108 [6];
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88 [16];
  
  dVar1 = *(double *)&(param_1->Bounds).MMin.field_0x10;
  dVar2 = *(double *)&(param_1->Bounds).MMax.field_0x10;
  dVar6 = *(double *)&(param_1->Bounds).MMin;
  dVar7 = *(double *)&(param_1->Bounds).MMin.field_0x8;
  dVar8 = *(double *)&(param_1->Bounds).MMax;
  dVar9 = *(double *)&(param_1->Bounds).MMax.field_0x8;
  local_c8 = dVar1;
  local_b0 = dVar2;
  bVar10 = Chaos::
           PrePreFilterHelper<FExternalSpatialAccelerationPayload,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                     (&param_1->Payload,
                      *(TSpatialVisitor<FExternalSpatialAccelerationPayload,double> **)this);
  if (!bVar10) {
    pdVar3 = *(double **)((longlong)this + 8);
    uVar18 = 0;
    uVar19 = 0;
    pdVar4 = *(double **)((longlong)this + 0x38);
    local_88[0] = *pdVar4;
    local_88[1] = pdVar4[1];
    local_88[2] = pdVar4[2];
    pdVar4 = *(double **)((longlong)this + 0x28);
    lVar12 = 0;
    local_108[3] = (dVar6 - *pdVar4) - *pdVar3;
    local_108[0] = (*pdVar4 + dVar8) - *pdVar3;
    local_108[4] = (dVar7 - pdVar4[1]) - pdVar3[1];
    local_108[5] = (local_c8 - pdVar4[2]) - pdVar3[2];
    local_108[2] = (pdVar4[2] + local_b0) - pdVar3[2];
    local_108[1] = (pdVar4[1] + dVar9) - pdVar3[1];
    uVar15 = SUB84(__real_7fefffffffffffff,0);
    uVar17 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    do {
      if (*(char *)(**(longlong **)((longlong)this + 0x40) + lVar12) == '\0') {
        dVar13 = local_108[lVar12 + 3] * local_88[lVar12];
        dVar16 = local_88[lVar12] * local_108[lVar12];
        dVar14 = dVar13;
        if (dVar16 < dVar13) {
          dVar14 = dVar16;
          dVar16 = dVar13;
        }
      }
      else {
        if (0.0 < local_108[lVar12 + 3]) {
          return true;
        }
        if (local_108[lVar12] <= 0.0 && local_108[lVar12] != 0.0) {
          return true;
        }
        dVar14 = 0.0;
        dVar16 = __real_7fefffffffffffff;
      }
      if (dVar14 <= (double)CONCAT44(uVar19,uVar18)) {
        dVar14 = (double)CONCAT44(uVar19,uVar18);
      }
      if ((double)CONCAT44(uVar17,uVar15) <= dVar16) {
        dVar16 = (double)CONCAT44(uVar17,uVar15);
      }
      uVar18 = SUB84(dVar14,0);
      uVar19 = (undefined4)((ulonglong)dVar14 >> 0x20);
      uVar15 = SUB84(dVar16,0);
      uVar17 = (undefined4)((ulonglong)dVar16 >> 0x20);
      if (dVar16 < dVar14) {
        return true;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < 3);
    pdVar3 = (double *)(*(longlong *)((longlong)this + 0x10) + 0x20);
    if ((dVar14 < *pdVar3 || dVar14 == *pdVar3) && (0.0 <= dVar16)) {
      puVar5 = *(undefined8 **)this;
      local_c8 = (double)CONCAT71(local_c8._1_7_,1);
      **(double **)((longlong)this + 0x18) = dVar14;
      local_d8 = (param_1->Payload).Component.ObjectKey.ObjectIndex;
      iStack_d4 = (param_1->Payload).Component.ObjectKey.ObjectSerialNumber;
      iStack_d0 = (param_1->Payload).BoneId;
      iStack_cc = (param_1->Payload).CachedUniqueIdx.Idx;
      local_c0 = dVar6;
      dStack_b8 = dVar7;
      local_b0 = dVar1;
      local_a8 = dVar8;
      dStack_a0 = dVar9;
      local_98 = dVar2;
      cVar11 = (**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_d8);
      return cVar11 != '\0';
    }
  }
  return true;
}

// operator() @ 148257660

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'
::__l31::<lambda_1>::operator()
          (void *this,TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double local_f8 [6];
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78 [14];
  
  dVar1 = *(double *)&(param_1->Bounds).MMin.field_0x10;
  dVar2 = *(double *)&(param_1->Bounds).MMax.field_0x10;
  dVar5 = *(double *)&(param_1->Bounds).MMin;
  dVar6 = *(double *)&(param_1->Bounds).MMin.field_0x8;
  dVar7 = *(double *)&(param_1->Bounds).MMax;
  dVar8 = *(double *)&(param_1->Bounds).MMax.field_0x8;
  local_b8 = dVar1;
  local_a0 = dVar2;
  bVar9 = Chaos::
          PrePreFilterHelper<FExternalSpatialAccelerationPayload,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
                    (&param_1->Payload,
                     *(TSpatialVisitor<FExternalSpatialAccelerationPayload,double> **)this);
  if (!bVar9) {
    pdVar3 = *(double **)((longlong)this + 0x38);
    uVar12 = SUB84(__real_7fefffffffffffff,0);
    uVar15 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar17 = 0;
    uVar18 = 0;
    local_78[0] = *pdVar3;
    local_78[1] = pdVar3[1];
    local_78[2] = pdVar3[2];
    pdVar3 = *(double **)((longlong)this + 8);
    local_f8[3] = dVar5 - *pdVar3;
    local_f8[4] = dVar6 - pdVar3[1];
    local_f8[5] = local_b8 - pdVar3[2];
    local_f8[1] = dVar8 - pdVar3[1];
    local_f8[0] = dVar7 - *pdVar3;
    lVar11 = 0;
    local_f8[2] = local_a0 - pdVar3[2];
    do {
      if (*(char *)(**(longlong **)((longlong)this + 0x40) + lVar11) == '\0') {
        dVar13 = local_78[lVar11] * local_f8[lVar11];
        dVar16 = local_78[lVar11] * local_f8[lVar11 + 3];
        dVar14 = dVar13;
        if (dVar13 < dVar16) {
          dVar14 = dVar16;
          dVar16 = dVar13;
        }
      }
      else {
        if (0.0 < local_f8[lVar11 + 3]) {
          return true;
        }
        if (local_f8[lVar11] <= 0.0 && local_f8[lVar11] != 0.0) {
          return true;
        }
        dVar14 = __real_7fefffffffffffff;
        dVar16 = 0.0;
      }
      if (dVar16 <= (double)CONCAT44(uVar18,uVar17)) {
        dVar16 = (double)CONCAT44(uVar18,uVar17);
      }
      if ((double)CONCAT44(uVar15,uVar12) <= dVar14) {
        dVar14 = (double)CONCAT44(uVar15,uVar12);
      }
      uVar17 = SUB84(dVar16,0);
      uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar12 = SUB84(dVar14,0);
      uVar15 = (undefined4)((ulonglong)dVar14 >> 0x20);
      if (dVar14 < dVar16) {
        return true;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < 3);
    pdVar3 = (double *)(*(longlong *)((longlong)this + 0x10) + 0x20);
    if ((dVar16 < *pdVar3 || dVar16 == *pdVar3) && (0.0 <= dVar14)) {
      puVar4 = *(undefined8 **)this;
      **(double **)((longlong)this + 0x18) = dVar16;
      local_c8 = (param_1->Payload).Component.ObjectKey.ObjectIndex;
      iStack_c4 = (param_1->Payload).Component.ObjectKey.ObjectSerialNumber;
      iStack_c0 = (param_1->Payload).BoneId;
      iStack_bc = (param_1->Payload).CachedUniqueIdx.Idx;
      local_b8 = (double)CONCAT71(local_b8._1_7_,1);
      local_b0 = dVar5;
      dStack_a8 = dVar6;
      local_a0 = dVar1;
      local_98 = dVar7;
      dStack_90 = dVar8;
      local_88 = dVar2;
      cVar10 = (**(code **)(*(longlong *)*puVar4 + 0x10))((longlong *)*puVar4,&local_c8);
      return cVar10 != '\0';
    }
  }
  return true;
}

// operator() @ 148258d80

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::UpdateDirtyElementInGrid'::__l6::<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int local_res8 [2];
  int local_res10;
  TKeyInitializer<int_const_&> local_res18;
  int *local_res20;
  
  lVar5 = *(longlong *)this;
  iVar3 = **(int **)((longlong)this + 8);
  uVar13 = 0;
  local_res8[0] = param_1;
  local_res10 = iVar3;
  if (*(int *)(lVar5 + 0x58) != *(int *)(lVar5 + 0x84)) {
    lVar12 = *(longlong *)(lVar5 + 0x90);
    if (*(longlong *)(lVar5 + 0x90) == 0) {
      lVar12 = lVar5 + 0x88;
    }
    iVar9 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar5 + 0x98) - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        lVar12 = *(longlong *)(lVar5 + 0x50) + (longlong)iVar9 * 0x14;
        if (*(int *)(*(longlong *)(lVar5 + 0x50) + (longlong)iVar9 * 0x14) == param_1) {
          puVar16 = (uint *)(lVar12 + 4);
          if (lVar12 == 0) {
            puVar16 = (uint *)0x0;
          }
          if (puVar16 != (uint *)0x0) {
            uVar14 = puVar16[1];
            if (*(int *)(lVar5 + 0xe0) <= (int)uVar14) {
              return false;
            }
            uVar15 = *puVar16;
            pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar5 + 0xa0);
            if ((int)uVar14 < 1) {
              if ((int)uVar15 < *(int *)(lVar5 + 0xa8)) {
                uVar13 = ~uVar15 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 4) = iVar3;
              puVar16[1] = puVar16[1] + 1;
              return true;
            }
            uVar14 = uVar14 + uVar15;
            uVar17 = uVar14 - 1;
            uVar10 = (int)(uVar17 + uVar15) / 2;
            uVar11 = uVar13;
            if ((int)uVar10 < *(int *)(lVar5 + 0xa8)) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar9 = *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
            if (iVar9 == iVar3) goto LAB_148259108;
            if (uVar15 == uVar17) {
              uVar10 = uVar15 + 1;
              if (iVar3 <= iVar9) {
                uVar10 = uVar15;
              }
            }
            else {
              if (iVar9 < iVar3) {
                uVar15 = uVar10 + 1;
                uVar10 = uVar17;
              }
              else {
                if (uVar15 == uVar10) goto LAB_148258fd4;
                uVar10 = uVar10 - 1;
              }
              uVar10 = Chaos::FindInsertIndexIntoSortedArray(pTVar2,iVar3,uVar15,uVar10);
            }
LAB_148258fd4:
            if (uVar10 != 0xffffffff) {
              lVar12 = (longlong)(int)uVar14;
              if ((int)uVar10 < lVar12) {
                do {
                  uVar15 = uVar13;
                  if ((int)uVar17 < *(int *)(lVar5 + 0xa8)) {
                    uVar15 = -uVar14 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    uVar8 = (*pcVar6)();
                    return (bool)uVar8;
                  }
                  uVar4 = *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar12 * 4 + -4);
                  uVar15 = uVar13;
                  if ((int)uVar14 < *(int *)(lVar5 + 0xa8)) {
                    uVar15 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar6 = (code *)swi(3);
                    uVar8 = (*pcVar6)();
                    return (bool)uVar8;
                  }
                  uVar14 = uVar14 - 1;
                  uVar17 = uVar17 - 1;
                  *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar12 * 4) = uVar4;
                  lVar12 = lVar12 + -1;
                } while ((int)uVar10 < lVar12);
              }
              if ((int)uVar10 < *(int *)(lVar5 + 0xa8)) {
                uVar13 = ~uVar10 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4) = local_res10;
              puVar16[1] = puVar16[1] + 1;
              return true;
            }
LAB_148259108:
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_9181246422089989061>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                               ,0x43b,
                               "InsertValueIntoSortedSubArray(FlattenedCellArrayOfDirtyIndices, NewDirtyIndex, HashEntry->Index, HashEntry->Count)"
                              );
            if (!bVar7) {
              return true;
            }
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          break;
        }
        iVar9 = *(int *)(lVar12 + 0xc);
      } while (iVar9 != -1);
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<int_const_&>_>
            ((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
              *)(lVar5 + 0x50),&local_res18,(bool *)&local_res20);
  piVar1 = (int *)(lVar5 + 0xa8);
  lVar12 = *(longlong *)(lVar5 + 0x50) + (longlong)(int)local_res18.Key * 0x14;
  *(int *)(lVar12 + 4) = *piVar1;
  *(undefined4 *)(lVar12 + 8) = 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)(lVar5 + 0xe0),(ForAnyElementType *)(lVar5 + 0xa0),piVar1,
             (int *)(lVar5 + 0xac));
  uVar14 = *(uint *)(lVar12 + 4);
  if ((int)uVar14 < *piVar1) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  *(int *)(*(longlong *)(lVar5 + 0xa0) + (longlong)(int)uVar14 * 4) = iVar3;
  *(int *)(lVar5 + 0xe4) = *(int *)(lVar5 + 0xe4) + 1;
  return true;
}

// operator() @ 1482592e0

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::DeleteDirtyParticleEverywhere'::__l16::<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int local_res18 [2];
  TKeyInitializer<int_const_&> local_res20;
  int *local_60 [4];
  
  lVar4 = *(longlong *)this;
  iVar2 = **(int **)((longlong)this + 8);
  uVar18 = 0;
  if (*(int *)(lVar4 + 0x58) != *(int *)(lVar4 + 0x84)) {
    lVar15 = *(longlong *)(lVar4 + 0x90);
    if (*(longlong *)(lVar4 + 0x90) == 0) {
      lVar15 = lVar4 + 0x88;
    }
    iVar8 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar4 + 0x98) - 1U & param_1) * 4);
    if (iVar8 != -1) {
LAB_148259340:
      lVar15 = *(longlong *)(lVar4 + 0x50) + (longlong)iVar8 * 0x14;
      if (*(int *)(*(longlong *)(lVar4 + 0x50) + (longlong)iVar8 * 0x14) != param_1)
      goto code_r0x000148259353;
      puVar13 = (uint *)(lVar15 + 4);
      if (lVar15 == 0) {
        puVar13 = (uint *)0x0;
      }
      if ((puVar13 == (uint *)0x0) || ((int)puVar13[1] < 1)) goto LAB_148259361;
      uVar10 = *puVar13;
      uVar17 = (puVar13[1] - 1) + uVar10;
      pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar4 + 0xa0);
      uVar12 = (int)(uVar10 + uVar17) / 2;
      uVar11 = (ulonglong)(int)uVar12;
      uVar16 = 0;
      if ((int)uVar12 < *(int *)(lVar4 + 0xa8)) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar8 = *(int *)((pTVar14->AllocatorInstance).Data + uVar11 * 4);
      if (iVar8 != iVar2) {
        if (uVar10 == uVar17) goto LAB_148259361;
        if (iVar8 < iVar2) {
          uVar10 = uVar12 + 1;
          uVar12 = uVar17;
        }
        else {
          if (uVar10 == uVar12) goto LAB_148259361;
          uVar12 = uVar12 - 1;
        }
        uVar10 = Chaos::FindInSortedArray(pTVar14,iVar2,uVar10,uVar12);
        uVar11 = (ulonglong)uVar10;
      }
      if ((int)uVar11 != -1) {
        for (lVar15 = (longlong)(int)uVar11; lVar15 < (int)uVar17; lVar15 = lVar15 + 1) {
          uVar10 = (uint)uVar11;
          uVar12 = uVar10 + 1;
          uVar16 = uVar18;
          if ((int)uVar12 < *(int *)(lVar4 + 0xa8)) {
            uVar16 = ~uVar12 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar3 = *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar15 * 4 + 4);
          uVar16 = uVar18;
          if ((int)uVar10 < *(int *)(lVar4 + 0xa8)) {
            uVar16 = ~uVar10 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar11 = (ulonglong)uVar12;
          *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar15 * 4) = uVar3;
        }
        puVar13[1] = puVar13[1] - 1;
        goto LAB_148259391;
      }
    }
  }
LAB_148259361:
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9181246422089988991>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                     ,0x481,"DeleteDirtyParticleIndexFromGridCell(Hash, LastDirtyElementIndex)");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
LAB_148259391:
  lVar4 = *(longlong *)this;
  iVar2 = **(int **)((longlong)this + 0x10);
  local_res18[0] = param_1;
  if (*(int *)(lVar4 + 0x58) != *(int *)(lVar4 + 0x84)) {
    lVar15 = *(longlong *)(lVar4 + 0x90);
    if (*(longlong *)(lVar4 + 0x90) == 0) {
      lVar15 = lVar4 + 0x88;
    }
    iVar8 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar4 + 0x98) - 1U & param_1) * 4);
    if (iVar8 != -1) {
      do {
        lVar15 = *(longlong *)(lVar4 + 0x50) + (longlong)iVar8 * 0x14;
        if (*(int *)(*(longlong *)(lVar4 + 0x50) + (longlong)iVar8 * 0x14) == param_1) {
          puVar13 = (uint *)(lVar15 + 4);
          if (lVar15 == 0) {
            puVar13 = (uint *)0x0;
          }
          if (puVar13 != (uint *)0x0) {
            uVar10 = puVar13[1];
            if (*(int *)(lVar4 + 0xe0) <= (int)uVar10) {
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_9181246422089988990>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                                 ,0x482,
                                 "AddNewDirtyParticleIndexToGridCell(Hash, DeleteDirtyParticleIdx)")
              ;
              if (!bVar6) {
                return true;
              }
              goto code_r0x000148259964;
            }
            uVar16 = *puVar13;
            pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar4 + 0xa0);
            if ((int)uVar10 < 1) {
              if ((int)uVar16 < *(int *)(lVar4 + 0xa8)) {
                uVar18 = ~uVar16 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              *(int *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) = iVar2;
              puVar13[1] = puVar13[1] + 1;
              return true;
            }
            uVar10 = uVar10 + uVar16;
            uVar12 = uVar10 - 1;
            uVar9 = (int)(uVar16 + uVar12) / 2;
            uVar17 = uVar18;
            if ((int)uVar9 < *(int *)(lVar4 + 0xa8)) {
              uVar17 = ~uVar9 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            iVar8 = *(int *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
            if (iVar8 != iVar2) {
              if (uVar16 == uVar12) {
                uVar9 = uVar16 + 1;
                if (iVar2 <= iVar8) {
                  uVar9 = uVar16;
                }
              }
              else {
                if (iVar8 < iVar2) {
                  uVar16 = uVar9 + 1;
                  uVar9 = uVar12;
                }
                else {
                  if (uVar16 == uVar9) goto LAB_148259778;
                  uVar9 = uVar9 - 1;
                }
                uVar9 = Chaos::FindInsertIndexIntoSortedArray(pTVar14,iVar2,uVar16,uVar9);
              }
LAB_148259778:
              if (uVar9 != 0xffffffff) {
                lVar15 = (longlong)(int)uVar10;
                while( true ) {
                  if (lVar15 <= (int)uVar9) {
                    if ((int)uVar9 < *(int *)(lVar4 + 0xa8)) {
                      uVar18 = ~uVar9 >> 0x1f;
                    }
                    if ((uVar18 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      uVar7 = (*pcVar5)();
                      return (bool)uVar7;
                    }
                    *(int *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) = iVar2;
                    puVar13[1] = puVar13[1] + 1;
                    return true;
                  }
                  uVar16 = uVar18;
                  if ((int)uVar12 < *(int *)(lVar4 + 0xa8)) {
                    uVar16 = -uVar10 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    uVar7 = (*pcVar5)();
                    return (bool)uVar7;
                  }
                  uVar3 = *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar15 * 4 + -4);
                  uVar16 = uVar18;
                  if ((int)uVar10 < *(int *)(lVar4 + 0xa8)) {
                    uVar16 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) break;
                  uVar10 = uVar10 - 1;
                  uVar12 = uVar12 - 1;
                  *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar15 * 4) = uVar3;
                  lVar15 = lVar15 + -1;
                }
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_9181246422089989061>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                               ,0x43b,
                               "InsertValueIntoSortedSubArray(FlattenedCellArrayOfDirtyIndices, NewDirtyIndex, HashEntry->Index, HashEntry->Count)"
                              );
            if (!bVar6) {
              return true;
            }
code_r0x000148259964:
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          break;
        }
        iVar8 = *(int *)(lVar15 + 0xc);
      } while (iVar8 != -1);
    }
  }
  local_60[0] = local_res18;
  TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<int_const_&>_>
            ((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
              *)(lVar4 + 0x50),&local_res20,(bool *)local_60);
  piVar1 = (int *)(lVar4 + 0xa8);
  lVar15 = *(longlong *)(lVar4 + 0x50) + (longlong)(int)local_res20.Key * 0x14;
  *(int *)(lVar15 + 4) = *piVar1;
  *(undefined4 *)(lVar15 + 8) = 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)(lVar4 + 0xe0),(ForAnyElementType *)(lVar4 + 0xa0),piVar1,
             (int *)(lVar4 + 0xac));
  uVar18 = *(uint *)(lVar15 + 4);
  uVar10 = 0;
  if ((int)uVar18 < *piVar1) {
    uVar10 = ~uVar18 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  *(int *)(*(longlong *)(lVar4 + 0xa0) + (longlong)(int)uVar18 * 4) = iVar2;
  *(int *)(lVar4 + 0xe4) = *(int *)(lVar4 + 0xe4) + 1;
  return true;
code_r0x000148259353:
  iVar8 = *(int *)(lVar15 + 0xc);
  if (iVar8 == -1) goto LAB_148259361;
  goto LAB_148259340;
}

// operator() @ 148259970

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'
::__l41::<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)this;
  if (*(int *)(lVar2 + 0x58) != *(int *)(lVar2 + 0x84)) {
    lVar10 = *(longlong *)(lVar2 + 0x90);
    if (*(longlong *)(lVar2 + 0x90) == 0) {
      lVar10 = lVar2 + 0x88;
    }
    iVar8 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & param_1) * 4);
    if (iVar8 != -1) {
      while (lVar10 = *(longlong *)(lVar2 + 0x50) + (longlong)iVar8 * 0x14,
            *(int *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar8 * 0x14) != param_1) {
        iVar8 = *(int *)(lVar10 + 0xc);
        if (iVar8 == -1) {
          return true;
        }
      }
      pFVar9 = (FScriptContainerElement *)(lVar10 + 4);
      if (lVar10 == 0) {
        pFVar9 = (FScriptContainerElement *)0x0;
      }
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
        if (((pFVar3->Data <= pFVar9) &&
            (pFVar9 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
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
        *(undefined4 *)(pFVar4 + (longlong)iVar8 * 8) = *(undefined4 *)pFVar9;
        *(undefined4 *)(pFVar4 + (longlong)iVar8 * 8 + 4) = *(undefined4 *)(pFVar9 + 4);
      }
    }
  }
  return true;
}

// operator() @ 148259ac0

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::AddDirtyElementToGrid'::__l11::<lambda_2>::operator()(void *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int local_res8 [2];
  int local_res10;
  TKeyInitializer<int_const_&> local_res18;
  int *local_res20;
  
  lVar5 = *(longlong *)this;
  iVar3 = **(int **)((longlong)this + 8);
  uVar13 = 0;
  local_res8[0] = param_1;
  local_res10 = iVar3;
  if (*(int *)(lVar5 + 0x58) != *(int *)(lVar5 + 0x84)) {
    lVar12 = *(longlong *)(lVar5 + 0x90);
    if (*(longlong *)(lVar5 + 0x90) == 0) {
      lVar12 = lVar5 + 0x88;
    }
    iVar9 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar5 + 0x98) - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        lVar12 = *(longlong *)(lVar5 + 0x50) + (longlong)iVar9 * 0x14;
        if (*(int *)(*(longlong *)(lVar5 + 0x50) + (longlong)iVar9 * 0x14) == param_1) {
          puVar16 = (uint *)(lVar12 + 4);
          if (lVar12 == 0) {
            puVar16 = (uint *)0x0;
          }
          if (puVar16 != (uint *)0x0) {
            uVar14 = puVar16[1];
            if (*(int *)(lVar5 + 0xe0) <= (int)uVar14) {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_9181246422089988950>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                                 ,0x4aa,"AddNewDirtyParticleIndexToGridCell(Hash, NewDirtyElement)")
              ;
              if (!bVar7) {
                return true;
              }
              goto code_r0x000148259ef4;
            }
            uVar15 = *puVar16;
            pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar5 + 0xa0);
            if ((int)uVar14 < 1) {
              if ((int)uVar15 < *(int *)(lVar5 + 0xa8)) {
                uVar13 = ~uVar15 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 4) = iVar3;
              puVar16[1] = puVar16[1] + 1;
              return true;
            }
            uVar14 = uVar14 + uVar15;
            uVar17 = uVar14 - 1;
            uVar10 = (int)(uVar17 + uVar15) / 2;
            uVar11 = uVar13;
            if ((int)uVar10 < *(int *)(lVar5 + 0xa8)) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar9 = *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4);
            if (iVar9 != iVar3) {
              if (uVar15 == uVar17) {
                uVar10 = uVar15 + 1;
                if (iVar3 <= iVar9) {
                  uVar10 = uVar15;
                }
              }
              else {
                if (iVar9 < iVar3) {
                  uVar15 = uVar10 + 1;
                  uVar10 = uVar17;
                }
                else {
                  if (uVar15 == uVar10) goto LAB_148259d08;
                  uVar10 = uVar10 - 1;
                }
                uVar10 = Chaos::FindInsertIndexIntoSortedArray(pTVar2,iVar3,uVar15,uVar10);
              }
LAB_148259d08:
              if (uVar10 != 0xffffffff) {
                lVar12 = (longlong)(int)uVar14;
                if ((int)uVar10 < lVar12) {
                  do {
                    uVar15 = uVar13;
                    if ((int)uVar17 < *(int *)(lVar5 + 0xa8)) {
                      uVar15 = -uVar14 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar6 = (code *)swi(3);
                      uVar8 = (*pcVar6)();
                      return (bool)uVar8;
                    }
                    uVar4 = *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar12 * 4 + -4);
                    uVar15 = uVar13;
                    if ((int)uVar14 < *(int *)(lVar5 + 0xa8)) {
                      uVar15 = ~uVar14 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar7)) {
                      pcVar6 = (code *)swi(3);
                      uVar8 = (*pcVar6)();
                      return (bool)uVar8;
                    }
                    uVar14 = uVar14 - 1;
                    uVar17 = uVar17 - 1;
                    *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar12 * 4) = uVar4;
                    lVar12 = lVar12 + -1;
                  } while ((int)uVar10 < lVar12);
                }
                if ((int)uVar10 < *(int *)(lVar5 + 0xa8)) {
                  uVar13 = ~uVar10 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4) = local_res10
                ;
                puVar16[1] = puVar16[1] + 1;
                return true;
              }
            }
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_9181246422089989061>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                               ,0x43b,
                               "InsertValueIntoSortedSubArray(FlattenedCellArrayOfDirtyIndices, NewDirtyIndex, HashEntry->Index, HashEntry->Count)"
                              );
            if (!bVar7) {
              return true;
            }
code_r0x000148259ef4:
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          break;
        }
        iVar9 = *(int *)(lVar12 + 0xc);
      } while (iVar9 != -1);
    }
  }
  local_res20 = local_res8;
  TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<int_const_&>_>
            ((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
              *)(lVar5 + 0x50),&local_res18,(bool *)&local_res20);
  piVar1 = (int *)(lVar5 + 0xa8);
  lVar12 = *(longlong *)(lVar5 + 0x50) + (longlong)(int)local_res18.Key * 0x14;
  *(int *)(lVar12 + 4) = *piVar1;
  *(undefined4 *)(lVar12 + 8) = 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)(lVar5 + 0xe0),(ForAnyElementType *)(lVar5 + 0xa0),piVar1,
             (int *)(lVar5 + 0xac));
  uVar14 = *(uint *)(lVar12 + 4);
  if ((int)uVar14 < *piVar1) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  *(int *)(*(longlong *)(lVar5 + 0xa0) + (longlong)(int)uVar14 * 4) = iVar3;
  *(int *)(lVar5 + 0xe4) = *(int *)(lVar5 + 0xe4) + 1;
  return true;
}

// operator() @ 14825a4b0

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::UpdateDirtyElementInGrid'::__l8::<lambda_3>::operator()(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  uint *puVar15;
  
  lVar3 = *(longlong *)this;
  iVar1 = **(int **)((longlong)this + 8);
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar12 = *(longlong *)(lVar3 + 0x90);
    if (*(longlong *)(lVar3 + 0x90) == 0) {
      lVar12 = lVar3 + 0x88;
    }
    iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_1) * 4);
    if (iVar7 != -1) {
      while (lVar12 = *(longlong *)(lVar3 + 0x50) + (longlong)iVar7 * 0x14,
            *(int *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar7 * 0x14) != param_1) {
        iVar7 = *(int *)(lVar12 + 0xc);
        if (iVar7 == -1) {
          return true;
        }
      }
      puVar15 = (uint *)(lVar12 + 4);
      if (lVar12 == 0) {
        puVar15 = (uint *)0x0;
      }
      if ((puVar15 != (uint *)0x0) && (0 < (int)puVar15[1])) {
        pTVar14 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar3 + 0xa0);
        uVar13 = *puVar15;
        uVar11 = (puVar15[1] - 1) + uVar13;
        uVar8 = (int)(uVar13 + uVar11) / 2;
        uVar10 = (ulonglong)(int)uVar8;
        uVar9 = 0;
        if ((int)uVar8 < *(int *)(lVar3 + 0xa8)) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar7 = *(int *)((pTVar14->AllocatorInstance).Data + uVar10 * 4);
        if (iVar7 != iVar1) {
          if (uVar13 == uVar11) {
            return true;
          }
          if (iVar7 < iVar1) {
            uVar13 = uVar8 + 1;
            uVar8 = uVar11;
          }
          else {
            if (uVar13 == uVar8) {
              return true;
            }
            uVar8 = uVar8 - 1;
          }
          uVar13 = Chaos::FindInSortedArray(pTVar14,iVar1,uVar13,uVar8);
          uVar10 = (ulonglong)uVar13;
        }
        if ((int)uVar10 != -1) {
          for (lVar12 = (longlong)(int)uVar10; lVar12 < (int)uVar11; lVar12 = lVar12 + 1) {
            uVar13 = (uint)uVar10;
            uVar8 = uVar13 + 1;
            uVar9 = 0;
            if ((int)uVar8 < *(int *)(lVar3 + 0xa8)) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            uVar2 = *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar12 * 4 + 4);
            uVar9 = 0;
            if ((int)uVar13 < *(int *)(lVar3 + 0xa8)) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            uVar10 = (ulonglong)uVar8;
            *(undefined4 *)((pTVar14->AllocatorInstance).Data + lVar12 * 4) = uVar2;
          }
          puVar15[1] = puVar15[1] - 1;
        }
      }
    }
  }
  return true;
}

// operator() @ 14825c310

void __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>'
::__l42::<lambda_3>::operator()(void *this,double param_1,double param_2)

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

// AddNodesOverlappingLeaves @ 1482645b0

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::AddNodesOverlappingLeaves
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,TAABBTreeNode<double> *param_1,TAABB<double,3> *param_2,
          TAABBTreeNode<double> *param_3,TAABB<double,3> *param_4,bool param_5)

{
  TVector<double,3> *pTVar1;
  double *pdVar2;
  int *piVar3;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  TVector<double,3> *pTVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint local_38;
  uint uStack_34;
  
  lVar19 = 0;
  while( true ) {
    while( true ) {
      if (((param_5) && (!param_1->bDirtyNode)) && (!param_3->bDirtyNode)) {
        return;
      }
      pTVar1 = &param_4->MMax;
      pTVar16 = pTVar1;
      lVar18 = lVar19;
      do {
        dVar7 = *(double *)((longlong)pTVar16 + ((longlong)param_2 - (longlong)pTVar1));
        if (*(double *)pTVar16 <= dVar7 && dVar7 != *(double *)pTVar16) {
          return;
        }
        if (*(double *)((longlong)param_2 + (0x18 - (longlong)pTVar1) + (longlong)pTVar16) <
            *(double *)&((TAABB<double,3> *)(pTVar16 + -1))->MMin) {
          return;
        }
        lVar18 = lVar18 + 1;
        pTVar16 = (TVector<double,3> *)&pTVar16->field_0x8;
      } while (lVar18 < 3);
      uVar12 = 0;
      uVar13 = 0;
      if (param_1->bLeaf) break;
      uVar11 = param_1->ChildrenNodes[0];
      if ((int)uVar11 < (this->Nodes).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      AddNodesOverlappingLeaves
                (this,(TAABBTreeNode<double> *)
                      ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x70),
                 param_1->ChildrenBounds,param_3,param_4,param_5);
      uVar12 = param_1->ChildrenNodes[1];
      if ((int)uVar12 < (this->Nodes).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      param_2 = param_1->ChildrenBounds + 1;
      param_1 = (TAABBTreeNode<double> *)
                ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x70);
    }
    if (param_3->bLeaf) break;
    uVar13 = param_3->ChildrenNodes[0];
    uVar11 = uVar12;
    if ((int)uVar13 < (this->Nodes).ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    AddNodesOverlappingLeaves
              (this,param_1,param_2,
               (TAABBTreeNode<double> *)
               ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x70),
               param_3->ChildrenBounds,param_5);
    uVar13 = param_3->ChildrenNodes[1];
    if ((int)uVar13 < (this->Nodes).ArrayNum) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    param_4 = param_3->ChildrenBounds + 1;
    param_3 = (TAABBTreeNode<double> *)
              ((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x70);
  }
  uVar12 = param_1->ChildrenNodes[0];
  lVar18 = (longlong)(int)uVar12;
  uVar11 = param_3->ChildrenNodes[0];
  lVar20 = (longlong)(int)uVar11;
  if (param_5) {
    uVar14 = uVar13;
    if ((int)uVar12 < *(int *)&(this->Leaves).field_0x8) {
      uVar14 = ~uVar12 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(char *)(*(longlong *)&this->Leaves + 0x40 + lVar18 * 0x48) == '\0') {
      uVar14 = uVar13;
      if ((int)uVar11 < *(int *)&(this->Leaves).field_0x8) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(char *)(*(longlong *)&this->Leaves + 0x40 + lVar20 * 0x48) == '\0') {
        return;
      }
    }
  }
  uVar14 = uVar13;
  if ((int)uVar12 < *(int *)&(this->Leaves).field_0x8) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar5 = *(longlong *)&this->Leaves + lVar18 * 0x48;
  if ((int)uVar11 < *(int *)&(this->Leaves).field_0x8) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar6 = *(longlong *)&this->Leaves + lVar20 * 0x48;
  pdVar2 = (double *)(lVar6 + 0x18);
  pdVar17 = pdVar2;
  do {
    dVar7 = *(double *)((longlong)pdVar17 + (lVar5 - (longlong)pdVar2));
    if (*pdVar17 <= dVar7 && dVar7 != *pdVar17) {
      return;
    }
    if (*(double *)((longlong)pdVar17 + lVar5 + (0x18 - (longlong)pdVar2)) <
        *(double *)((longlong)pdVar17 + (lVar6 - (longlong)pdVar2))) {
      return;
    }
    lVar19 = lVar19 + 1;
    pdVar17 = pdVar17 + 1;
  } while (lVar19 < 3);
  pTVar4 = &this->OverlappingPairs;
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  local_38 = uVar12;
  uStack_34 = uVar11;
  if (((pFVar8 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar8 + (longlong)(this->OverlappingPairs).ArrayMax * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar15 = (this->OverlappingPairs).ArrayNum;
  piVar3 = &(this->OverlappingPairs).ArrayMax;
  if (iVar15 == *piVar3) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar4->AllocatorInstance,piVar3);
  }
  (this->OverlappingPairs).ArrayNum = iVar15 + 1;
  *(ulonglong *)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 8) =
       CONCAT44(uStack_34,local_38);
  uVar13 = 0;
  if ((int)uVar12 < (this->OverlappingCounts).ArrayNum) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar8 = (this->OverlappingCounts).AllocatorInstance.Data + lVar18 * 4;
  *(int *)pFVar8 = *(int *)pFVar8 + 1;
  uVar12 = 0;
  if ((int)uVar11 < (this->OverlappingCounts).ArrayNum) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar8 = (this->OverlappingCounts).AllocatorInstance.Data + lVar20 * 4;
  *(int *)pFVar8 = *(int *)pFVar8 + 1;
  return;
}

// AddRootOverlappingLeaves @ 148265b30

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::AddRootOverlappingLeaves
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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

// AllocateInternalNode @ 148266970

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::AllocateInternalNode
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = this->FirstFreeInternalNode;
  piVar1 = &(this->Nodes).ArrayNum;
  if (uVar6 == 0xffffffff) {
    uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,1,&(this->Nodes).AllocatorInstance,piVar1,&(this->Nodes).ArrayMax);
    uVar7 = 0;
    if ((int)uVar6 < *piVar1) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar2 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70 + 0x6c;
    *pFVar2 = (FScriptContainerElement)((byte)*pFVar2 & 0xfe);
  }
  else {
    uVar7 = 0;
    if ((int)uVar6 < *piVar1) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    this->FirstFreeInternalNode =
         *(int *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70 + 100);
  }
  uVar7 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  if (((byte)(this->Nodes).AllocatorInstance.Data[(longlong)(int)uVar6 * 0x70 + 0x6c] & 1) != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181246422089988795>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                       ,0x545,"Nodes[AllocatedNodeIdx].bLeaf == false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`Chaos::
                  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  ::AllocateInternalNode'::`11'::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  return uVar6;
}

// AllocateLeafNodeAndLeaf @ 148266b40

/* WARNING: Removing unreachable block (ram,0x000148267073) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

NodeAndLeafIndices __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::AllocateLeafNodeAndLeaf
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2)

{
  TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *this_00;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  NodeAndLeafIndices NVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  double *in_R9;
  uint uVar25;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *local_198;
  TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> local_190;
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  local_160;
  undefined1 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  undefined1 local_118 [24];
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  
  uVar18 = this->FirstFreeLeafNode;
  pTVar1 = &this->Nodes;
  piVar2 = &(this->Nodes).ArrayNum;
  if (uVar18 == 0xffffffff) {
    uVar16 = *(uint *)&(this->Leaves).field_0x8;
    uVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,8,1,&pTVar1->AllocatorInstance,piVar2,&(this->Nodes).ArrayMax);
    uVar17 = 0;
    if ((int)uVar18 < *piVar2) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      NVar21 = (NodeAndLeafIndices)(*pcVar6)();
      return NVar21;
    }
    *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x70 + 0x60) = uVar16;
    uVar17 = 0;
    if ((int)uVar18 < *piVar2) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      NVar21 = (NodeAndLeafIndices)(*pcVar6)();
      return NVar21;
    }
    pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x70 + 0x6c;
    *pFVar5 = (FScriptContainerElement)((byte)*pFVar5 | 1);
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = 0;
    uVar10 = *(undefined8 *)&param_2->MMin;
    uVar11 = *(undefined8 *)&(param_2->MMin).field_0x8;
    dVar9 = in_R9[3];
    dVar12 = in_R9[4];
    dVar7 = in_R9[5];
    dVar13 = *in_R9;
    dVar14 = in_R9[1];
    dVar8 = in_R9[2];
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&local_1a8,(int *)((longlong)&local_1a0 + 4));
    local_190.Bounds.MMax._0_8_ = _UNK_150a9e6d8;
    local_190.Bounds.MMin._16_8_ = ___xmm_ffefffffffffffff7fefffffffffffff;
    local_190.Bounds.MMax._16_8_ = _UNK_1508ffb58;
    local_190.Bounds.MMax._8_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
    local_190.Bounds.MMin._0_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_190.Bounds.MMin._8_8_ = _UNK_150a9e648;
    iVar20 = iVar19 + 1;
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar20);
    lVar23 = (longlong)iVar19 * 0x40;
    *(undefined8 *)&local_1a8.Data[lVar23].field_0x0 = uVar10;
    *(undefined8 *)(local_1a8.Data + lVar23 + 8) = uVar11;
    *(double *)(local_1a8.Data + lVar23 + 0x28) = dVar9;
    *(double *)(local_1a8.Data + lVar23 + 0x28 + 8) = dVar12;
    *(double *)(local_1a8.Data + lVar23 + 0x10) = dVar13;
    *(double *)(local_1a8.Data + lVar23 + 0x10 + 8) = dVar14;
    *(double *)(local_1a8.Data + lVar23 + 0x38) = dVar7;
    *(double *)(local_1a8.Data + lVar23 + 0x20) = dVar8;
    local_198 = (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)local_1a8.Data;
    local_160.ArrayNum = iVar20;
    local_d8 = uVar10;
    uStack_d0 = uVar11;
    local_c8 = dVar13;
    dStack_c0 = dVar14;
    local_b8 = dVar8;
    local_b0 = dVar9;
    dStack_a8 = dVar12;
    local_a0 = dVar7;
    if (iVar20 == 0) {
      local_160.ArrayNum = 0;
      local_160.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar20,0,&local_160.AllocatorInstance,iVar20,&local_160.ArrayMax);
      ConstructItems<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int>
                (local_160.AllocatorInstance.Data,local_198,iVar20);
    }
    local_150 = 0;
    TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1>::ComputeBounds
              (&local_190,&local_160,false);
    if (((*(TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> **)&this->Leaves <=
          &local_190) &&
        (&local_190 <
         (TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *)
         ((longlong)
          *(TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> **)&this->Leaves +
         (longlong)*(int *)&(this->Leaves).field_0xc * 0x48))) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar6 = (code *)swi(3);
      NVar21 = (NodeAndLeafIndices)(*pcVar6)();
      return NVar21;
    }
    iVar20 = *(int *)&(this->Leaves).field_0x8;
    puVar3 = &(this->Leaves).field_0xc;
    if (iVar20 == *(int *)puVar3) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,(ForAnyElementType *)&this->Leaves,(int *)puVar3);
    }
    lVar22 = (longlong)iVar20;
    *(int *)&(this->Leaves).field_0x8 = iVar20 + 1;
    lVar23 = *(longlong *)&this->Leaves;
    puVar4 = (undefined8 *)(lVar23 + lVar22 * 0x48);
    *puVar4 = local_190.Bounds.MMin._0_8_;
    puVar4[1] = local_190.Bounds.MMin._8_8_;
    *(undefined8 *)(lVar23 + 0x10 + lVar22 * 0x48) = local_190.Bounds.MMin._16_8_;
    puVar4 = (undefined8 *)(lVar23 + 0x18 + lVar22 * 0x48);
    *puVar4 = local_190.Bounds.MMax._0_8_;
    puVar4[1] = local_190.Bounds.MMax._8_8_;
    *(undefined8 *)(lVar23 + 0x28 + lVar22 * 0x48) = local_190.Bounds.MMax._16_8_;
    *(undefined8 *)(lVar23 + 0x30 + lVar22 * 0x48) = 0;
    *(FScriptContainerElement **)(lVar23 + 0x30 + lVar22 * 0x48) = local_160.AllocatorInstance.Data;
    *(int *)(lVar23 + 0x38 + lVar22 * 0x48) = local_160.ArrayNum;
    *(int *)(lVar23 + 0x3c + lVar22 * 0x48) = local_160.ArrayMax;
    *(undefined1 *)(lVar23 + 0x40 + lVar22 * 0x48) = local_150;
    local_160.ArrayNum = 0;
    local_160.ArrayMax = 0;
    local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)local_1a8.Data !=
        (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)0x0) {
      FMemory::Free(local_1a8.Data);
    }
  }
  else {
    uVar16 = 0;
    if ((int)uVar18 < *piVar2) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      NVar21 = (NodeAndLeafIndices)(*pcVar6)();
      return NVar21;
    }
    this->FirstFreeLeafNode =
         *(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x70 + 100);
    uVar16 = 0;
    if ((int)uVar18 < *piVar2) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      NVar21 = (NodeAndLeafIndices)(*pcVar6)();
      return NVar21;
    }
    uVar16 = *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x70 + 0x60);
    local_118._0_4_ = *(int *)&(param_2->MMin).field_0x0;
    local_118._4_4_ = *(int *)&(param_2->MMin).field_0x4;
    local_118._8_4_ = *(int *)&(param_2->MMin).field_0x8;
    local_118._12_4_ = *(int *)&(param_2->MMin).field_0xc;
    local_118._16_8_ = *in_R9;
    dStack_100 = in_R9[1];
    local_f8 = in_R9[2];
    uVar17 = 0;
    if ((int)uVar16 < *(int *)&(this->Leaves).field_0x8) {
      uVar17 = ~uVar16 >> 0x1f;
    }
    local_e0 = in_R9[5];
    local_f0 = in_R9[3];
    dStack_e8 = in_R9[4];
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      NVar21 = (NodeAndLeafIndices)(*pcVar6)();
      return NVar21;
    }
    local_198 = (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
                ((longlong)(int)uVar16 * 9);
    TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::AddElement
              ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
               (*(longlong *)&this->Leaves + (longlong)(int)uVar16 * 0x48),
               (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)local_118);
    uVar17 = 0;
    if ((int)uVar16 < *(int *)&(this->Leaves).field_0x8) {
      uVar17 = ~uVar16 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      NVar21 = (NodeAndLeafIndices)(*pcVar6)();
      return NVar21;
    }
    this_00 = (TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *)
              (*(longlong *)&this->Leaves + (longlong)local_198 * 8);
    TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1>::ComputeBounds
              (this_00,(TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                        *)(this_00 + 1),this->bDynamicTree);
  }
  uVar24 = 0;
  local_148 = *in_R9;
  dStack_140 = in_R9[1];
  uVar25 = ~uVar18 >> 0x1f;
  local_138 = in_R9[2];
  dStack_128 = (double)FAABBTreeCVars::DynamicTreeBoundingBoxPadding;
  uVar17 = uVar24;
  if ((int)uVar18 < *piVar2) {
    uVar17 = uVar25;
  }
  local_120 = in_R9[5] + dStack_128;
  dVar9 = local_148 - dStack_128;
  dVar8 = local_138 - dStack_128;
  local_130 = in_R9[3] + dStack_128;
  dVar7 = dStack_140 - dStack_128;
  dStack_128 = in_R9[4] + dStack_128;
  if ((uVar17 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    NVar21 = (NodeAndLeafIndices)(*pcVar6)();
    return NVar21;
  }
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  lVar23 = (longlong)(int)uVar18 * 0x70;
  *(double *)(pFVar5 + lVar23) = dVar9;
  *(double *)(pFVar5 + lVar23 + 8) = dVar7;
  *(double *)(pFVar5 + lVar23 + 0x10) = dVar8;
  *(double *)(pFVar5 + lVar23 + 0x18) = local_130;
  *(double *)(pFVar5 + lVar23 + 0x18 + 8) = dStack_128;
  *(double *)(pFVar5 + lVar23 + 0x28) = local_120;
  uVar17 = uVar24;
  if ((int)uVar18 < *piVar2) {
    uVar17 = uVar25;
  }
  if ((uVar17 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    NVar21 = (NodeAndLeafIndices)(*pcVar6)();
    return NVar21;
  }
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar23 + 0x68) = 0xffffffff;
  if ((int)uVar18 < *piVar2) {
    uVar24 = uVar25;
  }
  if ((uVar24 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    NVar21 = (NodeAndLeafIndices)(*pcVar6)();
    return NVar21;
  }
  if (((byte)(pTVar1->AllocatorInstance).Data[lVar23 + 0x6c] & 1) == 0) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_9181246422089988748>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                        ,0x574,"Nodes[AllocatedNodeIdx].bLeaf == true");
    if (bVar15) {
      pcVar6 = (code *)swi(3);
      NVar21 = (NodeAndLeafIndices)(*pcVar6)();
      return NVar21;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`Chaos::
                  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  ::AllocateLeafNodeAndLeaf'::`11'::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  (param_1->Component).ObjectKey.ObjectIndex = uVar18;
  (param_1->Component).ObjectKey.ObjectSerialNumber = uVar16;
  return (NodeAndLeafIndices)param_1;
}

// CacheOverlappingLeaves @ 148269fc0

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::CacheOverlappingLeaves
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this)

{
  if (this->bBuildOverlapCache != false) {
    ComputeOverlappingCacheFromRoot(this,false);
    return;
  }
  return;
}

// CanContinueProcessingNodes @ 14826ba20

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::CanContinueProcessingNodes
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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

// ClearShouldRebuild @ 14826de70

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::ClearShouldRebuild
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this)

{
  this->bShouldRebuild = false;
  return;
}

// ComputeOverlappingCacheFromRoot @ 14826fd90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::ComputeOverlappingCacheFromRoot
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
          *(undefined1 *)(lVar16 + 0x40 + *(longlong *)&this->Leaves) = 0;
          lVar16 = lVar16 + 0x48;
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

// Copy @ 148270ab0

TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
 __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::Copy(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
       *this)

{
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *pTVar1;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *in_RDX;
  
  pTVar1 = ::operator_new(0x1f8);
  if (pTVar1 != (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                 *)0x0) {
    pTVar1 = TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                       (pTVar1,this);
    in_RDX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
            )in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
          )in_RDX;
}

// DeAllocateLeafNode @ 1482776e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::DeAllocateLeafNode
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar5 = uVar7;
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
  lVar8 = (longlong)param_1 * 0x70;
  uVar5 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar8 + 0x60);
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&(this->Leaves).field_0x8) {
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
  lVar1 = *(longlong *)&this->Leaves + (longlong)(int)uVar5 * 0x48;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  if (*(int *)(lVar1 + 0x3c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)(lVar1 + 0x30),0,(int *)(lVar1 + 0x3c));
  }
  *(undefined1 *)(lVar1 + 0x40) = 0;
  iVar2 = this->FirstFreeLeafNode;
  uVar5 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar5 = uVar7;
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
  *(int *)((this->Nodes).AllocatorInstance.Data + lVar8 + 100) = iVar2;
  this->FirstFreeLeafNode = param_1;
  uVar5 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar5 = uVar7;
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
  if (((byte)(this->Nodes).AllocatorInstance.Data[lVar8 + 0x6c] & 1) == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181246422089988723>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                       ,0x58d,"Nodes[NodeIdx].bLeaf == true");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`Chaos::
                  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  ::DeAllocateLeafNode'::`6'::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  return;
}

// DebugDraw @ 148277900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::DebugDraw(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
            *this,ISpacialDebugDrawInterface<double> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  double dVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  TVector<double,3> local_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  FLinearColor local_c0 [8];
  
  if (param_1 != (ISpacialDebugDrawInterface<double> *)0x0) {
    if (this->bDynamicTree == false) {
      iVar13 = 0;
    }
    else {
      iVar13 = this->RootNode;
    }
    iVar1 = (this->Nodes).ArrayNum;
    if (((0 < iVar1) && (-1 < iVar13)) && (iVar13 < iVar1)) {
      if ((iVar13 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_f0._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
      local_f0._8_8_ = _UNK_150689688;
      local_f0._16_8_ = __real_3ff0000000000000;
      TAABBTreeNode<double>::DebugDraw
                ((TAABBTreeNode<double> *)
                 ((this->Nodes).AllocatorInstance.Data + (longlong)iVar13 * 0x70),param_1,
                 &this->Nodes,&local_f0,__real_40a00000);
    }
    uVar10 = _UNK_150b1f268;
    uVar9 = ___xmm_3fc999999999999a3ff0000000000000;
    uVar8 = __real_3fc999999999999a;
    fVar7 = __real_3dcccccd;
    uVar6 = __real_41200000;
    dVar5 = __real_3fe0000000000000;
    fVar4 = __real_3f800000;
    local_res20 = 0;
    if (0 < *(int *)&(this->Leaves).field_0x8) {
      lVar14 = 0;
      do {
        uVar12 = 0;
        if ((int)local_res20 < *(int *)&(this->Leaves).field_0x8) {
          uVar12 = ~local_res20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)&this->Leaves;
        FLinearColor::MakeRandomColor(local_c0);
        local_168 = *(double *)(lVar2 + lVar14);
        dStack_160 = ((double *)(lVar2 + lVar14))[1];
        local_158 = *(double *)(lVar2 + 0x10 + lVar14);
        pdVar16 = (double *)(lVar2 + 0x18 + lVar14);
        local_150 = *pdVar16;
        dStack_148 = pdVar16[1];
        fVar19 = (float)*(int *)(lVar2 + 0x38 + lVar14) * fVar7;
        local_140 = *(double *)(lVar2 + 0x28 + lVar14);
        fVar18 = fVar4 - fVar19;
        local_138 = (double)(fVar19 * FLinearColor::Red.field0_0x0._s_0.R +
                            fVar18 * FLinearColor::Green.field0_0x0._s_0.R);
        local_130 = (double)(fVar19 * FLinearColor::Red.field0_0x0._s_0.G +
                            fVar18 * FLinearColor::Green.field0_0x0._s_0.G);
        local_128 = (double)(fVar19 * FLinearColor::Red.field0_0x0._s_0.B +
                            fVar18 * FLinearColor::Green.field0_0x0._s_0.B);
        (**(code **)((longlong)*param_1 + 8))(param_1,&local_168,&local_138,uVar6);
        lVar17 = *(longlong *)(lVar2 + 0x30 + lVar14);
        iVar13 = *(int *)(lVar2 + 0x38 + lVar14);
        lVar15 = (longlong)iVar13 * 0x40 + lVar17;
        pdVar16 = (double *)(lVar17 + 0x30);
        while( true ) {
          if (*(int *)(lVar2 + 0x38 + lVar14) != iVar13) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (lVar17 == lVar15) break;
          local_120 = (pdVar16[-1] - pdVar16[-4]) * dVar5 + pdVar16[-4];
          local_118 = (*pdVar16 - pdVar16[-3]) * dVar5 + pdVar16[-3];
          local_110 = (pdVar16[1] - pdVar16[-2]) * dVar5 + pdVar16[-2];
          local_108 = (local_150 - local_168) * dVar5 + local_168;
          local_100 = (dStack_148 - dStack_160) * dVar5 + dStack_160;
          local_f8 = (local_140 - local_158) * dVar5 + local_158;
          (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_108,&local_120,&local_138,uVar6);
          local_c8 = uVar8;
          local_d8 = uVar9;
          uStack_d0 = uVar10;
          (**(code **)((longlong)*param_1 + 8))(param_1,pdVar16 + -4,&local_d8,fVar4);
          lVar17 = lVar17 + 0x40;
          pdVar16 = pdVar16 + 8;
        }
        lVar14 = lVar14 + 0x48;
        local_res20 = local_res20 + 1;
      } while ((int)local_res20 < *(int *)&(this->Leaves).field_0x8);
    }
  }
  return;
}

// DebugGetElementsCollection @ 148278be0

FElementsCollection * __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::DebugGetElementsCollection
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,FElementsCollection *__return_storage_ptr__)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FElementsCollection *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *pTVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForAnyElementType *pFVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  FElementsCollection *local_res10;
  int local_res18;
  int local_res20;
  ForAnyElementType local_58;
  undefined8 local_50;
  
  uVar12 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_res10 = __return_storage_ptr__;
  if (0 < *(int *)&(this->Leaves).field_0x8) {
    lVar18 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar12 < *(int *)&(this->Leaves).field_0x8) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FElementsCollection *)(*pcVar2)();
        return pFVar9;
      }
      pFVar16 = (ForAnyElementType *)(*(longlong *)&this->Leaves + 0x30 + lVar18);
      if ((&local_58 == pFVar16) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FElementsCollection *)(*pcVar2)();
        return pFVar9;
      }
      iVar15 = *(int *)&pFVar16[1].Data;
      if (iVar15 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,8,iVar15,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4)
                          );
        ConstructItems<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int>
                  (local_58.Data + (longlong)iVar7 * 0x40,
                   (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
                   pFVar16->Data,iVar15);
      }
      uVar12 = uVar12 + 1;
      lVar18 = lVar18 + 0x48;
    } while ((int)uVar12 < *(int *)&(this->Leaves).field_0x8);
  }
  uVar5 = local_50;
  uVar10 = (ulonglong)(int)local_50;
  iVar15 = 0;
  iVar7 = 0;
  local_res18 = 0;
  local_res20 = 0;
  pTVar13 = (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
            (local_58.Data + uVar10 * 0x40);
  FVar17.Data = local_58.Data;
  do {
    while( true ) {
      if ((int)local_50 != (int)uVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      FVar3.Data = local_58.Data;
      pFVar9 = local_res10;
      if ((TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)FVar17.Data ==
          pTVar13) {
        iVar4 = (int)local_50;
        (local_res10->AllElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        piVar1 = &(local_res10->AllElements).ArrayMax;
        (local_res10->AllElements).ArrayNum = (int)local_50;
        if ((int)local_50 == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,(int)local_50,0,(ForAnyElementType *)local_res10,(int)local_50,piVar1);
          ConstructItems<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int>
                    ((pFVar9->AllElements).AllocatorInstance.Data,
                     (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)FVar3.Data
                     ,iVar4);
        }
        pFVar9->DepthTotal = iVar7;
        pFVar9->MaxDepth = iVar15;
        pFVar9->DirtyElementCount = (this->DirtyElements).ArrayNum;
        if ((TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)local_58.Data !=
            (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)0x0) {
          FMemory::Free(local_58.Data);
        }
        return pFVar9;
      }
      uVar12 = (((TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)FVar17.Data)->
               Payload).CachedUniqueIdx.Idx;
      if ((uVar12 == 0xffffffff) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7431867033672745159>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                             ,199,"Idx.IsValid()"), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FElementsCollection *)(*pcVar2)();
        return pFVar9;
      }
      uVar11 = (uVar12 >> 0x10 ^ uVar12) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar11 = *(uint *)(*(longlong *)&(this->PayloadToInfo).HashTable.field_0x10 +
                        (ulonglong)
                        ((uVar11 >> 0x10 ^ uVar11) &
                        *(uint *)&(this->PayloadToInfo).HashTable.field_0x4) * 4);
      if (uVar11 != 0xffffffff) break;
LAB_148278e9a:
      uVar10 = uVar5 & 0xffffffff;
      FVar17.Data = FVar17.Data + 0x40;
    }
    while( true ) {
      uVar8 = 0;
      if ((int)uVar11 < (this->PayloadToInfo).Elements.ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FElementsCollection *)(*pcVar2)();
        return pFVar9;
      }
      uVar8 = *(uint *)((this->PayloadToInfo).Elements.AllocatorInstance.Data +
                       (longlong)(int)uVar11 * 0x24 + 0xc);
      if ((uVar8 == 0xffffffff) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7431867033672745159>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                             ,199,"Idx.IsValid()"), bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FElementsCollection *)(*pcVar2)();
        return pFVar9;
      }
      iVar15 = local_res18;
      iVar7 = local_res20;
      if (uVar8 == uVar12) break;
      uVar11 = *(uint *)(*(longlong *)&(this->PayloadToInfo).HashTable.field_0x18 +
                        (ulonglong)uVar11 * 4);
      if (uVar11 == 0xffffffff) goto LAB_148278e9a;
    }
    if (uVar11 == 0xffffffff) goto LAB_148278e9a;
    uVar12 = 0;
    if ((int)uVar11 < (this->PayloadToInfo).Elements.ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FElementsCollection *)(*pcVar2)();
      return pFVar9;
    }
    pFVar14 = (this->PayloadToInfo).Elements.AllocatorInstance.Data +
              (longlong)(int)uVar11 * 0x24 + 0x10;
    iVar15 = local_res18;
    iVar7 = local_res20;
    if (pFVar14 == (FScriptContainerElement *)0x0) goto LAB_148278e9a;
    iVar15 = 0;
    iVar7 = 0;
    for (uVar12 = *(uint *)(pFVar14 + 0x10); uVar12 != 0xffffffff;
        uVar12 = *(uint *)((this->Nodes).AllocatorInstance.Data +
                          (longlong)(int)uVar12 * 0x70 + 0x68)) {
      uVar11 = 0;
      if ((int)uVar12 < (this->Nodes).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FElementsCollection *)(*pcVar2)();
        return pFVar9;
      }
      iVar15 = iVar7;
      iVar7 = iVar7 + 1;
    }
    iVar7 = local_res20 + iVar15;
    uVar10 = uVar5 & 0xffffffff;
    if (iVar15 <= local_res18) {
      iVar15 = local_res18;
    }
    FVar17.Data = FVar17.Data + 0x40;
    local_res18 = iVar15;
    local_res20 = iVar7;
  } while( true );
}

// DeepAssign @ 148279070

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::DeepAssign(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
             *this,ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1)

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
  operator=(this,(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  *)param_1);
  return;
}

// DumpStats @ 14827b760

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::DumpStats(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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

// DumpStatsTo @ 14827b7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::DumpStatsTo(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
      (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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

// FillPersistentOverlappingPairs @ 14827ebf0

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::FillPersistentOverlappingPairs
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
      if (*(char *)(*(longlong *)&this->Leaves + 0x40 + lVar11) == '\0') {
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
          if (*(char *)(*(longlong *)&this->Leaves + 0x40 + (longlong)(int)uVar6 * 0x48) == '\0') {
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
      local_60 = lVar11 + 0x48;
      uVar16 = uVar16 + 1;
      *(int *)((this->OverlappingCounts).AllocatorInstance.Data + lVar12 * 4) = iVar8 + 1;
      local_68 = lVar12 + 1;
    } while (local_68 < local_58);
  }
  return;
}

// FindAllIntersections @ 14827fcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FExternalSpatialAccelerationPayload,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::FindAllIntersections
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,TArray<FExternalSpatialAccelerationPayload,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TAABB<double,3> *param_1)

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
  QueryImp<2,Chaos::FQueryFastDataVoid,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::FindAllIntersectionsImp_::__l2::FSimpleVisitor>
            (this,&local_88,(FQueryFastDataVoid *)local_68,&local_a0,param_1,&local_a8,
             (TVector<double,3> *)local_68._0_8_,(TVector<double,3> *)(local_68 + 8),local_38);
  return __return_storage_ptr__;
}

// FindBestBounds @ 14827fdb0

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::FindBestBounds(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
    lVar23 = (longlong)param_1 << 6;
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
      dVar8 = (*(double *)(pFVar24 + 0x28) - *(double *)(pFVar24 + 0x10)) * dVar12 +
              *(double *)(pFVar24 + 0x10);
      dVar9 = (*(double *)(pFVar24 + 0x30) - *(double *)(pFVar24 + 0x18)) * dVar12 +
              *(double *)(pFVar24 + 0x18);
      dVar7 = (*(double *)(pFVar24 + 0x38) - *(double *)(pFVar24 + 0x20)) * dVar12 +
              *(double *)(pFVar24 + 0x20);
      dVar28 = dVar9;
      if (((int)uVar22 != 1) && (dVar28 = dVar8, (int)uVar22 == 2)) {
        dVar28 = dVar7;
      }
      lVar25 = 0xc0;
      if (dVar28 <= dVar2) {
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
                     (longlong)*(int *)(pFVar4 + lVar26 + 0x44) * 0x40)) &&
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
                           (0x840,(ForAnyElementType *)(pFVar4 + lVar26 + 0x38),
                            (int *)(pFVar4 + lVar26 + 0x44));
      }
      lVar5 = *(longlong *)(pFVar4 + lVar26 + 0x38);
      *(int *)(pFVar4 + lVar26 + 0x40) = iVar19 + 1;
      uVar10 = *(undefined8 *)(pFVar24 + 8);
      lVar20 = (longlong)iVar19 * 0x40;
      *(undefined8 *)(lVar20 + lVar5) = *(undefined8 *)pFVar24;
      ((undefined8 *)(lVar20 + lVar5))[1] = uVar10;
      uVar10 = *(undefined8 *)(pFVar24 + 0x18);
      puVar1 = (undefined8 *)(lVar20 + 0x10 + lVar5);
      *puVar1 = *(undefined8 *)(pFVar24 + 0x10);
      puVar1[1] = uVar10;
      *(undefined8 *)(lVar20 + 0x20 + lVar5) = *(undefined8 *)(pFVar24 + 0x20);
      uVar10 = *(undefined8 *)(pFVar24 + 0x30);
      puVar1 = (undefined8 *)(lVar20 + 0x28 + lVar5);
      *puVar1 = *(undefined8 *)(pFVar24 + 0x28);
      puVar1[1] = uVar10;
      *(undefined8 *)(lVar20 + 0x38 + lVar5) = *(undefined8 *)(pFVar24 + 0x38);
      dVar28 = *(double *)((longlong)&param_3->TimeslicePhase + lVar25);
      dVar3 = *(double *)(pFVar24 + 0x10);
      if (dVar28 <= *(double *)(pFVar24 + 0x10)) {
        dVar3 = dVar28;
      }
      dVar28 = *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x80);
      if (*(double *)(pFVar24 + 0x18) <= dVar28) {
        dVar28 = *(double *)(pFVar24 + 0x18);
      }
      dVar30 = *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x78);
      dVar27 = *(double *)(pFVar24 + 0x20);
      if (dVar30 <= *(double *)(pFVar24 + 0x20)) {
        dVar27 = dVar30;
      }
      *(double *)((longlong)&param_3->TimeslicePhase + lVar25) = dVar3;
      *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x80) = dVar28;
      *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x78) = dVar27;
      dVar28 = *(double *)(pFVar24 + 0x28);
      if (*(double *)(pFVar24 + 0x28) <= *(double *)((longlong)(param_3->SplitInfos + -2) + lVar25))
      {
        dVar28 = *(double *)((longlong)(param_3->SplitInfos + -2) + lVar25);
      }
      bVar16 = true;
      dVar3 = *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x60);
      dVar30 = *(double *)(pFVar24 + 0x38);
      if (*(double *)(pFVar24 + 0x38) <= dVar3) {
        dVar30 = dVar3;
      }
      dVar3 = *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x68);
      dVar27 = *(double *)(pFVar24 + 0x30);
      if (*(double *)(pFVar24 + 0x30) <= dVar3) {
        dVar27 = dVar3;
      }
      *(double *)((longlong)(param_3->SplitInfos + -2) + lVar25) = dVar28;
      *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x68) = dVar27;
      *(double *)((longlong)param_3->SplitInfos + lVar25 + -0x60) = dVar30;
      dVar28 = *(double *)(pFVar4 + lVar26 + 0x58);
      dVar3 = *(double *)(pFVar4 + lVar26 + 0x50);
      dVar30 = *(double *)(pFVar4 + lVar26 + 0x48);
      dVar29 = __real_3ff0000000000000 / (double)(iVar19 + 1);
      dVar27 = (dVar9 - dVar3) * dVar29 + *(double *)(pFVar4 + lVar26 + 0x50);
      dVar31 = dVar29 * (dVar8 - dVar30) + *(double *)(pFVar4 + lVar26 + 0x48);
      dVar29 = (dVar7 - dVar28) * dVar29 + *(double *)(pFVar4 + lVar26 + 0x58);
      *(double *)(pFVar4 + lVar26 + 0x50) = dVar27;
      *(double *)(pFVar4 + lVar26 + 0x48) = dVar31;
      *(double *)(pFVar4 + lVar26 + 0x58) = dVar29;
      *(double *)(pFVar4 + lVar26 + 0x68) =
           (dVar9 - dVar27) * (dVar9 - dVar3) + *(double *)(pFVar4 + lVar26 + 0x68);
      *(double *)(pFVar4 + lVar26 + 0x60) =
           (dVar8 - dVar31) * (dVar8 - dVar30) + *(double *)(pFVar4 + lVar26 + 0x60);
      *(double *)(pFVar4 + lVar26 + 0x70) =
           (dVar7 - dVar29) * (dVar7 - dVar28) + *(double *)(pFVar4 + lVar26 + 0x70);
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
LAB_148280269:
      iVar19 = *local_res18;
      if (!bVar16) goto LAB_1482802ae;
      lVar23 = lVar23 + 0x40;
      param_1 = local_res10;
      if (iVar19 <= (int)(uVar21 + 1)) goto LAB_148280321;
      uVar22 = (ulonglong)(uint)param_4;
      uVar21 = uVar21 + 1;
    }
    if ((this->MaxNumToProcess < 1) || (this->NumProcessedThisSlice < this->MaxNumToProcess))
    goto LAB_148280269;
    iVar19 = *local_res18;
LAB_1482802ae:
    if (uVar21 != iVar19 - 1U) {
      iVar19 = uVar21 + 1;
    }
    *local_res18 = iVar19;
    param_1 = local_res10;
  }
LAB_148280321:
  this->NumProcessedThisSlice = this->NumProcessedThisSlice + (iVar19 - param_1);
  return;
}

// FindBestSibling @ 148280350

int __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::FindBestSibling(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  *this,TAABB<double,3> *param_1,bool *param_2)

{
  int *piVar1;
  TArray<TTuple<Chaos::TAABBTreeNode<double>_&,int,double>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double *pdVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  int local_res8;
  int iStack_100;
  
  pTVar2 = &this->PriorityQ;
  *param_2 = false;
  piVar1 = &(this->PriorityQ).ArrayMax;
  dVar14 = (double)FAABBTreeCVars::DynamicTreeBoundingBoxPadding;
  dVar32 = *(double *)&(param_1->MMax).field_0x10 + dVar14;
  dVar30 = *(double *)&(param_1->MMin).field_0x10 - dVar14;
  dVar11 = *(double *)&(param_1->MMin).field_0x8 - dVar14;
  dVar12 = *(double *)&(param_1->MMax).field_0x8 + dVar14;
  dVar15 = *(double *)&param_1->MMax + dVar14;
  dVar14 = *(double *)&param_1->MMin - dVar14;
  dVar13 = dVar12 - dVar11;
  (this->PriorityQ).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar23 = this->RootNode;
  uVar25 = 0;
  uVar22 = 0;
  if ((int)uVar23 < (this->Nodes).ArrayNum) {
    uVar22 = ~uVar23 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    iVar19 = (*pcVar10)();
    return iVar19;
  }
  pFVar24 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x70;
  dVar35 = *(double *)pFVar24;
  if (dVar14 <= *(double *)pFVar24) {
    dVar35 = dVar14;
  }
  dVar4 = *(double *)(pFVar24 + 8);
  if (dVar11 <= *(double *)(pFVar24 + 8)) {
    dVar4 = dVar11;
  }
  dVar5 = *(double *)(pFVar24 + 0x18);
  if (*(double *)(pFVar24 + 0x18) <= dVar15) {
    dVar5 = dVar15;
  }
  dVar34 = *(double *)(pFVar24 + 0x10);
  if (dVar30 <= *(double *)(pFVar24 + 0x10)) {
    dVar34 = dVar30;
  }
  dVar33 = *(double *)(pFVar24 + 0x28);
  if (*(double *)(pFVar24 + 0x28) <= dVar32) {
    dVar33 = dVar32;
  }
  dVar31 = *(double *)(pFVar24 + 0x20);
  if (*(double *)(pFVar24 + 0x20) <= dVar12) {
    dVar31 = dVar12;
  }
  if (((byte)pFVar24[0x6c] & 1) == 0) {
    dVar3 = *(double *)(pFVar24 + 0x38);
    if (dVar4 <= *(double *)(pFVar24 + 0x38)) {
      dVar3 = dVar4;
    }
    dVar4 = dVar3;
    if (*(double *)(pFVar24 + 0x30) <= dVar35) {
      dVar35 = *(double *)(pFVar24 + 0x30);
    }
    dVar3 = *(double *)(pFVar24 + 0x40);
    if (dVar34 <= *(double *)(pFVar24 + 0x40)) {
      dVar3 = dVar34;
    }
    dVar34 = dVar3;
    dVar3 = *(double *)(pFVar24 + 0x58);
    uVar26 = SUB84(dVar3,0);
    uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (dVar3 <= dVar33) {
      uVar26 = SUB84(dVar33,0);
      uVar28 = (undefined4)((ulonglong)dVar33 >> 0x20);
    }
    dVar33 = *(double *)(pFVar24 + 0x48);
    if (*(double *)(pFVar24 + 0x48) <= dVar5) {
      dVar33 = dVar5;
    }
    dVar5 = dVar33;
    dVar33 = (double)CONCAT44(uVar28,uVar26);
    dVar3 = *(double *)(pFVar24 + 0x50);
    uVar26 = SUB84(dVar3,0);
    uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (dVar3 <= dVar31) {
      uVar26 = SUB84(dVar31,0);
      uVar28 = (undefined4)((ulonglong)dVar31 >> 0x20);
    }
    dVar31 = (double)CONCAT44(uVar28,uVar26);
  }
  iVar19 = (this->PriorityQ).ArrayNum;
  dVar31 = dVar31 - dVar4;
  local_res8 = this->RootNode;
  dVar35 = ((dVar5 - dVar35) + (dVar5 - dVar35)) * ((dVar33 - dVar34) + dVar31) +
           (dVar31 + dVar31) * (dVar33 - dVar34);
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PriorityQ).ArrayNum = iVar19 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  lVar20 = (longlong)iVar19;
  *(FScriptContainerElement **)(pFVar9 + lVar20 * 0x18) = pFVar24;
  *(int *)(pFVar9 + lVar20 * 0x18 + 8) = this->RootNode;
  *(undefined8 *)(pFVar9 + lVar20 * 0x18 + 0x10) = 0;
  uVar23 = (this->PriorityQ).ArrayNum;
  if (uVar23 != 0) {
    lVar20 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar25 < (int)uVar23) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar10 = (code *)swi(3);
        iVar19 = (*pcVar10)();
        return iVar19;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      uVar25 = uVar25 + 1;
      pFVar24 = pFVar9 + lVar20;
      pdVar16 = *(double **)pFVar24;
      lVar21 = *(longlong *)(pFVar24 + 8);
      dVar4 = *(double *)(pFVar9 + lVar20 + 0x10);
      lVar20 = lVar20 + 0x18;
      bVar18 = false;
      dVar33 = *pdVar16;
      dVar31 = pdVar16[1];
      dVar5 = pdVar16[2];
      dVar3 = pdVar16[3];
      dVar17 = pdVar16[4];
      dVar34 = pdVar16[5];
      uVar41 = (undefined4)((ulonglong)dVar5 >> 0x20);
      uVar26 = (undefined4)((ulonglong)dVar17 >> 0x20);
      uVar28 = SUB84(dVar33,0);
      uVar37 = (undefined4)((ulonglong)dVar33 >> 0x20);
      uVar38 = SUB84(dVar31,0);
      uVar39 = (undefined4)((ulonglong)dVar31 >> 0x20);
      if ((*(byte *)((longlong)pdVar16 + 0x6c) & 1) == 0) {
        dVar36 = pdVar16[7];
        dVar6 = pdVar16[8];
        dVar7 = pdVar16[10];
        dVar8 = pdVar16[6];
        if (dVar8 <= dVar33) {
          uVar28 = SUB84(dVar8,0);
          uVar37 = (undefined4)((ulonglong)dVar8 >> 0x20);
        }
        uVar27 = SUB84(dVar36,0);
        uVar29 = (int)((ulonglong)dVar36 >> 0x20);
        if (dVar31 <= dVar36) {
          uVar27 = uVar38;
          uVar29 = uVar39;
        }
        uVar39 = uVar29;
        uVar38 = uVar27;
        uVar40 = SUB84(dVar6,0);
        uVar42 = (int)((ulonglong)dVar6 >> 0x20);
        if (dVar5 <= dVar6) {
          uVar40 = SUB84(dVar5,0);
          uVar42 = uVar41;
        }
        dVar31 = pdVar16[9];
        if (pdVar16[9] <= dVar3) {
          dVar31 = dVar3;
        }
        uVar27 = SUB84(dVar7,0);
        uVar29 = (int)((ulonglong)dVar7 >> 0x20);
        if (dVar7 <= dVar17) {
          uVar27 = SUB84(dVar17,0);
          uVar29 = uVar26;
        }
        dVar33 = pdVar16[0xb];
        if (pdVar16[0xb] <= dVar34) {
          dVar33 = dVar34;
        }
      }
      else {
        uVar23 = *(uint *)(pdVar16 + 0xc);
        uVar22 = 0;
        if ((int)uVar23 < *(int *)&(this->Leaves).field_0x8) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          iVar19 = (*pcVar10)();
          return iVar19;
        }
        bVar18 = *(uint *)(*(longlong *)&this->Leaves + 0x38 + (longlong)(int)uVar23 * 0x48) <
                 (uint)FAABBTreeCVars::DynamicTreeLeafCapacity;
        uVar27 = SUB84(dVar17,0);
        uVar29 = uVar26;
        dVar31 = dVar3;
        dVar33 = dVar34;
        uVar40 = SUB84(dVar5,0);
        uVar42 = uVar41;
      }
      dVar5 = (double)CONCAT44(uVar29,uVar27);
      if ((double)CONCAT44(uVar29,uVar27) <= dVar12) {
        dVar5 = dVar12;
      }
      dVar34 = dVar31;
      if (dVar31 <= dVar15) {
        dVar34 = dVar15;
      }
      dVar3 = (double)CONCAT44(uVar29,uVar27) - (double)CONCAT44(uVar39,uVar38);
      dVar17 = (double)CONCAT44(uVar39,uVar38);
      if (dVar11 <= (double)CONCAT44(uVar39,uVar38)) {
        dVar17 = dVar11;
      }
      dVar36 = dVar33;
      if (dVar33 <= dVar32) {
        dVar36 = dVar32;
      }
      dVar31 = dVar31 - (double)CONCAT44(uVar37,uVar28);
      dVar6 = (double)CONCAT44(uVar37,uVar28);
      if (dVar14 <= (double)CONCAT44(uVar37,uVar28)) {
        dVar6 = dVar14;
      }
      dVar33 = dVar33 - (double)CONCAT44(uVar42,uVar40);
      dVar7 = (double)CONCAT44(uVar42,uVar40);
      if (dVar30 <= (double)CONCAT44(uVar42,uVar40)) {
        dVar7 = dVar30;
      }
      dVar5 = dVar5 - dVar17;
      dVar5 = ((dVar36 - dVar7) + dVar5) * ((dVar34 - dVar6) + (dVar34 - dVar6)) +
              (dVar5 + dVar5) * (dVar36 - dVar7);
      dVar34 = dVar4 + dVar5;
      if (dVar34 < dVar35) {
        iStack_100 = (int)lVar21;
        local_res8 = iStack_100;
        *param_2 = bVar18;
        dVar35 = dVar34;
      }
      dVar4 = dVar4 + (dVar5 - ((dVar31 + dVar31) * (dVar33 + dVar3) + (dVar3 + dVar3) * dVar33));
      if (((*(byte *)((longlong)pdVar16 + 0x6c) & 1) == 0) &&
         (dVar4 + ((dVar15 - dVar14) + (dVar15 - dVar14)) * ((dVar32 - dVar30) + dVar13) +
                  (dVar13 + dVar13) * (dVar32 - dVar30) < dVar35)) {
        iVar19 = (this->PriorityQ).ArrayNum;
        uVar23 = iVar19 + 2;
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (*piVar1 < (int)uVar23) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,uVar23,&pTVar2->AllocatorInstance,iVar19,piVar1);
        }
        uVar23 = *(uint *)(pdVar16 + 0xc);
        uVar22 = 0;
        if ((int)uVar23 < (this->Nodes).ArrayNum) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          iVar19 = (*pcVar10)();
          return iVar19;
        }
        iVar19 = (this->PriorityQ).ArrayNum;
        pFVar24 = (this->Nodes).AllocatorInstance.Data;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar21 = (longlong)iVar19;
        (this->PriorityQ).ArrayNum = iVar19 + 1;
        pFVar9 = (pTVar2->AllocatorInstance).Data;
        *(FScriptContainerElement **)(pFVar9 + lVar21 * 0x18) =
             pFVar24 + (longlong)(int)uVar23 * 0x70;
        *(undefined4 *)(pFVar9 + lVar21 * 0x18 + 8) = *(undefined4 *)(pdVar16 + 0xc);
        *(double *)(pFVar9 + lVar21 * 0x18 + 0x10) = dVar4;
        uVar23 = *(uint *)((longlong)pdVar16 + 100);
        uVar22 = 0;
        if ((int)uVar23 < (this->Nodes).ArrayNum) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          iVar19 = (*pcVar10)();
          return iVar19;
        }
        iVar19 = (this->PriorityQ).ArrayNum;
        pFVar24 = (this->Nodes).AllocatorInstance.Data;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar21 = (longlong)iVar19;
        (this->PriorityQ).ArrayNum = iVar19 + 1;
        pFVar9 = (pTVar2->AllocatorInstance).Data;
        *(FScriptContainerElement **)(pFVar9 + lVar21 * 0x18) =
             pFVar24 + (longlong)(int)uVar23 * 0x70;
        *(undefined4 *)(pFVar9 + lVar21 * 0x18 + 8) = *(undefined4 *)((longlong)pdVar16 + 100);
        *(double *)(pFVar9 + lVar21 * 0x18 + 0x10) = dVar4;
      }
      uVar23 = (this->PriorityQ).ArrayNum;
    } while (uVar23 != uVar25);
  }
  return local_res8;
}

// FreeWorkSnapshot @ 1482836c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::FreeWorkSnapshot(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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

// GetLastIndexToProcess @ 148289490

int __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::GetLastIndexToProcess
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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

// GetNewWorkSnapshot @ 14828b2a0

int __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::GetNewWorkSnapshot
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar3 = (this->WorkPoolFreeList).ArrayNum;
  if (iVar3 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf8,8,1,&(this->WorkPool).AllocatorInstance,&(this->WorkPool).ArrayNum,
                       &(this->WorkPool).ArrayMax);
    lVar5 = (longlong)iVar3;
    DefaultConstructItems<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::FWorkSnapshot,int>
              ((this->WorkPool).AllocatorInstance.Data + lVar5 * 0xf8,1);
    return (int)lVar5;
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

// InsertLeaf @ 148293ec0

/* WARNING: Enum "Type": Some values do not have unique names */

NodeAndLeafIndices __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::InsertLeaf(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
             *this,FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2)

{
  TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *this_00;
  double *pdVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  NodeAndLeafIndices NVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  TAABB<double,3> *in_R9;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  bool local_res8 [8];
  NodeAndLeafIndices local_res10;
  TAABB<double,3> *local_res18;
  undefined1 local_f0 [8];
  undefined1 local_e8 [16];
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> local_b0;
  
  local_res10 = (NodeAndLeafIndices)param_1;
  local_res18 = param_2;
  if (this->RootNode == -1) {
    AllocateLeafNodeAndLeaf(this,(FExternalSpatialAccelerationPayload *)local_e8,param_2);
    this->RootNode = (int)local_e8._0_8_;
    (param_1->Component).ObjectKey = (FObjectKey)local_e8._0_8_;
    return (NodeAndLeafIndices)param_1;
  }
  uVar10 = FindBestSibling(this,in_R9,local_res8);
  uVar19 = ~uVar10 >> 0x1f;
  if (local_res8[0] == false) {
    AllocateLeafNodeAndLeaf(this,(FExternalSpatialAccelerationPayload *)local_f0,param_2);
    uVar12 = 0;
    if ((int)uVar10 < (this->Nodes).ArrayNum) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    lVar17 = (longlong)(int)uVar10 * 0x70;
    uVar12 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar17 + 0x68);
    uVar18 = AllocateInternalNode(this);
    uVar11 = 0;
    if ((int)uVar18 < (this->Nodes).ArrayNum) {
      uVar11 = ~uVar18 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    pFVar3 = (this->Nodes).AllocatorInstance.Data;
    lVar15 = (longlong)(int)uVar18 * 0x70;
    if (uVar18 == uVar12) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181246422089988479>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x681,"NewParent != OldParent");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        NVar14 = (NodeAndLeafIndices)(*pcVar5)();
        return NVar14;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`Chaos::
                    TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    ::InsertLeaf'::`12'::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    *(uint *)(pFVar3 + lVar15 + 0x68) = uVar12;
    *(undefined4 *)(pFVar3 + lVar15 + 100) = local_f0._0_4_;
    *(uint *)(pFVar3 + lVar15 + 0x60) = uVar10;
    uVar11 = 0;
    if ((int)uVar10 < (this->Nodes).ArrayNum) {
      uVar11 = uVar19;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    pFVar4 = (this->Nodes).AllocatorInstance.Data;
    uVar8 = *(undefined8 *)(pFVar4 + lVar17 + 8);
    *(undefined8 *)(pFVar3 + lVar15) = *(undefined8 *)(pFVar4 + lVar17);
    *(undefined8 *)(pFVar3 + lVar15 + 8) = uVar8;
    *(undefined8 *)(pFVar3 + lVar15 + 0x10) = *(undefined8 *)(pFVar4 + lVar17 + 0x10);
    uVar8 = *(undefined8 *)(pFVar4 + lVar17 + 0x18 + 8);
    *(undefined8 *)(pFVar3 + lVar15 + 0x18) = *(undefined8 *)(pFVar4 + lVar17 + 0x18);
    *(undefined8 *)(pFVar3 + lVar15 + 0x18 + 8) = uVar8;
    *(undefined8 *)(pFVar3 + lVar15 + 0x28) = *(undefined8 *)(pFVar4 + lVar17 + 0x28);
    uVar11 = 0;
    if ((int)uVar10 < (this->Nodes).ArrayNum) {
      uVar11 = uVar19;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    if (((byte)(this->Nodes).AllocatorInstance.Data[lVar17 + 0x6c] & 1) == 0) {
      uVar11 = 0;
      if ((int)uVar10 < (this->Nodes).ArrayNum) {
        uVar11 = uVar19;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        NVar14 = (NodeAndLeafIndices)(*pcVar5)();
        return NVar14;
      }
      pFVar4 = (this->Nodes).AllocatorInstance.Data;
      dVar24 = *(double *)(pFVar4 + lVar17 + 0x30);
      uVar20 = SUB84(dVar24,0);
      uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar6 = *(double *)(pFVar4 + lVar17 + 0x38);
      uVar22 = SUB84(dVar6,0);
      uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar7 = *(double *)(pFVar3 + lVar15);
      if (dVar7 <= dVar24) {
        uVar20 = SUB84(dVar7,0);
        uVar21 = (undefined4)((ulonglong)dVar7 >> 0x20);
      }
      dVar24 = *(double *)(pFVar3 + lVar15 + 8);
      if (dVar24 <= dVar6) {
        uVar22 = SUB84(dVar24,0);
        uVar23 = (undefined4)((ulonglong)dVar24 >> 0x20);
      }
      dVar24 = *(double *)(pFVar4 + lVar17 + 0x40);
      if (*(double *)(pFVar3 + lVar15 + 0x10) <= *(double *)(pFVar4 + lVar17 + 0x40)) {
        dVar24 = *(double *)(pFVar3 + lVar15 + 0x10);
      }
      *(ulonglong *)(pFVar3 + lVar15) = CONCAT44(uVar21,uVar20);
      *(ulonglong *)(pFVar3 + lVar15 + 8) = CONCAT44(uVar23,uVar22);
      *(double *)(pFVar3 + lVar15 + 0x10) = dVar24;
      dVar24 = *(double *)(pFVar4 + lVar17 + 0x48);
      uVar20 = SUB84(dVar24,0);
      uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar6 = *(double *)(pFVar3 + lVar15 + 0x20);
      uVar22 = SUB84(dVar6,0);
      uVar23 = (undefined4)((ulonglong)dVar6 >> 0x20);
      dVar7 = *(double *)(pFVar3 + lVar15 + 0x18);
      if (dVar24 <= dVar7) {
        uVar20 = SUB84(dVar7,0);
        uVar21 = (undefined4)((ulonglong)dVar7 >> 0x20);
      }
      dVar24 = *(double *)(pFVar4 + lVar17 + 0x50);
      if (dVar6 <= dVar24) {
        uVar22 = SUB84(dVar24,0);
        uVar23 = (undefined4)((ulonglong)dVar24 >> 0x20);
      }
      dVar24 = *(double *)(pFVar3 + lVar15 + 0x28);
      if (*(double *)(pFVar3 + lVar15 + 0x28) <= *(double *)(pFVar4 + lVar17 + 0x58)) {
        dVar24 = *(double *)(pFVar4 + lVar17 + 0x58);
      }
      *(ulonglong *)(pFVar3 + lVar15 + 0x18) = CONCAT44(uVar21,uVar20);
      *(ulonglong *)(pFVar3 + lVar15 + 0x20) = CONCAT44(uVar23,uVar22);
      *(double *)(pFVar3 + lVar15 + 0x28) = dVar24;
    }
    uVar20 = local_f0._0_4_;
    uVar11 = 0;
    if ((int)local_f0._0_4_ < (this->Nodes).ArrayNum) {
      uVar11 = (uint)~local_f0._0_4_ >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    lVar16 = (longlong)(int)uVar20 * 0x70;
    pFVar4 = (this->Nodes).AllocatorInstance.Data;
    uVar8 = *(undefined8 *)(pFVar4 + lVar16 + 8);
    *(undefined8 *)(pFVar3 + lVar15 + 0x30) = *(undefined8 *)(pFVar4 + lVar16);
    *(undefined8 *)(pFVar3 + lVar15 + 0x30 + 8) = uVar8;
    *(undefined8 *)(pFVar3 + lVar15 + 0x40) = *(undefined8 *)(pFVar4 + lVar16 + 0x10);
    uVar8 = *(undefined8 *)(pFVar4 + lVar16 + 0x18 + 8);
    *(undefined8 *)(pFVar3 + lVar15 + 0x48) = *(undefined8 *)(pFVar4 + lVar16 + 0x18);
    *(undefined8 *)(pFVar3 + lVar15 + 0x48 + 8) = uVar8;
    *(undefined8 *)(pFVar3 + lVar15 + 0x58) = *(undefined8 *)(pFVar4 + lVar16 + 0x28);
    if (uVar12 == 0xffffffff) {
      this->RootNode = uVar18;
    }
    else {
      iVar13 = WhichChildAmI(this,uVar10);
      uVar11 = 0;
      if ((int)uVar12 < (this->Nodes).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        NVar14 = (NodeAndLeafIndices)(*pcVar5)();
        return NVar14;
      }
      *(uint *)((this->Nodes).AllocatorInstance.Data +
               ((longlong)(int)uVar12 * 0x1c + (longlong)iVar13) * 4 + 0x60) = uVar18;
    }
    if (uVar10 == uVar18) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181246422089988455>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x699,"BestSibling != NewParent");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        NVar14 = (NodeAndLeafIndices)(*pcVar5)();
        return NVar14;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`Chaos::
                    TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    ::InsertLeaf'::`40'::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    uVar12 = 0;
    if ((int)uVar10 < (this->Nodes).ArrayNum) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    *(uint *)((this->Nodes).AllocatorInstance.Data + lVar17 + 0x68) = uVar18;
    if (local_f0._0_4_ == uVar18) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181246422089988450>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x69e,"NewLeafIndices.NodeIdx != NewParent");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        NVar14 = (NodeAndLeafIndices)(*pcVar5)();
        return NVar14;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`Chaos::
                    TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    ::InsertLeaf'::`60'::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    lVar17 = (longlong)(int)local_f0._0_4_;
    uVar10 = 0;
    if ((int)local_f0._0_4_ < (this->Nodes).ArrayNum) {
      uVar10 = (uint)~local_f0._0_4_ >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    *(uint *)((this->Nodes).AllocatorInstance.Data + lVar17 * 0x70 + 0x68) = uVar18;
    UpdateAncestorBounds(this,uVar18,true);
    *(ulonglong *)local_res10 = CONCAT44(local_f0._4_4_,local_f0._0_4_);
  }
  else {
    uVar12 = 0;
    if ((int)uVar10 < (this->Nodes).ArrayNum) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    lVar17 = (longlong)(int)uVar10 * 0x70;
    uVar12 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar17 + 0x60);
    uVar18 = ~uVar12 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar12 < *(int *)&(this->Leaves).field_0x8) {
      uVar11 = uVar18;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    local_b0.Bounds.MMin._0_8_ = *(undefined8 *)&in_R9->MMin;
    local_b0.Bounds.MMin._8_8_ = *(undefined8 *)&(in_R9->MMin).field_0x8;
    local_b0.Payload.Component.ObjectKey.ObjectIndex = *(int *)&(local_res18->MMin).field_0x0;
    local_b0.Payload.Component.ObjectKey.ObjectSerialNumber = *(int *)&(local_res18->MMin).field_0x4
    ;
    local_b0.Payload.BoneId = *(int *)&(local_res18->MMin).field_0x8;
    local_b0.Payload.CachedUniqueIdx.Idx = *(int *)&(local_res18->MMin).field_0xc;
    lVar15 = (longlong)(int)uVar12;
    local_b0.Bounds.MMax._0_8_ = *(undefined8 *)&in_R9->MMax;
    local_b0.Bounds.MMax._8_8_ = *(undefined8 *)&(in_R9->MMax).field_0x8;
    local_b0.Bounds.MMin._16_8_ = *(undefined8 *)&(in_R9->MMin).field_0x10;
    local_b0.Bounds.MMax._16_8_ = *(undefined8 *)&(in_R9->MMax).field_0x10;
    TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::AddElement
              ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
               (*(longlong *)&this->Leaves + lVar15 * 0x48),&local_b0);
    uVar11 = 0;
    if ((int)uVar12 < *(int *)&(this->Leaves).field_0x8) {
      uVar11 = uVar18;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    this_00 = (TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *)
              (*(longlong *)&this->Leaves + lVar15 * 0x48);
    TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1>::ComputeBounds
              (this_00,(TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                        *)(this_00 + 1),this->bDynamicTree);
    uVar11 = 0;
    if ((int)uVar12 < *(int *)&(this->Leaves).field_0x8) {
      uVar11 = uVar18;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    lVar16 = *(longlong *)&this->Leaves;
    dStack_c0 = (double)FAABBTreeCVars::DynamicTreeBoundingBoxPadding;
    pdVar2 = (double *)(lVar16 + 0x18 + lVar15 * 0x48);
    pdVar1 = (double *)(lVar16 + lVar15 * 0x48);
    local_e8._8_8_ = *pdVar1;
    dStack_d8 = pdVar1[1];
    local_d0 = *(double *)(lVar16 + 0x10 + lVar15 * 0x48);
    local_b8 = *(double *)(lVar16 + 0x28 + lVar15 * 0x48) + dStack_c0;
    local_c8 = *pdVar2 + dStack_c0;
    uVar11 = 0;
    if ((int)uVar10 < (this->Nodes).ArrayNum) {
      uVar11 = uVar19;
    }
    dVar7 = (double)local_e8._8_8_ - dStack_c0;
    dVar24 = dStack_d8 - dStack_c0;
    dVar6 = local_d0 - dStack_c0;
    dStack_c0 = pdVar2[1] + dStack_c0;
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      NVar14 = (NodeAndLeafIndices)(*pcVar5)();
      return NVar14;
    }
    pFVar3 = (this->Nodes).AllocatorInstance.Data;
    *(double *)(pFVar3 + lVar17) = dVar7;
    *(double *)(pFVar3 + lVar17 + 8) = dVar24;
    *(double *)(pFVar3 + lVar17 + 0x10) = dVar6;
    *(double *)(pFVar3 + lVar17 + 0x18) = local_c8;
    *(double *)(pFVar3 + lVar17 + 0x18 + 8) = dStack_c0;
    *(double *)(pFVar3 + lVar17 + 0x28) = local_b8;
    UpdateAncestorBounds(this,uVar10,true);
    *(uint *)local_res10 = uVar10;
    *(uint *)((longlong)local_res10 + 4) = uVar12;
  }
  return local_res10;
}

// IsTreeDynamic @ 148295140

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::IsTreeDynamic(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                *this)

{
  return this->bDynamicTree;
}

// NeedUpdateElement @ 148296c40

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::NeedUpdateElement(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    *this,FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2)

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
  uint uVar14;
  TAABB<double,3> *pTVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  
  pFVar12 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Find
                      (&this->PayloadToInfo,param_1);
  if (((pFVar12 != (FAABBTreePayloadInfo *)0x0) && (this->bDynamicTree != false)) &&
     (pFVar12->LeafIdx != -1)) {
    uVar11 = pFVar12->NodeIdx;
    uVar19 = 0;
    uVar14 = 0;
    if ((int)uVar11 < (this->Nodes).ArrayNum) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if ((uVar14 == 0) &&
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
    pTVar15 = param_2;
    uVar17 = uVar19;
    do {
      dVar3 = *(double *)&pTVar15->MMin;
      if (dVar3 < *(double *)
                   (pFVar4 + ((longlong)(int)uVar11 * 0x70 - (longlong)param_2) + (longlong)pTVar15)
         ) {
        return true;
      }
      if (*(double *)
           (pFVar4 + (0x18 - (longlong)param_2) + (longlong)(int)uVar11 * 0x70 +
           (longlong)&pTVar15->MMin) <= dVar3 &&
          dVar3 != *(double *)
                    (pFVar4 + (0x18 - (longlong)param_2) + (longlong)(int)uVar11 * 0x70 +
                    (longlong)&pTVar15->MMin)) {
        return true;
      }
      uVar17 = uVar17 + 1;
      pTVar15 = (TAABB<double,3> *)&(pTVar15->MMin).field_0x8;
    } while ((longlong)uVar17 < 3);
    pTVar13 = &param_2->MMax;
    lVar21 = (longlong)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x18) - (longlong)pTVar13;
    uVar17 = uVar19;
    while( true ) {
      dVar3 = *(double *)pTVar13;
      pdVar1 = (double *)(lVar21 + (longlong)pTVar13);
      if ((dVar3 < *(double *)
                    (pFVar4 + ((longlong)(int)uVar11 * 0x70 -
                              (longlong)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x18)) +
                    (longlong)pdVar1)) || (*pdVar1 <= dVar3 && dVar3 != *pdVar1)) break;
      uVar17 = uVar17 + 1;
      pTVar13 = (TVector<double,3> *)&pTVar13->field_0x8;
      if (2 < (longlong)uVar17) {
        uVar11 = pFVar12->LeafIdx;
        lVar21 = (longlong)(int)uVar11;
        uVar14 = 0;
        if ((int)uVar11 < *(int *)&(this->Leaves).field_0x8) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        lVar5 = *(longlong *)&this->Leaves;
        uVar17 = uVar19;
        if (0 < *(int *)(lVar5 + 0x38 + lVar21 * 0x48)) {
          while( true ) {
            uVar18 = (uint)uVar19;
            uVar20 = ~uVar18 >> 0x1f;
            uVar14 = 0;
            uVar11 = uVar14;
            if ((int)uVar18 < *(int *)(lVar5 + 0x38 + lVar21 * 0x48)) {
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
            lVar6 = *(longlong *)(lVar5 + 0x30 + lVar21 * 0x48);
            if (((*(int *)(uVar17 + lVar6) == (param_1->Component).ObjectKey.ObjectIndex) &&
                (*(int *)(uVar17 + 4 + lVar6) == (param_1->Component).ObjectKey.ObjectSerialNumber))
               && (*(int *)(uVar17 + 8 + lVar6) == param_1->BoneId)) break;
            uVar19 = (ulonglong)(uVar18 + 1);
            uVar17 = uVar17 + 0x40;
            if (*(int *)(lVar5 + 0x38 + lVar21 * 0x48) <= (int)(uVar18 + 1)) {
              return false;
            }
          }
          uVar11 = uVar14;
          if ((int)uVar18 < *(int *)(lVar5 + 0x38 + lVar21 * 0x48)) {
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
          lVar6 = *(longlong *)(lVar5 + 0x30 + lVar21 * 0x48);
          uVar8 = *(undefined8 *)&(param_2->MMin).field_0x8;
          lVar16 = (longlong)(int)uVar18 * 0x40;
          puVar2 = (undefined8 *)(lVar16 + 0x10 + lVar6);
          *puVar2 = *(undefined8 *)&param_2->MMin;
          puVar2[1] = uVar8;
          *(undefined8 *)(lVar16 + 0x20 + lVar6) = *(undefined8 *)&(param_2->MMin).field_0x10;
          uVar8 = *(undefined8 *)&(param_2->MMax).field_0x8;
          puVar2 = (undefined8 *)(lVar16 + 0x28 + lVar6);
          *puVar2 = *(undefined8 *)&param_2->MMax;
          puVar2[1] = uVar8;
          *(undefined8 *)(lVar16 + 0x38 + lVar6) = *(undefined8 *)&(param_2->MMax).field_0x10;
          if ((int)uVar18 < *(int *)(lVar5 + 0x38 + lVar21 * 0x48)) {
            uVar14 = uVar20;
          }
          if ((uVar14 == 0) &&
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
        }
        return false;
      }
    }
  }
  return true;
}

// Overlap @ 148299460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::Overlap(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
          *this,TAABB<double,3> *param_1,
         ISpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_2)

{
  undefined1 auStackY_f8 [32];
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> local_a8;
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
  QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
            (this,&local_88,(FQueryFastDataVoid *)local_68,&local_a0,param_1,&local_a8,
             (TVector<double,3> *)local_68._0_8_,(TVector<double,3> *)(local_68 + 8),local_38);
  return;
}

// PrepareCopyTimeSliced @ 14829c360

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::PrepareCopyTimeSliced
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *pTVar6;
  int iVar7;
  uint uVar8;
  TUniquePtr<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>,TDefaultDelete<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>_>_>
  *pTVar9;
  longlong local_28 [2];
  
  do {
    if (this == (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                 *)param_1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("this != &InFrom",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x88b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(uchar *)((longlong)
                   &((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                      *)param_1)->_padding_ + 5) != '\x01') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFrom.GetType() == ESpatialAcceleration::AABBTree",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x88c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    Reset(this);
    *(uchar *)((longlong)&this->_padding_ + 5) =
         *(uchar *)((longlong)
                    &((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                       *)param_1)->_padding_ + 5);
    *(int *)&this->_padding_ =
         (int)((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                *)param_1)->_padding_;
    *(bool *)((longlong)&this->_padding_ + 4) =
         *(bool *)((longlong)
                   &((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                      *)param_1)->_padding_ + 4);
    this->DirtyElementGridCellSize =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->DirtyElementGridCellSize;
    this->DirtyElementGridCellSizeInv =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->DirtyElementGridCellSizeInv;
    this->DirtyElementMaxGridCellQueryCount =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->DirtyElementMaxGridCellQueryCount;
    this->DirtyElementMaxPhysicalSizeInCells =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->DirtyElementMaxPhysicalSizeInCells;
    this->DirtyElementMaxCellCapacity =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->DirtyElementMaxCellCapacity;
    this->MaxChildrenInLeaf =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->MaxChildrenInLeaf;
    this->MaxTreeDepth =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->MaxTreeDepth;
    this->MaxPayloadBounds =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->MaxPayloadBounds;
    this->MaxNumToProcess =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->MaxNumToProcess;
    this->NumProcessedThisSlice =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->NumProcessedThisSlice;
    this->StartSliceTimeStamp =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->StartSliceTimeStamp;
    this->bShouldRebuild =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->bShouldRebuild;
    this->RootNode =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->RootNode;
    this->FirstFreeInternalNode =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->FirstFreeInternalNode;
    this->FirstFreeLeafNode =
         ((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->FirstFreeLeafNode;
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->Nodes).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->Nodes).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,uVar8,&(this->Nodes).AllocatorInstance,(this->Nodes).ArrayNum,
                 &(this->Nodes).ArrayMax);
    }
    uVar8 = *(uint *)&(((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                         *)param_1)->Leaves).field_0x8;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (*(int *)&(this->Leaves).field_0xc < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,uVar8,(ForAnyElementType *)&this->Leaves,*(int *)&(this->Leaves).field_0x8,
                 (int *)&(this->Leaves).field_0xc);
    }
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->DirtyElements).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->DirtyElements).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,uVar8,&(this->DirtyElements).AllocatorInstance,
                 (this->DirtyElements).ArrayNum,&(this->DirtyElements).ArrayMax);
    }
    TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,Chaos::DirtyGridHashEntry>,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>,FDefaultSetAllocator>
               *)&this->CellHashToFlatArray,
              *(int *)&(((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                          *)param_1)->CellHashToFlatArray).field_0x8 -
              *(int *)&(((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                          *)param_1)->CellHashToFlatArray).field_0x34);
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->FlattenedCellArrayOfDirtyIndices).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->FlattenedCellArrayOfDirtyIndices).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,&(this->FlattenedCellArrayOfDirtyIndices).AllocatorInstance,
                 (this->FlattenedCellArrayOfDirtyIndices).ArrayNum,
                 &(this->FlattenedCellArrayOfDirtyIndices).ArrayMax);
    }
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->DirtyElementsGridOverflow).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->DirtyElementsGridOverflow).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,&(this->DirtyElementsGridOverflow).AllocatorInstance,
                 (this->DirtyElementsGridOverflow).ArrayNum,
                 &(this->DirtyElementsGridOverflow).ArrayMax);
    }
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->GlobalPayloads).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->GlobalPayloads).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,uVar8,&(this->GlobalPayloads).AllocatorInstance,
                 (this->GlobalPayloads).ArrayNum,&(this->GlobalPayloads).ArrayMax);
    }
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->PayloadToInfo).Elements.ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &(this->PayloadToInfo).Elements.ArrayMax;
    if (*piVar1 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,uVar8,(ForAnyElementType *)&this->PayloadToInfo,
                 (this->PayloadToInfo).Elements.ArrayNum,piVar1);
    }
    iVar7 = 1;
    if (uVar8 + 1 != 0) {
      iVar7 = uVar8 + 1;
    }
    uVar2 = (ulonglong)(iVar7 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar8 = 1 << ((byte)lVar3 & 0x1f);
    if (*(uint *)&(this->PayloadToInfo).HashTable.field_0x8 < uVar8) {
      FHashTable::Resize((FHashTable *)&(this->PayloadToInfo).HashTable,uVar8);
    }
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->OverlappingLeaves).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->OverlappingLeaves).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,&(this->OverlappingLeaves).AllocatorInstance,
                 (this->OverlappingLeaves).ArrayNum,&(this->OverlappingLeaves).ArrayMax);
    }
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->OverlappingOffsets).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->OverlappingOffsets).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,&(this->OverlappingOffsets).AllocatorInstance,
                 (this->OverlappingOffsets).ArrayNum,&(this->OverlappingOffsets).ArrayMax);
    }
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->OverlappingPairs).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->OverlappingPairs).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar8,&(this->OverlappingPairs).AllocatorInstance,
                 (this->OverlappingPairs).ArrayNum,&(this->OverlappingPairs).ArrayMax);
    }
    uVar8 = (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               *)param_1)->OverlappingCounts).ArrayNum;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((this->OverlappingCounts).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,&(this->OverlappingCounts).AllocatorInstance,
                 (this->OverlappingCounts).ArrayNum,&(this->OverlappingCounts).ArrayMax);
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
    pTVar9 = &this->DirtyElementTree;
    if ((((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *)param_1)->DirtyElementTree).Ptr ==
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
         *)0x0) {
      pTVar6 = pTVar9->Ptr;
      pTVar9->Ptr = (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                     *)0x0;
      if (pTVar6 != (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                     *)0x0) {
        ~TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  (pTVar6);
        ::operator_delete(pTVar6,0x1f8);
      }
      return;
    }
    if (pTVar9->Ptr ==
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
         *)0x0) {
      pTVar6 = ::operator_new(0x1f8);
      if (pTVar6 == (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                     *)0x0) {
        pTVar6 = (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  *)0x0;
      }
      else {
        pTVar6 = TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                           (pTVar6);
      }
      if (pTVar9 == (TUniquePtr<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>,TDefaultDelete<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>_>_>
                     *)local_28) {
        if (pTVar6 != (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                       *)0x0) {
          ~TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    (pTVar6);
          goto LAB_14829c7e1;
        }
      }
      else {
        this_00 = pTVar9->Ptr;
        pTVar9->Ptr = pTVar6;
        if (this_00 !=
            (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
             *)0x0) {
          ~TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    (this_00);
          pTVar6 = this_00;
LAB_14829c7e1:
          ::operator_delete(pTVar6,0x1f8);
        }
      }
    }
    this = pTVar9->Ptr;
    param_1 = (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
              (((TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                 *)param_1)->DirtyElementTree).Ptr;
  } while( true );
}

// ProgressAsyncTimeSlicing @ 14829dd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::ProgressAsyncTimeSlicing
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
      goto LAB_14829de8c;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14829de8c:
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

// ProgressCopyTimeSliced @ 14829e030

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::ProgressCopyTimeSliced
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  LARGE_INTEGER local_res10;
  int local_res18 [2];
  
  if ((this == (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
          TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
  bVar2 = ContinueTimeSliceCopy<TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                    ((TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *)
                     (param_1 + 1),&this->Nodes,local_res18,&local_res8);
  if ((((((bVar2) &&
         (bVar2 = ContinueTimeSliceCopy<Chaos::TLeafContainer<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                            ((TLeafContainer<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>_>
                              *)(param_1 + 2),&this->Leaves,local_res18,&local_res8), bVar2)) &&
        (bVar2 = ContinueTimeSliceCopy<TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                           ((TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                             *)(param_1 + 3),&this->DirtyElements,local_res18,&local_res8), bVar2))
       && ((bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_1 + 10),
                               &this->FlattenedCellArrayOfDirtyIndices,local_res18,&local_res8),
           bVar2 && (bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                                       ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_1 + 0xb),
                                        &this->DirtyElementsGridOverflow,local_res18,&local_res8),
                    bVar2)))) &&
      ((bVar2 = ContinueTimeSliceCopy<TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                          ((TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                            *)&param_1[0x10].SyncTimestamp,&this->GlobalPayloads,local_res18,
                           &local_res8), bVar2 &&
       ((bVar2 = ContinueTimeSliceCopy<Chaos::TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                           ((TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>
                             *)&param_1[0x11].SyncTimestamp,&this->PayloadToInfo,local_res18,
                            &local_res8), bVar2 &&
        (bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                           ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[0x1a].SyncTimestamp,
                            &this->OverlappingLeaves,local_res18,&local_res8), bVar2)))))) &&
     ((bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                         ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[0x1b].SyncTimestamp,
                          &this->OverlappingOffsets,local_res18,&local_res8), bVar2 &&
      ((bVar2 = ContinueTimeSliceCopy<TArray<int,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                          ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[0x1d].SyncTimestamp,
                           &this->OverlappingCounts,local_res18,&local_res8), bVar2 &&
       (bVar2 = ContinueTimeSliceCopy<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>,_Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::ProgressCopyTimeSliced_::__l2::<lambda_1>_>
                          ((TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)
                           &param_1[0x1c].SyncTimestamp,&this->OverlappingPairs,local_res18,
                           &local_res8), bVar2)))))) {
    if ((this->DirtyElementTree).Ptr !=
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
                 (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)
                 param_1[0xc]._padding_,param_2);
      if (*(char *)((longlong)&((this->DirtyElementTree).Ptr)->_padding_ + 4) == '\0') {
        return;
      }
    }
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  return;
}

// PropagateLeavesDirtyFlag @ 14829e330

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::PropagateLeavesDirtyFlag
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
        cVar2 = *(char *)(*(longlong *)&this->Leaves + 0x40 + (longlong)(int)uVar6 * 0x48);
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

// Raycast @ 14829ea10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::Raycast(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
          *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
         ISpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_4)

{
  undefined1 auStackY_e8 [32];
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> local_98;
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
  QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
            (this,param_1,&local_48,&local_90,&local_78,&local_98,local_48.Dir,&local_48.InvDir,
             local_48.bParallel);
  return;
}

// RemoveElement @ 1482a30b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::RemoveElement(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                *this,FExternalSpatialAccelerationPayload *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType *pFVar3;
  FObjectKey *pFVar4;
  double dVar5;
  undefined4 uVar6;
  int iVar7;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  bool bVar19;
  undefined1 uVar20;
  uint uVar21;
  FAABBTreePayloadInfo *pFVar22;
  FAABBTreePayloadInfo *pFVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 *puVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM3 [16];
  uint local_res18 [2];
  uint local_res20;
  uint local_128 [2];
  longlong local_120;
  longlong local_118;
  uint *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_f0 [24];
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *local_d8;
  uint *local_d0;
  uint *local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  FExternalSpatialAccelerationPayload local_88 [4];
  
  if (this->bModifyingTreeMultiThreadingFastCheck != false) {
    bVar19 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_9181246422089988342>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                        ,0x70a,"bModifyingTreeMultiThreadingFastCheck == false");
    if (bVar19) {
      pcVar10 = (code *)swi(3);
      uVar20 = (*pcVar10)();
      return (bool)uVar20;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`Chaos::
                  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  ::RemoveElement'::`6'::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  this->bModifyingTreeMultiThreadingFastCheck = true;
  pFVar22 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Find
                      (&this->PayloadToInfo,param_1);
  dVar18 = __real_3cb0000000000000;
  uVar28 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar27 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (pFVar22 == (FAABBTreePayloadInfo *)0x0) {
    this->bModifyingTreeMultiThreadingFastCheck = false;
    return false;
  }
  uVar25 = pFVar22->DirtyPayloadIdx;
  if (pFVar22->GlobalPayloadIdx == -1) {
    if (uVar25 == 0xffffffff) {
      uVar27 = pFVar22->LeafIdx;
      if (uVar27 == 0xffffffff) {
        bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181246422089988301>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                            ,0x733,"PayloadInfo->LeafIdx != INDEX_NONE");
        if (bVar19) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
      }
      else if (this->bDynamicTree == false) {
        uVar28 = 0;
        if ((int)uVar27 < *(int *)&(this->Leaves).field_0x8) {
          uVar28 = ~uVar27 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
        local_88[0].Component.ObjectKey = (param_1->Component).ObjectKey;
        local_88[0].BoneId = param_1->BoneId;
        local_88[0].CachedUniqueIdx.Idx = (param_1->CachedUniqueIdx).Idx;
        TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::RemoveElement
                  ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
                   (*(longlong *)&this->Leaves + (longlong)(int)uVar27 * 0x48),local_88);
      }
      else {
        RemoveLeafNode(this,pFVar22->NodeIdx,param_1);
      }
      goto LAB_1482a3f05;
    }
    this_00 = (this->DirtyElementTree).Ptr;
    if (this_00 !=
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
         *)0x0) {
      RemoveLeafNode(this_00,uVar25,param_1);
      goto LAB_1482a3f05;
    }
    if ((((0.0 < this->DirtyElementGridCellSize) && (0 < this->DirtyElementMaxGridCellQueryCount))
        && (0 < this->DirtyElementMaxPhysicalSizeInCells)) &&
       (0 < this->DirtyElementMaxCellCapacity)) {
      uVar26 = pFVar22->DirtyGridOverflowIdx;
      local_res18[0] = uVar25;
      if (uVar26 == 0xffffffff) {
        dVar5 = this->DirtyElementGridCellSizeInv;
        uVar26 = 0;
        if ((int)uVar25 < (this->DirtyElements).ArrayNum) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
        pFVar8 = (this->DirtyElements).AllocatorInstance.Data;
        lVar24 = (longlong)(int)uVar25 * 0x40;
        auVar36._0_8_ = dVar5 * *(double *)(pFVar8 + lVar24 + 0x10);
        auVar36._8_8_ = 0;
        auVar37._8_8_ = 0;
        auVar37._0_8_ =
             (double)CONCAT44((uint)((ulonglong)auVar36._0_8_ >> 0x20) & uVar28,
                              SUB84(auVar36._0_8_,0) & uVar27) * dVar18 + auVar36._0_8_;
        in_XMM3 = roundpd(in_XMM3,auVar37,1);
        dVar13 = dVar5 * *(double *)(pFVar8 + lVar24 + 0x18);
        dVar14 = dVar5 * *(double *)(pFVar8 + lVar24 + 0x28);
        dVar5 = dVar5 * *(double *)(pFVar8 + lVar24 + 0x30);
        auVar40._8_8_ = 0;
        auVar40._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar28,SUB84(dVar13,0) & uVar27) *
             dVar18 + dVar13;
        auVar37 = roundpd(auVar36,auVar40,1);
        lVar29 = (longlong)auVar37._0_8_;
        local_118 = (longlong)in_XMM3._0_8_;
        auVar15._8_8_ = 0;
        auVar15._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar28,SUB84(dVar14,0) & uVar27) *
             dVar18 + dVar14;
        auVar37 = roundpd(auVar37,auVar15,1);
        local_f8 = (longlong)auVar37._0_8_;
        auVar39._8_8_ = 0;
        auVar39._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar28,SUB84(dVar5,0) & uVar27) *
             dVar18 + dVar5;
        auVar37 = roundpd(auVar37,auVar39,1);
        lVar24 = (longlong)auVar37._0_8_;
        local_108 = lVar24;
        local_100 = lVar29;
        if (local_118 <= local_f8) {
          do {
            local_120 = lVar29;
            if (lVar29 <= lVar24) {
              uVar25 = (uint)local_118 & 0xffff;
              uVar25 = (uVar25 << 8 ^ uVar25) & 0xff00ff;
              uVar25 = (uVar25 << 4 ^ uVar25) & 0xf0f0f0f;
              local_res20 = (uVar25 * 4 ^ uVar25) & 0x33333333;
              local_res20 = local_res20 * 2 ^ local_res20;
              do {
                uVar25 = local_res18[0];
                uVar26 = (uint)local_120 & 0xffff;
                uVar26 = (uVar26 << 8 ^ uVar26) & 0xff00ff;
                uVar26 = (uVar26 << 4 ^ uVar26) & 0xf0f0f0f;
                uVar26 = (uVar26 * 4 ^ uVar26) & 0x33333333;
                uVar26 = ((uVar26 * 2 ^ uVar26) * 2 ^ local_res20) & 0xaaaaaaaa ^ local_res20;
                if (*(int *)&(this->CellHashToFlatArray).field_0x8 !=
                    *(int *)&(this->CellHashToFlatArray).field_0x34) {
                  puVar9 = *(undefined1 **)&(this->CellHashToFlatArray).field_0x40;
                  puVar30 = &(this->CellHashToFlatArray).field_0x38;
                  if (puVar9 != (undefined1 *)0x0) {
                    puVar30 = puVar9;
                  }
                  iVar33 = *(int *)(puVar30 +
                                   (ulonglong)
                                   (*(int *)&(this->CellHashToFlatArray).field_0x48 - 1U & uVar26) *
                                   4);
                  if (iVar33 != -1) {
LAB_1482a3511:
                    lVar24 = *(longlong *)&this->CellHashToFlatArray + (longlong)iVar33 * 0x14;
                    if (*(uint *)(*(longlong *)&this->CellHashToFlatArray + (longlong)iVar33 * 0x14)
                        != uVar26) goto code_r0x0001482a3525;
                    puVar35 = (uint *)(lVar24 + 4);
                    if (lVar24 == 0) {
                      puVar35 = (uint *)0x0;
                    }
                    local_110 = puVar35;
                    if ((puVar35 == (uint *)0x0) || ((int)puVar35[1] < 1)) goto LAB_1482a352d;
                    uVar26 = *puVar35;
                    pTVar2 = &this->FlattenedCellArrayOfDirtyIndices;
                    uVar34 = (puVar35[1] - 1) + uVar26;
                    uVar21 = (int)(uVar26 + uVar34) / 2;
                    uVar31 = (ulonglong)(int)uVar21;
                    uVar32 = 0;
                    if ((int)uVar21 < (this->FlattenedCellArrayOfDirtyIndices).ArrayNum) {
                      uVar32 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar32 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar10 = (code *)swi(3);
                      uVar20 = (*pcVar10)();
                      return (bool)uVar20;
                    }
                    uVar32 = *(uint *)((pTVar2->AllocatorInstance).Data + uVar31 * 4);
                    if (uVar32 != uVar25) {
                      if (uVar26 == uVar34) goto LAB_1482a352d;
                      if ((int)uVar32 < (int)uVar25) {
                        uVar26 = uVar21 + 1;
                        uVar21 = uVar34;
                      }
                      else {
                        if (uVar26 == uVar21) goto LAB_1482a352d;
                        uVar21 = uVar21 - 1;
                      }
                      uVar25 = FindInSortedArray(pTVar2,uVar25,uVar26,uVar21);
                      uVar31 = (ulonglong)uVar25;
                    }
                    iVar33 = (int)uVar31;
                    if (iVar33 != -1) {
                      if (iVar33 < (int)uVar34) {
                        lVar24 = (longlong)iVar33 * 4;
                        do {
                          uVar25 = (uint)uVar31;
                          uVar32 = uVar25 + 1;
                          uVar26 = 0;
                          if ((int)uVar32 < (this->FlattenedCellArrayOfDirtyIndices).ArrayNum) {
                            uVar26 = ~uVar32 >> 0x1f;
                          }
                          if ((uVar26 == 0) &&
                             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar19)) {
                            pcVar10 = (code *)swi(3);
                            uVar20 = (*pcVar10)();
                            return (bool)uVar20;
                          }
                          uVar6 = *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar24 + 4);
                          uVar26 = 0;
                          if ((int)uVar25 < (this->FlattenedCellArrayOfDirtyIndices).ArrayNum) {
                            uVar26 = ~uVar25 >> 0x1f;
                          }
                          if ((uVar26 == 0) &&
                             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar19)) {
                            pcVar10 = (code *)swi(3);
                            uVar20 = (*pcVar10)();
                            return (bool)uVar20;
                          }
                          uVar31 = (ulonglong)uVar32;
                          *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar24) = uVar6;
                          lVar24 = lVar24 + 4;
                          puVar35 = local_110;
                        } while ((int)uVar32 < (int)uVar34);
                      }
                      puVar35[1] = puVar35[1] - 1;
                      goto LAB_1482a355a;
                    }
                  }
                }
LAB_1482a352d:
                bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_9181246422089989019>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                                    ,0x465,
                                    "DeleteDirtyParticleIndexFromGridCell(Hash, DeleteDirtyParticleIdx)"
                                   );
                if (bVar19) {
                  pcVar10 = (code *)swi(3);
                  uVar20 = (*pcVar10)();
                  return (bool)uVar20;
                }
LAB_1482a355a:
                local_120 = local_120 + 1;
                lVar24 = local_108;
                lVar29 = local_100;
              } while (local_120 <= local_108);
            }
            local_118 = local_118 + 1;
          } while (local_118 <= local_f8);
        }
      }
      else {
        pTVar2 = &this->DirtyElementsGridOverflow;
        uVar32 = ~uVar26 >> 0x1f;
        uVar25 = 0;
        if ((int)uVar26 < (this->DirtyElementsGridOverflow).ArrayNum) {
          uVar25 = uVar32;
        }
        if ((uVar25 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
        if ((*(uint *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar26 * 4) !=
             local_res18[0]) &&
           (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_9181246422089989012>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                                ,0x46c,
                                "DirtyElementsGridOverflow[DeleteDirtyGridOverflowIdx] == DeleteDirtyParticleIdx"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
        iVar33 = (this->DirtyElementsGridOverflow).ArrayNum;
        uVar25 = 0;
        if ((int)(uVar26 + 1) < iVar33) {
          uVar21 = uVar25;
          if ((int)(iVar33 - 1U) < iVar33) {
            uVar21 = ~(iVar33 - 1U) >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            uVar20 = (*pcVar10)();
            return (bool)uVar20;
          }
          uVar21 = *(uint *)((pTVar2->AllocatorInstance).Data +
                            (longlong)(this->DirtyElementsGridOverflow).ArrayNum * 4 + -4);
          uVar34 = uVar25;
          if ((int)uVar21 < (this->DirtyElements).ArrayNum) {
            uVar34 = ~uVar21 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            uVar20 = (*pcVar10)();
            return (bool)uVar20;
          }
          pFVar4 = (FObjectKey *)
                   ((this->DirtyElements).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x40);
          local_a8._0_8_ = *pFVar4;
          local_a8._8_8_ = pFVar4[1];
          pFVar22 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::
                    FindChecked(&this->PayloadToInfo,(FExternalSpatialAccelerationPayload *)local_a8
                               );
          pFVar22->DirtyGridOverflowIdx = uVar26;
        }
        if ((int)uVar26 < (this->DirtyElementsGridOverflow).ArrayNum) {
          uVar25 = uVar32;
        }
        if ((uVar25 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
        iVar7 = (this->DirtyElementsGridOverflow).ArrayNum;
        pFVar8 = (pTVar2->AllocatorInstance).Data;
        iVar33 = iVar7 + ~uVar26;
        if (1 < iVar33) {
          iVar33 = 1;
        }
        if (iVar33 != 0) {
          memmove(pFVar8 + (longlong)(int)uVar26 * 4,pFVar8 + (longlong)(iVar7 - iVar33) * 4,
                  (longlong)iVar33 << 2);
        }
        iVar33 = (this->DirtyElementsGridOverflow).ArrayNum + -1;
        (this->DirtyElementsGridOverflow).ArrayNum = iVar33;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar2->AllocatorInstance,iVar33,&(this->DirtyElementsGridOverflow).ArrayMax
                  );
      }
      iVar33 = (this->DirtyElements).ArrayNum;
      if ((int)(local_res18[0] + 1) < iVar33) {
        uVar26 = iVar33 - 1;
        uVar25 = 0;
        if ((int)uVar26 < iVar33) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        local_128[0] = uVar26;
        if ((uVar25 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
        pFVar4 = (FObjectKey *)
                 ((this->DirtyElements).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x40);
        local_f0._0_8_ = *pFVar4;
        local_f0._8_8_ = pFVar4[1];
        pFVar22 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::
                  FindChecked(&this->PayloadToInfo,(FExternalSpatialAccelerationPayload *)local_f0);
        uVar26 = local_res18[0];
        uVar25 = pFVar22->DirtyGridOverflowIdx;
        if (uVar25 == 0xffffffff) {
          iVar33 = (this->DirtyElements).ArrayNum;
          dVar5 = this->DirtyElementGridCellSizeInv;
          uVar26 = iVar33 - 1;
          uVar25 = 0;
          if ((int)uVar26 < iVar33) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            uVar20 = (*pcVar10)();
            return (bool)uVar20;
          }
          pFVar8 = (this->DirtyElements).AllocatorInstance.Data;
          local_d0 = local_128;
          lVar29 = (longlong)(this->DirtyElements).ArrayNum * 0x40;
          local_c8 = local_res18;
          auVar38._0_8_ = dVar5 * *(double *)(pFVar8 + lVar29 + -0x30);
          auVar38._8_8_ = 0;
          auVar11._8_8_ = 0;
          auVar11._0_8_ =
               (double)CONCAT44((uint)((ulonglong)auVar38._0_8_ >> 0x20) & uVar28,
                                SUB84(auVar38._0_8_,0) & uVar27) * dVar18 + auVar38._0_8_;
          auVar37 = roundpd(in_XMM3,auVar11,1);
          dVar13 = dVar5 * *(double *)(pFVar8 + lVar29 + -0x28);
          lVar24 = (longlong)auVar37._0_8_;
          dVar14 = dVar5 * *(double *)(pFVar8 + lVar29 + -0x18);
          dVar5 = dVar5 * *(double *)(pFVar8 + lVar29 + -0x10);
          auVar16._8_8_ = 0;
          auVar16._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) & uVar28,SUB84(dVar13,0) & uVar27)
               * dVar18 + dVar13;
          auVar37 = roundpd(auVar38,auVar16,1);
          auVar17._8_8_ = 0;
          auVar17._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar28,SUB84(dVar14,0) & uVar27)
               * dVar18 + dVar14;
          auVar39 = roundpd(auVar37,auVar17,1);
          auVar12._8_8_ = 0;
          auVar12._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar28,SUB84(dVar5,0) & uVar27) *
               dVar18 + dVar5;
          auVar40 = roundpd(auVar39,auVar12,1);
          local_d8 = this;
          for (; lVar24 <= (longlong)auVar39._0_8_; lVar24 = lVar24 + 1) {
            if ((longlong)auVar37._0_8_ <= (longlong)auVar40._0_8_) {
              uVar27 = (uint)lVar24 & 0xffff;
              uVar27 = (uVar27 << 8 ^ uVar27) & 0xff00ff;
              uVar27 = (uVar27 << 4 ^ uVar27) & 0xf0f0f0f;
              uVar27 = (uVar27 * 4 ^ uVar27) & 0x33333333;
              uVar27 = uVar27 * 2 ^ uVar27;
              lVar29 = (longlong)auVar37._0_8_;
              do {
                uVar28 = (uint)lVar29 & 0xffff;
                uVar28 = (uVar28 << 8 ^ uVar28) & 0xff00ff;
                uVar28 = (uVar28 << 4 ^ uVar28) & 0xf0f0f0f;
                uVar28 = (uVar28 * 4 ^ uVar28) & 0x33333333;
                bVar19 = `Chaos::
                         TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                         ::DeleteDirtyParticleEverywhere'::__l16::<lambda_2>::operator()
                                   (&local_d8,
                                    ((uVar28 * 2 ^ uVar28) * 2 ^ uVar27) & 0xaaaaaaaa ^ uVar27);
                if (!bVar19) goto LAB_1482a3bc7;
                lVar29 = lVar29 + 1;
              } while (lVar29 <= (longlong)auVar40._0_8_);
            }
          }
        }
        else {
          uVar27 = 0;
          if ((int)uVar25 < (this->DirtyElementsGridOverflow).ArrayNum) {
            uVar27 = ~uVar25 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            uVar20 = (*pcVar10)();
            return (bool)uVar20;
          }
          *(uint *)((this->DirtyElementsGridOverflow).AllocatorInstance.Data +
                   (longlong)(int)uVar25 * 4) = uVar26;
        }
LAB_1482a3bc7:
        uVar27 = local_res18[0];
        pFVar22 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::
                  FindChecked(&this->PayloadToInfo,(FExternalSpatialAccelerationPayload *)local_f0);
        pFVar22->DirtyPayloadIdx = uVar27;
      }
      lVar24 = (longlong)(int)local_res18[0];
      uVar28 = ~local_res18[0];
      uVar27 = 0;
      if ((int)local_res18[0] < (this->DirtyElements).ArrayNum) {
        uVar27 = uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        uVar20 = (*pcVar10)();
        return (bool)uVar20;
      }
      iVar7 = (this->DirtyElements).ArrayNum;
      pFVar8 = (this->DirtyElements).AllocatorInstance.Data;
      iVar33 = uVar28 + iVar7;
      if (1 < iVar33) {
        iVar33 = 1;
      }
      if (iVar33 != 0) {
        memmove(pFVar8 + lVar24 * 0x40,pFVar8 + (longlong)(iVar7 - iVar33) * 0x40,
                (longlong)iVar33 << 6);
      }
      piVar1 = &(this->DirtyElements).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,&(this->DirtyElements).AllocatorInstance,(this->DirtyElements).ArrayNum,
                 &(this->DirtyElements).ArrayMax);
      goto LAB_1482a3f05;
    }
    iVar33 = (this->DirtyElements).ArrayNum;
    if ((int)(uVar25 + 1) < iVar33) {
      uVar27 = 0;
      if ((int)(iVar33 - 1U) < iVar33) {
        uVar27 = ~(iVar33 - 1U) >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        uVar20 = (*pcVar10)();
        return (bool)uVar20;
      }
      iVar33 = pFVar22->DirtyPayloadIdx;
      pFVar4 = (FObjectKey *)
               ((this->DirtyElements).AllocatorInstance.Data +
               (longlong)(this->DirtyElements).ArrayNum * 0x40 + -0x40);
      local_98._0_8_ = *pFVar4;
      local_98._8_8_ = pFVar4[1];
      pFVar23 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::FindChecked
                          (&this->PayloadToInfo,(FExternalSpatialAccelerationPayload *)local_98);
      pFVar23->DirtyPayloadIdx = iVar33;
    }
    uVar27 = pFVar22->DirtyPayloadIdx;
    lVar24 = 0x30;
  }
  else {
    if ((uVar25 != 0xffffffff) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181246422089988331>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                            ,0x715,"PayloadInfo->DirtyPayloadIdx == INDEX_NONE"), bVar19)) {
      pcVar10 = (code *)swi(3);
      uVar20 = (*pcVar10)();
      return (bool)uVar20;
    }
    if ((pFVar22->DirtyGridOverflowIdx != -1) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181246422089988330>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                            ,0x716,"PayloadInfo->DirtyGridOverflowIdx == INDEX_NONE"), bVar19)) {
      pcVar10 = (code *)swi(3);
      uVar20 = (*pcVar10)();
      return (bool)uVar20;
    }
    if ((pFVar22->LeafIdx != -1) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181246422089988329>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                            ,0x717,"PayloadInfo->LeafIdx == INDEX_NONE"), bVar19)) {
      pcVar10 = (code *)swi(3);
      uVar20 = (*pcVar10)();
      return (bool)uVar20;
    }
    iVar33 = (this->GlobalPayloads).ArrayNum;
    if (pFVar22->GlobalPayloadIdx + 1 < iVar33) {
      uVar27 = 0;
      if ((int)(iVar33 - 1U) < iVar33) {
        uVar27 = ~(iVar33 - 1U) >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        uVar20 = (*pcVar10)();
        return (bool)uVar20;
      }
      iVar33 = pFVar22->GlobalPayloadIdx;
      pFVar4 = (FObjectKey *)
               ((this->GlobalPayloads).AllocatorInstance.Data +
               (longlong)(this->GlobalPayloads).ArrayNum * 0x40 + -0x40);
      local_b8._0_8_ = *pFVar4;
      local_b8._8_8_ = pFVar4[1];
      pFVar23 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::FindChecked
                          (&this->PayloadToInfo,(FExternalSpatialAccelerationPayload *)local_b8);
      pFVar23->GlobalPayloadIdx = iVar33;
    }
    uVar27 = pFVar22->GlobalPayloadIdx;
    lVar24 = 0x108;
  }
  pFVar3 = (ForAnyElementType *)((longlong)&this->_padding_ + lVar24);
  uVar28 = 0;
  if ((int)uVar27 < *(int *)&pFVar3[1].Data) {
    uVar28 = ~uVar27 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar10 = (code *)swi(3);
    uVar20 = (*pcVar10)();
    return (bool)uVar20;
  }
  iVar33 = ~uVar27 + *(int *)&pFVar3[1].Data;
  if (1 < iVar33) {
    iVar33 = 1;
  }
  if (iVar33 != 0) {
    memmove(pFVar3->Data + (longlong)(int)uVar27 * 0x40,
            pFVar3->Data + (longlong)(*(int *)&pFVar3[1].Data - iVar33) * 0x40,(longlong)iVar33 << 6
           );
  }
  *(int *)&pFVar3[1].Data = *(int *)&pFVar3[1].Data + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,pFVar3,*(int *)&pFVar3[1].Data,(int *)((longlong)&pFVar3[1].Data + 4));
LAB_1482a3f05:
  TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Remove
            (&this->PayloadToInfo,param_1);
  this->bModifyingTreeMultiThreadingFastCheck = false;
  this->bShouldRebuild = true;
  return true;
code_r0x0001482a3525:
  iVar33 = *(int *)(lVar24 + 0xc);
  if (iVar33 == -1) goto LAB_1482a352d;
  goto LAB_1482a3511;
}

// RemoveLeafNode @ 1482a4eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::RemoveLeafNode(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                 *this,int param_1,FExternalSpatialAccelerationPayload *param_2)

{
  TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *this_00;
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FExternalSpatialAccelerationPayload local_b8;
  FExternalSpatialAccelerationPayload local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar10 = uVar15;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar14 = (longlong)param_1 * 0x70;
  if (((byte)(this->Nodes).AllocatorInstance.Data[lVar14 + 0x6c] & 1) == 0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181246422089988401>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                       ,0x6cf,"Nodes[LeafNodeIdx].bLeaf == true");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`Chaos::
                  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  ::RemoveLeafNode'::`6'::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  uVar10 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar10 = uVar15;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar14 + 0x60);
  lVar17 = (longlong)(int)uVar10;
  uVar13 = ~uVar10 >> 0x1f;
  uVar16 = 0;
  if ((int)uVar10 < *(int *)&(this->Leaves).field_0x8) {
    uVar16 = uVar13;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = *(int *)&(this->Leaves).field_0x8;
  if (*(uint *)(*(longlong *)&this->Leaves + 0x38 + lVar17 * 0x48) < 2) {
    uVar16 = 0;
    if ((int)uVar10 < iVar12) {
      uVar16 = uVar13;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a8.Component.ObjectKey = (param_2->Component).ObjectKey;
    local_a8.BoneId = param_2->BoneId;
    local_a8.CachedUniqueIdx.Idx = (param_2->CachedUniqueIdx).Idx;
    TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::RemoveElement
              ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
               (*(longlong *)&this->Leaves + lVar17 * 0x48),&local_a8);
    uVar10 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar10 = uVar15;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar10 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar14 + 0x68);
    if (uVar10 == 0xffffffff) {
      this->RootNode = -1;
    }
    else {
      uVar16 = ~uVar10 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar10 < (this->Nodes).ArrayNum) {
        uVar15 = uVar16;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar10 * 0x70;
      uVar15 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar14 + 0x68);
      uVar11 = WhichChildAmI(this,param_1);
      uVar13 = 0;
      if ((int)uVar10 < (this->Nodes).ArrayNum) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar13 = *(uint *)((this->Nodes).AllocatorInstance.Data +
                        ((longlong)(int)uVar10 * 0x1c + (longlong)(int)(uVar11 ^ 1)) * 4 + 0x60);
      if (uVar15 == 0xffffffff) {
        this->RootNode = uVar13;
      }
      else {
        iVar12 = WhichChildAmI(this,uVar10);
        uVar11 = 0;
        if ((int)uVar15 < (this->Nodes).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((this->Nodes).AllocatorInstance.Data +
                 ((longlong)(int)uVar15 * 0x1c + (longlong)iVar12) * 4 + 0x60) = uVar13;
      }
      if (uVar13 == uVar15) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181246422089988360>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                           ,0x6f8,"SiblingNodeIdx != GrandParentNodeIdx");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (2 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`Chaos::
                      TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                      ::RemoveLeafNode'::`39'::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      uVar11 = 0;
      if ((int)uVar13 < (this->Nodes).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x70 + 0x68) = uVar15
      ;
      UpdateAncestorBounds(this,uVar13,false);
      iVar12 = this->FirstFreeInternalNode;
      uVar15 = 0;
      if ((int)uVar10 < (this->Nodes).ArrayNum) {
        uVar15 = uVar16;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(int *)((this->Nodes).AllocatorInstance.Data + lVar14 + 100) = iVar12;
      this->FirstFreeInternalNode = uVar10;
      uVar15 = 0;
      if ((int)uVar10 < (this->Nodes).ArrayNum) {
        uVar15 = uVar16;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((byte)(this->Nodes).AllocatorInstance.Data[lVar14 + 0x6c] & 1) != 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181246422089988736>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                           ,0x580,"Nodes[NodeIdx].bLeaf == false");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (2 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_AABBTree__Deall_151a5d9d8,
                     (FLogCategoryBase *)&LogChaos);
        }
      }
    }
    DeAllocateLeafNode(this,param_1);
  }
  else {
    uVar16 = 0;
    if ((int)uVar10 < iVar12) {
      uVar16 = uVar13;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_b8.Component.ObjectKey = (param_2->Component).ObjectKey;
    local_b8.BoneId = param_2->BoneId;
    local_b8.CachedUniqueIdx.Idx = (param_2->CachedUniqueIdx).Idx;
    TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::RemoveElement
              ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
               (*(longlong *)&this->Leaves + lVar17 * 0x48),&local_b8);
    uVar16 = 0;
    if ((int)uVar10 < *(int *)&(this->Leaves).field_0x8) {
      uVar16 = uVar13;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *)
              (*(longlong *)&this->Leaves + lVar17 * 0x48);
    TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1>::ComputeBounds
              (this_00,(TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                        *)(this_00 + 1),this->bDynamicTree);
    uVar16 = 0;
    if ((int)uVar10 < *(int *)&(this->Leaves).field_0x8) {
      uVar16 = uVar13;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)&this->Leaves;
    dStack_78 = (double)FAABBTreeCVars::DynamicTreeBoundingBoxPadding;
    pdVar2 = (double *)(lVar3 + 0x18 + lVar17 * 0x48);
    pdVar1 = (double *)(lVar3 + lVar17 * 0x48);
    local_98 = *pdVar1;
    dStack_90 = pdVar1[1];
    local_88 = *(double *)(lVar3 + 0x10 + lVar17 * 0x48);
    local_70 = *(double *)(lVar3 + 0x28 + lVar17 * 0x48) + dStack_78;
    local_80 = *pdVar2 + dStack_78;
    uVar10 = 0;
    if (param_1 < (this->Nodes).ArrayNum) {
      uVar10 = uVar15;
    }
    dVar8 = local_98 - dStack_78;
    dVar6 = dStack_90 - dStack_78;
    dVar7 = local_88 - dStack_78;
    dStack_78 = pdVar2[1] + dStack_78;
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->Nodes).AllocatorInstance.Data;
    *(double *)(pFVar4 + lVar14) = dVar8;
    *(double *)(pFVar4 + lVar14 + 8) = dVar6;
    *(double *)(pFVar4 + lVar14 + 0x10) = dVar7;
    *(double *)(pFVar4 + lVar14 + 0x18) = local_80;
    *(double *)(pFVar4 + lVar14 + 0x18 + 8) = dStack_78;
    *(double *)(pFVar4 + lVar14 + 0x28) = local_70;
    UpdateAncestorBounds(this,param_1,false);
  }
  return;
}

// ReoptimizeTree @ 1482a5870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::ReoptimizeTree(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  longlong lVar10;
  undefined1 auStackY_298 [32];
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  local_248;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  local_238;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((((this->DirtyElementTree).Ptr !=
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
              (&`Chaos::
                TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                ::ReoptimizeTree'::`2'::__CpuProfilerEventSpecId2728,"TAABBTree::ReoptimizeTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
               ,0xaa8);
    FCpuProfilerTrace::OutputBeginEvent
              (`Chaos::
               TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
               ::ReoptimizeTree'::`2'::__CpuProfilerEventSpecId2728);
  }
  uVar8 = (this->GlobalPayloads).ArrayNum + (this->DirtyElements).ArrayNum;
  uVar7 = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
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
      uVar8 = uVar8 + *(int *)(lVar10 + 0x38 + *(longlong *)&this->Leaves);
      lVar10 = lVar10 + 0x48;
    } while ((int)uVar7 < *(int *)&(this->Leaves).field_0x8);
    iVar5 = local_248.ArrayMax;
    iVar6 = local_248.ArrayNum;
  }
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (iVar5 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar8,&local_248.AllocatorInstance,iVar6,&local_248.ArrayMax);
  }
  if ((&local_248 == &this->DirtyElements) &&
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
                      (0x40,8,iVar5,&local_248.AllocatorInstance,&local_248.ArrayNum,
                       &local_248.ArrayMax);
    ConstructItems<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int>
              (local_248.AllocatorInstance.Data + (longlong)iVar6 * 0x40,
               (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
               (this->DirtyElements).AllocatorInstance.Data,iVar5);
  }
  if ((&local_248 == &this->GlobalPayloads) &&
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
                      (0x40,8,iVar5,&local_248.AllocatorInstance,&local_248.ArrayNum,
                       &local_248.ArrayMax);
    ConstructItems<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int>
              (local_248.AllocatorInstance.Data + (longlong)iVar6 * 0x40,
               (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
               (this->GlobalPayloads).AllocatorInstance.Data,iVar5);
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
      pTVar9 = (TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                *)(*(longlong *)&this->Leaves + 0x30 + lVar10);
      if ((&local_248 == pTVar9) &&
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
                          (0x40,8,iVar5,&local_248.AllocatorInstance,&local_248.ArrayNum,
                           &local_248.ArrayMax);
        ConstructItems<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int>
                  (local_248.AllocatorInstance.Data + (longlong)iVar6 * 0x40,
                   (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
                   (pTVar9->AllocatorInstance).Data,iVar5);
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 0x48;
    } while ((int)uVar7 < *(int *)&(this->Leaves).field_0x8);
  }
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_><TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>_>
            (&local_238,&local_248,0xc,0x10,__real_40f86a0000000000,0,false,false,true);
  operator=(this,&local_238);
  this->bShouldRebuild = true;
  ~TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
            (&local_238);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Reset @ 1482a6650

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::Reset(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
      DestructItems<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,int>
                (*(TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> **)&this->Leaves
                 ,iVar3);
      *(undefined4 *)&(this->Leaves).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,(ForAnyElementType *)&this->Leaves,0,(int *)puVar1);
      }
    }
    else {
      DestructItems<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,int>
                (*(TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> **)&this->Leaves
                 ,iVar3);
      *(undefined4 *)&(this->Leaves).field_0x8 = 0;
    }
    (this->DirtyElements).ArrayNum = 0;
    if ((this->DirtyElements).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->DirtyElements).AllocatorInstance,0,&(this->DirtyElements).ArrayMax
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
                (0x40,8,0,&(this->GlobalPayloads).AllocatorInstance,0,piVar2);
    }
    iVar3 = (this->PayloadToInfo).Elements.ArrayMax;
    (this->PayloadToInfo).Elements.ArrayNum = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,0,(ForAnyElementType *)&this->PayloadToInfo,0,
                 &(this->PayloadToInfo).Elements.ArrayMax);
    }
    if (*(int *)&(this->PayloadToInfo).HashTable.field_0x8 != 0) {
      memset(*(void **)&(this->PayloadToInfo).HashTable.field_0x10,0xff,
             (ulonglong)(uint)(*(int *)&(this->PayloadToInfo).HashTable << 2));
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
      DestructItems<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::FWorkSnapshot,int>
                (pFVar4,iVar3);
      (this->WorkPool).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xf8,8,0,&(this->WorkPool).AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::FWorkSnapshot,int>
                (pFVar4,iVar3);
      (this->WorkPool).ArrayNum = 0;
    }
    this->bShouldRebuild = true;
    this->RootNode = -1;
    this->FirstFreeInternalNode = -1;
    this->FirstFreeLeafNode = -1;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    this = (this->DirtyElementTree).Ptr;
  } while (this != (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    *)0x0);
  return;
}

// RotateNode @ 1482a7430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::RotateNode(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
             *this,uint param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  uint local_res8;
  uint local_res10;
  ulonglong local_138;
  longlong local_130;
  ulonglong local_110;
  longlong local_100;
  
  lVar39 = (longlong)(int)param_1;
  dVar42 = 0.0;
  local_res8 = 0xffffffff;
  local_res10 = 0xffffffff;
  uVar38 = ~param_1 >> 0x1f;
  uVar36 = 0;
  uVar21 = uVar36;
  if ((int)param_1 < (this->Nodes).ArrayNum) {
    uVar21 = uVar38;
  }
  if ((uVar21 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar27 = lVar39 * 0x70;
  if ((((byte)(this->Nodes).AllocatorInstance.Data[lVar27 + 0x6c] & 1) != 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Nodes[NodeIdx].bLeaf",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0x60d,L""), bVar20)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_138 = 0;
  local_130 = 0;
  local_110 = 0;
  lVar32 = lVar39 * 0x70 + 0x60;
  local_100 = 2;
  do {
    uVar21 = uVar36;
    if ((int)param_1 < (this->Nodes).ArrayNum) {
      uVar21 = uVar38;
    }
    if ((uVar21 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar21 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar32);
    uVar33 = uVar36;
    if ((int)param_1 < (this->Nodes).ArrayNum) {
      uVar33 = uVar38;
    }
    if ((uVar33 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar33 = *(uint *)((this->Nodes).AllocatorInstance.Data +
                      ((local_110 ^ 1) + lVar39 * 0x1c) * 4 + 0x60);
    uVar31 = (ulonglong)(int)uVar33;
    uVar37 = ~uVar33 >> 0x1f;
    uVar22 = uVar36;
    if ((int)uVar33 < (this->Nodes).ArrayNum) {
      uVar22 = uVar37;
    }
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar34 = uVar31 * 0x70;
    uVar22 = 0;
    if (((byte)(this->Nodes).AllocatorInstance.Data[lVar34 + 0x6c] & 1) == 0) {
      uVar23 = uVar36;
      if ((int)uVar33 < (this->Nodes).ArrayNum) {
        uVar23 = uVar37;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar28 = (this->Nodes).AllocatorInstance.Data;
      pFVar29 = pFVar28 + lVar34 + 0x68;
      pFVar28 = pFVar28 + lVar34 + 0x60;
      if (pFVar28 != pFVar29) {
        lVar35 = local_130 + lVar27;
        lVar30 = lVar27 + (local_138 ^ 1) * 0x30;
        do {
          uVar23 = *(uint *)pFVar28;
          uVar24 = uVar22;
          if ((int)param_1 < (this->Nodes).ArrayNum) {
            uVar24 = uVar38;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar10 = (this->Nodes).AllocatorInstance.Data;
          dVar12 = *(double *)(pFVar10 + lVar35);
          dVar44 = *(double *)(pFVar10 + lVar35 + 8);
          dVar43 = *(double *)(pFVar10 + lVar35 + 0x10);
          dVar13 = *(double *)(pFVar10 + lVar35 + 0x18);
          dVar14 = *(double *)(pFVar10 + lVar35 + 0x18 + 8);
          dVar1 = *(double *)(pFVar10 + lVar35 + 0x28);
          uVar24 = uVar22;
          if ((int)uVar31 < (this->Nodes).ArrayNum) {
            uVar24 = uVar37;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar10 = (this->Nodes).AllocatorInstance.Data;
          iVar25 = WhichChildAmI(this,uVar23);
          uVar53 = SUB84(dVar12,0);
          uVar54 = (undefined4)((ulonglong)dVar12 >> 0x20);
          uVar31 = (longlong)iVar25 ^ 1;
          dVar2 = *(double *)(pFVar10 + uVar31 * 0x30 + lVar34 + 0x10);
          uVar49 = SUB84(dVar2,0);
          uVar50 = (undefined4)((ulonglong)dVar2 >> 0x20);
          dVar3 = *(double *)(pFVar10 + uVar31 * 0x30 + lVar34 + 8);
          uVar51 = SUB84(dVar3,0);
          uVar52 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar4 = *(double *)(pFVar10 + uVar31 * 0x30 + lVar34 + 0x28);
          uVar45 = SUB84(dVar4,0);
          uVar46 = (undefined4)((ulonglong)dVar4 >> 0x20);
          dVar5 = *(double *)(pFVar10 + uVar31 * 0x30 + lVar34 + 0x20);
          uVar47 = SUB84(dVar5,0);
          uVar48 = (undefined4)((ulonglong)dVar5 >> 0x20);
          dVar6 = *(double *)(pFVar10 + uVar31 * 0x30 + lVar34 + 0x18);
          uVar40 = SUB84(dVar6,0);
          uVar41 = (undefined4)((ulonglong)dVar6 >> 0x20);
          dVar7 = *(double *)(pFVar10 + uVar31 * 0x30 + lVar34);
          if (dVar7 <= dVar12) {
            uVar53 = SUB84(dVar7,0);
            uVar54 = (undefined4)((ulonglong)dVar7 >> 0x20);
          }
          if (dVar43 <= dVar2) {
            uVar49 = SUB84(dVar43,0);
            uVar50 = (undefined4)((ulonglong)dVar43 >> 0x20);
          }
          if (dVar44 <= dVar3) {
            uVar51 = SUB84(dVar44,0);
            uVar52 = (undefined4)((ulonglong)dVar44 >> 0x20);
          }
          if (dVar4 <= dVar1) {
            uVar45 = SUB84(dVar1,0);
            uVar46 = (undefined4)((ulonglong)dVar1 >> 0x20);
          }
          if (dVar5 <= dVar14) {
            uVar47 = SUB84(dVar14,0);
            uVar48 = (undefined4)((ulonglong)dVar14 >> 0x20);
          }
          if (dVar6 <= dVar13) {
            uVar40 = SUB84(dVar13,0);
            uVar41 = (undefined4)((ulonglong)dVar13 >> 0x20);
          }
          uVar24 = uVar22;
          if ((int)param_1 < (this->Nodes).ArrayNum) {
            uVar24 = uVar38;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar10 = (this->Nodes).AllocatorInstance.Data;
          dVar43 = (double)CONCAT44(uVar41,uVar40) - (double)CONCAT44(uVar54,uVar53);
          dVar1 = (double)CONCAT44(uVar46,uVar45) - (double)CONCAT44(uVar50,uVar49);
          dVar12 = (double)CONCAT44(uVar48,uVar47) - (double)CONCAT44(uVar52,uVar51);
          uVar31 = (ulonglong)uVar33;
          dVar44 = *(double *)(pFVar10 + lVar30 + 0x28) - *(double *)(pFVar10 + lVar30 + 0x10);
          dVar43 = ((dVar43 + dVar43) * (dVar12 + dVar1) + (dVar1 + dVar1) * dVar12) -
                   (((*(double *)(pFVar10 + lVar30 + 0x18) - *(double *)(pFVar10 + lVar30)) +
                    (*(double *)(pFVar10 + lVar30 + 0x18) - *(double *)(pFVar10 + lVar30))) *
                    ((*(double *)(pFVar10 + lVar30 + 0x20) - *(double *)(pFVar10 + lVar30 + 8)) +
                    dVar44) +
                   (dVar44 + dVar44) *
                   (*(double *)(pFVar10 + lVar30 + 0x20) - *(double *)(pFVar10 + lVar30 + 8)));
          uVar24 = uVar21;
          if (dVar42 <= dVar43) {
            uVar23 = local_res8;
            uVar24 = local_res10;
            dVar43 = dVar42;
          }
          dVar42 = dVar43;
          local_res10 = uVar24;
          pFVar28 = pFVar28 + 4;
          local_res8 = uVar23;
        } while (pFVar28 != pFVar29);
      }
    }
    local_110 = local_110 + 1;
    local_138 = local_138 + 1;
    lVar32 = lVar32 + 4;
    local_130 = local_130 + 0x30;
    local_100 = local_100 + -1;
  } while (local_100 != 0);
  if (local_res8 != 0xffffffff) {
    if ((local_res10 == 0xffffffff) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("BestAuntToSwap != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                            ,0x62d,L""), bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((param_2) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                            ,0x630,L""), bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar25 = WhichChildAmI(this,local_res10);
    iVar26 = WhichChildAmI(this,local_res8);
    uVar21 = uVar22;
    if ((int)local_res8 < (this->Nodes).ArrayNum) {
      uVar21 = ~local_res8 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar21 = *(uint *)((this->Nodes).AllocatorInstance.Data +
                      (longlong)(int)local_res8 * 0x70 + 0x68);
    if (local_res8 == param_1) {
      bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089988552>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0x638,"BestGrandChildToSwap != NodeIdx");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`Chaos::
                    TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    ::RotateNode'::`45'::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    else if (local_res10 == uVar21) {
      bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181246422089988546>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                          ,0x63e,"BestAuntToSwap != MotherOfBestGrandChild");
      if (bVar20) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`Chaos::
                    TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    ::RotateNode'::`65'::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    else {
      uVar36 = uVar22;
      if ((int)param_1 < (this->Nodes).ArrayNum) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(uint *)((this->Nodes).AllocatorInstance.Data + (lVar39 * 0x1c + (longlong)iVar25) * 4 + 0x60
               ) = local_res8;
      uVar36 = uVar22;
      if ((int)local_res8 < (this->Nodes).ArrayNum) {
        uVar36 = ~local_res8 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(uint *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)local_res8 * 0x70 + 0x68) =
           param_1;
      uVar36 = uVar22;
      if ((int)local_res10 < (this->Nodes).ArrayNum) {
        uVar36 = ~local_res10 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar33 = ~uVar21 >> 0x1f;
      *(uint *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)local_res10 * 0x70 + 0x68) =
           uVar21;
      uVar36 = uVar22;
      if ((int)uVar21 < (this->Nodes).ArrayNum) {
        uVar36 = uVar33;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(uint *)((this->Nodes).AllocatorInstance.Data +
               ((longlong)(int)uVar21 * 0x1c + (longlong)iVar26) * 4 + 0x60) = local_res10;
      uVar36 = uVar22;
      if ((int)param_1 < (this->Nodes).ArrayNum) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar39 = lVar27 + (longlong)iVar25 * 0x30;
      pFVar28 = (this->Nodes).AllocatorInstance.Data;
      uVar15 = *(undefined8 *)(pFVar28 + lVar39);
      uVar16 = *(undefined8 *)(pFVar28 + lVar39 + 8);
      uVar8 = *(undefined8 *)(pFVar28 + lVar39 + 0x10);
      uVar17 = *(undefined8 *)(pFVar28 + lVar39 + 0x18);
      uVar18 = *(undefined8 *)(pFVar28 + lVar39 + 0x18 + 8);
      uVar9 = *(undefined8 *)(pFVar28 + lVar39 + 0x28);
      uVar36 = uVar22;
      if ((int)uVar21 < (this->Nodes).ArrayNum) {
        uVar36 = uVar33;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar28 = (this->Nodes).AllocatorInstance.Data;
      lVar34 = (longlong)(int)uVar21 * 0x70;
      lVar32 = (longlong)iVar26 * 0x30 + lVar34;
      uVar36 = uVar22;
      if ((int)param_1 < (this->Nodes).ArrayNum) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar29 = (this->Nodes).AllocatorInstance.Data;
      uVar19 = *(undefined8 *)(pFVar28 + lVar32 + 8);
      *(undefined8 *)(pFVar29 + lVar39) = *(undefined8 *)(pFVar28 + lVar32);
      *(undefined8 *)(pFVar29 + lVar39 + 8) = uVar19;
      *(undefined8 *)(pFVar29 + lVar39 + 0x10) = *(undefined8 *)(pFVar28 + lVar32 + 0x10);
      uVar19 = *(undefined8 *)(pFVar28 + lVar32 + 0x18 + 8);
      *(undefined8 *)(pFVar29 + lVar39 + 0x18) = *(undefined8 *)(pFVar28 + lVar32 + 0x18);
      *(undefined8 *)(pFVar29 + lVar39 + 0x18 + 8) = uVar19;
      *(undefined8 *)(pFVar29 + lVar39 + 0x28) = *(undefined8 *)(pFVar28 + lVar32 + 0x28);
      uVar36 = uVar22;
      if ((int)uVar21 < (this->Nodes).ArrayNum) {
        uVar36 = uVar33;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar28 = (this->Nodes).AllocatorInstance.Data;
      *(undefined8 *)(pFVar28 + lVar32) = uVar15;
      *(undefined8 *)(pFVar28 + lVar32 + 8) = uVar16;
      *(undefined8 *)(pFVar28 + lVar32 + 0x18) = uVar17;
      *(undefined8 *)(pFVar28 + lVar32 + 0x18 + 8) = uVar18;
      *(undefined8 *)(pFVar28 + lVar32 + 0x10) = uVar8;
      *(undefined8 *)(pFVar28 + lVar32 + 0x28) = uVar9;
      uVar36 = uVar22;
      if ((int)uVar21 < (this->Nodes).ArrayNum) {
        uVar36 = uVar33;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar28 = (this->Nodes).AllocatorInstance.Data;
      uVar36 = uVar22;
      if ((int)param_1 < (this->Nodes).ArrayNum) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar8 = *(undefined8 *)(pFVar28 + lVar34 + 8);
      pFVar29 = (this->Nodes).AllocatorInstance.Data;
      lVar27 = ((longlong)iVar25 ^ 1U) * 0x30 + lVar27;
      *(undefined8 *)(pFVar29 + lVar27) = *(undefined8 *)(pFVar28 + lVar34);
      *(undefined8 *)(pFVar29 + lVar27 + 8) = uVar8;
      *(undefined8 *)(pFVar29 + lVar27 + 0x10) = *(undefined8 *)(pFVar28 + lVar34 + 0x10);
      uVar8 = *(undefined8 *)(pFVar28 + lVar34 + 0x18 + 8);
      *(undefined8 *)(pFVar29 + lVar27 + 0x18) = *(undefined8 *)(pFVar28 + lVar34 + 0x18);
      *(undefined8 *)(pFVar29 + lVar27 + 0x18 + 8) = uVar8;
      *(undefined8 *)(pFVar29 + lVar27 + 0x28) = *(undefined8 *)(pFVar28 + lVar34 + 0x28);
      uVar36 = uVar22;
      if ((int)param_1 < (this->Nodes).ArrayNum) {
        uVar36 = uVar38;
      }
      if ((uVar36 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar28 = (this->Nodes).AllocatorInstance.Data;
      if ((int)uVar21 < (this->Nodes).ArrayNum) {
        uVar22 = uVar33;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar29 = (this->Nodes).AllocatorInstance.Data;
      dVar42 = *(double *)(pFVar28 + lVar27);
      uVar40 = SUB84(dVar42,0);
      uVar41 = (undefined4)((ulonglong)dVar42 >> 0x20);
      dVar43 = *(double *)(pFVar29 + lVar34 + 0x30);
      if (dVar43 <= dVar42) {
        uVar40 = SUB84(dVar43,0);
        uVar41 = (undefined4)((ulonglong)dVar43 >> 0x20);
      }
      dVar42 = *(double *)(pFVar29 + lVar34 + 0x38);
      if (*(double *)(pFVar28 + lVar27 + 8) <= *(double *)(pFVar29 + lVar34 + 0x38)) {
        dVar42 = *(double *)(pFVar28 + lVar27 + 8);
      }
      dVar43 = *(double *)(pFVar29 + lVar34 + 0x40);
      if (*(double *)(pFVar28 + lVar27 + 0x10) <= *(double *)(pFVar29 + lVar34 + 0x40)) {
        dVar43 = *(double *)(pFVar28 + lVar27 + 0x10);
      }
      *(ulonglong *)(pFVar28 + lVar27) = CONCAT44(uVar41,uVar40);
      *(double *)(pFVar28 + lVar27 + 8) = dVar42;
      *(double *)(pFVar28 + lVar27 + 0x10) = dVar43;
      dVar42 = *(double *)(pFVar29 + lVar34 + 0x48);
      uVar40 = SUB84(dVar42,0);
      uVar41 = (undefined4)((ulonglong)dVar42 >> 0x20);
      dVar43 = *(double *)(pFVar28 + lVar27 + 0x18);
      if (dVar42 <= dVar43) {
        uVar40 = SUB84(dVar43,0);
        uVar41 = (undefined4)((ulonglong)dVar43 >> 0x20);
      }
      dVar42 = *(double *)(pFVar29 + lVar34 + 0x50);
      if (*(double *)(pFVar29 + lVar34 + 0x50) <= *(double *)(pFVar28 + lVar27 + 0x20)) {
        dVar42 = *(double *)(pFVar28 + lVar27 + 0x20);
      }
      dVar43 = *(double *)(pFVar29 + lVar34 + 0x58);
      if (*(double *)(pFVar29 + lVar34 + 0x58) <= *(double *)(pFVar28 + lVar27 + 0x28)) {
        dVar43 = *(double *)(pFVar28 + lVar27 + 0x28);
      }
      *(ulonglong *)(pFVar28 + lVar27 + 0x18) = CONCAT44(uVar41,uVar40);
      *(double *)(pFVar28 + lVar27 + 0x20) = dVar42;
      *(double *)(pFVar28 + lVar27 + 0x28) = dVar43;
    }
  }
  return;
}

// Serialize @ 1482a87a0

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::Serialize(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
            *this,FChaosArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulonglong *puVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  float local_res8 [2];
  uint local_res10 [2];
  TAABB<double,3> local_58;
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar7 < 0x28) {
    local_58.MMin._0_8_ = 0;
    local_58.MMin._8_8_ = 0;
    local_58.MMin._16_8_ = 0;
    local_58.MMax._0_8_ = 0;
    local_58.MMax._8_8_ = 0;
    local_58.MMax._16_8_ = 0;
    TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&local_58);
  }
  operator<<<Chaos::TAABBTreeNode<double>_TSizedDefaultAllocator<32>_>(param_1,&this->Nodes);
  operator<<<Chaos::
  TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,TSizedDefaultAllocator<32>_>
                      *)&this->Leaves);
  operator<<<Chaos::
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_TSizedDefaultAllocator<32>_>
            (param_1,&this->DirtyElements);
  operator<<<Chaos::
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>_TSizedDefaultAllocator<32>_>
            (param_1,&this->GlobalPayloads);
  iVar7 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x1a < iVar7) {
    puVar4 = (ulonglong *)param_1->_padding_;
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_res10[0] = 0;
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res10[0];
      if ((param_1->_padding_ & 1) == 0) goto LAB_1482a88dd;
    }
    else {
      uVar3 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) goto LAB_1482a88dd;
  }
  TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Serialize
            (&this->PayloadToInfo,param_1);
LAB_1482a88dd:
  plVar8 = &param_1->_padding_;
  piVar2 = &this->MaxChildrenInLeaf;
  piVar5 = *(int **)*plVar8;
  if ((int *)((undefined8 *)*plVar8)[1] < piVar5 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    *(longlong *)*plVar8 = *(longlong *)*plVar8 + 4;
  }
  piVar2 = &this->MaxTreeDepth;
  piVar5 = *(int **)*plVar8;
  if ((int *)((undefined8 *)*plVar8)[1] < piVar5 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar5;
    *(longlong *)*plVar8 = *(longlong *)*plVar8 + 4;
  }
  if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
    plVar8 = (longlong *)*plVar8;
    local_res8[0] = (float)this->MaxPayloadBounds;
    if ((float *)plVar8[1] < (float *)*plVar8 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    if ((param_1->_padding_ & 1) != 0) {
      this->MaxPayloadBounds = (double)local_res8[0];
    }
  }
  else {
    ::operator<<((FArchive *)param_1,&this->MaxPayloadBounds);
  }
  bVar9 = (param_1->_padding_ & 1) == 0;
  if (!bVar9) {
    this->DirtyElementGridCellSize = 0.0;
    this->DirtyElementGridCellSizeInv = 1.0;
    this->bShouldRebuild = true;
    bVar9 = (param_1->_padding_ & 1) == 0;
  }
  if (bVar9) {
    if ((this->bDynamicTree != false) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181246422089987693>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                           ,0x993,"bDynamicTree == false"), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    return;
  }
  this->bModifyingTreeMultiThreadingFastCheck = false;
  this->bDynamicTree = false;
  this->bBuildOverlapCache = true;
  this->RootNode = -1;
  this->FirstFreeInternalNode = -1;
  this->FirstFreeLeafNode = -1;
  return;
}

// ShouldRebuild @ 1482af310

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::ShouldRebuild(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                *this)

{
  if (this->bDynamicTree != false) {
    return false;
  }
  return this->bShouldRebuild;
}

// SplitNode @ 1482b0160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::SplitNode(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
            *this)

{
  int *piVar1;
  TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TArray<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::FWorkSnapshot,TSizedDefaultAllocator<32>_>
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
  TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *local_130;
  TArray<Chaos::TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>::FWorkSnapshot,TSizedDefaultAllocator<32>_>
  *local_128;
  uint local_120;
  TLeafContainer<Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>_>
  *local_118;
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
          goto LAB_1482b1b7d;
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
                        (0x40,8,uVar26,(ForAnyElementType *)pFVar24,*(int *)&pFVar24[8].field_0x0,
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
                        (0x40,8,uVar26,(ForAnyElementType *)pFVar24,*(int *)&pFVar24[8].field_0x0,
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
                goto LAB_1482b0dc4;
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
LAB_1482b0dc4:
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
              goto LAB_1482b1c02;
            }
          }
          `Chaos::
          TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
LAB_1482b1b7d:
          `Chaos::
          TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
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
LAB_1482b1c02:
    } while ((this->WorkStack).ArrayNum != 0);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return;
}

// Sweep @ 1482b1e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::Sweep(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
        *this,TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
       TVector<double,3> *param_4,
       ISpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_5)

{
  undefined1 auStackY_f8 [32];
  TSpatialVisitor<FExternalSpatialAccelerationPayload,double> local_a8 [2];
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
  QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
            (this,param_1,&local_48,&local_98,&local_78,local_a8,local_48.Dir,&local_48.InvDir,
             local_48.bParallel);
  return;
}

// UpdateAncestorBounds @ 1482b6650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::UpdateAncestorBounds
          (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
           *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  
  uVar10 = (ulonglong)param_1;
  uVar7 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)((this->Nodes).AllocatorInstance.Data + uVar10 * 0x70 + 0x68);
  while( true ) {
    if (uVar7 == 0xffffffff) {
      return;
    }
    uVar9 = (uint)uVar10;
    if (uVar9 == uVar7) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181246422089988426>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x6b6,"CurrentNodeIdx != ParentNodeIdx");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`Chaos::
                    TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    ::UpdateAncestorBounds'::`8'::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x6b9,L"");
      if (!bVar5) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uVar9 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeIdx != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                           ,0x596,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = ~uVar9 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar9 < (this->Nodes).ArrayNum) {
      uVar6 = uVar8;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar13 = (longlong)(int)uVar9 * 0x70;
    uVar6 = *(uint *)((this->Nodes).AllocatorInstance.Data + lVar13 + 0x68);
    if ((uVar6 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentIdx != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                           ,0x598,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = 0;
    if ((int)uVar6 < (this->Nodes).ArrayNum) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(uint *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70 + 0x60) ==
        uVar9) {
      lVar11 = 0;
    }
    else {
      uVar12 = 0;
      if ((int)uVar6 < (this->Nodes).ArrayNum) {
        uVar12 = ~uVar6 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(uint *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70 + 100) !=
          uVar9) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181246422089988705>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                           ,0x59f,"Nodes[ParentIdx].ChildrenNodes[1] == NodeIdx");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (2 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`Chaos::
                      TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                      ::WhichChildAmI'::`25'::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      lVar11 = 0x30;
    }
    uVar6 = 0;
    if ((int)uVar9 < (this->Nodes).ArrayNum) {
      uVar6 = uVar8;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->Nodes).AllocatorInstance.Data;
    uVar12 = ~uVar7 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar7 < (this->Nodes).ArrayNum) {
      uVar6 = uVar12;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    uVar4 = *(undefined8 *)(pFVar1 + lVar13 + 8);
    lVar11 = (longlong)(int)uVar7 * 0x70 + lVar11;
    pFVar2 = (this->Nodes).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + lVar11) = *(undefined8 *)(pFVar1 + lVar13);
    *(undefined8 *)(pFVar2 + lVar11 + 8) = uVar4;
    *(undefined8 *)(pFVar2 + lVar11 + 0x10) = *(undefined8 *)(pFVar1 + lVar13 + 0x10);
    uVar4 = *(undefined8 *)(pFVar1 + lVar13 + 0x18 + 8);
    *(undefined8 *)(pFVar2 + lVar11 + 0x18) = *(undefined8 *)(pFVar1 + lVar13 + 0x18);
    *(undefined8 *)(pFVar2 + lVar11 + 0x18 + 8) = uVar4;
    *(undefined8 *)(pFVar2 + lVar11 + 0x28) = *(undefined8 *)(pFVar1 + lVar13 + 0x28);
    uVar6 = 0;
    if ((int)uVar9 < (this->Nodes).ArrayNum) {
      uVar6 = uVar8;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((byte)(this->Nodes).AllocatorInstance.Data[lVar13 + 0x6c] & 1) == 0) {
      uVar6 = 0;
      if ((int)uVar7 < (this->Nodes).ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Nodes).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar9 < (this->Nodes).ArrayNum) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Nodes).AllocatorInstance.Data;
      dVar16 = *(double *)(pFVar2 + lVar13 + 0x30);
      uVar14 = SUB84(dVar16,0);
      uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar17 = *(double *)(pFVar1 + lVar11);
      if (dVar17 <= dVar16) {
        uVar14 = SUB84(dVar17,0);
        uVar15 = (undefined4)((ulonglong)dVar17 >> 0x20);
      }
      dVar16 = *(double *)(pFVar2 + lVar13 + 0x38);
      if (*(double *)(pFVar1 + lVar11 + 8) <= *(double *)(pFVar2 + lVar13 + 0x38)) {
        dVar16 = *(double *)(pFVar1 + lVar11 + 8);
      }
      dVar17 = *(double *)(pFVar2 + lVar13 + 0x40);
      if (*(double *)(pFVar1 + lVar11 + 0x10) <= *(double *)(pFVar2 + lVar13 + 0x40)) {
        dVar17 = *(double *)(pFVar1 + lVar11 + 0x10);
      }
      *(ulonglong *)(pFVar1 + lVar11) = CONCAT44(uVar15,uVar14);
      *(double *)(pFVar1 + lVar11 + 8) = dVar16;
      *(double *)(pFVar1 + lVar11 + 0x10) = dVar17;
      dVar16 = *(double *)(pFVar2 + lVar13 + 0x48);
      uVar14 = SUB84(dVar16,0);
      uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar17 = *(double *)(pFVar1 + lVar11 + 0x18);
      if (dVar16 <= dVar17) {
        uVar14 = SUB84(dVar17,0);
        uVar15 = (undefined4)((ulonglong)dVar17 >> 0x20);
      }
      dVar16 = *(double *)(pFVar2 + lVar13 + 0x50);
      if (*(double *)(pFVar2 + lVar13 + 0x50) <= *(double *)(pFVar1 + lVar11 + 0x20)) {
        dVar16 = *(double *)(pFVar1 + lVar11 + 0x20);
      }
      dVar17 = *(double *)(pFVar2 + lVar13 + 0x58);
      if (*(double *)(pFVar2 + lVar13 + 0x58) <= *(double *)(pFVar1 + lVar11 + 0x28)) {
        dVar17 = *(double *)(pFVar1 + lVar11 + 0x28);
      }
      *(ulonglong *)(pFVar1 + lVar11 + 0x18) = CONCAT44(uVar15,uVar14);
      *(double *)(pFVar1 + lVar11 + 0x20) = dVar16;
      *(double *)(pFVar1 + lVar11 + 0x28) = dVar17;
    }
    if (param_2) {
      RotateNode(this,uVar7,false);
    }
    uVar10 = (ulonglong)uVar7;
    uVar9 = 0;
    if ((int)uVar7 < (this->Nodes).ArrayNum) {
      uVar9 = uVar12;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = *(uint *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x70 + 0x68);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// UpdateElement @ 1482b79f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::UpdateElement(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                *this,FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2,
               bool param_3)

{
  int *piVar1;
  ulonglong uVar2;
  TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TVector<double> *this_01;
  double *pdVar5;
  TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *this_02;
  FObjectKey *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *pTVar9;
  undefined1 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  FUniqueIdx FVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  NodeAndLeafIndices NVar22;
  ulonglong uVar23;
  DirtyGridHashEntry *pDVar24;
  TVector<double,3> *pTVar25;
  FAABBTreePayloadInfo *pFVar26;
  undefined8 *puVar27;
  uint uVar28;
  longlong lVar29;
  TAABB<double,3> *pTVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined1 *puVar39;
  int iVar40;
  uint *puVar41;
  uint uVar42;
  longlong lVar43;
  uint *puVar44;
  FScriptContainerElement *pFVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar97 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar98 [16];
  bool local_2d8;
  FAABBTreePayloadInfo *local_2d0;
  uint local_2c8 [2];
  uint local_2c0 [2];
  uint local_2b8 [2];
  undefined4 local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  uint local_288;
  uint local_284;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  FScriptContainerElement *local_258;
  longlong local_250;
  FExternalSpatialAccelerationPayload local_248;
  FString local_238;
  FString local_228;
  FObjectKey local_218;
  FObjectKey FStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  FObjectKey local_1d8;
  FObjectKey FStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *local_198;
  uint *local_190;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *local_188;
  uint *local_180;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *local_178;
  uint *local_170;
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *local_168;
  uint *local_160;
  undefined1 local_158 [16];
  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
  *local_148;
  uint *local_140;
  uint *local_138;
  undefined1 local_128 [16];
  FExternalSpatialAccelerationPayload local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if (this->bModifyingTreeMultiThreadingFastCheck != false) {
    bVar17 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_9181246422089988253>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                        ,0x763,"bModifyingTreeMultiThreadingFastCheck == false");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      uVar18 = (*pcVar11)();
      return (bool)uVar18;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`Chaos::
                  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  ::UpdateElement'::`6'::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  puVar31 = (uint *)0x0;
  this->bModifyingTreeMultiThreadingFastCheck = true;
  if (param_3) {
    pTVar25 = &param_2->MMax;
    puVar44 = puVar31;
    do {
      dVar52 = *(double *)pTVar25;
      if (((dVar52 < *(double *)&((TAABB<double,3> *)(pTVar25 + -1))->MMin) ||
          (iVar19 = _finite(*(double *)&((TAABB<double,3> *)(pTVar25 + -1))->MMin), iVar19 == 0)) ||
         (iVar19 = _finite(dVar52), iVar19 == 0)) {
        if (2 < (byte)LogChaos._0_1_) {
          ::FString::PrintfImpl(&local_228,L"X=%3.3f Y=%3.3f Z=%3.3f");
          in_XMM3._8_8_ = 0;
          in_XMM3._0_8_ = *(ulonglong *)&(param_2->MMin).field_0x8;
          ::FString::PrintfImpl(&local_238,L"X=%3.3f Y=%3.3f Z=%3.3f");
          UE::Logging::Private::BasicLog<3>
                    (&`Chaos::
                      TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                      ::UpdateElement'::`29'::LOG_Static,(FLogCategoryBase *)&LogChaos);
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
        }
        param_3 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        break;
      }
      puVar44 = (uint *)((longlong)puVar44 + 1);
      pTVar25 = (TVector<double,3> *)&pTVar25->field_0x8;
    } while ((longlong)puVar44 < 3);
  }
  this_00 = &this->PayloadToInfo;
  local_2d8 = true;
  local_2d0 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::Find
                        (this_00,param_1);
  uVar36 = 0;
  if (local_2d0 == (FAABBTreePayloadInfo *)0x0) {
    uVar20 = (param_1->CachedUniqueIdx).Idx;
    local_2d8 = false;
    if ((uVar20 == 0xffffffff) &&
       (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7431867033672745159>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                            ,199,"Idx.IsValid()"), bVar17)) {
      pcVar11 = (code *)swi(3);
      uVar18 = (*pcVar11)();
      return (bool)uVar18;
    }
    uVar20 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
    uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
    iVar19 = (param_1->CachedUniqueIdx).Idx;
    uVar20 = uVar20 >> 0x10 ^ uVar20;
    if ((iVar19 == -1) &&
       (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7431867033672745159>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                            ,199,"Idx.IsValid()"), bVar17)) {
      pcVar11 = (code *)swi(3);
      uVar18 = (*pcVar11)();
      return (bool)uVar18;
    }
    for (uVar33 = *(uint *)(*(longlong *)&(this->PayloadToInfo).HashTable.field_0x10 +
                           (ulonglong)(*(uint *)&(this->PayloadToInfo).HashTable.field_0x4 & uVar20)
                           * 4); uVar33 != 0xffffffff;
        uVar33 = *(uint *)(*(longlong *)&(this->PayloadToInfo).HashTable.field_0x18 +
                          (ulonglong)uVar33 * 4)) {
      uVar35 = uVar36;
      if ((int)uVar33 < (this->PayloadToInfo).Elements.ArrayNum) {
        uVar35 = ~uVar33 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        uVar18 = (*pcVar11)();
        return (bool)uVar18;
      }
      iVar40 = *(int *)((this_00->Elements).AllocatorInstance.Data +
                       (longlong)(int)uVar33 * 0x24 + 0xc);
      if ((iVar40 == -1) &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7431867033672745159>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                              ,199,"Idx.IsValid()"), bVar17)) {
        pcVar11 = (code *)swi(3);
        uVar18 = (*pcVar11)();
        return (bool)uVar18;
      }
      if (iVar40 == iVar19) {
        if (uVar33 != 0xffffffff) goto LAB_1482b80d7;
        break;
      }
    }
    iVar19 = (this->PayloadToInfo).Elements.ArrayNum;
    piVar1 = &(this->PayloadToInfo).Elements.ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x424,(ForAnyElementType *)this_00,piVar1);
    }
    (this->PayloadToInfo).Elements.ArrayNum = iVar19 + 1;
    iVar40 = param_1->BoneId;
    FVar16.Idx = (param_1->CachedUniqueIdx).Idx;
    lVar37 = (longlong)iVar19;
    pFVar45 = (this_00->Elements).AllocatorInstance.Data;
    pFVar6 = (FObjectKey *)(pFVar45 + lVar37 * 0x24);
    *pFVar6 = (param_1->Component).ObjectKey;
    pFVar6[1].ObjectIndex = iVar40;
    pFVar6[1].ObjectSerialNumber = FVar16.Idx;
    *(undefined8 *)(pFVar45 + lVar37 * 0x24 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(pFVar45 + lVar37 * 0x24 + 0x18) = 0xffffffffffffffff;
    *(undefined4 *)(pFVar45 + lVar37 * 0x24 + 0x20) = 0xffffffff;
    uVar33 = (this->PayloadToInfo).Elements.ArrayNum - 1;
    FHashTable::Add((FHashTable *)&(this->PayloadToInfo).HashTable,uVar20,uVar33);
LAB_1482b80d7:
    uVar20 = uVar36;
    if ((int)uVar33 < (this->PayloadToInfo).Elements.ArrayNum) {
      uVar20 = ~uVar33 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar11 = (code *)swi(3);
      uVar18 = (*pcVar11)();
      return (bool)uVar18;
    }
    local_2d0 = (FAABBTreePayloadInfo *)
                ((this_00->Elements).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x24 + 0x10);
  }
  else {
    uVar20 = local_2d0->LeafIdx;
    if (uVar20 != 0xffffffff) {
      if (param_3 != false) {
        if (this->bDynamicTree == false) {
          uVar33 = uVar36;
          if ((int)uVar20 < *(int *)&(this->Leaves).field_0x8) {
            uVar33 = ~uVar20 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            uVar18 = (*pcVar11)();
            return (bool)uVar18;
          }
          this_01 = (TVector<double> *)(*(longlong *)&this->Leaves + (longlong)(int)uVar20 * 0x48);
          pTVar30 = param_2;
          puVar44 = puVar31;
          do {
            dVar52 = *(double *)&pTVar30->MMin;
            if ((dVar52 < *(double *)((longlong)pTVar30 + ((longlong)this_01 - (longlong)param_2)))
               || (pdVar5 = (double *)
                            ((longlong)pTVar30 + (0x18 - (longlong)param_2) + (longlong)this_01),
                  *pdVar5 <= dVar52 && dVar52 != *pdVar5)) goto LAB_1482b7e7c;
            puVar44 = (uint *)((longlong)puVar44 + 1);
            pTVar30 = (TAABB<double,3> *)&(pTVar30->MMin).field_0x8;
            puVar41 = puVar31;
          } while ((longlong)puVar44 < 3);
          do {
            iVar19 = (int)puVar41;
            dVar52 = UE::Math::TVector<double>::Component(this_01,iVar19);
            dVar53 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->MMax,iVar19);
            if (dVar53 < dVar52) goto LAB_1482b7e7c;
            dVar52 = UE::Math::TVector<double>::Component(this_01 + 1,iVar19);
            dVar53 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->MMax,iVar19);
            if (dVar52 < dVar53) goto LAB_1482b7e7c;
            puVar41 = (uint *)(ulonglong)(iVar19 + 1U);
          } while ((int)(iVar19 + 1U) < 3);
          uVar20 = local_2d0->LeafIdx;
          if ((int)uVar20 < *(int *)&(this->Leaves).field_0x8) {
            uVar36 = ~uVar20 >> 0x1f;
          }
        }
        else {
          uVar20 = local_2d0->NodeIdx;
          uVar33 = 0;
          if ((int)uVar20 < (this->Nodes).ArrayNum) {
            uVar33 = ~uVar20 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            uVar18 = (*pcVar11)();
            return (bool)uVar18;
          }
          pFVar45 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x70;
          pTVar30 = param_2;
          puVar44 = puVar31;
          do {
            dVar52 = *(double *)&pTVar30->MMin;
            if ((dVar52 < *(double *)(((longlong)pFVar45 - (longlong)param_2) + (longlong)pTVar30))
               || (*(double *)(pFVar45 + (0x18 - (longlong)param_2) + (longlong)pTVar30) <= dVar52
                   && dVar52 != *(double *)
                                 (pFVar45 + (0x18 - (longlong)param_2) + (longlong)pTVar30)))
            goto LAB_1482b7e7c;
            puVar44 = (uint *)((longlong)puVar44 + 1);
            pTVar30 = (TAABB<double,3> *)&(pTVar30->MMin).field_0x8;
            puVar41 = puVar31;
          } while ((longlong)puVar44 < 3);
          do {
            iVar19 = (int)puVar41;
            dVar52 = UE::Math::TVector<double>::Component((TVector<double> *)pFVar45,iVar19);
            dVar53 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->MMax,iVar19);
            if (dVar53 < dVar52) goto LAB_1482b7e7c;
            dVar52 = UE::Math::TVector<double>::Component
                               ((TVector<double> *)(pFVar45 + 0x18),iVar19);
            dVar53 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->MMax,iVar19);
            if (dVar52 < dVar53) goto LAB_1482b7e7c;
            puVar41 = (uint *)(ulonglong)(iVar19 + 1U);
          } while ((int)(iVar19 + 1U) < 3);
          uVar20 = local_2d0->LeafIdx;
          if ((int)uVar20 < *(int *)&(this->Leaves).field_0x8) {
            uVar36 = ~uVar20 >> 0x1f;
          }
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
        TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::UpdateElement
                  ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
                   (*(longlong *)&this->Leaves + (longlong)(int)uVar20 * 0x48),param_1,param_2,
                   param_3);
        local_2d8 = true;
        goto LAB_1482ba0f8;
      }
LAB_1482b7e7c:
      if (this->bDynamicTree == false) {
        uVar20 = local_2d0->LeafIdx;
        uVar33 = uVar36;
        if ((int)uVar20 < *(int *)&(this->Leaves).field_0x8) {
          uVar33 = ~uVar20 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
        local_118.Component.ObjectKey = (param_1->Component).ObjectKey;
        local_118.BoneId = param_1->BoneId;
        local_118.CachedUniqueIdx.Idx = (param_1->CachedUniqueIdx).Idx;
        TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::RemoveElement
                  ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
                   (*(longlong *)&this->Leaves + (longlong)(int)uVar20 * 0x48),&local_118);
        local_2d0->LeafIdx = -1;
      }
      else {
        RemoveLeafNode(this,local_2d0->NodeIdx,param_1);
        local_2d0->LeafIdx = -1;
        local_2d0->NodeIdx = -1;
      }
    }
  }
  this->bShouldRebuild = true;
  uVar20 = 0;
  if (param_3 == false) {
    puVar27 = &local_a8;
    local_a8 = ___xmm_ffefffffffffffffffefffffffffffff;
    uStack_a0 = _UNK_1508ffb58;
    local_88 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uStack_80 = _UNK_150a9e648;
    local_98 = ___xmm_7fefffffffffffffffefffffffffffff;
    uStack_90 = _UNK_1506896f8;
LAB_1482b963b:
    uVar33 = local_2d0->GlobalPayloadIdx;
    pTVar4 = &this->GlobalPayloads;
    uVar7 = puVar27[2];
    uVar8 = puVar27[5];
    uVar12 = *puVar27;
    uVar13 = puVar27[1];
    uVar14 = puVar27[3];
    uVar15 = puVar27[4];
    if (uVar33 == 0xffffffff) {
      local_1d8 = (param_1->Component).ObjectKey;
      FStack_1d0.ObjectIndex = param_1->BoneId;
      FStack_1d0.ObjectSerialNumber = (param_1->CachedUniqueIdx).Idx;
      pFVar6 = (FObjectKey *)(pTVar4->AllocatorInstance).Data;
      local_1c8 = uVar12;
      uStack_1c0 = uVar13;
      local_1b8 = uVar7;
      local_1b0 = uVar14;
      uStack_1a8 = uVar15;
      local_1a0 = uVar8;
      if (((pFVar6 <= &local_1d8) &&
          (&local_1d8 < pFVar6 + (longlong)(this->GlobalPayloads).ArrayMax * 8)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar11 = (code *)swi(3);
        uVar18 = (*pcVar11)();
        return (bool)uVar18;
      }
      iVar19 = (this->GlobalPayloads).ArrayNum;
      piVar1 = &(this->GlobalPayloads).ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar4->AllocatorInstance,piVar1);
      }
      (this->GlobalPayloads).ArrayNum = iVar19 + 1;
      pFVar45 = (pTVar4->AllocatorInstance).Data;
      lVar37 = (longlong)iVar19 * 0x40;
      *(FObjectKey *)(pFVar45 + lVar37) = local_1d8;
      ((FObjectKey *)(pFVar45 + lVar37))[1] = FStack_1d0;
      *(undefined8 *)(pFVar45 + lVar37 + 0x10) = local_1c8;
      *(undefined8 *)(pFVar45 + lVar37 + 0x10 + 8) = uStack_1c0;
      *(undefined8 *)(pFVar45 + lVar37 + 0x20) = local_1b8;
      *(undefined8 *)(pFVar45 + lVar37 + 0x28) = local_1b0;
      *(undefined8 *)(pFVar45 + lVar37 + 0x28 + 8) = uStack_1a8;
      *(undefined8 *)(pFVar45 + lVar37 + 0x38) = local_1a0;
      local_2d0->GlobalPayloadIdx = iVar19;
    }
    else {
      uVar35 = uVar20;
      if ((int)uVar33 < (this->GlobalPayloads).ArrayNum) {
        uVar35 = ~uVar33 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        uVar18 = (*pcVar11)();
        return (bool)uVar18;
      }
      pFVar45 = (pTVar4->AllocatorInstance).Data;
      lVar37 = (longlong)(int)uVar33 * 0x40;
      *(undefined8 *)(pFVar45 + lVar37 + 0x10) = uVar12;
      *(undefined8 *)(pFVar45 + lVar37 + 0x10 + 8) = uVar13;
      *(undefined8 *)(pFVar45 + lVar37 + 0x28) = uVar14;
      *(undefined8 *)(pFVar45 + lVar37 + 0x28 + 8) = uVar15;
      *(undefined8 *)(pFVar45 + lVar37 + 0x20) = uVar7;
      *(undefined8 *)(pFVar45 + lVar37 + 0x38) = uVar8;
      uVar33 = uVar20;
      if (local_2d0->GlobalPayloadIdx < (this->GlobalPayloads).ArrayNum) {
        uVar33 = (uint)~local_2d0->GlobalPayloadIdx >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        uVar18 = (*pcVar11)();
        return (bool)uVar18;
      }
    }
    dVar52 = __real_3cb0000000000000;
    uVar32 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar35 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar33 = local_2d0->DirtyPayloadIdx;
    if (uVar33 != 0xffffffff) {
      pTVar9 = (this->DirtyElementTree).Ptr;
      if (pTVar9 == (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                     *)0x0) {
        if (((this->DirtyElementGridCellSize <= 0.0) ||
            (this->DirtyElementMaxGridCellQueryCount < 1)) ||
           ((this->DirtyElementMaxPhysicalSizeInCells < 1 || (this->DirtyElementMaxCellCapacity < 1)
            ))) {
          iVar19 = (this->DirtyElements).ArrayNum;
          if ((int)(uVar33 + 1) < iVar19) {
            uVar36 = uVar20;
            if ((int)(iVar19 - 1U) < iVar19) {
              uVar36 = ~(iVar19 - 1U) >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar18 = (*pcVar11)();
              return (bool)uVar18;
            }
            iVar19 = local_2d0->DirtyPayloadIdx;
            pFVar6 = (FObjectKey *)
                     ((this->DirtyElements).AllocatorInstance.Data +
                     (longlong)(this->DirtyElements).ArrayNum * 0x40 + -0x40);
            local_e8._0_8_ = *pFVar6;
            local_e8._8_8_ = pFVar6[1];
            pFVar26 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::
                      FindChecked(&this->PayloadToInfo,
                                  (FExternalSpatialAccelerationPayload *)local_e8);
            pFVar26->DirtyPayloadIdx = iVar19;
          }
          uVar36 = local_2d0->DirtyPayloadIdx;
          if ((int)uVar36 < (this->DirtyElements).ArrayNum) {
            uVar20 = ~uVar36 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            uVar18 = (*pcVar11)();
            return (bool)uVar18;
          }
          TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(&this->DirtyElements,uVar36);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,&(this->DirtyElements).AllocatorInstance,(this->DirtyElements).ArrayNum,
                     &(this->DirtyElements).ArrayMax);
        }
        else {
          uVar28 = local_2d0->DirtyGridOverflowIdx;
          local_2c0[0] = uVar33;
          if (uVar28 == 0xffffffff) {
            dVar53 = this->DirtyElementGridCellSizeInv;
            if ((int)uVar33 < (this->DirtyElements).ArrayNum) {
              uVar36 = ~uVar33 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar18 = (*pcVar11)();
              return (bool)uVar18;
            }
            pFVar45 = (this->DirtyElements).AllocatorInstance.Data;
            local_160 = local_2c0;
            lVar29 = (longlong)(int)uVar33 * 0x40;
            auVar57._0_8_ = dVar53 * *(double *)(pFVar45 + lVar29 + 0x10);
            auVar57._8_8_ = 0;
            auVar69._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)auVar57._0_8_ >> 0x20) & uVar32,
                                  SUB84(auVar57._0_8_,0) & uVar35) * dVar52 + auVar57._0_8_;
            auVar69._8_8_ = 0;
            in_XMM3 = roundpd(in_XMM3,auVar69,1);
            dVar73 = dVar53 * *(double *)(pFVar45 + lVar29 + 0x18);
            lVar37 = (longlong)in_XMM3._0_8_;
            auVar91._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                  SUB84(dVar73,0) & uVar35) * dVar52 + dVar73;
            auVar91._8_8_ = 0;
            dVar73 = dVar53 * *(double *)(pFVar45 + lVar29 + 0x28);
            dVar53 = dVar53 * *(double *)(pFVar45 + lVar29 + 0x30);
            auVar75 = roundpd(auVar57,auVar91,1);
            auVar92._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                  SUB84(dVar73,0) & uVar35) * dVar52 + dVar73;
            auVar92._8_8_ = 0;
            auVar95 = roundpd(auVar75,auVar92,1);
            auVar70._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) & uVar32,
                                  SUB84(dVar53,0) & uVar35) * dVar52 + dVar53;
            auVar70._8_8_ = 0;
            auVar97 = roundpd(auVar95,auVar70,1);
            local_168 = this;
            for (; lVar37 <= (longlong)auVar95._0_8_; lVar37 = lVar37 + 1) {
              if ((longlong)auVar75._0_8_ <= (longlong)auVar97._0_8_) {
                uVar36 = (uint)lVar37 & 0xffff;
                uVar36 = (uVar36 << 8 ^ uVar36) & 0xff00ff;
                uVar36 = (uVar36 << 4 ^ uVar36) & 0xf0f0f0f;
                uVar36 = (uVar36 * 4 ^ uVar36) & 0x33333333;
                uVar36 = uVar36 * 2 ^ uVar36;
                lVar29 = (longlong)auVar75._0_8_;
                do {
                  uVar33 = (uint)lVar29 & 0xffff;
                  uVar33 = (uVar33 << 8 ^ uVar33) & 0xff00ff;
                  uVar33 = (uVar33 << 4 ^ uVar33) & 0xf0f0f0f;
                  uVar33 = (uVar33 * 4 ^ uVar33) & 0x33333333;
                  bVar17 = `Chaos::
                           TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                           ::DeleteDirtyParticleEverywhere'::__l5::<lambda_1>::operator()
                                     (&local_168,
                                      ((uVar33 * 2 ^ uVar33) * 2 ^ uVar36) & 0xaaaaaaaa ^ uVar36);
                  if (!bVar17) goto LAB_1482b9c41;
                  lVar29 = lVar29 + 1;
                } while (lVar29 <= (longlong)auVar97._0_8_);
              }
            }
          }
          else {
            pTVar3 = &this->DirtyElementsGridOverflow;
            if ((int)uVar28 < (this->DirtyElementsGridOverflow).ArrayNum) {
              uVar36 = ~uVar28 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar18 = (*pcVar11)();
              return (bool)uVar18;
            }
            if ((*(uint *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar28 * 4) !=
                 local_2c0[0]) &&
               (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_9181246422089989012>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                                    ,0x46c,
                                    "DirtyElementsGridOverflow[DeleteDirtyGridOverflowIdx] == DeleteDirtyParticleIdx"
                                   ), bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar18 = (*pcVar11)();
              return (bool)uVar18;
            }
            iVar19 = (this->DirtyElementsGridOverflow).ArrayNum;
            if ((int)(uVar28 + 1) < iVar19) {
              uVar36 = uVar20;
              if ((int)(iVar19 - 1U) < iVar19) {
                uVar36 = ~(iVar19 - 1U) >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                uVar18 = (*pcVar11)();
                return (bool)uVar18;
              }
              uVar36 = *(uint *)((pTVar3->AllocatorInstance).Data +
                                (longlong)(this->DirtyElementsGridOverflow).ArrayNum * 4 + -4);
              uVar33 = uVar20;
              if ((int)uVar36 < (this->DirtyElements).ArrayNum) {
                uVar33 = ~uVar36 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                uVar18 = (*pcVar11)();
                return (bool)uVar18;
              }
              pFVar6 = (FObjectKey *)
                       ((this->DirtyElements).AllocatorInstance.Data + (longlong)(int)uVar36 * 0x40)
              ;
              local_f8._0_8_ = *pFVar6;
              local_f8._8_8_ = pFVar6[1];
              pFVar26 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::
                        FindChecked(&this->PayloadToInfo,
                                    (FExternalSpatialAccelerationPayload *)local_f8);
              pFVar26->DirtyGridOverflowIdx = uVar28;
            }
            uVar36 = uVar20;
            if ((int)uVar28 < (this->DirtyElementsGridOverflow).ArrayNum) {
              uVar36 = ~uVar28 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar18 = (*pcVar11)();
              return (bool)uVar18;
            }
            TArray<int,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(pTVar3,uVar28);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&pTVar3->AllocatorInstance,(this->DirtyElementsGridOverflow).ArrayNum,
                       &(this->DirtyElementsGridOverflow).ArrayMax);
          }
LAB_1482b9c41:
          iVar19 = (this->DirtyElements).ArrayNum;
          if ((int)(local_2c0[0] + 1) < iVar19) {
            uVar33 = iVar19 - 1;
            uVar36 = uVar20;
            if ((int)uVar33 < iVar19) {
              uVar36 = ~uVar33 >> 0x1f;
            }
            local_284 = uVar33;
            if ((uVar36 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar18 = (*pcVar11)();
              return (bool)uVar18;
            }
            pFVar6 = (FObjectKey *)
                     ((this->DirtyElements).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x40);
            local_158._0_8_ = *pFVar6;
            local_158._8_8_ = pFVar6[1];
            pFVar26 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::
                      FindChecked(&this->PayloadToInfo,
                                  (FExternalSpatialAccelerationPayload *)local_158);
            uVar33 = local_2c0[0];
            uVar36 = pFVar26->DirtyGridOverflowIdx;
            if (uVar36 == 0xffffffff) {
              iVar19 = (this->DirtyElements).ArrayNum;
              dVar53 = this->DirtyElementGridCellSizeInv;
              uVar33 = iVar19 - 1;
              uVar36 = uVar20;
              if ((int)uVar33 < iVar19) {
                uVar36 = ~uVar33 >> 0x1f;
              }
              if ((uVar36 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                uVar18 = (*pcVar11)();
                return (bool)uVar18;
              }
              pFVar45 = (this->DirtyElements).AllocatorInstance.Data;
              local_140 = &local_284;
              lVar29 = (longlong)(this->DirtyElements).ArrayNum * 0x40;
              local_138 = local_2c0;
              auVar58._0_8_ = dVar53 * *(double *)(pFVar45 + lVar29 + -0x30);
              auVar58._8_8_ = 0;
              auVar71._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)auVar58._0_8_ >> 0x20) & uVar32,
                                    SUB84(auVar58._0_8_,0) & uVar35) * dVar52 + auVar58._0_8_;
              auVar71._8_8_ = 0;
              auVar75 = roundpd(in_XMM3,auVar71,1);
              dVar73 = dVar53 * *(double *)(pFVar45 + lVar29 + -0x28);
              lVar37 = (longlong)auVar75._0_8_;
              auVar93._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                    SUB84(dVar73,0) & uVar35) * dVar52 + dVar73;
              auVar93._8_8_ = 0;
              dVar73 = dVar53 * *(double *)(pFVar45 + lVar29 + -0x18);
              dVar53 = dVar53 * *(double *)(pFVar45 + lVar29 + -0x10);
              auVar75 = roundpd(auVar58,auVar93,1);
              auVar94._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                    SUB84(dVar73,0) & uVar35) * dVar52 + dVar73;
              auVar94._8_8_ = 0;
              auVar95 = roundpd(auVar75,auVar94,1);
              auVar72._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) & uVar32,
                                    SUB84(dVar53,0) & uVar35) * dVar52 + dVar53;
              auVar72._8_8_ = 0;
              auVar97 = roundpd(auVar95,auVar72,1);
              local_148 = this;
              for (; lVar37 <= (longlong)auVar95._0_8_; lVar37 = lVar37 + 1) {
                if ((longlong)auVar75._0_8_ <= (longlong)auVar97._0_8_) {
                  uVar36 = (uint)lVar37 & 0xffff;
                  uVar36 = (uVar36 << 8 ^ uVar36) & 0xff00ff;
                  uVar36 = (uVar36 << 4 ^ uVar36) & 0xf0f0f0f;
                  uVar36 = (uVar36 * 4 ^ uVar36) & 0x33333333;
                  uVar36 = uVar36 * 2 ^ uVar36;
                  lVar29 = (longlong)auVar75._0_8_;
                  do {
                    uVar33 = (uint)lVar29 & 0xffff;
                    uVar33 = (uVar33 << 8 ^ uVar33) & 0xff00ff;
                    uVar33 = (uVar33 << 4 ^ uVar33) & 0xf0f0f0f;
                    uVar33 = (uVar33 * 4 ^ uVar33) & 0x33333333;
                    bVar17 = `Chaos::
                             TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                             ::DeleteDirtyParticleEverywhere'::__l16::<lambda_2>::operator()
                                       (&local_148,
                                        ((uVar33 * 2 ^ uVar33) * 2 ^ uVar36) & 0xaaaaaaaa ^ uVar36);
                    if (!bVar17) goto LAB_1482b9eee;
                    lVar29 = lVar29 + 1;
                  } while (lVar29 <= (longlong)auVar97._0_8_);
                }
              }
            }
            else {
              uVar35 = uVar20;
              if ((int)uVar36 < (this->DirtyElementsGridOverflow).ArrayNum) {
                uVar35 = ~uVar36 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar11 = (code *)swi(3);
                uVar18 = (*pcVar11)();
                return (bool)uVar18;
              }
              *(uint *)((this->DirtyElementsGridOverflow).AllocatorInstance.Data +
                       (longlong)(int)uVar36 * 4) = uVar33;
            }
LAB_1482b9eee:
            uVar36 = local_2c0[0];
            pFVar26 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::
                      FindChecked(&this->PayloadToInfo,
                                  (FExternalSpatialAccelerationPayload *)local_158);
            pFVar26->DirtyPayloadIdx = uVar36;
          }
          uVar36 = local_2c0[0];
          if ((int)local_2c0[0] < (this->DirtyElements).ArrayNum) {
            uVar20 = ~local_2c0[0] >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            uVar18 = (*pcVar11)();
            return (bool)uVar18;
          }
          TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
          ::RemoveAtSwapImpl(&this->DirtyElements,uVar36);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,&(this->DirtyElements).AllocatorInstance,(this->DirtyElements).ArrayNum,
                     &(this->DirtyElements).ArrayMax);
        }
      }
      else {
        RemoveLeafNode(pTVar9,uVar33,param_1);
      }
      local_2d0->DirtyPayloadIdx = -1;
      local_2d0->DirtyGridOverflowIdx = -1;
    }
  }
  else {
    dVar73 = *(double *)&(param_2->MMax).field_0x8 - *(double *)&(param_2->MMin).field_0x8;
    dVar52 = *(double *)&param_2->MMax - *(double *)&param_2->MMin;
    dVar53 = *(double *)&(param_2->MMax).field_0x10 - *(double *)&(param_2->MMin).field_0x10;
    if (((dVar52 <= dVar73) || (dVar52 <= dVar53)) && (dVar52 = dVar53, dVar53 <= dVar73)) {
      dVar52 = dVar73;
    }
    if (this->MaxPayloadBounds <= dVar52 && dVar52 != this->MaxPayloadBounds) {
      puVar27 = &local_d8;
      local_d8 = *(undefined8 *)&param_2->MMin;
      uStack_d0 = *(undefined8 *)&(param_2->MMin).field_0x8;
      local_c8 = *(undefined8 *)&(param_2->MMin).field_0x10;
      local_c0 = *(undefined8 *)&param_2->MMax;
      uStack_b8 = *(undefined8 *)&(param_2->MMax).field_0x8;
      local_b0 = *(undefined8 *)&(param_2->MMax).field_0x10;
      goto LAB_1482b963b;
    }
    uVar33 = local_2d0->DirtyPayloadIdx;
    if (uVar33 == 0xffffffff) {
      if (this->bDynamicTree == false) {
        pTVar9 = (this->DirtyElementTree).Ptr;
        if (pTVar9 == (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                       *)0x0) {
          local_218 = (param_1->Component).ObjectKey;
          FStack_210.ObjectIndex = param_1->BoneId;
          FStack_210.ObjectSerialNumber = (param_1->CachedUniqueIdx).Idx;
          pFVar6 = (FObjectKey *)(this->DirtyElements).AllocatorInstance.Data;
          local_208 = *(undefined8 *)&param_2->MMin;
          uStack_200 = *(undefined8 *)&(param_2->MMin).field_0x8;
          local_1f8 = *(undefined8 *)&(param_2->MMin).field_0x10;
          local_1f0 = *(undefined8 *)&param_2->MMax;
          uStack_1e8 = *(undefined8 *)&(param_2->MMax).field_0x8;
          local_1e0 = *(undefined8 *)&(param_2->MMax).field_0x10;
          if (((pFVar6 <= &local_218) &&
              (&local_218 < pFVar6 + (longlong)(this->DirtyElements).ArrayMax * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar11 = (code *)swi(3);
            uVar18 = (*pcVar11)();
            return (bool)uVar18;
          }
          uVar20 = (this->DirtyElements).ArrayNum;
          piVar1 = &(this->DirtyElements).ArrayMax;
          if (uVar20 == *piVar1) {
            uVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&(this->DirtyElements).AllocatorInstance,piVar1);
          }
          (this->DirtyElements).ArrayNum = uVar20 + 1;
          pFVar45 = (this->DirtyElements).AllocatorInstance.Data;
          lVar37 = (longlong)(int)uVar20 * 0x40;
          *(FObjectKey *)(pFVar45 + lVar37) = local_218;
          ((FObjectKey *)(pFVar45 + lVar37))[1] = FStack_210;
          *(undefined8 *)(pFVar45 + lVar37 + 0x10) = local_208;
          *(undefined8 *)(pFVar45 + lVar37 + 0x10 + 8) = uStack_200;
          *(undefined8 *)(pFVar45 + lVar37 + 0x20) = local_1f8;
          *(undefined8 *)(pFVar45 + lVar37 + 0x28) = local_1f0;
          *(undefined8 *)(pFVar45 + lVar37 + 0x28 + 8) = uStack_1e8;
          *(undefined8 *)(pFVar45 + lVar37 + 0x38) = local_1e0;
          local_2d0->DirtyPayloadIdx = uVar20;
          dVar52 = __real_3cb0000000000000;
          uVar35 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar33 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          if ((((this->DirtyElementTree).Ptr ==
                (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                 *)0x0) && (0.0 < this->DirtyElementGridCellSize)) &&
             ((0 < this->DirtyElementMaxGridCellQueryCount &&
              ((uVar38 = (ulonglong)this->DirtyElementMaxPhysicalSizeInCells,
               0 < this->DirtyElementMaxPhysicalSizeInCells &&
               (0 < this->DirtyElementMaxCellCapacity)))))) {
            dVar53 = this->DirtyElementGridCellSizeInv;
            dVar73 = dVar53 * *(double *)&param_2->MMin;
            auVar59._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar73;
            auVar59._8_8_ = 0;
            dVar73 = dVar53 * *(double *)&(param_2->MMin).field_0x8;
            auVar95 = roundpd(in_XMM3,auVar59,1);
            lVar46 = (longlong)auVar95._0_8_;
            auVar60._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar73;
            auVar60._8_8_ = 0;
            auVar74._0_8_ = dVar53 * *(double *)&(param_2->MMax).field_0x8;
            auVar74._8_8_ = 0;
            dVar53 = dVar53 * *(double *)&param_2->MMax;
            auVar97 = roundpd(in_XMM4,auVar60,1);
            lVar48 = (longlong)auVar97._0_8_;
            auVar61._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar53,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar53;
            auVar61._8_8_ = 0;
            auVar98 = roundpd(in_XMM5,auVar61,1);
            lVar29 = (longlong)auVar98._0_8_;
            auVar62._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)auVar74._0_8_ >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(auVar74._0_8_,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + auVar74._0_8_;
            auVar62._8_8_ = 0;
            auVar75 = roundpd(auVar74,auVar62,1);
            lVar37 = (longlong)auVar75._0_8_;
            local_2b8[0] = uVar20;
            if ((lVar29 < lVar46) || (lVar37 < lVar48)) {
              bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<613042642325864502>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTreeDirtyGridUtils.h"
                                  ,0x36,"CellEndX >= CellStartX && CellEndY >= CellStartY");
              if (bVar17) {
                pcVar11 = (code *)swi(3);
                uVar18 = (*pcVar11)();
                return (bool)uVar18;
              }
            }
            else {
              uVar23 = (lVar37 - lVar48) + 1;
              uVar2 = (lVar29 - lVar46) + 1;
              if (((uVar2 <= uVar38) && (uVar23 <= uVar38)) &&
                 (uVar23 = uVar23 * uVar2, uVar23 < uVar38 || uVar23 - uVar38 == 0)) {
                local_298 = (longlong)auVar97._0_8_;
                lVar37 = (longlong)auVar95._0_8_;
                do {
                  uVar20 = (uint)lVar37 & 0xffff;
                  uVar20 = (uVar20 << 8 ^ uVar20) & 0xff00ff;
                  uVar20 = (uVar20 << 4 ^ uVar20) & 0xf0f0f0f;
                  uVar20 = (uVar20 * 4 ^ uVar20) & 0x33333333;
                  uVar20 = uVar20 * 2 ^ uVar20;
                  lVar29 = local_298;
                  do {
                    uVar32 = (uint)lVar29 & 0xffff;
                    uVar32 = (uVar32 << 8 ^ uVar32) & 0xff00ff;
                    uVar32 = (uVar32 << 4 ^ uVar32) & 0xf0f0f0f;
                    uVar32 = (uVar32 * 4 ^ uVar32) & 0x33333333;
                    pDVar24 = TMapBase<int,Chaos::DirtyGridHashEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>_>
                              ::Find((TMapBase<int,Chaos::DirtyGridHashEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::DirtyGridHashEntry,0>_>
                                      *)&this->CellHashToFlatArray,
                                     ((uVar32 * 2 ^ uVar32) * 2 ^ uVar20) & 0xaaaaaaaa ^ uVar20);
                    if ((pDVar24 != (DirtyGridHashEntry *)0x0) &&
                       (this->DirtyElementMaxCellCapacity <= pDVar24->Count)) goto LAB_1482b86bd;
                    lVar29 = lVar29 + 1;
                  } while (lVar29 <= (longlong)auVar75._0_8_);
                  lVar37 = lVar37 + 1;
                } while (lVar37 <= (longlong)auVar98._0_8_);
                dVar53 = this->DirtyElementGridCellSizeInv;
                local_190 = local_2b8;
                auVar54._0_8_ = dVar53 * *(double *)&param_2->MMin;
                auVar54._8_8_ = 0;
                auVar63._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)auVar54._0_8_ >> 0x20) & uVar35,
                                      SUB84(auVar54._0_8_,0) & uVar33) * dVar52 + auVar54._0_8_;
                auVar63._8_8_ = 0;
                auVar75 = roundpd(auVar95,auVar63,1);
                dVar73 = dVar53 * *(double *)&(param_2->MMin).field_0x8;
                lVar37 = (longlong)auVar75._0_8_;
                auVar76._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar35,
                                      SUB84(dVar73,0) & uVar33) * dVar52 + dVar73;
                auVar76._8_8_ = 0;
                dVar73 = dVar53 * *(double *)&param_2->MMax;
                dVar53 = dVar53 * *(double *)&(param_2->MMax).field_0x8;
                auVar75 = roundpd(auVar54,auVar76,1);
                auVar77._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar35,
                                      SUB84(dVar73,0) & uVar33) * dVar52 + dVar73;
                auVar77._8_8_ = 0;
                auVar95 = roundpd(auVar75,auVar77,1);
                auVar64._0_8_ =
                     (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) & uVar35,
                                      SUB84(dVar53,0) & uVar33) * dVar52 + dVar53;
                auVar64._8_8_ = 0;
                auVar97 = roundpd(auVar95,auVar64,1);
                local_198 = this;
                for (; lVar37 <= (longlong)auVar95._0_8_; lVar37 = lVar37 + 1) {
                  if ((longlong)auVar75._0_8_ <= (longlong)auVar97._0_8_) {
                    uVar20 = (uint)lVar37 & 0xffff;
                    uVar20 = (uVar20 << 8 ^ uVar20) & 0xff00ff;
                    uVar20 = (uVar20 << 4 ^ uVar20) & 0xf0f0f0f;
                    uVar20 = (uVar20 * 4 ^ uVar20) & 0x33333333;
                    uVar20 = uVar20 * 2 ^ uVar20;
                    lVar29 = (longlong)auVar75._0_8_;
                    do {
                      uVar33 = (uint)lVar29 & 0xffff;
                      uVar33 = (uVar33 << 8 ^ uVar33) & 0xff00ff;
                      uVar33 = (uVar33 << 4 ^ uVar33) & 0xf0f0f0f;
                      uVar33 = (uVar33 * 4 ^ uVar33) & 0x33333333;
                      bVar17 = `Chaos::
                               TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                               ::AddDirtyElementToGrid'::__l11::<lambda_2>::operator()
                                         (&local_198,
                                          ((uVar33 * 2 ^ uVar33) * 2 ^ uVar20) & 0xaaaaaaaa ^ uVar20
                                         );
                      if (!bVar17) goto LAB_1482b8677;
                      lVar29 = lVar29 + 1;
                    } while (lVar29 <= (longlong)auVar97._0_8_);
                  }
                }
LAB_1482b8677:
                local_2d0->DirtyGridOverflowIdx = -1;
                goto LAB_1482b925b;
              }
            }
            piVar1 = &(this->TreeStats).StatNumElementsTooLargeForGrid;
            *piVar1 = *piVar1 + 1;
LAB_1482b86bd:
            pTVar3 = &this->DirtyElementsGridOverflow;
            pFVar45 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar45 <= (FScriptContainerElement *)local_2b8) &&
                ((FScriptContainerElement *)local_2b8 <
                 pFVar45 + (longlong)(this->DirtyElementsGridOverflow).ArrayMax * 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar18 = (*pcVar11)();
              return (bool)uVar18;
            }
            iVar19 = (this->DirtyElementsGridOverflow).ArrayNum;
            piVar1 = &(this->DirtyElementsGridOverflow).ArrayMax;
            if (iVar19 == *piVar1) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar1);
            }
            pFVar45 = (pTVar3->AllocatorInstance).Data;
            (this->DirtyElementsGridOverflow).ArrayNum = iVar19 + 1;
            *(uint *)(pFVar45 + (longlong)iVar19 * 4) = local_2b8[0];
            local_2d0->DirtyGridOverflowIdx = iVar19;
          }
        }
        else {
          NVar22 = InsertLeaf(pTVar9,(FExternalSpatialAccelerationPayload *)local_128,
                              (TAABB<double,3> *)param_1);
          local_2d0->DirtyPayloadIdx = *(int *)NVar22;
        }
      }
      else {
        InsertLeaf(this,&local_248,(TAABB<double,3> *)param_1);
        local_2d0->NodeIdx = local_248.Component.ObjectKey.ObjectIndex;
        local_2d0->LeafIdx = local_248.Component.ObjectKey.ObjectSerialNumber;
      }
    }
    else {
      pTVar9 = (this->DirtyElementTree).Ptr;
      if (pTVar9 == (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                     *)0x0) {
        if (((0.0 < this->DirtyElementGridCellSize) && (0 < this->DirtyElementMaxGridCellQueryCount)
            ) && ((0 < this->DirtyElementMaxPhysicalSizeInCells &&
                  (0 < this->DirtyElementMaxCellCapacity)))) {
          iVar19 = local_2d0->DirtyGridOverflowIdx;
          local_2c8[0] = uVar33;
          if (iVar19 == -1) {
            uVar35 = uVar20;
            if ((int)uVar33 < (this->DirtyElements).ArrayNum) {
              uVar35 = ~uVar33 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              uVar18 = (*pcVar11)();
              return (bool)uVar18;
            }
            dVar53 = __real_3cb0000000000000;
            uVar32 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            uVar35 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            dVar52 = this->DirtyElementGridCellSizeInv;
            local_258 = (this->DirtyElements).AllocatorInstance.Data;
            local_298 = (longlong)(int)uVar33 * 0x40;
            auVar75._0_8_ = dVar52 * *(double *)(local_258 + local_298 + 0x10);
            auVar75._8_8_ = 0;
            auVar95._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)auVar75._0_8_ >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(auVar75._0_8_,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + auVar75._0_8_;
            auVar95._8_8_ = 0;
            auVar75 = roundpd(auVar75,auVar95,1);
            lVar46 = (longlong)auVar75._0_8_;
            dVar73 = dVar52 * *(double *)(local_258 + local_298 + 0x18);
            auVar98._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar73;
            auVar98._8_8_ = 0;
            dVar73 = dVar52 * *(double *)(local_258 + local_298 + 0x28);
            auVar75 = roundpd(auVar75,auVar98,1);
            lVar37 = (longlong)auVar75._0_8_;
            auVar78._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar73;
            auVar78._8_8_ = 0;
            dVar73 = dVar52 * *(double *)(local_258 + local_298 + 0x30);
            auVar75 = roundpd(auVar75,auVar78,1);
            lVar29 = (longlong)auVar75._0_8_;
            auVar79._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar73;
            auVar79._8_8_ = 0;
            dVar73 = dVar52 * *(double *)&param_2->MMin;
            auVar75 = roundpd(auVar75,auVar79,1);
            lVar48 = (longlong)auVar75._0_8_;
            auVar80._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar73;
            auVar80._8_8_ = 0;
            dVar73 = dVar52 * *(double *)&(param_2->MMin).field_0x8;
            auVar75 = roundpd(auVar75,auVar80,1);
            lVar51 = (longlong)auVar75._0_8_;
            auVar81._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar73;
            auVar81._8_8_ = 0;
            dVar73 = dVar52 * *(double *)&param_2->MMax;
            dVar52 = dVar52 * *(double *)&(param_2->MMax).field_0x8;
            auVar75 = roundpd(auVar75,auVar81,1);
            lVar47 = (longlong)auVar75._0_8_;
            auVar82._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar73,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar73;
            auVar82._8_8_ = 0;
            auVar75 = roundpd(auVar75,auVar82,1);
            lVar49 = (longlong)auVar75._0_8_;
            auVar97._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar52,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                 __real_3cb0000000000000 + dVar52;
            auVar97._8_8_ = 0;
            auVar75 = roundpd(auVar75,auVar97,1);
            lVar50 = (longlong)auVar75._0_8_;
            local_2a0 = lVar46;
            local_290 = lVar48;
            local_280 = lVar47;
            local_278 = lVar49;
            local_270 = lVar50;
            local_268 = lVar51;
            local_248._8_8_ = lVar29;
            if (((((lVar46 < lVar51) || (lVar37 < lVar47)) || (lVar49 < lVar29)) ||
                (lVar50 < lVar48)) && (local_260 = lVar37, lVar46 <= lVar29)) {
              do {
                lVar43 = lVar37;
                local_2a8 = lVar37;
                local_2a0 = lVar46;
                if (lVar37 <= lVar48) {
                  do {
                    if (((lVar46 < lVar51) || (lVar49 < lVar46)) ||
                       ((lVar37 < lVar47 || (lVar50 < lVar37)))) {
                      uVar28 = (uint)lVar46 & 0xffff;
                      uVar28 = (uVar28 << 8 ^ uVar28) & 0xff00ff;
                      uVar28 = (uVar28 << 4 ^ uVar28) & 0xf0f0f0f;
                      uVar21 = (uint)lVar37 & 0xffff;
                      uVar34 = (uVar28 * 4 ^ uVar28) & 0x33333333;
                      uVar28 = (uVar21 << 8 ^ uVar21) & 0xff00ff;
                      uVar28 = (uVar28 << 4 ^ uVar28) & 0xf0f0f0f;
                      uVar28 = (uVar28 * 4 ^ uVar28) & 0x33333333;
                      local_288 = local_2c8[0];
                      uVar34 = uVar34 * 2 ^ uVar34;
                      uVar34 = ((uVar28 * 2 ^ uVar28) * 2 ^ uVar34) & 0xaaaaaaaa ^ uVar34;
                      local_2a8 = lVar37;
                      if (*(int *)&(this->CellHashToFlatArray).field_0x8 !=
                          *(int *)&(this->CellHashToFlatArray).field_0x34) {
                        puVar10 = *(undefined1 **)&(this->CellHashToFlatArray).field_0x40;
                        puVar39 = &(this->CellHashToFlatArray).field_0x38;
                        if (puVar10 != (undefined1 *)0x0) {
                          puVar39 = puVar10;
                        }
                        iVar40 = *(int *)(puVar39 +
                                         (ulonglong)
                                         (*(int *)&(this->CellHashToFlatArray).field_0x48 - 1U &
                                         uVar34) * 4);
                        if (iVar40 != -1) {
LAB_1482b8ce0:
                          lVar37 = *(longlong *)&this->CellHashToFlatArray + (longlong)iVar40 * 0x14
                          ;
                          if (*(uint *)(*(longlong *)&this->CellHashToFlatArray +
                                       (longlong)iVar40 * 0x14) != uVar34)
                          goto code_r0x0001482b8cf0;
                          puVar44 = (uint *)(lVar37 + 4);
                          if (lVar37 == 0) {
                            puVar44 = puVar31;
                          }
                          if ((puVar44 == (uint *)0x0) || ((int)puVar44[1] < 1)) goto LAB_1482b8eba;
                          uVar28 = *puVar44;
                          uVar42 = (puVar44[1] - 1) + uVar28;
                          pTVar3 = &this->FlattenedCellArrayOfDirtyIndices;
                          uVar34 = (int)(uVar28 + uVar42) / 2;
                          uVar38 = (ulonglong)(int)uVar34;
                          uVar21 = uVar20;
                          if ((int)uVar34 < (this->FlattenedCellArrayOfDirtyIndices).ArrayNum) {
                            uVar21 = ~uVar34 >> 0x1f;
                          }
                          if ((uVar21 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar11 = (code *)swi(3);
                            uVar18 = (*pcVar11)();
                            return (bool)uVar18;
                          }
                          uVar21 = *(uint *)((pTVar3->AllocatorInstance).Data + uVar38 * 4);
                          if (uVar21 != local_288) {
                            lVar48 = local_290;
                            if (uVar28 == uVar42) goto LAB_1482b8eba;
                            if ((int)uVar21 < (int)local_288) {
                              uVar28 = uVar34 + 1;
                              uVar34 = uVar42;
                            }
                            else {
                              if (uVar28 == uVar34) goto LAB_1482b8eba;
                              uVar34 = uVar34 - 1;
                            }
                            uVar28 = FindInSortedArray(pTVar3,local_288,uVar28,uVar34);
                            uVar38 = (ulonglong)uVar28;
                          }
                          iVar40 = (int)uVar38;
                          lVar48 = local_290;
                          if (iVar40 != -1) {
                            if (iVar40 < (int)uVar42) {
                              lVar37 = (longlong)iVar40 * 4;
                              do {
                                uVar28 = (uint)uVar38;
                                uVar34 = uVar28 + 1;
                                uVar21 = uVar20;
                                if ((int)uVar34 < (this->FlattenedCellArrayOfDirtyIndices).ArrayNum)
                                {
                                  uVar21 = ~uVar34 >> 0x1f;
                                }
                                if ((uVar21 == 0) &&
                                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                                  pcVar11 = (code *)swi(3);
                                  uVar18 = (*pcVar11)();
                                  return (bool)uVar18;
                                }
                                local_2b0 = *(undefined4 *)
                                             ((pTVar3->AllocatorInstance).Data + lVar37 + 4);
                                uVar21 = uVar20;
                                if ((int)uVar28 < (this->FlattenedCellArrayOfDirtyIndices).ArrayNum)
                                {
                                  uVar21 = ~uVar28 >> 0x1f;
                                }
                                if ((uVar21 == 0) &&
                                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                                  pcVar11 = (code *)swi(3);
                                  uVar18 = (*pcVar11)();
                                  return (bool)uVar18;
                                }
                                uVar38 = (ulonglong)uVar34;
                                *(undefined4 *)((pTVar3->AllocatorInstance).Data + lVar37) =
                                     local_2b0;
                                lVar37 = lVar37 + 4;
                              } while ((int)uVar34 < (int)uVar42);
                            }
                            puVar44[1] = puVar44[1] - 1;
                            lVar46 = local_2a0;
                            lVar37 = local_2a8;
                            lVar48 = local_290;
                            lVar47 = local_280;
                            lVar49 = local_278;
                            lVar50 = local_270;
                            lVar51 = local_268;
                            goto LAB_1482b8efb;
                          }
                        }
                      }
LAB_1482b8eba:
                      lVar37 = local_2a8;
                      bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_9181246422089988929>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                                          ,0x4bf,
                                          "DeleteDirtyParticleIndexFromGridCell(Hash, DirtyElementIndex)"
                                         );
                      lVar46 = local_2a0;
                      lVar47 = local_280;
                      lVar49 = local_278;
                      lVar50 = local_270;
                      lVar51 = local_268;
                      if (bVar17) {
                        pcVar11 = (code *)swi(3);
                        uVar18 = (*pcVar11)();
                        return (bool)uVar18;
                      }
                    }
LAB_1482b8efb:
                    lVar37 = lVar37 + 1;
                    lVar29 = local_248._8_8_;
                    lVar43 = local_260;
                    local_2a8 = lVar37;
                  } while (lVar37 <= lVar48);
                }
                lVar46 = lVar46 + 1;
                lVar37 = lVar43;
                local_2a0 = lVar46;
              } while (lVar46 <= lVar29);
            }
            dVar52 = this->DirtyElementGridCellSizeInv;
            local_180 = local_2c8;
            auVar55._0_8_ = dVar52 * *(double *)&param_2->MMin;
            auVar55._8_8_ = 0;
            auVar65._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)auVar55._0_8_ >> 0x20) & uVar32,
                                  SUB84(auVar55._0_8_,0) & uVar35) * dVar53 + auVar55._0_8_;
            auVar65._8_8_ = 0;
            auVar75 = roundpd(auVar55,auVar65,1);
            lVar37 = (longlong)auVar75._0_8_;
            dVar73 = dVar52 * *(double *)&(param_2->MMin).field_0x8;
            auVar83._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                  SUB84(dVar73,0) & uVar35) * dVar53 + dVar73;
            auVar83._8_8_ = 0;
            dVar73 = dVar52 * *(double *)&param_2->MMax;
            auVar75 = roundpd(auVar75,auVar83,1);
            local_260 = (longlong)auVar75._0_8_;
            auVar84._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                  SUB84(dVar73,0) & uVar35) * dVar53 + dVar73;
            auVar84._8_8_ = 0;
            dVar73 = dVar52 * *(double *)&(param_2->MMax).field_0x8;
            auVar75 = roundpd(auVar75,auVar84,1);
            local_250 = (longlong)auVar75._0_8_;
            auVar85._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                  SUB84(dVar73,0) & uVar35) * dVar53 + dVar73;
            auVar85._8_8_ = 0;
            dVar73 = dVar52 * *(double *)(local_258 + local_298 + 0x10);
            auVar75 = roundpd(auVar75,auVar85,1);
            auVar86._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                  SUB84(dVar73,0) & uVar35) * dVar53 + dVar73;
            auVar86._8_8_ = 0;
            dVar73 = dVar52 * *(double *)(local_258 + local_298 + 0x18);
            auVar95 = roundpd(auVar75,auVar86,1);
            pFVar45 = (FScriptContainerElement *)(longlong)auVar95._0_8_;
            auVar87._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                  SUB84(dVar73,0) & uVar35) * dVar53 + dVar73;
            auVar87._8_8_ = 0;
            dVar73 = dVar52 * *(double *)(local_258 + local_298 + 0x28);
            auVar96._0_8_ = dVar52 * *(double *)(local_258 + local_298 + 0x30);
            auVar96._8_8_ = 0;
            auVar95 = roundpd(auVar95,auVar87,1);
            auVar88._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                  SUB84(dVar73,0) & uVar35) * dVar53 + dVar73;
            auVar88._8_8_ = 0;
            auVar97 = roundpd(auVar95,auVar88,1);
            auVar66._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)auVar96._0_8_ >> 0x20) & uVar32,
                                  SUB84(auVar96._0_8_,0) & uVar35) * dVar53 + auVar96._0_8_;
            auVar66._8_8_ = 0;
            auVar98 = roundpd(auVar97,auVar66,1);
            local_258 = pFVar45;
            local_188 = this;
            if (((((lVar37 < (longlong)pFVar45) || (local_260 < (longlong)auVar95._0_8_)) ||
                 ((longlong)auVar97._0_8_ < local_250)) ||
                ((longlong)auVar98._0_8_ < (longlong)auVar75._0_8_)) &&
               (lVar29 = local_260, lVar46 = local_260, lVar48 = local_250, lVar37 <= local_250)) {
joined_r0x0001482b90a6:
              while( true ) {
                if ((longlong)auVar75._0_8_ < lVar29) goto LAB_1482b9167;
                if ((((lVar37 < (longlong)pFVar45) || ((longlong)auVar97._0_8_ < lVar37)) ||
                    ((lVar29 < (longlong)auVar95._0_8_ || ((longlong)auVar98._0_8_ < lVar29)))) &&
                   (uVar28 = (uint)lVar37 & 0xffff, uVar28 = (uVar28 << 8 ^ uVar28) & 0xff00ff,
                   uVar28 = (uVar28 << 4 ^ uVar28) & 0xf0f0f0f, uVar21 = (uint)lVar29 & 0xffff,
                   uVar34 = (uVar28 * 4 ^ uVar28) & 0x33333333,
                   uVar28 = (uVar21 << 8 ^ uVar21) & 0xff00ff,
                   uVar28 = (uVar28 << 4 ^ uVar28) & 0xf0f0f0f, uVar34 = uVar34 * 2 ^ uVar34,
                   uVar28 = (uVar28 * 4 ^ uVar28) & 0x33333333,
                   bVar17 = `Chaos::
                            TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                            ::UpdateDirtyElementInGrid'::__l6::<lambda_2>::operator()
                                      (&local_188,
                                       ((uVar28 * 2 ^ uVar28) * 2 ^ uVar34) & 0xaaaaaaaa ^ uVar34),
                   pFVar45 = local_258, !bVar17)) break;
                lVar29 = lVar29 + 1;
                lVar46 = local_260;
                lVar48 = local_250;
              }
              dVar52 = this->DirtyElementGridCellSizeInv;
              local_170 = local_2c8;
              auVar56._0_8_ = dVar52 * *(double *)&param_2->MMin;
              auVar56._8_8_ = 0;
              auVar67._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)auVar56._0_8_ >> 0x20) & uVar32,
                                    SUB84(auVar56._0_8_,0) & uVar35) * dVar53 + auVar56._0_8_;
              auVar67._8_8_ = 0;
              auVar75 = roundpd(auVar96,auVar67,1);
              dVar73 = dVar52 * *(double *)&(param_2->MMin).field_0x8;
              lVar37 = (longlong)auVar75._0_8_;
              auVar89._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                    SUB84(dVar73,0) & uVar35) * dVar53 + dVar73;
              auVar89._8_8_ = 0;
              dVar73 = dVar52 * *(double *)&param_2->MMax;
              dVar52 = dVar52 * *(double *)&(param_2->MMax).field_0x8;
              auVar75 = roundpd(auVar56,auVar89,1);
              auVar90._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar73 >> 0x20) & uVar32,
                                    SUB84(dVar73,0) & uVar35) * dVar53 + dVar73;
              auVar90._8_8_ = 0;
              auVar95 = roundpd(auVar75,auVar90,1);
              auVar68._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar32,
                                    SUB84(dVar52,0) & uVar35) * dVar53 + dVar52;
              auVar68._8_8_ = 0;
              auVar97 = roundpd(auVar95,auVar68,1);
              local_178 = this;
              for (; lVar37 <= (longlong)auVar95._0_8_; lVar37 = lVar37 + 1) {
                if ((longlong)auVar75._0_8_ <= (longlong)auVar97._0_8_) {
                  uVar35 = (uint)lVar37 & 0xffff;
                  uVar35 = (uVar35 << 8 ^ uVar35) & 0xff00ff;
                  uVar35 = (uVar35 << 4 ^ uVar35) & 0xf0f0f0f;
                  uVar35 = (uVar35 * 4 ^ uVar35) & 0x33333333;
                  uVar35 = uVar35 * 2 ^ uVar35;
                  lVar29 = (longlong)auVar75._0_8_;
                  do {
                    uVar32 = (uint)lVar29 & 0xffff;
                    uVar32 = (uVar32 << 8 ^ uVar32) & 0xff00ff;
                    uVar32 = (uVar32 << 4 ^ uVar32) & 0xf0f0f0f;
                    uVar32 = (uVar32 * 4 ^ uVar32) & 0x33333333;
                    bVar17 = `Chaos::
                             TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                             ::UpdateDirtyElementInGrid'::__l8::<lambda_3>::operator()
                                       (&local_178,
                                        ((uVar32 * 2 ^ uVar32) * 2 ^ uVar35) & 0xaaaaaaaa ^ uVar35);
                    if (!bVar17) goto LAB_1482b9527;
                    lVar29 = lVar29 + 1;
                  } while (lVar29 <= (longlong)auVar97._0_8_);
                }
              }
LAB_1482b9527:
              pTVar3 = &this->DirtyElementsGridOverflow;
              pFVar45 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar45 <= (FScriptContainerElement *)local_2c8) &&
                  ((FScriptContainerElement *)local_2c8 <
                   pFVar45 + (longlong)(this->DirtyElementsGridOverflow).ArrayMax * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar11 = (code *)swi(3);
                uVar18 = (*pcVar11)();
                return (bool)uVar18;
              }
              iVar19 = (this->DirtyElementsGridOverflow).ArrayNum;
              piVar1 = &(this->DirtyElementsGridOverflow).ArrayMax;
              if (iVar19 == *piVar1) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar3->AllocatorInstance,piVar1);
              }
              pFVar45 = (pTVar3->AllocatorInstance).Data;
              (this->DirtyElementsGridOverflow).ArrayNum = iVar19 + 1;
              *(uint *)(pFVar45 + (longlong)iVar19 * 4) = local_2c8[0];
            }
          }
LAB_1482b917e:
          local_2d0->DirtyGridOverflowIdx = iVar19;
        }
        uVar35 = uVar20;
        if ((int)uVar33 < (this->DirtyElements).ArrayNum) {
          uVar35 = ~uVar33 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
        pFVar45 = (this->DirtyElements).AllocatorInstance.Data;
        uVar7 = *(undefined8 *)&(param_2->MMin).field_0x8;
        lVar37 = (longlong)(int)uVar33 * 0x40;
        *(undefined8 *)(pFVar45 + lVar37 + 0x10) = *(undefined8 *)&param_2->MMin;
        *(undefined8 *)(pFVar45 + lVar37 + 0x10 + 8) = uVar7;
        *(undefined8 *)(pFVar45 + lVar37 + 0x20) = *(undefined8 *)&(param_2->MMin).field_0x10;
        uVar7 = *(undefined8 *)&(param_2->MMax).field_0x8;
        *(undefined8 *)(pFVar45 + lVar37 + 0x28) = *(undefined8 *)&param_2->MMax;
        *(undefined8 *)(pFVar45 + lVar37 + 0x28 + 8) = uVar7;
        *(undefined8 *)(pFVar45 + lVar37 + 0x38) = *(undefined8 *)&(param_2->MMax).field_0x10;
        if ((int)uVar33 < (this->DirtyElements).ArrayNum) {
          uVar20 = ~uVar33 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
      }
      else {
        uVar35 = uVar20;
        if ((int)uVar33 < (pTVar9->Nodes).ArrayNum) {
          uVar35 = ~uVar33 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
        pFVar45 = (pTVar9->Nodes).AllocatorInstance.Data;
        pTVar30 = param_2;
        puVar44 = puVar31;
        do {
          dVar52 = *(double *)&pTVar30->MMin;
          if ((dVar52 < *(double *)
                         (pFVar45 + ((longlong)(int)uVar33 * 0x70 - (longlong)param_2) +
                         (longlong)pTVar30)) ||
             (*(double *)
               (pFVar45 + (0x18 - (longlong)param_2) + (longlong)(int)uVar33 * 0x70 +
               (longlong)&pTVar30->MMin) <= dVar52 &&
              dVar52 != *(double *)
                         (pFVar45 + (0x18 - (longlong)param_2) + (longlong)(int)uVar33 * 0x70 +
                         (longlong)&pTVar30->MMin))) goto LAB_1482b898a;
          puVar44 = (uint *)((longlong)puVar44 + 1);
          pTVar30 = (TAABB<double,3> *)&(pTVar30->MMin).field_0x8;
        } while ((longlong)puVar44 < 3);
        pTVar25 = &param_2->MMax;
        lVar37 = (longlong)(pFVar45 + (longlong)(int)uVar33 * 0x70 + 0x18) - (longlong)pTVar25;
        do {
          dVar52 = *(double *)pTVar25;
          pdVar5 = (double *)(lVar37 + (longlong)pTVar25);
          if ((dVar52 < *(double *)
                         ((longlong)pdVar5 +
                         (longlong)
                         (pFVar45 +
                         ((longlong)(int)uVar33 * 0x70 -
                         (longlong)(pFVar45 + (longlong)(int)uVar33 * 0x70 + 0x18))))) ||
             (*pdVar5 <= dVar52 && dVar52 != *pdVar5)) goto LAB_1482b898a;
          puVar31 = (uint *)((longlong)puVar31 + 1);
          pTVar25 = (TVector<double,3> *)&pTVar25->field_0x8;
        } while ((longlong)puVar31 < 3);
        pTVar9 = (this->DirtyElementTree).Ptr;
        uVar35 = uVar20;
        if ((int)uVar33 < (pTVar9->Nodes).ArrayNum) {
          uVar35 = ~uVar33 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
        uVar33 = *(uint *)((pTVar9->Nodes).AllocatorInstance.Data +
                          (longlong)(int)uVar33 * 0x70 + 0x60);
        pTVar9 = (this->DirtyElementTree).Ptr;
        uVar35 = uVar20;
        if ((int)uVar33 < *(int *)&(pTVar9->Leaves).field_0x8) {
          uVar35 = ~uVar33 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
        TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::UpdateElement
                  ((TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *)
                   (*(longlong *)&pTVar9->Leaves + (longlong)(int)uVar33 * 0x48),param_1,param_2,
                   param_3);
        pTVar9 = (this->DirtyElementTree).Ptr;
        if ((int)uVar33 < *(int *)&(pTVar9->Leaves).field_0x8) {
          uVar20 = ~uVar33 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
        this_02 = (TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *)
                  (*(longlong *)&pTVar9->Leaves + (longlong)(int)uVar33 * 0x48);
        TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1>::ComputeBounds
                  (this_02,(TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
                            *)(this_02 + 1),this->bDynamicTree);
      }
    }
LAB_1482b925b:
    if (local_2d0->GlobalPayloadIdx != -1) {
      iVar19 = (this->GlobalPayloads).ArrayNum;
      if (local_2d0->GlobalPayloadIdx + 1 < iVar19) {
        uVar20 = uVar36;
        if ((int)(iVar19 - 1U) < iVar19) {
          uVar20 = ~(iVar19 - 1U) >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          uVar18 = (*pcVar11)();
          return (bool)uVar18;
        }
        pFVar6 = (FObjectKey *)
                 ((this->GlobalPayloads).AllocatorInstance.Data +
                 (longlong)(this->GlobalPayloads).ArrayNum * 0x40 + -0x40);
        local_108._0_8_ = *pFVar6;
        local_108._8_8_ = pFVar6[1];
        iVar19 = local_2d0->GlobalPayloadIdx;
        pFVar26 = TSQMap<FExternalSpatialAccelerationPayload,Chaos::FAABBTreePayloadInfo>::
                  FindChecked(&this->PayloadToInfo,(FExternalSpatialAccelerationPayload *)local_108)
        ;
        pFVar26->GlobalPayloadIdx = iVar19;
      }
      uVar20 = local_2d0->GlobalPayloadIdx;
      if ((int)uVar20 < (this->GlobalPayloads).ArrayNum) {
        uVar36 = ~uVar20 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        uVar18 = (*pcVar11)();
        return (bool)uVar18;
      }
      iVar40 = (this->GlobalPayloads).ArrayNum;
      pFVar45 = (this->GlobalPayloads).AllocatorInstance.Data;
      iVar19 = ~uVar20 + iVar40;
      if (1 < iVar19) {
        iVar19 = 1;
      }
      if (iVar19 != 0) {
        memmove(pFVar45 + (longlong)(int)uVar20 * 0x40,pFVar45 + (longlong)(iVar40 - iVar19) * 0x40,
                (longlong)iVar19 << 6);
      }
      piVar1 = &(this->GlobalPayloads).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,&(this->GlobalPayloads).AllocatorInstance,(this->GlobalPayloads).ArrayNum,
                 &(this->GlobalPayloads).ArrayMax);
      local_2d0->GlobalPayloadIdx = -1;
    }
  }
  if ((((this->DirtyElementTree).Ptr ==
        (TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
         *)0x0) && (this->bDynamicTree == false)) &&
     (MaxDirtyElements < (this->DirtyElements).ArrayNum)) {
    if (5 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`Chaos::
                  TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                  ::UpdateElement'::`148'::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    ReoptimizeTree(this);
  }
LAB_1482ba0f8:
  this->bModifyingTreeMultiThreadingFastCheck = false;
  return local_2d8;
code_r0x0001482b8cf0:
  iVar40 = *(int *)(lVar37 + 0xc);
  if (iVar40 == -1) goto LAB_1482b8eba;
  goto LAB_1482b8ce0;
LAB_1482b9167:
  lVar37 = lVar37 + 1;
  lVar29 = lVar46;
  if (lVar48 < lVar37) goto LAB_1482b917e;
  goto joined_r0x0001482b90a6;
LAB_1482b898a:
  RemoveLeafNode((this->DirtyElementTree).Ptr,uVar33,param_1);
  NVar22 = InsertLeaf((this->DirtyElementTree).Ptr,
                      (FExternalSpatialAccelerationPayload *)(local_128 + 8),
                      (TAABB<double,3> *)param_1);
  local_2d0->DirtyPayloadIdx = *(int *)NVar22;
  goto LAB_1482b925b;
}

// WhichChildAmI @ 1482bfa50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::WhichChildAmI(TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,_anonymous_namespace_::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  TArray<Chaos::TAABBTreeNode<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_1 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeIdx != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                       ,0x596,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pTVar6 = &this->Nodes;
  uVar4 = 0;
  if (param_1 < (this->Nodes).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  uVar4 = *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)param_1 * 0x70 + 0x68);
  if (uVar4 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentIdx != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                       ,0x598,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar5 = 0;
  if ((int)uVar4 < (this->Nodes).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  if (*(int *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x70 + 0x60) == param_1) {
    iVar3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar4 < (this->Nodes).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    if (*(int *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x70 + 100) != param_1) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181246422089988705>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x59f,"Nodes[ParentIdx].ChildrenNodes[1] == NodeIdx");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`Chaos::
                    TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                    ::WhichChildAmI'::`25'::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}

// operator() @ 150529090

bool __thiscall
`Chaos::
TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,`anonymous_namespace'::TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
::
GenerateTree<TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>_>'
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
                       &``Chaos::
                        TAABBTree<FExternalSpatialAccelerationPayload,Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>,1,double,TClusterUnionAABBTreeStorageTraits<FExternalSpatialAccelerationPayload>_>
                        ::
                        GenerateTree<TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>_>'
                        ::`23'::<lambda_1>::operator()'::`2'::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150529177;
    }
  }
  bVar4 = false;
LAB_150529177:
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

// operator() @ 1505291d0

bool __thiscall
`Chaos::
TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
::GenerateTree<TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_>'::__l23::<lambda_1>::
operator()(void *this)

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
                       &`public:___cdecl_`private:_void___cdecl_Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>::GenerateTree<TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_>(TArray<Chaos::FCleanMeshWrapper,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'::`23'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505292b7;
    }
  }
  bVar4 = false;
LAB_1505292b7:
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

