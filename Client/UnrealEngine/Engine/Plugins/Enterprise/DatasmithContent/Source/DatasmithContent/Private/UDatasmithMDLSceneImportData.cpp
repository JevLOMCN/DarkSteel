// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ecb00

UClass * __cdecl UDatasmithMDLSceneImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithMDLSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithMDLSceneImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithMDLSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithMDLSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton;
}

// UDatasmithMDLSceneImportData @ 14e2f4db0

UDatasmithMDLSceneImportData * __thiscall
UDatasmithMDLSceneImportData::UDatasmithMDLSceneImportData
          (UDatasmithMDLSceneImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithMDLSceneImportData__6B_;
  return this;
}

// UDatasmithMDLSceneImportData @ 14e2f4de0

UDatasmithMDLSceneImportData * __thiscall
UDatasmithMDLSceneImportData::UDatasmithMDLSceneImportData
          (UDatasmithMDLSceneImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithMDLSceneImportData__6B_;
  return this;
}

// ~UDatasmithMDLSceneImportData @ 14e2f6170

void __thiscall
UDatasmithMDLSceneImportData::~UDatasmithMDLSceneImportData(UDatasmithMDLSceneImportData *this)

{
  *(undefined ***)this = &___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fca70

UClass * __cdecl UDatasmithMDLSceneImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithMDLSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithMDLSceneImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithMDLSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithMDLSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithMDLSceneImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithMDLSceneImportData @ 14e2fed90

void __cdecl UDatasmithMDLSceneImportData::StaticRegisterNativesUDatasmithMDLSceneImportData(void)

{
  return;
}

