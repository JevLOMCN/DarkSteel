// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// StaticClass @ 14a7881d0

UClass * __cdecl UCommonInputMetadata::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonInputMetadata",
               &Z_Registration_Info_UClass_UCommonInputMetadata.InnerSingleton,
               StaticRegisterNativesUCommonInputMetadata,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonInputMetadata>,
               InternalVTableHelperCtorCaller<UCommonInputMetadata>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputMetadata.InnerSingleton;
}

// UCommonInputMetadata @ 14a7adb80

UCommonInputMetadata * __thiscall
UCommonInputMetadata::UCommonInputMetadata(UCommonInputMetadata *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->NavBarPriority = 0;
  this->_padding_ = (longlong)&___7UCommonInputMetadata__6B_;
  this->bIsGenericInputAction = true;
  return this;
}

// UCommonInputMetadata @ 14a7adbc0

UCommonInputMetadata * __thiscall
UCommonInputMetadata::UCommonInputMetadata(UCommonInputMetadata *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->NavBarPriority = 0;
  this->_padding_ = (longlong)&___7UCommonInputMetadata__6B_;
  this->bIsGenericInputAction = true;
  return this;
}

// ~UCommonInputMetadata @ 14a7b2db0

void __thiscall UCommonInputMetadata::~UCommonInputMetadata(UCommonInputMetadata *this)

{
  this->_padding_ = (longlong)&___7UCommonInputMetadata__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e58d0

UClass * __cdecl UCommonInputMetadata::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonInputMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonInputMetadata",
               &Z_Registration_Info_UClass_UCommonInputMetadata.InnerSingleton,
               StaticRegisterNativesUCommonInputMetadata,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonInputMetadata>,
               InternalVTableHelperCtorCaller<UCommonInputMetadata>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonInputMetadata.InnerSingleton;
}

// StaticRegisterNativesUCommonInputMetadata @ 14a81e5d0

void __cdecl UCommonInputMetadata::StaticRegisterNativesUCommonInputMetadata(void)

{
  return;
}

