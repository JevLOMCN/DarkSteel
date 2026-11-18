// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 2

// StartupModule @ 1494bc600

void __thiscall FComputeFrameworkModule::StartupModule(FComputeFrameworkModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPluginManager *pIVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  FComputeFrameworkSystem *pFVar6;
  FComputeFrameworkSystem *pFVar7;
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
  local_58 = 0x507b5fe0;
  uStack_54 = 1;
  uStack_50 = 0x10;
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x70))(pIVar3,local_38,&local_58);
  if ((*plVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*plVar4 + 0x20))((longlong *)*plVar4,local_48);
  pFVar7 = (FComputeFrameworkSystem *)0x0;
  local_10 = 7;
  local_28.DataPtr = (wchar_t *)*puVar5;
  local_28.Size = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    local_28.Size = 0;
  }
  local_18 = L"Shaders";
  FPaths::CombineInternal(&local_68,&local_28,2);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  ::FString::FString(&local_78,L"/Plugin/ComputeFramework");
  AddShaderSourceDirectoryMapping(&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((ComputeSystem != (FComputeFrameworkSystem *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2393770704978837530>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeFrameworkModule.cpp"
                         ,0x1a,"ComputeSystem == nullptr"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar6 = ::operator_new(0xa8);
  if (pFVar6 != (FComputeFrameworkSystem *)0x0) {
    *(undefined8 *)&pFVar6->ComputeWorkers = 0;
    pFVar6->_padding_ = (longlong)&___7FComputeFrameworkSystem__6B_;
    *(undefined8 *)&(pFVar6->ComputeWorkers).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->ComputeWorkers).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->ComputeWorkers).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->ComputeWorkers).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->ComputeWorkers).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->ComputeWorkers).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->ComputeWorkers).field_0x40 = 0;
    *(undefined4 *)&(pFVar6->ComputeWorkers).field_0x48 = 0;
    *(undefined8 *)&pFVar6->ViewExtensions = 0;
    *(undefined8 *)&(pFVar6->ViewExtensions).field_0x8 = 0;
    *(undefined8 *)&(pFVar6->ViewExtensions).field_0x20 = 0;
    *(undefined4 *)&(pFVar6->ViewExtensions).field_0x28 = 0;
    *(undefined4 *)&(pFVar6->ViewExtensions).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->ViewExtensions).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->ViewExtensions).field_0x34 = 0;
    *(undefined8 *)&(pFVar6->ViewExtensions).field_0x40 = 0;
    *(undefined4 *)&(pFVar6->ViewExtensions).field_0x48 = 0;
    pFVar7 = pFVar6;
  }
  ComputeSystem = pFVar7;
  ComputeSystemInterface::RegisterSystem((IComputeSystem *)pFVar7);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 1494bc810

void __thiscall FComputeFrameworkModule::ShutdownModule(FComputeFrameworkModule *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (ComputeSystem == (FComputeFrameworkSystem *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2393770704978837537>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeFrameworkModule.cpp"
                       ,0x21,"ComputeSystem != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ComputeSystemInterface::UnregisterSystem((IComputeSystem *)ComputeSystem);
  if (ComputeSystem != (FComputeFrameworkSystem *)0x0) {
    (**(code **)ComputeSystem->_padding_)(ComputeSystem,1);
  }
  ComputeSystem = (FComputeFrameworkSystem *)0x0;
  return;
}

