// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ee2c0

UClass * __cdecl UMeshDrawCommandStatsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDrawCommandStatsSettings",
               &Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.InnerSingleton,
               StaticRegisterNativesUMeshDrawCommandStatsSettings,0x60,8,
               CLASS_Intrinsic|CLASS_PerPlatformConfig|CLASS_Config|CLASS_DefaultConfig,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshDrawCommandStatsSettings>,
               InternalVTableHelperCtorCaller<UMeshDrawCommandStatsSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.InnerSingleton;
}

// UMeshDrawCommandStatsSettings @ 1472f1db0

UMeshDrawCommandStatsSettings * __thiscall
UMeshDrawCommandStatsSettings::UMeshDrawCommandStatsSettings
          (UMeshDrawCommandStatsSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->CollectionForCsvProfiler = 1;
  this->_padding_ = (longlong)&___7UMeshDrawCommandStatsSettings__6B_;
  (this->Budgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Budgets).ArrayNum = 0;
  (this->Budgets).ArrayMax = 0;
  (this->BudgetTotals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BudgetTotals).ArrayNum = 0;
  (this->BudgetTotals).ArrayMax = 0;
  return this;
}

// UMeshDrawCommandStatsSettings @ 1472f1df0

UMeshDrawCommandStatsSettings * __thiscall
UMeshDrawCommandStatsSettings::UMeshDrawCommandStatsSettings
          (UMeshDrawCommandStatsSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->CollectionForCsvProfiler = 1;
  this->_padding_ = (longlong)&___7UMeshDrawCommandStatsSettings__6B_;
  (this->Budgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Budgets).ArrayNum = 0;
  (this->Budgets).ArrayMax = 0;
  (this->BudgetTotals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BudgetTotals).ArrayNum = 0;
  (this->BudgetTotals).ArrayMax = 0;
  return this;
}

// ~UMeshDrawCommandStatsSettings @ 1472f2310

void __thiscall
UMeshDrawCommandStatsSettings::~UMeshDrawCommandStatsSettings(UMeshDrawCommandStatsSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshDrawCommandStatsSettings__6B_;
  pFVar1 = (this->BudgetTotals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshDrawCommandStatsBudget,int>
            ((FMeshDrawCommandStatsBudget *)(this->Budgets).AllocatorInstance.Data,
             (this->Budgets).ArrayNum);
  pFVar1 = (this->Budgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3b80

UClass * __cdecl UMeshDrawCommandStatsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDrawCommandStatsSettings",
               &Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.InnerSingleton,
               StaticRegisterNativesUMeshDrawCommandStatsSettings,0x60,8,
               CLASS_Intrinsic|CLASS_PerPlatformConfig|CLASS_Config|CLASS_DefaultConfig,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshDrawCommandStatsSettings>,
               InternalVTableHelperCtorCaller<UMeshDrawCommandStatsSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDrawCommandStatsSettings.InnerSingleton;
}

// StaticRegisterNativesUMeshDrawCommandStatsSettings @ 1472f4460

void __cdecl UMeshDrawCommandStatsSettings::StaticRegisterNativesUMeshDrawCommandStatsSettings(void)

{
  return;
}

