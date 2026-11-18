// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147f90900

UClass * __cdecl UMeshBudgetProjectSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshBudgetProjectSettings",
               &Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton,
               StaticRegisterNativesUMeshBudgetProjectSettings,0x50,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshBudgetProjectSettings>,
               InternalVTableHelperCtorCaller<UMeshBudgetProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton;
}

// UMeshBudgetProjectSettings @ 147fa5df0

UMeshBudgetProjectSettings * __thiscall
UMeshBudgetProjectSettings::UMeshBudgetProjectSettings
          (UMeshBudgetProjectSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bEnableStaticMeshBudget = false;
  this->_padding_ = (longlong)&___7UMeshBudgetProjectSettings__6B_;
  (this->StaticMeshBudgetInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshBudgetInfos).ArrayNum = 0;
  (this->StaticMeshBudgetInfos).ArrayMax = 0;
  return this;
}

// UMeshBudgetProjectSettings @ 147fa5e30

UMeshBudgetProjectSettings * __thiscall
UMeshBudgetProjectSettings::UMeshBudgetProjectSettings
          (UMeshBudgetProjectSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bEnableStaticMeshBudget = false;
  this->_padding_ = (longlong)&___7UMeshBudgetProjectSettings__6B_;
  (this->StaticMeshBudgetInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshBudgetInfos).ArrayNum = 0;
  (this->StaticMeshBudgetInfos).ArrayMax = 0;
  return this;
}

// ~UMeshBudgetProjectSettings @ 147fa9610

void __thiscall
UMeshBudgetProjectSettings::~UMeshBudgetProjectSettings(UMeshBudgetProjectSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshBudgetProjectSettings__6B_;
  pFVar1 = (this->StaticMeshBudgetInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 147fd6090

UClass * __cdecl UMeshBudgetProjectSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshBudgetProjectSettings",
               &Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton,
               StaticRegisterNativesUMeshBudgetProjectSettings,0x50,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshBudgetProjectSettings>,
               InternalVTableHelperCtorCaller<UMeshBudgetProjectSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshBudgetProjectSettings.InnerSingleton;
}

// StaticRegisterNativesUMeshBudgetProjectSettings @ 147ff87e0

void __cdecl UMeshBudgetProjectSettings::StaticRegisterNativesUMeshBudgetProjectSettings(void)

{
  return;
}

