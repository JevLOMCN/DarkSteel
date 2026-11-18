// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5762c0

UClass * __cdecl UTransform3fCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Transform3fCameraVariable",
               &Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton,
               StaticRegisterNativesUTransform3fCameraVariable,0x70,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransform3fCameraVariable>,
               InternalVTableHelperCtorCaller<UTransform3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton;
}

// UTransform3fCameraVariable @ 14d590590

UTransform3fCameraVariable * __thiscall
UTransform3fCameraVariable::UTransform3fCameraVariable
          (UTransform3fCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UTransform3fCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  (this->DefaultValue).Rotation = GlobalVectorConstants::Float0001;
  (this->DefaultValue).Translation = GlobalVectorConstants::FloatZero;
  (this->DefaultValue).Scale3D = GlobalVectorConstants::Float1110;
  return this;
}

// UTransform3fCameraVariable @ 14d5905f0

UTransform3fCameraVariable * __thiscall
UTransform3fCameraVariable::UTransform3fCameraVariable
          (UTransform3fCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UTransform3fCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  (this->DefaultValue).Rotation = GlobalVectorConstants::Float0001;
  (this->DefaultValue).Translation = GlobalVectorConstants::FloatZero;
  (this->DefaultValue).Scale3D = GlobalVectorConstants::Float1110;
  return this;
}

// ~UTransform3fCameraVariable @ 14d592020

void __thiscall
UTransform3fCameraVariable::~UTransform3fCameraVariable(UTransform3fCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7ac0

uchar * __thiscall UTransform3fCameraVariable::GetDefaultValuePtr(UTransform3fCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aa9c0

UClass * __cdecl UTransform3fCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Transform3fCameraVariable",
               &Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton,
               StaticRegisterNativesUTransform3fCameraVariable,0x70,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransform3fCameraVariable>,
               InternalVTableHelperCtorCaller<UTransform3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac8e0

ECameraVariableType __thiscall
UTransform3fCameraVariable::GetVariableType(UTransform3fCameraVariable *this)

{
  return Transform3f;
}

// StaticRegisterNativesUTransform3fCameraVariable @ 14d5d0f40

void __cdecl UTransform3fCameraVariable::StaticRegisterNativesUTransform3fCameraVariable(void)

{
  return;
}

