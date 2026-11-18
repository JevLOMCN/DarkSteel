// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 4

// ForeachRow<FNNEDenoiserInputMappingData> @ 14eae3820

void __thiscall
UDataTable::ForeachRow<FNNEDenoiserInputMappingData>
          (UDataTable *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserInputMappingData_const_&)> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UPackage *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  TBitArray<FDefaultBitArrayAllocator> *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserInputMappingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UScriptStruct_FNNEDenoiserInputMappingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserInputMappingData,(UObject *)pUVar5,
                         L"NNEDenoiserInputMappingData");
  }
  bVar4 = CommonTypeCheck(this,Z_Registration_Info_UScriptStruct_FNNEDenoiserInputMappingData.
                               OuterSingleton,L"UDataTable::ForeachRow",param_1);
  if (bVar4) {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))(this);
    iVar2 = (int)plVar6[5];
    iStack_38 = 0;
    uStack_34 = 1;
    local_20 = 0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar6 + 2);
    iStack_24 = 0;
    if (iVar2 != 0) {
      pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = TStack_60.Array;
      }
      uVar3 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      while (uVar3 == 0) {
        lVar7 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14eae391a;
        uVar3 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar7;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14eae391a:
    uStack_28 = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = plVar6;
    local_30 = TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < iVar2) {
      do {
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,
                   *plVar6 + (longlong)TStack_60.CurrentBitIndex * 0x18,
                   *(undefined8 *)(*plVar6 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
  return;
}

// ForeachRow<FNNEDenoiserOutputMappingData> @ 14eae39e0

void __thiscall
UDataTable::ForeachRow<FNNEDenoiserOutputMappingData>
          (UDataTable *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserOutputMappingData_const_&)> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UPackage *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  TBitArray<FDefaultBitArrayAllocator> *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData,(UObject *)pUVar5,
                         L"NNEDenoiserOutputMappingData");
  }
  bVar4 = CommonTypeCheck(this,Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.
                               OuterSingleton,L"UDataTable::ForeachRow",param_1);
  if (bVar4) {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))(this);
    iVar2 = (int)plVar6[5];
    iStack_38 = 0;
    uStack_34 = 1;
    local_20 = 0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar6 + 2);
    iStack_24 = 0;
    if (iVar2 != 0) {
      pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = TStack_60.Array;
      }
      uVar3 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      while (uVar3 == 0) {
        lVar7 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14eae3ada;
        uVar3 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar7;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14eae3ada:
    uStack_28 = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = plVar6;
    local_30 = TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < iVar2) {
      do {
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,
                   *plVar6 + (longlong)TStack_60.CurrentBitIndex * 0x18,
                   *(undefined8 *)(*plVar6 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
  return;
}

// ForeachRow<FNNEDenoiserTemporalInputMappingData> @ 14eae3ba0

void __thiscall
UDataTable::ForeachRow<FNNEDenoiserTemporalInputMappingData>
          (UDataTable *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserTemporalInputMappingData_const_&)>
          *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UPackage *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  TBitArray<FDefaultBitArrayAllocator> *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData,
                         (UObject *)pUVar5,L"NNEDenoiserTemporalInputMappingData");
  }
  bVar4 = CommonTypeCheck(this,Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData
                               .OuterSingleton,L"UDataTable::ForeachRow",param_1);
  if (bVar4) {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))(this);
    iVar2 = (int)plVar6[5];
    iStack_38 = 0;
    uStack_34 = 1;
    local_20 = 0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar6 + 2);
    iStack_24 = 0;
    if (iVar2 != 0) {
      pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = TStack_60.Array;
      }
      uVar3 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      while (uVar3 == 0) {
        lVar7 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14eae3c9a;
        uVar3 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar7;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14eae3c9a:
    uStack_28 = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = plVar6;
    local_30 = TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < iVar2) {
      do {
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,
                   *plVar6 + (longlong)TStack_60.CurrentBitIndex * 0x18,
                   *(undefined8 *)(*plVar6 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
  return;
}

// ForeachRow<FNNEDenoiserTemporalOutputMappingData> @ 14eae3d60

void __thiscall
UDataTable::ForeachRow<FNNEDenoiserTemporalOutputMappingData>
          (UDataTable *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FName_const_&,FNNEDenoiserTemporalOutputMappingData_const_&)>
          *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UPackage *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  TBitArray<FDefaultBitArrayAllocator> *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalOutputMappingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalOutputMappingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserTemporalOutputMappingData,
                         (UObject *)pUVar5,L"NNEDenoiserTemporalOutputMappingData");
  }
  bVar4 = CommonTypeCheck(this,Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalOutputMappingData
                               .OuterSingleton,L"UDataTable::ForeachRow",param_1);
  if (bVar4) {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d0))(this);
    iVar2 = (int)plVar6[5];
    iStack_38 = 0;
    uStack_34 = 1;
    local_20 = 0;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)(plVar6 + 2);
    iStack_24 = 0;
    if (iVar2 != 0) {
      pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)plVar6[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar6[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = TStack_60.Array;
      }
      uVar3 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      while (uVar3 == 0) {
        lVar7 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14eae3e5a;
        uVar3 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar7;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_14eae3e5a:
    uStack_28 = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = plVar6;
    local_30 = TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < iVar2) {
      do {
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,
                   *plVar6 + (longlong)TStack_60.CurrentBitIndex * 0x18,
                   *(undefined8 *)(*plVar6 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18));
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
  return;
}

