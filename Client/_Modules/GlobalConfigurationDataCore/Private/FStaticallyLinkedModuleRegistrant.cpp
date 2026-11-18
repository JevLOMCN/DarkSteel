// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 1

// InitializeModule @ 14e9b8ad0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FGlobalConfigurationDataCoreModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  FString local_28;
  FString local_18;
  
  pIVar1 = ::operator_new(0x128);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FGlobalConfigurationDataCoreModule__6B_;
    ::FString::FString(&local_18,L"ConfigLow");
    ::FString::FString(&local_28,L"GlobalConfigurationData");
    FGlobalConfigurationConfigRouter::FGlobalConfigurationConfigRouter
              ((FGlobalConfigurationConfigRouter *)(pIVar1 + 1),&local_28,&local_18,-0x80000000);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_28,L"ConfigHigh");
    ::FString::FString(&local_18,L"GlobalConfigurationDataHotfix");
    FGlobalConfigurationConfigRouter::FGlobalConfigurationConfigRouter
              ((FGlobalConfigurationConfigRouter *)(pIVar1 + 0x11),&local_18,&local_28,0x7ffffffe);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_18,L"ConsoleCommand");
    IGlobalConfigurationRouter::IGlobalConfigurationRouter
              ((IGlobalConfigurationRouter *)(pIVar1 + 0x21),&local_18,0x7fffffff);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pIVar1[0x21] = (IModuleInterface)&___7FGlobalConfigurationConsoleCommandRouter__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

