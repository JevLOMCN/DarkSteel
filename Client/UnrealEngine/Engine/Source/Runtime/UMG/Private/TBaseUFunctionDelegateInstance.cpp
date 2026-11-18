// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 96

// CreateCopy @ 1469112f0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146911380

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 1469113e0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146911490

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146911520

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 146911580

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146916640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FLinearColor * __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
        *this,FLinearColor *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FLinearColor *pFVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_18 = '\x01';
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_28);
  if (local_18 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_28;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_20;
  return __return_storage_ptr__;
}

// Execute @ 1469166f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSlateBrush * __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
        *this,FSlateBrush *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlateBrush *pFVar3;
  UObject *pUVar4;
  undefined1 auStack_1a8 [32];
  FSlateBrush local_188;
  FSlateBrush local_d8;
  char local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_28 = 0;
  pFVar3 = FSlateBrush::FSlateBrush(&local_188);
  FSlateBrush::FSlateBrush(&local_d8,pFVar3);
  local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_28 = '\x01';
  pUVar4 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar4 + 0x260))(pUVar4,this->CachedFunction,&local_d8);
  if (local_28 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateBrush *)(*pcVar1)();
      return pFVar3;
    }
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,&local_d8);
  if (local_28 != '\0') {
    local_d8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 146916fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146916fde) */
/* WARNING: Removing unreachable block (ram,0x000146917022) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStack_58 [32];
  UObject *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_38 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_38 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_38);
    }
    local_30 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 1;
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_28);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// ExecuteIfSafe @ 1469170a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014691711e) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  FSlateBrush *pFVar4;
  UObject *pUVar5;
  undefined1 auStack_1b8 [32];
  UObject *local_198;
  undefined8 local_190;
  FSlateBrush local_188;
  FSlateBrush local_d8;
  char local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_198 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_198 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_198);
    }
    local_190 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    bVar1 = false;
  }
  else {
    local_28 = 0;
    pFVar4 = FSlateBrush::FSlateBrush(&local_188);
    FSlateBrush::FSlateBrush(&local_d8,pFVar4);
    local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    local_28 = '\x01';
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_d8);
    if (local_28 != '\0') {
      local_d8._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    }
    bVar1 = true;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return bVar1;
}

// GetBoundProgramCounterForTimerManager @ 14691dc90

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14691dca0

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14691ffa0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14691ffb0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146925150

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 146925160

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 146928f30

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 146928f60

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14692c4a0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14692c4c0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14692cc60

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// IsSafeToExecute @ 14692cc70

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 146949410

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146949430

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// CreateCopy @ 1469b57a0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b5830

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 1469b5890

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b5940

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b59d0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 1469b5a30

void __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b5ae0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar1[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b5b70

void __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar1[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 1469b5bd0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b5c80

void __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar1[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b5d10

void __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar1[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 1469b5d70

void __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b5e20

void __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b5eb0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 1469b5f10

void __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1469b5fc0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1469b6050

void __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 1469b60b0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::CreateCopy
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->CachedFunction;
    *(FName *)(puVar3 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar3 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1469bfee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
        *this,FSlateColor *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FSlateColor *pFVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  uint local_24;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = local_38 & 0xffffff00;
  local_48 = ___xmm_3f8000003f800000000000003f800000;
  uStack_40 = _UNK_15090c6d8;
  local_24 = local_38;
  local_34 = ___xmm_3f8000003f800000000000003f800000;
  uStack_2c = _UNK_15090c6d8;
  local_20 = '\x01';
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_34);
  if (local_20 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlateColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = local_34;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uStack_2c;
  __return_storage_ptr__->ColorUseRule = (undefined1)local_24;
  __return_storage_ptr__->ColorTableId = local_24._1_1_;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = local_24._2_2_;
  return __return_storage_ptr__;
}

// Execute @ 1469bffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FText * __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  UObject *pUVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  FText local_40;
  FText local_30;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = 0;
  pFVar3 = FText::FText(&local_40);
  FText::FText(&local_30,pFVar3);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  local_20 = '\x01';
  pUVar4 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar4 + 0x260))(pUVar4,this->CachedFunction,&local_30);
  if (local_20 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->TextData).Reference = local_30.TextData.Reference;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 8))(local_30.TextData.Reference,local_48);
  }
  __return_storage_ptr__->Flags = local_30.Flags;
  if ((local_20 != '\0') && (local_30.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))(local_30.TextData.Reference);
  }
  return __return_storage_ptr__;
}

// Execute @ 1469c00c0

ECheckBoxState __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(void *this)

{
  code *pcVar1;
  bool bVar2;
  ECheckBoxState EVar3;
  UObject *pUVar4;
  undefined2 local_res8;
  
  local_res8 = 0x100;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  (**(code **)(*(longlong *)pUVar4 + 0x260))
            (pUVar4,*(undefined8 *)((longlong)this + 0x18),&local_res8);
  if (local_res8._1_1_ == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (ECheckBoxState)local_res8;
}

// Execute @ 1469c0130

ESlateVisibility __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(void *this)

{
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  UObject *pUVar4;
  undefined2 local_res8;
  
  local_res8 = 0x100;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  (**(code **)(*(longlong *)pUVar4 + 0x260))
            (pUVar4,*(undefined8 *)((longlong)this + 0x18),&local_res8);
  if (local_res8._1_1_ == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (ESlateVisibility)local_res8;
}

// Execute @ 1469c01a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  float fVar4;
  undefined1 auStack_38 [32];
  float local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_18 = 0.0;
  local_14 = '\x01';
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_18);
  if (local_14 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return local_18;
}

// Execute @ 1469c0240

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  undefined2 local_res8;
  
  local_res8 = 0x100;
  pUVar4 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar4 + 0x260))(pUVar4,this->CachedFunction,&local_res8);
  if (local_res8._1_1_ == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(undefined1)local_res8;
}

// ExecuteIfSafe @ 1469c2ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001469c2b21) */
/* WARNING: Removing unreachable block (ram,0x0001469c2b68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStack_78 [32];
  UObject *local_58;
  undefined8 local_50;
  uint local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  uint local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_58 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_58 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_58);
    }
    local_50 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_38 = local_38 & 0xffffff00;
    local_24 = local_38;
    local_34 = ___xmm_3f8000003f800000000000003f800000;
    uStack_2c = _UNK_15090c6d8;
    local_20 = 1;
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_34);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// ExecuteIfSafe @ 1469c2c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001469c2c3e) */
/* WARNING: Removing unreachable block (ram,0x0001469c2c85) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  FText *pFVar4;
  UObject *pUVar5;
  undefined1 auStack_68 [32];
  UObject *local_48;
  FText local_40;
  FText local_30;
  char local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_48 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_48 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_48);
    }
    local_40.TextData.Reference = (ITextData *)0x0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
    bVar1 = false;
  }
  else {
    local_20 = 0;
    pFVar4 = FText::FText(&local_40);
    FText::FText(&local_30,pFVar4);
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
    local_20 = '\x01';
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_30);
    if ((local_20 != '\0') && (local_30.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
    bVar1 = true;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return bVar1;
}

// ExecuteIfSafe @ 1469c2d40

/* WARNING: Removing unreachable block (ram,0x0001469c2d6c) */
/* WARNING: Removing unreachable block (ram,0x0001469c2db0) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *local_res8;
  undefined8 local_res10;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x28));
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  if (pUVar3 != (UObject *)0x0) {
    local_res8 = (UObject *)CONCAT62(local_res8._2_6_,0x100);
    (**(code **)(*(longlong *)pUVar3 + 0x260))
              (pUVar3,*(undefined8 *)((longlong)this + 0x18),&local_res8);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// ExecuteIfSafe @ 1469c2e20

/* WARNING: Removing unreachable block (ram,0x0001469c2e4c) */
/* WARNING: Removing unreachable block (ram,0x0001469c2e90) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *local_res8;
  undefined8 local_res10;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x28));
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  if (pUVar3 != (UObject *)0x0) {
    local_res8 = (UObject *)CONCAT62(local_res8._2_6_,0x100);
    (**(code **)(*(longlong *)pUVar3 + 0x260))
              (pUVar3,*(undefined8 *)((longlong)this + 0x18),&local_res8);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// ExecuteIfSafe @ 1469c2f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001469c2f3e) */
/* WARNING: Removing unreachable block (ram,0x0001469c2f82) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  UObject *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_20 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_20 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_20);
    }
    local_28 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_20 = (UObject *)CONCAT35((int3)((ulonglong)local_20 >> 0x28),0x100000000);
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_20);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// ExecuteIfSafe @ 1469c3000

/* WARNING: Removing unreachable block (ram,0x0001469c302c) */
/* WARNING: Removing unreachable block (ram,0x0001469c3070) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfSafe
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *local_res8;
  undefined8 local_res10;
  
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UObject *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar4 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_res8 = (UObject *)CONCAT62(local_res8._2_6_,0x100);
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_res8);
  }
  if (pUVar4 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return pUVar3 != (UObject *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb30

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb40

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb50

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb60

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb70

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1469cdb80

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1469d2870

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1469d2880

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1469d2890

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  return pUVar1;
}

// GetObjectForTimerManager @ 1469d28a0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  return pUVar1;
}

// GetObjectForTimerManager @ 1469d28b0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 1469d28c0

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1469d9270

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1469d9280

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1469d9290

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  return pUVar1;
}

// GetUObject @ 1469d92a0

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  return pUVar1;
}

// GetUObject @ 1469d92b0

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 1469d92c0

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::GetUObject
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 1469de9e0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1469dea10

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1469dea40

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  return pUVar1 == param_1;
}

// HasSameObject @ 1469dea70

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28));
  return pUVar1 == param_1;
}

// HasSameObject @ 1469deaa0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 1469dead0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::HasSameObject
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 1469e0b70

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1469e0b90

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1469e0bb0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1469e0bd0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x28),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1469e0bf0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 1469e0c10

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::IsCompactable
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 1469e2c90

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// IsSafeToExecute @ 1469e2ca0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// IsSafeToExecute @ 1469e2cb0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x28));
  return bVar1;
}

// IsSafeToExecute @ 1469e2cc0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x28));
  return bVar1;
}

// IsSafeToExecute @ 1469e2cd0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// IsSafeToExecute @ 1469e2ce0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 146a2a9c0

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2a9e0

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2aa00

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)((longlong)this + 0x20);
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2aa20

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,enum_ESlateVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)((longlong)this + 0x20);
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2aa40

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146a2aa60

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

