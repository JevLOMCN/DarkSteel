// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b4325a0

UClass * __cdecl UDS_CameraInterp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraInterp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraInterp",
               &Z_Registration_Info_UClass_UDS_CameraInterp.InnerSingleton,
               StaticRegisterNativesUDS_CameraInterp,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_CameraInterp>,
               InternalVTableHelperCtorCaller<UDS_CameraInterp>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraInterp.InnerSingleton;
}

// UDS_CameraInterp @ 14b434770

UDS_CameraInterp * __thiscall
UDS_CameraInterp::UDS_CameraInterp(UDS_CameraInterp *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CameraInterp__6B_;
  this->ElapsedTime = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotationValue).Yaw = dVar2;
  (this->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVectorValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVectorValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVectorValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurveData).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->CurveVectorData).field0_0x0.DebugPtr = (UCurveVector *)0x0;
  this->StartFloatValue = 0.0;
  return this;
}

// ~UDS_CameraInterp @ 14b4350f0

void __thiscall UDS_CameraInterp::~UDS_CameraInterp(UDS_CameraInterp *this)

{
  this->_padding_ = (longlong)&___7UDS_CameraInterp__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b436da0

UClass * __cdecl UDS_CameraInterp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CameraInterp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraInterp",
               &Z_Registration_Info_UClass_UDS_CameraInterp.InnerSingleton,
               StaticRegisterNativesUDS_CameraInterp,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_CameraInterp>,
               InternalVTableHelperCtorCaller<UDS_CameraInterp>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CameraInterp.InnerSingleton;
}

// StaticRegisterNativesUDS_CameraInterp @ 14b4370f0

void __cdecl UDS_CameraInterp::StaticRegisterNativesUDS_CameraInterp(void)

{
  return;
}

// UDS_CameraInterp @ 14b8b24f0

UDS_CameraInterp * __thiscall
UDS_CameraInterp::UDS_CameraInterp(UDS_CameraInterp *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CameraInterp__6B_;
  this->ElapsedTime = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotationValue).Yaw = dVar2;
  (this->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVectorValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVectorValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVectorValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StartFloatValue = 0.0;
  (this->CurveData).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->CurveVectorData).field0_0x0.DebugPtr = (UCurveVector *)0x0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotationValue).Yaw = dVar2;
  (this->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVectorValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVectorValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVectorValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// Initialize @ 14b8cadb0

void __thiscall UDS_CameraInterp::Initialize(UDS_CameraInterp *this,FSoftObjectPath *param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  UCurveFloat *pUVar4;
  UClass *pUVar5;
  
  this->ElapsedTime = 0.0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotationValue).Yaw = dVar3;
  (this->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVectorValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVectorValue).field0_0x0._s_0.Y = (double)uVar2;
  (this->StartVectorValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StartFloatValue = 0.0;
  pUVar4 = (UCurveFloat *)FSoftObjectPath::ResolveObject(param_1);
  if (pUVar4 == (UCurveFloat *)0x0) {
LAB_14b8cae36:
    pUVar4 = (UCurveFloat *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UCurveFloat_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14b8cae36;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UCurveFloat *)0x0)) {
    (this->CurveData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 != (UCurveFloat *)0x0) {
      return;
    }
    pUVar4 = (UCurveFloat *)FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
    if (pUVar4 == (UCurveFloat *)0x0) {
LAB_14b8cae84:
      pUVar4 = (UCurveFloat *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_UCurveFloat_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_14b8cae84;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UCurveFloat *)0x0))
    goto LAB_14b8cae9c;
  }
  UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14b8cae9c:
  (this->CurveData).field0_0x0.DebugPtr = pUVar4;
  return;
}

// Initialize @ 14b8caec0

void __thiscall UDS_CameraInterp::Initialize(UDS_CameraInterp *this,UCurveBase *param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  UClass *pUVar4;
  
  this->ElapsedTime = 0.0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotationValue).Yaw = dVar3;
  (this->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVectorValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVectorValue).field0_0x0._s_0.Y = (double)uVar2;
  (this->StartVectorValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StartFloatValue = 0.0;
  if (param_1 != (UCurveBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UCurveFloat_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->CurveData).field0_0x0.DebugPtr = (UCurveFloat *)param_1;
      return;
    }
  }
  if (param_1 != (UCurveBase *)0x0) {
    pUVar4 = Z_Construct_UClass_UCurveVector_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->CurveVectorData).field0_0x0.DebugPtr = (UCurveVector *)param_1;
    }
  }
  return;
}

// Reset @ 14b8e5a60

void __thiscall UDS_CameraInterp::Reset(UDS_CameraInterp *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->ElapsedTime = 0.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->StartRotationValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->StartRotationValue).Yaw = dVar2;
  (this->StartRotationValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVectorValue).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVectorValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVectorValue).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StartFloatValue = 0.0;
  return;
}

// UpdateFloat @ 14b8f3300

void __thiscall
UDS_CameraInterp::UpdateFloat
          (UDS_CameraInterp *this,float *param_1,float param_2,float *param_3,float *param_4,
          float *param_5,float *param_6)

{
  float *pfVar1;
  UCurveFloat *this_00;
  float fVar2;
  
  pfVar1 = &this->StartFloatValue;
  if (this->ElapsedTime == 0.0) {
    *pfVar1 = *param_3;
  }
  fVar2 = param_2 * *param_6 + this->ElapsedTime;
  this->ElapsedTime = fVar2;
  this_00 = (this->CurveData).field0_0x0.DebugPtr;
  fVar2 = fVar2 / *param_5;
  if (this_00 == (UCurveFloat *)0x0) {
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  else {
    fVar2 = UCurveFloat::GetFloatValue(this_00,fVar2);
  }
  *param_1 = (*param_4 - *pfVar1) * fVar2 + *pfVar1;
  return;
}

// UpdateNotifyFloat @ 14b8f4a10

void __thiscall
UDS_CameraInterp::UpdateNotifyFloat
          (UDS_CameraInterp *this,float *param_1,float param_2,float *param_3,float *param_4,
          float *param_5)

{
  UCurveFloat *this_00;
  float fVar1;
  
  if (this->ElapsedTime == 0.0) {
    this->StartFloatValue = *param_3;
  }
  fVar1 = param_2 * *param_5 + this->ElapsedTime;
  this->ElapsedTime = fVar1;
  this_00 = (this->CurveData).field0_0x0.DebugPtr;
  fVar1 = fVar1 / *param_4;
  if (this_00 == (UCurveFloat *)0x0) {
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= __real_bf800000) {
      fVar1 = __real_bf800000;
    }
  }
  else {
    fVar1 = UCurveFloat::GetFloatValue(this_00,fVar1);
  }
  *param_1 = (fVar1 + __real_3f800000) * this->StartFloatValue;
  return;
}

// UpdateNotifyRotation @ 14b8f4aa0

void __thiscall
UDS_CameraInterp::UpdateNotifyRotation
          (UDS_CameraInterp *this,TRotator<double> *param_1,float param_2,TRotator<double> *param_3,
          float *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  UCurveVector *this_00;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_28;
  
  fVar4 = this->ElapsedTime;
  if (fVar4 == 0.0) {
    dVar6 = param_3->Yaw;
    (this->StartRotationValue).Pitch = param_3->Pitch;
    (this->StartRotationValue).Yaw = dVar6;
    (this->StartRotationValue).Roll = param_3->Roll;
  }
  fVar4 = param_2 * *param_5 + fVar4;
  this->ElapsedTime = fVar4;
  this_00 = (this->CurveVectorData).field0_0x0.DebugPtr;
  fVar4 = fVar4 / *param_4;
  if (this_00 == (UCurveVector *)0x0) {
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    if (fVar4 <= __real_bf800000) {
      fVar4 = __real_bf800000;
    }
    fVar3 = fVar4 * __real_42b40000;
    dVar5 = (double)(fVar4 * __real_43b40000);
    dVar6 = dVar5;
  }
  else {
    UCurveVector::GetVectorValue(this_00,(TVector<double> *)&local_28._s_0,fVar4);
    dVar5 = (double)(float)(local_28._s_0.Y * __real_4076800000000000);
    fVar3 = (float)(local_28._s_0.X * __real_4056800000000000);
    dVar6 = (double)(float)(local_28._s_0.Z * __real_4076800000000000);
  }
  dVar1 = (this->StartRotationValue).Yaw;
  dVar2 = (this->StartRotationValue).Roll;
  param_1->Pitch = (double)fVar3 + (this->StartRotationValue).Pitch;
  param_1->Yaw = dVar5 + dVar1;
  param_1->Roll = dVar6 + dVar2;
  return;
}

// UpdateRotation @ 14b8f4ba0

void __thiscall
UDS_CameraInterp::UpdateRotation
          (UDS_CameraInterp *this,TRotator<double> *param_1,float param_2,TRotator<double> *param_3,
          TRotator<double> *param_4,float *param_5,float *param_6)

{
  TRotator<double> *pTVar1;
  double dVar2;
  double dVar3;
  UCurveFloat *this_00;
  double dVar4;
  undefined1 auVar5 [12];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar27;
  undefined1 auVar26 [16];
  float fVar28;
  
  fVar28 = this->ElapsedTime;
  pTVar1 = &this->StartRotationValue;
  if (fVar28 == 0.0) {
    dVar2 = param_3->Yaw;
    pTVar1->Pitch = param_3->Pitch;
    (this->StartRotationValue).Yaw = dVar2;
    (this->StartRotationValue).Roll = param_3->Roll;
  }
  fVar28 = param_2 * *param_6 + fVar28;
  this->ElapsedTime = fVar28;
  this_00 = (this->CurveData).field0_0x0.DebugPtr;
  fVar28 = fVar28 / *param_5;
  if (this_00 == (UCurveFloat *)0x0) {
    if (__real_3f800000 <= fVar28) {
      fVar28 = __real_3f800000;
    }
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
  }
  else {
    fVar28 = UCurveFloat::GetFloatValue(this_00,fVar28);
  }
  auVar12._0_8_ = param_4->Roll - (this->StartRotationValue).Roll;
  dVar22 = param_4->Pitch - pTVar1->Pitch;
  auVar18._0_8_ = param_4->Yaw - (this->StartRotationValue).Yaw;
  auVar18._8_8_ = 0;
  auVar10._8_4_ = SUB84(auVar18._0_8_,0);
  auVar10._0_8_ = dVar22;
  auVar10._12_4_ = (int)((ulonglong)auVar18._0_8_ >> 0x20);
  auVar11 = divpd(auVar10,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar11 = roundpd(auVar18,auVar11,3);
  dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar19._0_8_ = auVar11._0_8_ * dVar2;
  dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar19._8_8_ = auVar11._8_8_ * dVar3;
  auVar12._8_8_ = 0;
  auVar11 = divpd(auVar12,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar22 = dVar22 - auVar19._0_8_;
  dVar24 = auVar18._0_8_ - auVar19._8_8_;
  auVar11 = roundpd(auVar19,auVar11,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar13._8_4_ = SUB84(dVar24,0);
  auVar13._0_8_ = dVar22;
  auVar13._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  dVar25 = auVar12._0_8_ - auVar11._0_8_ * dVar4;
  dVar27 = 0.0 - auVar11._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  dVar17 = auVar13._8_8_ + dVar3;
  uVar6 = -(ulonglong)(0.0 <= dVar25);
  uVar8 = -(ulonglong)(0.0 <= dVar27);
  uVar7 = -(ulonglong)(0.0 <= dVar22);
  uVar9 = -(ulonglong)(0.0 <= dVar24);
  auVar20._0_8_ = uVar7 & (ulonglong)dVar22;
  auVar20._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar24);
  auVar20._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar24) >> 0x20);
  auVar21._0_4_ = ~(uint)uVar7 & SUB84(dVar22 + dVar2,0);
  auVar21._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar22 + dVar2) >> 0x20);
  auVar21._8_4_ = ~(uint)uVar9 & SUB84(dVar17,0);
  auVar21._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar17 >> 0x20);
  auVar21 = auVar21 | auVar20;
  auVar14._8_4_ = SUB84(dVar27,0);
  auVar14._0_8_ = dVar25;
  auVar14._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  dVar17 = auVar14._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar23._0_4_ = ~(uint)uVar6 & SUB84(dVar25 + dVar4,0);
  auVar23._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(dVar25 + dVar4) >> 0x20);
  auVar23._8_4_ = ~(uint)uVar8 & SUB84(dVar17,0);
  auVar23._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar17 >> 0x20);
  uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar21._0_8_);
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar21._8_8_);
  auVar11._8_4_ = (int)(uVar8 & (ulonglong)dVar27);
  auVar11._0_8_ = uVar6 & (ulonglong)dVar25;
  auVar11._12_4_ = (int)((uVar8 & (ulonglong)dVar27) >> 0x20);
  auVar23 = auVar23 | auVar11;
  dVar17 = (double)fVar28;
  uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar23._0_8_);
  auVar26._0_8_ = uVar7 & (ulonglong)(auVar21._0_8_ - dVar2);
  uVar6 = uVar9 & (ulonglong)(auVar21._8_8_ - dVar3);
  auVar26._8_4_ = (undefined4)uVar6;
  auVar26._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar7 & auVar21._0_4_;
  auVar15._4_4_ = ~(uint)(uVar7 >> 0x20) & auVar21._4_4_;
  auVar15._8_4_ = ~(uint)uVar9 & auVar21._8_4_;
  auVar15._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar21._12_4_;
  auVar26 = auVar26 | auVar15;
  auVar5._4_8_ = auVar15._8_8_;
  auVar5._0_4_ = auVar26._4_4_;
  auVar16._0_8_ = auVar5._0_8_ << 0x20;
  auVar16._8_4_ = auVar26._8_4_;
  auVar16._12_4_ = auVar26._12_4_;
  dVar2 = (this->StartRotationValue).Yaw;
  dVar3 = (this->StartRotationValue).Roll;
  param_1->Pitch = dVar17 * auVar26._0_8_ + pTVar1->Pitch;
  param_1->Yaw = dVar17 * auVar16._8_8_ + dVar2;
  param_1->Roll =
       dVar17 * (double)(uVar8 & (ulonglong)(auVar23._0_8_ - dVar4) |
                        CONCAT44(~(uint)(uVar8 >> 0x20) & auVar23._4_4_,~(uint)uVar8 & auVar23._0_4_
                                )) + dVar3;
  return;
}

// UpdateVector @ 14b8f5620

void __thiscall
UDS_CameraInterp::UpdateVector
          (UDS_CameraInterp *this,TVector<double> *param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,float *param_5,float *param_6)

{
  TVector<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  UCurveFloat *this_00;
  float fVar8;
  double dVar9;
  
  fVar8 = this->ElapsedTime;
  pTVar1 = &this->StartVectorValue;
  if (fVar8 == 0.0) {
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    (pTVar1->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (this->StartVectorValue).field0_0x0._s_0.Y = dVar2;
    (this->StartVectorValue).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  }
  fVar8 = param_2 * *param_6 + fVar8;
  this->ElapsedTime = fVar8;
  this_00 = (this->CurveData).field0_0x0.DebugPtr;
  fVar8 = fVar8 / *param_5;
  if (this_00 == (UCurveFloat *)0x0) {
    if (__real_3f800000 <= fVar8) {
      fVar8 = __real_3f800000;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
  }
  else {
    fVar8 = UCurveFloat::GetFloatValue(this_00,fVar8);
  }
  dVar9 = (double)fVar8;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar3 = (this->StartVectorValue).field0_0x0._s_0.Y;
  dVar4 = (param_4->field0_0x0)._s_0.Z;
  dVar5 = (this->StartVectorValue).field0_0x0._s_0.Z;
  dVar6 = (this->StartVectorValue).field0_0x0._s_0.Y;
  dVar7 = (this->StartVectorValue).field0_0x0._s_0.Z;
  (param_1->field0_0x0)._s_0.X =
       ((param_4->field0_0x0)._s_0.X - (pTVar1->field0_0x0)._s_0.X) * dVar9 +
       (pTVar1->field0_0x0)._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (dVar2 - dVar3) * dVar9 + dVar6;
  (param_1->field0_0x0)._s_0.Z = (dVar4 - dVar5) * dVar9 + dVar7;
  return;
}

