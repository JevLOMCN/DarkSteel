// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FHaltonSequence @ 144a59da0

FHaltonSequence * __thiscall FHaltonSequence::FHaltonSequence(FHaltonSequence *this)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FHaltonSequence *pFVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  longlong local_res20;
  longlong local_68;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_58;
  
  (this->FaurePermutations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaurePermutations).ArrayNum = 0;
  (this->FaurePermutations).ArrayMax = 0;
  lVar15 = 0x10;
  (this->FaurePermutationOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FaurePermutationOffsets).ArrayNum = 0;
  (this->FaurePermutationOffsets).ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0x13a,&local_58.AllocatorInstance,&local_58.ArrayNum,&local_58.ArrayMax)
  ;
  memset(local_58.AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,0x13a0);
  iVar6 = 1;
  lVar11 = 1;
  do {
    if ((local_58.ArrayNum <= iVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FHaltonSequence *)(*pcVar2)();
      return pFVar9;
    }
    pFVar13 = local_58.AllocatorInstance.Data + lVar15;
    iVar19 = *(int *)(pFVar13 + 8);
    pFVar18 = pFVar13 + 8;
    if (iVar19 < iVar6) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar6 - iVar19,(ForAnyElementType *)pFVar13,(int *)pFVar18,
                         (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memset(*pFVar13 + (longlong)iVar7 * 4,0,(longlong)(iVar6 - iVar19) << 2);
    }
    else if (iVar6 < iVar19) {
      iVar19 = iVar19 - iVar6;
      if (iVar19 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FHaltonSequence *)(*pcVar2)();
          return pFVar9;
        }
      }
      else if (iVar19 == 0) goto LAB_144a59f3e;
                    /* WARNING: Load size is inaccurate */
      iVar7 = (*(int *)pFVar18 - iVar19) - iVar6;
      if (iVar7 != 0) {
        memmove(*pFVar13 + lVar11 * 4,*pFVar13 + lVar11 * 4 + (longlong)iVar19 * 4,
                (longlong)iVar7 << 2);
      }
      *(int *)pFVar18 = *(int *)pFVar18 - iVar19;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)pFVar13,*(int *)pFVar18,(int *)(pFVar13 + 0xc));
    }
LAB_144a59f3e:
    uVar16 = 0;
    uVar14 = 0;
    if (0 < lVar11) {
      do {
        if ((local_58.ArrayNum <= iVar6) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FHaltonSequence *)(*pcVar2)();
          return pFVar9;
        }
        FVar3.Data = local_58.AllocatorInstance.Data;
        uVar10 = (uint)uVar16;
        uVar17 = 0;
        if ((int)uVar10 < *(int *)(local_58.AllocatorInstance.Data + lVar15 + 8)) {
          uVar17 = ~uVar10 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FHaltonSequence *)(*pcVar2)();
          return pFVar9;
        }
        *(uint *)(*(longlong *)(FVar3.Data + lVar15) + uVar14 * 4) = uVar10;
        uVar16 = (ulonglong)(uVar10 + 1);
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < lVar11);
    }
    iVar6 = iVar6 + 1;
    lVar11 = lVar11 + 1;
    lVar15 = lVar15 + 0x10;
  } while (iVar6 < 4);
  uVar16 = 4;
  local_res20 = 4;
  local_68 = 0x40;
  do {
    iVar6 = (int)uVar16;
    if ((local_58.ArrayNum <= iVar6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FHaltonSequence *)(*pcVar2)();
      return pFVar9;
    }
    pFVar13 = local_58.AllocatorInstance.Data + local_68;
    iVar19 = *(int *)(pFVar13 + 8);
    pFVar18 = pFVar13 + 8;
    if (iVar19 < iVar6) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar6 - iVar19,(ForAnyElementType *)pFVar13,(int *)pFVar18,
                         (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memset(*pFVar13 + (longlong)iVar7 * 4,0,(longlong)(iVar6 - iVar19) << 2);
    }
    else if (iVar6 < iVar19) {
      iVar19 = iVar19 - iVar6;
      if (iVar19 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FHaltonSequence *)(*pcVar2)();
          return pFVar9;
        }
      }
      else if (iVar19 == 0) goto LAB_144a5a134;
                    /* WARNING: Load size is inaccurate */
      iVar7 = (*(int *)pFVar18 - iVar19) - iVar6;
      if (iVar7 != 0) {
        memmove(*pFVar13 + local_res20 * 4,*pFVar13 + local_res20 * 4 + (longlong)iVar19 * 4,
                (longlong)iVar7 << 2);
      }
      *(int *)pFVar18 = *(int *)pFVar18 - iVar19;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)pFVar13,*(int *)pFVar18,(int *)(pFVar13 + 0xc));
    }
LAB_144a5a134:
    uVar14 = uVar16 >> 1;
    uVar17 = (uint)uVar14;
    if ((uVar16 & 1) == 0) {
      uVar10 = 0;
      lVar11 = 0;
      if (uVar17 != 0) {
        do {
          uVar8 = 0;
          if ((int)uVar17 < local_58.ArrayNum) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          pFVar18 = local_58.AllocatorInstance.Data + uVar14 * 0x10;
          uVar12 = ~uVar10 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar10 < *(int *)(pFVar18 + 8)) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          iVar19 = *(int *)(*(longlong *)&pFVar18->field_0x0 + lVar11 * 4);
          if ((local_58.ArrayNum <= iVar6) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          pFVar18 = local_58.AllocatorInstance.Data + local_68;
          uVar8 = 0;
          if ((int)uVar10 < *(int *)(pFVar18 + 8)) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          *(int *)(*(longlong *)pFVar18 + lVar11 * 4) = iVar19 * 2;
          uVar8 = 0;
          if ((int)uVar17 < local_58.ArrayNum) {
            uVar8 = ~uVar17 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          pFVar18 = local_58.AllocatorInstance.Data + uVar14 * 0x10;
          uVar8 = 0;
          if ((int)uVar10 < *(int *)(pFVar18 + 8)) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          iVar19 = *(int *)(*(longlong *)&pFVar18->field_0x0 + lVar11 * 4);
          if ((local_58.ArrayNum <= iVar6) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          pFVar18 = local_58.AllocatorInstance.Data + local_68;
          uVar8 = 0;
          if ((int)(uVar10 + uVar17) < *(int *)(pFVar18 + 8)) {
            uVar8 = ~(uVar10 + uVar17) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          uVar10 = uVar10 + 1;
          lVar15 = lVar11 * 4;
          lVar11 = lVar11 + 1;
          *(int *)(uVar14 * 4 + lVar15 + *(longlong *)pFVar18) = iVar19 * 2 + 1;
        } while (lVar11 < (longlong)uVar14);
      }
    }
    else {
      uVar10 = 0;
      iVar19 = iVar6 + -1;
      if (0 < iVar19) {
        lVar11 = 0;
        do {
          uVar8 = 0;
          if (iVar19 < local_58.ArrayNum) {
            uVar8 = (uint)-iVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          FVar3.Data = local_58.AllocatorInstance.Data;
          uVar8 = 0;
          if (iVar19 < local_58.ArrayNum) {
            uVar8 = (uint)-iVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          FVar4.Data = local_58.AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar10 < *(int *)(local_58.AllocatorInstance.Data + local_68 + -8)) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          iVar7 = *(int *)(lVar11 + *(longlong *)(FVar4.Data + local_68 + -0x10));
          uVar8 = 0;
          if ((int)uVar10 < *(int *)(FVar3.Data + local_68 + -8)) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          iVar1 = *(int *)(*(longlong *)(FVar3.Data + local_68 + -0x10) + lVar11);
          if ((local_58.ArrayNum <= iVar6) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          pFVar18 = local_58.AllocatorInstance.Data + local_68;
          uVar12 = (uVar17 <= uVar10) + uVar10;
          uVar8 = 0;
          if ((int)uVar12 < *(int *)(pFVar18 + 8)) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FHaltonSequence *)(*pcVar2)();
            return pFVar9;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 4;
          *(uint *)(*(longlong *)pFVar18 + (longlong)(int)uVar12 * 4) =
               (uint)((int)uVar17 <= iVar7) + iVar1;
        } while ((int)uVar10 < iVar19);
      }
      if ((local_58.ArrayNum <= iVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FHaltonSequence *)(*pcVar2)();
        return pFVar9;
      }
      pFVar18 = local_58.AllocatorInstance.Data + local_68;
      uVar10 = 0;
      if ((int)uVar17 < *(int *)(pFVar18 + 8)) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FHaltonSequence *)(*pcVar2)();
        return pFVar9;
      }
      *(uint *)(*(longlong *)pFVar18 + uVar14 * 4) = uVar17;
    }
    local_res20 = local_res20 + 1;
    local_68 = local_68 + 0x10;
    uVar16 = (ulonglong)(iVar6 + 1U);
    if (0x139 < (int)(iVar6 + 1U)) {
      InitTables(this,&local_58);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.AllocatorInstance.Data,
                 local_58.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return this;
    }
  } while( true );
}

// BuildPermutation @ 144a6b990

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FHaltonSequence::BuildPermutation
          (FHaltonSequence *this,int param_1,int param_2,int param_3,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int local_68;
  uint local_64;
  longlong local_60;
  longlong local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_50,param_1,Default);
  uVar13 = 0;
  if (0 < param_1) {
    local_64 = (uint)~param_2 >> 0x1f;
    local_58 = (longlong)param_2 << 4;
    lVar11 = 0;
    local_60 = 0;
    do {
      lVar3 = local_58;
      lVar9 = local_60;
      uVar8 = (ulonglong)(uint)param_3;
      uVar10 = 0;
      if (param_2 < param_4->ArrayNum) {
        uVar10 = local_64;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (param_4->AllocatorInstance).Data + lVar3;
      iVar7 = 0;
      uVar10 = uVar13;
      if (0 < param_3) {
        do {
          uVar6 = (int)uVar10 % param_2;
          uVar5 = 0;
          if ((int)uVar6 < *(int *)(pFVar12 + 8)) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = iVar7 * param_2 + *(int *)(*(longlong *)pFVar12 + (longlong)(int)uVar6 * 4);
          uVar8 = uVar8 - 1;
          lVar9 = local_60;
          uVar10 = (int)uVar10 / param_2;
        } while (uVar8 != 0);
      }
      uVar10 = 0;
      if ((int)uVar13 < local_50.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_60 = lVar9 + 1;
      uVar13 = uVar13 + 1;
      *(int *)(local_50.AllocatorInstance.Data + lVar11) = iVar7;
      lVar11 = lVar11 + 4;
    } while ((int)uVar13 < param_1);
  }
  local_68 = (this->FaurePermutations).ArrayNum;
  pFVar12 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
  if (((pFVar12 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar12 + (longlong)(this->FaurePermutationOffsets).ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = (this->FaurePermutationOffsets).ArrayNum;
  piVar1 = &(this->FaurePermutationOffsets).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->FaurePermutationOffsets).AllocatorInstance,piVar1);
  }
  (this->FaurePermutationOffsets).ArrayNum = iVar7 + 1;
  *(int *)((this->FaurePermutationOffsets).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_68;
  if ((this == (FHaltonSequence *)&local_50) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar11 = (longlong)local_50.ArrayNum;
  if (local_50.ArrayNum != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_50.ArrayNum,(ForAnyElementType *)this,
                       &(this->FaurePermutations).ArrayNum,&(this->FaurePermutations).ArrayMax);
    memcpy((this->FaurePermutations).AllocatorInstance.Data + (longlong)iVar7 * 4,
           local_50.AllocatorInstance.Data,lVar11 << 2);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// FlattenPermutation @ 144a7de30

void __thiscall
FHaltonSequence::FlattenPermutation
          (FHaltonSequence *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int local_18 [4];
  
  local_18[0] = (this->FaurePermutations).ArrayNum;
  pFVar2 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->FaurePermutationOffsets).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FaurePermutationOffsets).ArrayNum;
  piVar1 = &(this->FaurePermutationOffsets).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->FaurePermutationOffsets).AllocatorInstance,piVar1);
  }
  (this->FaurePermutationOffsets).ArrayNum = iVar5 + 1;
  *(int *)((this->FaurePermutationOffsets).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_18[0];
  if (this == (FHaltonSequence *)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar5,(ForAnyElementType *)this,&(this->FaurePermutations).ArrayNum,
                       &(this->FaurePermutations).ArrayMax);
    memcpy((this->FaurePermutations).AllocatorInstance.Data + (longlong)iVar6 * 4,
           (param_1->AllocatorInstance).Data,(longlong)iVar5 << 2);
  }
  return;
}

// InitTables @ 144a99f70

void __thiscall
FHaltonSequence::InitTables
          (FHaltonSequence *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  BuildPermutation(this,0xf3,3,5,param_1);
  BuildPermutation(this,0x7d,5,3,param_1);
  BuildPermutation(this,0x157,7,3,param_1);
  BuildPermutation(this,0x79,0xb,2,param_1);
  BuildPermutation(this,0xa9,0xd,2,param_1);
  BuildPermutation(this,0x121,0x11,2,param_1);
  BuildPermutation(this,0x169,0x13,2,param_1);
  BuildPermutation(this,0x17,0x17,1,param_1);
  BuildPermutation(this,0x1d,0x1d,1,param_1);
  BuildPermutation(this,0x1f,0x1f,1,param_1);
  BuildPermutation(this,0x25,0x25,1,param_1);
  BuildPermutation(this,0x29,0x29,1,param_1);
  BuildPermutation(this,0x2b,0x2b,1,param_1);
  BuildPermutation(this,0x2f,0x2f,1,param_1);
  BuildPermutation(this,0x35,0x35,1,param_1);
  BuildPermutation(this,0x3b,0x3b,1,param_1);
  BuildPermutation(this,0x3d,0x3d,1,param_1);
  BuildPermutation(this,0x43,0x43,1,param_1);
  BuildPermutation(this,0x47,0x47,1,param_1);
  BuildPermutation(this,0x49,0x49,1,param_1);
  BuildPermutation(this,0x4f,0x4f,1,param_1);
  BuildPermutation(this,0x53,0x53,1,param_1);
  BuildPermutation(this,0x59,0x59,1,param_1);
  BuildPermutation(this,0x61,0x61,1,param_1);
  BuildPermutation(this,0x65,0x65,1,param_1);
  BuildPermutation(this,0x67,0x67,1,param_1);
  BuildPermutation(this,0x6b,0x6b,1,param_1);
  BuildPermutation(this,0x6d,0x6d,1,param_1);
  BuildPermutation(this,0x71,0x71,1,param_1);
  BuildPermutation(this,0x7f,0x7f,1,param_1);
  BuildPermutation(this,0x83,0x83,1,param_1);
  BuildPermutation(this,0x89,0x89,1,param_1);
  BuildPermutation(this,0x8b,0x8b,1,param_1);
  BuildPermutation(this,0x95,0x95,1,param_1);
  BuildPermutation(this,0x97,0x97,1,param_1);
  BuildPermutation(this,0x9d,0x9d,1,param_1);
  BuildPermutation(this,0xa3,0xa3,1,param_1);
  BuildPermutation(this,0xa7,0xa7,1,param_1);
  BuildPermutation(this,0xad,0xad,1,param_1);
  BuildPermutation(this,0xb3,0xb3,1,param_1);
  BuildPermutation(this,0xb5,0xb5,1,param_1);
  BuildPermutation(this,0xbf,0xbf,1,param_1);
  BuildPermutation(this,0xc1,0xc1,1,param_1);
  BuildPermutation(this,0xc5,0xc5,1,param_1);
  BuildPermutation(this,199,199,1,param_1);
  BuildPermutation(this,0xd3,0xd3,1,param_1);
  BuildPermutation(this,0xdf,0xdf,1,param_1);
  BuildPermutation(this,0xe3,0xe3,1,param_1);
  BuildPermutation(this,0xe5,0xe5,1,param_1);
  BuildPermutation(this,0xe9,0xe9,1,param_1);
  BuildPermutation(this,0xef,0xef,1,param_1);
  BuildPermutation(this,0xf1,0xf1,1,param_1);
  BuildPermutation(this,0xfb,0xfb,1,param_1);
  BuildPermutation(this,0x101,0x101,1,param_1);
  BuildPermutation(this,0x107,0x107,1,param_1);
  BuildPermutation(this,0x10d,0x10d,1,param_1);
  BuildPermutation(this,0x10f,0x10f,1,param_1);
  BuildPermutation(this,0x115,0x115,1,param_1);
  BuildPermutation(this,0x119,0x119,1,param_1);
  BuildPermutation(this,0x11b,0x11b,1,param_1);
  BuildPermutation(this,0x125,0x125,1,param_1);
  BuildPermutation(this,0x133,0x133,1,param_1);
  BuildPermutation(this,0x137,0x137,1,param_1);
  BuildPermutation(this,0x139,0x139,1,param_1);
  return;
}

// Invert @ 144a9bb20

int __thiscall
FHaltonSequence::Invert
          (FHaltonSequence *this,int param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar4 = 0;
  if (0 < param_2) {
    uVar6 = (ulonglong)(uint)param_2;
    do {
      uVar5 = param_3 % param_1;
      uVar3 = 0;
      if ((int)uVar5 < param_4->ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = iVar4 * param_1 +
              *(int *)((param_4->AllocatorInstance).Data + (longlong)(int)uVar5 * 4);
      uVar6 = uVar6 - 1;
      param_3 = param_3 / param_1;
    } while (uVar6 != 0);
  }
  return iVar4;
}

// Sample @ 144aadd10

float __thiscall FHaltonSequence::Sample(FHaltonSequence *this,int param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  float fVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  switch(param_1) {
  case 0:
    local_38.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_28.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
      fVar3 = Halton_Sample3(param_2,&local_28,&local_38);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample3(param_2,&local_28,&local_38);
    }
    break;
  case 1:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample5(param_2,&local_38,&local_28);
    break;
  case 2:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample7(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample7(param_2,&local_38,&local_28);
    }
    break;
  case 3:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample11(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample11(param_2,&local_38,&local_28);
    }
    break;
  case 4:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample13(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample13(param_2,&local_38,&local_28);
    }
    break;
  case 5:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample17(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample17(param_2,&local_38,&local_28);
    }
    break;
  case 6:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample19(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample19(param_2,&local_38,&local_28);
    }
    break;
  case 7:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample23(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample23(param_2,&local_38,&local_28);
    }
    break;
  case 8:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample29(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample29(param_2,&local_38,&local_28);
    }
    break;
  case 9:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample31(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample31(param_2,&local_38,&local_28);
    }
    break;
  case 10:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample37(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample37(param_2,&local_38,&local_28);
    }
    break;
  case 0xb:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample41(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample41(param_2,&local_38,&local_28);
    }
    break;
  case 0xc:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample43(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample43(param_2,&local_38,&local_28);
    }
    break;
  case 0xd:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample47(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample47(param_2,&local_38,&local_28);
    }
    break;
  case 0xe:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample53(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample53(param_2,&local_38,&local_28);
    }
    break;
  case 0xf:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample59(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample59(param_2,&local_38,&local_28);
    }
    break;
  case 0x10:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample61(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample61(param_2,&local_38,&local_28);
    }
    break;
  case 0x11:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample67(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample67(param_2,&local_38,&local_28);
    }
    break;
  case 0x12:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample71(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample71(param_2,&local_38,&local_28);
    }
    break;
  case 0x13:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample73(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample73(param_2,&local_38,&local_28);
    }
    break;
  case 0x14:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample79(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample79(param_2,&local_38,&local_28);
    }
    break;
  case 0x15:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample83(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample83(param_2,&local_38,&local_28);
    }
    break;
  case 0x16:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample89(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample89(param_2,&local_38,&local_28);
    }
    break;
  case 0x17:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
      fVar3 = Halton_Sample97(param_2,&local_38,&local_28);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
      fVar3 = Halton_Sample97(param_2,&local_38,&local_28);
    }
    break;
  case 0x18:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample101(param_2,&local_38,&local_28);
    break;
  case 0x19:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample103(param_2,&local_38,&local_28);
    break;
  case 0x1a:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample107(param_2,&local_38,&local_28);
    break;
  case 0x1b:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample109(param_2,&local_38,&local_28);
    break;
  case 0x1c:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample113(param_2,&local_38,&local_28);
    break;
  case 0x1d:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample127(param_2,&local_38,&local_28);
    break;
  case 0x1e:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample131(param_2,&local_38,&local_28);
    break;
  case 0x1f:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample137(param_2,&local_38,&local_28);
    break;
  case 0x20:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample139(param_2,&local_38,&local_28);
    break;
  case 0x21:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample149(param_2,&local_38,&local_28);
    break;
  case 0x22:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample151(param_2,&local_38,&local_28);
    break;
  case 0x23:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample157(param_2,&local_38,&local_28);
    break;
  case 0x24:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample163(param_2,&local_38,&local_28);
    break;
  case 0x25:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample167(param_2,&local_38,&local_28);
    break;
  case 0x26:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample173(param_2,&local_38,&local_28);
    break;
  case 0x27:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample179(param_2,&local_38,&local_28);
    break;
  case 0x28:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample181(param_2,&local_38,&local_28);
    break;
  case 0x29:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample191(param_2,&local_38,&local_28);
    break;
  case 0x2a:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample193(param_2,&local_38,&local_28);
    break;
  case 0x2b:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample197(param_2,&local_38,&local_28);
    break;
  case 0x2c:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample199(param_2,&local_38,&local_28);
    break;
  case 0x2d:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample211(param_2,&local_38,&local_28);
    break;
  case 0x2e:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample223(param_2,&local_38,&local_28);
    break;
  case 0x2f:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample227(param_2,&local_38,&local_28);
    break;
  case 0x30:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample229(param_2,&local_38,&local_28);
    break;
  case 0x31:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample233(param_2,&local_38,&local_28);
    break;
  case 0x32:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample239(param_2,&local_38,&local_28);
    break;
  case 0x33:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample241(param_2,&local_38,&local_28);
    break;
  case 0x34:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample251(param_2,&local_38,&local_28);
    break;
  case 0x35:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample257(param_2,&local_38,&local_28);
    break;
  case 0x36:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample263(param_2,&local_38,&local_28);
    break;
  case 0x37:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample269(param_2,&local_38,&local_28);
    break;
  case 0x38:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample271(param_2,&local_38,&local_28);
    break;
  case 0x39:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample277(param_2,&local_38,&local_28);
    break;
  case 0x3a:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample281(param_2,&local_38,&local_28);
    break;
  case 0x3b:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample283(param_2,&local_38,&local_28);
    break;
  case 0x3c:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample293(param_2,&local_38,&local_28);
    break;
  case 0x3d:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample307(param_2,&local_38,&local_28);
    break;
  case 0x3e:
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_28,(int *)(this->FaurePermutationOffsets).AllocatorInstance.Data,
               (this->FaurePermutationOffsets).ArrayNum,0);
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
              (&local_38,(int *)(this->FaurePermutations).AllocatorInstance.Data,
               (this->FaurePermutations).ArrayNum,0);
    fVar3 = Halton_Sample311(param_2,&local_38,&local_28);
    break;
  default:
    local_28.ArrayNum = (this->FaurePermutationOffsets).ArrayNum;
    lVar2 = (longlong)local_28.ArrayNum;
    pFVar1 = (this->FaurePermutationOffsets).AllocatorInstance.Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    local_38.ArrayNum = (this->FaurePermutations).ArrayNum;
    lVar2 = (longlong)local_38.ArrayNum;
    pFVar1 = (this->FaurePermutations).AllocatorInstance.Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    fVar3 = Halton_Sample313(param_2,&local_38,&local_28);
  }
  return fVar3;
}

