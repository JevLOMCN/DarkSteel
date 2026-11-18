// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b46aaf0

UClass * __cdecl UDS_ConstructionDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConstructionDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConstructionDataAsset",
               &Z_Registration_Info_UClass_UDS_ConstructionDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_ConstructionDataAsset,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConstructionDataAsset>,
               InternalVTableHelperCtorCaller<UDS_ConstructionDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConstructionDataAsset.InnerSingleton;
}

// UDS_ConstructionDataAsset @ 14b4712d0

UDS_ConstructionDataAsset * __thiscall
UDS_ConstructionDataAsset::UDS_ConstructionDataAsset
          (UDS_ConstructionDataAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConstructionDataAsset__6B_;
  (this->ConstructionDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionDatas).ArrayNum = 0;
  (this->ConstructionDatas).ArrayMax = 0;
  (this->BuildingActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildingActors).ArrayNum = 0;
  (this->BuildingActors).ArrayMax = 0;
  return this;
}

// UDS_ConstructionDataAsset @ 14b471310

UDS_ConstructionDataAsset * __thiscall
UDS_ConstructionDataAsset::UDS_ConstructionDataAsset
          (UDS_ConstructionDataAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ConstructionDataAsset__6B_;
  (this->ConstructionDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstructionDatas).ArrayNum = 0;
  (this->ConstructionDatas).ArrayMax = 0;
  (this->BuildingActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildingActors).ArrayNum = 0;
  (this->BuildingActors).ArrayMax = 0;
  return this;
}

// ~UDS_ConstructionDataAsset @ 14b472ab0

void __thiscall
UDS_ConstructionDataAsset::~UDS_ConstructionDataAsset(UDS_ConstructionDataAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_ConstructionDataAsset__6B_;
  DestructItems<TSoftClassPtr<ADS_BuildingActor>,int>
            ((TSoftClassPtr<ADS_BuildingActor> *)(this->BuildingActors).AllocatorInstance.Data,
             (this->BuildingActors).ArrayNum);
  pFVar1 = (this->BuildingActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstructionDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b476300

UClass * __cdecl UDS_ConstructionDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConstructionDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConstructionDataAsset",
               &Z_Registration_Info_UClass_UDS_ConstructionDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_ConstructionDataAsset,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConstructionDataAsset>,
               InternalVTableHelperCtorCaller<UDS_ConstructionDataAsset>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConstructionDataAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_ConstructionDataAsset @ 14b476ec0

void __cdecl UDS_ConstructionDataAsset::StaticRegisterNativesUDS_ConstructionDataAsset(void)

{
  return;
}

