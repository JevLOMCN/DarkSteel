// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// GetAsyncTask @ 14e013550

FGroomBindingAsyncBuildTask * __thiscall
`FGroomBindingCompilingManager::FinishCompilation'::__l29::FCompilableGroomBindingAsset::
GetAsyncTask(void *this)

{
  code *pcVar1;
  bool bVar2;
  FGroomBindingAsyncBuildTask *pFVar3;
  
  if (*(longlong *)((longlong)this + 8) != 0) {
    return *(FGroomBindingAsyncBuildTask **)(*(longlong *)((longlong)this + 8) + 0xe0);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGroomBindingAsyncBuildTask *)(*pcVar1)();
    return pFVar3;
  }
  return *(FGroomBindingAsyncBuildTask **)(*(longlong *)((longlong)this + 8) + 0xe0);
}

// GetName @ 14e018830

FName __thiscall
`FGroomBindingCompilingManager::FinishCompilation'::__l29::FCompilableGroomBindingAsset::GetName
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  if (*(longlong *)((longlong)this + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x18);
  return in_RDX;
}

