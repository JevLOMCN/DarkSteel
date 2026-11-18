// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ed6e0

UClass * __cdecl UDatasmithVREDAssetImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithVREDAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithVREDAssetImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithVREDAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithVREDAssetImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton;
}

// UDatasmithVREDAssetImportData @ 14e2f5930

UDatasmithVREDAssetImportData * __thiscall
UDatasmithVREDAssetImportData::UDatasmithVREDAssetImportData
          (UDatasmithVREDAssetImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithVREDAssetImportData__6B_;
  return this;
}

// UDatasmithVREDAssetImportData @ 14e2f5960

UDatasmithVREDAssetImportData * __thiscall
UDatasmithVREDAssetImportData::UDatasmithVREDAssetImportData
          (UDatasmithVREDAssetImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithVREDAssetImportData__6B_;
  return this;
}

// ~UDatasmithVREDAssetImportData @ 14e2f6550

void __thiscall
UDatasmithVREDAssetImportData::~UDatasmithVREDAssetImportData(UDatasmithVREDAssetImportData *this)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fd700

UClass * __cdecl UDatasmithVREDAssetImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithVREDAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithVREDAssetImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithVREDAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithVREDAssetImportData>,local_res8,
               UDatasmithAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithVREDAssetImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithVREDAssetImportData @ 14e2feea0

void __cdecl UDatasmithVREDAssetImportData::StaticRegisterNativesUDatasmithVREDAssetImportData(void)

{
  return;
}

