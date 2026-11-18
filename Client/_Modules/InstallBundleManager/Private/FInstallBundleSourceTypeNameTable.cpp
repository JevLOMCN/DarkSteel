// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 2

// FInstallBundleSourceTypeNameTable @ 148bc2960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInstallBundleSourceTypeNameTable * __thiscall
FInstallBundleSourceTypeNameTable::FInstallBundleSourceTypeNameTable
          (FInstallBundleSourceTypeNameTable *this)

{
  FString *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  longlong *plVar5;
  bool bVar6;
  FInstallBundleSourceTypeNameTable *pFVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  int local_110;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  (this->NameTable).AllocatorInstance.SecondaryData = (ForElementType<FString>)0x0;
  uVar13 = 0;
  (this->NameTable).ArrayNum = 0;
  (this->NameTable).ArrayMax = 8;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleTypes.cpp"
                         ,0x37,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FInstallBundleSourceTypeNameTable *)(*pcVar3)();
    return pFVar7;
  }
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  bVar6 = InstallBundleUtil::GetConfiguredBundleSources
                    (&local_120,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_88);
  FVar4.Data = local_120.AllocatorInstance.Data;
  if (bVar6) {
    pFVar12 = local_120.AllocatorInstance.Data + (longlong)local_120.ArrayNum * 0x10;
    for (FVar11.Data = local_120.AllocatorInstance.Data; uVar15 = local_60, FVar11.Data != pFVar12;
        FVar11.Data = FVar11.Data + 0x10) {
      TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<FString>(&this->NameTable,(FString *)FVar11.Data);
    }
    uStack_fc = 1;
    local_e8 = 0;
    uStack_ec = local_e8;
    if (local_60 != 0) {
      puVar14 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar14 = local_68;
      }
      uVar16 = *puVar14;
      local_e8 = 0;
      uVar13 = 0;
      while (uVar16 == 0) {
        lVar9 = (longlong)(int)uVar13;
        local_e8 = local_e8 + 0x20;
        uVar13 = uVar13 + 1;
        uStack_ec = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
        goto LAB_148bc2ba1;
        uVar16 = (puVar14 + 1)[lVar9];
      }
      uStack_fc = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_fc * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_110 = (int)lVar9;
      uStack_ec = local_110 + -1 + local_e8;
      if ((int)local_60 < (int)uStack_ec) {
        uStack_ec = local_60;
      }
    }
LAB_148bc2ba1:
    local_108 = (longlong *)local_88;
    uStack_e4 = local_8c;
    local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uVar16 = local_60 & 0xffffffe0;
    iStack_e0 = local_88._8_4_ - local_54;
    uStack_f0 = 0xffffffff;
    TStack_d0.CurrentBitIndex = uStack_ec;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    TStack_d0._padding_ = CONCAT44(uStack_fc,uVar13);
    iVar10 = (int)local_60 >> 5;
    TStack_d0._28_4_ = local_8c;
    TStack_d0.BaseBitIndex = local_e8;
    uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
    bVar8 = (byte)local_60;
    uStack_100 = uVar13;
    local_d8 = local_108;
    TStack_d0.Array = local_f8;
    if (((int)local_60 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInstallBundleSourceTypeNameTable *)(*pcVar3)();
      return pFVar7;
    }
    if (uVar15 != local_60) {
      puVar14 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar14 = local_68;
      }
      uVar13 = -1 << (bVar8 & 0x1f) & puVar14[iVar10];
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar10;
        uVar16 = uVar16 + 0x20;
        iVar10 = iVar10 + 1;
        uVar15 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_148bc2cad;
        uVar13 = (puVar14 + 1)[lVar9];
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar15 = (int)lVar9 + -1 + uVar16;
      if ((int)local_60 < (int)uVar15) {
        uVar15 = local_60;
      }
    }
LAB_148bc2cad:
    while( true ) {
      plVar5 = local_d8;
      if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
        `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (((TStack_d0.CurrentBitIndex == uVar15) &&
          (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar5 == (longlong *)local_88)) break;
      pFVar1 = (FString *)(*plVar5 + (longlong)TStack_d0.CurrentBitIndex * 0x28);
      TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<FString>(&this->NameTable,pFVar1);
      TArray<FString,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<FString>(&this->NameTable,pFVar1 + 1);
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    }
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    DestructItems<FString,int>((FString *)FVar4.Data,local_120.ArrayNum);
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
  }
  else {
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    iVar10 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (uint *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    FVar4.Data = local_120.AllocatorInstance.Data;
    DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
  }
  return this;
}

// FindBundleSourceTypeByName @ 148bc90a0

TStringView<wchar_t> * __thiscall
FInstallBundleSourceTypeNameTable::FindBundleSourceTypeByName
          (FInstallBundleSourceTypeNameTable *this,TStringView<wchar_t> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ForElementType<FString> FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (this->NameTable).AllocatorInstance.SecondaryData;
  piVar1 = &(this->NameTable).ArrayNum;
  iVar3 = *piVar1;
  if (FVar6 != (ForElementType<FString>)0x0) {
    this = (FInstallBundleSourceTypeNameTable *)FVar6;
  }
  FVar6 = (ForElementType<FString>)((longlong)iVar3 * 0x10 + (longlong)this);
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((ForElementType<FString>)this == FVar6) {
      __return_storage_ptr__->Size = 0;
      __return_storage_ptr__->DataPtr = L"";
      return __return_storage_ptr__;
    }
    iVar4 = *(int *)((longlong)this + 8) + -1;
    if (*(int *)((longlong)this + 8) == 0) {
      iVar4 = 0;
    }
    iVar5 = (int)*(undefined8 *)&param_1->Size;
    if (iVar5 == iVar4) {
      if ((iVar5 != 0) && (iVar4 != 0)) {
        iVar2 = iVar4;
        if (iVar5 < iVar4) {
          iVar2 = iVar5;
        }
        iVar2 = FGenericPlatformStricmp::Strnicmp
                          (param_1->DataPtr,*(wchar_t **)this,(longlong)iVar2);
        if (iVar2 != 0) goto LAB_148bc914e;
      }
      if (iVar5 == iVar4) {
        __return_storage_ptr__->DataPtr = *(wchar_t **)this;
        iVar3 = *(int *)((longlong)this + 8) + -1;
        if (*(int *)((longlong)this + 8) == 0) {
          iVar3 = 0;
        }
        __return_storage_ptr__->Size = iVar3;
        return __return_storage_ptr__;
      }
    }
LAB_148bc914e:
    this = (FInstallBundleSourceTypeNameTable *)((longlong)this + 0x10);
  } while( true );
}

