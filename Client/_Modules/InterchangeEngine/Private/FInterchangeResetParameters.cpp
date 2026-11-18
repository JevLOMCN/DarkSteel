// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 10

// FInterchangeResetParameters @ 14e4d7730

FInterchangeResetParameters * __thiscall
FInterchangeResetParameters::FInterchangeResetParameters
          (FInterchangeResetParameters *this,UInterchangeSceneImportAsset *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_res8;
  
  puVar1 = ::operator_new(0x50);
  local_res8 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[7] = 0;
    puVar1[9] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    local_res8 = puVar1;
  }
  FInterchangeResetParameters(this,param_1,(FInterchangeResetContextData *)&local_res8);
  return this;
}

// FInterchangeResetParameters @ 14e4d77c0

FInterchangeResetParameters * __thiscall
FInterchangeResetParameters::FInterchangeResetParameters
          (FInterchangeResetParameters *this,UInterchangeSceneImportAsset *param_1,
          TUniquePtr<FInterchangeResetContextData,TDefaultDelete<FInterchangeResetContextData>_>
          param_2)

{
  TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  UPackage *pUVar1;
  UInterchangeResultsContainer *pUVar2;
  
  *(undefined8 *)&(this->PreResetDelegates).OnNodeFilter = 0;
  *(undefined8 *)&(this->PreResetDelegates).OnNodeFilter.field_0x8 = 0;
  *(undefined4 *)&(this->PreResetDelegates).OnNodeFilter.field_0x10 = 0;
  *(undefined8 *)&(this->PreResetDelegates).OnNodeProcessed = 0;
  *(undefined8 *)&(this->PreResetDelegates).OnNodeProcessed.field_0x8 = 0;
  *(undefined4 *)&(this->PreResetDelegates).OnNodeProcessed.field_0x10 = 0;
  *(undefined8 *)&(this->PreResetDelegates).OnCompleted = 0;
  *(undefined8 *)&(this->PreResetDelegates).OnCompleted.field_0x8 = 0;
  *(undefined4 *)&(this->PreResetDelegates).OnCompleted.field_0x10 = 0;
  *(undefined8 *)&(this->ResetDelegates).OnNodeFilter = 0;
  *(undefined8 *)&(this->ResetDelegates).OnNodeFilter.field_0x8 = 0;
  *(undefined4 *)&(this->ResetDelegates).OnNodeFilter.field_0x10 = 0;
  *(undefined8 *)&(this->ResetDelegates).OnNodeProcessed = 0;
  *(undefined8 *)&(this->ResetDelegates).OnNodeProcessed.field_0x8 = 0;
  *(undefined4 *)&(this->ResetDelegates).OnNodeProcessed.field_0x10 = 0;
  *(undefined8 *)&(this->ResetDelegates).OnCompleted = 0;
  *(undefined8 *)&(this->ResetDelegates).OnCompleted.field_0x8 = 0;
  *(undefined4 *)&(this->ResetDelegates).OnCompleted.field_0x10 = 0;
  *(undefined8 *)&(this->PostResetDelegates).OnNodeFilter = 0;
  *(undefined8 *)&(this->PostResetDelegates).OnNodeFilter.field_0x8 = 0;
  *(undefined4 *)&(this->PostResetDelegates).OnNodeFilter.field_0x10 = 0;
  *(undefined8 *)&(this->PostResetDelegates).OnNodeProcessed = 0;
  *(undefined8 *)&(this->PostResetDelegates).OnNodeProcessed.field_0x8 = 0;
  *(undefined4 *)&(this->PostResetDelegates).OnNodeProcessed.field_0x10 = 0;
  *(undefined8 *)&(this->PostResetDelegates).OnCompleted = 0;
  *(undefined8 *)&(this->PostResetDelegates).OnCompleted.field_0x8 = 0;
  *(undefined4 *)&(this->PostResetDelegates).OnCompleted.field_0x10 = 0;
  (this->ResetContextData).Ptr =
       *(FInterchangeResetContextData **)&(param_2.Ptr)->ObjectsSpawnedDuringReset;
  *(undefined8 *)&(param_2.Ptr)->ObjectsSpawnedDuringReset = 0;
  *(undefined8 *)&(this->FilteredNodes).Elements = 0;
  *(undefined8 *)&(this->FilteredNodes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FilteredNodes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FilteredNodes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FilteredNodes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FilteredNodes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilteredNodes).Elements.field_0x34 = 0;
  (this->FilteredNodes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FilteredNodes).HashSize = 0;
  (this->SceneImportAsset).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UInterchangeSceneImportAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar1 = GetTransientPackage();
  pUVar2 = NewObject<UInterchangeResultsContainer>((UObject *)pUVar1);
  (this->ResultsContainer).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UInterchangeResultsContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(undefined8 *)&this->FactoryNodeDataCache = 0;
  *(undefined8 *)&(this->FactoryNodeDataCache).field_0x8 = 0;
  *(undefined8 *)&(this->FactoryNodeDataCache).field_0x20 = 0;
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x28 = 0;
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x34 = 0;
  *(undefined8 *)&(this->FactoryNodeDataCache).field_0x40 = 0;
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x48 = 0;
  this_00 = *(TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              **)&(param_2.Ptr)->ObjectsSpawnedDuringReset;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
  }
  return this;
}

// ~FInterchangeResetParameters @ 14e4da550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FInterchangeResetParameters::~FInterchangeResetParameters(FInterchangeResetParameters *this)

{
  undefined1 *puVar1;
  TMap<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  UObjectBase *this_01;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_02;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FUObjectItem *this_03;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->FactoryNodeDataCache).field_0x10;
  iVar12 = 0;
  iVar3 = *(int *)&(this->FactoryNodeDataCache).field_0x28;
  this_00 = &this->FactoryNodeDataCache;
  iVar14 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->FactoryNodeDataCache).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e4da5fd;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14e4da5fd:
  uVar11 = *(uint *)&(this->FactoryNodeDataCache).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar12);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->FactoryNodeDataCache).field_0x8 -
                       *(int *)&(this->FactoryNodeDataCache).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->FactoryNodeDataCache).field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->FactoryNodeDataCache).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e4da710;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_14e4da710:
  while( true ) {
    if (*(int *)&(this->FactoryNodeDataCache).field_0x8 -
        *(int *)&(this->FactoryNodeDataCache).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_01 = *(UObjectBase **)
               (*(longlong *)&this_00->field_0x0 + 0x28 + (longlong)TStack_60.CurrentBitIndex * 0x48
               );
    if (this_01 != (UObjectBase *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      this_03 = FUObjectArray::IndexToObject(&GUObjectArray,this_01->InternalIndex);
      FUObjectItem::ClearRootFlags(this_03,RootSet);
      UObjectBase::AtomicallyClearFlags(this_01,RF_Standalone);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar7 = 1 < *(int *)&(this->FactoryNodeDataCache).field_0x48;
  if (!bVar7) {
    TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->FactoryNodeDataCache).field_0x8);
  puVar1 = &(this->FactoryNodeDataCache).field_0xc;
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x34 = 0;
  iVar3 = *(int *)&(this->FactoryNodeDataCache).field_0x2c;
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->FactoryNodeDataCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FactoryNodeDataCache).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->FactoryNodeDataCache).field_0x48 = 1;
    TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  *(undefined4 *)&(this->FactoryNodeDataCache).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FactoryNodeDataCache).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  (this->FilteredNodes).HashSize = 0;
  FVar5 = (this->FilteredNodes).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<UInterchangeFactoryBaseNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UInterchangeFactoryBaseNode_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FilteredNodes).Elements);
  this_02 = (TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)(this->ResetContextData).Ptr;
  if (this_02 !=
      (TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_02[1].field_0x10 = 0;
    if (*(void **)&this_02[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_02[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UInterchangeFactoryBaseNode_const_*,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_02);
    ::operator_delete(this_02,0x50);
  }
  FResetPhaseDelegates::~FResetPhaseDelegates(&this->PostResetDelegates);
  FResetPhaseDelegates::~FResetPhaseDelegates(&this->ResetDelegates);
  FResetPhaseDelegates::~FResetPhaseDelegates(&this->PreResetDelegates);
  return;
}

// AddObjectInstanceToReset @ 14e4e25d0

void __thiscall
FInterchangeResetParameters::AddObjectInstanceToReset
          (FInterchangeResetParameters *this,UInterchangeFactoryBaseNode *param_1,UObject *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData> *pTVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  UInterchangeFactoryBaseNode *local_res8;
  UInterchangeFactoryBaseNode *local_res10;
  UObject *local_18 [2];
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_res10 = param_1;
  TMapBase<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>_>
  ::FindOrAddImpl<UInterchangeFactoryBaseNode_const_*_const_&>
            ((TMapBase<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>_>
              *)&this->FactoryNodeDataCache,uVar6 >> 0x10 ^ uVar6,&local_res10);
  uVar6 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->FilteredNodes).Elements.field_0x8 !=
      *(int *)&(this->FilteredNodes).Elements.field_0x34) {
    FVar7 = (this->FilteredNodes).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->FilteredNodes).Hash;
    }
    iVar4 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->FilteredNodes).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->FilteredNodes).Elements;
      do {
        if (*(UInterchangeFactoryBaseNode **)(lVar1 + (longlong)iVar4 * 0x10) == local_res10)
        goto LAB_14e4e26c0;
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  TSet<UInterchangeFactoryBaseNode_const_*,DefaultKeyFuncs<UInterchangeFactoryBaseNode_const_*,0>,FDefaultSetAllocator>
  ::Emplace<UInterchangeFactoryBaseNode_const_*_const_&>
            (&this->FilteredNodes,&local_res8,(bool *)&local_res10);
LAB_14e4e26c0:
  pTVar5 = TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
                   *)&this->FactoryNodeDataCache,local_res10);
  if (pTVar5 == (TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18[0] = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  if ((*(UObject ***)&pTVar5->field_0x30 <= local_18) &&
     (local_18 < *(UObject ***)&pTVar5->field_0x30 + *(int *)&pTVar5->field_0x3c)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)&pTVar5->field_0x38;
  if (iVar4 == *(int *)&pTVar5->field_0x3c) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pTVar5->field_0x30,(int *)&pTVar5->field_0x3c);
  }
  *(int *)&pTVar5->field_0x38 = iVar4 + 1;
  *(UObject **)(*(longlong *)&pTVar5->field_0x30 + (longlong)iVar4 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18[0]);
  }
  return;
}

// GetBaseNodeContainer @ 14e4f5b60

UInterchangeBaseNodeContainer * __thiscall
FInterchangeResetParameters::GetBaseNodeContainer(FInterchangeResetParameters *this)

{
  return (UInterchangeBaseNodeContainer *)0x0;
}

// GetFactoryForNode @ 14e4f6280

TObjectPtr<UInterchangeFactoryBase> __thiscall
FInterchangeResetParameters::GetFactoryForNode
          (FInterchangeResetParameters *this,UInterchangeFactoryBaseNode *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData> *pTVar6;
  TObjectPtr<UInterchangeFactoryBase> TVar7;
  uint uVar8;
  undefined1 *puVar9;
  UInterchangeFactoryBaseNode *in_R8;
  
  uVar8 = ((uint)((ulonglong)in_R8 >> 0x14) & 0xffff ^ (uint)((ulonglong)in_R8 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->FactoryNodeDataCache).field_0x8 !=
      *(int *)&(this->FactoryNodeDataCache).field_0x34) {
    puVar9 = *(undefined1 **)&(this->FactoryNodeDataCache).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->FactoryNodeDataCache).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->FactoryNodeDataCache).field_0x48 - 1U &
                              (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->FactoryNodeDataCache).field_0x0;
      do {
        if (*(UInterchangeFactoryBaseNode **)(lVar1 + (longlong)iVar5 * 0x48) == in_R8) {
          pTVar6 = TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
                           *)&this->FactoryNodeDataCache,in_R8);
          if ((pTVar6 == (TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>
                          *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            TVar7.field0_0x0 = (TObjectPtr<UInterchangeFactoryBase>_u_0)(*pcVar3)();
            return (TObjectPtr<UInterchangeFactoryBase>)TVar7.field0_0x0;
          }
          pUVar2 = *(UObject **)&pTVar6->field_0x28;
          param_1->_padding_ = (longlong)pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            return (TObjectPtr<UInterchangeFactoryBase>)
                   (TObjectPtr<UInterchangeFactoryBase>_u_0)param_1;
          }
          if (pUVar2 == (UObject *)0x0) {
            return (TObjectPtr<UInterchangeFactoryBase>)
                   (TObjectPtr<UInterchangeFactoryBase>_u_0)param_1;
          }
          UE::GC::MarkAsReachable(pUVar2);
          return (TObjectPtr<UInterchangeFactoryBase>)
                 (TObjectPtr<UInterchangeFactoryBase>_u_0)param_1;
        }
        iVar5 = *(int *)(lVar1 + 0x40 + (longlong)iVar5 * 0x48);
      } while (iVar5 != -1);
    }
  }
  param_1->_padding_ = 0;
  return (TObjectPtr<UInterchangeFactoryBase>)(TObjectPtr<UInterchangeFactoryBase>_u_0)param_1;
}

// GetObjectInstancesForFactoryNode @ 14e4f6eb0

TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> * __thiscall
FInterchangeResetParameters::GetObjectInstancesForFactoryNode
          (FInterchangeResetParameters *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UInterchangeFactoryBaseNode *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData> *pTVar9;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  UObject *local_28 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  if (*(int *)&(this->FactoryNodeDataCache).field_0x8 !=
      *(int *)&(this->FactoryNodeDataCache).field_0x34) {
    puVar12 = *(undefined1 **)&(this->FactoryNodeDataCache).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->FactoryNodeDataCache).field_0x38;
    }
    iVar8 = *(int *)(puVar12 +
                    (ulonglong)
                    (*(int *)&(this->FactoryNodeDataCache).field_0x48 - 1U &
                    (uVar11 >> 0x10 ^ uVar11)) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&(this->FactoryNodeDataCache).field_0x0;
      while (*(UInterchangeFactoryBaseNode **)(lVar1 + (longlong)iVar8 * 0x48) != param_1) {
        iVar8 = *(int *)(lVar1 + 0x40 + (longlong)iVar8 * 0x48);
        if (iVar8 == -1) {
          return __return_storage_ptr__;
        }
      }
      pTVar9 = TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>,FDefaultSetAllocator>
                       *)&this->FactoryNodeDataCache,param_1);
      if ((pTVar9 == (TTuple<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData>
                      *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = *(int *)&pTVar9->field_0x38;
      if (iVar8 == 0) {
        local_28[0] = FSoftObjectPath::TryLoad
                                ((FSoftObjectPath *)&pTVar9->field_0x8,
                                 (FUObjectSerializeContext *)0x0);
        if (local_28[0] != (UObject *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(local_28[0]);
          }
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 <
               pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_28[0];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_28[0] != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_28[0]);
          }
        }
      }
      else {
        pFVar13 = *(FScriptContainerElement **)&pTVar9->field_0x30;
        pFVar4 = pFVar13 + (longlong)iVar8 * 8;
        while( true ) {
          if (*(int *)&pTVar9->field_0x38 != iVar8) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar13 == pFVar4) break;
          if (*(longlong *)pFVar13 != 0) {
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar2 <= pFVar13) &&
                (pFVar13 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar10 = (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar10;
            }
            iVar7 = __return_storage_ptr__->ArrayNum;
            if (iVar7 == __return_storage_ptr__->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            __return_storage_ptr__->ArrayNum = iVar7 + 1;
            pUVar3 = *(UObject **)pFVar13;
            *(UObject **)(pFVar2 + (longlong)iVar7 * 8) = pUVar3;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar3);
            }
          }
          pFVar13 = pFVar13 + 8;
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetResultsContainer @ 14e4f8950

UInterchangeResultsContainer * __thiscall
FInterchangeResetParameters::GetResultsContainer(FInterchangeResetParameters *this)

{
  return (this->ResultsContainer).field0_0x0.DebugPtr;
}

// GetSceneImportAsset @ 14e4f8960

UInterchangeSceneImportAsset * __thiscall
FInterchangeResetParameters::GetSceneImportAsset(FInterchangeResetParameters *this)

{
  return (this->SceneImportAsset).field0_0x0.DebugPtr;
}

// SetupFactoryNode @ 14e508680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FInterchangeResetParameters::SetupFactoryNode
          (FInterchangeResetParameters *this,UInterchangeFactoryBaseNode *param_1)

{
  int *piVar1;
  int iVar2;
  UInterchangeResultsContainer *pUVar3;
  ForAnyElementType _Src;
  int iVar4;
  bool bVar5;
  FFactoryNodeData *pFVar6;
  UInterchangeManager *this_00;
  UClass *pUVar7;
  UPackage *pUVar8;
  UInterchangeFactoryBase *pUVar9;
  FUObjectItem *this_01;
  uint uVar10;
  FUtf8String *pFVar11;
  size_t _Size;
  UInterchangeFactoryBaseNode *local_res10;
  FSoftObjectPath local_38;
  
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  local_res10 = param_1;
  pFVar6 = TMapBase<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>_>
           ::FindOrAddImpl<UInterchangeFactoryBaseNode_const_*_const_&>
                     ((TMapBase<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeFactoryBaseNode_const_*,FInterchangeResetParameters::FFactoryNodeData,0>_>
                       *)&this->FactoryNodeDataCache,uVar10 >> 0x10 ^ uVar10,&local_res10);
  if ((pFVar6->Factory).field0_0x0.DebugPtr == (UInterchangeFactoryBase *)0x0) {
    this_00 = UInterchangeManager::GetInterchangeManager();
    pUVar7 = (UClass *)(**(code **)(local_res10->_padding_ + 0x2f8))();
    if ((pUVar7 != (UClass *)0x0) &&
       (pUVar7 = UInterchangeManager::GetRegisteredFactoryClass(this_00,pUVar7),
       pUVar7 != (UClass *)0x0)) {
      pUVar8 = GetTransientPackage();
      pUVar9 = NewObject<UInterchangeFactoryBase>
                         ((UObject *)pUVar8,pUVar7,(FName)0x0,RF_Standalone,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UInterchangeFactoryBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (pFVar6->Factory).field0_0x0.DebugPtr = pUVar9;
      this_01 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&pUVar9->_padding_ + 4));
      FUObjectItem::SetRootFlags(this_01,RootSet);
      pUVar3 = (this->ResultsContainer).field0_0x0.DebugPtr;
      pUVar9 = (pFVar6->Factory).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UInterchangeResultsContainer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (pUVar9->Results).field0_0x0.DebugPtr = pUVar3;
    }
    local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_38.AssetPath.PackageName.Number = 0;
    local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_38.AssetPath.AssetName.Number = 0;
    local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.SubPathString.Data.ArrayNum = 0;
    local_38.SubPathString.Data.ArrayMax = 0;
    bVar5 = UInterchangeFactoryBaseNode::GetCustomReferenceObject(local_res10,&local_38);
    _Src.Data = local_38.SubPathString.Data.AllocatorInstance.Data;
    if (bVar5) {
      (pFVar6->ReferencedObjectPath).AssetPath.PackageName = local_38.AssetPath.PackageName;
      (pFVar6->ReferencedObjectPath).AssetPath.AssetName = local_38.AssetPath.AssetName;
      pFVar11 = &(pFVar6->ReferencedObjectPath).SubPathString;
      if (pFVar11 != &local_38.SubPathString) {
        iVar4 = local_38.SubPathString.Data.ArrayNum;
        _Size = (size_t)local_38.SubPathString.Data.ArrayNum;
        piVar1 = &(pFVar6->ReferencedObjectPath).SubPathString.Data.ArrayMax;
        iVar2 = *piVar1;
        (pFVar6->ReferencedObjectPath).SubPathString.Data.ArrayNum =
             local_38.SubPathString.Data.ArrayNum;
        if ((local_38.SubPathString.Data.ArrayNum == 0) && (iVar2 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_38.SubPathString.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar11,
                     local_38.SubPathString.Data.ArrayNum,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar11->Data).AllocatorInstance.Data,_Src.Data,_Size);
          }
        }
      }
    }
    if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

