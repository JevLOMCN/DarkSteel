// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5726d0

UClass * __cdecl UInteger32CameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Integer32CameraVariable",
               &Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton,
               StaticRegisterNativesUInteger32CameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInteger32CameraVariable>,
               InternalVTableHelperCtorCaller<UInteger32CameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton;
}

// UInteger32CameraVariable @ 14d58ffb0

UInteger32CameraVariable * __thiscall
UInteger32CameraVariable::UInteger32CameraVariable
          (UInteger32CameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UInteger32CameraVariable__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->DefaultValue = 0;
  return this;
}

// UInteger32CameraVariable @ 14d58fff0

UInteger32CameraVariable * __thiscall
UInteger32CameraVariable::UInteger32CameraVariable
          (UInteger32CameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UInteger32CameraVariable__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->DefaultValue = 0;
  return this;
}

// ~UInteger32CameraVariable @ 14d591ea0

void __thiscall UInteger32CameraVariable::~UInteger32CameraVariable(UInteger32CameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7a80

uchar * __thiscall UInteger32CameraVariable::GetDefaultValuePtr(UInteger32CameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aa190

UClass * __cdecl UInteger32CameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Integer32CameraVariable",
               &Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton,
               StaticRegisterNativesUInteger32CameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInteger32CameraVariable>,
               InternalVTableHelperCtorCaller<UInteger32CameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac8a0

ECameraVariableType __thiscall
UInteger32CameraVariable::GetVariableType(UInteger32CameraVariable *this)

{
  return Integer32;
}

// StaticRegisterNativesUInteger32CameraVariable @ 14d5d0e90

void __cdecl UInteger32CameraVariable::StaticRegisterNativesUInteger32CameraVariable(void)

{
  return;
}

