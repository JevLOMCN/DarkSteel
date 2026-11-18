// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 170

// StaticClass @ 147d42050

UClass * __cdecl UBlueprintPathsLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintPathsLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintPathsLibrary",
               &Z_Registration_Info_UClass_UBlueprintPathsLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintPathsLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintPathsLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintPathsLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintPathsLibrary.InnerSingleton;
}

// UBlueprintPathsLibrary @ 147d79690

UBlueprintPathsLibrary * __thiscall
UBlueprintPathsLibrary::UBlueprintPathsLibrary(UBlueprintPathsLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintPathsLibrary__6B_;
  return this;
}

// UBlueprintPathsLibrary @ 147d796c0

UBlueprintPathsLibrary * __thiscall
UBlueprintPathsLibrary::UBlueprintPathsLibrary
          (UBlueprintPathsLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintPathsLibrary__6B_;
  return this;
}

// ~UBlueprintPathsLibrary @ 147d7b970

void __thiscall UBlueprintPathsLibrary::~UBlueprintPathsLibrary(UBlueprintPathsLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintPathsLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AutomationDir @ 147d85a60

FString * __cdecl UBlueprintPathsLibrary::AutomationDir(FString *__return_storage_ptr__)

{
  FPaths::AutomationDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AutomationLogDir @ 147d85a80

FString * __cdecl UBlueprintPathsLibrary::AutomationLogDir(FString *__return_storage_ptr__)

{
  FPaths::AutomationLogDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AutomationTransientDir @ 147d85aa0

FString * __cdecl UBlueprintPathsLibrary::AutomationTransientDir(FString *__return_storage_ptr__)

{
  FPaths::AutomationTransientDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// BugItDir @ 147d88970

FString * __cdecl UBlueprintPathsLibrary::BugItDir(FString *__return_storage_ptr__)

{
  FPaths::BugItDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ChangeExtension @ 147d8e340

FString * __cdecl
UBlueprintPathsLibrary::ChangeExtension
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FPaths::ChangeExtension(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// CloudDir @ 147d8ebe0

FString * __cdecl UBlueprintPathsLibrary::CloudDir(FString *__return_storage_ptr__)

{
  FPaths::CloudDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CollapseRelativeDirectories @ 147d8ec00

bool __cdecl UBlueprintPathsLibrary::CollapseRelativeDirectories(FString *param_1,FString *param_2)

{
  bool bVar1;
  
  ::FString::operator=(param_2,param_1);
  bVar1 = FPaths::CollapseRelativeDirectories(param_2,false);
  return bVar1;
}

// Combine @ 147d8eed0

FString * __cdecl
UBlueprintPathsLibrary::Combine
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  FString local_38;
  TStringView<wchar_t> local_28;
  undefined8 local_18;
  int local_10;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1->ArrayNum == 1) {
    ::FString::operator=(__return_storage_ptr__,(FString *)(param_1->AllocatorInstance).Data);
  }
  else if (1 < param_1->ArrayNum) {
    ::FString::operator=(__return_storage_ptr__,(FString *)(param_1->AllocatorInstance).Data);
    iVar6 = param_1->ArrayNum;
    uVar7 = 1;
    if (1 < iVar6) {
      lVar8 = 0x10;
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
        local_28.DataPtr = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar6 = (__return_storage_ptr__->Data).ArrayNum;
        local_18 = *(undefined8 *)(pFVar1 + lVar8);
        local_28.Size = iVar6 - 1;
        if (iVar6 == 0) {
          local_28.Size = 0;
        }
        iVar6 = *(int *)(pFVar1 + lVar8 + 8);
        local_10 = iVar6 + -1;
        if (iVar6 == 0) {
          local_10 = 0;
        }
        FPaths::CombineInternal(&local_38,&local_28,2);
        if (__return_storage_ptr__ != &local_38) {
          pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_38.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        iVar6 = param_1->ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar7 < iVar6);
    }
  }
  return __return_storage_ptr__;
}

// ConvertFromSandboxPath @ 147d92980

FString * __cdecl
UBlueprintPathsLibrary::ConvertFromSandboxPath
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  if ((param_2->Data).ArrayNum != 0) {
    FPaths::ConvertFromSandboxPath
              (__return_storage_ptr__,param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  FPaths::ConvertFromSandboxPath(__return_storage_ptr__,param_1,L"");
  return __return_storage_ptr__;
}

// ConvertRelativePathToFull @ 147d929c0

FString * __cdecl
UBlueprintPathsLibrary::ConvertRelativePathToFull
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    FPaths::ConvertRelativePathToFull(__return_storage_ptr__,param_2,param_1);
    return __return_storage_ptr__;
  }
  FPaths::ConvertRelativePathToFull(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ConvertToSandboxPath @ 147d92bd0

FString * __cdecl
UBlueprintPathsLibrary::ConvertToSandboxPath
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  if ((param_2->Data).ArrayNum != 0) {
    FPaths::ConvertToSandboxPath
              (__return_storage_ptr__,param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  FPaths::ConvertToSandboxPath(__return_storage_ptr__,param_1,L"");
  return __return_storage_ptr__;
}

// CreateTempFilename @ 147d94a40

FString * __cdecl
UBlueprintPathsLibrary::CreateTempFilename
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FString *param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar1 = L"";
  if ((param_3->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FPaths::CreateTempFilename(__return_storage_ptr__,pwVar1,pwVar2,pwVar3);
  return __return_storage_ptr__;
}

// DiffDir @ 147d95150

FString * __cdecl UBlueprintPathsLibrary::DiffDir(FString *__return_storage_ptr__)

{
  FPaths::DiffDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DirectoryExists @ 147d95170

bool __cdecl UBlueprintPathsLibrary::DirectoryExists(FString *param_1)

{
  undefined1 uVar1;
  IFileManager *pIVar2;
  
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141934946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,(param_1->Data).AllocatorInstance.Data);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141934958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,L"");
  return (bool)uVar1;
}

// EngineConfigDir @ 147d99c30

FString * __cdecl UBlueprintPathsLibrary::EngineConfigDir(FString *__return_storage_ptr__)

{
  FPaths::EngineConfigDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EngineContentDir @ 147d99c50

FString * __cdecl UBlueprintPathsLibrary::EngineContentDir(FString *__return_storage_ptr__)

{
  FPaths::EngineContentDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EngineDir @ 147d99c70

FString * __cdecl UBlueprintPathsLibrary::EngineDir(FString *__return_storage_ptr__)

{
  FPaths::EngineDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EngineIntermediateDir @ 147d99c90

FString * __cdecl UBlueprintPathsLibrary::EngineIntermediateDir(FString *__return_storage_ptr__)

{
  FPaths::EngineIntermediateDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EnginePluginsDir @ 147d99cb0

FString * __cdecl UBlueprintPathsLibrary::EnginePluginsDir(FString *__return_storage_ptr__)

{
  FPaths::EnginePluginsDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EngineSavedDir @ 147d99cd0

FString * __cdecl UBlueprintPathsLibrary::EngineSavedDir(FString *__return_storage_ptr__)

{
  FPaths::EngineSavedDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EngineSourceDir @ 147d99cf0

FString * __cdecl UBlueprintPathsLibrary::EngineSourceDir(FString *__return_storage_ptr__)

{
  FPaths::EngineSourceDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EngineUserDir @ 147d99d10

FString * __cdecl UBlueprintPathsLibrary::EngineUserDir(FString *__return_storage_ptr__)

{
  FPaths::EngineUserDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EngineVersionAgnosticUserDir @ 147d99d30

FString * __cdecl
UBlueprintPathsLibrary::EngineVersionAgnosticUserDir(FString *__return_storage_ptr__)

{
  FPaths::EngineVersionAgnosticUserDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EnterpriseDir @ 147d99d50

FString * __cdecl UBlueprintPathsLibrary::EnterpriseDir(FString *__return_storage_ptr__)

{
  FPaths::EnterpriseDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EnterpriseFeaturePackDir @ 147d99d70

FString * __cdecl UBlueprintPathsLibrary::EnterpriseFeaturePackDir(FString *__return_storage_ptr__)

{
  FPaths::EnterpriseFeaturePackDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// EnterprisePluginsDir @ 147d99d90

FString * __cdecl UBlueprintPathsLibrary::EnterprisePluginsDir(FString *__return_storage_ptr__)

{
  FPaths::EnterprisePluginsDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FeaturePackDir @ 147d9c200

FString * __cdecl UBlueprintPathsLibrary::FeaturePackDir(FString *__return_storage_ptr__)

{
  FPaths::FeaturePackDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FileExists @ 147d9c220

bool __cdecl UBlueprintPathsLibrary::FileExists(FString *param_1)

{
  undefined1 uVar1;
  IFileManager *pIVar2;
  
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014193aad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,(param_1->Data).AllocatorInstance.Data);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014193aae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,L"");
  return (bool)uVar1;
}

// GameAgnosticSavedDir @ 147d9fa50

FString * __cdecl UBlueprintPathsLibrary::GameAgnosticSavedDir(FString *__return_storage_ptr__)

{
  FPaths::GameAgnosticSavedDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GameDevelopersDir @ 147d9fa70

FString * __cdecl UBlueprintPathsLibrary::GameDevelopersDir(FString *__return_storage_ptr__)

{
  FPaths::GameDevelopersDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GameSourceDir @ 147d9fa90

FString * __cdecl UBlueprintPathsLibrary::GameSourceDir(FString *__return_storage_ptr__)

{
  FPaths::GameSourceDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GameUserDeveloperDir @ 147d9fab0

FString * __cdecl UBlueprintPathsLibrary::GameUserDeveloperDir(FString *__return_storage_ptr__)

{
  FPaths::GameUserDeveloperDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GeneratedConfigDir @ 147d9fad0

FString * __cdecl UBlueprintPathsLibrary::GeneratedConfigDir(FString *__return_storage_ptr__)

{
  FPaths::GeneratedConfigDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetBaseFilename @ 147da43a0

FString * __cdecl
UBlueprintPathsLibrary::GetBaseFilename
          (FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FPaths::GetBaseFilename(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetCleanFilename @ 147da4aa0

FString * __cdecl
UBlueprintPathsLibrary::GetCleanFilename(FString *__return_storage_ptr__,FString *param_1)

{
  FPaths::GetCleanFilename(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetEditorLocalizationPaths @ 147da58c0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UBlueprintPathsLibrary::GetEditorLocalizationPaths(void)

{
  FStaticData *pFVar1;
  FString FStack_18;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar1->bEditorLocalizationPathsInitialized != false) {
    return &pFVar1->EditorLocalizationPaths;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    ::FString::FString(&FStack_18,L"../../../Engine/Content/Localization/Editor");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&pFVar1->EditorLocalizationPaths,&FStack_18);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      return &pFVar1->EditorLocalizationPaths;
    }
  }
  else {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"LocalizationPaths",&pFVar1->EditorLocalizationPaths
               ,&GEditorIni);
    if (((pFVar1->EditorLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar1->bEditorLocalizationPathsInitialized = true;
  }
  return &pFVar1->EditorLocalizationPaths;
}

// GetEngineLocalizationPaths @ 147da59a0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UBlueprintPathsLibrary::GetEngineLocalizationPaths(void)

{
  FStaticData *pFVar1;
  FString FStack_18;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar1->bEngineLocalizationPathsInitialized != false) {
    return &pFVar1->EngineLocalizationPaths;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    ::FString::FString(&FStack_18,L"../../../Engine/Content/Localization/Engine");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&pFVar1->EngineLocalizationPaths,&FStack_18);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      return &pFVar1->EngineLocalizationPaths;
    }
  }
  else {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"LocalizationPaths",&pFVar1->EngineLocalizationPaths
               ,&GEngineIni);
    if (((pFVar1->EngineLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar1->bEngineLocalizationPathsInitialized = true;
  }
  return &pFVar1->EngineLocalizationPaths;
}

// GetExtension @ 147da5b60

FString * __cdecl
UBlueprintPathsLibrary::GetExtension(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FPaths::GetExtension(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetGameLocalizationPaths @ 147da5c50

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UBlueprintPathsLibrary::GetGameLocalizationPaths(void)

{
  FStaticData *pFVar1;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (((pFVar1->bGameLocalizationPathsInitialized == false) && (GConfig != (FConfigCacheIni *)0x0))
     && (GConfig->bIsReadyForUse != false)) {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"LocalizationPaths",&pFVar1->GameLocalizationPaths,
               &GGameIni);
    if (((pFVar1->GameLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogPaths._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaths);
    }
    pFVar1->bGameLocalizationPathsInitialized = true;
    return &pFVar1->GameLocalizationPaths;
  }
  return &pFVar1->GameLocalizationPaths;
}

// GetInvalidFileSystemChars @ 147da6350

FString * __cdecl UBlueprintPathsLibrary::GetInvalidFileSystemChars(FString *__return_storage_ptr__)

{
  FPaths::GetInvalidFileSystemChars(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPath @ 147da7020

FString * __cdecl UBlueprintPathsLibrary::GetPath(FString *__return_storage_ptr__,FString *param_1)

{
  FPaths::GetPath(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147da7960

UClass * __cdecl UBlueprintPathsLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintPathsLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintPathsLibrary",
               &Z_Registration_Info_UClass_UBlueprintPathsLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintPathsLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintPathsLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintPathsLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintPathsLibrary.InnerSingleton;
}

// GetProjectFilePath @ 147da87e0

FString * __cdecl UBlueprintPathsLibrary::GetProjectFilePath(FString *__return_storage_ptr__)

{
  FPaths::GetProjectFilePath(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPropertyNameLocalizationPaths @ 147da8830

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UBlueprintPathsLibrary::GetPropertyNameLocalizationPaths(void)

{
  FStaticData *pFVar1;
  FString FStack_18;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar1->bPropertyNameLocalizationPathsInitialized != false) {
    return &pFVar1->PropertyNameLocalizationPaths;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    ::FString::FString(&FStack_18,L"../../../Engine/Content/Localization/PropertyNames");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&pFVar1->PropertyNameLocalizationPaths,&FStack_18);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      return &pFVar1->PropertyNameLocalizationPaths;
    }
  }
  else {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"PropertyNameLocalizationPaths",
               &pFVar1->PropertyNameLocalizationPaths,&GEditorIni);
    if (((pFVar1->PropertyNameLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar1->bPropertyNameLocalizationPathsInitialized = true;
  }
  return &pFVar1->PropertyNameLocalizationPaths;
}

// GetRelativePathToRoot @ 147da8990

FString * __cdecl UBlueprintPathsLibrary::GetRelativePathToRoot(void)

{
  int iVar1;
  bool bVar2;
  FStaticData *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FString FStack_28;
  FString FStack_18;
  
  pFVar3 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar3->bRelativePathToRootInitialized == false) {
    pwVar4 = FGenericPlatformMisc::RootDir();
    ::FString::FString(&FStack_18,pwVar4);
    pwVar4 = FWindowsPlatformProcess::BaseDir();
    ::FString::FString(&FStack_28,pwVar4);
    iVar6 = FStack_18.Data.ArrayNum + -1;
    if (FStack_18.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&pFVar3->RelativePathToRoot,(wchar_t *)FStack_18.Data.AllocatorInstance.Data,iVar6);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (FStack_28.Data.ArrayNum != 0) {
      FVar5.Data = FStack_28.Data.AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo(&pFVar3->RelativePathToRoot,(wchar_t *)FVar5.Data);
    iVar1 = (pFVar3->RelativePathToRoot).Data.ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      bVar2 = ::FString::EndsWith(&pFVar3->RelativePathToRoot,L"/",1,CaseSensitive);
      if (!bVar2) {
        bVar2 = ::FString::EndsWith(&pFVar3->RelativePathToRoot,L"\\",1,CaseSensitive);
        if (!bVar2) {
          ::FString::AppendChars(&pFVar3->RelativePathToRoot,L"/",1);
        }
      }
    }
    pFVar3->bRelativePathToRootInitialized = true;
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    return &pFVar3->RelativePathToRoot;
  }
  return &pFVar3->RelativePathToRoot;
}

// GetRestrictedFolderNames @ 147da8b20

/* WARNING: Removing unreachable block (ram,0x00014194b17e) */
/* WARNING: Removing unreachable block (ram,0x00014194afd8) */
/* WARNING: Removing unreachable block (ram,0x00014194af05) */
/* WARNING: Removing unreachable block (ram,0x00014194b0ab) */
/* WARNING: Removing unreachable block (ram,0x00014194b251) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UBlueprintPathsLibrary::GetRestrictedFolderNames(void)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FStaticData *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  undefined1 auStackX_8 [8];
  FName FStackX_10;
  FStaticData *pFStackX_18;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  
  pFVar6 = TLazySingleton<FPaths::FStaticData>::Get();
  pTVar7 = &pFVar6->RestrictedFolderNames;
  if (pFVar6->bRestrictedFolderNamesInitialized == false) {
    pFStackX_18 = pFVar6;
    ::FString::FString(&FStack_98,L"LimitedAccess");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&FStack_98) &&
        ((FScriptContainerElement *)&FStack_98 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = FStack_98.Data.AllocatorInstance.Data;
    *(int *)(pFVar10 + 8) = FStack_98.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = FStack_98.Data.ArrayMax;
    FStack_98.Data.ArrayNum = 0;
    FStack_98.Data.ArrayMax = 0;
    FStack_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&FStack_88,L"NotForLicensees");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&FStack_88) &&
        ((FScriptContainerElement *)&FStack_88 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = FStack_88.Data.AllocatorInstance.Data;
    *(int *)(pFVar10 + 8) = FStack_88.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = FStack_88.Data.ArrayMax;
    FStack_88.Data.ArrayNum = 0;
    FStack_88.Data.ArrayMax = 0;
    FStack_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&FStack_78,L"NoRedist");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&FStack_78) &&
        ((FScriptContainerElement *)&FStack_78 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = FStack_78.Data.AllocatorInstance.Data;
    *(int *)(pFVar10 + 8) = FStack_78.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = FStack_78.Data.ArrayMax;
    FStack_78.Data.ArrayNum = 0;
    FStack_78.Data.ArrayMax = 0;
    FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&FStack_68,L"CarefullyRedist");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&FStack_68) &&
        ((FScriptContainerElement *)&FStack_68 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = FStack_68.Data.AllocatorInstance.Data;
    *(int *)(pFVar10 + 8) = FStack_68.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = FStack_68.Data.ArrayMax;
    FStack_68.Data.ArrayNum = 0;
    FStack_68.Data.ArrayMax = 0;
    FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&FStack_58,L"EpicInternal");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&FStack_58) &&
        ((FScriptContainerElement *)&FStack_58 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = FStack_58.Data.AllocatorInstance.Data;
    FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar10 + 8) = FStack_58.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = FStack_58.Data.ArrayMax;
    FStack_58.Data.ArrayNum = 0;
    FStack_58.Data.ArrayMax = 0;
    pTVar8 = FDataDrivenPlatformInfoRegistry::GetConfidentialPlatforms();
    pFVar11 = (FName *)(pTVar8->AllocatorInstance).Data;
    iVar4 = pTVar8->ArrayNum;
    pFVar1 = pFVar11 + iVar4;
    while( true ) {
      if (pTVar8->ArrayNum != iVar4) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (pFVar11 == pFVar1) break;
      FStackX_10 = *pFVar11;
      pFVar9 = (FScriptContainerElement *)::FName::ToString(&FStackX_10,&FStack_48);
      pFVar10 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar9) &&
          (pFVar9 < pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar5 = (pFVar6->RestrictedFolderNames).ArrayNum;
      if (iVar5 == (pFVar6->RestrictedFolderNames).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar7->AllocatorInstance,
                           &(pFVar6->RestrictedFolderNames).ArrayMax);
      }
      (pFVar6->RestrictedFolderNames).ArrayNum = iVar5 + 1;
      pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar9;
      *(undefined8 *)pFVar9 = 0;
      *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar9 + 8);
      *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
      *(undefined8 *)(pFVar9 + 8) = 0;
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
      pFVar11 = pFVar11 + 1;
    }
    pFStackX_18->bRestrictedFolderNamesInitialized = true;
  }
  return pTVar7;
}

// GetToolTipLocalizationPaths @ 147daa050

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UBlueprintPathsLibrary::GetToolTipLocalizationPaths(void)

{
  FStaticData *pFVar1;
  FString FStack_18;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar1->bToolTipLocalizationPathsInitialized != false) {
    return &pFVar1->ToolTipLocalizationPaths;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    ::FString::FString(&FStack_18,L"../../../Engine/Content/Localization/ToolTips");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&pFVar1->ToolTipLocalizationPaths,&FStack_18);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      return &pFVar1->ToolTipLocalizationPaths;
    }
  }
  else {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"ToolTipLocalizationPaths",
               &pFVar1->ToolTipLocalizationPaths,&GEditorIni);
    if (((pFVar1->ToolTipLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar1->bToolTipLocalizationPathsInitialized = true;
  }
  return &pFVar1->ToolTipLocalizationPaths;
}

// HasProjectPersistentDownloadDir @ 147dab050

bool __cdecl UBlueprintPathsLibrary::HasProjectPersistentDownloadDir(void)

{
  return true;
}

// IsDrive @ 147dad490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl UBlueprintPathsLibrary::IsDrive(FString *param_1)

{
  ushort uVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  FStack_48.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar10 = (longlong)FStack_48.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  iVar11 = 0;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FStack_48.Data.ArrayNum == 0) {
    FStack_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_48.Data.ArrayNum,0,(ForAnyElementType *)&FStack_48,FStack_48.Data.ArrayNum
               ,&FStack_48.Data.ArrayMax);
    memcpy(FStack_48.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  pFVar6 = ::FString::Replace(&FStack_48,&FStack_28,L"/",L"\\",CaseSensitive);
  if (&FStack_48 != pFVar6) {
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    FStack_48.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_48.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    FStack_48.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (FStack_48.Data.ArrayNum != 0) {
    FVar8.Data = FStack_48.Data.AllocatorInstance.Data;
  }
  uVar1 = *(ushort *)FVar8.Data;
  if (((uVar1 == 0) ||
      (((((ushort)(uVar1 - (-(ushort)(uVar1 - 0x61 < 0x1a) & 0x20)) !=
          (ushort)((-(ushort)(uVar1 - 0x41 < 0x1a) & 0x20) + uVar1) &&
         (*(short *)(FVar8.Data + 2) == 0x3a)) && (*(short *)(FVar8.Data + 4) == 0)) ||
       ((iVar3 = wcscmp((wchar_t *)FVar8.Data,L"\\"), iVar3 == 0 ||
        (iVar3 = wcscmp((wchar_t *)FVar8.Data,L"\\\\"), iVar3 == 0)))))) ||
     ((uVar1 == 0x5c &&
      ((*(short *)(FVar8.Data + 2) == 0x5c &&
       (pwVar7 = wcschr((wchar_t *)(FVar8.Data + 4),L'\\'), pwVar7 == (wchar_t *)0x0)))))) {
    bVar2 = true;
    goto LAB_141951845;
  }
  ::FString::FString(&FStack_38,(wchar_t *)FVar8.Data);
  iVar3 = ::FString::Find(&FStack_38,L"\\",1,CaseSensitive,FromEnd,-1);
  iVar9 = FStack_38.Data.ArrayNum + -2;
  if (FStack_38.Data.ArrayNum == 0) {
    iVar9 = -1;
  }
  if (iVar3 != iVar9) {
    ::FString::AppendChars(&FStack_38,L"\\",1);
  }
  ::FString::FString(&FStack_58,L"");
  iVar3 = ::FString::Find(&FStack_38,L":\\",2,CaseSensitive,FromStart,-1);
  iVar9 = 0;
  if (iVar3 == -1) {
    bVar2 = ::FString::StartsWith(&FStack_38,L"\\\\",2,CaseSensitive);
    if (bVar2) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (FStack_38.Data.ArrayNum != 0) {
        FVar8.Data = FStack_38.Data.AllocatorInstance.Data;
      }
      iVar4 = FStack_38.Data.ArrayNum + -1;
      iVar3 = FStack_38.Data.ArrayNum + -3;
      if (FStack_38.Data.ArrayNum == 0) {
        iVar4 = iVar11;
        iVar3 = -2;
      }
      iVar5 = iVar4;
      if (iVar3 < iVar4) {
        iVar5 = iVar3;
      }
      iVar3 = iVar9;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      ::FString::FString(&FStack_28,
                         (wchar_t *)(FVar8.Data + ((longlong)iVar4 - (longlong)iVar3) * 2));
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
      }
      FStack_58.Data.AllocatorInstance.Data = FStack_28.Data.AllocatorInstance.Data;
      FStack_58.Data.ArrayNum = FStack_28.Data.ArrayNum;
      FStack_58.Data.ArrayMax = FStack_28.Data.ArrayMax;
      iVar3 = ::FString::Find(&FStack_58,L"\\",1,CaseSensitive,FromStart,-1);
      if (iVar3 == -1) {
        ::FString::Reset(&FStack_58,0);
      }
      else {
        iVar4 = FStack_58.Data.ArrayNum + -1;
        if (FStack_58.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        iVar5 = (iVar4 - iVar3) + -1;
        iVar3 = iVar4;
        if (iVar5 < iVar4) {
          iVar3 = iVar5;
        }
        iVar5 = iVar9;
        if (0 < iVar3) {
          iVar5 = iVar3;
        }
        ::FString::RemoveAt(&FStack_58,0,iVar4 - iVar5,No);
      }
    }
  }
  else {
    iVar4 = FStack_38.Data.ArrayNum + -1;
    if (FStack_38.Data.ArrayNum == 0) {
      iVar4 = iVar11;
    }
    iVar3 = (iVar4 - iVar3) + -2;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (FStack_38.Data.ArrayNum != 0) {
      FVar8.Data = FStack_38.Data.AllocatorInstance.Data;
    }
    iVar5 = iVar4;
    if (iVar3 < iVar4) {
      iVar5 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    ::FString::FString(&FStack_28,(wchar_t *)(FVar8.Data + ((longlong)iVar4 - (longlong)iVar3) * 2))
    ;
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    FStack_58.Data.AllocatorInstance.Data = FStack_28.Data.AllocatorInstance.Data;
    FStack_58.Data.ArrayNum = FStack_28.Data.ArrayNum;
    FStack_58.Data.ArrayMax = FStack_28.Data.ArrayMax;
  }
  iVar3 = FStack_58.Data.ArrayNum + -1;
  if (FStack_58.Data.ArrayNum == 0) {
    iVar3 = iVar9;
  }
  if (iVar3 < 1) {
LAB_141951823:
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    ::FString::ReplaceInline(&FStack_58,L"\\\\",L"\\",CaseSensitive);
    iVar3 = ::FString::Find(&FStack_58,L"\\",1,CaseSensitive,FromStart,-1);
    if (iVar3 != -1) {
      do {
        iVar4 = FStack_58.Data.ArrayNum + -1;
        if (FStack_58.Data.ArrayNum == 0) {
          iVar4 = iVar9;
        }
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
        }
        iVar5 = iVar9;
        if (0 < iVar4) {
          iVar5 = iVar4;
        }
        FVar8.Data = (FScriptContainerElement *)L"";
        if (FStack_58.Data.ArrayNum != 0) {
          FVar8.Data = FStack_58.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&FStack_28,(wchar_t *)FVar8.Data,iVar5);
        FVar8.Data = (FScriptContainerElement *)L"";
        if (FStack_28.Data.ArrayNum != 0) {
          FVar8.Data = FStack_28.Data.AllocatorInstance.Data;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"..");
        iVar5 = -1;
        if (iVar4 != 0) {
          iVar5 = 1;
        }
        iVar11 = iVar5 + iVar11;
        iVar4 = FStack_58.Data.ArrayNum + -1;
        if (FStack_58.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        iVar5 = (iVar4 - iVar3) + -1;
        iVar3 = iVar4;
        if (iVar5 < iVar4) {
          iVar3 = iVar5;
        }
        iVar5 = iVar9;
        if (0 < iVar3) {
          iVar5 = iVar3;
        }
        ::FString::RemoveAt(&FStack_58,0,iVar4 - iVar5,No);
        iVar3 = ::FString::Find(&FStack_58,L"\\",1,CaseSensitive,FromStart,-1);
        if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
        }
      } while (iVar3 != -1);
      if (0 < iVar11) goto LAB_141951823;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
LAB_141951845:
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsProjectFilePathSet @ 147dadf10

bool __cdecl UBlueprintPathsLibrary::IsProjectFilePathSet(void)

{
  int iVar1;
  FStaticData *lpCriticalSection;
  
  lpCriticalSection = TLazySingleton<FPaths::FStaticData>::Get();
  if (lpCriticalSection != (FStaticData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (lpCriticalSection->GameProjectFilePath).Data.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsRelative @ 147dae040

bool __cdecl UBlueprintPathsLibrary::IsRelative(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (param_1->Data).ArrayNum;
  uVar6 = iVar5 - 1;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    if (((int)uVar6 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(short *)(param_1->Data).AllocatorInstance.Data == 0x2f) {
      return false;
    }
    if (1 < uVar6) {
      iVar1 = (param_1->Data).ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      if ((iVar5 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(short *)(param_1->Data).AllocatorInstance.Data == 0x5c) {
        iVar1 = (param_1->Data).ArrayNum;
        iVar5 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar5 = 0;
        }
        if ((iVar5 < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(short *)((param_1->Data).AllocatorInstance.Data + 2) == 0x5c) {
          return false;
        }
      }
      iVar1 = (param_1->Data).ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      if ((iVar5 < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + 2) == 0x3a) {
        iVar1 = (param_1->Data).ArrayNum;
        iVar5 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar5 = 0;
        }
        if ((iVar5 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar5 = iswalpha(*(wint_t *)(param_1->Data).AllocatorInstance.Data);
        if (iVar5 != 0) {
          return false;
        }
      }
    }
  }
  return true;
}

// IsRestrictedPath @ 147dae050

/* WARNING: Removing unreachable block (ram,0x000141952c2a) */

bool __cdecl UBlueprintPathsLibrary::IsRestrictedPath(FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  FStaticData *pFVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  size_t sVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  wchar_t *_Str;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TStack_78;
  FString FStack_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> TStack_58;
  FString FStack_48;
  
  pFVar11 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar11->bRestrictedSlashedFolderNamesInitialized == false) {
    ::FString::FString(&FStack_48,L"/");
    pTVar12 = FPaths::GetRestrictedFolderNames();
    iVar10 = pTVar12->ArrayNum;
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    pFVar17 = pFVar16 + (longlong)iVar10 * 0x10;
    while( true ) {
      if (pTVar12->ArrayNum != iVar10) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (pFVar16 == pFVar17) break;
      pTVar2 = &pFVar11->RestrictedSlashedFolderNames;
      ::FString::ConcatFF((FString *)&TStack_58,&FStack_48,(FString *)pFVar16);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&TStack_78,&TStack_58,2 - (uint)(TStack_58.ArrayNum != 0));
      ::FString::AppendChar((FString *)&TStack_78,L'/');
      pTVar3 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar3 <= &TStack_78) &&
          (&TStack_78 < pTVar3 + (pFVar11->RestrictedSlashedFolderNames).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar9 = (pFVar11->RestrictedSlashedFolderNames).ArrayNum;
      piVar1 = &(pFVar11->RestrictedSlashedFolderNames).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar11->RestrictedSlashedFolderNames).ArrayNum = iVar9 + 1;
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = TStack_78.AllocatorInstance.Data;
      *(int *)(pFVar14 + 8) = TStack_78.ArrayNum;
      *(int *)(pFVar14 + 0xc) = TStack_78.ArrayMax;
      TStack_78.ArrayNum = 0;
      TStack_78.ArrayMax = 0;
      TStack_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_58.AllocatorInstance.Data);
      }
      pFVar16 = pFVar16 + 0x10;
    }
    pFVar11->bRestrictedSlashedFolderNamesInitialized = true;
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = (param_1->Data).AllocatorInstance.Data;
  FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar15 = (longlong)FStack_68.Data.ArrayNum;
  if (FStack_68.Data.ArrayNum == 0) {
    FStack_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_68.Data.ArrayNum,0,(ForAnyElementType *)&FStack_68,FStack_68.Data.ArrayNum
               ,&FStack_68.Data.ArrayMax);
    memcpy(FStack_68.Data.AllocatorInstance.Data,pFVar16,lVar15 * 2);
  }
  iVar10 = FStack_68.Data.ArrayNum + -1;
  if (FStack_68.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  FVar5.Data = FStack_68.Data.AllocatorInstance.Data;
  while (FVar5.Data < FStack_68.Data.AllocatorInstance.Data + (longlong)iVar10 * 2) {
    sVar8 = *(short *)FVar5.Data;
    if (sVar8 == 0x5c) {
      sVar8 = 0x2f;
    }
    *(short *)FVar5.Data = sVar8;
    FVar5.Data = FVar5.Data + 2;
  }
  ::FString::PathAppend(&FStack_68,(wchar_t *)0x0,0);
  iVar10 = (pFVar11->RestrictedSlashedFolderNames).ArrayNum;
  pFVar16 = (pFVar11->RestrictedSlashedFolderNames).AllocatorInstance.Data;
  pFVar17 = pFVar16 + (longlong)iVar10 * 0x10;
  do {
    if ((pFVar11->RestrictedSlashedFolderNames).ArrayNum != iVar10) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (pFVar16 == pFVar17) {
      bVar6 = false;
      goto LAB_141952d8c;
    }
    if (*(int *)(pFVar16 + 8) == 0) {
      _Str = L"";
LAB_141952d51:
      sVar13 = wcslen(_Str);
      iVar9 = ::FString::Find(&FStack_68,_Str,(int)sVar13,IgnoreCase,FromStart,-1);
      if (iVar9 != -1) {
        bVar6 = true;
LAB_141952d8c:
        if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
        }
        return bVar6;
      }
    }
    else {
      _Str = *(wchar_t **)pFVar16;
      if (_Str != (wchar_t *)0x0) goto LAB_141952d51;
    }
    pFVar16 = pFVar16 + 0x10;
  } while( true );
}

// IsSamePath @ 147dae190

bool __cdecl UBlueprintPathsLibrary::IsSamePath(FString *param_1,FString *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  FString FStack_28;
  FString FStack_18;
  
  FPaths::ConvertRelativePathToFull(&FStack_18,param_1);
  FPaths::ConvertRelativePathToFull(&FStack_28,param_2);
  FVar6.Data = FStack_18.Data.AllocatorInstance.Data;
  if ((FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
     (pwVar2 = wcsstr((wchar_t *)FStack_18.Data.AllocatorInstance.Data,L"//"),
     pwVar2 != (wchar_t *)0x0)) {
    iVar1 = FStack_18.Data.ArrayNum + -1;
    if (FStack_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    pwVar3 = pwVar2 + 1;
    for (pFVar4 = (FScriptContainerElement *)(pwVar2 + 2); pFVar4 < FVar6.Data + (longlong)iVar1 * 2
        ; pFVar4 = pFVar4 + 2) {
      if ((pwVar3[-1] != L'/') || (*(wchar_t *)pFVar4 != L'/')) {
        *pwVar3 = *(wchar_t *)pFVar4;
        pwVar3 = pwVar3 + 1;
      }
    }
    *pwVar3 = L'\0';
    ::FString::TrimToNullTerminator(&FStack_18);
  }
  FVar6.Data = FStack_28.Data.AllocatorInstance.Data;
  if ((FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
     (pwVar2 = wcsstr((wchar_t *)FStack_28.Data.AllocatorInstance.Data,L"//"),
     pwVar2 != (wchar_t *)0x0)) {
    iVar1 = FStack_28.Data.ArrayNum + -1;
    if (FStack_28.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    pwVar3 = pwVar2 + 1;
    for (pFVar4 = (FScriptContainerElement *)(pwVar2 + 2); pFVar4 < FVar6.Data + (longlong)iVar1 * 2
        ; pFVar4 = pFVar4 + 2) {
      if ((pwVar3[-1] != L'/') || (*(wchar_t *)pFVar4 != L'/')) {
        *pwVar3 = *(wchar_t *)pFVar4;
        pwVar3 = pwVar3 + 1;
      }
    }
    *pwVar3 = L'\0';
    ::FString::TrimToNullTerminator(&FStack_28);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (FStack_28.Data.ArrayNum != 0) {
    FVar6.Data = FStack_28.Data.AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (FStack_18.Data.ArrayNum != 0) {
    FVar5.Data = FStack_18.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return iVar1 == 0;
}

// LaunchDir @ 147db1b60

FString * __cdecl UBlueprintPathsLibrary::LaunchDir(FString *__return_storage_ptr__)

{
  FPaths::LaunchDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// MakePathRelativeTo @ 147db50a0

bool __cdecl
UBlueprintPathsLibrary::MakePathRelativeTo(FString *param_1,FString *param_2,FString *param_3)

{
  bool bVar1;
  
  ::FString::operator=(param_3,param_1);
  if ((param_2->Data).ArrayNum != 0) {
    bVar1 = FPaths::MakePathRelativeTo(param_3,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return bVar1;
  }
  bVar1 = FPaths::MakePathRelativeTo(param_3,L"");
  return bVar1;
}

// MakePlatformFilename @ 147db5210

void __cdecl UBlueprintPathsLibrary::MakePlatformFilename(FString *param_1,FString *param_2)

{
  ::FString::operator=(param_2,param_1);
  FPaths::MakePlatformFilename(param_2);
  return;
}

// MakeStandardFilename @ 147db5b80

void __cdecl UBlueprintPathsLibrary::MakeStandardFilename(FString *param_1,FString *param_2)

{
  ::FString::operator=(param_2,param_1);
  FPaths::MakeStandardFilename(param_2);
  return;
}

// MakeValidFileName @ 147db6280

FString * __cdecl
UBlueprintPathsLibrary::MakeValidFileName
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    FPaths::MakeValidFileName
              (__return_storage_ptr__,param_1,*(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  FPaths::MakeValidFileName(__return_storage_ptr__,param_1,L'\0');
  return __return_storage_ptr__;
}

// NormalizeDirectoryName @ 147db8140

void __cdecl UBlueprintPathsLibrary::NormalizeDirectoryName(FString *param_1,FString *param_2)

{
  ::FString::operator=(param_2,param_1);
  FPaths::NormalizeDirectoryName(param_2);
  return;
}

// NormalizeFilename @ 147db8170

void __cdecl UBlueprintPathsLibrary::NormalizeFilename(FString *param_1,FString *param_2)

{
  ::FString::operator=(param_2,param_1);
  FPaths::NormalizeFilename(param_2);
  return;
}

// ProfilingDir @ 147db9ca0

FString * __cdecl UBlueprintPathsLibrary::ProfilingDir(FString *__return_storage_ptr__)

{
  FPaths::ProfilingDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectConfigDir @ 147db9cc0

FString * __cdecl UBlueprintPathsLibrary::ProjectConfigDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectConfigDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectContentDir @ 147db9ce0

FString * __cdecl UBlueprintPathsLibrary::ProjectContentDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectContentDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectDir @ 147db9d00

FString * __cdecl UBlueprintPathsLibrary::ProjectDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectIntermediateDir @ 147db9d20

FString * __cdecl UBlueprintPathsLibrary::ProjectIntermediateDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectIntermediateDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectLogDir @ 147db9d40

FString * __cdecl UBlueprintPathsLibrary::ProjectLogDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectLogDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectModsDir @ 147db9d60

FString * __cdecl UBlueprintPathsLibrary::ProjectModsDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectModsDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectPersistentDownloadDir @ 147db9d80

FString * __cdecl
UBlueprintPathsLibrary::ProjectPersistentDownloadDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectPersistentDownloadDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectPluginsDir @ 147db9da0

FString * __cdecl UBlueprintPathsLibrary::ProjectPluginsDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectPluginsDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectSavedDir @ 147db9dc0

FString * __cdecl UBlueprintPathsLibrary::ProjectSavedDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = FPaths::ProjectSavedDir();
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// ProjectUserDir @ 147db9df0

FString * __cdecl UBlueprintPathsLibrary::ProjectUserDir(FString *__return_storage_ptr__)

{
  FPaths::ProjectUserDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// RemoveDuplicateSlashes @ 147dbd510

void __cdecl UBlueprintPathsLibrary::RemoveDuplicateSlashes(FString *param_1,FString *param_2)

{
  ::FString::operator=(param_2,param_1);
  FPaths::RemoveDuplicateSlashes(param_2);
  return;
}

// RootDir @ 147dbe7f0

FString * __cdecl UBlueprintPathsLibrary::RootDir(FString *__return_storage_ptr__)

{
  FPaths::RootDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SandboxesDir @ 147dbea70

FString * __cdecl UBlueprintPathsLibrary::SandboxesDir(FString *__return_storage_ptr__)

{
  FPaths::SandboxesDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ScreenShotDir @ 147dbefc0

FString * __cdecl UBlueprintPathsLibrary::ScreenShotDir(FString *__return_storage_ptr__)

{
  FPaths::ScreenShotDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetExtension @ 147dc0160

FString * __cdecl
UBlueprintPathsLibrary::SetExtension
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FPaths::SetExtension(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// SetProjectFilePath @ 147dc1020

void __cdecl UBlueprintPathsLibrary::SetProjectFilePath(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FStaticData *lpCriticalSection;
  short sVar4;
  int iVar5;
  
  lpCriticalSection = TLazySingleton<FPaths::FStaticData>::Get();
  if (lpCriticalSection != (FStaticData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::operator=(&lpCriticalSection->GameProjectFilePath,param_1);
    iVar1 = (lpCriticalSection->GameProjectFilePath).Data.ArrayNum;
    pFVar2 = (lpCriticalSection->GameProjectFilePath).Data.AllocatorInstance.Data;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    pFVar3 = pFVar2;
    while (pFVar3 < pFVar2 + (longlong)iVar5 * 2) {
      sVar4 = *(short *)pFVar3;
      if (sVar4 == 0x5c) {
        sVar4 = 0x2f;
      }
      *(short *)pFVar3 = sVar4;
      pFVar3 = pFVar3 + 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00014196ce9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ShaderWorkingDir @ 147dc2290

FString * __cdecl UBlueprintPathsLibrary::ShaderWorkingDir(FString *__return_storage_ptr__)

{
  FPaths::ShaderWorkingDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShouldSaveToUserDir @ 147dc2370

bool __cdecl UBlueprintPathsLibrary::ShouldSaveToUserDir(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString *pFVar3;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return bShouldSaveToUserDir;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) {
    return bShouldSaveToUserDir;
  }
  bVar1 = FApp::IsInstalled();
  if (!bVar1) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"SaveToUserDir");
    if (((!bVar1) && (bVar1 = FGenericPlatformProcess::ShouldSaveToUserDir(), !bVar1)) &&
       (pFVar3 = FPaths::CustomUserDirArgument(), (pFVar3->Data).ArrayNum < 2)) {
      bShouldSaveToUserDir = false;
      goto LAB_14196d903;
    }
  }
  bShouldSaveToUserDir = true;
LAB_14196d903:
  _Init_thread_footer(&::_TSS0);
  return bShouldSaveToUserDir;
}

// SourceConfigDir @ 147dc2a50

FString * __cdecl UBlueprintPathsLibrary::SourceConfigDir(FString *__return_storage_ptr__)

{
  FPaths::SourceConfigDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Split @ 147dc3ec0

void __cdecl
UBlueprintPathsLibrary::Split(FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  TStringView<wchar_t> TStack_48;
  TStringView<wchar_t> TStack_38;
  TStringView<wchar_t> TStack_28;
  TStringView<wchar_t> TStack_18;
  
  TStack_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  TStack_48.DataPtr = (wchar_t *)0x0;
  TStack_38.DataPtr = (wchar_t *)0x0;
  TStack_28.DataPtr = (wchar_t *)0x0;
  TStack_48.Size = 0;
  TStack_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    TStack_18.Size = 0;
  }
  TStack_38.Size = 0;
  TStack_28.Size = 0;
  FPathViews::Split(&TStack_18,&TStack_48,&TStack_38,&TStack_28);
  ::FString::AssignRange(param_2,TStack_48.DataPtr,TStack_48.Size);
  ::FString::AssignRange(param_3,TStack_38.DataPtr,TStack_38.Size);
  ::FString::AssignRange(param_4,TStack_28.DataPtr,TStack_28.Size);
  return;
}

// StaticRegisterNativesUBlueprintPathsLibrary @ 147dc3fe0

void __cdecl UBlueprintPathsLibrary::StaticRegisterNativesUBlueprintPathsLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x52;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintPathsLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidatePath @ 147dc8580

void __cdecl UBlueprintPathsLibrary::ValidatePath(FString *param_1,bool *param_2,FText *param_3)

{
  bool bVar1;
  
  bVar1 = FPaths::ValidatePath(param_1,param_3);
  *param_2 = bVar1;
  return;
}

// VideoCaptureDir @ 147dc8a30

FString * __cdecl UBlueprintPathsLibrary::VideoCaptureDir(FString *__return_storage_ptr__)

{
  FPaths::VideoCaptureDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// execAutomationDir @ 147dcf670

void __cdecl
UBlueprintPathsLibrary::execAutomationDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::AutomationDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAutomationLogDir @ 147dcf700

void __cdecl
UBlueprintPathsLibrary::execAutomationLogDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::AutomationLogDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execAutomationTransientDir @ 147dcf790

void __cdecl
UBlueprintPathsLibrary::execAutomationTransientDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::AutomationTransientDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execBugItDir @ 147dd7b20

void __cdecl UBlueprintPathsLibrary::execBugItDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::BugItDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execChangeExtension @ 147dde380

void __cdecl
UBlueprintPathsLibrary::execChangeExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ChangeExtension(&local_38,&local_18,&local_28);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execCloudDir @ 147ddf470

void __cdecl UBlueprintPathsLibrary::execCloudDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::CloudDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execCollapseRelativeDirectories @ 147ddf500

void __cdecl
UBlueprintPathsLibrary::execCollapseRelativeDirectories
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  ForAnyElementType _Src;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  FString *pFVar7;
  FString local_38;
  FString local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  pFVar7 = (FString *)param_2->MostRecentPropertyAddress;
  puVar3 = param_2->Code;
  if (pFVar7 == (FString *)0x0) {
    pFVar7 = &local_28;
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
  }
  else {
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
    if (pFVar7 == &local_38) goto LAB_147ddf633;
  }
  iVar4 = local_38.Data.ArrayNum;
  lVar6 = (longlong)local_38.Data.ArrayNum;
  piVar1 = &(pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = local_38.Data.ArrayNum;
  if ((local_38.Data.ArrayNum == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar7,local_38.Data.ArrayNum
               ,piVar1);
    if (iVar4 != 0) {
      memcpy((pFVar7->Data).AllocatorInstance.Data,_Src.Data,lVar6 * 2);
    }
  }
LAB_147ddf633:
  bVar5 = FPaths::CollapseRelativeDirectories(pFVar7,false);
  *(bool *)param_3 = bVar5;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execCombine @ 147ddf6b0

void __cdecl UBlueprintPathsLibrary::execCombine(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  FString **ppFVar10;
  uint uVar11;
  FString local_68;
  FString *local_58;
  undefined8 local_50;
  FString local_48;
  TStringView<wchar_t> local_38;
  undefined8 local_28;
  uint local_20;
  
  local_58 = (FString *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ppFVar10 = &local_58;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar10 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(ppFVar10 + 1) == 1) {
    pFVar2 = *ppFVar10;
    if (&local_68 != pFVar2) {
      uVar8 = (pFVar2->Data).ArrayNum;
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      local_68.Data.ArrayMax = 0;
      local_68.Data.ArrayNum = uVar8;
      if (uVar8 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,0,(ForAnyElementType *)&local_68,uVar8,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar8 * 2);
      }
    }
  }
  else if (1 < *(int *)(ppFVar10 + 1)) {
    pFVar2 = *ppFVar10;
    if (&local_68 != pFVar2) {
      uVar8 = (pFVar2->Data).ArrayNum;
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      local_68.Data.ArrayMax = 0;
      local_68.Data.ArrayNum = uVar8;
      if (uVar8 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar8,0,(ForAnyElementType *)&local_68,uVar8,&local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar8 * 2);
      }
    }
    iVar7 = *(int *)(ppFVar10 + 1);
    uVar8 = 1;
    if (1 < iVar7) {
      lVar9 = 0x10;
      do {
        uVar11 = 0;
        uVar6 = uVar11;
        if ((int)uVar8 < iVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_38.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
        local_28 = *(undefined8 *)((longlong)&((*ppFVar10)->Data).AllocatorInstance.Data + lVar9);
        local_38.Size = local_68.Data.ArrayNum - 1;
        if (local_68.Data.ArrayNum == 0) {
          local_38.Size = uVar11;
        }
        iVar7 = *(int *)((longlong)&((*ppFVar10)->Data).ArrayNum + lVar9);
        local_20 = iVar7 - 1;
        if (iVar7 == 0) {
          local_20 = uVar11;
        }
        FPaths::CombineInternal(&local_48,&local_38,2);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        uVar8 = uVar8 + 1;
        iVar7 = *(int *)(ppFVar10 + 1);
        lVar9 = lVar9 + 0x10;
        local_68.Data.ArrayNum = local_48.Data.ArrayNum;
        local_68.Data.ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      } while ((int)uVar8 < iVar7);
    }
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_68.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execConvertFromSandboxPath @ 147de76f0

void __cdecl
UBlueprintPathsLibrary::execConvertFromSandboxPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  FString local_38;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar2 = L"";
  if ((int)local_20 != 0) {
    pwVar2 = local_28;
  }
  FPaths::ConvertFromSandboxPath(&local_38,&local_18,pwVar2);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConvertRelativePathToFull @ 147de7840

void __cdecl
UBlueprintPathsLibrary::execConvertRelativePathToFull
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (iVar2 < 1) {
    FPaths::ConvertRelativePathToFull(&local_38,&local_18);
  }
  else {
    FPaths::ConvertRelativePathToFull(&local_38,&local_28,&local_18);
  }
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConvertToSandboxPath @ 147de7fe0

void __cdecl
UBlueprintPathsLibrary::execConvertToSandboxPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  FString local_38;
  wchar_t *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar2 = L"";
  if ((int)local_20 != 0) {
    pwVar2 = local_28;
  }
  FPaths::ConvertToSandboxPath(&local_38,&local_18,pwVar2);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateTempFilename @ 147de8fa0

void __cdecl
UBlueprintPathsLibrary::execCreateTempFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FString local_48;
  wchar_t *local_38;
  undefined8 local_30;
  wchar_t *local_28;
  undefined8 local_20;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28 = (wchar_t *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar4 = L"";
  if ((int)local_30 != 0) {
    pwVar4 = local_38;
  }
  pwVar3 = L"";
  if ((int)local_20 != 0) {
    pwVar3 = local_28;
  }
  pwVar2 = L"";
  if ((int)local_10 != 0) {
    pwVar2 = local_18;
  }
  FPaths::CreateTempFilename(&local_48,pwVar2,pwVar3,pwVar4);
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execDiffDir @ 147dea4c0

void __cdecl UBlueprintPathsLibrary::execDiffDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::DiffDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execDirectoryExists @ 147dea550

void __cdecl
UBlueprintPathsLibrary::execDirectoryExists(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPaths::DirectoryExists(&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEngineConfigDir @ 147df0330

void __cdecl
UBlueprintPathsLibrary::execEngineConfigDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EngineConfigDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEngineContentDir @ 147df03c0

void __cdecl
UBlueprintPathsLibrary::execEngineContentDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EngineContentDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEngineDir @ 147df0450

void __cdecl UBlueprintPathsLibrary::execEngineDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EngineDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEngineIntermediateDir @ 147df04e0

void __cdecl
UBlueprintPathsLibrary::execEngineIntermediateDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EngineIntermediateDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEnginePluginsDir @ 147df0570

void __cdecl
UBlueprintPathsLibrary::execEnginePluginsDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EnginePluginsDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEngineSavedDir @ 147df0600

void __cdecl
UBlueprintPathsLibrary::execEngineSavedDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EngineSavedDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEngineSourceDir @ 147df0690

void __cdecl
UBlueprintPathsLibrary::execEngineSourceDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EngineSourceDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEngineUserDir @ 147df0720

void __cdecl
UBlueprintPathsLibrary::execEngineUserDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EngineUserDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEngineVersionAgnosticUserDir @ 147df07b0

void __cdecl
UBlueprintPathsLibrary::execEngineVersionAgnosticUserDir
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EngineVersionAgnosticUserDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEnterpriseDir @ 147df0840

void __cdecl
UBlueprintPathsLibrary::execEnterpriseDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EnterpriseDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEnterpriseFeaturePackDir @ 147df08d0

void __cdecl
UBlueprintPathsLibrary::execEnterpriseFeaturePackDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EnterpriseFeaturePackDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execEnterprisePluginsDir @ 147df0960

void __cdecl
UBlueprintPathsLibrary::execEnterprisePluginsDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::EnterprisePluginsDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execFeaturePackDir @ 147df4cf0

void __cdecl
UBlueprintPathsLibrary::execFeaturePackDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::FeaturePackDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execFileExists @ 147df4d80

void __cdecl UBlueprintPathsLibrary::execFileExists(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPaths::FileExists(&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGameAgnosticSavedDir @ 147df6900

void __cdecl
UBlueprintPathsLibrary::execGameAgnosticSavedDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GameAgnosticSavedDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGameDevelopersDir @ 147df6990

void __cdecl
UBlueprintPathsLibrary::execGameDevelopersDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GameDevelopersDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGameSourceDir @ 147df6a20

void __cdecl
UBlueprintPathsLibrary::execGameSourceDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GameSourceDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGameUserDeveloperDir @ 147df6ab0

void __cdecl
UBlueprintPathsLibrary::execGameUserDeveloperDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GameUserDeveloperDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGeneratedConfigDir @ 147df6b40

void __cdecl
UBlueprintPathsLibrary::execGeneratedConfigDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GeneratedConfigDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetBaseFilename @ 147df7640

void __cdecl
UBlueprintPathsLibrary::execGetBaseFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GetBaseFilename(&local_28,&local_18,local_res10[0] != 0);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCleanFilename @ 147df82a0

void __cdecl
UBlueprintPathsLibrary::execGetCleanFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GetCleanFilename(&local_28,&local_18);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetEditorLocalizationPaths @ 147df9fd0

void __cdecl
UBlueprintPathsLibrary::execGetEditorLocalizationPaths
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = FPaths::GetEditorLocalizationPaths();
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar1);
  return;
}

// execGetEngineLocalizationPaths @ 147dfa090

void __cdecl
UBlueprintPathsLibrary::execGetEngineLocalizationPaths
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = FPaths::GetEngineLocalizationPaths();
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar1);
  return;
}

// execGetExtension @ 147dfa5f0

void __cdecl
UBlueprintPathsLibrary::execGetExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GetExtension(&local_28,&local_18,local_res10[0] != 0);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetGameLocalizationPaths @ 147dfaa00

void __cdecl
UBlueprintPathsLibrary::execGetGameLocalizationPaths(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = FPaths::GetGameLocalizationPaths();
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar1);
  return;
}

// execGetInvalidFileSystemChars @ 147dfaf80

void __cdecl
UBlueprintPathsLibrary::execGetInvalidFileSystemChars
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GetInvalidFileSystemChars(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPath @ 147dfc4a0

void __cdecl UBlueprintPathsLibrary::execGetPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GetPath(&local_28,&local_18);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetProjectFilePath @ 147dfd5e0

void __cdecl
UBlueprintPathsLibrary::execGetProjectFilePath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::GetProjectFilePath(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetPropertyNameLocalizationPaths @ 147dfd700

void __cdecl
UBlueprintPathsLibrary::execGetPropertyNameLocalizationPaths
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = FPaths::GetPropertyNameLocalizationPaths();
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar1);
  return;
}

// execGetRelativePathToRoot @ 147dfdab0

void __cdecl
UBlueprintPathsLibrary::execGetRelativePathToRoot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FPaths::GetRelativePathToRoot();
  ::FString::operator=(param_3,pFVar1);
  return;
}

// execGetRestrictedFolderNames @ 147dfdc70

void __cdecl
UBlueprintPathsLibrary::execGetRestrictedFolderNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = FPaths::GetRestrictedFolderNames();
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar1);
  return;
}

// execGetToolTipLocalizationPaths @ 147dfffd0

void __cdecl
UBlueprintPathsLibrary::execGetToolTipLocalizationPaths
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = FPaths::GetToolTipLocalizationPaths();
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_3,pTVar1);
  return;
}

// execHasProjectPersistentDownloadDir @ 147e022b0

void __cdecl
UBlueprintPathsLibrary::execHasProjectPersistentDownloadDir
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FPaths::HasProjectPersistentDownloadDir();
  *(bool *)param_3 = bVar1;
  return;
}

// execIsDrive @ 147e04910

void __cdecl UBlueprintPathsLibrary::execIsDrive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPaths::IsDrive(&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsProjectFilePathSet @ 147e05c10

void __cdecl
UBlueprintPathsLibrary::execIsProjectFilePathSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FPaths::IsProjectFilePathSet();
  *(bool *)param_3 = bVar1;
  return;
}

// execIsRelative @ 147e05e70

void __cdecl UBlueprintPathsLibrary::execIsRelative(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPaths::IsRelative(&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsRestrictedPath @ 147e05f10

void __cdecl
UBlueprintPathsLibrary::execIsRestrictedPath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPaths::IsRestrictedPath(&local_18);
  *(bool *)param_3 = bVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execIsSamePath @ 147e05fb0

void __cdecl UBlueprintPathsLibrary::execIsSamePath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPaths::IsSamePath(&local_18,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execLaunchDir @ 147e0a340

void __cdecl UBlueprintPathsLibrary::execLaunchDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::LaunchDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakePathRelativeTo @ 147e12490

void __cdecl
UBlueprintPathsLibrary::execMakePathRelativeTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  uchar *puVar4;
  ForAnyElementType _Src;
  int iVar5;
  bool bVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  FString *pFVar9;
  FString local_48;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  pFVar9 = (FString *)param_2->MostRecentPropertyAddress;
  puVar4 = param_2->Code;
  if (pFVar9 == (FString *)0x0) {
    pFVar9 = &local_28;
    param_2->Code = puVar4 + (puVar4 != (uchar *)0x0);
  }
  else {
    param_2->Code = puVar4 + (puVar4 != (uchar *)0x0);
    if (pFVar9 == &local_48) goto LAB_147e125f1;
  }
  iVar5 = local_48.Data.ArrayNum;
  lVar8 = (longlong)local_48.Data.ArrayNum;
  piVar1 = &(pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = local_48.Data.ArrayNum;
  if ((local_48.Data.ArrayNum == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar9,local_48.Data.ArrayNum
               ,piVar1);
    if (iVar5 != 0) {
      memcpy((pFVar9->Data).AllocatorInstance.Data,_Src.Data,lVar8 * 2);
    }
  }
LAB_147e125f1:
  pwVar7 = L"";
  if ((int)local_30 != 0) {
    pwVar7 = local_38;
  }
  bVar6 = FPaths::MakePathRelativeTo(pFVar9,pwVar7);
  *(bool *)param_3 = bVar6;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakePlatformFilename @ 147e12800

void __cdecl
UBlueprintPathsLibrary::execMakePlatformFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  ForAnyElementType _Src;
  int iVar4;
  longlong lVar5;
  FString *pFVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  pFVar6 = (FString *)param_2->MostRecentPropertyAddress;
  puVar3 = param_2->Code;
  if (pFVar6 == (FString *)0x0) {
    pFVar6 = &local_18;
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
  }
  else {
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
    if (pFVar6 == &local_28) goto LAB_147e12932;
  }
  iVar4 = local_28.Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  piVar1 = &(pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = local_28.Data.ArrayNum;
  if ((local_28.Data.ArrayNum == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar6,local_28.Data.ArrayNum
               ,piVar1);
    if (iVar4 != 0) {
      memcpy((pFVar6->Data).AllocatorInstance.Data,_Src.Data,lVar5 * 2);
    }
  }
LAB_147e12932:
  FPaths::MakePlatformFilename(pFVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakeStandardFilename @ 147e14780

void __cdecl
UBlueprintPathsLibrary::execMakeStandardFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  ForAnyElementType _Src;
  int iVar4;
  longlong lVar5;
  FString *pFVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  pFVar6 = (FString *)param_2->MostRecentPropertyAddress;
  puVar3 = param_2->Code;
  if (pFVar6 == (FString *)0x0) {
    pFVar6 = &local_18;
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
  }
  else {
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
    if (pFVar6 == &local_28) goto LAB_147e148b2;
  }
  iVar4 = local_28.Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  piVar1 = &(pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = local_28.Data.ArrayNum;
  if ((local_28.Data.ArrayNum == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar6,local_28.Data.ArrayNum
               ,piVar1);
    if (iVar4 != 0) {
      memcpy((pFVar6->Data).AllocatorInstance.Data,_Src.Data,lVar5 * 2);
    }
  }
LAB_147e148b2:
  FPaths::MakeStandardFilename(pFVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakeValidFileName @ 147e14ef0

void __cdecl
UBlueprintPathsLibrary::execMakeValidFileName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  wchar_t wVar3;
  FString local_48;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar2 = 0;
  }
  if (iVar2 < 1) {
    wVar3 = L'\0';
  }
  else {
    wVar3 = *local_38;
  }
  FPaths::MakeValidFileName(&local_48,&local_28,wVar3);
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execNormalizeDirectoryName @ 147e1d750

void __cdecl
UBlueprintPathsLibrary::execNormalizeDirectoryName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  ForAnyElementType _Src;
  int iVar4;
  longlong lVar5;
  FString *pFVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  pFVar6 = (FString *)param_2->MostRecentPropertyAddress;
  puVar3 = param_2->Code;
  if (pFVar6 == (FString *)0x0) {
    pFVar6 = &local_18;
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
  }
  else {
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
    if (pFVar6 == &local_28) goto LAB_147e1d882;
  }
  iVar4 = local_28.Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  piVar1 = &(pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = local_28.Data.ArrayNum;
  if ((local_28.Data.ArrayNum == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar6,local_28.Data.ArrayNum
               ,piVar1);
    if (iVar4 != 0) {
      memcpy((pFVar6->Data).AllocatorInstance.Data,_Src.Data,lVar5 * 2);
    }
  }
LAB_147e1d882:
  FPaths::NormalizeDirectoryName(pFVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execNormalizeFilename @ 147e1d8d0

void __cdecl
UBlueprintPathsLibrary::execNormalizeFilename(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  ForAnyElementType _Src;
  int iVar4;
  longlong lVar5;
  FString *pFVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  pFVar6 = (FString *)param_2->MostRecentPropertyAddress;
  puVar3 = param_2->Code;
  if (pFVar6 == (FString *)0x0) {
    pFVar6 = &local_18;
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
  }
  else {
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
    if (pFVar6 == &local_28) goto LAB_147e1da02;
  }
  iVar4 = local_28.Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  piVar1 = &(pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = local_28.Data.ArrayNum;
  if ((local_28.Data.ArrayNum == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar6,local_28.Data.ArrayNum
               ,piVar1);
    if (iVar4 != 0) {
      memcpy((pFVar6->Data).AllocatorInstance.Data,_Src.Data,lVar5 * 2);
    }
  }
LAB_147e1da02:
  FPaths::NormalizeFilename(pFVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execProfilingDir @ 147e22470

void __cdecl
UBlueprintPathsLibrary::execProfilingDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProfilingDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectConfigDir @ 147e22500

void __cdecl
UBlueprintPathsLibrary::execProjectConfigDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectConfigDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectContentDir @ 147e22590

void __cdecl
UBlueprintPathsLibrary::execProjectContentDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectContentDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectDir @ 147e22620

void __cdecl UBlueprintPathsLibrary::execProjectDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectIntermediateDir @ 147e226b0

void __cdecl
UBlueprintPathsLibrary::execProjectIntermediateDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectIntermediateDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectLogDir @ 147e22740

void __cdecl
UBlueprintPathsLibrary::execProjectLogDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectLogDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectModsDir @ 147e227d0

void __cdecl
UBlueprintPathsLibrary::execProjectModsDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectModsDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectPersistentDownloadDir @ 147e22860

void __cdecl
UBlueprintPathsLibrary::execProjectPersistentDownloadDir
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectPersistentDownloadDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectPluginsDir @ 147e228f0

void __cdecl
UBlueprintPathsLibrary::execProjectPluginsDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectPluginsDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execProjectSavedDir @ 147e22b10

void __cdecl
UBlueprintPathsLibrary::execProjectSavedDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FString *pFVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FPaths::ProjectSavedDir();
  local_18.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar2->Data).ArrayNum;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execProjectUserDir @ 147e22c00

void __cdecl
UBlueprintPathsLibrary::execProjectUserDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ProjectUserDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveDuplicateSlashes @ 147e2a460

void __cdecl
UBlueprintPathsLibrary::execRemoveDuplicateSlashes(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  ForAnyElementType _Src;
  int iVar4;
  longlong lVar5;
  FString *pFVar6;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src.Data = local_28.Data.AllocatorInstance.Data;
  pFVar6 = (FString *)param_2->MostRecentPropertyAddress;
  puVar3 = param_2->Code;
  if (pFVar6 == (FString *)0x0) {
    pFVar6 = &local_18;
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
  }
  else {
    param_2->Code = puVar3 + (puVar3 != (uchar *)0x0);
    if (pFVar6 == &local_28) goto LAB_147e2a592;
  }
  iVar4 = local_28.Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  piVar1 = &(pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = local_28.Data.ArrayNum;
  if ((local_28.Data.ArrayNum == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,*piVar1,(ForAnyElementType *)pFVar6,local_28.Data.ArrayNum
               ,piVar1);
    if (iVar4 != 0) {
      memcpy((pFVar6->Data).AllocatorInstance.Data,_Src.Data,lVar5 * 2);
    }
  }
LAB_147e2a592:
  FPaths::RemoveDuplicateSlashes(pFVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execRootDir @ 147e2bda0

void __cdecl UBlueprintPathsLibrary::execRootDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::RootDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSandboxesDir @ 147e2c420

void __cdecl
UBlueprintPathsLibrary::execSandboxesDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::SandboxesDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execScreenShotDir @ 147e2cbf0

void __cdecl
UBlueprintPathsLibrary::execScreenShotDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ScreenShotDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetExtension @ 147e2f770

void __cdecl
UBlueprintPathsLibrary::execSetExtension(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::SetExtension(&local_38,&local_18,&local_28);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetProjectFilePath @ 147e30810

void __cdecl
UBlueprintPathsLibrary::execSetProjectFilePath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::SetProjectFilePath(&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execShaderWorkingDir @ 147e32cf0

void __cdecl
UBlueprintPathsLibrary::execShaderWorkingDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::ShaderWorkingDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execShouldSaveToUserDir @ 147e32d80

void __cdecl
UBlueprintPathsLibrary::execShouldSaveToUserDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FPaths::ShouldSaveToUserDir();
  *(bool *)param_3 = bVar1;
  return;
}

// execSourceConfigDir @ 147e33d40

void __cdecl
UBlueprintPathsLibrary::execSourceConfigDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::SourceConfigDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSplit @ 147e37050

void __cdecl UBlueprintPathsLibrary::execSplit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar4 = &local_28;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar4 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = &local_38;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar2 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar3 = &local_48;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar3 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::Split(&local_18,pFVar4,pFVar2,pFVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execValidatePath @ 147e3bdd0

void __cdecl
UBlueprintPathsLibrary::execValidatePath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FText *pFVar3;
  uchar *puVar4;
  uchar local_res10 [8];
  FString local_28;
  FText local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar3 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPaths::ValidatePath(&local_28,pFVar3);
  *puVar4 = bVar2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execVideoCaptureDir @ 147e409e0

void __cdecl
UBlueprintPathsLibrary::execVideoCaptureDir(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FPaths::VideoCaptureDir(&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

