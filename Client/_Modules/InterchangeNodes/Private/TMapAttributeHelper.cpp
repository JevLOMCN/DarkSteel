// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 21

// ~TMapAttributeHelper<int,FString> @ 14e48a2e0

void __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::~TMapAttributeHelper<int,FString>
          (TMapAttributeHelper<int,FString> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  undefined8 local_18 [2];
  
  if (&this->Attributes != (TWeakPtr<UE::Interchange::FAttributeStorage,1> *)local_18) {
    pTVar3 = (this->Attributes).WeakReferenceCount.ReferenceController;
    (this->Attributes).Object = (FAttributeStorage *)0x0;
    (this->Attributes).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  pTVar3 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->CachedKeysAndValues).field_0x48 = 0;
  pvVar5 = *(void **)&(this->CachedKeysAndValues).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMapAttributeHelper<FString,unsigned_char> @ 14e48a390

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::
~TMapAttributeHelper<FString,unsigned_char>(TMapAttributeHelper<FString,unsigned_char> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  undefined8 local_18 [2];
  
  if (&this->Attributes != (TWeakPtr<UE::Interchange::FAttributeStorage,1> *)local_18) {
    pTVar3 = (this->Attributes).WeakReferenceCount.ReferenceController;
    (this->Attributes).Object = (FAttributeStorage *)0x0;
    (this->Attributes).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  pTVar3 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->CachedKeysAndValues).field_0x48 = 0;
  pvVar5 = *(void **)&(this->CachedKeysAndValues).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMapAttributeHelper<FString,float> @ 14e48a440

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::~TMapAttributeHelper<FString,float>
          (TMapAttributeHelper<FString,float> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  undefined8 local_18 [2];
  
  if (&this->Attributes != (TWeakPtr<UE::Interchange::FAttributeStorage,1> *)local_18) {
    pTVar3 = (this->Attributes).WeakReferenceCount.ReferenceController;
    (this->Attributes).Object = (FAttributeStorage *)0x0;
    (this->Attributes).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  pTVar3 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->CachedKeysAndValues).field_0x48 = 0;
  pvVar5 = *(void **)&(this->CachedKeysAndValues).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMapAttributeHelper<FString,UE::Math::TMatrix<double>_> @ 14e48a4f0

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::
~TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>
          (TMapAttributeHelper<FString,UE::Math::TMatrix<double>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  undefined8 local_18 [2];
  
  if (&this->Attributes != (TWeakPtr<UE::Interchange::FAttributeStorage,1> *)local_18) {
    pTVar3 = (this->Attributes).WeakReferenceCount.ReferenceController;
    (this->Attributes).Object = (FAttributeStorage *)0x0;
    (this->Attributes).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  pTVar3 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->CachedKeysAndValues).field_0x48 = 0;
  pvVar5 = *(void **)&(this->CachedKeysAndValues).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType> @ 14e48a5a0

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>::
~TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_18 [2];
  
  if ((undefined8 *)((longlong)this + 0x68) != local_18) {
    plVar3 = *(longlong **)((longlong)this + 0x70);
    *(undefined8 *)((longlong)this + 0x68) = 0;
    *(undefined8 *)((longlong)this + 0x70) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)((longlong)this + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// GetKeyAttribute @ 14e496130

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute
          (TMapAttributeHelper<FString,unsigned_char> *this,FAttributeKey *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *_Src;
  FAttributeKey *pFVar1;
  int iVar2;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar1 = FAttributeStorage::TAttributeHandle<int,void>::GetKey(&this->KeyCountHandle);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (pFVar1->Key).Data.ArrayNum;
  _Src = (pFVar1->Key).Data.AllocatorInstance.Data;
  local_18.Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)&local_18,iVar2,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar2 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar2);
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendInt(&local_18,param_1);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_18) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetKeyAttribute @ 14e4962e0

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute
          (TMapAttributeHelper<FString,UE::Math::TMatrix<double>_> *this,
          FAttributeKey *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  FAttributeKey *pFVar1;
  int iVar2;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::
           GetKeyAttribute'::__l2::_dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar1 = FAttributeStorage::TAttributeHandle<int,void>::GetKey(&this->KeyCountHandle);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (pFVar1->Key).Data.ArrayNum;
  _Src = (pFVar1->Key).Data.AllocatorInstance.Data;
  local_18.Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)&local_18,iVar2,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar2 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar2);
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendInt(&local_18,param_1);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_18) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetKeyAttribute @ 14e496490

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>::GetKeyAttribute
          (void *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  FAttributeKey *pFVar1;
  int iVar2;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>::
           GetKeyAttribute'::__l2::_dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar1 = FAttributeStorage::TAttributeHandle<int,void>::GetKey
                     ((TAttributeHandle<int,void> *)((longlong)this + 0x50));
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (pFVar1->Key).Data.ArrayNum;
  _Src = (pFVar1->Key).Data.AllocatorInstance.Data;
  local_18.Data.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)&local_18,iVar2,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar2 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar2);
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar2);
  ::FString::AppendInt(&local_18,param_1);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_18) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAttribute @ 14e49b010

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute
          (TMapAttributeHelper<FString,unsigned_char> *this,FAttributeKey *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FAttributeKey *pFVar4;
  int iVar5;
  longlong lVar6;
  FString local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar4 = FAttributeStorage::TAttributeHandle<int,void>::GetKey(&this->KeyCountHandle);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (pFVar4->Key).Data.ArrayNum;
  pFVar1 = (pFVar4->Key).Data.AllocatorInstance.Data;
  local_38.Data.ArrayNum = iVar5;
  if (iVar5 == 0) {
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,(ForAnyElementType *)&local_38,iVar5,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar5 * 2);
  }
  local_20 = (param_1->Data).ArrayNum;
  lVar6 = (longlong)local_20;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar6 * 2);
  }
  iVar5 = local_20 + -1;
  if (local_20 == 0) {
    iVar5 = 0;
  }
  iVar2 = 0;
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar2;
  }
  ::FString::Reserve(&local_38,iVar5 + iVar3);
  iVar5 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar5 = iVar2;
  }
  ::FString::AppendChars
            (&local_38,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar5);
  iVar5 = local_20 + -1;
  if (local_20 == 0) {
    iVar5 = iVar2;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data,iVar5);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_38) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAttribute @ 14e49b230

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute
          (TMapAttributeHelper<FString,UE::Math::TMatrix<double>_> *this,
          FAttributeKey *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FAttributeKey *pFVar4;
  int iVar5;
  longlong lVar6;
  FString local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::
           GetValueAttribute'::__l2::_dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar4 = FAttributeStorage::TAttributeHandle<int,void>::GetKey(&this->KeyCountHandle);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (pFVar4->Key).Data.ArrayNum;
  pFVar1 = (pFVar4->Key).Data.AllocatorInstance.Data;
  local_38.Data.ArrayNum = iVar5;
  if (iVar5 == 0) {
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,(ForAnyElementType *)&local_38,iVar5,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar5 * 2);
  }
  local_20 = (param_1->Data).ArrayNum;
  lVar6 = (longlong)local_20;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar6 * 2);
  }
  iVar5 = local_20 + -1;
  if (local_20 == 0) {
    iVar5 = 0;
  }
  iVar2 = 0;
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar2;
  }
  ::FString::Reserve(&local_38,iVar5 + iVar3);
  iVar5 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar5 = iVar2;
  }
  ::FString::AppendChars
            (&local_38,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar5);
  iVar5 = local_20 + -1;
  if (local_20 == 0) {
    iVar5 = iVar2;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data,iVar5);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_38) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAttribute @ 14e49b450

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>::
GetValueAttribute(void *this,FAttributeKey *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FAttributeKey *pFVar4;
  int iVar5;
  longlong lVar6;
  FString local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>::
           GetValueAttribute'::__l2::_dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar4 = FAttributeStorage::TAttributeHandle<int,void>::GetKey
                     ((TAttributeHandle<int,void> *)((longlong)this + 0x50));
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (pFVar4->Key).Data.ArrayNum;
  pFVar1 = (pFVar4->Key).Data.AllocatorInstance.Data;
  local_38.Data.ArrayNum = iVar5;
  if (iVar5 == 0) {
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,(ForAnyElementType *)&local_38,iVar5,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar5 * 2);
  }
  local_20 = (param_1->Data).ArrayNum;
  lVar6 = (longlong)local_20;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar6 * 2);
  }
  iVar5 = local_20 + -1;
  if (local_20 == 0) {
    iVar5 = 0;
  }
  iVar2 = 0;
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar2;
  }
  ::FString::Reserve(&local_38,iVar5 + iVar3);
  iVar5 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar5 = iVar2;
  }
  ::FString::AppendChars
            (&local_38,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar5);
  iVar5 = local_20 + -1;
  if (local_20 == 0) {
    iVar5 = iVar2;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data,iVar5);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_38) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Initialize @ 14e49b8c0

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize
          (TMapAttributeHelper<FString,unsigned_char> *this,
          TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<int,void> *pTVar8;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  FMemScope local_res18;
  ForAnyElementType local_78;
  undefined8 local_70;
  FAttributeKey local_68;
  TAttributeHandle<int,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name301,true);
  (this->Attributes).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Attributes).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Attributes).WeakReferenceCount.ReferenceController = pTVar3;
  }
  local_68.Key.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
    local_68.Key.Data.ArrayNum = (int)local_70;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  bVar6 = FAttributeStorage::ContainAttribute(param_1->Object,&local_68);
  if (bVar6) {
    pTVar8 = FAttributeStorage::GetAttributeHandle<int,void>(param_1->Object,&local_40,&local_68);
    FAttributeStorage::TAttributeHandle<int,void>::operator=(&this->KeyCountHandle,pTVar8);
    if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
    }
    RebuildCache(this);
  }
  else {
    local_res10[0] = 0;
    EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                      (param_1->Object,&local_68,local_res10,None);
    if ((EVar7 != Operation_Success) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result == EAttributeStorageResult::Operation_Success",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x135,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar8 = FAttributeStorage::GetAttributeHandle<int,void>(param_1->Object,&local_58,&local_68);
    FAttributeStorage::TAttributeHandle<int,void>::operator=(&this->KeyCountHandle,pTVar8);
    if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Initialize @ 14e49bb30

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::Initialize
          (TMapAttributeHelper<FString,UE::Math::TMatrix<double>_> *this,
          TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<int,void> *pTVar8;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  FMemScope local_res18;
  ForAnyElementType local_78;
  undefined8 local_70;
  FAttributeKey local_68;
  TAttributeHandle<int,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name301,true);
  (this->Attributes).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Attributes).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Attributes).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Attributes).WeakReferenceCount.ReferenceController = pTVar3;
  }
  local_68.Key.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
    local_68.Key.Data.ArrayNum = (int)local_70;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  bVar6 = FAttributeStorage::ContainAttribute(param_1->Object,&local_68);
  if (bVar6) {
    pTVar8 = FAttributeStorage::GetAttributeHandle<int,void>(param_1->Object,&local_40,&local_68);
    FAttributeStorage::TAttributeHandle<int,void>::operator=(&this->KeyCountHandle,pTVar8);
    if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
    }
    RebuildCache(this);
  }
  else {
    local_res10[0] = 0;
    EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                      (param_1->Object,&local_68,local_res10,None);
    if ((EVar7 != Operation_Success) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result == EAttributeStorageResult::Operation_Success",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x135,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar8 = FAttributeStorage::GetAttributeHandle<int,void>(param_1->Object,&local_58,&local_68);
    FAttributeStorage::TAttributeHandle<int,void>::operator=(&this->KeyCountHandle,pTVar8);
    if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Initialize @ 14e49bda0

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>::Initialize
          (void *this,TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<int,void> *pTVar8;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  FMemScope local_res18;
  ForAnyElementType local_78;
  undefined8 local_70;
  FAttributeKey local_68;
  TAttributeHandle<int,void> local_58;
  TAttributeHandle<int,void> local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name301,true);
  *(FAttributeStorage **)((longlong)this + 0x68) = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != *(TReferenceControllerBase<1> **)((longlong)this + 0x70)) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar4 = *(longlong **)((longlong)this + 0x70);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    *(TReferenceControllerBase<1> **)((longlong)this + 0x70) = pTVar3;
  }
  local_68.Key.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_68.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,_Src,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
    local_68.Key.Data.ArrayNum = (int)local_70;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  bVar6 = FAttributeStorage::ContainAttribute(param_1->Object,&local_68);
  if (bVar6) {
    pTVar8 = FAttributeStorage::GetAttributeHandle<int,void>(param_1->Object,&local_40,&local_68);
    FAttributeStorage::TAttributeHandle<int,void>::operator=
              ((TAttributeHandle<int,void> *)((longlong)this + 0x50),pTVar8);
    if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
    }
    RebuildCache(this);
  }
  else {
    local_res10[0] = 0;
    EVar7 = FAttributeStorage::RegisterAttribute<int,void>
                      (param_1->Object,&local_68,local_res10,None);
    if ((EVar7 != Operation_Success) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result == EAttributeStorageResult::Operation_Success",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                           ,0x135,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar8 = FAttributeStorage::GetAttributeHandle<int,void>(param_1->Object,&local_58,&local_68);
    FAttributeStorage::TAttributeHandle<int,void>::operator=
              ((TAttributeHandle<int,void> *)((longlong)this + 0x50),pTVar8);
    if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RebuildCache @ 14e49dcd0

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache
          (TMapAttributeHelper<FString,unsigned_char> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  EAttributeStorageResult EVar4;
  FAttributeKey *pFVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
  local_res18;
  FString local_e8;
  TAttributeHandle<FString,void> local_d8;
  TAttributeHandle<unsigned_char,void> local_c0;
  FString *local_a8;
  FAttributeStorage **local_a0;
  FAttributeStorage *local_98;
  FString local_90;
  FAttributeStorage *local_80;
  FString local_78;
  FAttributeKey local_68;
  FAttributeKey local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&local_res18.Value,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar7 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e49dd81;
      }
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    this_00 = (this->Attributes).Object;
    if (((this_00 != (FAttributeStorage *)0x0) &&
        (bVar8 = FAttributeStorage::TAttributeHandle<int,void>::IsValid(&this->KeyCountHandle),
        bVar8)) &&
       (EVar4 = FAttributeStorage::TAttributeHandle<int,void>::Get
                          (&this->KeyCountHandle,local_res10), EVar4 == Operation_Success)) {
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res10[0]);
      iVar6 = 0;
      if (0 < local_res10[0]) {
        do {
          pFVar5 = GetKeyAttribute(this,&local_68,iVar6);
          FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_d8,pFVar5);
          if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
          }
          bVar8 = FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_d8);
          if (bVar8) {
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            FAttributeStorage::TAttributeHandle<FString,void>::Get(&local_d8,&local_e8);
            pFVar5 = GetValueAttribute(this,&local_58,&local_e8);
            FAttributeStorage::GetAttributeHandle<unsigned_char,void>(this_00,&local_c0,pFVar5);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            bVar8 = FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid(&local_c0);
            if (bVar8) {
              local_98 = local_d8.AttributeStorage;
              ::FString::FString(&local_90,&local_d8.Key.Key);
              local_80 = local_c0.AttributeStorage;
              ::FString::FString(&local_78,&local_c0.Key.Key);
              local_a8 = &local_e8;
              local_a0 = &local_98;
              TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>_>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
                          *)this,&local_res18,(bool *)&local_a8);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
            }
            else {
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4942768438637494788>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                 ,0x204,"ValueAttribute.IsValid()");
              if (bVar8) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            if (local_c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          else {
            bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494779>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar8) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_res10[0]);
      }
    }
  }
LAB_14e49dd81:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RebuildCache @ 14e49e000

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::RebuildCache
          (TMapAttributeHelper<FString,UE::Math::TMatrix<double>_> *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  EAttributeStorageResult EVar4;
  FAttributeKey *pFVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
  local_res18;
  FString local_e8;
  TAttributeHandle<FString,void> local_d8;
  TAttributeHandle<UE::Math::TMatrix<double>,void> local_c0;
  FString *local_a8;
  FAttributeStorage **local_a0;
  FAttributeStorage *local_98;
  FString local_90;
  FAttributeStorage *local_80;
  FString local_78;
  FAttributeKey local_68;
  FAttributeKey local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&local_res18.Value,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar7 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e49e0b1;
      }
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    this_00 = (this->Attributes).Object;
    if (((this_00 != (FAttributeStorage *)0x0) &&
        (bVar8 = FAttributeStorage::TAttributeHandle<int,void>::IsValid(&this->KeyCountHandle),
        bVar8)) &&
       (EVar4 = FAttributeStorage::TAttributeHandle<int,void>::Get
                          (&this->KeyCountHandle,local_res10), EVar4 == Operation_Success)) {
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res10[0]);
      iVar6 = 0;
      if (0 < local_res10[0]) {
        do {
          pFVar5 = GetKeyAttribute(this,&local_68,iVar6);
          FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_d8,pFVar5);
          if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
          }
          bVar8 = FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_d8);
          if (bVar8) {
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            FAttributeStorage::TAttributeHandle<FString,void>::Get(&local_d8,&local_e8);
            pFVar5 = GetValueAttribute(this,&local_58,&local_e8);
            FAttributeStorage::GetAttributeHandle<UE::Math::TMatrix<double>,void>
                      (this_00,&local_c0,pFVar5);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            bVar8 = FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>::IsValid
                              (&local_c0);
            if (bVar8) {
              local_98 = local_d8.AttributeStorage;
              ::FString::FString(&local_90,&local_d8.Key.Key);
              local_80 = local_c0.AttributeStorage;
              ::FString::FString(&local_78,&local_c0.Key.Key);
              local_a8 = &local_e8;
              local_a0 = &local_98;
              TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>_>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
                          *)this,&local_res18,(bool *)&local_a8);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
            }
            else {
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4942768438637494788>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                 ,0x204,"ValueAttribute.IsValid()");
              if (bVar8) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            if (local_c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          else {
            bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494779>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar8) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_res10[0]);
      }
    }
  }
LAB_14e49e0b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RebuildCache @ 14e49e330

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>::RebuildCache
          (void *this)

{
  FAttributeStorage *this_00;
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  EAttributeStorageResult EVar4;
  FAttributeKey *pFVar5;
  TAttributeHandle<unsigned_char,void> *pTVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_&&>
  local_res18;
  FString local_108;
  TAttributeHandle<FString,void> local_f8;
  TAttributeHandle<unsigned_char,void> local_e0;
  FString *local_c8;
  FAttributeStorage **local_c0;
  FAttributeStorage *local_b8;
  FString local_b0;
  FAttributeStorage *local_a0;
  FString local_98;
  FAttributeKey local_88;
  FAttributeKey local_78;
  TAttributeHandle<unsigned_char,void> local_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&local_res18.Value,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,EInterchangeAnimationPayLoadType>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 0x70);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e49e3e1;
      }
      LOCK();
      aVar3 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar3;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar9);
    this_00 = *(FAttributeStorage **)((longlong)this + 0x68);
    if (((this_00 != (FAttributeStorage *)0x0) &&
        (bVar9 = FAttributeStorage::TAttributeHandle<int,void>::IsValid
                           ((TAttributeHandle<int,void> *)((longlong)this + 0x50)), bVar9)) &&
       (EVar4 = FAttributeStorage::TAttributeHandle<int,void>::Get
                          ((TAttributeHandle<int,void> *)((longlong)this + 0x50),local_res10),
       EVar4 == Operation_Success)) {
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
      ::Empty(this,local_res10[0]);
      iVar7 = 0;
      if (0 < local_res10[0]) {
        do {
          pFVar5 = GetKeyAttribute(this,&local_88,iVar7);
          FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_f8,pFVar5);
          if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
          }
          bVar9 = FAttributeStorage::TAttributeHandle<FString,void>::IsValid(&local_f8);
          if (bVar9) {
            local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_108.Data.ArrayNum = 0;
            local_108.Data.ArrayMax = 0;
            FAttributeStorage::TAttributeHandle<FString,void>::Get(&local_f8,&local_108);
            pFVar5 = GetValueAttribute(this,&local_78,&local_108);
            pTVar6 = FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                               (this_00,&local_68,pFVar5);
            FAttributeStorage::TAttributeHandle<unsigned_char,void>::
            TAttributeHandle<unsigned_char,void>(&local_e0,&pTVar6->Key,pTVar6->AttributeStorage);
            if (local_68.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
            }
            bVar9 = FAttributeStorage::TAttributeHandle<unsigned_char,void>::IsValid(&local_e0);
            if (bVar9) {
              local_b8 = local_f8.AttributeStorage;
              ::FString::FString(&local_b0,&local_f8.Key.Key);
              local_a0 = local_e0.AttributeStorage;
              ::FString::FString(&local_98,&local_e0.Key.Key);
              local_c8 = &local_108;
              local_c0 = &local_b8;
              TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>_>
                        (this,&local_res18,(bool *)&local_c8);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
            }
            else {
              bVar9 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<4942768438637494788>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                 ,0x204,"ValueAttribute.IsValid()");
              if (bVar9) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            if (local_e0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
          }
          else {
            bVar9 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4942768438637494779>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                               ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar9) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_f8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_res10[0]);
      }
    }
  }
LAB_14e49e3e1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetKeyValueByHash @ 14e4a7280

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::SetKeyValueByHash
          (TMapAttributeHelper<FString,unsigned_char> *this,uint param_1,FString *param_2,
          uchar *param_3)

{
  longlong lVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  int iVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<unsigned_char,void> *pTVar8;
  TAttributeHandle<FString,void> *pTVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  int local_res8 [2];
  undefined1 local_c8 [8];
  FAttributeKey local_c0;
  FAttributeKey local_b0;
  FAttributeStorage *local_a0;
  FScriptContainerElement *local_98;
  int local_90;
  int local_8c;
  FAttributeStorage *local_88;
  FScriptContainerElement *local_80;
  int local_78;
  int local_74;
  FString *local_70;
  FAttributeStorage **local_68;
  TAttributeHandle<FString,void> local_60;
  TAttributeHandle<unsigned_char,void> local_48;
  
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4a72d4;
      }
      LOCK();
      aVar5 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar5;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar12);
    this_00 = (this->Attributes).Object;
    if (this_00 != (FAttributeStorage *)0x0) {
      iVar6 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
                          *)this,param_1,param_2);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar6 * 0x48;
        lVar10 = lVar1 + 0x10;
        if (lVar1 == 0) {
          lVar10 = 0;
        }
        if (lVar10 != 0) {
          FAttributeStorage::TAttributeHandle<unsigned_char,void>::Set
                    ((TAttributeHandle<unsigned_char,void> *)(lVar10 + 0x18),param_3);
          bVar12 = true;
          goto LAB_14e4a7303;
        }
      }
      GetKeyAttribute(this,&local_b0,
                      *(int *)&(this->CachedKeysAndValues).field_0x8 -
                      *(int *)&(this->CachedKeysAndValues).field_0x34);
      GetValueAttribute(this,&local_c0,param_2);
      EVar7 = FAttributeStorage::RegisterAttribute<FString,void>(this_00,&local_b0,param_2,None);
      if ((EVar7 != Operation_Success) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494642>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x172,
                              "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                             ), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      EVar7 = FAttributeStorage::RegisterAttribute<unsigned_char,void>
                        (this_00,&local_c0,param_3,None);
      if ((EVar7 != Operation_Success) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494643>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x173,
                              "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                             ), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pTVar8 = FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         (this_00,&local_48,&local_c0);
      pTVar9 = FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_60,&local_b0);
      local_a0 = pTVar9->AttributeStorage;
      local_98 = (pTVar9->Key).Key.Data.AllocatorInstance.Data;
      (pTVar9->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90 = (pTVar9->Key).Key.Data.ArrayNum;
      local_8c = (pTVar9->Key).Key.Data.ArrayMax;
      (pTVar9->Key).Key.Data.ArrayNum = 0;
      (pTVar9->Key).Key.Data.ArrayMax = 0;
      local_88 = pTVar8->AttributeStorage;
      local_80 = (pTVar8->Key).Key.Data.AllocatorInstance.Data;
      (pTVar8->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78 = (pTVar8->Key).Key.Data.ArrayNum;
      local_74 = (pTVar8->Key).Key.Data.ArrayMax;
      local_68 = &local_a0;
      (pTVar8->Key).Key.Data.ArrayNum = 0;
      (pTVar8->Key).Key.Data.ArrayMax = 0;
      local_70 = param_2;
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>_>
                ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>,0>,FDefaultSetAllocator>
                  *)this,(uint)local_c8,
                 (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_&&>
                  *)(ulonglong)param_1,(bool *)&local_70);
      if (local_80 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80);
      }
      if (local_98 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_60.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      local_res8[0] =
           *(int *)&(this->CachedKeysAndValues).field_0x8 -
           *(int *)&(this->CachedKeysAndValues).field_0x34;
      FAttributeStorage::TAttributeHandle<int,void>::Set(&this->KeyCountHandle,local_res8);
      if (local_c0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Key.Data.AllocatorInstance.Data);
      }
      if (local_b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Data.AllocatorInstance.Data);
      }
      bVar12 = true;
      goto LAB_14e4a7303;
    }
  }
LAB_14e4a72d4:
  bVar12 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar12) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar12 = false;
LAB_14e4a7303:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar12;
}

// SetKeyValueByHash @ 14e4a7530

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,UE::Math::TMatrix<double>_>::SetKeyValueByHash
          (TMapAttributeHelper<FString,UE::Math::TMatrix<double>_> *this,uint param_1,
          FString *param_2,TMatrix<double> *param_3)

{
  longlong lVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  int iVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<UE::Math::TMatrix<double>,void> *pTVar8;
  TAttributeHandle<FString,void> *pTVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  int local_res8 [2];
  undefined1 local_c8 [8];
  FAttributeKey local_c0;
  FAttributeKey local_b0;
  FAttributeStorage *local_a0;
  FScriptContainerElement *local_98;
  int local_90;
  int local_8c;
  FAttributeStorage *local_88;
  FScriptContainerElement *local_80;
  int local_78;
  int local_74;
  FString *local_70;
  FAttributeStorage **local_68;
  TAttributeHandle<FString,void> local_60;
  TAttributeHandle<UE::Math::TMatrix<double>,void> local_48;
  
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4a7584;
      }
      LOCK();
      aVar5 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar5;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar12);
    this_00 = (this->Attributes).Object;
    if (this_00 != (FAttributeStorage *)0x0) {
      iVar6 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
                          *)this,param_1,param_2);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar6 * 0x48;
        lVar10 = lVar1 + 0x10;
        if (lVar1 == 0) {
          lVar10 = 0;
        }
        if (lVar10 != 0) {
          FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>::Set
                    ((TAttributeHandle<UE::Math::TMatrix<double>,void> *)(lVar10 + 0x18),param_3);
          bVar12 = true;
          goto LAB_14e4a75b3;
        }
      }
      GetKeyAttribute(this,&local_b0,
                      *(int *)&(this->CachedKeysAndValues).field_0x8 -
                      *(int *)&(this->CachedKeysAndValues).field_0x34);
      GetValueAttribute(this,&local_c0,param_2);
      EVar7 = FAttributeStorage::RegisterAttribute<FString,void>(this_00,&local_b0,param_2,None);
      if ((EVar7 != Operation_Success) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494642>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x172,
                              "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                             ), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      EVar7 = FAttributeStorage::RegisterAttribute<UE::Math::TMatrix<double>,void>
                        (this_00,&local_c0,param_3,None);
      if ((EVar7 != Operation_Success) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494643>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x173,
                              "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                             ), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pTVar8 = FAttributeStorage::GetAttributeHandle<UE::Math::TMatrix<double>,void>
                         (this_00,&local_48,&local_c0);
      pTVar9 = FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_60,&local_b0);
      local_a0 = pTVar9->AttributeStorage;
      local_98 = (pTVar9->Key).Key.Data.AllocatorInstance.Data;
      (pTVar9->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90 = (pTVar9->Key).Key.Data.ArrayNum;
      local_8c = (pTVar9->Key).Key.Data.ArrayMax;
      (pTVar9->Key).Key.Data.ArrayNum = 0;
      (pTVar9->Key).Key.Data.ArrayMax = 0;
      local_88 = pTVar8->AttributeStorage;
      local_80 = (pTVar8->Key).Key.Data.AllocatorInstance.Data;
      (pTVar8->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78 = (pTVar8->Key).Key.Data.ArrayNum;
      local_74 = (pTVar8->Key).Key.Data.ArrayMax;
      local_68 = &local_a0;
      (pTVar8->Key).Key.Data.ArrayNum = 0;
      (pTVar8->Key).Key.Data.ArrayMax = 0;
      local_70 = param_2;
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>_>
                ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>,0>,FDefaultSetAllocator>
                  *)this,(uint)local_c8,
                 (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<UE::Math::TMatrix<double>,void>_>_&&>
                  *)(ulonglong)param_1,(bool *)&local_70);
      if (local_80 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80);
      }
      if (local_98 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_60.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_48.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Key.Key.Data.AllocatorInstance.Data);
      }
      local_res8[0] =
           *(int *)&(this->CachedKeysAndValues).field_0x8 -
           *(int *)&(this->CachedKeysAndValues).field_0x34;
      FAttributeStorage::TAttributeHandle<int,void>::Set(&this->KeyCountHandle,local_res8);
      if (local_c0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Key.Data.AllocatorInstance.Data);
      }
      if (local_b0.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Key.Data.AllocatorInstance.Data);
      }
      bVar12 = true;
      goto LAB_14e4a75b3;
    }
  }
LAB_14e4a7584:
  bVar12 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar12) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar12 = false;
LAB_14e4a75b3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar12;
}

// SetKeyValueByHash @ 14e4a77e0

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,enum_EInterchangeAnimationPayLoadType>::
SetKeyValueByHash(void *this,uint param_1,FString *param_2,EInterchangeAnimationPayLoadType *param_3
                 )

{
  longlong lVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  int iVar6;
  EAttributeStorageResult EVar7;
  TAttributeHandle<unsigned_char,void> *pTVar8;
  TAttributeHandle<FString,void> *pTVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  int local_res8 [2];
  TAttributeHandle<unsigned_char,void> local_d8;
  undefined1 local_c0 [8];
  FAttributeKey local_b8;
  FAttributeKey local_a8;
  FAttributeStorage *local_98;
  FScriptContainerElement *local_90;
  int local_88;
  int local_84;
  FAttributeStorage *local_80;
  FScriptContainerElement *local_78;
  int local_70;
  int local_6c;
  FString *local_68;
  FAttributeStorage **local_60;
  TAttributeHandle<unsigned_char,void> local_58;
  TAttributeHandle<FString,void> local_40;
  
  pTVar11 = *(TReferenceControllerBase<1> **)((longlong)this + 0x70);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4a7832;
      }
      LOCK();
      aVar5 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar5;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar12);
    this_00 = *(FAttributeStorage **)((longlong)this + 0x68);
    if (this_00 != (FAttributeStorage *)0x0) {
      iVar6 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(this,param_1,param_2);
      if (iVar6 != -1) {
        lVar1 = *(longlong *)this + (longlong)iVar6 * 0x48;
        lVar10 = lVar1 + 0x10;
        if (lVar1 == 0) {
          lVar10 = 0;
        }
        if (lVar10 != 0) {
          FAttributeStorage::TAttributeHandle<unsigned_char,void>::Set
                    ((TAttributeHandle<unsigned_char,void> *)(lVar10 + 0x18),param_3);
          bVar12 = true;
          goto LAB_14e4a7862;
        }
      }
      GetKeyAttribute(this,&local_a8,*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34))
      ;
      GetValueAttribute(this,&local_b8,param_2);
      EVar7 = FAttributeStorage::RegisterAttribute<FString,void>(this_00,&local_a8,param_2,None);
      if ((EVar7 != Operation_Success) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494642>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x172,
                              "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                             ), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      EVar7 = FAttributeStorage::RegisterAttribute<unsigned_char,void>
                        (this_00,&local_b8,param_3,None);
      if ((EVar7 != Operation_Success) &&
         (bVar12 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4942768438637494643>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                              ,0x173,
                              "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                             ), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pTVar8 = FAttributeStorage::GetAttributeHandle<unsigned_char,void>
                         (this_00,&local_58,&local_b8);
      FAttributeStorage::TAttributeHandle<unsigned_char,void>::TAttributeHandle<unsigned_char,void>
                (&local_d8,&pTVar8->Key,pTVar8->AttributeStorage);
      if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
      }
      pTVar9 = FAttributeStorage::GetAttributeHandle<FString,void>(this_00,&local_40,&local_a8);
      local_98 = pTVar9->AttributeStorage;
      local_90 = (pTVar9->Key).Key.Data.AllocatorInstance.Data;
      (pTVar9->Key).Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88 = (pTVar9->Key).Key.Data.ArrayNum;
      local_84 = (pTVar9->Key).Key.Data.ArrayMax;
      (pTVar9->Key).Key.Data.ArrayNum = 0;
      (pTVar9->Key).Key.Data.ArrayMax = 0;
      local_80 = local_d8.AttributeStorage;
      local_78 = local_d8.Key.Key.Data.AllocatorInstance.Data;
      local_70 = local_d8.Key.Key.Data.ArrayNum;
      local_6c = local_d8.Key.Key.Data.ArrayMax;
      local_60 = &local_98;
      local_d8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Key.Key.Data.ArrayNum = 0;
      local_d8.Key.Key.Data.ArrayMax = 0;
      local_68 = param_2;
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<enum_EInterchangeAnimationPayLoadType,void>_>_&&>_>
                (this,(uint)local_c0,
                 (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<EInterchangeAnimationPayLoadType,void>_>_&&>
                  *)(ulonglong)param_1,(bool *)&local_68);
      if (local_78 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_90 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90);
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
      }
      local_res8[0] = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
      FAttributeStorage::TAttributeHandle<int,void>::Set
                ((TAttributeHandle<int,void> *)((longlong)this + 0x50),local_res8);
      if (local_b8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Key.Data.AllocatorInstance.Data);
      }
      if (local_a8.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Key.Data.AllocatorInstance.Data);
      }
      bVar12 = true;
      goto LAB_14e4a7862;
    }
  }
LAB_14e4a7832:
  bVar12 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar12) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar12 = false;
LAB_14e4a7862:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar12;
}

// ToMap @ 14e4a8ce0

TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
* __thiscall
UE::Interchange::TMapAttributeHelper<FString,unsigned_char>::ToMap
          (TMapAttributeHelper<FString,unsigned_char> *this,
          TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  TMapAttributeHelper<FString,unsigned_char> *pTVar2;
  bool bVar3;
  ulonglong uVar4;
  TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
  *pTVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  int local_res20;
  uint local_118;
  uint uStack_114;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  TMapAttributeHelper<FString,unsigned_char> *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined1 local_b4 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TMapAttributeHelper<FString,unsigned_char> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString *local_58;
  undefined8 *local_50;
  ulonglong uVar16;
  
  uVar16 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res8 = 1;
  uVar11 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
           *(int *)&(this->CachedKeysAndValues).field_0x34;
  uVar14 = 0;
  uVar20 = 1;
  if (uVar11 == 0) goto LAB_14e4a8f6b;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar11);
  if (uVar11 < 4) {
    uVar15 = 1;
  }
  else {
    uVar15 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (undefined4)lVar8;
    uVar15 = (ulonglong)(uint)(1 << ((byte)lVar8 & 0x1f));
  }
  uVar11 = (uint)uVar15;
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14e4a8f6b;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar11 != 0) {
    uVar19 = uVar11;
    if (uVar11 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar19 = 0;
        goto LAB_14e4a8dbe;
      }
    }
    else {
LAB_14e4a8dbe:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar19,4);
    }
    if (0 < (int)uVar11) {
      uVar9 = uVar16;
      do {
        puVar7 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar4 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(puVar7 + uVar4 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  uVar20 = local_res8;
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar11 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    local_118 = 0;
    uStack_114 = (uint)local_res8;
    uStack_104 = 0;
    uStack_100 = 0;
    uVar15 = uVar16;
    if (uVar11 != 0) {
      puVar18 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar18 = (uint *)local_a8.Array;
      }
      uVar19 = *puVar18;
      uVar9 = uVar16;
      while (uVar19 == 0) {
        uStack_100 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_100;
        iVar6 = (int)uVar15;
        local_118 = iVar6 + 1;
        uVar15 = (ulonglong)local_118;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
        goto LAB_14e4a8eae;
        uVar19 = puVar18[(longlong)iVar6 + 1];
      }
      uStack_114 = -uVar19 & uVar19;
      uVar15 = (ulonglong)uStack_114 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res20 = (int)lVar8;
      uStack_104 = local_res20 + -1 + uStack_100;
      uVar15 = (ulonglong)uStack_104;
      if ((int)uVar11 < (int)uStack_104) {
LAB_14e4a8eae:
        uVar15 = (ulonglong)uVar11;
        uStack_104 = uVar11;
      }
    }
    local_a8._padding_ = CONCAT44(uStack_114,local_118);
    local_a8.CurrentBitIndex = uStack_104;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_fc;
    local_a8.BaseBitIndex = uStack_100;
    local_b4._4_8_ = __return_storage_ptr__;
    if ((int)uVar15 < (int)uVar11) {
      do {
        puVar13 = (undefined8 *)((longlong)(int)uVar15 * 0x20 + *(longlong *)local_b4._4_8_);
        if (*(int *)(puVar13 + 1) == 0) {
          pwVar10 = L"";
          uVar11 = uVar14;
        }
        else {
          pwVar10 = (wchar_t *)*puVar13;
          uVar11 = *(int *)(puVar13 + 1) - 1;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,pwVar10);
        uVar11 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar11;
        *(uint *)((longlong)puVar13 + 0x1c) = uVar11;
        puVar7 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar9 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(puVar7 + uVar9 * 4);
        *(int *)(puVar7 + uVar9 * 4) = (int)uVar15;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar15 = (ulonglong)(uint)local_a8.CurrentBitIndex;
        uVar20 = local_res8;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_14e4a8f6b:
  uStack_dc = (uint)uVar20;
  iVar6 = *(int *)&(this->CachedKeysAndValues).field_0x28;
  puVar7 = &(this->CachedKeysAndValues).field_0x10;
  local_c8 = 0;
  iStack_cc = 0;
  if (iVar6 != 0) {
    puVar18 = *(uint **)&(this->CachedKeysAndValues).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar7;
    }
    uVar11 = *puVar18;
    while (uVar11 == 0) {
      iVar12 = (int)uVar16;
      local_c8 = local_c8 + 0x20;
      uVar14 = iVar12 + 1;
      uVar16 = (ulonglong)uVar14;
      iStack_cc = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar14) goto LAB_14e4a8fef;
      uVar11 = puVar18[(longlong)iVar12 + 1];
    }
    uStack_dc = -uVar11 & uVar11;
    uVar16 = (ulonglong)uStack_dc * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_b8 = (int)lVar8;
    iStack_cc = local_c8 + -1 + local_b8;
    if (iVar6 < iStack_cc) {
      iStack_cc = iVar6;
    }
  }
LAB_14e4a8fef:
  iStack_c0 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
              *(int *)&(this->CachedKeysAndValues).field_0x34;
  uVar11 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
  uStack_d0 = 0xffffffff;
  uVar19 = uVar11 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_80._28_4_ = iStack_cc;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = puVar7;
  iStack_c4 = iStack_cc;
  local_88 = this;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
  if ((((int)uVar11 < 0) || (iVar6 < (int)uVar11)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
              *)(*pcVar1)();
    return pTVar5;
  }
  uVar14 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
  if (uVar11 != uVar14) {
    puVar17 = *(undefined1 **)&(this->CachedKeysAndValues).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar7;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar19 = uVar19 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14e4a90f0;
      uVar11 = *(uint *)(puVar17 + lVar8 * 4 + 4);
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar19;
    if ((int)uVar14 < (int)uVar11) {
      uVar11 = uVar14;
    }
  }
LAB_14e4a90f0:
  while( true ) {
    pTVar2 = local_88;
    if (*(int *)&(local_88->CachedKeysAndValues).field_0x8 -
        *(int *)&(local_88->CachedKeysAndValues).field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<unsigned_char,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar11) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar7)) && (pTVar2 == this))
    break;
    lVar8 = *(longlong *)&pTVar2->CachedKeysAndValues + (longlong)TStack_80.CurrentBitIndex * 0x48;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    FAttributeStorage::TAttributeHandle<FString,void>::Get
              ((TAttributeHandle<FString,void> *)(lVar8 + 0x10),&local_f8);
    FAttributeStorage::TAttributeHandle<unsigned_char,void>::Get
              ((TAttributeHandle<unsigned_char,void> *)(lVar8 + 0x28),(uchar *)&local_res8);
    local_58 = &local_f8;
    local_50 = &local_res8;
    TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,unsigned_char_&&>_>
              ((TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,(TPairInitializer<FString_&&,unsigned_char_&&> *)local_b4,
               (bool *)&local_58);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return __return_storage_ptr__;
}

