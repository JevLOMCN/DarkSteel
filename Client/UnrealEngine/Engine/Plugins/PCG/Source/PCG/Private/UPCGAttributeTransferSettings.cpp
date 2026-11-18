// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticClass @ 149723420

UClass * __cdecl UPCGAttributeTransferSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeTransferSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeTransferSettings",
               &Z_Registration_Info_UClass_UPCGAttributeTransferSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeTransferSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeTransferSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeTransferSettings>,local_res8,
               UPCGCopyAttributesSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeTransferSettings.InnerSingleton;
}

// UPCGAttributeTransferSettings @ 1497254b0

UPCGAttributeTransferSettings * __thiscall
UPCGAttributeTransferSettings::UPCGAttributeTransferSettings
          (UPCGAttributeTransferSettings *this,FVTableHelper *param_1)

{
  UPCGCopyAttributesSettings::UPCGCopyAttributesSettings((UPCGCopyAttributesSettings *)this,param_1)
  ;
  *(undefined ***)this = &___7UPCGAttributeTransferSettings__6B_;
  return this;
}

// ~UPCGAttributeTransferSettings @ 149725da0

void __thiscall
UPCGAttributeTransferSettings::~UPCGAttributeTransferSettings(UPCGAttributeTransferSettings *this)

{
  *(undefined ***)this = &___7UPCGAttributeTransferSettings__6B_;
  UPCGCopyAttributesSettings::~UPCGCopyAttributesSettings((UPCGCopyAttributesSettings *)this);
  return;
}

// GetPrivateStaticClass @ 149726f20

UClass * __cdecl UPCGAttributeTransferSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeTransferSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeTransferSettings",
               &Z_Registration_Info_UClass_UPCGAttributeTransferSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeTransferSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeTransferSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeTransferSettings>,local_res8,
               UPCGCopyAttributesSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeTransferSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGAttributeTransferSettings @ 149727f70

void __cdecl UPCGAttributeTransferSettings::StaticRegisterNativesUPCGAttributeTransferSettings(void)

{
  return;
}

