// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 18

// BuildNeighbors @ 143389db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FHullConnectivity<float>::BuildNeighbors
          (FHullConnectivity<float> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong local_c0;
  int local_b8;
  int local_b4;
  uint local_b0;
  FIndex2i_u_0 local_ac;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_a0;
  TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar7 = param_1->ArrayNum;
  local_98.Pairs.Elements._0_8_ = 0;
  local_98.Pairs.Elements._8_8_ = 0;
  local_98.Pairs.Elements._32_8_ = 0;
  local_98.Pairs.Elements._40_4_ = 0;
  local_98.Pairs.Elements._44_4_ = 0x80;
  local_98.Pairs.Elements._48_4_ = 0xffffffff;
  local_98.Pairs.Elements._52_4_ = 0;
  local_98.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Pairs.HashSize = 0;
  local_b0 = 0;
  local_a0 = param_1;
  if (0 < iVar7) {
    do {
      uVar5 = local_b0;
      uVar10 = 0;
      if ((int)local_b0 < iVar7) {
        uVar10 = ~local_b0 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (ulonglong)(int)local_b0;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar14 = pFVar2 + (longlong)(int)uVar5 * 0xc;
      local_ac._s_0.A = *(undefined4 *)(pFVar2 + (longlong)(int)uVar5 * 0xc + 8);
      local_ac._s_0.B = *(undefined4 *)pFVar14;
      TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
      ::Emplace<UE::Geometry::FIndex2i,int_const_&>
                (&local_98,(FIndex2i *)&local_ac._s_0,(int *)&local_b0);
      local_ac._s_0.A = *(undefined4 *)pFVar14;
      local_ac._s_0.B = *(undefined4 *)(pFVar14 + 4);
      TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
      ::Emplace<UE::Geometry::FIndex2i,int_const_&>
                (&local_98,(FIndex2i *)&local_ac._s_0,(int *)&local_b0);
      local_ac._s_0.A = *(undefined4 *)(pFVar14 + 4);
      local_ac._s_0.B = *(undefined4 *)(pFVar14 + 8);
      TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
      ::Emplace<UE::Geometry::FIndex2i,int_const_&>
                (&local_98,(FIndex2i *)&local_ac._s_0,(int *)&local_b0);
      iVar7 = param_1->ArrayNum;
      local_b0 = local_b0 + 1;
    } while ((int)local_b0 < iVar7);
  }
  uVar9 = 0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriNeighbors,iVar7,Default);
  iVar7 = param_1->ArrayNum;
  uVar13 = uVar9;
  uVar15 = uVar9;
  if (0 < iVar7) {
    do {
      uVar11 = (uint)uVar9;
      uVar10 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar10;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (ulonglong)(int)uVar11;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar14 = (param_1->AllocatorInstance).Data + uVar15;
      local_b8 = *(int *)pFVar14;
      local_b4 = *(int *)(pFVar14 + 8);
      uVar5 = FCrc::MemCrc_DEPRECATED(&local_b8,8,0);
      if (local_98.Pairs.Elements._8_4_ != local_98.Pairs.Elements._52_4_) {
        FVar12 = (ForElementType<FSetElementId>)&local_98.Pairs.Hash;
        if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar12 = local_98.Pairs.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(local_98.Pairs.HashSize - 1U & uVar5) * 4);
        while (iVar7 != -1) {
          lVar1 = local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14;
          if ((*(int *)(local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14) == local_b8) &&
             (*(int *)(lVar1 + 4) == local_b4)) {
            if (iVar7 != -1) {
              puVar6 = (undefined4 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar6 = (undefined4 *)0x0;
              }
              if (puVar6 != (undefined4 *)0x0) {
                uVar8 = *puVar6;
                goto LAB_143389ff9;
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0xc);
        }
      }
      uVar8 = 0xffffffff;
LAB_143389ff9:
      iVar7 = (this->TriNeighbors).ArrayNum;
      uVar5 = 0;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (local_c8 = uVar13, local_c0 = (longlong)iVar7,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)((this->TriNeighbors).AllocatorInstance.Data + uVar15 + 8) = uVar8;
      local_b8 = *(int *)(pFVar14 + 4);
      local_b4 = *(int *)pFVar14;
      uVar5 = FCrc::MemCrc_DEPRECATED(&local_b8,8,0);
      if (local_98.Pairs.Elements._8_4_ != local_98.Pairs.Elements._52_4_) {
        FVar12 = (ForElementType<FSetElementId>)&local_98.Pairs.Hash;
        if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar12 = local_98.Pairs.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(local_98.Pairs.HashSize - 1U & uVar5) * 4);
        while (iVar7 != -1) {
          lVar1 = local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14;
          if ((*(int *)(local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14) == local_b8) &&
             (*(int *)(lVar1 + 4) == local_b4)) {
            if (iVar7 != -1) {
              puVar6 = (undefined4 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar6 = (undefined4 *)0x0;
              }
              if (puVar6 != (undefined4 *)0x0) {
                uVar8 = *puVar6;
                goto LAB_14338a0cb;
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0xc);
        }
      }
      uVar8 = 0xffffffff;
LAB_14338a0cb:
      iVar7 = (this->TriNeighbors).ArrayNum;
      uVar5 = 0;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (local_c8 = uVar13, local_c0 = (longlong)iVar7,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)((this->TriNeighbors).AllocatorInstance.Data + uVar15) = uVar8;
      local_b8 = *(int *)(pFVar14 + 8);
      local_b4 = *(int *)(pFVar14 + 4);
      uVar5 = FCrc::MemCrc_DEPRECATED(&local_b8,8,0);
      if (local_98.Pairs.Elements._8_4_ != local_98.Pairs.Elements._52_4_) {
        FVar12 = (ForElementType<FSetElementId>)&local_98.Pairs.Hash;
        if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar12 = local_98.Pairs.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(local_98.Pairs.HashSize - 1U & uVar5) * 4);
        while (iVar7 != -1) {
          lVar1 = local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14;
          if ((*(int *)(local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14) == local_b8) &&
             (*(int *)(lVar1 + 4) == local_b4)) {
            if (iVar7 != -1) {
              puVar6 = (undefined4 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar6 = (undefined4 *)0x0;
              }
              if (puVar6 != (undefined4 *)0x0) {
                uVar8 = *puVar6;
                goto LAB_14338a19b;
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0xc);
        }
      }
      uVar8 = 0xffffffff;
LAB_14338a19b:
      iVar7 = (this->TriNeighbors).ArrayNum;
      uVar5 = 0;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (local_c8 = uVar13, local_c0 = (longlong)iVar7,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = (ulonglong)(uVar11 + 1);
      *(undefined4 *)((this->TriNeighbors).AllocatorInstance.Data + uVar15 + 4) = uVar8;
      iVar7 = local_a0->ArrayNum;
      uVar13 = uVar13 + 1;
      param_1 = local_a0;
      uVar15 = uVar15 + 0xc;
    } while ((int)(uVar11 + 1) < iVar7);
  }
  local_98.Pairs.HashSize = 0;
  if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  return;
}

// BuildNeighbors @ 14338a2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FHullConnectivity<double>::BuildNeighbors
          (FHullConnectivity<double> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong local_c0;
  int local_b8;
  int local_b4;
  uint local_b0;
  FIndex2i_u_0 local_ac;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_a0;
  TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar7 = param_1->ArrayNum;
  local_98.Pairs.Elements._0_8_ = 0;
  local_98.Pairs.Elements._8_8_ = 0;
  local_98.Pairs.Elements._32_8_ = 0;
  local_98.Pairs.Elements._40_4_ = 0;
  local_98.Pairs.Elements._44_4_ = 0x80;
  local_98.Pairs.Elements._48_4_ = 0xffffffff;
  local_98.Pairs.Elements._52_4_ = 0;
  local_98.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Pairs.HashSize = 0;
  local_b0 = 0;
  local_a0 = param_1;
  if (0 < iVar7) {
    do {
      uVar5 = local_b0;
      uVar10 = 0;
      if ((int)local_b0 < iVar7) {
        uVar10 = ~local_b0 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (ulonglong)(int)local_b0;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar14 = pFVar2 + (longlong)(int)uVar5 * 0xc;
      local_ac._s_0.A = *(undefined4 *)(pFVar2 + (longlong)(int)uVar5 * 0xc + 8);
      local_ac._s_0.B = *(undefined4 *)pFVar14;
      TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
      ::Emplace<UE::Geometry::FIndex2i,int_const_&>
                (&local_98,(FIndex2i *)&local_ac._s_0,(int *)&local_b0);
      local_ac._s_0.A = *(undefined4 *)pFVar14;
      local_ac._s_0.B = *(undefined4 *)(pFVar14 + 4);
      TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
      ::Emplace<UE::Geometry::FIndex2i,int_const_&>
                (&local_98,(FIndex2i *)&local_ac._s_0,(int *)&local_b0);
      local_ac._s_0.A = *(undefined4 *)(pFVar14 + 4);
      local_ac._s_0.B = *(undefined4 *)(pFVar14 + 8);
      TMapBase<UE::Geometry::FIndex2i,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex2i,int,0>_>
      ::Emplace<UE::Geometry::FIndex2i,int_const_&>
                (&local_98,(FIndex2i *)&local_ac._s_0,(int *)&local_b0);
      iVar7 = param_1->ArrayNum;
      local_b0 = local_b0 + 1;
    } while ((int)local_b0 < iVar7);
  }
  uVar9 = 0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriNeighbors,iVar7,Default);
  iVar7 = param_1->ArrayNum;
  uVar13 = uVar9;
  uVar15 = uVar9;
  if (0 < iVar7) {
    do {
      uVar11 = (uint)uVar9;
      uVar10 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar10;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (ulonglong)(int)uVar11;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar14 = (param_1->AllocatorInstance).Data + uVar15;
      local_b8 = *(int *)pFVar14;
      local_b4 = *(int *)(pFVar14 + 8);
      uVar5 = FCrc::MemCrc_DEPRECATED(&local_b8,8,0);
      if (local_98.Pairs.Elements._8_4_ != local_98.Pairs.Elements._52_4_) {
        FVar12 = (ForElementType<FSetElementId>)&local_98.Pairs.Hash;
        if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar12 = local_98.Pairs.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(local_98.Pairs.HashSize - 1U & uVar5) * 4);
        while (iVar7 != -1) {
          lVar1 = local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14;
          if ((*(int *)(local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14) == local_b8) &&
             (*(int *)(lVar1 + 4) == local_b4)) {
            if (iVar7 != -1) {
              puVar6 = (undefined4 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar6 = (undefined4 *)0x0;
              }
              if (puVar6 != (undefined4 *)0x0) {
                uVar8 = *puVar6;
                goto LAB_14338a539;
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0xc);
        }
      }
      uVar8 = 0xffffffff;
LAB_14338a539:
      iVar7 = (this->TriNeighbors).ArrayNum;
      uVar5 = 0;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (local_c8 = uVar13, local_c0 = (longlong)iVar7,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)((this->TriNeighbors).AllocatorInstance.Data + uVar15 + 8) = uVar8;
      local_b8 = *(int *)(pFVar14 + 4);
      local_b4 = *(int *)pFVar14;
      uVar5 = FCrc::MemCrc_DEPRECATED(&local_b8,8,0);
      if (local_98.Pairs.Elements._8_4_ != local_98.Pairs.Elements._52_4_) {
        FVar12 = (ForElementType<FSetElementId>)&local_98.Pairs.Hash;
        if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar12 = local_98.Pairs.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(local_98.Pairs.HashSize - 1U & uVar5) * 4);
        while (iVar7 != -1) {
          lVar1 = local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14;
          if ((*(int *)(local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14) == local_b8) &&
             (*(int *)(lVar1 + 4) == local_b4)) {
            if (iVar7 != -1) {
              puVar6 = (undefined4 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar6 = (undefined4 *)0x0;
              }
              if (puVar6 != (undefined4 *)0x0) {
                uVar8 = *puVar6;
                goto LAB_14338a60b;
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0xc);
        }
      }
      uVar8 = 0xffffffff;
LAB_14338a60b:
      iVar7 = (this->TriNeighbors).ArrayNum;
      uVar5 = 0;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (local_c8 = uVar13, local_c0 = (longlong)iVar7,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)((this->TriNeighbors).AllocatorInstance.Data + uVar15) = uVar8;
      local_b8 = *(int *)(pFVar14 + 8);
      local_b4 = *(int *)(pFVar14 + 4);
      uVar5 = FCrc::MemCrc_DEPRECATED(&local_b8,8,0);
      if (local_98.Pairs.Elements._8_4_ != local_98.Pairs.Elements._52_4_) {
        FVar12 = (ForElementType<FSetElementId>)&local_98.Pairs.Hash;
        if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar12 = local_98.Pairs.Hash.SecondaryData;
        }
        iVar7 = *(int *)((longlong)FVar12 + (ulonglong)(local_98.Pairs.HashSize - 1U & uVar5) * 4);
        while (iVar7 != -1) {
          lVar1 = local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14;
          if ((*(int *)(local_98.Pairs.Elements._0_8_ + (longlong)iVar7 * 0x14) == local_b8) &&
             (*(int *)(lVar1 + 4) == local_b4)) {
            if (iVar7 != -1) {
              puVar6 = (undefined4 *)(lVar1 + 8);
              if (lVar1 == 0) {
                puVar6 = (undefined4 *)0x0;
              }
              if (puVar6 != (undefined4 *)0x0) {
                uVar8 = *puVar6;
                goto LAB_14338a6db;
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0xc);
        }
      }
      uVar8 = 0xffffffff;
LAB_14338a6db:
      iVar7 = (this->TriNeighbors).ArrayNum;
      uVar5 = 0;
      if ((int)uVar11 < iVar7) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (local_c8 = uVar13, local_c0 = (longlong)iVar7,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = (ulonglong)(uVar11 + 1);
      *(undefined4 *)((this->TriNeighbors).AllocatorInstance.Data + uVar15 + 4) = uVar8;
      iVar7 = local_a0->ArrayNum;
      uVar13 = uVar13 + 1;
      param_1 = local_a0;
      uVar15 = uVar15 + 0xc;
    } while ((int)(uVar11 + 1) < iVar7);
  }
  local_98.Pairs.HashSize = 0;
  if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex2i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  return;
}

// ChooseVisiblePoint @ 14338d1c0

FIndex2i __thiscall
UE::Geometry::FHullConnectivity<float>::ChooseVisiblePoint
          (FHullConnectivity<float> *this,bool param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FIndex2i FVar9;
  longlong lVar10;
  undefined7 in_register_00000011;
  FIndex2i_u_0 FVar11;
  uint uVar12;
  char in_R8B;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  FVar11._1_7_ = in_register_00000011;
  FVar11._s_0.A._0_1_ = param_1;
  *(undefined8 *)FVar11 = 0xffffffffffffffff;
  iVar4 = *(int *)&(this->TrisWithPoints).Elements.field_0x28;
  puVar1 = &(this->TrisWithPoints).Elements.field_0x10;
  iVar13 = 0;
  if (in_R8B == '\0') {
    iVar15 = 0;
    iVar8 = 0;
    if (iVar4 != 0) {
      puVar16 = *(uint **)&(this->TrisWithPoints).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar7 = *puVar16;
      while (uVar7 == 0) {
        lVar10 = (longlong)iVar15;
        iVar13 = iVar13 + 0x20;
        iVar15 = iVar15 + 1;
        iVar8 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14338d56e;
        uVar7 = puVar16[lVar10 + 1];
      }
      uVar2 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = iVar13 + -1 + (int)lVar10;
      if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
    }
LAB_14338d56e:
    if (iVar8 < iVar4) {
      uVar7 = *(uint *)(*(longlong *)&(this->TrisWithPoints).Elements + (longlong)iVar8 * 0xc);
      *(uint *)FVar11 = uVar7;
      uVar17 = 0;
      if ((int)uVar7 < (this->VisiblePoints).ArrayNum) {
        uVar17 = ~uVar7 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
        return (FIndex2i)FVar9.field0_0x0;
      }
      *(uint *)((longlong)FVar11 + 4) =
           *(uint *)((this->VisiblePoints).AllocatorInstance.Data +
                    (longlong)(int)uVar7 * 0x40 + 0x10);
    }
  }
  else {
    uVar7 = 1;
    uVar18 = (undefined4)__real_bff0000000000000;
    uVar19 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    iVar15 = 0;
    iVar8 = 0;
    if (iVar4 != 0) {
      puVar16 = *(uint **)&(this->TrisWithPoints).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar17 = *puVar16;
      while (uVar17 == 0) {
        lVar10 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar8 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14338d28d;
        uVar17 = puVar16[lVar10 + 1];
      }
      uVar7 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iVar8 = iVar15 + -1 + local_res20;
      if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
    }
LAB_14338d28d:
    local_res10 = *(uint *)&(this->TrisWithPoints).Elements.field_0x28;
    uVar17 = local_res10 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uVar7,iVar13);
    TStack_78.CurrentBitIndex = iVar8;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)local_res10 >> 5;
    TStack_78._28_4_ = iVar8;
    TStack_78.BaseBitIndex = iVar15;
    uStack_58 = CONCAT44(uStack_84,
                         *(int *)&(this->TrisWithPoints).Elements.field_0x8 -
                         *(int *)&(this->TrisWithPoints).Elements.field_0x34);
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)local_res10 < 0) || (iVar4 < (int)local_res10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
      return (FIndex2i)FVar9.field0_0x0;
    }
    uVar7 = *(uint *)&(this->TrisWithPoints).Elements.field_0x28;
    if (local_res10 != uVar7) {
      puVar14 = *(undefined1 **)&(this->TrisWithPoints).Elements.field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)local_res10 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        local_res10 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14338d390;
        uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res10 = (int)lVar10 + -1 + uVar17;
      if ((int)uVar7 < (int)local_res10) {
        local_res10 = uVar7;
      }
    }
LAB_14338d390:
    while( true ) {
      if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 -
          *(int *)&(this->TrisWithPoints).Elements.field_0x34 != (int)uStack_58) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_78.CurrentBitIndex == local_res10) &&
         (TStack_78.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)&(this->TrisWithPoints).Elements.field_0x10))
      break;
      uVar7 = *(uint *)(*(longlong *)&(this->TrisWithPoints).Elements +
                       (longlong)TStack_78.CurrentBitIndex * 0xc);
      uVar12 = ~uVar7 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar7 < (this->VisiblePoints).ArrayNum) {
        uVar17 = uVar12;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
        return (FIndex2i)FVar9.field0_0x0;
      }
      lVar10 = (longlong)(int)uVar7 * 0x40;
      if ((double)CONCAT44(uVar19,uVar18) <
          *(double *)((this->VisiblePoints).AllocatorInstance.Data + lVar10 + 0x18)) {
        *(uint *)FVar11 = uVar7;
        uVar17 = 0;
        if ((int)uVar7 < (this->VisiblePoints).ArrayNum) {
          uVar17 = uVar12;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
          return (FIndex2i)FVar9.field0_0x0;
        }
        *(uint *)((longlong)FVar11 + 4) =
             *(uint *)((this->VisiblePoints).AllocatorInstance.Data + lVar10 + 0x10);
        uVar17 = 0;
        if ((int)uVar7 < (this->VisiblePoints).ArrayNum) {
          uVar17 = uVar12;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
          return (FIndex2i)FVar9.field0_0x0;
        }
        uVar3 = *(undefined8 *)((this->VisiblePoints).AllocatorInstance.Data + lVar10 + 0x18);
        uVar18 = (undefined4)uVar3;
        uVar19 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return (FIndex2i)FVar11;
}

// ChooseVisiblePoint @ 14338d600

FIndex2i __thiscall
UE::Geometry::FHullConnectivity<double>::ChooseVisiblePoint
          (FHullConnectivity<double> *this,bool param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FIndex2i FVar9;
  longlong lVar10;
  undefined7 in_register_00000011;
  FIndex2i_u_0 FVar11;
  uint uVar12;
  char in_R8B;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  FVar11._1_7_ = in_register_00000011;
  FVar11._s_0.A._0_1_ = param_1;
  *(undefined8 *)FVar11 = 0xffffffffffffffff;
  iVar4 = *(int *)&(this->TrisWithPoints).Elements.field_0x28;
  puVar1 = &(this->TrisWithPoints).Elements.field_0x10;
  iVar13 = 0;
  if (in_R8B == '\0') {
    iVar15 = 0;
    iVar8 = 0;
    if (iVar4 != 0) {
      puVar16 = *(uint **)&(this->TrisWithPoints).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar7 = *puVar16;
      while (uVar7 == 0) {
        lVar10 = (longlong)iVar15;
        iVar13 = iVar13 + 0x20;
        iVar15 = iVar15 + 1;
        iVar8 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14338d9ae;
        uVar7 = puVar16[lVar10 + 1];
      }
      uVar2 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = iVar13 + -1 + (int)lVar10;
      if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
    }
LAB_14338d9ae:
    if (iVar8 < iVar4) {
      uVar7 = *(uint *)(*(longlong *)&(this->TrisWithPoints).Elements + (longlong)iVar8 * 0xc);
      *(uint *)FVar11 = uVar7;
      uVar17 = 0;
      if ((int)uVar7 < (this->VisiblePoints).ArrayNum) {
        uVar17 = ~uVar7 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
        return (FIndex2i)FVar9.field0_0x0;
      }
      *(uint *)((longlong)FVar11 + 4) =
           *(uint *)((this->VisiblePoints).AllocatorInstance.Data +
                    (longlong)(int)uVar7 * 0x40 + 0x10);
    }
  }
  else {
    uVar7 = 1;
    uVar18 = (undefined4)__real_bff0000000000000;
    uVar19 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    iVar15 = 0;
    iVar8 = 0;
    if (iVar4 != 0) {
      puVar16 = *(uint **)&(this->TrisWithPoints).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar17 = *puVar16;
      while (uVar17 == 0) {
        lVar10 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar8 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14338d6cd;
        uVar17 = puVar16[lVar10 + 1];
      }
      uVar7 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iVar8 = iVar15 + -1 + local_res20;
      if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
    }
LAB_14338d6cd:
    local_res10 = *(uint *)&(this->TrisWithPoints).Elements.field_0x28;
    uVar17 = local_res10 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uVar7,iVar13);
    TStack_78.CurrentBitIndex = iVar8;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)local_res10 >> 5;
    TStack_78._28_4_ = iVar8;
    TStack_78.BaseBitIndex = iVar15;
    uStack_58 = CONCAT44(uStack_84,
                         *(int *)&(this->TrisWithPoints).Elements.field_0x8 -
                         *(int *)&(this->TrisWithPoints).Elements.field_0x34);
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)local_res10 < 0) || (iVar4 < (int)local_res10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
      return (FIndex2i)FVar9.field0_0x0;
    }
    uVar7 = *(uint *)&(this->TrisWithPoints).Elements.field_0x28;
    if (local_res10 != uVar7) {
      puVar14 = *(undefined1 **)&(this->TrisWithPoints).Elements.field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)local_res10 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar13;
        uVar17 = uVar17 + 0x20;
        iVar13 = iVar13 + 1;
        local_res10 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14338d7d0;
        uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res10 = (int)lVar10 + -1 + uVar17;
      if ((int)uVar7 < (int)local_res10) {
        local_res10 = uVar7;
      }
    }
LAB_14338d7d0:
    while( true ) {
      if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 -
          *(int *)&(this->TrisWithPoints).Elements.field_0x34 != (int)uStack_58) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_78.CurrentBitIndex == local_res10) &&
         (TStack_78.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)&(this->TrisWithPoints).Elements.field_0x10))
      break;
      uVar7 = *(uint *)(*(longlong *)&(this->TrisWithPoints).Elements +
                       (longlong)TStack_78.CurrentBitIndex * 0xc);
      uVar12 = ~uVar7 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar7 < (this->VisiblePoints).ArrayNum) {
        uVar17 = uVar12;
      }
      if ((uVar17 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
        return (FIndex2i)FVar9.field0_0x0;
      }
      lVar10 = (longlong)(int)uVar7 * 0x40;
      if ((double)CONCAT44(uVar19,uVar18) <
          *(double *)((this->VisiblePoints).AllocatorInstance.Data + lVar10 + 0x18)) {
        *(uint *)FVar11 = uVar7;
        uVar17 = 0;
        if ((int)uVar7 < (this->VisiblePoints).ArrayNum) {
          uVar17 = uVar12;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
          return (FIndex2i)FVar9.field0_0x0;
        }
        *(uint *)((longlong)FVar11 + 4) =
             *(uint *)((this->VisiblePoints).AllocatorInstance.Data + lVar10 + 0x10);
        uVar17 = 0;
        if ((int)uVar7 < (this->VisiblePoints).ArrayNum) {
          uVar17 = uVar12;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          FVar9.field0_0x0 = (FIndex2i_u_0)(*pcVar5)();
          return (FIndex2i)FVar9.field0_0x0;
        }
        uVar3 = *(undefined8 *)((this->VisiblePoints).AllocatorInstance.Data + lVar10 + 0x18);
        uVar18 = (undefined4)uVar3;
        uVar19 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return (FIndex2i)FVar11;
}

// ClearVisiblePointsData @ 14338da80

void __thiscall
UE::Geometry::FHullConnectivity<float>::ClearVisiblePointsData
          (FHullConnectivity<float> *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  uint uVar7;
  int local_res10 [2];
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->VisiblePoints).ArrayNum) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = (longlong)param_1 * 0x40;
  if (0 < *(int *)((this->VisiblePoints).AllocatorInstance.Data + lVar6 + 8)) {
    local_res10[0] = param_1;
    if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
        *(int *)&(this->TrisWithPoints).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&this->TrisWithPoints,param_1,local_res10);
    }
    uVar4 = 0;
    if (param_1 < (this->VisiblePoints).ArrayNum) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
              (param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((this->VisiblePoints).AllocatorInstance.Data + lVar6));
    uVar4 = 0;
    if (param_1 < (this->VisiblePoints).ArrayNum) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (this->VisiblePoints).AllocatorInstance.Data + lVar6;
    iVar1 = *(int *)(pFVar5 + 0xc);
    *(undefined4 *)&pFVar5[8].field_0x0 = 0;
    if (iVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar5,0,(int *)(pFVar5 + 0xc));
    }
    *(undefined4 *)&pFVar5[0x10].field_0x0 = 0xffffffff;
    *(undefined8 *)&pFVar5[0x18].field_0x0 = 0xffefffffffffffff;
  }
  return;
}

// ClearVisiblePointsData @ 14338dc20

void __thiscall
UE::Geometry::FHullConnectivity<double>::ClearVisiblePointsData
          (FHullConnectivity<double> *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  uint uVar7;
  int local_res10 [2];
  
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->VisiblePoints).ArrayNum) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = (longlong)param_1 * 0x40;
  if (0 < *(int *)((this->VisiblePoints).AllocatorInstance.Data + lVar6 + 8)) {
    local_res10[0] = param_1;
    if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
        *(int *)&(this->TrisWithPoints).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&this->TrisWithPoints,param_1,local_res10);
    }
    uVar4 = 0;
    if (param_1 < (this->VisiblePoints).ArrayNum) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
              (param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((this->VisiblePoints).AllocatorInstance.Data + lVar6));
    uVar4 = 0;
    if (param_1 < (this->VisiblePoints).ArrayNum) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (this->VisiblePoints).AllocatorInstance.Data + lVar6;
    iVar1 = *(int *)(pFVar5 + 0xc);
    *(undefined4 *)&pFVar5[8].field_0x0 = 0;
    if (iVar1 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar5,0,(int *)(pFVar5 + 0xc));
    }
    *(undefined4 *)&pFVar5[0x10].field_0x0 = 0xffffffff;
    *(undefined8 *)&pFVar5[0x18].field_0x0 = 0xffefffffffffffff;
  }
  return;
}

// DeleteTriangles @ 1433961a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FHullConnectivity<float>::DeleteTriangles
          (FHullConnectivity<float> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  int iVar24;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar25;
  int *piVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_218 [32];
  uint local_1d8;
  undefined1 local_1d4 [4];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  uint local_1b0 [2];
  uint local_1a8 [2];
  uint local_1a0 [2];
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_198;
  int *local_190;
  int local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f8;
  undefined8 uStack_f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined4 uStack_cc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c8;
  undefined8 uStack_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._0_8_ = 0;
  puVar1 = &(param_2->Elements).field_0x10;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iStack_160 = 0;
  local_98.HashSize = 0;
  iVar10 = *(int *)&(param_2->Elements).field_0x28;
  uStack_15c = 1;
  iStack_14c = 0;
  local_148 = iStack_160;
  if (iVar10 != 0) {
    puVar23 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uStack_15c = *puVar23;
    local_148 = 0;
    iStack_160 = 0;
    while (uStack_15c == 0) {
      lVar12 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_15c = 1;
      iStack_14c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160) goto LAB_14339629e;
      uStack_15c = puVar23[lVar12 + 1];
    }
    uStack_15c = -uStack_15c & uStack_15c;
    uVar2 = (ulonglong)uStack_15c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_138 = (int)lVar12;
    iStack_14c = local_148 + -1 + local_138;
    if (iVar10 < iStack_14c) {
      iStack_14c = iVar10;
    }
  }
LAB_14339629e:
  iStack_140 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar15 = *(uint *)&(param_2->Elements).field_0x28;
  iVar24 = (int)uVar15 >> 5;
  bVar11 = (byte)uVar15 & 0x1f;
  TStack_120._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_184 = 1 << bVar11;
  uVar21 = uVar15 & 0xffffffe0;
  uVar17 = -1 << bVar11;
  uStack_150 = 0xffffffff;
  TStack_120.CurrentBitIndex = iStack_14c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = iStack_14c;
  TStack_120.BaseBitIndex = local_148;
  uStack_100 = CONCAT44(uStack_13c,iStack_140);
  local_1d0 = param_2;
  local_198 = param_1;
  local_188 = iVar24;
  pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_178 = uVar17;
  uStack_174 = uVar15;
  uStack_170 = uVar21;
  local_168 = param_2;
  local_158 = puVar1;
  iStack_144 = iStack_14c;
  local_128 = param_2;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar15 != uVar9) {
    puVar22 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar17 = uVar17 & *(uint *)(puVar22 + (longlong)iVar24 * 4);
    while (uVar17 == 0) {
      uStack_170 = uVar21 + 0x20;
      local_188 = iVar24 + 1;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_188)
      goto LAB_1433963c8;
      uVar17 = *(uint *)(puVar22 + (longlong)iVar24 * 4 + 4);
      local_178 = 0xffffffff;
      iVar24 = local_188;
      uVar21 = uStack_170;
    }
    uStack_184 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_184 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_134 = (int)lVar12;
    uStack_174 = local_134 + -1 + uVar21;
    if ((int)uVar9 < (int)uStack_174) {
LAB_1433963c8:
      uStack_174 = uVar9;
    }
  }
  uStack_f0 = CONCAT44(uStack_184,local_188);
  local_f8 = local_1d0;
  uStack_e0 = CONCAT44(uStack_174,local_178);
  uStack_d8 = CONCAT44(uStack_16c,uStack_170);
  local_d0 = *(int *)&(local_1d0->Elements).field_0x8 - *(int *)&(local_1d0->Elements).field_0x34;
  pTStack_e8 = pTStack_180;
  local_c8 = local_1d0;
  uStack_a0 = CONCAT44(uStack_cc,local_d0);
  local_b8 = pTStack_180;
  pTVar18 = local_1d0;
  uStack_c0 = uStack_f0;
  uStack_b0 = uStack_e0;
  local_a8 = uStack_d8;
  do {
    pTVar7 = local_128;
    if (*(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34 !=
        (int)uStack_100) {
      local_1d4[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d4);
    }
    pTVar25 = local_198;
    if (((TStack_120.CurrentBitIndex == uStack_b0._4_4_) && (TStack_120.Array == local_b8)) &&
       (pTVar7 == local_c8)) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    piVar26 = &local_198->ArrayNum;
    uVar15 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_120.CurrentBitIndex * 0xc);
    local_1d8 = uVar15;
    local_190 = piVar26;
    if ((int)uVar15 < *piVar26) {
      UpdateNeighbors(this,uVar15,-1);
      uVar17 = *piVar26 - 1;
      if ((int)uVar15 < (int)uVar17) {
        lVar12 = (longlong)(int)uVar17 * 0xc;
        while (*(int *)&(pTVar18->Elements).field_0x8 != *(int *)&(pTVar18->Elements).field_0x34) {
          FVar14 = (pTVar18->Hash).SecondaryData;
          FVar13 = (ForElementType<FSetElementId>)&pTVar18->Hash;
          if (FVar14 != (ForElementType<FSetElementId>)0x0) {
            FVar13 = FVar14;
          }
          iVar10 = *(int *)((longlong)FVar13 + (ulonglong)(pTVar18->HashSize - 1U & uVar17) * 4);
          if (iVar10 == -1) break;
          while (*(uint *)(*(longlong *)&pTVar18->Elements + (longlong)iVar10 * 0xc) != uVar17) {
            iVar10 = *(int *)(*(longlong *)&pTVar18->Elements + 4 + (longlong)iVar10 * 0xc);
            if (iVar10 == -1) goto LAB_14339676e;
          }
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar14 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar14 = local_98.Hash.SecondaryData;
            }
            for (iVar10 = *(int *)((longlong)FVar14 +
                                  (ulonglong)(local_98.HashSize - 1U & uVar17) * 4); iVar10 != -1;
                iVar10 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar10 * 0xc) == uVar17)
              goto LAB_14339676e;
            }
          }
          local_1b0[0] = uVar17;
          if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
              *(int *)&(this->TrisWithPoints).Elements.field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->TrisWithPoints,uVar17,(int *)local_1b0);
          }
          uVar15 = 0;
          if ((int)uVar17 < (this->TriNeighbors).ArrayNum) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
          local_1c0 = *(longlong *)(pFVar16 + lVar12);
          uVar15 = *(uint *)(pFVar16 + lVar12 + 8);
          uVar21 = (uint)local_1c0;
          local_1b8 = uVar15;
          if ((-1 < (int)(uint)local_1c0) &&
             (iVar10 = (this->TriNeighbors).ArrayNum, (int)(uint)local_1c0 < iVar10)) {
            uVar9 = 0;
            if ((int)(uint)local_1c0 < iVar10) {
              uVar9 = ~(uint)local_1c0 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
            lVar19 = 0;
            do {
              if (*(uint *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar21 * 0xc) == uVar17) {
                *(undefined4 *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar21 * 0xc) = 0xffffffff;
                break;
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < 3);
          }
          uVar21 = local_1c0._4_4_;
          if ((-1 < local_1c0) &&
             (iVar10 = (this->TriNeighbors).ArrayNum, (int)local_1c0._4_4_ < iVar10)) {
            uVar9 = 0;
            if ((int)local_1c0._4_4_ < iVar10) {
              uVar9 = ~local_1c0._4_4_ >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
            lVar19 = 0;
            do {
              if (*(uint *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar21 * 0xc) == uVar17) {
                *(undefined4 *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar21 * 0xc) = 0xffffffff;
                break;
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < 3);
          }
          if ((-1 < (int)uVar15) && (iVar10 = (this->TriNeighbors).ArrayNum, (int)uVar15 < iVar10))
          {
            uVar21 = 0;
            if ((int)uVar15 < iVar10) {
              uVar21 = ~uVar15 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
            lVar19 = 0;
            do {
              if (*(uint *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar15 * 0xc) == uVar17) {
                *(undefined4 *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar15 * 0xc) = 0xffffffff;
                break;
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < 3);
          }
          uVar17 = uVar17 - 1;
          lVar12 = lVar12 + -0xc;
          pTVar18 = local_1d0;
          if ((int)uVar17 <= (int)local_1d8) break;
        }
      }
LAB_14339676e:
      uVar15 = local_1d8;
      if ((int)local_1d8 < (int)uVar17) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,&local_130,(bool *)&local_1d8);
        UpdateNeighbors(this,uVar17,uVar15);
        uVar21 = ~uVar17 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar17 < (this->TriNeighbors).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
        lVar19 = (longlong)(int)local_1d8;
        lVar12 = (longlong)(int)uVar17;
        local_1c8 = *(undefined8 *)(pFVar16 + lVar12 * 0xc);
        uVar27 = (undefined4)local_1c8;
        uVar28 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        uVar3 = *(undefined4 *)(pFVar16 + lVar12 * 0xc + 8);
        uVar15 = 0;
        if ((int)local_1d8 < (this->TriNeighbors).ArrayNum) {
          uVar15 = ~local_1d8 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar27 = (undefined4)local_1c8;
          uVar28 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        }
        pTVar6 = local_198;
        pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
        *(ulonglong *)(pFVar16 + lVar19 * 0xc) = CONCAT44(uVar28,uVar27);
        *(undefined4 *)(pFVar16 + lVar19 * 0xc + 8) = uVar3;
        uVar15 = 0;
        if ((int)uVar17 < local_198->ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar25 = local_198;
        pFVar16 = (pTVar6->AllocatorInstance).Data;
        lVar19 = (longlong)(int)local_1d8;
        local_1c8 = *(undefined8 *)(pFVar16 + lVar12 * 0xc);
        uVar27 = (undefined4)local_1c8;
        uVar28 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        uVar3 = *(undefined4 *)(pFVar16 + lVar12 * 0xc + 8);
        uVar15 = 0;
        if ((int)local_1d8 < local_198->ArrayNum) {
          uVar15 = ~local_1d8 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar27 = (undefined4)local_1c8;
          uVar28 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        }
        pFVar16 = (pTVar25->AllocatorInstance).Data;
        *(ulonglong *)(pFVar16 + lVar19 * 0xc) = CONCAT44(uVar28,uVar27);
        *(undefined4 *)(pFVar16 + lVar19 * 0xc + 8) = uVar3;
        uVar15 = 0;
        if ((int)uVar17 < (this->VisiblePoints).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar19 = (longlong)(int)local_1d8;
        pFVar16 = (this->VisiblePoints).AllocatorInstance.Data + lVar12 * 0x40;
        uVar15 = 0;
        if ((int)local_1d8 < (this->VisiblePoints).ArrayNum) {
          uVar15 = ~local_1d8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar20 = (this->VisiblePoints).AllocatorInstance.Data + lVar19 * 0x40;
        if (pFVar20 != pFVar16) {
          if (*(void **)pFVar20 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar20);
          }
          *(undefined8 *)pFVar20 = *(undefined8 *)pFVar16;
          *(undefined8 *)pFVar16 = 0;
          *(undefined4 *)(pFVar20 + 8) = *(undefined4 *)(pFVar16 + 8);
          *(undefined4 *)(pFVar20 + 0xc) = *(undefined4 *)(pFVar16 + 0xc);
          *(undefined8 *)(pFVar16 + 8) = 0;
        }
        *(undefined4 *)(pFVar20 + 0x10) = *(undefined4 *)(pFVar16 + 0x10);
        *(undefined8 *)(pFVar20 + 0x18) = *(undefined8 *)(pFVar16 + 0x18);
        uVar5 = *(undefined8 *)(pFVar16 + 0x28);
        *(undefined8 *)(pFVar20 + 0x20) = *(undefined8 *)(pFVar16 + 0x20);
        *(undefined8 *)(pFVar20 + 0x28) = uVar5;
        uVar5 = *(undefined8 *)(pFVar16 + 0x38);
        *(undefined8 *)(pFVar20 + 0x30) = *(undefined8 *)(pFVar16 + 0x30);
        *(undefined8 *)(pFVar20 + 0x38) = uVar5;
        piVar26 = local_190;
        local_1a8[0] = uVar17;
        if ((*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
             *(int *)&(this->TrisWithPoints).Elements.field_0x34) &&
           (iVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                               (&this->TrisWithPoints,uVar17,(int *)local_1a8), piVar26 = local_190,
           iVar10 != 0)) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&this->TrisWithPoints,&local_12c,(bool *)&local_1d8);
          piVar26 = local_190;
        }
      }
      else {
        local_1a0[0] = local_1d8;
        if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
            *(int *)&(this->TrisWithPoints).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (&this->TrisWithPoints,local_1d8,(int *)local_1a0);
        }
      }
      iVar10 = *piVar26;
      if (iVar10 < (int)uVar17) {
        iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,uVar17 - iVar10,&pTVar25->AllocatorInstance,piVar26,
                            &pTVar25->ArrayMax);
        DefaultConstructItems<UE::Geometry::FIndex3i,int>
                  ((pTVar25->AllocatorInstance).Data + (longlong)iVar24 * 0xc,uVar17 - iVar10);
      }
      else {
        if ((int)uVar17 < 0) goto LAB_143396d4f;
        if ((int)uVar17 < iVar10) {
          uVar15 = iVar10 - uVar17;
          if (((int)(uVar15 | uVar17) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar15 != 0) {
            pFVar16 = (pTVar25->AllocatorInstance).Data + (longlong)(int)uVar17 * 0xc;
            iVar10 = (*piVar26 - uVar15) - uVar17;
            if (iVar10 != 0) {
              memmove(pFVar16,pFVar16 + (longlong)(int)uVar15 * 0xc,(longlong)iVar10 * 0xc);
            }
            *piVar26 = *piVar26 - uVar15;
          }
        }
      }
      iVar10 = (this->TriNeighbors).ArrayNum;
      piVar26 = &(this->TriNeighbors).ArrayNum;
      if (iVar10 < (int)uVar17) {
        iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,uVar17 - iVar10,(ForAnyElementType *)this,piVar26,
                            &(this->TriNeighbors).ArrayMax);
        DefaultConstructItems<UE::Geometry::FIndex3i,int>
                  ((this->TriNeighbors).AllocatorInstance.Data + (longlong)iVar24 * 0xc,
                   uVar17 - iVar10);
      }
      else {
        if ((int)uVar17 < 0) goto LAB_143396d4f;
        if ((int)uVar17 < iVar10) {
          uVar15 = iVar10 - uVar17;
          if (((int)(uVar15 | uVar17) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar15 != 0) {
            pFVar16 = (this->TriNeighbors).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xc;
            iVar10 = (*piVar26 - uVar15) - uVar17;
            if (iVar10 != 0) {
              memmove(pFVar16,pFVar16 + (longlong)(int)uVar15 * 0xc,(longlong)iVar10 * 0xc);
            }
            *piVar26 = *piVar26 - uVar15;
          }
        }
      }
      iVar10 = (this->VisiblePoints).ArrayNum;
      if (iVar10 < (int)uVar17) {
        iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40,8,uVar17 - iVar10,&(this->VisiblePoints).AllocatorInstance,
                            &(this->VisiblePoints).ArrayNum,&(this->VisiblePoints).ArrayMax);
        DefaultConstructItems<UE::Geometry::FHullConnectivity<float>::FVisiblePoints,int>
                  ((this->VisiblePoints).AllocatorInstance.Data + (longlong)iVar24 * 0x40,
                   uVar17 - iVar10);
        pTVar18 = local_1d0;
      }
      else {
        if ((int)uVar17 < 0) {
LAB_143396d4f:
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        pTVar18 = local_1d0;
        if ((int)uVar17 < iVar10) {
          uVar15 = iVar10 - uVar17;
          if (((int)(uVar15 | uVar17) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar18 = local_1d0;
          if (uVar15 != 0) {
            TArray<UE::Geometry::FHullConnectivity<float>::FVisiblePoints,TSizedDefaultAllocator<32>_>
            ::RemoveAtImpl(&this->VisiblePoints,uVar17,uVar15);
            pTVar18 = local_1d0;
          }
        }
      }
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  } while( true );
}

// DeleteTriangles @ 143396d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FHullConnectivity<double>::DeleteTriangles
          (FHullConnectivity<double> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  int iVar24;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar25;
  int *piVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_218 [32];
  uint local_1d8;
  undefined1 local_1d4 [4];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  uint local_1b0 [2];
  uint local_1a8 [2];
  uint local_1a0 [2];
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_198;
  int *local_190;
  int local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f8;
  undefined8 uStack_f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int local_d0;
  undefined4 uStack_cc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c8;
  undefined8 uStack_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._0_8_ = 0;
  puVar1 = &(param_2->Elements).field_0x10;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iStack_160 = 0;
  local_98.HashSize = 0;
  iVar10 = *(int *)&(param_2->Elements).field_0x28;
  uStack_15c = 1;
  iStack_14c = 0;
  local_148 = iStack_160;
  if (iVar10 != 0) {
    puVar23 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uStack_15c = *puVar23;
    local_148 = 0;
    iStack_160 = 0;
    while (uStack_15c == 0) {
      lVar12 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_15c = 1;
      iStack_14c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160) goto LAB_143396e5e;
      uStack_15c = puVar23[lVar12 + 1];
    }
    uStack_15c = -uStack_15c & uStack_15c;
    uVar2 = (ulonglong)uStack_15c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_138 = (int)lVar12;
    iStack_14c = local_148 + -1 + local_138;
    if (iVar10 < iStack_14c) {
      iStack_14c = iVar10;
    }
  }
LAB_143396e5e:
  iStack_140 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar15 = *(uint *)&(param_2->Elements).field_0x28;
  iVar24 = (int)uVar15 >> 5;
  bVar11 = (byte)uVar15 & 0x1f;
  TStack_120._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_184 = 1 << bVar11;
  uVar21 = uVar15 & 0xffffffe0;
  uVar17 = -1 << bVar11;
  uStack_150 = 0xffffffff;
  TStack_120.CurrentBitIndex = iStack_14c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = iStack_14c;
  TStack_120.BaseBitIndex = local_148;
  uStack_100 = CONCAT44(uStack_13c,iStack_140);
  local_1d0 = param_2;
  local_198 = param_1;
  local_188 = iVar24;
  pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_178 = uVar17;
  uStack_174 = uVar15;
  uStack_170 = uVar21;
  local_168 = param_2;
  local_158 = puVar1;
  iStack_144 = iStack_14c;
  local_128 = param_2;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar15 != uVar9) {
    puVar22 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar17 = uVar17 & *(uint *)(puVar22 + (longlong)iVar24 * 4);
    while (uVar17 == 0) {
      uStack_170 = uVar21 + 0x20;
      local_188 = iVar24 + 1;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_188)
      goto LAB_143396f88;
      uVar17 = *(uint *)(puVar22 + (longlong)iVar24 * 4 + 4);
      local_178 = 0xffffffff;
      iVar24 = local_188;
      uVar21 = uStack_170;
    }
    uStack_184 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_184 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_134 = (int)lVar12;
    uStack_174 = local_134 + -1 + uVar21;
    if ((int)uVar9 < (int)uStack_174) {
LAB_143396f88:
      uStack_174 = uVar9;
    }
  }
  uStack_f0 = CONCAT44(uStack_184,local_188);
  local_f8 = local_1d0;
  uStack_e0 = CONCAT44(uStack_174,local_178);
  uStack_d8 = CONCAT44(uStack_16c,uStack_170);
  local_d0 = *(int *)&(local_1d0->Elements).field_0x8 - *(int *)&(local_1d0->Elements).field_0x34;
  pTStack_e8 = pTStack_180;
  local_c8 = local_1d0;
  uStack_a0 = CONCAT44(uStack_cc,local_d0);
  local_b8 = pTStack_180;
  pTVar18 = local_1d0;
  uStack_c0 = uStack_f0;
  uStack_b0 = uStack_e0;
  local_a8 = uStack_d8;
  do {
    pTVar7 = local_128;
    if (*(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34 !=
        (int)uStack_100) {
      local_1d4[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d4);
    }
    pTVar25 = local_198;
    if (((TStack_120.CurrentBitIndex == uStack_b0._4_4_) && (TStack_120.Array == local_b8)) &&
       (pTVar7 == local_c8)) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    piVar26 = &local_198->ArrayNum;
    uVar15 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_120.CurrentBitIndex * 0xc);
    local_1d8 = uVar15;
    local_190 = piVar26;
    if ((int)uVar15 < *piVar26) {
      UpdateNeighbors(this,uVar15,-1);
      uVar17 = *piVar26 - 1;
      if ((int)uVar15 < (int)uVar17) {
        lVar12 = (longlong)(int)uVar17 * 0xc;
        while (*(int *)&(pTVar18->Elements).field_0x8 != *(int *)&(pTVar18->Elements).field_0x34) {
          FVar14 = (pTVar18->Hash).SecondaryData;
          FVar13 = (ForElementType<FSetElementId>)&pTVar18->Hash;
          if (FVar14 != (ForElementType<FSetElementId>)0x0) {
            FVar13 = FVar14;
          }
          iVar10 = *(int *)((longlong)FVar13 + (ulonglong)(pTVar18->HashSize - 1U & uVar17) * 4);
          if (iVar10 == -1) break;
          while (*(uint *)(*(longlong *)&pTVar18->Elements + (longlong)iVar10 * 0xc) != uVar17) {
            iVar10 = *(int *)(*(longlong *)&pTVar18->Elements + 4 + (longlong)iVar10 * 0xc);
            if (iVar10 == -1) goto LAB_14339732e;
          }
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar14 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar14 = local_98.Hash.SecondaryData;
            }
            for (iVar10 = *(int *)((longlong)FVar14 +
                                  (ulonglong)(local_98.HashSize - 1U & uVar17) * 4); iVar10 != -1;
                iVar10 = *(int *)(local_98.Elements._0_8_ + 4 + (longlong)iVar10 * 0xc)) {
              if (*(uint *)(local_98.Elements._0_8_ + (longlong)iVar10 * 0xc) == uVar17)
              goto LAB_14339732e;
            }
          }
          local_1b0[0] = uVar17;
          if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
              *(int *)&(this->TrisWithPoints).Elements.field_0x34) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->TrisWithPoints,uVar17,(int *)local_1b0);
          }
          uVar15 = 0;
          if ((int)uVar17 < (this->TriNeighbors).ArrayNum) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
          local_1c0 = *(longlong *)(pFVar16 + lVar12);
          uVar15 = *(uint *)(pFVar16 + lVar12 + 8);
          uVar21 = (uint)local_1c0;
          local_1b8 = uVar15;
          if ((-1 < (int)(uint)local_1c0) &&
             (iVar10 = (this->TriNeighbors).ArrayNum, (int)(uint)local_1c0 < iVar10)) {
            uVar9 = 0;
            if ((int)(uint)local_1c0 < iVar10) {
              uVar9 = ~(uint)local_1c0 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
            lVar19 = 0;
            do {
              if (*(uint *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar21 * 0xc) == uVar17) {
                *(undefined4 *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar21 * 0xc) = 0xffffffff;
                break;
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < 3);
          }
          uVar21 = local_1c0._4_4_;
          if ((-1 < local_1c0) &&
             (iVar10 = (this->TriNeighbors).ArrayNum, (int)local_1c0._4_4_ < iVar10)) {
            uVar9 = 0;
            if ((int)local_1c0._4_4_ < iVar10) {
              uVar9 = ~local_1c0._4_4_ >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
            lVar19 = 0;
            do {
              if (*(uint *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar21 * 0xc) == uVar17) {
                *(undefined4 *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar21 * 0xc) = 0xffffffff;
                break;
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < 3);
          }
          if ((-1 < (int)uVar15) && (iVar10 = (this->TriNeighbors).ArrayNum, (int)uVar15 < iVar10))
          {
            uVar21 = 0;
            if ((int)uVar15 < iVar10) {
              uVar21 = ~uVar15 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
            lVar19 = 0;
            do {
              if (*(uint *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar15 * 0xc) == uVar17) {
                *(undefined4 *)(pFVar16 + lVar19 * 4 + (longlong)(int)uVar15 * 0xc) = 0xffffffff;
                break;
              }
              lVar19 = lVar19 + 1;
            } while (lVar19 < 3);
          }
          uVar17 = uVar17 - 1;
          lVar12 = lVar12 + -0xc;
          pTVar18 = local_1d0;
          if ((int)uVar17 <= (int)local_1d8) break;
        }
      }
LAB_14339732e:
      uVar15 = local_1d8;
      if ((int)local_1d8 < (int)uVar17) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,&local_130,(bool *)&local_1d8);
        UpdateNeighbors(this,uVar17,uVar15);
        uVar21 = ~uVar17 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar17 < (this->TriNeighbors).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
        lVar19 = (longlong)(int)local_1d8;
        lVar12 = (longlong)(int)uVar17;
        local_1c8 = *(undefined8 *)(pFVar16 + lVar12 * 0xc);
        uVar27 = (undefined4)local_1c8;
        uVar28 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        uVar3 = *(undefined4 *)(pFVar16 + lVar12 * 0xc + 8);
        uVar15 = 0;
        if ((int)local_1d8 < (this->TriNeighbors).ArrayNum) {
          uVar15 = ~local_1d8 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar27 = (undefined4)local_1c8;
          uVar28 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        }
        pTVar6 = local_198;
        pFVar16 = (this->TriNeighbors).AllocatorInstance.Data;
        *(ulonglong *)(pFVar16 + lVar19 * 0xc) = CONCAT44(uVar28,uVar27);
        *(undefined4 *)(pFVar16 + lVar19 * 0xc + 8) = uVar3;
        uVar15 = 0;
        if ((int)uVar17 < local_198->ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar25 = local_198;
        pFVar16 = (pTVar6->AllocatorInstance).Data;
        lVar19 = (longlong)(int)local_1d8;
        local_1c8 = *(undefined8 *)(pFVar16 + lVar12 * 0xc);
        uVar27 = (undefined4)local_1c8;
        uVar28 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        uVar3 = *(undefined4 *)(pFVar16 + lVar12 * 0xc + 8);
        uVar15 = 0;
        if ((int)local_1d8 < local_198->ArrayNum) {
          uVar15 = ~local_1d8 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar27 = (undefined4)local_1c8;
          uVar28 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        }
        pFVar16 = (pTVar25->AllocatorInstance).Data;
        *(ulonglong *)(pFVar16 + lVar19 * 0xc) = CONCAT44(uVar28,uVar27);
        *(undefined4 *)(pFVar16 + lVar19 * 0xc + 8) = uVar3;
        uVar15 = 0;
        if ((int)uVar17 < (this->VisiblePoints).ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar19 = (longlong)(int)local_1d8;
        pFVar16 = (this->VisiblePoints).AllocatorInstance.Data + lVar12 * 0x40;
        uVar15 = 0;
        if ((int)local_1d8 < (this->VisiblePoints).ArrayNum) {
          uVar15 = ~local_1d8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar20 = (this->VisiblePoints).AllocatorInstance.Data + lVar19 * 0x40;
        if (pFVar20 != pFVar16) {
          if (*(void **)pFVar20 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar20);
          }
          *(undefined8 *)pFVar20 = *(undefined8 *)pFVar16;
          *(undefined8 *)pFVar16 = 0;
          *(undefined4 *)(pFVar20 + 8) = *(undefined4 *)(pFVar16 + 8);
          *(undefined4 *)(pFVar20 + 0xc) = *(undefined4 *)(pFVar16 + 0xc);
          *(undefined8 *)(pFVar16 + 8) = 0;
        }
        *(undefined4 *)(pFVar20 + 0x10) = *(undefined4 *)(pFVar16 + 0x10);
        *(undefined8 *)(pFVar20 + 0x18) = *(undefined8 *)(pFVar16 + 0x18);
        uVar5 = *(undefined8 *)(pFVar16 + 0x28);
        *(undefined8 *)(pFVar20 + 0x20) = *(undefined8 *)(pFVar16 + 0x20);
        *(undefined8 *)(pFVar20 + 0x28) = uVar5;
        uVar5 = *(undefined8 *)(pFVar16 + 0x38);
        *(undefined8 *)(pFVar20 + 0x30) = *(undefined8 *)(pFVar16 + 0x30);
        *(undefined8 *)(pFVar20 + 0x38) = uVar5;
        piVar26 = local_190;
        local_1a8[0] = uVar17;
        if ((*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
             *(int *)&(this->TrisWithPoints).Elements.field_0x34) &&
           (iVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                               (&this->TrisWithPoints,uVar17,(int *)local_1a8), piVar26 = local_190,
           iVar10 != 0)) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&this->TrisWithPoints,&local_12c,(bool *)&local_1d8);
          piVar26 = local_190;
        }
      }
      else {
        local_1a0[0] = local_1d8;
        if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
            *(int *)&(this->TrisWithPoints).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (&this->TrisWithPoints,local_1d8,(int *)local_1a0);
        }
      }
      iVar10 = *piVar26;
      if (iVar10 < (int)uVar17) {
        iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,uVar17 - iVar10,&pTVar25->AllocatorInstance,piVar26,
                            &pTVar25->ArrayMax);
        DefaultConstructItems<UE::Geometry::FIndex3i,int>
                  ((pTVar25->AllocatorInstance).Data + (longlong)iVar24 * 0xc,uVar17 - iVar10);
      }
      else {
        if ((int)uVar17 < 0) goto LAB_14339790f;
        if ((int)uVar17 < iVar10) {
          uVar15 = iVar10 - uVar17;
          if (((int)(uVar15 | uVar17) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar15 != 0) {
            pFVar16 = (pTVar25->AllocatorInstance).Data + (longlong)(int)uVar17 * 0xc;
            iVar10 = (*piVar26 - uVar15) - uVar17;
            if (iVar10 != 0) {
              memmove(pFVar16,pFVar16 + (longlong)(int)uVar15 * 0xc,(longlong)iVar10 * 0xc);
            }
            *piVar26 = *piVar26 - uVar15;
          }
        }
      }
      iVar10 = (this->TriNeighbors).ArrayNum;
      piVar26 = &(this->TriNeighbors).ArrayNum;
      if (iVar10 < (int)uVar17) {
        iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,uVar17 - iVar10,(ForAnyElementType *)this,piVar26,
                            &(this->TriNeighbors).ArrayMax);
        DefaultConstructItems<UE::Geometry::FIndex3i,int>
                  ((this->TriNeighbors).AllocatorInstance.Data + (longlong)iVar24 * 0xc,
                   uVar17 - iVar10);
      }
      else {
        if ((int)uVar17 < 0) goto LAB_14339790f;
        if ((int)uVar17 < iVar10) {
          uVar15 = iVar10 - uVar17;
          if (((int)(uVar15 | uVar17) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar15 != 0) {
            pFVar16 = (this->TriNeighbors).AllocatorInstance.Data + (longlong)(int)uVar17 * 0xc;
            iVar10 = (*piVar26 - uVar15) - uVar17;
            if (iVar10 != 0) {
              memmove(pFVar16,pFVar16 + (longlong)(int)uVar15 * 0xc,(longlong)iVar10 * 0xc);
            }
            *piVar26 = *piVar26 - uVar15;
          }
        }
      }
      iVar10 = (this->VisiblePoints).ArrayNum;
      if (iVar10 < (int)uVar17) {
        iVar24 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40,8,uVar17 - iVar10,&(this->VisiblePoints).AllocatorInstance,
                            &(this->VisiblePoints).ArrayNum,&(this->VisiblePoints).ArrayMax);
        DefaultConstructItems<UE::Geometry::FHullConnectivity<double>::FVisiblePoints,int>
                  ((this->VisiblePoints).AllocatorInstance.Data + (longlong)iVar24 * 0x40,
                   uVar17 - iVar10);
        pTVar18 = local_1d0;
      }
      else {
        if ((int)uVar17 < 0) {
LAB_14339790f:
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
        }
        pTVar18 = local_1d0;
        if ((int)uVar17 < iVar10) {
          uVar15 = iVar10 - uVar17;
          if (((int)(uVar15 | uVar17) < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar18 = local_1d0;
          if (uVar15 != 0) {
            TArray<UE::Geometry::FHullConnectivity<double>::FVisiblePoints,TSizedDefaultAllocator<32>_>
            ::RemoveAtImpl(&this->VisiblePoints,uVar17,uVar15);
            pTVar18 = local_1d0;
          }
        }
      }
    }
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  } while( true );
}

// HorizonHelper @ 1433b4410

bool __thiscall
UE::Geometry::FHullConnectivity<float>::HorizonHelper
          (FHullConnectivity<float> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,TVector<float> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5,
          TArray<UE::Geometry::FHullConnectivity<float>::FNewTriangle,TSizedDefaultAllocator<32>_>
          *param_6,int param_7,int param_8,bool param_9)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  int local_a8;
  undefined4 local_a4;
  int iStack_a0;
  uint local_9c;
  undefined8 local_98;
  int local_90;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_88;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_78;
  TVector<float> local_68;
  TVector<float> local_5c;
  TVector<float> local_50 [2];
  
  iVar9 = param_8;
  if (param_8 != -1) {
    local_88._0_8_ = *(undefined8 *)param_2;
    lVar12 = (longlong)param_7;
    local_88._8_8_ = *(undefined8 *)&param_2->field_0x8;
    uVar7 = 0;
    if (param_7 < param_1->ArrayNum) {
      uVar7 = (uint)~param_7 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    SetTriPts(this,(FIndex3i *)((param_1->AllocatorInstance).Data + lVar12 * 0xc),&local_88,
              &local_68);
    fVar14 = ExactPredicates::Orient3<float>(&local_68,&local_5c,local_50,param_3);
    if (fVar14 <= 0.0) {
      return false;
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (param_5,&local_a8,(bool *)&param_7);
  if (param_9 == false) {
    ClearVisiblePointsData(this,param_7,param_4);
  }
  lVar12 = (longlong)param_7;
  uVar7 = 0;
  if (param_7 < param_1->ArrayNum) {
    uVar7 = (uint)~param_7 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iVar11 = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_98 = *(undefined8 *)(pFVar1 + lVar12 * 0xc);
  local_90 = *(int *)(pFVar1 + lVar12 * 0xc + 8);
  param_8 = 3;
  uVar4 = local_98;
  if (-1 < iVar9) {
    if ((int)local_98 == iVar9) {
      iVar8 = 0;
    }
    else if ((int)((ulonglong)local_98 >> 0x20) == iVar9) {
      iVar8 = 1;
    }
    else {
      iVar8 = -1;
      if (local_90 == iVar9) {
        iVar8 = 2;
      }
    }
    iVar11 = iVar8 + 1;
    param_8 = iVar8 + 4;
  }
  local_98 = uVar4;
  if (iVar11 < param_8) {
    do {
      lVar12 = (longlong)param_7;
      uVar7 = 0;
      if (param_7 < (this->TriNeighbors).ArrayNum) {
        uVar7 = (uint)~param_7 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      lVar13 = (longlong)
               (iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                         (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3);
      uVar7 = *(uint *)((this->TriNeighbors).AllocatorInstance.Data + (lVar13 + lVar12 * 3) * 4);
      if (*(int *)&(param_5->Elements).field_0x8 != *(int *)&(param_5->Elements).field_0x34) {
        FVar2 = (param_5->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&param_5->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar2;
        }
        iVar9 = *(int *)((longlong)FVar10 + (ulonglong)(param_5->HashSize - 1U & uVar7) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_5->Elements + (longlong)iVar9 * 0xc) == uVar7)
            goto LAB_1433b47ba;
            iVar9 = *(int *)(*(longlong *)&param_5->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      iVar9 = iVar11 + 1;
      iVar9 = *(int *)((longlong)&local_98 +
                      (longlong)
                      (iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                               (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU)
                                    >> 0x1f)) * -3) * 4);
      local_78._0_8_ = *(undefined8 *)param_2;
      local_78._8_8_ = *(undefined8 *)&param_2->field_0x8;
      bVar5 = HorizonHelper(this,param_1,&local_78,param_3,param_4,param_5,param_6,uVar7,iVar9,false
                           );
      if (!bVar5) {
        local_a4 = *(undefined4 *)((longlong)&local_98 + lVar13 * 4);
        pFVar1 = (param_6->AllocatorInstance).Data;
        iStack_a0 = iVar9;
        local_9c = uVar7;
        if (((pFVar1 <= (FScriptContainerElement *)&local_a4) &&
            ((FScriptContainerElement *)&local_a4 < pFVar1 + (longlong)param_6->ArrayMax * 0xc)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = param_6->ArrayNum;
        if (iVar9 == param_6->ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_6->AllocatorInstance,&param_6->ArrayMax);
        }
        param_6->ArrayNum = iVar9 + 1;
        pFVar1 = (param_6->AllocatorInstance).Data;
        *(ulonglong *)(pFVar1 + (longlong)iVar9 * 0xc) = CONCAT44(iStack_a0,local_a4);
        *(uint *)(pFVar1 + (longlong)iVar9 * 0xc + 8) = local_9c;
      }
LAB_1433b47ba:
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_8);
  }
  return true;
}

// HorizonHelper @ 1433b47f0

bool __thiscall
UE::Geometry::FHullConnectivity<double>::HorizonHelper
          (FHullConnectivity<double> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,TVector<double> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5,
          TArray<UE::Geometry::FHullConnectivity<double>::FNewTriangle,TSizedDefaultAllocator<32>_>
          *param_6,int param_7,int param_8,bool param_9)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 local_138;
  int iStack_134;
  uint local_130;
  undefined8 local_128;
  int local_120;
  int local_118 [2];
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_110;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_100;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  TVector<double>_u_0 local_88;
  double local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar10 = param_8;
  if (param_8 != -1) {
    local_110._0_8_ = *(undefined8 *)param_2;
    lVar13 = (longlong)param_7;
    local_110._8_8_ = *(undefined8 *)&param_2->field_0x8;
    uVar8 = 0;
    if (param_7 < param_1->ArrayNum) {
      uVar8 = (uint)~param_7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    SetTriPts(this,(FIndex3i *)((param_1->AllocatorInstance).Data + lVar13 * 0xc),&local_110,
              (TVector<double> *)&local_88._s_0);
    local_c0 = local_70;
    uStack_b8 = uStack_68;
    local_a8 = local_88._s_0.X;
    dStack_a0 = local_88._s_0.Y;
    local_b0 = local_60;
    local_f0 = (param_3->field0_0x0)._s_0.X;
    dStack_e8 = (param_3->field0_0x0)._s_0.Y;
    local_98 = local_88._s_0.Z;
    local_e0 = (param_3->field0_0x0)._s_0.Z;
    local_d8 = local_58;
    uStack_d0 = uStack_50;
    local_c8 = local_48;
    dVar4 = ShewchukExactPredicates::orient3d(&local_a8,&local_c0,&local_d8,&local_f0);
    if (dVar4 <= 0.0) {
      return false;
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (param_5,local_118,(bool *)&param_7);
  if (param_9 == false) {
    ClearVisiblePointsData(this,param_7,param_4);
  }
  lVar13 = (longlong)param_7;
  uVar8 = 0;
  if (param_7 < param_1->ArrayNum) {
    uVar8 = (uint)~param_7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iVar12 = 0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_128 = *(undefined8 *)(pFVar1 + lVar13 * 0xc);
  local_120 = *(int *)(pFVar1 + lVar13 * 0xc + 8);
  param_8 = 3;
  uVar5 = local_128;
  if (-1 < iVar10) {
    if ((int)local_128 == iVar10) {
      iVar9 = 0;
    }
    else if ((int)((ulonglong)local_128 >> 0x20) == iVar10) {
      iVar9 = 1;
    }
    else {
      iVar9 = -1;
      if (local_120 == iVar10) {
        iVar9 = 2;
      }
    }
    iVar12 = iVar9 + 1;
    param_8 = iVar9 + 4;
  }
  local_128 = uVar5;
  if (iVar12 < param_8) {
    do {
      lVar13 = (longlong)param_7;
      uVar8 = 0;
      if (param_7 < (this->TriNeighbors).ArrayNum) {
        uVar8 = (uint)~param_7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      lVar14 = (longlong)
               (iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                         (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                              0x1f)) * -3);
      uVar8 = *(uint *)((this->TriNeighbors).AllocatorInstance.Data + (lVar14 + lVar13 * 3) * 4);
      if (*(int *)&(param_5->Elements).field_0x8 != *(int *)&(param_5->Elements).field_0x34) {
        FVar2 = (param_5->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_5->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar2;
        }
        iVar10 = *(int *)((longlong)FVar11 + (ulonglong)(param_5->HashSize - 1U & uVar8) * 4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_5->Elements + (longlong)iVar10 * 0xc) == uVar8)
            goto LAB_1433b4c1a;
            iVar10 = *(int *)(*(longlong *)&param_5->Elements + 4 + (longlong)iVar10 * 0xc);
          } while (iVar10 != -1);
        }
      }
      iVar10 = iVar12 + 1;
      iVar10 = *(int *)((longlong)&local_128 +
                       (longlong)
                       (iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                                 (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) &
                                       0xffffffffU) >> 0x1f)) * -3) * 4);
      local_100._0_8_ = *(undefined8 *)param_2;
      local_100._8_8_ = *(undefined8 *)&param_2->field_0x8;
      bVar6 = HorizonHelper(this,param_1,&local_100,param_3,param_4,param_5,param_6,uVar8,iVar10,
                            false);
      if (!bVar6) {
        local_138 = *(undefined4 *)((longlong)&local_128 + lVar14 * 4);
        pFVar1 = (param_6->AllocatorInstance).Data;
        iStack_134 = iVar10;
        local_130 = uVar8;
        if (((pFVar1 <= (FScriptContainerElement *)&local_138) &&
            ((FScriptContainerElement *)&local_138 < pFVar1 + (longlong)param_6->ArrayMax * 0xc)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar10 = param_6->ArrayNum;
        if (iVar10 == param_6->ArrayMax) {
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&param_6->AllocatorInstance,&param_6->ArrayMax);
        }
        param_6->ArrayNum = iVar10 + 1;
        pFVar1 = (param_6->AllocatorInstance).Data;
        *(ulonglong *)(pFVar1 + (longlong)iVar10 * 0xc) = CONCAT44(iStack_134,local_138);
        *(uint *)(pFVar1 + (longlong)iVar10 * 0xc + 8) = local_130;
      }
LAB_1433b4c1a:
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_8);
  }
  return true;
}

// InitVisibility @ 1433b6460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FHullConnectivity<float>::InitVisibility
          (FHullConnectivity<float> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_3,
          TFunctionRef<bool___cdecl(int)> *param_4)

{
  TArray<UE::Geometry::FHullConnectivity<float>::FVisiblePoints,TSizedDefaultAllocator<32>_>
  *this_00;
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  float fVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  TVector<double> *pTVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  longlong lVar24;
  double dVar25;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  uint local_298 [2];
  uint local_290 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_288;
  undefined8 local_278;
  uint local_270;
  undefined4 local_268 [2];
  undefined4 local_260 [2];
  undefined4 local_258 [2];
  uint local_250 [2];
  uint local_248 [2];
  undefined8 local_240;
  float local_238;
  undefined8 local_234;
  float local_22c;
  undefined8 local_228;
  float local_220;
  int local_218 [2];
  double local_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1fc;
  float local_1f4;
  undefined8 local_1f0;
  float local_1e8;
  undefined8 local_1e4;
  float local_1dc;
  undefined8 local_1d8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_120 [16];
  double local_110;
  double dStack_108;
  TVector<double> local_100 [8];
  
  this_00 = &this->VisiblePoints;
  TArray<UE::Geometry::FHullConnectivity<float>::FVisiblePoints,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,param_1->ArrayNum,Default);
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_288,param_2,Default);
  iVar19 = param_1->ArrayNum;
  uVar23 = 0;
  if (0 < iVar19) {
    lVar24 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar23 < iVar19) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar22 = (param_1->AllocatorInstance).Data;
      local_278 = *(undefined8 *)(pFVar22 + lVar24);
      uVar16 = *(uint *)(pFVar22 + lVar24 + 8);
      uVar18 = (uint)local_278;
      uVar17 = 0;
      if ((int)(uint)local_278 < local_288.ArrayNum) {
        uVar17 = ~(uint)local_278 >> 0x1f;
      }
      local_270 = uVar16;
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar17 = local_278._4_4_;
      local_288.AllocatorInstance.Data[(int)uVar18] = (FScriptContainerElement)0x1;
      uVar18 = 0;
      if ((int)local_278._4_4_ < local_288.ArrayNum) {
        uVar18 = ~local_278._4_4_ >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_288.AllocatorInstance.Data[(int)uVar17] = (FScriptContainerElement)0x1;
      uVar18 = 0;
      if ((int)uVar16 < local_288.ArrayNum) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 0xc;
      local_288.AllocatorInstance.Data[(int)uVar16] = (FScriptContainerElement)0x1;
      iVar19 = param_1->ArrayNum;
    } while ((int)uVar23 < iVar19);
  }
  local_298[0] = 0;
  if (0 < iVar19) {
    do {
      uVar23 = local_298[0];
      pcVar2 = *(code **)param_3;
      uVar1 = *(undefined8 *)&param_3->field_0x8;
      uVar16 = 0;
      if ((int)local_298[0] < iVar19) {
        uVar16 = ~local_298[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar24 = (longlong)(int)uVar23;
      pFVar22 = (param_1->AllocatorInstance).Data;
      local_268[0] = *(undefined4 *)(pFVar22 + lVar24 * 0xc);
      (*pcVar2)(&local_208,uVar1,local_268);
      local_238 = local_200;
      local_260[0] = *(undefined4 *)(pFVar22 + lVar24 * 0xc + 4);
      local_240 = local_208;
      (*pcVar2)(&local_1fc,uVar1,local_260);
      local_22c = local_1f4;
      local_258[0] = *(undefined4 *)(pFVar22 + lVar24 * 0xc + 8);
      local_234 = local_1fc;
      (*pcVar2)(&local_1f0,uVar1,local_258);
      lVar24 = (longlong)(int)local_298[0];
      local_220 = local_1e8;
      local_228 = local_1f0;
      uVar23 = 0;
      if ((int)local_298[0] < (this->VisiblePoints).ArrayNum) {
        uVar23 = ~local_298[0] >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_210 = (double)local_22c;
      dVar7 = (double)(float)local_228;
      dVar8 = (double)local_228._4_4_;
      dVar9 = (double)local_220;
      dVar10 = (double)(float)local_234;
      dVar11 = (double)local_234._4_4_;
      dVar4 = (double)(float)local_240;
      dVar5 = (double)local_240._4_4_;
      dVar6 = (double)local_238;
      local_1c8._s_0.X = dVar7;
      local_1c8._s_0.Y = dVar8;
      local_1c8._s_0.Z = dVar9;
      local_1b0._s_0.X = dVar10;
      local_1b0._s_0.Y = dVar11;
      local_1b0._s_0.Z = local_210;
      local_198._s_0.X = dVar4;
      local_198._s_0.Y = dVar5;
      local_198._s_0.Z = dVar6;
      pTVar20 = VectorUtil::Normal<double>
                          (local_100,(TVector<double> *)&local_198._s_0,
                           (TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_1c8._s_0);
      uVar23 = 0;
      local_120 = *(undefined1 (*) [16])&pTVar20->field0_0x0;
      local_110 = (pTVar20->field0_0x0)._s_0.Z;
      auVar12._4_8_ = extraout_XMM0_Qb;
      auVar12._0_4_ = local_120._4_4_;
      auVar26._0_8_ = auVar12._0_8_ << 0x20;
      auVar26._8_4_ = local_120._8_4_;
      auVar26._12_4_ = local_120._12_4_;
      pFVar22 = (this_00->AllocatorInstance).Data;
      *(undefined1 (*) [16])(pFVar22 + lVar24 * 0x40 + 0x20) = local_120;
      dStack_108 = dVar5 * auVar26._8_8_ + dVar4 * local_120._0_8_ + dVar6 * local_110;
      pFVar22 = pFVar22 + lVar24 * 0x40 + 0x30;
      *(double *)pFVar22 = local_110;
      *(double *)(pFVar22 + 8) = dStack_108;
      if (0 < param_2) {
        lVar24 = 0;
        do {
          local_250[0] = uVar23;
          cVar15 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_250);
          if (cVar15 != '\0') {
            uVar16 = 0;
            if ((int)uVar23 < local_288.ArrayNum) {
              uVar16 = ~uVar23 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (local_288.AllocatorInstance.Data[lVar24] != (FScriptContainerElement)0x1) {
              local_248[0] = uVar23;
              (**(code **)param_3)(&local_1e4,*(undefined8 *)&param_3->field_0x8,local_248);
              fVar13 = local_1dc;
              lVar21 = (longlong)(int)local_298[0];
              local_1d8 = local_1e4;
              uVar16 = 0;
              if ((int)local_298[0] < (this->VisiblePoints).ArrayNum) {
                uVar16 = ~local_298[0] >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar22 = (this_00->AllocatorInstance).Data;
              lVar21 = lVar21 * 0x40;
              dVar3 = ((double)local_1d8._4_4_ * *(double *)(pFVar22 + lVar21 + 0x28) +
                       (double)(float)local_1d8 * *(double *)(pFVar22 + lVar21 + 0x20) +
                      (double)fVar13 * *(double *)(pFVar22 + lVar21 + 0x30)) -
                      *(double *)(pFVar22 + lVar21 + 0x38);
              if ((this->VisibleDistanceThreshold < 0.0) || (this->VisibleDistanceThreshold < dVar3)
                 ) {
                local_140 = local_210;
                local_180 = (double)(float)local_1d8;
                local_178 = (double)local_1d8._4_4_;
                local_170 = (double)fVar13;
                local_168 = dVar7;
                local_160 = dVar8;
                local_158 = dVar9;
                local_150 = dVar10;
                local_148 = dVar11;
                local_138 = dVar4;
                local_130 = dVar5;
                local_128 = dVar6;
                dVar25 = ShewchukExactPredicates::orient3d
                                   (&local_138,&local_150,&local_168,&local_180);
                if (0.0 < dVar25) {
                  lVar21 = (longlong)(int)local_298[0];
                  uVar16 = 0;
                  if ((int)local_298[0] < (this->VisiblePoints).ArrayNum) {
                    uVar16 = ~local_298[0] >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(int *)((this_00->AllocatorInstance).Data + lVar21 * 0x40 + 8) == 0) {
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              (&this->TrisWithPoints,local_218,(bool *)local_298);
                  }
                  lVar21 = (longlong)(int)local_298[0];
                  uVar16 = 0;
                  if ((int)local_298[0] < (this->VisiblePoints).ArrayNum) {
                    uVar16 = ~local_298[0] >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar22 = (this_00->AllocatorInstance).Data + lVar21 * 0x40;
                  if (*(double *)&pFVar22[0x18].field_0x0 <= dVar3 &&
                      dVar3 != *(double *)&pFVar22[0x18].field_0x0) {
                    *(double *)&pFVar22[0x18].field_0x0 = dVar3;
                    *(uint *)&pFVar22[0x10].field_0x0 = uVar23;
                  }
                  local_290[0] = uVar23;
                  if (((*(uint **)&pFVar22->field_0x0 <= local_290) &&
                      (local_290 < *(uint **)&pFVar22->field_0x0 + *(int *)(pFVar22 + 0xc))) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  iVar19 = *(int *)&pFVar22[8].field_0x0;
                  if (iVar19 == *(int *)(pFVar22 + 0xc)) {
                    iVar19 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)pFVar22,(int *)(pFVar22 + 0xc));
                  }
                  *(int *)&pFVar22[8].field_0x0 = iVar19 + 1;
                  *(uint *)(*(longlong *)&pFVar22->field_0x0 + (longlong)iVar19 * 4) = local_290[0];
                  uVar16 = 0;
                  if ((int)uVar23 < local_288.ArrayNum) {
                    uVar16 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  local_288.AllocatorInstance.Data[lVar24] = (FScriptContainerElement)0x1;
                }
              }
            }
          }
          uVar23 = uVar23 + 1;
          lVar24 = lVar24 + 1;
        } while ((int)uVar23 < param_2);
      }
      local_298[0] = local_298[0] + 1;
      iVar19 = param_1->ArrayNum;
    } while ((int)local_298[0] < iVar19);
  }
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  return;
}

// InitVisibility @ 1433b6d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FHullConnectivity<double>::InitVisibility
          (FHullConnectivity<double> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,
          TFunctionRef<bool___cdecl(int)> *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  uint local_228 [2];
  uint local_220 [2];
  TArray<bool,TSizedDefaultAllocator<32>_> local_218;
  undefined8 local_208;
  uint local_200;
  undefined4 local_1f8 [2];
  undefined4 local_1f0 [2];
  undefined4 local_1e8 [2];
  uint local_1e0 [2];
  uint local_1d8 [4];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  int local_178 [2];
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a0;
  
  TArray<UE::Geometry::FHullConnectivity<double>::FVisiblePoints,TSizedDefaultAllocator<32>_>::
  SetNum(&this->VisiblePoints,param_1->ArrayNum,Default);
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_218,param_2,Default);
  iVar10 = param_1->ArrayNum;
  uVar13 = 0;
  if (0 < iVar10) {
    lVar15 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar13 < iVar10) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (param_1->AllocatorInstance).Data;
      local_208 = *(undefined8 *)(pFVar12 + lVar15);
      uVar14 = *(uint *)(pFVar12 + lVar15 + 8);
      uVar9 = (uint)local_208;
      uVar8 = 0;
      if ((int)(uint)local_208 < local_218.ArrayNum) {
        uVar8 = ~(uint)local_208 >> 0x1f;
      }
      local_200 = uVar14;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = local_208._4_4_;
      local_218.AllocatorInstance.Data[(int)uVar9] = (FScriptContainerElement)0x1;
      uVar9 = 0;
      if ((int)local_208._4_4_ < local_218.ArrayNum) {
        uVar9 = ~local_208._4_4_ >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_218.AllocatorInstance.Data[(int)uVar8] = (FScriptContainerElement)0x1;
      uVar9 = 0;
      if ((int)uVar14 < local_218.ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 0xc;
      local_218.AllocatorInstance.Data[(int)uVar14] = (FScriptContainerElement)0x1;
      iVar10 = param_1->ArrayNum;
    } while ((int)uVar13 < iVar10);
  }
  dVar5 = __real_3ff0000000000000;
  local_228[0] = 0;
  if (0 < iVar10) {
    do {
      uVar13 = local_228[0];
      pcVar2 = *(code **)param_3;
      uVar1 = *(undefined8 *)&param_3->field_0x8;
      uVar14 = 0;
      if ((int)local_228[0] < iVar10) {
        uVar14 = ~local_228[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar15 = (longlong)(int)uVar13;
      pFVar12 = (param_1->AllocatorInstance).Data;
      local_1f8[0] = *(undefined4 *)(pFVar12 + lVar15 * 0xc);
      (*pcVar2)(&local_128,uVar1,local_1f8);
      local_1f0[0] = *(undefined4 *)(pFVar12 + lVar15 * 0xc + 4);
      local_1c8 = local_128;
      dStack_1c0 = dStack_120;
      local_1b8 = local_118;
      (*pcVar2)(&local_110,uVar1,local_1f0);
      local_1e8[0] = *(undefined4 *)(pFVar12 + lVar15 * 0xc + 8);
      local_1a0 = local_100;
      local_1b0 = local_110;
      dStack_1a8 = dStack_108;
      (*pcVar2)(&local_f8,uVar1,local_1e8);
      uVar13 = local_228[0];
      local_198 = local_f8;
      dStack_190 = dStack_f0;
      local_188 = local_e8;
      uVar14 = 0;
      if ((int)local_228[0] < (this->VisiblePoints).ArrayNum) {
        uVar14 = ~local_228[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->VisiblePoints).AllocatorInstance.Data;
      dVar16 = (local_188 - local_1b8) * (local_1b0 - local_1c8) -
               (local_198 - local_1c8) * (local_1a0 - local_1b8);
      dVar4 = (dStack_190 - dStack_1c0) * (local_1a0 - local_1b8) -
              (local_188 - local_1b8) * (dStack_1a8 - dStack_1c0);
      dVar19 = (local_198 - local_1c8) * (dStack_1a8 - dStack_1c0) -
               (dStack_190 - dStack_1c0) * (local_1b0 - local_1c8);
      auVar17._0_8_ = dVar16 * dVar16;
      auVar17._8_8_ = 0;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar4 * dVar4 + auVar17._0_8_ + dVar19 * dVar19;
      auVar18 = sqrtpd(auVar17,auVar18);
      if (auVar18._0_8_ <= 0.0) {
        dVar19 = 0.0;
        dVar16 = 0.0;
        dVar3 = 0.0;
      }
      else {
        dVar3 = dVar5 / auVar18._0_8_;
        dVar19 = dVar3 * dVar19;
        dVar16 = dVar3 * dVar16;
        dVar3 = dVar3 * dVar4;
      }
      *(double *)(pFVar12 + (longlong)(int)uVar13 * 0x40 + 0x20) = dVar3;
      uVar14 = 0;
      *(double *)(pFVar12 + (longlong)(int)uVar13 * 0x40 + 0x28) = dVar16;
      *(double *)(pFVar12 + (longlong)(int)uVar13 * 0x40 + 0x30) = dVar19;
      *(double *)(pFVar12 + (longlong)(int)uVar13 * 0x40 + 0x38) =
           dStack_1c0 * dVar16 + local_1c8 * dVar3 + local_1b8 * dVar19;
      if (0 < param_2) {
        lVar15 = 0;
        do {
          local_1e0[0] = uVar14;
          cVar7 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_1e0);
          if (cVar7 != '\0') {
            uVar13 = 0;
            if ((int)uVar14 < local_218.ArrayNum) {
              uVar13 = ~uVar14 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (local_218.AllocatorInstance.Data[lVar15] != (FScriptContainerElement)0x1) {
              local_1d8[0] = uVar14;
              (**(code **)param_3)(&local_e0,*(undefined8 *)&param_3->field_0x8,local_1d8);
              dVar4 = local_d0;
              dVar16 = dStack_d8;
              dVar19 = local_e0;
              lVar11 = (longlong)(int)local_228[0];
              local_a0 = local_d0;
              uVar13 = 0;
              if ((int)local_228[0] < (this->VisiblePoints).ArrayNum) {
                uVar13 = ~local_228[0] >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar12 = (this->VisiblePoints).AllocatorInstance.Data;
              lVar11 = lVar11 * 0x40;
              dVar3 = (dVar16 * *(double *)(pFVar12 + lVar11 + 0x28) +
                       dVar19 * *(double *)(pFVar12 + lVar11 + 0x20) +
                      local_a0 * *(double *)(pFVar12 + lVar11 + 0x30)) -
                      *(double *)(pFVar12 + lVar11 + 0x38);
              if ((this->VisibleDistanceThreshold < 0.0) || (this->VisibleDistanceThreshold < dVar3)
                 ) {
                local_140 = local_1c8;
                dStack_138 = dStack_1c0;
                local_130 = local_1b8;
                local_170 = local_198;
                dStack_168 = dStack_190;
                local_158 = local_1b0;
                dStack_150 = dStack_1a8;
                local_160 = local_188;
                local_148 = local_1a0;
                local_c8 = dVar19;
                dStack_c0 = dVar16;
                local_b8 = dVar4;
                dVar19 = ShewchukExactPredicates::orient3d
                                   (&local_140,&local_158,&local_170,&local_c8);
                if (0.0 < dVar19) {
                  lVar11 = (longlong)(int)local_228[0];
                  uVar13 = 0;
                  if ((int)local_228[0] < (this->VisiblePoints).ArrayNum) {
                    uVar13 = ~local_228[0] >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (*(int *)((this->VisiblePoints).AllocatorInstance.Data + lVar11 * 0x40 + 8) ==
                      0) {
                    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                              (&this->TrisWithPoints,local_178,(bool *)local_228);
                  }
                  lVar11 = (longlong)(int)local_228[0];
                  uVar13 = 0;
                  if ((int)local_228[0] < (this->VisiblePoints).ArrayNum) {
                    uVar13 = ~local_228[0] >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar12 = (this->VisiblePoints).AllocatorInstance.Data + lVar11 * 0x40;
                  if (*(double *)&pFVar12[0x18].field_0x0 <= dVar3 &&
                      dVar3 != *(double *)&pFVar12[0x18].field_0x0) {
                    *(double *)&pFVar12[0x18].field_0x0 = dVar3;
                    *(uint *)&pFVar12[0x10].field_0x0 = uVar14;
                  }
                  local_220[0] = uVar14;
                  if (((*(uint **)&pFVar12->field_0x0 <= local_220) &&
                      (local_220 < *(uint **)&pFVar12->field_0x0 + *(int *)(pFVar12 + 0xc))) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  iVar10 = *(int *)&pFVar12[8].field_0x0;
                  if (iVar10 == *(int *)(pFVar12 + 0xc)) {
                    iVar10 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
                  }
                  *(int *)&pFVar12[8].field_0x0 = iVar10 + 1;
                  *(uint *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar10 * 4) = local_220[0];
                  uVar13 = 0;
                  if ((int)uVar14 < local_218.ArrayNum) {
                    uVar13 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  local_218.AllocatorInstance.Data[lVar15] = (FScriptContainerElement)0x1;
                }
              }
            }
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 1;
        } while ((int)uVar14 < param_2);
      }
      local_228[0] = local_228[0] + 1;
      iVar10 = param_1->ArrayNum;
    } while ((int)local_228[0] < iVar10);
  }
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  return;
}

// SetTriPts @ 1433cb600

void __thiscall
UE::Geometry::FHullConnectivity<float>::SetTriPts
          (FHullConnectivity<float> *this,FIndex3i *param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,TVector<float> *param_3)

{
  int local_res10 [2];
  undefined8 local_18;
  float local_10;
  
  local_res10[0] = (param_1->field0_0x0)._s_0.A;
  (**(code **)param_2)(&local_18,*(undefined8 *)&param_2->field_0x8,local_res10);
  *(undefined8 *)&param_3->field0_0x0 = local_18;
  (param_3->field0_0x0)._s_0.Z = local_10;
  local_res10[0] = (param_1->field0_0x0)._s_0.B;
  (**(code **)param_2)(&local_18,*(undefined8 *)&param_2->field_0x8,local_res10);
  *(undefined8 *)&param_3[1].field0_0x0 = local_18;
  param_3[1].field0_0x0._s_0.Z = local_10;
  local_res10[0] = (param_1->field0_0x0)._s_0.C;
  (**(code **)param_2)(&local_18,*(undefined8 *)&param_2->field_0x8,local_res10);
  *(undefined8 *)&param_3[2].field0_0x0 = local_18;
  param_3[2].field0_0x0._s_0.Z = local_10;
  return;
}

// SetTriPts @ 1433cb6b0

void __thiscall
UE::Geometry::FHullConnectivity<double>::SetTriPts
          (FHullConnectivity<double> *this,FIndex3i *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,TVector<double> *param_3)

{
  int local_res10 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  local_res10[0] = (param_1->field0_0x0)._s_0.A;
  (**(code **)param_2)(&local_28,*(undefined8 *)&param_2->field_0x8,local_res10);
  *(undefined4 *)&param_3->field0_0x0 = local_28;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 4) = uStack_24;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 8) = uStack_20;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc) = uStack_1c;
  (param_3->field0_0x0)._s_0.Z = local_18;
  local_res10[0] = (param_1->field0_0x0)._s_0.B;
  (**(code **)param_2)(&local_28,*(undefined8 *)&param_2->field_0x8,local_res10);
  *(undefined4 *)&param_3[1].field0_0x0 = local_28;
  *(undefined4 *)((longlong)&param_3[1].field0_0x0 + 4) = uStack_24;
  *(undefined4 *)((longlong)&param_3[1].field0_0x0 + 8) = uStack_20;
  *(undefined4 *)((longlong)&param_3[1].field0_0x0 + 0xc) = uStack_1c;
  param_3[1].field0_0x0._s_0.Z = local_18;
  local_res10[0] = (param_1->field0_0x0)._s_0.C;
  (**(code **)param_2)(&local_28,*(undefined8 *)&param_2->field_0x8,local_res10);
  param_3[2].field0_0x0._s_0.X = (double)CONCAT44(uStack_24,local_28);
  param_3[2].field0_0x0._s_0.Y = (double)CONCAT44(uStack_1c,uStack_20);
  param_3[2].field0_0x0._s_0.Z = local_18;
  return;
}

// UpdateHullWithNewPoint @ 1433dd170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FHullConnectivity<float>::UpdateHullWithNewPoint
          (FHullConnectivity<float> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_3,int param_4,int param_5,
          float param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar11;
  FHullConnectivity<float> *pFVar12;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *pTVar13;
  float fVar14;
  float fVar15;
  int *piVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  int iVar21;
  TVector<double> *pTVar22;
  byte bVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar33;
  double dVar34;
  double dVar35;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar36 [16];
  undefined1 auStackY_4c8 [32];
  undefined1 local_478;
  undefined1 local_477 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_470;
  undefined4 local_460 [2];
  undefined4 local_458 [2];
  uint local_450;
  int local_44c;
  int local_448;
  TArray<UE::Geometry::FHullConnectivity<float>::FNewTriangle,TSizedDefaultAllocator<32>_> local_440
  ;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_430;
  int local_428;
  undefined4 uStack_424;
  undefined4 local_420;
  int local_41c;
  uint uStack_418;
  int local_414;
  FHullConnectivity<float> *local_410;
  undefined8 local_408;
  float fStack_400;
  float fStack_3fc;
  undefined8 uStack_3f8;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  undefined4 uStack_3e4;
  int iStack_3e0;
  undefined4 uStack_3dc;
  float local_3d8;
  float local_3d4;
  float local_3d0;
  undefined4 local_3c8 [2];
  uint local_3c0 [2];
  int local_3b8;
  int local_3b4;
  undefined4 local_3b0 [2];
  undefined4 local_3a8 [2];
  undefined4 local_3a0 [2];
  undefined4 local_398 [2];
  undefined4 local_390 [2];
  uint local_388;
  int local_380 [2];
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *local_378;
  TVector<float>_u_0 local_370;
  float local_360;
  float fStack_35c;
  float local_358;
  float local_354;
  float fStack_350;
  float local_34c;
  float local_348;
  float fStack_344;
  float local_340;
  longlong local_338;
  longlong local_330;
  undefined8 local_328;
  float local_320;
  float local_31c;
  float local_318;
  float local_310;
  float local_30c;
  float local_308;
  int local_300;
  int local_2fc;
  int local_2f8 [2];
  int *local_2f0;
  code *local_2e8;
  longlong *local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 uStack_2b8;
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_2b0;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_270;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  TVector<double> local_178 [2];
  undefined4 local_144;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_3b8 = param_5;
  local_380[0] = param_5;
  local_430 = param_1;
  local_410 = this;
  local_378 = param_3;
  (**(code **)param_3)(&local_370,*(undefined8 *)&param_3->field_0x8,local_380);
  local_2b0._0_8_ = *(undefined8 *)param_3;
  local_2b0._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.ArrayNum = 0;
  local_470.ArrayMax = 0;
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_118 = (uint *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_440.ArrayNum = 0;
  local_440.ArrayMax = 0;
  HorizonHelper(this,param_1,&local_2b0,(TVector<float> *)&local_370._s_0,&local_470,
                (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,&local_440,
                param_4,-1,0.0 < param_6);
  if (0.0 < param_6) {
    iVar26 = local_440.ArrayNum;
    uVar25 = (ulonglong)local_440.ArrayNum;
    pFVar28 = local_440.AllocatorInstance.Data + uVar25 * 0xc;
    FVar27.Data = local_440.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar25 != iVar26) {
        local_478 = 0;
        `TCheckedPointerIterator<UE::Geometry::FHullConnectivity<float>::FNewTriangle,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_478);
      }
      uVar30 = local_110;
      if (FVar27.Data == pFVar28) break;
      local_3c8[0] = *(undefined4 *)FVar27.Data;
      (**(code **)param_3)(&local_320,*(undefined8 *)&param_3->field_0x8,local_3c8);
      if ((local_31c - local_370._s_0.Y) * (local_31c - local_370._s_0.Y) +
          (local_320 - local_370._s_0.X) * (local_320 - local_370._s_0.X) +
          (local_318 - local_370._s_0.Z) * (local_318 - local_370._s_0.Z) < param_6) {
        if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.AllocatorInstance.Data);
        }
        local_f0 = 0;
        if (local_f8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f8);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_138);
        if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.AllocatorInstance.Data);
        }
        return false;
      }
      uVar25 = local_440._8_8_ & 0xffffffff;
      FVar27.Data = FVar27.Data + 0xc;
    }
    local_3e8 = 0.0;
    fStack_3fc = 1.4013e-45;
    fStack_3ec = (float)0;
    fStack_400 = 0.0;
    if (local_110 != 0) {
      puVar32 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar32 = local_118;
      }
      uVar29 = *puVar32;
      local_3e8 = 0.0;
      while (uVar29 == 0) {
        lVar24 = (longlong)(int)fStack_400;
        local_3e8 = (float)((int)local_3e8 + 0x20);
        fStack_400 = (float)((int)fStack_400 + 1);
        fStack_3fc = 1.4013e-45;
        fStack_3ec = (float)local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)fStack_400)
        goto LAB_1433dd413;
        uVar29 = (puVar32 + 1)[lVar24];
      }
      fStack_3fc = (float)(-uVar29 & uVar29);
      uVar25 = (ulonglong)(uint)fStack_3fc * 2 + 1;
      lVar24 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_300 = (int)lVar24;
      fStack_3ec = (float)(local_300 + -1 + (int)local_3e8);
      if ((int)local_110 < (int)fStack_3ec) {
        fStack_3ec = (float)local_110;
      }
    }
LAB_1433dd413:
    local_408 = (longlong *)local_138;
    uStack_3e4 = local_144;
    TStack_2d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    iStack_3e0 = local_138._8_4_ - local_104;
    uVar29 = local_110 & 0xffffffe0;
    fStack_3f0 = -NAN;
    TStack_2d8._padding_ = CONCAT44(fStack_3fc,fStack_400);
    iVar26 = (int)local_110 >> 5;
    TStack_2d8._28_4_ = local_144;
    TStack_2d8.BaseBitIndex = (int)local_3e8;
    uStack_2b8 = CONCAT44(uStack_3dc,iStack_3e0);
    bVar23 = (byte)local_110;
    TStack_2d8.UnvisitedBitMask = 0xffffffff;
    TStack_2d8.CurrentBitIndex = (int)fStack_3ec;
    local_2e0 = local_408;
    uStack_3f8 = TStack_2d8.Array;
    if ((int)local_110 < 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        uVar19 = (*pcVar4)();
        return (bool)uVar19;
      }
    }
    if (uVar30 != local_110) {
      puVar32 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar32 = local_118;
      }
      uVar30 = -1 << (bVar23 & 0x1f) & puVar32[iVar26];
      while (uVar30 == 0) {
        lVar24 = (longlong)iVar26;
        uVar29 = uVar29 + 0x20;
        iVar26 = iVar26 + 1;
        uVar30 = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
        goto LAB_1433dd540;
        uVar30 = (puVar32 + 1)[lVar24];
      }
      uVar25 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_2fc = (int)lVar24;
      uVar30 = local_2fc + -1 + uVar29;
      if ((int)local_110 < (int)uVar30) {
        uVar30 = local_110;
      }
    }
LAB_1433dd540:
    while( true ) {
      plVar17 = local_2e0;
      if ((int)local_2e0[1] - *(int *)((longlong)local_2e0 + 0x34) != (int)uStack_2b8) {
        local_477[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_477);
      }
      pFVar12 = local_410;
      if (((TStack_2d8.CurrentBitIndex == uVar30) &&
          (TStack_2d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
         (this = local_410, plVar17 == (longlong *)local_138)) break;
      uVar29 = *(uint *)(*plVar17 + (longlong)TStack_2d8.CurrentBitIndex * 0xc);
      uVar31 = ~uVar29 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar29 < (local_410->VisiblePoints).ArrayNum) {
        uVar20 = uVar31;
      }
      if (uVar20 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          uVar19 = (*pcVar4)();
          return (bool)uVar19;
        }
      }
      lVar24 = (longlong)(int)uVar29 * 0x40;
      if (0 < *(int *)((pFVar12->VisiblePoints).AllocatorInstance.Data + lVar24 + 8)) {
        local_3c0[0] = uVar29;
        if (*(int *)&(pFVar12->TrisWithPoints).Elements.field_0x8 !=
            *(int *)&(pFVar12->TrisWithPoints).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (&pFVar12->TrisWithPoints,uVar29,(int *)local_3c0);
        }
        uVar20 = 0;
        if ((int)uVar29 < (pFVar12->VisiblePoints).ArrayNum) {
          uVar20 = uVar31;
        }
        if (uVar20 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar4 = (code *)swi(3);
            uVar19 = (*pcVar4)();
            return (bool)uVar19;
          }
        }
        pTVar33 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  ((pFVar12->VisiblePoints).AllocatorInstance.Data + lVar24);
        if (&local_470 == pTVar33) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L"");
          if (bVar18) {
            pcVar4 = (code *)swi(3);
            uVar19 = (*pcVar4)();
            return (bool)uVar19;
          }
        }
        iVar26 = pTVar33->ArrayNum;
        if (iVar26 != 0) {
          iVar21 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar26,&local_470.AllocatorInstance,&local_470.ArrayNum,
                              &local_470.ArrayMax);
          memcpy(local_470.AllocatorInstance.Data + (longlong)iVar21 * 4,
                 (pTVar33->AllocatorInstance).Data,(longlong)iVar26 << 2);
        }
        pFVar12 = local_410;
        uVar20 = 0;
        if ((int)uVar29 < (local_410->VisiblePoints).ArrayNum) {
          uVar20 = uVar31;
        }
        if (uVar20 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar4 = (code *)swi(3);
            uVar19 = (*pcVar4)();
            return (bool)uVar19;
          }
        }
        pFVar28 = (pFVar12->VisiblePoints).AllocatorInstance.Data + lVar24;
        iVar26 = *(int *)(pFVar28 + 0xc);
        *(undefined4 *)&pFVar28[8].field_0x0 = 0;
        if (iVar26 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pFVar28,0,(int *)(pFVar28 + 0xc));
        }
        *(undefined4 *)&pFVar28[0x10].field_0x0 = 0xffffffff;
        *(undefined8 *)&pFVar28[0x18].field_0x0 = 0xffefffffffffffff;
      }
      TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
    }
  }
  local_448 = local_440.ArrayNum;
  local_3b4 = local_430->ArrayNum;
  if (local_440.ArrayNum < 1) {
LAB_1433de3ec:
    DeleteTriangles(this,local_430,
                    (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138);
    if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.AllocatorInstance.Data);
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
    if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.AllocatorInstance.Data);
    }
    return true;
  }
  local_2f0 = &local_430->ArrayMax;
  local_44c = local_440.ArrayNum + -1;
  local_338 = 0;
  local_330 = 0;
  uVar30 = 0;
  do {
    piVar16 = local_2f0;
    lVar24 = local_338;
    pTVar11 = local_430;
    uVar29 = 0;
    if ((int)uVar30 < local_440.ArrayNum) {
      uVar29 = ~uVar30 >> 0x1f;
    }
    if (uVar29 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        uVar19 = (*pcVar4)();
        return (bool)uVar19;
      }
    }
    FVar27.Data = local_440.AllocatorInstance.Data;
    pFVar28 = (pTVar11->AllocatorInstance).Data;
    local_428 = local_3b8;
    uStack_424 = *(undefined4 *)(local_440.AllocatorInstance.Data + lVar24);
    local_420 = *(undefined4 *)(local_440.AllocatorInstance.Data + lVar24 + 4);
    if ((pFVar28 <= (FScriptContainerElement *)&local_428) &&
       ((FScriptContainerElement *)&local_428 < pFVar28 + (longlong)*piVar16 * 0xc)) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        uVar19 = (*pcVar4)();
        return (bool)uVar19;
      }
    }
    uVar29 = pTVar11->ArrayNum;
    if (uVar29 == *piVar16) {
      uVar29 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&pTVar11->AllocatorInstance,piVar16);
    }
    pFVar28 = (pTVar11->AllocatorInstance).Data;
    pTVar11->ArrayNum = uVar29 + 1;
    *(ulonglong *)(pFVar28 + (longlong)(int)uVar29 * 0xc) = CONCAT44(uStack_424,local_428);
    *(undefined4 *)(pFVar28 + (longlong)(int)uVar29 * 0xc + 8) = local_420;
    uVar20 = *(uint *)(FVar27.Data + lVar24 + 8);
    local_41c = local_44c % local_448 + local_3b4;
    local_388 = uVar30 + 1;
    local_414 = (int)local_388 % local_448 + local_3b4;
    pFVar28 = (this->TriNeighbors).AllocatorInstance.Data;
    local_450 = uVar29;
    uStack_418 = uVar20;
    if ((pFVar28 <= (FScriptContainerElement *)&local_41c) &&
       ((FScriptContainerElement *)&local_41c <
        pFVar28 + (longlong)(this->TriNeighbors).ArrayMax * 0xc)) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        uVar19 = (*pcVar4)();
        return (bool)uVar19;
      }
    }
    iVar26 = (this->TriNeighbors).ArrayNum;
    if (iVar26 == (this->TriNeighbors).ArrayMax) {
      iVar26 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)this,&(this->TriNeighbors).ArrayMax);
    }
    (this->TriNeighbors).ArrayNum = iVar26 + 1;
    pFVar28 = (this->TriNeighbors).AllocatorInstance.Data;
    *(ulonglong *)(pFVar28 + (longlong)iVar26 * 0xc) = CONCAT44(uStack_418,local_41c);
    *(int *)(pFVar28 + (longlong)iVar26 * 0xc + 8) = local_414;
    iVar26 = *(int *)(FVar27.Data + lVar24 + 4);
    uVar30 = 0;
    if ((int)uVar20 < pTVar11->ArrayNum) {
      uVar30 = ~uVar20 >> 0x1f;
    }
    if (uVar30 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        uVar19 = (*pcVar4)();
        return (bool)uVar19;
      }
    }
    lVar24 = 0;
    do {
      if (*(int *)((pTVar11->AllocatorInstance).Data + lVar24 * 4 + (longlong)(int)uVar20 * 0xc) ==
          iVar26) {
        uVar30 = 0;
        if ((int)uVar20 < (this->TriNeighbors).ArrayNum) {
          uVar30 = ~uVar20 >> 0x1f;
        }
        if (uVar30 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar4 = (code *)swi(3);
            uVar19 = (*pcVar4)();
            return (bool)uVar19;
          }
        }
        *(uint *)((this->TriNeighbors).AllocatorInstance.Data +
                 (lVar24 + (longlong)(int)uVar20 * 3) * 4) = uVar29;
        goto LAB_1433ddafc;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < 3);
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexHull3.cpp"
                        ,0x19f,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      uVar19 = (*pcVar4)();
      return (bool)uVar19;
    }
LAB_1433ddafc:
    iVar26 = (this->VisiblePoints).ArrayNum;
    if (iVar26 == (this->VisiblePoints).ArrayMax) {
      iVar26 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&(this->VisiblePoints).AllocatorInstance,
                          &(this->VisiblePoints).ArrayMax);
    }
    (this->VisiblePoints).ArrayNum = iVar26 + 1;
    pFVar28 = (this->VisiblePoints).AllocatorInstance.Data + (longlong)iVar26 * 0x40;
    *(undefined4 *)(pFVar28 + 0x14) = 0;
    *(undefined8 *)&pFVar28[0x20].field_0x0 = 0;
    *(undefined8 *)&pFVar28[0x28].field_0x0 = 0;
    *(undefined8 *)&pFVar28[0x30].field_0x0 = 0;
    *(undefined8 *)&pFVar28[0x38].field_0x0 = 0;
    lVar24 = (longlong)(int)local_450;
    *(undefined8 *)&pFVar28[0x18].field_0x0 = 0xffefffffffffffff;
    *(undefined8 *)&pFVar28->field_0x0 = 0;
    *(undefined8 *)&pFVar28[8].field_0x0 = 0;
    *(undefined4 *)&pFVar28[0x10].field_0x0 = 0xffffffff;
    pcVar4 = *(code **)local_378;
    uVar2 = *(undefined8 *)&local_378->field_0x8;
    uVar30 = 0;
    if ((int)local_450 < local_430->ArrayNum) {
      uVar30 = ~local_450 >> 0x1f;
    }
    local_328 = uVar2;
    local_2e8 = pcVar4;
    if (uVar30 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        uVar19 = (*pcVar4)();
        return (bool)uVar19;
      }
    }
    pFVar3 = (local_430->AllocatorInstance).Data;
    local_3b0[0] = *(undefined4 *)(pFVar3 + lVar24 * 0xc);
    (*pcVar4)(&local_348,uVar2,local_3b0);
    fVar15 = local_340;
    local_408 = (longlong *)CONCAT44(fStack_344,local_348);
    local_3a8[0] = *(undefined4 *)(pFVar3 + lVar24 * 0xc + 4);
    fStack_400 = local_340;
    (*pcVar4)(&local_354,local_328,local_3a8);
    fVar14 = local_34c;
    local_3a0[0] = *(undefined4 *)(pFVar3 + lVar24 * 0xc + 8);
    fStack_3fc = local_354;
    uStack_3f8._0_4_ = fStack_350;
    uStack_3f8._4_4_ = local_34c;
    (*local_2e8)(&local_360,local_328,local_3a0);
    fStack_3ec = fStack_35c;
    fStack_3f0 = local_360;
    dVar7 = (double)local_358;
    local_3e8 = local_358;
    dVar5 = (double)local_360;
    dVar6 = (double)fStack_35c;
    dVar8 = (double)local_354;
    dVar9 = (double)fStack_350;
    dVar35 = (double)local_348;
    dVar34 = (double)fStack_344;
    local_2a0._s_0.X = dVar5;
    local_2a0._s_0.Y = dVar6;
    local_2a0._s_0.Z = dVar7;
    local_288._s_0.X = dVar8;
    local_288._s_0.Y = dVar9;
    local_288._s_0.Z = (double)fVar14;
    local_270._s_0.X = dVar35;
    local_270._s_0.Y = dVar34;
    local_270._s_0.Z = (double)fVar15;
    pTVar22 = VectorUtil::Normal<double>
                        (local_178,(TVector<double> *)&local_270._s_0,
                         (TVector<double> *)&local_288._s_0,(TVector<double> *)&local_2a0._s_0);
    pTVar13 = local_378;
    uVar30 = 0;
    local_198 = *(undefined1 (*) [16])&pTVar22->field0_0x0;
    local_188 = (pTVar22->field0_0x0)._s_0.Z;
    auVar10._4_8_ = extraout_XMM0_Qb;
    auVar10._0_4_ = local_198._4_4_;
    auVar36._0_8_ = auVar10._0_8_ << 0x20;
    auVar36._8_4_ = local_198._8_4_;
    auVar36._12_4_ = local_198._12_4_;
    *(undefined1 (*) [16])(pFVar28 + 0x20) = local_198;
    dStack_180 = dVar34 * auVar36._8_8_ + dVar35 * local_198._0_8_ + (double)fVar15 * local_188;
    *(double *)&pFVar28[0x30].field_0x0 = local_188;
    *(double *)&pFVar28[0x38].field_0x0 = dStack_180;
    if (this->VisibleDistanceThreshold <= 0.0) {
      if (0 < local_470.ArrayNum) {
        lVar24 = 0;
        iVar26 = local_470.ArrayNum;
        do {
          uVar29 = 0;
          if ((int)uVar30 < iVar26) {
            uVar29 = ~uVar30 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar4 = (code *)swi(3);
            uVar19 = (*pcVar4)();
            return (bool)uVar19;
          }
          uVar1 = *(undefined4 *)(local_470.AllocatorInstance.Data + lVar24);
          local_390[0] = uVar1;
          (**(code **)pTVar13)(&local_3d8,*(undefined8 *)&pTVar13->field_0x8,local_390);
          local_1b0 = (double)(float)local_408;
          local_1a8 = (double)local_408._4_4_;
          local_1a0 = (double)fStack_400;
          local_1c8 = (double)fStack_3fc;
          local_1c0 = (double)(float)uStack_3f8;
          local_1b8 = (double)uStack_3f8._4_4_;
          local_1e0 = (double)fStack_3f0;
          local_1d8 = (double)fStack_3ec;
          local_1d0 = (double)local_3e8;
          local_1f8 = (double)local_3d8;
          local_1f0 = (double)local_3d4;
          local_1e8 = (double)local_3d0;
          dVar35 = ShewchukExactPredicates::orient3d(&local_1b0,&local_1c8,&local_1e0,&local_1f8);
          if (dVar35 <= 0.0) {
            iVar26 = local_470.ArrayNum;
          }
          else {
            dVar35 = ((double)local_3d4 * *(double *)&pFVar28[0x28].field_0x0 +
                      (double)local_3d8 * *(double *)&pFVar28[0x20].field_0x0 +
                     (double)local_3d0 * *(double *)&pFVar28[0x30].field_0x0) -
                     *(double *)&pFVar28[0x38].field_0x0;
            if (*(double *)&pFVar28[0x18].field_0x0 <= dVar35 &&
                dVar35 != *(double *)&pFVar28[0x18].field_0x0) {
              *(double *)&pFVar28[0x18].field_0x0 = dVar35;
              *(undefined4 *)&pFVar28[0x10].field_0x0 = uVar1;
            }
            local_458[0] = uVar1;
            if (((*(undefined4 **)&pFVar28->field_0x0 <= local_458) &&
                (local_458 < *(undefined4 **)&pFVar28->field_0x0 + *(int *)(pFVar28 + 0xc))) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar18)) {
              pcVar4 = (code *)swi(3);
              uVar19 = (*pcVar4)();
              return (bool)uVar19;
            }
            iVar26 = *(int *)&pFVar28[8].field_0x0;
            if (iVar26 == *(int *)(pFVar28 + 0xc)) {
              iVar26 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar28,(int *)(pFVar28 + 0xc));
            }
            *(int *)&pFVar28[8].field_0x0 = iVar26 + 1;
            *(undefined4 *)(*(longlong *)&pFVar28->field_0x0 + (longlong)iVar26 * 4) = local_458[0];
            uVar29 = 0;
            if ((int)uVar30 < local_470.ArrayNum) {
              uVar29 = ~uVar30 >> 0x1f;
            }
            if (uVar29 == 0) {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar18) {
                pcVar4 = (code *)swi(3);
                uVar19 = (*pcVar4)();
                return (bool)uVar19;
              }
            }
            iVar26 = (local_470.ArrayNum - uVar30) + -1;
            if (1 < iVar26) {
              iVar26 = 1;
            }
            iVar21 = local_470.ArrayNum;
            if (iVar26 != 0) {
              memmove(local_470.AllocatorInstance.Data + (longlong)(int)uVar30 * 4,
                      local_470.AllocatorInstance.Data + (longlong)(local_470.ArrayNum - iVar26) * 4
                      ,(longlong)iVar26 << 2);
              iVar21 = local_470.ArrayNum;
            }
            uVar30 = uVar30 - 1;
            local_470.ArrayNum = iVar21 + -1;
            lVar24 = lVar24 + -4;
            iVar26 = iVar21 + -1;
          }
          uVar30 = uVar30 + 1;
          lVar24 = lVar24 + 4;
          this = local_410;
        } while ((int)uVar30 < iVar26);
      }
    }
    else if (0 < local_470.ArrayNum) {
      lVar24 = 0;
      iVar26 = local_470.ArrayNum;
      do {
        uVar29 = 0;
        if ((int)uVar30 < iVar26) {
          uVar29 = ~uVar30 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          uVar19 = (*pcVar4)();
          return (bool)uVar19;
        }
        uVar1 = *(undefined4 *)(local_470.AllocatorInstance.Data + lVar24);
        local_398[0] = uVar1;
        (**(code **)local_378)(&local_310,*(undefined8 *)&local_378->field_0x8,local_398);
        dVar35 = ((double)local_310 * *(double *)&pFVar28[0x20].field_0x0 +
                  (double)local_30c * *(double *)&pFVar28[0x28].field_0x0 +
                 (double)local_308 * *(double *)&pFVar28[0x30].field_0x0) -
                 *(double *)&pFVar28[0x38].field_0x0;
        if (dVar35 < this->VisibleDistanceThreshold || dVar35 == this->VisibleDistanceThreshold) {
LAB_1433de02e:
          iVar26 = local_470.ArrayNum;
        }
        else {
          local_210 = (double)(float)local_408;
          local_208 = (double)local_408._4_4_;
          local_200 = (double)fStack_400;
          local_258 = (double)local_310;
          local_250 = (double)local_30c;
          local_248 = (double)local_308;
          local_240 = dVar5;
          local_238 = dVar6;
          local_230 = dVar7;
          local_228 = dVar8;
          local_220 = dVar9;
          local_218 = (double)fVar14;
          dVar34 = ShewchukExactPredicates::orient3d(&local_210,&local_228,&local_240,&local_258);
          if (dVar34 <= 0.0) goto LAB_1433de02e;
          if (*(double *)&pFVar28[0x18].field_0x0 <= dVar35 &&
              dVar35 != *(double *)&pFVar28[0x18].field_0x0) {
            *(double *)&pFVar28[0x18].field_0x0 = dVar35;
            *(undefined4 *)&pFVar28[0x10].field_0x0 = uVar1;
          }
          local_460[0] = uVar1;
          if (((*(undefined4 **)&pFVar28->field_0x0 <= local_460) &&
              (local_460 < *(undefined4 **)&pFVar28->field_0x0 + *(int *)(pFVar28 + 0xc))) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar4 = (code *)swi(3);
            uVar19 = (*pcVar4)();
            return (bool)uVar19;
          }
          iVar26 = *(int *)&pFVar28[8].field_0x0;
          if (iVar26 == *(int *)(pFVar28 + 0xc)) {
            iVar26 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar28,(int *)(pFVar28 + 0xc));
          }
          *(int *)&pFVar28[8].field_0x0 = iVar26 + 1;
          *(undefined4 *)(*(longlong *)&pFVar28->field_0x0 + (longlong)iVar26 * 4) = local_460[0];
          uVar29 = 0;
          if ((int)uVar30 < local_470.ArrayNum) {
            uVar29 = ~uVar30 >> 0x1f;
          }
          if (uVar29 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar4 = (code *)swi(3);
              uVar19 = (*pcVar4)();
              return (bool)uVar19;
            }
          }
          iVar26 = (local_470.ArrayNum - uVar30) + -1;
          if (1 < iVar26) {
            iVar26 = 1;
          }
          iVar21 = local_470.ArrayNum;
          if (iVar26 != 0) {
            memmove(local_470.AllocatorInstance.Data + (longlong)(int)uVar30 * 4,
                    local_470.AllocatorInstance.Data + (longlong)(local_470.ArrayNum - iVar26) * 4,
                    (longlong)iVar26 << 2);
            iVar21 = local_470.ArrayNum;
          }
          uVar30 = uVar30 - 1;
          local_470.ArrayNum = iVar21 + -1;
          lVar24 = lVar24 + -4;
          iVar26 = iVar21 + -1;
        }
        uVar30 = uVar30 + 1;
        lVar24 = lVar24 + 4;
      } while ((int)uVar30 < iVar26);
    }
    if (0 < *(int *)&pFVar28[8].field_0x0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->TrisWithPoints,local_2f8,(bool *)&local_450);
    }
    local_330 = local_330 + 1;
    local_44c = local_44c + 1;
    local_338 = local_338 + 0xc;
    if (local_448 <= (int)local_388) goto LAB_1433de3ec;
    uVar30 = local_388;
  } while( true );
}

// UpdateHullWithNewPoint @ 1433de480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FHullConnectivity<double>::UpdateHullWithNewPoint
          (FHullConnectivity<double> *this,
          TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_3,int param_4,int param_5,
          double param_6)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  FHullConnectivity<double> *pFVar8;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *pTVar9;
  int *piVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  byte bVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStackY_498 [32];
  undefined1 local_448;
  undefined1 local_447 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_440;
  undefined4 local_430 [2];
  undefined4 local_428 [2];
  FHullConnectivity<double> *local_420;
  uint local_418;
  int local_414;
  uint local_410;
  int local_40c;
  int local_408;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_400;
  TArray<UE::Geometry::FHullConnectivity<double>::FNewTriangle,TSizedDefaultAllocator<32>_>
  local_3f8;
  int local_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  int local_3dc;
  uint uStack_3d8;
  int local_3d4;
  int local_3d0 [2];
  undefined4 local_3c8;
  uint local_3c0 [2];
  int local_3b8;
  undefined4 local_3b0 [2];
  undefined4 local_3a8 [2];
  undefined4 local_3a0 [2];
  undefined4 local_398 [2];
  undefined4 local_390 [2];
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_388;
  longlong local_380;
  longlong local_378;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  longlong *local_318;
  int iStack_310;
  uint uStack_30c;
  TBitArray<FDefaultBitArrayAllocator> *local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  int local_2f8;
  uint uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  int local_2e8;
  int *local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  int local_2c0;
  int local_2bc;
  longlong *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  TVector<double>_u_0 local_270;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_258;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_408 = param_5;
  local_3d0[0] = param_5;
  local_420 = this;
  local_400 = param_1;
  local_388 = param_3;
  (**(code **)param_3)(&local_270,*(undefined8 *)&param_3->field_0x8,local_3d0);
  local_258._0_8_ = *(undefined8 *)param_3;
  local_258._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_440.ArrayNum = 0;
  local_440.ArrayMax = 0;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f8.ArrayNum = 0;
  local_3f8.ArrayMax = 0;
  HorizonHelper(this,param_1,&local_258,(TVector<double> *)&local_270._s_0,&local_440,
                (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128,&local_3f8,
                param_4,-1,0.0 < param_6);
  if (0.0 < param_6) {
    iVar22 = local_3f8.ArrayNum;
    uVar21 = (ulonglong)local_3f8.ArrayNum;
    pFVar24 = local_3f8.AllocatorInstance.Data + uVar21 * 0xc;
    FVar23.Data = local_3f8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar21 != iVar22) {
        local_448 = 0;
        `TCheckedPointerIterator<UE::Geometry::FHullConnectivity<double>::FNewTriangle,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_448);
      }
      uVar26 = local_100;
      if (FVar23.Data == pFVar24) break;
      local_3c8 = *(undefined4 *)FVar23.Data;
      (**(code **)param_3)(&local_248,*(undefined8 *)&param_3->field_0x8);
      if ((local_240 - local_270._s_0.Y) * (local_240 - local_270._s_0.Y) +
          (local_248 - local_270._s_0.X) * (local_248 - local_270._s_0.X) +
          (local_238 - local_270._s_0.Z) * (local_238 - local_270._s_0.Z) < param_6) {
        if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f8.AllocatorInstance.Data);
        }
        local_e0 = 0;
        if (local_e8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_128);
        if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.AllocatorInstance.Data);
        }
        return false;
      }
      uVar21 = local_3f8._8_8_ & 0xffffffff;
      FVar23.Data = FVar23.Data + 0xc;
    }
    iStack_310 = 0;
    local_2f8 = 0;
    uStack_30c = 1;
    uStack_2fc = 0;
    if (local_100 != 0) {
      puVar28 = (uint *)(local_128 + 0x10);
      if (local_108 != (uint *)0x0) {
        puVar28 = local_108;
      }
      uStack_30c = *puVar28;
      while (uStack_30c == 0) {
        lVar20 = (longlong)iStack_310;
        local_2f8 = local_2f8 + 0x20;
        iStack_310 = iStack_310 + 1;
        uStack_30c = 1;
        uStack_2fc = local_100;
        if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_310)
        goto LAB_1433de773;
        uStack_30c = (puVar28 + 1)[lVar20];
      }
      uStack_30c = -uStack_30c & uStack_30c;
      uVar21 = (ulonglong)uStack_30c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_2c0 = (int)lVar20;
      uStack_2fc = local_2c0 + -1 + local_2f8;
      if ((int)local_100 < (int)uStack_2fc) {
        uStack_2fc = local_100;
      }
    }
LAB_1433de773:
    local_318 = (longlong *)local_128;
    local_308 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
    iStack_2f0 = local_128._8_4_ - local_f4;
    uVar25 = local_100 & 0xffffffe0;
    uStack_300 = 0xffffffff;
    TStack_2b0.CurrentBitIndex = uStack_2fc;
    TStack_2b0.UnvisitedBitMask = 0xffffffff;
    TStack_2b0._padding_ = CONCAT44(uStack_30c,iStack_310);
    iVar22 = (int)local_100 >> 5;
    TStack_2b0._28_4_ = uStack_2fc;
    TStack_2b0.BaseBitIndex = local_2f8;
    uStack_290 = CONCAT44(uStack_2ec,iStack_2f0);
    bVar19 = (byte)local_100;
    uStack_2f4 = uStack_2fc;
    local_2b8 = local_318;
    TStack_2b0.Array = local_308;
    if (((int)local_100 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    if (uVar26 != local_100) {
      puVar28 = (uint *)(local_128 + 0x10);
      if (local_108 != (uint *)0x0) {
        puVar28 = local_108;
      }
      uVar26 = -1 << (bVar19 & 0x1f) & puVar28[iVar22];
      while (uVar26 == 0) {
        lVar20 = (longlong)iVar22;
        uVar25 = uVar25 + 0x20;
        iVar22 = iVar22 + 1;
        uVar26 = local_100;
        if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_1433de8c3;
        uVar26 = (puVar28 + 1)[lVar20];
      }
      uVar21 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_2e8 = (int)lVar20;
      uVar26 = (uVar25 - 1) + local_2e8;
      if ((int)local_100 < (int)uVar26) {
        uVar26 = local_100;
      }
    }
LAB_1433de8c3:
    while( true ) {
      plVar11 = local_2b8;
      if ((int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34) != (int)uStack_290) {
        local_447[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_447);
      }
      if (((TStack_2b0.CurrentBitIndex == uVar26) &&
          (TStack_2b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
         (param_1 = local_400, param_5 = local_408, plVar11 == (longlong *)local_128)) break;
      uVar25 = *(uint *)(*plVar11 + (longlong)TStack_2b0.CurrentBitIndex * 0xc);
      uVar27 = ~uVar25 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar25 < (this->VisiblePoints).ArrayNum) {
        uVar17 = uVar27;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      lVar20 = (longlong)(int)uVar25 * 0x40;
      if (0 < *(int *)((this->VisiblePoints).AllocatorInstance.Data + lVar20 + 8)) {
        local_3c0[0] = uVar25;
        if (*(int *)&(this->TrisWithPoints).Elements.field_0x8 !=
            *(int *)&(this->TrisWithPoints).Elements.field_0x34) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    (&this->TrisWithPoints,uVar25,(int *)local_3c0);
        }
        uVar17 = 0;
        if ((int)uVar25 < (this->VisiblePoints).ArrayNum) {
          uVar17 = uVar27;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          uVar16 = (*pcVar5)();
          return (bool)uVar16;
        }
        pTVar29 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  ((this->VisiblePoints).AllocatorInstance.Data + lVar20);
        if ((&local_440 == pTVar29) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          uVar16 = (*pcVar5)();
          return (bool)uVar16;
        }
        iVar22 = pTVar29->ArrayNum;
        if (iVar22 != 0) {
          iVar18 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar22,&local_440.AllocatorInstance,&local_440.ArrayNum,
                              &local_440.ArrayMax);
          memcpy(local_440.AllocatorInstance.Data + (longlong)iVar18 * 4,
                 (pTVar29->AllocatorInstance).Data,(longlong)iVar22 << 2);
        }
        this = local_420;
        uVar17 = 0;
        if ((int)uVar25 < (local_420->VisiblePoints).ArrayNum) {
          uVar17 = uVar27;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          uVar16 = (*pcVar5)();
          return (bool)uVar16;
        }
        pFVar24 = (this->VisiblePoints).AllocatorInstance.Data + lVar20;
        iVar22 = *(int *)(pFVar24 + 0xc);
        *(undefined4 *)&pFVar24[8].field_0x0 = 0;
        if (iVar22 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)pFVar24,0,(int *)(pFVar24 + 0xc));
        }
        *(undefined4 *)&pFVar24[0x10].field_0x0 = 0xffffffff;
        *(undefined8 *)&pFVar24[0x18].field_0x0 = 0xffefffffffffffff;
      }
      TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
    }
  }
  dVar7 = __real_3ff0000000000000;
  local_3b8 = param_1->ArrayNum;
  local_40c = local_3f8.ArrayNum;
  local_410 = 0;
  if (local_3f8.ArrayNum < 1) {
LAB_1433df6b0:
    DeleteTriangles(this,param_1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_128)
    ;
    if (local_3f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.AllocatorInstance.Data);
    }
    local_e0 = 0;
    if (local_e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_128);
    if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.AllocatorInstance.Data);
    }
    return true;
  }
  local_2e0 = &param_1->ArrayMax;
  local_414 = local_3f8.ArrayNum + -1;
  local_380 = 0;
  local_378 = 0;
  do {
    piVar10 = local_2e0;
    lVar20 = local_380;
    uVar26 = local_410;
    uVar25 = 0;
    if ((int)local_410 < local_3f8.ArrayNum) {
      uVar25 = ~local_410 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    FVar23.Data = local_3f8.AllocatorInstance.Data;
    pFVar24 = (param_1->AllocatorInstance).Data;
    uStack_3e4 = *(undefined4 *)(local_3f8.AllocatorInstance.Data + lVar20);
    local_3e0 = *(undefined4 *)(local_3f8.AllocatorInstance.Data + lVar20 + 4);
    local_3e8 = param_5;
    if (((pFVar24 <= (FScriptContainerElement *)&local_3e8) &&
        ((FScriptContainerElement *)&local_3e8 < pFVar24 + (longlong)*piVar10 * 0xc)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    uVar25 = param_1->ArrayNum;
    if (uVar25 == *piVar10) {
      uVar25 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&param_1->AllocatorInstance,piVar10);
    }
    pFVar24 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = uVar25 + 1;
    *(ulonglong *)(pFVar24 + (longlong)(int)uVar25 * 0xc) = CONCAT44(uStack_3e4,local_3e8);
    *(undefined4 *)(pFVar24 + (longlong)(int)uVar25 * 0xc + 8) = local_3e0;
    uVar17 = *(uint *)(FVar23.Data + lVar20 + 8);
    local_3dc = local_414 % local_40c + local_3b8;
    local_3d4 = (int)(uVar26 + 1) % local_40c + local_3b8;
    pFVar24 = (this->TriNeighbors).AllocatorInstance.Data;
    local_418 = uVar25;
    uStack_3d8 = uVar17;
    if (((pFVar24 <= (FScriptContainerElement *)&local_3dc) &&
        ((FScriptContainerElement *)&local_3dc <
         pFVar24 + (longlong)(this->TriNeighbors).ArrayMax * 0xc)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    iVar22 = (this->TriNeighbors).ArrayNum;
    if (iVar22 == (this->TriNeighbors).ArrayMax) {
      iVar22 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)this,&(this->TriNeighbors).ArrayMax);
    }
    (this->TriNeighbors).ArrayNum = iVar22 + 1;
    pFVar24 = (this->TriNeighbors).AllocatorInstance.Data;
    *(ulonglong *)(pFVar24 + (longlong)iVar22 * 0xc) = CONCAT44(uStack_3d8,local_3dc);
    *(int *)(pFVar24 + (longlong)iVar22 * 0xc + 8) = local_3d4;
    iVar22 = *(int *)(FVar23.Data + lVar20 + 4);
    uVar26 = 0;
    if ((int)uVar17 < param_1->ArrayNum) {
      uVar26 = ~uVar17 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    this = local_420;
    lVar20 = 0;
    do {
      if (*(int *)((param_1->AllocatorInstance).Data + lVar20 * 4 + (longlong)(int)uVar17 * 0xc) ==
          iVar22) {
        uVar26 = 0;
        if ((int)uVar17 < (local_420->TriNeighbors).ArrayNum) {
          uVar26 = ~uVar17 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          uVar16 = (*pcVar5)();
          return (bool)uVar16;
        }
        *(uint *)((this->TriNeighbors).AllocatorInstance.Data +
                 (lVar20 + (longlong)(int)uVar17 * 3) * 4) = uVar25;
        goto LAB_1433dee1e;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < 3);
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexHull3.cpp"
                        ,0x19f,L"");
    this = local_420;
    if (bVar15) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
LAB_1433dee1e:
    iVar22 = (this->VisiblePoints).ArrayNum;
    if (iVar22 == (this->VisiblePoints).ArrayMax) {
      iVar22 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&(this->VisiblePoints).AllocatorInstance,
                          &(this->VisiblePoints).ArrayMax);
    }
    (this->VisiblePoints).ArrayNum = iVar22 + 1;
    pFVar24 = (this->VisiblePoints).AllocatorInstance.Data + (longlong)iVar22 * 0x40;
    *(undefined4 *)(pFVar24 + 0x14) = 0;
    *(undefined8 *)&pFVar24[0x20].field_0x0 = 0;
    *(undefined8 *)&pFVar24[0x28].field_0x0 = 0;
    *(undefined8 *)&pFVar24[0x30].field_0x0 = 0;
    *(undefined8 *)&pFVar24[0x38].field_0x0 = 0;
    lVar20 = (longlong)(int)local_418;
    *(undefined8 *)&pFVar24[0x18].field_0x0 = 0xffefffffffffffff;
    *(undefined8 *)&pFVar24->field_0x0 = 0;
    *(undefined8 *)&pFVar24[8].field_0x0 = 0;
    *(undefined4 *)&pFVar24[0x10].field_0x0 = 0xffffffff;
    pcVar5 = *(code **)local_388;
    uVar3 = *(undefined8 *)&local_388->field_0x8;
    uVar26 = 0;
    if ((int)local_418 < local_400->ArrayNum) {
      uVar26 = ~local_418 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    pFVar4 = (local_400->AllocatorInstance).Data;
    local_3b0[0] = *(undefined4 *)(pFVar4 + lVar20 * 0xc);
    (*pcVar5)(&local_1a0,uVar3,local_3b0);
    dVar14 = local_190;
    dVar13 = dStack_198;
    dVar12 = local_1a0;
    local_3a8[0] = *(undefined4 *)(pFVar4 + lVar20 * 0xc + 4);
    local_368 = local_1a0;
    dStack_360 = dStack_198;
    local_358 = local_190;
    (*pcVar5)(&local_188,uVar3,local_3a8);
    dVar6 = local_178;
    dVar31 = dStack_180;
    dVar30 = local_188;
    local_3a0[0] = *(undefined4 *)(pFVar4 + lVar20 * 0xc + 8);
    local_350 = local_188;
    dStack_348 = dStack_180;
    local_340 = local_178;
    (*pcVar5)(&local_170,uVar3,local_3a0);
    pTVar9 = local_388;
    pFVar8 = local_420;
    local_328 = local_160;
    local_338 = local_170;
    dStack_330 = dStack_168;
    dVar32 = (local_160 - dVar14) * (dVar30 - dVar12) - (local_170 - dVar12) * (dVar6 - dVar14);
    dVar6 = (dStack_168 - dVar13) * (dVar6 - dVar14) - (local_160 - dVar14) * (dVar31 - dVar13);
    dVar31 = (local_170 - dVar12) * (dVar31 - dVar13) - (dStack_168 - dVar13) * (dVar30 - dVar12);
    dVar30 = SQRT(dVar6 * dVar6 + dVar32 * dVar32 + dVar31 * dVar31);
    if (dVar30 <= 0.0) {
      dVar31 = 0.0;
      dVar32 = 0.0;
      dVar30 = 0.0;
    }
    else {
      dVar30 = dVar7 / dVar30;
      dVar31 = dVar30 * dVar31;
      dVar32 = dVar30 * dVar32;
      dVar30 = dVar30 * dVar6;
    }
    *(double *)&pFVar24[0x20].field_0x0 = dVar30;
    *(double *)&pFVar24[0x28].field_0x0 = dVar32;
    *(double *)&pFVar24[0x30].field_0x0 = dVar31;
    uVar26 = 0;
    *(double *)&pFVar24[0x38].field_0x0 = dVar30 * dVar12 + dVar32 * dVar13 + dVar31 * dVar14;
    if (this->VisibleDistanceThreshold <= 0.0) {
      if (0 < local_440.ArrayNum) {
        lVar20 = 0;
        iVar22 = local_440.ArrayNum;
        do {
          uVar25 = 0;
          if ((int)uVar26 < iVar22) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            uVar16 = (*pcVar5)();
            return (bool)uVar16;
          }
          uVar2 = *(undefined4 *)(local_440.AllocatorInstance.Data + lVar20);
          local_390[0] = uVar2;
          (**(code **)pTVar9)(&local_2d8,*(undefined8 *)&pTVar9->field_0x8,local_390);
          local_1b8 = local_368;
          dStack_1b0 = dStack_360;
          local_1a8 = local_358;
          local_1d0 = local_350;
          dStack_1c8 = dStack_348;
          local_1e8 = local_338;
          dStack_1e0 = dStack_330;
          local_1c0 = local_340;
          local_1d8 = local_328;
          local_130 = local_2c8;
          local_140 = local_2d8;
          dStack_138 = dStack_2d0;
          dVar30 = ShewchukExactPredicates::orient3d(&local_1b8,&local_1d0,&local_1e8,&local_140);
          if (dVar30 <= 0.0) {
            iVar22 = local_440.ArrayNum;
          }
          else {
            dVar30 = (dStack_2d0 * *(double *)&pFVar24[0x28].field_0x0 +
                      local_2d8 * *(double *)&pFVar24[0x20].field_0x0 +
                     local_2c8 * *(double *)&pFVar24[0x30].field_0x0) -
                     *(double *)&pFVar24[0x38].field_0x0;
            if (*(double *)&pFVar24[0x18].field_0x0 <= dVar30 &&
                dVar30 != *(double *)&pFVar24[0x18].field_0x0) {
              *(double *)&pFVar24[0x18].field_0x0 = dVar30;
              *(undefined4 *)&pFVar24[0x10].field_0x0 = uVar2;
            }
            local_428[0] = uVar2;
            if (((*(undefined4 **)&pFVar24->field_0x0 <= local_428) &&
                (local_428 < *(undefined4 **)&pFVar24->field_0x0 + *(int *)(pFVar24 + 0xc))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar5 = (code *)swi(3);
              uVar16 = (*pcVar5)();
              return (bool)uVar16;
            }
            iVar22 = *(int *)&pFVar24[8].field_0x0;
            if (iVar22 == *(int *)(pFVar24 + 0xc)) {
              iVar22 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 0xc));
            }
            *(int *)&pFVar24[8].field_0x0 = iVar22 + 1;
            *(undefined4 *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar22 * 4) = local_428[0];
            uVar25 = 0;
            if ((int)uVar26 < local_440.ArrayNum) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if (uVar25 == 0) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar5 = (code *)swi(3);
                uVar16 = (*pcVar5)();
                return (bool)uVar16;
              }
            }
            iVar22 = (local_440.ArrayNum - uVar26) + -1;
            if (1 < iVar22) {
              iVar22 = 1;
            }
            iVar18 = local_440.ArrayNum;
            if (iVar22 != 0) {
              memmove(local_440.AllocatorInstance.Data + (longlong)(int)uVar26 * 4,
                      local_440.AllocatorInstance.Data + (longlong)(local_440.ArrayNum - iVar22) * 4
                      ,(longlong)iVar22 << 2);
              iVar18 = local_440.ArrayNum;
            }
            uVar26 = uVar26 - 1;
            local_440.ArrayNum = iVar18 + -1;
            lVar20 = lVar20 + -4;
            iVar22 = iVar18 + -1;
          }
          uVar26 = uVar26 + 1;
          lVar20 = lVar20 + 4;
          this = local_420;
        } while ((int)uVar26 < iVar22);
      }
    }
    else if (0 < local_440.ArrayNum) {
      lVar20 = 0;
      iVar22 = local_440.ArrayNum;
      do {
        uVar25 = 0;
        if ((int)uVar26 < iVar22) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          uVar16 = (*pcVar5)();
          return (bool)uVar16;
        }
        uVar2 = *(undefined4 *)(local_440.AllocatorInstance.Data + lVar20);
        local_398[0] = uVar2;
        (**(code **)local_388)(&local_288,*(undefined8 *)&local_388->field_0x8,local_398);
        dVar30 = (dStack_280 * *(double *)&pFVar24[0x28].field_0x0 +
                  local_288 * *(double *)&pFVar24[0x20].field_0x0 +
                 local_278 * *(double *)&pFVar24[0x30].field_0x0) -
                 *(double *)&pFVar24[0x38].field_0x0;
        pdVar1 = &pFVar8->VisibleDistanceThreshold;
        if (dVar30 < *pdVar1 || dVar30 == *pdVar1) {
LAB_1433df369:
          iVar22 = local_440.ArrayNum;
        }
        else {
          local_200 = local_368;
          dStack_1f8 = dStack_360;
          local_218 = local_350;
          dStack_210 = dStack_348;
          local_1f0 = local_358;
          local_208 = local_340;
          local_230 = local_338;
          dStack_228 = dStack_330;
          local_158 = local_288;
          dStack_150 = dStack_280;
          local_220 = local_328;
          local_148 = local_278;
          dVar32 = ShewchukExactPredicates::orient3d(&local_200,&local_218,&local_230,&local_158);
          if (dVar32 <= 0.0) goto LAB_1433df369;
          if (*(double *)&pFVar24[0x18].field_0x0 <= dVar30 &&
              dVar30 != *(double *)&pFVar24[0x18].field_0x0) {
            *(double *)&pFVar24[0x18].field_0x0 = dVar30;
            *(undefined4 *)&pFVar24[0x10].field_0x0 = uVar2;
          }
          local_430[0] = uVar2;
          if (((*(undefined4 **)&pFVar24->field_0x0 <= local_430) &&
              (local_430 < *(undefined4 **)&pFVar24->field_0x0 + *(int *)(pFVar24 + 0xc))) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar5 = (code *)swi(3);
            uVar16 = (*pcVar5)();
            return (bool)uVar16;
          }
          iVar22 = *(int *)&pFVar24[8].field_0x0;
          if (iVar22 == *(int *)(pFVar24 + 0xc)) {
            iVar22 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 0xc));
          }
          *(int *)&pFVar24[8].field_0x0 = iVar22 + 1;
          *(undefined4 *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar22 * 4) = local_430[0];
          uVar25 = 0;
          if ((int)uVar26 < local_440.ArrayNum) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if (uVar25 == 0) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar15) {
              pcVar5 = (code *)swi(3);
              uVar16 = (*pcVar5)();
              return (bool)uVar16;
            }
          }
          iVar22 = (local_440.ArrayNum - uVar26) + -1;
          if (1 < iVar22) {
            iVar22 = 1;
          }
          iVar18 = local_440.ArrayNum;
          if (iVar22 != 0) {
            memmove(local_440.AllocatorInstance.Data + (longlong)(int)uVar26 * 4,
                    local_440.AllocatorInstance.Data + (longlong)(local_440.ArrayNum - iVar22) * 4,
                    (longlong)iVar22 << 2);
            iVar18 = local_440.ArrayNum;
          }
          uVar26 = uVar26 - 1;
          local_440.ArrayNum = iVar18 + -1;
          lVar20 = lVar20 + -4;
          iVar22 = iVar18 + -1;
        }
        uVar26 = uVar26 + 1;
        lVar20 = lVar20 + 4;
        this = pFVar8;
      } while ((int)uVar26 < iVar22);
    }
    if (0 < *(int *)&pFVar24[8].field_0x0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->TrisWithPoints,&local_2bc,(bool *)&local_418);
    }
    local_410 = local_410 + 1;
    local_378 = local_378 + 1;
    local_414 = local_414 + 1;
    local_380 = local_380 + 0xc;
    param_1 = local_400;
    if (local_40c <= (int)local_410) goto LAB_1433df6b0;
    param_5 = local_408;
  } while( true );
}

// UpdateNeighbors @ 1433df750

void __thiscall
UE::Geometry::FHullConnectivity<float>::UpdateNeighbors
          (FHullConnectivity<float> *this,int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_28;
  uint uStack_24;
  
  uVar8 = 0;
  uVar10 = 0;
  if (param_1 < (this->TriNeighbors).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->TriNeighbors).AllocatorInstance.Data;
  lVar1 = *(longlong *)(pFVar3 + (longlong)param_1 * 0xc);
  uVar10 = *(uint *)(pFVar3 + (longlong)param_1 * 0xc + 8);
  local_28 = (uint)lVar1;
  if ((-1 < (int)local_28) && (iVar2 = (this->TriNeighbors).ArrayNum, (int)local_28 < iVar2)) {
    uVar6 = 0;
    if ((int)local_28 < iVar2) {
      uVar6 = ~local_28 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->TriNeighbors).AllocatorInstance.Data;
    uVar7 = uVar8;
    uVar9 = uVar8;
    do {
      if (*(int *)(pFVar3 + uVar7 * 4 + (longlong)(int)local_28 * 0xc) == param_1) {
        *(int *)(pFVar3 + (longlong)(int)uVar9 * 4 + (longlong)(int)local_28 * 0xc) = param_2;
        break;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < 3);
  }
  uStack_24 = (uint)((ulonglong)lVar1 >> 0x20);
  if ((-1 < lVar1) && (iVar2 = (this->TriNeighbors).ArrayNum, (int)uStack_24 < iVar2)) {
    uVar6 = 0;
    if ((int)uStack_24 < iVar2) {
      uVar6 = ~uStack_24 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->TriNeighbors).AllocatorInstance.Data;
    uVar7 = uVar8;
    uVar9 = uVar8;
    do {
      if (*(int *)(pFVar3 + uVar7 * 4 + (longlong)(int)uStack_24 * 0xc) == param_1) {
        *(int *)(pFVar3 + (longlong)(int)uVar9 * 4 + (longlong)(int)uStack_24 * 0xc) = param_2;
        break;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < 3);
  }
  if ((-1 < (int)uVar10) && (iVar2 = (this->TriNeighbors).ArrayNum, (int)uVar10 < iVar2)) {
    uVar6 = 0;
    if ((int)uVar10 < iVar2) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->TriNeighbors).AllocatorInstance.Data;
    uVar7 = uVar8;
    do {
      if (*(int *)(pFVar3 + uVar8 * 4 + (longlong)(int)uVar10 * 0xc) == param_1) {
        *(int *)(pFVar3 + (longlong)(int)uVar7 * 4 + (longlong)(int)uVar10 * 0xc) = param_2;
        return;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 3);
  }
  return;
}

// UpdateNeighbors @ 1433df9a0

void __thiscall
UE::Geometry::FHullConnectivity<double>::UpdateNeighbors
          (FHullConnectivity<double> *this,int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_28;
  uint uStack_24;
  
  uVar8 = 0;
  uVar10 = 0;
  if (param_1 < (this->TriNeighbors).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->TriNeighbors).AllocatorInstance.Data;
  lVar1 = *(longlong *)(pFVar3 + (longlong)param_1 * 0xc);
  uVar10 = *(uint *)(pFVar3 + (longlong)param_1 * 0xc + 8);
  local_28 = (uint)lVar1;
  if ((-1 < (int)local_28) && (iVar2 = (this->TriNeighbors).ArrayNum, (int)local_28 < iVar2)) {
    uVar6 = 0;
    if ((int)local_28 < iVar2) {
      uVar6 = ~local_28 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->TriNeighbors).AllocatorInstance.Data;
    uVar7 = uVar8;
    uVar9 = uVar8;
    do {
      if (*(int *)(pFVar3 + uVar7 * 4 + (longlong)(int)local_28 * 0xc) == param_1) {
        *(int *)(pFVar3 + (longlong)(int)uVar9 * 4 + (longlong)(int)local_28 * 0xc) = param_2;
        break;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < 3);
  }
  uStack_24 = (uint)((ulonglong)lVar1 >> 0x20);
  if ((-1 < lVar1) && (iVar2 = (this->TriNeighbors).ArrayNum, (int)uStack_24 < iVar2)) {
    uVar6 = 0;
    if ((int)uStack_24 < iVar2) {
      uVar6 = ~uStack_24 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->TriNeighbors).AllocatorInstance.Data;
    uVar7 = uVar8;
    uVar9 = uVar8;
    do {
      if (*(int *)(pFVar3 + uVar7 * 4 + (longlong)(int)uStack_24 * 0xc) == param_1) {
        *(int *)(pFVar3 + (longlong)(int)uVar9 * 4 + (longlong)(int)uStack_24 * 0xc) = param_2;
        break;
      }
      uVar9 = (ulonglong)((int)uVar9 + 1);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < 3);
  }
  if ((-1 < (int)uVar10) && (iVar2 = (this->TriNeighbors).ArrayNum, (int)uVar10 < iVar2)) {
    uVar6 = 0;
    if ((int)uVar10 < iVar2) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->TriNeighbors).AllocatorInstance.Data;
    uVar7 = uVar8;
    do {
      if (*(int *)(pFVar3 + uVar8 * 4 + (longlong)(int)uVar10 * 0xc) == param_1) {
        *(int *)(pFVar3 + (longlong)(int)uVar7 * 4 + (longlong)(int)uVar10 * 0xc) = param_2;
        return;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 3);
  }
  return;
}

