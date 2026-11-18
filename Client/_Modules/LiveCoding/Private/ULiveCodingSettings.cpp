// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveCoding
// Functions: 6

// StaticClass @ 146cc98f0

UClass * __cdecl ULiveCodingSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveCoding",L"LiveCodingSettings",
               &Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton,
               StaticRegisterNativesULiveCodingSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULiveCodingSettings>,
               InternalVTableHelperCtorCaller<ULiveCodingSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton;
}

// ULiveCodingSettings @ 146cd0c30

ULiveCodingSettings * __thiscall
ULiveCodingSettings::ULiveCodingSettings(ULiveCodingSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveCodingSettings__6B_;
  (this->PreloadNamedModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreloadNamedModules).ArrayNum = 0;
  (this->PreloadNamedModules).ArrayMax = 0;
  return this;
}

// ULiveCodingSettings @ 146cd0c70

ULiveCodingSettings * __thiscall
ULiveCodingSettings::ULiveCodingSettings(ULiveCodingSettings *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FName *pFVar4;
  FProperty *pFVar5;
  ULiveCodingSettings *pUVar6;
  FProperty *pFVar7;
  FName local_res8;
  FName local_res18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveCodingSettings__6B_;
  (this->PreloadNamedModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreloadNamedModules).ArrayNum = 0;
  (this->PreloadNamedModules).ArrayMax = 0;
  pUVar3 = GetPrivateStaticClass();
  pFVar4 = ::FName::FName(&local_res8,"bPreloadEngineModules");
  pFVar5 = UStruct::FindPropertyByName((UStruct *)pUVar3,*pFVar4);
  if (pFVar5 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EngineModulesProperty != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingSettings.cpp"
                       ,0xb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (ULiveCodingSettings *)(*pcVar1)();
      return pUVar6;
    }
  }
  pUVar3 = GetPrivateStaticClass();
  pFVar4 = ::FName::FName(&local_res18,"bPreloadEnginePluginModules");
  pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar3,*pFVar4);
  if (pFVar7 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnginePluginModulesProperty != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Windows\\LiveCoding\\Private\\LiveCodingSettings.cpp"
                       ,0xe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (ULiveCodingSettings *)(*pcVar1)();
      return pUVar6;
    }
  }
  bVar2 = FApp::IsEngineInstalled();
  if (bVar2) {
    pFVar5->PropertyFlags = pFVar5->PropertyFlags & ~CPF_Edit;
    pFVar7->PropertyFlags = pFVar7->PropertyFlags & ~CPF_Edit;
  }
  this->bPreloadProjectModules = true;
  this->bPreloadProjectPluginModules = true;
  return this;
}

// ~ULiveCodingSettings @ 146cd1630

void __thiscall ULiveCodingSettings::~ULiveCodingSettings(ULiveCodingSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveCodingSettings__6B_;
  pFVar1 = (this->PreloadNamedModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146cdbbf0

UClass * __cdecl ULiveCodingSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveCoding",L"LiveCodingSettings",
               &Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton,
               StaticRegisterNativesULiveCodingSettings,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULiveCodingSettings>,
               InternalVTableHelperCtorCaller<ULiveCodingSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveCodingSettings.InnerSingleton;
}

// StaticRegisterNativesULiveCodingSettings @ 146ce58a0

void __cdecl ULiveCodingSettings::StaticRegisterNativesULiveCodingSettings(void)

{
  return;
}

