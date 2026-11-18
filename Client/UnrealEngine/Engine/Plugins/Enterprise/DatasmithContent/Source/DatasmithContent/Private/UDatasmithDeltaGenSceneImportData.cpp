// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 6

// StaticClass @ 14e2ed5d0

UClass * __cdecl UDatasmithDeltaGenSceneImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDeltaGenSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithDeltaGenSceneImportData,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDeltaGenSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithDeltaGenSceneImportData>,local_res8,
               UDatasmithFBXSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton;
}

// UDatasmithDeltaGenSceneImportData @ 14e2f4a50

UDatasmithDeltaGenSceneImportData * __thiscall
UDatasmithDeltaGenSceneImportData::UDatasmithDeltaGenSceneImportData
          (UDatasmithDeltaGenSceneImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithDeltaGenSceneImportData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->VarPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VarPath).Data.ArrayNum = 0;
  (this->VarPath).Data.ArrayMax = 0;
  (this->PosPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PosPath).Data.ArrayNum = 0;
  (this->PosPath).Data.ArrayMax = 0;
  (this->TmlPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TmlPath).Data.ArrayNum = 0;
  (this->TmlPath).Data.ArrayMax = 0;
  return this;
}

// UDatasmithDeltaGenSceneImportData @ 14e2f4aa0

UDatasmithDeltaGenSceneImportData * __thiscall
UDatasmithDeltaGenSceneImportData::UDatasmithDeltaGenSceneImportData
          (UDatasmithDeltaGenSceneImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  this->_padding_ = (longlong)&___7UDatasmithDeltaGenSceneImportData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->VarPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VarPath).Data.ArrayNum = 0;
  (this->VarPath).Data.ArrayMax = 0;
  (this->PosPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PosPath).Data.ArrayNum = 0;
  (this->PosPath).Data.ArrayMax = 0;
  (this->TmlPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TmlPath).Data.ArrayNum = 0;
  (this->TmlPath).Data.ArrayMax = 0;
  return this;
}

// ~UDatasmithDeltaGenSceneImportData @ 14e2f5fa0

void __thiscall
UDatasmithDeltaGenSceneImportData::~UDatasmithDeltaGenSceneImportData
          (UDatasmithDeltaGenSceneImportData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithDeltaGenSceneImportData__6B_;
  pFVar1 = (this->TmlPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PosPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VarPath).Data.AllocatorInstance.Data;
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

// GetPrivateStaticClass @ 14e2fc5f0

UClass * __cdecl UDatasmithDeltaGenSceneImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithDeltaGenSceneImportData",
               &Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithDeltaGenSceneImportData,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithDeltaGenSceneImportData>,
               InternalVTableHelperCtorCaller<UDatasmithDeltaGenSceneImportData>,local_res8,
               UDatasmithFBXSceneImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithDeltaGenSceneImportData.InnerSingleton;
}

// StaticRegisterNativesUDatasmithDeltaGenSceneImportData @ 14e2fed30

void __cdecl
UDatasmithDeltaGenSceneImportData::StaticRegisterNativesUDatasmithDeltaGenSceneImportData(void)

{
  return;
}

