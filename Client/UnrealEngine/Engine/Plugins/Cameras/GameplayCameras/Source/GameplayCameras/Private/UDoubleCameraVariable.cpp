// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d573780

UClass * __cdecl UDoubleCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DoubleCameraVariable",
               &Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton,
               StaticRegisterNativesUDoubleCameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDoubleCameraVariable>,
               InternalVTableHelperCtorCaller<UDoubleCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton;
}

// UDoubleCameraVariable @ 14d58feb0

UDoubleCameraVariable * __thiscall
UDoubleCameraVariable::UDoubleCameraVariable(UDoubleCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UDoubleCameraVariable__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->DefaultValue = 0.0;
  return this;
}

// UDoubleCameraVariable @ 14d58fef0

UDoubleCameraVariable * __thiscall
UDoubleCameraVariable::UDoubleCameraVariable
          (UDoubleCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UDoubleCameraVariable__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->DefaultValue = 0.0;
  return this;
}

// ~UDoubleCameraVariable @ 14d591e60

void __thiscall UDoubleCameraVariable::~UDoubleCameraVariable(UDoubleCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7a60

uchar * __thiscall UDoubleCameraVariable::GetDefaultValuePtr(UDoubleCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aa010

UClass * __cdecl UDoubleCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DoubleCameraVariable",
               &Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton,
               StaticRegisterNativesUDoubleCameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDoubleCameraVariable>,
               InternalVTableHelperCtorCaller<UDoubleCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac880

ECameraVariableType __thiscall UDoubleCameraVariable::GetVariableType(UDoubleCameraVariable *this)

{
  return Double;
}

// StaticRegisterNativesUDoubleCameraVariable @ 14d5d0e70

void __cdecl UDoubleCameraVariable::StaticRegisterNativesUDoubleCameraVariable(void)

{
  return;
}

