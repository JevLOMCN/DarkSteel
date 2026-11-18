// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// operator() @ 143897660

void __thiscall
TDefaultDelete<Chaos::FPushPhysicsData>::operator()
          (TDefaultDelete<Chaos::FPushPhysicsData> *this,FPushPhysicsData *param_1)

{
  FScriptContainerElement *pFVar1;
  FDirtyProxiesBucket *pFVar2;
  TArray<Chaos::FShapeDirtyData,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  
  if (param_1 != (FPushPhysicsData *)0x0) {
    pFVar1 = (param_1->SimCommands).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->SimCallbackInputs).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->SimCallbackObjectsToRemove).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->SimCallbackObjectsToAdd).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pTVar3 = &(param_1->DirtyProxiesDataBuffer).ShapesData;
    pFVar1 = (pTVar3->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    lVar4 = 0xd;
    do {
      pFVar2 = (FDirtyProxiesBucket *)(pTVar3 + -1);
      pTVar3 = pTVar3 + -1;
      lVar4 = lVar4 + -1;
      DestructItems<Chaos::FDirtyProxy,int>
                ((FDirtyProxy *)
                 (((TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_> *)
                  &pTVar3->AllocatorInstance)->AllocatorInstance).Data,
                 (pFVar2->ProxiesData).ArrayNum);
      pFVar1 = (((TArray<Chaos::FDirtyProxy,TSizedDefaultAllocator<32>_> *)
                &pTVar3->AllocatorInstance)->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    } while (lVar4 != 0);
    Chaos::FDirtyPropertiesManager::~FDirtyPropertiesManager(&param_1->DirtyPropertiesManager);
    ::operator_delete(param_1,0x2e0);
  }
  return;
}

// operator() @ 143897730

void __thiscall
TDefaultDelete<Chaos::FPullPhysicsData>::operator()
          (TDefaultDelete<Chaos::FPullPhysicsData> *this,FPullPhysicsData *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (param_1 != (FPullPhysicsData *)0x0) {
    DestructItems<Chaos::FDirtyCharacterGroundConstraintData,int>
              ((FDirtyCharacterGroundConstraintData *)
               (param_1->DirtyCharacterGroundConstraints).AllocatorInstance.Data,
               (param_1->DirtyCharacterGroundConstraints).ArrayNum);
    pFVar1 = (param_1->DirtyCharacterGroundConstraints).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<Chaos::FDirtyJointConstraintData,int>
              ((FDirtyJointConstraintData *)(param_1->DirtyJointConstraints).AllocatorInstance.Data,
               (param_1->DirtyJointConstraints).ArrayNum);
    pFVar1 = (param_1->DirtyJointConstraints).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<Chaos::FDirtyClusterUnionData,int>
              ((FDirtyClusterUnionData *)(param_1->DirtyClusterUnions).AllocatorInstance.Data,
               (param_1->DirtyClusterUnions).ArrayNum);
    pFVar1 = (param_1->DirtyClusterUnions).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<Chaos::FDirtyGeometryCollectionData,int>
              ((FDirtyGeometryCollectionData *)
               (param_1->DirtyGeometryCollections).AllocatorInstance.Data,
               (param_1->DirtyGeometryCollections).ArrayNum);
    pFVar1 = (param_1->DirtyGeometryCollections).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(param_1->DirtyRigidErrors).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->DirtyRigidErrors).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->DirtyRigidErrors);
    DestructItems<Chaos::FDirtyRigidParticleData,int>
              ((FDirtyRigidParticleData *)(param_1->DirtyRigids).AllocatorInstance.Data,
               (param_1->DirtyRigids).ArrayNum);
    pFVar1 = (param_1->DirtyRigids).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xb8);
  }
  return;
}

// operator() @ 143b0d520

void __thiscall
TDefaultDelete<Chaos::FPhysicsRwLock>::operator()
          (TDefaultDelete<Chaos::FPhysicsRwLock> *this,FPhysicsRwLock *param_1)

{
  code *pcVar1;
  bool bVar2;
  BOOLEAN BVar3;
  
  if (param_1 != (FPhysicsRwLock *)0x0) {
    if (param_1->TlsSlot == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x2f9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TlsFree(param_1->TlsSlot);
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)param_1);
    if (BVar3 != '\0') {
      ReleaseSRWLockExclusive((PSRWLOCK)param_1);
      ::operator_delete(param_1,0x10);
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ::operator_delete(param_1,0x10);
  }
  return;
}

// operator() @ 144073090

void __thiscall
TDefaultDelete<Chaos::FEventManager>::operator()
          (TDefaultDelete<Chaos::FEventManager> *this,FEventManager *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  if (param_1 != (FEventManager *)0x0) {
    Chaos::FEventManager::Reset(param_1);
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ContainerLock);
    }
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&param_1->ResourceLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&param_1->ResourceLock);
    }
    pFVar1 = (param_1->EventContainers).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0x28);
  }
  return;
}

