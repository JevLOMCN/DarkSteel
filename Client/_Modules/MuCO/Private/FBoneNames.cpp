// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 3

// FBoneNames @ 14abbbbf0

FBoneNames * __thiscall FBoneNames::FBoneNames(FBoneNames *this,UModelResources *param_1)

{
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  UModelResources *pUVar4;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FBoneNames *pFVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 local_res8;
  UModelResources *local_res10;
  undefined4 local_res18;
  int local_res20;
  uint local_108;
  uint uStack_104;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_bc;
  undefined1 local_b4 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 *local_50;
  
  uVar17 = 0;
  uVar18 = 0;
  *(undefined8 *)&this->BoneNamesMap = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x20 = 0;
  uVar15 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneNamesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneNamesMap).field_0x34 = 0;
  *(undefined8 *)&(this->BoneNamesMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneNamesMap).field_0x48 = 0;
  local_res10 = param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  uVar21 = *(int *)&(param_1->BoneNamesMap).field_0x8 - *(int *)&(param_1->BoneNamesMap).field_0x34;
  local_res8 = 1;
  if (uVar21 <= (uint)(*(int *)&(this->BoneNamesMap).field_0x8 -
                      *(int *)&(this->BoneNamesMap).field_0x34)) goto LAB_14abbbea8;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar21);
  uVar22 = 1;
  if (3 < uVar21) {
    uVar13 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (undefined4)lVar12;
    uVar22 = 1 << ((byte)lVar12 & 0x1f);
  }
  iVar16 = *(int *)&(this->BoneNamesMap).field_0x48;
  if ((iVar16 != 0) && ((int)uVar22 <= iVar16)) goto LAB_14abbbea8;
  *(uint *)&(this->BoneNamesMap).field_0x48 = uVar22;
  if (*(longlong *)&(this->BoneNamesMap).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->BoneNamesMap).field_0x40,0,0,4);
  }
  if (uVar22 != 0) {
    uVar21 = uVar22;
    if (uVar22 < 2) {
      if (*(longlong *)&(this->BoneNamesMap).field_0x40 != 0) {
        uVar21 = 0;
        goto LAB_14abbbcf7;
      }
    }
    else {
LAB_14abbbcf7:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->BoneNamesMap).field_0x40,0,uVar21,4);
    }
    if (0 < (int)uVar22) {
      uVar19 = (ulonglong)uVar22;
      uVar13 = uVar17;
      do {
        puVar2 = *(undefined1 **)&(this->BoneNamesMap).field_0x40;
        puVar11 = &(this->BoneNamesMap).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        uVar9 = uVar13 & (longlong)(int)uVar22 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(puVar11 + uVar9 * 4) = 0xffffffff;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  if (*(int *)&(this->BoneNamesMap).field_0x48 != 0) {
    uVar21 = *(uint *)&(this->BoneNamesMap).field_0x28;
    local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->BoneNamesMap).field_0x10;
    local_108 = 0;
    uStack_104 = 1;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uVar13 = uVar17;
    if (uVar21 != 0) {
      puVar20 = *(uint **)&(this->BoneNamesMap).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)local_a8.Array;
      }
      uVar22 = *puVar20;
      uVar19 = uVar17;
      while (uVar22 == 0) {
        uStack_f0 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_f0;
        iVar16 = (int)uVar13;
        local_108 = iVar16 + 1;
        uVar13 = (ulonglong)local_108;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_108)
        goto LAB_14abbbdee;
        uVar22 = puVar20[(longlong)iVar16 + 1];
      }
      uStack_104 = -uVar22 & uVar22;
      uVar13 = (ulonglong)uStack_104 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      uStack_f4 = local_res20 + -1 + uStack_f0;
      uVar13 = (ulonglong)uStack_f4;
      if ((int)uVar21 < (int)uStack_f4) {
LAB_14abbbdee:
        uVar13 = (ulonglong)uVar21;
        uStack_f4 = uVar21;
      }
    }
    local_a8._padding_ = CONCAT44(uStack_104,local_108);
    local_a8.CurrentBitIndex = uStack_f4;
    local_a8.UnvisitedBitMask = 0xffffffff;
    local_a8._28_4_ = uStack_ec;
    local_a8.BaseBitIndex = uStack_f0;
    local_b4._4_8_ = this;
    if ((int)uVar13 < (int)uVar21) {
      do {
        puVar23 = (undefined8 *)
                  ((longlong)(int)uVar13 * 0x20 +
                  *(longlong *)
                   (TMap<FString,UE::Mutable::Private::FBoneName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>_>
                    *)local_b4._4_8_);
        iVar16 = *(int *)(puVar23 + 1) + -1;
        if (*(int *)(puVar23 + 1) == 0) {
          pwVar14 = L"";
          iVar16 = 0;
        }
        else {
          pwVar14 = (wchar_t *)*puVar23;
        }
        uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar14);
        uVar21 = *(int *)&(this->BoneNamesMap).field_0x48 - 1U & uVar21;
        *(uint *)((longlong)puVar23 + 0x1c) = uVar21;
        puVar2 = *(undefined1 **)&(this->BoneNamesMap).field_0x40;
        puVar11 = &(this->BoneNamesMap).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar11 = puVar2;
        }
        uVar19 = (longlong)*(int *)&(this->BoneNamesMap).field_0x48 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(puVar23 + 3) = *(undefined4 *)(puVar11 + uVar19 * 4);
        *(int *)(puVar11 + uVar19 * 4) = (int)uVar13;
        local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
        uVar13 = (ulonglong)(uint)local_a8.CurrentBitIndex;
      } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
    }
  }
LAB_14abbbea8:
  pUVar4 = local_res10;
  puVar2 = &(local_res10->BoneNamesMap).field_0x10;
  uVar21 = *(uint *)&(local_res10->BoneNamesMap).field_0x28;
  pTVar1 = &local_res10->BoneNamesMap;
  uVar22 = uVar18;
  if (uVar21 == 0) {
LAB_14abbbf2f:
    uVar7 = (uint)local_res8;
  }
  else {
    puVar20 = *(uint **)&(local_res10->BoneNamesMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar7 = *puVar20;
    uVar13 = uVar17;
    while (uVar7 == 0) {
      iVar16 = (int)uVar17;
      uVar18 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uVar18;
      uVar15 = iVar16 + 1;
      uVar17 = (ulonglong)uVar15;
      uVar22 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14abbbf2f;
      uVar7 = puVar20[(longlong)iVar16 + 1];
    }
    uVar7 = -uVar7 & uVar7;
    uVar17 = (ulonglong)uVar7 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar22 = (uVar18 - 1) + (int)lVar12;
    if ((int)uVar21 < (int)uVar22) {
      uVar22 = uVar21;
    }
  }
  uVar8 = *(uint *)&(local_res10->BoneNamesMap).field_0x28;
  uVar24 = uVar8 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar7,uVar15);
  TStack_80.CurrentBitIndex = uVar22;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar8 >> 5;
  TStack_80._28_4_ = uVar22;
  TStack_80.BaseBitIndex = uVar18;
  uStack_60 = CONCAT44(uStack_bc,
                       *(int *)&(local_res10->BoneNamesMap).field_0x8 -
                       *(int *)&(local_res10->BoneNamesMap).field_0x34);
  local_88 = pTVar1;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar8 < 0) || ((int)uVar21 < (int)uVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FBoneNames *)(*pcVar3)();
    return pFVar10;
  }
  uVar15 = *(uint *)&(pUVar4->BoneNamesMap).field_0x28;
  if (uVar8 != uVar15) {
    puVar11 = *(undefined1 **)&(pUVar4->BoneNamesMap).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar18 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar16;
      uVar24 = uVar24 + 0x20;
      iVar16 = iVar16 + 1;
      uVar8 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_14abbc040;
      uVar18 = *(uint *)(puVar11 + lVar12 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar8 = (int)lVar12 + -1 + uVar24;
    if ((int)uVar15 < (int)uVar8) {
      uVar8 = uVar15;
    }
  }
LAB_14abbc040:
  while( true ) {
    pTVar5 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FString,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar8) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar5 == pTVar1))
    break;
    local_58 = (longlong)TStack_80.CurrentBitIndex * 0x20 + *(longlong *)pTVar5;
    local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(local_58 + 0x10));
    local_50 = &local_res8;
    TSet<TTuple<FString,UE::Mutable::Private::FBoneName>,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UE::Mutable::Private::FBoneName_&&>_>
              ((TSet<TTuple<FString,UE::Mutable::Private::FBoneName>,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,UE::Mutable::Private::FBoneName_&&> *)
                       local_b4,(bool *)&local_58);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  return this;
}

// Find @ 14abd7e10

FBoneName * __thiscall FBoneNames::Find(FBoneNames *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FString *pFVar1;
  FBoneName *pFVar2;
  FString local_28;
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = ::FName::ToString(param_1,&local_18);
    pFVar1 = ::FString::ToLower(pFVar1,&local_28);
    pFVar2 = TMapBase<FString,UE::Mutable::Private::FBoneName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>_>
             ::Find((TMapBase<FString,UE::Mutable::Private::FBoneName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>_>
                     *)this,pFVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pFVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FindOrAdd @ 14abd87f0

FBoneName __thiscall FBoneNames::FindOrAdd(FBoneNames *this,FName *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FString *this_00;
  longlong lVar8;
  uint *puVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  uint *puVar12;
  FName *in_R8;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint local_res8 [2];
  FString local_a8;
  undefined1 local_98 [8];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  FBoneNames *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  int iStack_54;
  uint local_50;
  int iStack_4c;
  
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this_00 = ::FName::ToString(in_R8,(FString *)local_98);
  ::FString::ToLower(this_00,&local_a8);
  if (local_98 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_98);
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar10.Data = local_a8.Data.AllocatorInstance.Data;
  }
  puVar12 = (uint *)0x0;
  uVar11 = 0;
  uVar5 = local_a8.Data.ArrayNum - 1;
  if (local_a8.Data.ArrayNum == 0) {
    uVar5 = uVar11;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,(wchar_t *)FVar10.Data);
  iVar6 = TSet<TTuple<FString,UE::Mutable::Private::FBoneName>,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,UE::Mutable::Private::FBoneName>,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>,FDefaultSetAllocator>
                      *)this,uVar5,&local_a8);
  if (iVar6 != -1) {
    lVar8 = (longlong)iVar6 * 0x20 + *(longlong *)&this->BoneNamesMap;
    puVar9 = (uint *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      puVar9 = puVar12;
    }
    if (puVar9 != (uint *)0x0) {
      (param_1->ComparisonIndex).Value = *puVar9;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      goto LAB_14abd8a31;
    }
  }
  uVar5 = local_a8.Data.ArrayNum - 1;
  FVar10.Data = local_a8.Data.AllocatorInstance.Data;
  if (local_a8.Data.ArrayNum == 0) {
    uVar5 = uVar11;
    FVar10.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = CityHash32((char *)FVar10.Data,uVar5 * 2);
  puVar1 = &(this->BoneNamesMap).field_0x10;
  do {
    uVar3 = *(uint *)&(this->BoneNamesMap).field_0x28;
    uStack_64 = 1;
    puVar9 = puVar12;
    uStack_68 = uVar11;
    local_50 = uVar11;
    if (uVar3 != 0) {
      puVar13 = *(uint **)&(this->BoneNamesMap).field_0x20;
      puVar9 = (uint *)(ulonglong)uVar3;
      puVar15 = (uint *)puVar1;
      if (puVar13 != (uint *)0x0) {
        puVar15 = puVar13;
      }
      uVar7 = *puVar15;
      puVar13 = puVar12;
      puVar14 = puVar12;
      local_50 = 0;
      uStack_68 = 0;
      while (uVar7 == 0) {
        iVar6 = (int)puVar13;
        local_50 = (int)puVar14 + 0x20;
        puVar14 = (uint *)(ulonglong)local_50;
        uStack_68 = iVar6 + 1;
        puVar13 = (uint *)(ulonglong)uStack_68;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_68)
        goto LAB_14abd896a;
        uVar7 = puVar15[(longlong)iVar6 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar2 = (ulonglong)uStack_64 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar7 = (local_50 - 1) + (int)lVar8;
      if ((int)uVar3 < (int)uVar7) {
        uVar7 = uVar3;
      }
      puVar9 = (uint *)(ulonglong)uVar7;
    }
LAB_14abd896a:
    uStack_58 = 0xffffffff;
    iStack_54 = (int)puVar9;
    iStack_4c = TStack_90.CurrentBitIndex;
    uVar4._4_4_ = iStack_54;
    uVar4._0_4_ = 0xffffffff;
    TStack_90._28_4_ = TStack_90.CurrentBitIndex;
    TStack_90.BaseBitIndex = local_50;
    local_98 = (undefined1  [8])this;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    TStack_90._16_8_ = uVar4;
    local_70 = this;
    local_60 = puVar1;
    TStack_90._padding_._0_4_ = uStack_68;
    TStack_90._padding_._4_4_ = uStack_64;
    if ((int)uVar3 <= iStack_54) break;
    while (*(uint *)((longlong)(int)puVar9 * 0x20 + 0x10 + *(longlong *)local_98) != uVar5) {
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      puVar9 = (uint *)(ulonglong)(uint)TStack_90.CurrentBitIndex;
      if ((TStack_90.Array)->NumBits <= TStack_90.CurrentBitIndex) goto LAB_14abd89e5;
    }
    uVar5 = uVar5 + 1;
  } while( true );
LAB_14abd89e5:
  local_98 = (undefined1  [8])&local_a8;
  TStack_90._padding_ = (longlong)local_res8;
  local_res8[0] = uVar5;
  TSet<TTuple<FString,UE::Mutable::Private::FBoneName>,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,UE::Mutable::Private::FBoneName_&&>_>
            ((TSet<TTuple<FString,UE::Mutable::Private::FBoneName>,TDefaultMapHashableKeyFuncs<FString,UE::Mutable::Private::FBoneName,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_const_&,UE::Mutable::Private::FBoneName_&&> *)
                     &stack0x00000020,(bool *)local_98);
  (param_1->ComparisonIndex).Value = uVar5;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_14abd8a31:
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return (FBoneName)(uint)param_1;
}

