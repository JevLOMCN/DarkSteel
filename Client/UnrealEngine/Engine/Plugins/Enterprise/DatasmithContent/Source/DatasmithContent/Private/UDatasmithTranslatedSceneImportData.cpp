// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ec8d0

UClass * __cdecl UDatasmithTranslatedSceneImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithTranslatedSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithTranslatedSceneImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithTranslatedSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithTranslatedSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton;
}

// UDatasmithTranslatedSceneImportData @ 14e2f58d0

UDatasmithTranslatedSceneImportData * __thiscall
UDatasmithTranslatedSceneImportData::UDatasmithTranslatedSceneImportData
          (UDatasmithTranslatedSceneImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithTranslatedSceneImportData__6B_;
  return this;
}

// UDatasmithTranslatedSceneImportData @ 14e2f5900

UDatasmithTranslatedSceneImportData * __thiscall
UDatasmithTranslatedSceneImportData::UDatasmithTranslatedSceneImportData
          (UDatasmithTranslatedSceneImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithTranslatedSceneImportData__6B_;
  return this;
}

// ~UDatasmithTranslatedSceneImportData @ 14e2f6530

void __thiscall
UDatasmithTranslatedSceneImportData::~UDatasmithTranslatedSceneImportData
          (UDatasmithTranslatedSceneImportData *this)

{
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fd640

UClass * __cdecl UDatasmithTranslatedSceneImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithTranslatedSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithTranslatedSceneImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithTranslatedSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithTranslatedSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithTranslatedSceneImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithTranslatedSceneImportData @ 14e2fee90

void __cdecl
UDatasmithTranslatedSceneImportData::StaticRegisterNativesUDatasmithTranslatedSceneImportData(void)

{
  return;
}

