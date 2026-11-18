// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14867cb10

UClass * __cdecl UButtonStyleAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ButtonStyleAsset",
               &Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton,
               StaticRegisterNativesUButtonStyleAsset,0x3c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UButtonStyleAsset>,
               InternalVTableHelperCtorCaller<UButtonStyleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton;
}

// UButtonStyleAsset @ 1486964d0

UButtonStyleAsset * __thiscall
UButtonStyleAsset::UButtonStyleAsset(UButtonStyleAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UButtonStyleAsset__6B_;
  FButtonStyle::FButtonStyle(&this->ButtonStyle);
  return this;
}

// UButtonStyleAsset @ 148696500

UButtonStyleAsset * __thiscall
UButtonStyleAsset::UButtonStyleAsset(UButtonStyleAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UButtonStyleAsset__6B_;
  FButtonStyle::FButtonStyle(&this->ButtonStyle);
  return this;
}

// ~UButtonStyleAsset @ 14869b2a0

void __thiscall UButtonStyleAsset::~UButtonStyleAsset(UButtonStyleAsset *this)

{
  this->_padding_ = (longlong)&___7UButtonStyleAsset__6B_;
  FButtonStyle::~FButtonStyle(&this->ButtonStyle);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c3ba0

UClass * __cdecl UButtonStyleAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ButtonStyleAsset",
               &Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton,
               StaticRegisterNativesUButtonStyleAsset,0x3c0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UButtonStyleAsset>,
               InternalVTableHelperCtorCaller<UButtonStyleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonStyleAsset.InnerSingleton;
}

// StaticRegisterNativesUButtonStyleAsset @ 1486f1730

void __cdecl UButtonStyleAsset::StaticRegisterNativesUButtonStyleAsset(void)

{
  return;
}

