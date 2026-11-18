// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// AddAndMinMax @ 1419d81d0

void __cdecl
FComplexStatUtils::AddAndMinMax
          (TStatMessage<EComplexStatField> *param_1,FStatMessage *param_2,Type param_3,Type param_4,
          Type param_5)

{
  uchar *puVar1;
  double dVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  
  uVar12 = (ulonglong)param_4;
  uVar11 = (ulonglong)param_3;
  if (((ulonglong)param_1->NameAndInfo & 0x1ffffffffff) !=
      ((ulonglong)param_2->NameAndInfo & 0x1ffffffffff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                       ,0x852,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = (param_1->NameAndInfo).Number;
  uVar13 = (ulonglong)param_5;
  if ((uVar6 & 0xe00) == 0x200) {
    uVar7 = (param_2->NameAndInfo).Number >> 9;
    uVar8 = uVar7 << 9;
    uVar7 = uVar7 & 7;
    (param_1->NameAndInfo).Number = (uVar8 ^ uVar6) & 0xfffff1ff ^ uVar8;
    if (uVar7 == 2) {
      uVar9 = 0x7fffffffffffffff;
    }
    else {
      if (uVar7 != 3) goto LAB_1419d829e;
      uVar9 = 0x7fefffffffffffff;
    }
    *(undefined8 *)((param_1->StatData).Pad + uVar13 * 8) = uVar9;
  }
LAB_1419d829e:
  uVar6 = (param_1->NameAndInfo).Number & 0xe00;
  if ((uVar6 != 0x200) && (uVar6 != 0x800)) {
    if (uVar6 == 0x400) {
      puVar1 = (param_1->StatData).Pad + uVar11 * 8;
      *(longlong *)puVar1 = *(longlong *)puVar1 + *(longlong *)(param_2->StatData).Pad;
      uVar11 = *(ulonglong *)(param_2->StatData).Pad;
      if (((param_1->NameAndInfo).Number & 0x100000U) == 0) {
        if ((longlong)uVar11 < *(longlong *)((param_1->StatData).Pad + uVar12 * 8)) {
          uVar11 = *(ulonglong *)((param_1->StatData).Pad + uVar12 * 8);
        }
        *(ulonglong *)((param_1->StatData).Pad + uVar12 * 8) = uVar11;
      }
      else {
        uVar10 = *(ulonglong *)((param_1->StatData).Pad + uVar12 * 8);
        uVar3 = uVar11;
        if ((uint)(uVar11 >> 0x20) < (uint)(uVar10 >> 0x20)) {
          uVar3 = uVar10;
        }
        uVar10 = uVar11 & 0xffffffff;
        if ((uint)uVar11 < *(uint *)((param_1->StatData).Pad + uVar12 * 8)) {
          uVar10 = (ulonglong)*(uint *)((param_1->StatData).Pad + uVar12 * 8);
        }
        *(ulonglong *)((param_1->StatData).Pad + uVar12 * 8) =
             ((longlong)uVar3 >> 0x20) << 0x20 | uVar10;
      }
      uVar12 = *(ulonglong *)(param_2->StatData).Pad;
      if (((param_1->NameAndInfo).Number & 0x100000U) == 0) {
        if (*(longlong *)((param_1->StatData).Pad + uVar13 * 8) < (longlong)uVar12) {
          uVar12 = *(ulonglong *)((param_1->StatData).Pad + uVar13 * 8);
        }
        *(ulonglong *)((param_1->StatData).Pad + uVar13 * 8) = uVar12;
      }
      else {
        uVar11 = *(ulonglong *)((param_1->StatData).Pad + uVar13 * 8);
        uVar10 = uVar12;
        if ((uint)(uVar11 >> 0x20) < (uint)(uVar12 >> 0x20)) {
          uVar10 = uVar11;
        }
        uVar11 = uVar12 & 0xffffffff;
        if (*(uint *)((param_1->StatData).Pad + uVar13 * 8) < (uint)uVar12) {
          uVar11 = (ulonglong)*(uint *)((param_1->StatData).Pad + uVar13 * 8);
        }
        *(ulonglong *)((param_1->StatData).Pad + uVar13 * 8) =
             ((longlong)uVar10 >> 0x20) << 0x20 | uVar11;
      }
    }
    else if (uVar6 == 0x600) {
      *(double *)((param_1->StatData).Pad + uVar11 * 8) =
           *(double *)((param_1->StatData).Pad + uVar11 * 8) + *(double *)(param_2->StatData).Pad;
      dVar14 = *(double *)(param_2->StatData).Pad;
      dVar2 = *(double *)((param_1->StatData).Pad + uVar12 * 8);
      if (dVar14 <= dVar2) {
        dVar14 = dVar2;
      }
      *(double *)((param_1->StatData).Pad + uVar12 * 8) = dVar14;
      dVar14 = *(double *)(param_2->StatData).Pad;
      dVar2 = *(double *)((param_1->StatData).Pad + uVar13 * 8);
      if (dVar2 <= dVar14) {
        dVar14 = dVar2;
      }
      *(double *)((param_1->StatData).Pad + uVar13 * 8) = dVar14;
    }
  }
  return;
}

// DivideStat @ 1419ee6b0

void __cdecl
FComplexStatUtils::DivideStat
          (TStatMessage<EComplexStatField> *param_1,uint param_2,Type param_3,Type param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar1 = (param_1->NameAndInfo).Number;
  uVar11 = (ulonglong)param_4;
  uVar12 = (int)uVar1 >> 9 & 7;
  uVar13 = (ulonglong)param_2;
  if (uVar12 == 2) {
    lVar2 = *(longlong *)((param_1->StatData).Pad + (ulonglong)param_3 * 8);
    if (((int)uVar1 >> 0x10 & 0x10U) != 0) {
      *(ulonglong *)((param_1->StatData).Pad + uVar11 * 8) =
           (ulonglong)((int)((ulonglong)lVar2 >> 0x20) + (param_2 >> 1)) / (ulonglong)param_2 <<
           0x20 | ((param_2 >> 1) + (int)lVar2) / uVar13;
      return;
    }
    if (((int)uVar1 >> 0x10 & 4U) != 0) {
      *(longlong *)((param_1->StatData).Pad + uVar11 * 8) =
           (longlong)((uVar13 - 1) + lVar2) / (longlong)uVar13;
      return;
    }
    lVar3 = *(longlong *)(param_1->StatData).Pad;
    lVar4 = *(longlong *)((param_1->StatData).Pad + 8);
    lVar5 = *(longlong *)((param_1->StatData).Pad + 0x10);
    lVar6 = *(longlong *)((param_1->StatData).Pad + 0x18);
    lVar7 = *(longlong *)((param_1->StatData).Pad + 0x20);
    lVar8 = *(longlong *)((param_1->StatData).Pad + 0x28);
    lVar9 = *(longlong *)((param_1->StatData).Pad + 0x30);
    lVar10 = *(longlong *)((param_1->StatData).Pad + 0x38);
    (param_1->NameAndInfo).Number = uVar1 & 0xfffff7ff | 0x600;
    *(double *)(param_1->StatData).Pad = (double)lVar3;
    *(double *)((param_1->StatData).Pad + 8) = (double)lVar4;
    *(double *)((param_1->StatData).Pad + 0x10) = (double)lVar5;
    *(double *)((param_1->StatData).Pad + 0x18) = (double)lVar6;
    *(double *)((param_1->StatData).Pad + 0x20) = (double)lVar7;
    *(double *)((param_1->StatData).Pad + 0x28) = (double)lVar8;
    *(double *)((param_1->StatData).Pad + 0x30) = (double)lVar9;
    *(double *)((param_1->StatData).Pad + 0x38) = (double)lVar10;
    *(double *)((param_1->StatData).Pad + uVar11 * 8) = (double)lVar2 / (double)uVar13;
  }
  else if (uVar12 == 3) {
    *(double *)((param_1->StatData).Pad + uVar11 * 8) =
         *(double *)((param_1->StatData).Pad + (ulonglong)param_3 * 8) / (double)uVar13;
    return;
  }
  return;
}

// DiviveStatArray @ 1419ee9b0

void __cdecl
FComplexStatUtils::DiviveStatArray
          (TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *param_1,uint param_2
          ,Type param_3,Type param_4)

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
      DivideStat((TStatMessage<EComplexStatField> *)
                 ((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x48),param_2,param_3,
                 param_4);
      iVar5 = param_1->ArrayNum;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
  return;
}

// MergeAddAndMinMaxArray @ 141a0b650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FComplexStatUtils::MergeAddAndMinMaxArray
          (TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2,Type param_3,Type param_4,
          Type param_5)

{
  FNameEntryId FVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  ForElementType<FSetElementId> FVar11;
  ulonglong uVar12;
  undefined1 auStackY_118 [32];
  uint local_e8;
  Type local_e4;
  Type local_e0;
  longlong local_d8;
  int local_d0;
  uint local_cc;
  TPairInitializer<FName_const_&,int_const_&> local_c8;
  uint *local_b8;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar10 = 0;
  iVar7 = param_1->ArrayNum;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_60 = 0;
  local_e8 = 0;
  uVar12 = uVar10;
  local_e4 = param_4;
  local_e0 = param_3;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar12;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (param_1->AllocatorInstance).Data;
      local_d0 = *(int *)(pFVar9 + (longlong)(int)uVar8 * 0x48 + 0x40);
      local_cc = *(uint *)(pFVar9 + (longlong)(int)uVar8 * 0x48 + 0x44) & 0x1ff;
      local_c8.Value = &local_d0;
      local_b8 = &local_e8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)local_a8,&local_c8,(bool *)&local_c8.Value);
      iVar7 = param_1->ArrayNum;
      local_e8 = local_e8 + 1;
      uVar12 = (ulonglong)local_e8;
    } while ((int)local_e8 < iVar7);
  }
  iVar7 = param_2->ArrayNum;
  if (0 < iVar7) {
    local_d8 = 0;
    uVar12 = uVar10;
    do {
      uVar8 = (uint)uVar10;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (param_2->AllocatorInstance).Data;
      FVar1.Value = *(uint *)(pFVar9 + uVar12 + 8);
      uVar5 = *(uint *)(pFVar9 + uVar12 + 0xc);
      uVar6 = ::GetTypeHash(FVar1);
      if (local_a8._8_4_ != local_74) {
        FVar11 = (ForElementType<FSetElementId>)local_70;
        if (local_68 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = local_68;
        }
        iVar7 = *(int *)((longlong)FVar11 + (ulonglong)(local_60 - 1U & uVar6 + (uVar5 & 0x1ff)) * 4
                        );
        while (iVar7 != -1) {
          pFVar9 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar7 * 0x14);
          if (*(ulonglong *)(local_a8._0_8_ + (longlong)iVar7 * 0x14) ==
              (CONCAT44(uVar5,FVar1.Value) & 0x1ffffffffff)) {
            if (pFVar9 != (FScriptContainerElement *)0x0) goto LAB_141a0b894;
            goto LAB_141a0b86e;
          }
          iVar7 = *(int *)(pFVar9 + 0xc);
        }
      }
      pFVar9 = (FScriptContainerElement *)0x0;
LAB_141a0b86e:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
LAB_141a0b894:
      lVar3 = local_d8;
      uVar5 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(pFVar9 + 8);
      pFVar9 = (param_2->AllocatorInstance).Data;
      uVar6 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AddAndMinMax((TStatMessage<EComplexStatField> *)
                   ((param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x48),
                   (FStatMessage *)(pFVar9 + uVar12),local_e0,local_e4,param_5);
      iVar7 = param_2->ArrayNum;
      local_d8 = lVar3 + 1;
      uVar10 = (ulonglong)(uVar8 + 1);
      uVar12 = uVar12 + 0x10;
    } while ((int)(uVar8 + 1) < iVar7);
  }
  local_60 = 0;
  if (local_68 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68);
  }
  bVar4 = local_a8._12_4_ != 0;
  local_a8._8_8_ = (ulonglong)(uint)local_a8._12_4_ << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_74 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return;
}

