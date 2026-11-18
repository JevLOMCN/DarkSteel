// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d576720

UClass * __cdecl UTransform3dCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Transform3dCameraVariable",
               &Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton,
               StaticRegisterNativesUTransform3dCameraVariable,0xa0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransform3dCameraVariable>,
               InternalVTableHelperCtorCaller<UTransform3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton;
}

// UTransform3dCameraVariable @ 14d590470

UTransform3dCameraVariable * __thiscall
UTransform3dCameraVariable::UTransform3dCameraVariable
          (UTransform3dCameraVariable *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UTransform3dCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->DefaultValue).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->DefaultValue).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->DefaultValue).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefaultValue).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->DefaultValue).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->DefaultValue).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->DefaultValue).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefaultValue).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->DefaultValue).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->DefaultValue).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->DefaultValue).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefaultValue).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UTransform3dCameraVariable @ 14d590500

UTransform3dCameraVariable * __thiscall
UTransform3dCameraVariable::UTransform3dCameraVariable
          (UTransform3dCameraVariable *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UTransform3dCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->DefaultValue).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->DefaultValue).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->DefaultValue).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefaultValue).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->DefaultValue).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->DefaultValue).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->DefaultValue).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefaultValue).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->DefaultValue).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->DefaultValue).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->DefaultValue).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->DefaultValue).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UTransform3dCameraVariable @ 14d592000

void __thiscall
UTransform3dCameraVariable::~UTransform3dCameraVariable(UTransform3dCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7ab0

uchar * __thiscall UTransform3dCameraVariable::GetDefaultValuePtr(UTransform3dCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aa900

UClass * __cdecl UTransform3dCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Transform3dCameraVariable",
               &Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton,
               StaticRegisterNativesUTransform3dCameraVariable,0xa0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransform3dCameraVariable>,
               InternalVTableHelperCtorCaller<UTransform3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac8d0

ECameraVariableType __thiscall
UTransform3dCameraVariable::GetVariableType(UTransform3dCameraVariable *this)

{
  return Transform3d;
}

// StaticRegisterNativesUTransform3dCameraVariable @ 14d5d0f30

void __cdecl UTransform3dCameraVariable::StaticRegisterNativesUTransform3dCameraVariable(void)

{
  return;
}

