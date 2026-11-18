// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~IPhysicsProxyBase @ 143f8e080

void __thiscall IPhysicsProxyBase::~IPhysicsProxyBase(IPhysicsProxyBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPhysicsSolverBase *pFVar3;
  FPushPhysicsData *pFVar4;
  FScriptContainerElement *pFVar5;
  FPlatformRWLock *SRWLock;
  undefined1 local_res8 [8];
  
  pFVar3 = this->Solver;
  this->_padding_ = (longlong)&___7IPhysicsProxyBase__6B_;
  if (pFVar3 != (FPhysicsSolverBase *)0x0) {
    if (0 < (pFVar3->MarshallingManager).HistoryQueue_Internal.ArrayNum) {
      pFVar4 = (pFVar3->MarshallingManager).ConsumerData;
      if (pFVar4 != (FPushPhysicsData *)0x0) {
        Chaos::FDirtySet::RemoveWithoutDirtyIdx
                  (&pFVar4->DirtyProxiesDataBuffer,this,&pFVar4->DirtyPropertiesManager);
      }
      pFVar5 = (pFVar3->MarshallingManager).HistoryQueue_Internal.AllocatorInstance.Data;
      iVar2 = (pFVar3->MarshallingManager).HistoryQueue_Internal.ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar3->MarshallingManager).HistoryQueue_Internal.ArrayNum != iVar2) {
          `TCheckedPointerIterator<Chaos::FPushPhysicsData_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar5 == pFVar1) break;
        Chaos::FDirtySet::RemoveWithoutDirtyIdx
                  ((FDirtySet *)(*(FDirtyPropertiesManager **)pFVar5 + 1),this,
                   *(FDirtyPropertiesManager **)pFVar5);
        pFVar5 = pFVar5 + 8;
      }
    }
    pFVar3 = this->Solver;
    SRWLock = (FPlatformRWLock *)0x0;
    if (Chaos::CVars::bEnableAsyncInitBody != false) {
      SRWLock = &(pFVar3->MarshallingManager).MarshallingManagerLock;
    }
    if (SRWLock == (FPlatformRWLock *)0x0) {
      Chaos::FDirtySet::Remove
                (&((pFVar3->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,this);
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      Chaos::FDirtySet::Remove
                (&((pFVar3->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,this);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SyncTimestamp).SharedReferenceCount.ReferenceController);
  return;
}

// GetHandleUnsafe @ 143fb0b30

void * __thiscall IPhysicsProxyBase::GetHandleUnsafe(IPhysicsProxyBase *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsProxyBase.h"
                     ,0x79,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// GetSolverSyncTimestamp_External @ 143fb3270

int __thiscall IPhysicsProxyBase::GetSolverSyncTimestamp_External(IPhysicsProxyBase *this)

{
  if (this->Solver != (FPhysicsSolverBase *)0x0) {
    return (int)(this->Solver->MarshallingManager).ExternalTimestamp_External;
  }
  return -1;
}

