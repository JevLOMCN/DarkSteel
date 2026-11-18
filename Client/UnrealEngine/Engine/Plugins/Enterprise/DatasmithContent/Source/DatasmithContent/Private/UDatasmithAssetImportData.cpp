// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ec330

UClass * __cdecl UDatasmithAssetImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithAssetImportData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithAssetImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton;
}

// UDatasmithAssetImportData @ 14e2f45a0

UDatasmithAssetImportData * __thiscall
UDatasmithAssetImportData::UDatasmithAssetImportData
          (UDatasmithAssetImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  return this;
}

// UDatasmithAssetImportData @ 14e2f45d0

UDatasmithAssetImportData * __thiscall
UDatasmithAssetImportData::UDatasmithAssetImportData
          (UDatasmithAssetImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  return this;
}

// ~UDatasmithAssetImportData @ 14e2f5e10

void __thiscall
UDatasmithAssetImportData::~UDatasmithAssetImportData(UDatasmithAssetImportData *this)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fbe80

UClass * __cdecl UDatasmithAssetImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithAssetImportData",
               &Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithAssetImportData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithAssetImportData>,
               InternalVTableHelperCtorCaller<UDatasmithAssetImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithAssetImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithAssetImportData @ 14e2fec60

void __cdecl UDatasmithAssetImportData::StaticRegisterNativesUDatasmithAssetImportData(void)

{
  return;
}

