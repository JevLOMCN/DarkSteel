// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExrReaderGpu
// Functions: 2

// StartupModule @ 14ea2b340

void __thiscall FExrReaderGpuModule::StartupModule(FExrReaderGpuModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  undefined8 *puVar5;
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
  local_58 = 0x507b7d30;
  uStack_54 = 1;
  uStack_50 = 8;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_38,&local_58);
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
  local_28.DataPtr = (wchar_t *)*puVar5;
  local_28.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_28.Size = 0;
  }
  local_18 = L"Shaders";
  local_10 = 7;
  FPaths::CombineInternal(&local_68,&local_28,2);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  ::FString::FString(&local_78,L"/Plugin/ExrReaderShaders");
  AddShaderSourceDirectoryMapping(&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14ea2b490

void __thiscall FExrReaderGpuModule::ShutdownModule(FExrReaderGpuModule *this)

{
  return;
}

