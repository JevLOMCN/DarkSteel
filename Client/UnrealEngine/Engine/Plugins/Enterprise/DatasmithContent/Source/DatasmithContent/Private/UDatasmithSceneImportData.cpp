// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ec790

UClass * __cdecl UDatasmithSceneImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithSceneImportData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithSceneImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton;
}

// UDatasmithSceneImportData @ 14e2f54a0

UDatasmithSceneImportData * __thiscall
UDatasmithSceneImportData::UDatasmithSceneImportData
          (UDatasmithSceneImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  return this;
}

// UDatasmithSceneImportData @ 14e2f54d0

UDatasmithSceneImportData * __thiscall
UDatasmithSceneImportData::UDatasmithSceneImportData
          (UDatasmithSceneImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  return this;
}

// ~UDatasmithSceneImportData @ 14e2f6390

void __thiscall
UDatasmithSceneImportData::~UDatasmithSceneImportData(UDatasmithSceneImportData *this)

{
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fd040

UClass * __cdecl UDatasmithSceneImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithSceneImportData,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithSceneImportData>,local_res8,
               UAssetImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSceneImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithSceneImportData @ 14e2fee10

void __cdecl UDatasmithSceneImportData::StaticRegisterNativesUDatasmithSceneImportData(void)

{
  return;
}

