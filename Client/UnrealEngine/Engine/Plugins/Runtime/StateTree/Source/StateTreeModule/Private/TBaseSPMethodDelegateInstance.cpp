// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 11

// CreateCopy @ 14d4b8a40

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_UFCrashReporterHandlerImpl_Private_StateTree_UE___00__A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_c3d02b06 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d4b8ae0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_UFCrashReporterHandlerImpl_Private_StateTree_UE___00__A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_c3d02b06 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d4b8b50

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_UFCrashReporterHandlerImpl_Private_StateTree_UE___00__A6AXAEAUFCrashContextExtendedWriter___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_c3d02b06 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d4bbed0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
          *this,FCrashContextExtendedWriter *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FCrashReporterHandlerImpl *pFVar4;
  FCrashReporterHandlerImpl *pFVar5;
  bool bVar6;
  FCrashReporterHandlerImpl *local_res8;
  
  pFVar4 = (FCrashReporterHandlerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FCrashReporterHandlerImpl *)0x0;
  pFVar5 = pFVar4;
  if (pFVar4 != (FCrashReporterHandlerImpl *)0x0) {
    aVar2 = *(atomic<int> *)((longlong)(pFVar4->Contexts).AllocatorInstance.InlineData + 8);
    do {
      pFVar5 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d4bbf11;
      paVar1 = (atomic<int> *)((longlong)(pFVar4->Contexts).AllocatorInstance.InlineData + 8);
      LOCK();
      aVar3 = *paVar1;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *paVar1 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pFVar5 = pFVar4;
  }
LAB_14d4bbf11:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::StateTree::Private::FCrashReporterHandlerImpl,UE::StateTree::Private::FCrashReporterHandlerImpl_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar4,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

// ExecuteIfSafe @ 14d4bc0b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
                *this,FCrashContextExtendedWriter *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FCrashReporterHandlerImpl *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FCrashReporterHandlerImpl *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d4bc0e5;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FCrashReporterHandlerImpl *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::StateTree::Private::FCrashReporterHandlerImpl,UE::StateTree::Private::FCrashReporterHandlerImpl_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d4bc0e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14d4bd5c0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14d4bead0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FCrashReporterHandlerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetUObject @ 14d4c07f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d4c25f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  atomic<int> *paVar1;
  FCrashReporterHandlerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FCrashReporterHandlerImpl *pFVar5;
  FCrashReporterHandlerImpl *pFVar6;
  bool bVar7;
  
  pFVar2 = (FCrashReporterHandlerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar5 = (FCrashReporterHandlerImpl *)0x0;
  pFVar6 = pFVar2;
  if (pFVar2 != (FCrashReporterHandlerImpl *)0x0) {
    aVar3 = *(atomic<int> *)((longlong)(pFVar2->Contexts).AllocatorInstance.InlineData + 8);
    do {
      pFVar6 = pFVar5;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d4c2625;
      paVar1 = (atomic<int> *)((longlong)(pFVar2->Contexts).AllocatorInstance.InlineData + 8);
      LOCK();
      aVar4 = *paVar1;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *paVar1 = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar5 = (this->UserObject).Object;
    pFVar6 = pFVar2;
  }
LAB_14d4c2625:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return pFVar5 == param_1;
}

// IsSafeToExecute @ 14d4c4070

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FCrashReporterHandlerImpl *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14d4d2e70

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::StateTree::Private::FCrashReporterHandlerImpl,1,void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

