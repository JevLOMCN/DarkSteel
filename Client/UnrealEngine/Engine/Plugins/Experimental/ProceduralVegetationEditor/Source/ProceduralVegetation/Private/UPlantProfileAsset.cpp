// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 6

// StaticClass @ 14da57550

UClass * __cdecl UPlantProfileAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlantProfileAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PlantProfileAsset",
               &Z_Registration_Info_UClass_UPlantProfileAsset.InnerSingleton,
               StaticRegisterNativesUPlantProfileAsset,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPlantProfileAsset>,
               InternalVTableHelperCtorCaller<UPlantProfileAsset>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlantProfileAsset.InnerSingleton;
}

// UPlantProfileAsset @ 14da671c0

UPlantProfileAsset * __thiscall
UPlantProfileAsset::UPlantProfileAsset(UPlantProfileAsset *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPlantProfileAsset__6B_;
  (this->Profiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Profiles).ArrayNum = 0;
  (this->Profiles).ArrayMax = 0;
  return this;
}

// UPlantProfileAsset @ 14da67200

UPlantProfileAsset * __thiscall
UPlantProfileAsset::UPlantProfileAsset(UPlantProfileAsset *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPlantProfileAsset__6B_;
  (this->Profiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Profiles).ArrayNum = 0;
  (this->Profiles).ArrayMax = 0;
  return this;
}

// ~UPlantProfileAsset @ 14da67f10

void __thiscall UPlantProfileAsset::~UPlantProfileAsset(UPlantProfileAsset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPlantProfileAsset__6B_;
  DestructItems<FPlantProfile,int>
            ((FPlantProfile *)(this->Profiles).AllocatorInstance.Data,(this->Profiles).ArrayNum);
  pFVar1 = (this->Profiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14da99b00

UClass * __cdecl UPlantProfileAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlantProfileAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PlantProfileAsset",
               &Z_Registration_Info_UClass_UPlantProfileAsset.InnerSingleton,
               StaticRegisterNativesUPlantProfileAsset,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPlantProfileAsset>,
               InternalVTableHelperCtorCaller<UPlantProfileAsset>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlantProfileAsset.InnerSingleton;
}

// StaticRegisterNativesUPlantProfileAsset @ 14daa99a0

void __cdecl UPlantProfileAsset::StaticRegisterNativesUPlantProfileAsset(void)

{
  return;
}

