// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ed250

UClass * __cdecl UDatasmithFBXSceneImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithFBXSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithFBXSceneImportData,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithFBXSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithFBXSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton;
}

// UDatasmithFBXSceneImportData @ 14e2f4af0

UDatasmithFBXSceneImportData * __thiscall
UDatasmithFBXSceneImportData::UDatasmithFBXSceneImportData
          (UDatasmithFBXSceneImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithFBXSceneImportData__6B_;
  (this->TexturesDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TexturesDir).Data.ArrayNum = 0;
  (this->TexturesDir).Data.ArrayMax = 0;
  return this;
}

// UDatasmithFBXSceneImportData @ 14e2f4b30

UDatasmithFBXSceneImportData * __thiscall
UDatasmithFBXSceneImportData::UDatasmithFBXSceneImportData
          (UDatasmithFBXSceneImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithFBXSceneImportData__6B_;
  (this->TexturesDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TexturesDir).Data.ArrayNum = 0;
  (this->TexturesDir).Data.ArrayMax = 0;
  return this;
}

// ~UDatasmithFBXSceneImportData @ 14e2f6020

void __thiscall
UDatasmithFBXSceneImportData::~UDatasmithFBXSceneImportData(UDatasmithFBXSceneImportData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithFBXSceneImportData__6B_;
  pFVar1 = (this->TexturesDir).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fc6b0

UClass * __cdecl UDatasmithFBXSceneImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithFBXSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithFBXSceneImportData,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithFBXSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithFBXSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithFBXSceneImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithFBXSceneImportData @ 14e2fed40

void __cdecl UDatasmithFBXSceneImportData::StaticRegisterNativesUDatasmithFBXSceneImportData(void)

{
  return;
}

