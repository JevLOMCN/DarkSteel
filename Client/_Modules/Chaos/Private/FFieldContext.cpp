// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FFieldContext @ 143f45330

FFieldContext * __thiscall
FFieldContext::FFieldContext
          (FFieldContext *this,TFieldArrayView<FFieldContextIndex> *param_1,
          TFieldArrayView<UE::Math::TVector<double>_> *param_2,
          TMap<FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>_>
          *param_3,double param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *param_8,
          TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *param_9)

{
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> *pTVar1;
  int iVar2;
  int iVar3;
  FFieldSystemMetaDataCulling *pFVar4;
  undefined8 *puVar5;
  FFieldSystemMetaDataCulling *pFVar6;
  undefined8 local_28;
  double *local_20;
  TArray<float,TSizedDefaultAllocator<32>_> **local_18;
  
  iVar2 = param_1->ArrayOffset;
  iVar3 = param_1->ArrayNum;
  pFVar6 = (FFieldSystemMetaDataCulling *)0x0;
  (this->SampleIndices).ElementArray = param_1->ElementArray;
  (this->SampleIndices).ArrayOffset = iVar2;
  (this->SampleIndices).ArrayNum = iVar3;
  iVar2 = param_2->ArrayOffset;
  iVar3 = param_2->ArrayNum;
  (this->SamplePositions).ElementArray = param_2->ElementArray;
  (this->SamplePositions).ArrayOffset = iVar2;
  (this->SamplePositions).ArrayNum = iVar3;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
  ::operator=(&this->MetaData,
              (TSet<TTuple<FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
               *)param_3);
  pTVar1 = &this->CullingData;
  this->VectorResults = param_5;
  this->ScalarResults = param_6;
  this->IntegerResults = param_7;
  this->IndexResults = param_8;
  this->TimeSeconds = param_4;
  pTVar1->Ptr = (FFieldSystemMetaDataCulling *)0x0;
  pFVar4 = ::operator_new(0x18);
  if (pFVar4 != (FFieldSystemMetaDataCulling *)0x0) {
    pFVar4->_padding_ = (longlong)&___7FFieldSystemMetaDataCulling__6B_;
    pFVar4->CullingIndices = param_9;
    pFVar4->bCullingActive = false;
    pFVar6 = pFVar4;
  }
  if (pTVar1 == (TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_>
                 *)&local_28) {
    if (pFVar6 == (FFieldSystemMetaDataCulling *)0x0) goto LAB_143f45432;
    puVar5 = (undefined8 *)pFVar6->_padding_;
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar6;
    if (pFVar4 == (FFieldSystemMetaDataCulling *)0x0) goto LAB_143f45432;
    puVar5 = (undefined8 *)pFVar4->_padding_;
    pFVar6 = pFVar4;
  }
  (*(code *)*puVar5)(pFVar6,1);
LAB_143f45432:
  param_6 = (TArray<float,TSizedDefaultAllocator<32>_> *)pTVar1->Ptr;
  local_20 = &param_4;
  param_4._0_4_ = 4;
  local_18 = &param_6;
  TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_FFieldSystemMetaData::EMetaType_&&,FFieldSystemMetaData_*_&&>_>
            (&this->MetaData,
             (TPairInitializer<FFieldSystemMetaData::EMetaType_&&,FFieldSystemMetaData_*_&&> *)
             &param_5,(bool *)&local_20);
  return this;
}

// FFieldContext @ 1440cb1a0

FFieldContext * __thiscall
FFieldContext::FFieldContext
          (FFieldContext *this,FFieldExecutionDatas *param_1,
          TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
          *param_2,double param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> *pTVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  FFieldSystemMetaDataCulling *pFVar7;
  code *pcVar8;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *pTVar9;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *pTVar10;
  bool bVar11;
  FFieldContext *pFVar12;
  FFieldSystemMetaDataCulling *pFVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  TKeyInitializer<FFieldSystemMetaData::EMetaType_const_&> local_res10;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *local_res18;
  undefined4 local_res20 [2];
  undefined1 local_114 [4];
  longlong local_110;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *local_108;
  FFieldSystemMetaDataCulling *local_100;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined4 *local_98;
  FFieldSystemMetaDataCulling **local_90;
  undefined8 local_88 [4];
  undefined4 local_64;
  
  iVar4 = (param_1->SampleIndices).ArrayNum;
  (this->SampleIndices).ElementArray = &param_1->SampleIndices;
  iVar19 = 0;
  (this->SampleIndices).ArrayOffset = 0;
  (this->SampleIndices).ArrayNum = iVar4;
  local_res18 = param_2;
  if (((param_1->SampleIndices).ArrayNum < iVar4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                          ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FFieldContext *)(*pcVar8)();
    return pFVar12;
  }
  iVar4 = (param_1->SamplePositions).ArrayNum;
  (this->SamplePositions).ElementArray = &param_1->SamplePositions;
  (this->SamplePositions).ArrayOffset = 0;
  (this->SamplePositions).ArrayNum = iVar4;
  if (((param_1->SamplePositions).ArrayNum < iVar4) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                          ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FFieldContext *)(*pcVar8)();
    return pFVar12;
  }
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  puVar1 = &param_2->field_0x10;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  uStack_ec = 1;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  *(undefined4 *)&(this->MetaData).field_0x48 = 0;
  this->VectorResults = param_1->VectorResults + 1;
  this->ScalarResults = param_1->ScalarResults + 1;
  this->IntegerResults = param_1->IntegerResults + 1;
  local_108 = param_1->IndexResults;
  this->TimeSeconds = param_3;
  this->IndexResults = param_1->IndexResults + 1;
  (this->CullingData).Ptr = (FFieldSystemMetaDataCulling *)0x0;
  iVar4 = *(int *)&param_2->field_0x28;
  iStack_dc = 0;
  local_d8 = iVar19;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    local_d8 = 0;
    iVar19 = 0;
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      local_d8 = local_d8 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_dc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1440cb36e;
      uVar18 = puVar21[lVar15 + 1];
    }
    uStack_ec = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_ec * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_dc = local_d8 + -1 + (int)lVar15;
    if (iVar4 < iStack_dc) {
      iStack_dc = iVar4;
    }
  }
LAB_1440cb36e:
  uVar18 = *(uint *)&param_2->field_0x28;
  uStack_d4 = local_64;
  iStack_d0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_e0 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_ec,iVar19);
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_c0._28_4_ = local_64;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = param_2;
  iStack_f0 = iVar19;
  local_e8 = puVar1;
  local_c8 = param_2;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FFieldContext *)(*pcVar8)();
    return pFVar12;
  }
  pTVar9 = local_res18;
  uVar5 = *(uint *)&param_2->field_0x28;
  if (uVar18 != uVar5) {
    puVar20 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1440cb470;
      uVar18 = *(uint *)(puVar20 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar18 = (int)lVar15 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_1440cb470:
  while( true ) {
    pTVar10 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c0.CurrentBitIndex == uVar18) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar9))
    break;
    local_110 = *(longlong *)pTVar10;
    uVar6 = *(undefined8 *)(local_110 + 8 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
    local_110 = local_110 + (longlong)TStack_c0.CurrentBitIndex * 0x18;
    TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<enum_FFieldSystemMetaData::EMetaType_const_&>_>
              (&this->MetaData,&local_res10,(bool *)&local_110);
    *(undefined8 *)(*(longlong *)&this->MetaData + 8 + (longlong)(int)local_res10.Key * 0x18) =
         uVar6;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  pFVar13 = ::operator_new(0x18);
  if (pFVar13 == (FFieldSystemMetaDataCulling *)0x0) {
    pFVar13 = (FFieldSystemMetaDataCulling *)0x0;
  }
  else {
    pFVar13->bCullingActive = false;
    pFVar13->_padding_ = (longlong)&___7FFieldSystemMetaDataCulling__6B_;
    pFVar13->CullingIndices = local_108;
  }
  pTVar3 = &this->CullingData;
  if (pTVar3 == (TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_>
                 *)local_88) {
    if (pFVar13 == (FFieldSystemMetaDataCulling *)0x0) goto LAB_1440cb549;
    puVar14 = (undefined8 *)pFVar13->_padding_;
  }
  else {
    pFVar7 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar13;
    if (pFVar7 == (FFieldSystemMetaDataCulling *)0x0) goto LAB_1440cb549;
    puVar14 = (undefined8 *)pFVar7->_padding_;
    pFVar13 = pFVar7;
  }
  (*(code *)*puVar14)(pFVar13,1);
LAB_1440cb549:
  local_100 = pTVar3->Ptr;
  local_98 = local_res20;
  local_res20[0] = 4;
  local_90 = &local_100;
  TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_FFieldSystemMetaData::EMetaType_&&,FFieldSystemMetaData_*_&&>_>
            (&this->MetaData,
             (TPairInitializer<FFieldSystemMetaData::EMetaType_&&,FFieldSystemMetaData_*_&&> *)
             local_114,(bool *)&local_98);
  return this;
}

