// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 16

// TEngineContext<UE::Dataflow::FContextSingle> @ 1462ccf70

TEngineContext<UE::Dataflow::FContextSingle> * __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
TEngineContext<UE::Dataflow::FContextSingle>
          (TEngineContext<UE::Dataflow::FContextSingle> *this,TObjectPtr<UObject> *param_1)

{
  UObject *pUVar1;
  
  memset(this,0,0x360);
  Dataflow::FContext::FContext((FContext *)this);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  (this->Owner).field0_0x0.DebugPtr = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return this;
}

// TEngineContext<UE::Dataflow::FContextThreaded> @ 1462ccfe0

TEngineContext<UE::Dataflow::FContextThreaded> * __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextThreaded>::
TEngineContext<UE::Dataflow::FContextThreaded>
          (TEngineContext<UE::Dataflow::FContextThreaded> *this,TObjectPtr<UObject> *param_1)

{
  UObject *pUVar1;
  
  Dataflow::FContext::FContext((FContext *)this);
  this->_padding_ = (longlong)&FContextThreaded::_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ =
       (longlong)&FContextThreaded::_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  Dataflow::FContext::SetThreaded((FContext *)this,true);
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  (this->Owner).field0_0x0.DebugPtr = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  return this;
}

// ~TEngineContext<UE::Dataflow::FContextSingle> @ 1462cf5f0

void __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
~TEngineContext<UE::Dataflow::FContextSingle>(TEngineContext<UE::Dataflow::FContextSingle> *this)

{
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  Dataflow::FContext::~FContext((FContext *)this);
  return;
}

// ~TEngineContext<UE::Dataflow::FContextThreaded> @ 1462cf610

void __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextThreaded>::
~TEngineContext<UE::Dataflow::FContextThreaded>
          (TEngineContext<UE::Dataflow::FContextThreaded> *this)

{
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextCacheStore__;
  this->_padding_ = (longlong)&_vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
  Dataflow::FContext::~FContext((FContext *)this);
  return;
}

// GetBaseData @ 1462dc080

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
* __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::GetBaseData
          (TEngineContext<UE::Dataflow::FContextSingle> *this,uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar2;
  longlong *plVar3;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar4;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->_padding_;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  pTVar5 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0;
  pTVar2 = pTVar5;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar3 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar3 = &this->_padding_;
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pTVar2 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                  *)(this->_padding_ + (longlong)iVar1 * 0x18);
        if (*(uint *)(this->_padding_ + (longlong)iVar1 * 0x18) == param_1) break;
        iVar1 = *(int *)&pTVar2[2].Ptr;
        pTVar2 = pTVar5;
      } while (iVar1 != -1);
    }
  }
  pTVar4 = pTVar2 + 1;
  if (pTVar2 == (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                 *)0x0) {
    pTVar4 = pTVar5;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return pTVar4;
}

// GetBaseData @ 1462dc090

TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
* __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextThreaded>::GetBaseData
          (TEngineContext<UE::Dataflow::FContextThreaded> *this,uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar2;
  longlong *plVar3;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar4;
  TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
  *pTVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->_padding_;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  pTVar5 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
            *)0x0;
  pTVar2 = pTVar5;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar3 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar3 = &this->_padding_;
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)this->_padding_ - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pTVar2 = (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                  *)(this->_padding_ + (longlong)iVar1 * 0x18);
        if (*(uint *)(this->_padding_ + (longlong)iVar1 * 0x18) == param_1) break;
        iVar1 = *(int *)&pTVar2[2].Ptr;
        pTVar2 = pTVar5;
      } while (iVar1 != -1);
    }
  }
  pTVar4 = pTVar2 + 1;
  if (pTVar2 == (TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>
                 *)0x0) {
    pTVar4 = pTVar5;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return pTVar4;
}

// GetKeys @ 1462dd370

int __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::GetKeys
          (TEngineContext<UE::Dataflow::FContextSingle> *this,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->_padding_;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    iVar1 = TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
            ::GetKeys<DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                      ((TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                        *)&this->_padding_,param_1);
    LeaveCriticalSection(lpCriticalSection);
    return iVar1;
  }
  iVar1 = TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
          ::GetKeys<DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                    ((TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                      *)&this->_padding_,param_1);
  return iVar1;
}

// GetKeys @ 1462dd380

int __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextThreaded>::GetKeys
          (TEngineContext<UE::Dataflow::FContextThreaded> *this,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->_padding_;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    iVar1 = TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
            ::GetKeys<DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                      ((TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                        *)&this->_padding_,param_1);
    LeaveCriticalSection(lpCriticalSection);
    return iVar1;
  }
  iVar1 = TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
          ::GetKeys<DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>
                    ((TMapBase<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TUniquePtr<UE::Dataflow::FContextCacheElementBase,TDefaultDelete<UE::Dataflow::FContextCacheElementBase>_>,0>_>
                      *)&this->_padding_,param_1);
  return iVar1;
}

// GetType @ 1462def50

FName __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::GetType
          (TEngineContext<UE::Dataflow::FContextSingle> *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TEngineContext");
  return in_RDX;
}

// GetType @ 1462def80

FName __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextThreaded>::GetType
          (TEngineContext<UE::Dataflow::FContextThreaded> *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TEngineContext");
  return in_RDX;
}

// IsA @ 1462df970

bool __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::IsA
          (TEngineContext<UE::Dataflow::FContextSingle> *this,FName param_1)

{
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  ::FName::FName(&local_res10,"TEngineContext");
  if (param_1 != local_res10) {
    ::FName::FName(&local_res18,"FContextSingle");
    if (param_1 != local_res18) {
      ::FName::FName(&local_res20,"FContext");
      if (param_1 != local_res20) {
        return false;
      }
    }
  }
  return true;
}

// IsA @ 1462df9e0

bool __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextThreaded>::IsA
          (TEngineContext<UE::Dataflow::FContextThreaded> *this,FName param_1)

{
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  ::FName::FName(&local_res10,"TEngineContext");
  if (param_1 != local_res10) {
    ::FName::FName(&local_res18,"FContextThreaded");
    if (param_1 != local_res18) {
      ::FName::FName(&local_res20,"FContext");
      if (param_1 != local_res20) {
        return false;
      }
    }
  }
  return true;
}

// Serialize @ 1462e42b0

void __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::Serialize
          (TEngineContext<UE::Dataflow::FContextSingle> *this,FArchive *param_1)

{
  FTimestamp FStackX_8;
  
  FStackX_8.Value = FTimestamp::Invalid;
  ::operator<<(param_1,&FStackX_8);
  FContextCache::Serialize((FContextCache *)&this->_padding_,param_1);
  return;
}

// Serialize @ 1462e42c0

void __thiscall
UE::Dataflow::TEngineContext<UE::Dataflow::FContextThreaded>::Serialize
          (TEngineContext<UE::Dataflow::FContextThreaded> *this,FArchive *param_1)

{
  FTimestamp FStackX_8;
  
  FStackX_8.Value = FTimestamp::Invalid;
  ::operator<<(param_1,&FStackX_8);
  FContextCache::Serialize((FContextCache *)&this->_padding_,param_1);
  return;
}

// StaticType @ 1462e62c0

FName __cdecl UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::StaticType(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"TEngineContext");
  return in_RCX;
}

// StaticType @ 1462e62f0

FName __cdecl UE::Dataflow::TEngineContext<UE::Dataflow::FContextThreaded>::StaticType(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"TEngineContext");
  return in_RCX;
}

