// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d574b70

UClass * __cdecl UVector4fCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector4fCameraVariable",
               &Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector4fCameraVariable,0x50,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UVector4fCameraVariable>,
               InternalVTableHelperCtorCaller<UVector4fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton;
}

// UVector4fCameraVariable @ 14d590910

UVector4fCameraVariable * __thiscall
UVector4fCameraVariable::UVector4fCameraVariable
          (UVector4fCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UVector4fCameraVariable__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)&(this->DefaultValue).field0_0x0 = 0;
  (this->DefaultValue).field0_0x0._s_0.Z = 0.0;
  (this->DefaultValue).field0_0x0._s_0.W = 1.0;
  return this;
}

// UVector4fCameraVariable @ 14d590960

UVector4fCameraVariable * __thiscall
UVector4fCameraVariable::UVector4fCameraVariable
          (UVector4fCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UVector4fCameraVariable__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)&(this->DefaultValue).field0_0x0 = 0;
  (this->DefaultValue).field0_0x0._s_0.Z = 0.0;
  (this->DefaultValue).field0_0x0._s_0.W = 1.0;
  return this;
}

// ~UVector4fCameraVariable @ 14d5920e0

void __thiscall UVector4fCameraVariable::~UVector4fCameraVariable(UVector4fCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7b20

uchar * __thiscall UVector4fCameraVariable::GetDefaultValuePtr(UVector4fCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aae40

UClass * __cdecl UVector4fCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector4fCameraVariable",
               &Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector4fCameraVariable,0x50,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UVector4fCameraVariable>,
               InternalVTableHelperCtorCaller<UVector4fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac940

ECameraVariableType __thiscall
UVector4fCameraVariable::GetVariableType(UVector4fCameraVariable *this)

{
  return Vector4f;
}

// StaticRegisterNativesUVector4fCameraVariable @ 14d5d0fa0

void __cdecl UVector4fCameraVariable::StaticRegisterNativesUVector4fCameraVariable(void)

{
  return;
}

