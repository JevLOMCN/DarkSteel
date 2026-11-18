// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// StaticClass @ 14def0bc0

UClass * __cdecl UIKRigEffectorGoal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigEffectorGoal",
               &Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton,
               StaticRegisterNativesUIKRigEffectorGoal,0x100,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRigEffectorGoal>,
               InternalVTableHelperCtorCaller<UIKRigEffectorGoal>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton;
}

// UIKRigEffectorGoal @ 14df19f70

UIKRigEffectorGoal * __thiscall
UIKRigEffectorGoal::UIKRigEffectorGoal(UIKRigEffectorGoal *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->PositionAlpha = 1.0;
  this->_padding_ = (longlong)&___7UIKRigEffectorGoal__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->RotationAlpha = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CurrentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CurrentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CurrentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CurrentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UIKRigEffectorGoal @ 14df1a060

UIKRigEffectorGoal * __thiscall
UIKRigEffectorGoal::UIKRigEffectorGoal(UIKRigEffectorGoal *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->PositionAlpha = 1.0;
  this->_padding_ = (longlong)&___7UIKRigEffectorGoal__6B_;
  (this->GoalName).ComparisonIndex = 0;
  (this->GoalName).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->RotationAlpha = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CurrentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CurrentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CurrentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CurrentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UIKRigEffectorGoal @ 14df1c6b0

void __thiscall UIKRigEffectorGoal::~UIKRigEffectorGoal(UIKRigEffectorGoal *this)

{
  this->_padding_ = (longlong)&___7UIKRigEffectorGoal__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d130

UClass * __cdecl UIKRigEffectorGoal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigEffectorGoal",
               &Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton,
               StaticRegisterNativesUIKRigEffectorGoal,0x100,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIKRigEffectorGoal>,
               InternalVTableHelperCtorCaller<UIKRigEffectorGoal>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigEffectorGoal.InnerSingleton;
}

// StaticRegisterNativesUIKRigEffectorGoal @ 14df5a110

void __cdecl UIKRigEffectorGoal::StaticRegisterNativesUIKRigEffectorGoal(void)

{
  return;
}

// __VTableCtorCaller @ 14df62a50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UIKRigEffectorGoal::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined4 *)&pUVar4[1].field_0x10 = 0x3f800000;
    *(undefined ***)pUVar4 = &___7UIKRigEffectorGoal__6B_;
    *(undefined8 *)(pUVar4 + 1) = 0;
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined4 *)&pUVar4[1].field_0x14 = 0x3f800000;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[1].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 2) = (double)fVar2;
    *(double *)&pUVar4[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(pUVar4 + 4) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[4].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[4].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[4].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pUVar4 + 5) = (double)fVar1;
    *(double *)&pUVar4[5].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[5].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[5].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 6) = (double)fVar2;
    *(double *)&pUVar4[6].field_0x8 = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

