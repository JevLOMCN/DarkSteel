// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d573c70

UClass * __cdecl UVector2dCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector2dCameraVariable",
               &Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector2dCameraVariable,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVector2dCameraVariable>,
               InternalVTableHelperCtorCaller<UVector2dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton;
}

// UVector2dCameraVariable @ 14d590650

UVector2dCameraVariable * __thiscall
UVector2dCameraVariable::UVector2dCameraVariable
          (UVector2dCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UVector2dCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// UVector2dCameraVariable @ 14d590690

UVector2dCameraVariable * __thiscall
UVector2dCameraVariable::UVector2dCameraVariable
          (UVector2dCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UVector2dCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UVector2dCameraVariable @ 14d592040

void __thiscall UVector2dCameraVariable::~UVector2dCameraVariable(UVector2dCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7ad0

uchar * __thiscall UVector2dCameraVariable::GetDefaultValuePtr(UVector2dCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aaa80

UClass * __cdecl UVector2dCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector2dCameraVariable",
               &Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector2dCameraVariable,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVector2dCameraVariable>,
               InternalVTableHelperCtorCaller<UVector2dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac8f0

ECameraVariableType __thiscall
UVector2dCameraVariable::GetVariableType(UVector2dCameraVariable *this)

{
  return Vector2d;
}

// StaticRegisterNativesUVector2dCameraVariable @ 14d5d0f50

void __cdecl UVector2dCameraVariable::StaticRegisterNativesUVector2dCameraVariable(void)

{
  return;
}

