// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 5

// StaticClass @ 14a76ecc0

UClass * __cdecl UCommonUIHoldData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonUIHoldData",
               &Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton,
               StaticRegisterNativesUCommonUIHoldData,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonUIHoldData>,
               InternalVTableHelperCtorCaller<UCommonUIHoldData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton;
}

// UCommonUIHoldData @ 14a772100

UCommonUIHoldData * __thiscall
UCommonUIHoldData::UCommonUIHoldData(UCommonUIHoldData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCommonUIHoldData__6B_;
  (this->KeyboardAndMouse).HoldTime = 0.0;
  (this->KeyboardAndMouse).HoldRollbackTime = 0.0;
  (this->Gamepad).HoldTime = 0.0;
  (this->Gamepad).HoldRollbackTime = 0.0;
  (this->Touch).HoldTime = 0.0;
  (this->Touch).HoldRollbackTime = 0.0;
  return this;
}

// ~UCommonUIHoldData @ 14a7727c0

void __thiscall UCommonUIHoldData::~UCommonUIHoldData(UCommonUIHoldData *this)

{
  this->_padding_ = (longlong)&___7UCommonUIHoldData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a775fd0

UClass * __cdecl UCommonUIHoldData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonInput",L"CommonUIHoldData",
               &Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton,
               StaticRegisterNativesUCommonUIHoldData,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonUIHoldData>,
               InternalVTableHelperCtorCaller<UCommonUIHoldData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUIHoldData.InnerSingleton;
}

// StaticRegisterNativesUCommonUIHoldData @ 14a7792a0

void __cdecl UCommonUIHoldData::StaticRegisterNativesUCommonUIHoldData(void)

{
  return;
}

