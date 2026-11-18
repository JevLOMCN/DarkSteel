// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISShaders
// Functions: 2

// StartupModule @ 14de4a370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNISShadersModule::StartupModule(FNISShadersModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  FString local_118;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98 [2];
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68 [2];
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  pIVar3 = IPluginManager::Get();
  uStack_120 = 3;
  local_128 = L"NIS";
  local_a8 = 0x507b6d40;
  uStack_a4 = 1;
  uStack_a0 = 3;
  uStack_9c = uStack_11c;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_88,&local_a8);
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
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*plVar4 + 0x20))((longlong *)*plVar4,local_98);
  local_b0 = 7;
  local_b8 = L"Shaders";
  local_c8.DataPtr = (wchar_t *)*puVar5;
  local_c8.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_c8.Size = 0;
  }
  FPaths::CombineInternal(&local_d8,&local_c8,2);
  if (local_98[0] != (void *)0x0) {
    FMemory::Free(local_98[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  ::FString::FString(&local_118,L"/Plugin/NIS");
  AddShaderSourceDirectoryMapping(&local_118,&local_d8);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pIVar3 = IPluginManager::Get();
  local_108 = L"NIS";
  uStack_100 = 3;
  local_78 = 0x507b6d40;
  uStack_74 = 1;
  uStack_70 = 3;
  uStack_6c = uStack_fc;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_58,&local_78);
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
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*plVar4 + 0x20))((longlong *)*plVar4,local_68);
  local_38 = L"Shaders";
  local_30 = 7;
  local_20 = 10;
  local_48.DataPtr = (wchar_t *)*puVar5;
  local_48.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_48.Size = 0;
  }
  local_28 = L"ThirdParty";
  FPaths::CombineInternal(&local_e8,&local_48,3);
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  ::FString::FString(&local_f8,L"/ThirdParty/Plugin/NIS");
  AddShaderSourceDirectoryMapping(&local_f8,&local_e8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14de4a5e0

void __thiscall FNISShadersModule::ShutdownModule(FNISShadersModule *this)

{
  return;
}

