// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 6

// StaticClass @ 14cfabe40

UClass * __cdecl ULiveLinkDefaultSubjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkDefaultSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkDefaultSubjectSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDefaultSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkDefaultSubjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton;
}

// ULiveLinkDefaultSubjectSettings @ 14cfb59b0

ULiveLinkDefaultSubjectSettings * __thiscall
ULiveLinkDefaultSubjectSettings::ULiveLinkDefaultSubjectSettings
          (ULiveLinkDefaultSubjectSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bRebroadcastSubjectsByDefault = false;
  this->bAllowEditingRebroadcastProperty_DEPRECATED = true;
  this->_padding_ = (longlong)&___7ULiveLinkDefaultSubjectSettings__6B_;
  return this;
}

// ULiveLinkDefaultSubjectSettings @ 14cfb59e0

ULiveLinkDefaultSubjectSettings * __thiscall
ULiveLinkDefaultSubjectSettings::ULiveLinkDefaultSubjectSettings
          (ULiveLinkDefaultSubjectSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bRebroadcastSubjectsByDefault = false;
  this->bAllowEditingRebroadcastProperty_DEPRECATED = true;
  this->_padding_ = (longlong)&___7ULiveLinkDefaultSubjectSettings__6B_;
  return this;
}

// ~ULiveLinkDefaultSubjectSettings @ 14cfb65d0

void __thiscall
ULiveLinkDefaultSubjectSettings::~ULiveLinkDefaultSubjectSettings
          (ULiveLinkDefaultSubjectSettings *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkDefaultSubjectSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cfbad20

UClass * __cdecl ULiveLinkDefaultSubjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkDefaultSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkDefaultSubjectSettings,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDefaultSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkDefaultSubjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton;
}

// StaticRegisterNativesULiveLinkDefaultSubjectSettings @ 14cfbe2b0

void __cdecl
ULiveLinkDefaultSubjectSettings::StaticRegisterNativesULiveLinkDefaultSubjectSettings(void)

{
  return;
}

