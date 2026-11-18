// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d573e90

UClass * __cdecl UVector3fCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector3fCameraVariable",
               &Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector3fCameraVariable,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVector3fCameraVariable>,
               InternalVTableHelperCtorCaller<UVector3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton;
}

// UVector3fCameraVariable @ 14d5907d0

UVector3fCameraVariable * __thiscall
UVector3fCameraVariable::UVector3fCameraVariable
          (UVector3fCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UVector3fCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// UVector3fCameraVariable @ 14d590810

UVector3fCameraVariable * __thiscall
UVector3fCameraVariable::UVector3fCameraVariable
          (UVector3fCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UVector3fCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UVector3fCameraVariable @ 14d5920a0

void __thiscall UVector3fCameraVariable::~UVector3fCameraVariable(UVector3fCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7b00

uchar * __thiscall UVector3fCameraVariable::GetDefaultValuePtr(UVector3fCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aacc0

UClass * __cdecl UVector3fCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector3fCameraVariable",
               &Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector3fCameraVariable,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVector3fCameraVariable>,
               InternalVTableHelperCtorCaller<UVector3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac920

ECameraVariableType __thiscall
UVector3fCameraVariable::GetVariableType(UVector3fCameraVariable *this)

{
  return Vector3f;
}

// StaticRegisterNativesUVector3fCameraVariable @ 14d5d0f80

void __cdecl UVector3fCameraVariable::StaticRegisterNativesUVector3fCameraVariable(void)

{
  return;
}

