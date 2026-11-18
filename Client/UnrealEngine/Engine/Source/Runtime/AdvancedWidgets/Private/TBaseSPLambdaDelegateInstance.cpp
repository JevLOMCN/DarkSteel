// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 11

// CreateCopy @ 14d854280

void __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
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
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::`14'::<lambda_1>_>
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
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d854320

void __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::`14'::<lambda_1>_>
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
  }
  return;
}

// CreateCopy @ 14d854390

void __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
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
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::`14'::<lambda_1>_>
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
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d85d070

EActiveTimerReturnType __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::Execute(void *this,double param_1,float param_2)

{
  EActiveTimerReturnType EVar1;
  
  EVar1 = `UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>::
          operator()((void *)((longlong)this + 0x28),param_1,param_2);
  return EVar1;
}

// ExecuteIfSafe @ 14d85f160

bool __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    `UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>::operator()
              ((void *)((longlong)this + 0x28),param_1,param_2);
    return true;
  }
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14d866020

ulong64 __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d8697e0

void * __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetUObject @ 14d86d4c0

UObject * __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d8705b0

bool __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8705e5;
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
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d8705e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// IsSafeToExecute @ 14d871da0

bool __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14d88b3d0

FName __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

