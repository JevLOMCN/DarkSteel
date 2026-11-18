// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticClass @ 149721230

UClass * __cdecl UPCGMetadataOperationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataOperationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataOperationSettings",
               &Z_Registration_Info_UClass_UPCGMetadataOperationSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataOperationSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataOperationSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataOperationSettings>,local_res8,
               UPCGCopyAttributesSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataOperationSettings.InnerSingleton;
}

// UPCGMetadataOperationSettings @ 149725900

UPCGMetadataOperationSettings * __thiscall
UPCGMetadataOperationSettings::UPCGMetadataOperationSettings
          (UPCGMetadataOperationSettings *this,FVTableHelper *param_1)

{
  UPCGCopyAttributesSettings::UPCGCopyAttributesSettings((UPCGCopyAttributesSettings *)this,param_1)
  ;
  *(undefined ***)this = &___7UPCGMetadataOperationSettings__6B_;
  return this;
}

// ~UPCGMetadataOperationSettings @ 149725f50

void __thiscall
UPCGMetadataOperationSettings::~UPCGMetadataOperationSettings(UPCGMetadataOperationSettings *this)

{
  *(undefined ***)this = &___7UPCGMetadataOperationSettings__6B_;
  UPCGCopyAttributesSettings::~UPCGCopyAttributesSettings((UPCGCopyAttributesSettings *)this);
  return;
}

// GetPrivateStaticClass @ 149727440

UClass * __cdecl UPCGMetadataOperationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataOperationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataOperationSettings",
               &Z_Registration_Info_UClass_UPCGMetadataOperationSettings.InnerSingleton,
               StaticRegisterNativesUPCGMetadataOperationSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataOperationSettings>,
               InternalVTableHelperCtorCaller<UPCGMetadataOperationSettings>,local_res8,
               UPCGCopyAttributesSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataOperationSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGMetadataOperationSettings @ 149728010

void __cdecl UPCGMetadataOperationSettings::StaticRegisterNativesUPCGMetadataOperationSettings(void)

{
  return;
}

