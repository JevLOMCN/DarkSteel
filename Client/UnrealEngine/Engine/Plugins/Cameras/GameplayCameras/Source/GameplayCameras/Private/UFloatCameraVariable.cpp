// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d572af0

UClass * __cdecl UFloatCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FloatCameraVariable",
               &Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton,
               StaticRegisterNativesUFloatCameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFloatCameraVariable>,
               InternalVTableHelperCtorCaller<UFloatCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton;
}

// UFloatCameraVariable @ 14d58ff30

UFloatCameraVariable * __thiscall
UFloatCameraVariable::UFloatCameraVariable(UFloatCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UFloatCameraVariable__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->DefaultValue = 0.0;
  return this;
}

// UFloatCameraVariable @ 14d58ff70

UFloatCameraVariable * __thiscall
UFloatCameraVariable::UFloatCameraVariable(UFloatCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UFloatCameraVariable__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->DefaultValue = 0.0;
  return this;
}

// ~UFloatCameraVariable @ 14d591e80

void __thiscall UFloatCameraVariable::~UFloatCameraVariable(UFloatCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7a70

uchar * __thiscall UFloatCameraVariable::GetDefaultValuePtr(UFloatCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aa0d0

UClass * __cdecl UFloatCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FloatCameraVariable",
               &Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton,
               StaticRegisterNativesUFloatCameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFloatCameraVariable>,
               InternalVTableHelperCtorCaller<UFloatCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac890

ECameraVariableType __thiscall UFloatCameraVariable::GetVariableType(UFloatCameraVariable *this)

{
  return Float;
}

// StaticRegisterNativesUFloatCameraVariable @ 14d5d0e80

void __cdecl UFloatCameraVariable::StaticRegisterNativesUFloatCameraVariable(void)

{
  return;
}

