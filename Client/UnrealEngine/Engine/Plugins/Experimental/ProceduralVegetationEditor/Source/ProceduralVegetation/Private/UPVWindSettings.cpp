// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 6

// StaticClass @ 14da57410

UClass * __cdecl UPVWindSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVWindSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVWindSettings",
               &Z_Registration_Info_UClass_UPVWindSettings.InnerSingleton,
               StaticRegisterNativesUPVWindSettings,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPVWindSettings>,InternalVTableHelperCtorCaller<UPVWindSettings>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVWindSettings.InnerSingleton;
}

// UPVWindSettings @ 14da67140

UPVWindSettings * __thiscall
UPVWindSettings::UPVWindSettings(UPVWindSettings *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->bOverwriteExisting = false;
  this->_padding_ = (longlong)&___7UPVWindSettings__6B_;
  (this->SimulationGroupData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationGroupData).ArrayNum = 0;
  (this->SimulationGroupData).ArrayMax = 0;
  return this;
}

// UPVWindSettings @ 14da67180

UPVWindSettings * __thiscall
UPVWindSettings::UPVWindSettings(UPVWindSettings *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->bOverwriteExisting = false;
  this->_padding_ = (longlong)&___7UPVWindSettings__6B_;
  (this->SimulationGroupData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationGroupData).ArrayNum = 0;
  (this->SimulationGroupData).ArrayMax = 0;
  return this;
}

// ~UPVWindSettings @ 14da67ed0

void __thiscall UPVWindSettings::~UPVWindSettings(UPVWindSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPVWindSettings__6B_;
  pFVar1 = (this->SimulationGroupData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14da99a40

UClass * __cdecl UPVWindSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVWindSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVWindSettings",
               &Z_Registration_Info_UClass_UPVWindSettings.InnerSingleton,
               StaticRegisterNativesUPVWindSettings,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPVWindSettings>,InternalVTableHelperCtorCaller<UPVWindSettings>,
               local_res8,UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVWindSettings.InnerSingleton;
}

// StaticRegisterNativesUPVWindSettings @ 14daa9990

void __cdecl UPVWindSettings::StaticRegisterNativesUPVWindSettings(void)

{
  return;
}

