// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5723e0

UClass * __cdecl UBooleanCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BooleanCameraVariable",
               &Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton,
               StaticRegisterNativesUBooleanCameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBooleanCameraVariable>,
               InternalVTableHelperCtorCaller<UBooleanCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton;
}

// UBooleanCameraVariable @ 14d58ef80

UBooleanCameraVariable * __thiscall
UBooleanCameraVariable::UBooleanCameraVariable(UBooleanCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UBooleanCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->bDefaultValue = false;
  return this;
}

// UBooleanCameraVariable @ 14d58efc0

UBooleanCameraVariable * __thiscall
UBooleanCameraVariable::UBooleanCameraVariable
          (UBooleanCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UBooleanCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->bDefaultValue = false;
  return this;
}

// ~UBooleanCameraVariable @ 14d5919a0

void __thiscall UBooleanCameraVariable::~UBooleanCameraVariable(UBooleanCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7a20

uchar * __thiscall UBooleanCameraVariable::GetDefaultValuePtr(UBooleanCameraVariable *this)

{
  return &this->bDefaultValue;
}

// GetPrivateStaticClass @ 14d5a90d0

UClass * __cdecl UBooleanCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BooleanCameraVariable",
               &Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton,
               StaticRegisterNativesUBooleanCameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBooleanCameraVariable>,
               InternalVTableHelperCtorCaller<UBooleanCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac840

ECameraVariableType __thiscall UBooleanCameraVariable::GetVariableType(UBooleanCameraVariable *this)

{
  return Boolean;
}

// StaticRegisterNativesUBooleanCameraVariable @ 14d5d0cc0

void __cdecl UBooleanCameraVariable::StaticRegisterNativesUBooleanCameraVariable(void)

{
  return;
}

