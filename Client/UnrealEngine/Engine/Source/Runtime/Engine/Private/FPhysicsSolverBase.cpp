// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CreateAndRegisterSimCallbackObject_External<FCharacterMovementComponentAsyncCallback> @ 1477455f0

FCharacterMovementComponentAsyncCallback * __thiscall
Chaos::FPhysicsSolverBase::
CreateAndRegisterSimCallbackObject_External<FCharacterMovementComponentAsyncCallback>
          (FPhysicsSolverBase *this)

{
  int *piVar1;
  FPushPhysicsData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCharacterMovementComponentAsyncCallback *pFVar7;
  undefined8 *puVar8;
  FPlatformRWLock *SRWLock;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FCharacterMovementComponentAsyncCallback *local_18 [2];
  
  pFVar7 = ::operator_new(0xe8);
  if (pFVar7 == (FCharacterMovementComponentAsyncCallback *)0x0) {
    pFVar7 = (FCharacterMovementComponentAsyncCallback *)0x0;
  }
  else {
    memset(pFVar7,0,0xe8);
    *(undefined2 *)&pFVar7->field_0x40 = 1;
    *(undefined ***)pFVar7 =
         &
         ___7__TSimCallbackObject_UFCharacterMovementComponentAsyncInput__UFCharacterMovementComponentAsyncOutput___00_Chaos__6B_
    ;
    pFVar7->field_0x48 = 0;
    puVar8 = FMemory::Malloc(0x10,8);
    *puVar8 = 0;
    *(undefined8 **)&pFVar7->field_0x68 = puVar8;
    *(undefined8 **)&pFVar7->field_0x50 = puVar8;
    *(undefined8 **)&pFVar7->field_0x60 = puVar8;
    *(undefined8 **)&pFVar7->field_0x58 = puVar8;
    *(undefined8 *)&pFVar7->field_0x70 = 0;
    *(undefined8 *)&pFVar7->field_0x78 = 0;
    pFVar7->field_0x80 = 0;
    puVar8 = FMemory::Malloc(0x10,8);
    *puVar8 = 0;
    *(undefined8 **)&pFVar7->field_0xa0 = puVar8;
    *(undefined8 **)&pFVar7->field_0x88 = puVar8;
    *(undefined8 **)&pFVar7->field_0x98 = puVar8;
    *(undefined8 **)&pFVar7->field_0x90 = puVar8;
    *(undefined8 *)&pFVar7->field_0xa8 = 0;
    *(undefined8 *)&pFVar7->field_0xb0 = 0;
    pFVar7->field_0xb8 = 0;
    puVar8 = FMemory::Malloc(0x10,8);
    *puVar8 = 0;
    *(undefined8 **)&pFVar7->field_0xd8 = puVar8;
    *(undefined8 **)&pFVar7->field_0xc0 = puVar8;
    *(undefined8 **)&pFVar7->field_0xd0 = puVar8;
    *(undefined8 **)&pFVar7->field_0xc8 = puVar8;
    *(undefined ***)pFVar7 = &___7FCharacterMovementComponentAsyncCallback__6B_;
    *(undefined8 *)&pFVar7->field_0xe0 = 0;
  }
  if ((*(ushort *)&pFVar7->field_0x40 & 0x100) != 0) {
    this->bSolverHasFrozenGameThreadCallbacks = true;
  }
  if (*(longlong *)&pFVar7->field_0x18 != 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1691896001394115511>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                       ,0x3b7,"SimCallbackObject->Solver == nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FCharacterMovementComponentAsyncCallback *)(*pcVar4)();
      return pFVar7;
    }
  }
  *(FPhysicsSolverBase **)&pFVar7->field_0x18 = this;
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &(this->MarshallingManager).MarshallingManagerLock;
  }
  local_18[0] = pFVar7;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pFVar2 = (this->MarshallingManager).ProducerData;
  pTVar9 = &pFVar2->SimCallbackObjectsToAdd;
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(pFVar2->SimCallbackObjectsToAdd).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FCharacterMovementComponentAsyncCallback *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (pFVar2->SimCallbackObjectsToAdd).ArrayNum;
  piVar1 = &(pFVar2->SimCallbackObjectsToAdd).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar9->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  (pFVar2->SimCallbackObjectsToAdd).ArrayNum = iVar6 + 1;
  *(FCharacterMovementComponentAsyncCallback **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return pFVar7;
}

// CreateAndRegisterSimCallbackObject_External<FAsyncPhysicsTickCallback> @ 1482377f0

FAsyncPhysicsTickCallback * __thiscall
Chaos::FPhysicsSolverBase::CreateAndRegisterSimCallbackObject_External<FAsyncPhysicsTickCallback>
          (FPhysicsSolverBase *this)

{
  int *piVar1;
  FPushPhysicsData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAsyncPhysicsTickCallback *pFVar7;
  undefined8 *puVar8;
  FPlatformRWLock *SRWLock;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FAsyncPhysicsTickCallback *local_18 [2];
  
  pFVar7 = ::operator_new(0x198);
  if (pFVar7 == (FAsyncPhysicsTickCallback *)0x0) {
    pFVar7 = (FAsyncPhysicsTickCallback *)0x0;
  }
  else {
    memset(pFVar7,0,0x198);
    *(undefined2 *)&pFVar7->_padding_ = 0x101;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TSimCallbackObject_UFSimCallbackNoInput_Chaos__UFSimCallbackNoOutput_2__0BAB__Chaos__6B_
    ;
    *(undefined1 *)&pFVar7->_padding_ = 0;
    puVar8 = FMemory::Malloc(0x10,8);
    *puVar8 = 0;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    *(undefined1 *)&pFVar7->_padding_ = 0;
    puVar8 = FMemory::Malloc(0x10,8);
    *puVar8 = 0;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    *(undefined1 *)&pFVar7->_padding_ = 0;
    puVar8 = FMemory::Malloc(0x10,8);
    *puVar8 = 0;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)puVar8;
    pFVar7->_padding_ = (longlong)&___7FAsyncPhysicsTickCallback__6B_;
    pFVar7->_padding_ = 0;
    *(undefined8 *)&(pFVar7->AsyncPhysicsTickComponents).Elements = 0;
    *(undefined8 *)&(pFVar7->AsyncPhysicsTickComponents).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar7->AsyncPhysicsTickComponents).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar7->AsyncPhysicsTickComponents).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar7->AsyncPhysicsTickComponents).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->AsyncPhysicsTickComponents).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->AsyncPhysicsTickComponents).Elements.field_0x34 = 0;
    (pFVar7->AsyncPhysicsTickComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar7->AsyncPhysicsTickComponents).HashSize = 0;
    *(undefined8 *)&(pFVar7->AsyncPhysicsTickActors).Elements = 0;
    *(undefined8 *)&(pFVar7->AsyncPhysicsTickActors).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar7->AsyncPhysicsTickActors).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar7->AsyncPhysicsTickActors).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar7->AsyncPhysicsTickActors).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar7->AsyncPhysicsTickActors).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar7->AsyncPhysicsTickActors).Elements.field_0x34 = 0;
    (pFVar7->AsyncPhysicsTickActors).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar7->AsyncPhysicsTickActors).HashSize = 0;
    (pFVar7->PendingCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->PendingCommands).ArrayNum = 0;
    (pFVar7->PendingCommands).ArrayMax = 0;
  }
  if ((pFVar7->_padding_ & 0x100) != 0) {
    this->bSolverHasFrozenGameThreadCallbacks = true;
  }
  if (pFVar7->_padding_ != 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1691896001394115511>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                       ,0x3b7,"SimCallbackObject->Solver == nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FAsyncPhysicsTickCallback *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar7->_padding_ = (longlong)this;
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &(this->MarshallingManager).MarshallingManagerLock;
  }
  local_18[0] = pFVar7;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pFVar2 = (this->MarshallingManager).ProducerData;
  pTVar9 = &pFVar2->SimCallbackObjectsToAdd;
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(pFVar2->SimCallbackObjectsToAdd).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FAsyncPhysicsTickCallback *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (pFVar2->SimCallbackObjectsToAdd).ArrayNum;
  piVar1 = &(pFVar2->SimCallbackObjectsToAdd).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar9->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  (pFVar2->SimCallbackObjectsToAdd).ArrayNum = iVar6 + 1;
  *(FAsyncPhysicsTickCallback **)(pFVar3 + (longlong)iVar6 * 8) = local_18[0];
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return pFVar7;
}

// RegisterSimCallbackObject_External @ 14831b230

void __thiscall
Chaos::FPhysicsSolverBase::RegisterSimCallbackObject_External
          (FPhysicsSolverBase *this,ISimCallbackObject *param_1)

{
  int *piVar1;
  FPushPhysicsData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPlatformRWLock *SRWLock;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ISimCallbackObject *local_18 [2];
  
  if (param_1->Solver != (FPhysicsSolverBase *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1691896001394115511>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                       ,0x3b7,"SimCallbackObject->Solver == nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_1->Solver = this;
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &(this->MarshallingManager).MarshallingManagerLock;
  }
  local_18[0] = param_1;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pFVar2 = (this->MarshallingManager).ProducerData;
  pTVar7 = &pFVar2->SimCallbackObjectsToAdd;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(pFVar2->SimCallbackObjectsToAdd).ArrayMax * 8)) {
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
  iVar6 = (pFVar2->SimCallbackObjectsToAdd).ArrayNum;
  piVar1 = &(pFVar2->SimCallbackObjectsToAdd).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (pFVar2->SimCallbackObjectsToAdd).ArrayNum = iVar6 + 1;
  *(ISimCallbackObject **)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// UnregisterAndFreeSimCallbackObject_External @ 148325f20

void __thiscall
Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
          (FPhysicsSolverBase *this,ISimCallbackObject *param_1)

{
  int *piVar1;
  FPushPhysicsData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPlatformRWLock *SRWLock;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ISimCallbackObject *local_18 [2];
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = &(this->MarshallingManager).MarshallingManagerLock;
  }
  local_18[0] = param_1;
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  local_18[0]->bPendingDelete_External = true;
  pFVar2 = (this->MarshallingManager).ProducerData;
  pTVar7 = &pFVar2->SimCallbackObjectsToRemove;
  pFVar3 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(pFVar2->SimCallbackObjectsToRemove).ArrayMax * 8)) {
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
  iVar6 = (pFVar2->SimCallbackObjectsToRemove).ArrayNum;
  piVar1 = &(pFVar2->SimCallbackObjectsToRemove).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (pFVar2->SimCallbackObjectsToRemove).ArrayNum = iVar6 + 1;
  *(ISimCallbackObject **)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

