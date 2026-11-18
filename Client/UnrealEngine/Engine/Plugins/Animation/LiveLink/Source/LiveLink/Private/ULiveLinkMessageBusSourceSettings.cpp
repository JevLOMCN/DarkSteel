// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 6

// StaticClass @ 14cff4f90

UClass * __cdecl ULiveLinkMessageBusSourceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkMessageBusSourceSettings,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkMessageBusSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton;
}

// ULiveLinkMessageBusSourceSettings @ 14d014030

ULiveLinkMessageBusSourceSettings * __thiscall
ULiveLinkMessageBusSourceSettings::ULiveLinkMessageBusSourceSettings
          (ULiveLinkMessageBusSourceSettings *this,FVTableHelper *param_1)

{
  ULiveLinkSourceSettings::ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this,param_1);
  *(undefined ***)this = &___7ULiveLinkMessageBusSourceSettings__6B_;
  return this;
}

// ULiveLinkMessageBusSourceSettings @ 14d014060

ULiveLinkMessageBusSourceSettings * __thiscall
ULiveLinkMessageBusSourceSettings::ULiveLinkMessageBusSourceSettings
          (ULiveLinkMessageBusSourceSettings *this)

{
  UClass *this_00;
  
  ULiveLinkSourceSettings::ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this);
  *(undefined ***)this = &___7ULiveLinkMessageBusSourceSettings__6B_;
  this_00 = ULiveLinkSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this->field_0x28 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x14;
  return this;
}

// ~ULiveLinkMessageBusSourceSettings @ 14d017340

void __thiscall
ULiveLinkMessageBusSourceSettings::~ULiveLinkMessageBusSourceSettings
          (ULiveLinkMessageBusSourceSettings *this)

{
  *(undefined ***)this = &___7ULiveLinkMessageBusSourceSettings__6B_;
  ULiveLinkSourceSettings::~ULiveLinkSourceSettings((ULiveLinkSourceSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d0528a0

UClass * __cdecl ULiveLinkMessageBusSourceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkMessageBusSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkMessageBusSourceSettings,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkMessageBusSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkMessageBusSourceSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkMessageBusSourceSettings.InnerSingleton;
}

// StaticRegisterNativesULiveLinkMessageBusSourceSettings @ 14d080800

void __cdecl
ULiveLinkMessageBusSourceSettings::StaticRegisterNativesULiveLinkMessageBusSourceSettings(void)

{
  return;
}

