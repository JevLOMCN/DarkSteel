// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// AccumulateStat @ 1419d7f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FStatsUtils::AccumulateStat(FStatMessage *param_1,FStatMessage *param_2,Type param_3,bool param_4)

{
  int *piVar1;
  double dVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  
  if (((!param_4) &&
      (((ulonglong)param_1->NameAndInfo & 0x1ffffffffff) !=
       ((ulonglong)param_2->NameAndInfo & 0x1ffffffffff))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,1999,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &(param_2->NameAndInfo).Number;
  if (param_3 == Invalid) {
    param_3 = *piVar1 >> 0xc & Mask;
  }
  if (((((param_1->NameAndInfo).Number ^ *piVar1) & 0xe00U) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x7d5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar9 = &(param_1->NameAndInfo).Number;
  if (((((byte)((uint)*piVar1 >> 0x14) ^ (byte)((uint)(param_1->NameAndInfo).Number >> 0x14)) & 1)
       != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x7d6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *piVar1 >> 9 & 7;
  if (uVar8 == 2) {
    if (param_3 != Set) {
      if (param_3 == Clear) {
LAB_1419d8196:
        *(undefined8 *)(param_1->StatData).Pad = 0;
        return;
      }
      if (param_3 == Add) {
        *(longlong *)(param_1->StatData).Pad =
             *(longlong *)(param_1->StatData).Pad + *(longlong *)(param_2->StatData).Pad;
        return;
      }
      if (param_3 == Subtract) {
        lVar4 = *(longlong *)(param_1->StatData).Pad;
        uVar7 = lVar4 - *(longlong *)(param_2->StatData).Pad;
        if ((*piVar9 & 0x100000U) != 0) {
          *(ulonglong *)(param_1->StatData).Pad = (lVar4 >> 0x20) << 0x20 | uVar7 & 0xffffffff;
          return;
        }
        *(ulonglong *)(param_1->StatData).Pad = uVar7;
        return;
      }
      if (param_3 == Mask) {
        uVar7 = *(ulonglong *)(param_2->StatData).Pad;
        if ((*piVar9 & 0x100000U) != 0) {
          uVar11 = *(ulonglong *)(param_1->StatData).Pad;
          uVar3 = uVar7;
          if ((uint)(uVar7 >> 0x20) < (uint)(uVar11 >> 0x20)) {
            uVar3 = uVar11;
          }
          uVar11 = uVar7 & 0xffffffff;
          if ((uint)uVar7 < *(uint *)(param_1->StatData).Pad) {
            uVar11 = (ulonglong)*(uint *)(param_1->StatData).Pad;
          }
          *(ulonglong *)(param_1->StatData).Pad = ((longlong)uVar3 >> 0x20) << 0x20 | uVar11;
          return;
        }
        if ((longlong)uVar7 < *(longlong *)(param_1->StatData).Pad) {
          uVar7 = *(ulonglong *)(param_1->StatData).Pad;
        }
        *(ulonglong *)(param_1->StatData).Pad = uVar7;
        return;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x7f6,L"");
      if (!bVar6) {
        return;
      }
      goto code_r0x0001419d8119;
    }
LAB_1419d819f:
    *(undefined8 *)(param_1->StatData).Pad = *(undefined8 *)(param_2->StatData).Pad;
  }
  else {
    if (uVar8 == 3) {
      if (param_3 == Set) goto LAB_1419d819f;
      if (param_3 == Clear) goto LAB_1419d8196;
      if (param_3 == Add) {
        *(double *)(param_1->StatData).Pad =
             *(double *)(param_1->StatData).Pad + *(double *)(param_2->StatData).Pad;
        return;
      }
      if (param_3 == Subtract) {
        *(double *)(param_1->StatData).Pad =
             *(double *)(param_1->StatData).Pad - *(double *)(param_2->StatData).Pad;
        return;
      }
      if (param_3 == Mask) {
        dVar12 = *(double *)(param_1->StatData).Pad;
        dVar2 = *(double *)(param_2->StatData).Pad;
        if (dVar12 <= dVar2) {
          dVar12 = dVar2;
        }
        *(double *)(param_1->StatData).Pad = dVar12;
        return;
      }
      iVar10 = 0x80d;
    }
    else {
      if (uVar8 == 5) {
        return;
      }
      iVar10 = 0x816;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                       ,iVar10,L"");
    if (bVar6) {
code_r0x0001419d8119:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// AddMergeStatArray @ 1419da340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FStatsUtils::AddMergeStatArray
          (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<FName,int> *pTVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  uint local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [8];
  int *local_c0;
  uint *local_b8;
  undefined4 *local_b0;
  uint *local_a8;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  iVar5 = param_1->ArrayNum;
  uVar14 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.HashSize = 0;
  local_f4 = 0;
  uVar15 = uVar14;
  if (0 < iVar5) {
    do {
      uVar10 = (uint)uVar15;
      uVar8 = 0;
      if ((int)uVar10 < iVar5) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_120 = (FScriptContainerElement *)(longlong)iVar5;
        local_128 = (undefined8 *)(longlong)(int)uVar10;
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
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_f0 = *(int *)(pFVar1 + (longlong)(int)uVar10 * 0x10 + 8);
      local_ec = *(uint *)(pFVar1 + (longlong)(int)uVar10 * 0x10 + 0xc) & 0x1ff;
      local_c0 = &local_f0;
      local_b8 = &local_f4;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_&&,int_const_&>_>
                (&local_98,(TPairInitializer<FName_&&,int_const_&> *)local_c8,(bool *)&local_c0);
      iVar5 = param_1->ArrayNum;
      local_f4 = local_f4 + 1;
      uVar15 = (ulonglong)local_f4;
    } while ((int)local_f4 < iVar5);
  }
  iVar5 = param_2->ArrayNum;
  if (0 < iVar5) {
    local_e0 = (undefined8 *)0x0;
    uVar15 = uVar14;
    do {
      puVar11 = local_e0;
      puVar7 = (uint *)0x0;
      uVar13 = (uint)uVar14;
      uVar10 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < iVar5) {
        uVar8 = uVar10;
      }
      if (uVar8 == 0) {
        local_120 = (FScriptContainerElement *)(longlong)iVar5;
        local_128 = (undefined8 *)(longlong)(int)uVar13;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               ::Find(&local_98,
                      (FName)(CONCAT44(*(undefined4 *)(pFVar1 + uVar15 + 0xc),
                                       *(undefined4 *)(pFVar1 + uVar15 + 8)) & 0x1ffffffffff));
      puVar9 = (uint *)&pTVar6->field_0x8;
      if (pTVar6 == (TTuple<FName,int> *)0x0) {
        puVar9 = puVar7;
      }
      if (puVar9 == (uint *)0x0) {
        local_f8 = param_1->ArrayNum;
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (local_128 = puVar11, local_120 = (FScriptContainerElement *)(longlong)param_2->ArrayNum,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        local_e8 = *(undefined4 *)(pFVar1 + uVar15 + 8);
        local_e4 = *(uint *)(pFVar1 + uVar15 + 0xc) & 0x1ff;
        local_b0 = &local_e8;
        local_a8 = &local_f8;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_&&,int_const_&>_>
                  (&local_98,(TPairInitializer<FName_&&,int_const_&> *)(local_c8 + 4),
                   (bool *)&local_b0);
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (local_128 = puVar11, local_120 = (FScriptContainerElement *)(longlong)param_2->ArrayNum,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        uStack_d0 = *(undefined8 *)((param_2->AllocatorInstance).Data + uVar15 + 8);
        local_d8 = 0;
        if ((pFVar1 <= (FScriptContainerElement *)&local_d8) &&
           ((FScriptContainerElement *)&local_d8 < pFVar1 + (longlong)param_1->ArrayMax * 0x10)) {
          local_110 = (longlong)param_1->ArrayNum;
          local_108 = 0x10;
          local_128 = &local_d8;
          local_120 = pFVar1;
          local_118 = (longlong)param_1->ArrayMax;
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
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar5 + 1;
        pFVar1 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar1 = local_d8;
        *(undefined8 *)(pFVar1 + 8) = uStack_d0;
      }
      else {
        local_f8 = *puVar9;
      }
      if ((int)uVar13 < param_2->ArrayNum) {
        puVar7 = (uint *)(ulonglong)uVar10;
      }
      if ((int)puVar7 == 0) {
        local_128 = (undefined8 *)(longlong)(int)uVar13;
        local_120 = (FScriptContainerElement *)(longlong)param_2->ArrayNum;
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
      puVar11 = (undefined8 *)(longlong)(int)local_f8;
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar8 = 0;
      if ((int)local_f8 < param_1->ArrayNum) {
        uVar8 = ~local_f8 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (local_128 = puVar11, local_120 = (FScriptContainerElement *)(longlong)param_1->ArrayNum,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      lVar12 = (longlong)puVar11 * 0x10;
      if (((CONCAT44(*(undefined4 *)(pFVar2 + lVar12 + 0xc),*(undefined4 *)(pFVar2 + lVar12 + 8)) &
           0x1ffffffffff) !=
           (CONCAT44(*(undefined4 *)(pFVar1 + uVar15 + 0xc),*(undefined4 *)(pFVar1 + uVar15 + 8)) &
           0x1ffffffffff)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,1999,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((((*(uint *)(pFVar2 + lVar12 + 0xc) ^ *(uint *)(pFVar1 + uVar15 + 0xc)) & 0xe00) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,0x7d5,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((((byte)(*(uint *)(pFVar2 + lVar12 + 0xc) >> 0x14) ^
            (byte)(*(uint *)(pFVar1 + uVar15 + 0xc) >> 0x14)) & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,0x7d6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = *(int *)(pFVar1 + uVar15 + 0xc) >> 9 & 7;
      if (uVar8 == 2) {
        *(longlong *)(pFVar2 + lVar12) =
             *(longlong *)(pFVar2 + lVar12) + *(longlong *)(pFVar1 + uVar15);
      }
      else if (uVar8 == 3) {
        *(double *)(pFVar2 + lVar12) = *(double *)(pFVar1 + uVar15) + *(double *)(pFVar2 + lVar12);
      }
      else if ((uVar8 != 5) &&
              (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                  ,0x816,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      iVar5 = param_2->ArrayNum;
      local_e0 = (undefined8 *)((longlong)local_e0 + 1);
      uVar15 = uVar15 + 0x10;
    } while ((int)(uVar13 + 1) < iVar5);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// AddNonStackStats @ 1419dc580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FStatsUtils::AddNonStackStats
          (FName param_1,FStatMessage *param_2,Type param_3,
          TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
          *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<FName,FStatMessage> *pTVar4;
  double dVar5;
  double *pdVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  FName local_res8;
  int local_res10;
  FName *local_28;
  FStatMessage *local_20;
  
  uVar3 = (param_2->NameAndInfo).Number & 0xe00;
  if (uVar3 == 0x200) {
    return;
  }
  if (uVar3 == 0x800) {
    return;
  }
  if ((3 < param_3 - Set) && (param_3 != Mask)) {
    return;
  }
  local_res8 = param_1;
  pTVar4 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                   *)param_4,param_1);
  pdVar6 = (double *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,FStatMessage> *)0x0) {
    pdVar6 = (double *)0x0;
  }
  if (pdVar6 == (double *)0x0) {
    local_28 = &local_res8;
    local_20 = param_2;
    TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FStatMessage_const_&>_>
              ((TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
                *)param_4,(TPairInitializer<FName_const_&,FStatMessage_const_&> *)&local_res10,
               (bool *)&local_28);
    pdVar6 = (double *)(*(longlong *)param_4 + (longlong)local_res10 * 0x20 + 8);
    *(uint *)((longlong)(pdVar6 + 1) + 4) = *(uint *)((longlong)(pdVar6 + 1) + 4) & 0xffff8fff;
    *(uint *)((longlong)(pdVar6 + 1) + 4) = *(uint *)((longlong)(pdVar6 + 1) + 4) | 0x8000;
    *pdVar6 = 0.0;
  }
  if ((((ulonglong)pdVar6[1] & 0x1ffffffffff) != ((ulonglong)param_2->NameAndInfo & 0x1ffffffffff))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                            ,1999,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = (param_2->NameAndInfo).Number;
  uVar7 = (int)uVar3 >> 0xc & 0xf;
  if ((((uVar3 ^ *(uint *)((longlong)(pdVar6 + 1) + 4)) & 0xe00) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x7d5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((((byte)(*(uint *)((longlong)(pdVar6 + 1) + 4) >> 0x14) ^
        (byte)((uint)(param_2->NameAndInfo).Number >> 0x14)) & 1) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x7d6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = (param_2->NameAndInfo).Number >> 9 & 7;
  if (uVar3 == 2) {
    if (uVar7 == 8) {
LAB_1419dc906:
      *pdVar6 = *(double *)(param_2->StatData).Pad;
      return;
    }
    if (uVar7 == 9) {
LAB_1419dc8f2:
      *pdVar6 = 0.0;
      return;
    }
    if (uVar7 == 10) {
      *pdVar6 = (double)((longlong)*pdVar6 + *(longlong *)(param_2->StatData).Pad);
      return;
    }
    if (uVar7 == 0xb) {
      dVar5 = (double)((longlong)*pdVar6 - *(longlong *)(param_2->StatData).Pad);
      if (((ulonglong)pdVar6[1] & 0x10000000000000) != 0) {
        *pdVar6 = (double)(((longlong)*pdVar6 >> 0x20) << 0x20 | (ulonglong)dVar5 & 0xffffffff);
        return;
      }
      *pdVar6 = dVar5;
      return;
    }
    if (uVar7 == 0xf) {
      dVar5 = *(double *)(param_2->StatData).Pad;
      if (((ulonglong)pdVar6[1] & 0x10000000000000) != 0) {
        dVar10 = dVar5;
        if ((uint)((ulonglong)dVar5 >> 0x20) < (uint)((ulonglong)*pdVar6 >> 0x20)) {
          dVar10 = *pdVar6;
        }
        uVar9 = (ulonglong)dVar5 & 0xffffffff;
        if (SUB84(dVar5,0) < *(uint *)pdVar6) {
          uVar9 = (ulonglong)*(uint *)pdVar6;
        }
        *pdVar6 = (double)(((longlong)dVar10 >> 0x20) << 0x20 | uVar9);
        return;
      }
      if ((longlong)dVar5 < (longlong)*pdVar6) {
        dVar5 = *pdVar6;
      }
      *pdVar6 = dVar5;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                       ,0x7f6,L"");
    if (!bVar2) {
      return;
    }
  }
  else {
    if (uVar3 == 3) {
      if (uVar7 == 8) goto LAB_1419dc906;
      if (uVar7 == 9) goto LAB_1419dc8f2;
      if (uVar7 == 10) {
        *pdVar6 = *pdVar6 + *(double *)(param_2->StatData).Pad;
        return;
      }
      if (uVar7 == 0xb) {
        *pdVar6 = *pdVar6 - *(double *)(param_2->StatData).Pad;
        return;
      }
      if (uVar7 == 0xf) {
        dVar5 = *(double *)(param_2->StatData).Pad;
        dVar10 = *pdVar6;
        if (*pdVar6 <= dVar5) {
          dVar10 = dVar5;
        }
        *pdVar6 = dVar10;
        return;
      }
      iVar8 = 0x80d;
    }
    else {
      if (uVar3 == 5) {
        return;
      }
      iVar8 = 0x816;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                       ,iVar8,L"");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DebugPrint @ 1419eaa50

FString * __cdecl FStatsUtils::DebugPrint(FString *__return_storage_ptr__,FStatMessage *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FName local_res8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_c8,L"Invalid");
  iVar5 = (param_1->NameAndInfo).Number;
  uVar7 = iVar5 >> 9 & 7;
  if (uVar7 == 2) {
    uVar7 = iVar5 >> 0x10;
    if ((uVar7 & 0x10) == 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 8) == 0) {
          ::FString::PrintfImpl(&local_78,L"%llu");
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          local_c8.Data.ArrayNum = local_78.Data.ArrayNum;
          local_c8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
          local_c8.Data.ArrayMax = local_78.Data.ArrayMax;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else {
          ::FString::PrintfImpl(&local_88,L"%.3fMB");
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          local_c8.Data.ArrayNum = local_88.Data.ArrayNum;
          local_c8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
          local_c8.Data.ArrayMax = local_88.Data.ArrayMax;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
      }
      else {
        ::FString::PrintfImpl(&local_98,L"%.3fms");
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        local_c8.Data.ArrayNum = local_98.Data.ArrayNum;
        local_c8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        local_c8.Data.ArrayMax = local_98.Data.ArrayMax;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
    else {
      ::FString::PrintfImpl(&local_a8,L"%.3fms (%4d)");
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.ArrayNum = local_a8.Data.ArrayNum;
      local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      local_c8.Data.ArrayMax = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else if (uVar7 == 3) {
    ::FString::PrintfImpl(&local_b8,L"%.1f");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    local_c8.Data.ArrayNum = local_b8.Data.ArrayNum;
    local_c8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
    local_c8.Data.ArrayMax = local_b8.Data.ArrayMax;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else if (uVar7 == 4) {
    uVar1 = *(undefined8 *)(param_1->StatData).Pad;
    local_res8.ComparisonIndex.Value = (uint)uVar1;
    local_res8.Number = (uint)((ulonglong)uVar1 >> 0x20);
    pFVar4 = ::FName::ToString(&local_res8,&local_38);
    if (&local_c8 != pFVar4) {
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      local_c8.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = 1 - local_c8.Data.ArrayNum;
  if (local_c8.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  iVar6 = iVar5 + 0xe;
  if (iVar5 + 0xe < 0) {
    iVar6 = 0;
  }
  if (((iVar6 < 0) || (0xff < iVar6)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x272,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = ::FString::FString(&local_28,
                              L"                                                                                                                                                                                                                                                               "
                              + (0xff - (longlong)iVar6));
  ::FString::ConcatFF(&local_68,pFVar4,&local_c8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_c8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  local_c8.Data.ArrayNum = local_68.Data.ArrayNum;
  local_c8.Data.ArrayMax = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  GetNameAndGroup(param_1,&local_48,&local_58);
  ::FString::PrintfImpl(__return_storage_ptr__,L"  %s  -  %s%s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DivideStat @ 1419ee830

void __cdecl FStatsUtils::DivideStat(FStatMessage *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  
  uVar6 = (ulonglong)param_2;
  uVar1 = (param_1->NameAndInfo).Number;
  uVar5 = (int)uVar1 >> 9 & 7;
  if (uVar5 == 2) {
    lVar2 = *(longlong *)(param_1->StatData).Pad;
    if (((int)uVar1 >> 0x10 & 0x10U) != 0) {
      *(ulonglong *)(param_1->StatData).Pad =
           (ulonglong)((int)((ulonglong)lVar2 >> 0x20) + (param_2 >> 1)) / (ulonglong)param_2 <<
           0x20 | ((param_2 >> 1) + (int)lVar2) / uVar6;
      return;
    }
    if (((int)uVar1 >> 0x10 & 4U) != 0) {
      *(longlong *)(param_1->StatData).Pad = (longlong)((uVar6 - 1) + lVar2) / (longlong)uVar6;
      return;
    }
    (param_1->NameAndInfo).Number = uVar1 & 0xfffff7ff | 0x600;
    dVar7 = (double)lVar2;
  }
  else {
    if (uVar5 != 3) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x7c0,L"");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar7 = *(double *)(param_1->StatData).Pad;
  }
  *(double *)(param_1->StatData).Pad = dVar7 / (double)uVar6;
  return;
}

// DivideStatArray @ 1419ee910

void __cdecl
FStatsUtils::DivideStatArray(TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1->ArrayNum;
  uVar4 = 0;
  if (0 < iVar5) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      DivideStat((FStatMessage *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10),
                 param_2);
      iVar5 = param_1->ArrayNum;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
  return;
}

// FromEscapedString @ 1419fba10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl FStatsUtils::FromEscapedString(FString *__return_storage_ptr__,wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::FString(&local_38,param_1);
  while( true ) {
    iVar1 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    if (iVar1 == 0) goto LAB_1419fbbc9;
    iVar1 = ::FString::Find(&local_38,L"$",1,CaseSensitive,FromStart,-1);
    if (iVar1 == -1) break;
    iVar5 = 0;
    iVar2 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar2 = iVar5;
    }
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    iVar6 = iVar5;
    if (0 < iVar2) {
      iVar6 = iVar2;
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar4.Data,iVar6);
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = iVar5;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::RemoveAt(&local_38,0,iVar1 + 1,No);
    iVar1 = ::FString::Find(&local_38,L"$",1,CaseSensitive,FromStart,-1);
    if (iVar1 == -1) break;
    iVar2 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar4.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_18,(wchar_t *)FVar4.Data,iVar5);
    ::FString::RemoveAt(&local_38,0,iVar1 + 1,No);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    lVar3 = _wtoi64((wchar_t *)FVar4.Data);
    ::FString::AppendChar(__return_storage_ptr__,(wchar_t)lVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar1);
LAB_1419fbbc9:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNameAndGroup @ 141a010a0

void __cdecl FStatsUtils::GetNameAndGroup(FStatMessage *param_1,FString *param_2,FString *param_3)

{
  FStatNameAndInfo *this;
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  wchar_t *_Str_00;
  int iVar5;
  bool bVar6;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  local_res8.ComparisonIndex.Value = (param_1->NameAndInfo).Index.Value;
  this = &param_1->NameAndInfo;
  local_res8.Number = (param_1->NameAndInfo).Number & 0x1ff;
  FStatNameAndInfo::GetShortNameFrom((FName)&local_res20);
  ::FName::ToString(&local_res20,&local_38);
  FStatNameAndInfo::GetGroupName(this);
  FStatNameAndInfo::GetGroupCategory(this);
  pFVar2 = FStatNameAndInfo::GetDescription(this,&local_28);
  if (param_2 != pFVar2) {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_2->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::TrimStartInline(param_2);
  iVar5 = (param_2->Data).ArrayNum;
  if (iVar5 == local_38.Data.ArrayNum) {
    if (iVar5 < 2) goto LAB_141a011c8;
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                       (wchar_t *)local_38.Data.AllocatorInstance.Data);
    bVar6 = iVar5 == 0;
  }
  else {
    bVar6 = iVar5 + local_38.Data.ArrayNum == 1;
  }
  if (!bVar6) {
    iVar5 = (param_2->Data).ArrayNum;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      ::FString::AppendChars(param_2,L" - ",3);
    }
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(param_2,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
  }
LAB_141a011c8:
  _Str = L"";
  if (CONCAT44(local_res8.Number,local_res8.ComparisonIndex.Value) != 0) {
    ::FString::operator=(param_3,L" - ");
    pFVar2 = ::FName::ToString(&local_res8,&local_28);
    if ((pFVar2->Data).ArrayNum == 0) {
      _Str_00 = L"";
    }
    else {
      _Str_00 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    sVar3 = wcslen(_Str_00);
    ::FString::AppendChars(param_3,_Str_00,(int)sVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_res10 != (FName)0x0) {
    ::FString::AppendChars(param_3,L" - ",3);
    pFVar2 = ::FName::ToString(&local_res10,&local_28);
    if ((pFVar2->Data).ArrayNum != 0) {
      _Str = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    sVar3 = wcslen(_Str);
    ::FString::AppendChars(param_3,_Str,(int)sVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// MaxMergeStatArray @ 141a0aa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FStatsUtils::MaxMergeStatArray
          (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TTuple<FName,int> *pTVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  uint local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [8];
  int *local_c0;
  uint *local_b8;
  undefined4 *local_b0;
  uint *local_a8;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  uVar15 = 0;
  iVar8 = param_1->ArrayNum;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_f4 = 0;
  uVar18 = uVar15;
  if (0 < iVar8) {
    do {
      uVar13 = (uint)uVar18;
      uVar11 = 0;
      if ((int)uVar13 < iVar8) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if (uVar11 == 0) {
        local_120 = (FScriptContainerElement *)(longlong)iVar8;
        local_128 = (undefined8 *)(longlong)(int)uVar13;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_f0 = *(int *)(pFVar3 + (longlong)(int)uVar13 * 0x10 + 8);
      local_ec = *(uint *)(pFVar3 + (longlong)(int)uVar13 * 0x10 + 0xc) & 0x1ff;
      local_c0 = &local_f0;
      local_b8 = &local_f4;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_&&,int_const_&>_>
                (&local_98,(TPairInitializer<FName_&&,int_const_&> *)local_c8,(bool *)&local_c0);
      iVar8 = param_1->ArrayNum;
      local_f4 = local_f4 + 1;
      uVar18 = (ulonglong)local_f4;
    } while ((int)local_f4 < iVar8);
  }
  iVar8 = param_2->ArrayNum;
  if (0 < iVar8) {
    local_e0 = (undefined8 *)0x0;
    uVar18 = uVar15;
    do {
      puVar14 = local_e0;
      puVar10 = (uint *)0x0;
      uVar17 = (uint)uVar15;
      uVar13 = ~uVar17 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar17 < iVar8) {
        uVar11 = uVar13;
      }
      if (uVar11 == 0) {
        local_120 = (FScriptContainerElement *)(longlong)iVar8;
        local_128 = (undefined8 *)(longlong)(int)uVar17;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pTVar9 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               ::Find(&local_98,
                      (FName)(CONCAT44(*(undefined4 *)(pFVar3 + uVar18 + 0xc),
                                       *(undefined4 *)(pFVar3 + uVar18 + 8)) & 0x1ffffffffff));
      puVar12 = (uint *)&pTVar9->field_0x8;
      if (pTVar9 == (TTuple<FName,int> *)0x0) {
        puVar12 = puVar10;
      }
      if (puVar12 == (uint *)0x0) {
        local_f8 = param_1->ArrayNum;
        uVar11 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar11 = uVar13;
        }
        if ((uVar11 == 0) &&
           (local_128 = puVar14, local_120 = (FScriptContainerElement *)(longlong)param_2->ArrayNum,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        local_e8 = *(undefined4 *)(pFVar3 + uVar18 + 8);
        local_e4 = *(uint *)(pFVar3 + uVar18 + 0xc) & 0x1ff;
        local_b0 = &local_e8;
        local_a8 = &local_f8;
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_&&,int_const_&>_>
                  (&local_98,(TPairInitializer<FName_&&,int_const_&> *)(local_c8 + 4),
                   (bool *)&local_b0);
        uVar11 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar11 = uVar13;
        }
        if ((uVar11 == 0) &&
           (local_128 = puVar14, local_120 = (FScriptContainerElement *)(longlong)param_2->ArrayNum,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        uStack_d0 = *(undefined8 *)((param_2->AllocatorInstance).Data + uVar18 + 8);
        local_d8 = 0;
        if ((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
           ((FScriptContainerElement *)&local_d8 < pFVar3 + (longlong)param_1->ArrayMax * 0x10)) {
          local_110 = (longlong)param_1->ArrayNum;
          local_108 = 0x10;
          local_128 = &local_d8;
          local_120 = pFVar3;
          local_118 = (longlong)param_1->ArrayMax;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        pFVar3 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar3 = local_d8;
        *(undefined8 *)(pFVar3 + 8) = uStack_d0;
      }
      else {
        local_f8 = *puVar12;
      }
      if ((int)uVar17 < param_2->ArrayNum) {
        puVar10 = (uint *)(ulonglong)uVar13;
      }
      if ((int)puVar10 == 0) {
        local_128 = (undefined8 *)(longlong)(int)uVar17;
        local_120 = (FScriptContainerElement *)(longlong)param_2->ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar14 = (undefined8 *)(longlong)(int)local_f8;
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar11 = 0;
      if ((int)local_f8 < param_1->ArrayNum) {
        uVar11 = ~local_f8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_128 = puVar14, local_120 = (FScriptContainerElement *)(longlong)param_1->ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((CONCAT44(*(undefined4 *)(pFVar4 + (longlong)puVar14 * 0x10 + 0xc),
                     *(undefined4 *)(pFVar4 + (longlong)puVar14 * 0x10 + 8)) & 0x1ffffffffff) !=
           (CONCAT44(*(undefined4 *)(pFVar3 + uVar18 + 0xc),*(undefined4 *)(pFVar3 + uVar18 + 8)) &
           0x1ffffffffff)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,1999,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((*(uint *)(pFVar4 + (longlong)puVar14 * 0x10 + 0xc) ^ *(uint *)(pFVar3 + uVar18 + 0xc))
           & 0xe00) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,0x7d5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((((byte)(*(uint *)(pFVar4 + (longlong)puVar14 * 0x10 + 0xc) >> 0x14) ^
            (byte)(*(uint *)(pFVar3 + uVar18 + 0xc) >> 0x14)) & 1) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                             ,0x7d6,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = *(int *)(pFVar3 + uVar18 + 0xc) >> 9 & 7;
      if (uVar11 == 2) {
        uVar15 = *(ulonglong *)(pFVar3 + uVar18);
        if ((*(uint *)(pFVar4 + (longlong)puVar14 * 0x10 + 0xc) & 0x100000) == 0) {
          if ((longlong)uVar15 < *(longlong *)(pFVar4 + (longlong)puVar14 * 0x10)) {
            uVar15 = *(ulonglong *)(pFVar4 + (longlong)puVar14 * 0x10);
          }
          *(ulonglong *)(pFVar4 + (longlong)puVar14 * 0x10) = uVar15;
        }
        else {
          uVar5 = uVar15;
          if ((uint)(uVar15 >> 0x20) <
              (uint)(*(ulonglong *)(pFVar4 + (longlong)puVar14 * 0x10) >> 0x20)) {
            uVar5 = *(ulonglong *)(pFVar4 + (longlong)puVar14 * 0x10);
          }
          uVar16 = uVar15 & 0xffffffff;
          if ((uint)uVar15 < *(uint *)(pFVar4 + (longlong)puVar14 * 0x10)) {
            uVar16 = (ulonglong)*(uint *)(pFVar4 + (longlong)puVar14 * 0x10);
          }
          *(ulonglong *)(pFVar4 + (longlong)puVar14 * 0x10) =
               ((longlong)uVar5 >> 0x20) << 0x20 | uVar16;
        }
      }
      else if (uVar11 == 3) {
        dVar1 = *(double *)(pFVar3 + uVar18);
        uVar19 = SUB84(dVar1,0);
        uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
        dVar2 = *(double *)(pFVar4 + (longlong)puVar14 * 0x10);
        if (dVar1 <= dVar2) {
          uVar19 = SUB84(dVar2,0);
          uVar20 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        *(ulonglong *)(pFVar4 + (longlong)puVar14 * 0x10) = CONCAT44(uVar20,uVar19);
      }
      else if ((uVar11 != 5) &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                  ,0x816,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar15 = (ulonglong)(uVar17 + 1);
      iVar8 = param_2->ArrayNum;
      local_e0 = (undefined8 *)((longlong)local_e0 + 1);
      uVar18 = uVar18 + 0x10;
    } while ((int)(uVar17 + 1) < iVar8);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

// ToEscapedString @ 141a24c20

void __cdecl
FStatsUtils::ToEscapedString(TStringView<wchar_t> *param_1,TStringBuilderBase<wchar_t> *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  TStringBuilderBase<wchar_t> *this;
  int iVar3;
  wchar_t *pwVar4;
  
  while( true ) {
    pwVar2 = param_1->DataPtr;
    pwVar4 = pwVar2;
    while ((pwVar4 != pwVar2 + (int)*(undefined8 *)&param_1->Size &&
           (((-(ulonglong)((ushort)*pwVar4 < 0x40) & 0x109500002600) >> ((byte)*pwVar4 & 0x3f) & 1)
            == 0))) {
      pwVar4 = pwVar4 + 1;
    }
    iVar3 = (int)((longlong)pwVar4 - (longlong)pwVar2 >> 1);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar2,iVar3);
    iVar1 = param_1->Size;
    if (pwVar2 + iVar3 == pwVar2 + iVar1) break;
    if (param_2->End < param_2->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_2,1);
    }
    *param_2->CurPos = L'$';
    param_2->CurPos = param_2->CurPos + 1;
    this = TStringBuilderBase<wchar_t>::AppendfImpl(param_2,L"%u");
    if (this->End < this->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this,1);
    }
    *this->CurPos = L'$';
    this->CurPos = this->CurPos + 1;
    param_1->Size = iVar1 - (iVar3 + 1);
    param_1->DataPtr = pwVar2 + (iVar3 + 1);
  }
  return;
}

