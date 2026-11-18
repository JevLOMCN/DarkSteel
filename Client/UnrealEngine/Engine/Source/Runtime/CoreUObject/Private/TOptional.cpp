// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// Reset @ 141f99c40

void __thiscall
TOptional<TScriptSparseSet<FDefaultSetAllocator>_>::Reset
          (TOptional<TScriptSparseSet<FDefaultSetAllocator>_> *this)

{
  void *pvVar1;
  ForElementType<unsigned_int> FVar2;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FVar2 = (this->field0_0x0).TypedValue.Elements.AllocationFlags.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    pvVar1 = (void *)(this->field0_0x0).TypedValue.Elements.Data._padding_;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = 0xffffffff;
    (this->field0_0x0).TypedValue.Elements.Data._padding_ = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
    (this->field0_0x0).TypedValue.Elements.AllocationFlags.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    *(int *)((longlong)&this->field0_0x0 + 0x28) = 0;
    *(int *)((longlong)&this->field0_0x0 + 0x2c) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
  }
  return;
}

// operator-> @ 1420a6490

FStructuredArchiveRecord * __thiscall
TOptional<FStructuredArchiveRecord>::operator->(TOptional<FStructuredArchiveRecord> *this)

{
  code *pcVar1;
  bool bVar2;
  FStructuredArchiveRecord *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStructuredArchiveRecord *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// Reset @ 142189150

void __thiscall TOptional<FScriptMap>::Reset(TOptional<FScriptMap> *this)

{
  void *pvVar1;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x20);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    if (*(void **)&this->field0_0x0 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field0_0x0);
    }
    *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = 0xffffffff;
    *(undefined8 *)&this->field0_0x0 = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
  }
  return;
}

// Emplace<FText> @ 1422b6910

FText * __thiscall TOptional<FText>::Emplace<FText>(TOptional<FText> *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  if (*(longlong **)&this->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field0_0x0 + 0x10))();
  }
  pFVar3 = FText::FText((FText *)this,param_1);
  if (((this->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// operator-> @ 1422d1be0

TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> * __thiscall
TOptional<TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_>_>::
operator->(TOptional<TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return (TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> *)this;
}

// GetValue @ 1422d3750

TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject> * __thiscall
TOptional<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_>::GetValue
          (TOptional<TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TObjectPtr<USubobjectInstancingDefaultToInstancedTestObject> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 1422d37a0

TObjectPtr<USubobjectInstancingTestObject> * __thiscall
TOptional<TObjectPtr<USubobjectInstancingTestObject>_>::GetValue
          (TOptional<TObjectPtr<USubobjectInstancingTestObject>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<USubobjectInstancingTestObject> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TObjectPtr<USubobjectInstancingTestObject> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 1422d37f0

TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> * __thiscall
TOptional<TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_>_>::GetValue
          (TOptional<TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if ((this->field0_0x0).TypedValue.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return (TArray<TObjectPtr<USubobjectInstancingTestObject>,TSizedDefaultAllocator<32>_> *)this;
}

// operator-> @ 14230c8a0

FLinkerLoadState * __thiscall
TOptional<FAsyncPackage2::FLinkerLoadState>::operator->
          (TOptional<FAsyncPackage2::FLinkerLoadState> *this)

{
  code *pcVar1;
  bool bVar2;
  FLinkerLoadState *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinkerLoadState *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

