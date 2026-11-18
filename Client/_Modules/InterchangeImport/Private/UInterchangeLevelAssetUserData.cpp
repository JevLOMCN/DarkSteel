// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e673e70

UClass * __cdecl UInterchangeLevelAssetUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelAssetUserData",
               &Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton,
               StaticRegisterNativesUInterchangeLevelAssetUserData,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLevelAssetUserData>,
               InternalVTableHelperCtorCaller<UInterchangeLevelAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton;
}

// UInterchangeLevelAssetUserData @ 14e690f40

UInterchangeLevelAssetUserData * __thiscall
UInterchangeLevelAssetUserData::UInterchangeLevelAssetUserData
          (UInterchangeLevelAssetUserData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeLevelAssetUserData__6B_;
  (this->SceneImportPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneImportPaths).ArrayNum = 0;
  (this->SceneImportPaths).ArrayMax = 0;
  return this;
}

// UInterchangeLevelAssetUserData @ 14e690f80

UInterchangeLevelAssetUserData * __thiscall
UInterchangeLevelAssetUserData::UInterchangeLevelAssetUserData
          (UInterchangeLevelAssetUserData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeLevelAssetUserData__6B_;
  (this->SceneImportPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneImportPaths).ArrayNum = 0;
  (this->SceneImportPaths).ArrayMax = 0;
  return this;
}

// ~UInterchangeLevelAssetUserData @ 14e692050

void __thiscall
UInterchangeLevelAssetUserData::~UInterchangeLevelAssetUserData
          (UInterchangeLevelAssetUserData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeLevelAssetUserData__6B_;
  DestructItems<FString,int>
            ((FString *)(this->SceneImportPaths).AllocatorInstance.Data,
             (this->SceneImportPaths).ArrayNum);
  pFVar1 = (this->SceneImportPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0840

UClass * __cdecl UInterchangeLevelAssetUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelAssetUserData",
               &Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton,
               StaticRegisterNativesUInterchangeLevelAssetUserData,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLevelAssetUserData>,
               InternalVTableHelperCtorCaller<UInterchangeLevelAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelAssetUserData.InnerSingleton;
}

// StaticRegisterNativesUInterchangeLevelAssetUserData @ 14e6a8200

void __cdecl
UInterchangeLevelAssetUserData::StaticRegisterNativesUInterchangeLevelAssetUserData(void)

{
  return;
}

