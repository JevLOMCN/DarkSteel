// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147519230

UScriptStruct * __cdecl FAnimSetMeshLinkup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSetMeshLinkup.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSetMeshLinkup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSetMeshLinkup,(UObject *)pUVar1,
                         L"AnimSetMeshLinkup");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSetMeshLinkup.OuterSingleton;
}

// BuildLinkup @ 14754a670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimSetMeshLinkup::BuildLinkup(FAnimSetMeshLinkup *this,USkeletalMesh *param_1,UAnimSet *param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement FVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong local_98;
  FName local_90;
  ForAnyElementType local_88;
  int local_80 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  
  lVar9 = (**(code **)(param_1->_padding_ + 800))(param_1);
  uVar15 = *(uint *)(lVar9 + 0x28);
  lVar9 = (longlong)(int)uVar15;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &(this->BoneToTrackTable).ArrayMax;
  piVar2 = &(this->BoneToTrackTable).ArrayNum;
  uVar18 = 0;
  *piVar2 = 0;
  if (*piVar1 != uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,(ForAnyElementType *)this,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar15,(ForAnyElementType *)this,piVar2,piVar1);
  uVar22 = uVar18;
  uVar23 = uVar18;
  if (0 < (int)uVar15) {
    do {
      lVar10 = (**(code **)(param_1->_padding_ + 800))();
      uVar19 = (uint)uVar22;
      uVar15 = 0;
      if ((int)uVar19 < *(int *)(lVar10 + 0x28)) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar20 = (param_2->TrackBoneNames).AllocatorInstance.Data;
      for (pFVar16 = pFVar20; pFVar16 != pFVar20 + (longlong)(param_2->TrackBoneNames).ArrayNum * 8;
          pFVar16 = pFVar16 + 8) {
        if (*(longlong *)pFVar16 == *(longlong *)(uVar23 + *(longlong *)(lVar10 + 0x20))) {
          uVar13 = (undefined4)((longlong)pFVar16 - (longlong)pFVar20 >> 3);
          goto LAB_14754a7bb;
        }
      }
      uVar13 = 0xffffffff;
LAB_14754a7bb:
      uVar15 = 0;
      if ((int)uVar19 < *piVar2) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)((this->BoneToTrackTable).AllocatorInstance.Data + uVar18 * 4) = uVar13;
      uVar18 = uVar18 + 1;
      uVar22 = (ulonglong)(uVar19 + 1);
      uVar23 = uVar23 + 0xc;
    } while ((longlong)uVar18 < lVar9);
  }
  uVar15 = (param_2->TrackBoneNames).ArrayNum;
  pTVar3 = &param_2->BoneUseAnimTranslation;
  piVar1 = &(param_2->BoneUseAnimTranslation).ArrayNum;
  if ((param_2->BoneUseAnimTranslation).ArrayNum != uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    piVar2 = &(param_2->BoneUseAnimTranslation).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar15,&pTVar3->AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar15,&pTVar3->AllocatorInstance,piVar1,piVar2);
    pTVar4 = &param_2->ForceUseMeshTranslation;
    piVar2 = &(param_2->ForceUseMeshTranslation).ArrayMax;
    (param_2->ForceUseMeshTranslation).ArrayNum = 0;
    if (*piVar2 != uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar15,&pTVar4->AllocatorInstance,0,piVar2);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar15,&pTVar4->AllocatorInstance,&(param_2->ForceUseMeshTranslation).ArrayNum,
               piVar2);
    uVar19 = 0;
    if (0 < (int)uVar15) {
      lVar10 = 0;
      do {
        uVar17 = ~uVar19 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar19 < (param_2->TrackBoneNames).ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar16 = (param_2->UseTranslationBoneNames).AllocatorInstance.Data;
        lVar24 = *(longlong *)((param_2->TrackBoneNames).AllocatorInstance.Data + lVar10 * 8);
        pFVar20 = pFVar16 + (longlong)(param_2->UseTranslationBoneNames).ArrayNum * 8;
        for (; pFVar16 != pFVar20; pFVar16 = pFVar16 + 8) {
          if (*(longlong *)pFVar16 == lVar24) {
            FVar21 = (FScriptContainerElement)0x1;
            goto LAB_14754a97a;
          }
        }
        FVar21 = (FScriptContainerElement)0x0;
LAB_14754a97a:
        uVar14 = 0;
        if ((int)uVar19 < *piVar1) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pTVar3->AllocatorInstance).Data[lVar10] = FVar21;
        pFVar16 = (param_2->ForceMeshTranslationBoneNames).AllocatorInstance.Data;
        pFVar20 = pFVar16 + (longlong)(param_2->ForceMeshTranslationBoneNames).ArrayNum * 8;
        for (; pFVar16 != pFVar20; pFVar16 = pFVar16 + 8) {
          if (*(longlong *)pFVar16 == lVar24) {
            FVar21 = (FScriptContainerElement)0x1;
            goto LAB_14754a9f9;
          }
        }
        FVar21 = (FScriptContainerElement)0x0;
LAB_14754a9f9:
        uVar14 = 0;
        if ((int)uVar19 < (param_2->ForceUseMeshTranslation).ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar19 = uVar19 + 1;
        (pTVar4->AllocatorInstance).Data[lVar10] = FVar21;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar15);
    }
  }
  iVar12 = (param_2->TrackBoneNames).ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar12,&local_88,local_80,local_80 + 1);
  memset(local_88.Data + iVar7,0,(longlong)iVar12);
  uVar19 = (**(code **)(param_2->_padding_ + 0x2b0))(param_2,param_1);
  uVar15 = 0;
  if ((int)uVar19 < (param_2->LinkupCache).ArrayNum) {
    uVar15 = ~uVar19 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar15 = 0;
  pFVar20 = (param_2->LinkupCache).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10;
  if (0 < lVar9) {
    local_98 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar15 < *(int *)(pFVar20 + 8)) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar19 = *(uint *)(*(longlong *)pFVar20 + local_98 * 4);
      if (uVar19 != 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar19 < local_80[0]) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar12 = local_80[0];
        if (local_88.Data[(int)uVar19] != (FScriptContainerElement)0x0) {
          if (2 < (byte)LogAnimation._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)param_2,&local_78,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          uVar14 = 0;
          lVar24 = 0;
          lVar10 = 0;
          do {
            uVar17 = 0;
            if ((int)uVar14 < *(int *)(pFVar20 + 8)) {
              uVar17 = ~uVar14 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar17 = *(uint *)(*(longlong *)pFVar20 + lVar24 * 4);
            if ((uVar17 == uVar19) && (2 < (byte)LogAnimation._0_1_)) {
              uVar8 = 0;
              if ((int)uVar17 < (param_2->TrackBoneNames).ArrayNum) {
                uVar8 = ~uVar17 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              ::FName::ToString((FName *)((param_2->TrackBoneNames).AllocatorInstance.Data +
                                         (longlong)(int)uVar17 * 8),&local_58);
              lVar11 = (**(code **)(param_1->_padding_ + 800))();
              uVar17 = 0;
              if ((int)uVar14 < *(int *)(lVar11 + 0x28)) {
                uVar17 = ~uVar14 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_90 = *(FName *)(lVar10 + *(longlong *)(lVar11 + 0x20));
              ::FName::ToString(&local_90,&local_68);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
            uVar14 = uVar14 + 1;
            lVar24 = lVar24 + 1;
            lVar10 = lVar10 + 0xc;
          } while (lVar24 < lVar9);
          iVar12 = local_80[0];
        }
        uVar14 = 0;
        if ((int)uVar19 < iVar12) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_88.Data[(int)uVar19] = (FScriptContainerElement)0x1;
      }
      uVar15 = uVar15 + 1;
      local_98 = local_98 + 1;
    } while (local_98 < lVar9);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

