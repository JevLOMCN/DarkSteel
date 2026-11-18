// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d573a50

UClass * __cdecl UVector2fCameraVariable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector2fCameraVariable",
               &Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector2fCameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVector2fCameraVariable>,
               InternalVTableHelperCtorCaller<UVector2fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton;
}

// UVector2fCameraVariable @ 14d5906d0

UVector2fCameraVariable * __thiscall
UVector2fCameraVariable::UVector2fCameraVariable
          (UVector2fCameraVariable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UVector2fCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// UVector2fCameraVariable @ 14d590710

UVector2fCameraVariable * __thiscall
UVector2fCameraVariable::UVector2fCameraVariable
          (UVector2fCameraVariable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UVector2fCameraVariable__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UVector2fCameraVariable @ 14d592060

void __thiscall UVector2fCameraVariable::~UVector2fCameraVariable(UVector2fCameraVariable *this)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDefaultValuePtr @ 14d5a7ae0

uchar * __thiscall UVector2fCameraVariable::GetDefaultValuePtr(UVector2fCameraVariable *this)

{
  return (uchar *)&this->DefaultValue;
}

// GetPrivateStaticClass @ 14d5aab40

UClass * __cdecl UVector2fCameraVariable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector2fCameraVariable",
               &Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton,
               StaticRegisterNativesUVector2fCameraVariable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVector2fCameraVariable>,
               InternalVTableHelperCtorCaller<UVector2fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton;
}

// GetVariableType @ 14d5ac900

ECameraVariableType __thiscall
UVector2fCameraVariable::GetVariableType(UVector2fCameraVariable *this)

{
  return Vector2f;
}

// StaticRegisterNativesUVector2fCameraVariable @ 14d5d0f60

void __cdecl UVector2fCameraVariable::StaticRegisterNativesUVector2fCameraVariable(void)

{
  return;
}

