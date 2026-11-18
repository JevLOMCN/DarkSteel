// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Draw @ 143a622b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDImplicitObject::Draw
          (TRefCountPtr<Chaos::FImplicitObject_const_> *param_1,TRigidTransform<double,3> *param_2,
          FColor *param_3,float param_4,float param_5)

{
  longlong *plVar1;
  FColor_u_0 FVar2;
  FImplicitObject *pFVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  longlong lVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar19;
  code **ppcVar20;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar21;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  code *local_e0;
  undefined1 *local_d8;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
    puVar17 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_d8 = local_e8;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar18 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e0,puVar17);
    this = pFVar18[2];
    pTVar19 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar18 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar19 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar19->Object;
    }
    pTVar21 = (pTVar19->SharedReferenceCount).ReferenceController;
    if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  else {
    pTVar21 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  pFVar3 = param_1->Reference;
  if (pFVar3 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    UNLOCK();
  }
  pcVar4 = *(code **)param_2;
  pcVar5 = *(code **)&param_2->field_0x8;
  pcVar6 = *(code **)&param_2->field_0x10;
  pcVar7 = *(code **)&param_2->field_0x18;
  pcVar8 = *(code **)&param_2->field_0x20;
  pcVar9 = *(code **)&param_2->field_0x28;
  pcVar10 = *(code **)&param_2->field_0x30;
  pcVar11 = *(code **)&param_2->field_0x38;
  pcVar12 = *(code **)&param_2->field_0x40;
  pcVar13 = *(code **)&param_2->field_0x48;
  pcVar14 = *(code **)&param_2->field_0x50;
  pcVar15 = *(code **)&param_2->field_0x58;
  FVar2 = param_3->field0_0x0;
  local_c8[0] = (code *)0x0;
  local_a0 = FMemory::Malloc(0x90,0x10);
  *local_a0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FChaosDDImplicitObject::Draw'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_a0[2] = (code *)pFVar3;
  if (pFVar3 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    UNLOCK();
  }
  local_a0[4] = pcVar4;
  local_a0[5] = pcVar5;
  ((FColor_u_0 *)(local_a0 + 0x10))->_s_0 = (FColor_u_0_s_0)FVar2;
  local_a0[6] = pcVar6;
  local_a0[7] = pcVar7;
  local_a0[8] = pcVar8;
  local_a0[9] = pcVar9;
  local_a0[10] = pcVar10;
  local_a0[0xb] = pcVar11;
  local_a0[0xc] = pcVar12;
  local_a0[0xd] = pcVar13;
  local_a0[0xe] = pcVar14;
  local_a0[0xf] = pcVar15;
  *(float *)((longlong)local_a0 + 0x84) = param_4;
  *(float *)(local_a0 + 0x11) = param_5;
  if (local_a0 + 2 != (code **)0x0) {
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDImplicitObject::Draw'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  if (this != (FTlsAutoCleanup)0x0) {
    ChaosDD::Private::FChaosDDFrame::EnqueueCommand
              ((FChaosDDFrame *)this,
               (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_c8);
  }
  if (local_c8[0] != (code *)0x0) {
    ppcVar20 = local_c8 + 2;
    if (local_a0 != (code **)0x0) {
      ppcVar20 = local_a0;
    }
    (**(code **)(*ppcVar20 + 0x10))();
  }
  if (pFVar3 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar3->_padding_;
    lVar16 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  return;
}

