// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 7

// StaticClass @ 14a780b60

UClass * __cdecl UCommonTextScrollStyle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTextScrollStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTextScrollStyle",
               &Z_Registration_Info_UClass_UCommonTextScrollStyle.InnerSingleton,
               StaticRegisterNativesUCommonTextScrollStyle,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonTextScrollStyle>,
               InternalVTableHelperCtorCaller<UCommonTextScrollStyle>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTextScrollStyle.InnerSingleton;
}

// UCommonTextScrollStyle @ 14a7aed10

UCommonTextScrollStyle * __thiscall
UCommonTextScrollStyle::UCommonTextScrollStyle(UCommonTextScrollStyle *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Clipping = OnDemand;
  this->_padding_ = (longlong)&___7UCommonTextScrollStyle__6B_;
  return this;
}

// UCommonTextScrollStyle @ 14a7aed40

UCommonTextScrollStyle * __thiscall
UCommonTextScrollStyle::UCommonTextScrollStyle
          (UCommonTextScrollStyle *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Clipping = OnDemand;
  this->_padding_ = (longlong)&___7UCommonTextScrollStyle__6B_;
  return this;
}

// ~UCommonTextScrollStyle @ 14a7b34d0

void __thiscall UCommonTextScrollStyle::~UCommonTextScrollStyle(UCommonTextScrollStyle *this)

{
  this->_padding_ = (longlong)&___7UCommonTextScrollStyle__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e6280

UClass * __cdecl UCommonTextScrollStyle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTextScrollStyle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTextScrollStyle",
               &Z_Registration_Info_UClass_UCommonTextScrollStyle.InnerSingleton,
               StaticRegisterNativesUCommonTextScrollStyle,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonTextScrollStyle>,
               InternalVTableHelperCtorCaller<UCommonTextScrollStyle>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTextScrollStyle.InnerSingleton;
}

// StaticRegisterNativesUCommonTextScrollStyle @ 14a81e880

void __cdecl UCommonTextScrollStyle::StaticRegisterNativesUCommonTextScrollStyle(void)

{
  return;
}

// ToScrollOptions @ 14a8230d0

FTextScrollerOptions * __thiscall
UCommonTextScrollStyle::ToScrollOptions
          (UCommonTextScrollStyle *this,FTextScrollerOptions *__return_storage_ptr__)

{
  __return_storage_ptr__->Speed = this->Speed;
  __return_storage_ptr__->StartDelay = this->StartDelay;
  __return_storage_ptr__->EndDelay = this->EndDelay;
  __return_storage_ptr__->FadeInDelay = this->FadeInDelay;
  __return_storage_ptr__->FadeOutDelay = this->FadeOutDelay;
  return __return_storage_ptr__;
}

