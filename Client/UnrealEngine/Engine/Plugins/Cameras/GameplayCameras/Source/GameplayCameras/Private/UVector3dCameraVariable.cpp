// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5742d0

UClass * __cdecl UVector3dCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector3dCameraVariable",
               &Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector3dCameraVariable,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVector3dCameraVariable>,
               InternalVTableHelperCtorCaller<UVector3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton;
}

// UVector3dCameraVariable @ 14d590750

UVector3dCameraVariable * __thiscall
UVector3dCameraVariable::UVector3dCameraVariable
          (UVector3dCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UVector3dCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// UVector3dCameraVariable @ 14d590790

UVector3dCameraVariable * __thiscall
UVector3dCameraVariable::UVector3dCameraVariable
          (UVector3dCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UVector3dCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UVector3dCameraVariable @ 14d592080

void __thiscall UVector3dCameraVariable::~UVector3dCameraVariable(UVector3dCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7af0

uchar * __thiscall UVector3dCameraVariable::GetDefaultValuePtr(UVector3dCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aac00

UClass * __cdecl UVector3dCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector3dCameraVariable",
               &Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector3dCameraVariable,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVector3dCameraVariable>,
               InternalVTableHelperCtorCaller<UVector3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac910

ECameraVariableType __thiscall
UVector3dCameraVariable::GetVariableType(UVector3dCameraVariable *this)

{
  return Vector3d;
}

// StaticRegisterNativesUVector3dCameraVariable @ 14d5d0f70

void __cdecl UVector3dCameraVariable::StaticRegisterNativesUVector3dCameraVariable(void)

{
  return;
}

