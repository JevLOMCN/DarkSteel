// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ed4d0

UClass * __cdecl UDatasmithDeltaGenAssetImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDeltaGenAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithDeltaGenAssetImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDeltaGenAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithDeltaGenAssetImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton;
}

// UDatasmithDeltaGenAssetImportData @ 14e2f49f0

UDatasmithDeltaGenAssetImportData * __thiscall
UDatasmithDeltaGenAssetImportData::UDatasmithDeltaGenAssetImportData
          (UDatasmithDeltaGenAssetImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithDeltaGenAssetImportData__6B_;
  return this;
}

// UDatasmithDeltaGenAssetImportData @ 14e2f4a20

UDatasmithDeltaGenAssetImportData * __thiscall
UDatasmithDeltaGenAssetImportData::UDatasmithDeltaGenAssetImportData
          (UDatasmithDeltaGenAssetImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithDeltaGenAssetImportData__6B_;
  return this;
}

// ~UDatasmithDeltaGenAssetImportData @ 14e2f5f80

void __thiscall
UDatasmithDeltaGenAssetImportData::~UDatasmithDeltaGenAssetImportData
          (UDatasmithDeltaGenAssetImportData *this)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fc530

UClass * __cdecl UDatasmithDeltaGenAssetImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDeltaGenAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithDeltaGenAssetImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDeltaGenAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithDeltaGenAssetImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDeltaGenAssetImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithDeltaGenAssetImportData @ 14e2fed20

void __cdecl
UDatasmithDeltaGenAssetImportData::StaticRegisterNativesUDatasmithDeltaGenAssetImportData(void)

{
  return;
}

