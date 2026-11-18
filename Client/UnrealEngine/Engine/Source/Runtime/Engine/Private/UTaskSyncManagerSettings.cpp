// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1487e5240

UClass * __cdecl UE::Tick::UTaskSyncManagerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTaskSyncManagerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TaskSyncManagerSettings",
               &Z_Registration_Info_UClass_UTaskSyncManagerSettings.InnerSingleton,
               StaticRegisterNativesUTaskSyncManagerSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UE::Tick::UTaskSyncManagerSettings>,
               InternalVTableHelperCtorCaller<UE::Tick::UTaskSyncManagerSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTaskSyncManagerSettings.InnerSingleton;
}

// UTaskSyncManagerSettings @ 14880a100

UTaskSyncManagerSettings * __thiscall
UE::Tick::UTaskSyncManagerSettings::UTaskSyncManagerSettings
          (UTaskSyncManagerSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UTaskSyncManagerSettings_Tick_UE__6B_;
  (this->RegisteredSyncPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredSyncPoints).ArrayNum = 0;
  (this->RegisteredSyncPoints).ArrayMax = 0;
  return this;
}

// UTaskSyncManagerSettings @ 14880a140

UTaskSyncManagerSettings * __thiscall
UE::Tick::UTaskSyncManagerSettings::UTaskSyncManagerSettings
          (UTaskSyncManagerSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UTaskSyncManagerSettings_Tick_UE__6B_;
  (this->RegisteredSyncPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredSyncPoints).ArrayNum = 0;
  (this->RegisteredSyncPoints).ArrayMax = 0;
  return this;
}

// ~UTaskSyncManagerSettings @ 14880d450

void __thiscall
UE::Tick::UTaskSyncManagerSettings::~UTaskSyncManagerSettings(UTaskSyncManagerSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTaskSyncManagerSettings_Tick_UE__6B_;
  DestructItems<UE::Tick::FSyncPointDescription,int>
            ((FSyncPointDescription *)(this->RegisteredSyncPoints).AllocatorInstance.Data,
             (this->RegisteredSyncPoints).ArrayNum);
  pFVar1 = (this->RegisteredSyncPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 148840b40

UClass * __cdecl UE::Tick::UTaskSyncManagerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTaskSyncManagerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TaskSyncManagerSettings",
               &Z_Registration_Info_UClass_UTaskSyncManagerSettings.InnerSingleton,
               StaticRegisterNativesUTaskSyncManagerSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UE::Tick::UTaskSyncManagerSettings>,
               InternalVTableHelperCtorCaller<UE::Tick::UTaskSyncManagerSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTaskSyncManagerSettings.InnerSingleton;
}

// StaticRegisterNativesUTaskSyncManagerSettings @ 14885acd0

void __cdecl UE::Tick::UTaskSyncManagerSettings::StaticRegisterNativesUTaskSyncManagerSettings(void)

{
  return;
}

