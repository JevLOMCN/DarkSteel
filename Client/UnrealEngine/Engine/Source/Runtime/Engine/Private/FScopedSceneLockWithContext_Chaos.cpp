// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FScopedSceneLockWithContext_Chaos @ 148250140

FScopedSceneLockWithContext_Chaos * __thiscall
FScopedSceneLockWithContext_Chaos::FScopedSceneLockWithContext_Chaos
          (FScopedSceneLockWithContext_Chaos *this,FSingleParticlePhysicsProxy **param_1,
          EPhysicsInterfaceScopedLockType param_2,EPhysicsInterfaceScopedThreadContext param_3,
          EPhysicsInterfaceScopedTransactionMode param_4)

{
  longlong lVar1;
  FPhysicsRwLock *this_00;
  LPVOID pvVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  uint uVar5;
  undefined1 local_res18 [8];
  code *local_18;
  undefined1 *local_10;
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined1 *)this = 0;
  this->field_0x10 = param_2;
  this->field_0x11 = param_3;
  lVar1 = (*param_1)->_padding_;
  *(longlong *)&this->field_0x8 = lVar1;
  if ((lVar1 != 0) &&
     (this_00 = *(FPhysicsRwLock **)(lVar1 + 0x2a0), this_00 != (FPhysicsRwLock *)0x0)) {
    if (param_2 == Read) {
      Chaos::FPhysicsRwLock::ReadLock(this_00);
    }
    else if (param_2 == Write) {
      Chaos::Insights::BeginLockAcquireEvent(RWLockWriteLock);
      pvVar2 = TlsGetValue(this_00->TlsSlot);
      uVar5 = (int)((ulonglong)pvVar2 >> 0x20) + 1;
      TlsSetValue(this_00->TlsSlot,
                  (LPVOID)((ulonglong)uVar5 << 0x20 | (ulonglong)pvVar2 & 0xffffffff));
      if (uVar5 + (int)pvVar2 == 1) {
        AcquireSRWLockExclusive((PSRWLOCK)this_00);
      }
      puVar3 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
      local_10 = local_res18;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar4 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
      *(int *)&pFVar4[2].field_0x4 = *(int *)&pFVar4[2].field_0x4 + 1;
      Chaos::Insights::AcquiredLock();
      *(undefined1 *)this = 1;
      return this;
    }
    *(undefined1 *)this = 1;
  }
  return this;
}

// FScopedSceneLockWithContext_Chaos @ 148250250

FScopedSceneLockWithContext_Chaos * __thiscall
FScopedSceneLockWithContext_Chaos::FScopedSceneLockWithContext_Chaos
          (FScopedSceneLockWithContext_Chaos *this,FPhysicsConstraintReference_Chaos *param_1,
          EPhysicsInterfaceScopedLockType param_2,EPhysicsInterfaceScopedThreadContext param_3,
          EPhysicsInterfaceScopedTransactionMode param_4)

{
  FConstraintBase *pFVar1;
  int *piVar2;
  FPhysicsRwLock *this_00;
  bool bVar3;
  longlong lVar4;
  LPVOID pvVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  uint uVar8;
  undefined1 local_res18 [8];
  code *local_18;
  undefined1 *local_10;
  
  lVar4 = 0;
  *(undefined1 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  this->field_0x10 = param_2;
  this->field_0x11 = param_3;
  if (param_1 == (FPhysicsConstraintReference_Chaos *)0x0) {
    return this;
  }
  bVar3 = FPhysicsConstraintReference_Chaos::IsValid(param_1);
  if (((bVar3) && (pFVar1 = param_1->Constraint, pFVar1->Type == JointConstraintType)) &&
     (pFVar1 != (FConstraintBase *)0x0)) {
    piVar2 = *(int **)&pFVar1[0x1a].DirtyFlags;
    if ((piVar2 != (int *)0x0) && (*piVar2 == 4)) {
      lVar4 = *(longlong *)(piVar2 + 2);
    }
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x40);
      *(longlong *)&this->field_0x8 = lVar4;
      if (lVar4 == 0) {
        return this;
      }
      this_00 = *(FPhysicsRwLock **)(lVar4 + 0x2a0);
      if (this_00 == (FPhysicsRwLock *)0x0) {
        return this;
      }
      if (this->field_0x10 == '\0') {
        Chaos::FPhysicsRwLock::ReadLock(this_00);
      }
      else if (this->field_0x10 == '\x01') {
        Chaos::Insights::BeginLockAcquireEvent(RWLockWriteLock);
        pvVar5 = TlsGetValue(this_00->TlsSlot);
        uVar8 = (int)((ulonglong)pvVar5 >> 0x20) + 1;
        TlsSetValue(this_00->TlsSlot,
                    (LPVOID)((ulonglong)uVar8 << 0x20 | (ulonglong)pvVar5 & 0xffffffff));
        if (uVar8 + (int)pvVar5 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)this_00);
        }
        puVar6 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
        local_10 = local_res18;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar7 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar6);
        *(int *)&pFVar7[2].field_0x4 = *(int *)&pFVar7[2].field_0x4 + 1;
        Chaos::Insights::AcquiredLock();
        *(undefined1 *)this = 1;
        return this;
      }
      *(undefined1 *)this = 1;
      return this;
    }
  }
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

