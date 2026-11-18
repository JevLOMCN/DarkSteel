// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ecf20

UClass * __cdecl UDatasmithStaticMeshGLTFImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshGLTFImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshGLTFImportData,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshGLTFImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshGLTFImportData>,local_res8,
               UDatasmithStaticMeshImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton;
}

// UDatasmithStaticMeshGLTFImportData @ 14e2f56f0

UDatasmithStaticMeshGLTFImportData * __thiscall
UDatasmithStaticMeshGLTFImportData::UDatasmithStaticMeshGLTFImportData
          (UDatasmithStaticMeshGLTFImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshGLTFImportData__6B_;
  (this->SourceMeshName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceMeshName).Data.ArrayNum = 0;
  (this->SourceMeshName).Data.ArrayMax = 0;
  return this;
}

// UDatasmithStaticMeshGLTFImportData @ 14e2f5730

UDatasmithStaticMeshGLTFImportData * __thiscall
UDatasmithStaticMeshGLTFImportData::UDatasmithStaticMeshGLTFImportData
          (UDatasmithStaticMeshGLTFImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshGLTFImportData__6B_;
  (this->SourceMeshName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceMeshName).Data.ArrayNum = 0;
  (this->SourceMeshName).Data.ArrayMax = 0;
  return this;
}

// ~UDatasmithStaticMeshGLTFImportData @ 14e2f6450

void __thiscall
UDatasmithStaticMeshGLTFImportData::~UDatasmithStaticMeshGLTFImportData
          (UDatasmithStaticMeshGLTFImportData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithStaticMeshGLTFImportData__6B_;
  pFVar1 = (this->SourceMeshName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fd400

UClass * __cdecl UDatasmithStaticMeshGLTFImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshGLTFImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshGLTFImportData,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshGLTFImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshGLTFImportData>,local_res8,
               UDatasmithStaticMeshImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshGLTFImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithStaticMeshGLTFImportData @ 14e2fee60

void __cdecl
UDatasmithStaticMeshGLTFImportData::StaticRegisterNativesUDatasmithStaticMeshGLTFImportData(void)

{
  return;
}

