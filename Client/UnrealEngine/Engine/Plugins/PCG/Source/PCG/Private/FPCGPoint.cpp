// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 18

// FPCGPoint @ 149738ad0

FPCGPoint * __thiscall FPCGPoint::FPCGPoint(FPCGPoint *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar7;
  uVar10 = __xmm_80000000000000008000000000000000;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar8;
  this->Density = 1.0;
  uVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uVar15 = (uint)uVar10;
  uVar16 = (uint)((ulonglong)uVar10 >> 0x20);
  (this->BoundsMin).field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar16,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar15);
  (this->BoundsMin).field0_0x0._s_0.X = (double)CONCAT44(uVar12 ^ uVar16,uVar11 ^ uVar15);
  (this->BoundsMin).field0_0x0._s_0.Y = (double)CONCAT44(uVar14 ^ uVar16,uVar13 ^ uVar15);
  dVar9 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::OneVector.field0_0x0._8_4_);
  (this->BoundsMax).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  (this->BoundsMax).field0_0x0._s_0.Y = dVar9;
  (this->BoundsMax).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->Color).field0_0x0._s_0.X = 1.0;
  (this->Color).field0_0x0._s_0.Y = 1.0;
  (this->Color).field0_0x0._s_0.Z = 1.0;
  (this->Color).field0_0x0._s_0.W = 1.0;
  this->Steepness = 0.5;
  this->Seed = 0;
  this->MetadataEntry = -1;
  return this;
}

// StaticStruct @ 149f1a7d0

UScriptStruct * __cdecl FPCGPoint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPoint.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPoint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPoint,(UObject *)pUVar1,L"PCGPoint");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPoint.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 149f1fed0

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l21::<lambda_10>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)((longlong)param_2 + 8);
  dVar1 = *(double *)((longlong)param_2 + 0x10);
  (param_1->Transform).Scale3D.XY.m128d_f64[0] = *(double *)param_2;
  (param_1->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  (param_1->Transform).Scale3D.ZW.m128d_f64[0] = dVar1;
  (param_1->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
  return true;
}

// <lambda_invoker_cdecl> @ 149f1fef0

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l25::<lambda_11>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  dVar2 = (param_1->BoundsMax).field0_0x0._s_0.Z;
  dVar3 = (param_1->BoundsMin).field0_0x0._s_0.Y;
  dVar4 = (param_1->BoundsMin).field0_0x0._s_0.Z;
  *(double *)param_2 =
       (param_1->BoundsMax).field0_0x0._s_0.X - (param_1->BoundsMin).field0_0x0._s_0.X;
  *(double *)((longlong)param_2 + 8) = dVar1 - dVar3;
  *(double *)((longlong)param_2 + 0x10) = dVar2 - dVar4;
  return true;
}

// <lambda_invoker_cdecl> @ 149f1ff30

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l29::<lambda_12>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  dVar1 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  dVar2 = (param_1->BoundsMin).field0_0x0._s_0.Y;
  dVar3 = (param_1->BoundsMax).field0_0x0._s_0.Z;
  dVar4 = (param_1->BoundsMin).field0_0x0._s_0.Z;
  dVar6 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  *(double *)param_2 =
       ((param_1->BoundsMax).field0_0x0._s_0.X - (param_1->BoundsMin).field0_0x0._s_0.X) *
       (param_1->Transform).Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_2 + 8) = (dVar1 - dVar2) * dVar5;
  *(double *)((longlong)param_2 + 0x10) = (dVar3 - dVar4) * dVar6;
  return true;
}

// <lambda_invoker_cdecl> @ 149f1ffa0

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = ((param_1->BoundsMax).field0_0x0._s_0.Y - (param_1->BoundsMin).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar1 = ((param_1->BoundsMax).field0_0x0._s_0.Z - (param_1->BoundsMin).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  *(double *)param_2 =
       ((param_1->BoundsMax).field0_0x0._s_0.X - (param_1->BoundsMin).field0_0x0._s_0.X) *
       __real_3fe0000000000000;
  *(double *)((longlong)param_2 + 8) = dVar2;
  *(double *)((longlong)param_2 + 0x10) = dVar1;
  return true;
}

// <lambda_invoker_cdecl> @ 149f20000

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = ((param_1->BoundsMin).field0_0x0._s_0.X + (param_1->BoundsMax).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar4 = ((param_1->BoundsMin).field0_0x0._s_0.Y + (param_1->BoundsMax).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar3 = ((param_1->BoundsMin).field0_0x0._s_0.Z + (param_1->BoundsMax).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  dVar1 = *(double *)((longlong)param_2 + 8);
  dVar2 = *(double *)((longlong)param_2 + 0x10);
  (param_1->BoundsMin).field0_0x0._s_0.X = dVar5 - *(double *)param_2;
  (param_1->BoundsMin).field0_0x0._s_0.Y = dVar4 - dVar1;
  (param_1->BoundsMin).field0_0x0._s_0.Z = dVar3 - dVar2;
  dVar1 = *(double *)((longlong)param_2 + 0x10);
  dVar2 = *(double *)param_2;
  (param_1->BoundsMax).field0_0x0._s_0.Y = dVar4 + *(double *)((longlong)param_2 + 8);
  (param_1->BoundsMax).field0_0x0._s_0.Z = dVar3 + dVar1;
  (param_1->BoundsMax).field0_0x0._s_0.X = dVar5 + dVar2;
  return true;
}

// <lambda_invoker_cdecl> @ 149f20090

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l9::<lambda_3>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = ((param_1->BoundsMin).field0_0x0._s_0.Y + (param_1->BoundsMax).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar1 = ((param_1->BoundsMin).field0_0x0._s_0.Z + (param_1->BoundsMax).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  *(double *)param_2 =
       ((param_1->BoundsMin).field0_0x0._s_0.X + (param_1->BoundsMax).field0_0x0._s_0.X) *
       __real_3fe0000000000000;
  *(double *)((longlong)param_2 + 8) = dVar2;
  *(double *)((longlong)param_2 + 0x10) = dVar1;
  return true;
}

// <lambda_invoker_cdecl> @ 149f20100

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l9::<lambda_4>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = *(double *)param_2 -
          ((param_1->BoundsMin).field0_0x0._s_0.X + (param_1->BoundsMax).field0_0x0._s_0.X) *
          __real_3fe0000000000000;
  dVar3 = *(double *)((longlong)param_2 + 0x10) -
          ((param_1->BoundsMin).field0_0x0._s_0.Z + (param_1->BoundsMax).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  dVar4 = *(double *)((longlong)param_2 + 8) -
          ((param_1->BoundsMin).field0_0x0._s_0.Y + (param_1->BoundsMax).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar1 = (param_1->BoundsMin).field0_0x0._s_0.Y;
  (param_1->BoundsMin).field0_0x0._s_0.X = dVar5 + (param_1->BoundsMin).field0_0x0._s_0.X;
  dVar2 = (param_1->BoundsMin).field0_0x0._s_0.Z;
  (param_1->BoundsMin).field0_0x0._s_0.Y = dVar4 + dVar1;
  (param_1->BoundsMin).field0_0x0._s_0.Z = dVar3 + dVar2;
  dVar1 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  dVar2 = (param_1->BoundsMax).field0_0x0._s_0.Z;
  (param_1->BoundsMax).field0_0x0._s_0.X = dVar5 + (param_1->BoundsMax).field0_0x0._s_0.X;
  (param_1->BoundsMax).field0_0x0._s_0.Y = dVar4 + dVar1;
  (param_1->BoundsMax).field0_0x0._s_0.Z = dVar3 + dVar2;
  return true;
}

// <lambda_invoker_cdecl> @ 149f201c0

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l13::<lambda_5>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->Transform).Translation.XY.m128d_f64[1];
  dVar1 = (param_1->Transform).Translation.ZW.m128d_f64[0];
  *(double *)param_2 = (param_1->Transform).Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_2 + 8) = dVar2;
  *(double *)((longlong)param_2 + 0x10) = dVar1;
  return true;
}

// <lambda_invoker_cdecl> @ 149f201e0

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l13::<lambda_6>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)((longlong)param_2 + 8);
  dVar1 = *(double *)((longlong)param_2 + 0x10);
  (param_1->Transform).Translation.XY.m128d_f64[0] = *(double *)param_2;
  (param_1->Transform).Translation.XY.m128d_f64[1] = dVar2;
  (param_1->Transform).Translation.ZW.m128d_f64[0] = dVar1;
  (param_1->Transform).Translation.ZW.m128d_f64[1] = 0.0;
  return true;
}

// <lambda_invoker_cdecl> @ 149f20200

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l17::<lambda_7>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  dVar2 = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  dVar3 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  *(double *)param_2 = (param_1->Transform).Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_2 + 8) = dVar1;
  *(double *)((longlong)param_2 + 0x10) = dVar2;
  *(double *)((longlong)param_2 + 0x18) = dVar3;
  return true;
}

// <lambda_invoker_cdecl> @ 149f20220

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l17::<lambda_8>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)((longlong)param_2 + 8);
  dVar2 = *(double *)((longlong)param_2 + 0x10);
  dVar3 = *(double *)((longlong)param_2 + 0x18);
  (param_1->Transform).Rotation.XY.m128d_f64[0] = *(double *)param_2;
  (param_1->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  (param_1->Transform).Rotation.ZW.m128d_f64[0] = dVar2;
  (param_1->Transform).Rotation.ZW.m128d_f64[1] = dVar3;
  return true;
}

// <lambda_invoker_cdecl> @ 149f20240

bool __cdecl
`FPCGPoint::CreateCustomPropertyAccessor'::__l21::<lambda_9>::<lambda_invoker_cdecl>
          (FPCGPoint *param_1,void *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  dVar1 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  *(double *)param_2 = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_2 + 8) = dVar2;
  *(double *)((longlong)param_2 + 0x10) = dVar1;
  return true;
}

// FPCGPoint @ 149f313b0

FPCGPoint * __thiscall
FPCGPoint::FPCGPoint(FPCGPoint *this,TTransform<double> *param_1,float param_2,int param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (this->Transform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (this->Transform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (this->Transform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[0];
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[1];
  this->Density = param_2;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = dVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  (this->BoundsMin).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar7,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar6);
  (this->BoundsMin).field0_0x0._s_0.Y = (double)CONCAT44(uVar4 ^ uVar7,uVar3 ^ uVar6);
  (this->BoundsMin).field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) ^ uVar7,(uint)uVar5 ^ uVar6);
  dVar1 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::OneVector.field0_0x0._8_4_);
  (this->BoundsMax).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  (this->BoundsMax).field0_0x0._s_0.Y = dVar1;
  (this->BoundsMax).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->Color).field0_0x0._s_0.X = 1.0;
  (this->Color).field0_0x0._s_0.Y = 1.0;
  (this->Color).field0_0x0._s_0.Z = 1.0;
  (this->Color).field0_0x0._s_0.W = 1.0;
  this->Steepness = 0.5;
  this->Seed = param_3;
  this->MetadataEntry = -1;
  return this;
}

// CreateCustomPropertyAccessor @ 149f40910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
FPCGPoint::CreateCustomPropertyAccessor(FName param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  FName in_RDX;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  code *local_78;
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  code *local_48;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  puVar6 = (undefined8 *)0x0;
  local_88 = 0;
  if (in_RDX == PCGPointCustomPropertyNames::ExtentsName) {
    puVar2 = ::operator_new(0x70);
    puVar4 = puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      local_50 = (undefined ***)0x0;
      local_68 = &
                 ___7__TFunction_OwnedObject_P6A_NAEAUFPCGPoint__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_20 = (undefined ***)0x0;
      local_60 = `FPCGPoint::CreateCustomPropertyAccessor'::__l5::<lambda_2>::<lambda_invoker_cdecl>
      ;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_&,void_const_*),bool,FPCGPoint_&,void_const_*>
                 ::Call;
      local_38 = &
                 ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_30 = `FPCGPoint::CreateCustomPropertyAccessor'::__l5::<lambda_1>::<lambda_invoker_cdecl>
      ;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                 ::Call;
      *puVar2 = &___7__FPCGCustomPointAccessor_U__TVector_N_Math_UE____6B_;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined2 *)((longlong)puVar2 + 10) = 5;
      puVar2[2] = UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                  ::Call;
      puVar2[7] = 0;
      (*(code *)
        ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
      )(&local_38);
      puVar2[8] = local_78;
      puVar2[0xd] = 0;
      if (local_78 != (code *)0x0) {
        pppuVar5 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar5 = local_50;
        }
        (*(code *)**pppuVar5)();
      }
      puVar6 = (undefined8 *)&DAT_00000003;
      puVar4 = puVar2;
    }
    if ((((ulonglong)puVar6 & 2) != 0) &&
       (puVar6 = (undefined8 *)(ulonglong)((uint)puVar6 & 0xfffffffd), local_48 != (code *)0x0)) {
      pppuVar5 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar5 = local_20;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    uVar1 = (ulonglong)puVar6 & 1;
    puVar6 = puVar4;
    if ((uVar1 != 0) && (local_78 != (code *)0x0)) {
      pppuVar5 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar5 = local_50;
      }
      (*(code *)(*pppuVar5)[2])();
    }
LAB_149f40a54:
    *(undefined8 **)param_1 = puVar6;
  }
  else {
    if (in_RDX == PCGPointCustomPropertyNames::LocalCenterName) {
      puVar2 = ::operator_new(0x70);
      puVar4 = puVar6;
      if (puVar2 != (undefined8 *)0x0) {
        local_20 = (undefined ***)0x0;
        local_38 = &
                   ___7__TFunction_OwnedObject_P6A_NAEAUFPCGPoint__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        local_50 = (undefined ***)0x0;
        local_30 = `FPCGPoint::CreateCustomPropertyAccessor'::__l9::<lambda_4>::
                   <lambda_invoker_cdecl>;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_&,void_const_*),bool,FPCGPoint_&,void_const_*>
                   ::Call;
        local_68 = &
                   ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        local_60 = `FPCGPoint::CreateCustomPropertyAccessor'::__l9::<lambda_3>::
                   <lambda_invoker_cdecl>;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                   ::Call;
        *puVar2 = &___7__FPCGCustomPointAccessor_U__TVector_N_Math_UE____6B_;
        *(undefined1 *)(puVar2 + 1) = 0;
        *(undefined2 *)((longlong)puVar2 + 10) = 5;
        puVar2[2] = UE::Core::Private::Function::
                    TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                    ::Call;
        puVar2[7] = 0;
        (*(code *)
          ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
        )(&local_68);
        puVar2[8] = local_48;
        puVar2[0xd] = 0;
        if (local_48 != (code *)0x0) {
          pppuVar5 = &local_38;
          if (local_20 != (undefined ***)0x0) {
            pppuVar5 = local_20;
          }
          (*(code *)**pppuVar5)();
        }
        puVar6 = (undefined8 *)&DAT_0000000c;
        puVar4 = puVar2;
      }
      if ((((ulonglong)puVar6 & 8) != 0) &&
         (puVar6 = (undefined8 *)(ulonglong)((uint)puVar6 & 0xfffffff7), local_78 != (code *)0x0)) {
        pppuVar5 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar5 = local_50;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      bVar7 = ((ulonglong)puVar6 & 4) == 0;
      puVar6 = puVar4;
LAB_149f40b50:
      if ((bVar7) || (local_48 == (code *)0x0)) goto LAB_149f40a54;
      pppuVar5 = &local_38;
      pppuVar3 = local_20;
    }
    else {
      if (in_RDX == PCGPointCustomPropertyNames::PositionName) {
        puVar2 = ::operator_new(0x70);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          local_20 = (undefined ***)0x0;
          local_38 = &
                     ___7__TFunction_OwnedObject_P6A_NAEAUFPCGPoint__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_50 = (undefined ***)0x0;
          local_30 = `FPCGPoint::CreateCustomPropertyAccessor'::__l13::<lambda_6>::
                     <lambda_invoker_cdecl>;
          local_48 = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_&,void_const_*),bool,FPCGPoint_&,void_const_*>
                     ::Call;
          local_68 = &
                     ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_60 = `FPCGPoint::CreateCustomPropertyAccessor'::__l13::<lambda_5>::
                     <lambda_invoker_cdecl>;
          local_78 = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                     ::Call;
          *puVar2 = &___7__FPCGCustomPointAccessor_U__TVector_N_Math_UE____6B_;
          *(undefined1 *)(puVar2 + 1) = 0;
          *(undefined2 *)((longlong)puVar2 + 10) = 5;
          puVar2[2] = UE::Core::Private::Function::
                      TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                      ::Call;
          puVar2[7] = 0;
          (*(code *)
            ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          )(&local_68);
          puVar2[8] = local_48;
          puVar2[0xd] = 0;
          if (local_48 != (code *)0x0) {
            pppuVar5 = &local_38;
            if (local_20 != (undefined ***)0x0) {
              pppuVar5 = local_20;
            }
            (*(code *)**pppuVar5)();
          }
          puVar6 = (undefined8 *)&DAT_00000030;
          puVar4 = puVar2;
        }
        if ((((ulonglong)puVar6 & 0x20) != 0) &&
           (puVar6 = (undefined8 *)(ulonglong)((uint)puVar6 & 0xffffffdf), local_78 != (code *)0x0))
        {
          pppuVar5 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar5 = local_50;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        bVar7 = ((ulonglong)puVar6 & 0x10) == 0;
        puVar6 = puVar4;
        goto LAB_149f40b50;
      }
      if (in_RDX == PCGPointCustomPropertyNames::RotationName) {
        puVar2 = ::operator_new(0x70);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          local_20 = (undefined ***)0x0;
          local_38 = &
                     ___7__TFunction_OwnedObject_P6A_NAEAUFPCGPoint__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_50 = (undefined ***)0x0;
          local_30 = `FPCGPoint::CreateCustomPropertyAccessor'::__l17::<lambda_8>::
                     <lambda_invoker_cdecl>;
          local_48 = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_&,void_const_*),bool,FPCGPoint_&,void_const_*>
                     ::Call;
          local_68 = &
                     ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_60 = `FPCGPoint::CreateCustomPropertyAccessor'::__l17::<lambda_7>::
                     <lambda_invoker_cdecl>;
          local_78 = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                     ::Call;
          *puVar2 = &___7__FPCGCustomPointAccessor_U__TQuat_N_Math_UE____6B_;
          *(undefined1 *)(puVar2 + 1) = 0;
          *(undefined2 *)((longlong)puVar2 + 10) = 7;
          puVar2[2] = UE::Core::Private::Function::
                      TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                      ::Call;
          puVar2[7] = 0;
          (*(code *)
            ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          )(&local_68);
          puVar2[8] = local_48;
          puVar2[0xd] = 0;
          if (local_48 != (code *)0x0) {
            pppuVar5 = &local_38;
            if (local_20 != (undefined ***)0x0) {
              pppuVar5 = local_20;
            }
            (*(code *)**pppuVar5)();
          }
          puVar6 = (undefined8 *)&DAT_000000c0;
          puVar4 = puVar2;
        }
        if (((char)puVar6 < '\0') &&
           (puVar6 = (undefined8 *)(ulonglong)((uint)puVar6 & 0xffffff7f), local_78 != (code *)0x0))
        {
          pppuVar5 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar5 = local_50;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        bVar7 = ((ulonglong)puVar6 & 0x40) == 0;
        puVar6 = puVar4;
        goto LAB_149f40b50;
      }
      if (in_RDX == PCGPointCustomPropertyNames::ScaleName) {
        puVar2 = ::operator_new(0x70);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          local_20 = (undefined ***)0x0;
          local_38 = &
                     ___7__TFunction_OwnedObject_P6A_NAEAUFPCGPoint__PEBX_Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_50 = (undefined ***)0x0;
          local_30 = `FPCGPoint::CreateCustomPropertyAccessor'::__l21::<lambda_10>::
                     <lambda_invoker_cdecl>;
          local_48 = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_&,void_const_*),bool,FPCGPoint_&,void_const_*>
                     ::Call;
          local_68 = &
                     ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_60 = `FPCGPoint::CreateCustomPropertyAccessor'::__l21::<lambda_9>::
                     <lambda_invoker_cdecl>;
          local_78 = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                     ::Call;
          *puVar2 = &___7__FPCGCustomPointAccessor_U__TVector_N_Math_UE____6B_;
          *(undefined1 *)(puVar2 + 1) = 0;
          *(undefined2 *)((longlong)puVar2 + 10) = 5;
          puVar2[2] = UE::Core::Private::Function::
                      TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                      ::Call;
          puVar2[7] = 0;
          (*(code *)
            ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          )(&local_68);
          puVar2[8] = local_48;
          puVar2[0xd] = 0;
          if (local_48 != (code *)0x0) {
            pppuVar5 = &local_38;
            if (local_20 != (undefined ***)0x0) {
              pppuVar5 = local_20;
            }
            (*(code *)**pppuVar5)();
          }
          puVar6 = (undefined8 *)0x300;
          puVar4 = puVar2;
        }
        if (((uint)puVar6 >> 9 != 0) &&
           (puVar6 = (undefined8 *)(ulonglong)((uint)puVar6 & 0xfffffdff), local_78 != (code *)0x0))
        {
          pppuVar5 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar5 = local_50;
          }
          (*(code *)(*pppuVar5)[2])();
        }
        bVar7 = ((ulonglong)puVar6 & 0x100) == 0;
        puVar6 = puVar4;
        goto LAB_149f40b50;
      }
      if (in_RDX == PCGPointCustomPropertyNames::LocalSizeName) {
        puVar2 = ::operator_new(0x70);
        puVar4 = puVar6;
        if (puVar2 != (undefined8 *)0x0) {
          local_50 = (undefined ***)0x0;
          local_68 = &
                     ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_60 = `FPCGPoint::CreateCustomPropertyAccessor'::__l25::<lambda_11>::
                     <lambda_invoker_cdecl>;
          local_78 = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                     ::Call;
          *puVar2 = &___7__FPCGCustomPointAccessor_U__TVector_N_Math_UE____6B_;
          *(undefined1 *)(puVar2 + 1) = 1;
          *(undefined2 *)((longlong)puVar2 + 10) = 5;
          puVar2[2] = UE::Core::Private::Function::
                      TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                      ::Call;
          puVar2[7] = 0;
          (*(code *)
            ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          )(&local_68);
          puVar2[8] = 0;
          puVar2[0xd] = 0;
          puVar6 = (undefined8 *)0x400;
          puVar4 = puVar2;
        }
        bVar7 = puVar6 == (undefined8 *)0x0;
        puVar6 = puVar4;
      }
      else {
        if (in_RDX != PCGPointCustomPropertyNames::ScaledLocalSizeName) {
          *(undefined8 *)param_1 = 0;
          return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)param_1;
        }
        puVar4 = ::operator_new(0x70);
        if (puVar4 == (undefined8 *)0x0) {
          bVar7 = true;
        }
        else {
          local_50 = (undefined ***)0x0;
          local_68 = &
                     ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          ;
          local_60 = `FPCGPoint::CreateCustomPropertyAccessor'::__l29::<lambda_12>::
                     <lambda_invoker_cdecl>;
          local_78 = UE::Core::Private::Function::
                     TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                     ::Call;
          *puVar4 = &___7__FPCGCustomPointAccessor_U__TVector_N_Math_UE____6B_;
          *(undefined1 *)(puVar4 + 1) = 1;
          *(undefined2 *)((longlong)puVar4 + 10) = 5;
          puVar4[2] = UE::Core::Private::Function::
                      TFunctionRefCaller<bool_(__cdecl*)(FPCGPoint_const_&,void_*),bool,FPCGPoint_const_&,void_*>
                      ::Call;
          puVar4[7] = 0;
          (*(code *)
            ___7__TFunction_OwnedObject_P6A_NAEBUFPCGPoint__PEAX_Z_0A__0A__Function_Private_Core_UE__6B_
          )(&local_68);
          puVar4[8] = 0;
          puVar4[0xd] = 0;
          bVar7 = false;
          puVar6 = puVar4;
        }
      }
      if ((bVar7) || (local_78 == (code *)0x0)) goto LAB_149f40a54;
      pppuVar5 = &local_68;
      pppuVar3 = local_50;
    }
    if (pppuVar3 != (undefined ***)0x0) {
      pppuVar5 = pppuVar3;
    }
    (*(code *)(*pppuVar5)[2])();
    *(undefined8 **)param_1 = puVar6;
  }
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)param_1;
}

// HasCustomPropertyGetterSetter @ 149f50320

bool __cdecl FPCGPoint::HasCustomPropertyGetterSetter(FName param_1)

{
  if ((((param_1 != PCGPointCustomPropertyNames::ExtentsName) &&
       (param_1 != PCGPointCustomPropertyNames::LocalCenterName)) &&
      (param_1 != PCGPointCustomPropertyNames::PositionName)) &&
     (((param_1 != PCGPointCustomPropertyNames::RotationName &&
       (param_1 != PCGPointCustomPropertyNames::ScaleName)) &&
      ((param_1 != PCGPointCustomPropertyNames::LocalSizeName &&
       (param_1 != PCGPointCustomPropertyNames::ScaledLocalSizeName)))))) {
    return false;
  }
  return true;
}

// Serialize @ 149f5fd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FPCGPoint::Serialize(FPCGPoint *this,FStructuredArchiveSlot param_1)

{
  float *pfVar1;
  int *piVar2;
  long64 *plVar3;
  byte *pbVar4;
  float *pfVar5;
  int *piVar6;
  long64 *plVar7;
  FSlotBase FVar8;
  bool bVar9;
  int iVar10;
  FArchiveState *this_00;
  FArchive *pFVar11;
  uint uVar12;
  uint uVar13;
  FSlotBase local_res10;
  undefined1 auStack_138 [32];
  byte local_118 [8];
  FSlotBase local_110 [19];
  double local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  (**(code **)(this_00->_padding_ + 0x230))
            (this_00,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  iVar10 = FArchiveState::CustomVer(this_00,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  FVar8.StructuredArchive = local_res10.StructuredArchive;
  if (iVar10 < 0xd) {
    bVar9 = false;
  }
  else {
    uVar12 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_118[0] = 0;
    local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    if (this_00->ArIsLoading == 0) {
      local_118[0] = __real_3f800000 != this->Density;
      if ((((double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_
                                   >> 0x20) ^ uVar13,
                             SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^
                             uVar12) != (this->BoundsMin).field0_0x0._s_0.X) ||
          ((double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_
                                  >> 0x20) ^ uVar13,
                            SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12
                           ) != (this->BoundsMin).field0_0x0._s_0.Y)) ||
         ((double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                 >> 0x20) ^ uVar13,
                           SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12)
          != (this->BoundsMin).field0_0x0._s_0.Z)) {
        local_118[0] = local_118[0] | 2;
      }
      if (((UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X !=
            (this->BoundsMax).field0_0x0._s_0.X) ||
          (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y !=
           (this->BoundsMax).field0_0x0._s_0.Y)) ||
         (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z !=
          (this->BoundsMax).field0_0x0._s_0.Z)) {
        local_118[0] = local_118[0] | 4;
      }
      if (((__real_3ff0000000000000 != (this->Color).field0_0x0._s_0.X) ||
          (__real_3ff0000000000000 != (this->Color).field0_0x0._s_0.Y)) ||
         ((__real_3ff0000000000000 != (this->Color).field0_0x0._s_0.Z ||
          (__real_3ff0000000000000 != (this->Color).field0_0x0._s_0.W)))) {
        local_118[0] = local_118[0] | 8;
      }
      if (__real_3f000000 != this->Steepness) {
        local_118[0] = local_118[0] | 0x10;
      }
      if (this->Seed != 0) {
        local_118[0] = local_118[0] | 0x20;
      }
      if (this->MetadataEntry != -1) {
        local_118[0] = local_118[0] | 0x40;
      }
    }
    pFVar11 = (local_res10.StructuredArchive)->Formatter->Inner;
    pbVar4 = (byte *)**(undefined8 **)&pFVar11->field_0x8;
    if ((byte *)(*(undefined8 **)&pFVar11->field_0x8)[1] < pbVar4 + 1) {
      (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,local_118,1);
    }
    else {
      local_118[0] = *pbVar4;
      **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 1;
    }
    local_110[0].StructuredArchive = FVar8.StructuredArchive;
    pFVar11 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_110);
    UE::Math::operator<<(pFVar11,&this->Transform);
    if ((local_118[0] & 1) != 0) {
      pfVar1 = &this->Density;
      pFVar11 = (FVar8.StructuredArchive)->Formatter->Inner;
      pfVar5 = (float *)**(undefined8 **)&pFVar11->field_0x8;
      if ((float *)(*(undefined8 **)&pFVar11->field_0x8)[1] < pfVar5 + 1) {
        if ((pFVar11->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,pfVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar11,(uint *)pfVar1);
        }
      }
      else {
        *pfVar1 = *pfVar5;
        **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 4;
      }
    }
    if ((local_118[0] & 2) != 0) {
      UE::Math::operator<<((FStructuredArchiveSlot)FVar8.StructuredArchive,&this->BoundsMin);
    }
    if ((local_118[0] & 4) != 0) {
      UE::Math::operator<<((FStructuredArchiveSlot)FVar8.StructuredArchive,&this->BoundsMax);
    }
    if ((local_118[0] & 8) != 0) {
      local_110[0].StructuredArchive = FVar8.StructuredArchive;
      pFVar11 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_110);
      UE::Math::operator<<(pFVar11,&this->Color);
    }
    if ((local_118[0] & 0x10) != 0) {
      pfVar1 = &this->Steepness;
      pFVar11 = (FVar8.StructuredArchive)->Formatter->Inner;
      pfVar5 = (float *)**(undefined8 **)&pFVar11->field_0x8;
      if ((float *)(*(undefined8 **)&pFVar11->field_0x8)[1] < pfVar5 + 1) {
        if ((pFVar11->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,pfVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar11,(uint *)pfVar1);
        }
      }
      else {
        *pfVar1 = *pfVar5;
        **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 4;
      }
    }
    if ((local_118[0] & 0x20) != 0) {
      piVar2 = &this->Seed;
      pFVar11 = (FVar8.StructuredArchive)->Formatter->Inner;
      piVar6 = (int *)**(undefined8 **)&pFVar11->field_0x8;
      if ((int *)(*(undefined8 **)&pFVar11->field_0x8)[1] < piVar6 + 1) {
        if ((pFVar11->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,piVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar11,(uint *)piVar2);
        }
      }
      else {
        *piVar2 = *piVar6;
        **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 4;
      }
    }
    if ((local_118[0] & 0x40) != 0) {
      plVar3 = &this->MetadataEntry;
      pFVar11 = (FVar8.StructuredArchive)->Formatter->Inner;
      plVar7 = (long64 *)**(longlong **)&pFVar11->field_0x8;
      if ((long64 *)(*(longlong **)&pFVar11->field_0x8)[1] < plVar7 + 1) {
        if ((pFVar11->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar11 + 0x188))(pFVar11,plVar3,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar11,(ulong64 *)plVar3);
        }
      }
      else {
        *plVar3 = *plVar7;
        **(longlong **)&pFVar11->field_0x8 = **(longlong **)&pFVar11->field_0x8 + 8;
      }
    }
    bVar9 = true;
  }
  return bVar9;
}

