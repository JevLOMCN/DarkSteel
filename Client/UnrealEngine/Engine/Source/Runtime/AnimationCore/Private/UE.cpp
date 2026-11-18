// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 85

// Construct<FTransformConstraintDescription> @ 1423735e0

void __cdecl UE::CoreUObject::Private::Construct<FTransformConstraintDescription>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x101;
  *(undefined ***)param_1 = &___7FTransformConstraintDescription__6B_;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FTransformConstraintDescription> @ 142373600

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTransformConstraintDescription>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x101;
  *(undefined ***)param_1 = &___7FTransformConstraintDescription__6B_;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FTransformConstraintDescription> @ 142373620

void __cdecl UE::CoreUObject::Private::Destruct<FTransformConstraintDescription>(void *param_1)

{
  *(undefined ***)param_1 = &___7FConstraintDescriptionEx__6B_;
  return;
}

// Copy<FTransformConstraintDescription> @ 142373d20

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformConstraintDescription>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)pvVar1 + 8) =
         *(undefined2 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (10 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x18);
  }
  return true;
}

// Construct<FConstraintDescriptionEx> @ 142374110

void __cdecl UE::CoreUObject::Private::Construct<FConstraintDescriptionEx>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FConstraintDescriptionEx__6B_;
  *(undefined2 *)((longlong)param_1 + 8) = 0x101;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// ConstructForTests<FConstraintDescriptionEx> @ 142374140

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintDescriptionEx>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x101;
  *(undefined ***)param_1 = &___7FConstraintDescriptionEx__6B_;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// Destruct<FConstraintDescriptionEx> @ 142374160

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintDescriptionEx>(void *param_1)

{
  *(undefined ***)param_1 = &___7FConstraintDescriptionEx__6B_;
  return;
}

// Copy<FConstraintDescriptionEx> @ 142374180

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintDescriptionEx>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)pvVar1 + 8) =
         *(undefined2 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (10 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x10);
  }
  return true;
}

// Construct<FTransformConstraint> @ 1423763c0

void __cdecl UE::CoreUObject::Private::Construct<FTransformConstraint>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 8) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// ConstructForTests<FTransformConstraint> @ 142376400

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransformConstraint>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 8) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// Destruct<FTransformConstraint> @ 142376440

void __cdecl UE::CoreUObject::Private::Destruct<FTransformConstraint>(void *param_1)

{
  return;
}

// Copy<FTransformConstraint> @ 142376450

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformConstraint>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FConstraintOffset> @ 142376490

void __cdecl UE::CoreUObject::Private::Construct<FConstraintOffset>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
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
  return;
}

// ConstructForTests<FConstraintOffset> @ 142376530

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintOffset>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
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
  return;
}

// Destruct<FConstraintOffset> @ 1423765d0

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintOffset>(void *param_1)

{
  return;
}

// Copy<FConstraintOffset> @ 1423765e0

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintOffset>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  
  if (param_3 != 0) {
    puVar25 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar25);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      uVar21 = puVar1[0x14];
      uVar22 = puVar1[0x15];
      uVar23 = puVar1[0x16];
      uVar24 = puVar1[0x17];
      *puVar25 = *puVar1;
      puVar25[1] = uVar2;
      puVar25[2] = uVar3;
      puVar25[3] = uVar4;
      puVar25[4] = uVar5;
      puVar25[5] = uVar6;
      puVar25[6] = uVar7;
      puVar25[7] = uVar8;
      puVar25[8] = uVar9;
      puVar25[9] = uVar10;
      puVar25[10] = uVar11;
      puVar25[0xb] = uVar12;
      puVar25[0xc] = uVar13;
      puVar25[0xd] = uVar14;
      puVar25[0xe] = uVar15;
      puVar25[0xf] = uVar16;
      puVar25[0x10] = uVar17;
      puVar25[0x11] = uVar18;
      puVar25[0x12] = uVar19;
      puVar25[0x13] = uVar20;
      puVar25[0x14] = uVar21;
      puVar25[0x15] = uVar22;
      puVar25[0x16] = uVar23;
      puVar25[0x17] = uVar24;
      param_3 = param_3 + -1;
      puVar25 = puVar25 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FConstraintDescription> @ 142378560

void __cdecl UE::CoreUObject::Private::Construct<FConstraintDescription>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 8) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// ConstructForTests<FConstraintDescription> @ 142378580

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintDescription>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 8) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Destruct<FConstraintDescription> @ 1423785a0

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintDescription>(void *param_1)

{
  return;
}

// Copy<FConstraintDescription> @ 1423785f0

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintDescription>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar3 + 8 + (longlong)param_1);
      uVar1 = *(undefined1 *)(lVar3 + 0xc + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar2;
      *(undefined1 *)((longlong)param_1 + 0xc) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xd);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTransformFilter> @ 142378670

void __cdecl UE::CoreUObject::Private::Construct<FTransformFilter>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FTransformFilter> @ 142378690

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransformFilter>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 4) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FTransformFilter> @ 1423786b0

void __cdecl UE::CoreUObject::Private::Destruct<FTransformFilter>(void *param_1)

{
  return;
}

// Copy<FTransformFilter> @ 1423786c0

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformFilter>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 9);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFilterOptionPerAxis> @ 142378700

void __cdecl UE::CoreUObject::Private::Construct<FFilterOptionPerAxis>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// ConstructForTests<FFilterOptionPerAxis> @ 142378710

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFilterOptionPerAxis>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Destruct<FFilterOptionPerAxis> @ 142378720

void __cdecl UE::CoreUObject::Private::Destruct<FFilterOptionPerAxis>(void *param_1)

{
  return;
}

// Copy<FFilterOptionPerAxis> @ 142378730

bool __cdecl
UE::CoreUObject::Private::Copy<FFilterOptionPerAxis>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCCDIKChainLink> @ 1423787f0

void __cdecl UE::CoreUObject::Private::Construct<FCCDIKChainLink>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)param_1 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x10) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x18) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x80) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x88) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x90) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x98) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xa0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xb0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FCCDIKChainLink> @ 1423788c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCCDIKChainLink>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)param_1 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x10) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x18) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x80) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x88) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x90) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x98) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0xa0) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0xa8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0xb0) = (double)fVar2;
  *(double *)((longlong)param_1 + 0xb8) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FCCDIKChainLink> @ 142378990

void __cdecl UE::CoreUObject::Private::Destruct<FCCDIKChainLink>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 200);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FCCDIKChainLink> @ 1423789b0

bool __cdecl
UE::CoreUObject::Private::Copy<FCCDIKChainLink>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar2;
    uVar2 = puVar1[3];
    puVar3[2] = puVar1[2];
    puVar3[3] = uVar2;
    uVar2 = puVar1[5];
    puVar3[4] = puVar1[4];
    puVar3[5] = uVar2;
    uVar2 = puVar1[7];
    puVar3[6] = puVar1[6];
    puVar3[7] = uVar2;
    uVar2 = puVar1[9];
    puVar3[8] = puVar1[8];
    puVar3[9] = uVar2;
    uVar2 = puVar1[0xb];
    puVar3[10] = puVar1[10];
    puVar3[0xb] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x68 - (longlong)param_1));
    puVar3[0xc] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x60 - (longlong)param_1))
    ;
    puVar3[0xd] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
    puVar3[0xe] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x70 - (longlong)param_1))
    ;
    puVar3[0xf] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x88 - (longlong)param_1));
    puVar3[0x10] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x80 - (longlong)param_1));
    puVar3[0x11] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x98 - (longlong)param_1));
    puVar3[0x12] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0x90 - (longlong)param_1));
    puVar3[0x13] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    puVar3[0x14] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    puVar3[0x15] = uVar2;
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    puVar3[0x16] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    puVar3[0x17] = uVar2;
    *(undefined4 *)(puVar3 + 0x18) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar3 + 0x19),
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((longlong)puVar3 + (longlong)param_2 + (200 - (longlong)param_1)));
    puVar1 = puVar1 + 0x1c;
    puVar3[0x1b] = *(undefined8 *)
                    ((longlong)puVar3 + (longlong)param_2 + (0xd8 - (longlong)param_1));
    puVar3 = puVar3 + 0x1c;
  }
  return true;
}

// Construct<FTransformNoScale> @ 142379080

void __cdecl UE::CoreUObject::Private::Construct<FTransformNoScale>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FTransformNoScale> @ 1423790b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransformNoScale>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FTransformNoScale> @ 1423790e0

void __cdecl UE::CoreUObject::Private::Destruct<FTransformNoScale>(void *param_1)

{
  return;
}

// Copy<FTransformNoScale> @ 1423790f0

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformNoScale>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNodeHierarchyWithUserData> @ 142379250

void __cdecl UE::CoreUObject::Private::Construct<FNodeHierarchyWithUserData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FNodeHierarchyWithUserData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FNodeHierarchyWithUserData> @ 1423792b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodeHierarchyWithUserData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FNodeHierarchyWithUserData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FNodeHierarchyWithUserData> @ 142379300

void __cdecl UE::CoreUObject::Private::Destruct<FNodeHierarchyWithUserData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined ***)param_1 = &___7FNodeHierarchyWithUserData__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FNodeHierarchyWithUserData> @ 142379370

bool __cdecl
UE::CoreUObject::Private::Copy<FNodeHierarchyWithUserData>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FNodeHierarchyData *this;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      lVar1 = (longlong)pvVar2 + (8 - (longlong)param_1);
      this = (FNodeHierarchyData *)((longlong)pvVar2 + 8);
      pvVar2 = (void *)((longlong)pvVar2 + 0x78);
      FNodeHierarchyData::operator=(this,(FNodeHierarchyData *)((longlong)param_2 + lVar1));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNodeHierarchyData> @ 142379620

void __cdecl UE::CoreUObject::Private::Construct<FNodeHierarchyData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FNodeHierarchyData> @ 142379670

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodeHierarchyData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FNodeHierarchyData> @ 1423796b0

void __cdecl UE::CoreUObject::Private::Destruct<FNodeHierarchyData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FNodeHierarchyData> @ 142379750

bool __cdecl
UE::CoreUObject::Private::Copy<FNodeHierarchyData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ForAnyElementType *pFVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar9;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar7);
      if (pFVar7 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar9 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,iVar5,pFVar7,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar7->Data,pFVar9,(longlong)iVar4 << 4);
          }
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        pFVar9 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar4,iVar5,pFVar2,iVar4,piVar1);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar9,(longlong)iVar4 * 0x60);
          }
        }
      }
      this = (TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(pFVar7 + 4);
      if (this != (TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(pFVar3 + 4)) {
        uVar6 = *(uint *)&pFVar3[0xd].Data;
        uVar8 = uVar6;
        if (uVar6 < 2) {
          if (pFVar7[0xc].Data != (FScriptContainerElement *)0x0) {
            uVar8 = 0;
            goto LAB_142379899;
          }
        }
        else {
LAB_142379899:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (pFVar7 + 0xc,0,uVar8,4);
        }
        pFVar9 = (FScriptContainerElement *)(pFVar3 + 0xb);
        if (pFVar3[0xc].Data != (FScriptContainerElement *)0x0) {
          pFVar9 = pFVar3[0xc].Data;
        }
        _Dst = (FScriptContainerElement *)(pFVar7 + 0xb);
        if (pFVar7[0xc].Data != (FScriptContainerElement *)0x0) {
          _Dst = pFVar7[0xc].Data;
        }
        if (uVar6 != 0) {
          memcpy(_Dst,pFVar9,(longlong)(int)uVar6 << 2);
        }
        *(uint *)&pFVar7[0xd].Data = uVar6;
        iVar4 = *(int *)&pFVar3[5].Data;
        TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar4);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar4,(ForAnyElementType *)this,(int *)(pFVar7 + 5),
                   (int *)((longlong)&pFVar7[5].Data + 4));
        *(undefined4 *)&pFVar7[10].Data = *(undefined4 *)&pFVar3[10].Data;
        *(undefined4 *)((longlong)&pFVar7[10].Data + 4) =
             *(undefined4 *)((longlong)&pFVar3[10].Data + 4);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar7 + 6) !=
            (TBitArray<FDefaultBitArrayAllocator> *)(pFVar3 + 6)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar7 + 6),
                     (TBitArray<FDefaultBitArrayAllocator> *)(pFVar3 + 6));
        }
        if (iVar4 != 0) {
          memcpy(*(void **)this,*(void **)(pFVar3 + 4),(longlong)iVar4 * 0x14);
        }
      }
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 0xe;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNodeObject> @ 14237a000

void __cdecl UE::CoreUObject::Private::Construct<FNodeObject>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNodeObject> @ 14237a010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodeObject>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNodeObject> @ 14237a020

void __cdecl UE::CoreUObject::Private::Destruct<FNodeObject>(void *param_1)

{
  return;
}

// Construct<FFABRIKChainLink> @ 14237a070

void __cdecl UE::CoreUObject::Private::Construct<FFABRIKChainLink>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FFABRIKChainLink> @ 14237a0c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFABRIKChainLink>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  return;
}

// Destruct<FFABRIKChainLink> @ 14237a110

void __cdecl UE::CoreUObject::Private::Destruct<FFABRIKChainLink>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FNodeObject> @ 14237a130

bool __cdecl UE::CoreUObject::Private::Copy<FNodeObject>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FFABRIKChainLink> @ 14237a160

bool __cdecl
UE::CoreUObject::Private::Copy<FFABRIKChainLink>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar2;
    puVar3[2] = puVar1[2];
    puVar3[3] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)(puVar3 + 4) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)puVar3 + 0x24) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x24 - (longlong)param_1));
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    puVar3[5] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    puVar3[6] = uVar2;
    puVar3[7] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar3 + 8),
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               ((longlong)puVar3 + (longlong)param_2 + (0x40 - (longlong)param_1)));
    puVar1 = puVar1 + 10;
    puVar3 = puVar3 + 10;
  }
  return true;
}

// Construct<FEulerTransform> @ 14237aa30

void __cdecl UE::CoreUObject::Private::Construct<FEulerTransform>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FEulerTransform> @ 14237aa70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEulerTransform>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FEulerTransform> @ 14237aab0

void __cdecl UE::CoreUObject::Private::Destruct<FEulerTransform>(void *param_1)

{
  return;
}

// Copy<FEulerTransform> @ 14237aac0

bool __cdecl
UE::CoreUObject::Private::Copy<FEulerTransform>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNodeChain> @ 14237ab50

void __cdecl UE::CoreUObject::Private::Construct<FNodeChain>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNodeChain> @ 14237ab60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNodeChain>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNodeChain> @ 14237abb0

void __cdecl UE::CoreUObject::Private::Destruct<FNodeChain>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FNodeChain> @ 14237ac10

bool __cdecl UE::CoreUObject::Private::Copy<FNodeChain>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FConstraintData> @ 14237acf0

void __cdecl UE::CoreUObject::Private::Construct<FConstraintData>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  *(undefined1 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xc0) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd0) = auVar8;
  return;
}

// ConstructForTests<FConstraintData> @ 14237adb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintData>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  *(undefined1 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xa0) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xb0) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xc0) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd0) = auVar8;
  return;
}

// Destruct<FConstraintData> @ 14237ae70

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintData>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// Copy<FConstraintData> @ 14237aea0

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintData>(void *param_1,void *param_2,int param_3)

{
  FConstraintDescriptionEx *pFVar1;
  undefined3 uVar2;
  undefined7 uVar3;
  FConstraintDescriptor *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FConstraintDescriptor::operator=(param_1,param_2);
    uVar2 = *(undefined3 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x10))->field_0x1;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x10))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x10))->Type;
    *(undefined3 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x10))->field_0x1 = uVar2;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x10))->field_0x4 =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x10))->field_0x4;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x20))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0x20))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x20))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x20))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x20))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x20))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x30))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0x30))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x30))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x30))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x30))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x30))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x40))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0x40))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x40))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x40))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x40))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x40))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x50))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0x50))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x50))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x50))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x50))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x50))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x60))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0x60))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x60))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x60))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x60))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x60))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x70))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0x70))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x70))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x70))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x70))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x70))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x80))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0x80))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x80))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x80))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x80))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x80))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0x90))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0x90))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x90))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0x90))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0x90))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0x90))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0xa0))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0xa0))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0xa0))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0xa0))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0xa0))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0xa0))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0xb0))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0xb0))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0xb0))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0xb0))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0xb0))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0xb0))->ConstraintDescription = pFVar1;
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0xc0))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0xc0))->ConstraintDescription;
    ((FConstraintDescriptor *)((longlong)param_1 + 0xc0))->Type =
         ((FConstraintDescriptor *)((longlong)param_2 + 0xc0))->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0xc0))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0xc0))->ConstraintDescription = pFVar1;
    pFVar4 = (FConstraintDescriptor *)((longlong)param_2 + 0xd0);
    uVar3 = *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_2 + 0xd0))->field_0x1;
    pFVar1 = ((FConstraintDescriptor *)((longlong)param_2 + 0xd0))->ConstraintDescription;
    param_2 = (void *)((longlong)param_2 + 0xe0);
    ((FConstraintDescriptor *)((longlong)param_1 + 0xd0))->Type = pFVar4->Type;
    *(undefined7 *)&((FConstraintDescriptor *)((longlong)param_1 + 0xd0))->field_0x1 = uVar3;
    ((FConstraintDescriptor *)((longlong)param_1 + 0xd0))->ConstraintDescription = pFVar1;
    param_1 = (FConstraintDescriptor *)((longlong)param_1 + 0xe0);
  }
  return true;
}

// Construct<FAxis> @ 14237afb0

void __cdecl UE::CoreUObject::Private::Construct<FAxis>(void *param_1)

{
  FAxis::FAxis(param_1,&UE::Math::TVector<double>::ForwardVector);
  return;
}

// ConstructForTests<FAxis> @ 14237afd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAxis>(void *param_1)

{
  FAxis::FAxis(param_1,&UE::Math::TVector<double>::ForwardVector);
  return;
}

// Destruct<FAxis> @ 14237aff0

void __cdecl UE::CoreUObject::Private::Destruct<FAxis>(void *param_1)

{
  return;
}

// Copy<FAxis> @ 14237b000

bool __cdecl UE::CoreUObject::Private::Copy<FAxis>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FConstraintDescriptor> @ 14237b040

void __cdecl UE::CoreUObject::Private::Construct<FConstraintDescriptor>(void *param_1)

{
  *(undefined1 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FConstraintDescriptor> @ 14237b060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintDescriptor>(void *param_1)

{
  *(undefined1 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FConstraintDescriptor> @ 14237b080

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintDescriptor>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)((longlong)param_1 + 8) = 0;
  }
  return;
}

// Copy<FConstraintDescriptor> @ 14237b0b0

/* WARNING: Removing unreachable block (ram,0x00014237b141) */

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintDescriptor>(void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  FAimConstraintDescription *pFVar2;
  FConstraintDescriptionEx *pFVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar3 = ((FConstraintDescriptor *)param_1)->ConstraintDescription;
    if (pFVar3 != (FConstraintDescriptionEx *)0x0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      ((FConstraintDescriptor *)param_1)->ConstraintDescription = (FConstraintDescriptionEx *)0x0;
    }
    ((FConstraintDescriptor *)param_1)->Type = *(EConstraintType *)param_2;
    pFVar2 = *(FAimConstraintDescription **)((longlong)param_2 + 8);
    if (pFVar2 != (FAimConstraintDescription *)0x0) {
      if (*(EConstraintType *)param_2 == Transform) {
        pFVar3 = ::operator_new(0x18);
        if (pFVar3 == (FConstraintDescriptionEx *)0x0) {
          ((FConstraintDescriptor *)param_1)->ConstraintDescription =
               (FConstraintDescriptionEx *)0x0;
        }
        else {
          pFVar3->_padding_ = (longlong)&___7FConstraintDescriptionEx__6B_;
          uVar1 = (undefined2)pFVar2->_padding_;
          (pFVar3->AxesFilterOption).bX = (bool)(char)uVar1;
          (pFVar3->AxesFilterOption).bY = (bool)(char)((ushort)uVar1 >> 8);
          (pFVar3->AxesFilterOption).bZ = *(bool *)((longlong)&pFVar2->_padding_ + 2);
          pFVar3->_padding_ = (longlong)&___7FTransformConstraintDescription__6B_;
          *(undefined1 *)&pFVar3[1]._padding_ =
               *(undefined1 *)&(pFVar2->LookAt_Axis).Axis.field0_0x0;
          ((FConstraintDescriptor *)param_1)->ConstraintDescription = pFVar3;
        }
      }
      else if (*(EConstraintType *)param_2 == Aim) {
        FConstraintDescriptor::Set(param_1,pFVar2);
      }
    }
    param_1 = (FConstraintDescriptor *)((longlong)param_1 + 0x10);
    param_2 = (EConstraintType *)((longlong)param_2 + 0x10);
  }
  return true;
}

// Construct<FAimConstraintDescription> @ 14237b1e0

void __cdecl UE::CoreUObject::Private::Construct<FAimConstraintDescription>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x101;
  *(undefined ***)param_1 = &___7FAimConstraintDescription__6B_;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  FAxis::FAxis((FAxis *)((longlong)param_1 + 0x10),&UE::Math::TVector<double>::ForwardVector);
  FAxis::FAxis((FAxis *)((longlong)param_1 + 0x30),&UE::Math::TVector<double>::UpVector);
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FAimConstraintDescription> @ 14237b240

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAimConstraintDescription>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x101;
  *(undefined ***)param_1 = &___7FAimConstraintDescription__6B_;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  FAxis::FAxis((FAxis *)((longlong)param_1 + 0x10),&UE::Math::TVector<double>::ForwardVector);
  FAxis::FAxis((FAxis *)((longlong)param_1 + 0x30),&UE::Math::TVector<double>::UpVector);
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FAimConstraintDescription> @ 14237b2a0

void __cdecl UE::CoreUObject::Private::Destruct<FAimConstraintDescription>(void *param_1)

{
  *(undefined ***)param_1 = &___7FConstraintDescriptionEx__6B_;
  return;
}

// Copy<FAimConstraintDescription> @ 14237b2c0

bool __cdecl
UE::CoreUObject::Private::Copy<FAimConstraintDescription>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined2 *)((longlong)param_1 + 8) = *(undefined2 *)((longlong)param_2 + 8);
    *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x50) = *(undefined1 *)((longlong)param_2 + 0x50);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    param_1 = (void *)((longlong)param_1 + 0x70);
    param_2 = (void *)((longlong)param_2 + 0x70);
  }
  return true;
}

// ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_> @ 14237d800

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::AnimationCore::FBoneWeight> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xd) {
      iVar1 = 0xc;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_> @ 14237d8a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
          (ushort param_1,ForElementType<UE::AnimationCore::FBoneWeight> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_> @ 14237d970

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
          (ushort param_1,ForElementType<UE::AnimationCore::FBoneWeight> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xd) {
      iVar8 = 0xc;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xd) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 14237da40

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0xd) {
      iVar8 = 0xc;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0xd) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_> @ 14237db20

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::AnimationCore::FBoneWeight> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0xd) {
      iVar8 = 0xc;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0xd) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 14237dc00

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0xd) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_> @ 14237dcc0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
          (uint param_1,uint param_2,ForElementType<UE::AnimationCore::FBoneWeight> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0xd) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_> @ 14237dd80

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::AnimationCore::FBoneWeight> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_> @ 14237de00

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::AnimationCore::FBoneWeight> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xd) {
      iVar1 = 0xc;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::AnimationCore::FBoneWeight>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

