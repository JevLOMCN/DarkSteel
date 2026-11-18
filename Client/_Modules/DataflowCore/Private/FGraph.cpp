// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 19

// AddNode<FDataflowNode> @ 14440c760

TSharedPtr<FDataflowNode,1> * __thiscall
UE::Dataflow::FGraph::AddNode<FDataflowNode>
          (FGraph *this,TSharedPtr<FDataflowNode,1> *__return_storage_ptr__,
          TUniquePtr<FDataflowNode,TDefaultDelete<FDataflowNode>_> *param_1)

{
  ulonglong uVar1;
  FDataflowNode *pFVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TSharedPtr<FDataflowNode,1> *pTVar12;
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar2 = param_1->Ptr;
  param_1->Ptr = (FDataflowNode *)0x0;
  TSharedPtr<FDataflowNode,1>::TSharedPtr<FDataflowNode,1><FDataflowNode>
            (__return_storage_ptr__,pFVar2);
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSharedPtr<FDataflowNode,1>_const_&>(&this->Nodes,__return_storage_ptr__);
  uVar9 = 1;
  uVar17 = 0;
  uVar20 = 0;
  uVar11 = RegisteredFilters.Elements._40_4_;
  uVar10 = uVar17;
  if (uVar11 != 0) {
    puVar21 = (uint *)&RegisteredFilters.Elements.field_0x10;
    if (RegisteredFilters.Elements._32_8_ != 0) {
      puVar21 = (uint *)RegisteredFilters.Elements._32_8_;
    }
    uVar10 = *puVar21;
    uVar20 = 0;
    uVar17 = 0;
    while (uVar10 == 0) {
      lVar14 = (longlong)(int)uVar17;
      uVar20 = uVar20 + 0x20;
      uVar17 = uVar17 + 1;
      uVar10 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14440c82d;
      uVar10 = puVar21[lVar14 + 1];
    }
    uVar9 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    uVar10 = local_res10 + -1 + uVar20;
    if ((int)uVar11 < (int)uVar10) {
      uVar10 = uVar11;
    }
  }
LAB_14440c82d:
  bVar6 = RegisteredFilters.Elements._40_1_;
  TStack_60._padding_ = CONCAT44(uVar9,uVar17);
  uVar17 = uVar11 & 0xffffffe0;
  TStack_60.CurrentBitIndex = uVar10;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uVar10;
  TStack_60.BaseBitIndex = uVar20;
  uStack_40 = CONCAT44(uStack_6c,
                       RegisteredFilters.Elements._8_4_ - RegisteredFilters.Elements._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&RegisteredFilters.Elements.field_0x10;
  uVar20 = uVar11;
  if ((int)uVar11 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FDataflowNode,1> *)(*pcVar5)();
      return pTVar12;
    }
    uVar20 = RegisteredFilters.Elements._40_4_;
  }
  if (uVar11 != uVar20) {
    lVar14 = 0x154bbce70;
    if (RegisteredFilters.Elements._32_8_ != 0) {
      lVar14 = RegisteredFilters.Elements._32_8_;
    }
    uVar10 = -1 << (bVar6 & 0x1f) & *(uint *)(lVar14 + (longlong)iVar18 * 4);
    while (uVar10 == 0) {
      lVar15 = (longlong)iVar18;
      uVar17 = uVar17 + 0x20;
      iVar18 = iVar18 + 1;
      uVar11 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14440c950;
      uVar10 = *(uint *)(lVar14 + 4 + lVar15 * 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar11 = local_res18 + -1 + uVar17;
    if ((int)uVar20 < (int)uVar11) {
      uVar11 = uVar20;
    }
  }
LAB_14440c950:
  while( true ) {
    if (RegisteredFilters.Elements._8_4_ - RegisteredFilters.Elements._52_4_ != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&RegisteredFilters.Elements.field_0x10)) break;
    pFVar19 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x10 +
                       RegisteredFilters.Elements._0_8_);
    if ((__return_storage_ptr__->Object == (FDataflowNode *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<FDataflowNode,1> *)(*pcVar5)();
      return pTVar12;
    }
    cVar8 = (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x128))
                      (__return_storage_ptr__->Object,*pFVar19);
    if (cVar8 != '\0') {
      FVar3 = *pFVar19;
      uVar20 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      pTVar13 = TMapBase<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->FilteredNodes,uVar20 + FVar3.Number,pFVar19);
      pTVar12 = (TSharedPtr<FDataflowNode,1> *)(pTVar13->AllocatorInstance).Data;
      if (((pTVar12 <= __return_storage_ptr__) &&
          (__return_storage_ptr__ < pTVar12 + pTVar13->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedPtr<FDataflowNode,1> *)(*pcVar5)();
        return pTVar12;
      }
      iVar18 = pTVar13->ArrayNum;
      if (iVar18 == pTVar13->ArrayMax) {
        iVar18 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
      }
      pTVar13->ArrayNum = iVar18 + 1;
      pFVar16 = (pTVar13->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
      *(FDataflowNode **)pFVar16 = __return_storage_ptr__->Object;
      pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// FGraph @ 1444316f0

FGraph * __thiscall UE::Dataflow::FGraph::FGraph(FGraph *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1->A;
  uVar2 = param_1->B;
  uVar3 = param_1->C;
  uVar4 = param_1->D;
  this->_padding_ = (longlong)&___7FGraph_Dataflow_UE__6B_;
  (this->Guid).A = uVar1;
  (this->Guid).B = uVar2;
  (this->Guid).C = uVar3;
  (this->Guid).D = uVar4;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  *(undefined8 *)&this->FilteredNodes = 0;
  *(undefined8 *)&(this->FilteredNodes).field_0x8 = 0;
  *(undefined8 *)&(this->FilteredNodes).field_0x20 = 0;
  *(undefined4 *)&(this->FilteredNodes).field_0x28 = 0;
  *(undefined4 *)&(this->FilteredNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilteredNodes).field_0x34 = 0;
  *(undefined4 *)&(this->FilteredNodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FilteredNodes).field_0x40 = 0;
  *(undefined4 *)&(this->FilteredNodes).field_0x48 = 0;
  (this->Connections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connections).ArrayNum = 0;
  (this->Connections).ArrayMax = 0;
  *(undefined8 *)&(this->DisabledNodes).Elements = 0;
  *(undefined8 *)&(this->DisabledNodes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DisabledNodes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DisabledNodes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DisabledNodes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DisabledNodes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->DisabledNodes).Elements.field_0x30 = 0xffffffff;
  (this->DisabledNodes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DisabledNodes).HashSize = 0;
  return this;
}

// ~FGraph @ 144433b00

void __thiscall UE::Dataflow::FGraph::~FGraph(FGraph *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  (this->DisabledNodes).HashSize = 0;
  this->_padding_ = (longlong)&___7FGraph_Dataflow_UE__6B_;
  FVar1 = (this->DisabledNodes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DisabledNodes).Elements);
  pFVar2 = (this->Connections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->FilteredNodes).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FilteredNodes).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FilteredNodes);
  DestructItems<TSharedPtr<FDataflowNode,1>,int>
            ((TSharedPtr<FDataflowNode,1> *)(this->Nodes).AllocatorInstance.Data,
             (this->Nodes).ArrayNum);
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddReferencedObjects @ 1444372f0

void __thiscall
UE::Dataflow::FGraph::AddReferencedObjects(FGraph *this,FReferenceCollector *param_1)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Nodes).ArrayNum;
  pFVar6 = (this->Nodes).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Nodes).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    pvVar2 = *(void **)pFVar6;
    if (pvVar2 == (void *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar5 = (UScriptStruct *)(**(code **)(**(longlong **)pFVar6 + 0xb8))();
    FReferenceCollector::AddPropertyReferencesWithStructARO(param_1,pUVar5,pvVar2,(UObject *)0x0);
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// CanConnect @ 144438500

bool __thiscall
UE::Dataflow::FGraph::CanConnect(FGraph *this,FDataflowOutput *param_1,FDataflowInput *param_2)

{
  EConnectType EVar1;
  
  EVar1 = GetConnectType(this,param_1,param_2);
  return EVar1 != REJECTED;
}

// ClearConnections @ 144438960

void __thiscall UE::Dataflow::FGraph::ClearConnections(FGraph *this,FDataflowConnection *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_res10 [8];
  undefined8 *local_28 [2];
  
  if (param_1->Direction == INPUT) {
    (**(code **)(param_1->_padding_ + 0x58))(param_1,local_28);
    iVar2 = (int)local_28[1];
    puVar1 = local_28[0] + iVar2;
    puVar3 = local_28[0];
    while( true ) {
      if ((int)local_28[1] != iVar2) {
        `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar3 == puVar1) break;
      Disconnect(this,(FDataflowOutput *)*puVar3,(FDataflowInput *)param_1);
      puVar3 = puVar3 + 1;
    }
  }
  else {
    if (param_1->Direction != OUTPUT) {
      return;
    }
    (**(code **)(param_1->_padding_ + 0x58))(param_1,local_28);
    iVar2 = (int)local_28[1];
    puVar1 = local_28[0] + iVar2;
    puVar3 = local_28[0];
    while( true ) {
      if ((int)local_28[1] != iVar2) {
        `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar3 == puVar1) break;
      Disconnect(this,(FDataflowOutput *)param_1,(FDataflowInput *)*puVar3);
      puVar3 = puVar3 + 1;
    }
  }
  if (local_28[0] != (undefined8 *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return;
}

// ClearConnections @ 144438a50

void __thiscall UE::Dataflow::FGraph::ClearConnections(FGraph *this,FDataflowInput *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res10 [8];
  undefined8 *local_28 [2];
  
  (**(code **)(param_1->_padding_ + 0x58))(param_1,local_28);
  iVar3 = (int)local_28[1];
  puVar1 = local_28[0] + iVar3;
  puVar2 = local_28[0];
  while( true ) {
    if ((int)local_28[1] != iVar3) {
      `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar2 == puVar1) break;
    Disconnect(this,(FDataflowOutput *)*puVar2,param_1);
    puVar2 = puVar2 + 1;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return;
}

// ClearConnections @ 144438ae0

void __thiscall UE::Dataflow::FGraph::ClearConnections(FGraph *this,FDataflowOutput *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res10 [8];
  undefined8 *local_28 [2];
  
  (**(code **)(param_1->_padding_ + 0x58))(param_1,local_28);
  iVar3 = (int)local_28[1];
  puVar1 = local_28[0] + iVar3;
  puVar2 = local_28[0];
  while( true ) {
    if ((int)local_28[1] != iVar3) {
      `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar2 == puVar1) break;
    Disconnect(this,param_1,(FDataflowInput *)*puVar2);
    puVar2 = puVar2 + 1;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    FMemory::Free(local_28[0]);
  }
  return;
}

// Connect @ 14443ca10

void __thiscall
UE::Dataflow::FGraph::Connect(FGraph *this,FDataflowOutput *param_1,FDataflowInput *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 != (FDataflowOutput *)0x0) && (param_2 != (FDataflowInput *)0x0)) {
    Connect(this,param_1,param_2);
    return;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3601461572414734576>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowGraph.cpp"
                     ,0xf0,"OutputConnection && InputConnection");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Connect @ 14443ca60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Dataflow::FGraph::Connect(FGraph *this,FDataflowOutput *param_1,FDataflowInput *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  EConnectType EVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FDataflowNode *pFVar8;
  longlong lVar9;
  FDataflowOutput *pFVar10;
  FName local_res20;
  FName local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong local_160;
  longlong lStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong lStack_138;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FLink local_70;
  
  EVar4 = GetConnectType(this,param_1,param_2);
  if (EVar4 == REJECTED) {
    if (1 < (byte)LogChaosDataflow._0_1_) {
      Dataflow::Private::GetConnectionFullName(&local_120,(FDataflowConnection *)param_2);
      Dataflow::Private::GetConnectionFullName(&local_130,(FDataflowConnection *)param_1);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (EVar4 == INPUT_PROMOTION) {
    if (5 < (byte)LogChaosDataflow._0_1_) {
      local_res20 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res20,&local_f0);
      Dataflow::Private::GetConnectionFullName(&local_100,(FDataflowConnection *)param_2);
      Dataflow::Private::GetConnectionFullName(&local_110,(FDataflowConnection *)param_1);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    FDataflowConnection::ResetToOriginalType((FDataflowConnection *)param_2);
    FDataflowConnection::SetConcreteType((FDataflowConnection *)param_2,(FName)param_1->_padding_);
    pFVar8 = (FDataflowNode *)param_2->_padding_;
    pFVar10 = (FDataflowOutput *)param_2;
  }
  else {
    if (EVar4 != OUTPUT_PROMOTION) goto LAB_14443ccd1;
    if (5 < (byte)LogChaosDataflow._0_1_) {
      local_178 = (FName)param_2->_padding_;
      ::FName::ToString(&local_178,&local_c0);
      Dataflow::Private::GetConnectionFullName(&local_d0,(FDataflowConnection *)param_2);
      Dataflow::Private::GetConnectionFullName(&local_e0,(FDataflowConnection *)param_1);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    FDataflowConnection::ResetToOriginalType((FDataflowConnection *)param_1);
    FDataflowConnection::SetConcreteType((FDataflowConnection *)param_1,(FName)param_2->_padding_);
    pFVar8 = (FDataflowNode *)param_1->_padding_;
    pFVar10 = param_1;
  }
  FDataflowNode::NotifyConnectionTypeChanged(pFVar8,(FDataflowConnection *)pFVar10);
LAB_14443ccd1:
  pFVar10 = param_2->Connection;
  if (pFVar10 != param_1) {
    if (pFVar10 != (FDataflowOutput *)0x0) {
      if (5 < (byte)LogChaosDataflow._0_1_) {
        Dataflow::Private::GetConnectionFullName(&local_a0,(FDataflowConnection *)param_2);
        Dataflow::Private::GetConnectionFullName(&local_b0,(FDataflowConnection *)pFVar10);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(pFVar10->_padding_ + 0x38))(pFVar10,param_2);
      local_70.InputNode._0_8_ = *(undefined8 *)(param_2->_padding_ + 0x7c);
      local_70.InputNode._8_8_ = *(undefined8 *)(param_2->_padding_ + 0x84);
      pFVar8 = (FDataflowNode *)pFVar10->_padding_;
      local_70.OutputNode.A = (pFVar8->Guid).A;
      local_70.OutputNode.B = (pFVar8->Guid).B;
      local_70.OutputNode.C = (pFVar8->Guid).C;
      local_70.OutputNode.D = (pFVar8->Guid).D;
      local_70.Input._0_8_ = param_2->_padding_;
      local_70.Input._8_8_ = param_2->_padding_;
      local_70.Output.A = *(uint *)&pFVar10->_padding_;
      local_70.Output.B = *(uint *)((longlong)&pFVar10->_padding_ + 4);
      local_70.Output._8_8_ = pFVar10->_padding_;
      TArray<UE::Dataflow::FLink,TSizedDefaultAllocator<32>_>::RemoveSwap
                (&this->Connections,&local_70,Default);
    }
    if (5 < (byte)LogChaosDataflow._0_1_) {
      Dataflow::Private::GetConnectionFullName(&local_80,(FDataflowConnection *)param_2);
      Dataflow::Private::GetConnectionFullName(&local_90,(FDataflowConnection *)param_1);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(param_1->_padding_ + 0x30))(param_1,param_2);
    (**(code **)(param_2->_padding_ + 0x30))(param_2,param_1);
    pFVar2 = (this->Connections).AllocatorInstance.Data;
    local_170 = *(undefined8 *)(param_2->_padding_ + 0x7c);
    uStack_168 = *(undefined8 *)(param_2->_padding_ + 0x84);
    local_150 = *(undefined8 *)(param_1->_padding_ + 0x7c);
    uStack_148 = *(undefined8 *)(param_1->_padding_ + 0x84);
    local_160 = param_2->_padding_;
    lStack_158 = param_2->_padding_;
    local_140 = param_1->_padding_;
    lStack_138 = param_1->_padding_;
    if (((pFVar2 <= (FScriptContainerElement *)&local_170) &&
        ((FScriptContainerElement *)&local_170 <
         pFVar2 + (longlong)(this->Connections).ArrayMax * 0x40)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar7 = (this->Connections).ArrayNum;
    piVar1 = &(this->Connections).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x440,&(this->Connections).AllocatorInstance,piVar1);
    }
    (this->Connections).ArrayNum = iVar7 + 1;
    pFVar2 = (this->Connections).AllocatorInstance.Data;
    lVar9 = (longlong)iVar7 * 0x40;
    *(undefined8 *)(pFVar2 + lVar9) = local_170;
    *(undefined8 *)(pFVar2 + lVar9 + 8) = uStack_168;
    *(longlong *)(pFVar2 + lVar9 + 0x10) = local_160;
    *(longlong *)(pFVar2 + lVar9 + 0x10 + 8) = lStack_158;
    *(undefined8 *)(pFVar2 + lVar9 + 0x20) = local_150;
    *(undefined8 *)(pFVar2 + lVar9 + 0x20 + 8) = uStack_148;
    *(longlong *)(pFVar2 + lVar9 + 0x30) = local_140;
    *(longlong *)(pFVar2 + lVar9 + 0x30 + 8) = lStack_138;
  }
  return true;
}

// Connect @ 14443cf50

bool __thiscall
UE::Dataflow::FGraph::Connect
          (FGraph *this,FDataflowConnection *param_1,FDataflowConnection *param_2)

{
  if ((param_1 != (FDataflowConnection *)0x0) && (param_2 != (FDataflowConnection *)0x0)) {
    if (param_1->Direction == OUTPUT) {
      if (param_2->Direction == INPUT) {
        Connect(this,(FDataflowOutput *)param_1,(FDataflowInput *)param_2);
        return true;
      }
    }
    else if ((param_1->Direction == INPUT) && (param_2->Direction == OUTPUT)) {
      Connect(this,(FDataflowOutput *)param_2,(FDataflowInput *)param_1);
      return true;
    }
  }
  return false;
}

// Disconnect @ 144444fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Dataflow::FGraph::Disconnect(FGraph *this,FDataflowOutput *param_1,FDataflowInput *param_2)

{
  longlong lVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FLink local_88;
  
  bVar2 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (5 < (byte)LogChaosDataflow._0_1_) {
    local_res8 = (FName)param_2->_padding_;
    ::FName::ToString(&local_res8,&local_98);
    if (param_2->_padding_ != 0) {
      local_res10 = *(FName *)(param_2->_padding_ + 0x8c);
      pFVar3 = ::FName::ToString(&local_res10,&local_a8);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    local_res18 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res18,&local_b8);
    lVar1 = param_1->_padding_;
    if (lVar1 != 0) {
      local_res20 = *(FName *)(lVar1 + 0x8c);
      ::FName::ToString(&local_res20,&local_c8);
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
    if ((lVar1 != 0) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(param_1->_padding_ + 0x38))(param_1,param_2);
  (**(code **)(param_2->_padding_ + 0x38))(param_2,param_1);
  local_88.InputNode._0_8_ = *(undefined8 *)(param_2->_padding_ + 0x7c);
  local_88.InputNode._8_8_ = *(undefined8 *)(param_2->_padding_ + 0x84);
  local_88.OutputNode._0_8_ = *(undefined8 *)(param_1->_padding_ + 0x7c);
  local_88.OutputNode._8_8_ = *(undefined8 *)(param_1->_padding_ + 0x84);
  local_88.Input._0_8_ = param_2->_padding_;
  local_88.Input._8_8_ = param_2->_padding_;
  local_88.Output._0_8_ = param_1->_padding_;
  local_88.Output._8_8_ = param_1->_padding_;
  TArray<UE::Dataflow::FLink,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->Connections,&local_88,Default);
  return;
}

// GetConnectType @ 14444a900

EConnectType __thiscall
UE::Dataflow::FGraph::GetConnectType(FGraph *this,FDataflowOutput *param_1,FDataflowInput *param_2)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  bool bVar4;
  FAnyTypesRegistry *pFVar5;
  
  lVar3 = param_1->_padding_;
  if (((lVar3 & 0x20000000000) == 0) || ((param_2->_padding_ & 0x20000000000) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((param_1->_padding_ == param_2->_padding_) && (bVar4)) {
    return DIRECT;
  }
  if (((param_2->_padding_ & 0x30000000000) != 0x10000000000) ||
     ((lVar3 & 0x30000000000) != 0x10000000000)) {
    if (((param_2->_padding_ & 0x10000000000) != 0) && ((lVar3 & 0x20000000000) != 0)) {
      bVar4 = FDataflowConnection::IsSafeToTryChangingType((FDataflowConnection *)param_2);
      if (!bVar4) {
        return REJECTED;
      }
      FVar1 = (FName)param_2->_padding_;
      FVar2 = (FName)param_1->_padding_;
      pFVar5 = FAnyTypesRegistry::GetInstance();
      bVar4 = FAnyTypesRegistry::AreTypesCompatible(pFVar5,FVar2,FVar1);
      if (bVar4) {
        return INPUT_PROMOTION;
      }
    }
    if (((param_1->_padding_ & 0x10000000000) != 0) &&
       (bVar4 = FDataflowConnection::IsSafeToTryChangingType((FDataflowConnection *)param_1), bVar4)
       ) {
      FVar1 = (FName)param_1->_padding_;
      FVar2 = (FName)param_2->_padding_;
      pFVar5 = FAnyTypesRegistry::GetInstance();
      bVar4 = FAnyTypesRegistry::AreTypesCompatible(pFVar5,FVar2,FVar1);
      return -bVar4 & OUTPUT_PROMOTION;
    }
  }
  return REJECTED;
}

// RemoveNode @ 14445dc10

void __thiscall UE::Dataflow::FGraph::RemoveNode(FGraph *this,TSharedPtr<FDataflowNode,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  FDataflowOutput *pFVar3;
  FDataflowInput *pFVar4;
  undefined1 *puVar5;
  code *pcVar6;
  byte bVar7;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  char cVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ForAnyElementType FVar28;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126 [2];
  uint local_124;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_120;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_110;
  undefined8 *local_100;
  int local_f8;
  undefined8 *local_f0;
  int local_e8;
  int local_e0;
  int local_dc;
  ulonglong *local_d8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if ((param_1->Object == (FDataflowNode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
              *)&param_1->Object->ExpandedOutputs,&local_120);
  uVar26 = (ulonglong)local_120.ArrayNum;
  local_124 = local_120.ArrayNum;
  pFVar1 = local_120.AllocatorInstance.Data + uVar26 * 8;
  FVar28.Data = local_120.AllocatorInstance.Data;
  while( true ) {
    if (local_120.ArrayNum != (int)uVar26) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar28.Data == pFVar1) break;
    pFVar3 = *(FDataflowOutput **)FVar28.Data;
    if (pFVar3 != (FDataflowOutput *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x58))(pFVar3,&local_100);
      iVar15 = local_f8;
      puVar2 = local_100 + local_f8;
      puVar16 = local_100;
      while( true ) {
        if (local_f8 != iVar15) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (puVar16 == puVar2) break;
        if ((FDataflowInput *)*puVar16 != (FDataflowInput *)0x0) {
          Disconnect(this,pFVar3,(FDataflowInput *)*puVar16);
        }
        puVar16 = puVar16 + 1;
      }
      uVar26 = (ulonglong)local_124;
      if (local_100 != (undefined8 *)0x0) {
        FMemory::Free(local_100);
      }
    }
    FVar28.Data = FVar28.Data + 8;
  }
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  if ((param_1->Object == (FDataflowNode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
              *)&param_1->Object->ExpandedInputs,&local_110);
  uVar26 = (ulonglong)local_110.ArrayNum;
  local_124 = local_110.ArrayNum;
  pFVar1 = local_110.AllocatorInstance.Data + uVar26 * 8;
  FVar28.Data = local_110.AllocatorInstance.Data;
  while( true ) {
    if (local_110.ArrayNum != (int)uVar26) {
      local_128 = 0;
      `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_128);
    }
    if (FVar28.Data == pFVar1) break;
    pFVar4 = *(FDataflowInput **)FVar28.Data;
    if (pFVar4 != (FDataflowInput *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_f0);
      iVar15 = local_e8;
      puVar2 = local_f0 + local_e8;
      puVar16 = local_f0;
      while( true ) {
        if (local_e8 != iVar15) {
          local_127 = 0;
          `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_127);
        }
        if (puVar16 == puVar2) break;
        if ((FDataflowOutput *)*puVar16 != (FDataflowOutput *)0x0) {
          Disconnect(this,(FDataflowOutput *)*puVar16,pFVar4);
        }
        puVar16 = puVar16 + 1;
      }
      uVar26 = (ulonglong)local_124;
      if (local_f0 != (undefined8 *)0x0) {
        FMemory::Free(local_f0);
      }
    }
    FVar28.Data = FVar28.Data + 8;
  }
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>::Remove(&this->Nodes,param_1);
  iStack_c8 = 0;
  local_b0 = 0;
  uStack_c4 = 1;
  uVar22 = RegisteredFilters.Elements._40_4_;
  uStack_b4 = 0;
  if (uVar22 != 0) {
    puVar24 = (uint *)&RegisteredFilters.Elements.field_0x10;
    if (RegisteredFilters.Elements._32_8_ != 0) {
      puVar24 = (uint *)RegisteredFilters.Elements._32_8_;
    }
    uVar20 = *puVar24;
    while (uVar20 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      uStack_b4 = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_c8)
      goto LAB_14445deed;
      uVar20 = puVar24[lVar12 + 1];
    }
    uStack_c4 = -uVar20 & uVar20;
    uVar26 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_e0 = (int)lVar12;
    uStack_b4 = local_b0 + -1 + local_e0;
    if ((int)uVar22 < (int)uStack_b4) {
      uStack_b4 = uVar22;
    }
  }
LAB_14445deed:
  bVar7 = RegisteredFilters.Elements._40_1_;
  uStack_ac = local_54;
  iStack_a8 = RegisteredFilters.Elements._8_4_ - RegisteredFilters.Elements._52_4_;
  uVar20 = uVar22 & 0xffffffe0;
  uVar26 = RegisteredFilters.Elements._40_8_ & 0xffffffff;
  uStack_b8 = 0xffffffff;
  local_d0 = &RegisteredFilters;
  TStack_98._padding_ = CONCAT44(uStack_c4,iStack_c8);
  local_c0 = 0x154bbce70;
  TStack_98.CurrentBitIndex = uStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  local_a0 = &RegisteredFilters;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  iVar15 = (int)uVar22 >> 5;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)&RegisteredFilters.Elements.field_0x10;
  local_124 = uVar22;
  if (((int)uVar22 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar23 = RegisteredFilters.Elements._40_4_;
  if (uVar22 != uVar23) {
    uVar26 = RegisteredFilters.Elements._40_8_ & 0xffffffff;
    lVar12 = 0x154bbce70;
    if (RegisteredFilters.Elements._32_8_ != 0) {
      lVar12 = RegisteredFilters.Elements._32_8_;
    }
    uVar22 = -1 << (bVar7 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar15 * 4);
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      local_124 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14445e001;
      uVar22 = *(uint *)(lVar12 + 4 + lVar13 * 4);
    }
    uVar26 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_dc = (int)lVar12;
    local_124 = local_dc + -1 + uVar20;
    if ((int)uVar23 < (int)local_124) {
      local_124 = uVar23;
    }
    uVar26 = (ulonglong)local_124;
  }
LAB_14445e001:
  do {
    pTVar8 = local_a0;
    if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
        (int)uStack_78) {
      local_126[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_126);
    }
    if (((TStack_98.CurrentBitIndex == (int)uVar26) &&
        (TStack_98.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&RegisteredFilters.Elements.field_0x10)) &&
       (pTVar8 == &RegisteredFilters)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return;
    }
    plVar17 = (longlong *)
              ((longlong)TStack_98.CurrentBitIndex * 0x10 + *(longlong *)&pTVar8->Elements);
    if ((param_1->Object == (FDataflowNode *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    cVar10 = (**(code **)(param_1->Object->_padding_ + 0x128))(param_1->Object,*plVar17);
    if (cVar10 != '\0') {
      lVar12 = *plVar17;
      uVar22 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
      if (*(int *)&(this->FilteredNodes).field_0x8 != *(int *)&(this->FilteredNodes).field_0x34) {
        puVar5 = *(undefined1 **)&(this->FilteredNodes).field_0x40;
        puVar14 = &(this->FilteredNodes).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar14 = puVar5;
        }
        iVar15 = *(int *)(puVar14 +
                         (ulonglong)
                         (*(int *)&(this->FilteredNodes).field_0x48 - 1U &
                         (int)((ulonglong)lVar12 >> 0x20) + uVar22) * 4);
        if (iVar15 != -1) {
          do {
            plVar17 = (longlong *)((longlong)iVar15 * 0x20 + *(longlong *)&this->FilteredNodes);
            if (*plVar17 == lVar12) {
              puVar18 = (ulonglong *)(plVar17 + 1);
              if (plVar17 == (longlong *)0x0) {
                puVar18 = (ulonglong *)0x0;
              }
              local_d8 = puVar18;
              if (puVar18 != (ulonglong *)0x0) {
                if ((((TSharedPtr<FDataflowNode,1> *)*puVar18 <= param_1) &&
                    (param_1 < (TSharedPtr<FDataflowNode,1> *)*puVar18 +
                               *(int *)((longlong)puVar18 + 0xc))) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar19 = 0;
                lVar12 = (longlong)(int)puVar18[1];
                if ((int)puVar18[1] != 0) {
                  plVar17 = (longlong *)*puVar18;
                  bVar9 = (FDataflowNode *)*plVar17 != param_1->Object;
                  uVar26 = uVar19;
                  uVar27 = uVar19;
                  do {
                    iVar15 = (int)uVar26;
                    uVar19 = uVar19 + 1;
                    uVar26 = (ulonglong)(iVar15 + 1);
                    if ((longlong)uVar19 < lVar12) {
                      plVar11 = plVar17 + uVar19 * 2;
                      do {
                        if (bVar9 != ((FDataflowNode *)*plVar11 != param_1->Object)) break;
                        uVar26 = (ulonglong)((int)uVar26 + 1);
                        uVar19 = uVar19 + 1;
                        plVar11 = plVar11 + 2;
                      } while ((longlong)uVar19 < lVar12);
                    }
                    iVar21 = (int)uVar26 - iVar15;
                    if (bVar9 == false) {
                      DestructItems<TSharedPtr<FDataflowNode,1>,int>
                                ((TSharedPtr<FDataflowNode,1> *)(plVar17 + (longlong)iVar15 * 2),
                                 iVar21);
                    }
                    else {
                      iVar25 = (int)uVar27;
                      if (iVar25 != iVar15) {
                        memmove(plVar17 + (longlong)iVar25 * 2,plVar17 + (longlong)iVar15 * 2,
                                (longlong)iVar21 << 4);
                      }
                      uVar27 = (ulonglong)(uint)(iVar25 + iVar21);
                    }
                    bVar9 = (bool)(bVar9 ^ 1);
                  } while ((longlong)uVar19 < lVar12);
                  uVar26 = (ulonglong)local_124;
                  *(int *)(local_d8 + 1) = (int)uVar27;
                }
              }
              break;
            }
            iVar15 = (int)plVar17[3];
          } while (iVar15 != -1);
        }
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// Reset @ 14445ec00

void __thiscall UE::Dataflow::FGraph::Reset(FGraph *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FDataflowNode,1> *pTVar3;
  
  piVar1 = &(this->Nodes).ArrayMax;
  pTVar3 = (TSharedPtr<FDataflowNode,1> *)(this->Nodes).AllocatorInstance.Data;
  iVar2 = (this->Nodes).ArrayNum;
  if ((this->Nodes).ArrayMax < 0) {
    DestructItems<TSharedPtr<FDataflowNode,1>,int>(pTVar3,iVar2);
    (this->Nodes).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Nodes).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FDataflowNode,1>,int>(pTVar3,iVar2);
    (this->Nodes).ArrayNum = 0;
  }
  TSet<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->FilteredNodes);
  (this->Connections).ArrayNum = 0;
  if ((this->Connections).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,4,0,&(this->Connections).AllocatorInstance,0,&(this->Connections).ArrayMax);
  }
  if (*(int *)&(this->DisabledNodes).Elements.field_0x8 !=
      *(int *)&(this->DisabledNodes).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(&this->DisabledNodes);
    iVar2 = *(int *)&(this->DisabledNodes).Elements.field_0xc;
    *(undefined4 *)&(this->DisabledNodes).Elements.field_0x8 = 0;
    if (iVar2 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)&this->DisabledNodes,0,
                 (int *)&(this->DisabledNodes).Elements.field_0xc);
    }
    *(undefined4 *)&(this->DisabledNodes).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->DisabledNodes).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->DisabledNodes).Elements.field_0x28 = 0;
  }
  return;
}

// Serialize @ 1444605e0

void __thiscall UE::Dataflow::FGraph::Serialize(FGraph *this,FArchive *param_1,UObject *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  ::operator<<(param_1,&this->Guid);
  if ((param_1->field_0x28 & 4) != 0) {
    SerializeForSaving(param_1,this,&this->Nodes,&this->Connections);
    return;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    SerializeForLoading(param_1,this,param_2);
  }
  return;
}

// SerializeForLoading @ 1444607a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Dataflow::FGraph::SerializeForLoading(FArchive *param_1,FGraph *param_2,UObject *param_3)

{
  int *piVar1;
  FGuid *pFVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this;
  TSharedPtr<FDataflowNode,1> *pTVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FDataflowOutput *this_00;
  FDataflowInput *this_01;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  FArchive *pFVar20;
  longlong *plVar21;
  FNodeFactory *this_02;
  ulong64 uVar22;
  FString *pFVar23;
  FString *pFVar24;
  FDataflowOutput *pFVar25;
  FAnyTypesRegistry *pFVar26;
  FDataflowInput *this_03;
  longlong lVar27;
  FDataflowConnection **ppFVar28;
  FName *pFVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  wchar_t *pwVar32;
  uint *puVar33;
  undefined1 *puVar34;
  uint uVar35;
  FName FVar36;
  FScriptContainerElement *pFVar37;
  ForAnyElementType FVar38;
  longlong lVar39;
  FGuid *pFVar40;
  ForElementType<FSetElementId> FVar41;
  ulonglong uVar42;
  int iVar43;
  ulonglong uVar44;
  byte *pbVar45;
  FGuid *pFVar46;
  ulonglong uVar47;
  bool bVar48;
  undefined1 auStackY_518 [32];
  FName local_4c0;
  ForAnyElementType local_4b8;
  undefined8 local_4b0;
  FGuid local_4a8;
  undefined1 local_498;
  undefined1 local_497 [7];
  FName local_490;
  int local_488;
  TSharedPtr<FDataflowNode,1> local_480;
  uint local_470;
  uint local_46c;
  uint local_468;
  uint local_464;
  uint local_460;
  uint local_45c;
  uint local_458;
  int local_454;
  int local_450;
  uint local_44c;
  ForAnyElementType local_448;
  undefined8 local_440;
  FName local_438;
  int local_430;
  FDataflowOutput *local_428;
  uint local_420;
  FDataflowOutput *local_418;
  FDataflowOutput *local_410;
  FDataflowInput *local_408;
  ulong64 local_400;
  FGraph *local_3f8;
  byte *local_3f0;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_3e8;
  FName local_3d8;
  TArray<UE::Dataflow::FLink,TSizedDefaultAllocator<32>_> local_3d0;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_3c0;
  FString local_3b0;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FName local_380;
  FName local_378;
  FString local_370;
  FString local_360;
  undefined1 local_350 [8];
  undefined1 local_348 [8];
  FName local_340;
  FName local_338;
  FDataflowOutput *local_330;
  FName local_328;
  FName local_320;
  FName local_318;
  UObject *local_310;
  FName local_308;
  FDataflowInput *local_300;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_2f8;
  FString local_2f0;
  FString local_2e0;
  FGuid *local_2d0;
  TSharedPtr<FDataflowNode,1> *local_2c8;
  FGuid *local_2c0;
  FDataflowOutput **local_2b8;
  FGuid *local_2b0;
  FDataflowOutput **local_2a8;
  FGuid *local_2a0;
  FDataflowInput **local_298;
  FName *local_290;
  FName *local_288;
  FName local_280;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FNewNodeParameters local_118;
  TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
  local_e8;
  TSet<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FDataflowNode,1>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_518;
  piVar1 = &(param_2->Nodes).ArrayMax;
  pTVar3 = (TSharedPtr<FDataflowNode,1> *)(param_2->Nodes).AllocatorInstance.Data;
  iVar16 = (param_2->Nodes).ArrayNum;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar15 = false;
  local_3f8 = param_2;
  local_310 = param_3;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FDataflowNode,1>,int>(pTVar3,iVar16);
    (param_2->Nodes).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(param_2->Nodes).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FDataflowNode,1>,int>(pTVar3,iVar16);
    (param_2->Nodes).ArrayNum = 0;
  }
  TSet<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&param_2->FilteredNodes);
  (param_2->Connections).ArrayNum = 0;
  if ((param_2->Connections).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,4,0,&(param_2->Connections).AllocatorInstance,0,&(param_2->Connections).ArrayMax
              );
  }
  this = &param_2->DisabledNodes;
  local_2f8 = this;
  if (*(int *)&(param_2->DisabledNodes).Elements.field_0x8 !=
      *(int *)&(param_2->DisabledNodes).Elements.field_0x34) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this);
    iVar16 = *(int *)&(param_2->DisabledNodes).Elements.field_0xc;
    *(undefined4 *)&(param_2->DisabledNodes).Elements.field_0x8 = 0;
    if (iVar16 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this,0,
                 (int *)&(param_2->DisabledNodes).Elements.field_0xc);
    }
    *(undefined4 *)&(param_2->DisabledNodes).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_2->DisabledNodes).Elements.field_0x34 = 0;
    *(undefined4 *)&(param_2->DisabledNodes).Elements.field_0x28 = 0;
  }
  iVar16 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  local_454 = iVar16;
  iVar17 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  local_450 = iVar17;
  local_430 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  plVar21 = *(longlong **)&param_1->field_0x8;
  local_4a8.A = 0;
  local_4a8.B = 0;
  local_4a8.C = 0;
  local_4a8.D = 0;
  local_4c0.ComparisonIndex.Value = 0;
  local_4c0.Number = 0;
  local_490.ComparisonIndex.Value = 0;
  local_490.Number = 0;
  local_470 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0 = 0;
  if ((uint *)plVar21[1] < (uint *)*plVar21 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_470,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_470);
    }
  }
  else {
    local_470 = *(uint *)*plVar21;
    *plVar21 = *plVar21 + 4;
  }
  pbVar45 = &param_1->field_0x2a;
  local_3f0 = pbVar45;
  for (local_420 = local_470; 0 < (int)local_420; local_420 = local_420 - 1) {
    local_438.ComparisonIndex.Value = 0;
    local_438.Number = 0;
    pFVar20 = ::operator<<(param_1,&local_4a8);
    plVar21 = (longlong *)(**(code **)(*(longlong *)pFVar20 + 0x178))(pFVar20,&local_4c0);
    (**(code **)(*plVar21 + 0x178))(plVar21,&local_438);
    this_02 = FNodeFactory::GetInstance();
    local_118.Type = local_4c0;
    local_118.Name = local_438;
    local_118.OwningObject = local_310;
    local_118.Guid.A = local_4a8.A;
    local_118.Guid.B = local_4a8.B;
    local_118.Guid.C = local_4a8.C;
    local_118.Guid.D = local_4a8.D;
    FNodeFactory::NewNodeFromRegisteredType(this_02,&local_480,param_2,&local_118);
    plVar21 = *(longlong **)&param_1->field_0x8;
    local_400 = 0;
    if ((ulong64 *)plVar21[1] < (ulong64 *)*plVar21 + 1) {
      if ((*pbVar45 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_400,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_400);
      }
    }
    else {
      local_400 = *(ulong64 *)*plVar21;
      *plVar21 = *plVar21 + 8;
    }
    if (local_480.Object == (FDataflowNode *)0x0) {
      lVar39 = *(longlong *)param_1;
      lVar27 = (**(code **)(lVar39 + 0x28))(param_1);
      (**(code **)(lVar39 + 0x1b8))(param_1,lVar27 + local_400);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (this,&local_308,(bool *)&local_438);
      local_290 = &local_4c0;
      local_288 = &local_490;
      `UE::Dataflow::FGraph::SerializeForLoading'::__l187::<lambda_2>::operator()(&local_290);
    }
    else {
      uVar22 = CityHash64((char *)&local_4a8,0x10);
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        FVar41 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar41 = local_98.Hash.SecondaryData;
        }
        uVar35 = *(uint *)((longlong)FVar41 +
                          ((ulonglong)(local_98.HashSize - 1) & uVar22 & 0xffffffff) * 4);
        if (uVar35 != 0xffffffff) {
          do {
            puVar33 = (uint *)(local_98.Elements._0_8_ + (longlong)(int)uVar35 * 0x28);
            if (((local_4a8.D == puVar33[3] &&
                 local_4a8.C ==
                 *(uint *)(local_98.Elements._0_8_ + 8 + (longlong)(int)uVar35 * 0x28)) &&
                local_4a8.B == puVar33[1]) && local_4a8.A == *puVar33) {
              bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<3601461572414734784>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowGraph.cpp"
                                  ,0x1c0,"!NodeGuidMap.Contains(ArGuid)");
              if (bVar12) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              break;
            }
            uVar35 = puVar33[8];
          } while (uVar35 != 0xffffffff);
        }
      }
      local_2d0 = &local_4a8;
      local_2c8 = &local_480;
      TSet<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FDataflowNode,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,TSharedPtr<FDataflowNode,1>_const_&>_>
                (&local_98,
                 (TPairInitializer<FGuid_const_&,TSharedPtr<FDataflowNode,1>_const_&> *)local_350,
                 (bool *)&local_2d0);
      iVar18 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
      local_488 = iVar18;
      if (iVar16 < 0x73) {
        plVar21 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar21[1] < (uint *)*plVar21 + 1) {
          if ((*pbVar45 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_46c,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_46c);
          }
        }
        else {
          local_46c = *(uint *)*plVar21;
          *plVar21 = *plVar21 + 4;
        }
        uVar30 = 0;
        local_448.Data = (FScriptContainerElement *)0x0;
        local_440 = 0;
        if ((local_480.Object == (FDataflowNode *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e8.ArrayNum = 0;
        local_3e8.ArrayMax = 0;
        TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
        ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                  ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                    *)&(local_480.Object)->ExpandedOutputs,&local_3e8);
        iVar16 = local_3e8.ArrayNum;
        if (local_3e8.ArrayNum != 0) {
          iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,local_3e8.ArrayNum,&local_448,(int *)&local_440,
                              (int *)((longlong)&local_440 + 4));
          RelocateConstructItems<FDataflowConnection_*,FDataflowOutput_*,int>
                    (local_448.Data + (longlong)iVar17 * 8,
                     (FDataflowOutput **)local_3e8.AllocatorInstance.Data,iVar16);
          local_3e8._8_8_ = local_3e8._8_8_ & 0xffffffff00000000;
        }
        if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.AllocatorInstance.Data);
        }
        if ((local_480.Object == (FDataflowNode *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3c0.ArrayNum = 0;
        local_3c0.ArrayMax = 0;
        TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
        ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                  ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                    *)&(local_480.Object)->ExpandedInputs,&local_3c0);
        iVar16 = local_3c0.ArrayNum;
        if (local_3c0.ArrayNum != 0) {
          iVar17 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,local_3c0.ArrayNum,&local_448,(int *)&local_440,
                              (int *)((longlong)&local_440 + 4));
          RelocateConstructItems<FDataflowConnection_*,FDataflowInput_*,int>
                    (local_448.Data + (longlong)iVar17 * 8,
                     (FDataflowInput **)local_3c0.AllocatorInstance.Data,iVar16);
          local_3c0._8_8_ = local_3c0._8_8_ & 0xffffffff00000000;
        }
        if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0.AllocatorInstance.Data);
        }
        uVar42 = uVar30;
        uVar44 = uVar30;
        uVar47 = uVar30;
        if (0 < (int)local_46c) {
          do {
            pFVar20 = ::operator<<(param_1,&local_4a8);
            plVar21 = (longlong *)(**(code **)(*(longlong *)pFVar20 + 0x178))(pFVar20,&local_4c0);
            (**(code **)(*plVar21 + 0x178))(plVar21,&local_490);
            uVar35 = (int)uVar47 + (int)uVar30;
            if (-1 < (int)uVar35) {
              uVar31 = (ulonglong)(int)local_440;
              if ((int)uVar35 < (int)local_440) {
                uVar19 = 0;
                if ((int)uVar35 < (int)local_440) {
                  uVar19 = ~uVar35 >> 0x1f;
                }
                if (uVar19 == 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar12) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar31 = local_440 & 0xffffffff;
                }
                lVar39 = (uVar42 + uVar44) * 8;
                local_428 = *(FDataflowOutput **)(local_448.Data + lVar39);
                FVar36 = local_318;
                while (local_318 = FVar36, local_428 != (FDataflowOutput *)0x0) {
                  if (*(FName *)&local_428->_padding_ == local_490) {
                    if (local_428 != (FDataflowOutput *)0x0) {
                      local_418 = local_428;
                      local_380 = local_4c0;
                      if ((local_428 == (FDataflowOutput *)0x0) || (0x94 < local_430)) {
LAB_14446116a:
                        if ((*(FName *)&local_428->_padding_ != local_4c0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Connection->GetType() == ArType",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowGraph.cpp"
                                                ,0x1f1,L""), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                      }
                      else {
                        local_318 = *(FName *)&local_428->_padding_;
                        if (local_318 == local_4c0) {
LAB_144460fb9:
                          local_318 = FVar36;
                          bVar12 = false;
                        }
                        else {
                          pFVar23 = ::FName::ToString(&local_318,&local_268);
                          bVar7 = true;
                          bVar15 = true;
                          pFVar24 = ::FName::ToString(&local_380,&local_278);
                          iVar17 = (pFVar24->Data).ArrayNum;
                          iVar16 = iVar17 + -1;
                          if (iVar17 == 0) {
                            iVar16 = 0;
                            pwVar32 = L"";
                          }
                          else {
                            pwVar32 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                          }
                          bVar12 = ::FString::StartsWith(pFVar23,pwVar32,iVar16,IgnoreCase);
                          FVar36 = local_318;
                          if (!bVar12) goto LAB_144460fb9;
                          bVar12 = true;
                        }
                        if ((bVar15) &&
                           (bVar15 = false,
                           local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
                        {
                          FMemory::Free(local_278.Data.AllocatorInstance.Data);
                        }
                        if ((bVar7) &&
                           (bVar7 = false,
                           local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
                        {
                          FMemory::Free(local_268.Data.AllocatorInstance.Data);
                        }
                        pFVar25 = local_418;
                        if (!bVar12) goto LAB_14446116a;
                        local_378 = local_380;
                        pFVar23 = ::FName::ToString((FName *)&local_418->_padding_,&local_248);
                        pFVar24 = ::FName::ToString(&local_378,&local_258);
                        iVar17 = (pFVar24->Data).ArrayNum;
                        iVar16 = iVar17 + -1;
                        if (iVar17 == 0) {
                          iVar16 = 0;
                          pwVar32 = L"";
                        }
                        else {
                          pwVar32 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                        }
                        bVar12 = ::FString::StartsWith(pFVar23,pwVar32,iVar16,IgnoreCase);
                        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_258.Data.AllocatorInstance.Data);
                        }
                        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_248.Data.AllocatorInstance.Data);
                        }
                        if ((!bVar12) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Type.ToString().StartsWith(InType.ToString())",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                                                ,0x105,L""), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        FDataflowConnection::SetTypeInternal
                                  ((FDataflowConnection *)pFVar25,local_378);
                        puVar5 = (undefined1 *)((longlong)&pFVar25->_padding_ + 5);
                        *puVar5 = INSERT(*puVar5,true,1,1);
                        if (((local_4b8.Data <= (FScriptContainerElement *)&local_418) &&
                            ((FScriptContainerElement *)&local_418 <
                             local_4b8.Data + (longlong)local_4b0._4_4_ * 8)) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar16 = (int)local_4b0;
                        if ((int)local_4b0 == local_4b0._4_4_) {
                          iVar16 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x808,&local_4b8,(int *)((longlong)&local_4b0 + 4));
                        }
                        local_4b0 = CONCAT44(local_4b0._4_4_,iVar16 + 1);
                        *(FDataflowOutput **)(local_4b8.Data + (longlong)iVar16 * 8) = local_418;
                      }
                      *(uint *)&local_428->_padding_ = local_4a8.A;
                      *(uint *)((longlong)&local_428->_padding_ + 4) = local_4a8.B;
                      local_428->_padding_ = local_4a8._8_8_;
                      uVar22 = CityHash64((char *)&local_4a8,0x10);
                      iVar16 = TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
                               ::FindIndexByHash<FGuid>(&local_e8,(uint)uVar22,&local_4a8);
                      if ((iVar16 != -1) &&
                         (bVar12 = Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<3601461572414734836>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowGraph.cpp"
                                              ,500,"!ConnectionGuidMap.Contains(ArGuid)"), bVar12))
                      {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      local_2c0 = &local_4a8;
                      local_2b8 = &local_428;
                      TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<FGuid_const_&,FDataflowConnection_*_const_&>_>
                                (&local_e8,
                                 (TPairInitializer<FGuid_const_&,FDataflowConnection_*_const_&> *)
                                 (local_350 + 4),(bool *)&local_2c0);
                    }
                    break;
                  }
                  uVar30 = (ulonglong)((int)uVar30 + 1);
                  uVar44 = uVar44 + 1;
                  lVar39 = lVar39 + 8;
                  uVar35 = uVar35 + 1;
                  if (((int)uVar35 < 0) || ((int)uVar31 <= (int)uVar35)) {
                    local_428 = (FDataflowOutput *)0x0;
                    break;
                  }
                  uVar19 = 0;
                  if ((int)uVar35 < (int)uVar31) {
                    uVar19 = ~uVar35 >> 0x1f;
                  }
                  if (uVar19 == 0) {
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar12) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar31 = local_440 & 0xffffffff;
                  }
                  FVar36 = local_318;
                  local_428 = *(FDataflowOutput **)(local_448.Data + lVar39);
                }
              }
            }
            uVar35 = (int)uVar47 + 1;
            uVar42 = uVar42 + 1;
            uVar47 = (ulonglong)uVar35;
          } while ((int)uVar35 < (int)local_46c);
        }
        if ((local_480.Object == (FDataflowNode *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)((local_480.Object)->_padding_ + 0xa8))(local_480.Object,param_1);
        param_2 = local_3f8;
        pbVar45 = local_3f0;
        iVar16 = local_454;
        if (local_448.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_448.Data);
          param_2 = local_3f8;
          pbVar45 = local_3f0;
          iVar16 = local_454;
        }
      }
      else {
        if ((local_480.Object == (FDataflowNode *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)((local_480.Object)->_padding_ + 0xa8))(local_480.Object,param_1);
        plVar21 = *(longlong **)&param_1->field_0x8;
        bVar48 = false;
        bVar12 = true;
        if ((uint *)plVar21[1] < (uint *)*plVar21 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_460,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_460);
          }
        }
        else {
          local_460 = *(uint *)*plVar21;
          *plVar21 = *plVar21 + 4;
        }
        iVar16 = 0;
        if (0 < (int)local_460) {
          do {
            pFVar20 = ::operator<<(param_1,&local_4a8);
            plVar21 = (longlong *)(**(code **)(*(longlong *)pFVar20 + 0x178))(pFVar20,&local_4c0);
            (**(code **)(*plVar21 + 0x178))(plVar21,&local_490);
            if (0x8d < iVar17) {
              puVar4 = *(ulonglong **)&param_1->field_0x8;
              puVar33 = (uint *)*puVar4 + 1;
              if ((uint *)puVar4[1] < puVar33) {
                local_468 = 0;
                if ((param_1->field_0x28 & 1) == 0) {
                  local_468 = (uint)(bVar48 != false);
                }
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_468,4);
                if (1 < local_468) {
                  FArchiveState::SetError((FArchiveState *)param_1);
                }
                uVar35 = local_468;
                if ((param_1->field_0x28 & 1) == 0) goto LAB_144461543;
              }
              else {
                uVar35 = *(uint *)*puVar4;
                *puVar4 = (ulonglong)puVar33;
              }
              bVar48 = uVar35 != 0;
            }
LAB_144461543:
            if (0x99 < iVar18) {
              puVar4 = *(ulonglong **)&param_1->field_0x8;
              puVar33 = (uint *)*puVar4 + 1;
              if ((uint *)puVar4[1] < puVar33) {
                local_464 = 0;
                if ((param_1->field_0x28 & 1) == 0) {
                  local_464 = (uint)bVar12;
                }
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_464,4);
                if (1 < local_464) {
                  FArchiveState::SetError((FArchiveState *)param_1);
                }
                uVar35 = local_464;
                if ((param_1->field_0x28 & 1) == 0) goto LAB_1444615b0;
              }
              else {
                uVar35 = *(uint *)*puVar4;
                *puVar4 = (ulonglong)puVar33;
              }
              bVar12 = uVar35 != 0;
            }
LAB_1444615b0:
            if ((local_480.Object == (FDataflowNode *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar25 = FDataflowNode::FindOutput(local_480.Object,local_490);
            if (pFVar25 == (FDataflowOutput *)0x0) {
              if ((local_480.Object == (FDataflowNode *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar25 = (FDataflowOutput *)
                        (**(code **)((local_480.Object)->_padding_ + 0xa0))
                                  (local_480.Object,&local_490);
              if ((byte)LogChaos._0_1_ < 4) goto LAB_14446171c;
              if (pFVar25 == (FDataflowOutput *)0x0) goto LAB_144461bd5;
              ::FName::ToString(&local_438,&local_218);
              local_320 = (FName)pFVar25->_padding_;
              ::FName::ToString(&local_320,&local_228);
              ::FName::ToString(&local_490,&local_238);
              Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
              if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_238.Data.AllocatorInstance.Data);
              }
              if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_228.Data.AllocatorInstance.Data);
              }
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
LAB_144461725:
              if ((bVar48 != false) &&
                 (pbVar45 = (byte *)((longlong)&pFVar25->_padding_ + 5),
                 *pbVar45 = *pbVar45 ^ (*(byte *)((longlong)&pFVar25->_padding_ + 5) ^ bVar48) & 1,
                 bVar48 != false)) {
                FDataflowConnection::SetTypeInternal((FDataflowConnection *)pFVar25,local_4c0);
                FVar36 = local_4c0;
                pFVar26 = FAnyTypesRegistry::GetInstance();
                uVar35 = ::GetTypeHash(FVar36.ComparisonIndex.Value);
                if (*(int *)&(pFVar26->TypeInfosByName).field_0x8 !=
                    *(int *)&(pFVar26->TypeInfosByName).field_0x34) {
                  puVar5 = *(undefined1 **)&(pFVar26->TypeInfosByName).field_0x40;
                  puVar34 = &(pFVar26->TypeInfosByName).field_0x38;
                  if (puVar5 != (undefined1 *)0x0) {
                    puVar34 = puVar5;
                  }
                  iVar17 = *(int *)(puVar34 +
                                   (ulonglong)
                                   (*(int *)&(pFVar26->TypeInfosByName).field_0x48 - 1U &
                                   FVar36.Number + uVar35) * 4);
                  if (iVar17 != -1) {
                    do {
                      if (*(FName *)((longlong)iVar17 * 0x20 +
                                    *(longlong *)&pFVar26->TypeInfosByName) == FVar36)
                      goto LAB_1444617bb;
                      iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 +
                                       *(longlong *)&pFVar26->TypeInfosByName);
                    } while (iVar17 != -1);
                  }
                }
                iVar17 = -1;
LAB_1444617bb:
                bVar14 = 0;
                if (iVar17 == -1) {
                  bVar14 = 2;
                }
                *(byte *)((longlong)&pFVar25->_padding_ + 5) =
                     bVar14 | *(byte *)((longlong)&pFVar25->_padding_ + 5) & 0xfd;
              }
              local_3a0 = local_4c0;
              local_410 = pFVar25;
              if (local_430 < 0x95) {
                if ((FName)pFVar25->_padding_ == local_4c0) {
LAB_14446186a:
                  bVar13 = false;
                }
                else {
                  local_328 = (FName)pFVar25->_padding_;
                  pFVar23 = ::FName::ToString(&local_328,&local_1f8);
                  bVar9 = true;
                  bVar8 = true;
                  pFVar24 = ::FName::ToString(&local_3a0,&local_208);
                  iVar18 = (pFVar24->Data).ArrayNum;
                  iVar17 = iVar18 + -1;
                  if (iVar18 == 0) {
                    iVar17 = 0;
                    pwVar32 = L"";
                  }
                  else {
                    pwVar32 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                  }
                  bVar13 = ::FString::StartsWith(pFVar23,pwVar32,iVar17,IgnoreCase);
                  if (!bVar13) goto LAB_14446186a;
                  bVar13 = true;
                }
                if ((bVar8) &&
                   (bVar8 = false,
                   local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_208.Data.AllocatorInstance.Data);
                }
                if ((bVar9) &&
                   (bVar9 = false,
                   local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                }
                this_00 = local_410;
                if (!bVar13) goto LAB_144461a1b;
                local_398 = local_3a0;
                pFVar23 = ::FName::ToString((FName *)&local_410->_padding_,&local_1d8);
                pFVar24 = ::FName::ToString(&local_398,&local_1e8);
                iVar18 = (pFVar24->Data).ArrayNum;
                iVar17 = iVar18 + -1;
                if (iVar18 == 0) {
                  iVar17 = 0;
                  pwVar32 = L"";
                }
                else {
                  pwVar32 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                }
                bVar13 = ::FString::StartsWith(pFVar23,pwVar32,iVar17,IgnoreCase);
                if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                }
                if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                }
                if ((!bVar13) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type.ToString().StartsWith(InType.ToString())",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                                        ,0x105,L""), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FDataflowConnection::SetTypeInternal((FDataflowConnection *)this_00,local_398);
                pbVar45 = (byte *)((longlong)&this_00->_padding_ + 5);
                *pbVar45 = *pbVar45 | 2;
                if (((local_4b8.Data <= (FScriptContainerElement *)&local_410) &&
                    ((FScriptContainerElement *)&local_410 <
                     local_4b8.Data + (longlong)local_4b0._4_4_ * 8)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar17 = (int)local_4b0;
                if ((int)local_4b0 == local_4b0._4_4_) {
                  iVar17 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_4b8,(int *)((longlong)&local_4b0 + 4));
                }
                local_4b0 = CONCAT44(local_4b0._4_4_,iVar17 + 1);
                *(FDataflowOutput **)(local_4b8.Data + (longlong)iVar17 * 8) = local_410;
              }
              else {
LAB_144461a1b:
                if ((FName)pFVar25->_padding_ != local_4c0) {
                  ::FName::ToString(&local_4c0,&local_370);
                  ::FString::RemoveSpacesInline(&local_370);
                  FVar38.Data = (FScriptContainerElement *)L"";
                  if (local_370.Data.ArrayNum != 0) {
                    FVar38.Data = local_370.Data.AllocatorInstance.Data;
                  }
                  bVar13 = ::FName::Equals((FName)pFVar25->_padding_,(wchar_t *)FVar38.Data);
                  if (((!bVar13) && (bVar48 == false)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Output->GetType() == *NoSpaceArType || bIsAnyType",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowGraph.cpp"
                                          ,0x229,L""), bVar13)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_370.Data.AllocatorInstance.Data);
                  }
                }
              }
              pbVar45 = (byte *)((longlong)&pFVar25->_padding_ + 5);
              *pbVar45 = *pbVar45 ^ (bVar12 << 3 ^ *(byte *)((longlong)&pFVar25->_padding_ + 5)) & 8
              ;
              pFVar25->_padding_ = local_4a8._0_8_;
              pFVar25->_padding_ = local_4a8._8_8_;
              uVar22 = CityHash64((char *)&local_4a8,0x10);
              if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
                FVar41 = (ForElementType<FSetElementId>)&local_e8.Hash;
                if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar41 = local_e8.Hash.SecondaryData;
                }
                uVar35 = *(uint *)((longlong)FVar41 +
                                  ((ulonglong)(local_e8.HashSize - 1) & uVar22 & 0xffffffff) * 4);
                if (uVar35 != 0xffffffff) {
                  do {
                    puVar33 = (uint *)((longlong)(int)uVar35 * 0x20 + local_e8.Elements._0_8_);
                    if (((local_4a8.D == puVar33[3] && local_4a8.C == puVar33[2]) &&
                        local_4a8.B == puVar33[1]) && local_4a8.A == *puVar33) {
                      bVar13 = Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<3601461572414734894>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowGraph.cpp"
                                          ,0x22e,"!ConnectionGuidMap.Contains(ArGuid)");
                      if (bVar13) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      break;
                    }
                    uVar35 = puVar33[6];
                  } while (uVar35 != 0xffffffff);
                }
              }
              local_2b0 = &local_4a8;
              local_2a8 = &local_330;
              local_330 = pFVar25;
              TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FGuid_const_&,FDataflowConnection_*_&&>_>
                        (&local_e8,
                         (TPairInitializer<FGuid_const_&,FDataflowConnection_*_&&> *)local_348,
                         (bool *)&local_2b0);
              iVar18 = local_488;
            }
            else {
LAB_14446171c:
              if (pFVar25 != (FDataflowOutput *)0x0) goto LAB_144461725;
LAB_144461bd5:
              if (3 < (byte)LogChaos._0_1_) {
                ::FName::ToString(&local_438,&local_1b8);
                ::FName::ToString(&local_490,&local_1c8);
                Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
                if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                }
                iVar18 = local_488;
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                  iVar18 = local_488;
                }
              }
            }
            iVar16 = iVar16 + 1;
            iVar17 = local_450;
          } while (iVar16 < (int)local_460);
        }
        iVar43 = 0;
        plVar21 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar21[1] < (uint *)*plVar21 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_44c,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_44c);
          }
        }
        else {
          local_44c = *(uint *)*plVar21;
          *plVar21 = *plVar21 + 4;
        }
        param_2 = local_3f8;
        pbVar45 = local_3f0;
        iVar16 = local_454;
        if (0 < (int)local_44c) {
          do {
            pFVar20 = ::operator<<(param_1,&local_4a8);
            plVar21 = (longlong *)(**(code **)(*(longlong *)pFVar20 + 0x178))(pFVar20,&local_4c0);
            (**(code **)(*plVar21 + 0x178))(plVar21,&local_490);
            if (0x8d < iVar17) {
              puVar4 = *(ulonglong **)&param_1->field_0x8;
              puVar33 = (uint *)*puVar4 + 1;
              if ((uint *)puVar4[1] < puVar33) {
                local_45c = 0;
                if ((param_1->field_0x28 & 1) == 0) {
                  local_45c = (uint)(bVar48 != false);
                }
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_45c,4);
                if (1 < local_45c) {
                  FArchiveState::SetError((FArchiveState *)param_1);
                }
                uVar35 = local_45c;
                if ((param_1->field_0x28 & 1) == 0) goto LAB_144461d63;
              }
              else {
                uVar35 = *(uint *)*puVar4;
                *puVar4 = (ulonglong)puVar33;
              }
              bVar48 = uVar35 != 0;
            }
LAB_144461d63:
            if (0x99 < iVar18) {
              puVar4 = *(ulonglong **)&param_1->field_0x8;
              puVar33 = (uint *)*puVar4 + 1;
              if ((uint *)puVar4[1] < puVar33) {
                local_458 = 0;
                if ((param_1->field_0x28 & 1) == 0) {
                  local_458 = (uint)(bVar12 != false);
                }
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_458,4);
                if (1 < local_458) {
                  FArchiveState::SetError((FArchiveState *)param_1);
                }
                uVar35 = local_458;
                if ((param_1->field_0x28 & 1) == 0) goto LAB_144461dd0;
              }
              else {
                uVar35 = *(uint *)*puVar4;
                *puVar4 = (ulonglong)puVar33;
              }
              bVar12 = uVar35 != 0;
            }
LAB_144461dd0:
            if ((local_480.Object == (FDataflowNode *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_03 = FDataflowNode::FindInput(local_480.Object,local_490);
            if (this_03 == (FDataflowInput *)0x0) {
              if ((local_480.Object == (FDataflowNode *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              this_03 = (FDataflowInput *)
                        (**(code **)((local_480.Object)->_padding_ + 0x98))
                                  (local_480.Object,&local_490);
              if ((byte)LogChaos._0_1_ < 4) goto LAB_144461f3c;
              if (this_03 == (FDataflowInput *)0x0) goto LAB_1444623f5;
              ::FName::ToString(&local_438,&local_188);
              local_338 = (FName)this_03->_padding_;
              ::FName::ToString(&local_338,&local_198);
              ::FName::ToString(&local_490,&local_1a8);
              Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
              if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
              }
              if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data.AllocatorInstance.Data);
              }
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
LAB_144461f45:
              if ((bVar48 != false) &&
                 (pbVar45 = (byte *)((longlong)&this_03->_padding_ + 5),
                 *pbVar45 = *pbVar45 ^ (bVar48 ^ *(byte *)((longlong)&this_03->_padding_ + 5)) & 1,
                 bVar48 != false)) {
                FDataflowConnection::SetTypeInternal((FDataflowConnection *)this_03,local_4c0);
                FVar36 = local_4c0;
                pFVar26 = FAnyTypesRegistry::GetInstance();
                uVar35 = ::GetTypeHash(FVar36.ComparisonIndex.Value);
                if (*(int *)&(pFVar26->TypeInfosByName).field_0x8 !=
                    *(int *)&(pFVar26->TypeInfosByName).field_0x34) {
                  puVar5 = *(undefined1 **)&(pFVar26->TypeInfosByName).field_0x40;
                  puVar34 = &(pFVar26->TypeInfosByName).field_0x38;
                  if (puVar5 != (undefined1 *)0x0) {
                    puVar34 = puVar5;
                  }
                  iVar16 = *(int *)(puVar34 +
                                   (ulonglong)
                                   (*(int *)&(pFVar26->TypeInfosByName).field_0x48 - 1U &
                                   FVar36.Number + uVar35) * 4);
                  if (iVar16 != -1) {
                    do {
                      if (*(FName *)((longlong)iVar16 * 0x20 +
                                    *(longlong *)&pFVar26->TypeInfosByName) == FVar36)
                      goto LAB_144461fdb;
                      iVar16 = *(int *)((longlong)iVar16 * 0x20 + 0x18 +
                                       *(longlong *)&pFVar26->TypeInfosByName);
                    } while (iVar16 != -1);
                  }
                }
                iVar16 = -1;
LAB_144461fdb:
                bVar14 = 0;
                if (iVar16 == -1) {
                  bVar14 = 2;
                }
                *(byte *)((longlong)&this_03->_padding_ + 5) =
                     *(byte *)((longlong)&this_03->_padding_ + 5) & 0xfd | bVar14;
              }
              local_390 = local_4c0;
              local_408 = this_03;
              if (local_430 < 0x95) {
                if ((FName)this_03->_padding_ == local_4c0) {
LAB_14446208f:
                  bVar13 = false;
                }
                else {
                  local_340 = (FName)this_03->_padding_;
                  pFVar23 = ::FName::ToString(&local_340,&local_168);
                  bVar11 = true;
                  bVar10 = true;
                  pFVar24 = ::FName::ToString(&local_390,&local_178);
                  iVar17 = (pFVar24->Data).ArrayNum;
                  iVar16 = iVar17 + -1;
                  if (iVar17 == 0) {
                    iVar16 = 0;
                    pwVar32 = L"";
                  }
                  else {
                    pwVar32 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                  }
                  bVar13 = ::FString::StartsWith(pFVar23,pwVar32,iVar16,IgnoreCase);
                  if (!bVar13) goto LAB_14446208f;
                  bVar13 = true;
                }
                if ((bVar10) &&
                   (bVar10 = false,
                   local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_178.Data.AllocatorInstance.Data);
                }
                if ((bVar11) &&
                   (bVar11 = false,
                   local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_168.Data.AllocatorInstance.Data);
                }
                this_01 = local_408;
                if (!bVar13) goto LAB_144462243;
                local_388 = local_390;
                pFVar23 = ::FName::ToString((FName *)&local_408->_padding_,&local_148);
                pFVar24 = ::FName::ToString(&local_388,&local_158);
                iVar17 = (pFVar24->Data).ArrayNum;
                iVar16 = iVar17 + -1;
                if (iVar17 == 0) {
                  iVar16 = 0;
                  pwVar32 = L"";
                }
                else {
                  pwVar32 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                }
                bVar13 = ::FString::StartsWith(pFVar23,pwVar32,iVar16,IgnoreCase);
                if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
                if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_148.Data.AllocatorInstance.Data);
                }
                if ((!bVar13) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Type.ToString().StartsWith(InType.ToString())",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                                        ,0x105,L""), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FDataflowConnection::SetTypeInternal((FDataflowConnection *)this_01,local_388);
                pbVar45 = (byte *)((longlong)&this_01->_padding_ + 5);
                *pbVar45 = *pbVar45 | 2;
                if (((local_4b8.Data <= (FScriptContainerElement *)&local_408) &&
                    ((FScriptContainerElement *)&local_408 <
                     local_4b8.Data + (longlong)local_4b0._4_4_ * 8)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar16 = (int)local_4b0;
                if ((int)local_4b0 == local_4b0._4_4_) {
                  iVar16 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_4b8,(int *)((longlong)&local_4b0 + 4));
                }
                local_4b0 = CONCAT44(local_4b0._4_4_,iVar16 + 1);
                *(FDataflowInput **)(local_4b8.Data + (longlong)iVar16 * 8) = local_408;
              }
              else {
LAB_144462243:
                if ((FName)this_03->_padding_ != local_4c0) {
                  ::FName::ToString(&local_4c0,&local_360);
                  ::FString::RemoveSpacesInline(&local_360);
                  FVar38.Data = (FScriptContainerElement *)L"";
                  if (local_360.Data.ArrayNum != 0) {
                    FVar38.Data = local_360.Data.AllocatorInstance.Data;
                  }
                  bVar13 = ::FName::Equals((FName)this_03->_padding_,(wchar_t *)FVar38.Data);
                  if (((!bVar13) && (bVar48 == false)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Input->GetType() == *NoSpaceArType || bIsAnyType",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowGraph.cpp"
                                          ,0x260,L""), bVar13)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_360.Data.AllocatorInstance.Data);
                  }
                }
              }
              pbVar45 = (byte *)((longlong)&this_03->_padding_ + 5);
              *pbVar45 = *pbVar45 ^ (bVar12 << 3 ^ *(byte *)((longlong)&this_03->_padding_ + 5)) & 8
              ;
              this_03->_padding_ = local_4a8._0_8_;
              this_03->_padding_ = local_4a8._8_8_;
              uVar22 = CityHash64((char *)&local_4a8,0x10);
              if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
                FVar41 = (ForElementType<FSetElementId>)&local_e8.Hash;
                if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar41 = local_e8.Hash.SecondaryData;
                }
                uVar35 = *(uint *)((longlong)FVar41 +
                                  ((ulonglong)(local_e8.HashSize - 1) & uVar22 & 0xffffffff) * 4);
                if (uVar35 != 0xffffffff) {
                  do {
                    puVar33 = (uint *)((longlong)(int)uVar35 * 0x20 + local_e8.Elements._0_8_);
                    if (((local_4a8.D == puVar33[3] && local_4a8.C == puVar33[2]) &&
                        local_4a8.B == puVar33[1]) && local_4a8.A == *puVar33) {
                      bVar13 = Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<3601461572414734949>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowGraph.cpp"
                                          ,0x265,"!ConnectionGuidMap.Contains(ArGuid)");
                      if (bVar13) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      break;
                    }
                    uVar35 = puVar33[6];
                  } while (uVar35 != 0xffffffff);
                }
              }
              local_2a0 = &local_4a8;
              local_298 = &local_300;
              local_300 = this_03;
              TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FGuid_const_&,FDataflowConnection_*_&&>_>
                        (&local_e8,
                         (TPairInitializer<FGuid_const_&,FDataflowConnection_*_&&> *)(local_348 + 4)
                         ,(bool *)&local_2a0);
              iVar18 = local_488;
            }
            else {
LAB_144461f3c:
              if (this_03 != (FDataflowInput *)0x0) goto LAB_144461f45;
LAB_1444623f5:
              if (3 < (byte)LogChaos._0_1_) {
                ::FName::ToString(&local_438,&local_128);
                ::FName::ToString(&local_490,&local_138);
                Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
                if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_138.Data.AllocatorInstance.Data);
                }
                iVar18 = local_488;
                if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.Data.AllocatorInstance.Data);
                  iVar18 = local_488;
                }
              }
            }
            iVar43 = iVar43 + 1;
            param_2 = local_3f8;
            pbVar45 = local_3f0;
            iVar16 = local_454;
            iVar17 = local_450;
          } while (iVar43 < (int)local_44c);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_480.SharedReferenceCount.ReferenceController);
    this = local_2f8;
    iVar17 = local_450;
  }
  local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d0.ArrayNum = 0;
  local_3d0.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<UE::Dataflow::FLink,TSizedDefaultAllocator<32>_>
            (param_1,&local_3d0);
  iVar16 = local_3d0.ArrayNum;
  uVar30 = (ulonglong)local_3d0.ArrayNum;
  pFVar40 = (FGuid *)(local_3d0.AllocatorInstance.Data + 0x30);
  pFVar46 = (FGuid *)(local_3d0.AllocatorInstance.Data + uVar30 * 0x40);
  pFVar37 = local_3d0.AllocatorInstance.Data + 0x10;
  do {
    if ((int)uVar30 != iVar16) {
      local_498 = 0;
      `TCheckedPointerIterator<UE::Dataflow::FLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_498);
    }
    pFVar2 = pFVar40 + -3;
    if (pFVar2 == pFVar46) {
      iVar16 = (int)local_4b0;
      uVar30 = (ulonglong)(int)local_4b0;
      pFVar37 = local_4b8.Data + uVar30 * 8;
      FVar38.Data = local_4b8.Data;
      while( true ) {
        if ((int)uVar30 != iVar16) {
          local_497[0] = 0;
          `TCheckedPointerIterator<FDataflowConnection_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_497);
        }
        if (FVar38.Data == pFVar37) break;
        pFVar25 = *(FDataflowOutput **)FVar38.Data;
        if ((pFVar25->_padding_ == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Property",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                                ,0x10c,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar21 = (longlong *)pFVar25->_padding_;
        if (plVar21 == (longlong *)0x0) {
          local_3d8.ComparisonIndex.Value = 0;
          local_3d8.Number = 0;
          FVar36.ComparisonIndex.Value = 0;
          FVar36.Number = 0;
        }
        else {
          local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3b0.Data.ArrayNum = 0;
          local_3b0.Data.ArrayMax = 0;
          (**(code **)(*plVar21 + 0x68))(plVar21,&local_2e0,&local_3b0,0);
          ::FString::RemoveSpacesInline(&local_3b0);
          ::FString::ConcatFF(&local_2f0,&local_2e0,&local_3b0);
          iVar17 = local_2f0.Data.ArrayNum + -1;
          if (local_2f0.Data.ArrayNum == 0) {
            iVar17 = 0;
          }
          pFVar29 = ::FName::FName(&local_280,iVar17,
                                   (wchar_t *)local_2f0.Data.AllocatorInstance.Data,FNAME_Add);
          FVar36 = *pFVar29;
          local_3d8 = FVar36;
          if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          }
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
        }
        (**(code **)pFVar25->_padding_)(pFVar25,FVar36);
        uVar30 = local_4b0 & 0xffffffff;
        FVar38.Data = FVar38.Data + 8;
      }
      if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d0.AllocatorInstance.Data);
      }
      if (local_4b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b8.Data);
      }
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,FDataflowConnection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDataflowConnection_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    uVar22 = CityHash64((char *)pFVar2,0x10);
    iVar17 = TSet<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FDataflowNode,1>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FGuid>(&local_98,(uint)uVar22,pFVar2);
    if (iVar17 != -1) {
      uVar22 = CityHash64((char *)(pFVar40 + -1),0x10);
      iVar17 = TSet<TTuple<FGuid,TSharedPtr<FDataflowNode,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FDataflowNode,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FGuid>(&local_98,(uint)uVar22,pFVar40 + -1);
      if (iVar17 != -1) {
        uVar22 = CityHash64((char *)pFVar37,0x10);
        iVar17 = TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGuid>(&local_e8,(uint)uVar22,pFVar40 + -2);
        if (iVar17 != -1) {
          uVar22 = CityHash64((char *)pFVar40,0x10);
          iVar17 = TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FGuid>(&local_e8,(uint)uVar22,pFVar40);
          if (iVar17 != -1) {
            uVar22 = CityHash64((char *)pFVar40,0x10);
            iVar17 = TSet<TTuple<FGuid,FDataflowConnection_*>,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FGuid>(&local_e8,(uint)uVar22,pFVar40);
            if (iVar17 == -1) {
              lVar39 = 0;
LAB_1444624e9:
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L"");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              lVar39 = (longlong)iVar17 * 0x20 + local_e8.Elements._0_8_;
              if (lVar39 == 0) goto LAB_1444624e9;
            }
            if ((((*(longlong *)(lVar39 + 0x10) != 0) &&
                 (ppFVar28 = TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                             ::FindChecked((TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                                            *)&local_e8,pFVar40), (*ppFVar28)->Direction == OUTPUT))
                && (ppFVar28 = TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                               ::FindChecked((TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                                              *)&local_e8,pFVar40 + -2),
                   *ppFVar28 != (FDataflowConnection *)0x0)) &&
               (ppFVar28 = TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                           ::FindChecked((TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                                          *)&local_e8,pFVar40 + -2), (*ppFVar28)->Direction == INPUT
               )) {
              ppFVar28 = TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                         ::FindChecked((TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                                        *)&local_e8,pFVar40);
              pFVar25 = (FDataflowOutput *)*ppFVar28;
              ppFVar28 = TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                         ::FindChecked((TMapBase<FGuid,FDataflowConnection_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDataflowConnection_*,0>_>
                                        *)&local_e8,pFVar40 + -2);
              if (((FDataflowInput *)*ppFVar28)->_padding_ == pFVar25->_padding_) {
                Connect(param_2,pFVar25,(FDataflowInput *)*ppFVar28);
              }
            }
          }
        }
      }
    }
    uVar30 = local_3d0._8_8_ & 0xffffffff;
    pFVar40 = pFVar40 + 4;
    pFVar37 = pFVar37 + 0x40;
  } while( true );
}

// SerializeForSaving @ 144462770

void __cdecl
UE::Dataflow::FGraph::SerializeForSaving
          (FArchive *param_1,FGraph *param_2,
          TArray<TSharedPtr<FDataflowNode,1>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Dataflow::FLink,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  FArchive *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  undefined1 local_108;
  undefined1 local_107 [3];
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong64 local_d8;
  FGuid local_d0;
  uint local_c0;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_a8;
  byte *local_98;
  FScriptContainerElement *local_90;
  TArray<FDataflowOutput_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<FDataflowInput_*,TSizedDefaultAllocator<32>_> local_78;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  TReferenceControllerBase<1> *local_50;
  FScriptContainerElement *local_48;
  undefined1 local_40 [8];
  
  local_104 = param_3->ArrayNum;
  plVar12 = *(longlong **)&param_1->field_0x8;
  local_d0.A = 0;
  local_d0.B = 0;
  local_d0.C = 0;
  local_d0.D = 0;
  local_e8 = 0;
  local_e0 = 0;
  if ((uint *)plVar12[1] < (uint *)*plVar12 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_104,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_104);
    }
  }
  else {
    local_104 = *(uint *)*plVar12;
    *plVar12 = *plVar12 + 4;
  }
  local_c0 = param_3->ArrayNum;
  uVar8 = (ulonglong)(int)local_c0;
  pFVar16 = (param_3->AllocatorInstance).Data;
  local_48 = pFVar16 + uVar8 * 0x10;
  while( true ) {
    pFVar6 = local_48;
    local_90 = pFVar16;
    if (param_3->ArrayNum != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDataflowNode,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar16 == pFVar6) break;
    local_50 = *(TReferenceControllerBase<1> **)(pFVar16 + 8);
    plVar12 = *(longlong **)pFVar16;
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = plVar12;
    if (plVar12 == (longlong *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_d0._0_8_ = *(undefined8 *)((longlong)plVar12 + 0x7c);
    local_d0._8_8_ = *(undefined8 *)((longlong)plVar12 + 0x84);
    if (plVar12 == (longlong *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar12 + 8))(plVar12,local_40);
    local_e8 = *puVar9;
    local_e0 = *(undefined8 *)((longlong)plVar12 + 0x8c);
    pFVar10 = ::operator<<(param_1,&local_d0);
    plVar11 = (longlong *)(**(code **)(*(longlong *)pFVar10 + 0x178))(pFVar10,&local_e8);
    (**(code **)(*plVar11 + 0x178))(plVar11,&local_e0);
    local_60 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    plVar11 = *(longlong **)&param_1->field_0x8;
    local_d8 = 0;
    if ((ulong64 *)plVar11[1] < (ulong64 *)*plVar11 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_d8);
      }
    }
    else {
      local_d8 = *(ulong64 *)*plVar11;
      *plVar11 = *plVar11 + 8;
    }
    local_98 = &param_1->field_0x2a;
    local_58 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    (**(code **)(*plVar12 + 0xa8))(plVar12,param_1);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                *)(plVar12 + 0x29),&local_88);
    local_100 = local_88.ArrayNum;
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    plVar11 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_100,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_100);
      }
    }
    else {
      local_100 = *(uint *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowOutput_*,0>_>
                *)(plVar12 + 0x29),&local_b8);
    iVar4 = local_b8.ArrayNum;
    uVar8 = (ulonglong)local_b8.ArrayNum;
    pFVar16 = local_b8.AllocatorInstance.Data + uVar8 * 8;
    FVar14.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar4) {
        local_108 = 0;
        `TCheckedPointerIterator<FDataflowOutput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_108);
      }
      plVar12 = local_68;
      puVar15 = &param_1->field_0x28;
      if (FVar14.Data == pFVar16) break;
      lVar1 = *(longlong *)FVar14.Data;
      local_d0._0_8_ = *(undefined8 *)(lVar1 + 0x18);
      local_d0._8_8_ = *(undefined8 *)(lVar1 + 0x20);
      local_e8 = *(undefined8 *)(lVar1 + 0x40);
      local_e0 = *(undefined8 *)(lVar1 + 0x48);
      pFVar10 = ::operator<<(param_1,&local_d0);
      plVar12 = (longlong *)(**(code **)(*(longlong *)pFVar10 + 0x178))(pFVar10,&local_e8);
      (**(code **)(*plVar12 + 0x178))(plVar12,&local_e0);
      puVar2 = *(ulonglong **)&param_1->field_0x8;
      if (puVar2[1] < *puVar2 + 4) {
        local_fc = 0;
        if ((*puVar15 & 1) == 0) {
          local_fc = (uint)(*(byte *)(lVar1 + 0x35) & 1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_fc,4);
        if (1 < local_fc) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      puVar2 = *(ulonglong **)&param_1->field_0x8;
      if (puVar2[1] < *puVar2 + 4) {
        local_f8 = 0;
        if ((*puVar15 & 1) == 0) {
          local_f8 = (uint)((*(byte *)(lVar1 + 0x35) & 0xc) == 0xc);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f8,4);
        if (1 < local_f8) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        uVar8 = local_b8._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 8;
      }
      else {
        *puVar2 = *puVar2 + 4;
        uVar8 = local_b8._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 8;
      }
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                *)(plVar12 + 0x15),&local_78);
    local_f4 = local_78.ArrayNum;
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    pbVar5 = local_98;
    plVar11 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
      if ((*local_98 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_f4);
      }
    }
    else {
      local_f4 = *(uint *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<UE::Dataflow::FConnectionKey,FDataflowInput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Dataflow::FConnectionKey,FDataflowInput_*,0>_>
                *)(plVar12 + 0x15),&local_a8);
    iVar4 = local_a8.ArrayNum;
    uVar8 = (ulonglong)local_a8.ArrayNum;
    pFVar16 = local_a8.AllocatorInstance.Data + uVar8 * 8;
    FVar14.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar4) {
        local_107[0] = 0;
        `TCheckedPointerIterator<FDataflowInput_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_107);
      }
      if (FVar14.Data == pFVar16) break;
      lVar1 = *(longlong *)FVar14.Data;
      local_d0._0_8_ = *(undefined8 *)(lVar1 + 0x18);
      local_d0._8_8_ = *(undefined8 *)(lVar1 + 0x20);
      local_e8 = *(undefined8 *)(lVar1 + 0x40);
      local_e0 = *(undefined8 *)(lVar1 + 0x48);
      pFVar10 = ::operator<<(param_1,&local_d0);
      plVar12 = (longlong *)(**(code **)(*(longlong *)pFVar10 + 0x178))(pFVar10,&local_e8);
      (**(code **)(*plVar12 + 0x178))(plVar12,&local_e0);
      puVar2 = *(ulonglong **)&param_1->field_0x8;
      if (puVar2[1] < *puVar2 + 4) {
        local_f0 = 0;
        if ((*puVar15 & 1) == 0) {
          local_f0 = (uint)(*(byte *)(lVar1 + 0x35) & 1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_f0,4);
        if (1 < local_f0) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      puVar2 = *(ulonglong **)&param_1->field_0x8;
      if (puVar2[1] < *puVar2 + 4) {
        local_ec = 0;
        if ((*puVar15 & 1) == 0) {
          local_ec = (uint)((*(byte *)(lVar1 + 0x35) & 0xc) == 0xc);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_ec,4);
        if (1 < local_ec) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        uVar8 = local_a8._8_8_ & 0xffffffff;
        FVar14.Data = FVar14.Data + 8;
      }
      else {
        *puVar2 = *puVar2 + 4;
        FVar14.Data = FVar14.Data + 8;
        uVar8 = local_a8._8_8_ & 0xffffffff;
      }
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    lVar1 = local_60;
    if (local_60 != -1) {
      lVar13 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      local_d8 = lVar13 - local_58;
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar1);
      plVar12 = *(longlong **)&param_1->field_0x8;
      if ((ulong64 *)plVar12[1] < (ulong64 *)*plVar12 + 1) {
        if ((*pbVar5 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_d8,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_d8);
        }
      }
      else {
        local_d8 = *(ulong64 *)*plVar12;
        *plVar12 = *plVar12 + 8;
      }
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar13);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    pFVar16 = local_90 + 0x10;
    uVar8 = (ulonglong)local_c0;
  }
  TArrayPrivateFriend::Serialize<UE::Dataflow::FLink,TSizedDefaultAllocator<32>_>(param_1,param_4);
  return;
}

// operator() @ 1504becb0

bool __thiscall
`UE::Dataflow::FGraph::SerializeForLoading'::__l187::<lambda_2>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3601461572414734968>);
  if (bVar4) {
    ::FName::ToString(*(FName **)((longlong)this + 8),&local_18);
    ::FName::ToString(*(FName **)this,&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3601461572414734968>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504bed49;
    }
  }
  bVar4 = false;
LAB_1504bed49:
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

