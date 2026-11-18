// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// StartupModule @ 14e06dd20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FHairStrandsCore::StartupModule(FHairStrandsCore *this)

{
  code *pcVar1;
  bool bVar2;
  FAssetCompilingManager *this_00;
  FGroomBindingCompilingManager *pFVar3;
  IPluginManager *pIVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  RegisterBookmarkFunction(ProcessHairStrandsBookmark);
  this_00 = FAssetCompilingManager::Get();
  pFVar3 = FGroomBindingCompilingManager::Get();
  FAssetCompilingManager::RegisterManager(this_00,(IAssetCompilingManager *)pFVar3);
  pIVar4 = IPluginManager::Get();
  local_58 = 0x507b6fe8;
  uStack_54 = 1;
  uStack_50 = 0xb;
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_38,&local_58);
  if (*plVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)*plVar5 + 0x20))();
  local_10 = 7;
  local_28.DataPtr = (wchar_t *)*puVar6;
  local_28.Size = *(int *)(puVar6 + 1) + -1;
  if (*(int *)(puVar6 + 1) == 0) {
    local_28.Size = 0;
  }
  local_18 = L"Shaders";
  FPaths::CombineInternal(&local_68,&local_28,2);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  ::FString::FString(&local_78,L"/Plugin/Runtime/HairStrands");
  AddShaderSourceDirectoryMapping(&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  SetGroomEnabled(true);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14e06de90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FHairStrandsCore::ShutdownModule(FHairStrandsCore *this)

{
  FAssetCompilingManager *this_00;
  FGroomBindingCompilingManager *pFVar1;
  
  this_00 = FAssetCompilingManager::Get();
  pFVar1 = FGroomBindingCompilingManager::Get();
  FAssetCompilingManager::UnregisterManager(this_00,(IAssetCompilingManager *)pFVar1);
  SetGroomEnabled(false);
  return;
}

// SupportsDynamicReloading @ 14e06dec0

bool __thiscall FHairStrandsCore::SupportsDynamicReloading(FHairStrandsCore *this)

{
  return true;
}

// RegisterAssetHelper @ 14e0a9b30

void __cdecl FHairStrandsCore::RegisterAssetHelper(FHairAssetHelper *param_1)

{
  return;
}

