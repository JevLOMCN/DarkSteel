// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// TMap<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,0>_> @ 14e67b7f0

/* WARNING: Enum "EInterchangePropertyTracks": Some values do not have unique names */

TMap<EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,0>_>
* __thiscall
TMap<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,0>_>
::
TMap<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,0>_>
          (void *this,
          initializer_list<TPairInitializer<EInterchangePropertyTracks_const_&,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty_const_&>_>
          *param_1)

{
  TPairInitializer<EInterchangePropertyTracks_const_&,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty_const_&>
  *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  TPairInitializer<EInterchangePropertyTracks_const_&,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty_const_&>
  *pTVar9;
  ulonglong uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  FInterchangeProperty *pFStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar5 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar12 == 0) goto joined_r0x00014e67ba61;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014e67ba61;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_14e67b8d5;
      }
    }
    else {
LAB_14e67b8d5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar10 = (ulonglong)uVar12;
      uVar6 = uVar5;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar6 & (longlong)(int)uVar12 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pFStack_70 = (FInterchangeProperty *)((longlong)this + 0x10);
    local_78 = (EInterchangePropertyTracks *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)pFStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar6 = uVar5;
      while (uVar3 == 0) {
        iVar8 = (int)uVar5;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        uVar3 = iVar8 + 1;
        uVar5 = (ulonglong)local_78 >> 0x20;
        local_78 = (EInterchangePropertyTracks *)CONCAT44((int)uVar5,uVar3);
        uVar5 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_14e67b9cb;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      local_78 = (EInterchangePropertyTracks *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar5 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar5 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_14e67b9cb:
        uVar5 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFStack_70;
    if ((int)uVar5 < (int)uVar12) {
      do {
        iVar8 = (int)uVar5;
        uVar12 = *(int *)((longlong)this + 0x48) - 1U &
                 *(uint *)(*local_58 + (longlong)iVar8 * 0x48);
        lVar4 = *local_58 + (longlong)iVar8 * 0x48;
        *(uint *)(lVar4 + 0x44) = uVar12;
        lVar7 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar7 + uVar5 * 4);
        *(int *)(lVar7 + uVar5 * 4) = iVar8;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar5 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014e67ba61:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pFStack_70 = pTVar9->Value;
    TSet<TTuple<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty>,TDefaultMapHashableKeyFuncs<enum_EInterchangePropertyTracks,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EInterchangePropertyTracks_const_&,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty_const_&>_>
              (this,(TPairInitializer<EInterchangePropertyTracks_const_&,UE::Interchange::Private::FInterchangePropertyTracksHelper::FInterchangeProperty_const_&>
                     *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_> @ 14e6b4e70

TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
* __thiscall
TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
::
TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
          (TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
           *this,TMap<wchar_t_const_*,UE::Interchange::FVariant_*,FDefaultSetAllocator,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_> @ 14e6dfc60

TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
* __thiscall
TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
::
TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
          (TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
           *this,initializer_list<TPairInitializer<FString_const_&,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_const_&>_>
                 *param_1)

{
  TPairInitializer<FString_const_&,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_const_&>
  *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar8;
  wchar_t *pwVar9;
  TPairInitializer<FString_const_&,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_const_&>
  *pTVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined8 local_78;
  TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  ulonglong uVar7;
  
  pTVar1 = param_1->_Last;
  uVar7 = 0;
  pTVar10 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar11 = (uint)((longlong)pTVar1 - (longlong)pTVar10 >> 4);
  if (uVar11 == 0) goto joined_r0x00014e6dfee6;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<80,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar11 <= *(int *)&this->field_0x48))
  goto joined_r0x00014e6dfee6;
  *(uint *)&this->field_0x48 = uVar11;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar11 != 0) {
    uVar5 = uVar11;
    if (uVar11 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_14e6dfd3d;
      }
    }
    else {
LAB_14e6dfd3d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar11) {
      uVar13 = (ulonglong)uVar11;
      uVar8 = uVar7;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar3 = uVar8 & (longlong)(int)uVar11 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar6 + uVar3 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar11 = *(uint *)&this->field_0x28;
    pTStack_70 = (TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)> *)&this->field_0x10;
    local_78 = (FString *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar14 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar14 = (uint *)pTStack_70;
      }
      uVar5 = *puVar14;
      uVar8 = uVar7;
      while (uVar5 == 0) {
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        iVar4 = (int)uVar7;
        uVar5 = iVar4 + 1;
        uVar7 = (ulonglong)uVar5;
        uVar13 = (ulonglong)local_78 >> 0x20;
        local_78 = (FString *)CONCAT44((int)uVar13,uVar5);
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_14e6dfe29;
        uVar5 = puVar14[(longlong)iVar4 + 1];
      }
      local_78 = (FString *)CONCAT44(-uVar5 & uVar5,SUB84(local_78,0));
      uVar7 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_14e6dfe29:
        uVar7 = (ulonglong)uVar11;
        uStack_64 = uVar11;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTStack_70;
    if ((int)uVar7 < (int)uVar11) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar7 * 0x50 + *(longlong *)local_58);
        iVar4 = *(int *)(puVar12 + 1) + -1;
        if (*(int *)(puVar12 + 1) == 0) {
          pwVar9 = L"";
          iVar4 = 0;
        }
        else {
          pwVar9 = (wchar_t *)*puVar12;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar9);
        uVar11 = *(int *)&this->field_0x48 - 1U & uVar11;
        *(uint *)((longlong)puVar12 + 0x44) = uVar11;
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar8 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(puVar6 + uVar8 * 4);
        *(int *)(puVar6 + uVar8 * 4) = (int)uVar7;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014e6dfee6:
  for (; pTVar10 != pTVar1; pTVar10 = pTVar10 + 1) {
    local_78 = pTVar10->Key;
    pTStack_70 = pTVar10->Value;
    TSet<TTuple<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_>,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_const_&>_>
              ((TSet<TTuple<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_>,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>_const_&>
                        *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

