// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 2

// StartupModule @ 14ea710b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCompositeCoreModule::StartupModule(FCompositeCoreModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_48 [2];
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pIVar3 = IPluginManager::Get();
  local_58 = 0x507b7d88;
  uStack_54 = 1;
  uStack_50 = 0xd;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_38,&local_58);
  pwVar6 = L"";
  if (*plVar4 == 0) {
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
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*plVar4 + 0x20))((longlong *)*plVar4,local_48);
  local_10 = 7;
  local_28.DataPtr = (wchar_t *)*puVar5;
  local_28.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_28.Size = 0;
  }
  local_18 = L"Shaders";
  FPaths::CombineInternal(&local_68,&local_28,2);
  ::FString::FString(&local_78,L"/Plugin/CompositeCore");
  AddShaderSourceDirectoryMapping(&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if (GEngineIni.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)GEngineIni.Data.AllocatorInstance;
  }
  UE::ConfigUtilities::ApplyCVarSettingsFromIni
            (L"/Script/CompositeCore.CompositeCorePluginSettings",pwVar6,0x4000000,false,(FName)0x0)
  ;
  bVar2 = IsHDREnabled();
  if ((bVar2) && (2 < (byte)LogCompositeCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCompositeCore);
  }
  return;
}

// ShutdownModule @ 14ea71260

void __thiscall FCompositeCoreModule::ShutdownModule(FCompositeCoreModule *this)

{
  return;
}

