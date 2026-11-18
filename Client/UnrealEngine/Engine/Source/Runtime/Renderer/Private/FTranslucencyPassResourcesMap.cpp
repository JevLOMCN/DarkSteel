// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FTranslucencyPassResourcesMap @ 14574f150

FTranslucencyPassResourcesMap * __thiscall
FTranslucencyPassResourcesMap::FTranslucencyPassResourcesMap
          (FTranslucencyPassResourcesMap *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FTranslucencyPassResourcesMap *pFVar9;
  ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> FVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  uVar12 = 0;
  (this->Array).AllocatorInstance.SecondaryData =
       (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0;
  piVar1 = &(this->Array).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->Array).ArrayMax;
  *piVar2 = 4;
  if (param_1 < 1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
  }
  else {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>_>
                      (0x1f8,8,param_1,
                       (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> *)
                       this,piVar1,piVar2);
    FVar3 = (this->Array).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)this;
    if (FVar3 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
      FVar10 = FVar3;
    }
    DefaultConstructItems<TStaticArray<FTranslucencyPassResources,7,4294967295>,int>
              ((void *)((longlong)iVar6 * 0x1f8 + (longlong)FVar10),param_1);
    uVar14 = uVar12;
    do {
      uVar11 = (uint)uVar12;
      uVar13 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTranslucencyPassResourcesMap *)(*pcVar4)();
        return pFVar9;
      }
      FVar3 = (this->Array).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)this;
      if (FVar3 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
        FVar10 = FVar3;
      }
      *(undefined4 *)(uVar14 + (longlong)FVar10) = 0;
      uVar8 = 0;
      uVar7 = uVar8;
      if ((int)uVar11 < *piVar1) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTranslucencyPassResourcesMap *)(*pcVar4)();
        return pFVar9;
      }
      FVar3 = (this->Array).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)this;
      if (FVar3 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
        FVar10 = FVar3;
      }
      *(undefined4 *)(uVar14 + 0x48 + (longlong)FVar10) = 1;
      uVar7 = uVar8;
      if ((int)uVar11 < *piVar1) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTranslucencyPassResourcesMap *)(*pcVar4)();
        return pFVar9;
      }
      FVar3 = (this->Array).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)this;
      if (FVar3 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
        FVar10 = FVar3;
      }
      *(undefined4 *)(uVar14 + 0x90 + (longlong)FVar10) = 2;
      uVar7 = uVar8;
      if ((int)uVar11 < *piVar1) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTranslucencyPassResourcesMap *)(*pcVar4)();
        return pFVar9;
      }
      FVar3 = (this->Array).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)this;
      if (FVar3 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
        FVar10 = FVar3;
      }
      *(undefined4 *)(uVar14 + 0xd8 + (longlong)FVar10) = 3;
      if ((int)uVar11 < *piVar1) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTranslucencyPassResourcesMap *)(*pcVar4)();
        return pFVar9;
      }
      FVar3 = (this->Array).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)this;
      if (FVar3 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
        FVar10 = FVar3;
      }
      *(undefined4 *)(uVar14 + 0x120 + (longlong)FVar10) = 4;
      uVar7 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTranslucencyPassResourcesMap *)(*pcVar4)();
        return pFVar9;
      }
      FVar3 = (this->Array).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)this;
      if (FVar3 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
        FVar10 = FVar3;
      }
      *(undefined4 *)(uVar14 + 0x168 + (longlong)FVar10) = 5;
      uVar7 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar7 = uVar13;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTranslucencyPassResourcesMap *)(*pcVar4)();
        return pFVar9;
      }
      FVar3 = (this->Array).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)this;
      if (FVar3 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
        FVar10 = FVar3;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      *(undefined4 *)(uVar14 + 0x1b0 + (longlong)FVar10) = 6;
      uVar14 = uVar14 + 0x1f8;
    } while ((int)(uVar11 + 1) < param_1);
  }
  return this;
}

// Get @ 14576fc90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTranslucencyPassResources * __thiscall
FTranslucencyPassResourcesMap::Get(FTranslucencyPassResourcesMap *this,int param_1,Type param_2)

{
  ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTranslucencyPassResources *pFVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Array).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FTranslucencyPassResources *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar1 = (this->Array).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TStaticArray<FTranslucencyPassResources,7,4294967295>_>)0x0) {
    this = (FTranslucencyPassResourcesMap *)FVar1;
  }
  return (FTranslucencyPassResources *)
         ((longlong)this + ((longlong)param_1 * 7 + (ulonglong)param_2) * 0x48);
}

