// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// TTypedElementInternalData<FActorElementData> @ 147b38630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTypedElementInternalData<FActorElementData> * __thiscall
TTypedElementInternalData<FActorElementData>::TTypedElementInternalData<FActorElementData>
          (TTypedElementInternalData<FActorElementData> *this)

{
  this->_padding_ = (longlong)&___7__TTypedElementInternalData_UFActorElementData____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Data).Actor = (AActor *)0x0;
  (this->Data).ActorWeak.WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// TTypedElementInternalData<FComponentElementData> @ 147b38660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTypedElementInternalData<FComponentElementData> * __thiscall
TTypedElementInternalData<FComponentElementData>::TTypedElementInternalData<FComponentElementData>
          (TTypedElementInternalData<FComponentElementData> *this)

{
  TWeakObjectPtr<UActorComponent,FWeakObjectPtr> *this_00;
  undefined8 local_res8 [4];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Data).Component = (UActorComponent *)0x0;
  this->_padding_ = (longlong)&___7__TTypedElementInternalData_UFComponentElementData____6B_;
  this_00 = &(this->Data).ComponentWeak;
  local_res8[0] = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// TTypedElementInternalData<FObjectElementData> @ 147b386b0

TTypedElementInternalData<FObjectElementData> * __thiscall
TTypedElementInternalData<FObjectElementData>::TTypedElementInternalData<FObjectElementData>
          (TTypedElementInternalData<FObjectElementData> *this)

{
  this->_padding_ = (longlong)&___7__TTypedElementInternalData_UFObjectElementData____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Data).Object = (UObject *)0x0;
  return this;
}

// TTypedElementInternalData<FSMInstanceElementData> @ 147b386e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTypedElementInternalData<FSMInstanceElementData> * __thiscall
TTypedElementInternalData<FSMInstanceElementData>::TTypedElementInternalData<FSMInstanceElementData>
          (TTypedElementInternalData<FSMInstanceElementData> *this)

{
  this->_padding_ = (longlong)&___7__TTypedElementInternalData_UFSMInstanceElementData____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Data).InstanceElementId.ISMComponent = (UInstancedStaticMeshComponent *)0x0;
  (this->Data).InstanceElementId.InstanceId = 0;
  return this;
}

// ~TTypedElementInternalData<FActorElementData> @ 147b3c690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TTypedElementInternalData<FActorElementData>::~TTypedElementInternalData<FActorElementData>
          (TTypedElementInternalData<FActorElementData> *this)

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

// ~TTypedElementInternalData<FComponentElementData> @ 147b3c6a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TTypedElementInternalData<FComponentElementData>::~TTypedElementInternalData<FComponentElementData>
          (TTypedElementInternalData<FComponentElementData> *this)

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

// ~TTypedElementInternalData<FObjectElementData> @ 147b3c6b0

void __thiscall
TTypedElementInternalData<FObjectElementData>::~TTypedElementInternalData<FObjectElementData>
          (TTypedElementInternalData<FObjectElementData> *this)

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

// ~TTypedElementInternalData<FSMInstanceElementData> @ 147b3c6c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TTypedElementInternalData<FSMInstanceElementData>::
~TTypedElementInternalData<FSMInstanceElementData>
          (TTypedElementInternalData<FSMInstanceElementData> *this)

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

// GetDebugId @ 147b64e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
TTypedElementInternalData<FActorElementData>::GetDebugId
          (TTypedElementInternalData<FActorElementData> *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  UObject *this_00;
  FString *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = FWeakObjectPtr::GetEvenIfUnreachable(&(this->Data).ActorWeak.WeakPtr);
  if ((this_00 == (UObject *)0x0) || ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) != 0)) {
    pFVar2 = ::FString::FString(&local_38,L"null");
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    pFVar2 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  bVar1 = 1 < iVar4;
  if (bVar1) {
    ::FString::PrintfImpl(&local_38,L"ID: %d");
    ::FString::PrintfImpl(&local_48,L"%s - %s");
    pFVar2 = &local_48;
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    ::FString::PrintfImpl(&local_28,L"ID: %d");
    pFVar2 = &local_28;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar3.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if ((bVar1) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// GetDebugId @ 147b64fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
TTypedElementInternalData<FComponentElementData>::GetDebugId
          (TTypedElementInternalData<FComponentElementData> *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  UObject *this_00;
  FString *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = FWeakObjectPtr::GetEvenIfUnreachable(&(this->Data).ComponentWeak.WeakPtr);
  if (this_00 == (UObject *)0x0) {
    pFVar2 = ::FString::FString(&local_38,L"null");
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    pFVar2 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  bVar1 = 1 < iVar4;
  if (bVar1) {
    ::FString::PrintfImpl(&local_38,L"ID: %d");
    ::FString::PrintfImpl(&local_48,L"%s - %s");
    pFVar2 = &local_48;
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    ::FString::PrintfImpl(&local_28,L"ID: %d");
    pFVar2 = &local_28;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar3.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if ((bVar1) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// GetDebugId @ 147b65140

FString * __thiscall
TTypedElementInternalData<FObjectElementData>::GetDebugId
          (TTypedElementInternalData<FObjectElementData> *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = (UObjectBaseUtility *)(this->Data).Object;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    pFVar2 = ::FString::FString(&local_38,L"null");
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    pFVar2 = UObjectBaseUtility::GetFullName(this_00,&local_28,(UObject *)0x0,None);
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  bVar1 = 1 < iVar4;
  if (bVar1) {
    ::FString::PrintfImpl(&local_38,L"ID: %d");
    ::FString::PrintfImpl(&local_48,L"%s - %s");
    pFVar2 = &local_48;
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    ::FString::PrintfImpl(&local_28,L"ID: %d");
    pFVar2 = &local_28;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar3.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if ((bVar1) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// GetDebugId @ 147b652c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __thiscall
TTypedElementInternalData<FSMInstanceElementData>::GetDebugId
          (TTypedElementInternalData<FSMInstanceElementData> *this,FString *__return_storage_ptr__)

{
  UInstancedStaticMeshComponent *this_00;
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = (this->Data).InstanceElementId.ISMComponent;
  if (this_00 == (UInstancedStaticMeshComponent *)0x0) {
    pFVar2 = ::FString::FString(&local_38,L"null");
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    pFVar2 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  bVar1 = 1 < iVar4;
  if (bVar1) {
    ::FString::PrintfImpl(&local_38,L"ID: %d");
    ::FString::PrintfImpl(&local_48,L"%s - %s");
    pFVar2 = &local_48;
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    ::FString::PrintfImpl(&local_28,L"ID: %d");
    pFVar2 = &local_28;
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar3.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if ((bVar1) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// GetUntypedData @ 147b71060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TTypedElementInternalData<FActorElementData>::GetUntypedData
          (TTypedElementInternalData<FActorElementData> *this)

{
  return &this->Data;
}

// GetUntypedData @ 147b71070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TTypedElementInternalData<FComponentElementData>::GetUntypedData
          (TTypedElementInternalData<FComponentElementData> *this)

{
  return &this->Data;
}

// GetUntypedData @ 147b71080

void * __thiscall
TTypedElementInternalData<FObjectElementData>::GetUntypedData
          (TTypedElementInternalData<FObjectElementData> *this)

{
  return &this->Data;
}

// GetUntypedData @ 147b71090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TTypedElementInternalData<FSMInstanceElementData>::GetUntypedData
          (TTypedElementInternalData<FSMInstanceElementData> *this)

{
  return &this->Data;
}

// Reset @ 147b85630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TTypedElementInternalData<FActorElementData>::Reset
          (TTypedElementInternalData<FActorElementData> *this)

{
  undefined8 local_18 [2];
  
  FTypedElementInternalData::Reset((FTypedElementInternalData *)this);
  if (&this->Data != (FActorElementData *)local_18) {
    (this->Data).Actor = (AActor *)0x0;
    (this->Data).ActorWeak.WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// Reset @ 147b85670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TTypedElementInternalData<FComponentElementData>::Reset
          (TTypedElementInternalData<FComponentElementData> *this)

{
  undefined8 local_res8 [4];
  UActorComponent *local_18;
  FWeakObjectPtr local_10;
  
  FTypedElementInternalData::Reset((FTypedElementInternalData *)this);
  local_18 = (UActorComponent *)0x0;
  local_10.ObjectIndex = 0;
  local_10.ObjectSerialNumber = 0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&local_10,(FObjectPtr)local_res8);
  if (&this->Data != (FComponentElementData *)&local_18) {
    (this->Data).Component = local_18;
    (this->Data).ComponentWeak.WeakPtr = local_10;
  }
  return;
}

// Reset @ 147b856d0

void __thiscall
TTypedElementInternalData<FObjectElementData>::Reset
          (TTypedElementInternalData<FObjectElementData> *this)

{
  FTypedElementInternalData::Reset((FTypedElementInternalData *)this);
  (this->Data).Object = (UObject *)0x0;
  return;
}

// Reset @ 147b85700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TTypedElementInternalData<FSMInstanceElementData>::Reset
          (TTypedElementInternalData<FSMInstanceElementData> *this)

{
  FTypedElementInternalData::Reset((FTypedElementInternalData *)this);
  (this->Data).InstanceElementId.ISMComponent = (UInstancedStaticMeshComponent *)0x0;
  (this->Data).InstanceElementId.InstanceId = 0;
  return;
}

