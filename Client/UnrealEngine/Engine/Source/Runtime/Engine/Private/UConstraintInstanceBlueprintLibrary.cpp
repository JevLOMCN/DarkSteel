// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 118

// StaticClass @ 14822ce30

UClass * __cdecl UConstraintInstanceBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ConstraintInstanceBlueprintLibrary",
               &Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUConstraintInstanceBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstraintInstanceBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UConstraintInstanceBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.InnerSingleton;
}

// UConstraintInstanceBlueprintLibrary @ 148251960

UConstraintInstanceBlueprintLibrary * __thiscall
UConstraintInstanceBlueprintLibrary::UConstraintInstanceBlueprintLibrary
          (UConstraintInstanceBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UConstraintInstanceBlueprintLibrary__6B_;
  return this;
}

// UConstraintInstanceBlueprintLibrary @ 148251990

UConstraintInstanceBlueprintLibrary * __thiscall
UConstraintInstanceBlueprintLibrary::UConstraintInstanceBlueprintLibrary
          (UConstraintInstanceBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UConstraintInstanceBlueprintLibrary__6B_;
  return this;
}

// ~UConstraintInstanceBlueprintLibrary @ 148253920

void __thiscall
UConstraintInstanceBlueprintLibrary::~UConstraintInstanceBlueprintLibrary
          (UConstraintInstanceBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UConstraintInstanceBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CopyParams @ 1482714b0

void __cdecl
UConstraintInstanceBlueprintLibrary::CopyParams
          (FConstraintInstanceAccessor *param_1,FConstraintInstanceAccessor *param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  FConstraintInstance *this;
  FConstraintInstance *pFVar2;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  pFVar2 = FConstraintInstanceAccessor::Get(param_2);
  if ((this != (FConstraintInstance *)0x0) && (pFVar2 != (FConstraintInstance *)0x0)) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    FConstraintInstance::CopyConstraintPhysicalPropertiesFrom(this,pFVar2,param_3,param_4);
  }
  return;
}

// GetAngularBreakable @ 1482849b0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularBreakable
          (FConstraintInstanceAccessor *param_1,bool *param_2,float *param_3)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).bAngularBreakable;
    *param_3 = (pFVar1->ProfileInstance).AngularBreakThreshold;
    return;
  }
  *param_2 = false;
  *param_3 = 0.0;
  return;
}

// GetAngularDriveMode @ 148284a50

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularDriveMode
          (FConstraintInstanceAccessor *param_1,TEnumAsByte<EAngularDriveMode::Type> *param_2)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    param_2->Value = (pFVar1->ProfileInstance).AngularDrive.AngularDriveMode.Value;
    return;
  }
  param_2->Value = '\0';
  return;
}

// GetAngularDriveParams @ 148284ac0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularDriveParams
          (FConstraintInstanceAccessor *param_1,float *param_2,float *param_3,float *param_4)

{
  FConstraintInstance *pFVar1;
  float fVar2;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 == (FConstraintInstance *)0x0) {
    *param_2 = 0.0;
    fVar2 = 0.0;
    *param_3 = 0.0;
  }
  else {
    *param_2 = (pFVar1->ProfileInstance).AngularDrive.SwingDrive.Stiffness;
    *param_3 = (pFVar1->ProfileInstance).AngularDrive.SwingDrive.Damping;
    fVar2 = (pFVar1->ProfileInstance).AngularDrive.SwingDrive.MaxForce;
  }
  *param_4 = fVar2;
  return;
}

// GetAngularLimits @ 148284b20

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularLimits
          (FConstraintInstanceAccessor *param_1,TEnumAsByte<EAngularConstraintMotion> *param_2,
          float *param_3,TEnumAsByte<EAngularConstraintMotion> *param_4,float *param_5,
          TEnumAsByte<EAngularConstraintMotion> *param_6,float *param_7)

{
  FConstraintInstance *pFVar1;
  float fVar2;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 == (FConstraintInstance *)0x0) {
    param_2->Value = '\0';
    fVar2 = 0.0;
    *param_3 = 0.0;
    param_4->Value = '\0';
    *param_5 = 0.0;
    param_6->Value = '\0';
  }
  else {
    param_2->Value = (pFVar1->ProfileInstance).ConeLimit.Swing1Motion.Value;
    *param_3 = (pFVar1->ProfileInstance).ConeLimit.Swing1LimitDegrees;
    param_4->Value = (pFVar1->ProfileInstance).ConeLimit.Swing2Motion.Value;
    *param_5 = (pFVar1->ProfileInstance).ConeLimit.Swing2LimitDegrees;
    param_6->Value = (pFVar1->ProfileInstance).TwistLimit.TwistMotion.Value;
    fVar2 = (pFVar1->ProfileInstance).TwistLimit.TwistLimitDegrees;
  }
  *param_7 = fVar2;
  return;
}

// GetAngularOrientationTarget @ 148284bc0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularOrientationTarget
          (FConstraintInstanceAccessor *param_1,TRotator<double> *param_2)

{
  double dVar1;
  FConstraintInstance *pFVar2;
  
  pFVar2 = FConstraintInstanceAccessor::Get(param_1);
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (pFVar2 != (FConstraintInstance *)0x0) {
    dVar1 = (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Yaw;
    param_2->Pitch = (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Pitch;
    param_2->Yaw = dVar1;
    param_2->Roll = (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Roll;
    return;
  }
  param_2->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  param_2->Yaw = dVar1;
  param_2->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// GetAngularPlasticity @ 148284c20

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularPlasticity
          (FConstraintInstanceAccessor *param_1,bool *param_2,float *param_3)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).bAngularPlasticity;
    *param_3 = (pFVar1->ProfileInstance).AngularPlasticityThreshold;
    return;
  }
  *param_2 = false;
  *param_3 = 0.0;
  return;
}

// GetAngularSoftSwingLimitParams @ 148284c80

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularSoftSwingLimitParams
          (FConstraintInstanceAccessor *param_1,bool *param_2,float *param_3,float *param_4,
          float *param_5,float *param_6)

{
  FConstraintInstance *pFVar1;
  float fVar2;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 == (FConstraintInstance *)0x0) {
    *param_2 = false;
    fVar2 = 0.0;
    *param_3 = 0.0;
    *param_4 = 0.0;
    *param_5 = 0.0;
  }
  else {
    *param_2 = (bool)((byte)(pFVar1->ProfileInstance).ConeLimit._padding_ & 1);
    *param_3 = *(float *)&(pFVar1->ProfileInstance).ConeLimit._padding_;
    *param_4 = *(float *)((longlong)&(pFVar1->ProfileInstance).ConeLimit._padding_ + 4);
    *param_5 = *(float *)&(pFVar1->ProfileInstance).ConeLimit._padding_;
    fVar2 = *(float *)((longlong)&(pFVar1->ProfileInstance).ConeLimit._padding_ + 4);
  }
  *param_6 = fVar2;
  return;
}

// GetAngularSoftTwistLimitParams @ 148284d10

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularSoftTwistLimitParams
          (FConstraintInstanceAccessor *param_1,bool *param_2,float *param_3,float *param_4,
          float *param_5,float *param_6)

{
  FConstraintInstance *pFVar1;
  float fVar2;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 == (FConstraintInstance *)0x0) {
    *param_2 = false;
    fVar2 = 0.0;
    *param_3 = 0.0;
    *param_4 = 0.0;
    *param_5 = 0.0;
  }
  else {
    *param_2 = (bool)((pFVar1->ProfileInstance).TwistLimit.field_0x10 & 1);
    *param_3 = *(float *)&(pFVar1->ProfileInstance).TwistLimit;
    *param_4 = *(float *)&(pFVar1->ProfileInstance).TwistLimit.field_0x4;
    *param_5 = *(float *)&(pFVar1->ProfileInstance).TwistLimit.field_0x8;
    fVar2 = *(float *)&(pFVar1->ProfileInstance).TwistLimit.field_0xc;
  }
  *param_6 = fVar2;
  return;
}

// GetAngularVelocityDriveSLERP @ 148284e10

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularVelocityDriveSLERP
          (FConstraintInstanceAccessor *param_1,bool *param_2)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).AngularDrive.SlerpDrive.bEnableVelocityDrive;
    return;
  }
  *param_2 = false;
  return;
}

// GetAngularVelocityDriveTwistAndSwing @ 148284e80

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularVelocityDriveTwistAndSwing
          (FConstraintInstanceAccessor *param_1,bool *param_2,bool *param_3)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).AngularDrive.TwistDrive.bEnableVelocityDrive;
    *param_3 = (pFVar1->ProfileInstance).AngularDrive.SwingDrive.bEnableVelocityDrive;
    return;
  }
  *param_2 = false;
  *param_3 = false;
  return;
}

// GetAngularVelocityTarget @ 148284ee0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAngularVelocityTarget
          (FConstraintInstanceAccessor *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FConstraintInstance *pFVar3;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pFVar3 != (FConstraintInstance *)0x0) {
    dVar1 = (pFVar3->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Y;
    (param_2->field0_0x0)._s_0.X =
         (pFVar3->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    (param_2->field0_0x0)._s_0.Z =
         (pFVar3->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Z;
    return;
  }
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar2;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GetAttachedBodyNames @ 148284f40

void __cdecl
UConstraintInstanceBlueprintLibrary::GetAttachedBodyNames
          (FConstraintInstanceAccessor *param_1,FName *param_2,FName *param_3)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = pFVar1->ConstraintBone2;
    *param_3 = pFVar1->ConstraintBone1;
  }
  return;
}

// GetContactTransferScale @ 148286830

void __cdecl
UConstraintInstanceBlueprintLibrary::GetContactTransferScale
          (FConstraintInstanceAccessor *param_1,float *param_2)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).ContactTransferScale;
    return;
  }
  *param_2 = 0.0;
  return;
}

// GetDisableCollsion @ 1482875c0

bool __cdecl
UConstraintInstanceBlueprintLibrary::GetDisableCollsion(FConstraintInstanceAccessor *param_1)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    return (pFVar1->ProfileInstance).bDisableCollision;
  }
  return true;
}

// GetLinearBreakable @ 148289800

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearBreakable
          (FConstraintInstanceAccessor *param_1,bool *param_2,float *param_3)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).bLinearBreakable;
    *param_3 = (pFVar1->ProfileInstance).LinearBreakThreshold;
    return;
  }
  *param_2 = false;
  *param_3 = 0.0;
  return;
}

// GetLinearDriveParams @ 148289970

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearDriveParams
          (FConstraintInstanceAccessor *param_1,float *param_2,float *param_3,float *param_4)

{
  FConstraintInstance *pFVar1;
  float fVar2;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 == (FConstraintInstance *)0x0) {
    *param_2 = 0.0;
    fVar2 = 0.0;
    *param_3 = 0.0;
  }
  else {
    *param_2 = (pFVar1->ProfileInstance).LinearDrive.XDrive.Stiffness;
    *param_3 = (pFVar1->ProfileInstance).LinearDrive.XDrive.Damping;
    fVar2 = (pFVar1->ProfileInstance).LinearDrive.XDrive.MaxForce;
  }
  *param_4 = fVar2;
  return;
}

// GetLinearLimits @ 1482899d0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearLimits
          (FConstraintInstanceAccessor *param_1,TEnumAsByte<ELinearConstraintMotion> *param_2,
          TEnumAsByte<ELinearConstraintMotion> *param_3,
          TEnumAsByte<ELinearConstraintMotion> *param_4,float *param_5)

{
  FConstraintInstance *pFVar1;
  float fVar2;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 == (FConstraintInstance *)0x0) {
    param_2->Value = '\0';
    fVar2 = 0.0;
    param_3->Value = '\0';
    param_4->Value = '\0';
  }
  else {
    param_2->Value = (pFVar1->ProfileInstance).LinearLimit.XMotion.Value;
    param_3->Value = (pFVar1->ProfileInstance).LinearLimit.YMotion.Value;
    param_4->Value = (pFVar1->ProfileInstance).LinearLimit.ZMotion.Value;
    fVar2 = (pFVar1->ProfileInstance).LinearLimit.Limit;
  }
  *param_5 = fVar2;
  return;
}

// GetLinearPlasticity @ 148289a50

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearPlasticity
          (FConstraintInstanceAccessor *param_1,bool *param_2,float *param_3,
          TEnumAsByte<EConstraintPlasticityType> *param_4)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).bLinearPlasticity;
    *param_3 = (pFVar1->ProfileInstance).LinearPlasticityThreshold;
    param_4->Value = (pFVar1->ProfileInstance).LinearPlasticityType.Value;
    return;
  }
  *param_2 = false;
  *param_3 = 0.0;
  param_4->Value = '\0';
  return;
}

// GetLinearPositionDrive @ 148289ad0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearPositionDrive
          (FConstraintInstanceAccessor *param_1,bool *param_2,bool *param_3,bool *param_4)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).LinearDrive.XDrive.bEnablePositionDrive;
    *param_3 = (pFVar1->ProfileInstance).LinearDrive.YDrive.bEnablePositionDrive;
    *param_4 = (pFVar1->ProfileInstance).LinearDrive.ZDrive.bEnablePositionDrive;
    return;
  }
  *param_2 = false;
  *param_3 = false;
  *param_4 = false;
  return;
}

// GetLinearPositionTarget @ 148289b50

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearPositionTarget
          (FConstraintInstanceAccessor *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FConstraintInstance *pFVar3;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pFVar3 != (FConstraintInstance *)0x0) {
    dVar1 = (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Y;
    (param_2->field0_0x0)._s_0.X =
         (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    (param_2->field0_0x0)._s_0.Z =
         (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Z;
    return;
  }
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar2;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GetLinearSoftLimitParams @ 148289bb0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearSoftLimitParams
          (FConstraintInstanceAccessor *param_1,bool *param_2,float *param_3,float *param_4,
          float *param_5,float *param_6)

{
  FConstraintInstance *pFVar1;
  float fVar2;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 == (FConstraintInstance *)0x0) {
    *param_2 = false;
    fVar2 = 0.0;
    *param_3 = 0.0;
    *param_4 = 0.0;
    *param_5 = 0.0;
  }
  else {
    *param_2 = (bool)((pFVar1->ProfileInstance).LinearLimit.field_0x10 & 1);
    *param_3 = *(float *)&(pFVar1->ProfileInstance).LinearLimit;
    *param_4 = *(float *)&(pFVar1->ProfileInstance).LinearLimit.field_0x4;
    *param_5 = *(float *)&(pFVar1->ProfileInstance).LinearLimit.field_0x8;
    fVar2 = *(float *)&(pFVar1->ProfileInstance).LinearLimit.field_0xc;
  }
  *param_6 = fVar2;
  return;
}

// GetLinearVelocityDrive @ 148289cb0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearVelocityDrive
          (FConstraintInstanceAccessor *param_1,bool *param_2,bool *param_3,bool *param_4)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).LinearDrive.XDrive.bEnableVelocityDrive;
    *param_3 = (pFVar1->ProfileInstance).LinearDrive.YDrive.bEnableVelocityDrive;
    *param_4 = (pFVar1->ProfileInstance).LinearDrive.ZDrive.bEnableVelocityDrive;
    return;
  }
  *param_2 = false;
  *param_3 = false;
  *param_4 = false;
  return;
}

// GetLinearVelocityTarget @ 148289d30

void __cdecl
UConstraintInstanceBlueprintLibrary::GetLinearVelocityTarget
          (FConstraintInstanceAccessor *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  FConstraintInstance *pFVar3;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pFVar3 != (FConstraintInstance *)0x0) {
    dVar1 = (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Y;
    (param_2->field0_0x0)._s_0.X =
         (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar1;
    (param_2->field0_0x0)._s_0.Z =
         (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Z;
    return;
  }
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar2;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GetMassConditioningEnabled @ 14828a610

bool __cdecl
UConstraintInstanceBlueprintLibrary::GetMassConditioningEnabled
          (FConstraintInstanceAccessor *param_1)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    return (pFVar1->ProfileInstance).bEnableMassConditioning;
  }
  return false;
}

// GetOrientationDriveSLERP @ 14828b3f0

void __cdecl
UConstraintInstanceBlueprintLibrary::GetOrientationDriveSLERP
          (FConstraintInstanceAccessor *param_1,bool *param_2)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).AngularDrive.SlerpDrive.bEnablePositionDrive;
    return;
  }
  *param_2 = false;
  return;
}

// GetOrientationDriveTwistAndSwing @ 14828b450

void __cdecl
UConstraintInstanceBlueprintLibrary::GetOrientationDriveTwistAndSwing
          (FConstraintInstanceAccessor *param_1,bool *param_2,bool *param_3)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    *param_2 = (pFVar1->ProfileInstance).AngularDrive.TwistDrive.bEnablePositionDrive;
    *param_3 = (pFVar1->ProfileInstance).AngularDrive.SwingDrive.bEnablePositionDrive;
    return;
  }
  *param_2 = false;
  *param_3 = false;
  return;
}

// GetParentDominates @ 14828b550

bool __cdecl
UConstraintInstanceBlueprintLibrary::GetParentDominates(FConstraintInstanceAccessor *param_1)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 != (FConstraintInstance *)0x0) {
    return (pFVar1->ProfileInstance).bParentDominates;
  }
  return false;
}

// GetPrivateStaticClass @ 14828c1a0

UClass * __cdecl UConstraintInstanceBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ConstraintInstanceBlueprintLibrary",
               &Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUConstraintInstanceBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstraintInstanceBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UConstraintInstanceBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstraintInstanceBlueprintLibrary.InnerSingleton;
}

// GetProjectionParams @ 14828c350

void __cdecl
UConstraintInstanceBlueprintLibrary::GetProjectionParams
          (FConstraintInstanceAccessor *param_1,bool *param_2,float *param_3,float *param_4)

{
  FConstraintInstance *pFVar1;
  float fVar2;
  
  pFVar1 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar1 == (FConstraintInstance *)0x0) {
    *param_2 = false;
    fVar2 = 0.0;
    *param_3 = 0.0;
  }
  else {
    *param_2 = (pFVar1->ProfileInstance).bEnableProjection;
    *param_3 = (pFVar1->ProfileInstance).ProjectionLinearAlpha;
    fVar2 = (pFVar1->ProfileInstance).ProjectionAngularAlpha;
  }
  *param_4 = fVar2;
  return;
}

// SetAngularBreakable @ 1482a9410

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularBreakable
          (FConstraintInstanceAccessor *param_1,bool param_2,float param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (this->ProfileInstance).bAngularBreakable = '\0';
    puVar1 = &(this->ProfileInstance).field_0x80;
    *puVar1 = *puVar1 | param_2 << 6;
    (this->ProfileInstance).AngularBreakThreshold = param_3;
    FConstraintInstance::UpdateBreakable(this);
  }
  return;
}

// SetAngularDriveMode @ 1482a9620

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularDriveMode
          (FConstraintInstanceAccessor *param_1,Type param_2)

{
  bool bVar1;
  FConstraintInstance *pFVar2;
  FScopedSceneLock_Chaos local_28;
  
  pFVar2 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar2 != (FConstraintInstance *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar2->ProfileInstance).AngularDrive.AngularDriveMode.Value = (uchar)param_2;
    bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_)
    ;
    if (!bVar1) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_,
                 &(pFVar2->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    }
  }
  return;
}

// SetAngularDriveParams @ 1482a9740

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularDriveParams
          (FConstraintInstanceAccessor *param_1,float param_2,float param_3,float param_4)

{
  FAngularDriveConstraint *pFVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  longlong *plVar4;
  FScopedSceneLock_Chaos local_58 [3];
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    pFVar1 = &(pFVar3->ProfileInstance).AngularDrive;
    plVar4 = &pFVar3->_padding_;
    (pFVar3->ProfileInstance).AngularDrive.SwingDrive.Stiffness = param_2;
    (pFVar3->ProfileInstance).AngularDrive.SwingDrive.Damping = param_3;
    (pFVar3->ProfileInstance).AngularDrive.SwingDrive.MaxForce = param_4;
    (pFVar1->TwistDrive).Stiffness = param_2;
    (pFVar3->ProfileInstance).AngularDrive.TwistDrive.Damping = param_3;
    (pFVar3->ProfileInstance).AngularDrive.TwistDrive.MaxForce = param_4;
    (pFVar3->ProfileInstance).AngularDrive.SlerpDrive.Stiffness = param_2;
    (pFVar3->ProfileInstance).AngularDrive.SlerpDrive.Damping = param_3;
    (pFVar3->ProfileInstance).AngularDrive.SlerpDrive.MaxForce = param_4;
    bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar4);
    if (!bVar2) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (local_58,(FPhysicsConstraintReference_Chaos *)plVar4,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)plVar4,pFVar1,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(local_58);
    }
  }
  return;
}

// SetAngularLimits @ 1482a9820

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularLimits
          (FConstraintInstanceAccessor *param_1,TEnumAsByte<EAngularConstraintMotion> param_2,
          float param_3,TEnumAsByte<EAngularConstraintMotion> param_4,float param_5,
          TEnumAsByte<EAngularConstraintMotion> param_6,float param_7)

{
  bool bVar1;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (this->ProfileInstance).ConeLimit.Swing1LimitDegrees = param_3;
    (this->ProfileInstance).ConeLimit.Swing1Motion.Value = param_2.Value;
    FConstraintInstance::UpdateAngularLimit(this);
    (this->ProfileInstance).ConeLimit.Swing2LimitDegrees = param_5;
    (this->ProfileInstance).ConeLimit.Swing2Motion.Value = param_4.Value;
    FConstraintInstance::UpdateAngularLimit(this);
    (this->ProfileInstance).TwistLimit.TwistLimitDegrees = param_7;
    (this->ProfileInstance).TwistLimit.TwistMotion.Value = param_6.Value;
    FConstraintInstance::UpdateAngularLimit(this);
  }
  return;
}

// SetAngularOrientationTarget @ 1482a9a50

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularOrientationTarget
          (FConstraintInstanceAccessor *param_1,TRotator<double> *param_2)

{
  bool bVar1;
  FConstraintInstance *pFVar2;
  TQuat<double> *pTVar3;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  pFVar2 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar2 != (FConstraintInstance *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    pTVar3 = UE::Math::TRotator<double>::Quaternion(param_2,&local_28);
    UE::Math::TRotator<double>::TRotator<double>(&local_48,pTVar3);
    if (((local_48.Pitch != (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Pitch) ||
        (local_48.Yaw != (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Yaw)) ||
       (local_48.Roll != (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Roll)) {
      (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Pitch = local_48.Pitch;
      (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Yaw = local_48.Yaw;
      (pFVar2->ProfileInstance).AngularDrive.OrientationTarget.Roll = local_48.Roll;
      FChaosEngineInterface::SetDriveOrientation
                ((FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_,pTVar3);
    }
  }
  return;
}

// SetAngularPlasticity @ 1482a9b10

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularPlasticity
          (FConstraintInstanceAccessor *param_1,bool param_2,float param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (this->ProfileInstance).bAngularPlasticity = '\0';
    puVar1 = &(this->ProfileInstance).field_0x80;
    *puVar1 = *puVar1 | param_2 << 7;
    (this->ProfileInstance).AngularPlasticityThreshold = param_3;
    FConstraintInstance::UpdatePlasticity(this);
  }
  return;
}

// SetAngularSoftSwingLimitParams @ 1482a9c10

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularSoftSwingLimitParams
          (FConstraintInstanceAccessor *param_1,bool param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  int *piVar1;
  bool bVar2;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    piVar1 = &(this->ProfileInstance).ConeLimit._padding_;
    *(byte *)piVar1 = (byte)*piVar1 & 0xfe;
    piVar1 = &(this->ProfileInstance).ConeLimit._padding_;
    *(byte *)piVar1 = (byte)*piVar1 | param_2;
    *(float *)&(this->ProfileInstance).ConeLimit._padding_ = param_5;
    *(float *)((longlong)&(this->ProfileInstance).ConeLimit._padding_ + 4) = param_6;
    *(float *)&(this->ProfileInstance).ConeLimit._padding_ = param_3;
    *(float *)((longlong)&(this->ProfileInstance).ConeLimit._padding_ + 4) = param_4;
    FConstraintInstance::UpdateAngularLimit(this);
  }
  return;
}

// SetAngularSoftTwistLimitParams @ 1482a9cc0

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularSoftTwistLimitParams
          (FConstraintInstanceAccessor *param_1,bool param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    puVar1 = &(this->ProfileInstance).TwistLimit.field_0x10;
    *puVar1 = *puVar1 & 0xfe;
    puVar1 = &(this->ProfileInstance).TwistLimit.field_0x10;
    *puVar1 = *puVar1 | param_2;
    *(float *)&(this->ProfileInstance).TwistLimit.field_0x8 = param_5;
    *(float *)&(this->ProfileInstance).TwistLimit.field_0xc = param_6;
    *(float *)&(this->ProfileInstance).TwistLimit = param_3;
    *(float *)&(this->ProfileInstance).TwistLimit.field_0x4 = param_4;
    FConstraintInstance::UpdateAngularLimit(this);
  }
  return;
}

// SetAngularVelocityDriveSLERP @ 1482a9f40

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularVelocityDriveSLERP
          (FConstraintInstanceAccessor *param_1,bool param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  FScopedSceneLock_Chaos local_28;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar3->ProfileInstance).AngularDrive.SlerpDrive.bEnableVelocityDrive = '\0';
    puVar1 = &(pFVar3->ProfileInstance).AngularDrive.SlerpDrive.field_0xc;
    *puVar1 = *puVar1 | param_2 * '\x02';
    bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_)
    ;
    if (!bVar2) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,
                 &(pFVar3->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    }
  }
  return;
}

// SetAngularVelocityDriveTwistAndSwing @ 1482aa080

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularVelocityDriveTwistAndSwing
          (FConstraintInstanceAccessor *param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  FScopedSceneLock_Chaos local_28;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar3->ProfileInstance).AngularDrive.SwingDrive.bEnableVelocityDrive = '\0';
    (pFVar3->ProfileInstance).AngularDrive.TwistDrive.bEnableVelocityDrive = '\0';
    puVar1 = &(pFVar3->ProfileInstance).AngularDrive.SwingDrive.field_0xc;
    *puVar1 = *puVar1 | param_3 * '\x02';
    puVar1 = &(pFVar3->ProfileInstance).AngularDrive.TwistDrive.field_0xc;
    *puVar1 = *puVar1 | param_2 * '\x02';
    bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_)
    ;
    if (!bVar2) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,
                 &(pFVar3->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    }
  }
  return;
}

// SetAngularVelocityTarget @ 1482aa1f0

void __cdecl
UConstraintInstanceBlueprintLibrary::SetAngularVelocityTarget
          (FConstraintInstanceAccessor *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  TVector<double>_u_0 local_48 [2];
  
  pFVar4 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    dVar2 = __real_4000000000000000;
    if ((((param_2->field0_0x0)._s_0.X !=
          (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.X) ||
        ((param_2->field0_0x0)._s_0.Y !=
         (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Y)) ||
       ((param_2->field0_0x0)._s_0.Z !=
        (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Z)) {
      dVar1 = (param_2->field0_0x0)._s_0.Y;
      (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.X =
           (param_2->field0_0x0)._s_0.X;
      (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Y = dVar1;
      (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Z =
           (param_2->field0_0x0)._s_0.Z;
      local_48[0]._16_8_ = (param_2->field0_0x0)._s_0.Z * dVar2 * __real_400921fb60000000;
      local_48[0]._8_8_ = (param_2->field0_0x0)._s_0.Y * dVar2 * __real_400921fb60000000;
      local_48[0]._0_8_ = (param_2->field0_0x0)._s_0.X * dVar2 * __real_400921fb60000000;
      FChaosEngineInterface::SetDriveAngularVelocity
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 (TVector<double> *)&local_48[0]._s_0);
    }
  }
  return;
}

// SetContactTransferScale @ 1482aa3f0

void __cdecl
UConstraintInstanceBlueprintLibrary::SetContactTransferScale
          (FConstraintInstanceAccessor *param_1,float param_2)

{
  bool bVar1;
  FConstraintInstance *pFVar2;
  FScopedSceneLock_Chaos local_38 [2];
  
  pFVar2 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar2 != (FConstraintInstance *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar2->ProfileInstance).ContactTransferScale = param_2;
    bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_)
    ;
    if (!bVar1) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (local_38,(FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_,Write);
      FChaosEngineInterface::SetContactTransferScale_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_,
                 (pFVar2->ProfileInstance).ContactTransferScale);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(local_38);
    }
  }
  return;
}

// SetDisableCollision @ 1482aa660

void __cdecl
UConstraintInstanceBlueprintLibrary::SetDisableCollision
          (FConstraintInstanceAccessor *param_1,bool param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  longlong *plVar4;
  FScopedSceneLock_Chaos local_28;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar3->ProfileInstance).bDisableCollision = '\0';
    puVar1 = &(pFVar3->ProfileInstance).field_0x80;
    *puVar1 = *puVar1 | param_2;
    plVar4 = &pFVar3->_padding_;
    bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar4);
    if (!bVar2) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)plVar4,Write);
      FChaosEngineInterface::SetCollisionEnabled
                ((FPhysicsConstraintReference_Chaos *)plVar4,!param_2);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    }
  }
  return;
}

// SetLinearBreakable @ 1482abb20

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearBreakable
          (FConstraintInstanceAccessor *param_1,bool param_2,float param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (this->ProfileInstance).bLinearBreakable = '\0';
    puVar1 = &(this->ProfileInstance).field_0x81;
    *puVar1 = *puVar1 | param_2;
    (this->ProfileInstance).LinearBreakThreshold = param_3;
    FConstraintInstance::UpdateBreakable(this);
  }
  return;
}

// SetLinearDriveParams @ 1482abdf0

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearDriveParams
          (FConstraintInstanceAccessor *param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  FConstraintInstance *pFVar2;
  FScopedSceneLock_Chaos local_50 [3];
  
  pFVar2 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar2 != (FConstraintInstance *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar2->ProfileInstance).LinearDrive.XDrive.Stiffness = param_2;
    (pFVar2->ProfileInstance).LinearDrive.XDrive.Damping = param_3;
    (pFVar2->ProfileInstance).LinearDrive.XDrive.MaxForce = param_4;
    (pFVar2->ProfileInstance).LinearDrive.YDrive.Stiffness = param_2;
    (pFVar2->ProfileInstance).LinearDrive.YDrive.Damping = param_3;
    (pFVar2->ProfileInstance).LinearDrive.YDrive.MaxForce = param_4;
    (pFVar2->ProfileInstance).LinearDrive.ZDrive.Stiffness = param_2;
    (pFVar2->ProfileInstance).LinearDrive.ZDrive.Damping = param_3;
    (pFVar2->ProfileInstance).LinearDrive.ZDrive.MaxForce = param_4;
    bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_)
    ;
    if (!bVar1) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (local_50,(FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_,Write);
      FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar2->_padding_,
                 &(pFVar2->ProfileInstance).LinearDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(local_50);
    }
  }
  return;
}

// SetLinearLimits @ 1482abf50

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearLimits
          (FConstraintInstanceAccessor *param_1,TEnumAsByte<ELinearConstraintMotion> param_2,
          TEnumAsByte<ELinearConstraintMotion> param_3,TEnumAsByte<ELinearConstraintMotion> param_4,
          float param_5)

{
  bool bVar1;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar1) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (this->ProfileInstance).LinearLimit.Limit = param_5;
    (this->ProfileInstance).LinearLimit.XMotion.Value = param_2.Value;
    (this->ProfileInstance).LinearLimit.YMotion.Value = param_3.Value;
    (this->ProfileInstance).LinearLimit.ZMotion.Value = param_4.Value;
    FConstraintInstance::UpdateLinearLimit(this);
  }
  return;
}

// SetLinearPlasticity @ 1482ac150

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearPlasticity
          (FConstraintInstanceAccessor *param_1,bool param_2,float param_3,
          TEnumAsByte<EConstraintPlasticityType> param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (this->ProfileInstance).bLinearPlasticity = '\0';
    puVar1 = &(this->ProfileInstance).field_0x81;
    *puVar1 = *puVar1 | param_2 * '\x02';
    (this->ProfileInstance).LinearPlasticityThreshold = param_3;
    (this->ProfileInstance).LinearPlasticityType.Value = param_4.Value;
    FConstraintInstance::UpdatePlasticity(this);
  }
  return;
}

// SetLinearPositionDrive @ 1482ac290

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearPositionDrive
          (FConstraintInstanceAccessor *param_1,bool param_2,bool param_3,bool param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  FScopedSceneLock_Chaos local_20;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar3->ProfileInstance).LinearDrive.XDrive.bEnablePositionDrive = '\0';
    (pFVar3->ProfileInstance).LinearDrive.YDrive.bEnablePositionDrive = '\0';
    (pFVar3->ProfileInstance).LinearDrive.ZDrive.bEnablePositionDrive = '\0';
    puVar1 = &(pFVar3->ProfileInstance).LinearDrive.XDrive.field_0xc;
    *puVar1 = *puVar1 | param_2;
    puVar1 = &(pFVar3->ProfileInstance).LinearDrive.YDrive.field_0xc;
    *puVar1 = *puVar1 | param_3;
    puVar1 = &(pFVar3->ProfileInstance).LinearDrive.ZDrive.field_0xc;
    *puVar1 = *puVar1 | param_4;
    bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_)
    ;
    if (!bVar2) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_20,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,
                 &(pFVar3->ProfileInstance).LinearDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_20);
    }
  }
  return;
}

// SetLinearPositionTarget @ 1482ac480

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearPositionTarget
          (FConstraintInstanceAccessor *param_1,TVector<double> *param_2)

{
  double dVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    if ((((param_2->field0_0x0)._s_0.X !=
          (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.X) ||
        ((param_2->field0_0x0)._s_0.Y !=
         (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Y)) ||
       ((param_2->field0_0x0)._s_0.Z !=
        (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Z)) {
      dVar1 = (param_2->field0_0x0)._s_0.Y;
      (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.X =
           (param_2->field0_0x0)._s_0.X;
      (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Y = dVar1;
      (pFVar3->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Z =
           (param_2->field0_0x0)._s_0.Z;
      FChaosEngineInterface::SetDrivePosition
                ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,param_2);
    }
  }
  return;
}

// SetLinearSoftLimitParams @ 1482ac520

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearSoftLimitParams
          (FConstraintInstanceAccessor *param_1,bool param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    puVar1 = &(this->ProfileInstance).LinearLimit.field_0x10;
    *puVar1 = *puVar1 & 0xfe;
    puVar1 = &(this->ProfileInstance).LinearLimit.field_0x10;
    *puVar1 = *puVar1 | param_2;
    *(float *)&(this->ProfileInstance).LinearLimit.field_0x8 = param_5;
    *(float *)&(this->ProfileInstance).LinearLimit.field_0xc = param_6;
    *(float *)&(this->ProfileInstance).LinearLimit = param_3;
    *(float *)&(this->ProfileInstance).LinearLimit.field_0x4 = param_4;
    FConstraintInstance::UpdateLinearLimit(this);
  }
  return;
}

// SetLinearVelocityDrive @ 1482ac6e0

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearVelocityDrive
          (FConstraintInstanceAccessor *param_1,bool param_2,bool param_3,bool param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  FScopedSceneLock_Chaos local_20;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar3->ProfileInstance).LinearDrive.XDrive.bEnableVelocityDrive = '\0';
    (pFVar3->ProfileInstance).LinearDrive.YDrive.bEnableVelocityDrive = '\0';
    (pFVar3->ProfileInstance).LinearDrive.ZDrive.bEnableVelocityDrive = '\0';
    puVar1 = &(pFVar3->ProfileInstance).LinearDrive.XDrive.field_0xc;
    *puVar1 = *puVar1 | param_2 * '\x02';
    puVar1 = &(pFVar3->ProfileInstance).LinearDrive.YDrive.field_0xc;
    *puVar1 = *puVar1 | param_3 * '\x02';
    puVar1 = &(pFVar3->ProfileInstance).LinearDrive.ZDrive.field_0xc;
    *puVar1 = *puVar1 | param_4 * '\x02';
    bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_)
    ;
    if (!bVar2) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_20,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,
                 &(pFVar3->ProfileInstance).LinearDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_20);
    }
  }
  return;
}

// SetLinearVelocityTarget @ 1482ac8e0

void __cdecl
UConstraintInstanceBlueprintLibrary::SetLinearVelocityTarget
          (FConstraintInstanceAccessor *param_1,TVector<double> *param_2)

{
  double dVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    if ((((param_2->field0_0x0)._s_0.X !=
          (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.X) ||
        ((param_2->field0_0x0)._s_0.Y !=
         (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Y)) ||
       ((param_2->field0_0x0)._s_0.Z !=
        (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Z)) {
      dVar1 = (param_2->field0_0x0)._s_0.Y;
      (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.X =
           (param_2->field0_0x0)._s_0.X;
      (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Y = dVar1;
      (pFVar3->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Z =
           (param_2->field0_0x0)._s_0.Z;
      FChaosEngineInterface::SetDriveLinearVelocity
                ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,param_2);
    }
  }
  return;
}

// SetMassConditioningEnabled @ 1482ac980

void __cdecl
UConstraintInstanceBlueprintLibrary::SetMassConditioningEnabled
          (FConstraintInstanceAccessor *param_1,bool param_2)

{
  byte bVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  FScopedSceneLock_Chaos local_28;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    bVar1 = (pFVar3->ProfileInstance).field_0x80;
    if (param_2) {
      (pFVar3->ProfileInstance).field_0x80 = bVar1 | 0x10;
      bVar2 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_);
      if (!bVar2) {
        return;
      }
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      bVar2 = true;
    }
    else {
      (pFVar3->ProfileInstance).field_0x80 = bVar1 & 0xef;
      bVar2 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_);
      if (!bVar2) {
        return;
      }
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      bVar2 = false;
    }
    FChaosEngineInterface::SetMassConditioningEnabled_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,bVar2);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetOrientationDriveSLERP @ 1482ad970

void __cdecl
UConstraintInstanceBlueprintLibrary::SetOrientationDriveSLERP
          (FConstraintInstanceAccessor *param_1,bool param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  FScopedSceneLock_Chaos local_28;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar3->ProfileInstance).AngularDrive.SlerpDrive.bEnablePositionDrive = '\0';
    puVar1 = &(pFVar3->ProfileInstance).AngularDrive.SlerpDrive.field_0xc;
    *puVar1 = *puVar1 | param_2;
    bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_)
    ;
    if (!bVar2) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,
                 &(pFVar3->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    }
  }
  return;
}

// SetOrientationDriveTwistAndSwing @ 1482adab0

void __cdecl
UConstraintInstanceBlueprintLibrary::SetOrientationDriveTwistAndSwing
          (FConstraintInstanceAccessor *param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  FScopedSceneLock_Chaos local_28;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    (pFVar3->ProfileInstance).AngularDrive.SwingDrive.bEnablePositionDrive = '\0';
    (pFVar3->ProfileInstance).AngularDrive.TwistDrive.bEnablePositionDrive = '\0';
    puVar1 = &(pFVar3->ProfileInstance).AngularDrive.SwingDrive.field_0xc;
    *puVar1 = *puVar1 | param_3;
    puVar1 = &(pFVar3->ProfileInstance).AngularDrive.TwistDrive.field_0xc;
    *puVar1 = *puVar1 | param_2;
    bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_)
    ;
    if (!bVar2) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,
                 &(pFVar3->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    }
  }
  return;
}

// SetParentDominates @ 1482adc70

void __cdecl
UConstraintInstanceBlueprintLibrary::SetParentDominates
          (FConstraintInstanceAccessor *param_1,bool param_2)

{
  byte bVar1;
  bool bVar2;
  FConstraintInstance *pFVar3;
  FScopedSceneLock_Chaos local_28;
  
  pFVar3 = FConstraintInstanceAccessor::Get(param_1);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    bVar1 = (pFVar3->ProfileInstance).field_0x80;
    if (param_2) {
      (pFVar3->ProfileInstance).field_0x80 = bVar1 | 2;
      bVar2 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_);
      if (!bVar2) {
        return;
      }
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      bVar2 = true;
    }
    else {
      (pFVar3->ProfileInstance).field_0x80 = bVar1 & 0xfd;
      bVar2 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_);
      if (!bVar2) {
        return;
      }
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,Write);
      bVar2 = false;
    }
    FChaosEngineInterface::SetParentDominates_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&pFVar3->_padding_,bVar2);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetProjectionParams @ 1482ae320

void __cdecl
UConstraintInstanceBlueprintLibrary::SetProjectionParams
          (FConstraintInstanceAccessor *param_1,bool param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  FConstraintInstance *this;
  
  this = FConstraintInstanceAccessor::Get(param_1);
  if (this != (FConstraintInstance *)0x0) {
    fVar1 = (this->ProfileInstance).ProjectionLinearTolerance;
    fVar2 = (this->ProfileInstance).ProjectionAngularTolerance;
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_1);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    }
    FConstraintInstance::SetProjectionParams(this,param_2,param_3,param_4,fVar1,fVar2);
  }
  return;
}

// StaticRegisterNativesUConstraintInstanceBlueprintLibrary @ 1482b1da0

void __cdecl
UConstraintInstanceBlueprintLibrary::StaticRegisterNativesUConstraintInstanceBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x38;
  local_18.DataPtr = Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyParams @ 1482c05c0

void __cdecl
UConstraintInstanceBlueprintLibrary::execCopyParams(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FConstraintInstance *this;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this_00;
  FConstraintInstanceAccessor *this_01;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_58;
  FConstraintInstanceAccessor local_50;
  FConstraintInstanceAccessor local_40 [2];
  
  local_50.Owner.WeakPtr.ObjectIndex = 0;
  local_50.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_58 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_50,(FObjectPtr)&local_58);
  local_50.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_40[0].Owner.WeakPtr.ObjectIndex = 0;
  local_40[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_58 = 0;
  this_00 = &local_50;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_40,(FObjectPtr)&local_58);
  local_40[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  local_res10[0] = 0;
  this_01 = local_40;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_01 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  pFVar3 = FConstraintInstanceAccessor::Get(this_01);
  if ((this != (FConstraintInstance *)0x0) && (pFVar3 != (FConstraintInstance *)0x0)) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar2) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    FConstraintInstance::CopyConstraintPhysicalPropertiesFrom(this,pFVar3,bVar4,bVar5);
  }
  return;
}

// execGetAngularBreakable @ 1482c0be0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularBreakable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  byte *pbVar2;
  FProperty *pFVar3;
  FConstraintInstance *pFVar4;
  float *pfVar5;
  byte *pbVar6;
  FConstraintInstanceAccessor *this;
  byte local_res10 [8];
  float local_res20 [2];
  undefined8 local_48;
  FConstraintInstanceAccessor local_40 [3];
  
  local_40[0].Owner.WeakPtr.ObjectIndex = 0;
  local_40[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_40,(FObjectPtr)&local_48);
  local_40[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_40;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar6 = local_res10;
  if (pbVar2 != (byte *)0x0) {
    pbVar6 = pbVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar5 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pbVar6 = 0;
    *pfVar5 = 0.0;
  }
  else {
    *pbVar6 = (pFVar4->ProfileInstance).bAngularBreakable;
    *pfVar5 = (pFVar4->ProfileInstance).AngularBreakThreshold;
  }
  return;
}

// execGetAngularDriveMode @ 1482c0d80

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularDriveMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  uchar *puVar4;
  uchar local_res10 [16];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_28;
  
  local_28.Owner.WeakPtr.ObjectIndex = 0;
  local_28.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_28,(FObjectPtr)&local_res20);
  local_28.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_28;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    *puVar4 = (pFVar3->ProfileInstance).AngularDrive.AngularDriveMode.Value;
    return;
  }
  *puVar4 = '\0';
  return;
}

// execGetAngularDriveParams @ 1482c0ea0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularDriveParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float local_res10 [4];
  float local_res20 [2];
  float local_58 [2];
  undefined8 local_50;
  FConstraintInstanceAccessor local_48 [2];
  
  local_48[0].Owner.WeakPtr.ObjectIndex = 0;
  local_48[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_50 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_48,(FObjectPtr)&local_50);
  local_48[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_48;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar6 = local_res10;
  if (pfVar4 != (float *)0x0) {
    pfVar6 = pfVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  local_58[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar5 = local_res20;
  if (pfVar4 != (float *)0x0) {
    pfVar5 = pfVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pfVar4 = local_58;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 == (FConstraintInstance *)0x0) {
    *pfVar6 = 0.0;
    *pfVar5 = 0.0;
    *pfVar4 = 0.0;
  }
  else {
    *pfVar6 = (pFVar3->ProfileInstance).AngularDrive.SwingDrive.Stiffness;
    *pfVar5 = (pFVar3->ProfileInstance).AngularDrive.SwingDrive.Damping;
    *pfVar4 = (pFVar3->ProfileInstance).AngularDrive.SwingDrive.MaxForce;
  }
  return;
}

// execGetAngularLimits @ 1482c10a0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularLimits
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FConstraintInstance *pFVar4;
  float *pfVar5;
  uchar *puVar6;
  float *pfVar7;
  uchar *puVar8;
  float *pfVar9;
  uchar *puVar10;
  uchar local_res10 [16];
  uchar local_res20 [8];
  uchar local_78 [4];
  float local_74;
  float local_70;
  float local_6c;
  FConstraintInstanceAccessor *local_68;
  FConstraintInstanceAccessor local_60 [3];
  
  local_60[0].Owner.WeakPtr.ObjectIndex = 0;
  local_60[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_68 = (FConstraintInstanceAccessor *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_60,(FObjectPtr)&local_68);
  local_60[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_68 = local_60;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    local_68 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_74 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar8 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar7 = &local_74;
  if (pfVar5 != (float *)0x0) {
    pfVar7 = pfVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_70 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar10 = local_res20;
  if (puVar2 != (uchar *)0x0) {
    puVar10 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  local_78[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar9 = &local_70;
  if (pfVar5 != (float *)0x0) {
    pfVar9 = pfVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_6c = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_78;
  if (puVar2 != (uchar *)0x0) {
    puVar6 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6c,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6c);
  }
  pfVar5 = &local_6c;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(local_68);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *puVar8 = '\0';
    *pfVar7 = 0.0;
    *puVar10 = '\0';
    *pfVar9 = 0.0;
    *puVar6 = '\0';
    *pfVar5 = 0.0;
  }
  else {
    *puVar8 = (pFVar4->ProfileInstance).ConeLimit.Swing1Motion.Value;
    *pfVar7 = (pFVar4->ProfileInstance).ConeLimit.Swing1LimitDegrees;
    *puVar10 = (pFVar4->ProfileInstance).ConeLimit.Swing2Motion.Value;
    *pfVar9 = (pFVar4->ProfileInstance).ConeLimit.Swing2LimitDegrees;
    *puVar6 = (pFVar4->ProfileInstance).TwistLimit.TwistMotion.Value;
    *pfVar5 = (pFVar4->ProfileInstance).TwistLimit.TwistLimitDegrees;
  }
  return;
}

// execGetAngularOrientationTarget @ 1482c13a0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularOrientationTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  double dVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  double *pdVar5;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_38;
  double local_28 [4];
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_res10);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar5 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pdVar5 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    pdVar5[1] = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    pdVar5[2] = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    dVar3 = (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Yaw;
    *pdVar5 = (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Pitch;
    pdVar5[1] = dVar3;
    pdVar5[2] = (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Roll;
  }
  return;
}

// execGetAngularPlasticity @ 1482c14e0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularPlasticity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  byte *pbVar2;
  FProperty *pFVar3;
  FConstraintInstance *pFVar4;
  float *pfVar5;
  byte *pbVar6;
  FConstraintInstanceAccessor *this;
  byte local_res10 [8];
  float local_res20 [2];
  undefined8 local_48;
  FConstraintInstanceAccessor local_40 [3];
  
  local_40[0].Owner.WeakPtr.ObjectIndex = 0;
  local_40[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_40,(FObjectPtr)&local_48);
  local_40[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_40;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar6 = local_res10;
  if (pbVar2 != (byte *)0x0) {
    pbVar6 = pbVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar5 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pbVar6 = 0;
    *pfVar5 = 0.0;
  }
  else {
    *pbVar6 = (pFVar4->ProfileInstance).bAngularPlasticity;
    *pfVar5 = (pFVar4->ProfileInstance).AngularPlasticityThreshold;
  }
  return;
}

// execGetAngularSoftSwingLimitParams @ 1482c1680

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularSoftSwingLimitParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  byte *pbVar2;
  FProperty *pFVar3;
  FConstraintInstance *pFVar4;
  uchar *puVar5;
  uchar *puVar6;
  byte *pbVar7;
  FConstraintInstanceAccessor *this;
  uchar *puVar8;
  uchar *puVar9;
  byte local_res10 [16];
  uchar local_res20 [8];
  uchar local_78 [4];
  undefined4 local_74;
  uchar local_70 [8];
  undefined8 local_68;
  FConstraintInstanceAccessor local_60 [3];
  
  local_60[0].Owner.WeakPtr.ObjectIndex = 0;
  local_60[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_68 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_60,(FObjectPtr)&local_68);
  local_60[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_60;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar7 = local_res10;
  if (pbVar2 != (byte *)0x0) {
    pbVar7 = pbVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_res20;
  if (puVar5 != (uchar *)0x0) {
    puVar9 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_74 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_78;
  if (puVar5 != (uchar *)0x0) {
    puVar8 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = (uchar *)&local_74;
  if (puVar5 != (uchar *)0x0) {
    puVar6 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  puVar5 = local_70;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pbVar7 = 0;
    puVar9[0] = '\0';
    puVar9[1] = '\0';
    puVar9[2] = '\0';
    puVar9[3] = '\0';
    puVar8[0] = '\0';
    puVar8[1] = '\0';
    puVar8[2] = '\0';
    puVar8[3] = '\0';
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
  }
  else {
    *pbVar7 = (byte)(pFVar4->ProfileInstance).ConeLimit._padding_ & 1;
    *(int *)puVar9 = (int)(pFVar4->ProfileInstance).ConeLimit._padding_;
    *(undefined4 *)puVar8 =
         *(undefined4 *)((longlong)&(pFVar4->ProfileInstance).ConeLimit._padding_ + 4);
    *(int *)puVar6 = (int)(pFVar4->ProfileInstance).ConeLimit._padding_;
    *(undefined4 *)puVar5 =
         *(undefined4 *)((longlong)&(pFVar4->ProfileInstance).ConeLimit._padding_ + 4);
  }
  return;
}

// execGetAngularSoftTwistLimitParams @ 1482c1920

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularSoftTwistLimitParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  byte *pbVar2;
  FProperty *pFVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  FConstraintInstance *pFVar7;
  uchar *puVar8;
  uchar *puVar9;
  byte *pbVar10;
  FConstraintInstanceAccessor *this;
  uchar *puVar11;
  uchar *puVar12;
  byte local_res10 [16];
  uchar local_res20 [8];
  uchar local_78 [4];
  undefined4 local_74;
  uchar local_70 [8];
  undefined8 local_68;
  FConstraintInstanceAccessor local_60 [3];
  
  local_60[0].Owner.WeakPtr.ObjectIndex = 0;
  local_60[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_68 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_60,(FObjectPtr)&local_68);
  local_60[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_60;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar10 = local_res10;
  if (pbVar2 != (byte *)0x0) {
    pbVar10 = pbVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = local_res20;
  if (puVar8 != (uchar *)0x0) {
    puVar12 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_74 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar11 = local_78;
  if (puVar8 != (uchar *)0x0) {
    puVar11 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = (uchar *)&local_74;
  if (puVar8 != (uchar *)0x0) {
    puVar9 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  puVar8 = local_70;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar7 = FConstraintInstanceAccessor::Get(this);
  if (pFVar7 == (FConstraintInstance *)0x0) {
    *pbVar10 = 0;
    puVar12[0] = '\0';
    puVar12[1] = '\0';
    puVar12[2] = '\0';
    puVar12[3] = '\0';
    puVar11[0] = '\0';
    puVar11[1] = '\0';
    puVar11[2] = '\0';
    puVar11[3] = '\0';
    puVar9[0] = '\0';
    puVar9[1] = '\0';
    puVar9[2] = '\0';
    puVar9[3] = '\0';
    puVar8[0] = '\0';
    puVar8[1] = '\0';
    puVar8[2] = '\0';
    puVar8[3] = '\0';
  }
  else {
    *pbVar10 = (pFVar7->ProfileInstance).TwistLimit.field_0x10 & 1;
    uVar4 = (pFVar7->ProfileInstance).TwistLimit.field_0x1;
    uVar5 = (pFVar7->ProfileInstance).TwistLimit.field_0x2;
    uVar6 = (pFVar7->ProfileInstance).TwistLimit.field_0x3;
    puVar12[0] = (pFVar7->ProfileInstance).TwistLimit.field_0x0;
    puVar12[1] = uVar4;
    puVar12[2] = uVar5;
    puVar12[3] = uVar6;
    uVar4 = (pFVar7->ProfileInstance).TwistLimit.field_0x5;
    uVar5 = (pFVar7->ProfileInstance).TwistLimit.field_0x6;
    uVar6 = (pFVar7->ProfileInstance).TwistLimit.field_0x7;
    puVar11[0] = (pFVar7->ProfileInstance).TwistLimit.field_0x4;
    puVar11[1] = uVar4;
    puVar11[2] = uVar5;
    puVar11[3] = uVar6;
    uVar4 = (pFVar7->ProfileInstance).TwistLimit.field_0x9;
    uVar5 = (pFVar7->ProfileInstance).TwistLimit.field_0xa;
    uVar6 = (pFVar7->ProfileInstance).TwistLimit.field_0xb;
    puVar9[0] = (pFVar7->ProfileInstance).TwistLimit.field_0x8;
    puVar9[1] = uVar4;
    puVar9[2] = uVar5;
    puVar9[3] = uVar6;
    uVar4 = (pFVar7->ProfileInstance).TwistLimit.field_0xd;
    uVar5 = (pFVar7->ProfileInstance).TwistLimit.field_0xe;
    uVar6 = (pFVar7->ProfileInstance).TwistLimit.field_0xf;
    puVar8[0] = (pFVar7->ProfileInstance).TwistLimit.field_0xc;
    puVar8[1] = uVar4;
    puVar8[2] = uVar5;
    puVar8[3] = uVar6;
  }
  return;
}

// execGetAngularVelocityDriveSLERP @ 1482c1bc0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularVelocityDriveSLERP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  byte *pbVar4;
  byte local_res10 [16];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_28;
  
  local_28.Owner.WeakPtr.ObjectIndex = 0;
  local_28.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_28,(FObjectPtr)&local_res20);
  local_28.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_28;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    *pbVar4 = (pFVar3->ProfileInstance).AngularDrive.SlerpDrive.bEnableVelocityDrive;
    return;
  }
  *pbVar4 = 0;
  return;
}

// execGetAngularVelocityDriveTwistAndSwing @ 1482c1ce0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularVelocityDriveTwistAndSwing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  byte *pbVar4;
  byte *pbVar5;
  byte local_res10 [8];
  byte local_res20 [8];
  undefined8 local_38;
  FConstraintInstanceAccessor local_30 [2];
  
  local_30[0].Owner.WeakPtr.ObjectIndex = 0;
  local_30[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_38 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_30,(FObjectPtr)&local_38);
  local_30[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_30;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar5 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar4 = local_res10;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar5 = local_res20;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 == (FConstraintInstance *)0x0) {
    *pbVar4 = 0;
    *pbVar5 = 0;
  }
  else {
    *pbVar4 = (pFVar3->ProfileInstance).AngularDrive.TwistDrive.bEnableVelocityDrive;
    *pbVar5 = (pFVar3->ProfileInstance).AngularDrive.SwingDrive.bEnableVelocityDrive;
  }
  return;
}

// execGetAngularVelocityTarget @ 1482c1e70

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAngularVelocityTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  double dVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  double *pdVar5;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_38;
  double local_28 [4];
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_res10);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar5 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pdVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pdVar5[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pdVar5[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar3 = (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Y;
    *pdVar5 = (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.X;
    pdVar5[1] = dVar3;
    pdVar5[2] = (pFVar4->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Z;
  }
  return;
}

// execGetAttachedBodyNames @ 1482c1fb0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetAttachedBodyNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  FName *pFVar4;
  FName *pFVar5;
  FName local_res10;
  FName local_res20;
  undefined8 local_38;
  FConstraintInstanceAccessor local_30 [2];
  
  local_30[0].Owner.WeakPtr.ObjectIndex = 0;
  local_30[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_38 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_30,(FObjectPtr)&local_38);
  local_30[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_30;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_res10;
  if (pFVar5 != (FName *)0x0) {
    pFVar4 = pFVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pFVar5 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    *pFVar4 = pFVar3->ConstraintBone2;
    *pFVar5 = pFVar3->ConstraintBone1;
  }
  return;
}

// execGetContactTransferScale @ 1482c2190

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetContactTransferScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  float *pfVar4;
  float local_res10 [4];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_38 [2];
  
  local_38[0].Owner.WeakPtr.ObjectIndex = 0;
  local_38[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_38,(FObjectPtr)&local_res20);
  local_38[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar4 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 == (FConstraintInstance *)0x0) {
    *pfVar4 = 0.0;
  }
  else {
    *pfVar4 = (pFVar3->ProfileInstance).ContactTransferScale;
  }
  return;
}

// execGetDisableCollsion @ 1482c22b0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetDisableCollsion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FConstraintInstance *pFVar2;
  FConstraintInstanceAccessor *this;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_18;
  
  local_18.Owner.WeakPtr.ObjectIndex = 0;
  local_18.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_18,(FObjectPtr)&local_res10);
  local_18.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FConstraintInstanceAccessor::Get(this);
  if (pFVar2 != (FConstraintInstance *)0x0) {
    *(byte *)param_3 = (pFVar2->ProfileInstance).bDisableCollision;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execGetLinearBreakable @ 1482c2450

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearBreakable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  byte *pbVar2;
  FProperty *pFVar3;
  FConstraintInstance *pFVar4;
  float *pfVar5;
  byte *pbVar6;
  FConstraintInstanceAccessor *this;
  byte local_res10 [8];
  float local_res20 [2];
  undefined8 local_48;
  FConstraintInstanceAccessor local_40 [3];
  
  local_40[0].Owner.WeakPtr.ObjectIndex = 0;
  local_40[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_40,(FObjectPtr)&local_48);
  local_40[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_40;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar6 = local_res10;
  if (pbVar2 != (byte *)0x0) {
    pbVar6 = pbVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar5 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pbVar6 = 0;
    *pfVar5 = 0.0;
  }
  else {
    *pbVar6 = (pFVar4->ProfileInstance).bLinearBreakable;
    *pfVar5 = (pFVar4->ProfileInstance).LinearBreakThreshold;
  }
  return;
}

// execGetLinearDriveParams @ 1482c25f0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearDriveParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float local_res10 [4];
  float local_res20 [2];
  float local_58 [2];
  undefined8 local_50;
  FConstraintInstanceAccessor local_48 [2];
  
  local_48[0].Owner.WeakPtr.ObjectIndex = 0;
  local_48[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_50 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_48,(FObjectPtr)&local_50);
  local_48[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_48;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar6 = local_res10;
  if (pfVar4 != (float *)0x0) {
    pfVar6 = pfVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  local_58[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar5 = local_res20;
  if (pfVar4 != (float *)0x0) {
    pfVar5 = pfVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pfVar4 = local_58;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 == (FConstraintInstance *)0x0) {
    *pfVar6 = 0.0;
    *pfVar5 = 0.0;
    *pfVar4 = 0.0;
  }
  else {
    *pfVar6 = (pFVar3->ProfileInstance).LinearDrive.XDrive.Stiffness;
    *pfVar5 = (pFVar3->ProfileInstance).LinearDrive.XDrive.Damping;
    *pfVar4 = (pFVar3->ProfileInstance).LinearDrive.XDrive.MaxForce;
  }
  return;
}

// execGetLinearLimits @ 1482c27f0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearLimits
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  uchar *puVar2;
  FProperty *pFVar3;
  FConstraintInstance *pFVar4;
  uchar *puVar5;
  uchar *puVar6;
  FConstraintInstanceAccessor *this;
  float *pfVar7;
  uchar *puVar8;
  uchar local_res10 [16];
  uchar local_res20 [8];
  uchar local_68 [4];
  float local_64;
  undefined8 local_60;
  FConstraintInstanceAccessor local_58 [2];
  
  local_58[0].Owner.WeakPtr.ObjectIndex = 0;
  local_58[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_60 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_58,(FObjectPtr)&local_60);
  local_58[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_58;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar6 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_68[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_res20;
  if (puVar2 != (uchar *)0x0) {
    puVar8 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_64 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_68;
  if (puVar2 != (uchar *)0x0) {
    puVar5 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_64,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_64);
  }
  pfVar7 = &local_64;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar7 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *puVar6 = '\0';
    *puVar8 = '\0';
    *puVar5 = '\0';
    *pfVar7 = 0.0;
  }
  else {
    *puVar6 = (pFVar4->ProfileInstance).LinearLimit.XMotion.Value;
    *puVar8 = (pFVar4->ProfileInstance).LinearLimit.YMotion.Value;
    *puVar5 = (pFVar4->ProfileInstance).LinearLimit.ZMotion.Value;
    *pfVar7 = (pFVar4->ProfileInstance).LinearLimit.Limit;
  }
  return;
}

// execGetLinearPlasticity @ 1482c2a30

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearPlasticity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  byte *pbVar2;
  float *pfVar3;
  FProperty *pFVar4;
  FConstraintInstance *pFVar5;
  FConstraintInstanceAccessor *this;
  uchar *puVar6;
  float *pfVar7;
  byte *pbVar8;
  byte local_res10 [16];
  uchar local_res20 [8];
  float local_48 [2];
  undefined8 local_40;
  FConstraintInstanceAccessor local_38;
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_40 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_40);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = param_2->MostRecentPropertyAddress;
  local_48[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar8 = local_res10;
  if (pbVar2 != (byte *)0x0) {
    pbVar8 = pbVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar7 = local_48;
  if (pfVar3 != (float *)0x0) {
    pfVar7 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar6 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FConstraintInstanceAccessor::Get(this);
  if (pFVar5 != (FConstraintInstance *)0x0) {
    *pbVar8 = (pFVar5->ProfileInstance).bLinearPlasticity;
    *pfVar7 = (pFVar5->ProfileInstance).LinearPlasticityThreshold;
    *puVar6 = (pFVar5->ProfileInstance).LinearPlasticityType.Value;
    return;
  }
  *pbVar8 = 0;
  *pfVar7 = 0.0;
  *puVar6 = '\0';
  return;
}

// execGetLinearPositionDrive @ 1482c2c30

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearPositionDrive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_res10 [16];
  byte local_res20 [8];
  byte local_48 [8];
  undefined8 local_40;
  FConstraintInstanceAccessor local_38;
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_40 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_40);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar5 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar6 = local_res10;
  if (pbVar5 != (byte *)0x0) {
    pbVar6 = pbVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar5 = param_2->MostRecentPropertyAddress;
  local_48[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar4 = local_res20;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pbVar5 = local_48;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    *pbVar6 = (pFVar3->ProfileInstance).LinearDrive.XDrive.bEnablePositionDrive;
    *pbVar4 = (pFVar3->ProfileInstance).LinearDrive.YDrive.bEnablePositionDrive;
    *pbVar5 = (pFVar3->ProfileInstance).LinearDrive.ZDrive.bEnablePositionDrive;
    return;
  }
  *pbVar6 = 0;
  *pbVar4 = 0;
  *pbVar5 = 0;
  return;
}

// execGetLinearPositionTarget @ 1482c2e30

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearPositionTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  double dVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  double *pdVar5;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_38;
  double local_28 [4];
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_res10);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar5 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pdVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pdVar5[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pdVar5[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar3 = (pFVar4->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Y;
    *pdVar5 = (pFVar4->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.X;
    pdVar5[1] = dVar3;
    pdVar5[2] = (pFVar4->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Z;
  }
  return;
}

// execGetLinearSoftLimitParams @ 1482c2f70

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearSoftLimitParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  byte *pbVar2;
  FProperty *pFVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  FConstraintInstance *pFVar7;
  uchar *puVar8;
  uchar *puVar9;
  byte *pbVar10;
  FConstraintInstanceAccessor *this;
  uchar *puVar11;
  uchar *puVar12;
  byte local_res10 [16];
  uchar local_res20 [8];
  uchar local_78 [4];
  undefined4 local_74;
  uchar local_70 [8];
  undefined8 local_68;
  FConstraintInstanceAccessor local_60 [3];
  
  local_60[0].Owner.WeakPtr.ObjectIndex = 0;
  local_60[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_68 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_60,(FObjectPtr)&local_68);
  local_60[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_60;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar10 = local_res10;
  if (pbVar2 != (byte *)0x0) {
    pbVar10 = pbVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = local_res20;
  if (puVar8 != (uchar *)0x0) {
    puVar12 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_74 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar11 = local_78;
  if (puVar8 != (uchar *)0x0) {
    puVar11 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = (uchar *)&local_74;
  if (puVar8 != (uchar *)0x0) {
    puVar9 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  puVar8 = local_70;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar7 = FConstraintInstanceAccessor::Get(this);
  if (pFVar7 == (FConstraintInstance *)0x0) {
    *pbVar10 = 0;
    puVar12[0] = '\0';
    puVar12[1] = '\0';
    puVar12[2] = '\0';
    puVar12[3] = '\0';
    puVar11[0] = '\0';
    puVar11[1] = '\0';
    puVar11[2] = '\0';
    puVar11[3] = '\0';
    puVar9[0] = '\0';
    puVar9[1] = '\0';
    puVar9[2] = '\0';
    puVar9[3] = '\0';
    puVar8[0] = '\0';
    puVar8[1] = '\0';
    puVar8[2] = '\0';
    puVar8[3] = '\0';
  }
  else {
    *pbVar10 = (pFVar7->ProfileInstance).LinearLimit.field_0x10 & 1;
    uVar4 = (pFVar7->ProfileInstance).LinearLimit.field_0x1;
    uVar5 = (pFVar7->ProfileInstance).LinearLimit.field_0x2;
    uVar6 = (pFVar7->ProfileInstance).LinearLimit.field_0x3;
    puVar12[0] = (pFVar7->ProfileInstance).LinearLimit.field_0x0;
    puVar12[1] = uVar4;
    puVar12[2] = uVar5;
    puVar12[3] = uVar6;
    uVar4 = (pFVar7->ProfileInstance).LinearLimit.field_0x5;
    uVar5 = (pFVar7->ProfileInstance).LinearLimit.field_0x6;
    uVar6 = (pFVar7->ProfileInstance).LinearLimit.field_0x7;
    puVar11[0] = (pFVar7->ProfileInstance).LinearLimit.field_0x4;
    puVar11[1] = uVar4;
    puVar11[2] = uVar5;
    puVar11[3] = uVar6;
    uVar4 = (pFVar7->ProfileInstance).LinearLimit.field_0x9;
    uVar5 = (pFVar7->ProfileInstance).LinearLimit.field_0xa;
    uVar6 = (pFVar7->ProfileInstance).LinearLimit.field_0xb;
    puVar9[0] = (pFVar7->ProfileInstance).LinearLimit.field_0x8;
    puVar9[1] = uVar4;
    puVar9[2] = uVar5;
    puVar9[3] = uVar6;
    uVar4 = (pFVar7->ProfileInstance).LinearLimit.field_0xd;
    uVar5 = (pFVar7->ProfileInstance).LinearLimit.field_0xe;
    uVar6 = (pFVar7->ProfileInstance).LinearLimit.field_0xf;
    puVar8[0] = (pFVar7->ProfileInstance).LinearLimit.field_0xc;
    puVar8[1] = uVar4;
    puVar8[2] = uVar5;
    puVar8[3] = uVar6;
  }
  return;
}

// execGetLinearVelocityDrive @ 1482c3210

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearVelocityDrive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_res10 [16];
  byte local_res20 [8];
  byte local_48 [8];
  undefined8 local_40;
  FConstraintInstanceAccessor local_38;
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_40 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_40);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar5 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar6 = local_res10;
  if (pbVar5 != (byte *)0x0) {
    pbVar6 = pbVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar5 = param_2->MostRecentPropertyAddress;
  local_48[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar4 = local_res20;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pbVar5 = local_48;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    *pbVar6 = (pFVar3->ProfileInstance).LinearDrive.XDrive.bEnableVelocityDrive;
    *pbVar4 = (pFVar3->ProfileInstance).LinearDrive.YDrive.bEnableVelocityDrive;
    *pbVar5 = (pFVar3->ProfileInstance).LinearDrive.ZDrive.bEnableVelocityDrive;
    return;
  }
  *pbVar6 = 0;
  *pbVar4 = 0;
  *pbVar5 = 0;
  return;
}

// execGetLinearVelocityTarget @ 1482c3410

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetLinearVelocityTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  double dVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  double *pdVar5;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_38;
  double local_28 [4];
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_res10);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar5 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pdVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pdVar5[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pdVar5[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar3 = (pFVar4->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Y;
    *pdVar5 = (pFVar4->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.X;
    pdVar5[1] = dVar3;
    pdVar5[2] = (pFVar4->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Z;
  }
  return;
}

// execGetMassConditioningEnabled @ 1482c3550

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetMassConditioningEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FConstraintInstance *pFVar2;
  FConstraintInstanceAccessor *this;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_18;
  
  local_18.Owner.WeakPtr.ObjectIndex = 0;
  local_18.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_18,(FObjectPtr)&local_res10);
  local_18.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FConstraintInstanceAccessor::Get(this);
  if (pFVar2 != (FConstraintInstance *)0x0) {
    *(byte *)param_3 = (pFVar2->ProfileInstance).bEnableMassConditioning;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetOrientationDriveSLERP @ 1482c3630

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetOrientationDriveSLERP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  byte *pbVar4;
  byte local_res10 [16];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_28;
  
  local_28.Owner.WeakPtr.ObjectIndex = 0;
  local_28.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_28,(FObjectPtr)&local_res20);
  local_28.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_28;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 != (FConstraintInstance *)0x0) {
    *pbVar4 = (pFVar3->ProfileInstance).AngularDrive.SlerpDrive.bEnablePositionDrive;
    return;
  }
  *pbVar4 = 0;
  return;
}

// execGetOrientationDriveTwistAndSwing @ 1482c3750

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetOrientationDriveTwistAndSwing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  FConstraintInstance *pFVar3;
  FConstraintInstanceAccessor *this;
  byte *pbVar4;
  byte *pbVar5;
  byte local_res10 [8];
  byte local_res20 [8];
  undefined8 local_38;
  FConstraintInstanceAccessor local_30 [2];
  
  local_30[0].Owner.WeakPtr.ObjectIndex = 0;
  local_30[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_38 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_30,(FObjectPtr)&local_38);
  local_30[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_30;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar5 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar4 = local_res10;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar5 = local_res20;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FConstraintInstanceAccessor::Get(this);
  if (pFVar3 == (FConstraintInstance *)0x0) {
    *pbVar4 = 0;
    *pbVar5 = 0;
  }
  else {
    *pbVar4 = (pFVar3->ProfileInstance).AngularDrive.TwistDrive.bEnablePositionDrive;
    *pbVar5 = (pFVar3->ProfileInstance).AngularDrive.SwingDrive.bEnablePositionDrive;
  }
  return;
}

// execGetParentDominates @ 1482c3910

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetParentDominates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FConstraintInstance *pFVar2;
  FConstraintInstanceAccessor *this;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_18;
  
  local_18.Owner.WeakPtr.ObjectIndex = 0;
  local_18.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_18,(FObjectPtr)&local_res10);
  local_18.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FConstraintInstanceAccessor::Get(this);
  if (pFVar2 != (FConstraintInstance *)0x0) {
    *(byte *)param_3 = (pFVar2->ProfileInstance).bParentDominates;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetProjectionParams @ 1482c3aa0

void __cdecl
UConstraintInstanceBlueprintLibrary::execGetProjectionParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  byte *pbVar2;
  FProperty *pFVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  float *pfVar5;
  float *pfVar6;
  byte *pbVar7;
  byte local_res10 [16];
  float local_res20 [2];
  float local_58 [2];
  undefined8 local_50;
  FConstraintInstanceAccessor local_48 [2];
  
  local_48[0].Owner.WeakPtr.ObjectIndex = 0;
  local_48[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_50 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_48,(FObjectPtr)&local_50);
  local_48[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = local_48;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar7 = local_res10;
  if (pbVar2 != (byte *)0x0) {
    pbVar7 = pbVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  local_58[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar6 = local_res20;
  if (pfVar5 != (float *)0x0) {
    pfVar6 = pfVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pfVar5 = local_58;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 == (FConstraintInstance *)0x0) {
    *pbVar7 = 0;
    *pfVar6 = 0.0;
    *pfVar5 = 0.0;
  }
  else {
    *pbVar7 = (pFVar4->ProfileInstance).bEnableProjection;
    *pfVar6 = (pFVar4->ProfileInstance).ProjectionLinearAlpha;
    *pfVar5 = (pFVar4->ProfileInstance).ProjectionAngularAlpha;
  }
  return;
}

// execSetAngularBreakable @ 1482c44c0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularBreakable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  float fVar3;
  bool bVar4;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  bool bVar5;
  int local_res10 [4];
  float local_res20 [2];
  undefined8 local_48;
  FConstraintInstanceAccessor local_40 [3];
  
  local_40[0].Owner.WeakPtr.ObjectIndex = 0;
  local_40[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_40,(FObjectPtr)&local_48);
  local_40[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  local_res10[0] = 0;
  this_00 = local_40;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  fVar3 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar4) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    (this->ProfileInstance).bAngularBreakable = '\0';
    puVar1 = &(this->ProfileInstance).field_0x80;
    *puVar1 = *puVar1 | bVar5 << 6;
    (this->ProfileInstance).AngularBreakThreshold = fVar3;
    FConstraintInstance::UpdateBreakable(this);
  }
  return;
}

// execSetAngularDriveMode @ 1482c4650

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularDriveMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TEnumAsByte<EAngularDriveMode::Type> TVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  TEnumAsByte<EAngularDriveMode::Type> local_res10 [8];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_38;
  FScopedSceneLock_Chaos local_28;
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_res20);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0].Value = '\0';
  this = &local_38;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  TVar2.Value = local_res10[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).AngularDrive.AngularDriveMode.Value = TVar2.Value;
    bVar3 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_)
    ;
    if (!bVar3) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_28,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 &(pFVar4->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    }
  }
  return;
}

// execSetAngularDriveParams @ 1482c47a0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularDriveParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FAngularDriveConstraint *pFVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  FConstraintInstance *pFVar7;
  FConstraintInstanceAccessor *this;
  longlong *plVar8;
  float local_res10 [2];
  float local_res20 [2];
  float local_78 [2];
  undefined8 local_70;
  FConstraintInstanceAccessor local_68;
  FScopedSceneLock_Chaos local_58 [3];
  
  local_68.Owner.WeakPtr.ObjectIndex = 0;
  local_68.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_70 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_68,(FObjectPtr)&local_70);
  local_68.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78[0] = 0.0;
  this = &local_68;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar5 = local_78[0];
  fVar4 = local_res20[0];
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar7 = FConstraintInstanceAccessor::Get(this);
  if (pFVar7 != (FConstraintInstance *)0x0) {
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar6) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    pFVar1 = &(pFVar7->ProfileInstance).AngularDrive;
    plVar8 = &pFVar7->_padding_;
    (pFVar7->ProfileInstance).AngularDrive.SwingDrive.Stiffness = fVar5;
    (pFVar7->ProfileInstance).AngularDrive.SwingDrive.Damping = fVar4;
    (pFVar7->ProfileInstance).AngularDrive.SwingDrive.MaxForce = fVar3;
    (pFVar1->TwistDrive).Stiffness = fVar5;
    (pFVar7->ProfileInstance).AngularDrive.TwistDrive.Damping = fVar4;
    (pFVar7->ProfileInstance).AngularDrive.TwistDrive.MaxForce = fVar3;
    (pFVar7->ProfileInstance).AngularDrive.SlerpDrive.Stiffness = fVar5;
    (pFVar7->ProfileInstance).AngularDrive.SlerpDrive.Damping = fVar4;
    (pFVar7->ProfileInstance).AngularDrive.SlerpDrive.MaxForce = fVar3;
    bVar6 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar8);
    if (!bVar6) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (local_58,(FPhysicsConstraintReference_Chaos *)plVar8,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)plVar8,pFVar1,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(local_58);
    }
  }
  return;
}

// execSetAngularLimits @ 1482c49f0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularLimits
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TEnumAsByte<EAngularConstraintMotion> TVar2;
  TEnumAsByte<EAngularConstraintMotion> TVar3;
  TEnumAsByte<EAngularConstraintMotion> TVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  TEnumAsByte<EAngularConstraintMotion> local_res10 [16];
  TEnumAsByte<EAngularConstraintMotion> local_res20 [8];
  TEnumAsByte<EAngularConstraintMotion> local_88 [4];
  float local_84;
  float local_80;
  float local_7c;
  undefined8 local_78;
  FConstraintInstanceAccessor local_70 [6];
  
  local_70[0].Owner.WeakPtr.ObjectIndex = 0;
  local_70[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_78 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_70,(FObjectPtr)&local_78);
  local_70[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_88[0].Value = '\0';
  this_00 = local_70;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_7c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7c);
  }
  local_res20[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_80 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res10[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_84 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  fVar7 = local_7c;
  fVar6 = local_80;
  fVar5 = local_84;
  TVar4.Value = local_88[0].Value;
  TVar3.Value = local_res20[0].Value;
  TVar2.Value = local_res10[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar8) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    (this->ProfileInstance).ConeLimit.Swing1LimitDegrees = fVar7;
    (this->ProfileInstance).ConeLimit.Swing1Motion.Value = TVar4.Value;
    FConstraintInstance::UpdateAngularLimit(this);
    (this->ProfileInstance).ConeLimit.Swing2LimitDegrees = fVar6;
    (this->ProfileInstance).ConeLimit.Swing2Motion.Value = TVar3.Value;
    FConstraintInstance::UpdateAngularLimit(this);
    (this->ProfileInstance).TwistLimit.TwistLimitDegrees = fVar5;
    (this->ProfileInstance).TwistLimit.TwistMotion.Value = TVar2.Value;
    FConstraintInstance::UpdateAngularLimit(this);
  }
  return;
}

// execSetAngularOrientationTarget @ 1482c4cb0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularOrientationTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  TQuat<double> *pTVar5;
  TRotator<double> *this;
  FConstraintInstanceAccessor *this_00;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_68;
  TRotator<double> local_58;
  TRotator<double> local_40;
  TQuat<double> local_28;
  
  local_68.Owner.WeakPtr.ObjectIndex = 0;
  local_68.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_68,(FObjectPtr)&local_res10);
  local_68.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this_00 = &local_68;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this_00 = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  this = &local_40;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    this = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this_00);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    pTVar5 = UE::Math::TRotator<double>::Quaternion(this,&local_28);
    UE::Math::TRotator<double>::TRotator<double>(&local_58,pTVar5);
    if (((local_58.Pitch != (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Pitch) ||
        (local_58.Yaw != (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Yaw)) ||
       (local_58.Roll != (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Roll)) {
      (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Pitch = local_58.Pitch;
      (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Yaw = local_58.Yaw;
      (pFVar4->ProfileInstance).AngularDrive.OrientationTarget.Roll = local_58.Roll;
      FChaosEngineInterface::SetDriveOrientation
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,pTVar5);
    }
  }
  return;
}

// execSetAngularPlasticity @ 1482c4e50

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularPlasticity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  float fVar3;
  bool bVar4;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  bool bVar5;
  int local_res10 [4];
  float local_res20 [2];
  undefined8 local_48;
  FConstraintInstanceAccessor local_40 [3];
  
  local_40[0].Owner.WeakPtr.ObjectIndex = 0;
  local_40[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_40,(FObjectPtr)&local_48);
  local_40[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  local_res10[0] = 0;
  this_00 = local_40;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  fVar3 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar4) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    (this->ProfileInstance).bAngularPlasticity = '\0';
    puVar1 = &(this->ProfileInstance).field_0x80;
    *puVar1 = *puVar1 | bVar5 << 7;
    (this->ProfileInstance).AngularPlasticityThreshold = fVar3;
    FConstraintInstance::UpdatePlasticity(this);
  }
  return;
}

// execSetAngularSoftSwingLimitParams @ 1482c4fe0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularSoftSwingLimitParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  bool bVar8;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  FConstraintInstanceAccessor local_70 [7];
  
  local_70[0].Owner.WeakPtr.ObjectIndex = 0;
  local_70[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_78 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_70,(FObjectPtr)&local_78);
  local_70[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_res10[0] = 0;
  this_00 = local_70;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar8 = local_res10[0] != 0;
  local_80[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  local_84 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  local_88 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  uVar6 = local_80[0];
  uVar5 = local_84;
  uVar4 = local_88;
  uVar3 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar7) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    piVar1 = &(this->ProfileInstance).ConeLimit._padding_;
    *(byte *)piVar1 = (byte)*piVar1 & 0xfe;
    piVar1 = &(this->ProfileInstance).ConeLimit._padding_;
    *(byte *)piVar1 = (byte)*piVar1 | bVar8;
    *(undefined4 *)&(this->ProfileInstance).ConeLimit._padding_ = uVar6;
    *(undefined4 *)((longlong)&(this->ProfileInstance).ConeLimit._padding_ + 4) = uVar5;
    *(undefined4 *)&(this->ProfileInstance).ConeLimit._padding_ = uVar4;
    *(undefined4 *)((longlong)&(this->ProfileInstance).ConeLimit._padding_ + 4) = uVar3;
    FConstraintInstance::UpdateAngularLimit(this);
  }
  return;
}

// execSetAngularSoftTwistLimitParams @ 1482c5260

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularSoftTwistLimitParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  bool bVar8;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  FConstraintInstanceAccessor local_70 [7];
  
  local_70[0].Owner.WeakPtr.ObjectIndex = 0;
  local_70[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_78 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_70,(FObjectPtr)&local_78);
  local_70[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_res10[0] = 0;
  this_00 = local_70;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar8 = local_res10[0] != 0;
  local_80[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  local_84 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  local_88 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  uVar6 = local_80[0];
  uVar5 = local_84;
  uVar4 = local_88;
  uVar3 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar7) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    puVar1 = &(this->ProfileInstance).TwistLimit.field_0x10;
    *puVar1 = *puVar1 & 0xfe;
    puVar1 = &(this->ProfileInstance).TwistLimit.field_0x10;
    *puVar1 = *puVar1 | bVar8;
    *(undefined4 *)&(this->ProfileInstance).TwistLimit = uVar6;
    *(undefined4 *)&(this->ProfileInstance).TwistLimit.field_0x4 = uVar5;
    *(undefined4 *)&(this->ProfileInstance).TwistLimit.field_0x8 = uVar4;
    *(undefined4 *)&(this->ProfileInstance).TwistLimit.field_0xc = uVar3;
    FConstraintInstance::UpdateAngularLimit(this);
  }
  return;
}

// execSetAngularVelocityDriveSLERP @ 1482c54e0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularVelocityDriveSLERP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  bool bVar5;
  int local_res10 [4];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_48;
  FScopedSceneLock_Chaos local_38;
  
  local_48.Owner.WeakPtr.ObjectIndex = 0;
  local_48.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_48,(FObjectPtr)&local_res20);
  local_48.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  this = &local_48;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).AngularDrive.SlerpDrive.bEnableVelocityDrive = '\0';
    puVar1 = &(pFVar4->ProfileInstance).AngularDrive.SlerpDrive.field_0xc;
    *puVar1 = *puVar1 | bVar5 * '\x02';
    bVar5 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_)
    ;
    if (!bVar5) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_38,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 &(pFVar4->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_38);
    }
  }
  return;
}

// execSetAngularVelocityDriveTwistAndSwing @ 1482c5640

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularVelocityDriveTwistAndSwing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_48;
  FConstraintInstanceAccessor local_40;
  FScopedSceneLock_Chaos local_30;
  
  local_40.Owner.WeakPtr.ObjectIndex = 0;
  local_40.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_40,(FObjectPtr)&local_48);
  local_40.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = 0;
  this = &local_40;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).AngularDrive.SwingDrive.bEnableVelocityDrive = '\0';
    (pFVar4->ProfileInstance).AngularDrive.TwistDrive.bEnableVelocityDrive = '\0';
    puVar1 = &(pFVar4->ProfileInstance).AngularDrive.SwingDrive.field_0xc;
    *puVar1 = *puVar1 | bVar6 * '\x02';
    puVar1 = &(pFVar4->ProfileInstance).AngularDrive.TwistDrive.field_0xc;
    *puVar1 = *puVar1 | bVar5 * '\x02';
    bVar5 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_)
    ;
    if (!bVar5) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_30,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 &(pFVar4->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_30);
    }
  }
  return;
}

// execSetAngularVelocityTarget @ 1482c5810

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetAngularVelocityTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FConstraintInstance *pFVar6;
  FConstraintInstanceAccessor *this;
  double *pdVar7;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_68;
  TVector<double>_u_0 local_58;
  double local_40 [7];
  
  local_68.Owner.WeakPtr.ObjectIndex = 0;
  local_68.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_68,(FObjectPtr)&local_res10);
  local_68.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_68;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  pdVar7 = local_40;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = FConstraintInstanceAccessor::Get(this);
  if (pFVar6 != (FConstraintInstance *)0x0) {
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar5) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    dVar4 = __real_4000000000000000;
    if (((*pdVar7 != (pFVar6->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.X)
        || (pdVar7[1] !=
            (pFVar6->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Y)) ||
       (pdVar7[2] != (pFVar6->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Z)
       ) {
      dVar3 = pdVar7[1];
      (pFVar6->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.X = *pdVar7;
      (pFVar6->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Y = dVar3;
      (pFVar6->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Z = pdVar7[2];
      local_58._s_0.Z = pdVar7[2] * dVar4 * __real_400921fb60000000;
      local_58._s_0.Y = pdVar7[1] * dVar4 * __real_400921fb60000000;
      local_58._s_0.X = *pdVar7 * dVar4 * __real_400921fb60000000;
      FChaosEngineInterface::SetDriveAngularVelocity
                ((FPhysicsConstraintReference_Chaos *)&pFVar6->_padding_,
                 (TVector<double> *)&local_58._s_0);
    }
  }
  return;
}

// execSetContactTransferScale @ 1482c5ac0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetContactTransferScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  float local_res10 [2];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_48;
  FScopedSceneLock_Chaos local_38 [2];
  
  local_48.Owner.WeakPtr.ObjectIndex = 0;
  local_48.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_48,(FObjectPtr)&local_res20);
  local_48.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0.0;
  this = &local_48;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).ContactTransferScale = fVar2;
    bVar3 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_)
    ;
    if (!bVar3) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (local_38,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      FChaosEngineInterface::SetContactTransferScale_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 (pFVar4->ProfileInstance).ContactTransferScale);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(local_38);
    }
  }
  return;
}

// execSetDisableCollision @ 1482c5c20

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetDisableCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  longlong *plVar5;
  FConstraintInstanceAccessor *this;
  bool bVar6;
  bool local_res10 [16];
  int local_res20 [2];
  FConstraintInstanceAccessor local_48;
  FScopedSceneLock_Chaos local_38;
  
  local_48.Owner.WeakPtr.ObjectIndex = 0;
  local_48.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10[0] = false;
  local_res10[1] = false;
  local_res10[2] = false;
  local_res10[3] = false;
  local_res10[4] = false;
  local_res10[5] = false;
  local_res10[6] = false;
  local_res10[7] = false;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_48,(FObjectPtr)local_res10);
  local_48.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  this = &local_48;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).bDisableCollision = '\0';
    puVar1 = &(pFVar4->ProfileInstance).field_0x80;
    *puVar1 = *puVar1 | bVar6;
    plVar5 = &pFVar4->_padding_;
    local_res10[0] = bVar6;
    bVar6 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar5);
    if (!bVar6) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_38,(FPhysicsConstraintReference_Chaos *)plVar5,Write);
      FChaosEngineInterface::SetCollisionEnabled
                ((FPhysicsConstraintReference_Chaos *)plVar5,local_res10[0] == false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_38);
    }
  }
  return;
}

// execSetLinearBreakable @ 1482c5ed0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearBreakable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  float fVar3;
  bool bVar4;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  bool bVar5;
  int local_res10 [4];
  float local_res20 [2];
  undefined8 local_48;
  FConstraintInstanceAccessor local_40 [3];
  
  local_40[0].Owner.WeakPtr.ObjectIndex = 0;
  local_40[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_40,(FObjectPtr)&local_48);
  local_40[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  local_res10[0] = 0;
  this_00 = local_40;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  fVar3 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar4) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    (this->ProfileInstance).bLinearBreakable = '\0';
    puVar1 = &(this->ProfileInstance).field_0x81;
    *puVar1 = *puVar1 | bVar5;
    (this->ProfileInstance).LinearBreakThreshold = fVar3;
    FConstraintInstance::UpdateBreakable(this);
  }
  return;
}

// execSetLinearDriveParams @ 1482c6060

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearDriveParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FConstraintInstance *pFVar6;
  FConstraintInstanceAccessor *this;
  float local_res10 [2];
  float local_res20 [2];
  float local_78 [2];
  undefined8 local_70;
  FConstraintInstanceAccessor local_68;
  FScopedSceneLock_Chaos local_58 [3];
  
  local_68.Owner.WeakPtr.ObjectIndex = 0;
  local_68.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_70 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_68,(FObjectPtr)&local_70);
  local_68.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78[0] = 0.0;
  this = &local_68;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar4 = local_78[0];
  fVar3 = local_res20[0];
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = FConstraintInstanceAccessor::Get(this);
  if (pFVar6 != (FConstraintInstance *)0x0) {
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar5) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar6->ProfileInstance).LinearDrive.XDrive.Stiffness = fVar4;
    (pFVar6->ProfileInstance).LinearDrive.XDrive.Damping = fVar3;
    (pFVar6->ProfileInstance).LinearDrive.XDrive.MaxForce = fVar2;
    (pFVar6->ProfileInstance).LinearDrive.YDrive.Stiffness = fVar4;
    (pFVar6->ProfileInstance).LinearDrive.YDrive.Damping = fVar3;
    (pFVar6->ProfileInstance).LinearDrive.YDrive.MaxForce = fVar2;
    (pFVar6->ProfileInstance).LinearDrive.ZDrive.Stiffness = fVar4;
    (pFVar6->ProfileInstance).LinearDrive.ZDrive.Damping = fVar3;
    (pFVar6->ProfileInstance).LinearDrive.ZDrive.MaxForce = fVar2;
    bVar5 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar6->_padding_)
    ;
    if (!bVar5) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (local_58,(FPhysicsConstraintReference_Chaos *)&pFVar6->_padding_,Write);
      FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar6->_padding_,
                 &(pFVar6->ProfileInstance).LinearDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(local_58);
    }
  }
  return;
}

// execSetLinearLimits @ 1482c62c0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearLimits
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TEnumAsByte<ELinearConstraintMotion> TVar2;
  TEnumAsByte<ELinearConstraintMotion> TVar3;
  TEnumAsByte<ELinearConstraintMotion> TVar4;
  float fVar5;
  bool bVar6;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  TEnumAsByte<ELinearConstraintMotion> local_res10 [16];
  TEnumAsByte<ELinearConstraintMotion> local_res20 [8];
  TEnumAsByte<ELinearConstraintMotion> local_58 [4];
  float local_54;
  undefined8 local_50;
  FConstraintInstanceAccessor local_48 [2];
  
  local_48[0].Owner.WeakPtr.ObjectIndex = 0;
  local_48[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_50 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_48,(FObjectPtr)&local_50);
  local_48[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_58[0].Value = '\0';
  this_00 = local_48;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res20[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_54 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  fVar5 = local_54;
  TVar4.Value = local_58[0].Value;
  TVar3.Value = local_res20[0].Value;
  TVar2.Value = local_res10[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar6) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    (this->ProfileInstance).LinearLimit.Limit = fVar5;
    (this->ProfileInstance).LinearLimit.XMotion.Value = TVar4.Value;
    (this->ProfileInstance).LinearLimit.YMotion.Value = TVar3.Value;
    (this->ProfileInstance).LinearLimit.ZMotion.Value = TVar2.Value;
    FConstraintInstance::UpdateLinearLimit(this);
  }
  return;
}

// execSetLinearPlasticity @ 1482c64c0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearPlasticity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  TEnumAsByte<EConstraintPlasticityType> TVar3;
  float fVar4;
  bool bVar5;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  bool bVar6;
  TEnumAsByte<EConstraintPlasticityType> local_res10 [16];
  int local_res20 [2];
  float local_48 [2];
  undefined8 local_40;
  FConstraintInstanceAccessor local_38 [2];
  
  local_38[0].Owner.WeakPtr.ObjectIndex = 0;
  local_38[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_40 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_38,(FObjectPtr)&local_40);
  local_38[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20[0] = 0;
  this_00 = local_38;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_48[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar4 = local_48[0];
  TVar3.Value = local_res10[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar5) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    (this->ProfileInstance).bLinearPlasticity = '\0';
    puVar1 = &(this->ProfileInstance).field_0x81;
    *puVar1 = *puVar1 | bVar6 * '\x02';
    (this->ProfileInstance).LinearPlasticityThreshold = fVar4;
    (this->ProfileInstance).LinearPlasticityType.Value = TVar3.Value;
    FConstraintInstance::UpdatePlasticity(this);
  }
  return;
}

// execSetLinearPositionDrive @ 1482c6690

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearPositionDrive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [4];
  int local_res20 [2];
  int local_68 [2];
  undefined8 local_60;
  FConstraintInstanceAccessor local_58;
  FScopedSceneLock_Chaos local_48;
  
  local_58.Owner.WeakPtr.ObjectIndex = 0;
  local_58.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_60 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_58,(FObjectPtr)&local_60);
  local_58.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  this = &local_58;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_68[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  bVar7 = local_68[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).LinearDrive.XDrive.bEnablePositionDrive = '\0';
    (pFVar4->ProfileInstance).LinearDrive.YDrive.bEnablePositionDrive = '\0';
    (pFVar4->ProfileInstance).LinearDrive.ZDrive.bEnablePositionDrive = '\0';
    puVar1 = &(pFVar4->ProfileInstance).LinearDrive.XDrive.field_0xc;
    *puVar1 = *puVar1 | bVar5;
    puVar1 = &(pFVar4->ProfileInstance).LinearDrive.YDrive.field_0xc;
    *puVar1 = *puVar1 | bVar6;
    puVar1 = &(pFVar4->ProfileInstance).LinearDrive.ZDrive.field_0xc;
    *puVar1 = *puVar1 | bVar7;
    bVar5 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_)
    ;
    if (!bVar5) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_48,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 &(pFVar4->ProfileInstance).LinearDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_48);
    }
  }
  return;
}

// execSetLinearPositionTarget @ 1482c68b0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearPositionTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  double dVar3;
  bool bVar4;
  FConstraintInstance *pFVar5;
  FConstraintInstanceAccessor *this;
  TVector<double> *pTVar6;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_38;
  TVector<double> local_28;
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_res10);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar6 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar6 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FConstraintInstanceAccessor::Get(this);
  if (pFVar5 != (FConstraintInstance *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar4) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    if ((((pTVar6->field0_0x0)._s_0.X !=
          (pFVar5->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.X) ||
        ((pTVar6->field0_0x0)._s_0.Y !=
         (pFVar5->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Y)) ||
       ((pTVar6->field0_0x0)._s_0.Z !=
        (pFVar5->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Z)) {
      dVar3 = (pTVar6->field0_0x0)._s_0.Y;
      (pFVar5->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.X =
           (pTVar6->field0_0x0)._s_0.X;
      (pFVar5->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Y = dVar3;
      (pFVar5->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Z =
           (pTVar6->field0_0x0)._s_0.Z;
      FChaosEngineInterface::SetDrivePosition
                ((FPhysicsConstraintReference_Chaos *)&pFVar5->_padding_,pTVar6);
    }
  }
  return;
}

// execSetLinearSoftLimitParams @ 1482c6a20

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearSoftLimitParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  bool bVar8;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  FConstraintInstanceAccessor local_70 [7];
  
  local_70[0].Owner.WeakPtr.ObjectIndex = 0;
  local_70[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_78 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_70,(FObjectPtr)&local_78);
  local_70[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_res10[0] = 0;
  this_00 = local_70;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar8 = local_res10[0] != 0;
  local_80[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  local_84 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_84,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_84);
  }
  local_88 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  uVar6 = local_80[0];
  uVar5 = local_84;
  uVar4 = local_88;
  uVar3 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar7) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    puVar1 = &(this->ProfileInstance).LinearLimit.field_0x10;
    *puVar1 = *puVar1 & 0xfe;
    puVar1 = &(this->ProfileInstance).LinearLimit.field_0x10;
    *puVar1 = *puVar1 | bVar8;
    *(undefined4 *)&(this->ProfileInstance).LinearLimit = uVar6;
    *(undefined4 *)&(this->ProfileInstance).LinearLimit.field_0x4 = uVar5;
    *(undefined4 *)&(this->ProfileInstance).LinearLimit.field_0x8 = uVar4;
    *(undefined4 *)&(this->ProfileInstance).LinearLimit.field_0xc = uVar3;
    FConstraintInstance::UpdateLinearLimit(this);
  }
  return;
}

// execSetLinearVelocityDrive @ 1482c6ca0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearVelocityDrive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int local_res10 [4];
  int local_res20 [2];
  int local_68 [2];
  undefined8 local_60;
  FConstraintInstanceAccessor local_58;
  FScopedSceneLock_Chaos local_48;
  
  local_58.Owner.WeakPtr.ObjectIndex = 0;
  local_58.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_60 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_58,(FObjectPtr)&local_60);
  local_58.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  this = &local_58;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_68[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  bVar7 = local_68[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).LinearDrive.XDrive.bEnableVelocityDrive = '\0';
    (pFVar4->ProfileInstance).LinearDrive.YDrive.bEnableVelocityDrive = '\0';
    (pFVar4->ProfileInstance).LinearDrive.ZDrive.bEnableVelocityDrive = '\0';
    puVar1 = &(pFVar4->ProfileInstance).LinearDrive.XDrive.field_0xc;
    *puVar1 = *puVar1 | bVar5 * '\x02';
    puVar1 = &(pFVar4->ProfileInstance).LinearDrive.YDrive.field_0xc;
    *puVar1 = *puVar1 | bVar6 * '\x02';
    puVar1 = &(pFVar4->ProfileInstance).LinearDrive.ZDrive.field_0xc;
    *puVar1 = *puVar1 | bVar7 * '\x02';
    bVar5 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_)
    ;
    if (!bVar5) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_48,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 &(pFVar4->ProfileInstance).LinearDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_48);
    }
  }
  return;
}

// execSetLinearVelocityTarget @ 1482c6ed0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetLinearVelocityTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FConstraintInstanceAccessor *pFVar1;
  FProperty *pFVar2;
  double dVar3;
  bool bVar4;
  FConstraintInstance *pFVar5;
  FConstraintInstanceAccessor *this;
  TVector<double> *pTVar6;
  undefined8 local_res10;
  FConstraintInstanceAccessor local_38;
  TVector<double> local_28;
  
  local_38.Owner.WeakPtr.ObjectIndex = 0;
  local_38.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_38,(FObjectPtr)&local_res10);
  local_38.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar1 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_38;
  if (pFVar1 != (FConstraintInstanceAccessor *)0x0) {
    this = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar6 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar6 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FConstraintInstanceAccessor::Get(this);
  if (pFVar5 != (FConstraintInstance *)0x0) {
    bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar4) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    if ((((pTVar6->field0_0x0)._s_0.X !=
          (pFVar5->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.X) ||
        ((pTVar6->field0_0x0)._s_0.Y !=
         (pFVar5->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Y)) ||
       ((pTVar6->field0_0x0)._s_0.Z !=
        (pFVar5->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Z)) {
      dVar3 = (pTVar6->field0_0x0)._s_0.Y;
      (pFVar5->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.X =
           (pTVar6->field0_0x0)._s_0.X;
      (pFVar5->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Y = dVar3;
      (pFVar5->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Z =
           (pTVar6->field0_0x0)._s_0.Z;
      FChaosEngineInterface::SetDriveLinearVelocity
                ((FPhysicsConstraintReference_Chaos *)&pFVar5->_padding_,pTVar6);
    }
  }
  return;
}

// execSetMassConditioningEnabled @ 1482c7040

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetMassConditioningEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  bool bVar5;
  int local_res10 [4];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_58;
  FScopedSceneLock_Chaos local_48;
  
  local_58.Owner.WeakPtr.ObjectIndex = 0;
  local_58.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_58,(FObjectPtr)&local_res20);
  local_58.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  this = &local_58;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    bVar1 = (pFVar4->ProfileInstance).field_0x80;
    if (bVar5) {
      (pFVar4->ProfileInstance).field_0x80 = bVar1 & 0xef;
      bVar5 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_);
      if (!bVar5) {
        return;
      }
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_48,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      bVar5 = false;
    }
    else {
      (pFVar4->ProfileInstance).field_0x80 = bVar1 | 0x10;
      bVar5 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_);
      if (!bVar5) {
        return;
      }
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_48,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      bVar5 = true;
    }
    FChaosEngineInterface::SetMassConditioningEnabled_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,bVar5);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_48);
  }
  return;
}

// execSetOrientationDriveSLERP @ 1482c71d0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetOrientationDriveSLERP
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  bool bVar5;
  int local_res10 [4];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_48;
  FScopedSceneLock_Chaos local_38;
  
  local_48.Owner.WeakPtr.ObjectIndex = 0;
  local_48.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_48,(FObjectPtr)&local_res20);
  local_48.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  this = &local_48;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).AngularDrive.SlerpDrive.bEnablePositionDrive = '\0';
    puVar1 = &(pFVar4->ProfileInstance).AngularDrive.SlerpDrive.field_0xc;
    *puVar1 = *puVar1 | bVar5;
    bVar5 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_)
    ;
    if (!bVar5) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_38,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 &(pFVar4->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_38);
    }
  }
  return;
}

// execSetOrientationDriveTwistAndSwing @ 1482c7330

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetOrientationDriveTwistAndSwing
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res20 [2];
  undefined8 local_48;
  FConstraintInstanceAccessor local_40;
  FScopedSceneLock_Chaos local_30;
  
  local_40.Owner.WeakPtr.ObjectIndex = 0;
  local_40.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_40,(FObjectPtr)&local_48);
  local_40.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = 0;
  this = &local_40;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar6 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    (pFVar4->ProfileInstance).AngularDrive.SwingDrive.bEnablePositionDrive = '\0';
    (pFVar4->ProfileInstance).AngularDrive.TwistDrive.bEnablePositionDrive = '\0';
    puVar1 = &(pFVar4->ProfileInstance).AngularDrive.SwingDrive.field_0xc;
    *puVar1 = *puVar1 | bVar6;
    puVar1 = &(pFVar4->ProfileInstance).AngularDrive.TwistDrive.field_0xc;
    *puVar1 = *puVar1 | bVar5;
    bVar5 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_)
    ;
    if (!bVar5) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_30,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,
                 &(pFVar4->ProfileInstance).AngularDrive,false);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_30);
    }
  }
  return;
}

// execSetParentDominates @ 1482c75e0

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetParentDominates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  byte bVar1;
  FProperty *pFVar2;
  bool bVar3;
  FConstraintInstance *pFVar4;
  FConstraintInstanceAccessor *this;
  bool bVar5;
  int local_res10 [4];
  undefined8 local_res20;
  FConstraintInstanceAccessor local_58;
  FScopedSceneLock_Chaos local_48;
  
  local_58.Owner.WeakPtr.ObjectIndex = 0;
  local_58.Owner.WeakPtr.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_58,(FObjectPtr)&local_res20);
  local_58.Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  this = &local_58;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FConstraintInstanceAccessor::Get(this);
  if (pFVar4 != (FConstraintInstance *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar3) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    }
    bVar1 = (pFVar4->ProfileInstance).field_0x80;
    if (bVar5) {
      (pFVar4->ProfileInstance).field_0x80 = bVar1 & 0xfd;
      bVar5 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_);
      if (!bVar5) {
        return;
      }
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_48,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      bVar5 = false;
    }
    else {
      (pFVar4->ProfileInstance).field_0x80 = bVar1 | 2;
      bVar5 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_);
      if (!bVar5) {
        return;
      }
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                (&local_48,(FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,Write);
      bVar5 = true;
    }
    FChaosEngineInterface::SetParentDominates_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&pFVar4->_padding_,bVar5);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_48);
  }
  return;
}

// execSetProjectionParams @ 1482c7980

void __cdecl
UConstraintInstanceBlueprintLibrary::execSetProjectionParams
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  FProperty *pFVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  FConstraintInstance *this;
  FConstraintInstanceAccessor *this_00;
  bool bVar7;
  int local_res10 [4];
  float local_res20 [2];
  float local_78 [2];
  undefined8 local_70;
  FConstraintInstanceAccessor local_68 [6];
  
  local_68[0].Owner.WeakPtr.ObjectIndex = 0;
  local_68[0].Owner.WeakPtr.ObjectSerialNumber = 0;
  local_70 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_68,(FObjectPtr)&local_70);
  local_68[0].Index = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res10[0] = 0;
  this_00 = local_68;
  if ((FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress !=
      (FConstraintInstanceAccessor *)0x0) {
    this_00 = (FConstraintInstanceAccessor *)param_2->MostRecentPropertyAddress;
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
  bVar7 = local_res10[0] != 0;
  local_78[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
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
  fVar5 = local_78[0];
  fVar4 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FConstraintInstanceAccessor::Get(this_00);
  if (this != (FConstraintInstance *)0x0) {
    fVar1 = (this->ProfileInstance).ProjectionLinearTolerance;
    fVar2 = (this->ProfileInstance).ProjectionAngularTolerance;
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar6) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    }
    FConstraintInstance::SetProjectionParams(this,bVar7,fVar5,fVar4,fVar1,fVar2);
  }
  return;
}

