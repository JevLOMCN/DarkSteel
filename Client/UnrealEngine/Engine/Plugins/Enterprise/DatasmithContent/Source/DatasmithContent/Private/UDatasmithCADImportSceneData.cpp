// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2eca10

UClass * __cdecl UDatasmithCADImportSceneData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCADImportSceneData",
               &Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton,
               StaticRegisterNativesUDatasmithCADImportSceneData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCADImportSceneData>,
               InternalVTableHelperCtorCaller<UDatasmithCADImportSceneData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton;
}

// UDatasmithCADImportSceneData @ 14e2f46a0

UDatasmithCADImportSceneData * __thiscall
UDatasmithCADImportSceneData::UDatasmithCADImportSceneData
          (UDatasmithCADImportSceneData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithCADImportSceneData__6B_;
  return this;
}

// UDatasmithCADImportSceneData @ 14e2f46d0

UDatasmithCADImportSceneData * __thiscall
UDatasmithCADImportSceneData::UDatasmithCADImportSceneData
          (UDatasmithCADImportSceneData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithCADImportSceneData__6B_;
  return this;
}

// ~UDatasmithCADImportSceneData @ 14e2f5e80

void __thiscall
UDatasmithCADImportSceneData::~UDatasmithCADImportSceneData(UDatasmithCADImportSceneData *this)

{
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fc000

UClass * __cdecl UDatasmithCADImportSceneData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCADImportSceneData",
               &Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton,
               StaticRegisterNativesUDatasmithCADImportSceneData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCADImportSceneData>,
               InternalVTableHelperCtorCaller<UDatasmithCADImportSceneData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCADImportSceneData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithCADImportSceneData @ 14e2fec80

void __cdecl UDatasmithCADImportSceneData::StaticRegisterNativesUDatasmithCADImportSceneData(void)

{
  return;
}

