// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d575240

UClass * __cdecl URotator3fCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Rotator3fCameraVariable",
               &Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton,
               StaticRegisterNativesURotator3fCameraVariable,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URotator3fCameraVariable>,
               InternalVTableHelperCtorCaller<URotator3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton;
}

// URotator3fCameraVariable @ 14d590270

URotator3fCameraVariable * __thiscall
URotator3fCameraVariable::URotator3fCameraVariable
          (URotator3fCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7URotator3fCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// URotator3fCameraVariable @ 14d5902b0

URotator3fCameraVariable * __thiscall
URotator3fCameraVariable::URotator3fCameraVariable
          (URotator3fCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7URotator3fCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~URotator3fCameraVariable @ 14d591f60

void __thiscall URotator3fCameraVariable::~URotator3fCameraVariable(URotator3fCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7aa0

uchar * __thiscall URotator3fCameraVariable::GetDefaultValuePtr(URotator3fCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aa600

UClass * __cdecl URotator3fCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Rotator3fCameraVariable",
               &Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton,
               StaticRegisterNativesURotator3fCameraVariable,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URotator3fCameraVariable>,
               InternalVTableHelperCtorCaller<URotator3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac8c0

ECameraVariableType __thiscall
URotator3fCameraVariable::GetVariableType(URotator3fCameraVariable *this)

{
  return Rotator3f;
}

// StaticRegisterNativesURotator3fCameraVariable @ 14d5d0ef0

void __cdecl URotator3fCameraVariable::StaticRegisterNativesURotator3fCameraVariable(void)

{
  return;
}

