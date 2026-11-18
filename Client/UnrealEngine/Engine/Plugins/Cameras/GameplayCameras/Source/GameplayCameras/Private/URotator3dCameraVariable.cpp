// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d575cd0

UClass * __cdecl URotator3dCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Rotator3dCameraVariable",
               &Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton,
               StaticRegisterNativesURotator3dCameraVariable,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URotator3dCameraVariable>,
               InternalVTableHelperCtorCaller<URotator3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton;
}

// URotator3dCameraVariable @ 14d5901f0

URotator3dCameraVariable * __thiscall
URotator3dCameraVariable::URotator3dCameraVariable
          (URotator3dCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7URotator3dCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// URotator3dCameraVariable @ 14d590230

URotator3dCameraVariable * __thiscall
URotator3dCameraVariable::URotator3dCameraVariable
          (URotator3dCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7URotator3dCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~URotator3dCameraVariable @ 14d591f40

void __thiscall URotator3dCameraVariable::~URotator3dCameraVariable(URotator3dCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7a90

uchar * __thiscall URotator3dCameraVariable::GetDefaultValuePtr(URotator3dCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aa540

UClass * __cdecl URotator3dCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Rotator3dCameraVariable",
               &Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton,
               StaticRegisterNativesURotator3dCameraVariable,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URotator3dCameraVariable>,
               InternalVTableHelperCtorCaller<URotator3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac8b0

ECameraVariableType __thiscall
URotator3dCameraVariable::GetVariableType(URotator3dCameraVariable *this)

{
  return Rotator3d;
}

// StaticRegisterNativesURotator3dCameraVariable @ 14d5d0ee0

void __cdecl URotator3dCameraVariable::StaticRegisterNativesURotator3dCameraVariable(void)

{
  return;
}

