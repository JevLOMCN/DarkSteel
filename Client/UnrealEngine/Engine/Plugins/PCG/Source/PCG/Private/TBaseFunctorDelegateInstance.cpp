// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 132

// CreateCopy @ 14974a9c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,__FPCGInstanceDataProviderProxy::PostSubmit_::__l2::<lambda_1>::operator()_::__l38::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14974aa30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,__FPCGInstanceDataProviderProxy::PostSubmit_::__l2::<lambda_1>::operator()_::__l38::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14974aa70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,__FPCGInstanceDataProviderProxy::PostSubmit_::__l2::<lambda_1>::operator()_::__l38::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14974ab00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::`13'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14974aba0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::`13'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 14974ac00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::`13'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 149750090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::Execute(void *this,FRDGBuilder *param_1,FGPUSceneWriteDelegateParams *param_2)

{
  ``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1,param_2);
  return;
}

// Execute @ 1497500a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::Execute(void *this)

{
  `IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 1497505e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::ExecuteIfSafe(void *this,FRDGBuilder *param_1,FGPUSceneWriteDelegateParams *param_2)

{
  ``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>::
  operator()((void *)((longlong)this + 0x18),param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 149750600

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1497546e0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1497546f0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 149759f70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 149759f80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1497683e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1497683f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 149768600

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 149768610

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14976be50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14976be60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 149778970

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FRDGBuilder_&,FGPUSceneWriteDelegateParams_const_&),FDefaultDelegateUserPolicy,``FPCGInstanceDataProviderProxy::PostSubmit'::__l2::<lambda_1>::operator()'::__l38::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 149778980

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`IPCGAsyncLoadingContext::RequestResourceLoad'::__l13::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1497fd250

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::`168'::<lambda_3>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1497fd300

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::`168'::<lambda_3>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar2[6] = *(undefined8 *)((longlong)this + 0x30);
  }
  return;
}

// CreateCopy @ 1497fd370

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::`168'::<lambda_3>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar4[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar4[6] = *(undefined8 *)((longlong)this + 0x30);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1497fd430

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::`273'::<lambda_6>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1497fd4d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::`273'::<lambda_6>_>
               ::_vftable_;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}

// CreateCopy @ 1497fd530

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::`273'::<lambda_6>_>
               ::_vftable_;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 149800380

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::Execute(void *this)

{
  `FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// Execute @ 149800390

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
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::Execute(void *this)

{
  FPCGContext *pFVar1;
  FSharedContext<FPCGComputeGraphContext> local_28;
  TWeakPtr<FPCGContextHandle,1> local_18;
  
  local_18.Object = *(FPCGContextHandle **)((longlong)this + 0x18);
  local_18.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FPCGContext::FSharedContext<FPCGComputeGraphContext>::FSharedContext<FPCGComputeGraphContext>
            (&local_28,&local_18);
  if ((local_28.SharedHandle.Object != (FPCGContextHandle *)0x0) &&
     (pFVar1 = (local_28.SharedHandle.Object)->Context, pFVar1 != (FPCGContext *)0x0)) {
    pFVar1->bIsPaused = false;
    *(undefined1 *)&pFVar1[1].OutputData.TaggedData.AllocatorInstance.Data = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedHandle.SharedReferenceCount.ReferenceController);
  return;
}

// ExecuteIfSafe @ 149800400

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::ExecuteIfSafe(void *this)

{
  `FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// ExecuteIfSafe @ 149800420

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
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::ExecuteIfSafe(void *this)

{
  FPCGContext *pFVar1;
  FSharedContext<FPCGComputeGraphContext> local_28;
  TWeakPtr<FPCGContextHandle,1> local_18;
  
  local_18.Object = *(FPCGContextHandle **)((longlong)this + 0x18);
  local_18.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FPCGContext::FSharedContext<FPCGComputeGraphContext>::FSharedContext<FPCGComputeGraphContext>
            (&local_28,&local_18);
  if ((local_28.SharedHandle.Object != (FPCGContextHandle *)0x0) &&
     (pFVar1 = (local_28.SharedHandle.Object)->Context, pFVar1 != (FPCGContext *)0x0)) {
    pFVar1->bIsPaused = false;
    *(undefined1 *)&pFVar1[1].OutputData.TaggedData.AllocatorInstance.Data = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedHandle.SharedReferenceCount.ReferenceController);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 149810330

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 149810340

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 149816770

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 149816780

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14981c0e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14981c0f0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14981db50

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14981db60

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149820cd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 149820ce0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1498472f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l168::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 149847300

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FPCGComputeGraphElement::ExecuteInternal'::__l273::<lambda_6>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 149c96bc0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149c96bd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149c96be0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149c96bf0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149c96c00

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149c96c10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149c96c20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149c96cc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149c96d40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 149c96d80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
          *this,IConsoleVariable *param_1)

{
  ::<lambda_26>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 149c96d90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
                *this,IConsoleVariable *param_1)

{
  ::<lambda_26>::operator()(&this->Functor,param_1);
  return true;
}

// TryGetBoundFunctionName @ 149c96de0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149c96df0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149c96e00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149c96e10

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149c96e20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149c96e30

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149c96e40

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149c96f20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149c96fa0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 149c97060

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
          *this,IConsoleVariable *param_1)

{
  IConsoleVariable *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<<lambda_27>_&,IConsoleVariable_*>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)&this->_padding_,&this->Functor,
             local_res10);
  return;
}

// ExecuteIfSafe @ 149c970d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
                *this,IConsoleVariable *param_1)

{
  IConsoleVariable *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<<lambda_27>_&,IConsoleVariable_*>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)&this->_padding_,&this->Functor,
             local_res10);
  return true;
}

// TryGetBoundFunctionName @ 149edebd0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149edebe0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149edebf0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149edec00

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149edec10

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149edec20

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149edec30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149edecd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149eded50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 149eded90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
          *this,IConsoleVariable *param_1)

{
  PCGFeatureSwitches::<lambda_25>::operator()(&this->Functor,param_1);
  return;
}

// ExecuteIfSafe @ 149edede0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGFeatureSwitches::<lambda_25>_>
                *this,IConsoleVariable *param_1)

{
  PCGFeatureSwitches::<lambda_25>::operator()(&this->Functor,param_1);
  return true;
}

// TryGetBoundFunctionName @ 149f1c730

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149f1c740

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149f1c750

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149f1c760

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149f1c770

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149f1c780

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149f1c790

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149f1c830

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149f1c8b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 149f1c8f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
          *this)

{
  PCGSubsystemConsole::<lambda_33>::operator()(&this->Functor);
  return;
}

// ExecuteIfSafe @ 149f1c900

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_33>_>
                *this)

{
  PCGSubsystemConsole::<lambda_33>::operator()(&this->Functor);
  return true;
}

// TryGetBoundFunctionName @ 149f1c990

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149f1c9a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149f1c9b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149f1c9c0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149f1c9d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149f1c9e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149f1c9f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149f1ca90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149f1cb10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 149f1cb50

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
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
          *this,IConsoleVariable *param_1)

{
  UPCGSubsystem *local_res10 [3];
  code *local_18;
  UPCGSubsystem **local_10;
  
  local_res10[0] = (UPCGSubsystem *)param_1;
  local_res10[0] = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (local_res10[0] != (UPCGSubsystem *)0x0) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGSubsystem::OnPCGQualityLevelChanged'::__l2::<lambda_1>,void,UPCGComponent_*>
               ::Call;
    FPCGActorAndComponentMapping::ForAllOriginalComponents
              ((local_res10[0]->ActorAndComponentMapping).Ptr,
               (TFunctionRef<void___cdecl(UPCGComponent_*)> *)&local_18);
  }
  return;
}

// ExecuteIfSafe @ 149f1cbe0

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
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_34>_>
                *this,IConsoleVariable *param_1)

{
  UPCGSubsystem *local_res10 [3];
  code *local_18;
  UPCGSubsystem **local_10;
  
  local_res10[0] = (UPCGSubsystem *)param_1;
  local_res10[0] = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (local_res10[0] != (UPCGSubsystem *)0x0) {
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGSubsystem::OnPCGQualityLevelChanged'::__l2::<lambda_1>,void,UPCGComponent_*>
               ::Call;
    FPCGActorAndComponentMapping::ForAllOriginalComponents
              ((local_res10[0]->ActorAndComponentMapping).Ptr,
               (TFunctionRef<void___cdecl(UPCGComponent_*)> *)&local_18);
  }
  return true;
}

// TryGetBoundFunctionName @ 149f1cc60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149f1cc70

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149f1cc80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149f1cc90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149f1cca0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149f1ccb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149f1ccc0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149f1cd60

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149f1cde0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 149f1ce20

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
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
          *this)

{
  UPCGSubsystem *this_00;
  
  this_00 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (this_00 != (UPCGSubsystem *)0x0) {
    UPCGSubsystem::RefreshAllRuntimeGenComponents(this_00,GenerationGrid);
    return;
  }
  return;
}

// ExecuteIfSafe @ 149f1ce50

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
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGSubsystemConsole::<lambda_35>_>
                *this)

{
  UPCGSubsystem *this_00;
  
  this_00 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (this_00 != (UPCGSubsystem *)0x0) {
    UPCGSubsystem::RefreshAllRuntimeGenComponents(this_00,GenerationGrid);
  }
  return true;
}

// TryGetBoundFunctionName @ 149f1f0f0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149f1f100

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149f1f110

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149f1f120

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149f1f170

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149f1f180

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149f1f190

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149f1f230

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149f1f3a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 149f1f420

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
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
          *this)

{
  UPCGSubsystem *pUVar1;
  
  pUVar1 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (pUVar1 != (UPCGSubsystem *)0x0) {
    pUVar1->RuntimeGenScheduler->bActorFlushRequested = true;
  }
  return;
}

// ExecuteIfSafe @ 149f1f490

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
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_27>_>
                *this)

{
  UPCGSubsystem *pUVar1;
  
  pUVar1 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (pUVar1 != (UPCGSubsystem *)0x0) {
    pUVar1->RuntimeGenScheduler->bActorFlushRequested = true;
  }
  return true;
}

// TryGetBoundFunctionName @ 149f1f640

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::TryGetBoundFunctionName
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 149f1f650

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::GetUObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 149f1f660

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::GetObjectForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
           *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 149f1f670

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::GetBoundProgramCounterForTimerManager
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
           *this)

{
  return 0;
}

// HasSameObject @ 149f1f680

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::HasSameObject(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
                *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 149f1f690

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::IsSafeToExecute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
                  *this)

{
  return true;
}

// CreateCopy @ 149f1f6a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 149f1f740

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 149f1f7c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::CreateCopy(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &_vftable_;
  }
  return;
}

// Execute @ 149f1f800

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
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::Execute(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
          *this,IConsoleVariable *param_1)

{
  UPCGSubsystem *pUVar1;
  
  pUVar1 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (pUVar1 != (UPCGSubsystem *)0x0) {
    pUVar1->RuntimeGenScheduler->bActorFlushRequested = true;
  }
  return;
}

// ExecuteIfSafe @ 149f1f830

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
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
::ExecuteIfSafe(TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,PCGRuntimeGenSchedulerHelpers::<lambda_28>_>
                *this,IConsoleVariable *param_1)

{
  UPCGSubsystem *pUVar1;
  
  pUVar1 = UPCGSubsystem::GetSubsystemForCurrentWorld();
  if (pUVar1 != (UPCGSubsystem *)0x0) {
    pUVar1->RuntimeGenScheduler->bActorFlushRequested = true;
  }
  return true;
}

