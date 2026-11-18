// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 2

// StartupModule @ 14e9c1d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNFORDenoiseModule::StartupModule(FNFORDenoiseModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  FString *pFVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_res10;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  FString local_18;
  
  if (4 < (byte)LogNFORDenoise._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNFORDenoise);
  }
  pIVar3 = IPluginManager::Get();
  uStack_70 = 0xb;
  local_78 = L"NFORDenoise";
  local_28 = 0x507b7b80;
  uStack_24 = 1;
  uStack_20 = 0xb;
  uStack_1c = uStack_6c;
  (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,&local_98,&local_28);
  if (local_98 == (longlong *)0x0) {
    if (1 < (byte)LogNFORDenoise._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNFORDenoise);
    }
  }
  else {
    if ((local_98 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*local_98 + 0x20))(local_98,&local_88);
    local_48.DataPtr = local_88;
    puVar6 = (undefined8 *)0x0;
    local_30 = 8;
    local_48.Size = local_80 + -1;
    if (local_80 == 0) {
      local_48.Size = 0;
    }
    local_38 = L"/Shaders";
    FPaths::CombineInternal(&local_58,&local_48,2);
    ::FString::FString(&local_68,L"/NFORDenoise");
    AddShaderSourceDirectoryMapping(&local_68,&local_58);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar4 = ::FString::FString(&local_18,L"NFOR");
    puVar5 = ::operator_new(8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7FNFORDenoiser__6B_;
      puVar6 = puVar5;
    }
    local_res10 = puVar6;
    RegisterSpatialTemporalDenoiser((IPathTracingSpatialTemporalDenoiser *)&local_res10,pFVar4);
    if (local_88 != (wchar_t *)0x0) {
      FMemory::Free(local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  return;
}

// ShutdownModule @ 14e9c1f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNFORDenoiseModule::ShutdownModule(FNFORDenoiseModule *this)

{
  FString *pFVar1;
  FString local_18;
  
  if (4 < (byte)LogNFORDenoise._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNFORDenoise);
  }
  pFVar1 = ::FString::FString(&local_18,L"NFOR");
  UnregisterDenoiser(pFVar1);
  return;
}

