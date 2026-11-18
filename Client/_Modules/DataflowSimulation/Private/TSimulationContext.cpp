// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 38

// TSimulationContext<UE::Dataflow::FContextSingle> @ 1462f1e30

TSimulationContext<UE::Dataflow::FContextSingle> * __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::
TSimulationContext<UE::Dataflow::FContextSingle>
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,TObjectPtr<UObject> *param_1)

{
  UObject *pUVar1;
  
  memset(this,0,0x360);
  Dataflow::FContext::FContext((FContext *)this);
  this->_padding_ =
       (longlong)
       &TEngineContext<UE::Dataflow::FContextSingle>::
        _vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ =
       (longlong)
       &TEngineContext<UE::Dataflow::FContextSingle>::
        _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  this->_padding_ = (longlong)pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  this->SimulationTime = 0.0;
  this->DeltaTime = 0.0;
  *(undefined8 *)&this->SimulationProxies = 0;
  *(undefined8 *)&(this->SimulationProxies).field_0x8 = 0;
  *(undefined8 *)&(this->SimulationProxies).field_0x20 = 0;
  *(undefined4 *)&(this->SimulationProxies).field_0x28 = 0;
  *(undefined4 *)&(this->SimulationProxies).field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationProxies).field_0x34 = 0;
  *(undefined4 *)&(this->SimulationProxies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SimulationProxies).field_0x40 = 0;
  *(undefined4 *)&(this->SimulationProxies).field_0x48 = 0;
  *(undefined8 *)&this->GroupIndices = 0;
  *(undefined8 *)&(this->GroupIndices).field_0x8 = 0;
  *(undefined8 *)&(this->GroupIndices).field_0x20 = 0;
  *(undefined4 *)&(this->GroupIndices).field_0x28 = 0;
  *(undefined4 *)&(this->GroupIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupIndices).field_0x34 = 0;
  *(undefined4 *)&(this->GroupIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GroupIndices).field_0x40 = 0;
  *(undefined4 *)&(this->GroupIndices).field_0x48 = 0;
  (this->IterationIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IterationIndices).ArrayNum = 0;
  (this->IterationIndices).ArrayMax = 0;
  return this;
}

// TSimulationContext<UE::Dataflow::FContextThreaded> @ 1462f1f50

TSimulationContext<UE::Dataflow::FContextThreaded> * __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::
TSimulationContext<UE::Dataflow::FContextThreaded>
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,TObjectPtr<UObject> *param_1)

{
  UObject *pUVar1;
  
  Dataflow::FContext::FContext((FContext *)this);
  this->_padding_ = (longlong)&FContextThreaded::_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ =
       (longlong)&FContextThreaded::_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  Dataflow::FContext::SetThreaded((FContext *)this,true);
  this->_padding_ =
       (longlong)
       &TEngineContext<UE::Dataflow::FContextThreaded>::
        _vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ =
       (longlong)
       &TEngineContext<UE::Dataflow::FContextThreaded>::
        _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  this->_padding_ = (longlong)pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  this->SimulationTime = 0.0;
  this->DeltaTime = 0.0;
  *(undefined8 *)&this->SimulationProxies = 0;
  *(undefined8 *)&(this->SimulationProxies).field_0x8 = 0;
  *(undefined8 *)&(this->SimulationProxies).field_0x20 = 0;
  *(undefined4 *)&(this->SimulationProxies).field_0x28 = 0;
  *(undefined4 *)&(this->SimulationProxies).field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationProxies).field_0x34 = 0;
  *(undefined4 *)&(this->SimulationProxies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SimulationProxies).field_0x40 = 0;
  *(undefined4 *)&(this->SimulationProxies).field_0x48 = 0;
  *(undefined8 *)&this->GroupIndices = 0;
  *(undefined8 *)&(this->GroupIndices).field_0x8 = 0;
  *(undefined8 *)&(this->GroupIndices).field_0x20 = 0;
  *(undefined4 *)&(this->GroupIndices).field_0x28 = 0;
  *(undefined4 *)&(this->GroupIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupIndices).field_0x34 = 0;
  *(undefined4 *)&(this->GroupIndices).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GroupIndices).field_0x40 = 0;
  *(undefined4 *)&(this->GroupIndices).field_0x48 = 0;
  (this->IterationIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IterationIndices).ArrayNum = 0;
  (this->IterationIndices).ArrayMax = 0;
  return this;
}

// ~TSimulationContext<UE::Dataflow::FContextSingle> @ 1462f27d0

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::
~TSimulationContext<UE::Dataflow::FContextSingle>
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  pFVar1 = (this->IterationIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->GroupIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GroupIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroupIndices);
  *(undefined4 *)&(this->SimulationProxies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SimulationProxies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SimulationProxies);
  this->_padding_ =
       (longlong)
       &TEngineContext<UE::Dataflow::FContextSingle>::
        _vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ =
       (longlong)
       &TEngineContext<UE::Dataflow::FContextSingle>::
        _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  Dataflow::FContext::~FContext((FContext *)this);
  return;
}

// ~TSimulationContext<UE::Dataflow::FContextThreaded> @ 1462f2880

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::
~TSimulationContext<UE::Dataflow::FContextThreaded>
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  pFVar1 = (this->IterationIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->GroupIndices).field_0x48 = 0;
  pvVar2 = *(void **)&(this->GroupIndices).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroupIndices);
  *(undefined4 *)&(this->SimulationProxies).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SimulationProxies).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SimulationProxies);
  this->_padding_ =
       (longlong)
       &TEngineContext<UE::Dataflow::FContextThreaded>::
        _vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ =
       (longlong)
       &TEngineContext<UE::Dataflow::FContextThreaded>::
        _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  Dataflow::FContext::~FContext((FContext *)this);
  return;
}

// AddSimulationProxy @ 1462f3f40

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::AddSimulationProxy
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,FString *param_1,
          FDataflowSimulationProxy *param_2)

{
  int iVar1;
  uint uVar2;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *this_00;
  int iVar3;
  wchar_t *pwVar4;
  FDataflowSimulationProxy *local_res8;
  FDataflowSimulationProxy *local_res18 [2];
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_res18[0] = param_2;
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  this_00 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                        *)&this->SimulationProxies,uVar2,param_1);
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  ::Emplace<FDataflowSimulationProxy_*_const_&>(this_00,&local_res8,(bool *)local_res18);
  return;
}

// AddSimulationProxy @ 1462f3fb0

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::AddSimulationProxy
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,FString *param_1,
          FDataflowSimulationProxy *param_2)

{
  int iVar1;
  uint uVar2;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *this_00;
  int iVar3;
  wchar_t *pwVar4;
  FDataflowSimulationProxy *local_res8;
  FDataflowSimulationProxy *local_res18 [2];
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_res18[0] = param_2;
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  this_00 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                        *)&this->SimulationProxies,uVar2,param_1);
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  ::Emplace<FDataflowSimulationProxy_*_const_&>(this_00,&local_res8,(bool *)local_res18);
  return;
}

// BuildGroupBits @ 1462f4270

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::BuildGroupBits
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  iVar4 = *(int *)&(this->GroupIndices).field_0x8 - *(int *)&(this->GroupIndices).field_0x34;
  param_2->NumBits = iVar4;
  uVar5 = iVar4 + 0x1f;
  uVar8 = uVar5 >> 5;
  if (uVar5 >> 5 != 0) {
    if (param_2->MaxBits + 0x1fU >> 5 < uVar8) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&param_2->AllocatorInstance,0,uVar8,4);
      param_2->MaxBits = uVar8 << 5;
    }
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<unsigned_int>)param_2;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar1;
    }
    memset((void *)FVar7,0,(ulonglong)uVar8 << 2);
    uVar8 = param_2->NumBits >> 0x1f & 0x1f;
    uVar5 = param_2->NumBits + uVar8;
    iVar4 = (uVar5 & 0x1f) - uVar8;
    if (iVar4 != 0) {
      FVar1 = (param_2->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)param_2;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar1;
      }
      puVar6 = (uint *)((longlong)FVar7 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar6 = *puVar6 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
    }
  }
  iVar4 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar9) break;
    puVar6 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
             ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                     *)&this->GroupIndices,(FString *)pFVar10);
    if (puVar6 != (uint *)0x0) {
      uVar5 = *puVar6;
      if ((((int)uVar5 < 0) || (param_2->NumBits <= (int)uVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (param_2->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)param_2;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar1;
      }
      uVar8 = uVar5;
      if ((int)uVar5 < 0) {
        uVar8 = uVar5 + 0x1f;
      }
      puVar6 = (uint *)((longlong)FVar7 + (longlong)((int)uVar8 >> 5) * 4);
      *puVar6 = *puVar6 | 1 << ((byte)uVar5 & 0x1f);
    }
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// BuildGroupBits @ 1462f4400

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::BuildGroupBits
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  iVar4 = *(int *)&(this->GroupIndices).field_0x8 - *(int *)&(this->GroupIndices).field_0x34;
  param_2->NumBits = iVar4;
  uVar5 = iVar4 + 0x1f;
  uVar8 = uVar5 >> 5;
  if (uVar5 >> 5 != 0) {
    if (param_2->MaxBits + 0x1fU >> 5 < uVar8) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&param_2->AllocatorInstance,0,uVar8,4);
      param_2->MaxBits = uVar8 << 5;
    }
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<unsigned_int>)param_2;
    if (FVar1 != (ForElementType<unsigned_int>)0x0) {
      FVar7 = FVar1;
    }
    memset((void *)FVar7,0,(ulonglong)uVar8 << 2);
    uVar8 = param_2->NumBits >> 0x1f & 0x1f;
    uVar5 = param_2->NumBits + uVar8;
    iVar4 = (uVar5 & 0x1f) - uVar8;
    if (iVar4 != 0) {
      FVar1 = (param_2->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)param_2;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar1;
      }
      puVar6 = (uint *)((longlong)FVar7 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar6 = *puVar6 & 0xffffffffU >> (0x20U - (char)iVar4 & 0x1f);
    }
  }
  iVar4 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + (longlong)iVar4 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar9) break;
    puVar6 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
             ::Find((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                     *)&this->GroupIndices,(FString *)pFVar10);
    if (puVar6 != (uint *)0x0) {
      uVar5 = *puVar6;
      if ((((int)uVar5 < 0) || (param_2->NumBits <= (int)uVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (param_2->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<unsigned_int>)param_2;
      if (FVar1 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar1;
      }
      uVar8 = uVar5;
      if ((int)uVar5 < 0) {
        uVar8 = uVar5 + 0x1f;
      }
      puVar6 = (uint *)((longlong)FVar7 + (longlong)((int)uVar8 >> 5) * 4);
      *puVar6 = *puVar6 | 1 << ((byte)uVar5 & 0x1f);
    }
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// GetDeltaTime @ 1462f64b0

float __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::GetDeltaTime
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  return this->DeltaTime;
}

// GetDeltaTime @ 1462f64c0

float __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::GetDeltaTime
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  return this->DeltaTime;
}

// GetIterationIndex @ 1462f66a0

int __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::GetIterationIndex
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (this->IterationIndices).ArrayNum;
  uVar5 = iVar4 - 1;
  uVar3 = 0;
  if ((int)uVar5 < iVar4) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->IterationIndices).AllocatorInstance.Data +
                 (longlong)(this->IterationIndices).ArrayNum * 4 + -4);
}

// GetIterationIndex @ 1462f6720

int __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::GetIterationIndex
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (this->IterationIndices).ArrayNum;
  uVar5 = iVar4 - 1;
  uVar3 = 0;
  if ((int)uVar5 < iVar4) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->IterationIndices).AllocatorInstance.Data +
                 (longlong)(this->IterationIndices).ArrayNum * 4 + -4);
}

// GetSimulationProxies @ 1462f7000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::GetSimulationProxies
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FDataflowSimulationProxy_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *pTVar9;
  ForElementType<unsigned_int> FVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_138 [32];
  FDataflowSimulationProxy **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [8];
  FDataflowSimulationProxy *local_e0;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_70.NumBits =
       *(int *)&(this->GroupIndices).field_0x8 - *(int *)&(this->GroupIndices).field_0x34;
  iVar12 = 0;
  local_70.MaxBits = 0x80;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar16 = local_70.NumBits + 0x1fU >> 5;
  if (local_70.NumBits + 0x1fU >> 5 != 0) {
    if (4 < uVar16) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_70.AllocatorInstance,0,uVar16,4);
      local_70.MaxBits = uVar16 << 5;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_70;
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_70.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar10,0,(ulonglong)uVar16 << 2);
    uVar16 = local_70.NumBits & 0x8000001f;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
    }
    if (uVar16 != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar15 = (uint *)((longlong)FVar10 +
                        (longlong)
                        ((int)(local_70.NumBits + (local_70.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar15 = *puVar15 & 0xffffffffU >> (0x20U - (char)uVar16 & 0x1f);
    }
  }
  BuildGroupBits(this,param_2,&local_70);
  pTVar9 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                   *)&this->SimulationProxies,param_1);
  if (pTVar9 != (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    iVar3 = *(int *)&(pTVar9->Elements).field_0x28;
    puVar1 = &(pTVar9->Elements).field_0x10;
    uStack_cc = 1;
    local_b8 = 0;
    iStack_bc = local_b8;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(pTVar9->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar16 = *puVar15;
      iVar12 = 0;
      local_b8 = 0;
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar12;
        local_b8 = local_b8 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_bc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1462f719e;
        uVar16 = puVar15[lVar11 + 1];
      }
      uStack_cc = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_cc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_a8 = (int)lVar11;
      iStack_bc = local_b8 + -1 + local_a8;
      if (iVar3 < iStack_bc) {
        iStack_bc = iVar3;
      }
    }
LAB_1462f719e:
    uVar16 = *(uint *)&(pTVar9->Elements).field_0x28;
    uVar17 = uVar16 & 0xffffffe0;
    iStack_b0 = *(int *)&(pTVar9->Elements).field_0x8 - *(int *)&(pTVar9->Elements).field_0x34;
    uStack_c0 = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_cc,iVar12);
    TStack_98.CurrentBitIndex = iStack_bc;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_98._28_4_ = iStack_bc;
    TStack_98.BaseBitIndex = local_b8;
    uStack_78 = CONCAT44(uStack_ac,iStack_b0);
    local_d8 = pTVar9;
    iStack_d0 = iVar12;
    local_c8 = puVar1;
    iStack_b4 = iStack_bc;
    local_a0 = pTVar9;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)&(pTVar9->Elements).field_0x28;
    if (uVar16 != uVar4) {
      puVar14 = *(undefined1 **)&(pTVar9->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1462f72a0;
        uVar16 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_a4 = (int)lVar11;
      uVar16 = local_a4 + -1 + uVar17;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
    }
LAB_1462f72a0:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
          (int)uStack_78) {
        local_e8[0] = 0;
        `TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (((TStack_98.CurrentBitIndex == uVar16) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar9)
         ) break;
      local_e0 = *(FDataflowSimulationProxy **)
                  (*(longlong *)&pTVar7->Elements + (longlong)TStack_98.CurrentBitIndex * 0x10);
      if ((local_e0 != (FDataflowSimulationProxy *)0x0) &&
         (bVar8 = FDataflowSimulationProxy::HasGroupBit(local_e0,&local_70), bVar8)) {
        pFVar5 = (param_3->AllocatorInstance).Data;
        if ((pFVar5 <= (FScriptContainerElement *)&local_e0) &&
           ((FScriptContainerElement *)&local_e0 < pFVar5 + (longlong)param_3->ArrayMax * 8)) {
          local_100 = (longlong)param_3->ArrayNum;
          local_f8 = 8;
          local_118 = &local_e0;
          local_110 = pFVar5;
          local_108 = (longlong)param_3->ArrayMax;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar12 = param_3->ArrayNum;
        if (iVar12 == param_3->ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar12 + 1;
        *(FDataflowSimulationProxy **)((param_3->AllocatorInstance).Data + (longlong)iVar12 * 8) =
             local_e0;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetSimulationProxies @ 1462f73f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::GetSimulationProxies
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FDataflowSimulationProxy_*,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *pTVar9;
  ForElementType<unsigned_int> FVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_138 [32];
  FDataflowSimulationProxy **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [8];
  FDataflowSimulationProxy *local_e0;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_70.NumBits =
       *(int *)&(this->GroupIndices).field_0x8 - *(int *)&(this->GroupIndices).field_0x34;
  iVar12 = 0;
  local_70.MaxBits = 0x80;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar16 = local_70.NumBits + 0x1fU >> 5;
  if (local_70.NumBits + 0x1fU >> 5 != 0) {
    if (4 < uVar16) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_70.AllocatorInstance,0,uVar16,4);
      local_70.MaxBits = uVar16 << 5;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_70;
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_70.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar10,0,(ulonglong)uVar16 << 2);
    uVar16 = local_70.NumBits & 0x8000001f;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
    }
    if (uVar16 != 0) {
      FVar10 = (ForElementType<unsigned_int>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar10 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar15 = (uint *)((longlong)FVar10 +
                        (longlong)
                        ((int)(local_70.NumBits + (local_70.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar15 = *puVar15 & 0xffffffffU >> (0x20U - (char)uVar16 & 0x1f);
    }
  }
  BuildGroupBits(this,param_2,&local_70);
  pTVar9 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                   *)&this->SimulationProxies,param_1);
  if (pTVar9 != (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    iVar3 = *(int *)&(pTVar9->Elements).field_0x28;
    puVar1 = &(pTVar9->Elements).field_0x10;
    uStack_cc = 1;
    local_b8 = 0;
    iStack_bc = local_b8;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(pTVar9->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar16 = *puVar15;
      iVar12 = 0;
      local_b8 = 0;
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar12;
        local_b8 = local_b8 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_bc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1462f758e;
        uVar16 = puVar15[lVar11 + 1];
      }
      uStack_cc = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_cc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_a8 = (int)lVar11;
      iStack_bc = local_b8 + -1 + local_a8;
      if (iVar3 < iStack_bc) {
        iStack_bc = iVar3;
      }
    }
LAB_1462f758e:
    uVar16 = *(uint *)&(pTVar9->Elements).field_0x28;
    uVar17 = uVar16 & 0xffffffe0;
    iStack_b0 = *(int *)&(pTVar9->Elements).field_0x8 - *(int *)&(pTVar9->Elements).field_0x34;
    uStack_c0 = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_cc,iVar12);
    TStack_98.CurrentBitIndex = iStack_bc;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_98._28_4_ = iStack_bc;
    TStack_98.BaseBitIndex = local_b8;
    uStack_78 = CONCAT44(uStack_ac,iStack_b0);
    local_d8 = pTVar9;
    iStack_d0 = iVar12;
    local_c8 = puVar1;
    iStack_b4 = iStack_bc;
    local_a0 = pTVar9;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)&(pTVar9->Elements).field_0x28;
    if (uVar16 != uVar4) {
      puVar14 = *(undefined1 **)&(pTVar9->Elements).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_1462f7690;
        uVar16 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_a4 = (int)lVar11;
      uVar16 = local_a4 + -1 + uVar17;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
    }
LAB_1462f7690:
    while( true ) {
      pTVar7 = local_a0;
      if (*(int *)&(local_a0->Elements).field_0x8 - *(int *)&(local_a0->Elements).field_0x34 !=
          (int)uStack_78) {
        local_e8[0] = 0;
        `TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (((TStack_98.CurrentBitIndex == uVar16) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar9)
         ) break;
      local_e0 = *(FDataflowSimulationProxy **)
                  (*(longlong *)&pTVar7->Elements + (longlong)TStack_98.CurrentBitIndex * 0x10);
      if ((local_e0 != (FDataflowSimulationProxy *)0x0) &&
         (bVar8 = FDataflowSimulationProxy::HasGroupBit(local_e0,&local_70), bVar8)) {
        pFVar5 = (param_3->AllocatorInstance).Data;
        if ((pFVar5 <= (FScriptContainerElement *)&local_e0) &&
           ((FScriptContainerElement *)&local_e0 < pFVar5 + (longlong)param_3->ArrayMax * 8)) {
          local_100 = (longlong)param_3->ArrayNum;
          local_f8 = 8;
          local_118 = &local_e0;
          local_110 = pFVar5;
          local_108 = (longlong)param_3->ArrayMax;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar12 = param_3->ArrayNum;
        if (iVar12 == param_3->ArrayMax) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar12 + 1;
        *(FDataflowSimulationProxy **)((param_3->AllocatorInstance).Data + (longlong)iVar12 * 8) =
             local_e0;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return;
}

// GetSimulationTime @ 1462f77e0

float __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::GetSimulationTime
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  return this->SimulationTime;
}

// GetSimulationTime @ 1462f77f0

float __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::GetSimulationTime
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  return this->SimulationTime;
}

// GetType @ 1462f7b60

FName __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::GetType
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TSimulationContext");
  return in_RDX;
}

// GetType @ 1462f7b90

FName __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::GetType
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TSimulationContext");
  return in_RDX;
}

// IsA @ 1462f8710

bool __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::IsA
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,FName param_1)

{
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_18 [2];
  
  ::FName::FName(&local_res10,"TSimulationContext");
  if (param_1 != local_res10) {
    ::FName::FName(&local_res18,"TEngineContext");
    if (param_1 != local_res18) {
      ::FName::FName(&local_res20,"FContextSingle");
      if (param_1 != local_res20) {
        ::FName::FName(local_18,"FContext");
        if (param_1 != local_18[0]) {
          return false;
        }
      }
    }
  }
  return true;
}

// IsA @ 1462f8790

bool __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::IsA
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,FName param_1)

{
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_18 [2];
  
  ::FName::FName(&local_res10,"TSimulationContext");
  if (param_1 != local_res10) {
    ::FName::FName(&local_res18,"TEngineContext");
    if (param_1 != local_res18) {
      ::FName::FName(&local_res20,"FContextThreaded");
      if (param_1 != local_res20) {
        ::FName::FName(local_18,"FContext");
        if (param_1 != local_18[0]) {
          return false;
        }
      }
    }
  }
  return true;
}

// NumSimulationProxies @ 1462f8be0

int __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::NumSimulationProxies
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,FString *param_1)

{
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *pTVar1;
  
  pTVar1 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                   *)&this->SimulationProxies,param_1);
  if (pTVar1 != (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    return *(int *)&(pTVar1->Elements).field_0x8 - *(int *)&(pTVar1->Elements).field_0x34;
  }
  return 0;
}

// NumSimulationProxies @ 1462f8c10

int __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::NumSimulationProxies
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,FString *param_1)

{
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *pTVar1;
  
  pTVar1 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
           ::Find((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                   *)&this->SimulationProxies,param_1);
  if (pTVar1 != (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    return *(int *)&(pTVar1->Elements).field_0x8 - *(int *)&(pTVar1->Elements).field_0x34;
  }
  return 0;
}

// PopIterationIndex @ 1462f8d10

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::PopIterationIndex
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->IterationIndices).ArrayNum < 1) {
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
  iVar3 = (this->IterationIndices).ArrayNum;
  uVar1 = iVar3 - 1;
  _Dst = (this->IterationIndices).AllocatorInstance.Data + (longlong)(int)uVar1 * 4;
  iVar3 = ~uVar1 + iVar3;
  if (iVar3 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar3 << 2);
  }
  piVar2 = &(this->IterationIndices).ArrayNum;
  *piVar2 = *piVar2 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->IterationIndices).AllocatorInstance,(this->IterationIndices).ArrayNum,
             &(this->IterationIndices).ArrayMax);
  return;
}

// PopIterationIndex @ 1462f8db0

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::PopIterationIndex
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->IterationIndices).ArrayNum < 1) {
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
  iVar3 = (this->IterationIndices).ArrayNum;
  uVar1 = iVar3 - 1;
  _Dst = (this->IterationIndices).AllocatorInstance.Data + (longlong)(int)uVar1 * 4;
  iVar3 = ~uVar1 + iVar3;
  if (iVar3 != 0) {
    memmove(_Dst,_Dst + 4,(longlong)iVar3 << 2);
  }
  piVar2 = &(this->IterationIndices).ArrayNum;
  *piVar2 = *piVar2 + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->IterationIndices).AllocatorInstance,(this->IterationIndices).ArrayNum,
             &(this->IterationIndices).ArrayMax);
  return;
}

// PushIterationIndex @ 1462f9bd0

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::PushIterationIndex
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 local_18 [4];
  
  pTVar2 = &this->IterationIndices;
  local_18[0] = 0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->IterationIndices).ArrayMax * 4
     )) {
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
  iVar6 = (this->IterationIndices).ArrayNum;
  piVar1 = &(this->IterationIndices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->IterationIndices).ArrayNum = iVar6 + 1;
  *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// PushIterationIndex @ 1462f9c90

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::PushIterationIndex
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 local_18 [4];
  
  pTVar2 = &this->IterationIndices;
  local_18[0] = 0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->IterationIndices).ArrayMax * 4
     )) {
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
  iVar6 = (this->IterationIndices).ArrayNum;
  piVar1 = &(this->IterationIndices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->IterationIndices).ArrayNum = iVar6 + 1;
  *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// RegisterProxyGroups @ 1462fafc0

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::RegisterProxyGroups
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  longlong *plVar1;
  undefined1 *puVar2;
  FString *pFVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar6;
  undefined8 uVar7;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  *this_00;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  ForElementType<unsigned_int> *_Dst;
  ulonglong uVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  ForElementType<unsigned_int> *this_01;
  undefined1 *puVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint *puVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  int iVar26;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_268 [8];
  ForAnyElementType local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  uint uStack_238;
  int iStack_234;
  int local_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  int local_220;
  TPairInitializer<FString_const_&,unsigned_int_&&> local_21c;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a8;
  uint uStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  *local_140;
  longlong local_138;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FString *local_c8;
  int *local_c0;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_b8;
  longlong lStack_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined8 uStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  local_140 = (TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
               *)&this->GroupIndices;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset(local_140);
  puVar2 = &(this->SimulationProxies).field_0x10;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_1e8 = &this->SimulationProxies;
  local_258 = 0;
  iStack_180 = 0;
  iVar11 = *(int *)&(this->SimulationProxies).field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar11 != 0) {
    puVar24 = *(uint **)&(this->SimulationProxies).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar2;
    }
    uVar10 = *puVar24;
    local_168 = 0;
    iStack_180 = 0;
    while (uVar10 == 0) {
      lVar14 = (longlong)iStack_180;
      local_168 = local_168 + 0x20;
      iStack_180 = iStack_180 + 1;
      iStack_16c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1462fb08d;
      uVar10 = puVar24[lVar14 + 1];
    }
    uStack_17c = -uVar10 & uVar10;
    uVar16 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_158 = (int)lVar14;
    iStack_16c = local_168 + -1 + local_158;
    if (iVar11 < iStack_16c) {
      iStack_16c = iVar11;
    }
  }
LAB_1462fb08d:
  uVar10 = *(uint *)&(this->SimulationProxies).field_0x28;
  uStack_164 = local_6c;
  bVar13 = (byte)uVar10 & 0x1f;
  iStack_160 = *(int *)&(this->SimulationProxies).field_0x8 -
               *(int *)&(this->SimulationProxies).field_0x34;
  uVar21 = uVar10 & 0xffffffe0;
  iVar26 = (int)uVar10 >> 5;
  uStack_20c = 1 << bVar13;
  uVar19 = -1 << bVar13;
  uStack_170 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_f0.CurrentBitIndex = iStack_16c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_6c;
  TStack_f0.BaseBitIndex = local_168;
  uStack_d0 = CONCAT44(uStack_15c,iStack_160);
  local_21c.Value._4_4_ = iVar26;
  pTStack_208 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_200 = uVar19;
  uStack_1fc = uVar10;
  uStack_1f8 = uVar21;
  local_188 = local_1e8;
  local_178 = puVar2;
  local_f8 = local_1e8;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar11 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->SimulationProxies).field_0x28;
  if (uVar10 != uVar4) {
    puVar22 = *(undefined1 **)&(this->SimulationProxies).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar19 = uVar19 & *(uint *)(puVar22 + (longlong)iVar26 * 4);
    while (uVar19 == 0) {
      uStack_1f8 = uVar21 + 0x20;
      local_21c.Value._4_4_ = iVar26 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_21c.Value._4_4_)
      goto LAB_1462fb1d8;
      uVar19 = *(uint *)(puVar22 + (longlong)iVar26 * 4 + 4);
      local_200 = 0xffffffff;
      uVar21 = uStack_1f8;
      iVar26 = local_21c.Value._4_4_;
    }
    uStack_20c = -uVar19 & uVar19;
    uVar16 = (ulonglong)uStack_20c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_154 = (int)lVar14;
    uStack_1fc = (uVar21 - 1) + local_154;
    if ((int)uVar4 < (int)uStack_1fc) {
LAB_1462fb1d8:
      uStack_1fc = uVar4;
    }
  }
  TStack_1e0._padding_ = CONCAT44(uStack_20c,local_21c.Value._4_4_);
  TStack_1e0.CurrentBitIndex = uStack_1fc;
  TStack_1e0.UnvisitedBitMask = local_200;
  TStack_1e0._28_4_ = uStack_1f4;
  TStack_1e0.BaseBitIndex = uStack_1f8;
  TStack_1e0.Array = pTStack_208;
  local_1c0 = CONCAT44(local_1c0._4_4_,
                       *(int *)&(this->SimulationProxies).field_0x8 -
                       *(int *)&(this->SimulationProxies).field_0x34);
  local_a8 = pTStack_208;
  uStack_90 = local_1c0;
  local_b8 = local_1e8;
  lStack_b0 = TStack_1e0._padding_;
  uStack_a0 = TStack_1e0._16_8_;
  local_98 = TStack_1e0._24_8_;
  do {
    pTVar27 = local_f8;
    if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_f0.CurrentBitIndex == iStack_9c) && (TStack_f0.Array == local_a8)) &&
       (pTVar27 == local_b8)) {
      if (local_260.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data);
      }
      return;
    }
    uVar10 = 1;
    iVar26 = 0;
    local_230 = 0;
    lVar14 = (longlong)TStack_f0.CurrentBitIndex * 0x68 + *(longlong *)pTVar27;
    iVar11 = *(int *)(lVar14 + 0x38);
    pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x20);
    pTVar27 = (TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
               *)(lVar14 + 0x10);
    iStack_234 = 0;
    if (iVar11 != 0) {
      pTVar25 = pTVar23;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30);
      }
      uVar19 = *(uint *)(pTVar25->AllocatorInstance).InlineData;
      while (uVar19 == 0) {
        lVar15 = (longlong)iVar26;
        local_230 = local_230 + 0x20;
        iVar26 = iVar26 + 1;
        iStack_234 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_1462fb31d;
        uVar19 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uVar10 = -uVar19 & uVar19;
      uVar16 = (ulonglong)uVar10 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_150 = (int)lVar15;
      iStack_234 = local_230 + -1 + local_150;
      if (iVar11 < iStack_234) {
        iStack_234 = iVar11;
      }
    }
LAB_1462fb31d:
    uStack_22c = local_4c;
    iStack_228 = *(int *)(lVar14 + 0x18) - *(int *)(lVar14 + 0x44);
    uVar19 = *(uint *)(lVar14 + 0x38);
    bVar13 = (byte)uVar19 & 0x1f;
    uVar21 = uVar19 & 0xffffffe0;
    uStack_248 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar10,iVar26);
    TStack_1e0.CurrentBitIndex = iStack_234;
    TStack_1e0.UnvisitedBitMask = 0xffffffff;
    iVar26 = (int)uVar19 >> 5;
    uVar10 = -1 << bVar13;
    local_250 = CONCAT44(1 << bVar13,iVar26);
    local_240._4_4_ = uVar19;
    local_240._0_4_ = uVar10;
    TStack_1e0._padding_ = (longlong)uStack_248;
    TStack_1e0._28_4_ = local_4c;
    TStack_1e0.BaseBitIndex = local_230;
    local_1c0 = CONCAT44(uStack_224,iStack_228);
    uStack_248 = pTVar23;
    uStack_238 = uVar21;
    local_1e8 = pTVar27;
    TStack_1e0.Array = pTVar23;
    local_130 = pTVar27;
    if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)(lVar14 + 0x38);
    if (uVar19 != uVar4) {
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30);
      }
      uVar10 = uVar10 & *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar26 * 4);
      while (uVar10 == 0) {
        uStack_238 = uVar21 + 0x20;
        lVar14 = (longlong)iVar26;
        iVar26 = iVar26 + 1;
        uVar16 = (ulonglong)local_250 >> 0x20;
        local_250 = CONCAT44((int)uVar16,iVar26);
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
        goto LAB_1462fb45c;
        uVar10 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        local_240._0_4_ = 0xffffffff;
        local_240._4_4_ = 0;
        uVar21 = uStack_238;
      }
      local_250 = CONCAT44(-uVar10 & uVar10,(undefined4)local_250);
      uVar16 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_14c = (int)lVar14;
      iVar11 = (uVar21 - 1) + local_14c;
      local_240._4_4_ = iVar11;
      if ((int)uVar4 < iVar11) {
LAB_1462fb45c:
        local_240._4_4_ = uVar4;
      }
    }
    iStack_194 = iStack_234;
    iStack_198 = uStack_238;
    uStack_1b0 = local_250;
    pTStack_1a8 = uStack_248;
    uStack_1a0 = (uint)local_240;
    iStack_19c = local_240._4_4_;
    uVar7 = _uStack_1a0;
    iStack_19c = SUB84(local_240,4);
    local_1f0 = uStack_248;
    local_21c.Key._4_4_ = iStack_19c;
    iVar11 = iStack_19c;
    _uStack_1a0 = uVar7;
LAB_1462fb481:
    pTVar6 = local_1e8;
    if (*(int *)&local_1e8->field_0x8 - *(int *)&local_1e8->field_0x34 != (int)local_1c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_1e0.CurrentBitIndex != iVar11) || (TStack_1e0.Array != local_1f0)) ||
       (pTVar6 != pTVar27)) {
      lVar14 = *(longlong *)(*(longlong *)pTVar6 + (longlong)TStack_1e0.CurrentBitIndex * 0x10);
      local_138 = lVar14;
      if (lVar14 != 0) {
        uVar10 = *(int *)(lVar14 + 0x30) - *(int *)(lVar14 + 0x5c);
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        uVar16 = local_258 >> 0x20;
        local_258 = local_258 & 0xffffffff00000000;
        if ((int)uVar16 < (int)uVar10) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar10,&local_260,0,(int *)((longlong)&local_258 + 4));
        }
        iVar11 = *(int *)(lVar14 + 0x50);
        pTStack_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x38);
        plVar1 = (longlong *)(lVar14 + 0x28);
        iVar26 = 0;
        uVar10 = 1;
        iStack_198 = 0;
        iStack_19c = iVar26;
        if (iVar11 != 0) {
          pTVar23 = pTStack_1a8;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x48) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x48);
          }
          uVar19 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
          iStack_198 = 0;
          iVar26 = 0;
          while (uVar19 == 0) {
            lVar15 = (longlong)iVar26;
            iStack_198 = iStack_198 + 0x20;
            iVar26 = iVar26 + 1;
            iStack_19c = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_1462fb59e;
            uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar10 = -uVar19 & uVar19;
          uVar16 = (ulonglong)uVar10 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_148 = (int)lVar15;
          iStack_19c = iStack_198 + -1 + local_148;
          if (iVar11 < iStack_19c) {
            iStack_19c = iVar11;
          }
        }
LAB_1462fb59e:
        uVar19 = *(uint *)(lVar14 + 0x50);
        local_190 = *(int *)(lVar14 + 0x30) - *(int *)(lVar14 + 0x5c);
        uVar21 = uVar19 & 0xffffffe0;
        uStack_1b0 = CONCAT44(uVar10,iVar26);
        uStack_1a0 = 0xffffffff;
        iStack_194 = iStack_16c;
        TStack_120._padding_ = uStack_1b0;
        iVar26 = (int)uVar19 >> 5;
        uStack_100 = CONCAT44(uStack_18c,local_190);
        TStack_120.UnvisitedBitMask = 0xffffffff;
        TStack_120.CurrentBitIndex = iStack_19c;
        TStack_120.BaseBitIndex = iStack_198;
        TStack_120._28_4_ = iStack_16c;
        local_1b8 = plVar1;
        local_128 = plVar1;
        TStack_120.Array = pTStack_1a8;
        if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = local_140;
        uVar10 = *(uint *)(lVar14 + 0x50);
        if (uVar19 != uVar10) {
          pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x38);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x48) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x48);
          }
          uVar19 = -1 << ((byte)uVar19 & 0x1f) &
                   *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar26 * 4);
          while (uVar19 == 0) {
            lVar15 = (longlong)iVar26;
            uVar21 = uVar21 + 0x20;
            iVar26 = iVar26 + 1;
            uVar19 = uVar10;
            if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_1462fb6c0;
            uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar16 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_144 = (int)lVar15;
          uVar19 = (uVar21 - 1) + local_144;
          if ((int)uVar10 < (int)uVar19) {
            uVar19 = uVar10;
          }
        }
LAB_1462fb6c0:
        do {
          plVar8 = local_128;
          if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          lVar15 = local_138;
          if (((TStack_120.CurrentBitIndex == uVar19) &&
              (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x38))) &&
             (plVar8 == plVar1)) goto LAB_1462fb866;
          lVar15 = *plVar8;
          pFVar3 = (FString *)(lVar15 + (longlong)TStack_120.CurrentBitIndex * 0x18);
          iVar26 = *(int *)(lVar15 + 8 + (longlong)TStack_120.CurrentBitIndex * 0x18);
          iVar11 = iVar26 + -1;
          if (iVar26 == 0) {
            pwVar17 = L"";
            iVar11 = 0;
          }
          else {
            pwVar17 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
          }
          uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar17);
          iVar11 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(this_00,uVar10,pFVar3);
          if (iVar11 == -1) {
LAB_1462fb765:
            local_220 = *(int *)&(this->GroupIndices).field_0x8 -
                        *(int *)&(this->GroupIndices).field_0x34;
            local_c0 = &local_220;
            local_c8 = pFVar3;
            TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,unsigned_int_&&>_>
                      (this_00,&local_21c,(bool *)&local_c8);
            pFVar18 = (FScriptContainerElement *)
                      (*(longlong *)&this_00->Elements + 0x10 + (longlong)(int)local_21c.Key * 0x20)
            ;
          }
          else {
            lVar15 = (longlong)iVar11 * 0x20 + *(longlong *)&this_00->Elements;
            pFVar18 = (FScriptContainerElement *)(lVar15 + 0x10);
            if (lVar15 == 0) {
              pFVar18 = (FScriptContainerElement *)0x0;
            }
            if (pFVar18 == (FScriptContainerElement *)0x0) goto LAB_1462fb765;
          }
          if (((local_260.Data <= pFVar18) &&
              (pFVar18 < local_260.Data + (longlong)local_258._4_4_ * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (int)local_258;
          if ((int)local_258 == local_258._4_4_) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_260,(int *)((longlong)&local_258 + 4));
          }
          local_258 = CONCAT44(local_258._4_4_,iVar11 + 1);
          *(int *)(local_260.Data + (longlong)iVar11 * 4) = *(int *)pFVar18;
          TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
        } while( true );
      }
      goto LAB_1462fb9aa;
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
LAB_1462fb866:
  iVar11 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
  uVar10 = iVar11 + 0x1f;
  uVar19 = uVar10 >> 5;
  this_01 = (ForElementType<unsigned_int> *)(local_138 + 8);
  *(int *)(local_138 + 0x20) = iVar11;
  if (uVar10 >> 5 != 0) {
    if (*(int *)(local_138 + 0x24) + 0x1fU >> 5 < uVar19) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(this_01,0,uVar19,4);
      *(uint *)(lVar15 + 0x24) = uVar19 << 5;
    }
    _Dst = this_01;
    if (*(ForElementType<unsigned_int> **)(lVar15 + 0x18) != (ForElementType<unsigned_int> *)0x0) {
      _Dst = *(ForElementType<unsigned_int> **)(lVar15 + 0x18);
    }
    memset(_Dst,0,(ulonglong)uVar19 << 2);
    uVar19 = *(int *)(lVar15 + 0x20) >> 0x1f & 0x1f;
    uVar10 = *(int *)(lVar15 + 0x20) + uVar19;
    iVar11 = (uVar10 & 0x1f) - uVar19;
    if (iVar11 != 0) {
      if (*(ForElementType<unsigned_int> **)(lVar15 + 0x18) != (ForElementType<unsigned_int> *)0x0)
      {
        this_01 = *(ForElementType<unsigned_int> **)(lVar15 + 0x18);
      }
      *(uint *)(this_01->InlineData + (longlong)((int)uVar10 >> 5) * 4) =
           *(uint *)(this_01->InlineData + (longlong)((int)uVar10 >> 5) * 4) &
           0xffffffffU >> (0x20U - (char)iVar11 & 0x1f);
    }
  }
  iVar26 = (int)local_258;
  uVar16 = (ulonglong)(int)local_258;
  pFVar18 = local_260.Data + uVar16 * 4;
  FVar20.Data = local_260.Data;
  while( true ) {
    if ((int)uVar16 != iVar26) {
      local_268[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_268);
    }
    iVar11 = local_21c.Key._4_4_;
    if (FVar20.Data == pFVar18) break;
    iVar11 = *(int *)FVar20.Data;
    if (((iVar11 < 0) || (*(int *)(lVar15 + 0x20) <= iVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar14 = lVar15 + 8;
    if (*(longlong *)(lVar15 + 0x18) != 0) {
      lVar14 = *(longlong *)(lVar15 + 0x18);
    }
    iVar12 = iVar11;
    if (iVar11 < 0) {
      iVar12 = iVar11 + 0x1f;
    }
    puVar24 = (uint *)(lVar14 + (longlong)(iVar12 >> 5) * 4);
    *puVar24 = *puVar24 | 1 << ((byte)iVar11 & 0x1f);
    uVar16 = local_258 & 0xffffffff;
    FVar20.Data = FVar20.Data + 4;
  }
LAB_1462fb9aa:
  TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  pTVar27 = local_130;
  goto LAB_1462fb481;
}

// RegisterProxyGroups @ 1462fba20

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::RegisterProxyGroups
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  longlong *plVar1;
  undefined1 *puVar2;
  FString *pFVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar6;
  undefined8 uVar7;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  *this_00;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  ForElementType<unsigned_int> *_Dst;
  ulonglong uVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  ForElementType<unsigned_int> *this_01;
  undefined1 *puVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint *puVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  int iVar26;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_268 [8];
  ForAnyElementType local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  uint uStack_238;
  int iStack_234;
  int local_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  int local_220;
  TPairInitializer<FString_const_&,unsigned_int_&&> local_21c;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a8;
  uint uStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  *local_140;
  longlong local_138;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FString *local_c8;
  int *local_c0;
  TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
  *local_b8;
  longlong lStack_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined8 uStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  local_140 = (TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
               *)&this->GroupIndices;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset(local_140);
  puVar2 = &(this->SimulationProxies).field_0x10;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_1e8 = &this->SimulationProxies;
  local_258 = 0;
  iStack_180 = 0;
  iVar11 = *(int *)&(this->SimulationProxies).field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar11 != 0) {
    puVar24 = *(uint **)&(this->SimulationProxies).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar2;
    }
    uVar10 = *puVar24;
    local_168 = 0;
    iStack_180 = 0;
    while (uVar10 == 0) {
      lVar14 = (longlong)iStack_180;
      local_168 = local_168 + 0x20;
      iStack_180 = iStack_180 + 1;
      iStack_16c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_1462fbaed;
      uVar10 = puVar24[lVar14 + 1];
    }
    uStack_17c = -uVar10 & uVar10;
    uVar16 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_158 = (int)lVar14;
    iStack_16c = local_168 + -1 + local_158;
    if (iVar11 < iStack_16c) {
      iStack_16c = iVar11;
    }
  }
LAB_1462fbaed:
  uVar10 = *(uint *)&(this->SimulationProxies).field_0x28;
  uStack_164 = local_6c;
  bVar13 = (byte)uVar10 & 0x1f;
  iStack_160 = *(int *)&(this->SimulationProxies).field_0x8 -
               *(int *)&(this->SimulationProxies).field_0x34;
  uVar21 = uVar10 & 0xffffffe0;
  iVar26 = (int)uVar10 >> 5;
  uStack_20c = 1 << bVar13;
  uVar19 = -1 << bVar13;
  uStack_170 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_f0.CurrentBitIndex = iStack_16c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_6c;
  TStack_f0.BaseBitIndex = local_168;
  uStack_d0 = CONCAT44(uStack_15c,iStack_160);
  local_21c.Value._4_4_ = iVar26;
  pTStack_208 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  local_200 = uVar19;
  uStack_1fc = uVar10;
  uStack_1f8 = uVar21;
  local_188 = local_1e8;
  local_178 = puVar2;
  local_f8 = local_1e8;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar11 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->SimulationProxies).field_0x28;
  if (uVar10 != uVar4) {
    puVar22 = *(undefined1 **)&(this->SimulationProxies).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar19 = uVar19 & *(uint *)(puVar22 + (longlong)iVar26 * 4);
    while (uVar19 == 0) {
      uStack_1f8 = uVar21 + 0x20;
      local_21c.Value._4_4_ = iVar26 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_21c.Value._4_4_)
      goto LAB_1462fbc38;
      uVar19 = *(uint *)(puVar22 + (longlong)iVar26 * 4 + 4);
      local_200 = 0xffffffff;
      uVar21 = uStack_1f8;
      iVar26 = local_21c.Value._4_4_;
    }
    uStack_20c = -uVar19 & uVar19;
    uVar16 = (ulonglong)uStack_20c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_154 = (int)lVar14;
    uStack_1fc = (uVar21 - 1) + local_154;
    if ((int)uVar4 < (int)uStack_1fc) {
LAB_1462fbc38:
      uStack_1fc = uVar4;
    }
  }
  TStack_1e0._padding_ = CONCAT44(uStack_20c,local_21c.Value._4_4_);
  TStack_1e0.CurrentBitIndex = uStack_1fc;
  TStack_1e0.UnvisitedBitMask = local_200;
  TStack_1e0._28_4_ = uStack_1f4;
  TStack_1e0.BaseBitIndex = uStack_1f8;
  TStack_1e0.Array = pTStack_208;
  local_1c0 = CONCAT44(local_1c0._4_4_,
                       *(int *)&(this->SimulationProxies).field_0x8 -
                       *(int *)&(this->SimulationProxies).field_0x34);
  local_a8 = pTStack_208;
  uStack_90 = local_1c0;
  local_b8 = local_1e8;
  lStack_b0 = TStack_1e0._padding_;
  uStack_a0 = TStack_1e0._16_8_;
  local_98 = TStack_1e0._24_8_;
  do {
    pTVar27 = local_f8;
    if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_f0.CurrentBitIndex == iStack_9c) && (TStack_f0.Array == local_a8)) &&
       (pTVar27 == local_b8)) {
      if (local_260.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data);
      }
      return;
    }
    uVar10 = 1;
    iVar26 = 0;
    local_230 = 0;
    lVar14 = (longlong)TStack_f0.CurrentBitIndex * 0x68 + *(longlong *)pTVar27;
    iVar11 = *(int *)(lVar14 + 0x38);
    pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x20);
    pTVar27 = (TMap<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
               *)(lVar14 + 0x10);
    iStack_234 = 0;
    if (iVar11 != 0) {
      pTVar25 = pTVar23;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30);
      }
      uVar19 = *(uint *)(pTVar25->AllocatorInstance).InlineData;
      while (uVar19 == 0) {
        lVar15 = (longlong)iVar26;
        local_230 = local_230 + 0x20;
        iVar26 = iVar26 + 1;
        iStack_234 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_1462fbd7d;
        uVar19 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uVar10 = -uVar19 & uVar19;
      uVar16 = (ulonglong)uVar10 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_150 = (int)lVar15;
      iStack_234 = local_230 + -1 + local_150;
      if (iVar11 < iStack_234) {
        iStack_234 = iVar11;
      }
    }
LAB_1462fbd7d:
    uStack_22c = local_4c;
    iStack_228 = *(int *)(lVar14 + 0x18) - *(int *)(lVar14 + 0x44);
    uVar19 = *(uint *)(lVar14 + 0x38);
    bVar13 = (byte)uVar19 & 0x1f;
    uVar21 = uVar19 & 0xffffffe0;
    uStack_248 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar10,iVar26);
    TStack_1e0.CurrentBitIndex = iStack_234;
    TStack_1e0.UnvisitedBitMask = 0xffffffff;
    iVar26 = (int)uVar19 >> 5;
    uVar10 = -1 << bVar13;
    local_250 = CONCAT44(1 << bVar13,iVar26);
    local_240._4_4_ = uVar19;
    local_240._0_4_ = uVar10;
    TStack_1e0._padding_ = (longlong)uStack_248;
    TStack_1e0._28_4_ = local_4c;
    TStack_1e0.BaseBitIndex = local_230;
    local_1c0 = CONCAT44(uStack_224,iStack_228);
    uStack_248 = pTVar23;
    uStack_238 = uVar21;
    local_1e8 = pTVar27;
    TStack_1e0.Array = pTVar23;
    local_130 = pTVar27;
    if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar4 = *(uint *)(lVar14 + 0x38);
    if (uVar19 != uVar4) {
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x30);
      }
      uVar10 = uVar10 & *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar26 * 4);
      while (uVar10 == 0) {
        uStack_238 = uVar21 + 0x20;
        lVar14 = (longlong)iVar26;
        iVar26 = iVar26 + 1;
        uVar16 = (ulonglong)local_250 >> 0x20;
        local_250 = CONCAT44((int)uVar16,iVar26);
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
        goto LAB_1462fbebc;
        uVar10 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        local_240._0_4_ = 0xffffffff;
        local_240._4_4_ = 0;
        uVar21 = uStack_238;
      }
      local_250 = CONCAT44(-uVar10 & uVar10,(undefined4)local_250);
      uVar16 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_14c = (int)lVar14;
      iVar11 = (uVar21 - 1) + local_14c;
      local_240._4_4_ = iVar11;
      if ((int)uVar4 < iVar11) {
LAB_1462fbebc:
        local_240._4_4_ = uVar4;
      }
    }
    iStack_194 = iStack_234;
    iStack_198 = uStack_238;
    uStack_1b0 = local_250;
    pTStack_1a8 = uStack_248;
    uStack_1a0 = (uint)local_240;
    iStack_19c = local_240._4_4_;
    uVar7 = _uStack_1a0;
    iStack_19c = SUB84(local_240,4);
    local_1f0 = uStack_248;
    local_21c.Key._4_4_ = iStack_19c;
    iVar11 = iStack_19c;
    _uStack_1a0 = uVar7;
LAB_1462fbee1:
    pTVar6 = local_1e8;
    if (*(int *)&local_1e8->field_0x8 - *(int *)&local_1e8->field_0x34 != (int)local_1c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FDataflowSimulationProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_1e0.CurrentBitIndex != iVar11) || (TStack_1e0.Array != local_1f0)) ||
       (pTVar6 != pTVar27)) {
      lVar14 = *(longlong *)(*(longlong *)pTVar6 + (longlong)TStack_1e0.CurrentBitIndex * 0x10);
      local_138 = lVar14;
      if (lVar14 != 0) {
        uVar10 = *(int *)(lVar14 + 0x30) - *(int *)(lVar14 + 0x5c);
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        uVar16 = local_258 >> 0x20;
        local_258 = local_258 & 0xffffffff00000000;
        if ((int)uVar16 < (int)uVar10) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar10,&local_260,0,(int *)((longlong)&local_258 + 4));
        }
        iVar11 = *(int *)(lVar14 + 0x50);
        pTStack_1a8 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x38);
        plVar1 = (longlong *)(lVar14 + 0x28);
        iVar26 = 0;
        uVar10 = 1;
        iStack_198 = 0;
        iStack_19c = iVar26;
        if (iVar11 != 0) {
          pTVar23 = pTStack_1a8;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x48) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x48);
          }
          uVar19 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
          iStack_198 = 0;
          iVar26 = 0;
          while (uVar19 == 0) {
            lVar15 = (longlong)iVar26;
            iStack_198 = iStack_198 + 0x20;
            iVar26 = iVar26 + 1;
            iStack_19c = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_1462fbffe;
            uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar10 = -uVar19 & uVar19;
          uVar16 = (ulonglong)uVar10 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_148 = (int)lVar15;
          iStack_19c = iStack_198 + -1 + local_148;
          if (iVar11 < iStack_19c) {
            iStack_19c = iVar11;
          }
        }
LAB_1462fbffe:
        uVar19 = *(uint *)(lVar14 + 0x50);
        local_190 = *(int *)(lVar14 + 0x30) - *(int *)(lVar14 + 0x5c);
        uVar21 = uVar19 & 0xffffffe0;
        uStack_1b0 = CONCAT44(uVar10,iVar26);
        uStack_1a0 = 0xffffffff;
        iStack_194 = iStack_16c;
        TStack_120._padding_ = uStack_1b0;
        iVar26 = (int)uVar19 >> 5;
        uStack_100 = CONCAT44(uStack_18c,local_190);
        TStack_120.UnvisitedBitMask = 0xffffffff;
        TStack_120.CurrentBitIndex = iStack_19c;
        TStack_120.BaseBitIndex = iStack_198;
        TStack_120._28_4_ = iStack_16c;
        local_1b8 = plVar1;
        local_128 = plVar1;
        TStack_120.Array = pTStack_1a8;
        if ((((int)uVar19 < 0) || (iVar11 < (int)uVar19)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = local_140;
        uVar10 = *(uint *)(lVar14 + 0x50);
        if (uVar19 != uVar10) {
          pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x38);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x48) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x48);
          }
          uVar19 = -1 << ((byte)uVar19 & 0x1f) &
                   *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar26 * 4);
          while (uVar19 == 0) {
            lVar15 = (longlong)iVar26;
            uVar21 = uVar21 + 0x20;
            iVar26 = iVar26 + 1;
            uVar19 = uVar10;
            if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_1462fc120;
            uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar16 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_144 = (int)lVar15;
          uVar19 = (uVar21 - 1) + local_144;
          if ((int)uVar10 < (int)uVar19) {
            uVar19 = uVar10;
          }
        }
LAB_1462fc120:
        do {
          plVar8 = local_128;
          if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          lVar15 = local_138;
          if (((TStack_120.CurrentBitIndex == uVar19) &&
              (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x38))) &&
             (plVar8 == plVar1)) goto LAB_1462fc2c6;
          lVar15 = *plVar8;
          pFVar3 = (FString *)(lVar15 + (longlong)TStack_120.CurrentBitIndex * 0x18);
          iVar26 = *(int *)(lVar15 + 8 + (longlong)TStack_120.CurrentBitIndex * 0x18);
          iVar11 = iVar26 + -1;
          if (iVar26 == 0) {
            pwVar17 = L"";
            iVar11 = 0;
          }
          else {
            pwVar17 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
          }
          uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar17);
          iVar11 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(this_00,uVar10,pFVar3);
          if (iVar11 == -1) {
LAB_1462fc1c5:
            local_220 = *(int *)&(this->GroupIndices).field_0x8 -
                        *(int *)&(this->GroupIndices).field_0x34;
            local_c0 = &local_220;
            local_c8 = pFVar3;
            TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,unsigned_int_&&>_>
                      (this_00,&local_21c,(bool *)&local_c8);
            pFVar18 = (FScriptContainerElement *)
                      (*(longlong *)&this_00->Elements + 0x10 + (longlong)(int)local_21c.Key * 0x20)
            ;
          }
          else {
            lVar15 = (longlong)iVar11 * 0x20 + *(longlong *)&this_00->Elements;
            pFVar18 = (FScriptContainerElement *)(lVar15 + 0x10);
            if (lVar15 == 0) {
              pFVar18 = (FScriptContainerElement *)0x0;
            }
            if (pFVar18 == (FScriptContainerElement *)0x0) goto LAB_1462fc1c5;
          }
          if (((local_260.Data <= pFVar18) &&
              (pFVar18 < local_260.Data + (longlong)local_258._4_4_ * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (int)local_258;
          if ((int)local_258 == local_258._4_4_) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_260,(int *)((longlong)&local_258 + 4));
          }
          local_258 = CONCAT44(local_258._4_4_,iVar11 + 1);
          *(int *)(local_260.Data + (longlong)iVar11 * 4) = *(int *)pFVar18;
          TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
        } while( true );
      }
      goto LAB_1462fc40a;
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
LAB_1462fc2c6:
  iVar11 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
  uVar10 = iVar11 + 0x1f;
  uVar19 = uVar10 >> 5;
  this_01 = (ForElementType<unsigned_int> *)(local_138 + 8);
  *(int *)(local_138 + 0x20) = iVar11;
  if (uVar10 >> 5 != 0) {
    if (*(int *)(local_138 + 0x24) + 0x1fU >> 5 < uVar19) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(this_01,0,uVar19,4);
      *(uint *)(lVar15 + 0x24) = uVar19 << 5;
    }
    _Dst = this_01;
    if (*(ForElementType<unsigned_int> **)(lVar15 + 0x18) != (ForElementType<unsigned_int> *)0x0) {
      _Dst = *(ForElementType<unsigned_int> **)(lVar15 + 0x18);
    }
    memset(_Dst,0,(ulonglong)uVar19 << 2);
    uVar19 = *(int *)(lVar15 + 0x20) >> 0x1f & 0x1f;
    uVar10 = *(int *)(lVar15 + 0x20) + uVar19;
    iVar11 = (uVar10 & 0x1f) - uVar19;
    if (iVar11 != 0) {
      if (*(ForElementType<unsigned_int> **)(lVar15 + 0x18) != (ForElementType<unsigned_int> *)0x0)
      {
        this_01 = *(ForElementType<unsigned_int> **)(lVar15 + 0x18);
      }
      *(uint *)(this_01->InlineData + (longlong)((int)uVar10 >> 5) * 4) =
           *(uint *)(this_01->InlineData + (longlong)((int)uVar10 >> 5) * 4) &
           0xffffffffU >> (0x20U - (char)iVar11 & 0x1f);
    }
  }
  iVar26 = (int)local_258;
  uVar16 = (ulonglong)(int)local_258;
  pFVar18 = local_260.Data + uVar16 * 4;
  FVar20.Data = local_260.Data;
  while( true ) {
    if ((int)uVar16 != iVar26) {
      local_268[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_268);
    }
    iVar11 = local_21c.Key._4_4_;
    if (FVar20.Data == pFVar18) break;
    iVar11 = *(int *)FVar20.Data;
    if (((iVar11 < 0) || (*(int *)(lVar15 + 0x20) <= iVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar14 = lVar15 + 8;
    if (*(longlong *)(lVar15 + 0x18) != 0) {
      lVar14 = *(longlong *)(lVar15 + 0x18);
    }
    iVar12 = iVar11;
    if (iVar11 < 0) {
      iVar12 = iVar11 + 0x1f;
    }
    puVar24 = (uint *)(lVar14 + (longlong)(iVar12 >> 5) * 4);
    *puVar24 = *puVar24 | 1 << ((byte)iVar11 & 0x1f);
    uVar16 = local_258 & 0xffffffff;
    FVar20.Data = FVar20.Data + 4;
  }
LAB_1462fc40a:
  TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  pTVar27 = local_130;
  goto LAB_1462fbee1;
}

// RemoveSimulationProxy @ 1462fd400

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::RemoveSimulationProxy
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,FString *param_1,
          FDataflowSimulationProxy *param_2)

{
  int iVar1;
  uint uVar2;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *this_00;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  this_00 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                        *)&this->SimulationProxies,uVar2,param_1);
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  ::Remove(this_00,param_2);
  return;
}

// RemoveSimulationProxy @ 1462fd470

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::RemoveSimulationProxy
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,FString *param_1,
          FDataflowSimulationProxy *param_2)

{
  int iVar1;
  uint uVar2;
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  *this_00;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  this_00 = TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
            ::FindOrAddImpl<FString_const_&>
                      ((TMapBase<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>_>
                        *)&this->SimulationProxies,uVar2,param_1);
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  ::Remove(this_00,param_2);
  return;
}

// ResetSimulationProxies @ 1462fd780

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::ResetSimulationProxies
          (TSimulationContext<UE::Dataflow::FContextSingle> *this)

{
  TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&this->SimulationProxies);
  return;
}

// ResetSimulationProxies @ 1462fd7a0

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::ResetSimulationProxies
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this)

{
  TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&this->SimulationProxies);
  return;
}

// SetIterationIndex @ 1462fd7c0

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::SetIterationIndex
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (this->IterationIndices).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  *(int *)((this->IterationIndices).AllocatorInstance.Data +
          (longlong)(this->IterationIndices).ArrayNum * 4 + -4) = param_1;
  return;
}

// SetIterationIndex @ 1462fd850

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::SetIterationIndex
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (this->IterationIndices).ArrayNum;
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  *(int *)((this->IterationIndices).AllocatorInstance.Data +
          (longlong)(this->IterationIndices).ArrayNum * 4 + -4) = param_1;
  return;
}

// SetTimingInfos @ 1462fd8f0

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::SetTimingInfos
          (TSimulationContext<UE::Dataflow::FContextSingle> *this,float param_1,float param_2)

{
  this->DeltaTime = param_1;
  this->SimulationTime = param_2;
  return;
}

// SetTimingInfos @ 1462fd910

void __thiscall
UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::SetTimingInfos
          (TSimulationContext<UE::Dataflow::FContextThreaded> *this,float param_1,float param_2)

{
  this->DeltaTime = param_1;
  this->SimulationTime = param_2;
  return;
}

// StaticType @ 1462fe210

FName __cdecl UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::StaticType(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"TSimulationContext");
  return in_RCX;
}

// StaticType @ 1462fe240

FName __cdecl UE::Dataflow::TSimulationContext<UE::Dataflow::FContextThreaded>::StaticType(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"TSimulationContext");
  return in_RCX;
}

