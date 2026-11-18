// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// FScopedSceneLock_Chaos @ 1482503b0

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,FScopedSceneLock_Chaos *param_1)

{
  this->bHasLock = false;
  this->ThreadContext = External;
  this->Solver = param_1->Solver;
  this->LockType = param_1->LockType;
  this->ThreadContext = param_1->ThreadContext;
  this->bHasLock = param_1->bHasLock;
  param_1->bHasLock = false;
  param_1->Solver = (FPBDRigidsSolver *)0x0;
  return this;
}

// FScopedSceneLock_Chaos @ 1482503f0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,FSingleParticlePhysicsProxy **param_1,
          FSingleParticlePhysicsProxy **param_2,EPhysicsInterfaceScopedLockType param_3)

{
  FPBDRigidsSolver *pFVar1;
  FPBDRigidsSolver *pFVar2;
  FPBDRigidsSolver *pFVar3;
  FPBDRigidsSolver *pFVar4;
  
  pFVar4 = (FPBDRigidsSolver *)0x0;
  this->bHasLock = false;
  this->LockType = param_3;
  this->ThreadContext = External;
  pFVar1 = pFVar4;
  if (*param_1 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar1 = (FPBDRigidsSolver *)FChaosEngineInterface::GetCurrentScene(param_1);
  }
  pFVar2 = pFVar4;
  if (*param_2 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar2 = (FPBDRigidsSolver *)FChaosEngineInterface::GetCurrentScene(param_2);
  }
  pFVar3 = pFVar1;
  if (pFVar1 != pFVar2) {
    if ((pFVar1 != (FPBDRigidsSolver *)0x0) && (pFVar2 != (FPBDRigidsSolver *)0x0)) {
      if (2 < (byte)LogPhysics._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      }
      goto LAB_14825047f;
    }
    pFVar3 = pFVar2;
    if (pFVar1 != (FPBDRigidsSolver *)0x0) {
      pFVar3 = pFVar1;
    }
  }
  if (pFVar3 != (FPBDRigidsSolver *)0x0) {
    pFVar4 = (FPBDRigidsSolver *)pFVar3->_padding_;
  }
LAB_14825047f:
  this->Solver = pFVar4;
  LockScene(this);
  return this;
}

// FScopedSceneLock_Chaos @ 1482504b0

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,FSingleParticlePhysicsProxy **param_1,
          EPhysicsInterfaceScopedLockType param_2)

{
  this->bHasLock = false;
  this->LockType = param_2;
  this->ThreadContext = External;
  this->Solver = (FPBDRigidsSolver *)(*param_1)->_padding_;
  LockScene(this);
  return this;
}

// FScopedSceneLock_Chaos @ 1482504f0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,FPhysicsObject *param_1,FPhysicsObject *param_2,
          EPhysicsInterfaceScopedLockType param_3)

{
  FChaosScene *pFVar1;
  FChaosScene *pFVar2;
  FPBDRigidsSolver *pFVar3;
  FChaosScene *pFVar4;
  FPhysicsObject *local_res10;
  FPhysicsObject *local_res18 [2];
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = &local_res10;
  this->bHasLock = false;
  this->LockType = param_3;
  this->ThreadContext = External;
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar1 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_18);
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res18;
  pFVar2 = PhysicsObjectPhysicsCoreInterface::GetScene(&local_18);
  pFVar4 = pFVar1;
  if (pFVar1 == pFVar2) {
LAB_1482505b4:
    if (pFVar4 != (FChaosScene *)0x0) {
      pFVar3 = pFVar4->SceneSolver;
      goto LAB_148250590;
    }
  }
  else {
    if ((pFVar1 == (FChaosScene *)0x0) || (pFVar2 == (FChaosScene *)0x0)) {
      pFVar4 = pFVar2;
      if (pFVar1 != (FChaosScene *)0x0) {
        pFVar4 = pFVar1;
      }
      goto LAB_1482505b4;
    }
    if (2 < (byte)LogPhysics._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
    }
  }
  pFVar3 = (FPBDRigidsSolver *)0x0;
LAB_148250590:
  this->Solver = pFVar3;
  LockScene(this);
  return this;
}

// FScopedSceneLock_Chaos @ 1482505d0

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,FChaosScene *param_1,EPhysicsInterfaceScopedLockType param_2
          )

{
  FPBDRigidsSolver *pFVar1;
  
  this->bHasLock = false;
  if (param_1 == (FChaosScene *)0x0) {
    pFVar1 = (FPBDRigidsSolver *)0x0;
  }
  else {
    pFVar1 = param_1->SceneSolver;
  }
  this->Solver = pFVar1;
  this->LockType = param_2;
  this->ThreadContext = External;
  LockScene(this);
  return this;
}

// FScopedSceneLock_Chaos @ 148250610

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,USkeletalMeshComponent *param_1,
          EPhysicsInterfaceScopedLockType param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FPhysicsRwLock *this_00;
  FChaosScene *pFVar3;
  LPVOID pvVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FSingleParticlePhysicsProxy *local_res8;
  undefined1 local_res18 [8];
  code *local_28;
  undefined1 *local_20;
  
  this->bHasLock = false;
  this->LockType = param_2;
  this->ThreadContext = External;
  this->Solver = (FPBDRigidsSolver *)0x0;
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pFVar8 = (param_1->Bodies).AllocatorInstance.Data;
    iVar2 = (param_1->Bodies).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->Bodies).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar8 == pFVar1) goto LAB_14825069c;
      local_res8 = FBodyInstance::GetPhysicsActor(*(FBodyInstance **)pFVar8);
      if ((local_res8 != (FSingleParticlePhysicsProxy *)0x0) &&
         (pFVar3 = FChaosEngineInterface::GetCurrentScene(&local_res8), pFVar3 != (FChaosScene *)0x0
         )) break;
      pFVar8 = pFVar8 + 8;
    }
    this->Solver = pFVar3->SceneSolver;
  }
LAB_14825069c:
  if ((this->Solver != (FPBDRigidsSolver *)0x0) &&
     (this_00 = (FPhysicsRwLock *)this->Solver->_padding_, this_00 != (FPhysicsRwLock *)0x0)) {
    if (this->LockType == Read) {
      Chaos::FPhysicsRwLock::ReadLock(this_00);
    }
    else if (this->LockType == Write) {
      Chaos::Insights::BeginLockAcquireEvent(RWLockWriteLock);
      pvVar4 = TlsGetValue(this_00->TlsSlot);
      uVar7 = (int)((ulonglong)pvVar4 >> 0x20) + 1;
      TlsSetValue(this_00->TlsSlot,
                  (LPVOID)((ulonglong)uVar7 << 0x20 | (ulonglong)pvVar4 & 0xffffffff));
      if (uVar7 + (int)pvVar4 == 1) {
        AcquireSRWLockExclusive((PSRWLOCK)this_00);
      }
      puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_20 = local_res18;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar5);
      *(int *)&pFVar6[2].field_0x4 = *(int *)&pFVar6[2].field_0x4 + 1;
      Chaos::Insights::AcquiredLock();
    }
    this->bHasLock = true;
  }
  return this;
}

// FScopedSceneLock_Chaos @ 148250760

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,FSingleParticlePhysicsProxy **param_1,
          FSingleParticlePhysicsProxy **param_2,EPhysicsInterfaceScopedLockType param_3)

{
  FPBDRigidsSolver *pFVar1;
  FPBDRigidsSolver *pFVar2;
  FPBDRigidsSolver *pFVar3;
  FPBDRigidsSolver *pFVar4;
  
  pFVar4 = (FPBDRigidsSolver *)0x0;
  this->bHasLock = false;
  this->LockType = param_3;
  this->ThreadContext = External;
  pFVar1 = pFVar4;
  if ((param_1 != (FSingleParticlePhysicsProxy **)0x0) &&
     (*param_1 != (FSingleParticlePhysicsProxy *)0x0)) {
    pFVar1 = (FPBDRigidsSolver *)FChaosEngineInterface::GetCurrentScene(param_1);
  }
  pFVar2 = pFVar4;
  if ((param_2 != (FSingleParticlePhysicsProxy **)0x0) &&
     (*param_2 != (FSingleParticlePhysicsProxy *)0x0)) {
    pFVar2 = (FPBDRigidsSolver *)FChaosEngineInterface::GetCurrentScene(param_2);
  }
  pFVar3 = pFVar1;
  if (pFVar1 != pFVar2) {
    if ((pFVar1 != (FPBDRigidsSolver *)0x0) && (pFVar2 != (FPBDRigidsSolver *)0x0)) {
      if (2 < (byte)LogPhysics._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      }
      goto LAB_1482507fa;
    }
    pFVar3 = pFVar2;
    if (pFVar1 != (FPBDRigidsSolver *)0x0) {
      pFVar3 = pFVar1;
    }
  }
  if (pFVar3 != (FPBDRigidsSolver *)0x0) {
    pFVar4 = (FPBDRigidsSolver *)pFVar3->_padding_;
  }
LAB_1482507fa:
  this->Solver = pFVar4;
  LockScene(this);
  return this;
}

// FScopedSceneLock_Chaos @ 148250830

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,FSingleParticlePhysicsProxy **param_1,
          EPhysicsInterfaceScopedLockType param_2)

{
  FChaosScene *pFVar1;
  FPBDRigidsSolver *pFVar2;
  
  this->bHasLock = false;
  this->LockType = param_2;
  this->ThreadContext = External;
  if (*param_1 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar1 = FChaosEngineInterface::GetCurrentScene(param_1);
    if (pFVar1 != (FChaosScene *)0x0) {
      pFVar2 = pFVar1->SceneSolver;
      goto LAB_14825085f;
    }
  }
  pFVar2 = (FPBDRigidsSolver *)0x0;
LAB_14825085f:
  this->Solver = pFVar2;
  LockScene(this);
  return this;
}

// FScopedSceneLock_Chaos @ 148250880

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
          (FScopedSceneLock_Chaos *this,FPhysicsConstraintReference_Chaos *param_1,
          EPhysicsInterfaceScopedLockType param_2)

{
  FConstraintBase *pFVar1;
  int *piVar2;
  FPBDRigidsSolver *pFVar3;
  FPhysicsRwLock *this_00;
  bool bVar4;
  longlong lVar5;
  LPVOID pvVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  uint uVar9;
  undefined1 local_res18 [8];
  code *local_18;
  undefined1 *local_10;
  
  lVar5 = 0;
  this->bHasLock = false;
  this->Solver = (FPBDRigidsSolver *)0x0;
  this->LockType = param_2;
  this->ThreadContext = External;
  if (param_1 == (FPhysicsConstraintReference_Chaos *)0x0) {
    return this;
  }
  bVar4 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (((bVar4) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
     (pFVar1 != (FConstraintBase *)0x0)) {
    piVar2 = *(int **)&pFVar1[0x1a].DirtyFlags;
    if ((piVar2 != (int *)0x0) && (*piVar2 == 4)) {
      lVar5 = *(longlong *)(piVar2 + 2);
    }
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x10) != 0)) {
      pFVar3 = *(FPBDRigidsSolver **)(*(longlong *)(lVar5 + 0x10) + 0x40);
      this->Solver = pFVar3;
      if (pFVar3 == (FPBDRigidsSolver *)0x0) {
        return this;
      }
      this_00 = (FPhysicsRwLock *)pFVar3->_padding_;
      if (this_00 == (FPhysicsRwLock *)0x0) {
        return this;
      }
      if (this->LockType == Read) {
        Chaos::FPhysicsRwLock::ReadLock(this_00);
      }
      else if (this->LockType == Write) {
        Chaos::Insights::BeginLockAcquireEvent(RWLockWriteLock);
        pvVar6 = TlsGetValue(this_00->TlsSlot);
        uVar9 = (int)((ulonglong)pvVar6 >> 0x20) + 1;
        TlsSetValue(this_00->TlsSlot,
                    (LPVOID)((ulonglong)uVar9 << 0x20 | (ulonglong)pvVar6 & 0xffffffff));
        if (uVar9 + (int)pvVar6 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)this_00);
        }
        puVar7 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
        local_10 = local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar8 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar7);
        *(int *)&pFVar8[2].field_0x4 = *(int *)&pFVar8[2].field_0x4 + 1;
        Chaos::Insights::AcquiredLock();
        this->bHasLock = true;
        return this;
      }
      this->bHasLock = true;
      return this;
    }
  }
  this->Solver = (FPBDRigidsSolver *)0x0;
  return this;
}

// ~FScopedSceneLock_Chaos @ 148253140

void __thiscall FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(FScopedSceneLock_Chaos *this)

{
  FPhysicsRwLock *this_00;
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  if (((this->bHasLock != false) && (this->Solver != (FPBDRigidsSolver *)0x0)) &&
     (this_00 = (FPhysicsRwLock *)this->Solver->_padding_, this_00 != (FPhysicsRwLock *)0x0)) {
    if (this->LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this_00);
    }
    else if (this->LockType == Write) {
      pvVar3 = TlsGetValue(this_00->TlsSlot);
      uVar6 = (int)((ulonglong)pvVar3 >> 0x20) - 1;
      TlsSetValue(this_00->TlsSlot,
                  (LPVOID)((ulonglong)uVar6 << 0x20 | (ulonglong)pvVar3 & 0xffffffff));
      if (uVar6 + (int)pvVar3 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this_00);
      }
      puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_10 = local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar5 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
      if ((*(int *)&pFVar5[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int *)&pFVar5[2].field_0x4 = *(int *)&pFVar5[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      this->bHasLock = false;
      return;
    }
    this->bHasLock = false;
  }
  return;
}

// operator= @ 1482544d0

FScopedSceneLock_Chaos * __thiscall
FScopedSceneLock_Chaos::operator=(FScopedSceneLock_Chaos *this,FScopedSceneLock_Chaos *param_1)

{
  this->Solver = param_1->Solver;
  this->LockType = param_1->LockType;
  this->ThreadContext = param_1->ThreadContext;
  this->bHasLock = param_1->bHasLock;
  param_1->bHasLock = false;
  param_1->Solver = (FPBDRigidsSolver *)0x0;
  return this;
}

// GetSceneForActor @ 14828d5a0

FChaosScene * __thiscall
FScopedSceneLock_Chaos::GetSceneForActor
          (FScopedSceneLock_Chaos *this,FSingleParticlePhysicsProxy **param_1)

{
  FChaosScene *pFVar1;
  
  if (*param_1 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar1 = FChaosEngineInterface::GetCurrentScene(param_1);
    return pFVar1;
  }
  return (FChaosScene *)0x0;
}

// GetSceneForActor @ 14828d5c0

FChaosScene * __thiscall
FScopedSceneLock_Chaos::GetSceneForActor
          (FScopedSceneLock_Chaos *this,FPhysicsConstraintReference_Chaos *param_1)

{
  FConstraintBase *pFVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  
  if (param_1 != (FPhysicsConstraintReference_Chaos *)0x0) {
    bVar3 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      piVar2 = *(int **)&pFVar1[0x1a].DirtyFlags;
      if ((piVar2 == (int *)0x0) || (*piVar2 != 4)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(piVar2 + 2);
      }
      if (lVar4 != 0) {
        return *(FChaosScene **)(lVar4 + 0x10);
      }
    }
  }
  return (FChaosScene *)0x0;
}

// GetSolverLock @ 14828e1d0

FPhysicsRwLock * __thiscall
FScopedSceneLock_Chaos::GetSolverLock(FScopedSceneLock_Chaos *this,FPBDRigidsSolver *param_1)

{
  if (param_1 == (FPBDRigidsSolver *)0x0) {
    return (FPhysicsRwLock *)0x0;
  }
  return (FPhysicsRwLock *)param_1->_padding_;
}

// LockScene @ 148295d20

void __thiscall FScopedSceneLock_Chaos::LockScene(FScopedSceneLock_Chaos *this)

{
  FPhysicsRwLock *this_00;
  LPVOID pvVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  if ((this->Solver != (FPBDRigidsSolver *)0x0) &&
     (this_00 = (FPhysicsRwLock *)this->Solver->_padding_, this_00 != (FPhysicsRwLock *)0x0)) {
    if (this->LockType == Read) {
      Chaos::FPhysicsRwLock::ReadLock(this_00);
    }
    else if (this->LockType == Write) {
      Chaos::Insights::BeginLockAcquireEvent(RWLockWriteLock);
      pvVar1 = TlsGetValue(this_00->TlsSlot);
      uVar4 = (int)((ulonglong)pvVar1 >> 0x20) + 1;
      TlsSetValue(this_00->TlsSlot,
                  (LPVOID)((ulonglong)uVar4 << 0x20 | (ulonglong)pvVar1 & 0xffffffff));
      if (uVar4 + (int)pvVar1 == 1) {
        AcquireSRWLockExclusive((PSRWLOCK)this_00);
      }
      puVar2 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_10 = local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar3 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
      *(int *)&pFVar3[2].field_0x4 = *(int *)&pFVar3[2].field_0x4 + 1;
      Chaos::Insights::AcquiredLock();
      this->bHasLock = true;
      return;
    }
    this->bHasLock = true;
  }
  return;
}

// LockSceneForConstraint @ 148295e20

void __thiscall
FScopedSceneLock_Chaos::LockSceneForConstraint
          (FScopedSceneLock_Chaos *this,FPhysicsConstraintReference_Chaos *param_1)

{
  FConstraintBase *pFVar1;
  int *piVar2;
  bool bVar3;
  FPBDRigidsSolver *pFVar4;
  FPBDRigidsSolver *pFVar5;
  
  if (param_1 != (FPhysicsConstraintReference_Chaos *)0x0) {
    bVar3 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
    pFVar4 = (FPBDRigidsSolver *)0x0;
    pFVar5 = pFVar4;
    if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
       (pFVar1 != (FConstraintBase *)0x0)) {
      piVar2 = *(int **)&pFVar1[0x1a].DirtyFlags;
      if ((piVar2 != (int *)0x0) && (*piVar2 == 4)) {
        pFVar4 = *(FPBDRigidsSolver **)(piVar2 + 2);
      }
      pFVar5 = (FPBDRigidsSolver *)0x0;
      if ((pFVar4 != (FPBDRigidsSolver *)0x0) && (pFVar4->_padding_ != 0)) {
        pFVar5 = *(FPBDRigidsSolver **)(pFVar4->_padding_ + 0x40);
      }
    }
    this->Solver = pFVar5;
  }
  LockScene(this);
  return;
}

// Release @ 1482a0c90

void __thiscall FScopedSceneLock_Chaos::Release(FScopedSceneLock_Chaos *this)

{
  FPhysicsRwLock *this_00;
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  if (((this->bHasLock != false) && (this->Solver != (FPBDRigidsSolver *)0x0)) &&
     (this_00 = (FPhysicsRwLock *)this->Solver->_padding_, this_00 != (FPhysicsRwLock *)0x0)) {
    if (this->LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this_00);
    }
    else if (this->LockType == Write) {
      pvVar3 = TlsGetValue(this_00->TlsSlot);
      uVar6 = (int)((ulonglong)pvVar3 >> 0x20) - 1;
      TlsSetValue(this_00->TlsSlot,
                  (LPVOID)((ulonglong)uVar6 << 0x20 | (ulonglong)pvVar3 & 0xffffffff));
      if (uVar6 + (int)pvVar3 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this_00);
      }
      puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_10 = local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar5 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
      if ((*(int *)&pFVar5[2].field_0x4 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GameThreadContext > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                             ,200,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int *)&pFVar5[2].field_0x4 = *(int *)&pFVar5[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      this->bHasLock = false;
      return;
    }
    this->bHasLock = false;
  }
  return;
}

// UnlockScene @ 1482b59a0

void __thiscall FScopedSceneLock_Chaos::UnlockScene(FScopedSceneLock_Chaos *this)

{
  FPhysicsRwLock *this_00;
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  if ((this->Solver != (FPBDRigidsSolver *)0x0) &&
     (this_00 = (FPhysicsRwLock *)this->Solver->_padding_, this_00 != (FPhysicsRwLock *)0x0)) {
    if (this->LockType == Read) {
      Chaos::FPhysicsRwLock::ReadUnlock(this_00);
    }
    else if (this->LockType == Write) {
      pvVar3 = TlsGetValue(this_00->TlsSlot);
      uVar6 = (int)((ulonglong)pvVar3 >> 0x20) - 1;
      TlsSetValue(this_00->TlsSlot,
                  (LPVOID)((ulonglong)uVar6 << 0x20 | (ulonglong)pvVar3 & 0xffffffff));
      if (uVar6 + (int)pvVar3 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)this_00);
      }
      puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_10 = local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar5 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
      if (*(int *)&pFVar5[2].field_0x4 < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("GameThreadContext > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                           ,200,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *(int *)&pFVar5[2].field_0x4 = *(int *)&pFVar5[2].field_0x4 + -1;
      Chaos::Insights::EndLockAcquireEvent();
      this->bHasLock = false;
      return;
    }
    this->bHasLock = false;
  }
  return;
}

