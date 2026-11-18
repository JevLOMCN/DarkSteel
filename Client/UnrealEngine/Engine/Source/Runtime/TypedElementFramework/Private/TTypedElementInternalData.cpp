// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 7

// TTypedElementInternalData<FTestTypedElementData> @ 142c954a0

TTypedElementInternalData<FTestTypedElementData> * __thiscall
TTypedElementInternalData<FTestTypedElementData>::TTypedElementInternalData<FTestTypedElementData>
          (TTypedElementInternalData<FTestTypedElementData> *this)

{
  this->_padding_ = (longlong)&___7__TTypedElementInternalData_UFTestTypedElementData____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Data).InternalElementId = (FName)0x0;
  return this;
}

// TTypedElementInternalData<void> @ 142c954d0

TTypedElementInternalData<void> * __thiscall
TTypedElementInternalData<void>::TTypedElementInternalData<void>
          (TTypedElementInternalData<void> *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7__TTypedElementInternalData_X__6B_;
  return this;
}

// ~TTypedElementInternalData<FTestTypedElementData> @ 142c99860

void __thiscall
TTypedElementInternalData<FTestTypedElementData>::~TTypedElementInternalData<FTestTypedElementData>
          (TTypedElementInternalData<FTestTypedElementData> *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTypedElementInternalData__6B_;
  lpCriticalSection = (LPCRITICAL_SECTION)this->_padding_;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    ::operator_delete(lpCriticalSection[2].OwningThread,0x108);
    TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>::
    ~TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>
              ((TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator> *)
               (lpCriticalSection + 1));
    DeleteCriticalSection(lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x68);
  }
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementId.h"
                       ,0x2e,
                       L"Element ID was still set during destruction! This will leak an element reference, and you should release this ID prior to destruction!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~TTypedElementInternalData<void> @ 142c99870

void __thiscall
TTypedElementInternalData<void>::~TTypedElementInternalData<void>
          (TTypedElementInternalData<void> *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FTypedElementInternalData__6B_;
  lpCriticalSection = *(LPCRITICAL_SECTION *)&this->field_0x10;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    ::operator_delete(lpCriticalSection[2].OwningThread,0x108);
    TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>::
    ~TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator>
              ((TSparseArray<FTypedElementReference,FDefaultSparseArrayAllocator> *)
               (lpCriticalSection + 1));
    DeleteCriticalSection(lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x68);
  }
  if (this->field_0xb != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementId.h"
                       ,0x2e,
                       L"Element ID was still set during destruction! This will leak an element reference, and you should release this ID prior to destruction!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetDebugId @ 142cad350

FString * __thiscall
TTypedElementInternalData<FTestTypedElementData>::GetDebugId
          (TTypedElementInternalData<FTestTypedElementData> *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"ID: %d");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GetUntypedData @ 142caeef0

void * __thiscall
TTypedElementInternalData<FTestTypedElementData>::GetUntypedData
          (TTypedElementInternalData<FTestTypedElementData> *this)

{
  return &this->Data;
}

// Reset @ 142cb90d0

void __thiscall
TTypedElementInternalData<FTestTypedElementData>::Reset
          (TTypedElementInternalData<FTestTypedElementData> *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvVar1;
  
  *(undefined4 *)&this->_padding_ = 0;
  LOCK();
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  UNLOCK();
  lpCriticalSection = (LPCRITICAL_SECTION)this->_padding_;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    lpCriticalSection[1].LockCount = 0;
    if (lpCriticalSection[1].RecursionCount < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x108,8,0,(ForAnyElementType *)(lpCriticalSection + 1),0,
                 &lpCriticalSection[1].RecursionCount);
    }
    lpCriticalSection[2].LockCount = -1;
    lpCriticalSection[2].RecursionCount = 0;
    *(undefined4 *)&lpCriticalSection[2].DebugInfo = 0;
    pvVar1 = lpCriticalSection[2].OwningThread;
    if (pvVar1 != (void *)0x0) {
      lpCriticalSection[2].OwningThread = (HANDLE)0x0;
      ::operator_delete(pvVar1,0x108);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  (this->Data).InternalElementId = (FName)0x0;
  return;
}

