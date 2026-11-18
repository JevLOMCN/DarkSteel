// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 15

// FImportResult @ 14e4d7490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportResult * __thiscall UE::Interchange::FImportResult::FImportResult(FImportResult *this)

{
  UPackage *pUVar1;
  UInterchangeResultsContainer *pUVar2;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FImportResult_Interchange_UE__6B_;
  *(undefined8 *)&this->OnObjectDone = 0;
  *(undefined8 *)&(this->OnObjectDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnObjectDone).field_0x10 = 0;
  *(undefined8 *)&this->OnObjectDoneNative = 0;
  *(undefined8 *)&(this->OnObjectDoneNative).field_0x8 = 0;
  *(undefined4 *)&(this->OnObjectDoneNative).field_0x10 = 0;
  *(undefined8 *)&this->OnImportDone = 0;
  *(undefined8 *)&(this->OnImportDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnImportDone).field_0x10 = 0;
  *(undefined8 *)&this->OnImportDoneNative = 0;
  *(undefined8 *)&(this->OnImportDoneNative).field_0x8 = 0;
  *(undefined4 *)&(this->OnImportDoneNative).field_0x10 = 0;
  this->ImportStatus = (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
  (this->ImportedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedObjects).ArrayNum = 0;
  (this->ImportedObjects).ArrayMax = 0;
  (this->ImportedObjectsRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->Results).field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
  (this->AsyncHelper).Object = (FImportAsyncHelper *)0x0;
  (this->AsyncHelper).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->DoneCallback = 0;
  *(undefined8 *)&(this->DoneCallback).field_0x28 = 0;
  pUVar1 = GetTransientPackage();
  pUVar2 = NewObject<UInterchangeResultsContainer>((UObject *)pUVar1);
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UInterchangeResultsContainer *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Results).field0_0x0.DebugPtr = pUVar2;
  return this;
}

// ~FImportResult @ 14e4da390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FImportResult::~FImportResult(FImportResult *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  BOOLEAN BVar8;
  bool bVar9;
  longlong *plVar10;
  
  if (*(longlong *)&this->DoneCallback != 0) {
    plVar3 = *(longlong **)&(this->DoneCallback).field_0x28;
    plVar10 = (longlong *)&(this->DoneCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar10 = plVar3;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  pTVar4 = (this->AsyncHelper).WeakReferenceCount.ReferenceController;
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
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ImportedObjectsRWLock);
  if (BVar8 == '\0') {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ImportedObjectsRWLock);
  }
  pFVar5 = (this->ImportedObjects).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnImportDoneNative);
  pvVar6 = *(void **)&(this->OnImportDoneNative).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnImportDoneNative);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnImportDone);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnObjectDoneNative);
  pvVar6 = *(void **)&(this->OnObjectDoneNative).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnObjectDoneNative);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnObjectDone);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 14e4de2e0

void __thiscall
`UE::Interchange::FImportResult::AddImportedObject'::__l8::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *local_res8;
  FReadAccessScope local_28;
  
  pUVar3 = FWeakObjectPtr::Get(this);
  if (pUVar3 != (UObject *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8),
               &local_28);
    if ((*(int *)((longlong)this + 0x18) != 0) &&
       (plVar1 = *(longlong **)((longlong)this + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,pUVar3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20));
    if (bVar2) {
      local_res8 = pUVar3;
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x20),&local_res8)
      ;
    }
  }
  return;
}

// AddImportedObject @ 14e4e2030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportResult::AddImportedObject(FImportResult *this,UObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  UObject *local_res18 [2];
  UObject *local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  ForAnyElementType FStack_e0;
  int local_d8;
  FMRSWRecursiveAccessDetector local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  FDestructionSentinel local_b8;
  undefined1 local_a0 [16];
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  TUniqueFunction<void___cdecl(void)> local_58;
  
  AcquireSRWLockExclusive((PSRWLOCK)&this->ImportedObjectsRWLock);
  local_f8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    GC::MarkAsReachable(param_1);
  }
  pFVar2 = (this->ImportedObjects).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
     ((FScriptContainerElement *)&local_f8 < pFVar2 + (longlong)(this->ImportedObjects).ArrayMax * 8
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
  iVar6 = (this->ImportedObjects).ArrayNum;
  piVar1 = &(this->ImportedObjects).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ImportedObjects).AllocatorInstance,piVar1);
  }
  (this->ImportedObjects).ArrayNum = iVar6 + 1;
  *(UObject **)((this->ImportedObjects).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_f8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_f8);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ImportedObjectsRWLock);
  bVar5 = IsInGameThread();
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnObjectDoneNative,
               &local_90);
    if ((*(int *)&(this->OnObjectDoneNative).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnObjectDoneNative).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    bVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnObjectDone);
    if (bVar5) {
      local_res10 = param_1;
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnObjectDone,&local_res10);
      return;
    }
  }
  else {
    local_58._0_8_ = 0;
    local_58._40_8_ = 0;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_f0._0_4_ = local_res8.ObjectIndex;
    local_f0._4_4_ = local_res8.ObjectSerialNumber;
    local_d8 = 0;
    local_e8 = (undefined1  [8])0x0;
    FStack_e0.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_e8,
               &this->OnObjectDoneNative);
    local_d0.State = (atomic<unsigned___int64>)0x0;
    local_c8 = 0;
    local_c0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnObjectDone,
               &local_78);
    local_c8 = *(undefined8 *)&(this->OnObjectDone).field_0x8;
    local_c0 = *(undefined8 *)&(this->OnObjectDone).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    Async<_UE::Interchange::FImportResult::AddImportedObject_::__l8::<lambda_1>_>
              ((TFuture<void> *)local_a0,TaskGraphMainThread,(<lambda_1> *)local_f0,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a0._8_8_);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)&local_b8);
    if ((local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
      local_d8 = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e8);
  }
  return;
}

// AddReferencedObjects @ 14e4e2ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportResult::AddReferencedObjects
          (FImportResult *this,FReferenceCollector *param_1)

{
  AcquireSRWLockShared((PSRWLOCK)&this->ImportedObjectsRWLock);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ImportedObjects).AllocatorInstance.Data,(this->ImportedObjects).ArrayNum
             ,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Results,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014e4e2b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ImportedObjectsRWLock);
  return;
}

// GetFirstAssetOfClass @ 14e4f63e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UE::Interchange::FImportResult::GetFirstAssetOfClass(FImportResult *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->ImportedObjectsRWLock);
  pFVar4 = (this->ImportedObjects).AllocatorInstance.Data;
  iVar2 = (this->ImportedObjects).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ImportedObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    pUVar5 = (UObject *)0x0;
    if (pFVar4 == pFVar1) break;
    pUVar5 = *(UObject **)pFVar4;
    iVar3 = (int)param_1->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &param_1->_padding_)) break;
    pFVar4 = pFVar4 + 8;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ImportedObjectsRWLock);
  return pUVar5;
}

// GetImportedObjects @ 14e4f69b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UE::Interchange::FImportResult::GetImportedObjects(FImportResult *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->ImportedObjectsRWLock);
  pFVar3 = (this->ImportedObjects).AllocatorInstance.Data;
  iVar2 = (this->ImportedObjects).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ImportedObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ImportedObjectsRWLock);
  return (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->ImportedObjects;
}

// GetReferencerName @ 14e4f85a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UE::Interchange::FImportResult::GetReferencerName
          (FImportResult *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UE::Interchange::FImportResult");
  return __return_storage_ptr__;
}

// GetStatus @ 14e4f8b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EStatus __thiscall UE::Interchange::FImportResult::GetStatus(FImportResult *this)

{
  return (EStatus)this->ImportStatus;
}

// IsValid @ 14e4fee70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UE::Interchange::FImportResult::IsValid(FImportResult *this)

{
  return this->ImportStatus != (atomic<UE::Interchange::FImportResult::EStatus>)0x0;
}

// OnDone @ 14e4ff790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportResult::OnDone
          (FImportResult *this,TFunction<void___cdecl(UE::Interchange::FImportResult_&)> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)param_1;
  uStack_20 = (longlong *)0x0;
  if (local_48 != 0) {
    puVar9 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_38);
  }
  lVar6 = *(longlong *)&this->DoneCallback;
  uVar7 = *(undefined8 *)&(this->DoneCallback).field_0x8;
  uVar2 = *(undefined4 *)&(this->DoneCallback).field_0x10;
  uVar3 = *(undefined4 *)&(this->DoneCallback).field_0x14;
  uVar4 = *(undefined4 *)&(this->DoneCallback).field_0x18;
  uVar5 = *(undefined4 *)&(this->DoneCallback).field_0x1c;
  uVar8 = *(undefined8 *)&(this->DoneCallback).field_0x20;
  plVar11 = *(longlong **)&(this->DoneCallback).field_0x28;
  *(longlong *)&this->DoneCallback = local_48;
  *(undefined8 *)&(this->DoneCallback).field_0x8 = uStack_40;
  *(undefined4 *)&(this->DoneCallback).field_0x10 = (undefined4)local_38;
  *(undefined4 *)&(this->DoneCallback).field_0x14 = local_38._4_4_;
  *(undefined4 *)&(this->DoneCallback).field_0x18 = uStack_30;
  *(undefined4 *)&(this->DoneCallback).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->DoneCallback).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->DoneCallback).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->DoneCallback).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->DoneCallback).field_0x2c = uStack_20._4_4_;
  local_38._0_4_ = uVar2;
  local_38._4_4_ = uVar3;
  uStack_30 = uVar4;
  uStack_2c = uVar5;
  local_28 = uVar8;
  uStack_20 = plVar11;
  local_48 = lVar6;
  uStack_40 = uVar7;
  if (lVar6 != 0) {
    plVar10 = &local_38;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = plVar11;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((this->ImportStatus == (atomic<UE::Interchange::FImportResult::EStatus>)0x2) &&
     (*(void **)&this->DoneCallback != (void *)0x0)) {
    Core::Private::Function::CheckCallable(*(void **)&this->DoneCallback);
    pcVar1 = *(code **)&this->DoneCallback;
    plVar11 = *(longlong **)&(this->DoneCallback).field_0x28;
    plVar10 = (longlong *)&(this->DoneCallback).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = plVar11;
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar1)(uVar8,this);
  }
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// SetAsyncHelper @ 14e507340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Interchange::FImportResult::SetAsyncHelper
          (FImportResult *this,TWeakPtr<UE::Interchange::FImportAsyncHelper,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FImportAsyncHelper *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pFVar3 = param_1->Object;
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->AsyncHelper).WeakReferenceCount.ReferenceController;
  (this->AsyncHelper).Object = pFVar3;
  (this->AsyncHelper).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
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
  return;
}

// SetDone @ 14e507710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FImportResult::SetDone(FImportResult *this)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  int iVar6;
  undefined8 uVar7;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UObject *local_res18;
  UObject *local_a8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_a0;
  ForAnyElementType local_90;
  uint local_88;
  uint local_84;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_80;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId818,"UE::Interchange::FImportResult::SetDone",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
               ,0x332);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId818);
  }
  LOCK();
  if (this->ImportStatus == (atomic<UE::Interchange::FImportResult::EStatus>)0x0) {
    this->ImportStatus = (atomic<UE::Interchange::FImportResult::EStatus>)0x1;
  }
  UNLOCK();
  LOCK();
  bVar16 = this->ImportStatus == (atomic<UE::Interchange::FImportResult::EStatus>)0x1;
  if (bVar16) {
    this->ImportStatus = (atomic<UE::Interchange::FImportResult::EStatus>)0x2;
  }
  UNLOCK();
  if (bVar16) {
    if (*(void **)&this->DoneCallback != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)&this->DoneCallback);
      pcVar2 = *(code **)&this->DoneCallback;
      plVar3 = *(longlong **)&(this->DoneCallback).field_0x28;
      plVar11 = (longlong *)&(this->DoneCallback).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar11 = plVar3;
      }
      uVar7 = (**(code **)(*plVar11 + 8))();
      (*pcVar2)(uVar7,this);
    }
    pTVar8 = GetImportedObjects(this);
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = pTVar8->ArrayNum;
    lVar14 = (longlong)local_80.ArrayNum;
    pFVar4 = (pTVar8->AllocatorInstance).Data;
    if (local_80.ArrayNum == 0) {
      local_80.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_80.ArrayNum,0,&local_80.AllocatorInstance,local_80.ArrayNum,
                 &local_80.ArrayMax);
      memcpy(local_80.AllocatorInstance.Data,pFVar4,lVar14 << 3);
    }
    bVar16 = IsInGameThread();
    if (bVar16) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnImportDoneNative
                 ,&local_70);
      if ((*(int *)&(this->OnImportDoneNative).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(this->OnImportDoneNative).field_0x8, plVar3 != (longlong *)0x0))
      {
        (**(code **)(*plVar3 + 0x68))(plVar3,&local_80);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      FOnImportDoneDynamic::ExecuteIfBound(&this->OnImportDone,&local_80);
    }
    else {
      uVar12 = (ulonglong)(uint)local_80.ArrayNum;
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = 0;
      local_84 = 0;
      if (local_80.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar12);
      }
      if (0 < local_80.ArrayNum) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_80.ArrayNum,&local_90,0,(int *)&local_84);
        uVar12 = (ulonglong)(uint)local_80.ArrayNum;
      }
      iVar9 = (int)uVar12;
      pFVar4 = local_80.AllocatorInstance.Data + (longlong)iVar9 * 8;
      FVar13.Data = local_80.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar12 != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar13.Data == pFVar4) break;
        pUVar5 = *(UObject **)FVar13.Data;
        if (local_88 == local_84) {
          local_88 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_90,(int *)&local_84);
        }
        uVar10 = local_88 + 1;
        pFVar1 = (FWeakObjectPtr *)(local_90.Data + (longlong)(int)local_88 * 8);
        local_88 = uVar10;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar5);
        }
        pFVar1->ObjectIndex = 0;
        pFVar1->ObjectSerialNumber = 0;
        local_res18 = pUVar5;
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(pFVar1,(FObjectPtr)&local_res18);
        uVar12 = (ulonglong)(uint)local_80.ArrayNum;
        FVar13.Data = FVar13.Data + 8;
      }
      bVar16 = IsInGameThread();
      if (bVar16) {
        uVar12 = (ulonglong)local_88;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        if ((int)local_88 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(uVar12);
        }
        if (0 < (int)local_88) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_88,&local_a0.AllocatorInstance,0,&local_a0.ArrayMax);
          uVar12 = (ulonglong)local_88;
        }
        iVar9 = (int)uVar12;
        pFVar1 = (FWeakObjectPtr *)(local_90.Data + (longlong)iVar9 * 8);
        FVar13.Data = local_90.Data;
        while( true ) {
          if ((int)uVar12 != iVar9) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TWeakObjectPtr<UObject,FWeakObjectPtr>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res10);
          }
          if ((FWeakObjectPtr *)FVar13.Data == pFVar1) break;
          local_a8 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar13.Data);
          if (local_a8 != (UObject *)0x0) {
            if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 <
                 local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 8)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = local_a0.ArrayNum;
            if (local_a0.ArrayNum == local_a0.ArrayMax) {
              iVar6 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
            }
            local_a0.ArrayNum = iVar6 + 1;
            *(UObject **)(local_a0.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_a8;
          }
          uVar12 = (ulonglong)local_88;
          FVar13.Data = FVar13.Data + 8;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnImportDoneNative,&local_58);
        if ((*(int *)&(this->OnImportDoneNative).field_0x10 != 0) &&
           (plVar3 = *(longlong **)&(this->OnImportDoneNative).field_0x8, plVar3 != (longlong *)0x0)
           ) {
          (**(code **)(*plVar3 + 0x68))(plVar3,&local_a0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        FOnImportDoneDynamic::ExecuteIfBound(&this->OnImportDone,&local_a0);
        if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
      }
      else {
        bVar16 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6687235758857649330>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                            ,0x34e,"IsInGameThread()");
        if (bVar16) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((FWeakObjectPtr *)local_90.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_90.Data);
      }
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetInProgress @ 14e507cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FImportResult::SetInProgress(FImportResult *this)

{
  LOCK();
  if (this->ImportStatus == (atomic<UE::Interchange::FImportResult::EStatus>)0x0) {
    this->ImportStatus = (atomic<UE::Interchange::FImportResult::EStatus>)0x1;
  }
  UNLOCK();
  return;
}

// WaitUntilDone @ 14e50bea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FImportResult::WaitUntilDone(FImportResult *this,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FImportAsyncHelper *this_00;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FInterchangeTaskSystem *this_01;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->ImportStatus == (atomic<UE::Interchange::FImportResult::EStatus>)0x1) {
    pTVar1 = (this->AsyncHelper).WeakReferenceCount.ReferenceController;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    pTVar5 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        if (aVar2 == (atomic<int>)0x0) goto LAB_14e50bef1;
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar6 = aVar2 == aVar3;
        if (bVar6) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar6);
      this_00 = (this->AsyncHelper).Object;
      pTVar5 = pTVar1;
      if (this_00 != (FImportAsyncHelper *)0x0) {
        pTVar4 = FImportAsyncHelper::GetCompletionTaskGraphEvent(this_00,&local_18);
        if (&local_28 != pTVar4) {
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
          local_28.AllocatorInstance.Data = (pTVar4->AllocatorInstance).Data;
          (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_28.ArrayNum = pTVar4->ArrayNum;
          local_28.ArrayMax = pTVar4->ArrayMax;
          pTVar4->ArrayNum = 0;
          pTVar4->ArrayMax = 0;
        }
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
    }
LAB_14e50bef1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    this_01 = FInterchangeTaskSystem::Get();
    FInterchangeTaskSystem::WaitUntilTasksComplete(this_01,&local_28);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

