// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// FTimingProfilerButterfly @ 14d426510

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FTimingProfilerButterfly * __thiscall
TraceServices::FTimingProfilerButterfly::FTimingProfilerButterfly(FTimingProfilerButterfly *this)

{
  this->_padding_ = (longlong)&___7FTimingProfilerButterfly_TraceServices__6B_;
  (this->Allocator)._padding_ = (longlong)&___7FSlabAllocator_TraceServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Allocator).Cs,4000);
  (this->Allocator).SlabSize = 0x200000;
  (this->Allocator).Slabs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocator).Slabs.ArrayNum = 0;
  (this->Allocator).Slabs.ArrayMax = 0;
  (this->Allocator).CurrentSlab = (uchar *)0x0;
  (this->Allocator).CurrentSlabAllocatedSize = 0;
  (this->Allocator).TotalUsedSize = 0;
  (this->Allocator).TotalAllocatedSize = 0;
  (this->Nodes).Allocator = (ILinearAllocator *)&this->Allocator;
  (this->Nodes).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).PagesArray.ArrayNum = 0;
  (this->Nodes).PagesArray.ArrayMax = 0;
  (this->Nodes).FirstPage = (TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *)0x0;
  (this->Nodes).LastPage = (TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *)0x0;
  (this->Nodes).TotalItemCount = 0;
  (this->TimerCallstacksMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimerCallstacksMap).ArrayNum = 0;
  (this->TimerCallstacksMap).ArrayMax = 0;
  *(undefined8 *)&this->CachedCallerTrees = 0;
  *(undefined8 *)&(this->CachedCallerTrees).field_0x8 = 0;
  *(undefined8 *)&(this->CachedCallerTrees).field_0x20 = 0;
  (this->Nodes).PageSize = 0x400;
  *(undefined4 *)&(this->CachedCallerTrees).field_0x28 = 0;
  *(undefined4 *)&(this->CachedCallerTrees).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedCallerTrees).field_0x34 = 0;
  *(undefined4 *)&(this->CachedCallerTrees).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedCallerTrees).field_0x40 = 0;
  *(undefined4 *)&(this->CachedCallerTrees).field_0x48 = 0;
  *(undefined8 *)&this->CachedCalleeTrees = 0;
  *(undefined8 *)&(this->CachedCalleeTrees).field_0x8 = 0;
  *(undefined8 *)&(this->CachedCalleeTrees).field_0x20 = 0;
  *(undefined4 *)&(this->CachedCalleeTrees).field_0x28 = 0;
  *(undefined4 *)&(this->CachedCalleeTrees).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedCalleeTrees).field_0x34 = 0;
  *(undefined4 *)&(this->CachedCalleeTrees).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedCalleeTrees).field_0x40 = 0;
  *(undefined4 *)&(this->CachedCalleeTrees).field_0x48 = 0;
  return this;
}

// ~FTimingProfilerButterfly @ 14d42cde0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __thiscall
TraceServices::FTimingProfilerButterfly::~FTimingProfilerButterfly(FTimingProfilerButterfly *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->CachedCalleeTrees).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedCalleeTrees).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedCalleeTrees);
  *(undefined4 *)&(this->CachedCallerTrees).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedCallerTrees).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedCallerTrees);
  DestructItems<TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TraceServices::FTimingProfilerButterflyNode_*,TSizedDefaultAllocator<32>_> *)
             (this->TimerCallstacksMap).AllocatorInstance.Data,(this->TimerCallstacksMap).ArrayNum);
  pFVar2 = (this->TimerCallstacksMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
  ::
  ~TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
            (&this->Nodes);
  FSlabAllocator::~FSlabAllocator(&this->Allocator);
  return;
}

// CreateCalleesTreeRecursive @ 14d449630

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __thiscall
TraceServices::FTimingProfilerButterfly::CreateCalleesTreeRecursive
          (FTimingProfilerButterfly *this,FTimingProfilerButterflyNode *param_1,
          FTimingProfilerButterflyNode *param_2)

{
  ulong64 *puVar1;
  int *piVar2;
  uint uVar3;
  FTimingProfilerButterflyNode *pFVar4;
  TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *pTVar5;
  ILinearAllocator *pIVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FTimingProfilerButterflyNode *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FTimingProfilerButterflyNode *local_50;
  FScriptContainerElement *local_48;
  
  pFVar15 = (param_1->Children).AllocatorInstance.Data;
  uVar3 = (param_1->Children).ArrayNum;
  uVar12 = (ulonglong)(int)uVar3;
  local_48 = pFVar15 + uVar12 * 8;
  do {
    pFVar7 = local_48;
    if ((param_1->Children).ArrayNum != (int)uVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TraceServices::FTimingProfilerButterflyNode_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar7) {
      return;
    }
    pFVar13 = (param_2->Children).AllocatorInstance.Data;
    pFVar4 = *(FTimingProfilerButterflyNode **)pFVar15;
    local_50 = (FTimingProfilerButterflyNode *)0x0;
    iVar10 = (param_2->Children).ArrayNum;
    pFVar7 = pFVar13 + (longlong)iVar10 * 8;
    while( true ) {
      if ((param_2->Children).ArrayNum != iVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TraceServices::FTimingProfilerButterflyNode_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      pFVar11 = local_50;
      if ((pFVar13 == pFVar7) ||
         (pFVar11 = *(FTimingProfilerButterflyNode **)pFVar13,
         (*(FTimingProfilerButterflyNode **)pFVar13)->Timer == pFVar4->Timer)) break;
      pFVar13 = pFVar13 + 8;
    }
    local_50 = pFVar11;
    if (local_50 == (FTimingProfilerButterflyNode *)0x0) {
      pTVar5 = (this->Nodes).LastPage;
      if ((pTVar5 == (TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *)0x0) ||
         (pTVar5->Count == (this->Nodes).PageSize)) {
        iVar10 = (this->Nodes).PagesArray.ArrayNum;
        piVar2 = &(this->Nodes).PagesArray.ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this->Nodes).PagesArray.AllocatorInstance,piVar2);
          (this->Nodes).PagesArray.ArrayNum = iVar10;
        }
        pTVar14 = (TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *)
                  ((this->Nodes).PagesArray.AllocatorInstance.Data + (longlong)iVar10 * 0x10);
        (this->Nodes).PagesArray.ArrayNum = iVar10 + 1;
        DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>,int>
                  (pTVar14,1);
        pTVar5 = (TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode> *)
                 (this->Nodes).PagesArray.AllocatorInstance.Data;
        pIVar6 = (this->Nodes).Allocator;
        (this->Nodes).LastPage = pTVar14;
        (this->Nodes).FirstPage = pTVar5;
        pFVar11 = (FTimingProfilerButterflyNode *)
                  (**(code **)((longlong)*pIVar6 + 8))(pIVar6,(this->Nodes).PageSize * 0x38);
        ((this->Nodes).LastPage)->Items = pFVar11;
      }
      puVar1 = &(this->Nodes).TotalItemCount;
      *puVar1 = *puVar1 + 1;
      pTVar5 = (this->Nodes).LastPage;
      local_50 = pTVar5->Items + pTVar5->Count;
      local_50->Timer = (FTimingProfilerTimer *)0x0;
      local_50->Count = 0;
      local_50->InclusiveTime = 0.0;
      local_50->ExclusiveTime = 0.0;
      local_50->Parent = (FTimingProfilerButterflyNode *)0x0;
      (local_50->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_50->Children).ArrayNum = 0;
      (local_50->Children).ArrayMax = 0;
      puVar1 = &((this->Nodes).LastPage)->Count;
      *puVar1 = *puVar1 + 1;
      local_50->Timer = pFVar4->Timer;
      pFVar7 = (param_2->Children).AllocatorInstance.Data;
      if (((pFVar7 <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 <
           pFVar7 + (longlong)(param_2->Children).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = (param_2->Children).ArrayNum;
      piVar2 = &(param_2->Children).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(param_2->Children).AllocatorInstance,piVar2);
      }
      (param_2->Children).ArrayNum = iVar10 + 1;
      *(FTimingProfilerButterflyNode **)
       ((param_2->Children).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_50;
      local_50->Parent = param_2;
    }
    local_50->InclusiveTime = pFVar4->InclusiveTime + local_50->InclusiveTime;
    local_50->ExclusiveTime = pFVar4->ExclusiveTime + local_50->ExclusiveTime;
    local_50->Count = local_50->Count + pFVar4->Count;
    CreateCalleesTreeRecursive(this,pFVar4,local_50);
    uVar12 = (ulonglong)uVar3;
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// CreateCallersTreeRecursive @ 14d4498e0

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

void __thiscall
TraceServices::FTimingProfilerButterfly::CreateCallersTreeRecursive
          (FTimingProfilerButterfly *this,FTimingProfilerButterflyNode *param_1,
          FTimingProfilerButterflyNode *param_2,FTimingProfilerButterflyNode *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FTimingProfilerButterflyNode *pFVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FTimingProfilerButterflyNode *local_38 [2];
  
  if (param_1 != (FTimingProfilerButterflyNode *)0x0) {
    pFVar7 = (param_3->Children).AllocatorInstance.Data;
    iVar6 = (param_3->Children).ArrayNum;
    local_38[0] = (FTimingProfilerButterflyNode *)0x0;
    pFVar2 = pFVar7 + (longlong)iVar6 * 8;
    while( true ) {
      if ((param_3->Children).ArrayNum != iVar6) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TraceServices::FTimingProfilerButterflyNode_*,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      pFVar4 = local_38[0];
      if ((pFVar7 == pFVar2) ||
         (pFVar4 = *(FTimingProfilerButterflyNode **)pFVar7,
         (*(FTimingProfilerButterflyNode **)pFVar7)->Timer == param_1->Timer)) break;
      pFVar7 = pFVar7 + 8;
    }
    local_38[0] = pFVar4;
    if (local_38[0] == (FTimingProfilerButterflyNode *)0x0) {
      local_38[0] = TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
                    ::PushBack(&this->Nodes);
      local_38[0]->Timer = param_1->Timer;
      pFVar2 = (param_3->Children).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(param_3->Children).ArrayMax * 8
          )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (param_3->Children).ArrayNum;
      piVar1 = &(param_3->Children).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_3->Children).AllocatorInstance,piVar1);
      }
      (param_3->Children).ArrayNum = iVar6 + 1;
      *(FTimingProfilerButterflyNode **)
       ((param_3->Children).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_38[0];
      local_38[0]->Parent = param_3;
    }
    local_38[0]->InclusiveTime = param_2->InclusiveTime + local_38[0]->InclusiveTime;
    local_38[0]->ExclusiveTime = param_2->ExclusiveTime + local_38[0]->ExclusiveTime;
    local_38[0]->Count = local_38[0]->Count + param_2->Count;
    CreateCallersTreeRecursive(this,param_1->Parent,param_2,local_38[0]);
  }
  return;
}

// GenerateCalleesTree @ 14d461530

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FTimingProfilerButterflyNode * __thiscall
TraceServices::FTimingProfilerButterfly::GenerateCalleesTree
          (FTimingProfilerButterfly *this,uint param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTimingProfilerButterflyNode *pFVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TPairInitializer<unsigned_int_const_&,TraceServices::FTimingProfilerButterflyNode_*_const_&>
  local_res18;
  uint *local_48;
  FTimingProfilerButterflyNode ***local_40;
  
  if (*(int *)&(this->CachedCalleeTrees).field_0x8 != *(int *)&(this->CachedCalleeTrees).field_0x34)
  {
    puVar11 = *(undefined1 **)&(this->CachedCalleeTrees).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->CachedCalleeTrees).field_0x38;
    }
    iVar5 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->CachedCalleeTrees).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar10 = *(longlong *)&(this->CachedCalleeTrees).field_0x0;
      do {
        lVar1 = lVar10 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar10 + (longlong)iVar5 * 0x18) == param_1) {
          puVar7 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 != (undefined8 *)0x0) {
            return (FTimingProfilerButterflyNode *)*puVar7;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res10[0] = param_1;
  local_res18.Value =
       (FTimingProfilerButterflyNode **)
       TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
       ::PushBack(&this->Nodes);
  lVar10 = (longlong)(int)local_res10[0];
  uVar8 = 0;
  if ((int)local_res10[0] < (this->TimerCallstacksMap).ArrayNum) {
    uVar8 = ~local_res10[0] >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTimingProfilerButterflyNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2 = (this->TimerCallstacksMap).AllocatorInstance.Data;
  puVar9 = *(undefined8 **)(pFVar2 + lVar10 * 0x10);
  iVar5 = *(int *)(pFVar2 + lVar10 * 0x10 + 8);
  puVar7 = puVar9 + iVar5;
  while( true ) {
    if (*(int *)(pFVar2 + lVar10 * 0x10 + 8) != iVar5) {
      `TCheckedPointerIterator<TraceServices::FTimingProfilerButterflyNode_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar9 == puVar7) break;
    pFVar6 = (FTimingProfilerButterflyNode *)*puVar9;
    *(FTimingProfilerTimer **)local_res18.Value = pFVar6->Timer;
    *(double *)((longlong)local_res18.Value + 0x10) =
         pFVar6->InclusiveTime + *(double *)((longlong)local_res18.Value + 0x10);
    *(double *)((longlong)local_res18.Value + 0x18) =
         pFVar6->ExclusiveTime + *(double *)((longlong)local_res18.Value + 0x18);
    *(ulong64 *)((longlong)local_res18.Value + 8) =
         *(ulong64 *)((longlong)local_res18.Value + 8) + pFVar6->Count;
    CreateCalleesTreeRecursive(this,pFVar6,(FTimingProfilerButterflyNode *)local_res18.Value);
    puVar9 = puVar9 + 1;
  }
  local_48 = local_res10;
  local_40 = &local_res18.Value;
  TSet<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FTimingProfilerButterflyNode_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*,0>,FDefaultSetAllocator>
              *)&this->CachedCalleeTrees,&local_res18,(bool *)&local_48);
  return (FTimingProfilerButterflyNode *)local_res18.Value;
}

// GenerateCallersTree @ 14d461730

/* WARNING: Enum "ETimingProfilerTimerType": Some values do not have unique names */

FTimingProfilerButterflyNode * __thiscall
TraceServices::FTimingProfilerButterfly::GenerateCallersTree
          (FTimingProfilerButterfly *this,uint param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTimingProfilerButterflyNode *pFVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TPairInitializer<unsigned_int_const_&,TraceServices::FTimingProfilerButterflyNode_*_const_&>
  local_res18;
  uint *local_48;
  FTimingProfilerButterflyNode ***local_40;
  
  if (*(int *)&(this->CachedCallerTrees).field_0x8 != *(int *)&(this->CachedCallerTrees).field_0x34)
  {
    puVar11 = *(undefined1 **)&(this->CachedCallerTrees).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->CachedCallerTrees).field_0x38;
    }
    iVar5 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->CachedCallerTrees).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar10 = *(longlong *)&(this->CachedCallerTrees).field_0x0;
      do {
        lVar1 = lVar10 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar10 + (longlong)iVar5 * 0x18) == param_1) {
          puVar7 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 != (undefined8 *)0x0) {
            return (FTimingProfilerButterflyNode *)*puVar7;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res10[0] = param_1;
  local_res18.Value =
       (FTimingProfilerButterflyNode **)
       TPagedArray<TraceServices::FTimingProfilerButterflyNode,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerButterflyNode>_>
       ::PushBack(&this->Nodes);
  lVar10 = (longlong)(int)local_res10[0];
  uVar8 = 0;
  if ((int)local_res10[0] < (this->TimerCallstacksMap).ArrayNum) {
    uVar8 = ~local_res10[0] >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTimingProfilerButterflyNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2 = (this->TimerCallstacksMap).AllocatorInstance.Data;
  puVar9 = *(undefined8 **)(pFVar2 + lVar10 * 0x10);
  iVar5 = *(int *)(pFVar2 + lVar10 * 0x10 + 8);
  puVar7 = puVar9 + iVar5;
  while( true ) {
    if (*(int *)(pFVar2 + lVar10 * 0x10 + 8) != iVar5) {
      `TCheckedPointerIterator<TraceServices::FTimingProfilerButterflyNode_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar9 == puVar7) break;
    pFVar6 = (FTimingProfilerButterflyNode *)*puVar9;
    *(FTimingProfilerTimer **)local_res18.Value = pFVar6->Timer;
    *(double *)((longlong)local_res18.Value + 0x10) =
         pFVar6->InclusiveTime + *(double *)((longlong)local_res18.Value + 0x10);
    *(double *)((longlong)local_res18.Value + 0x18) =
         pFVar6->ExclusiveTime + *(double *)((longlong)local_res18.Value + 0x18);
    *(ulong64 *)((longlong)local_res18.Value + 8) =
         *(ulong64 *)((longlong)local_res18.Value + 8) + pFVar6->Count;
    CreateCallersTreeRecursive
              (this,pFVar6->Parent,pFVar6,(FTimingProfilerButterflyNode *)local_res18.Value);
    puVar9 = puVar9 + 1;
  }
  local_48 = local_res10;
  local_40 = &local_res18.Value;
  TSet<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FTimingProfilerButterflyNode_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FTimingProfilerButterflyNode_*,0>,FDefaultSetAllocator>
              *)&this->CachedCallerTrees,&local_res18,(bool *)&local_48);
  return (FTimingProfilerButterflyNode *)local_res18.Value;
}

