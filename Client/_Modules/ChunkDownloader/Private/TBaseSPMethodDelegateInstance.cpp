// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChunkDownloader
// Functions: 11

// CreateCopy @ 14f022e20

void __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFChunkDownloader___00__A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_7b0300f6 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14f022ec0

void __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFChunkDownloader___00__A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_7b0300f6 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14f022f30

void __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFChunkDownloader___00__A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_7b0300f6 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14f024580

bool __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
Execute(TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
        *this,float param_1)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  FChunkDownloader *pFVar4;
  FChunkDownloader *pFVar5;
  bool bVar6;
  FChunkDownloader *local_res8;
  
  pFVar4 = (FChunkDownloader *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FChunkDownloader *)0x0;
  pFVar5 = pFVar4;
  if (pFVar4 != (FChunkDownloader *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar4->_padding_;
    do {
      pFVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14f0245c1;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar4->_padding_;
      bVar6 = aVar1 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar4->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pFVar5 = pFVar4;
  }
LAB_14f0245c1:
  pFVar4 = UE::Core::Private::DereferenceIfNecessary<FChunkDownloader,FChunkDownloader_*_&>
                     (&local_res8);
  uVar2 = (*(code *)this->MethodPtr)(pFVar4,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return (bool)uVar2;
}

// ExecuteIfSafe @ 14f024930

bool __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,float param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FChunkDownloader *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FChunkDownloader *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14f024965;
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
    if (local_res8 != (FChunkDownloader *)0x0) {
      pFVar3 = UE::Core::Private::DereferenceIfNecessary<FChunkDownloader,FChunkDownloader_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14f024965:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14f025b10

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14f025d80

void * __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FChunkDownloader *pFVar2;
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

// GetUObject @ 14f025f30

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetUObject(TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14f026060

bool __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  FChunkDownloader *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FChunkDownloader *pFVar4;
  FChunkDownloader *pFVar5;
  bool bVar6;
  
  pFVar1 = (FChunkDownloader *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FChunkDownloader *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FChunkDownloader *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14f026095;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14f026095:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// IsSafeToExecute @ 14f026ee0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FChunkDownloader *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14f02d090

FName __thiscall
TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FChunkDownloader,1,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

