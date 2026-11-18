// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// DrawArrow @ 143a62900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDPrimitives::DrawArrow
          (TVector<double> *param_1,TVector<double> *param_2,float param_3,FColor *param_4,
          float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar10;
  code **ppcVar11;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_168 [32];
  undefined1 local_148 [8];
  code *local_140;
  undefined1 *local_138;
  code *local_130;
  code *pcStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  FColor_u_0 FStack_fc;
  float fStack_f8;
  float fStack_f4;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  undefined1 local_c0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_d8._s_0.X = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar19 = SUB84(dVar1,0);
  uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar13 = SUB84(local_d8._s_0.X,0);
  uVar14 = (undefined4)((ulonglong)local_d8._s_0.X >> 0x20);
  dVar2 = *(double *)&param_2->field0_0x0;
  if (dVar2 <= local_d8._s_0.X) {
    uVar13 = SUB84(dVar2,0);
    uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  uVar17 = SUB84(dVar2,0);
  uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if (local_d8._s_0.X <= dVar3) {
    local_d8._s_0.X = dVar3;
  }
  local_c0 = 1;
  dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  uVar15 = uVar17;
  uVar16 = uVar18;
  if (dVar3 <= dVar2) {
    uVar15 = SUB84(dVar3,0);
    uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (dVar2 <= dVar3) {
    uVar17 = SUB84(dVar3,0);
    uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  local_f0._s_0.X = (double)CONCAT44(uVar14,uVar13);
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar13 = uVar19;
  uVar14 = uVar20;
  if (dVar2 <= dVar1) {
    uVar13 = SUB84(dVar2,0);
    uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  if (dVar1 <= dVar2) {
    uVar19 = SUB84(dVar2,0);
    uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  local_f0._s_0.Y = (double)CONCAT44(uVar16,uVar15);
  local_d8._s_0.Y = (double)CONCAT44(uVar18,uVar17);
  local_f0._s_0.Z = (double)CONCAT44(uVar14,uVar13);
  local_d8._s_0.Z = (double)CONCAT44(uVar20,uVar19);
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
    puVar8 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_138 = local_148;
    local_140 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar9 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_140,puVar8);
    this = pFVar9[2];
    pTVar10 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar9 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar10 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar10->Object;
    }
    pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  else {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  pcVar5 = (code *)(param_1->field0_0x0)._s_0.X;
  pcVar6 = (code *)(param_1->field0_0x0)._s_0.Y;
  FStack_fc._s_0 = *(FColor_u_0_s_0 *)&param_4->field0_0x0;
  local_118 = *(undefined8 *)&param_2->field0_0x0;
  uStack_110 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  uVar13 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar14 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar19 = (undefined4)uVar4;
  uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_b8[0] = (code *)0x0;
  local_130 = pcVar5;
  pcStack_128 = pcVar6;
  local_90 = FMemory::Malloc(0x48,8);
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawArrow'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_90[1] = pcVar5;
  local_90[2] = pcVar6;
  *(undefined4 *)(local_90 + 3) = uVar13;
  *(undefined4 *)((longlong)local_90 + 0x1c) = uVar14;
  *(undefined4 *)(local_90 + 4) = (undefined4)local_118;
  *(undefined4 *)((longlong)local_90 + 0x24) = local_118._4_4_;
  *(undefined4 *)(local_90 + 5) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)local_90 + 0x2c) = uStack_110._4_4_;
  *(undefined4 *)(local_90 + 6) = uVar19;
  *(undefined4 *)((longlong)local_90 + 0x34) = uVar20;
  *(float *)(local_90 + 7) = param_3;
  ((FColor_u_0 *)((longlong)local_90 + 0x3c))->_s_0 = (FColor_u_0_s_0)FStack_fc;
  *(float *)(local_90 + 8) = param_5;
  *(float *)((longlong)local_90 + 0x44) = param_6;
  if (local_90 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawArrow'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  fStack_f8 = param_5;
  fStack_f4 = param_6;
  uStack_120 = uVar13;
  uStack_11c = uVar14;
  uStack_108 = uVar19;
  uStack_104 = uVar20;
  local_100 = param_3;
  if (this != (FTlsAutoCleanup)0x0) {
    dVar1 = *(double *)((longlong)this + 0x58);
    if ((dVar1 <= 0.0) ||
       (dVar2 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_d8._s_0,
                           (TVector<double> *)((longlong)this + 0x40)), dVar2 < dVar1 * dVar1)) {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar7 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,1);
      if (bVar7) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_b8);
      }
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar11 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar11 = local_90;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// DrawBox @ 143a62c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::FChaosDDPrimitives::DrawBox
          (TVector<double> *param_1,TQuat<double> *param_2,TVector<double> *param_3,FColor *param_4,
          float param_5,float param_6)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  bool bVar13;
  TMatrix<double> *pTVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar17;
  code **ppcVar18;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8 [8];
  code *local_2d0;
  undefined1 *local_2c8;
  code *local_2b8;
  code *pcStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  code *local_298;
  code *pcStack_290;
  code *local_288;
  code *pcStack_280;
  code *local_278;
  code *pcStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  TTransform<double> local_248;
  code *local_1e8 [2];
  code *local_1d8 [3];
  code **local_1c0;
  TVector<double>_u_0 local_1b8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined1 local_188;
  TBox<double> local_180;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  local_1a0 = (param_3->field0_0x0)._s_0.X;
  local_198 = (param_3->field0_0x0)._s_0.Y;
  local_190 = (param_3->field0_0x0)._s_0.Z;
  local_1b8._s_0.X = local_1a0 * __real_bfe0000000000000;
  local_188 = 1;
  local_1b8._s_0.Z = local_190 * __real_bfe0000000000000;
  local_1b8._s_0.Y = local_198 * __real_bfe0000000000000;
  local_248.Translation.XY.m128d_f64[0] = (param_1->field0_0x0)._s_0.X;
  local_248.Translation.XY.m128d_f64[1] = (param_1->field0_0x0)._s_0.Y;
  local_248.Rotation.ZW.m128d_f64[0] = param_2->Z;
  local_248.Rotation.ZW.m128d_f64[1] = param_2->W;
  local_1a0 = local_1a0 * __real_3fe0000000000000;
  local_198 = local_198 * __real_3fe0000000000000;
  local_190 = local_190 * __real_3fe0000000000000;
  local_248.Rotation.XY.m128d_f64[0] = param_2->X;
  local_248.Rotation.XY.m128d_f64[1] = param_2->Y;
  local_248.Translation.ZW.m128d_f64[0] = (param_1->field0_0x0)._s_0.Z;
  local_248.Translation.ZW.m128d_f64[1] = 0.0;
  local_248.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_248.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_248.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_248.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  pTVar14 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_248,&local_148);
  UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_1b8._s_0,&local_180,pTVar14);
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled == false) {
    pTVar19 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  else {
    puVar15 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_2c8 = local_2d8;
    local_2d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar16 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar15);
    this = pFVar16[2];
    pTVar17 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar16 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar17 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar17->Object;
    }
    pTVar19 = (pTVar17->SharedReferenceCount).ReferenceController;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  pcVar2 = (code *)(param_1->field0_0x0)._s_0.X;
  pcVar6 = (code *)(param_1->field0_0x0)._s_0.Y;
  pcVar7 = (code *)(param_3->field0_0x0)._s_0.X;
  pcVar8 = (code *)(param_3->field0_0x0)._s_0.Y;
  local_268._8_4_ = (param_4->field0_0x0).Bits;
  pcVar9 = (code *)param_2->X;
  pcVar10 = (code *)param_2->Y;
  pcVar11 = (code *)param_2->Z;
  pcVar12 = (code *)param_2->W;
  uVar4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  local_1e8[0] = (code *)0x0;
  local_2b8 = pcVar2;
  pcStack_2b0 = pcVar6;
  local_298 = pcVar9;
  pcStack_290 = pcVar10;
  local_288 = pcVar11;
  pcStack_280 = pcVar12;
  local_278 = pcVar7;
  pcStack_270 = pcVar8;
  local_1c0 = FMemory::Malloc(0x80,0x10);
  local_1c0[2] = pcVar2;
  local_1c0[3] = pcVar6;
  *local_1c0 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawBox'::`2'::<lambda_1>,0,1>
                        ::_vftable_;
  *(undefined4 *)(local_1c0 + 4) = uVar4;
  *(undefined4 *)((longlong)local_1c0 + 0x24) = uVar5;
  *(undefined4 *)(local_1c0 + 5) = uStack_2a0;
  *(undefined4 *)((longlong)local_1c0 + 0x2c) = uStack_29c;
  local_1c0[6] = pcVar9;
  local_1c0[7] = pcVar10;
  local_1c0[8] = pcVar11;
  local_1c0[9] = pcVar12;
  local_1c0[10] = pcVar7;
  local_1c0[0xb] = pcVar8;
  local_268._0_8_ = dVar1;
  local_268._12_4_ = param_5;
  *(undefined1 (*) [16])(local_1c0 + 0xc) = local_268;
  auVar3._4_8_ = local_268._8_8_;
  auVar3._0_4_ = local_258._4_4_;
  auVar21._0_8_ = auVar3._0_8_ << 0x20;
  auVar21._8_4_ = local_258._8_4_;
  auVar21._12_4_ = local_258._12_4_;
  local_258._4_12_ = auVar21._4_12_;
  local_258._0_4_ = param_6;
  *(undefined1 (*) [16])(local_1c0 + 0xe) = local_258;
  if (local_1c0 != (code **)0xfffffffffffffff0) {
    local_1e8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawBox'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                   ::Call;
  }
  local_2a8 = uVar4;
  uStack_2a4 = uVar5;
  if (this != (FTlsAutoCleanup)0x0) {
    dVar1 = *(double *)((longlong)this + 0x58);
    if ((dVar1 <= 0.0) ||
       (dVar20 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                           (&local_180.Min,&local_180.Max,(TVector<double> *)((longlong)this + 0x40)
                           ), dVar20 < dVar1 * dVar1)) {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar13 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,0xc);
      if (bVar13) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_1e8);
      }
    }
  }
  if (local_1e8[0] != (code *)0x0) {
    ppcVar18 = local_1e8 + 2;
    if (local_1c0 != (code **)0x0) {
      ppcVar18 = local_1c0;
    }
    (**(code **)(*ppcVar18 + 0x10))();
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  return;
}

// DrawCapsule @ 143a63000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDPrimitives::DrawCapsule
          (TVector<double> *param_1,TQuat<double> *param_2,float param_3,float param_4,
          FColor *param_5,float param_6,float param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar12;
  code **ppcVar13;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [8];
  code *local_1c0;
  undefined1 *local_1b8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  undefined1 local_168;
  TVector<double>_u_0 local_158;
  code *local_138;
  code *pcStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  float local_f8;
  float fStack_f4;
  FColor_u_0 FStack_f0;
  float fStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_158._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_158._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_158._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (param_2,(TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_158._s_0);
  dVar18 = (param_1->field0_0x0)._s_0.X;
  dVar17 = (param_1->field0_0x0)._s_0.Y;
  dVar15 = (param_1->field0_0x0)._s_0.Z;
  dVar16 = (double)param_3;
  local_168 = 1;
  local_180._s_0.X = dVar18 + dVar16 * local_1b0._s_0.X;
  dVar18 = dVar18 - dVar16 * local_1b0._s_0.X;
  local_180._s_0.Y = dVar17 + dVar16 * local_1b0._s_0.Y;
  dVar17 = dVar17 - dVar16 * local_1b0._s_0.Y;
  local_180._s_0.Z = dVar15 + dVar16 * local_1b0._s_0.Z;
  dVar15 = dVar15 - dVar16 * local_1b0._s_0.Z;
  local_198._s_0.X = local_180._s_0.X;
  if (dVar18 <= local_180._s_0.X) {
    local_198._s_0.X = dVar18;
  }
  if (local_180._s_0.X <= dVar18) {
    local_180._s_0.X = dVar18;
  }
  local_198._s_0.Y = local_180._s_0.Y;
  if (dVar17 <= local_180._s_0.Y) {
    local_198._s_0.Y = dVar17;
  }
  if (local_180._s_0.Y <= dVar17) {
    local_180._s_0.Y = dVar17;
  }
  local_198._s_0.Z = local_180._s_0.Z;
  if (dVar15 <= local_180._s_0.Z) {
    local_198._s_0.Z = dVar15;
  }
  if (local_180._s_0.Z <= dVar15) {
    local_180._s_0.Z = dVar15;
  }
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled == false) {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  else {
    puVar10 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_1b8 = local_1c8;
    local_1c0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar11 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1c0,puVar10);
    this = pFVar11[2];
    pTVar12 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar11 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar12 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar12->Object;
    }
    pTVar14 = (pTVar12->SharedReferenceCount).ReferenceController;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  pcVar1 = (code *)(param_1->field0_0x0)._s_0.X;
  pcVar4 = (code *)(param_1->field0_0x0)._s_0.Y;
  local_d8[0] = (code *)0x0;
  pcVar5 = (code *)param_2->X;
  pcVar6 = (code *)param_2->Y;
  FStack_f0._s_0 = *(FColor_u_0_s_0 *)&param_5->field0_0x0;
  pcVar7 = (code *)param_2->Z;
  pcVar8 = (code *)param_2->W;
  uVar2 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar3 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  local_138 = pcVar1;
  pcStack_130 = pcVar4;
  local_118 = pcVar5;
  pcStack_110 = pcVar6;
  local_108 = pcVar7;
  pcStack_100 = pcVar8;
  local_b0 = FMemory::Malloc(0x70,0x10);
  local_b0[2] = pcVar1;
  local_b0[3] = pcVar4;
  *local_b0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawCapsule'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(undefined4 *)(local_b0 + 4) = uVar2;
  *(undefined4 *)((longlong)local_b0 + 0x24) = uVar3;
  *(undefined4 *)(local_b0 + 5) = uStack_120;
  *(undefined4 *)((longlong)local_b0 + 0x2c) = uStack_11c;
  local_b0[6] = pcVar5;
  local_b0[7] = pcVar6;
  local_b0[8] = pcVar7;
  local_b0[9] = pcVar8;
  *(float *)(local_b0 + 10) = param_3;
  *(float *)((longlong)local_b0 + 0x54) = param_4;
  ((FColor_u_0 *)(local_b0 + 0xb))->_s_0 = (FColor_u_0_s_0)FStack_f0;
  *(float *)((longlong)local_b0 + 0x5c) = param_6;
  fStack_ec = param_6;
  *(float *)(local_b0 + 0xc) = param_7;
  *(undefined4 *)((longlong)local_b0 + 100) = uStack_e4;
  *(undefined4 *)(local_b0 + 0xd) = uStack_e0;
  *(undefined4 *)((longlong)local_b0 + 0x6c) = uStack_dc;
  if (local_b0 != (code **)0xfffffffffffffff0) {
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawCapsule'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  local_e8 = param_7;
  local_128 = uVar2;
  uStack_124 = uVar3;
  local_f8 = param_3;
  fStack_f4 = param_4;
  if (this != (FTlsAutoCleanup)0x0) {
    dVar18 = *(double *)((longlong)this + 0x58);
    if ((dVar18 <= 0.0) ||
       (dVar17 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                           ((TVector<double> *)&local_198._s_0,(TVector<double> *)&local_180._s_0,
                            (TVector<double> *)((longlong)this + 0x40)), dVar17 < dVar18 * dVar18))
    {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar9 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,0x10);
      if (bVar9) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_d8);
      }
    }
  }
  if (local_d8[0] != (code *)0x0) {
    ppcVar13 = local_d8 + 2;
    if (local_b0 != (code **)0x0) {
      ppcVar13 = local_b0;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

// DrawCircle @ 143a633c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDPrimitives::DrawCircle
          (TVector<double> *param_1,TMatrix<double> *param_2,float param_3,FColor *param_4,
          float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar9;
  code **ppcVar10;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  code *local_170;
  undefined1 *local_168;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  undefined1 local_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  float local_88;
  uint uStack_84;
  float fStack_80;
  float fStack_7c;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (double)param_3;
  local_130 = 1;
  local_160._s_0.X = dVar1 - dVar5;
  local_160._s_0.Y = dVar2 - dVar5;
  local_148._s_0.X = dVar1 + dVar5;
  local_148._s_0.Y = dVar2 + dVar5;
  local_160._s_0.Z = dVar3 - dVar5;
  local_148._s_0.Z = dVar3 + dVar5;
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
    puVar7 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_168 = local_178;
    local_170 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_170,puVar7);
    this = pFVar8[2];
    pTVar9 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar8 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar9 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar9->Object;
    }
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  else {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  local_128 = (code *)(param_1->field0_0x0)._s_0.X;
  pcStack_120 = (code *)(param_1->field0_0x0)._s_0.Y;
  uStack_84 = (param_4->field0_0x0).Bits;
  local_118 = (code *)(param_1->field0_0x0)._s_0.Z;
  local_108 = (code *)param_2->M[0][0];
  pcStack_100 = (code *)param_2->M[0][1];
  local_f8 = (code *)param_2->M[0][2];
  pcStack_f0 = (code *)param_2->M[0][3];
  local_e8 = (code *)param_2->M[1][0];
  pcStack_e0 = (code *)param_2->M[1][1];
  local_d8 = (code *)param_2->M[1][2];
  pcStack_d0 = (code *)param_2->M[1][3];
  local_c8 = (code *)param_2->M[2][0];
  pcStack_c0 = (code *)param_2->M[2][1];
  local_b8 = (code *)param_2->M[2][2];
  pcStack_b0 = (code *)param_2->M[2][3];
  local_a8 = (code *)param_2->M[3][0];
  pcStack_a0 = (code *)param_2->M[3][1];
  local_98 = (code *)param_2->M[3][2];
  pcStack_90 = (code *)param_2->M[3][3];
  fStack_80 = param_5;
  fStack_7c = param_6;
  local_78[0] = (code *)0x0;
  local_88 = param_3;
  local_50 = FMemory::Malloc(0xc0,0x10);
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawCircle'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_50[2] = local_128;
  local_50[3] = pcStack_120;
  local_50[4] = local_118;
  local_50[5] = pcStack_110;
  local_50[6] = local_108;
  local_50[7] = pcStack_100;
  local_50[8] = local_f8;
  local_50[9] = pcStack_f0;
  local_50[10] = local_e8;
  local_50[0xb] = pcStack_e0;
  local_50[0xc] = local_d8;
  local_50[0xd] = pcStack_d0;
  local_50[0xe] = local_c8;
  local_50[0xf] = pcStack_c0;
  local_50[0x10] = local_b8;
  local_50[0x11] = pcStack_b0;
  local_50[0x12] = local_a8;
  local_50[0x13] = pcStack_a0;
  local_50[0x14] = local_98;
  local_50[0x15] = pcStack_90;
  local_50[0x16] = (code *)CONCAT44(uStack_84,local_88);
  local_50[0x17] = (code *)CONCAT44(fStack_7c,fStack_80);
  if (local_50 + 2 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawCircle'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  if (this != (FTlsAutoCleanup)0x0) {
    dVar1 = *(double *)((longlong)this + 0x58);
    if ((dVar1 <= 0.0) ||
       (dVar2 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_160._s_0,(TVector<double> *)&local_148._s_0,
                           (TVector<double> *)((longlong)this + 0x40)), dVar2 < dVar1 * dVar1)) {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar6 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,1);
      if (bVar6) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_78);
      }
    }
  }
  if (local_78[0] != (code *)0x0) {
    ppcVar10 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar10 = local_50;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// DrawLine @ 143a63730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDPrimitives::DrawLine
          (TVector<double> *param_1,TVector<double> *param_2,FColor *param_3,float param_4,
          float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar10;
  code **ppcVar11;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  code *local_130;
  undefined1 *local_128;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  undefined1 local_f0;
  code *local_e8;
  code *pcStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FColor_u_0 local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_108._s_0.X = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar19 = SUB84(dVar1,0);
  uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar13 = SUB84(local_108._s_0.X,0);
  uVar14 = (undefined4)((ulonglong)local_108._s_0.X >> 0x20);
  dVar2 = *(double *)&param_2->field0_0x0;
  if (dVar2 <= local_108._s_0.X) {
    uVar13 = SUB84(dVar2,0);
    uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  uVar17 = SUB84(dVar2,0);
  uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if (local_108._s_0.X <= dVar3) {
    local_108._s_0.X = dVar3;
  }
  local_f0 = 1;
  dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  uVar15 = uVar17;
  uVar16 = uVar18;
  if (dVar3 <= dVar2) {
    uVar15 = SUB84(dVar3,0);
    uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (dVar2 <= dVar3) {
    uVar17 = SUB84(dVar3,0);
    uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  local_120._s_0.X = (double)CONCAT44(uVar14,uVar13);
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar13 = uVar19;
  uVar14 = uVar20;
  if (dVar2 <= dVar1) {
    uVar13 = SUB84(dVar2,0);
    uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  if (dVar1 <= dVar2) {
    uVar19 = SUB84(dVar2,0);
    uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  local_120._s_0.Y = (double)CONCAT44(uVar16,uVar15);
  local_108._s_0.Y = (double)CONCAT44(uVar18,uVar17);
  local_120._s_0.Z = (double)CONCAT44(uVar14,uVar13);
  local_108._s_0.Z = (double)CONCAT44(uVar20,uVar19);
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
    puVar8 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_128 = local_138;
    local_130 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar9 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_130,puVar8);
    this = pFVar9[2];
    pTVar10 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar9 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar10 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar10->Object;
    }
    pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  else {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  pcVar5 = (code *)(param_1->field0_0x0)._s_0.X;
  pcVar6 = (code *)(param_1->field0_0x0)._s_0.Y;
  local_b8._s_0 = *(FColor_u_0_s_0 *)&param_3->field0_0x0;
  local_d0 = *(undefined8 *)&param_2->field0_0x0;
  uStack_c8 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  uVar13 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar14 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar19 = (undefined4)uVar4;
  uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_a8[0] = (code *)0x0;
  local_e8 = pcVar5;
  pcStack_e0 = pcVar6;
  local_80 = FMemory::Malloc(0x48,8);
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawLine'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_80[1] = pcVar5;
  local_80[2] = pcVar6;
  *(undefined4 *)(local_80 + 3) = uVar13;
  *(undefined4 *)((longlong)local_80 + 0x1c) = uVar14;
  *(undefined4 *)(local_80 + 4) = (undefined4)local_d0;
  *(undefined4 *)((longlong)local_80 + 0x24) = local_d0._4_4_;
  *(undefined4 *)(local_80 + 5) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)local_80 + 0x2c) = uStack_c8._4_4_;
  *(undefined4 *)(local_80 + 6) = uVar19;
  *(undefined4 *)((longlong)local_80 + 0x34) = uVar20;
  ((FColor_u_0 *)(local_80 + 7))->_s_0 = (FColor_u_0_s_0)local_b8;
  *(float *)((longlong)local_80 + 0x3c) = param_4;
  *(float *)(local_80 + 8) = param_5;
  *(undefined4 *)((longlong)local_80 + 0x44) = uStack_ac;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawLine'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  fStack_b0 = param_5;
  uStack_d8 = uVar13;
  uStack_d4 = uVar14;
  uStack_c0 = uVar19;
  uStack_bc = uVar20;
  fStack_b4 = param_4;
  if (this != (FTlsAutoCleanup)0x0) {
    dVar1 = *(double *)((longlong)this + 0x58);
    if ((dVar1 <= 0.0) ||
       (dVar2 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_120._s_0,(TVector<double> *)&local_108._s_0,
                           (TVector<double> *)((longlong)this + 0x40)), dVar2 < dVar1 * dVar1)) {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar7 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,1);
      if (bVar7) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_a8);
      }
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar11 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar11 = local_80;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// DrawPoint @ 143a63b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDPrimitives::DrawPoint
          (TVector<double> *param_1,FColor *param_2,float param_3,float param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar10;
  code **ppcVar11;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  code *local_110;
  undefined1 *local_108;
  code *local_100;
  code *pcStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  FColor_u_0 FStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  undefined1 local_a8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_d8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_a8 = 1;
  local_c0._s_0.X = local_d8._s_0.X;
  local_c0._s_0.Y = local_d8._s_0.Y;
  local_c0._s_0.Z = local_d8._s_0.Z;
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
    puVar8 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_108 = local_118;
    local_110 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar9 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_110,puVar8);
    this = pFVar9[2];
    pTVar10 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar9 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar10 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar10->Object;
    }
    pTVar12 = (pTVar10->SharedReferenceCount).ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  else {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  pcVar2 = (code *)(param_1->field0_0x0)._s_0.X;
  pcVar6 = (code *)(param_1->field0_0x0)._s_0.Y;
  FStack_e8._s_0 = *(FColor_u_0_s_0 *)&param_2->field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  local_98[0] = (code *)0x0;
  local_100 = pcVar2;
  pcStack_f8 = pcVar6;
  local_70 = FMemory::Malloc(0x30,8);
  local_70[1] = pcVar2;
  local_70[2] = pcVar6;
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawPoint'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(undefined4 *)(local_70 + 3) = uVar4;
  *(undefined4 *)((longlong)local_70 + 0x1c) = uVar5;
  ((FColor_u_0 *)(local_70 + 4))->_s_0 = (FColor_u_0_s_0)FStack_e8;
  *(float *)((longlong)local_70 + 0x24) = param_3;
  local_70[5] = (code *)CONCAT44(local_e0._4_4_,param_4);
  if (local_70 != (code **)&DAT_fffffffffffffff8) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawPoint'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  local_e0 = CONCAT44(local_e0._4_4_,param_4);
  local_f0 = uVar4;
  uStack_ec = uVar5;
  fStack_e4 = param_3;
  if (this != (FTlsAutoCleanup)0x0) {
    dVar1 = *(double *)((longlong)this + 0x58);
    if ((dVar1 <= 0.0) ||
       (dVar3 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_c0._s_0,
                           (TVector<double> *)((longlong)this + 0x40)), dVar3 < dVar1 * dVar1)) {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar7 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,1);
      if (bVar7) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_98);
      }
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar11 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar11 = local_70;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// DrawSphere @ 143a645f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDPrimitives::DrawSphere
          (TVector<double> *param_1,float param_2,FColor *param_3,float param_4,float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  bool bVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar12;
  code **ppcVar13;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar14;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  code *local_120;
  undefined1 *local_118;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  undefined1 local_e0;
  code *local_d8;
  code *pcStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  FColor_u_0 FStack_bc;
  undefined8 local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_148;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (double)param_2;
  local_e0 = 1;
  local_110._s_0.X = dVar1 - dVar5;
  local_110._s_0.Y = dVar2 - dVar5;
  local_f8._s_0.X = dVar1 + dVar5;
  local_f8._s_0.Y = dVar2 + dVar5;
  local_110._s_0.Z = dVar3 - dVar5;
  local_f8._s_0.Z = dVar3 + dVar5;
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
    puVar10 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_118 = local_128;
    local_120 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar11 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_120,puVar10);
    this = pFVar11[2];
    pTVar12 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar11 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar12 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar12->Object;
    }
    pTVar14 = (pTVar12->SharedReferenceCount).ReferenceController;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  else {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  pcVar4 = (code *)(param_1->field0_0x0)._s_0.X;
  pcVar8 = (code *)(param_1->field0_0x0)._s_0.Y;
  FStack_bc._s_0 = *(FColor_u_0_s_0 *)&param_3->field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  local_a8[0] = (code *)0x0;
  local_d8 = pcVar4;
  pcStack_d0 = pcVar8;
  local_80 = FMemory::Malloc(0x30,8);
  local_80[1] = pcVar4;
  local_80[2] = pcVar8;
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawSphere'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(undefined4 *)(local_80 + 3) = uVar6;
  *(undefined4 *)((longlong)local_80 + 0x1c) = uVar7;
  *(float *)(local_80 + 4) = param_2;
  ((FColor_u_0 *)((longlong)local_80 + 0x24))->_s_0 = (FColor_u_0_s_0)FStack_bc;
  local_80[5] = (code *)CONCAT44(param_5,param_4);
  if (local_80 != (code **)&DAT_fffffffffffffff8) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawSphere'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  local_b8 = CONCAT44(param_5,param_4);
  local_c8 = uVar6;
  uStack_c4 = uVar7;
  fStack_c0 = param_2;
  if (this != (FTlsAutoCleanup)0x0) {
    dVar1 = *(double *)((longlong)this + 0x58);
    if ((dVar1 <= 0.0) ||
       (dVar2 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_110._s_0,(TVector<double> *)&local_f8._s_0,
                           (TVector<double> *)((longlong)this + 0x40)), dVar2 < dVar1 * dVar1)) {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar9 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,0x40);
      if (bVar9) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_a8);
      }
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar13 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar13 = local_80;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

// DrawString @ 143a648d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDPrimitives::DrawString
          (TVector<double> *param_1,FString *param_2,FColor *param_3,float param_4,bool param_5,
          float param_6)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar7;
  code **ppcVar8;
  TReferenceControllerBase<1> *pTVar9;
  FTlsAutoCleanup this;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  code *local_100;
  code *pcStack_f8;
  code *local_f0;
  FString local_e8;
  FColor_u_0 local_d8;
  float local_d4;
  bool local_d0;
  float local_cc;
  code *local_c8;
  undefined1 *local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_b8._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_b8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_88 = 1;
  local_a0._s_0.X = local_b8._s_0.X;
  local_a0._s_0.Y = local_b8._s_0.Y;
  local_a0._s_0.Z = local_b8._s_0.Z;
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
    puVar5 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_c0 = local_108;
    local_c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar6 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c8,puVar5);
    this = pFVar6[2];
    pTVar7 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar6 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar7 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar7->Object;
    }
    pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  else {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  local_100 = (code *)(param_1->field0_0x0)._s_0.X;
  pcStack_f8 = (code *)(param_1->field0_0x0)._s_0.Y;
  local_f0 = (code *)(param_1->field0_0x0)._s_0.Z;
  ::FString::FString(&local_e8,param_2);
  local_d8._s_0 = *(FColor_u_0_s_0 *)&param_3->field0_0x0;
  local_d0 = param_5;
  local_cc = param_6;
  local_78[0] = (code *)0x0;
  local_d4 = param_4;
  ppcVar8 = FMemory::Malloc(0x40,8);
  *ppcVar8 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawString'::`2'::<lambda_1>,0,1>
                      ::_vftable_;
  ppcVar8[1] = local_100;
  ppcVar8[2] = pcStack_f8;
  ppcVar8[3] = local_f0;
  local_50 = ppcVar8;
  ::FString::FString((FString *)(ppcVar8 + 4),&local_e8);
  ((FColor_u_0 *)(ppcVar8 + 6))->_s_0 = (FColor_u_0_s_0)local_d8;
  *(float *)((longlong)ppcVar8 + 0x34) = local_d4;
  *(bool *)(ppcVar8 + 7) = local_d0;
  *(float *)((longlong)ppcVar8 + 0x3c) = local_cc;
  if (ppcVar8 + 1 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawString'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  if (this != (FTlsAutoCleanup)0x0) {
    dVar1 = *(double *)((longlong)this + 0x58);
    if ((dVar1 <= 0.0) ||
       (dVar3 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_a0._s_0,
                           (TVector<double> *)((longlong)this + 0x40)), dVar3 < dVar1 * dVar1)) {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar4 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,10);
      if (bVar4) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_78);
      }
    }
  }
  if (local_78[0] != (code *)0x0) {
    ppcVar8 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar8 = local_50;
    }
    (**(code **)(*ppcVar8 + 0x10))();
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// DrawTriangle @ 143a64b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FChaosDDPrimitives::DrawTriangle
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FColor *param_4,float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar12;
  code **ppcVar13;
  FTlsAutoCleanup this;
  TReferenceControllerBase<1> *pTVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  code *local_180;
  undefined1 *local_178;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  undefined1 local_140;
  code *local_138;
  code *pcStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  code *local_108;
  code *pcStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  FColor_u_0 FStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_158._s_0.X = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar21 = SUB84(dVar1,0);
  uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar15 = SUB84(local_158._s_0.X,0);
  uVar16 = (undefined4)((ulonglong)local_158._s_0.X >> 0x20);
  dVar2 = *(double *)&param_2->field0_0x0;
  if (dVar2 <= local_158._s_0.X) {
    uVar15 = SUB84(dVar2,0);
    uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  uVar19 = SUB84(dVar2,0);
  uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = (param_2->field0_0x0)._s_0.X;
  if (local_158._s_0.X <= dVar3) {
    local_158._s_0.X = dVar3;
  }
  local_140 = 1;
  dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  uVar17 = uVar19;
  uVar18 = uVar20;
  if (dVar3 <= dVar2) {
    uVar17 = SUB84(dVar3,0);
    uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar3 = *(double *)&param_3->field0_0x0;
  if (dVar3 <= (double)CONCAT44(uVar16,uVar15)) {
    uVar15 = SUB84(dVar3,0);
    uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (dVar2 <= dVar3) {
    uVar19 = SUB84(dVar3,0);
    uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar2 = (param_3->field0_0x0)._s_0.X;
  if (local_158._s_0.X <= dVar2) {
    local_158._s_0.X = dVar2;
  }
  dVar2 = *(double *)((longlong)&param_3->field0_0x0 + 8);
  if (dVar2 <= (double)CONCAT44(uVar18,uVar17)) {
    uVar17 = SUB84(dVar2,0);
    uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  local_170._s_0.X = (double)CONCAT44(uVar16,uVar15);
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar15 = uVar21;
  uVar16 = uVar22;
  if (dVar2 <= dVar1) {
    uVar15 = SUB84(dVar2,0);
    uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  if (dVar1 <= dVar2) {
    uVar21 = SUB84(dVar2,0);
    uVar22 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar1 = *(double *)((longlong)&param_3->field0_0x0 + 8);
  if ((double)CONCAT44(uVar20,uVar19) <= dVar1) {
    uVar19 = SUB84(dVar1,0);
    uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_170._s_0.Y = (double)CONCAT44(uVar18,uVar17);
  dVar1 = *(double *)((longlong)&param_3->field0_0x0 + 0x10);
  if (dVar1 <= (double)CONCAT44(uVar16,uVar15)) {
    uVar15 = SUB84(dVar1,0);
    uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = *(double *)((longlong)&param_3->field0_0x0 + 0x10);
  if ((double)CONCAT44(uVar22,uVar21) <= dVar1) {
    uVar21 = SUB84(dVar1,0);
    uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_158._s_0.Y = (double)CONCAT44(uVar20,uVar19);
  local_170._s_0.Z = (double)CONCAT44(uVar16,uVar15);
  local_158._s_0.Z = (double)CONCAT44(uVar22,uVar21);
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
    puVar10 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_178 = local_188;
    local_180 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar11 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_180,puVar10);
    this = pFVar11[2];
    pTVar12 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar11 + 2);
    if (this == (FTlsAutoCleanup)0x0) {
      pTVar12 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      this = (FTlsAutoCleanup)pTVar12->Object;
    }
    pTVar14 = (pTVar12->SharedReferenceCount).ReferenceController;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
  }
  else {
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    this = (FTlsAutoCleanup)0x0;
  }
  pcVar5 = (code *)(param_1->field0_0x0)._s_0.X;
  pcVar6 = (code *)(param_1->field0_0x0)._s_0.Y;
  FStack_f0._s_0 = *(FColor_u_0_s_0 *)&param_4->field0_0x0;
  local_120 = *(undefined8 *)&param_2->field0_0x0;
  uStack_118 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  pcVar7 = (code *)(param_3->field0_0x0)._s_0.X;
  pcVar8 = (code *)(param_3->field0_0x0)._s_0.Y;
  local_d8[0] = (code *)0x0;
  uVar15 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar16 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar19 = (undefined4)uVar4;
  uVar20 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar21 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x10);
  uVar22 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x14);
  local_138 = pcVar5;
  pcStack_130 = pcVar6;
  local_108 = pcVar7;
  pcStack_100 = pcVar8;
  local_b0 = FMemory::Malloc(0x60,8);
  *local_b0 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`Chaos::FChaosDDPrimitives::DrawTriangle'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_b0[1] = pcVar5;
  local_b0[2] = pcVar6;
  *(undefined4 *)(local_b0 + 3) = uVar15;
  *(undefined4 *)((longlong)local_b0 + 0x1c) = uVar16;
  *(undefined4 *)(local_b0 + 4) = (undefined4)local_120;
  *(undefined4 *)((longlong)local_b0 + 0x24) = local_120._4_4_;
  *(undefined4 *)(local_b0 + 5) = (undefined4)uStack_118;
  *(undefined4 *)((longlong)local_b0 + 0x2c) = uStack_118._4_4_;
  *(undefined4 *)(local_b0 + 6) = uVar19;
  *(undefined4 *)((longlong)local_b0 + 0x34) = uVar20;
  local_b0[7] = pcVar7;
  local_b0[8] = pcVar8;
  *(undefined4 *)(local_b0 + 9) = uVar21;
  *(undefined4 *)((longlong)local_b0 + 0x4c) = uVar22;
  ((FColor_u_0 *)(local_b0 + 10))->_s_0 = (FColor_u_0_s_0)FStack_f0;
  *(float *)((longlong)local_b0 + 0x54) = param_5;
  fStack_ec = param_5;
  local_b0[0xb] = (code *)CONCAT44(local_e8._4_4_,param_6);
  if (local_b0 + 1 != (code **)0x0) {
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawTriangle'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
                  ::Call;
  }
  local_e8 = CONCAT44(local_e8._4_4_,param_6);
  uStack_128 = uVar15;
  uStack_124 = uVar16;
  uStack_110 = uVar19;
  uStack_10c = uVar20;
  local_f8 = uVar21;
  uStack_f4 = uVar22;
  if (this != (FTlsAutoCleanup)0x0) {
    dVar1 = *(double *)((longlong)this + 0x58);
    if ((dVar1 <= 0.0) ||
       (dVar2 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_170._s_0,(TVector<double> *)&local_158._s_0,
                           (TVector<double> *)((longlong)this + 0x40)), dVar2 < dVar1 * dVar1)) {
      if ((this == (FTlsAutoCleanup)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar9 = ChaosDD::Private::FChaosDDFrame::AddToCost((FChaosDDFrame *)this,3);
      if (bVar9) {
        if ((this == (FTlsAutoCleanup)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ChaosDD::Private::FChaosDDFrame::EnqueueCommand
                  ((FChaosDDFrame *)this,
                   (TFunction<void___cdecl(ChaosDD::Private::IChaosDDRenderer_&)> *)local_d8);
      }
    }
  }
  if (local_d8[0] != (code *)0x0) {
    ppcVar13 = local_d8 + 2;
    if (local_b0 != (code **)0x0) {
      ppcVar13 = local_b0;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  if (this != (FTlsAutoCleanup)0x0) {
    (**(code **)(*(longlong *)this + 0x10))(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return;
}

