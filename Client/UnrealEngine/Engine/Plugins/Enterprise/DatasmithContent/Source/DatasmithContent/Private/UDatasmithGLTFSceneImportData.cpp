// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2eccc0

UClass * __cdecl UDatasmithGLTFSceneImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithGLTFSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithGLTFSceneImportData,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithGLTFSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithGLTFSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton;
}

// UDatasmithGLTFSceneImportData @ 14e2f4b70

UDatasmithGLTFSceneImportData * __thiscall
UDatasmithGLTFSceneImportData::UDatasmithGLTFSceneImportData
          (UDatasmithGLTFSceneImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithGLTFSceneImportData__6B_;
  (this->Generator).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Generator).Data.ArrayNum = 0;
  (this->Generator).Data.ArrayMax = 0;
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  (this->License).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->License).Data.ArrayNum = 0;
  (this->License).Data.ArrayMax = 0;
  (this->Source).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Data.ArrayNum = 0;
  (this->Source).Data.ArrayMax = 0;
  return this;
}

// UDatasmithGLTFSceneImportData @ 14e2f4bc0

UDatasmithGLTFSceneImportData * __thiscall
UDatasmithGLTFSceneImportData::UDatasmithGLTFSceneImportData
          (UDatasmithGLTFSceneImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithGLTFSceneImportData__6B_;
  (this->Generator).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Generator).Data.ArrayNum = 0;
  (this->Generator).Data.ArrayMax = 0;
  (this->Author).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Author).Data.ArrayNum = 0;
  (this->Author).Data.ArrayMax = 0;
  (this->License).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->License).Data.ArrayNum = 0;
  (this->License).Data.ArrayMax = 0;
  (this->Source).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Source).Data.ArrayNum = 0;
  (this->Source).Data.ArrayMax = 0;
  return this;
}

// ~UDatasmithGLTFSceneImportData @ 14e2f6060

void __thiscall
UDatasmithGLTFSceneImportData::~UDatasmithGLTFSceneImportData(UDatasmithGLTFSceneImportData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithGLTFSceneImportData__6B_;
  pFVar1 = (this->Source).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->License).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Author).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Generator).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fc770

UClass * __cdecl UDatasmithGLTFSceneImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithGLTFSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithGLTFSceneImportData,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithGLTFSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithGLTFSceneImportData>,local_res8,
               UDatasmithSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithGLTFSceneImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithGLTFSceneImportData @ 14e2fed50

void __cdecl UDatasmithGLTFSceneImportData::StaticRegisterNativesUDatasmithGLTFSceneImportData(void)

{
  return;
}

