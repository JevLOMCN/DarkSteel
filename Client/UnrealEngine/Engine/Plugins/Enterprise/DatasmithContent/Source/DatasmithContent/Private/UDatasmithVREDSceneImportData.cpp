// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ed7f0

UClass * __cdecl UDatasmithVREDSceneImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithVREDSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithVREDSceneImportData,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithVREDSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithVREDSceneImportData>,local_res8,
               UDatasmithFBXSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton;
}

// UDatasmithVREDSceneImportData @ 14e2f5990

UDatasmithVREDSceneImportData * __thiscall
UDatasmithVREDSceneImportData::UDatasmithVREDSceneImportData
          (UDatasmithVREDSceneImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithVREDSceneImportData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MatsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatsPath).Data.ArrayNum = 0;
  (this->MatsPath).Data.ArrayMax = 0;
  (this->VarPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VarPath).Data.ArrayNum = 0;
  (this->VarPath).Data.ArrayMax = 0;
  (this->LightInfoPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightInfoPath).Data.ArrayNum = 0;
  (this->LightInfoPath).Data.ArrayMax = 0;
  (this->ClipInfoPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClipInfoPath).Data.ArrayNum = 0;
  (this->ClipInfoPath).Data.ArrayMax = 0;
  return this;
}

// UDatasmithVREDSceneImportData @ 14e2f59f0

UDatasmithVREDSceneImportData * __thiscall
UDatasmithVREDSceneImportData::UDatasmithVREDSceneImportData
          (UDatasmithVREDSceneImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithVREDSceneImportData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MatsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatsPath).Data.ArrayNum = 0;
  (this->MatsPath).Data.ArrayMax = 0;
  (this->VarPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VarPath).Data.ArrayNum = 0;
  (this->VarPath).Data.ArrayMax = 0;
  (this->LightInfoPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightInfoPath).Data.ArrayNum = 0;
  (this->LightInfoPath).Data.ArrayMax = 0;
  (this->ClipInfoPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClipInfoPath).Data.ArrayNum = 0;
  (this->ClipInfoPath).Data.ArrayMax = 0;
  return this;
}

// ~UDatasmithVREDSceneImportData @ 14e2f6570

void __thiscall
UDatasmithVREDSceneImportData::~UDatasmithVREDSceneImportData(UDatasmithVREDSceneImportData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithVREDSceneImportData__6B_;
  pFVar1 = (this->ClipInfoPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LightInfoPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VarPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MatsPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithFBXSceneImportData__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UDatasmithSceneImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fd7c0

UClass * __cdecl UDatasmithVREDSceneImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithVREDSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithVREDSceneImportData,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithVREDSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithVREDSceneImportData>,local_res8,
               UDatasmithFBXSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithVREDSceneImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithVREDSceneImportData @ 14e2feeb0

void __cdecl UDatasmithVREDSceneImportData::StaticRegisterNativesUDatasmithVREDSceneImportData(void)

{
  return;
}

