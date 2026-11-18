// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Get @ 1451ce5a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTranslucencyPassResources * __thiscall
FTranslucencyViewResourcesMap::Get(FTranslucencyViewResourcesMap *this,Type param_1)

{
  uint uVar1;
  ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FTranslucencyPassResources *pFVar6;
  ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> FVar7;
  
  if (this->TranslucencyPassResourcesMap == (FTranslucencyPassResourcesMap *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\TranslucentPassResource.h"
                       ,0x6f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTranslucencyPassResources *)(*pcVar3)();
      return pFVar6;
    }
  }
  FVar2 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)
          this->TranslucencyPassResourcesMap;
  uVar1 = this->ViewIndex;
  if (*(int *)((longlong)FVar2 + 0x7e8) <= (int)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewIndex < Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Internal\\TranslucentPassResource.h"
                       ,0x56,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTranslucencyPassResources *)(*pcVar3)();
      return pFVar6;
    }
  }
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)FVar2 + 0x7e8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTranslucencyPassResources *)(*pcVar3)();
      return pFVar6;
    }
  }
  FVar7 = *(ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> *)
           ((longlong)FVar2 + 0x7e0);
  if (*(ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> *)
       ((longlong)FVar2 + 0x7e0) ==
      (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
    FVar7 = FVar2;
  }
  return (FTranslucencyPassResources *)
         ((longlong)FVar7 + ((longlong)(int)uVar1 * 7 + (ulonglong)param_1) * 0x48);
}

