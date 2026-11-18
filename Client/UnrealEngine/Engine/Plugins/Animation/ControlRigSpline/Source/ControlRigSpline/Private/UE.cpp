// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 88

// Construct<FControlRigSpline> @ 14debb4f0

void __cdecl UE::CoreUObject::Private::Construct<FControlRigSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FControlRigSpline> @ 14debb510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FControlRigSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FControlRigSpline> @ 14debb530

void __cdecl UE::CoreUObject::Private::Destruct<FControlRigSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FControlRigSpline> @ 14debb550

bool __cdecl
UE::CoreUObject::Private::Copy<FControlRigSpline>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    lVar2 = *(longlong *)((longlong)param_2 + (0x10 - (longlong)param_1) + (longlong)pvVar4);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x10);
    *(undefined8 *)((longlong)pvVar4 + 8) = uVar1;
    *(longlong *)((longlong)pvVar4 + 0x10) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0x18);
  }
  return true;
}

// Construct<FRigUnit_FitChainToSplineCurve> @ 14debb5d0

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_FitChainToSplineCurve>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FLinearColor FVar9;
  undefined8 uVar10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  __m128d _Var15;
  __m128d _Var16;
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_FitChainToSplineCurve__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xf0) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x100) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x110) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x120) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x130) = auVar8;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xb8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 200))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  *(double (*) [2])((longlong)param_1 + 0xe0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xc;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_b8 = uStack_b8 & 0xffffff00;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar10;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var15 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var14 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var13 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var12 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var11 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  FVar9 = FLinearColor::Red;
  uStack_b0 = FLinearColor::Yellow.field0_0x0._0_8_;
  uStack_a8 = FLinearColor::Yellow.field0_0x0._8_8_;
  uStack_a0 = FLinearColor::Red.field0_0x0._0_8_;
  *(ulonglong *)((longlong)param_1 + 0xb0) = CONCAT44(0x3f800000,uStack_b8);
  *(undefined8 *)((longlong)param_1 + 0xb8) = uStack_b0;
  uStack_98 = FVar9.field0_0x0._8_8_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uStack_a8;
  *(undefined8 *)((longlong)param_1 + 200) = uStack_a0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = uStack_98;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uStack_90;
  *(double (*) [2])((longlong)param_1 + 0xe0) = _Var11.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) = _Var12.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) = _Var13.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) = _Var14.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) = _Var15.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) = _Var16.m128d_f64;
  return;
}

// ConstructForTests<FRigUnit_FitChainToSplineCurve> @ 14debb5e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_FitChainToSplineCurve>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FLinearColor FVar9;
  undefined8 uVar10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  __m128d _Var15;
  __m128d _Var16;
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_FitChainToSplineCurve__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xf0) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x100) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x110) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x120) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x130) = auVar8;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xb8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 200))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  *(double (*) [2])((longlong)param_1 + 0xe0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xc;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_b8 = uStack_b8 & 0xffffff00;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar10;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var15 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var14 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var13 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var12 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var11 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  FVar9 = FLinearColor::Red;
  uStack_b0 = FLinearColor::Yellow.field0_0x0._0_8_;
  uStack_a8 = FLinearColor::Yellow.field0_0x0._8_8_;
  uStack_a0 = FLinearColor::Red.field0_0x0._0_8_;
  *(ulonglong *)((longlong)param_1 + 0xb0) = CONCAT44(0x3f800000,uStack_b8);
  *(undefined8 *)((longlong)param_1 + 0xb8) = uStack_b0;
  uStack_98 = FVar9.field0_0x0._8_8_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uStack_a8;
  *(undefined8 *)((longlong)param_1 + 200) = uStack_a0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = uStack_98;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uStack_90;
  *(double (*) [2])((longlong)param_1 + 0xe0) = _Var11.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) = _Var12.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) = _Var13.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) = _Var14.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) = _Var15.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) = _Var16.m128d_f64;
  return;
}

// Destruct<FRigUnit_FitChainToSplineCurve> @ 14debb5f0

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_FitChainToSplineCurve>(void *param_1)

{
  FRigUnit_FitChainToCurve_WorkData::~FRigUnit_FitChainToCurve_WorkData
            ((FRigUnit_FitChainToCurve_WorkData *)((longlong)param_1 + 0x140));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_FitChainToSplineCurve> @ 14debb650

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_FitChainToSplineCurve>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  
  pvVar5 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x10),
               (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x10));
    lVar2 = *(longlong *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar5 + 0x28) = uVar3;
    *(longlong *)((longlong)pvVar5 + 0x30) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    *(undefined1 *)((longlong)pvVar5 + 0x38) = *(undefined1 *)((longlong)pvVar1 + 0x38);
    *(undefined4 *)((longlong)pvVar5 + 0x3c) = *(undefined4 *)((longlong)pvVar1 + 0x3c);
    *(undefined4 *)((longlong)pvVar5 + 0x40) = *(undefined4 *)((longlong)pvVar1 + 0x40);
    *(undefined4 *)((longlong)pvVar5 + 0x44) = *(undefined4 *)((longlong)pvVar1 + 0x44);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x50);
    *(undefined8 *)((longlong)pvVar5 + 0x48) = *(undefined8 *)((longlong)pvVar1 + 0x48);
    *(undefined8 *)((longlong)pvVar5 + 0x50) = uVar3;
    *(undefined8 *)((longlong)pvVar5 + 0x58) = *(undefined8 *)((longlong)pvVar1 + 0x58);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x68);
    *(undefined8 *)((longlong)pvVar5 + 0x60) = *(undefined8 *)((longlong)pvVar1 + 0x60);
    *(undefined8 *)((longlong)pvVar5 + 0x68) = uVar3;
    *(undefined8 *)((longlong)pvVar5 + 0x70) = *(undefined8 *)((longlong)pvVar1 + 0x70);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x80);
    *(undefined8 *)((longlong)pvVar5 + 0x78) = *(undefined8 *)((longlong)pvVar1 + 0x78);
    *(undefined8 *)((longlong)pvVar5 + 0x80) = uVar3;
    *(undefined8 *)((longlong)pvVar5 + 0x88) = *(undefined8 *)((longlong)pvVar1 + 0x88);
    TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar5 + 0x90),
               (TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + 0x90));
    *(undefined1 *)((longlong)pvVar5 + 0xa0) = *(undefined1 *)((longlong)pvVar1 + 0xa0);
    *(undefined4 *)((longlong)pvVar5 + 0xa4) = *(undefined4 *)((longlong)pvVar1 + 0xa4);
    *(undefined1 *)((longlong)pvVar5 + 0xa8) = *(undefined1 *)((longlong)pvVar1 + 0xa8);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0xb8);
    *(undefined8 *)((longlong)pvVar5 + 0xb0) = *(undefined8 *)((longlong)pvVar1 + 0xb0);
    *(undefined8 *)((longlong)pvVar5 + 0xb8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 200);
    *(undefined8 *)((longlong)pvVar5 + 0xc0) = *(undefined8 *)((longlong)pvVar1 + 0xc0);
    *(undefined8 *)((longlong)pvVar5 + 200) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0xd8);
    *(undefined8 *)((longlong)pvVar5 + 0xd0) = *(undefined8 *)((longlong)pvVar1 + 0xd0);
    *(undefined8 *)((longlong)pvVar5 + 0xd8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0xe8);
    *(undefined8 *)((longlong)pvVar5 + 0xe0) = *(undefined8 *)((longlong)pvVar1 + 0xe0);
    *(undefined8 *)((longlong)pvVar5 + 0xe8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0xf8);
    *(undefined8 *)((longlong)pvVar5 + 0xf0) = *(undefined8 *)((longlong)pvVar1 + 0xf0);
    *(undefined8 *)((longlong)pvVar5 + 0xf8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x108);
    *(undefined8 *)((longlong)pvVar5 + 0x100) = *(undefined8 *)((longlong)pvVar1 + 0x100);
    *(undefined8 *)((longlong)pvVar5 + 0x108) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x118);
    *(undefined8 *)((longlong)pvVar5 + 0x110) = *(undefined8 *)((longlong)pvVar1 + 0x110);
    *(undefined8 *)((longlong)pvVar5 + 0x118) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x128);
    *(undefined8 *)((longlong)pvVar5 + 0x120) = *(undefined8 *)((longlong)pvVar1 + 0x120);
    *(undefined8 *)((longlong)pvVar5 + 0x128) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x138);
    *(undefined8 *)((longlong)pvVar5 + 0x130) = *(undefined8 *)((longlong)pvVar1 + 0x130);
    *(undefined8 *)((longlong)pvVar5 + 0x138) = uVar3;
    FRigUnit_FitChainToCurve_WorkData::operator=
              ((FRigUnit_FitChainToCurve_WorkData *)((longlong)pvVar5 + 0x140),
               (FRigUnit_FitChainToCurve_WorkData *)((longlong)pvVar1 + 0x140));
    pvVar1 = (void *)((longlong)pvVar1 + 0x1e0);
    pvVar5 = (void *)((longlong)pvVar5 + 0x1e0);
  }
  return true;
}

// Construct<FControlRigSplineImpl> @ 14debb8a0

void __cdecl UE::CoreUObject::Private::Construct<FControlRigSplineImpl>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x10;
  *(undefined ***)param_1 = &___7FControlRigSplineImpl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FControlRigSplineImpl> @ 14debb8f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FControlRigSplineImpl>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x10;
  *(undefined ***)param_1 = &___7FControlRigSplineImpl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FControlRigSplineImpl> @ 14debb940

void __cdecl UE::CoreUObject::Private::Destruct<FControlRigSplineImpl>(void *param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &___7FControlRigSplineImpl__6B_;
  puVar1 = *(undefined8 **)((longlong)param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FControlRigSplineImpl> @ 14debb950

bool __cdecl
UE::CoreUObject::Private::Copy<FControlRigSplineImpl>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x48),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x48));
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x58),
               (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x58));
    param_2 = (void *)((longlong)param_2 + 0x68);
    param_1 = (void *)((longlong)param_1 + 0x68);
  }
  return true;
}

// Construct<FRigUnit_GetLengthAtParamControlRigSpline> @ 14debba20

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_GetLengthAtParamControlRigSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_GetLengthAtParamControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigUnit_GetLengthAtParamControlRigSpline> @ 14debba50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_GetLengthAtParamControlRigSpline>
          (void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_GetLengthAtParamControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigUnit_GetLengthAtParamControlRigSpline> @ 14debba80

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_GetLengthAtParamControlRigSpline>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_GetLengthAtParamControlRigSpline> @ 14debbac0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_GetLengthAtParamControlRigSpline>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x20) = *(undefined4 *)((longlong)pvVar5 + 0x20);
    *(undefined4 *)((longlong)pvVar4 + 0x24) = *(undefined4 *)((longlong)pvVar5 + 0x24);
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
    pvVar5 = (void *)((longlong)pvVar5 + 0x28);
  }
  return true;
}

// Construct<FRigUnit_GetLengthControlRigSpline> @ 14debbc30

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_GetLengthControlRigSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_GetLengthControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigUnit_GetLengthControlRigSpline> @ 14debbc60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_GetLengthControlRigSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_GetLengthControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigUnit_GetLengthControlRigSpline> @ 14debbc90

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_GetLengthControlRigSpline>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_GetLengthControlRigSpline> @ 14debbd30

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_GetLengthControlRigSpline>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x20) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Construct<FRigUnit_DrawControlRigSpline> @ 14debbe10

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_DrawControlRigSpline>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_DrawControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FVar1 = FLinearColor::Red;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x10;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// ConstructForTests<FRigUnit_DrawControlRigSpline> @ 14debbe60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_DrawControlRigSpline>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_DrawControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FVar1 = FLinearColor::Red;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x10;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x28))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FRigUnit_DrawControlRigSpline> @ 14debbeb0

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_DrawControlRigSpline>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_DrawControlRigSpline> @ 14debbef0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_DrawControlRigSpline>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x20 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x20);
    *(undefined8 *)((longlong)pvVar4 + 0x18) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x20) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = *(undefined8 *)((longlong)pvVar5 + 0x28);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = uVar2;
    *(undefined4 *)((longlong)pvVar4 + 0x38) = *(undefined4 *)((longlong)pvVar5 + 0x38);
    *(undefined4 *)((longlong)pvVar4 + 0x3c) = *(undefined4 *)((longlong)pvVar5 + 0x3c);
    pvVar4 = (void *)((longlong)pvVar4 + 0x40);
    pvVar5 = (void *)((longlong)pvVar5 + 0x40);
  }
  return true;
}

// Construct<FRigUnit_TangentFromControlRigSpline> @ 14debbfe0

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_TangentFromControlRigSpline>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FRigUnit_TangentFromControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FRigUnit_TangentFromControlRigSpline> @ 14debc030

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_TangentFromControlRigSpline>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FRigUnit_TangentFromControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FRigUnit_TangentFromControlRigSpline> @ 14debc080

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_TangentFromControlRigSpline>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_TangentFromControlRigSpline> @ 14debc0c0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_TangentFromControlRigSpline>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x20) = *(undefined4 *)((longlong)pvVar5 + 0x20);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = *(undefined8 *)((longlong)pvVar5 + 0x28);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = uVar2;
    *(undefined8 *)((longlong)pvVar4 + 0x38) = *(undefined8 *)((longlong)pvVar5 + 0x38);
    pvVar4 = (void *)((longlong)pvVar4 + 0x40);
    pvVar5 = (void *)((longlong)pvVar5 + 0x40);
  }
  return true;
}

// Construct<FRigUnit_TransformFromControlRigSpline2> @ 14debc220

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_TransformFromControlRigSpline2>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  *(undefined ***)param_1 = &___7FRigUnit_TransformFromControlRigSpline2__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xb0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar9;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar9;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FRigUnit_TransformFromControlRigSpline2> @ 14debc230

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_TransformFromControlRigSpline2>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  *(undefined ***)param_1 = &___7FRigUnit_TransformFromControlRigSpline2__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xb0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar9;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar9;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FRigUnit_TransformFromControlRigSpline2> @ 14debc240

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_TransformFromControlRigSpline2>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_TransformFromControlRigSpline2> @ 14debc280

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_TransformFromControlRigSpline2>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x20) = *(undefined4 *)((longlong)pvVar5 + 0x20);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = *(undefined8 *)((longlong)pvVar5 + 0x28);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = uVar2;
    *(undefined8 *)((longlong)pvVar4 + 0x38) = *(undefined8 *)((longlong)pvVar5 + 0x38);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x48);
    *(undefined8 *)((longlong)pvVar4 + 0x40) = *(undefined8 *)((longlong)pvVar5 + 0x40);
    *(undefined8 *)((longlong)pvVar4 + 0x48) = uVar2;
    *(undefined8 *)((longlong)pvVar4 + 0x50) = *(undefined8 *)((longlong)pvVar5 + 0x50);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x68);
    *(undefined8 *)((longlong)pvVar4 + 0x60) = *(undefined8 *)((longlong)pvVar5 + 0x60);
    *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x78);
    *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)((longlong)pvVar5 + 0x70);
    *(undefined8 *)((longlong)pvVar4 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x88);
    *(undefined8 *)((longlong)pvVar4 + 0x80) = *(undefined8 *)((longlong)pvVar5 + 0x80);
    *(undefined8 *)((longlong)pvVar4 + 0x88) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x98);
    *(undefined8 *)((longlong)pvVar4 + 0x90) = *(undefined8 *)((longlong)pvVar5 + 0x90);
    *(undefined8 *)((longlong)pvVar4 + 0x98) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0xa8);
    *(undefined8 *)((longlong)pvVar4 + 0xa0) = *(undefined8 *)((longlong)pvVar5 + 0xa0);
    *(undefined8 *)((longlong)pvVar4 + 0xa8) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0xb8);
    *(undefined8 *)((longlong)pvVar4 + 0xb0) = *(undefined8 *)((longlong)pvVar5 + 0xb0);
    *(undefined8 *)((longlong)pvVar4 + 0xb8) = uVar2;
    pvVar4 = (void *)((longlong)pvVar4 + 0xc0);
    pvVar5 = (void *)((longlong)pvVar5 + 0xc0);
  }
  return true;
}

// Construct<FRigUnit_TransformFromControlRigSpline> @ 14debc400

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_TransformFromControlRigSpline>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  *(undefined ***)param_1 = &___7FRigUnit_TransformFromControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar8;
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar9;
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar9;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ConstructForTests<FRigUnit_TransformFromControlRigSpline> @ 14debc410

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_TransformFromControlRigSpline>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  *(undefined ***)param_1 = &___7FRigUnit_TransformFromControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar8;
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar9;
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar9;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Destruct<FRigUnit_TransformFromControlRigSpline> @ 14debc420

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_TransformFromControlRigSpline>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_TransformFromControlRigSpline> @ 14debc4a0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_TransformFromControlRigSpline>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x28);
    *(undefined8 *)((longlong)pvVar4 + 0x20) = *(undefined8 *)((longlong)pvVar5 + 0x20);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar2;
    *(undefined8 *)((longlong)pvVar4 + 0x30) = *(undefined8 *)((longlong)pvVar5 + 0x30);
    *(undefined4 *)((longlong)pvVar4 + 0x38) = *(undefined4 *)((longlong)pvVar5 + 0x38);
    *(undefined4 *)((longlong)pvVar4 + 0x3c) = *(undefined4 *)((longlong)pvVar5 + 0x3c);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x48);
    *(undefined8 *)((longlong)pvVar4 + 0x40) = *(undefined8 *)((longlong)pvVar5 + 0x40);
    *(undefined8 *)((longlong)pvVar4 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x58);
    *(undefined8 *)((longlong)pvVar4 + 0x50) = *(undefined8 *)((longlong)pvVar5 + 0x50);
    *(undefined8 *)((longlong)pvVar4 + 0x58) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x68);
    *(undefined8 *)((longlong)pvVar4 + 0x60) = *(undefined8 *)((longlong)pvVar5 + 0x60);
    *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x78);
    *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)((longlong)pvVar5 + 0x70);
    *(undefined8 *)((longlong)pvVar4 + 0x78) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x88);
    *(undefined8 *)((longlong)pvVar4 + 0x80) = *(undefined8 *)((longlong)pvVar5 + 0x80);
    *(undefined8 *)((longlong)pvVar4 + 0x88) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x98);
    *(undefined8 *)((longlong)pvVar4 + 0x90) = *(undefined8 *)((longlong)pvVar5 + 0x90);
    *(undefined8 *)((longlong)pvVar4 + 0x98) = uVar2;
    pvVar4 = (void *)((longlong)pvVar4 + 0xa0);
    pvVar5 = (void *)((longlong)pvVar5 + 0xa0);
  }
  return true;
}

// Construct<FRigUnit_PositionFromControlRigSpline> @ 14debc610

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_PositionFromControlRigSpline>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FRigUnit_PositionFromControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FRigUnit_PositionFromControlRigSpline> @ 14debc660

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_PositionFromControlRigSpline>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FRigUnit_PositionFromControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FRigUnit_PositionFromControlRigSpline> @ 14debc6b0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_PositionFromControlRigSpline>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_PositionFromControlRigSpline> @ 14debc6f0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_PositionFromControlRigSpline>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x20) = *(undefined4 *)((longlong)pvVar5 + 0x20);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = *(undefined8 *)((longlong)pvVar5 + 0x28);
    *(undefined8 *)((longlong)pvVar4 + 0x30) = uVar2;
    *(undefined8 *)((longlong)pvVar4 + 0x38) = *(undefined8 *)((longlong)pvVar5 + 0x38);
    pvVar4 = (void *)((longlong)pvVar4 + 0x40);
    pvVar5 = (void *)((longlong)pvVar5 + 0x40);
  }
  return true;
}

// Construct<FRigUnit_SetSplineTransforms> @ 14debc810

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_SetSplineTransforms>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_SetSplineTransforms__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FRigUnit_SetSplineTransforms> @ 14debc850

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_SetSplineTransforms>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_SetSplineTransforms__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FRigUnit_SetSplineTransforms> @ 14debc890

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_SetSplineTransforms>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_SetSplineTransforms> @ 14debc8e0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_SetSplineTransforms>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar4 + 0x10),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar5 + 0x10));
    lVar1 = *(longlong *)((longlong)pvVar4 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x30) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0x38);
    pvVar5 = (void *)((longlong)pvVar5 + 0x38);
  }
  return true;
}

// Construct<FRigUnit_ParameterAtPercentage> @ 14debc9e0

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_ParameterAtPercentage>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_ParameterAtPercentage__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigUnit_ParameterAtPercentage> @ 14debca10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_ParameterAtPercentage>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_ParameterAtPercentage__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigUnit_ParameterAtPercentage> @ 14debca40

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_ParameterAtPercentage>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_ParameterAtPercentage> @ 14debcac0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_ParameterAtPercentage>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    *(undefined4 *)((longlong)pvVar4 + 0x20) = *(undefined4 *)((longlong)pvVar5 + 0x20);
    *(undefined4 *)((longlong)pvVar4 + 0x24) = *(undefined4 *)((longlong)pvVar5 + 0x24);
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
    pvVar5 = (void *)((longlong)pvVar5 + 0x28);
  }
  return true;
}

// Construct<FRigUnit_SetSplinePoints> @ 14debcb70

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_SetSplinePoints>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_SetSplinePoints__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FRigUnit_SetSplinePoints> @ 14debcbb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_SetSplinePoints>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_SetSplinePoints__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FRigUnit_SetSplinePoints> @ 14debcbf0

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_SetSplinePoints>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_SetSplinePoints> @ 14debcc40

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_SetSplinePoints>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar4 + 0x10),
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar5 + 0x10));
    lVar1 = *(longlong *)((longlong)pvVar4 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x30) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0x38);
    pvVar5 = (void *)((longlong)pvVar5 + 0x38);
  }
  return true;
}

// Construct<FRigUnit_ControlRigSplineFromTransforms> @ 14debcd40

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_ControlRigSplineFromTransforms>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_ControlRigSplineFromTransforms__6B_;
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// ConstructForTests<FRigUnit_ControlRigSplineFromTransforms> @ 14debcd80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_ControlRigSplineFromTransforms>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_ControlRigSplineFromTransforms__6B_;
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// Destruct<FRigUnit_ControlRigSplineFromTransforms> @ 14debcdc0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_ControlRigSplineFromTransforms>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_ControlRigSplineFromTransforms> @ 14debce10

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_ControlRigSplineFromTransforms>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  
  pvVar5 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar5 + 8),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + 8));
    *(undefined1 *)((longlong)pvVar5 + 0x18) = *(undefined1 *)((longlong)pvVar1 + 0x18);
    *(undefined1 *)((longlong)pvVar5 + 0x19) = *(undefined1 *)((longlong)pvVar1 + 0x19);
    *(undefined4 *)((longlong)pvVar5 + 0x1c) = *(undefined4 *)((longlong)pvVar1 + 0x1c);
    *(undefined4 *)((longlong)pvVar5 + 0x20) = *(undefined4 *)((longlong)pvVar1 + 0x20);
    *(undefined4 *)((longlong)pvVar5 + 0x24) = *(undefined4 *)((longlong)pvVar1 + 0x24);
    lVar2 = *(longlong *)((longlong)pvVar5 + (longlong)param_2 + (0x38 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x38);
    *(undefined8 *)((longlong)pvVar5 + 0x30) = uVar3;
    *(longlong *)((longlong)pvVar5 + 0x38) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
    pvVar5 = (void *)((longlong)pvVar5 + 0x40);
  }
  return true;
}

// Construct<FRigUnit_ClosestParameterFromControlRigSpline> @ 14debcf30

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_ClosestParameterFromControlRigSpline>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FRigUnit_ClosestParameterFromControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FRigUnit_ClosestParameterFromControlRigSpline> @ 14debcf80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_ClosestParameterFromControlRigSpline>
          (void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FRigUnit_ClosestParameterFromControlRigSpline__6B_;
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FRigUnit_ClosestParameterFromControlRigSpline> @ 14debcfd0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_ClosestParameterFromControlRigSpline>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_ClosestParameterFromControlRigSpline> @ 14debd050

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_ClosestParameterFromControlRigSpline>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = *(longlong *)((longlong)param_2 + (0x18 - (longlong)param_1) + (longlong)pvVar4);
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x18);
    *(undefined8 *)((longlong)pvVar4 + 0x10) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x28);
    *(undefined8 *)((longlong)pvVar4 + 0x20) = *(undefined8 *)((longlong)pvVar5 + 0x20);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar2;
    *(undefined8 *)((longlong)pvVar4 + 0x30) = *(undefined8 *)((longlong)pvVar5 + 0x30);
    *(undefined4 *)((longlong)pvVar4 + 0x38) = *(undefined4 *)((longlong)pvVar5 + 0x38);
    pvVar4 = (void *)((longlong)pvVar4 + 0x40);
    pvVar5 = (void *)((longlong)pvVar5 + 0x40);
  }
  return true;
}

// Construct<FRigUnit_ControlRigSplineFromPoints> @ 14debd130

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_ControlRigSplineFromPoints>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_ControlRigSplineFromPoints__6B_;
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// ConstructForTests<FRigUnit_ControlRigSplineFromPoints> @ 14debd170

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_ControlRigSplineFromPoints>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_ControlRigSplineFromPoints__6B_;
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// Destruct<FRigUnit_ControlRigSplineFromPoints> @ 14debd1b0

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_ControlRigSplineFromPoints>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_ControlRigSplineFromPoints> @ 14debd200

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_ControlRigSplineFromPoints>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  
  pvVar5 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar5 + 8),
               (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + 8));
    *(undefined1 *)((longlong)pvVar5 + 0x18) = *(undefined1 *)((longlong)pvVar1 + 0x18);
    *(undefined1 *)((longlong)pvVar5 + 0x19) = *(undefined1 *)((longlong)pvVar1 + 0x19);
    *(undefined4 *)((longlong)pvVar5 + 0x1c) = *(undefined4 *)((longlong)pvVar1 + 0x1c);
    *(undefined4 *)((longlong)pvVar5 + 0x20) = *(undefined4 *)((longlong)pvVar1 + 0x20);
    *(undefined4 *)((longlong)pvVar5 + 0x24) = *(undefined4 *)((longlong)pvVar1 + 0x24);
    lVar2 = *(longlong *)((longlong)pvVar5 + (longlong)param_2 + (0x38 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x38);
    *(undefined8 *)((longlong)pvVar5 + 0x30) = uVar3;
    *(longlong *)((longlong)pvVar5 + 0x38) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
    pvVar5 = (void *)((longlong)pvVar5 + 0x40);
  }
  return true;
}

// Construct<FRigUnit_FitSplineCurveToChainItemArray> @ 14debdd30

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_FitSplineCurveToChainItemArray>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_FitSplineCurveToChainItemArray__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FRigUnit_FitSplineCurveToChainItemArray> @ 14debdd70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_FitSplineCurveToChainItemArray>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_FitSplineCurveToChainItemArray__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FRigUnit_FitSplineCurveToChainItemArray> @ 14debddb0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_FitSplineCurveToChainItemArray>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_FitSplineCurveToChainItemArray> @ 14debdf00

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_FitSplineCurveToChainItemArray>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar4 + 0x10),
               (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x10));
    lVar1 = *(longlong *)((longlong)pvVar4 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x30) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0x38);
    pvVar5 = (void *)((longlong)pvVar5 + 0x38);
  }
  return true;
}

// Construct<FRigUnit_ControlRigSplineBase> @ 14debe4d0

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_ControlRigSplineBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_ControlRigSplineBase__6B_;
  return;
}

// ConstructForTests<FRigUnit_ControlRigSplineBase> @ 14debe4f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_ControlRigSplineBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigUnit_ControlRigSplineBase__6B_;
  return;
}

// Destruct<FRigUnit_ControlRigSplineBase> @ 14debe510

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_ControlRigSplineBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_ControlRigSplineBase> @ 14debe660

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_ControlRigSplineBase>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FRigUnit_FitSplineCurveToChain> @ 14debf5c0

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_FitSplineCurveToChain>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_FitSplineCurveToChain__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FRigUnit_FitSplineCurveToChain> @ 14debf600

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_FitSplineCurveToChain>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_FitSplineCurveToChain__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FRigUnit_FitSplineCurveToChain> @ 14debf640

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_FitSplineCurveToChain>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_FitSplineCurveToChain> @ 14debf710

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_FitSplineCurveToChain>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = param_1;
  pvVar5 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar4 + 0x10),
               (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x10));
    lVar1 = *(longlong *)((longlong)pvVar4 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x30);
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar2;
    *(longlong *)((longlong)pvVar4 + 0x30) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pvVar4 = (void *)((longlong)pvVar4 + 0x38);
    pvVar5 = (void *)((longlong)pvVar5 + 0x38);
  }
  return true;
}

// Construct<FRigUnit_SplineConstraint> @ 14dec0500

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_SplineConstraint>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_SplineConstraint__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FRigUnit_SplineConstraint> @ 14dec0510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_SplineConstraint>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_SplineConstraint__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FRigUnit_SplineConstraint> @ 14dec0520

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_SplineConstraint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_SplineConstraint> @ 14dec0530

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_SplineConstraint>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  
  pvVar5 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x10),
               (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x10));
    lVar2 = *(longlong *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar5 + 0x28) = uVar3;
    *(longlong *)((longlong)pvVar5 + 0x30) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    *(undefined1 *)((longlong)pvVar5 + 0x38) = *(undefined1 *)((longlong)pvVar1 + 0x38);
    *(undefined4 *)((longlong)pvVar5 + 0x3c) = *(undefined4 *)((longlong)pvVar1 + 0x3c);
    *(undefined4 *)((longlong)pvVar5 + 0x40) = *(undefined4 *)((longlong)pvVar1 + 0x40);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x50);
    *(undefined8 *)((longlong)pvVar5 + 0x48) = *(undefined8 *)((longlong)pvVar1 + 0x48);
    *(undefined8 *)((longlong)pvVar5 + 0x50) = uVar3;
    *(undefined8 *)((longlong)pvVar5 + 0x58) = *(undefined8 *)((longlong)pvVar1 + 0x58);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x68);
    *(undefined8 *)((longlong)pvVar5 + 0x60) = *(undefined8 *)((longlong)pvVar1 + 0x60);
    *(undefined8 *)((longlong)pvVar5 + 0x68) = uVar3;
    *(undefined8 *)((longlong)pvVar5 + 0x70) = *(undefined8 *)((longlong)pvVar1 + 0x70);
    *(undefined1 *)((longlong)pvVar5 + 0x78) = *(undefined1 *)((longlong)pvVar1 + 0x78);
    *(undefined4 *)((longlong)pvVar5 + 0x80) = *(undefined4 *)((longlong)pvVar1 + 0x80);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar5 + 0x88),
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + 0x88));
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x98),
               (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x98));
    TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0xa8),
               (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0xa8));
    pvVar1 = (void *)((longlong)pvVar1 + 0xb8);
    pvVar5 = (void *)((longlong)pvVar5 + 0xb8);
  }
  return true;
}

// Construct<FRigUnit_SplineConstraint_WorkData> @ 14dec0690

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_SplineConstraint_WorkData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FRigUnit_SplineConstraint_WorkData> @ 14dec06c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_SplineConstraint_WorkData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FRigUnit_SplineConstraint_WorkData> @ 14dec06f0

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_SplineConstraint_WorkData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigUnit_SplineConstraint_WorkData> @ 14dec0740

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_SplineConstraint_WorkData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 8),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 8));
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x18),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x18));
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28)
                 ,(TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x28));
      param_2 = (void *)((longlong)param_2 + 0x38);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigUnit_FitChainToSplineCurveItemArray> @ 14dec0930

void __cdecl
UE::CoreUObject::Private::Construct<FRigUnit_FitChainToSplineCurveItemArray>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FLinearColor FVar9;
  undefined8 uVar10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  __m128d _Var15;
  __m128d _Var16;
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_FitChainToSplineCurveItemArray__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xf0) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x100) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x110) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x120) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x130) = auVar8;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xb8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 200))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  *(double (*) [2])((longlong)param_1 + 0xe0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xc;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_b8 = uStack_b8 & 0xffffff00;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar10;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var15 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var14 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var13 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var12 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var11 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  FVar9 = FLinearColor::Red;
  uStack_b0 = FLinearColor::Yellow.field0_0x0._0_8_;
  uStack_a8 = FLinearColor::Yellow.field0_0x0._8_8_;
  uStack_a0 = FLinearColor::Red.field0_0x0._0_8_;
  *(ulonglong *)((longlong)param_1 + 0xb0) = CONCAT44(0x3f800000,uStack_b8);
  *(undefined8 *)((longlong)param_1 + 0xb8) = uStack_b0;
  uStack_98 = FVar9.field0_0x0._8_8_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uStack_a8;
  *(undefined8 *)((longlong)param_1 + 200) = uStack_a0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = uStack_98;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uStack_90;
  *(double (*) [2])((longlong)param_1 + 0xe0) = _Var11.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) = _Var12.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) = _Var13.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) = _Var14.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) = _Var15.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) = _Var16.m128d_f64;
  return;
}

// ConstructForTests<FRigUnit_FitChainToSplineCurveItemArray> @ 14dec0940

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigUnit_FitChainToSplineCurveItemArray>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FLinearColor FVar9;
  undefined8 uVar10;
  __m128d _Var11;
  __m128d _Var12;
  __m128d _Var13;
  __m128d _Var14;
  __m128d _Var15;
  __m128d _Var16;
  uint uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined ***)param_1 = &___7FRigUnit_FitChainToSplineCurveItemArray__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xf0) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x100) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x110) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x120) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x130) = auVar8;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0xb8))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Yellow.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 200))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  *(double (*) [2])((longlong)param_1 + 0xe0) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x140) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xc;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_b8 = uStack_b8 & 0xffffff00;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x80) = uVar10;
  *(double *)((longlong)param_1 + 0x88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 1;
  _Var16 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  _Var15 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  _Var14 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  _Var13 = UE::Math::TTransform<double>::Identity.Translation.XY;
  _Var12 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  _Var11 = UE::Math::TTransform<double>::Identity.Rotation.XY;
  FVar9 = FLinearColor::Red;
  uStack_b0 = FLinearColor::Yellow.field0_0x0._0_8_;
  uStack_a8 = FLinearColor::Yellow.field0_0x0._8_8_;
  uStack_a0 = FLinearColor::Red.field0_0x0._0_8_;
  *(ulonglong *)((longlong)param_1 + 0xb0) = CONCAT44(0x3f800000,uStack_b8);
  *(undefined8 *)((longlong)param_1 + 0xb8) = uStack_b0;
  uStack_98 = FVar9.field0_0x0._8_8_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uStack_a8;
  *(undefined8 *)((longlong)param_1 + 200) = uStack_a0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = uStack_98;
  *(undefined8 *)((longlong)param_1 + 0xd8) = uStack_90;
  *(double (*) [2])((longlong)param_1 + 0xe0) = _Var11.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xf0) = _Var12.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x100) = _Var13.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x110) = _Var14.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) = _Var15.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) = _Var16.m128d_f64;
  return;
}

// Destruct<FRigUnit_FitChainToSplineCurveItemArray> @ 14dec0950

void __cdecl
UE::CoreUObject::Private::Destruct<FRigUnit_FitChainToSplineCurveItemArray>(void *param_1)

{
  FRigUnit_FitChainToCurve_WorkData::~FRigUnit_FitChainToCurve_WorkData
            ((FRigUnit_FitChainToCurve_WorkData *)((longlong)param_1 + 0x140));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FControlRigSpline__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_FitChainToSplineCurveItemArray> @ 14dec09b0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_FitChainToSplineCurveItemArray>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  
  pvVar5 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x10),
               (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x10));
    lVar2 = *(longlong *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar3 = *(undefined8 *)((longlong)pvVar5 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)pvVar5 + 0x30);
    *(undefined8 *)((longlong)pvVar5 + 0x28) = uVar3;
    *(longlong *)((longlong)pvVar5 + 0x30) = lVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    *(undefined1 *)((longlong)pvVar5 + 0x38) = *(undefined1 *)((longlong)pvVar1 + 0x38);
    *(undefined4 *)((longlong)pvVar5 + 0x3c) = *(undefined4 *)((longlong)pvVar1 + 0x3c);
    *(undefined4 *)((longlong)pvVar5 + 0x40) = *(undefined4 *)((longlong)pvVar1 + 0x40);
    *(undefined4 *)((longlong)pvVar5 + 0x44) = *(undefined4 *)((longlong)pvVar1 + 0x44);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x50);
    *(undefined8 *)((longlong)pvVar5 + 0x48) = *(undefined8 *)((longlong)pvVar1 + 0x48);
    *(undefined8 *)((longlong)pvVar5 + 0x50) = uVar3;
    *(undefined8 *)((longlong)pvVar5 + 0x58) = *(undefined8 *)((longlong)pvVar1 + 0x58);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x68);
    *(undefined8 *)((longlong)pvVar5 + 0x60) = *(undefined8 *)((longlong)pvVar1 + 0x60);
    *(undefined8 *)((longlong)pvVar5 + 0x68) = uVar3;
    *(undefined8 *)((longlong)pvVar5 + 0x70) = *(undefined8 *)((longlong)pvVar1 + 0x70);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x80);
    *(undefined8 *)((longlong)pvVar5 + 0x78) = *(undefined8 *)((longlong)pvVar1 + 0x78);
    *(undefined8 *)((longlong)pvVar5 + 0x80) = uVar3;
    *(undefined8 *)((longlong)pvVar5 + 0x88) = *(undefined8 *)((longlong)pvVar1 + 0x88);
    TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar5 + 0x90),
               (TArray<FRigUnit_FitChainToCurve_Rotation,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + 0x90));
    *(undefined1 *)((longlong)pvVar5 + 0xa0) = *(undefined1 *)((longlong)pvVar1 + 0xa0);
    *(undefined4 *)((longlong)pvVar5 + 0xa4) = *(undefined4 *)((longlong)pvVar1 + 0xa4);
    *(undefined1 *)((longlong)pvVar5 + 0xa8) = *(undefined1 *)((longlong)pvVar1 + 0xa8);
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0xb8);
    *(undefined8 *)((longlong)pvVar5 + 0xb0) = *(undefined8 *)((longlong)pvVar1 + 0xb0);
    *(undefined8 *)((longlong)pvVar5 + 0xb8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 200);
    *(undefined8 *)((longlong)pvVar5 + 0xc0) = *(undefined8 *)((longlong)pvVar1 + 0xc0);
    *(undefined8 *)((longlong)pvVar5 + 200) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0xd8);
    *(undefined8 *)((longlong)pvVar5 + 0xd0) = *(undefined8 *)((longlong)pvVar1 + 0xd0);
    *(undefined8 *)((longlong)pvVar5 + 0xd8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0xe8);
    *(undefined8 *)((longlong)pvVar5 + 0xe0) = *(undefined8 *)((longlong)pvVar1 + 0xe0);
    *(undefined8 *)((longlong)pvVar5 + 0xe8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0xf8);
    *(undefined8 *)((longlong)pvVar5 + 0xf0) = *(undefined8 *)((longlong)pvVar1 + 0xf0);
    *(undefined8 *)((longlong)pvVar5 + 0xf8) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x108);
    *(undefined8 *)((longlong)pvVar5 + 0x100) = *(undefined8 *)((longlong)pvVar1 + 0x100);
    *(undefined8 *)((longlong)pvVar5 + 0x108) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x118);
    *(undefined8 *)((longlong)pvVar5 + 0x110) = *(undefined8 *)((longlong)pvVar1 + 0x110);
    *(undefined8 *)((longlong)pvVar5 + 0x118) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x128);
    *(undefined8 *)((longlong)pvVar5 + 0x120) = *(undefined8 *)((longlong)pvVar1 + 0x120);
    *(undefined8 *)((longlong)pvVar5 + 0x128) = uVar3;
    uVar3 = *(undefined8 *)((longlong)pvVar1 + 0x138);
    *(undefined8 *)((longlong)pvVar5 + 0x130) = *(undefined8 *)((longlong)pvVar1 + 0x130);
    *(undefined8 *)((longlong)pvVar5 + 0x138) = uVar3;
    FRigUnit_FitChainToCurve_WorkData::operator=
              ((FRigUnit_FitChainToCurve_WorkData *)((longlong)pvVar5 + 0x140),
               (FRigUnit_FitChainToCurve_WorkData *)((longlong)pvVar1 + 0x140));
    pvVar1 = (void *)((longlong)pvVar1 + 0x1e0);
    pvVar5 = (void *)((longlong)pvVar5 + 0x1e0);
  }
  return true;
}

