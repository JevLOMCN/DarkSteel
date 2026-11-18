// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 12

// ~FDocumentModifyDelegates @ 14addee80

void __thiscall
Metasound::Frontend::FDocumentModifyDelegates::~FDocumentModifyDelegates
          (FDocumentModifyDelegates *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  DestructItems<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,int>
            ((TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *)
             (this->GraphDelegates).Pairs.AllocatorInstance.Data,
             (this->GraphDelegates).Pairs.ArrayNum);
  pFVar3 = (this->GraphDelegates).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FInterfaceModifyDelegates::~FInterfaceModifyDelegates(&this->InterfaceDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PageDelegates).OnPageSet.field_0x8,
             *(int *)&(this->PageDelegates).OnPageSet.field_0x10);
  pvVar4 = *(void **)&(this->PageDelegates).OnPageSet.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PageDelegates).OnPageSet);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PageDelegates).OnRemovingPage.field_0x8,
             *(int *)&(this->PageDelegates).OnRemovingPage.field_0x10);
  pvVar4 = *(void **)&(this->PageDelegates).OnRemovingPage.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PageDelegates).OnRemovingPage);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PageDelegates).OnPageAdded.field_0x8,
             *(int *)&(this->PageDelegates).OnPageAdded.field_0x10);
  pvVar4 = *(void **)&(this->PageDelegates).OnPageAdded.field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PageDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPresetStateChanged).field_0x8,
             *(int *)&(this->OnPresetStateChanged).field_0x10);
  pvVar4 = *(void **)&(this->OnPresetStateChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPresetStateChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRenamingDependencyClass).field_0x8,
             *(int *)&(this->OnRenamingDependencyClass).field_0x10);
  pvVar4 = *(void **)&(this->OnRenamingDependencyClass).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRenamingDependencyClass);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemoveSwappingDependency).field_0x8,
             *(int *)&(this->OnRemoveSwappingDependency).field_0x10);
  pvVar4 = *(void **)&(this->OnRemoveSwappingDependency).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveSwappingDependency);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDependencyAdded).field_0x8,*(int *)&(this->OnDependencyAdded).field_0x10);
  pvVar4 = *(void **)&(this->OnDependencyAdded).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDependencyAdded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDocumentMetadataChanged).field_0x8,
             *(int *)&(this->OnDocumentMetadataChanged).field_0x10);
  pvVar4 = *(void **)&(this->OnDocumentMetadataChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDocumentMetadataChanged);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// FDocumentModifyDelegates @ 14ae1b940

FDocumentModifyDelegates * __thiscall
Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
          (FDocumentModifyDelegates *this,FMetasoundFrontendDocument *param_1)

{
  FDocumentModifyDelegates *local_res8;
  code *local_18;
  FDocumentModifyDelegates **local_10;
  
  FDocumentModifyDelegates(this);
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
             ::Call;
  local_res8 = this;
  FMetasoundFrontendGraphClass::IterateGraphPages
            (&param_1->RootGraph,
             (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_18);
  return this;
}

// FDocumentModifyDelegates @ 14ae1b9a0

FDocumentModifyDelegates * __thiscall
Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
          (FDocumentModifyDelegates *this)

{
  *(undefined8 *)&(this->OnDocumentMetadataChanged).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDocumentMetadataChanged = 0;
  *(undefined8 *)&(this->OnDocumentMetadataChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDocumentMetadataChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnDependencyAdded = 0;
  *(undefined8 *)&(this->OnDependencyAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnDependencyAdded).field_0x10 = 0;
  *(undefined8 *)&this->OnRemoveSwappingDependency = 0;
  *(undefined8 *)&(this->OnRemoveSwappingDependency).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveSwappingDependency).field_0x10 = 0;
  *(undefined8 *)&this->OnRenamingDependencyClass = 0;
  *(undefined8 *)&(this->OnRenamingDependencyClass).field_0x8 = 0;
  *(undefined8 *)&(this->OnRenamingDependencyClass).field_0x10 = 0;
  *(undefined8 *)&this->OnPresetStateChanged = 0;
  *(undefined8 *)&(this->OnPresetStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPresetStateChanged).field_0x10 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageAdded = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageAdded.field_0x8 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageAdded.field_0x10 = 0;
  *(undefined8 *)&(this->PageDelegates).OnRemovingPage = 0;
  *(undefined8 *)&(this->PageDelegates).OnRemovingPage.field_0x8 = 0;
  *(undefined8 *)&(this->PageDelegates).OnRemovingPage.field_0x10 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageSet = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageSet.field_0x8 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageSet.field_0x10 = 0;
  *(undefined8 *)&(this->OnDependencyAdded).field_0x18 = 2;
  *(undefined8 *)&(this->OnRemoveSwappingDependency).field_0x18 = 2;
  *(undefined8 *)&(this->OnRenamingDependencyClass).field_0x18 = 2;
  *(undefined8 *)&(this->OnPresetStateChanged).field_0x18 = 2;
  *(undefined8 *)&(this->PageDelegates).OnPageAdded.field_0x18 = 2;
  *(undefined8 *)&(this->PageDelegates).OnRemovingPage.field_0x18 = 2;
  *(undefined8 *)&(this->PageDelegates).OnPageSet.field_0x18 = 2;
  FInterfaceModifyDelegates::FInterfaceModifyDelegates(&this->InterfaceDelegates);
  (this->GraphDelegates).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphDelegates).Pairs.ArrayNum = 0;
  (this->GraphDelegates).Pairs.ArrayMax = 0;
  return this;
}

// AddPageDelegates @ 14ae23460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::Frontend::FDocumentModifyDelegates::AddPageDelegates
          (FDocumentModifyDelegates *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *pTVar4;
  FGuid local_f8;
  undefined1 local_e8 [16];
  int local_d8;
  undefined8 uStack_d0;
  FMRSWRecursiveAccessDetector local_c8;
  TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *pTStack_c0;
  int local_b8;
  undefined8 uStack_b0;
  FNodeModifyDelegates local_a8;
  
  local_e8._0_8_ =
       TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
       ::Find(&this->GraphDelegates,param_1);
  if ((atomic<unsigned___int64>)local_e8._0_8_ == (atomic<unsigned___int64>)0x0) {
    _local_d8 = ___xmm_00000000000000020000000000000000;
    uStack_d0 = _UNK_150631d48;
    local_c8.State = (atomic<unsigned___int64>)0x0;
    pTStack_c0 = (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0;
    _local_b8 = ___xmm_00000000000000020000000000000000;
    uStack_b0 = _UNK_150631d48;
    local_a8.OnNodeAdded._0_8_ = 0;
    local_a8.OnNodeAdded._8_8_ = 0;
    local_a8.OnNodeAdded._16_8_ = ___xmm_00000000000000020000000000000000;
    local_a8.OnNodeAdded._24_8_ = _UNK_150631d48;
    local_a8.OnNodeConfigurationUpdated._0_8_ = 0;
    local_a8.OnNodeConfigurationUpdated._8_8_ = 0;
    local_a8.OnNodeConfigurationUpdated._16_8_ = ___xmm_00000000000000020000000000000000;
    local_a8.OnNodeConfigurationUpdated._24_8_ = _UNK_150631d48;
    local_a8.OnRemoveSwappingNode._0_8_ = 0;
    local_a8.OnRemoveSwappingNode._8_8_ = 0;
    local_a8.OnRemoveSwappingNode._16_8_ = ___xmm_00000000000000020000000000000000;
    local_a8.OnRemoveSwappingNode._24_8_ = _UNK_150631d48;
    local_a8.OnNodeInputLiteralSet._0_8_ = 0;
    local_a8.OnNodeInputLiteralSet._8_8_ = 0;
    local_a8.OnNodeInputLiteralSet._16_8_ = ___xmm_00000000000000020000000000000000;
    local_a8.OnNodeInputLiteralSet._24_8_ = _UNK_150631d48;
    local_a8.OnRemovingNodeInputLiteral._0_8_ = 0;
    local_a8.OnRemovingNodeInputLiteral._8_8_ = 0;
    local_a8.OnRemovingNodeInputLiteral._16_8_ = ___xmm_00000000000000020000000000000000;
    local_a8.OnRemovingNodeInputLiteral._24_8_ = _UNK_150631d48;
    local_e8._8_8_ = local_e8._0_8_;
    pTVar4 = TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
             ::AllocateMemoryForEmplace<FGuid_const_&>(&this->GraphDelegates,param_1);
    uVar1 = param_1->B;
    uVar2 = param_1->C;
    uVar3 = param_1->D;
    *(uint *)&pTVar4->field_0x0 = param_1->A;
    *(uint *)&pTVar4->field_0x4 = uVar1;
    *(uint *)&pTVar4->field_0x8 = uVar2;
    *(uint *)&pTVar4->field_0xc = uVar3;
    FGraphModifyDelegates::FGraphModifyDelegates
              ((FGraphModifyDelegates *)&pTVar4->field_0x10,(FGraphModifyDelegates *)local_e8);
    FNodeModifyDelegates::~FNodeModifyDelegates(&local_a8);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>(pTStack_c0,local_b8);
    if (pTStack_c0 != (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
      FMemory::Free(pTStack_c0);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)local_e8._8_8_,local_d8);
    if ((atomic<unsigned___int64>)local_e8._8_8_ != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_e8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e8);
    local_f8.A = param_1->A;
    local_f8.B = param_1->B;
    local_f8.C = param_1->C;
    local_f8.D = param_1->D;
    TMulticastDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&(this->PageDelegates).OnPageAdded,(FDocumentMutatePageArgs *)&local_f8);
  }
  return;
}

// FindEdgeDelegatesChecked @ 14ae32a80

FEdgeModifyDelegates * __thiscall
Metasound::Frontend::FDocumentModifyDelegates::FindEdgeDelegatesChecked
          (FDocumentModifyDelegates *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGraphModifyDelegates *pFVar3;
  FEdgeModifyDelegates *pFVar4;
  
  pFVar3 = TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->GraphDelegates,param_1);
  if ((pFVar3 == (FGraphModifyDelegates *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FEdgeModifyDelegates *)(*pcVar1)();
    return pFVar4;
  }
  return &pFVar3->EdgeDelegates;
}

// FindGraphDelegatesChecked @ 14ae33230

FGraphModifyDelegates * __thiscall
Metasound::Frontend::FDocumentModifyDelegates::FindGraphDelegatesChecked
          (FDocumentModifyDelegates *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGraphModifyDelegates *pFVar3;
  
  pFVar3 = TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->GraphDelegates,param_1);
  if ((pFVar3 == (FGraphModifyDelegates *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGraphModifyDelegates *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// FindNodeDelegatesChecked @ 14ae33dc0

FNodeModifyDelegates * __thiscall
Metasound::Frontend::FDocumentModifyDelegates::FindNodeDelegatesChecked
          (FDocumentModifyDelegates *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGraphModifyDelegates *pFVar3;
  FNodeModifyDelegates *pFVar4;
  
  pFVar3 = TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->GraphDelegates,param_1);
  if (pFVar3 != (FGraphModifyDelegates *)0x0) {
    return &pFVar3->NodeDelegates;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Value != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                     ,0x141,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FNodeModifyDelegates *)(*pcVar1)();
    return pFVar4;
  }
  return (FNodeModifyDelegates *)&DAT_00000040;
}

// IterateGraphDelegates @ 14ae3fe50

void __thiscall
Metasound::Frontend::FDocumentModifyDelegates::IterateGraphDelegates
          (FDocumentModifyDelegates *this,
          TFunctionRef<void___cdecl(Metasound::Frontend::FGraphModifyDelegates_&)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->GraphDelegates).Pairs.ArrayNum;
  pFVar2 = (this->GraphDelegates).Pairs.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xf0;
  while( true ) {
    if ((this->GraphDelegates).Pairs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2 + 0x10);
    pFVar2 = pFVar2 + 0xf0;
  }
  return;
}

// IterateGraphEdgeDelegates @ 14ae3fed0

void __thiscall
Metasound::Frontend::FDocumentModifyDelegates::IterateGraphEdgeDelegates
          (FDocumentModifyDelegates *this,
          TFunctionRef<void___cdecl(Metasound::Frontend::FEdgeModifyDelegates_&)> *param_1)

{
  TFunctionRef<void___cdecl(Metasound::Frontend::FEdgeModifyDelegates_&)> *local_res10 [3];
  code *local_18;
  TFunctionRef<void___cdecl(Metasound::Frontend::FEdgeModifyDelegates_&)> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FDocumentModifyDelegates::IterateGraphEdgeDelegates'::__l2::<lambda_1>,void,Metasound::Frontend::FGraphModifyDelegates_&>
             ::Call;
  local_res10[0] = param_1;
  IterateGraphDelegates
            (this,(TFunctionRef<void___cdecl(Metasound::Frontend::FGraphModifyDelegates_&)> *)
                  &local_18);
  return;
}

// IterateGraphNodeDelegates @ 14ae3ff10

void __thiscall
Metasound::Frontend::FDocumentModifyDelegates::IterateGraphNodeDelegates
          (FDocumentModifyDelegates *this,
          TFunctionRef<void___cdecl(Metasound::Frontend::FNodeModifyDelegates_&)> *param_1)

{
  TFunctionRef<void___cdecl(Metasound::Frontend::FNodeModifyDelegates_&)> *local_res10 [3];
  code *local_18;
  TFunctionRef<void___cdecl(Metasound::Frontend::FNodeModifyDelegates_&)> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FDocumentModifyDelegates::IterateGraphNodeDelegates'::__l2::<lambda_1>,void,Metasound::Frontend::FGraphModifyDelegates_&>
             ::Call;
  local_res10[0] = param_1;
  IterateGraphDelegates
            (this,(TFunctionRef<void___cdecl(Metasound::Frontend::FGraphModifyDelegates_&)> *)
                  &local_18);
  return;
}

// RemovePageDelegates @ 14ae43be0

void __thiscall
Metasound::Frontend::FDocumentModifyDelegates::RemovePageDelegates
          (FDocumentModifyDelegates *this,FGuid *param_1,bool param_2)

{
  int *piVar1;
  TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
  *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FGraphModifyDelegates *pFVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  FKeyForward local_res8;
  FGuid local_18;
  
  this_00 = &this->GraphDelegates;
  pFVar6 = TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(this_00,param_1);
  if (pFVar6 != (FGraphModifyDelegates *)0x0) {
    if (param_2) {
      local_18.A = param_1->A;
      local_18.B = param_1->B;
      local_18.C = param_1->C;
      local_18.D = param_1->D;
      TMulticastDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&(this->PageDelegates).OnRemovingPage,(FDocumentMutatePageArgs *)&local_18);
    }
    uVar4 = Algo::
            BinarySearchBy<TArray<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                      (&this_00->Pairs,param_1,local_res8,(TLess<FGuid_const_&>)local_res8);
    if (uVar4 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar4 < (this->GraphDelegates).Pairs.ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      _Dst = (this_00->Pairs).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xf0;
      FGraphModifyDelegates::~FGraphModifyDelegates((FGraphModifyDelegates *)(_Dst + 0x10));
      iVar7 = (this->GraphDelegates).Pairs.ArrayNum + ~uVar4;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + 0xf0,(longlong)iVar7 * 0xf0);
      }
      piVar1 = &(this->GraphDelegates).Pairs.ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,8,(ForAnyElementType *)this_00,(this->GraphDelegates).Pairs.ArrayNum,
                 &(this->GraphDelegates).Pairs.ArrayMax);
    }
  }
  return;
}

// FDocumentModifyDelegates @ 14ae57ba0

FDocumentModifyDelegates * __thiscall
Metasound::Frontend::FDocumentModifyDelegates::FDocumentModifyDelegates
          (FDocumentModifyDelegates *this,FDocumentModifyDelegates *param_1)

{
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegate<void___cdecl(int,int),FDefaultDelegateUserPolicy> *this_01;
  TMulticastDelegate<void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
  *this_02;
  TMulticastDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
  *pTVar1;
  TMulticastDelegate<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  int *piVar3;
  TMulticastDelegate<void___cdecl(Metasound::Frontend::FDocumentPresetStateChangedArgs_const_&),FDefaultDelegateUserPolicy>
  *this_03;
  FPageModifyDelegates *this_04;
  TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
  *pTVar4;
  int iVar5;
  TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *pTVar6;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_05;
  
  *(undefined8 *)&(this->OnDocumentMetadataChanged).field_0x18 = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this_05 = &this->OnDocumentMetadataChanged;
  *(undefined8 *)&this_05->field_0x0 = 0;
  *(undefined8 *)&(this->OnDocumentMetadataChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDocumentMetadataChanged).field_0x10 = 0;
  if (&param_1->OnDocumentMetadataChanged != this_05) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_05,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnDocumentMetadataChanged);
  }
  this_00 = &this->OnDependencyAdded;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->OnDependencyAdded).field_0x8 = 0;
  *(undefined8 *)&(this->OnDependencyAdded).field_0x10 = 0;
  *(undefined8 *)&(this->OnDependencyAdded).field_0x18 = 2;
  if (&param_1->OnDependencyAdded != this_00) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnDependencyAdded);
  }
  this_01 = &this->OnRemoveSwappingDependency;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->OnRemoveSwappingDependency).field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveSwappingDependency).field_0x10 = 0;
  *(undefined8 *)&(this->OnRemoveSwappingDependency).field_0x18 = 2;
  if (&param_1->OnRemoveSwappingDependency != this_01) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int,int),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_01,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnRemoveSwappingDependency);
  }
  this_02 = &this->OnRenamingDependencyClass;
  *(undefined8 *)&this_02->field_0x0 = 0;
  *(undefined8 *)&(this->OnRenamingDependencyClass).field_0x8 = 0;
  *(undefined8 *)&(this->OnRenamingDependencyClass).field_0x10 = 0;
  *(undefined8 *)&(this->OnRenamingDependencyClass).field_0x18 = 2;
  if (&param_1->OnRenamingDependencyClass != this_02) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_02,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->OnRenamingDependencyClass);
  }
  this_03 = &this->OnPresetStateChanged;
  *(undefined8 *)&this_03->field_0x0 = 0;
  *(undefined8 *)&(this->OnPresetStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPresetStateChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnPresetStateChanged).field_0x18 = 2;
  if (&param_1->OnPresetStateChanged != this_03) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(Metasound::Frontend::FDocumentPresetStateChangedArgs_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_03,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->OnPresetStateChanged)
    ;
  }
  this_04 = &this->PageDelegates;
  *(undefined8 *)&this_04->OnPageAdded = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageAdded.field_0x8 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageAdded.field_0x10 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageAdded.field_0x18 = 2;
  if (&param_1->PageDelegates != this_04) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_04,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->PageDelegates);
  }
  pTVar1 = &(this->PageDelegates).OnRemovingPage;
  pTVar2 = &(param_1->PageDelegates).OnRemovingPage;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->PageDelegates).OnRemovingPage.field_0x8 = 0;
  *(undefined8 *)&(this->PageDelegates).OnRemovingPage.field_0x10 = 0;
  *(undefined8 *)&(this->PageDelegates).OnRemovingPage.field_0x18 = 2;
  if (pTVar2 != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar2);
  }
  pTVar1 = &(this->PageDelegates).OnPageSet;
  pTVar2 = &(param_1->PageDelegates).OnPageSet;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageSet.field_0x8 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageSet.field_0x10 = 0;
  *(undefined8 *)&(this->PageDelegates).OnPageSet.field_0x18 = 2;
  if (pTVar2 != pTVar1) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar1,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)pTVar2);
  }
  FInterfaceModifyDelegates::FInterfaceModifyDelegates
            (&this->InterfaceDelegates,&param_1->InterfaceDelegates);
  pTVar4 = &this->GraphDelegates;
  (pTVar4->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->GraphDelegates).Pairs.ArrayMax;
  iVar5 = (param_1->GraphDelegates).Pairs.ArrayNum;
  pTVar6 = (TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates> *)
           (param_1->GraphDelegates).Pairs.AllocatorInstance.Data;
  (this->GraphDelegates).Pairs.ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,8,iVar5,0,(ForAnyElementType *)pTVar4,iVar5,piVar3);
    ConstructItems<TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,TTuple<FGuid,Metasound::Frontend::FGraphModifyDelegates>,int>
              ((pTVar4->Pairs).AllocatorInstance.Data,pTVar6,iVar5);
  }
  return this;
}

