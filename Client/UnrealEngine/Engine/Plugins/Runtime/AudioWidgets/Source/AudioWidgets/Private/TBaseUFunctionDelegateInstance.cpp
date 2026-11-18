// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 12

// CreateCopy @ 14d903360

void __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AV__TArray_UFMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14d9033f0

void __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AV__TArray_UFMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->CachedFunction;
    *(FName *)(puVar1 + 4) = this->FunctionName;
    *(FWeakObjectPtr *)(puVar1 + 5) = (this->UserObjectPtr).WeakPtr;
  }
  return;
}

// CreateCopy @ 14d903450

void __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TArray_UFMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AV__TArray_UFMeterChannelInfo__V__TSizedDefaultAllocator__0CA_____XZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 14d91e8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> * __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  void *_Src;
  bool bVar2;
  UObject *pUVar3;
  TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  undefined1 auStackY_78 [32];
  void *local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_28 = '\x01';
  local_38 = (void *)0x0;
  local_30 = 0;
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_38);
  if (local_28 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bConstructed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstanceInterface.h"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  _Src = local_38;
  lVar5 = (longlong)(int)local_30;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (int)local_30;
  if ((int)local_30 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(int)local_30,0,&__return_storage_ptr__->AllocatorInstance,(int)local_30,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,lVar5 * 0xc);
  }
  if ((local_28 != '\0') && (local_38 != (void *)0x0)) {
    FMemory::Free(local_38);
  }
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14d922580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d9225f7) */

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  undefined1 auStack_58 [32];
  UObject *local_38;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  pUVar4 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_38 = (UObject *)0x0;
    pUVar5 = pUVar4;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObjectPtr).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_38 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(local_38);
    }
    local_30 = 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    local_28 = (void *)0x0;
    local_20 = 0;
    local_18 = '\x01';
    (**(code **)(*(longlong *)pUVar3 + 0x260))(pUVar3,this->CachedFunction,&local_28);
    if ((local_18 != '\0') && (local_28 != (void *)0x0)) {
      FMemory::Free(local_28);
    }
    pUVar4 = (UObject *)&DAT_00000001;
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return (bool)(char)pUVar4;
}

// GetBoundProgramCounterForTimerManager @ 14d92c180

ulong64 __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d932080

void * __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14d938030

UObject * __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14d93ab50

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14d93d3c0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObjectPtr).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14d93f1b0

bool __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UserObjectPtr).WeakPtr);
  return bVar1;
}

// TryGetBoundFunctionName @ 14d9777f0

FName __thiscall
TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUFunctionDelegateInstance<UObject,TArray<FMeterChannelInfo,TSizedDefaultAllocator<32>_>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FunctionName;
  return in_RDX;
}

