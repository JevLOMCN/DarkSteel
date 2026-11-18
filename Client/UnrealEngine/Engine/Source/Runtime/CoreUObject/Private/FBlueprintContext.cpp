// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FBlueprintContext @ 1421fdd20

FBlueprintContext * __thiscall FBlueprintContext::FBlueprintContext(FBlueprintContext *this)

{
  code *pcVar1;
  bool bVar2;
  FBlueprintContext *pFVar3;
  
  FVirtualStackAllocator::FVirtualStackAllocator(&this->VirtualStackAllocator,0,AllOnDestruction);
  if (2 < (uint)BlueprintContextVirtualStackAllocatorDecommitMode) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7634585018982989628>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                       ,0xc4,
                       "BlueprintContextVirtualStackAllocatorDecommitMode >= 0 && BlueprintContextVirtualStackAllocatorDecommitMode < (int)EVirtualStackAllocatorDecommitMode::NumModes"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FBlueprintContext *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// GetThreadSingleton @ 14220fc90

FBlueprintContext * __cdecl FBlueprintContext::GetThreadSingleton(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FBlueprintContext *pFVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8);
  if ((*(uint *)(lVar1 + 0xd30) & 1) == 0) {
    *(uint *)(lVar1 + 0xd30) = *(uint *)(lVar1 + 0xd30) | 1;
    FVirtualStackAllocator::FVirtualStackAllocator
              ((FVirtualStackAllocator *)(lVar1 + 0xcf0),0,AllOnDestruction);
    if (2 < (uint)BlueprintContextVirtualStackAllocatorDecommitMode) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7634585018982989628>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                         ,0xc4,
                         "BlueprintContextVirtualStackAllocatorDecommitMode >= 0 && BlueprintContextVirtualStackAllocatorDecommitMode < (int)EVirtualStackAllocatorDecommitMode::NumModes"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FBlueprintContext *)(*pcVar2)();
        return pFVar4;
      }
    }
    __tlregdtor(`FBlueprintContextGetThreadSingletonImpl'::__l2::
                _dynamic_atexit_destructor_for__ThreadLocalContext__);
  }
  return (FBlueprintContext *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0xcf0);
}

