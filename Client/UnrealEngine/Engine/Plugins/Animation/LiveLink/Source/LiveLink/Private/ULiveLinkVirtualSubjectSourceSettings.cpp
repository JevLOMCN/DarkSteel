// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 6

// StaticClass @ 14cff51a0

UClass * __cdecl ULiveLinkVirtualSubjectSourceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkVirtualSubjectSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkVirtualSubjectSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkVirtualSubjectSourceSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton;
}

// ULiveLinkVirtualSubjectSourceSettings @ 14d014910

ULiveLinkVirtualSubjectSourceSettings * __thiscall
ULiveLinkVirtualSubjectSourceSettings::ULiveLinkVirtualSubjectSourceSettings
          (ULiveLinkVirtualSubjectSourceSettings *this,FVTableHelper *param_1)

{
  ULiveLinkSourceSettings::ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkVirtualSubjectSourceSettings__6B_;
  (this->SourceName).ComparisonIndex = 0;
  (this->SourceName).Number = 0;
  return this;
}

// ULiveLinkVirtualSubjectSourceSettings @ 14d014940

ULiveLinkVirtualSubjectSourceSettings * __thiscall
ULiveLinkVirtualSubjectSourceSettings::ULiveLinkVirtualSubjectSourceSettings
          (ULiveLinkVirtualSubjectSourceSettings *this)

{
  ULiveLinkSourceSettings::ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this);
  this->_padding_ = (longlong)&___7ULiveLinkVirtualSubjectSourceSettings__6B_;
  (this->SourceName).ComparisonIndex = 0;
  (this->SourceName).Number = 0;
  return this;
}

// ~ULiveLinkVirtualSubjectSourceSettings @ 14d0175c0

void __thiscall
ULiveLinkVirtualSubjectSourceSettings::~ULiveLinkVirtualSubjectSourceSettings
          (ULiveLinkVirtualSubjectSourceSettings *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkVirtualSubjectSourceSettings__6B_;
  ULiveLinkSourceSettings::~ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d052ff0

UClass * __cdecl ULiveLinkVirtualSubjectSourceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkVirtualSubjectSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkVirtualSubjectSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkVirtualSubjectSourceSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkVirtualSubjectSourceSettings.InnerSingleton;
}

// StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings @ 14d0808d0

void __cdecl
ULiveLinkVirtualSubjectSourceSettings::StaticRegisterNativesULiveLinkVirtualSubjectSourceSettings
          (void)

{
  return;
}

