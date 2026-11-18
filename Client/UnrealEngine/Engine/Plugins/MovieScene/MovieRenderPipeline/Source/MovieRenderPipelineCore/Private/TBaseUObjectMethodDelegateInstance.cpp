// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 180

// CreateCopy @ 14dcbf8d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieGraphPipeline____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d557d2a7 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dcbf960

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieGraphPipeline____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d557d2a7 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dcbf9b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieGraphPipeline____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_d557d2a7 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dcbfa60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieGraphSequenceDataSource____A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9cef2371 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dcbfaf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieGraphSequenceDataSource____A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9cef2371 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dcbfb40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieGraphSequenceDataSource____A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9cef2371 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14dcc6a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMovieGraphPipeline *pUVar1;
  UMovieGraphPipeline *local_res8 [4];
  
  local_res8[0] = (UMovieGraphPipeline *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMovieGraphPipeline,UMovieGraphPipeline_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14dcc6a60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
          *this,UMovieSceneSequencePlayer *param_1,FFrameTime param_2,FFrameTime param_3)

{
  UMovieGraphSequenceDataSource *pUVar1;
  UMovieGraphSequenceDataSource *local_res8;
  
  local_res8 = (UMovieGraphSequenceDataSource *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieGraphSequenceDataSource,UMovieGraphSequenceDataSource_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14dcc6c10

/* WARNING: Removing unreachable block (ram,0x00014dcc6c76) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieGraphPipeline *pUVar3;
  UMovieGraphPipeline *pUVar4;
  UObject *pUVar5;
  UMovieGraphPipeline *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieGraphPipeline *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieGraphPipeline *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMovieGraphPipeline *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieGraphPipeline *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMovieGraphPipeline,UMovieGraphPipeline_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieGraphPipeline *)0x0;
}

// ExecuteIfSafe @ 14dcc6ce0

/* WARNING: Removing unreachable block (ram,0x00014dcc6d24) */
/* WARNING: Removing unreachable block (ram,0x00014dcc6d68) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                *this,UMovieSceneSequencePlayer *param_1,FFrameTime param_2,FFrameTime param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieGraphSequenceDataSource *pUVar3;
  UMovieGraphSequenceDataSource *pUVar4;
  UObject *pUVar5;
  UMovieGraphSequenceDataSource *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieGraphSequenceDataSource *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieGraphSequenceDataSource *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMovieGraphSequenceDataSource *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieGraphSequenceDataSource *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieGraphSequenceDataSource,UMovieGraphSequenceDataSource_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieGraphSequenceDataSource *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14dccab40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dccab50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14dccf200

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dccf210

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dcd40d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dcd40e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14dcd5430

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dcd5460

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14dcd63b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dcd63d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14dcd76b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dcd76d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14dce8e90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieGraphPipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dce8ea0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieGraphSequenceDataSource,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14dd194e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipeline____A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_45135875 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd19570

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipeline____A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_45135875 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd195c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipeline____A6AXAEBVUMovieSceneSequencePlayer__UFFrameTime__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_45135875 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd19670

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipeline____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1348c9c5 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd19700

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipeline____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1348c9c5 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd19750

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipeline____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1348c9c5 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd19800

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineCommandLineEncoder____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e0a05668 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd19890

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineCommandLineEncoder____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e0a05668 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd198e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineCommandLineEncoder____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_e0a05668 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd19990

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineExecutorBase____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_60a87429 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd19a20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineExecutorBase____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_60a87429 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd19a70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineExecutorBase____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_60a87429 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd19b20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineExecutorBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a27d9f61 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd19bb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineExecutorBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a27d9f61 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd19c00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineExecutorBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a27d9f61 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14dd1d2e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
          *this,UMovieSceneSequencePlayer *param_1,FFrameTime param_2,FFrameTime param_3)

{
  UMoviePipeline *pUVar1;
  UMoviePipeline *local_res8;
  
  local_res8 = (UMoviePipeline *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMoviePipeline,UMoviePipeline_*_&>(&local_res8)
  ;
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 14dd1d350

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  UMoviePipeline *pUVar1;
  UMoviePipeline *local_res8 [4];
  
  local_res8[0] = (UMoviePipeline *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UMoviePipeline,UMoviePipeline_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14dd1d390

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMoviePipelineCommandLineEncoder *pUVar1;
  UMoviePipelineCommandLineEncoder *local_res8 [4];
  
  local_res8[0] =
       (UMoviePipelineCommandLineEncoder *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineCommandLineEncoder,UMoviePipelineCommandLineEncoder_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14dd1d3d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
          *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
         bool param_3)

{
  pmf_60a87429 pVar1;
  UMoviePipelineExecutorBase *pUVar2;
  UMoviePipelineExecutorBase *local_res8;
  IHttpResponse *local_28;
  TReferenceControllerBase<1> *local_20;
  IHttpRequest *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = (UMoviePipelineExecutorBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineExecutorBase,UMoviePipelineExecutorBase_*_&>
                     (&local_res8);
  local_28 = param_2->Object;
  pVar1 = this->MethodPtr;
  param_2->Object = (IHttpResponse *)0x0;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (IHttpRequest *)0x0;
  (*(code *)pVar1)(pUVar2,&local_18,&local_28,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14dd1d490

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMoviePipelineExecutorBase *pUVar1;
  UMoviePipelineExecutorBase *local_res8 [4];
  
  local_res8[0] = (UMoviePipelineExecutorBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineExecutorBase,UMoviePipelineExecutorBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 14dd1d5b0

/* WARNING: Removing unreachable block (ram,0x00014dd1d5f4) */
/* WARNING: Removing unreachable block (ram,0x00014dd1d638) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                *this,UMovieSceneSequencePlayer *param_1,FFrameTime param_2,FFrameTime param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipeline *pUVar3;
  UMoviePipeline *pUVar4;
  UObject *pUVar5;
  UMoviePipeline *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipeline *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipeline *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMoviePipeline *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipeline *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMoviePipeline,UMoviePipeline_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipeline *)0x0;
}

// ExecuteIfSafe @ 14dd1d6c0

/* WARNING: Removing unreachable block (ram,0x00014dd1d726) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipeline *pUVar3;
  UMoviePipeline *pUVar4;
  UObject *pUVar5;
  UMoviePipeline *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipeline *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipeline *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMoviePipeline *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipeline *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UMoviePipeline,UMoviePipeline_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipeline *)0x0;
}

// ExecuteIfSafe @ 14dd1d790

/* WARNING: Removing unreachable block (ram,0x00014dd1d7f6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipelineCommandLineEncoder *pUVar3;
  UMoviePipelineCommandLineEncoder *pUVar4;
  UObject *pUVar5;
  UMoviePipelineCommandLineEncoder *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipelineCommandLineEncoder *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipelineCommandLineEncoder *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMoviePipelineCommandLineEncoder *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipelineCommandLineEncoder *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineCommandLineEncoder,UMoviePipelineCommandLineEncoder_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipelineCommandLineEncoder *)0x0;
}

// ExecuteIfSafe @ 14dd1d860

/* WARNING: Removing unreachable block (ram,0x00014dd1d8d4) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this,TSharedPtr<IHttpRequest,1> *param_1,TSharedPtr<IHttpResponse,1> *param_2,
               bool param_3)

{
  pmf_60a87429 pVar1;
  bool bVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  UMoviePipelineExecutorBase *pUVar4;
  UObject *pUVar5;
  UMoviePipelineExecutorBase *local_res8;
  IHttpResponse *local_48;
  TReferenceControllerBase<1> *local_40;
  IHttpRequest *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pUVar5 = (UObject *)0x0;
  bVar2 = IsInGameThread();
  if (bVar2) {
    local_res8 = (UMoviePipelineExecutorBase *)0x0;
  }
  else {
    TVar3 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar3.Object;
    *(undefined8 *)TVar3.Object = 0;
    if (local_res8 != (UMoviePipelineExecutorBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_48 = (IHttpResponse *)0x0;
  }
  pUVar4 = (UMoviePipelineExecutorBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar4 == (UMoviePipelineExecutorBase *)0x0) {
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar2 = false;
  }
  else {
    local_res8 = pUVar4;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineExecutorBase,UMoviePipelineExecutorBase_*_&>
                       (&local_res8);
    local_48 = param_2->Object;
    pVar1 = this->MethodPtr;
    local_40 = (param_2->SharedReferenceCount).ReferenceController;
    (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_2->Object = (IHttpResponse *)0x0;
    local_38 = param_1->Object;
    local_30 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IHttpRequest *)0x0;
    (*(code *)pVar1)(pUVar4,&local_38,&local_48,param_3);
    if (pUVar5 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar2 = true;
  }
  return bVar2;
}

// ExecuteIfSafe @ 14dd1d9b0

/* WARNING: Removing unreachable block (ram,0x00014dd1da16) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipelineExecutorBase *pUVar3;
  UMoviePipelineExecutorBase *pUVar4;
  UObject *pUVar5;
  UMoviePipelineExecutorBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipelineExecutorBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipelineExecutorBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMoviePipelineExecutorBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipelineExecutorBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineExecutorBase,UMoviePipelineExecutorBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipelineExecutorBase *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14dd23e00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd23e10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd23e20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd23e30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd23e40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14dd294b0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd294c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd294d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd294e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd294f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd30330

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd30340

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd30350

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd30360

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd30370

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14dd32180

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd321b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd321e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd32210

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd32240

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14dd337d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd337f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd33810

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd33830

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd33850

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14dd33ab0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd33ad0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd33af0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd33b10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd33b30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14dd47410

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dd47420

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipeline,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dd47430

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineCommandLineEncoder,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dd47440

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dd47450

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineExecutorBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14dd7d640

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8e4edfc1 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7d6d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8e4edfc1 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7d720

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_8e4edfc1 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7d7d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3b9098df *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7d860

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3b9098df *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7d8b0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3b9098df *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7d960

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_df1d7ef2 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7d9f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_df1d7ef2 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7da40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_df1d7ef2 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7daf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_df1d7ef2 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7db80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_df1d7ef2 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7dbd0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineInProcessExecutor____A6AXXZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_df1d7ef2 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7dc80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelinePythonHostExecutor____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1f5a2095 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7dd10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelinePythonHostExecutor____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1f5a2095 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7dd60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelinePythonHostExecutor____A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_1f5a2095 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7de10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineQueueEngineSubsystem____A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cef27ba4 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7dea0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineQueueEngineSubsystem____A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cef27ba4 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7def0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineQueueEngineSubsystem____A6AXPEAVUMoviePipelineExecutorBase___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cef27ba4 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7dfa0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineQueueEngineSubsystem____A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9c4d493e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7e030

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineQueueEngineSubsystem____A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9c4d493e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7e080

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineQueueEngineSubsystem____A6AXUFMoviePipelineOutputData___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_9c4d493e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14dd7e130

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineSetting_BlueprintBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f3c8152a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14dd7e1c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineSetting_BlueprintBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f3c8152a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14dd7e210

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMoviePipelineSetting_BlueprintBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f3c8152a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14dd7fc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1)

{
  UMoviePipelineInProcessExecutor *pUVar1;
  UMoviePipelineInProcessExecutor *local_res8;
  
  local_res8 = (UMoviePipelineInProcessExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14dd7fc50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
          *this,FMoviePipelineOutputData *param_1)

{
  pmf_3b9098df pVar1;
  FScriptContainerElement *pFVar2;
  UMoviePipelineInProcessExecutor *pUVar3;
  FMoviePipelineOutputData *pFVar4;
  UMoviePipelineInProcessExecutor *local_res8;
  FMoviePipelineOutputData local_48;
  
  local_res8 = (UMoviePipelineInProcessExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pFVar4 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_48,param_1);
  (*(code *)pVar1)(pUVar3,pFVar4);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
             (param_1->GraphData).ArrayNum);
  pFVar2 = (param_1->GraphData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
             (param_1->ShotData).ArrayNum);
  pFVar2 = (param_1->ShotData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Execute @ 14dd7fcf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMoviePipelineInProcessExecutor *pUVar1;
  UMoviePipelineInProcessExecutor *local_res8 [4];
  
  local_res8[0] =
       (UMoviePipelineInProcessExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14dd7fd30

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
          *this)

{
  UMoviePipelineInProcessExecutor *pUVar1;
  UMoviePipelineInProcessExecutor *local_res8 [4];
  
  local_res8[0] =
       (UMoviePipelineInProcessExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// Execute @ 14dd7fd70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
          *this,UWorld *param_1)

{
  UMoviePipelinePythonHostExecutor *pUVar1;
  UMoviePipelinePythonHostExecutor *local_res8;
  
  local_res8 = (UMoviePipelinePythonHostExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelinePythonHostExecutor,UMoviePipelinePythonHostExecutor_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14dd7fdc0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
          *this,UMoviePipelineExecutorBase *param_1,bool param_2)

{
  UMoviePipelineQueueEngineSubsystem *pUVar1;
  UMoviePipelineQueueEngineSubsystem *local_res8;
  
  local_res8 = (UMoviePipelineQueueEngineSubsystem *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineQueueEngineSubsystem,UMoviePipelineQueueEngineSubsystem_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14dd7fe20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
          *this,FMoviePipelineOutputData *param_1)

{
  pmf_9c4d493e pVar1;
  FScriptContainerElement *pFVar2;
  UMoviePipelineQueueEngineSubsystem *pUVar3;
  FMoviePipelineOutputData *pFVar4;
  UMoviePipelineQueueEngineSubsystem *local_res8;
  FMoviePipelineOutputData local_48;
  
  local_res8 = (UMoviePipelineQueueEngineSubsystem *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar3 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineQueueEngineSubsystem,UMoviePipelineQueueEngineSubsystem_*_&>
                     (&local_res8);
  pVar1 = this->MethodPtr;
  pFVar4 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_48,param_1);
  (*(code *)pVar1)(pUVar3,pFVar4);
  DestructItems<FMovieGraphRenderOutputData,int>
            ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
             (param_1->GraphData).ArrayNum);
  pFVar2 = (param_1->GraphData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
             (param_1->ShotData).ArrayNum);
  pFVar2 = (param_1->ShotData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Execute @ 14dd7fec0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  UMoviePipelineSetting_BlueprintBase *pUVar1;
  UMoviePipelineSetting_BlueprintBase *local_res8 [4];
  
  local_res8[0] =
       (UMoviePipelineSetting_BlueprintBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMoviePipelineSetting_BlueprintBase,UMoviePipelineSetting_BlueprintBase_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pUVar1);
  return;
}

// ExecuteIfSafe @ 14dd80160

/* WARNING: Removing unreachable block (ram,0x00014dd801ce) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipelineInProcessExecutor *pUVar3;
  UMoviePipelineInProcessExecutor *pUVar4;
  UObject *pUVar5;
  UMoviePipelineInProcessExecutor *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipelineInProcessExecutor *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipelineInProcessExecutor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMoviePipelineInProcessExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipelineInProcessExecutor *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipelineInProcessExecutor *)0x0;
}

// ExecuteIfSafe @ 14dd80240

/* WARNING: Removing unreachable block (ram,0x00014dd802bc) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                *this,FMoviePipelineOutputData *param_1)

{
  pmf_3b9098df pVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UMoviePipelineInProcessExecutor *pUVar5;
  FMoviePipelineOutputData *pFVar6;
  UObject *pUVar7;
  UMoviePipelineInProcessExecutor *local_res8;
  FMoviePipelineOutputData local_58;
  
  pUVar7 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (UMoviePipelineInProcessExecutor *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar7 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UMoviePipelineInProcessExecutor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar5 = (UMoviePipelineInProcessExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar5 == (UMoviePipelineInProcessExecutor *)0x0) {
    if (pUVar7 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
    }
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
               (param_1->GraphData).ArrayNum);
    pFVar2 = (param_1->GraphData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
               (param_1->ShotData).ArrayNum);
    pFVar2 = (param_1->ShotData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar3 = false;
  }
  else {
    local_res8 = pUVar5;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
                       (&local_res8);
    pVar1 = this->MethodPtr;
    pFVar6 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_58,param_1);
    (*(code *)pVar1)(pUVar5,pFVar6);
    if (pUVar7 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
    }
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
               (param_1->GraphData).ArrayNum);
    pFVar2 = (param_1->GraphData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
               (param_1->ShotData).ArrayNum);
    pFVar2 = (param_1->ShotData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar3 = true;
  }
  return bVar3;
}

// ExecuteIfSafe @ 14dd803b0

/* WARNING: Removing unreachable block (ram,0x00014dd80416) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipelineInProcessExecutor *pUVar3;
  UMoviePipelineInProcessExecutor *pUVar4;
  UObject *pUVar5;
  UMoviePipelineInProcessExecutor *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipelineInProcessExecutor *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipelineInProcessExecutor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMoviePipelineInProcessExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipelineInProcessExecutor *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipelineInProcessExecutor *)0x0;
}

// ExecuteIfSafe @ 14dd80480

/* WARNING: Removing unreachable block (ram,0x00014dd804e6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipelineInProcessExecutor *pUVar3;
  UMoviePipelineInProcessExecutor *pUVar4;
  UObject *pUVar5;
  UMoviePipelineInProcessExecutor *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipelineInProcessExecutor *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipelineInProcessExecutor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMoviePipelineInProcessExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipelineInProcessExecutor *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipelineInProcessExecutor *)0x0;
}

// ExecuteIfSafe @ 14dd80550

/* WARNING: Removing unreachable block (ram,0x00014dd805be) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,UWorld *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipelinePythonHostExecutor *pUVar3;
  UMoviePipelinePythonHostExecutor *pUVar4;
  UObject *pUVar5;
  UMoviePipelinePythonHostExecutor *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipelinePythonHostExecutor *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipelinePythonHostExecutor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMoviePipelinePythonHostExecutor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipelinePythonHostExecutor *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelinePythonHostExecutor,UMoviePipelinePythonHostExecutor_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipelinePythonHostExecutor *)0x0;
}

// ExecuteIfSafe @ 14dd80630

/* WARNING: Removing unreachable block (ram,0x00014dd806a7) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
                *this,UMoviePipelineExecutorBase *param_1,bool param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipelineQueueEngineSubsystem *pUVar3;
  UMoviePipelineQueueEngineSubsystem *pUVar4;
  UObject *pUVar5;
  UMoviePipelineQueueEngineSubsystem *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipelineQueueEngineSubsystem *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipelineQueueEngineSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMoviePipelineQueueEngineSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipelineQueueEngineSubsystem *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineQueueEngineSubsystem,UMoviePipelineQueueEngineSubsystem_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipelineQueueEngineSubsystem *)0x0;
}

// ExecuteIfSafe @ 14dd80720

/* WARNING: Removing unreachable block (ram,0x00014dd8079c) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                *this,FMoviePipelineOutputData *param_1)

{
  pmf_9c4d493e pVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  UMoviePipelineQueueEngineSubsystem *pUVar5;
  FMoviePipelineOutputData *pFVar6;
  UObject *pUVar7;
  UMoviePipelineQueueEngineSubsystem *local_res8;
  FMoviePipelineOutputData local_58;
  
  pUVar7 = (UObject *)0x0;
  bVar3 = IsInGameThread();
  if (bVar3) {
    local_res8 = (UMoviePipelineQueueEngineSubsystem *)0x0;
  }
  else {
    TVar4 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar7 = *TVar4.Object;
    *(undefined8 *)TVar4.Object = 0;
    if (local_res8 != (UMoviePipelineQueueEngineSubsystem *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar5 = (UMoviePipelineQueueEngineSubsystem *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar5 == (UMoviePipelineQueueEngineSubsystem *)0x0) {
    if (pUVar7 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
    }
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
               (param_1->GraphData).ArrayNum);
    pFVar2 = (param_1->GraphData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
               (param_1->ShotData).ArrayNum);
    pFVar2 = (param_1->ShotData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar3 = false;
  }
  else {
    local_res8 = pUVar5;
    pUVar5 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineQueueEngineSubsystem,UMoviePipelineQueueEngineSubsystem_*_&>
                       (&local_res8);
    pVar1 = this->MethodPtr;
    pFVar6 = FMoviePipelineOutputData::FMoviePipelineOutputData(&local_58,param_1);
    (*(code *)pVar1)(pUVar5,pFVar6);
    if (pUVar7 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pUVar7);
    }
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)(param_1->GraphData).AllocatorInstance.Data,
               (param_1->GraphData).ArrayNum);
    pFVar2 = (param_1->GraphData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)(param_1->ShotData).AllocatorInstance.Data,
               (param_1->ShotData).ArrayNum);
    pFVar2 = (param_1->ShotData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar3 = true;
  }
  return bVar3;
}

// ExecuteIfSafe @ 14dd80890

/* WARNING: Removing unreachable block (ram,0x00014dd808f6) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMoviePipelineSetting_BlueprintBase *pUVar3;
  UMoviePipelineSetting_BlueprintBase *pUVar4;
  UObject *pUVar5;
  UMoviePipelineSetting_BlueprintBase *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMoviePipelineSetting_BlueprintBase *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMoviePipelineSetting_BlueprintBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pUVar3 = (UMoviePipelineSetting_BlueprintBase *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMoviePipelineSetting_BlueprintBase *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMoviePipelineSetting_BlueprintBase,UMoviePipelineSetting_BlueprintBase_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMoviePipelineSetting_BlueprintBase *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14dd86140

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86150

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86160

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86170

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86180

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd86190

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd861a0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14dd861b0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14dd8abd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd8abe0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd8abf0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd8ac00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd8ac10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd8ac20

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd8ac30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14dd8ac40

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd8d680

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd8d690

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd8d6a0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd8d6b0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd8d6c0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd8d6d0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd8d6e0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14dd8d6f0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14dd8eb90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd8ebc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd8ebf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd8ec20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd8ec50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd8ec80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd8ecb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14dd8ece0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14dd8fd00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd8fd20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd8fd40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd8fd60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd8fd80

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd8fda0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd8fdc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14dd8fde0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14dd8ffa0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd8ffc0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd8ffe0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd90000

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd90020

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd90040

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd90060

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14dd90080

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14dda8500

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda8510

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda8520

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda8530

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineInProcessExecutor,void___cdecl(void),FDefaultTSDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda8540

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelinePythonHostExecutor,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda8550

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda8560

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineQueueEngineSubsystem,void___cdecl(FMoviePipelineOutputData),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14dda8570

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMoviePipelineSetting_BlueprintBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

