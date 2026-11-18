// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1486747b0

UClass * __cdecl UCheckBoxStyleAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CheckBoxStyleAsset",
               &Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton,
               StaticRegisterNativesUCheckBoxStyleAsset,0x980,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCheckBoxStyleAsset>,
               InternalVTableHelperCtorCaller<UCheckBoxStyleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton;
}

// UCheckBoxStyleAsset @ 148696530

UCheckBoxStyleAsset * __thiscall
UCheckBoxStyleAsset::UCheckBoxStyleAsset(UCheckBoxStyleAsset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCheckBoxStyleAsset__6B_;
  FCheckBoxStyle::FCheckBoxStyle(&this->CheckBoxStyle);
  return this;
}

// UCheckBoxStyleAsset @ 148696560

UCheckBoxStyleAsset * __thiscall
UCheckBoxStyleAsset::UCheckBoxStyleAsset(UCheckBoxStyleAsset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCheckBoxStyleAsset__6B_;
  FCheckBoxStyle::FCheckBoxStyle(&this->CheckBoxStyle);
  return this;
}

// ~UCheckBoxStyleAsset @ 14869b2d0

void __thiscall UCheckBoxStyleAsset::~UCheckBoxStyleAsset(UCheckBoxStyleAsset *this)

{
  this->_padding_ = (longlong)&___7UCheckBoxStyleAsset__6B_;
  FCheckBoxStyle::~FCheckBoxStyle(&this->CheckBoxStyle);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c3c50

UClass * __cdecl UCheckBoxStyleAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CheckBoxStyleAsset",
               &Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton,
               StaticRegisterNativesUCheckBoxStyleAsset,0x980,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCheckBoxStyleAsset>,
               InternalVTableHelperCtorCaller<UCheckBoxStyleAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckBoxStyleAsset.InnerSingleton;
}

// StaticRegisterNativesUCheckBoxStyleAsset @ 1486f1740

void __cdecl UCheckBoxStyleAsset::StaticRegisterNativesUCheckBoxStyleAsset(void)

{
  return;
}

