// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 8

// StaticClass @ 146b36b00

UClass * __cdecl ULocalizationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Localization",L"LocalizationSettings",
               &Z_Registration_Info_UClass_ULocalizationSettings.InnerSingleton,
               StaticRegisterNativesULocalizationSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<ULocalizationSettings>,
               InternalVTableHelperCtorCaller<ULocalizationSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizationSettings.InnerSingleton;
}

// ULocalizationSettings @ 146b439e0

ULocalizationSettings * __thiscall
ULocalizationSettings::ULocalizationSettings(ULocalizationSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocalizationSettings__6B_;
  (this->EngineTargetSet).field0_0x0.DebugPtr = (ULocalizationTargetSet *)0x0;
  (this->EngineTargetsSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineTargetsSettings).ArrayNum = 0;
  (this->EngineTargetsSettings).ArrayMax = 0;
  (this->GameTargetSet).field0_0x0.DebugPtr = (ULocalizationTargetSet *)0x0;
  (this->GameTargetsSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameTargetsSettings).ArrayNum = 0;
  (this->GameTargetsSettings).ArrayMax = 0;
  return this;
}

// ULocalizationSettings @ 146b43a30

ULocalizationSettings * __thiscall
ULocalizationSettings::ULocalizationSettings
          (ULocalizationSettings *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  ULocalizationTargetSet *pUVar4;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocalizationSettings__6B_;
  pFVar2 = ::FName::FName(&local_res8,L"EngineLocalizationTargetSet");
  FVar1 = *pFVar2;
  pUVar3 = ULocalizationTargetSet::GetPrivateStaticClass();
  pUVar4 = (ULocalizationTargetSet *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  (this->EngineTargetSet).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (ULocalizationTargetSet *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->EngineTargetsSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineTargetsSettings).ArrayNum = 0;
  (this->EngineTargetsSettings).ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,L"ProjectLocalizationTargetSet");
  FVar1 = *pFVar2;
  pUVar3 = ULocalizationTargetSet::GetPrivateStaticClass();
  pUVar4 = (ULocalizationTargetSet *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  (this->GameTargetSet).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (ULocalizationTargetSet *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->GameTargetsSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameTargetsSettings).ArrayNum = 0;
  (this->GameTargetsSettings).ArrayMax = 0;
  return this;
}

// ~ULocalizationSettings @ 146b44cd0

void __thiscall ULocalizationSettings::~ULocalizationSettings(ULocalizationSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULocalizationSettings__6B_;
  DestructItems<FLocalizationTargetSettings,int>
            ((FLocalizationTargetSettings *)(this->GameTargetsSettings).AllocatorInstance.Data,
             (this->GameTargetsSettings).ArrayNum);
  pFVar1 = (this->GameTargetsSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FLocalizationTargetSettings,int>
            ((FLocalizationTargetSettings *)(this->EngineTargetsSettings).AllocatorInstance.Data,
             (this->EngineTargetsSettings).ArrayNum);
  pFVar1 = (this->EngineTargetsSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetEngineTargetSet @ 146b73080

ULocalizationTargetSet * __cdecl ULocalizationSettings::GetEngineTargetSet(void)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this;
  ULocalizationTargetSet *pUVar4;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalizationSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSettings.cpp"
                       ,0x52,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (ULocalizationTargetSet *)(*pcVar2)();
      return pUVar4;
    }
  }
  return *(ULocalizationTargetSet **)(pUVar1 + 1);
}

// GetGameTargetSet @ 146b73c30

ULocalizationTargetSet * __cdecl ULocalizationSettings::GetGameTargetSet(void)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this;
  ULocalizationTargetSet *pUVar4;
  
  this = StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalizationSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSettings.cpp"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (ULocalizationTargetSet *)(*pcVar2)();
      return pUVar4;
    }
  }
  return *(ULocalizationTargetSet **)&pUVar1[1].field_0x18;
}

// GetPrivateStaticClass @ 146b764c0

UClass * __cdecl ULocalizationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalizationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Localization",L"LocalizationSettings",
               &Z_Registration_Info_UClass_ULocalizationSettings.InnerSingleton,
               StaticRegisterNativesULocalizationSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<ULocalizationSettings>,
               InternalVTableHelperCtorCaller<ULocalizationSettings>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalizationSettings.InnerSingleton;
}

// StaticRegisterNativesULocalizationSettings @ 146b894e0

void __cdecl ULocalizationSettings::StaticRegisterNativesULocalizationSettings(void)

{
  return;
}

