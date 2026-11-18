// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 11

// TryGetBoundFunctionName @ 148c4cbc0

FName __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 148c4cbd0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 148c4cbe0

void * __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar2;
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
        pTVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pTVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 148c4cc40

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 148c4cc50

bool __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar4;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar5;
  bool bVar6;
  
  pTVar1 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pTVar4 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar1->_padding_;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_148c4cc85;
      LOCK();
      aVar3 = *(atomic<int> *)&pTVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pTVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = (this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_148c4cc85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar5);
  return pTVar4 == param_1;
}

// IsSafeToExecute @ 148c4ccb0

bool __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object !=
        (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// CreateCopy @ 148c4cce0

void __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__TFilterCollection_AEBV__TSharedPtr_VIAutomationReport___00_____00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_0e4b5987 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c4cda0

void __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__TFilterCollection_AEBV__TSharedPtr_VIAutomationReport___00_____00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_0e4b5987 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c4ce40

void __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__TFilterCollection_AEBV__TSharedPtr_VIAutomationReport___00_____00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_0e4b5987 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// Execute @ 148c4ceb0

void __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar3;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar4;
  bool bVar5;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *local_res8;
  
  pTVar3 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0;
  pTVar4 = pTVar3;
  if (pTVar3 != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
    aVar1 = *(atomic<int> *)&pTVar3->_padding_;
    do {
      pTVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_148c4cee1;
      LOCK();
      aVar2 = *(atomic<int> *)&pTVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pTVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pTVar4 = pTVar3;
  }
LAB_148c4cee1:
  pTVar3 = UE::Core::Private::
           DereferenceIfNecessary<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar4);
  return;
}

// ExecuteIfSafe @ 148c4cf50

bool __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148c4cf80;
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
    if (local_res8 != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
      pTVar3 = UE::Core::Private::
               DereferenceIfNecessary<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_148c4cf80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

