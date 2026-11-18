// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimLLRun
// Functions: 10

// StaticClass @ 14a732fb0

UClass * __cdecl UAnimCharacterMovementLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationLocomotionLibraryRuntime",L"AnimCharacterMovementLibrary",
               &Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton,
               StaticRegisterNativesUAnimCharacterMovementLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCharacterMovementLibrary>,
               InternalVTableHelperCtorCaller<UAnimCharacterMovementLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton;
}

// UAnimCharacterMovementLibrary @ 14a7334c0

UAnimCharacterMovementLibrary * __thiscall
UAnimCharacterMovementLibrary::UAnimCharacterMovementLibrary
          (UAnimCharacterMovementLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimCharacterMovementLibrary__6B_;
  return this;
}

// UAnimCharacterMovementLibrary @ 14a7334f0

UAnimCharacterMovementLibrary * __thiscall
UAnimCharacterMovementLibrary::UAnimCharacterMovementLibrary
          (UAnimCharacterMovementLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimCharacterMovementLibrary__6B_;
  return this;
}

// ~UAnimCharacterMovementLibrary @ 14a733580

void __thiscall
UAnimCharacterMovementLibrary::~UAnimCharacterMovementLibrary(UAnimCharacterMovementLibrary *this)

{
  *(undefined ***)this = &___7UAnimCharacterMovementLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14a733f30

UClass * __cdecl UAnimCharacterMovementLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationLocomotionLibraryRuntime",L"AnimCharacterMovementLibrary",
               &Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton,
               StaticRegisterNativesUAnimCharacterMovementLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimCharacterMovementLibrary>,
               InternalVTableHelperCtorCaller<UAnimCharacterMovementLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.InnerSingleton;
}

// PredictGroundMovementPivotLocation @ 14a734480

TVector<double> * __cdecl
UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 in_register_000012c4 [12];
  undefined1 auVar15 [16];
  double dVar16;
  float fVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  auVar15._4_12_ = in_register_000012c4;
  auVar15._0_4_ = param_3;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  auVar12._0_8_ = dVar1 * dVar1;
  auVar12._8_8_ = 0;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar2 * dVar2 + auVar12._0_8_;
  auVar13 = sqrtpd(auVar12,auVar13);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar10;
  fVar17 = (float)auVar13._0_8_;
  if (fVar17 <= __real_322bcc77) {
    uVar19 = (undefined4)uVar10;
    uVar20 = (undefined4)((ulonglong)uVar10 >> 0x20);
  }
  else {
    uVar19 = 0;
    uVar20 = 0;
    uVar8 = (double)(__real_3f800000 / fVar17) * dVar2;
    uVar9 = (double)(__real_3f800000 / fVar17) * dVar1;
  }
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_2->field0_0x0)._s_0.Z;
  fVar14 = (float)(dVar5 * (double)uVar8 + dVar4 * (double)uVar9 +
                  dVar6 * (double)CONCAT44(uVar20,uVar19));
  if (fVar14 < 0.0) {
    fVar14 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
    dVar16 = (double)param_3;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar5 * dVar5 + dVar4 * dVar4;
    auVar13 = sqrtpd(auVar15,auVar7);
    dVar11 = auVar13._0_8_;
    dVar18 = (double)(fVar14 / ((fVar14 + fVar14) * param_3 + fVar17));
    dVar2 = (dVar2 - (dVar5 - dVar11 * (double)uVar8) * dVar16) * __real_3fe0000000000000;
    dVar3 = (dVar3 - (dVar6 - dVar11 * (double)CONCAT44(uVar20,uVar19)) * dVar16) *
            __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((dVar1 - (dVar4 - dVar11 * (double)uVar9) * dVar16) * __real_3fe0000000000000 * dVar18 +
         dVar4) * dVar18;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 * dVar18 + dVar5) * dVar18;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar3 * dVar18 + dVar6) * dVar18;
  }
  return __return_storage_ptr__;
}

// PredictGroundMovementStopLocation @ 14a7346b0

TVector<double> * __cdecl
UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,bool param_2,
          float param_3,float param_4,float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar14 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar15 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar7;
  if (!param_2) {
    param_3 = param_4;
  }
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  if (param_5 <= 0.0) {
    param_5 = 0.0;
  }
  auVar9._0_8_ = dVar1 * dVar1;
  auVar9._8_8_ = 0;
  if (param_6 <= 0.0) {
    param_6 = 0.0;
  }
  fVar6 = param_5 * param_3;
  if (param_5 * param_3 <= 0.0) {
    fVar6 = 0.0;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2 * dVar2 + auVar9._0_8_;
  auVar9 = sqrtpd(auVar9,auVar3);
  fVar11 = (float)auVar9._0_8_;
  if (__real_322bcc77 < fVar11) {
    uVar14 = 0;
    uVar15 = 0;
    uVar5 = (double)(__real_3f800000 / fVar11) * dVar2;
    uVar4 = (double)(__real_3f800000 / fVar11) * dVar1;
  }
  fVar8 = fVar6 * fVar11 + param_6;
  if (0.0 < fVar8) {
    dVar13 = (double)(fVar11 / fVar8);
    dVar12 = (double)param_6;
    dVar10 = ((double)(float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000) * dVar2 -
             dVar12 * (double)uVar5) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (((double)(float)((uint)fVar6 ^ __xmm_80000000800000008000000080000000) * dVar1 -
          dVar12 * (double)uVar4) * __real_3fe0000000000000 * dVar13 + dVar1) * dVar13;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar10 * dVar13 + dVar2) * dVar13;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar12 * (double)CONCAT44(uVar15,uVar14) * __real_bfe0000000000000 * dVar13 * dVar13;
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUAnimCharacterMovementLibrary @ 14a734900

void __cdecl UAnimCharacterMovementLibrary::StaticRegisterNativesUAnimCharacterMovementLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPredictGroundMovementPivotLocation @ 14a734ef0

void __cdecl
UAnimCharacterMovementLibrary::execPredictGroundMovementPivotLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FProperty *pFVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double *pdVar13;
  double *pdVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float local_res10 [2];
  double local_f8 [3];
  double local_e0 [25];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  pdVar14 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar13 = local_f8;
  if (pdVar14 != (double *)0x0) {
    pdVar13 = pdVar14;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  local_res10[0] = 0.0;
  pdVar14 = local_e0;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar14 = (double *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar1 = *pdVar13;
  dVar2 = pdVar13[1];
  uVar23 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar24 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar16._0_8_ = dVar1 * dVar1;
  auVar16._8_8_ = 0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar2 * dVar2 + auVar16._0_8_;
  auVar17 = sqrtpd(auVar16,auVar17);
  fVar21 = (float)auVar17._0_8_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (__real_322bcc77 < fVar21) {
    uVar23 = 0;
    uVar24 = 0;
    uVar11 = (double)(__real_3f800000 / fVar21) * dVar2;
    uVar12 = (double)(__real_3f800000 / fVar21) * dVar1;
  }
  dVar3 = *pdVar14;
  dVar4 = pdVar14[1];
  fVar18 = (float)(dVar4 * (double)uVar11 + dVar3 * (double)uVar12 +
                  pdVar14[2] * (double)CONCAT44(uVar24,uVar23));
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (fVar18 < 0.0) {
    fVar18 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar4 * dVar4 + dVar3 * dVar3;
    auVar17 = sqrtpd(auVar20,auVar6);
    dVar8 = (double)local_res10[0];
    dVar15 = auVar17._0_8_;
    dVar22 = (double)(fVar18 / ((fVar18 + fVar18) * local_res10[0] + fVar21));
    uVar9 = ((dVar1 - (dVar3 - dVar15 * (double)uVar12) * dVar8) * dVar22 * __real_3fe0000000000000
            + dVar3) * dVar22;
    uVar19 = ((pdVar13[2] - (pdVar14[2] - dVar15 * (double)CONCAT44(uVar24,uVar23)) * dVar8) *
              __real_3fe0000000000000 * dVar22 + pdVar14[2]) * dVar22;
    uVar10 = ((dVar2 - (dVar4 - dVar15 * (double)uVar11) * dVar8) * __real_3fe0000000000000 * dVar22
             + dVar4) * dVar22;
  }
  auVar7._8_4_ = (int)uVar10;
  auVar7._0_8_ = uVar9;
  auVar7._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar7;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar19;
  return;
}

// execPredictGroundMovementStopLocation @ 14a735230

void __cdecl
UAnimCharacterMovementLibrary::execPredictGroundMovementStopLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  FProperty *pFVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double *pdVar11;
  bool bVar12;
  float fVar13;
  undefined1 auVar14 [16];
  double dVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  int local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_d8;
  float local_d4;
  double local_d0 [21];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d0);
  }
  local_res10[0] = 0;
  pdVar11 = local_d0;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar12 = local_res10[0] != 0;
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_d8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_d4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d4,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d4);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (bVar12) {
    local_res20[0] = local_res18[0];
  }
  dVar1 = *pdVar11;
  dVar2 = pdVar11[1];
  if (local_d8 <= 0.0) {
    local_d8 = 0.0;
  }
  if (local_d4 <= 0.0) {
    local_d4 = 0.0;
  }
  local_d8 = local_d8 * local_res20[0];
  auVar14._0_8_ = dVar1 * dVar1;
  auVar14._8_8_ = 0;
  if (local_d8 <= 0.0) {
    local_d8 = 0.0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2 * dVar2 + auVar14._0_8_;
  auVar14 = sqrtpd(auVar14,auVar4);
  fVar16 = (float)auVar14._0_8_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (__real_322bcc77 < fVar16) {
    uVar8 = (double)(__real_3f800000 / fVar16) * dVar2;
    uVar9 = (double)(__real_3f800000 / fVar16) * dVar1;
    uVar10 = 0.0;
  }
  fVar13 = local_d8 * fVar16 + local_d4;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (0.0 < fVar13) {
    dVar17 = (double)(fVar16 / fVar13);
    dVar15 = (double)local_d4;
    uVar6 = (((double)(float)((uint)local_d8 ^ __xmm_80000000800000008000000080000000) * dVar1 -
             dVar15 * (double)uVar9) * dVar17 * __real_3fe0000000000000 + dVar1) * dVar17;
    uVar18 = (((double)(float)((uint)local_d8 ^ __xmm_80000000800000008000000080000000) * dVar2 -
              dVar15 * (double)uVar8) * dVar17 * __real_3fe0000000000000 + dVar2) * dVar17;
    uVar7 = (double)uVar10 * __real_bfe0000000000000 * dVar15 * dVar17 * dVar17;
  }
  auVar5._8_4_ = (int)uVar18;
  auVar5._0_8_ = uVar6;
  auVar5._12_4_ = (int)((ulonglong)uVar18 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar5;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar7;
  return;
}

