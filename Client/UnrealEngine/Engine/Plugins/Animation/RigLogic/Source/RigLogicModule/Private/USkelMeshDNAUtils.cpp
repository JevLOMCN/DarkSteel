// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 8

// StaticClass @ 14a65a8e0

UClass * __cdecl USkelMeshDNAUtils::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"SkelMeshDNAUtils",
               &Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton,
               StaticRegisterNativesUSkelMeshDNAUtils,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USkelMeshDNAUtils>,
               InternalVTableHelperCtorCaller<USkelMeshDNAUtils>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton;
}

// USkelMeshDNAUtils @ 14a660e10

USkelMeshDNAUtils * __thiscall
USkelMeshDNAUtils::USkelMeshDNAUtils(USkelMeshDNAUtils *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USkelMeshDNAUtils__6B_;
  return this;
}

// USkelMeshDNAUtils @ 14a660e40

USkelMeshDNAUtils * __thiscall
USkelMeshDNAUtils::USkelMeshDNAUtils(USkelMeshDNAUtils *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USkelMeshDNAUtils__6B_;
  return this;
}

// ~USkelMeshDNAUtils @ 14a661650

void __thiscall USkelMeshDNAUtils::~USkelMeshDNAUtils(USkelMeshDNAUtils *this)

{
  *(undefined ***)this = &___7USkelMeshDNAUtils__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateMapForUpdatingNeutralMesh @ 14a66b4b0

FDNAToSkelMeshMap * __cdecl
USkelMeshDNAUtils::CreateMapForUpdatingNeutralMesh(IDNAReader *param_1,USkeletalMesh *param_2)

{
  return (FDNAToSkelMeshMap *)0x0;
}

// CreateMapForUpdatingNeutralMesh @ 14a66b4c0

FDNAToSkelMeshMap * __cdecl
USkelMeshDNAUtils::CreateMapForUpdatingNeutralMesh(USkeletalMesh *param_1)

{
  return (FDNAToSkelMeshMap *)0x0;
}

// GetPrivateStaticClass @ 14a676720

UClass * __cdecl USkelMeshDNAUtils::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigLogicModule",L"SkelMeshDNAUtils",
               &Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton,
               StaticRegisterNativesUSkelMeshDNAUtils,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USkelMeshDNAUtils>,
               InternalVTableHelperCtorCaller<USkelMeshDNAUtils>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkelMeshDNAUtils.InnerSingleton;
}

// StaticRegisterNativesUSkelMeshDNAUtils @ 14a683050

void __cdecl USkelMeshDNAUtils::StaticRegisterNativesUSkelMeshDNAUtils(void)

{
  return;
}

