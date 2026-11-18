// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d574e70

UClass * __cdecl UVector4dCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector4dCameraVariable",
               &Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector4dCameraVariable,0x60,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UVector4dCameraVariable>,
               InternalVTableHelperCtorCaller<UVector4dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton;
}

// UVector4dCameraVariable @ 14d590850

UVector4dCameraVariable * __thiscall
UVector4dCameraVariable::UVector4dCameraVariable
          (UVector4dCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UVector4dCameraVariable__6B_;
  (this->DefaultValue).field0_0x0._s_0.W = 1.0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->DefaultValue).field0_0x0._s_0.X = 0.0;
  (this->DefaultValue).field0_0x0._s_0.Y = 0.0;
  (this->DefaultValue).field0_0x0._s_0.Z = 0.0;
  return this;
}

// UVector4dCameraVariable @ 14d5908b0

UVector4dCameraVariable * __thiscall
UVector4dCameraVariable::UVector4dCameraVariable
          (UVector4dCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UVector4dCameraVariable__6B_;
  (this->DefaultValue).field0_0x0._s_0.W = 1.0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->DefaultValue).field0_0x0._s_0.X = 0.0;
  (this->DefaultValue).field0_0x0._s_0.Y = 0.0;
  (this->DefaultValue).field0_0x0._s_0.Z = 0.0;
  return this;
}

// ~UVector4dCameraVariable @ 14d5920c0

void __thiscall UVector4dCameraVariable::~UVector4dCameraVariable(UVector4dCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7b10

uchar * __thiscall UVector4dCameraVariable::GetDefaultValuePtr(UVector4dCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aad80

UClass * __cdecl UVector4dCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector4dCameraVariable",
               &Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector4dCameraVariable,0x60,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UVector4dCameraVariable>,
               InternalVTableHelperCtorCaller<UVector4dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac930

ECameraVariableType __thiscall
UVector4dCameraVariable::GetVariableType(UVector4dCameraVariable *this)

{
  return Vector4d;
}

// StaticRegisterNativesUVector4dCameraVariable @ 14d5d0f90

void __cdecl UVector4dCameraVariable::StaticRegisterNativesUVector4dCameraVariable(void)

{
  return;
}

