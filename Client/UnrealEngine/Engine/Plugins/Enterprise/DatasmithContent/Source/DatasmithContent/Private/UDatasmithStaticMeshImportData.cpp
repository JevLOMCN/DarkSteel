// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ec440

UClass * __cdecl UDatasmithStaticMeshImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton;
}

// UDatasmithStaticMeshImportData @ 14e2f5770

UDatasmithStaticMeshImportData * __thiscall
UDatasmithStaticMeshImportData::UDatasmithStaticMeshImportData
          (UDatasmithStaticMeshImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithStaticMeshImportData__6B_;
  return this;
}

// UDatasmithStaticMeshImportData @ 14e2f57a0

UDatasmithStaticMeshImportData * __thiscall
UDatasmithStaticMeshImportData::UDatasmithStaticMeshImportData
          (UDatasmithStaticMeshImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithStaticMeshImportData__6B_;
  return this;
}

// ~UDatasmithStaticMeshImportData @ 14e2f6490

void __thiscall
UDatasmithStaticMeshImportData::~UDatasmithStaticMeshImportData
          (UDatasmithStaticMeshImportData *this)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fd4c0

UClass * __cdecl UDatasmithStaticMeshImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithStaticMeshImportData @ 14e2fee70

void __cdecl
UDatasmithStaticMeshImportData::StaticRegisterNativesUDatasmithStaticMeshImportData(void)

{
  return;
}

