// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 49

// ~TMapAttributeHelper<FString,FString> @ 14e403e50

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::~TMapAttributeHelper<FString,FString>
          (TMapAttributeHelper<FString,FString> *this)

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
  TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetKeyAttribute @ 14e43ed30

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute
          (TMapAttributeHelper<int,int> *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar1);
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar1);
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

// GetKeyAttribute @ 14e43eee0

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute
          (TMapAttributeHelper<int,float> *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar1);
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar1);
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

// GetKeyAttribute @ 14e43f090

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute
          (TMapAttributeHelper<int,FString> *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar1);
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar1);
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

// GetKeyAttribute @ 14e43f240

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute
          (TMapAttributeHelper<FString,int> *this,FAttributeKey *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar1);
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar1);
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

// GetKeyAttribute @ 14e43f3f0

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute
          (TMapAttributeHelper<FString,float> *this,FAttributeKey *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar1);
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar1);
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

// GetKeyAttribute @ 14e43f5a0

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute
          (TMapAttributeHelper<FString,FString> *this,FAttributeKey *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
                        ::__l2::KeyIndex,L"_KeyIndex_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyIndex__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_18,iVar1,&local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + 0xf;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0x10;
  }
  ::FString::Reserve(&local_18,iVar1);
  iVar1 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
          ::__l2::KeyIndex.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
      ::__l2::KeyIndex.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (&local_18,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetKeyAttribute(int)const___ptr64'
             ::__l2::KeyIndex.Data.AllocatorInstance.Data,iVar1);
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

// GetValue @ 14e444b70

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::GetValue
          (TMapAttributeHelper<FString,int> *this,FString *param_1,int *param_2)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  uint uVar5;
  atomic<int> aVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  EAttributeStorageResult EVar9;
  int iVar10;
  wchar_t *pwVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar10 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar10 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar12;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e444be1:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494661>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x185,"AttributesPtr.IsValid()");
    pTVar12 = pTVar8;
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    aVar3 = pTVar12->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e444be1;
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar13 = aVar3 == aVar6;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar13);
    pTVar8 = pTVar12;
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) goto LAB_14e444be1;
    iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                        *)this,uVar5,param_1);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
      pTVar8 = (TReferenceControllerBase<1> *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
      }
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        if (*(FAttributeStorage **)&pTVar8[1].SharedReferenceCount == (FAttributeStorage *)0x0) {
          bVar13 = false;
        }
        else {
          EVar9 = FAttributeStorage::GetAttribute<int,void>
                            (*(FAttributeStorage **)&pTVar8[1].SharedReferenceCount,
                             (FAttributeKey *)(pTVar8 + 2),param_2);
          bVar13 = EVar9 == Operation_Success;
        }
        goto LAB_14e444c11;
      }
    }
  }
  bVar13 = false;
LAB_14e444c11:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return bVar13;
}

// GetValue @ 14e444cb0

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::GetValue
          (TMapAttributeHelper<FString,float> *this,FString *param_1,float *param_2)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  uint uVar5;
  atomic<int> aVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  EAttributeStorageResult EVar9;
  int iVar10;
  wchar_t *pwVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar10 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar10 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar12;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e444d21:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494661>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x185,"AttributesPtr.IsValid()");
    pTVar12 = pTVar8;
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    aVar3 = pTVar12->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e444d21;
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar13 = aVar3 == aVar6;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar13);
    pTVar8 = pTVar12;
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) goto LAB_14e444d21;
    iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                        *)this,uVar5,param_1);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
      pTVar8 = (TReferenceControllerBase<1> *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
      }
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        if (*(FAttributeStorage **)&pTVar8[1].SharedReferenceCount == (FAttributeStorage *)0x0) {
          bVar13 = false;
        }
        else {
          EVar9 = FAttributeStorage::GetAttribute<float,void>
                            (*(FAttributeStorage **)&pTVar8[1].SharedReferenceCount,
                             (FAttributeKey *)(pTVar8 + 2),param_2);
          bVar13 = EVar9 == Operation_Success;
        }
        goto LAB_14e444d51;
      }
    }
  }
  bVar13 = false;
LAB_14e444d51:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return bVar13;
}

// GetValue @ 14e444df0

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::GetValue
          (TMapAttributeHelper<FString,FString> *this,FString *param_1,FString *param_2)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  uint uVar5;
  atomic<int> aVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  EAttributeStorageResult EVar9;
  int iVar10;
  wchar_t *pwVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar10 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar10 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
  pTVar12 = (this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar12;
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e444e61:
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494661>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x185,"AttributesPtr.IsValid()");
    pTVar12 = pTVar8;
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    aVar3 = pTVar12->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e444e61;
      LOCK();
      aVar6 = pTVar12->SharedReferenceCount;
      bVar13 = aVar3 == aVar6;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar13);
    pTVar8 = pTVar12;
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) goto LAB_14e444e61;
    iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                        *)this,uVar5,param_1);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
      pTVar8 = (TReferenceControllerBase<1> *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
      }
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        if (*(FAttributeStorage **)&pTVar8[1].SharedReferenceCount == (FAttributeStorage *)0x0) {
          bVar13 = false;
        }
        else {
          EVar9 = FAttributeStorage::GetAttribute<FString,void>
                            (*(FAttributeStorage **)&pTVar8[1].SharedReferenceCount,
                             (FAttributeKey *)(pTVar8 + 2),param_2);
          bVar13 = EVar9 == Operation_Success;
        }
        goto LAB_14e444e91;
      }
    }
  }
  bVar13 = false;
LAB_14e444e91:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return bVar13;
}

// GetValueAttribute @ 14e444f30

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute
          (TMapAttributeHelper<int,int> *this,FAttributeKey *__return_storage_ptr__,int *param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar3 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_28,iVar3,&local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
  }
  ::FString::PrintfImpl(&local_18,L"%d");
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = 0;
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::Reserve(&local_28,iVar3 + iVar2);
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar1;
  }
  ::FString::AppendChars
            (&local_28,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::GetValueAttribute(int_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar3);
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = iVar1;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_28) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAttribute @ 14e445120

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute
          (TMapAttributeHelper<int,float> *this,FAttributeKey *__return_storage_ptr__,int *param_1)

{
  FScriptContainerElement *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar3 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_28,iVar3,&local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
  }
  ::FString::PrintfImpl(&local_18,L"%d");
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = 0;
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::Reserve(&local_28,iVar3 + iVar2);
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar1;
  }
  ::FString::AppendChars
            (&local_28,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::GetValueAttribute(int_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar3);
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = iVar1;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_28) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAttribute @ 14e445310

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute
          (TMapAttributeHelper<int,FString> *this,FAttributeKey *__return_storage_ptr__,int *param_1
          )

{
  FScriptContainerElement *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar3 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  _Src = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_28,iVar3,&local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
  }
  ::FString::PrintfImpl(&local_18,L"%d");
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  iVar1 = 0;
  iVar2 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::Reserve(&local_28,iVar3 + iVar2);
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar1;
  }
  ::FString::AppendChars
            (&local_28,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::GetValueAttribute(int_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar3);
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = iVar1;
  }
  ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
  (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Key).Data.ArrayNum = 0;
  (__return_storage_ptr__->Key).Data.ArrayMax = 0;
  if (&__return_storage_ptr__->Key != &local_28) {
    (__return_storage_ptr__->Key).Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data
    ;
    (__return_storage_ptr__->Key).Data.ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Key).Data.ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAttribute @ 14e445500

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute
          (TMapAttributeHelper<FString,int> *this,FAttributeKey *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FString local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar4 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  pFVar1 = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = iVar4;
  if (iVar4 == 0) {
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)&local_38,iVar4,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar4 * 2);
  }
  local_20 = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_20;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar5 * 2);
  }
  iVar4 = local_20 + -1;
  if (local_20 == 0) {
    iVar4 = 0;
  }
  iVar2 = 0;
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar2;
  }
  ::FString::Reserve(&local_38,iVar4 + iVar3);
  iVar4 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars
            (&local_38,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar4);
  iVar4 = local_20 + -1;
  if (local_20 == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data,iVar4);
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

// GetValueAttribute @ 14e445710

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute
          (TMapAttributeHelper<FString,float> *this,FAttributeKey *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FString local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar4 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  pFVar1 = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = iVar4;
  if (iVar4 == 0) {
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)&local_38,iVar4,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar4 * 2);
  }
  local_20 = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_20;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar5 * 2);
  }
  iVar4 = local_20 + -1;
  if (local_20 == 0) {
    iVar4 = 0;
  }
  iVar2 = 0;
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar2;
  }
  ::FString::Reserve(&local_38,iVar4 + iVar3);
  iVar4 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars
            (&local_38,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar4);
  iVar4 = local_20 + -1;
  if (local_20 == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data,iVar4);
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

// GetValueAttribute @ 14e445920

FAttributeKey * __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute
          (TMapAttributeHelper<FString,FString> *this,FAttributeKey *__return_storage_ptr__,
          FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FString local_38;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                        ::__l2::KeyChars,L"_Key_");
    atexit(`UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute'::__l2::
           _dynamic_atexit_destructor_for__KeyChars__);
    _Init_thread_footer(&`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar4 = (this->KeyCountHandle).Key.Key.Data.ArrayNum;
  pFVar1 = (this->KeyCountHandle).Key.Key.Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = iVar4;
  if (iVar4 == 0) {
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)&local_38,iVar4,&local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar4 * 2);
  }
  local_20 = (param_1->Data).ArrayNum;
  lVar5 = (longlong)local_20;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar5 * 2);
  }
  iVar4 = local_20 + -1;
  if (local_20 == 0) {
    iVar4 = 0;
  }
  iVar2 = 0;
  iVar3 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar3 = iVar2;
  }
  ::FString::Reserve(&local_38,iVar4 + iVar3);
  iVar4 = `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
          ::__l2::KeyChars.Data.ArrayNum + -1;
  if (`private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
      ::__l2::KeyChars.Data.ArrayNum == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars
            (&local_38,
             (wchar_t *)
             `private:_struct_UE::Interchange::FAttributeKey___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::GetValueAttribute(FString_const&___ptr64)const___ptr64'
             ::__l2::KeyChars.Data.AllocatorInstance.Data,iVar4);
  iVar4 = local_20 + -1;
  if (local_20 == 0) {
    iVar4 = iVar2;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data,iVar4);
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

// Initialize @ 14e446df0

void __thiscall
UE::Interchange::TMapAttributeHelper<int,int>::Initialize
          (TMapAttributeHelper<int,int> *this,
          TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FAttributeStorage *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EAttributeStorageResult EVar11;
  FAttributeKey *pFVar12;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
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
  pFVar5 = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,pFVar5,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayNum = (int)local_70;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
  }
  this_00 = param_1->Object;
  local_78.Data = (FScriptContainerElement *)0x0;
  lpCriticalSection = &this_00->StorageMutex;
  local_70 = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar10 = local_68.Key.Data.ArrayNum + -1;
    FVar7.Data = local_68.Key.Data.AllocatorInstance.Data;
    if (local_68.Key.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar7.Data);
    iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<UE::Interchange::FAttributeKey>
                       ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                         *)this_00,uVar9,&local_68);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar10 == -1) {
      local_res10[0] = 0;
      EVar11 = FAttributeStorage::RegisterAttribute<int,void>
                         (param_1->Object,&local_68,local_res10,None);
      if ((EVar11 != Operation_Success) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result == EAttributeStorageResult::Operation_Success",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x135,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_58,&local_68,param_1->Object);
      (this->KeyCountHandle).AttributeStorage = local_58.AttributeStorage;
      pFVar12 = &(this->KeyCountHandle).Key;
      if (pFVar12 != &local_58.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_58.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_58.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_58.Key.Key.Data.ArrayMax;
        local_58.Key.Key.Data.ArrayNum = 0;
        local_58.Key.Key.Data.ArrayMax = 0;
        local_58.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
      }
    }
    else {
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,&local_68,param_1->Object);
      pFVar12 = &(this->KeyCountHandle).Key;
      (this->KeyCountHandle).AttributeStorage = local_40.AttributeStorage;
      if (pFVar12 != &local_40.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_40.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_40.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_40.Key.Key.Data.ArrayMax;
        local_40.Key.Key.Data.ArrayNum = 0;
        local_40.Key.Key.Data.ArrayMax = 0;
        local_40.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      RebuildCache(this);
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
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Initialize @ 14e447110

void __thiscall
UE::Interchange::TMapAttributeHelper<int,float>::Initialize
          (TMapAttributeHelper<int,float> *this,
          TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FAttributeStorage *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EAttributeStorageResult EVar11;
  FAttributeKey *pFVar12;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
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
  pFVar5 = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,pFVar5,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayNum = (int)local_70;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
  }
  this_00 = param_1->Object;
  local_78.Data = (FScriptContainerElement *)0x0;
  lpCriticalSection = &this_00->StorageMutex;
  local_70 = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar10 = local_68.Key.Data.ArrayNum + -1;
    FVar7.Data = local_68.Key.Data.AllocatorInstance.Data;
    if (local_68.Key.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar7.Data);
    iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<UE::Interchange::FAttributeKey>
                       ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                         *)this_00,uVar9,&local_68);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar10 == -1) {
      local_res10[0] = 0;
      EVar11 = FAttributeStorage::RegisterAttribute<int,void>
                         (param_1->Object,&local_68,local_res10,None);
      if ((EVar11 != Operation_Success) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result == EAttributeStorageResult::Operation_Success",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x135,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_58,&local_68,param_1->Object);
      (this->KeyCountHandle).AttributeStorage = local_58.AttributeStorage;
      pFVar12 = &(this->KeyCountHandle).Key;
      if (pFVar12 != &local_58.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_58.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_58.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_58.Key.Key.Data.ArrayMax;
        local_58.Key.Key.Data.ArrayNum = 0;
        local_58.Key.Key.Data.ArrayMax = 0;
        local_58.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
      }
    }
    else {
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,&local_68,param_1->Object);
      pFVar12 = &(this->KeyCountHandle).Key;
      (this->KeyCountHandle).AttributeStorage = local_40.AttributeStorage;
      if (pFVar12 != &local_40.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_40.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_40.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_40.Key.Key.Data.ArrayMax;
        local_40.Key.Key.Data.ArrayNum = 0;
        local_40.Key.Key.Data.ArrayMax = 0;
        local_40.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      RebuildCache(this);
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
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Initialize @ 14e447430

void __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::Initialize
          (TMapAttributeHelper<int,FString> *this,
          TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FAttributeStorage *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EAttributeStorageResult EVar11;
  FAttributeKey *pFVar12;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
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
  pFVar5 = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,pFVar5,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayNum = (int)local_70;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
  }
  this_00 = param_1->Object;
  local_78.Data = (FScriptContainerElement *)0x0;
  lpCriticalSection = &this_00->StorageMutex;
  local_70 = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar10 = local_68.Key.Data.ArrayNum + -1;
    FVar7.Data = local_68.Key.Data.AllocatorInstance.Data;
    if (local_68.Key.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar7.Data);
    iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<UE::Interchange::FAttributeKey>
                       ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                         *)this_00,uVar9,&local_68);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar10 == -1) {
      local_res10[0] = 0;
      EVar11 = FAttributeStorage::RegisterAttribute<int,void>
                         (param_1->Object,&local_68,local_res10,None);
      if ((EVar11 != Operation_Success) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result == EAttributeStorageResult::Operation_Success",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x135,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_58,&local_68,param_1->Object);
      (this->KeyCountHandle).AttributeStorage = local_58.AttributeStorage;
      pFVar12 = &(this->KeyCountHandle).Key;
      if (pFVar12 != &local_58.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_58.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_58.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_58.Key.Key.Data.ArrayMax;
        local_58.Key.Key.Data.ArrayNum = 0;
        local_58.Key.Key.Data.ArrayMax = 0;
        local_58.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
      }
    }
    else {
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,&local_68,param_1->Object);
      pFVar12 = &(this->KeyCountHandle).Key;
      (this->KeyCountHandle).AttributeStorage = local_40.AttributeStorage;
      if (pFVar12 != &local_40.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_40.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_40.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_40.Key.Key.Data.ArrayMax;
        local_40.Key.Key.Data.ArrayNum = 0;
        local_40.Key.Key.Data.ArrayMax = 0;
        local_40.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      RebuildCache(this);
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
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Initialize @ 14e447750

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::Initialize
          (TMapAttributeHelper<FString,int> *this,
          TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FAttributeStorage *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EAttributeStorageResult EVar11;
  FAttributeKey *pFVar12;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
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
  pFVar5 = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,pFVar5,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayNum = (int)local_70;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
  }
  this_00 = param_1->Object;
  local_78.Data = (FScriptContainerElement *)0x0;
  lpCriticalSection = &this_00->StorageMutex;
  local_70 = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar10 = local_68.Key.Data.ArrayNum + -1;
    FVar7.Data = local_68.Key.Data.AllocatorInstance.Data;
    if (local_68.Key.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar7.Data);
    iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<UE::Interchange::FAttributeKey>
                       ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                         *)this_00,uVar9,&local_68);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar10 == -1) {
      local_res10[0] = 0;
      EVar11 = FAttributeStorage::RegisterAttribute<int,void>
                         (param_1->Object,&local_68,local_res10,None);
      if ((EVar11 != Operation_Success) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result == EAttributeStorageResult::Operation_Success",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x135,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_58,&local_68,param_1->Object);
      (this->KeyCountHandle).AttributeStorage = local_58.AttributeStorage;
      pFVar12 = &(this->KeyCountHandle).Key;
      if (pFVar12 != &local_58.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_58.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_58.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_58.Key.Key.Data.ArrayMax;
        local_58.Key.Key.Data.ArrayNum = 0;
        local_58.Key.Key.Data.ArrayMax = 0;
        local_58.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
      }
    }
    else {
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,&local_68,param_1->Object);
      pFVar12 = &(this->KeyCountHandle).Key;
      (this->KeyCountHandle).AttributeStorage = local_40.AttributeStorage;
      if (pFVar12 != &local_40.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_40.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_40.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_40.Key.Key.Data.ArrayMax;
        local_40.Key.Key.Data.ArrayNum = 0;
        local_40.Key.Key.Data.ArrayMax = 0;
        local_40.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      RebuildCache(this);
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
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Initialize @ 14e447a70

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::Initialize
          (TMapAttributeHelper<FString,float> *this,
          TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FAttributeStorage *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EAttributeStorageResult EVar11;
  FAttributeKey *pFVar12;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
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
  pFVar5 = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,pFVar5,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayNum = (int)local_70;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
  }
  this_00 = param_1->Object;
  local_78.Data = (FScriptContainerElement *)0x0;
  lpCriticalSection = &this_00->StorageMutex;
  local_70 = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar10 = local_68.Key.Data.ArrayNum + -1;
    FVar7.Data = local_68.Key.Data.AllocatorInstance.Data;
    if (local_68.Key.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar7.Data);
    iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<UE::Interchange::FAttributeKey>
                       ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                         *)this_00,uVar9,&local_68);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar10 == -1) {
      local_res10[0] = 0;
      EVar11 = FAttributeStorage::RegisterAttribute<int,void>
                         (param_1->Object,&local_68,local_res10,None);
      if ((EVar11 != Operation_Success) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result == EAttributeStorageResult::Operation_Success",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x135,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_58,&local_68,param_1->Object);
      (this->KeyCountHandle).AttributeStorage = local_58.AttributeStorage;
      pFVar12 = &(this->KeyCountHandle).Key;
      if (pFVar12 != &local_58.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_58.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_58.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_58.Key.Key.Data.ArrayMax;
        local_58.Key.Key.Data.ArrayNum = 0;
        local_58.Key.Key.Data.ArrayMax = 0;
        local_58.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
      }
    }
    else {
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,&local_68,param_1->Object);
      pFVar12 = &(this->KeyCountHandle).Key;
      (this->KeyCountHandle).AttributeStorage = local_40.AttributeStorage;
      if (pFVar12 != &local_40.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_40.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_40.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_40.Key.Key.Data.ArrayMax;
        local_40.Key.Key.Data.ArrayNum = 0;
        local_40.Key.Key.Data.ArrayMax = 0;
        local_40.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      RebuildCache(this);
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
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Initialize @ 14e447d90

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize
          (TMapAttributeHelper<FString,FString> *this,
          TSharedRef<UE::Interchange::FAttributeStorage,1> *param_1,FString *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FAttributeStorage *this_00;
  code *pcVar6;
  ForAnyElementType FVar7;
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar8;
  uint uVar9;
  int iVar10;
  EAttributeStorageResult EVar11;
  FAttributeKey *pFVar12;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name301,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name301,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::Initialize(TSharedRef<UE::Interchange::FAttributeStorage,1>_const&___ptr64,FString_const&___ptr64)___ptr64'
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
  pFVar5 = (param_2->Data).AllocatorInstance.Data;
  local_68.Key.Data.ArrayMax = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  if (local_68.Key.Data.ArrayNum != 0) {
    local_70._0_4_ = local_68.Key.Data.ArrayNum;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Key.Data.ArrayNum,0,&local_78,local_68.Key.Data.ArrayNum,
               (int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,pFVar5,(longlong)local_68.Key.Data.ArrayNum * 2);
    local_68.Key.Data.AllocatorInstance.Data = local_78.Data;
    local_68.Key.Data.ArrayNum = (int)local_70;
    local_68.Key.Data.ArrayMax = local_70._4_4_;
  }
  this_00 = param_1->Object;
  local_78.Data = (FScriptContainerElement *)0x0;
  lpCriticalSection = &this_00->StorageMutex;
  local_70 = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar10 = local_68.Key.Data.ArrayNum + -1;
    FVar7.Data = local_68.Key.Data.AllocatorInstance.Data;
    if (local_68.Key.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar7.Data = (FScriptContainerElement *)L"";
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar7.Data);
    iVar10 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<UE::Interchange::FAttributeKey>
                       ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                         *)this_00,uVar9,&local_68);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (iVar10 == -1) {
      local_res10[0] = 0;
      EVar11 = FAttributeStorage::RegisterAttribute<int,void>
                         (param_1->Object,&local_68,local_res10,None);
      if ((EVar11 != Operation_Success) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result == EAttributeStorageResult::Operation_Success",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                             ,0x135,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_58,&local_68,param_1->Object);
      (this->KeyCountHandle).AttributeStorage = local_58.AttributeStorage;
      pFVar12 = &(this->KeyCountHandle).Key;
      if (pFVar12 != &local_58.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_58.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_58.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_58.Key.Key.Data.ArrayMax;
        local_58.Key.Key.Data.ArrayNum = 0;
        local_58.Key.Key.Data.ArrayMax = 0;
        local_58.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Key.Key.Data.AllocatorInstance.Data);
      }
    }
    else {
      FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                (&local_40,&local_68,param_1->Object);
      pFVar12 = &(this->KeyCountHandle).Key;
      (this->KeyCountHandle).AttributeStorage = local_40.AttributeStorage;
      if (pFVar12 != &local_40.Key) {
        pFVar5 = (pFVar12->Key).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (pFVar12->Key).Data.AllocatorInstance.Data = local_40.Key.Key.Data.AllocatorInstance.Data;
        (this->KeyCountHandle).Key.Key.Data.ArrayNum = local_40.Key.Key.Data.ArrayNum;
        (this->KeyCountHandle).Key.Key.Data.ArrayMax = local_40.Key.Key.Data.ArrayMax;
        local_40.Key.Key.Data.ArrayNum = 0;
        local_40.Key.Key.Data.ArrayMax = 0;
        local_40.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_40.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Key.Key.Data.AllocatorInstance.Data);
      }
      RebuildCache(this);
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
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// RebuildCache @ 14e44e940

void __thiscall
UE::Interchange::TMapAttributeHelper<int,int>::RebuildCache(TMapAttributeHelper<int,int> *this)

{
  FAttributeStorage *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  EAttributeStorageResult EVar8;
  FAttributeKey *pFVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  TAttributeHandle<int,void> local_d8;
  TAttributeHandle<int,void> local_c0;
  FMemScope local_a8;
  int *local_a0;
  FAttributeStorage **local_98;
  FAttributeStorage *local_90;
  FString local_88;
  FAttributeStorage *local_78;
  FString local_70;
  FAttributeKey local_60;
  FAttributeKey local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            (&local_a8,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,int>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e44e9fc;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pFVar1 = (this->Attributes).Object;
    if ((((pFVar1 != (FAttributeStorage *)0x0) &&
         (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0)) &&
        (bVar12 = FAttributeStorage::ContainAttribute(pFVar2,&(this->KeyCountHandle).Key), bVar12))
       && (((EVar7 = FAttributeStorage::GetAttributeType
                               ((this->KeyCountHandle).AttributeStorage,&(this->KeyCountHandle).Key)
            , EVar7 == Int32 &&
            (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0))
           && (EVar8 = FAttributeStorage::GetAttribute<int,void>
                                 (pFVar2,&(this->KeyCountHandle).Key,local_res18),
              iVar5 = local_res18[0], EVar8 == Operation_Success)))) {
      TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res18[0]);
      iVar10 = 0;
      if (0 < iVar5) {
        do {
          pFVar9 = GetKeyAttribute(this,&local_60,iVar10);
          FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                    (&local_d8,pFVar9,pFVar1);
          if (local_60.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Key.Data.AllocatorInstance.Data);
          }
          if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
              (bVar12 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key)
              , !bVar12)) ||
             (EVar7 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
             EVar7 != Int32)) {
            bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494779>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
              FAttributeStorage::GetAttribute<int,void>
                        (local_d8.AttributeStorage,&local_d8.Key,local_res10);
            }
            pFVar9 = GetValueAttribute(this,&local_50,local_res10);
            FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                      (&local_c0,pFVar9,pFVar1);
            if (local_50.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Key.Data.AllocatorInstance.Data);
            }
            if (((local_c0.AttributeStorage == (FAttributeStorage *)0x0) ||
                (bVar12 = FAttributeStorage::ContainAttribute
                                    (local_c0.AttributeStorage,&local_c0.Key), !bVar12)) ||
               (EVar7 = FAttributeStorage::GetAttributeType(local_c0.AttributeStorage,&local_c0.Key)
               , EVar7 != Int32)) {
              bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4942768438637494788>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                  ,0x204,"ValueAttribute.IsValid()");
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              local_90 = local_d8.AttributeStorage;
              ::FString::FString(&local_88,&local_d8.Key.Key);
              local_78 = local_c0.AttributeStorage;
              ::FString::FString(&local_70,&local_c0.Key.Key);
              local_a0 = local_res10;
              local_98 = &local_90;
              TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_>
                        ((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                          *)this,(TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
                                  *)(local_res18 + 2),(bool *)&local_a0);
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            if (local_c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Key.Key.Data.AllocatorInstance.Data);
            }
          }
          if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_res18[0]);
      }
    }
  }
LAB_14e44e9fc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FMemScope::~FMemScope(&local_a8);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RebuildCache @ 14e44ecc0

void __thiscall
UE::Interchange::TMapAttributeHelper<int,float>::RebuildCache(TMapAttributeHelper<int,float> *this)

{
  FAttributeStorage *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  EAttributeStorageResult EVar8;
  FAttributeKey *pFVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  TAttributeHandle<int,void> local_d8;
  TAttributeHandle<float,void> local_c0;
  FMemScope local_a8;
  int *local_a0;
  FAttributeStorage **local_98;
  FAttributeStorage *local_90;
  FString local_88;
  FAttributeStorage *local_78;
  FString local_70;
  FAttributeKey local_60;
  FAttributeKey local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            (&local_a8,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,float>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e44ed7c;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pFVar1 = (this->Attributes).Object;
    if ((((pFVar1 != (FAttributeStorage *)0x0) &&
         (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0)) &&
        (bVar12 = FAttributeStorage::ContainAttribute(pFVar2,&(this->KeyCountHandle).Key), bVar12))
       && (((EVar7 = FAttributeStorage::GetAttributeType
                               ((this->KeyCountHandle).AttributeStorage,&(this->KeyCountHandle).Key)
            , EVar7 == Int32 &&
            (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0))
           && (EVar8 = FAttributeStorage::GetAttribute<int,void>
                                 (pFVar2,&(this->KeyCountHandle).Key,local_res18),
              iVar5 = local_res18[0], EVar8 == Operation_Success)))) {
      TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res18[0]);
      iVar10 = 0;
      if (0 < iVar5) {
        do {
          pFVar9 = GetKeyAttribute(this,&local_60,iVar10);
          FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                    (&local_d8,pFVar9,pFVar1);
          if (local_60.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Key.Data.AllocatorInstance.Data);
          }
          if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
              (bVar12 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key)
              , !bVar12)) ||
             (EVar7 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
             EVar7 != Int32)) {
            bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494779>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
              FAttributeStorage::GetAttribute<int,void>
                        (local_d8.AttributeStorage,&local_d8.Key,local_res10);
            }
            pFVar9 = GetValueAttribute(this,&local_50,local_res10);
            FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
                      (&local_c0,pFVar9,pFVar1);
            if (local_50.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Key.Data.AllocatorInstance.Data);
            }
            if (((local_c0.AttributeStorage == (FAttributeStorage *)0x0) ||
                (bVar12 = FAttributeStorage::ContainAttribute
                                    (local_c0.AttributeStorage,&local_c0.Key), !bVar12)) ||
               (EVar7 = FAttributeStorage::GetAttributeType(local_c0.AttributeStorage,&local_c0.Key)
               , EVar7 != Float)) {
              bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4942768438637494788>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                  ,0x204,"ValueAttribute.IsValid()");
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              local_90 = local_d8.AttributeStorage;
              ::FString::FString(&local_88,&local_d8.Key.Key);
              local_78 = local_c0.AttributeStorage;
              ::FString::FString(&local_70,&local_c0.Key.Key);
              local_a0 = local_res10;
              local_98 = &local_90;
              TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_>
                        ((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                          *)this,(TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
                                  *)(local_res18 + 2),(bool *)&local_a0);
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            if (local_c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Key.Key.Data.AllocatorInstance.Data);
            }
          }
          if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_res18[0]);
      }
    }
  }
LAB_14e44ed7c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FMemScope::~FMemScope(&local_a8);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RebuildCache @ 14e44f040

void __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache
          (TMapAttributeHelper<int,FString> *this)

{
  FAttributeStorage *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  EAttributeStorageResult EVar8;
  FAttributeKey *pFVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  int local_res18 [4];
  TAttributeHandle<int,void> local_d8;
  TAttributeHandle<FString,void> local_c0;
  FMemScope local_a8;
  int *local_a0;
  FAttributeStorage **local_98;
  FAttributeStorage *local_90;
  FString local_88;
  FAttributeStorage *local_78;
  FString local_70;
  FAttributeKey local_60;
  FAttributeKey local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            (&local_a8,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<int,FString>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e44f0fc;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pFVar1 = (this->Attributes).Object;
    if ((((pFVar1 != (FAttributeStorage *)0x0) &&
         (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0)) &&
        (bVar12 = FAttributeStorage::ContainAttribute(pFVar2,&(this->KeyCountHandle).Key), bVar12))
       && (((EVar7 = FAttributeStorage::GetAttributeType
                               ((this->KeyCountHandle).AttributeStorage,&(this->KeyCountHandle).Key)
            , EVar7 == Int32 &&
            (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0))
           && (EVar8 = FAttributeStorage::GetAttribute<int,void>
                                 (pFVar2,&(this->KeyCountHandle).Key,local_res18),
              iVar5 = local_res18[0], EVar8 == Operation_Success)))) {
      TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res18[0]);
      iVar10 = 0;
      if (0 < iVar5) {
        do {
          pFVar9 = GetKeyAttribute(this,&local_60,iVar10);
          FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                    (&local_d8,pFVar9,pFVar1);
          if (local_60.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Key.Data.AllocatorInstance.Data);
          }
          if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
              (bVar12 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key)
              , !bVar12)) ||
             (EVar7 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
             EVar7 != Int32)) {
            bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494779>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
              FAttributeStorage::GetAttribute<int,void>
                        (local_d8.AttributeStorage,&local_d8.Key,local_res10);
            }
            pFVar9 = GetValueAttribute(this,&local_50,local_res10);
            FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                      (&local_c0,pFVar9,pFVar1);
            if (local_50.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Key.Data.AllocatorInstance.Data);
            }
            if (((local_c0.AttributeStorage == (FAttributeStorage *)0x0) ||
                (bVar12 = FAttributeStorage::ContainAttribute
                                    (local_c0.AttributeStorage,&local_c0.Key), !bVar12)) ||
               (EVar7 = FAttributeStorage::GetAttributeType(local_c0.AttributeStorage,&local_c0.Key)
               , EVar7 != String)) {
              bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4942768438637494788>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                  ,0x204,"ValueAttribute.IsValid()");
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              local_90 = local_d8.AttributeStorage;
              ::FString::FString(&local_88,&local_d8.Key.Key);
              local_78 = local_c0.AttributeStorage;
              ::FString::FString(&local_70,&local_c0.Key.Key);
              local_a0 = local_res10;
              local_98 = &local_90;
              TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_>
                        ((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                          *)this,(TPairInitializer<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
                                  *)(local_res18 + 2),(bool *)&local_a0);
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
            if (local_c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Key.Key.Data.AllocatorInstance.Data);
            }
          }
          if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_res18[0]);
      }
    }
  }
LAB_14e44f0fc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FMemScope::~FMemScope(&local_a8);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RebuildCache @ 14e44f3c0

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::RebuildCache
          (TMapAttributeHelper<FString,int> *this)

{
  FAttributeStorage *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  EAttributeStorageResult EVar8;
  FAttributeKey *pFVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
  local_res18;
  FString local_e8;
  TAttributeHandle<FString,void> local_d8;
  TAttributeHandle<int,void> local_c0;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&local_res18.Value,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,int>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e44f47c;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pFVar1 = (this->Attributes).Object;
    if ((((pFVar1 != (FAttributeStorage *)0x0) &&
         (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0)) &&
        (bVar12 = FAttributeStorage::ContainAttribute(pFVar2,&(this->KeyCountHandle).Key), bVar12))
       && (((EVar7 = FAttributeStorage::GetAttributeType
                               ((this->KeyCountHandle).AttributeStorage,&(this->KeyCountHandle).Key)
            , EVar7 == Int32 &&
            (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0))
           && (EVar8 = FAttributeStorage::GetAttribute<int,void>
                                 (pFVar2,&(this->KeyCountHandle).Key,local_res10),
              iVar5 = local_res10[0], EVar8 == Operation_Success)))) {
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res10[0]);
      iVar10 = 0;
      if (0 < iVar5) {
        do {
          pFVar9 = GetKeyAttribute(this,&local_68,iVar10);
          FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                    (&local_d8,pFVar9,pFVar1);
          if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
          }
          if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
              (bVar12 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key)
              , !bVar12)) ||
             (EVar7 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
             EVar7 != String)) {
            bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494779>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
              FAttributeStorage::GetAttribute<FString,void>
                        (local_d8.AttributeStorage,&local_d8.Key,&local_e8);
            }
            pFVar9 = GetValueAttribute(this,&local_58,&local_e8);
            FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                      (&local_c0,pFVar9,pFVar1);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            if (((local_c0.AttributeStorage == (FAttributeStorage *)0x0) ||
                (bVar12 = FAttributeStorage::ContainAttribute
                                    (local_c0.AttributeStorage,&local_c0.Key), !bVar12)) ||
               (EVar7 = FAttributeStorage::GetAttributeType(local_c0.AttributeStorage,&local_c0.Key)
               , EVar7 != Int32)) {
              bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4942768438637494788>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                  ,0x204,"ValueAttribute.IsValid()");
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              local_98 = local_d8.AttributeStorage;
              ::FString::FString(&local_90,&local_d8.Key.Key);
              local_80 = local_c0.AttributeStorage;
              ::FString::FString(&local_78,&local_c0.Key.Key);
              local_a8 = &local_e8;
              local_a0 = &local_98;
              TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                          *)this,&local_res18,(bool *)&local_a8);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
            }
            if (local_c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_res10[0]);
      }
    }
  }
LAB_14e44f47c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RebuildCache @ 14e44f770

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::RebuildCache
          (TMapAttributeHelper<FString,float> *this)

{
  FAttributeStorage *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  EAttributeStorageResult EVar8;
  FAttributeKey *pFVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
  local_res18;
  FString local_e8;
  TAttributeHandle<FString,void> local_d8;
  TAttributeHandle<float,void> local_c0;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&local_res18.Value,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,float>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e44f82c;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pFVar1 = (this->Attributes).Object;
    if ((((pFVar1 != (FAttributeStorage *)0x0) &&
         (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0)) &&
        (bVar12 = FAttributeStorage::ContainAttribute(pFVar2,&(this->KeyCountHandle).Key), bVar12))
       && (((EVar7 = FAttributeStorage::GetAttributeType
                               ((this->KeyCountHandle).AttributeStorage,&(this->KeyCountHandle).Key)
            , EVar7 == Int32 &&
            (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0))
           && (EVar8 = FAttributeStorage::GetAttribute<int,void>
                                 (pFVar2,&(this->KeyCountHandle).Key,local_res10),
              iVar5 = local_res10[0], EVar8 == Operation_Success)))) {
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res10[0]);
      iVar10 = 0;
      if (0 < iVar5) {
        do {
          pFVar9 = GetKeyAttribute(this,&local_68,iVar10);
          FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                    (&local_d8,pFVar9,pFVar1);
          if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
          }
          if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
              (bVar12 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key)
              , !bVar12)) ||
             (EVar7 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
             EVar7 != String)) {
            bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494779>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
              FAttributeStorage::GetAttribute<FString,void>
                        (local_d8.AttributeStorage,&local_d8.Key,&local_e8);
            }
            pFVar9 = GetValueAttribute(this,&local_58,&local_e8);
            FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
                      (&local_c0,pFVar9,pFVar1);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            if (((local_c0.AttributeStorage == (FAttributeStorage *)0x0) ||
                (bVar12 = FAttributeStorage::ContainAttribute
                                    (local_c0.AttributeStorage,&local_c0.Key), !bVar12)) ||
               (EVar7 = FAttributeStorage::GetAttributeType(local_c0.AttributeStorage,&local_c0.Key)
               , EVar7 != Float)) {
              bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4942768438637494788>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                  ,0x204,"ValueAttribute.IsValid()");
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              local_98 = local_d8.AttributeStorage;
              ::FString::FString(&local_90,&local_d8.Key.Key);
              local_80 = local_c0.AttributeStorage;
              ::FString::FString(&local_78,&local_c0.Key.Key);
              local_a8 = &local_e8;
              local_a0 = &local_98;
              TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                          *)this,&local_res18,(bool *)&local_a8);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
            }
            if (local_c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_res10[0]);
      }
    }
  }
LAB_14e44f82c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RebuildCache @ 14e44fb20

void __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache
          (TMapAttributeHelper<FString,FString> *this)

{
  FAttributeStorage *pFVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  int iVar5;
  atomic<int> aVar6;
  EAttributeTypes EVar7;
  EAttributeStorageResult EVar8;
  FAttributeKey *pFVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
  local_res18;
  FString local_e8;
  TAttributeHandle<FString,void> local_d8;
  TAttributeHandle<FString,void> local_c0;
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
       `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache(void)___ptr64'
                    ::__l2::LLMScope_Name494,L"Interchange");
    _Init_thread_footer(&`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache(void)___ptr64'
             ::__l2::LLMScope_Name494,false,None,Default,true);
  FMemScope::FMemScope
            ((FMemScope *)&local_res18.Value,
             &`public:_void___cdecl_UE::Interchange::TMapAttributeHelper<FString,FString>::RebuildCache(void)___ptr64'
              ::__l2::LLMScope_Name494,true);
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e44fbdc;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pFVar1 = (this->Attributes).Object;
    if ((((pFVar1 != (FAttributeStorage *)0x0) &&
         (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0)) &&
        (bVar12 = FAttributeStorage::ContainAttribute(pFVar2,&(this->KeyCountHandle).Key), bVar12))
       && (((EVar7 = FAttributeStorage::GetAttributeType
                               ((this->KeyCountHandle).AttributeStorage,&(this->KeyCountHandle).Key)
            , EVar7 == Int32 &&
            (pFVar2 = (this->KeyCountHandle).AttributeStorage, pFVar2 != (FAttributeStorage *)0x0))
           && (EVar8 = FAttributeStorage::GetAttribute<int,void>
                                 (pFVar2,&(this->KeyCountHandle).Key,local_res10),
              iVar5 = local_res10[0], EVar8 == Operation_Success)))) {
      TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
               *)this,local_res10[0]);
      iVar10 = 0;
      if (0 < iVar5) {
        do {
          pFVar9 = GetKeyAttribute(this,&local_68,iVar10);
          FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                    (&local_d8,pFVar9,pFVar1);
          if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
          }
          if (((local_d8.AttributeStorage == (FAttributeStorage *)0x0) ||
              (bVar12 = FAttributeStorage::ContainAttribute(local_d8.AttributeStorage,&local_d8.Key)
              , !bVar12)) ||
             (EVar7 = FAttributeStorage::GetAttributeType(local_d8.AttributeStorage,&local_d8.Key),
             EVar7 != String)) {
            bVar12 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494779>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x1fb,"KeyAttribute.IsValid()");
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            if (local_d8.AttributeStorage != (FAttributeStorage *)0x0) {
              FAttributeStorage::GetAttribute<FString,void>
                        (local_d8.AttributeStorage,&local_d8.Key,&local_e8);
            }
            pFVar9 = GetValueAttribute(this,&local_58,&local_e8);
            FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                      (&local_c0,pFVar9,pFVar1);
            if (local_58.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Key.Data.AllocatorInstance.Data);
            }
            if (((local_c0.AttributeStorage == (FAttributeStorage *)0x0) ||
                (bVar12 = FAttributeStorage::ContainAttribute
                                    (local_c0.AttributeStorage,&local_c0.Key), !bVar12)) ||
               (EVar7 = FAttributeStorage::GetAttributeType(local_c0.AttributeStorage,&local_c0.Key)
               , EVar7 != String)) {
              bVar12 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4942768438637494788>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                  ,0x204,"ValueAttribute.IsValid()");
              if (bVar12) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              local_98 = local_d8.AttributeStorage;
              ::FString::FString(&local_90,&local_d8.Key.Key);
              local_80 = local_c0.AttributeStorage;
              ::FString::FString(&local_78,&local_c0.Key.Key);
              local_a8 = &local_e8;
              local_a0 = &local_98;
              TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                          *)this,&local_res18,(bool *)&local_a8);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
            }
            if (local_c0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Key.Key.Data.AllocatorInstance.Data);
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
          if (local_d8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Key.Key.Data.AllocatorInstance.Data);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_res10[0]);
      }
    }
  }
LAB_14e44fbdc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RemoveBySwap @ 14e452840

bool __thiscall
UE::Interchange::TMapAttributeHelper<int,int>::RemoveBySwap
          (TMapAttributeHelper<int,int> *this,uint param_1,int *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
          *param_3)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FAttributeStorage *pFVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  ForAnyElementType FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  EAttributeTypes EVar10;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar11;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar12;
  FString *pFVar13;
  EAttributeStorageResult EVar14;
  FAttributeAllocationInfo *pFVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  FAttributeAllocationInfo *pFVar18;
  FAttributeKey *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  FAttributeAllocationInfo *pFVar21;
  bool bVar22;
  int local_res8 [2];
  uint local_res10;
  int *local_res18;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *local_res20;
  FAttributeStorage *local_d8;
  FString local_d0;
  int local_c0 [2];
  FAttributeKey local_b8;
  FAttributeKey local_a8;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pTVar20 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar20->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e452894;
      }
      LOCK();
      aVar7 = pTVar20->SharedReferenceCount;
      bVar22 = aVar4 == aVar7;
      if (bVar22) {
        pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar22);
    pFVar2 = (this->Attributes).Object;
    if (pFVar2 != (FAttributeStorage *)0x0) {
      pFVar15 = (FAttributeAllocationInfo *)
                (this->Attributes).WeakReferenceCount.ReferenceController;
      pFVar18 = (FAttributeAllocationInfo *)0x0;
      pFVar21 = pFVar15;
      if (pFVar15 == (FAttributeAllocationInfo *)0x0) {
LAB_14e452916:
        bVar22 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494824>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x228,"AttributesPtr.IsValid()");
        if (bVar22) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_d8 = (FAttributeStorage *)0x0;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar21);
      }
      else {
        aVar4 = *(atomic<int> *)&(pFVar15->Offsets).ArrayNum;
        do {
          pFVar21 = pFVar18;
          if (aVar4 == (atomic<int>)0x0) goto LAB_14e452916;
          paVar1 = (atomic<int> *)&(pFVar15->Offsets).ArrayNum;
          LOCK();
          aVar7 = *paVar1;
          bVar22 = aVar4 == aVar7;
          if (bVar22) {
            *paVar1 = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar22);
        local_d8 = (this->Attributes).Object;
        pFVar21 = pFVar15;
        if (local_d8 == (FAttributeStorage *)0x0) goto LAB_14e452916;
        pFVar13 = &GetKeyAttribute(this,&local_88,
                                   (*(int *)&(this->CachedKeysAndValues).field_0x8 -
                                   *(int *)&(this->CachedKeysAndValues).field_0x34) + -1)->Key;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        ::FString::operator=(&local_d0,pFVar13);
        FVar5.Data = local_d0.Data.AllocatorInstance.Data;
        iVar9 = 0;
        if (local_d8 == (FAttributeStorage *)0x0) {
          lVar17 = (longlong)local_d0.Data.ArrayNum;
          local_b8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
          if (local_d0.Data.ArrayNum == 0) {
            local_b8.Key.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                       local_d0.Data.ArrayNum,&local_b8.Key.Data.ArrayMax);
            memcpy(local_b8.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
          }
          pFVar13 = ::FString::FString(&local_78,L"GetAttributeHandle");
          pFVar19 = &local_b8;
          EVar14 = Operation_Error_InvalidStorage;
LAB_14e452c39:
          LogAttributeStorageErrors(EVar14,pFVar13,pFVar19);
        }
        else {
          lpCriticalSection = &local_d8->StorageMutex;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (local_d0.Data.ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            iVar9 = local_d0.Data.ArrayNum + -1;
            pwVar16 = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
          }
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar16);
          iVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<UE::Interchange::FAttributeKey>
                            ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_d8,uVar8,(FAttributeKey *)&local_d0);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          FVar5.Data = local_d0.Data.AllocatorInstance.Data;
          if (iVar9 == -1) {
            lVar17 = (longlong)local_d0.Data.ArrayNum;
            local_a8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
            if (local_d0.Data.ArrayNum == 0) {
              local_a8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                         local_d0.Data.ArrayNum,&local_a8.Key.Data.ArrayMax);
              memcpy(local_a8.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
            }
            pFVar13 = ::FString::FString(&local_68,L"GetAttributeHandle");
            LogAttributeStorageErrors(Operation_Error_CannotFoundKey,pFVar13,&local_a8);
          }
          EVar10 = FAttributeStorage::GetAttributeType(local_d8,(FAttributeKey *)&local_d0);
          FVar5.Data = local_d0.Data.AllocatorInstance.Data;
          if (EVar10 != Int32) {
            lVar17 = (longlong)local_d0.Data.ArrayNum;
            local_98.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
            if (local_d0.Data.ArrayNum == 0) {
              local_98.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                         local_d0.Data.ArrayNum,&local_98.Key.Data.ArrayMax);
              memcpy(local_98.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
            }
            pFVar13 = ::FString::FString(&local_58,L"GetAttributeHandle");
            pFVar19 = &local_98;
            EVar14 = Operation_Error_WrongType;
            goto LAB_14e452c39;
          }
        }
        if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        param_3 = local_res20;
      }
      if (local_d8 != (FAttributeStorage *)0x0) {
        FAttributeStorage::GetAttribute<int,void>(local_d8,(FAttributeKey *)&local_d0,local_res8);
      }
      pTVar11 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
                ::FindChecked((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
                               *)this,local_res8[0]);
      *(undefined8 *)pTVar11 = *(undefined8 *)param_3;
      ::FString::operator=((FString *)&pTVar11->field_0x8,(FString *)&param_3->field_0x8);
      pTVar11 = local_res20;
      this_00 = *(FAttributeStorage **)local_res20;
      if (this_00 != (FAttributeStorage *)0x0) {
        pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)this_00,(FAttributeKey *)&param_3->field_0x8);
        pFVar15 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
        if (pTVar12 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar15 = pFVar18;
        }
        FAttributeStorage::SetAttribute<int>(this_00,pFVar15,local_res8);
      }
      FAttributeStorage::UnregisterAttribute(pFVar2,(FAttributeKey *)&local_d0);
      FAttributeStorage::UnregisterAttribute(pFVar2,(FAttributeKey *)&pTVar11->field_0x20);
      if (*(int *)&(this->CachedKeysAndValues).field_0x8 !=
          *(int *)&(this->CachedKeysAndValues).field_0x34) {
        TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                           *)this,local_res10,local_res18);
      }
      local_c0[0] = *(int *)&(this->CachedKeysAndValues).field_0x8 -
                    *(int *)&(this->CachedKeysAndValues).field_0x34;
      pFVar2 = (this->KeyCountHandle).AttributeStorage;
      if (pFVar2 != (FAttributeStorage *)0x0) {
        pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar2,&(this->KeyCountHandle).Key);
        pFVar15 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
        if (pTVar12 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar15 = pFVar18;
        }
        FAttributeStorage::SetAttribute<int>(pFVar2,pFVar15,local_c0);
      }
      bVar22 = true;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      goto LAB_14e4528c3;
    }
  }
LAB_14e452894:
  bVar22 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494834>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x232,"AttributesPtr.IsValid()");
  if (bVar22) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  bVar22 = false;
LAB_14e4528c3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  return bVar22;
}

// RemoveBySwap @ 14e452c70

bool __thiscall
UE::Interchange::TMapAttributeHelper<int,float>::RemoveBySwap
          (TMapAttributeHelper<int,float> *this,uint param_1,int *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
          *param_3)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FAttributeStorage *pFVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  ForAnyElementType FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  EAttributeTypes EVar10;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar11;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar12;
  FString *pFVar13;
  EAttributeStorageResult EVar14;
  FAttributeAllocationInfo *pFVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  FAttributeAllocationInfo *pFVar18;
  FAttributeKey *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  FAttributeAllocationInfo *pFVar21;
  bool bVar22;
  int local_res8 [2];
  uint local_res10;
  int *local_res18;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *local_res20;
  FAttributeStorage *local_d8;
  FString local_d0;
  int local_c0 [2];
  FAttributeKey local_b8;
  FAttributeKey local_a8;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pTVar20 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar20->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e452cc4;
      }
      LOCK();
      aVar7 = pTVar20->SharedReferenceCount;
      bVar22 = aVar4 == aVar7;
      if (bVar22) {
        pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar22);
    pFVar2 = (this->Attributes).Object;
    if (pFVar2 != (FAttributeStorage *)0x0) {
      pFVar15 = (FAttributeAllocationInfo *)
                (this->Attributes).WeakReferenceCount.ReferenceController;
      pFVar18 = (FAttributeAllocationInfo *)0x0;
      pFVar21 = pFVar15;
      if (pFVar15 == (FAttributeAllocationInfo *)0x0) {
LAB_14e452d46:
        bVar22 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494824>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x228,"AttributesPtr.IsValid()");
        if (bVar22) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_d8 = (FAttributeStorage *)0x0;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar21);
      }
      else {
        aVar4 = *(atomic<int> *)&(pFVar15->Offsets).ArrayNum;
        do {
          pFVar21 = pFVar18;
          if (aVar4 == (atomic<int>)0x0) goto LAB_14e452d46;
          paVar1 = (atomic<int> *)&(pFVar15->Offsets).ArrayNum;
          LOCK();
          aVar7 = *paVar1;
          bVar22 = aVar4 == aVar7;
          if (bVar22) {
            *paVar1 = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar22);
        local_d8 = (this->Attributes).Object;
        pFVar21 = pFVar15;
        if (local_d8 == (FAttributeStorage *)0x0) goto LAB_14e452d46;
        pFVar13 = &GetKeyAttribute(this,&local_88,
                                   (*(int *)&(this->CachedKeysAndValues).field_0x8 -
                                   *(int *)&(this->CachedKeysAndValues).field_0x34) + -1)->Key;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        ::FString::operator=(&local_d0,pFVar13);
        FVar5.Data = local_d0.Data.AllocatorInstance.Data;
        iVar9 = 0;
        if (local_d8 == (FAttributeStorage *)0x0) {
          lVar17 = (longlong)local_d0.Data.ArrayNum;
          local_b8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
          if (local_d0.Data.ArrayNum == 0) {
            local_b8.Key.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                       local_d0.Data.ArrayNum,&local_b8.Key.Data.ArrayMax);
            memcpy(local_b8.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
          }
          pFVar13 = ::FString::FString(&local_78,L"GetAttributeHandle");
          pFVar19 = &local_b8;
          EVar14 = Operation_Error_InvalidStorage;
LAB_14e453069:
          LogAttributeStorageErrors(EVar14,pFVar13,pFVar19);
        }
        else {
          lpCriticalSection = &local_d8->StorageMutex;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (local_d0.Data.ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            iVar9 = local_d0.Data.ArrayNum + -1;
            pwVar16 = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
          }
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar16);
          iVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<UE::Interchange::FAttributeKey>
                            ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_d8,uVar8,(FAttributeKey *)&local_d0);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          FVar5.Data = local_d0.Data.AllocatorInstance.Data;
          if (iVar9 == -1) {
            lVar17 = (longlong)local_d0.Data.ArrayNum;
            local_a8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
            if (local_d0.Data.ArrayNum == 0) {
              local_a8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                         local_d0.Data.ArrayNum,&local_a8.Key.Data.ArrayMax);
              memcpy(local_a8.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
            }
            pFVar13 = ::FString::FString(&local_68,L"GetAttributeHandle");
            LogAttributeStorageErrors(Operation_Error_CannotFoundKey,pFVar13,&local_a8);
          }
          EVar10 = FAttributeStorage::GetAttributeType(local_d8,(FAttributeKey *)&local_d0);
          FVar5.Data = local_d0.Data.AllocatorInstance.Data;
          if (EVar10 != Int32) {
            lVar17 = (longlong)local_d0.Data.ArrayNum;
            local_98.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
            if (local_d0.Data.ArrayNum == 0) {
              local_98.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                         local_d0.Data.ArrayNum,&local_98.Key.Data.ArrayMax);
              memcpy(local_98.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
            }
            pFVar13 = ::FString::FString(&local_58,L"GetAttributeHandle");
            pFVar19 = &local_98;
            EVar14 = Operation_Error_WrongType;
            goto LAB_14e453069;
          }
        }
        if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        param_3 = local_res20;
      }
      if (local_d8 != (FAttributeStorage *)0x0) {
        FAttributeStorage::GetAttribute<int,void>(local_d8,(FAttributeKey *)&local_d0,local_res8);
      }
      pTVar11 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
                ::FindChecked((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
                               *)this,local_res8[0]);
      *(undefined8 *)pTVar11 = *(undefined8 *)param_3;
      ::FString::operator=((FString *)&pTVar11->field_0x8,(FString *)&param_3->field_0x8);
      pTVar11 = local_res20;
      this_00 = *(FAttributeStorage **)local_res20;
      if (this_00 != (FAttributeStorage *)0x0) {
        pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)this_00,(FAttributeKey *)&param_3->field_0x8);
        pFVar15 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
        if (pTVar12 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar15 = pFVar18;
        }
        FAttributeStorage::SetAttribute<int>(this_00,pFVar15,local_res8);
      }
      FAttributeStorage::UnregisterAttribute(pFVar2,(FAttributeKey *)&local_d0);
      FAttributeStorage::UnregisterAttribute(pFVar2,(FAttributeKey *)&pTVar11->field_0x20);
      if (*(int *)&(this->CachedKeysAndValues).field_0x8 !=
          *(int *)&(this->CachedKeysAndValues).field_0x34) {
        TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                           *)this,local_res10,local_res18);
      }
      local_c0[0] = *(int *)&(this->CachedKeysAndValues).field_0x8 -
                    *(int *)&(this->CachedKeysAndValues).field_0x34;
      pFVar2 = (this->KeyCountHandle).AttributeStorage;
      if (pFVar2 != (FAttributeStorage *)0x0) {
        pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar2,&(this->KeyCountHandle).Key);
        pFVar15 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
        if (pTVar12 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar15 = pFVar18;
        }
        FAttributeStorage::SetAttribute<int>(pFVar2,pFVar15,local_c0);
      }
      bVar22 = true;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      goto LAB_14e452cf3;
    }
  }
LAB_14e452cc4:
  bVar22 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494834>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x232,"AttributesPtr.IsValid()");
  if (bVar22) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  bVar22 = false;
LAB_14e452cf3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  return bVar22;
}

// RemoveBySwap @ 14e4530a0

bool __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::RemoveBySwap
          (TMapAttributeHelper<int,FString> *this,uint param_1,int *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
          *param_3)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FAttributeStorage *pFVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  ForAnyElementType FVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  uint uVar8;
  int iVar9;
  EAttributeTypes EVar10;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar11;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar12;
  FString *pFVar13;
  EAttributeStorageResult EVar14;
  FAttributeAllocationInfo *pFVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  FAttributeAllocationInfo *pFVar18;
  FAttributeKey *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  FAttributeAllocationInfo *pFVar21;
  bool bVar22;
  int local_res8 [2];
  uint local_res10;
  int *local_res18;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *local_res20;
  FAttributeStorage *local_d8;
  FString local_d0;
  int local_c0 [2];
  FAttributeKey local_b8;
  FAttributeKey local_a8;
  FAttributeKey local_98;
  FAttributeKey local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pTVar20 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar20->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4530f4;
      }
      LOCK();
      aVar7 = pTVar20->SharedReferenceCount;
      bVar22 = aVar4 == aVar7;
      if (bVar22) {
        pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar22);
    pFVar2 = (this->Attributes).Object;
    if (pFVar2 != (FAttributeStorage *)0x0) {
      pFVar15 = (FAttributeAllocationInfo *)
                (this->Attributes).WeakReferenceCount.ReferenceController;
      pFVar18 = (FAttributeAllocationInfo *)0x0;
      pFVar21 = pFVar15;
      if (pFVar15 == (FAttributeAllocationInfo *)0x0) {
LAB_14e453176:
        bVar22 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494824>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x228,"AttributesPtr.IsValid()");
        if (bVar22) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        local_d8 = (FAttributeStorage *)0x0;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar21);
      }
      else {
        aVar4 = *(atomic<int> *)&(pFVar15->Offsets).ArrayNum;
        do {
          pFVar21 = pFVar18;
          if (aVar4 == (atomic<int>)0x0) goto LAB_14e453176;
          paVar1 = (atomic<int> *)&(pFVar15->Offsets).ArrayNum;
          LOCK();
          aVar7 = *paVar1;
          bVar22 = aVar4 == aVar7;
          if (bVar22) {
            *paVar1 = (atomic<int>)((int)aVar4 + 1);
            aVar7 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar7;
        } while (!bVar22);
        local_d8 = (this->Attributes).Object;
        pFVar21 = pFVar15;
        if (local_d8 == (FAttributeStorage *)0x0) goto LAB_14e453176;
        pFVar13 = &GetKeyAttribute(this,&local_88,
                                   (*(int *)&(this->CachedKeysAndValues).field_0x8 -
                                   *(int *)&(this->CachedKeysAndValues).field_0x34) + -1)->Key;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        ::FString::operator=(&local_d0,pFVar13);
        FVar5.Data = local_d0.Data.AllocatorInstance.Data;
        iVar9 = 0;
        if (local_d8 == (FAttributeStorage *)0x0) {
          lVar17 = (longlong)local_d0.Data.ArrayNum;
          local_b8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
          if (local_d0.Data.ArrayNum == 0) {
            local_b8.Key.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                       local_d0.Data.ArrayNum,&local_b8.Key.Data.ArrayMax);
            memcpy(local_b8.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
          }
          pFVar13 = ::FString::FString(&local_78,L"GetAttributeHandle");
          pFVar19 = &local_b8;
          EVar14 = Operation_Error_InvalidStorage;
LAB_14e453499:
          LogAttributeStorageErrors(EVar14,pFVar13,pFVar19);
        }
        else {
          lpCriticalSection = &local_d8->StorageMutex;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (local_d0.Data.ArrayNum == 0) {
            pwVar16 = L"";
          }
          else {
            iVar9 = local_d0.Data.ArrayNum + -1;
            pwVar16 = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
          }
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar16);
          iVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<UE::Interchange::FAttributeKey>
                            ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_d8,uVar8,(FAttributeKey *)&local_d0);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          FVar5.Data = local_d0.Data.AllocatorInstance.Data;
          if (iVar9 == -1) {
            lVar17 = (longlong)local_d0.Data.ArrayNum;
            local_a8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
            if (local_d0.Data.ArrayNum == 0) {
              local_a8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                         local_d0.Data.ArrayNum,&local_a8.Key.Data.ArrayMax);
              memcpy(local_a8.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
            }
            pFVar13 = ::FString::FString(&local_68,L"GetAttributeHandle");
            LogAttributeStorageErrors(Operation_Error_CannotFoundKey,pFVar13,&local_a8);
          }
          EVar10 = FAttributeStorage::GetAttributeType(local_d8,(FAttributeKey *)&local_d0);
          FVar5.Data = local_d0.Data.AllocatorInstance.Data;
          if (EVar10 != Int32) {
            lVar17 = (longlong)local_d0.Data.ArrayNum;
            local_98.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.Key.Data.ArrayNum = local_d0.Data.ArrayNum;
            if (local_d0.Data.ArrayNum == 0) {
              local_98.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                         local_d0.Data.ArrayNum,&local_98.Key.Data.ArrayMax);
              memcpy(local_98.Key.Data.AllocatorInstance.Data,FVar5.Data,lVar17 * 2);
            }
            pFVar13 = ::FString::FString(&local_58,L"GetAttributeHandle");
            pFVar19 = &local_98;
            EVar14 = Operation_Error_WrongType;
            goto LAB_14e453499;
          }
        }
        if (local_88.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Key.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        param_3 = local_res20;
      }
      if (local_d8 != (FAttributeStorage *)0x0) {
        FAttributeStorage::GetAttribute<int,void>(local_d8,(FAttributeKey *)&local_d0,local_res8);
      }
      pTVar11 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                ::FindChecked((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                               *)this,local_res8[0]);
      *(undefined8 *)pTVar11 = *(undefined8 *)param_3;
      ::FString::operator=((FString *)&pTVar11->field_0x8,(FString *)&param_3->field_0x8);
      pTVar11 = local_res20;
      this_00 = *(FAttributeStorage **)local_res20;
      if (this_00 != (FAttributeStorage *)0x0) {
        pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)this_00,(FAttributeKey *)&param_3->field_0x8);
        pFVar15 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
        if (pTVar12 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar15 = pFVar18;
        }
        FAttributeStorage::SetAttribute<int>(this_00,pFVar15,local_res8);
      }
      FAttributeStorage::UnregisterAttribute(pFVar2,(FAttributeKey *)&local_d0);
      FAttributeStorage::UnregisterAttribute(pFVar2,(FAttributeKey *)&pTVar11->field_0x20);
      if (*(int *)&(this->CachedKeysAndValues).field_0x8 !=
          *(int *)&(this->CachedKeysAndValues).field_0x34) {
        TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                           *)this,local_res10,local_res18);
      }
      local_c0[0] = *(int *)&(this->CachedKeysAndValues).field_0x8 -
                    *(int *)&(this->CachedKeysAndValues).field_0x34;
      pFVar2 = (this->KeyCountHandle).AttributeStorage;
      if (pFVar2 != (FAttributeStorage *)0x0) {
        pTVar12 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar2,&(this->KeyCountHandle).Key);
        pFVar15 = (FAttributeAllocationInfo *)&pTVar12->field_0x10;
        if (pTVar12 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar15 = pFVar18;
        }
        FAttributeStorage::SetAttribute<int>(pFVar2,pFVar15,local_c0);
      }
      bVar22 = true;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      goto LAB_14e453123;
    }
  }
LAB_14e4530f4:
  bVar22 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494834>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x232,"AttributesPtr.IsValid()");
  if (bVar22) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  bVar22 = false;
LAB_14e453123:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  return bVar22;
}

// RemoveBySwap @ 14e4534d0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::RemoveBySwap
          (TMapAttributeHelper<FString,int> *this,uint param_1,FString *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
          *param_3)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *pFVar2;
  undefined1 *puVar3;
  FAttributeStorage *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  int iVar9;
  EAttributeTypes EVar10;
  uint uVar11;
  FString *pFVar12;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar13;
  ForAnyElementType FVar14;
  int iVar15;
  EAttributeStorageResult EVar16;
  wchar_t *pwVar17;
  FAttributeAllocationInfo *pFVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  FAttributeAllocationInfo *pFVar21;
  FAttributeKey *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  FAttributeAllocationInfo *pFVar24;
  bool bVar25;
  bool local_res8 [8];
  uint local_res10;
  FString *local_res18;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *local_res20;
  FAttributeStorage *local_f8;
  FString local_f0;
  FString local_e0;
  FAttributeAllocationInfo *local_d0;
  FAttributeKey local_c8;
  FAttributeKey local_b8;
  FAttributeKey local_a8;
  FAttributeStorage *local_98;
  FAttributeKey local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar23 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar23->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar23 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e453524;
      }
      LOCK();
      aVar8 = pTVar23->SharedReferenceCount;
      bVar25 = aVar6 == aVar8;
      if (bVar25) {
        pTVar23->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar25);
    local_98 = (this->Attributes).Object;
    if (local_98 != (FAttributeStorage *)0x0) {
      pFVar18 = (FAttributeAllocationInfo *)
                (this->Attributes).WeakReferenceCount.ReferenceController;
      pFVar21 = (FAttributeAllocationInfo *)0x0;
      iVar15 = 0;
      pFVar24 = pFVar18;
      if (pFVar18 == (FAttributeAllocationInfo *)0x0) {
LAB_14e4535b6:
        bVar25 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494824>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x228,"AttributesPtr.IsValid()");
        if (bVar25) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_f8 = (FAttributeStorage *)0x0;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        pFVar18 = pFVar24;
      }
      else {
        aVar6 = *(atomic<int> *)&(pFVar18->Offsets).ArrayNum;
        do {
          pFVar24 = pFVar21;
          if (aVar6 == (atomic<int>)0x0) goto LAB_14e4535b6;
          paVar1 = (atomic<int> *)&(pFVar18->Offsets).ArrayNum;
          LOCK();
          aVar8 = *paVar1;
          bVar25 = aVar6 == aVar8;
          if (bVar25) {
            *paVar1 = (atomic<int>)((int)aVar6 + 1);
            aVar8 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar8;
        } while (!bVar25);
        local_f8 = (this->Attributes).Object;
        pFVar24 = pFVar18;
        if (local_f8 == (FAttributeStorage *)0x0) goto LAB_14e4535b6;
        pFVar12 = &GetKeyAttribute(this,&local_90,
                                   (*(int *)&(this->CachedKeysAndValues).field_0x8 -
                                   *(int *)&(this->CachedKeysAndValues).field_0x34) + -1)->Key;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        ::FString::operator=(&local_f0,pFVar12);
        FVar20.Data = local_f0.Data.AllocatorInstance.Data;
        if (local_f8 == (FAttributeStorage *)0x0) {
          lVar19 = (longlong)local_f0.Data.ArrayNum;
          local_c8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
          if (local_f0.Data.ArrayNum == 0) {
            local_c8.Key.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                       local_f0.Data.ArrayNum,&local_c8.Key.Data.ArrayMax);
            memcpy(local_c8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
          }
          pFVar12 = ::FString::FString(&local_80,L"GetAttributeHandle");
          pFVar22 = &local_c8;
          EVar16 = Operation_Error_InvalidStorage;
LAB_14e453847:
          LogAttributeStorageErrors(EVar16,pFVar12,pFVar22);
        }
        else {
          pFVar2 = &local_f8->StorageMutex;
          if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          if (local_f0.Data.ArrayNum == 0) {
            pwVar17 = L"";
            iVar9 = iVar15;
          }
          else {
            pwVar17 = (wchar_t *)local_f0.Data.AllocatorInstance.Data;
            iVar9 = local_f0.Data.ArrayNum + -1;
          }
          uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar17);
          iVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<UE::Interchange::FAttributeKey>
                            ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_f8,uVar11,(FAttributeKey *)&local_f0);
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          FVar20.Data = local_f0.Data.AllocatorInstance.Data;
          if (iVar9 == -1) {
            lVar19 = (longlong)local_f0.Data.ArrayNum;
            local_b8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
            if (local_f0.Data.ArrayNum == 0) {
              local_b8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                         local_f0.Data.ArrayNum,&local_b8.Key.Data.ArrayMax);
              memcpy(local_b8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
            }
            pFVar12 = ::FString::FString(&local_70,L"GetAttributeHandle");
            LogAttributeStorageErrors(Operation_Error_CannotFoundKey,pFVar12,&local_b8);
          }
          EVar10 = FAttributeStorage::GetAttributeType(local_f8,(FAttributeKey *)&local_f0);
          FVar20.Data = local_f0.Data.AllocatorInstance.Data;
          if (EVar10 != String) {
            lVar19 = (longlong)local_f0.Data.ArrayNum;
            local_a8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
            if (local_f0.Data.ArrayNum == 0) {
              local_a8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                         local_f0.Data.ArrayNum,&local_a8.Key.Data.ArrayMax);
              memcpy(local_a8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
            }
            pFVar12 = ::FString::FString(local_60,L"GetAttributeHandle");
            pFVar22 = &local_a8;
            EVar16 = Operation_Error_WrongType;
            goto LAB_14e453847;
          }
        }
        if (local_90.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar18);
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      iVar9 = iVar15;
      if (local_f8 != (FAttributeStorage *)0x0) {
        FAttributeStorage::GetAttribute<FString,void>(local_f8,(FAttributeKey *)&local_f0,&local_e0)
        ;
        iVar9 = local_e0.Data.ArrayNum;
      }
      FVar20.Data = local_e0.Data.AllocatorInstance.Data;
      if (iVar9 == 0) {
        pwVar17 = L"";
      }
      else {
        iVar15 = iVar9 + -1;
        pwVar17 = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
      iVar15 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                           *)this,uVar11,&local_e0);
      pFVar18 = pFVar21;
      if (((iVar15 == -1) ||
          (pFVar18 = (FAttributeAllocationInfo *)
                     (*(longlong *)&this->CachedKeysAndValues + (longlong)iVar15 * 0x48),
          pFVar18 == (FAttributeAllocationInfo *)0x0)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar25)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      puVar3 = &local_res20->field_0x8;
      (pFVar18->Sizes).AllocatorInstance.Data = *(FScriptContainerElement **)local_res20;
      ::FString::operator=((FString *)&(pFVar18->Sizes).ArrayNum,(FString *)puVar3);
      pFVar4 = *(FAttributeStorage **)local_res20;
      if (pFVar4 != (FAttributeStorage *)0x0) {
        pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar4,(FAttributeKey *)puVar3);
        local_d0 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
        if (pTVar13 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          local_d0 = pFVar21;
        }
        if (local_d0 != (FAttributeAllocationInfo *)0x0) {
          pFVar2 = &pFVar4->StorageMutex;
          if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          local_res8[0] = false;
          FVar14.Data = (FScriptContainerElement *)L"";
          if (iVar9 != 0) {
            FVar14.Data = FVar20.Data;
          }
          FAttributeStorage::MultiSizeSetAttribute<FString>
                    (pFVar4,local_d0,0,&local_e0,(uchar *)FVar14.Data,local_res8);
          FAttributeStorage::UpdateAllocationInfoHash(pFVar4,local_d0);
          if (local_res8[0] != false) {
            FAttributeStorage::DefragInternal(pFVar4);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          FVar20.Data = local_e0.Data.AllocatorInstance.Data;
        }
      }
      FAttributeStorage::UnregisterAttribute(local_98,(FAttributeKey *)&local_f0);
      FAttributeStorage::UnregisterAttribute(local_98,(FAttributeKey *)&local_res20->field_0x20);
      if (*(int *)&(this->CachedKeysAndValues).field_0x8 !=
          *(int *)&(this->CachedKeysAndValues).field_0x34) {
        TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                    *)this,local_res10,local_res18);
      }
      pFVar4 = (this->KeyCountHandle).AttributeStorage;
      local_d0 = (FAttributeAllocationInfo *)
                 CONCAT44(local_d0._4_4_,
                          *(int *)&(this->CachedKeysAndValues).field_0x8 -
                          *(int *)&(this->CachedKeysAndValues).field_0x34);
      if (pFVar4 != (FAttributeStorage *)0x0) {
        pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar4,&(this->KeyCountHandle).Key);
        pFVar18 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
        if (pTVar13 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar18 = pFVar21;
        }
        FAttributeStorage::SetAttribute<int>(pFVar4,pFVar18,(int *)&local_d0);
      }
      bVar25 = true;
      if (FVar20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar20.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      goto LAB_14e453554;
    }
  }
LAB_14e453524:
  bVar25 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494834>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x232,"AttributesPtr.IsValid()");
  if (bVar25) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar25 = false;
LAB_14e453554:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  return bVar25;
}

// RemoveBySwap @ 14e453a30

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::RemoveBySwap
          (TMapAttributeHelper<FString,float> *this,uint param_1,FString *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
          *param_3)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *pFVar2;
  undefined1 *puVar3;
  FAttributeStorage *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  int iVar9;
  EAttributeTypes EVar10;
  uint uVar11;
  FString *pFVar12;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar13;
  ForAnyElementType FVar14;
  int iVar15;
  EAttributeStorageResult EVar16;
  wchar_t *pwVar17;
  FAttributeAllocationInfo *pFVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  FAttributeAllocationInfo *pFVar21;
  FAttributeKey *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  FAttributeAllocationInfo *pFVar24;
  bool bVar25;
  bool local_res8 [8];
  uint local_res10;
  FString *local_res18;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *local_res20;
  FAttributeStorage *local_f8;
  FString local_f0;
  FString local_e0;
  FAttributeAllocationInfo *local_d0;
  FAttributeKey local_c8;
  FAttributeKey local_b8;
  FAttributeKey local_a8;
  FAttributeStorage *local_98;
  FAttributeKey local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar23 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar23->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar23 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e453a84;
      }
      LOCK();
      aVar8 = pTVar23->SharedReferenceCount;
      bVar25 = aVar6 == aVar8;
      if (bVar25) {
        pTVar23->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar25);
    local_98 = (this->Attributes).Object;
    if (local_98 != (FAttributeStorage *)0x0) {
      pFVar18 = (FAttributeAllocationInfo *)
                (this->Attributes).WeakReferenceCount.ReferenceController;
      pFVar21 = (FAttributeAllocationInfo *)0x0;
      iVar15 = 0;
      pFVar24 = pFVar18;
      if (pFVar18 == (FAttributeAllocationInfo *)0x0) {
LAB_14e453b16:
        bVar25 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494824>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x228,"AttributesPtr.IsValid()");
        if (bVar25) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_f8 = (FAttributeStorage *)0x0;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        pFVar18 = pFVar24;
      }
      else {
        aVar6 = *(atomic<int> *)&(pFVar18->Offsets).ArrayNum;
        do {
          pFVar24 = pFVar21;
          if (aVar6 == (atomic<int>)0x0) goto LAB_14e453b16;
          paVar1 = (atomic<int> *)&(pFVar18->Offsets).ArrayNum;
          LOCK();
          aVar8 = *paVar1;
          bVar25 = aVar6 == aVar8;
          if (bVar25) {
            *paVar1 = (atomic<int>)((int)aVar6 + 1);
            aVar8 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar8;
        } while (!bVar25);
        local_f8 = (this->Attributes).Object;
        pFVar24 = pFVar18;
        if (local_f8 == (FAttributeStorage *)0x0) goto LAB_14e453b16;
        pFVar12 = &GetKeyAttribute(this,&local_90,
                                   (*(int *)&(this->CachedKeysAndValues).field_0x8 -
                                   *(int *)&(this->CachedKeysAndValues).field_0x34) + -1)->Key;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        ::FString::operator=(&local_f0,pFVar12);
        FVar20.Data = local_f0.Data.AllocatorInstance.Data;
        if (local_f8 == (FAttributeStorage *)0x0) {
          lVar19 = (longlong)local_f0.Data.ArrayNum;
          local_c8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
          if (local_f0.Data.ArrayNum == 0) {
            local_c8.Key.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                       local_f0.Data.ArrayNum,&local_c8.Key.Data.ArrayMax);
            memcpy(local_c8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
          }
          pFVar12 = ::FString::FString(&local_80,L"GetAttributeHandle");
          pFVar22 = &local_c8;
          EVar16 = Operation_Error_InvalidStorage;
LAB_14e453da7:
          LogAttributeStorageErrors(EVar16,pFVar12,pFVar22);
        }
        else {
          pFVar2 = &local_f8->StorageMutex;
          if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          if (local_f0.Data.ArrayNum == 0) {
            pwVar17 = L"";
            iVar9 = iVar15;
          }
          else {
            pwVar17 = (wchar_t *)local_f0.Data.AllocatorInstance.Data;
            iVar9 = local_f0.Data.ArrayNum + -1;
          }
          uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar17);
          iVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<UE::Interchange::FAttributeKey>
                            ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_f8,uVar11,(FAttributeKey *)&local_f0);
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          FVar20.Data = local_f0.Data.AllocatorInstance.Data;
          if (iVar9 == -1) {
            lVar19 = (longlong)local_f0.Data.ArrayNum;
            local_b8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
            if (local_f0.Data.ArrayNum == 0) {
              local_b8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                         local_f0.Data.ArrayNum,&local_b8.Key.Data.ArrayMax);
              memcpy(local_b8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
            }
            pFVar12 = ::FString::FString(&local_70,L"GetAttributeHandle");
            LogAttributeStorageErrors(Operation_Error_CannotFoundKey,pFVar12,&local_b8);
          }
          EVar10 = FAttributeStorage::GetAttributeType(local_f8,(FAttributeKey *)&local_f0);
          FVar20.Data = local_f0.Data.AllocatorInstance.Data;
          if (EVar10 != String) {
            lVar19 = (longlong)local_f0.Data.ArrayNum;
            local_a8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
            if (local_f0.Data.ArrayNum == 0) {
              local_a8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                         local_f0.Data.ArrayNum,&local_a8.Key.Data.ArrayMax);
              memcpy(local_a8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
            }
            pFVar12 = ::FString::FString(local_60,L"GetAttributeHandle");
            pFVar22 = &local_a8;
            EVar16 = Operation_Error_WrongType;
            goto LAB_14e453da7;
          }
        }
        if (local_90.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar18);
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      iVar9 = iVar15;
      if (local_f8 != (FAttributeStorage *)0x0) {
        FAttributeStorage::GetAttribute<FString,void>(local_f8,(FAttributeKey *)&local_f0,&local_e0)
        ;
        iVar9 = local_e0.Data.ArrayNum;
      }
      FVar20.Data = local_e0.Data.AllocatorInstance.Data;
      if (iVar9 == 0) {
        pwVar17 = L"";
      }
      else {
        iVar15 = iVar9 + -1;
        pwVar17 = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
      iVar15 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                           *)this,uVar11,&local_e0);
      pFVar18 = pFVar21;
      if (((iVar15 == -1) ||
          (pFVar18 = (FAttributeAllocationInfo *)
                     (*(longlong *)&this->CachedKeysAndValues + (longlong)iVar15 * 0x48),
          pFVar18 == (FAttributeAllocationInfo *)0x0)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar25)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      puVar3 = &local_res20->field_0x8;
      (pFVar18->Sizes).AllocatorInstance.Data = *(FScriptContainerElement **)local_res20;
      ::FString::operator=((FString *)&(pFVar18->Sizes).ArrayNum,(FString *)puVar3);
      pFVar4 = *(FAttributeStorage **)local_res20;
      if (pFVar4 != (FAttributeStorage *)0x0) {
        pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar4,(FAttributeKey *)puVar3);
        local_d0 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
        if (pTVar13 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          local_d0 = pFVar21;
        }
        if (local_d0 != (FAttributeAllocationInfo *)0x0) {
          pFVar2 = &pFVar4->StorageMutex;
          if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          local_res8[0] = false;
          FVar14.Data = (FScriptContainerElement *)L"";
          if (iVar9 != 0) {
            FVar14.Data = FVar20.Data;
          }
          FAttributeStorage::MultiSizeSetAttribute<FString>
                    (pFVar4,local_d0,0,&local_e0,(uchar *)FVar14.Data,local_res8);
          FAttributeStorage::UpdateAllocationInfoHash(pFVar4,local_d0);
          if (local_res8[0] != false) {
            FAttributeStorage::DefragInternal(pFVar4);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          FVar20.Data = local_e0.Data.AllocatorInstance.Data;
        }
      }
      FAttributeStorage::UnregisterAttribute(local_98,(FAttributeKey *)&local_f0);
      FAttributeStorage::UnregisterAttribute(local_98,(FAttributeKey *)&local_res20->field_0x20);
      if (*(int *)&(this->CachedKeysAndValues).field_0x8 !=
          *(int *)&(this->CachedKeysAndValues).field_0x34) {
        TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                    *)this,local_res10,local_res18);
      }
      pFVar4 = (this->KeyCountHandle).AttributeStorage;
      local_d0 = (FAttributeAllocationInfo *)
                 CONCAT44(local_d0._4_4_,
                          *(int *)&(this->CachedKeysAndValues).field_0x8 -
                          *(int *)&(this->CachedKeysAndValues).field_0x34);
      if (pFVar4 != (FAttributeStorage *)0x0) {
        pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar4,&(this->KeyCountHandle).Key);
        pFVar18 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
        if (pTVar13 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar18 = pFVar21;
        }
        FAttributeStorage::SetAttribute<int>(pFVar4,pFVar18,(int *)&local_d0);
      }
      bVar25 = true;
      if (FVar20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar20.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      goto LAB_14e453ab4;
    }
  }
LAB_14e453a84:
  bVar25 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494834>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x232,"AttributesPtr.IsValid()");
  if (bVar25) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar25 = false;
LAB_14e453ab4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  return bVar25;
}

// RemoveBySwap @ 14e453f90

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveBySwap
          (TMapAttributeHelper<FString,FString> *this,uint param_1,FString *param_2,
          TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
          *param_3)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *pFVar2;
  undefined1 *puVar3;
  FAttributeStorage *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  int iVar9;
  EAttributeTypes EVar10;
  uint uVar11;
  FString *pFVar12;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar13;
  ForAnyElementType FVar14;
  int iVar15;
  EAttributeStorageResult EVar16;
  wchar_t *pwVar17;
  FAttributeAllocationInfo *pFVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  FAttributeAllocationInfo *pFVar21;
  FAttributeKey *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  FAttributeAllocationInfo *pFVar24;
  bool bVar25;
  bool local_res8 [8];
  uint local_res10;
  FString *local_res18;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *local_res20;
  FAttributeStorage *local_f8;
  FString local_f0;
  FString local_e0;
  FAttributeAllocationInfo *local_d0;
  FAttributeKey local_c8;
  FAttributeKey local_b8;
  FAttributeKey local_a8;
  FAttributeStorage *local_98;
  FAttributeKey local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pTVar23 = (this->Attributes).WeakReferenceCount.ReferenceController;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar23->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar23 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e453fe4;
      }
      LOCK();
      aVar8 = pTVar23->SharedReferenceCount;
      bVar25 = aVar6 == aVar8;
      if (bVar25) {
        pTVar23->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar25);
    local_98 = (this->Attributes).Object;
    if (local_98 != (FAttributeStorage *)0x0) {
      pFVar18 = (FAttributeAllocationInfo *)
                (this->Attributes).WeakReferenceCount.ReferenceController;
      pFVar21 = (FAttributeAllocationInfo *)0x0;
      iVar15 = 0;
      pFVar24 = pFVar18;
      if (pFVar18 == (FAttributeAllocationInfo *)0x0) {
LAB_14e454076:
        bVar25 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4942768438637494824>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                            ,0x228,"AttributesPtr.IsValid()");
        if (bVar25) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_f8 = (FAttributeStorage *)0x0;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        pFVar18 = pFVar24;
      }
      else {
        aVar6 = *(atomic<int> *)&(pFVar18->Offsets).ArrayNum;
        do {
          pFVar24 = pFVar21;
          if (aVar6 == (atomic<int>)0x0) goto LAB_14e454076;
          paVar1 = (atomic<int> *)&(pFVar18->Offsets).ArrayNum;
          LOCK();
          aVar8 = *paVar1;
          bVar25 = aVar6 == aVar8;
          if (bVar25) {
            *paVar1 = (atomic<int>)((int)aVar6 + 1);
            aVar8 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar8;
        } while (!bVar25);
        local_f8 = (this->Attributes).Object;
        pFVar24 = pFVar18;
        if (local_f8 == (FAttributeStorage *)0x0) goto LAB_14e454076;
        pFVar12 = &GetKeyAttribute(this,&local_90,
                                   (*(int *)&(this->CachedKeysAndValues).field_0x8 -
                                   *(int *)&(this->CachedKeysAndValues).field_0x34) + -1)->Key;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        ::FString::operator=(&local_f0,pFVar12);
        FVar20.Data = local_f0.Data.AllocatorInstance.Data;
        if (local_f8 == (FAttributeStorage *)0x0) {
          lVar19 = (longlong)local_f0.Data.ArrayNum;
          local_c8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
          if (local_f0.Data.ArrayNum == 0) {
            local_c8.Key.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                       local_f0.Data.ArrayNum,&local_c8.Key.Data.ArrayMax);
            memcpy(local_c8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
          }
          pFVar12 = ::FString::FString(&local_80,L"GetAttributeHandle");
          pFVar22 = &local_c8;
          EVar16 = Operation_Error_InvalidStorage;
LAB_14e454307:
          LogAttributeStorageErrors(EVar16,pFVar12,pFVar22);
        }
        else {
          pFVar2 = &local_f8->StorageMutex;
          if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          if (local_f0.Data.ArrayNum == 0) {
            pwVar17 = L"";
            iVar9 = iVar15;
          }
          else {
            pwVar17 = (wchar_t *)local_f0.Data.AllocatorInstance.Data;
            iVar9 = local_f0.Data.ArrayNum + -1;
          }
          uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar17);
          iVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<UE::Interchange::FAttributeKey>
                            ((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                              *)local_f8,uVar11,(FAttributeKey *)&local_f0);
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          FVar20.Data = local_f0.Data.AllocatorInstance.Data;
          if (iVar9 == -1) {
            lVar19 = (longlong)local_f0.Data.ArrayNum;
            local_b8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
            if (local_f0.Data.ArrayNum == 0) {
              local_b8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                         local_f0.Data.ArrayNum,&local_b8.Key.Data.ArrayMax);
              memcpy(local_b8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
            }
            pFVar12 = ::FString::FString(&local_70,L"GetAttributeHandle");
            LogAttributeStorageErrors(Operation_Error_CannotFoundKey,pFVar12,&local_b8);
          }
          EVar10 = FAttributeStorage::GetAttributeType(local_f8,(FAttributeKey *)&local_f0);
          FVar20.Data = local_f0.Data.AllocatorInstance.Data;
          if (EVar10 != String) {
            lVar19 = (longlong)local_f0.Data.ArrayNum;
            local_a8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.Key.Data.ArrayNum = local_f0.Data.ArrayNum;
            if (local_f0.Data.ArrayNum == 0) {
              local_a8.Key.Data.ArrayMax = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                         local_f0.Data.ArrayNum,&local_a8.Key.Data.ArrayMax);
              memcpy(local_a8.Key.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
            }
            pFVar12 = ::FString::FString(local_60,L"GetAttributeHandle");
            pFVar22 = &local_a8;
            EVar16 = Operation_Error_WrongType;
            goto LAB_14e454307;
          }
        }
        if (local_90.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar18);
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      iVar9 = iVar15;
      if (local_f8 != (FAttributeStorage *)0x0) {
        FAttributeStorage::GetAttribute<FString,void>(local_f8,(FAttributeKey *)&local_f0,&local_e0)
        ;
        iVar9 = local_e0.Data.ArrayNum;
      }
      FVar20.Data = local_e0.Data.AllocatorInstance.Data;
      if (iVar9 == 0) {
        pwVar17 = L"";
      }
      else {
        iVar15 = iVar9 + -1;
        pwVar17 = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar17);
      iVar15 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                           *)this,uVar11,&local_e0);
      pFVar18 = pFVar21;
      if (((iVar15 == -1) ||
          (pFVar18 = (FAttributeAllocationInfo *)
                     (*(longlong *)&this->CachedKeysAndValues + (longlong)iVar15 * 0x48),
          pFVar18 == (FAttributeAllocationInfo *)0x0)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar25)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      puVar3 = &local_res20->field_0x8;
      (pFVar18->Sizes).AllocatorInstance.Data = *(FScriptContainerElement **)local_res20;
      ::FString::operator=((FString *)&(pFVar18->Sizes).ArrayNum,(FString *)puVar3);
      pFVar4 = *(FAttributeStorage **)local_res20;
      if (pFVar4 != (FAttributeStorage *)0x0) {
        pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar4,(FAttributeKey *)puVar3);
        local_d0 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
        if (pTVar13 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          local_d0 = pFVar21;
        }
        if (local_d0 != (FAttributeAllocationInfo *)0x0) {
          pFVar2 = &pFVar4->StorageMutex;
          if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
          local_res8[0] = false;
          FVar14.Data = (FScriptContainerElement *)L"";
          if (iVar9 != 0) {
            FVar14.Data = FVar20.Data;
          }
          FAttributeStorage::MultiSizeSetAttribute<FString>
                    (pFVar4,local_d0,0,&local_e0,(uchar *)FVar14.Data,local_res8);
          FAttributeStorage::UpdateAllocationInfoHash(pFVar4,local_d0);
          if (local_res8[0] != false) {
            FAttributeStorage::DefragInternal(pFVar4);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          FVar20.Data = local_e0.Data.AllocatorInstance.Data;
        }
      }
      FAttributeStorage::UnregisterAttribute(local_98,(FAttributeKey *)&local_f0);
      FAttributeStorage::UnregisterAttribute(local_98,(FAttributeKey *)&local_res20->field_0x20);
      if (*(int *)&(this->CachedKeysAndValues).field_0x8 !=
          *(int *)&(this->CachedKeysAndValues).field_0x34) {
        TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                    *)this,local_res10,local_res18);
      }
      pFVar4 = (this->KeyCountHandle).AttributeStorage;
      local_d0 = (FAttributeAllocationInfo *)
                 CONCAT44(local_d0._4_4_,
                          *(int *)&(this->CachedKeysAndValues).field_0x8 -
                          *(int *)&(this->CachedKeysAndValues).field_0x34);
      if (pFVar4 != (FAttributeStorage *)0x0) {
        pTVar13 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                          *)pFVar4,&(this->KeyCountHandle).Key);
        pFVar18 = (FAttributeAllocationInfo *)&pTVar13->field_0x10;
        if (pTVar13 ==
            (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
             *)0x0) {
          pFVar18 = pFVar21;
        }
        FAttributeStorage::SetAttribute<int>(pFVar4,pFVar18,(int *)&local_d0);
      }
      bVar25 = true;
      if (FVar20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar20.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      goto LAB_14e454014;
    }
  }
LAB_14e453fe4:
  bVar25 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494834>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x232,"AttributesPtr.IsValid()");
  if (bVar25) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar25 = false;
LAB_14e454014:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  return bVar25;
}

// RemoveKey @ 14e455510

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::RemoveKey
          (TMapAttributeHelper<FString,int> *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  uint uVar5;
  atomic<int> aVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar10;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar11;
  bool bVar12;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  pTVar11 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
             *)(this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar10 = pTVar11;
  if (pTVar11 ==
      (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
       *)0x0) {
LAB_14e455577:
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494678>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x196,"AttributesPtr.IsValid()");
    pTVar11 = pTVar10;
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pTVar11->field_0x8;
    do {
      pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                 *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e455577;
      LOCK();
      aVar6 = *(atomic<int> *)&pTVar11->field_0x8;
      bVar12 = aVar3 == aVar6;
      if (bVar12) {
        *(atomic<int> *)&pTVar11->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar12);
    pTVar10 = pTVar11;
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) goto LAB_14e455577;
    iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                        *)this,uVar5,param_1);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
      pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                 *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                   *)0x0;
      }
      if (pTVar10 !=
          (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
           *)0x0) {
        bVar12 = RemoveBySwap(this,uVar5,param_1,pTVar10);
        goto LAB_14e4555a7;
      }
    }
  }
  bVar12 = false;
LAB_14e4555a7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar11);
  return bVar12;
}

// RemoveKey @ 14e455620

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::RemoveKey
          (TMapAttributeHelper<FString,float> *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  uint uVar5;
  atomic<int> aVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar10;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar11;
  bool bVar12;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  pTVar11 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
             *)(this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar10 = pTVar11;
  if (pTVar11 ==
      (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
       *)0x0) {
LAB_14e455687:
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494678>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x196,"AttributesPtr.IsValid()");
    pTVar11 = pTVar10;
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pTVar11->field_0x8;
    do {
      pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                 *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e455687;
      LOCK();
      aVar6 = *(atomic<int> *)&pTVar11->field_0x8;
      bVar12 = aVar3 == aVar6;
      if (bVar12) {
        *(atomic<int> *)&pTVar11->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar12);
    pTVar10 = pTVar11;
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) goto LAB_14e455687;
    iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                        *)this,uVar5,param_1);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
      pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                 *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                   *)0x0;
      }
      if (pTVar10 !=
          (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
           *)0x0) {
        bVar12 = RemoveBySwap(this,uVar5,param_1,pTVar10);
        goto LAB_14e4556b7;
      }
    }
  }
  bVar12 = false;
LAB_14e4556b7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar11);
  return bVar12;
}

// RemoveKey @ 14e455730

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::RemoveKey
          (TMapAttributeHelper<FString,FString> *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  uint uVar5;
  atomic<int> aVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar10;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar11;
  bool bVar12;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  pTVar11 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
             *)(this->Attributes).WeakReferenceCount.ReferenceController;
  pTVar10 = pTVar11;
  if (pTVar11 ==
      (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
       *)0x0) {
LAB_14e455797:
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4942768438637494678>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                        ,0x196,"AttributesPtr.IsValid()");
    pTVar11 = pTVar10;
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pTVar11->field_0x8;
    do {
      pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                 *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14e455797;
      LOCK();
      aVar6 = *(atomic<int> *)&pTVar11->field_0x8;
      bVar12 = aVar3 == aVar6;
      if (bVar12) {
        *(atomic<int> *)&pTVar11->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar12);
    pTVar10 = pTVar11;
    if ((this->Attributes).Object == (FAttributeStorage *)0x0) goto LAB_14e455797;
    iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                        *)this,uVar5,param_1);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
      pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                 *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        pTVar10 = (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                   *)0x0;
      }
      if (pTVar10 !=
          (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
           *)0x0) {
        bVar12 = RemoveBySwap(this,uVar5,param_1,pTVar10);
        goto LAB_14e4557c7;
      }
    }
  }
  bVar12 = false;
LAB_14e4557c7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar11);
  return bVar12;
}

// SetKeyValueByHash @ 14e45ce20

bool __thiscall
UE::Interchange::TMapAttributeHelper<int,int>::SetKeyValueByHash
          (TMapAttributeHelper<int,int> *this,uint param_1,int *param_2,int *param_3)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
  *pTVar6;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar7;
  EAttributeStorageResult EVar8;
  FAttributeAllocationInfo *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  int local_res8 [2];
  TAttributeHandle<int,void> local_a8;
  TAttributeHandle<int,void> local_90;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FAttributeStorage *local_58;
  FScriptContainerElement *local_50;
  int local_48;
  int local_44;
  FAttributeStorage *local_40;
  FScriptContainerElement *local_38;
  int local_30;
  int local_2c;
  
  pTVar10 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e45ce72;
      }
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar5;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar11);
    pFVar1 = (this->Attributes).Object;
    if (pFVar1 != (FAttributeStorage *)0x0) {
      pTVar6 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
               ::FindByHash<int>((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
                                  *)this,param_1,param_2);
      if (pTVar6 == (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                     *)0x0) {
        GetKeyAttribute(this,&local_68,
                        *(int *)&(this->CachedKeysAndValues).field_0x8 -
                        *(int *)&(this->CachedKeysAndValues).field_0x34);
        GetValueAttribute(this,&local_78,param_2);
        EVar8 = FAttributeStorage::RegisterAttribute<int,void>(pFVar1,&local_68,param_2,None);
        if ((EVar8 != Operation_Success) &&
           (bVar11 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494642>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x172,
                                "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        EVar8 = FAttributeStorage::RegisterAttribute<int,void>(pFVar1,&local_78,param_3,None);
        if ((EVar8 != Operation_Success) &&
           (bVar11 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494643>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x173,
                                "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_90,&local_78,pFVar1);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_a8,&local_68,pFVar1);
        local_58 = local_a8.AttributeStorage;
        local_50 = local_a8.Key.Key.Data.AllocatorInstance.Data;
        local_48 = local_a8.Key.Key.Data.ArrayNum;
        local_44 = local_a8.Key.Key.Data.ArrayMax;
        local_40 = local_90.AttributeStorage;
        local_38 = local_90.Key.Key.Data.AllocatorInstance.Data;
        local_30 = local_90.Key.Key.Data.ArrayNum;
        local_2c = local_90.Key.Key.Data.ArrayMax;
        local_90.Key.Key.Data.ArrayNum = 0;
        local_90.Key.Key.Data.ArrayMax = 0;
        local_a8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Key.Key.Data.ArrayNum = 0;
        local_a8.Key.Key.Data.ArrayMax = 0;
        local_90.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
        ::
        EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>
                  ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>_>
                    *)this,param_1,param_2,
                   (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>
                    *)&local_58);
        if (local_38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38);
        }
        if (local_50 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50);
        }
        if (local_a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Key.Key.Data.AllocatorInstance.Data);
        }
        if (local_90.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Key.Data.AllocatorInstance.Data);
        }
        local_res8[0] =
             *(int *)&(this->CachedKeysAndValues).field_0x8 -
             *(int *)&(this->CachedKeysAndValues).field_0x34;
        pFVar1 = (this->KeyCountHandle).AttributeStorage;
        if (pFVar1 != (FAttributeStorage *)0x0) {
          pTVar7 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar1,&(this->KeyCountHandle).Key);
          pFVar9 = (FAttributeAllocationInfo *)&pTVar7->field_0x10;
          if (pTVar7 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar9 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<int>(pFVar1,pFVar9,local_res8);
        }
        if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
        }
        if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar1 = *(FAttributeStorage **)&pTVar6->field_0x18;
        if (pFVar1 != (FAttributeStorage *)0x0) {
          pTVar7 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar1,(FAttributeKey *)&pTVar6->field_0x20);
          pFVar9 = (FAttributeAllocationInfo *)&pTVar7->field_0x10;
          if (pTVar7 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar9 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<int>(pFVar1,pFVar9,param_3);
          bVar11 = true;
          goto LAB_14e45cea2;
        }
      }
      bVar11 = true;
      goto LAB_14e45cea2;
    }
  }
LAB_14e45ce72:
  bVar11 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar11) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar11 = false;
LAB_14e45cea2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// SetKeyValueByHash @ 14e45d0e0

bool __thiscall
UE::Interchange::TMapAttributeHelper<int,float>::SetKeyValueByHash
          (TMapAttributeHelper<int,float> *this,uint param_1,int *param_2,float *param_3)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
  *pTVar6;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar7;
  EAttributeStorageResult EVar8;
  FAttributeAllocationInfo *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  int local_res8 [2];
  TAttributeHandle<int,void> local_a8;
  TAttributeHandle<float,void> local_90;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FAttributeStorage *local_58;
  FScriptContainerElement *local_50;
  int local_48;
  int local_44;
  FAttributeStorage *local_40;
  FScriptContainerElement *local_38;
  int local_30;
  int local_2c;
  
  pTVar10 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e45d132;
      }
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar5;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar11);
    pFVar1 = (this->Attributes).Object;
    if (pFVar1 != (FAttributeStorage *)0x0) {
      pTVar6 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
               ::FindByHash<int>((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
                                  *)this,param_1,param_2);
      if (pTVar6 == (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                     *)0x0) {
        GetKeyAttribute(this,&local_68,
                        *(int *)&(this->CachedKeysAndValues).field_0x8 -
                        *(int *)&(this->CachedKeysAndValues).field_0x34);
        GetValueAttribute(this,&local_78,param_2);
        EVar8 = FAttributeStorage::RegisterAttribute<int,void>(pFVar1,&local_68,param_2,None);
        if ((EVar8 != Operation_Success) &&
           (bVar11 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494642>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x172,
                                "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        EVar8 = FAttributeStorage::RegisterAttribute<float,void>(pFVar1,&local_78,param_3,None);
        if ((EVar8 != Operation_Success) &&
           (bVar11 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494643>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x173,
                                "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
                  (&local_90,&local_78,pFVar1);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_a8,&local_68,pFVar1);
        local_58 = local_a8.AttributeStorage;
        local_50 = local_a8.Key.Key.Data.AllocatorInstance.Data;
        local_48 = local_a8.Key.Key.Data.ArrayNum;
        local_44 = local_a8.Key.Key.Data.ArrayMax;
        local_40 = local_90.AttributeStorage;
        local_38 = local_90.Key.Key.Data.AllocatorInstance.Data;
        local_30 = local_90.Key.Key.Data.ArrayNum;
        local_2c = local_90.Key.Key.Data.ArrayMax;
        local_90.Key.Key.Data.ArrayNum = 0;
        local_90.Key.Key.Data.ArrayMax = 0;
        local_a8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Key.Key.Data.ArrayNum = 0;
        local_a8.Key.Key.Data.ArrayMax = 0;
        local_90.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
        ::
        EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>
                  ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>_>
                    *)this,param_1,param_2,
                   (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>
                    *)&local_58);
        if (local_38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38);
        }
        if (local_50 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50);
        }
        if (local_a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Key.Key.Data.AllocatorInstance.Data);
        }
        if (local_90.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Key.Data.AllocatorInstance.Data);
        }
        local_res8[0] =
             *(int *)&(this->CachedKeysAndValues).field_0x8 -
             *(int *)&(this->CachedKeysAndValues).field_0x34;
        pFVar1 = (this->KeyCountHandle).AttributeStorage;
        if (pFVar1 != (FAttributeStorage *)0x0) {
          pTVar7 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar1,&(this->KeyCountHandle).Key);
          pFVar9 = (FAttributeAllocationInfo *)&pTVar7->field_0x10;
          if (pTVar7 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar9 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<int>(pFVar1,pFVar9,local_res8);
        }
        if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
        }
        if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar1 = *(FAttributeStorage **)&pTVar6->field_0x18;
        if (pFVar1 != (FAttributeStorage *)0x0) {
          pTVar7 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar1,(FAttributeKey *)&pTVar6->field_0x20);
          pFVar9 = (FAttributeAllocationInfo *)&pTVar7->field_0x10;
          if (pTVar7 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar9 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<float>(pFVar1,pFVar9,param_3);
          bVar11 = true;
          goto LAB_14e45d162;
        }
      }
      bVar11 = true;
      goto LAB_14e45d162;
    }
  }
LAB_14e45d132:
  bVar11 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar11) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar11 = false;
LAB_14e45d162:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// SetKeyValueByHash @ 14e45d3a0

bool __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::SetKeyValueByHash
          (TMapAttributeHelper<int,FString> *this,uint param_1,int *param_2,FString *param_3)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
  *pTVar6;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar7;
  EAttributeStorageResult EVar8;
  FAttributeAllocationInfo *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  int local_res8 [2];
  TAttributeHandle<int,void> local_a8;
  TAttributeHandle<FString,void> local_90;
  FAttributeKey local_78;
  FAttributeKey local_68;
  FAttributeStorage *local_58;
  FScriptContainerElement *local_50;
  int local_48;
  int local_44;
  FAttributeStorage *local_40;
  FScriptContainerElement *local_38;
  int local_30;
  int local_2c;
  
  pTVar10 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e45d3f2;
      }
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar5;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar11);
    pFVar1 = (this->Attributes).Object;
    if (pFVar1 != (FAttributeStorage *)0x0) {
      pTVar6 = TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
               ::FindByHash<int>((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                                  *)this,param_1,param_2);
      if (pTVar6 == (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                     *)0x0) {
        GetKeyAttribute(this,&local_68,
                        *(int *)&(this->CachedKeysAndValues).field_0x8 -
                        *(int *)&(this->CachedKeysAndValues).field_0x34);
        GetValueAttribute(this,&local_78,param_2);
        EVar8 = FAttributeStorage::RegisterAttribute<int,void>(pFVar1,&local_68,param_2,None);
        if ((EVar8 != Operation_Success) &&
           (bVar11 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494642>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x172,
                                "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        EVar8 = FAttributeStorage::RegisterAttribute<FString,void>(pFVar1,&local_78,param_3,None);
        if ((EVar8 != Operation_Success) &&
           (bVar11 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494643>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x173,
                                "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                  (&local_90,&local_78,pFVar1);
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_a8,&local_68,pFVar1);
        local_58 = local_a8.AttributeStorage;
        local_50 = local_a8.Key.Key.Data.AllocatorInstance.Data;
        local_48 = local_a8.Key.Key.Data.ArrayNum;
        local_44 = local_a8.Key.Key.Data.ArrayMax;
        local_40 = local_90.AttributeStorage;
        local_38 = local_90.Key.Key.Data.AllocatorInstance.Data;
        local_30 = local_90.Key.Key.Data.ArrayNum;
        local_2c = local_90.Key.Key.Data.ArrayMax;
        local_90.Key.Key.Data.ArrayNum = 0;
        local_90.Key.Key.Data.ArrayMax = 0;
        local_a8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Key.Key.Data.ArrayNum = 0;
        local_a8.Key.Key.Data.ArrayMax = 0;
        local_90.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
        ::
        EmplaceByHash<int_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>
                  ((TMapBase<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>_>
                    *)this,param_1,param_2,
                   (TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>
                    *)&local_58);
        if (local_38 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38);
        }
        if (local_50 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50);
        }
        if (local_a8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Key.Key.Data.AllocatorInstance.Data);
        }
        if (local_90.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Key.Data.AllocatorInstance.Data);
        }
        local_res8[0] =
             *(int *)&(this->CachedKeysAndValues).field_0x8 -
             *(int *)&(this->CachedKeysAndValues).field_0x34;
        pFVar1 = (this->KeyCountHandle).AttributeStorage;
        if (pFVar1 != (FAttributeStorage *)0x0) {
          pTVar7 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar1,&(this->KeyCountHandle).Key);
          pFVar9 = (FAttributeAllocationInfo *)&pTVar7->field_0x10;
          if (pTVar7 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar9 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<int>(pFVar1,pFVar9,local_res8);
        }
        if (local_78.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Key.Data.AllocatorInstance.Data);
        }
        if (local_68.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Key.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar1 = *(FAttributeStorage **)&pTVar6->field_0x18;
        if (pFVar1 != (FAttributeStorage *)0x0) {
          pTVar7 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar1,(FAttributeKey *)&pTVar6->field_0x20);
          pFVar9 = (FAttributeAllocationInfo *)&pTVar7->field_0x10;
          if (pTVar7 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar9 = (FAttributeAllocationInfo *)0x0;
          }
          FAttributeStorage::SetAttribute<FString>(pFVar1,pFVar9,param_3);
          bVar11 = true;
          goto LAB_14e45d422;
        }
      }
      bVar11 = true;
      goto LAB_14e45d422;
    }
  }
LAB_14e45d3f2:
  bVar11 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar11) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar11 = false;
LAB_14e45d422:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// SetKeyValueByHash @ 14e45d660

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::SetKeyValueByHash
          (TMapAttributeHelper<FString,int> *this,uint param_1,FString *param_2,int *param_3)

{
  longlong lVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  int iVar7;
  FAttributeAllocationInfo *pFVar8;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar9;
  EAttributeStorageResult EVar10;
  TReferenceControllerBase<1> *pTVar11;
  FAttributeAllocationInfo *pFVar12;
  bool bVar13;
  int local_res8 [2];
  TAttributeHandle<FString,void> local_c8;
  TAttributeHandle<int,void> local_b0;
  undefined1 local_98 [8];
  FAttributeKey local_90;
  FAttributeKey local_80;
  FAttributeStorage *local_70;
  FScriptContainerElement *local_68;
  int local_60;
  int local_5c;
  FAttributeStorage *local_58;
  FScriptContainerElement *local_50;
  int local_48;
  int local_44;
  FString *local_40;
  FAttributeStorage **local_38;
  
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e45d6b2;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    pFVar2 = (this->Attributes).Object;
    if (pFVar2 != (FAttributeStorage *)0x0) {
      iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                          *)this,param_1,param_2);
      pFVar12 = (FAttributeAllocationInfo *)0x0;
      if (iVar7 == -1) {
LAB_14e45d77b:
        GetKeyAttribute(this,&local_80,
                        *(int *)&(this->CachedKeysAndValues).field_0x8 -
                        *(int *)&(this->CachedKeysAndValues).field_0x34);
        GetValueAttribute(this,&local_90,param_2);
        EVar10 = FAttributeStorage::RegisterAttribute<FString,void>(pFVar2,&local_80,param_2,None);
        if ((EVar10 != Operation_Success) &&
           (bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494642>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x172,
                                "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        EVar10 = FAttributeStorage::RegisterAttribute<int,void>(pFVar2,&local_90,param_3,None);
        if ((EVar10 != Operation_Success) &&
           (bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494643>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x173,
                                "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FAttributeStorage::TAttributeHandle<int,void>::TAttributeHandle<int,void>
                  (&local_b0,&local_90,pFVar2);
        FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                  (&local_c8,&local_80,pFVar2);
        local_70 = local_c8.AttributeStorage;
        local_68 = local_c8.Key.Key.Data.AllocatorInstance.Data;
        local_60 = local_c8.Key.Key.Data.ArrayNum;
        local_5c = local_c8.Key.Key.Data.ArrayMax;
        local_58 = local_b0.AttributeStorage;
        local_50 = local_b0.Key.Key.Data.AllocatorInstance.Data;
        local_48 = local_b0.Key.Key.Data.ArrayNum;
        local_44 = local_b0.Key.Key.Data.ArrayMax;
        local_38 = &local_70;
        local_c8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Key.Key.Data.ArrayNum = 0;
        local_c8.Key.Key.Data.ArrayMax = 0;
        local_b0.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.Key.Key.Data.ArrayNum = 0;
        local_b0.Key.Key.Data.ArrayMax = 0;
        local_40 = param_2;
        TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>_>
                  ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>,0>,FDefaultSetAllocator>
                    *)this,(uint)local_98,
                   (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_&&>
                    *)(ulonglong)param_1,(bool *)&local_40);
        if (local_50 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50);
        }
        if (local_68 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68);
        }
        if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
        }
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        local_res8[0] =
             *(int *)&(this->CachedKeysAndValues).field_0x8 -
             *(int *)&(this->CachedKeysAndValues).field_0x34;
        pFVar2 = (this->KeyCountHandle).AttributeStorage;
        if (pFVar2 != (FAttributeStorage *)0x0) {
          pTVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar2,&(this->KeyCountHandle).Key);
          pFVar8 = (FAttributeAllocationInfo *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar8 = pFVar12;
          }
          FAttributeStorage::SetAttribute<int>(pFVar2,pFVar8,local_res8);
        }
        if (local_90.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Data.AllocatorInstance.Data);
        }
        if (local_80.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Key.Data.AllocatorInstance.Data);
        }
      }
      else {
        lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
        pFVar8 = (FAttributeAllocationInfo *)(lVar1 + 0x10);
        if (lVar1 == 0) {
          pFVar8 = pFVar12;
        }
        if (pFVar8 == (FAttributeAllocationInfo *)0x0) goto LAB_14e45d77b;
        pFVar2 = *(FAttributeStorage **)&(pFVar8->Sizes).ArrayNum;
        if (pFVar2 != (FAttributeStorage *)0x0) {
          pTVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar2,(FAttributeKey *)&pFVar8->Type);
          pFVar8 = (FAttributeAllocationInfo *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar8 = pFVar12;
          }
          FAttributeStorage::SetAttribute<int>(pFVar2,pFVar8,param_3);
          bVar13 = true;
          goto LAB_14e45d6e2;
        }
      }
      bVar13 = true;
      goto LAB_14e45d6e2;
    }
  }
LAB_14e45d6b2:
  bVar13 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar13) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar13 = false;
LAB_14e45d6e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar13;
}

// SetKeyValueByHash @ 14e45d950

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::SetKeyValueByHash
          (TMapAttributeHelper<FString,float> *this,uint param_1,FString *param_2,float *param_3)

{
  longlong lVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  int iVar7;
  FAttributeAllocationInfo *pFVar8;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar9;
  EAttributeStorageResult EVar10;
  TReferenceControllerBase<1> *pTVar11;
  FAttributeAllocationInfo *pFVar12;
  bool bVar13;
  int local_res8 [2];
  TAttributeHandle<FString,void> local_c8;
  TAttributeHandle<float,void> local_b0;
  undefined1 local_98 [8];
  FAttributeKey local_90;
  FAttributeKey local_80;
  FAttributeStorage *local_70;
  FScriptContainerElement *local_68;
  int local_60;
  int local_5c;
  FAttributeStorage *local_58;
  FScriptContainerElement *local_50;
  int local_48;
  int local_44;
  FString *local_40;
  FAttributeStorage **local_38;
  
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e45d9a2;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    pFVar2 = (this->Attributes).Object;
    if (pFVar2 != (FAttributeStorage *)0x0) {
      iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                          *)this,param_1,param_2);
      pFVar12 = (FAttributeAllocationInfo *)0x0;
      if (iVar7 == -1) {
LAB_14e45da6b:
        GetKeyAttribute(this,&local_80,
                        *(int *)&(this->CachedKeysAndValues).field_0x8 -
                        *(int *)&(this->CachedKeysAndValues).field_0x34);
        GetValueAttribute(this,&local_90,param_2);
        EVar10 = FAttributeStorage::RegisterAttribute<FString,void>(pFVar2,&local_80,param_2,None);
        if ((EVar10 != Operation_Success) &&
           (bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494642>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x172,
                                "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        EVar10 = FAttributeStorage::RegisterAttribute<float,void>(pFVar2,&local_90,param_3,None);
        if ((EVar10 != Operation_Success) &&
           (bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494643>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x173,
                                "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FAttributeStorage::TAttributeHandle<float,void>::TAttributeHandle<float,void>
                  (&local_b0,&local_90,pFVar2);
        FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                  (&local_c8,&local_80,pFVar2);
        local_70 = local_c8.AttributeStorage;
        local_68 = local_c8.Key.Key.Data.AllocatorInstance.Data;
        local_60 = local_c8.Key.Key.Data.ArrayNum;
        local_5c = local_c8.Key.Key.Data.ArrayMax;
        local_58 = local_b0.AttributeStorage;
        local_50 = local_b0.Key.Key.Data.AllocatorInstance.Data;
        local_48 = local_b0.Key.Key.Data.ArrayNum;
        local_44 = local_b0.Key.Key.Data.ArrayMax;
        local_38 = &local_70;
        local_c8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Key.Key.Data.ArrayNum = 0;
        local_c8.Key.Key.Data.ArrayMax = 0;
        local_b0.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.Key.Key.Data.ArrayNum = 0;
        local_b0.Key.Key.Data.ArrayMax = 0;
        local_40 = param_2;
        TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>_>
                  ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>,0>,FDefaultSetAllocator>
                    *)this,(uint)local_98,
                   (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_&&>
                    *)(ulonglong)param_1,(bool *)&local_40);
        if (local_50 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50);
        }
        if (local_68 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68);
        }
        if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
        }
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        local_res8[0] =
             *(int *)&(this->CachedKeysAndValues).field_0x8 -
             *(int *)&(this->CachedKeysAndValues).field_0x34;
        pFVar2 = (this->KeyCountHandle).AttributeStorage;
        if (pFVar2 != (FAttributeStorage *)0x0) {
          pTVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar2,&(this->KeyCountHandle).Key);
          pFVar8 = (FAttributeAllocationInfo *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar8 = pFVar12;
          }
          FAttributeStorage::SetAttribute<int>(pFVar2,pFVar8,local_res8);
        }
        if (local_90.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Data.AllocatorInstance.Data);
        }
        if (local_80.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Key.Data.AllocatorInstance.Data);
        }
      }
      else {
        lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
        pFVar8 = (FAttributeAllocationInfo *)(lVar1 + 0x10);
        if (lVar1 == 0) {
          pFVar8 = pFVar12;
        }
        if (pFVar8 == (FAttributeAllocationInfo *)0x0) goto LAB_14e45da6b;
        pFVar2 = *(FAttributeStorage **)&(pFVar8->Sizes).ArrayNum;
        if (pFVar2 != (FAttributeStorage *)0x0) {
          pTVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar2,(FAttributeKey *)&pFVar8->Type);
          pFVar8 = (FAttributeAllocationInfo *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar8 = pFVar12;
          }
          FAttributeStorage::SetAttribute<float>(pFVar2,pFVar8,param_3);
          bVar13 = true;
          goto LAB_14e45d9d2;
        }
      }
      bVar13 = true;
      goto LAB_14e45d9d2;
    }
  }
LAB_14e45d9a2:
  bVar13 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar13) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar13 = false;
LAB_14e45d9d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar13;
}

// SetKeyValueByHash @ 14e45dc40

bool __thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::SetKeyValueByHash
          (TMapAttributeHelper<FString,FString> *this,uint param_1,FString *param_2,FString *param_3
          )

{
  longlong lVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  int iVar7;
  FAttributeAllocationInfo *pFVar8;
  TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
  *pTVar9;
  EAttributeStorageResult EVar10;
  TReferenceControllerBase<1> *pTVar11;
  FAttributeAllocationInfo *pFVar12;
  bool bVar13;
  int local_res8 [2];
  TAttributeHandle<FString,void> local_c8;
  TAttributeHandle<FString,void> local_b0;
  undefined1 local_98 [8];
  FAttributeKey local_90;
  FAttributeKey local_80;
  FAttributeStorage *local_70;
  FScriptContainerElement *local_68;
  int local_60;
  int local_5c;
  FAttributeStorage *local_58;
  FScriptContainerElement *local_50;
  int local_48;
  int local_44;
  FString *local_40;
  FAttributeStorage **local_38;
  
  pTVar11 = (this->Attributes).WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e45dc92;
      }
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar13 = aVar4 == aVar6;
      if (bVar13) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar13);
    pFVar2 = (this->Attributes).Object;
    if (pFVar2 != (FAttributeStorage *)0x0) {
      iVar7 = TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                          *)this,param_1,param_2);
      pFVar12 = (FAttributeAllocationInfo *)0x0;
      if (iVar7 == -1) {
LAB_14e45dd5b:
        GetKeyAttribute(this,&local_80,
                        *(int *)&(this->CachedKeysAndValues).field_0x8 -
                        *(int *)&(this->CachedKeysAndValues).field_0x34);
        GetValueAttribute(this,&local_90,param_2);
        EVar10 = FAttributeStorage::RegisterAttribute<FString,void>(pFVar2,&local_80,param_2,None);
        if ((EVar10 != Operation_Success) &&
           (bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494642>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x172,
                                "AttributesPtr->RegisterAttribute<KeyType>(IndexKey, InKey) == EAttributeStorageResult::Operation_Success"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        EVar10 = FAttributeStorage::RegisterAttribute<FString,void>(pFVar2,&local_90,param_3,None);
        if ((EVar10 != Operation_Success) &&
           (bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4942768438637494643>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                                ,0x173,
                                "AttributesPtr->RegisterAttribute<ValueType>(AttributeKey, InValue) == EAttributeStorageResult::Operation_Success"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                  (&local_b0,&local_90,pFVar2);
        FAttributeStorage::TAttributeHandle<FString,void>::TAttributeHandle<FString,void>
                  (&local_c8,&local_80,pFVar2);
        local_70 = local_c8.AttributeStorage;
        local_68 = local_c8.Key.Key.Data.AllocatorInstance.Data;
        local_60 = local_c8.Key.Key.Data.ArrayNum;
        local_5c = local_c8.Key.Key.Data.ArrayMax;
        local_58 = local_b0.AttributeStorage;
        local_50 = local_b0.Key.Key.Data.AllocatorInstance.Data;
        local_48 = local_b0.Key.Key.Data.ArrayNum;
        local_44 = local_b0.Key.Key.Data.ArrayMax;
        local_38 = &local_70;
        local_c8.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Key.Key.Data.ArrayNum = 0;
        local_c8.Key.Key.Data.ArrayMax = 0;
        local_b0.Key.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.Key.Key.Data.ArrayNum = 0;
        local_b0.Key.Key.Data.ArrayMax = 0;
        local_40 = param_2;
        TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
        ::
        EmplaceByHash<TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>_>
                  ((TSet<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>,0>,FDefaultSetAllocator>
                    *)this,(uint)local_98,
                   (TPairInitializer<FString_const_&,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_&&>
                    *)(ulonglong)param_1,(bool *)&local_40);
        if (local_50 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50);
        }
        if (local_68 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68);
        }
        if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
        }
        if (local_b0.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Key.Key.Data.AllocatorInstance.Data);
        }
        local_res8[0] =
             *(int *)&(this->CachedKeysAndValues).field_0x8 -
             *(int *)&(this->CachedKeysAndValues).field_0x34;
        pFVar2 = (this->KeyCountHandle).AttributeStorage;
        if (pFVar2 != (FAttributeStorage *)0x0) {
          pTVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar2,&(this->KeyCountHandle).Key);
          pFVar8 = (FAttributeAllocationInfo *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar8 = pFVar12;
          }
          FAttributeStorage::SetAttribute<int>(pFVar2,pFVar8,local_res8);
        }
        if (local_90.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Key.Data.AllocatorInstance.Data);
        }
        if (local_80.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Key.Data.AllocatorInstance.Data);
        }
      }
      else {
        lVar1 = *(longlong *)&this->CachedKeysAndValues + (longlong)iVar7 * 0x48;
        pFVar8 = (FAttributeAllocationInfo *)(lVar1 + 0x10);
        if (lVar1 == 0) {
          pFVar8 = pFVar12;
        }
        if (pFVar8 == (FAttributeAllocationInfo *)0x0) goto LAB_14e45dd5b;
        pFVar2 = *(FAttributeStorage **)&(pFVar8->Sizes).ArrayNum;
        if (pFVar2 != (FAttributeStorage *)0x0) {
          pTVar9 = TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>,TDefaultMapHashableKeyFuncs<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo,0>,FDefaultSetAllocator>
                           *)pFVar2,(FAttributeKey *)&pFVar8->Type);
          pFVar8 = (FAttributeAllocationInfo *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<UE::Interchange::FAttributeKey,UE::Interchange::FAttributeStorage::FAttributeAllocationInfo>
                         *)0x0) {
            pFVar8 = pFVar12;
          }
          FAttributeStorage::SetAttribute<FString>(pFVar2,pFVar8,param_3);
          bVar13 = true;
          goto LAB_14e45dcc2;
        }
      }
      bVar13 = true;
      goto LAB_14e45dcc2;
    }
  }
LAB_14e45dc92:
  bVar13 = Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<4942768438637494629>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\Nodes\\InterchangeBaseNodeUtilities.h"
                      ,0x165,"AttributesPtr.IsValid()");
  if (bVar13) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar13 = false;
LAB_14e45dcc2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar13;
}

// ToMap @ 14e461800

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
UE::Interchange::TMapAttributeHelper<int,int>::ToMap
          (TMapAttributeHelper<int,int> *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  TMapAttributeHelper<int,int> *pTVar2;
  TMapAttributeHelper<int,int> *pTVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  TMapAttributeHelper<int,int> *local_res8;
  undefined8 local_res10;
  int local_res18 [2];
  undefined4 local_res20;
  uint local_118;
  uint uStack_114;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_cc;
  TPairInitializer<int_&&,int_&&> local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  TMapAttributeHelper<int,int> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined8 *local_60;
  int *local_58;
  
  uVar15 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar13 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res10 = 1;
  uVar19 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
           *(int *)&(this->CachedKeysAndValues).field_0x34;
  uVar21 = 1;
  local_res8 = this;
  if (uVar19 == 0) goto LAB_14e461a78;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar19);
  uVar20 = 1;
  if (3 < uVar19) {
    uVar12 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (undefined4)lVar11;
    uVar20 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar20 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14e461a78;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar20;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar20 != 0) {
    uVar19 = uVar20;
    if (uVar20 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar19 = 0;
        goto LAB_14e4618e4;
      }
    }
    else {
LAB_14e4618e4:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar19,4);
    }
    if (0 < (int)uVar20) {
      uVar16 = (ulonglong)uVar20;
      uVar12 = uVar15;
      do {
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar8 = uVar12 & (longlong)(int)uVar20 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(puVar10 + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  uVar21 = local_res10;
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar19 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    local_118 = 0;
    uStack_114 = (uint)local_res10;
    uStack_104 = 0;
    uStack_100 = 0;
    uVar12 = uVar15;
    if (uVar19 != 0) {
      puVar18 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar18 = (uint *)local_b0.Array;
      }
      uVar20 = *puVar18;
      uVar16 = uVar15;
      while (uVar20 == 0) {
        uStack_100 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_100;
        iVar14 = (int)uVar12;
        local_118 = iVar14 + 1;
        uVar12 = (ulonglong)local_118;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
        goto LAB_14e4619de;
        uVar20 = puVar18[(longlong)iVar14 + 1];
      }
      uStack_114 = -uVar20 & uVar20;
      uVar12 = (ulonglong)uStack_114 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uStack_104 = (int)lVar11 + -1 + uStack_100;
      uVar12 = (ulonglong)uStack_104;
      if ((int)uVar19 < (int)uStack_104) {
LAB_14e4619de:
        uVar12 = (ulonglong)uVar19;
        uStack_104 = uVar19;
      }
    }
    local_b0._padding_ = CONCAT44(uStack_114,local_118);
    local_b0.CurrentBitIndex = uStack_104;
    local_b0.UnvisitedBitMask = 0xffffffff;
    local_b0._28_4_ = uStack_fc;
    local_b0.BaseBitIndex = uStack_100;
    local_c0.Value = (int *)__return_storage_ptr__;
    if ((int)uVar12 < (int)uVar19) {
      do {
        puVar18 = (uint *)((longlong)(int)uVar12 * 0x10 + *(longlong *)local_c0.Value);
        uVar19 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *puVar18;
        puVar18[3] = uVar19;
        puVar10 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar19;
        puVar18[2] = *(uint *)(puVar10 + uVar16 * 4);
        *(int *)(puVar10 + uVar16 * 4) = (int)uVar12;
        local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
        uVar12 = (ulonglong)(uint)local_b0.CurrentBitIndex;
        uVar21 = local_res10;
      } while (local_b0.CurrentBitIndex < (local_b0.Array)->NumBits);
    }
  }
LAB_14e461a78:
  pTVar2 = local_res8;
  uVar5 = (uint)uVar21;
  uVar20 = 0;
  uVar19 = *(uint *)&(local_res8->CachedKeysAndValues).field_0x28;
  puVar10 = &(local_res8->CachedKeysAndValues).field_0x10;
  uVar6 = uVar20;
  if (uVar19 != 0) {
    puVar18 = *(uint **)&(local_res8->CachedKeysAndValues).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar10;
    }
    uVar6 = *puVar18;
    uVar12 = uVar15;
    uVar20 = 0;
    uVar13 = 0;
    while (uVar6 == 0) {
      iVar14 = (int)uVar15;
      uVar20 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uVar20;
      uVar13 = iVar14 + 1;
      uVar15 = (ulonglong)uVar13;
      uVar6 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
      goto LAB_14e461afe;
      uVar6 = puVar18[(longlong)iVar14 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar15 = (ulonglong)uVar5 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar6 = (uVar20 - 1) + (int)lVar11;
    if ((int)uVar19 < (int)uVar6) {
      uVar6 = uVar19;
    }
  }
LAB_14e461afe:
  uVar7 = *(uint *)&(local_res8->CachedKeysAndValues).field_0x28;
  TStack_88._padding_ = CONCAT44(uVar5,uVar13);
  uVar13 = uVar7 & 0xffffffe0;
  TStack_88.CurrentBitIndex = uVar6;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  local_90 = local_res8;
  iVar14 = (int)uVar7 >> 5;
  TStack_88._28_4_ = uVar6;
  TStack_88.BaseBitIndex = uVar20;
  uStack_68 = CONCAT44(uStack_cc,
                       *(int *)&(local_res8->CachedKeysAndValues).field_0x8 -
                       *(int *)&(local_res8->CachedKeysAndValues).field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar10;
  if ((((int)uVar7 < 0) || ((int)uVar19 < (int)uVar7)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar9 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
             (*pcVar1)();
    return pTVar9;
  }
  uVar19 = *(uint *)&(pTVar2->CachedKeysAndValues).field_0x28;
  if (uVar7 != uVar19) {
    puVar17 = *(undefined1 **)&(pTVar2->CachedKeysAndValues).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar10;
    }
    uVar20 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar20 == 0) {
      lVar11 = (longlong)iVar14;
      uVar13 = uVar13 + 0x20;
      iVar14 = iVar14 + 1;
      uVar7 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e461c00;
      uVar20 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar7 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar19 < (int)uVar7) {
      uVar7 = uVar19;
    }
  }
LAB_14e461c00:
  while( true ) {
    pTVar3 = local_90;
    if (*(int *)&(local_90->CachedKeysAndValues).field_0x8 -
        *(int *)&(local_90->CachedKeysAndValues).field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar7) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar10)) && (pTVar3 == pTVar2))
    break;
    lVar11 = *(longlong *)&pTVar3->CachedKeysAndValues + (longlong)TStack_88.CurrentBitIndex * 0x40;
    if (*(FAttributeStorage **)(lVar11 + 8) != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<int,void>
                (*(FAttributeStorage **)(lVar11 + 8),(FAttributeKey *)(lVar11 + 0x10),
                 (int *)&local_res10);
    }
    if (*(FAttributeStorage **)(lVar11 + 0x20) != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<int,void>
                (*(FAttributeStorage **)(lVar11 + 0x20),(FAttributeKey *)(lVar11 + 0x28),local_res18
                );
    }
    local_60 = &local_res10;
    local_58 = local_res18;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,int_&&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               __return_storage_ptr__,&local_c0,(bool *)&local_60);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return __return_storage_ptr__;
}

// ToMap @ 14e461cd0

TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> * __thiscall
UE::Interchange::TMapAttributeHelper<int,float>::ToMap
          (TMapAttributeHelper<int,float> *this,
          TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>
          *__return_storage_ptr__)

{
  FAttributeStorage *pFVar1;
  code *pcVar2;
  TMapAttributeHelper<int,float> *pTVar3;
  TMapAttributeHelper<int,float> *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *pTVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  TMapAttributeHelper<int,float> *local_res8;
  undefined8 local_res10;
  float local_res18 [2];
  undefined4 local_res20;
  uint local_118;
  uint uStack_114;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_cc;
  TPairInitializer<int_&&,float_&&> local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  TMapAttributeHelper<int,float> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined8 *local_60;
  float *local_58;
  
  uVar16 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar14 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res10 = 1;
  uVar21 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
           *(int *)&(this->CachedKeysAndValues).field_0x34;
  uVar23 = 1;
  local_res8 = this;
  if (uVar21 == 0) goto LAB_14e461f4b;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar21);
  uVar22 = 1;
  if (3 < uVar21) {
    uVar13 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (undefined4)lVar12;
    uVar22 = 1 << ((byte)lVar12 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar22 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14e461f4b;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar22;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar22 != 0) {
    uVar21 = uVar22;
    if (uVar22 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar21 = 0;
        goto LAB_14e461db4;
      }
    }
    else {
LAB_14e461db4:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar21,4);
    }
    if (0 < (int)uVar22) {
      uVar17 = (ulonglong)uVar22;
      uVar13 = uVar16;
      do {
        puVar11 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar9 = uVar13 & (longlong)(int)uVar22 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(puVar11 + uVar9 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  uVar23 = local_res10;
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar21 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    local_118 = 0;
    uStack_114 = (uint)local_res10;
    uStack_104 = 0;
    uStack_100 = 0;
    uVar13 = uVar16;
    if (uVar21 != 0) {
      puVar19 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar19 = (uint *)local_b0.Array;
      }
      uVar22 = *puVar19;
      uVar17 = uVar16;
      while (uVar22 == 0) {
        uStack_100 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_100;
        iVar15 = (int)uVar13;
        local_118 = iVar15 + 1;
        uVar13 = (ulonglong)local_118;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
        goto LAB_14e461eae;
        uVar22 = puVar19[(longlong)iVar15 + 1];
      }
      uStack_114 = -uVar22 & uVar22;
      uVar13 = (ulonglong)uStack_114 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uStack_104 = (int)lVar12 + -1 + uStack_100;
      uVar13 = (ulonglong)uStack_104;
      if ((int)uVar21 < (int)uStack_104) {
LAB_14e461eae:
        uVar13 = (ulonglong)uVar21;
        uStack_104 = uVar21;
      }
    }
    local_b0._padding_ = CONCAT44(uStack_114,local_118);
    local_b0.CurrentBitIndex = uStack_104;
    local_b0.UnvisitedBitMask = 0xffffffff;
    local_b0._28_4_ = uStack_fc;
    local_b0.BaseBitIndex = uStack_100;
    local_c0.Value = (float *)__return_storage_ptr__;
    if ((int)uVar13 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar12 = *(longlong *)local_c0.Value;
        lVar20 = (longlong)(int)uVar13 * 0x10;
        uVar21 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar20 + lVar12);
        *(uint *)(lVar20 + 0xc + lVar12) = uVar21;
        puVar11 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar17 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(lVar20 + 8 + lVar12) = *(undefined4 *)(puVar11 + uVar17 * 4);
        *(int *)(puVar11 + uVar17 * 4) = (int)uVar13;
        local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
        uVar13 = (ulonglong)(uint)local_b0.CurrentBitIndex;
        uVar23 = local_res10;
      } while (local_b0.CurrentBitIndex < (local_b0.Array)->NumBits);
    }
  }
LAB_14e461f4b:
  pTVar3 = local_res8;
  uVar6 = (uint)uVar23;
  uVar22 = 0;
  uVar21 = *(uint *)&(local_res8->CachedKeysAndValues).field_0x28;
  puVar11 = &(local_res8->CachedKeysAndValues).field_0x10;
  uVar7 = uVar22;
  if (uVar21 != 0) {
    puVar19 = *(uint **)&(local_res8->CachedKeysAndValues).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar11;
    }
    uVar7 = *puVar19;
    uVar13 = uVar16;
    uVar22 = 0;
    uVar14 = 0;
    while (uVar7 == 0) {
      iVar15 = (int)uVar16;
      uVar22 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uVar22;
      uVar14 = iVar15 + 1;
      uVar16 = (ulonglong)uVar14;
      uVar7 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14e461fce;
      uVar7 = puVar19[(longlong)iVar15 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar16 = (ulonglong)uVar6 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar7 = (uVar22 - 1) + (int)lVar12;
    if ((int)uVar21 < (int)uVar7) {
      uVar7 = uVar21;
    }
  }
LAB_14e461fce:
  uVar8 = *(uint *)&(local_res8->CachedKeysAndValues).field_0x28;
  TStack_88._padding_ = CONCAT44(uVar6,uVar14);
  uVar14 = uVar8 & 0xffffffe0;
  TStack_88.CurrentBitIndex = uVar7;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  local_90 = local_res8;
  iVar15 = (int)uVar8 >> 5;
  TStack_88._28_4_ = uVar7;
  TStack_88.BaseBitIndex = uVar22;
  uStack_68 = CONCAT44(uStack_cc,
                       *(int *)&(local_res8->CachedKeysAndValues).field_0x8 -
                       *(int *)&(local_res8->CachedKeysAndValues).field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar11;
  if ((((int)uVar8 < 0) || ((int)uVar21 < (int)uVar8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar10 = (TMap<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *)
              (*pcVar2)();
    return pTVar10;
  }
  uVar21 = *(uint *)&(pTVar3->CachedKeysAndValues).field_0x28;
  if (uVar8 != uVar21) {
    puVar18 = *(undefined1 **)&(pTVar3->CachedKeysAndValues).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar11;
    }
    uVar22 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar22 == 0) {
      lVar12 = (longlong)iVar15;
      uVar14 = uVar14 + 0x20;
      iVar15 = iVar15 + 1;
      uVar8 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14e4620d0;
      uVar22 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar16 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar8 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar21 < (int)uVar8) {
      uVar8 = uVar21;
    }
  }
LAB_14e4620d0:
  while( true ) {
    pTVar4 = local_90;
    if (*(int *)&(local_90->CachedKeysAndValues).field_0x8 -
        *(int *)&(local_90->CachedKeysAndValues).field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar8) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar11)) && (pTVar4 == pTVar3))
    break;
    lVar12 = *(longlong *)&pTVar4->CachedKeysAndValues;
    lVar20 = (longlong)TStack_88.CurrentBitIndex * 0x40;
    pFVar1 = *(FAttributeStorage **)(lVar20 + 8 + lVar12);
    if (pFVar1 != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<int,void>
                (pFVar1,(FAttributeKey *)(lVar12 + 0x10 + lVar20),(int *)&local_res10);
    }
    pFVar1 = *(FAttributeStorage **)(lVar20 + 0x20 + lVar12);
    if (pFVar1 != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<float,void>
                (pFVar1,(FAttributeKey *)(lVar12 + 0x28 + lVar20),local_res18);
    }
    local_60 = &local_res10;
    local_58 = local_res18;
    TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,float_&&>_>
              ((TSet<TTuple<int,float>,TDefaultMapHashableKeyFuncs<int,float,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,&local_c0,(bool *)&local_60);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return __return_storage_ptr__;
}

// ToMap @ 14e4621a0

TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> * __thiscall
UE::Interchange::TMapAttributeHelper<int,FString>::ToMap
          (TMapAttributeHelper<int,FString> *this,
          TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  TMapAttributeHelper<int,FString> *pTVar2;
  bool bVar3;
  ulonglong uVar4;
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *pTVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  undefined8 local_res8;
  int local_res10 [2];
  undefined4 local_res18;
  int local_res20;
  uint local_118;
  uint uStack_114;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  TMapAttributeHelper<int,FString> *local_e8;
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
  TMapAttributeHelper<int,FString> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  int *local_58;
  FString *local_50;
  ulonglong uVar15;
  
  uVar15 = 0;
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
  uVar10 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
           *(int *)&(this->CachedKeysAndValues).field_0x34;
  uVar13 = 0;
  uVar18 = 1;
  if (uVar10 == 0) goto LAB_14e462408;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar10);
  uVar11 = 1;
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (undefined4)lVar8;
    uVar11 = 1 << ((byte)lVar8 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14e462408;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar11;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar11 != 0) {
    uVar10 = uVar11;
    if (uVar11 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar10 = 0;
        goto LAB_14e46227e;
      }
    }
    else {
LAB_14e46227e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar10,4);
    }
    if (0 < (int)uVar11) {
      uVar14 = (ulonglong)uVar11;
      uVar9 = uVar15;
      do {
        puVar7 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar4 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(puVar7 + uVar4 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  uVar18 = local_res8;
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar10 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    local_118 = 0;
    uStack_114 = (uint)local_res8;
    uStack_104 = 0;
    uStack_100 = 0;
    uVar9 = uVar15;
    if (uVar10 != 0) {
      puVar17 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar17 = (uint *)local_a8.Array;
      }
      uVar11 = *puVar17;
      uVar14 = uVar15;
      while (uVar11 == 0) {
        uStack_100 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_100;
        iVar6 = (int)uVar9;
        local_118 = iVar6 + 1;
        uVar9 = (ulonglong)local_118;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_118)
        goto LAB_14e46236e;
        uVar11 = puVar17[(longlong)iVar6 + 1];
      }
      uStack_114 = -uVar11 & uVar11;
      uVar9 = (ulonglong)uStack_114 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res20 = (int)lVar8;
      uStack_104 = local_res20 + -1 + uStack_100;
      uVar9 = (ulonglong)uStack_104;
      if ((int)uVar10 < (int)uStack_104) {
LAB_14e46236e:
        uVar9 = (ulonglong)uVar10;
        uStack_104 = uVar10;
      }
    }
    local_a8._padding_ = CONCAT44(uStack_114,local_118);
    local_a8.CurrentBitIndex = uStack_104;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_fc;
    local_a8.BaseBitIndex = uStack_100;
    local_b4._4_8_ = __return_storage_ptr__;
    if ((int)uVar9 < (int)uVar10) {
      do {
        puVar17 = (uint *)((longlong)(int)uVar9 * 0x20 + *(longlong *)local_b4._4_8_);
        uVar10 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *puVar17;
        puVar17[7] = uVar10;
        puVar7 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar14 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar10;
        puVar17[6] = *(uint *)(puVar7 + uVar14 * 4);
        *(int *)(puVar7 + uVar14 * 4) = (int)uVar9;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar9 = (ulonglong)(uint)local_a8.CurrentBitIndex;
        uVar18 = local_res8;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_14e462408:
  uStack_dc = (uint)uVar18;
  iVar6 = *(int *)&(this->CachedKeysAndValues).field_0x28;
  puVar7 = &(this->CachedKeysAndValues).field_0x10;
  local_c8 = 0;
  iStack_cc = 0;
  if (iVar6 != 0) {
    puVar17 = *(uint **)&(this->CachedKeysAndValues).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar7;
    }
    uVar10 = *puVar17;
    uVar13 = 0;
    while (uVar10 == 0) {
      iVar12 = (int)uVar15;
      local_c8 = local_c8 + 0x20;
      uVar13 = iVar12 + 1;
      uVar15 = (ulonglong)uVar13;
      iStack_cc = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar13) goto LAB_14e462480;
      uVar10 = puVar17[(longlong)iVar12 + 1];
    }
    uStack_dc = -uVar10 & uVar10;
    uVar15 = (ulonglong)uStack_dc * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_b8 = (int)lVar8;
    iStack_cc = local_c8 + -1 + local_b8;
    if (iVar6 < iStack_cc) {
      iStack_cc = iVar6;
    }
  }
LAB_14e462480:
  uVar10 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
  iStack_c0 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
              *(int *)&(this->CachedKeysAndValues).field_0x34;
  uStack_d0 = 0xffffffff;
  uVar11 = uVar10 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_dc,uVar13);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_80._28_4_ = iStack_cc;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = this;
  uStack_e0 = uVar13;
  local_d8 = puVar7;
  iStack_c4 = iStack_cc;
  local_88 = this;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
  if ((((int)uVar10 < 0) || (iVar6 < (int)uVar10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *)
             (*pcVar1)();
    return pTVar5;
  }
  uVar13 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
  if (uVar10 != uVar13) {
    puVar16 = *(undefined1 **)&(this->CachedKeysAndValues).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar7;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar12;
      uVar11 = uVar11 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14e462580;
      uVar10 = *(uint *)(puVar16 + lVar8 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar13 < (int)uVar10) {
      uVar10 = uVar13;
    }
  }
LAB_14e462580:
  while( true ) {
    pTVar2 = local_88;
    if (*(int *)&(local_88->CachedKeysAndValues).field_0x8 -
        *(int *)&(local_88->CachedKeysAndValues).field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<int,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar10) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar7)) && (pTVar2 == this))
    break;
    lVar8 = *(longlong *)&pTVar2->CachedKeysAndValues + (longlong)TStack_80.CurrentBitIndex * 0x40;
    if (*(FAttributeStorage **)(lVar8 + 8) != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<int,void>
                (*(FAttributeStorage **)(lVar8 + 8),(FAttributeKey *)(lVar8 + 0x10),local_res10);
    }
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    if (*(FAttributeStorage **)(lVar8 + 0x20) != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<FString,void>
                (*(FAttributeStorage **)(lVar8 + 0x20),(FAttributeKey *)(lVar8 + 0x28),&local_f8);
    }
    local_58 = local_res10;
    local_50 = &local_f8;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,(TPairInitializer<int_&&,FString_&&> *)local_b4,
               (bool *)&local_58);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return __return_storage_ptr__;
}

// ToMap @ 14e462670

TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> * __thiscall
UE::Interchange::TMapAttributeHelper<FString,int>::ToMap
          (TMapAttributeHelper<FString,int> *this,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  TMapAttributeHelper<FString,int> *pTVar2;
  bool bVar3;
  ulonglong uVar4;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar5;
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
  int local_res10 [2];
  undefined4 local_res18;
  int local_res20;
  uint local_118;
  uint uStack_114;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  TMapAttributeHelper<FString,int> *local_e8;
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
  TMapAttributeHelper<FString,int> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString *local_58;
  int *local_50;
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
  if (uVar11 == 0) goto LAB_14e4628fb;
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
     ((int)uVar11 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14e4628fb;
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
        goto LAB_14e46274e;
      }
    }
    else {
LAB_14e46274e:
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
        goto LAB_14e46283e;
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
LAB_14e46283e:
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
LAB_14e4628fb:
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
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar14) goto LAB_14e46297f;
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
LAB_14e46297f:
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
    pTVar5 = (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *)
             (*pcVar1)();
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
      goto LAB_14e462a80;
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
LAB_14e462a80:
  while( true ) {
    pTVar2 = local_88;
    if (*(int *)&(local_88->CachedKeysAndValues).field_0x8 -
        *(int *)&(local_88->CachedKeysAndValues).field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar11) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar7)) && (pTVar2 == this))
    break;
    lVar8 = *(longlong *)&pTVar2->CachedKeysAndValues + (longlong)TStack_80.CurrentBitIndex * 0x48;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    if (*(FAttributeStorage **)(lVar8 + 0x10) != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<FString,void>
                (*(FAttributeStorage **)(lVar8 + 0x10),(FAttributeKey *)(lVar8 + 0x18),&local_f8);
    }
    if (*(FAttributeStorage **)(lVar8 + 0x28) != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<int,void>
                (*(FAttributeStorage **)(lVar8 + 0x28),(FAttributeKey *)(lVar8 + 0x30),local_res10);
    }
    local_58 = &local_f8;
    local_50 = local_res10;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,int_&&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,(TPairInitializer<FString_&&,int_&&> *)local_b4,
               (bool *)&local_58);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return __return_storage_ptr__;
}

// ToMap @ 14e462b70

TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> * __thiscall
UE::Interchange::TMapAttributeHelper<FString,float>::ToMap
          (TMapAttributeHelper<FString,float> *this,
          TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
          *__return_storage_ptr__)

{
  uint uVar1;
  FAttributeStorage *pFVar2;
  code *pcVar3;
  TMapAttributeHelper<FString,float> *pTVar4;
  bool bVar5;
  ulonglong uVar6;
  TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_> *pTVar7;
  int iVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  TMapAttributeHelper<FString,float> *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  int local_res20;
  int local_118;
  uint uStack_114;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  TMapAttributeHelper<FString,float> *local_e8;
  int iStack_e0;
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
  TMapAttributeHelper<FString,float> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString *local_58;
  undefined8 *local_50;
  
  uVar20 = 1;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res10 = 1;
  uVar13 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
           *(int *)&(this->CachedKeysAndValues).field_0x34;
  local_res8 = this;
  if (uVar13 == 0) goto LAB_14e462e18;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar14 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14e462e18;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar14;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar13 = 0;
        goto LAB_14e462c54;
      }
    }
    else {
LAB_14e462c54:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar10 = 0;
      do {
        puVar9 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar6 = uVar10 & (longlong)(int)uVar14 - 1U;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(puVar9 + uVar6 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    iVar8 = *(int *)&__return_storage_ptr__->field_0x28;
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    uStack_114 = 1;
    local_118 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    if (iVar8 != 0) {
      puVar19 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar19 = (uint *)local_a8.Array;
      }
      uVar13 = *puVar19;
      while (uVar13 == 0) {
        iStack_100 = iStack_100 + 0x20;
        lVar11 = (longlong)local_118;
        local_118 = local_118 + 1;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < local_118) goto LAB_14e462d4e;
        uVar13 = puVar19[lVar11 + 1];
      }
      uStack_114 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_114 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iStack_104 = local_res20 + -1 + iStack_100;
      if (iVar8 < iStack_104) {
LAB_14e462d4e:
        iStack_104 = iVar8;
      }
    }
    local_a8._padding_ = CONCAT44(uStack_114,local_118);
    local_a8.CurrentBitIndex = iStack_104;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_fc;
    local_a8.BaseBitIndex = iStack_100;
    uVar20 = local_res10;
    local_b4._4_8_ = __return_storage_ptr__;
    if (iStack_104 < iVar8) {
      do {
        lVar11 = *(longlong *)local_b4._4_8_;
        lVar16 = (longlong)iStack_104 * 0x20;
        iVar15 = *(int *)(lVar16 + 8 + lVar11);
        iVar8 = iVar15 + -1;
        if (iVar15 == 0) {
          pwVar12 = L"";
          iVar8 = 0;
        }
        else {
          pwVar12 = *(wchar_t **)(lVar16 + lVar11);
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar12);
        uVar13 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar13;
        *(uint *)(lVar16 + 0x1c + lVar11) = uVar13;
        puVar9 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar10 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar16 + 0x18 + lVar11) = *(undefined4 *)(puVar9 + uVar10 * 4);
        *(int *)(puVar9 + uVar10 * 4) = iStack_104;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        this = local_res8;
        uVar20 = local_res10;
        iStack_104 = local_a8.CurrentBitIndex;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_14e462e18:
  uStack_dc = (uint)uVar20;
  iVar8 = *(int *)&(this->CachedKeysAndValues).field_0x28;
  puVar9 = &(this->CachedKeysAndValues).field_0x10;
  iStack_e0 = 0;
  local_c8 = 0;
  iStack_cc = iStack_e0;
  if (iVar8 != 0) {
    puVar19 = *(uint **)&(this->CachedKeysAndValues).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar9;
    }
    uVar13 = *puVar19;
    local_c8 = 0;
    iStack_e0 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14e462e9e;
      uVar13 = puVar19[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_b8 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_b8;
    if (iVar8 < iStack_cc) {
      iStack_cc = iVar8;
    }
  }
LAB_14e462e9e:
  iStack_c0 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
              *(int *)&(this->CachedKeysAndValues).field_0x34;
  uVar13 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
  uStack_d0 = 0xffffffff;
  uVar14 = uVar13 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_80._28_4_ = iStack_cc;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = this;
  local_d8 = puVar9;
  iStack_c4 = iStack_cc;
  local_88 = this;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar9;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TMap<FString,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,float,0>_>
              *)(*pcVar3)();
    return pTVar7;
  }
  uVar1 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
  if (uVar13 != uVar1) {
    puVar18 = *(undefined1 **)&(this->CachedKeysAndValues).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar9;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar15;
      uVar14 = uVar14 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar1;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14e462fa0;
      uVar13 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar1 < (int)uVar13) {
      uVar13 = uVar1;
    }
  }
LAB_14e462fa0:
  while( true ) {
    pTVar4 = local_88;
    if (*(int *)&(local_88->CachedKeysAndValues).field_0x8 -
        *(int *)&(local_88->CachedKeysAndValues).field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<float,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    lVar11 = (longlong)TStack_80.CurrentBitIndex;
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar9)) && (pTVar4 == this))
    break;
    lVar16 = *(longlong *)&pTVar4->CachedKeysAndValues;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    pFVar2 = *(FAttributeStorage **)(lVar16 + 0x10 + lVar11 * 0x48);
    if (pFVar2 != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<FString,void>
                (pFVar2,(FAttributeKey *)(lVar16 + 0x18 + lVar11 * 0x48),&local_f8);
    }
    pFVar2 = *(FAttributeStorage **)(lVar16 + 0x28 + lVar11 * 0x48);
    if (pFVar2 != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<float,void>
                (pFVar2,(FAttributeKey *)(lVar16 + 0x30 + lVar11 * 0x48),(float *)&local_res10);
    }
    local_58 = &local_f8;
    local_50 = &local_res10;
    TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,float_&&>_>
              ((TSet<TTuple<FString,float>,TDefaultMapHashableKeyFuncs<FString,float,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,(TPairInitializer<FString_&&,float_&&> *)local_b4,
               (bool *)&local_58);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return __return_storage_ptr__;
}

// ToMap @ 14e463090

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *
__thiscall
UE::Interchange::TMapAttributeHelper<FString,FString>::ToMap
          (TMapAttributeHelper<FString,FString> *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *__return_storage_ptr__)

{
  undefined8 *puVar1;
  longlong lVar2;
  FAttributeStorage *this_00;
  code *pcVar3;
  TMapAttributeHelper<FString,FString> *pTVar4;
  bool bVar5;
  ulonglong uVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 local_res8;
  undefined4 local_res10;
  int local_res18;
  int local_res20;
  uint local_128;
  uint uStack_124;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  FString local_108;
  FString local_f8;
  TMapAttributeHelper<FString,FString> *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TPairInitializer<FString_&&,FString_&&> local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TMapAttributeHelper<FString,FString> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString *local_58;
  FString *local_50;
  ulonglong uVar17;
  
  uVar17 = 0;
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
  uVar13 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
           *(int *)&(this->CachedKeysAndValues).field_0x34;
  uVar15 = 0;
  uVar21 = 1;
  if (uVar13 == 0) goto LAB_14e463320;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar13);
  if (uVar13 < 4) {
    uVar16 = 1;
  }
  else {
    uVar16 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (undefined4)lVar10;
    uVar16 = (ulonglong)(uint)(1 << ((byte)lVar10 & 0x1f));
  }
  uVar13 = (uint)uVar16;
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar13 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14e463320;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar13;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar13 != 0) {
    uVar20 = uVar13;
    if (uVar13 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar20 = 0;
        goto LAB_14e46316e;
      }
    }
    else {
LAB_14e46316e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar20,4);
    }
    if (0 < (int)uVar13) {
      uVar11 = uVar17;
      do {
        puVar9 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar6 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(puVar9 + uVar6 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  uVar21 = local_res8;
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar13 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    local_128 = 0;
    uStack_124 = (uint)local_res8;
    uStack_114 = 0;
    uStack_110 = 0;
    uVar16 = uVar17;
    if (uVar13 != 0) {
      puVar19 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar19 = (uint *)local_a8.Array;
      }
      uVar20 = *puVar19;
      uVar11 = uVar17;
      while (uVar20 == 0) {
        uStack_110 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_110;
        iVar8 = (int)uVar16;
        local_128 = iVar8 + 1;
        uVar16 = (ulonglong)local_128;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_128)
        goto LAB_14e46325e;
        uVar20 = puVar19[(longlong)iVar8 + 1];
      }
      uStack_124 = -uVar20 & uVar20;
      uVar16 = (ulonglong)uStack_124 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      uStack_114 = local_res18 + -1 + uStack_110;
      uVar16 = (ulonglong)uStack_114;
      if ((int)uVar13 < (int)uStack_114) {
LAB_14e46325e:
        uVar16 = (ulonglong)uVar13;
        uStack_114 = uVar13;
      }
    }
    local_a8._padding_ = CONCAT44(uStack_124,local_128);
    local_a8.CurrentBitIndex = uStack_114;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_10c;
    local_a8.BaseBitIndex = uStack_110;
    local_b8.Value = (FString *)__return_storage_ptr__;
    if ((int)uVar16 < (int)uVar13) {
      do {
        iVar14 = (int)uVar16;
        puVar1 = (undefined8 *)(*(longlong *)local_b8.Value + (longlong)iVar14 * 0x28);
        iVar8 = *(int *)(*(longlong *)local_b8.Value + 8 + (longlong)iVar14 * 0x28);
        if (iVar8 == 0) {
          pwVar12 = L"";
          uVar13 = uVar15;
        }
        else {
          pwVar12 = (wchar_t *)*puVar1;
          uVar13 = iVar8 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar12);
        uVar13 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar13;
        *(uint *)((longlong)puVar1 + 0x24) = uVar13;
        puVar9 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar16 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar9 + uVar16 * 4);
        *(int *)(puVar9 + uVar16 * 4) = iVar14;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar16 = (ulonglong)(uint)local_a8.CurrentBitIndex;
        uVar21 = local_res8;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_14e463320:
  uStack_dc = (uint)uVar21;
  iVar8 = *(int *)&(this->CachedKeysAndValues).field_0x28;
  puVar9 = &(this->CachedKeysAndValues).field_0x10;
  local_c8 = 0;
  iStack_cc = 0;
  if (iVar8 != 0) {
    puVar19 = *(uint **)&(this->CachedKeysAndValues).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar9;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      iVar14 = (int)uVar17;
      local_c8 = local_c8 + 0x20;
      uVar15 = iVar14 + 1;
      uVar17 = (ulonglong)uVar15;
      iStack_cc = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar15) goto LAB_14e46339f;
      uVar13 = puVar19[(longlong)iVar14 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar17 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_res20;
    if (iVar8 < iStack_cc) {
      iStack_cc = iVar8;
    }
  }
LAB_14e46339f:
  iStack_c0 = *(int *)&(this->CachedKeysAndValues).field_0x8 -
              *(int *)&(this->CachedKeysAndValues).field_0x34;
  uVar13 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
  uStack_d0 = 0xffffffff;
  uVar20 = uVar13 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uStack_dc,uVar15);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_80._28_4_ = iStack_cc;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = this;
  uStack_e0 = uVar15;
  local_d8 = puVar9;
  iStack_c4 = iStack_cc;
  local_88 = this;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar9;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)(*pcVar3)();
    return pTVar7;
  }
  uVar15 = *(uint *)&(this->CachedKeysAndValues).field_0x28;
  if (uVar13 != uVar15) {
    puVar18 = *(undefined1 **)&(this->CachedKeysAndValues).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar9;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      uVar20 = uVar20 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e4634a0;
      uVar13 = *(uint *)(puVar18 + lVar10 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar20;
    if ((int)uVar15 < (int)uVar13) {
      uVar13 = uVar15;
    }
  }
LAB_14e4634a0:
  while( true ) {
    pTVar4 = local_88;
    if (*(int *)&(local_88->CachedKeysAndValues).field_0x8 -
        *(int *)&(local_88->CachedKeysAndValues).field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>,UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar9)) && (pTVar4 == this))
    break;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar2 = *(longlong *)&pTVar4->CachedKeysAndValues;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    lVar10 = lVar2 + (longlong)TStack_80.CurrentBitIndex * 0x48;
    this_00 = *(FAttributeStorage **)(lVar2 + 0x10 + (longlong)TStack_80.CurrentBitIndex * 0x48);
    if (this_00 != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<FString,void>
                (this_00,(FAttributeKey *)(lVar10 + 0x18),&local_f8);
    }
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    if (*(FAttributeStorage **)(lVar10 + 0x28) != (FAttributeStorage *)0x0) {
      FAttributeStorage::GetAttribute<FString,void>
                (*(FAttributeStorage **)(lVar10 + 0x28),(FAttributeKey *)(lVar10 + 0x30),&local_108)
      ;
    }
    local_58 = &local_f8;
    local_50 = &local_108;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,&local_b8,(bool *)&local_58);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return __return_storage_ptr__;
}

