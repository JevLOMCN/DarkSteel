// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147256b30

UClass * __cdecl UAutoRTFMTestBodySetup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestBodySetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestBodySetup",
               &Z_Registration_Info_UClass_UAutoRTFMTestBodySetup.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestBodySetup,0x340,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoRTFMTestBodySetup>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestBodySetup>,local_res8,
               UBodySetup::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestBodySetup.InnerSingleton;
}

// UAutoRTFMTestBodySetup @ 14725d010

UAutoRTFMTestBodySetup * __thiscall
UAutoRTFMTestBodySetup::UAutoRTFMTestBodySetup(UAutoRTFMTestBodySetup *this,FVTableHelper *param_1)

{
  UBodySetup::UBodySetup((UBodySetup *)this,param_1);
  this->Value = 0x2a;
  this->_padding_ = (longlong)&___7UAutoRTFMTestBodySetup__6B_;
  return this;
}

// UAutoRTFMTestBodySetup @ 14725d050

UAutoRTFMTestBodySetup * __thiscall
UAutoRTFMTestBodySetup::UAutoRTFMTestBodySetup
          (UAutoRTFMTestBodySetup *this,FObjectInitializer *param_1)

{
  UBodySetup::UBodySetup((UBodySetup *)this,param_1);
  this->Value = 0x2a;
  this->_padding_ = (longlong)&___7UAutoRTFMTestBodySetup__6B_;
  return this;
}

// ~UAutoRTFMTestBodySetup @ 14725dd80

void __thiscall UAutoRTFMTestBodySetup::~UAutoRTFMTestBodySetup(UAutoRTFMTestBodySetup *this)

{
  this->_padding_ = (longlong)&___7UAutoRTFMTestBodySetup__6B_;
  UBodySetup::~UBodySetup((UBodySetup *)this);
  return;
}

// GetPrivateStaticClass @ 147260490

UClass * __cdecl UAutoRTFMTestBodySetup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestBodySetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestBodySetup",
               &Z_Registration_Info_UClass_UAutoRTFMTestBodySetup.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestBodySetup,0x340,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoRTFMTestBodySetup>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestBodySetup>,local_res8,
               UBodySetup::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestBodySetup.InnerSingleton;
}

// StaticRegisterNativesUAutoRTFMTestBodySetup @ 147260f00

void __cdecl UAutoRTFMTestBodySetup::StaticRegisterNativesUAutoRTFMTestBodySetup(void)

{
  return;
}

