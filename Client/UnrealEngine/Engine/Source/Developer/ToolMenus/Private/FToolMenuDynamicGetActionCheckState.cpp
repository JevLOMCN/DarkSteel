// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// Execute @ 142c57d70

ECheckBoxState __thiscall
FToolMenuDynamicGetActionCheckState::Execute
          (FToolMenuDynamicGetActionCheckState *this,FToolMenuContext *param_1)

{
  ECheckBoxState EVar1;
  FToolMenuContext local_78;
  ECheckBoxState local_10;
  
  local_78.bIsEditing = false;
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  local_10 = Unchecked;
  FToolMenuContext::operator=(&local_78,param_1);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_78);
  EVar1 = local_10;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return EVar1;
}

