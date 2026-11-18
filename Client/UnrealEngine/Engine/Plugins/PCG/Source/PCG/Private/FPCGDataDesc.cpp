// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 26

// FPCGDataDesc @ 149737910

FPCGDataDesc * __thiscall FPCGDataDesc::FPCGDataDesc(FPCGDataDesc *this,FPCGDataDesc *param_1)

{
  EPCGElementDimension EVar1;
  ForElementType<int> FVar2;
  undefined8 uVar3;
  
  (this->Type).Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Type).Ids.AllocatorInstance.Data = (param_1->Type).Ids.AllocatorInstance.Data;
  (param_1->Type).Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Type).Ids.ArrayNum = (param_1->Type).Ids.ArrayNum;
  (this->Type).Ids.ArrayMax = (param_1->Type).Ids.ArrayMax;
  (param_1->Type).Ids.ArrayNum = 0;
  (param_1->Type).Ids.ArrayMax = 0;
  (this->Type).CustomSubtype = (param_1->Type).CustomSubtype;
  uVar3 = *(undefined8 *)((longlong)&(param_1->ElementCount).field0_0x0 + 8);
  *(undefined8 *)&(this->ElementCount).field0_0x0 =
       *(undefined8 *)&(param_1->ElementCount).field0_0x0;
  *(undefined8 *)((longlong)&(this->ElementCount).field0_0x0 + 8) = uVar3;
  EVar1 = param_1->ElementDimension;
  (this->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ElementDimension = EVar1;
  (this->AttributeDescs).AllocatorInstance.Data = (param_1->AttributeDescs).AllocatorInstance.Data;
  (param_1->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeDescs).ArrayNum = (param_1->AttributeDescs).ArrayNum;
  (this->AttributeDescs).ArrayMax = (param_1->AttributeDescs).ArrayMax;
  (param_1->AttributeDescs).ArrayNum = 0;
  (param_1->AttributeDescs).ArrayMax = 0;
  this->AllocatedPointProperties = param_1->AllocatedPointProperties;
  (this->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  if ((param_1->TagStringKeys).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
    memmove(&this->TagStringKeys,&param_1->TagStringKeys,0x10);
  }
  FVar2 = (this->TagStringKeys).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->TagStringKeys).AllocatorInstance.SecondaryData =
       (param_1->TagStringKeys).AllocatorInstance.SecondaryData;
  (param_1->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->TagStringKeys).ArrayNum = (param_1->TagStringKeys).ArrayNum;
  (this->TagStringKeys).ArrayMax = (param_1->TagStringKeys).ArrayMax;
  (param_1->TagStringKeys).ArrayNum = 0;
  (param_1->TagStringKeys).ArrayMax = 4;
  return this;
}

// FPCGDataDesc @ 1497379f0

FPCGDataDesc * __thiscall FPCGDataDesc::FPCGDataDesc(FPCGDataDesc *this,FPCGDataDesc *param_1)

{
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPCGKernelAttributeDesc *pFVar4;
  undefined8 uVar5;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->Type,&param_1->Type);
  uVar5 = *(undefined8 *)((longlong)&(param_1->ElementCount).field0_0x0 + 8);
  pTVar1 = &this->AttributeDescs;
  *(undefined8 *)&(this->ElementCount).field0_0x0 =
       *(undefined8 *)&(param_1->ElementCount).field0_0x0;
  *(undefined8 *)((longlong)&(this->ElementCount).field0_0x0 + 8) = uVar5;
  this->ElementDimension = param_1->ElementDimension;
  piVar2 = &(this->AttributeDescs).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->AttributeDescs).ArrayNum;
  pFVar4 = (FPCGKernelAttributeDesc *)(param_1->AttributeDescs).AllocatorInstance.Data;
  (this->AttributeDescs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  this->AllocatedPointProperties = param_1->AllocatedPointProperties;
  (this->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  _Src = (param_1->TagStringKeys).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->TagStringKeys).ArrayNum;
  (this->TagStringKeys).ArrayNum = iVar3;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = (ForElementType<int>)&param_1->TagStringKeys;
  }
  piVar2 = &(this->TagStringKeys).ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar3,0,&(this->TagStringKeys).AllocatorInstance,iVar3,piVar2);
    _Dst = (this->TagStringKeys).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)&this->TagStringKeys;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// operator= @ 14973f440

FPCGDataDesc * __thiscall FPCGDataDesc::operator=(FPCGDataDesc *this,FPCGDataDesc *param_1)

{
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<int> FVar4;
  undefined8 uVar5;
  
  if (this != param_1) {
    pFVar3 = (this->Type).Ids.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Type).Ids.AllocatorInstance.Data = (param_1->Type).Ids.AllocatorInstance.Data;
    (param_1->Type).Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Type).Ids.ArrayNum = (param_1->Type).Ids.ArrayNum;
    (this->Type).Ids.ArrayMax = (param_1->Type).Ids.ArrayMax;
    (param_1->Type).Ids.ArrayNum = 0;
    (param_1->Type).Ids.ArrayMax = 0;
  }
  pTVar1 = &param_1->AttributeDescs;
  (this->Type).CustomSubtype = (param_1->Type).CustomSubtype;
  pTVar2 = &this->AttributeDescs;
  uVar5 = *(undefined8 *)((longlong)&(param_1->ElementCount).field0_0x0 + 8);
  *(undefined8 *)&(this->ElementCount).field0_0x0 =
       *(undefined8 *)&(param_1->ElementCount).field0_0x0;
  *(undefined8 *)((longlong)&(this->ElementCount).field0_0x0 + 8) = uVar5;
  this->ElementDimension = param_1->ElementDimension;
  if (pTVar2 != pTVar1) {
    DestructItems<FPCGKernelAttributeDesc,int>
              ((FPCGKernelAttributeDesc *)(pTVar2->AllocatorInstance).Data,
               (this->AttributeDescs).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AttributeDescs).ArrayNum = (param_1->AttributeDescs).ArrayNum;
    (this->AttributeDescs).ArrayMax = (param_1->AttributeDescs).ArrayMax;
    (param_1->AttributeDescs).ArrayNum = 0;
    (param_1->AttributeDescs).ArrayMax = 0;
  }
  this->AllocatedPointProperties = param_1->AllocatedPointProperties;
  if (&this->TagStringKeys != &param_1->TagStringKeys) {
    if ((param_1->TagStringKeys).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
      memmove(&this->TagStringKeys,&param_1->TagStringKeys,0x10);
    }
    FVar4 = (this->TagStringKeys).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (this->TagStringKeys).AllocatorInstance.SecondaryData =
         (param_1->TagStringKeys).AllocatorInstance.SecondaryData;
    (param_1->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    (this->TagStringKeys).ArrayNum = (param_1->TagStringKeys).ArrayNum;
    (this->TagStringKeys).ArrayMax = (param_1->TagStringKeys).ArrayMax;
    (param_1->TagStringKeys).ArrayNum = 0;
    (param_1->TagStringKeys).ArrayMax = 4;
  }
  return this;
}

// FPCGDataDesc @ 1497de680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataDesc * __thiscall
FPCGDataDesc::FPCGDataDesc(FPCGDataDesc *this,FPCGTaggedData *param_1,UPCGDataBinding *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  UPCGData *pUVar5;
  ForElementType<int> FVar6;
  code *pcVar7;
  int iVar8;
  TIntVector4<int> TVar9;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FPCGDataDesc *pFVar15;
  FPCGDataTypeBaseId *pFVar16;
  TIntVector4<int> *pTVar17;
  FPCGDataTypeIdentifier *this_00;
  ForElementType<int> FVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  uint local_res20 [2];
  int local_148 [2];
  undefined1 local_140 [48];
  ForAnyElementType local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  uchar auStack_f8 [4];
  int iStack_f4;
  int local_f0;
  uchar auStack_ec [4];
  int iStack_e8;
  undefined4 uStack_e4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FPCGDataTypeIdentifier local_b0;
  FPCGDataTypeIdentifier local_98;
  TIntVector4<int> local_80 [2];
  uchar local_54 [20];
  
  iVar20 = 0;
  local_res20[0] = 0;
  bVar12 = false;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->Type,Point);
  TVar9 = UE::Math::TIntVector4<int>::ZeroValue;
  this->ElementDimension = One;
  piVar3 = &(this->TagStringKeys).ArrayMax;
  this->AllocatedPointProperties = None;
  (this->ElementCount).field0_0x0._s_0 = (TIntVector4<int>_u_0_s_0)TVar9.field0_0x0;
  (this->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeDescs).ArrayNum = 0;
  (this->AttributeDescs).ArrayMax = 0;
  (this->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->TagStringKeys).ArrayNum = 0;
  *piVar3 = 4;
  if (((param_1->Data).Data.field0_0x0.DebugPtr == (UPCGData *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTaggedData.Data",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                          ,0x100,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar15 = (FPCGDataDesc *)(*pcVar7)();
    return pFVar15;
  }
  pFVar16 = (FPCGDataTypeBaseId *)
            (**(code **)(((param_1->Data).Data.field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier((FPCGDataTypeIdentifier *)local_140,pFVar16);
  if (this != (FPCGDataDesc *)local_140) {
    pFVar4 = (this->Type).Ids.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (this->Type).Ids.AllocatorInstance.Data = (FScriptContainerElement *)local_140._0_8_;
    (this->Type).Ids.ArrayNum = local_140._8_4_;
    (this->Type).Ids.ArrayMax = local_140._12_4_;
    local_140._8_4_ = 0;
    local_140._12_4_ = 0;
    local_140._0_8_ = (FScriptContainerElement *)0x0;
  }
  (this->Type).CustomSubtype = local_140._16_4_;
  if ((FScriptContainerElement *)local_140._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_140._0_8_);
  }
  pTVar17 = PCGComputeHelpers::GetElementCount(local_80,(param_1->Data).Data.field0_0x0.DebugPtr);
  uVar13 = 1;
  iVar14 = (pTVar17->field0_0x0)._s_0.Y;
  iVar21 = (pTVar17->field0_0x0)._s_0.Z;
  iVar8 = (pTVar17->field0_0x0)._s_0.W;
  (this->ElementCount).field0_0x0._s_0.X = (pTVar17->field0_0x0)._s_0.X;
  (this->ElementCount).field0_0x0._s_0.Y = iVar14;
  (this->ElementCount).field0_0x0._s_0.Z = iVar21;
  (this->ElementCount).field0_0x0._s_0.W = iVar8;
  pUVar5 = (param_1->Data).Data.field0_0x0.DebugPtr;
  if (pUVar5 == (UPCGData *)0x0) {
    bVar11 = false;
  }
  else {
    pFVar16 = (FPCGDataTypeBaseId *)(**(code **)(pUVar5->_padding_ + 0x2b8))();
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_b0,pFVar16);
    this_00 = FPCGDataTypeIdentifier::operator&(&local_b0,&local_98,BaseTexture);
    bVar11 = FPCGDataTypeIdentifier::operator!(this_00);
    bVar11 = !bVar11;
    if (local_98.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Ids.AllocatorInstance.Data);
    }
    bVar12 = true;
  }
  if ((bVar12) && (local_b0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b0.Ids.AllocatorInstance.Data);
  }
  this->ElementDimension = bVar11;
  uVar24 = *(int *)&(param_1->Tags).Elements.field_0x8 -
           *(int *)&(param_1->Tags).Elements.field_0x34;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if ((this->TagStringKeys).ArrayMax < (int)uVar24) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar24,&(this->TagStringKeys).AllocatorInstance,(this->TagStringKeys).ArrayNum,
               piVar3);
  }
  iVar14 = *(int *)&(param_1->Tags).Elements.field_0x28;
  pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Tags).Elements.field_0x10;
  local_140._32_8_ = &param_1->Tags;
  local_f0 = 0;
  iStack_f4 = iVar20;
  if (iVar14 != 0) {
    puVar26 = *(uint **)&(param_1->Tags).Elements.field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)pTVar27;
    }
    uVar24 = *puVar26;
    local_f0 = 0;
    iVar20 = 0;
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar20;
      local_f0 = local_f0 + 0x20;
      iVar20 = iVar20 + 1;
      iStack_f4 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1497de8df;
      uVar24 = puVar26[lVar19 + 1];
    }
    uVar13 = -uVar24 & uVar24;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_140._24_4_ = (undefined4)lVar19;
    iStack_f4 = local_f0 + -1 + local_140._24_4_;
    if (iVar14 < iStack_f4) {
      iStack_f4 = iVar14;
    }
  }
LAB_1497de8df:
  auStack_ec[0] = local_54[0];
  auStack_ec[1] = local_54[1];
  auStack_ec[2] = local_54[2];
  auStack_ec[3] = local_54[3];
  iStack_e8 = *(int *)&(param_1->Tags).Elements.field_0x8 -
              *(int *)&(param_1->Tags).Elements.field_0x34;
  uVar24 = *(uint *)&(param_1->Tags).Elements.field_0x28;
  TStack_d8._padding_ = CONCAT44(uVar13,iVar20);
  auStack_f8[0] = 0xff;
  auStack_f8[1] = 0xff;
  auStack_f8[2] = 0xff;
  auStack_f8[3] = 0xff;
  uVar23 = uVar24 & 0xffffffe0;
  TStack_d8.CurrentBitIndex = iStack_f4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar24 >> 5;
  TStack_d8._28_1_ = local_54[0];
  TStack_d8._29_1_ = local_54[1];
  TStack_d8._30_1_ = local_54[2];
  TStack_d8._31_1_ = local_54[3];
  TStack_d8.BaseBitIndex = local_f0;
  uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
  local_140._40_8_ = pTVar27;
  local_110.Data = (FScriptContainerElement *)local_140._32_8_;
  iStack_108 = iVar20;
  uStack_104 = uVar13;
  local_100 = (undefined1 *)pTVar27;
  local_e0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_140._32_8_;
  TStack_d8.Array = pTVar27;
  if ((((int)uVar24 < 0) || (iVar14 < (int)uVar24)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    pFVar15 = (FPCGDataDesc *)(*pcVar7)();
    return pFVar15;
  }
  uVar13 = *(uint *)&(param_1->Tags).Elements.field_0x28;
  if (uVar24 != uVar13) {
    puVar25 = *(undefined1 **)&(param_1->Tags).Elements.field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = (undefined1 *)pTVar27;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar21 * 4);
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar21;
      uVar23 = uVar23 + 0x20;
      iVar21 = iVar21 + 1;
      uVar24 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_1497de9de;
      uVar24 = *(uint *)(puVar25 + lVar19 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_140._28_4_ = (undefined4)lVar19;
    uVar24 = local_140._28_4_ + -1 + uVar23;
    if ((int)uVar13 < (int)uVar24) {
      uVar24 = uVar13;
    }
  }
LAB_1497de9de:
  do {
    pTVar10 = local_e0;
    if (*(int *)&(local_e0->Elements).field_0x8 - *(int *)&(local_e0->Elements).field_0x34 !=
        (int)uStack_b8) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d8.CurrentBitIndex == uVar24) && (TStack_d8.Array == pTVar27)) &&
       (pTVar10 == (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_140._32_8_
       )) {
      InitializeAttributeDescs(this,(param_1->Data).Data.field0_0x0.DebugPtr,param_2);
      return this;
    }
    puVar1 = (undefined8 *)
             (*(longlong *)&pTVar10->Elements + (longlong)TStack_d8.CurrentBitIndex * 0x18);
    if ((param_2->bTablesInitialized == (atomic<bool>)0x0) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8122861073268211622>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                            ,0x5a,"bTablesInitialized"), bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar15 = (FPCGDataDesc *)(*pcVar7)();
      return pFVar15;
    }
    pFVar4 = (param_2->StringTable).AllocatorInstance.Data;
    iVar20 = (param_2->StringTable).ArrayNum;
    for (pFVar22 = pFVar4; pFVar22 != pFVar4 + (longlong)iVar20 * 0x10; pFVar22 = pFVar22 + 0x10) {
      iVar14 = *(int *)(pFVar22 + 8);
      iVar21 = *(int *)(puVar1 + 1);
      if (iVar14 == iVar21) {
        if (1 < iVar14) {
          iVar14 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar22,(wchar_t *)*puVar1);
          bVar12 = iVar14 == 0;
          goto LAB_1497deab3;
        }
LAB_1497deae5:
        local_148[0] = (int)((longlong)pFVar22 - (longlong)pFVar4 >> 4);
        if (local_148[0] != -1) {
          FVar6 = (this->TagStringKeys).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<int>)&this->TagStringKeys;
          if (FVar6 != (ForElementType<int>)0x0) {
            FVar18 = FVar6;
          }
          if ((ulonglong)FVar18 <= local_148) {
            FVar18 = (ForElementType<int>)&this->TagStringKeys;
            if (FVar6 != (ForElementType<int>)0x0) {
              FVar18 = FVar6;
            }
            if ((local_148 <
                 (int *)((longlong)FVar18 + (longlong)(this->TagStringKeys).ArrayMax * 4)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              pFVar15 = (FPCGDataDesc *)(*pcVar7)();
              return pFVar15;
            }
          }
          iVar20 = (this->TagStringKeys).ArrayNum;
          if (iVar20 == (this->TagStringKeys).ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&(this->TagStringKeys).AllocatorInstance,
                                &(this->TagStringKeys).ArrayMax);
          }
          (this->TagStringKeys).ArrayNum = iVar20 + 1;
          FVar6 = (this->TagStringKeys).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<int>)&this->TagStringKeys;
          if (FVar6 != (ForElementType<int>)0x0) {
            FVar18 = FVar6;
          }
          *(int *)((longlong)FVar18 + (longlong)iVar20 * 4) = local_148[0];
        }
        goto LAB_1497deacb;
      }
      bVar12 = iVar14 + iVar21 == 1;
LAB_1497deab3:
      if (bVar12) goto LAB_1497deae5;
    }
    local_148[0] = -1;
LAB_1497deacb:
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)local_140._40_8_;
  } while( true );
}

// FPCGDataDesc @ 1497dec20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGDataDesc * __thiscall
FPCGDataDesc::FPCGDataDesc(FPCGDataDesc *this,FPCGDataTypeIdentifier *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier *this_01;
  FPCGDataTypeIdentifier local_38;
  FPCGDataTypeIdentifier local_20;
  
  this_00 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_20,param_1);
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->Type,this_00);
  (this->ElementCount).field0_0x0._s_0.X = param_2;
  *(undefined8 *)((longlong)&(this->ElementCount).field0_0x0 + 4) = 0;
  (this->ElementCount).field0_0x0._s_0.W = 0;
  this->ElementDimension = One;
  (this->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeDescs).ArrayNum = 0;
  (this->AttributeDescs).ArrayMax = 0;
  (this->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->AllocatedPointProperties = None;
  (this->TagStringKeys).ArrayNum = 0;
  (this->TagStringKeys).ArrayMax = 4;
  this_01 = FPCGDataTypeIdentifier::operator&(this_00,&local_38,BaseTexture);
  bVar2 = FPCGDataTypeIdentifier::operator!(this_01);
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  this->ElementDimension = !bVar2;
  InitializeAttributeDescs(this,(UPCGData *)0x0,(UPCGDataBinding *)0x0);
  pFVar1 = (this_00->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FPCGDataDesc @ 1497ded00

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGDataDesc * __thiscall
FPCGDataDesc::FPCGDataDesc
          (FPCGDataDesc *this,FPCGDataTypeIdentifier *param_1,TIntPoint<int> param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier *this_01;
  FPCGDataTypeIdentifier local_38;
  FPCGDataTypeIdentifier local_20;
  
  this_00 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_20,param_1);
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->Type,this_00);
  (this->ElementCount).field0_0x0._s_0.X = param_2.field0_0x0._0_4_;
  (this->ElementCount).field0_0x0._s_0.Y = param_2.field0_0x0._4_4_;
  *(undefined8 *)((longlong)&(this->ElementCount).field0_0x0 + 8) = 0;
  this->ElementDimension = One;
  (this->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeDescs).ArrayNum = 0;
  (this->AttributeDescs).ArrayMax = 0;
  (this->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->AllocatedPointProperties = None;
  (this->TagStringKeys).ArrayNum = 0;
  (this->TagStringKeys).ArrayMax = 4;
  this_01 = FPCGDataTypeIdentifier::operator&(this_00,&local_38,BaseTexture);
  bVar2 = FPCGDataTypeIdentifier::operator!(this_01);
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  this->ElementDimension = !bVar2;
  InitializeAttributeDescs(this,(UPCGData *)0x0,(UPCGDataBinding *)0x0);
  pFVar1 = (this_00->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FPCGDataDesc @ 1497dede0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGDataDesc * __thiscall
FPCGDataDesc::FPCGDataDesc
          (FPCGDataDesc *this,FPCGDataTypeIdentifier *param_1,TIntVector3<int> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier *this_01;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeIdentifier local_30;
  
  iVar1 = (param_2->field0_0x0)._s_0.Y;
  iVar2 = (param_2->field0_0x0)._s_0.Z;
  this_00 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_30,param_1);
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->Type,this_00);
  (this->ElementCount).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->ElementCount).field0_0x0._s_0.Y = iVar1;
  (this->ElementCount).field0_0x0._s_0.Z = iVar2;
  (this->ElementCount).field0_0x0._s_0.W = 0;
  this->ElementDimension = One;
  (this->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeDescs).ArrayNum = 0;
  (this->AttributeDescs).ArrayMax = 0;
  (this->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->AllocatedPointProperties = None;
  (this->TagStringKeys).ArrayNum = 0;
  (this->TagStringKeys).ArrayMax = 4;
  this_01 = FPCGDataTypeIdentifier::operator&(this_00,&local_48,BaseTexture);
  bVar4 = FPCGDataTypeIdentifier::operator!(this_01);
  if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Ids.AllocatorInstance.Data);
  }
  this->ElementDimension = !bVar4;
  InitializeAttributeDescs(this,(UPCGData *)0x0,(UPCGDataBinding *)0x0);
  pFVar3 = (this_00->Ids).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->Ids).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// FPCGDataDesc @ 1497deed0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGDataDesc * __thiscall
FPCGDataDesc::FPCGDataDesc
          (FPCGDataDesc *this,FPCGDataTypeIdentifier *param_1,TIntVector4<int> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier local_28;
  
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->Type,param_1);
  uVar2 = *(undefined8 *)&param_2->field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  this->ElementDimension = One;
  this->AllocatedPointProperties = None;
  *(undefined8 *)&(this->ElementCount).field0_0x0 = uVar2;
  *(undefined8 *)((longlong)&(this->ElementCount).field0_0x0 + 8) = uVar3;
  (this->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeDescs).ArrayNum = 0;
  (this->AttributeDescs).ArrayMax = 0;
  (this->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->TagStringKeys).ArrayNum = 0;
  (this->TagStringKeys).ArrayMax = 4;
  this_00 = FPCGDataTypeIdentifier::operator&(param_1,&local_28,BaseTexture);
  bVar4 = FPCGDataTypeIdentifier::operator!(this_00);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  this->ElementDimension = !bVar4;
  InitializeAttributeDescs(this,(UPCGData *)0x0,(UPCGDataBinding *)0x0);
  pFVar1 = (param_1->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// AddAttribute @ 1497eac50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGDataDesc::AddAttribute
          (FPCGDataDesc *this,FPCGKernelAttributeKey *param_1,UPCGDataBinding *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar13;
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *this_01;
  longlong lVar14;
  
  if ((param_2 == (UPCGDataBinding *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBinding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                         ,0x12e,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2->bTablesInitialized == (atomic<bool>)0x0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8122861073268211628>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                         ,0x54,"bTablesInitialized"), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = FPCGKernelAttributeTable::GetAttributeId(&param_2->AttributeTable,param_1);
  if (iVar10 != -1) {
    uVar13 = (this->AttributeDescs).ArrayNum - 1;
    if (-1 < (int)uVar13) {
      this_01 = &this->AttributeDescs;
      lVar14 = (longlong)(int)uVar13 * 0x78;
      do {
        uVar11 = 0;
        if ((int)uVar13 < (this->AttributeDescs).ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this_01->AllocatorInstance).Data;
        if (((*(FName *)(pFVar4 + lVar14 + 8) == (param_1->Identifier).Name) &&
            (pFVar4[lVar14 + 0x10] ==
             (FScriptContainerElement)(param_1->Identifier).MetadataDomain.Flag)) &&
           (*(int *)(pFVar4 + lVar14 + 0x14) == (param_1->Identifier).MetadataDomain.CustomFlag)) {
          uVar11 = 0;
          if ((int)uVar13 < (this->AttributeDescs).ArrayNum) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (this_01,uVar13);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,&this_01->AllocatorInstance,(this->AttributeDescs).ArrayNum,
                     &(this->AttributeDescs).ArrayMax);
        }
        lVar14 = lVar14 + -0x78;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    iVar12 = (this->AttributeDescs).ArrayNum;
    piVar1 = &(this->AttributeDescs).ArrayMax;
    FVar3 = (FScriptContainerElement)param_1->Type;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,&(this->AttributeDescs).AllocatorInstance,piVar1);
      (this->AttributeDescs).ArrayNum = iVar12;
    }
    (this->AttributeDescs).ArrayNum = iVar12 + 1;
    FVar7 = (param_1->Identifier).Name;
    FVar8 = *(FName *)&(param_1->Identifier).MetadataDomain;
    FVar2 = (param_1->Identifier).MetadataDomain.DebugName;
    lVar14 = (longlong)iVar12 * 0x78;
    pFVar4 = (this->AttributeDescs).AllocatorInstance.Data;
    *(int *)(pFVar4 + lVar14) = iVar10;
    *(FName *)(pFVar4 + lVar14 + 8) = FVar7;
    ((FName *)(pFVar4 + lVar14 + 8))[1] = FVar8;
    pFVar4[lVar14 + 0x20] = FVar3;
    *(FName *)(pFVar4 + lVar14 + 0x18) = FVar2;
    *(undefined8 *)(pFVar4 + lVar14 + 0x30) = 0;
    *(undefined8 *)(pFVar4 + lVar14 + 0x38) = 0;
    *(undefined8 *)(pFVar4 + lVar14 + 0x40) = 0;
    *(undefined4 *)(pFVar4 + lVar14 + 0x48) = 0;
    *(undefined8 *)(pFVar4 + lVar14 + 0x50) = 0;
    *(undefined8 *)(pFVar4 + lVar14 + 0x58) = 0;
    pFVar4[lVar14 + 0x60] = (FScriptContainerElement)0x0;
    *(undefined ***)(pFVar4 + lVar14 + 0x28) = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_
    ;
    this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar4 + lVar14 + 0x68);
    (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this_00->ArrayNum = 0;
    this_00->ArrayMax = 0;
    if (param_3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(this_00,param_3);
    }
  }
  DestructItems<FString,int>
            (*(FString **)&(param_1->Name).field_0x28,*(int *)&(param_1->Name).field_0x30);
  pvVar5 = *(void **)&(param_1->Name).field_0x28;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  return;
}

// AddElementCount @ 1497eb290

void __thiscall FPCGDataDesc::AddElementCount(FPCGDataDesc *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ElementDimension == One) {
    (this->ElementCount).field0_0x0._s_0.X = (this->ElementCount).field0_0x0._s_0.X + param_1;
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_498753438025252505>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                     ,0x167,"ElementDimension == EPCGElementDimension::One");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->ElementCount).field0_0x0._s_0.X = (this->ElementCount).field0_0x0._s_0.X + param_1;
  return;
}

// AddElementCount @ 1497eb300

void __thiscall FPCGDataDesc::AddElementCount(FPCGDataDesc *this,TIntPoint<int> param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iStackX_14;
  
  if (this->ElementDimension != Two) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_498753438025252499>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                       ,0x16d,"ElementDimension == EPCGElementDimension::Two");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ElementCount).field0_0x0._s_0.X =
       (this->ElementCount).field0_0x0._s_0.X + param_1.field0_0x0._0_4_;
  iStackX_14 = param_1.field0_0x0._4_4_;
  piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
  *piVar1 = *piVar1 + iStackX_14;
  return;
}

// AddElementCount @ 1497eb370

void __thiscall FPCGDataDesc::AddElementCount(FPCGDataDesc *this,TIntVector3<int> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->ElementDimension != Three) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_498753438025252492>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                       ,0x174,"ElementDimension == EPCGElementDimension::Three");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ElementCount).field0_0x0._s_0.X =
       (this->ElementCount).field0_0x0._s_0.X + (param_1->field0_0x0)._s_0.X;
  piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
  *piVar1 = *piVar1 + (param_1->field0_0x0)._s_0.Y;
  piVar1 = &(this->ElementCount).field0_0x0._s_0.Z;
  *piVar1 = *piVar1 + (param_1->field0_0x0)._s_0.Z;
  return;
}

// AddElementCount @ 1497eb3e0

void __thiscall FPCGDataDesc::AddElementCount(FPCGDataDesc *this,TIntVector4<int> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->ElementDimension != Four) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_498753438025252484>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                       ,0x17c,"ElementDimension == EPCGElementDimension::Four");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ElementCount).field0_0x0._s_0.X =
       (this->ElementCount).field0_0x0._s_0.X + (param_1->field0_0x0)._s_0.X;
  piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
  *piVar1 = *piVar1 + (param_1->field0_0x0)._s_0.Y;
  piVar1 = &(this->ElementCount).field0_0x0._s_0.Z;
  *piVar1 = *piVar1 + (param_1->field0_0x0)._s_0.Z;
  piVar1 = &(this->ElementCount).field0_0x0._s_0.W;
  *piVar1 = *piVar1 + (param_1->field0_0x0)._s_0.W;
  return;
}

// CombineElementCount @ 1497f1110

FPCGDataDesc * __thiscall
FPCGDataDesc::CombineElementCount
          (FPCGDataDesc *this,FPCGDataDesc *param_1,EPCGElementMultiplicity param_2)

{
  int *piVar1;
  EPCGElementDimension EVar2;
  int iVar3;
  
  EVar2 = this->ElementDimension;
  if (param_2 == Sum) {
    if (EVar2 == One) {
      EVar2 = param_1->ElementDimension;
      if (EVar2 != One) {
        if (EVar2 == Two) {
          (this->ElementCount).field0_0x0._s_0.X =
               (this->ElementCount).field0_0x0._s_0.X +
               (param_1->ElementCount).field0_0x0._s_0.Y * (param_1->ElementCount).field0_0x0._s_0.X
          ;
          return this;
        }
        if (EVar2 == Three) {
          (this->ElementCount).field0_0x0._s_0.X =
               (this->ElementCount).field0_0x0._s_0.X +
               (param_1->ElementCount).field0_0x0._s_0.Z * (param_1->ElementCount).field0_0x0._s_0.Y
               * (param_1->ElementCount).field0_0x0._s_0.X;
          return this;
        }
        if (EVar2 == Four) {
          (this->ElementCount).field0_0x0._s_0.X =
               (this->ElementCount).field0_0x0._s_0.X +
               (param_1->ElementCount).field0_0x0._s_0.W * (param_1->ElementCount).field0_0x0._s_0.Z
               * (param_1->ElementCount).field0_0x0._s_0.Y *
               (param_1->ElementCount).field0_0x0._s_0.X;
          return this;
        }
      }
      (this->ElementCount).field0_0x0._s_0.X =
           (this->ElementCount).field0_0x0._s_0.X + (param_1->ElementCount).field0_0x0._s_0.X;
      return this;
    }
    if (EVar2 == Two) {
      EVar2 = param_1->ElementDimension;
      (this->ElementCount).field0_0x0._s_0.X =
           (this->ElementCount).field0_0x0._s_0.X + (param_1->ElementCount).field0_0x0._s_0.X;
      if (EVar2 != One) {
        piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
        *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.Y;
        *(undefined8 *)((longlong)&(this->ElementCount).field0_0x0 + 8) = 0;
        return this;
      }
      piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
      *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.X;
      return this;
    }
    if (EVar2 != Three) {
      if (EVar2 != Four) {
        return this;
      }
      EVar2 = param_1->ElementDimension;
      (this->ElementCount).field0_0x0._s_0.X =
           (this->ElementCount).field0_0x0._s_0.X + (param_1->ElementCount).field0_0x0._s_0.X;
      if (EVar2 != One) {
        piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
        *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.Y;
        piVar1 = &(this->ElementCount).field0_0x0._s_0.Z;
        *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.Z;
        piVar1 = &(this->ElementCount).field0_0x0._s_0.W;
        *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.W;
        return this;
      }
      piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
      *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.X;
      piVar1 = &(this->ElementCount).field0_0x0._s_0.Z;
      *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.X;
      piVar1 = &(this->ElementCount).field0_0x0._s_0.W;
      *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.X;
      return this;
    }
    EVar2 = param_1->ElementDimension;
    (this->ElementCount).field0_0x0._s_0.X =
         (this->ElementCount).field0_0x0._s_0.X + (param_1->ElementCount).field0_0x0._s_0.X;
    if (EVar2 != One) {
      piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
      *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.Y;
      piVar1 = &(this->ElementCount).field0_0x0._s_0.Z;
      *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.Z;
      (this->ElementCount).field0_0x0._s_0.W = 0;
      return this;
    }
    piVar1 = &(this->ElementCount).field0_0x0._s_0.Y;
    *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.X;
    piVar1 = &(this->ElementCount).field0_0x0._s_0.Z;
    *piVar1 = *piVar1 + (param_1->ElementCount).field0_0x0._s_0.X;
    return this;
  }
  if (EVar2 == One) {
    EVar2 = param_1->ElementDimension;
    if (EVar2 != One) {
      if (EVar2 == Two) {
        (this->ElementCount).field0_0x0._s_0.X =
             (param_1->ElementCount).field0_0x0._s_0.Y * (param_1->ElementCount).field0_0x0._s_0.X *
             (this->ElementCount).field0_0x0._s_0.X;
        return this;
      }
      if (EVar2 == Three) {
        (this->ElementCount).field0_0x0._s_0.X =
             (param_1->ElementCount).field0_0x0._s_0.Z * (param_1->ElementCount).field0_0x0._s_0.Y *
             (param_1->ElementCount).field0_0x0._s_0.X * (this->ElementCount).field0_0x0._s_0.X;
        return this;
      }
      if (EVar2 == Four) {
        (this->ElementCount).field0_0x0._s_0.X =
             (param_1->ElementCount).field0_0x0._s_0.W * (param_1->ElementCount).field0_0x0._s_0.Z *
             (param_1->ElementCount).field0_0x0._s_0.Y * (param_1->ElementCount).field0_0x0._s_0.X *
             (this->ElementCount).field0_0x0._s_0.X;
        return this;
      }
    }
    (this->ElementCount).field0_0x0._s_0.X =
         (param_1->ElementCount).field0_0x0._s_0.X * (this->ElementCount).field0_0x0._s_0.X;
    return this;
  }
  if (EVar2 != Two) {
    if (EVar2 == Three) {
      if (param_1->ElementDimension == One) {
        UE::Math::TIntVector4<int>::operator*=
                  (&this->ElementCount,(param_1->ElementCount).field0_0x0._s_0.X);
        return this;
      }
      iVar3 = (this->ElementCount).field0_0x0._s_0.X * (param_1->ElementCount).field0_0x0._s_0.X;
      goto LAB_1497f1330;
    }
    if (EVar2 != Four) {
      return this;
    }
  }
  iVar3 = (param_1->ElementCount).field0_0x0._s_0.X;
  if (param_1->ElementDimension == One) {
    UE::Math::TIntVector4<int>::operator*=(&this->ElementCount,iVar3);
    return this;
  }
  iVar3 = iVar3 * (this->ElementCount).field0_0x0._s_0.X;
LAB_1497f1330:
  (this->ElementCount).field0_0x0._s_0.X = iVar3;
  (this->ElementCount).field0_0x0._s_0.Y =
       (this->ElementCount).field0_0x0._s_0.Y * (param_1->ElementCount).field0_0x0._s_0.Y;
  (this->ElementCount).field0_0x0._s_0.Z =
       (this->ElementCount).field0_0x0._s_0.Z * (param_1->ElementCount).field0_0x0._s_0.Z;
  (this->ElementCount).field0_0x0._s_0.W =
       (this->ElementCount).field0_0x0._s_0.W * (param_1->ElementCount).field0_0x0._s_0.W;
  return this;
}

// CombineElementCount @ 1497f1360

FPCGDataDesc * __cdecl
FPCGDataDesc::CombineElementCount
          (FPCGDataDesc *__return_storage_ptr__,FPCGDataDesc *param_1,FPCGDataDesc *param_2,
          EPCGElementMultiplicity param_3)

{
  FPCGDataDesc(__return_storage_ptr__,param_1);
  CombineElementCount(__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// ComputeTotalElementCount @ 1497f60b0

int __thiscall FPCGDataDesc::ComputeTotalElementCount(FPCGDataDesc *this)

{
  EPCGElementDimension EVar1;
  
  EVar1 = this->ElementDimension;
  if (EVar1 != One) {
    if (EVar1 == Two) {
      return (this->ElementCount).field0_0x0._s_0.Y * (this->ElementCount).field0_0x0._s_0.X;
    }
    if (EVar1 == Three) {
      return (this->ElementCount).field0_0x0._s_0.Z * (this->ElementCount).field0_0x0._s_0.Y *
             (this->ElementCount).field0_0x0._s_0.X;
    }
    if (EVar1 == Four) {
      return (this->ElementCount).field0_0x0._s_0.W * (this->ElementCount).field0_0x0._s_0.Z *
             (this->ElementCount).field0_0x0._s_0.Y * (this->ElementCount).field0_0x0._s_0.X;
    }
  }
  return (this->ElementCount).field0_0x0._s_0.X;
}

// ContainsAttribute @ 1497f6100

bool __thiscall FPCGDataDesc::ContainsAttribute(FPCGDataDesc *this,FPCGAttributeIdentifier *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement FStack_20;
  int iStack_1c;
  
  pFVar3 = (this->AttributeDescs).AllocatorInstance.Data;
  uVar1 = (param_1->MetadataDomain).Flag;
  uVar2 = (param_1->MetadataDomain).CustomFlag;
  pFVar4 = pFVar3 + (longlong)(this->AttributeDescs).ArrayNum * 0x78;
  if (pFVar3 != pFVar4) {
    do {
      if (((*(FName *)(pFVar3 + 8) == param_1->Name) &&
          (pFVar3[0x10] == (FScriptContainerElement)uVar1)) && (*(int *)(pFVar3 + 0x14) == uVar2))
      goto LAB_1497f614c;
      pFVar3 = pFVar3 + 0x78;
    } while (pFVar3 != pFVar4);
  }
  pFVar3 = (FScriptContainerElement *)0x0;
LAB_1497f614c:
  return pFVar3 != (FScriptContainerElement *)0x0;
}

// ContainsAttribute @ 1497f6160

bool __thiscall
FPCGDataDesc::ContainsAttribute
          (FPCGDataDesc *this,FPCGAttributeIdentifier *param_1,EPCGKernelAttributeType param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement FStack_60;
  int iStack_5c;
  
  pFVar5 = (this->AttributeDescs).AllocatorInstance.Data;
  uVar1 = (param_1->MetadataDomain).Flag;
  uVar2 = (param_1->MetadataDomain).CustomFlag;
  pFVar4 = pFVar5 + (longlong)(this->AttributeDescs).ArrayNum * 0x78;
  if (pFVar5 != pFVar4) {
    pFVar3 = pFVar5 + 0x10;
    do {
      if ((((pFVar3[0x10] == (FScriptContainerElement)param_2) &&
           (*(FName *)(pFVar3 + -8) == param_1->Name)) &&
          (*pFVar3 == (FScriptContainerElement)uVar1)) && (*(int *)(pFVar3 + 4) == uVar2)) {
        DestructItems<FString,int>((FString *)0x0,0);
        goto LAB_1497f61ce;
      }
      pFVar5 = pFVar5 + 0x78;
      pFVar3 = pFVar3 + 0x78;
    } while (pFVar5 != pFVar4);
  }
  DestructItems<FString,int>((FString *)0x0,0);
  pFVar5 = (FScriptContainerElement *)0x0;
LAB_1497f61ce:
  DestructItems<FString,int>((FString *)0x0,0);
  DestructItems<FString,int>((FString *)0x0,0);
  DestructItems<FString,int>((FString *)0x0,0);
  return pFVar5 != (FScriptContainerElement *)0x0;
}

// GetElementCountForAttribute @ 1498142b0

TIntVector4<int> * __thiscall
FPCGDataDesc::GetElementCountForAttribute
          (FPCGDataDesc *this,TIntVector4<int> *__return_storage_ptr__,
          FPCGKernelAttributeDesc *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = IsAttributeAllocated(this,param_1);
  if ((bVar2) &&
     (((param_1->AttributeKey).Identifier.MetadataDomain.Flag != PCGMetadataDomainID::Data.Flag ||
      ((param_1->AttributeKey).Identifier.MetadataDomain.CustomFlag !=
       PCGMetadataDomainID::Data.CustomFlag)))) {
    uVar1 = *(undefined8 *)((longlong)&(this->ElementCount).field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->ElementCount).field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 1;
  return __return_storage_ptr__;
}

// GetTagStringKeysMutable @ 14981ba80

TArrayView<int,int> * __thiscall
FPCGDataDesc::GetTagStringKeysMutable
          (FPCGDataDesc *this,TArrayView<int,int> *__return_storage_ptr__)

{
  TArrayView<int,int>::
  TArrayView<int,int><TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_&,TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
            (__return_storage_ptr__,&this->TagStringKeys);
  return __return_storage_ptr__;
}

// HasElementsMetadataDomainAttributes @ 14981dad0

bool __thiscall FPCGDataDesc::HasElementsMetadataDomainAttributes(FPCGDataDesc *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AttributeDescs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->AttributeDescs).ArrayNum * 0x78;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 0x78) {
    if ((0x1f < *(int *)pFVar1) &&
       ((pFVar1[0x10] != (FScriptContainerElement)PCGMetadataDomainID::Data.Flag ||
        (*(int *)(pFVar1 + 0x14) != PCGMetadataDomainID::Data.CustomFlag)))) goto LAB_14981db0d;
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14981db0d:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// InitializeAttributeDescs @ 14981e820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
FPCGDataDesc::InitializeAttributeDescs
          (FPCGDataDesc *this,UPCGData *param_1,UPCGDataBinding *param_2)

{
  IPCGAttributeAccessorKeys *pIVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FScriptContainerElement FVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  ForAnyElementType _Src;
  bool bVar18;
  int iVar19;
  EPCGPointNativeProperties EVar20;
  int iVar21;
  FPCGDataTypeIdentifier *pFVar22;
  UClass *pUVar23;
  UPCGMetadata *this_00;
  FPCGMetadataDomain *pFVar24;
  UEnum *this_01;
  FPCGMetadataDomain *pFVar25;
  longlong lVar26;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar27;
  EPCGMetadataDomainFlag EVar28;
  uint uVar29;
  uint uVar30;
  ForElementType<FSetElementId> FVar31;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  ulonglong uVar36;
  bool bVar37;
  undefined1 auStackY_308 [32];
  FScriptContainerElement local_2c7 [3];
  int local_2c4;
  UPCGMetadata *local_2c0;
  undefined1 local_2b8;
  undefined1 uStack_2b7;
  undefined1 uStack_2b6;
  undefined1 uStack_2b5;
  undefined1 uStack_2b4;
  undefined1 uStack_2b3;
  undefined1 uStack_2b2;
  undefined1 uStack_2b1;
  FPCGMetadataDomainID FStack_2b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a0;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_290;
  TArray<FPCGAttributeIdentifier,TSizedDefaultAllocator<32>_> local_280;
  int local_270 [2];
  undefined1 local_268 [16];
  FPCGAttributePropertySelector local_258;
  undefined1 local_218 [16];
  FPCGMetadataDomain *local_208;
  FPCGMetadataAttributeBase *local_200;
  uint local_1f8;
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  EPCGExtraProperties local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  UPCGDataBinding *local_1c8;
  UPCGData local_1c0;
  undefined1 local_178 [40];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  TArray<int,TSizedDefaultAllocator<32>_> *local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTStack_110;
  undefined1 *local_108;
  FScriptContainerElement *local_100;
  FString local_f8;
  FString local_e8;
  <lambda_1> local_d8;
  FPCGDataTypeIdentifier local_c8;
  TSet<TTuple<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  bVar37 = -1 < CpuChannel->Enabled;
  local_1c8 = param_2;
  local_1c0._padding_ = (longlong)this;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId534,"FPCGDataDesc::InitializeAttributeDescs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
               ,0x216);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId534);
  }
  pFVar22 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_c8,Point);
  bVar18 = FPCGDataTypeIdentifier::IsSameType(&this->Type,pFVar22);
  if (local_c8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Ids.AllocatorInstance.Data);
  }
  if (bVar18) {
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x78,8,9,&(this->AttributeDescs).AllocatorInstance,
                        &(this->AttributeDescs).ArrayNum,&(this->AttributeDescs).ArrayMax);
    ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
              ((this->AttributeDescs).AllocatorInstance.Data + (longlong)iVar19 * 0x78,
               PCGDataDescriptionConstants::PointPropertyDescs,9);
    if (param_1 != (UPCGData *)0x0) {
      pUVar23 = UPCGBasePointData::StaticClass();
      lVar4 = param_1->_padding_;
      iVar19 = (int)pUVar23->_padding_;
      if ((iVar19 <= *(int *)(lVar4 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar19 * 8) ==
          &pUVar23->_padding_)) {
        EVar20 = (**(code **)(param_1->_padding_ + 0x640))
                           (param_1,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
        this->AllocatedPointProperties = EVar20;
      }
LAB_14981e971:
      pUVar23 = Z_Construct_UClass_UPCGParamData_NoRegister();
      iVar19 = (int)pUVar23->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar19) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
          &pUVar23->_padding_)) {
        pUVar23 = UPCGBasePointData::StaticClass();
        iVar19 = (int)pUVar23->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar19) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
            &pUVar23->_padding_)) goto LAB_14981e9cd;
      }
      this_00 = (UPCGMetadata *)(**(code **)(param_1->_padding_ + 800))(param_1);
      goto LAB_14981e9d1;
    }
  }
  else if (param_1 != (UPCGData *)0x0) goto LAB_14981e971;
LAB_14981e9cd:
  this_00 = (UPCGMetadata *)0x0;
LAB_14981e9d1:
  uVar34 = 0;
  local_2c0 = this_00;
  if ((param_2 != (UPCGDataBinding *)0x0) && (this_00 != (UPCGMetadata *)0x0)) {
    pFVar24 = UPCGMetadata::GetConstMetadataDomain(this_00,&PCGMetadataDomainID::Default);
    local_1c0._padding_ = *(longlong *)&pFVar24->DomainID;
    local_1c0._padding_ = *(longlong *)&(pFVar24->DomainID).DebugName;
    local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.ArrayNum = 0;
    local_280.ArrayMax = 0;
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    UPCGMetadata::GetAllAttributes(this_00,&local_280,&local_290);
    lVar4 = local_1c0._padding_;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    if (0 < local_280.ArrayNum) {
      local_2c4 = local_1c0._padding_._4_4_;
      uVar36 = uVar34;
      do {
        uVar35 = (uint)uVar36;
        uVar29 = 0;
        if ((int)uVar35 < local_280.ArrayNum) {
          uVar29 = ~uVar35 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = local_280.AllocatorInstance.Data + uVar34 * 0x18;
        uVar7 = *(undefined4 *)pFVar32;
        uVar8 = *(undefined4 *)(pFVar32 + 4);
        iVar19 = *(int *)(pFVar32 + 0xc);
        local_2b8 = (undefined1)uVar7;
        uStack_2b7 = (undefined1)((uint)uVar7 >> 8);
        uStack_2b6 = (undefined1)((uint)uVar7 >> 0x10);
        uStack_2b5 = (undefined1)((uint)uVar7 >> 0x18);
        uStack_2b4 = (undefined1)uVar8;
        uStack_2b3 = (undefined1)((uint)uVar8 >> 8);
        uStack_2b2 = (undefined1)((uint)uVar8 >> 0x10);
        uStack_2b1 = (undefined1)((uint)uVar8 >> 0x18);
        FStack_2b0.DebugName = *(FName *)(local_280.AllocatorInstance.Data + uVar34 * 0x18 + 0x10);
        FStack_2b0._0_8_ = *(undefined8 *)(pFVar32 + 8);
        EVar28 = (EPCGMetadataDomainFlag)*(undefined4 *)(pFVar32 + 8);
        if (((EVar28 == PCGMetadataDomainID::Default.Flag) &&
            (iVar19 == PCGMetadataDomainID::Default.CustomFlag)) ||
           ((EVar28 == (EPCGMetadataDomainFlag)lVar4 && (iVar19 == local_2c4)))) {
          if ((EVar28 == (EPCGMetadataDomainFlag)lVar4) && (iVar19 == local_2c4)) {
            FStack_2b0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
            FStack_2b0.Flag = PCGMetadataDomainID::Default.Flag;
            FStack_2b0._1_3_ = PCGMetadataDomainID::Default._1_3_;
            FStack_2b0.DebugName = PCGMetadataDomainID::Default.DebugName;
          }
          uVar29 = 0;
          if ((int)uVar35 < local_290.ArrayNum) {
            uVar29 = ~uVar35 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_2c7[0] = (FScriptContainerElement)
                         PCGDataDescriptionHelpers::GetAttributeTypeFromMetadataType
                                   ((EPCGMetadataTypes)local_290.AllocatorInstance.Data[uVar34]);
          if (local_2c7[0] == (FScriptContainerElement)0xff) {
            this_01 = StaticEnum<enum_EPCGMetadataTypes>();
            if ((this_01 == (UEnum *)0x0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("EnumClass",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                                    ,0x246,L""), bVar18)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar9.ComparisonIndex.Value._1_1_ = uStack_2b7;
            FVar9.ComparisonIndex.Value._0_1_ = local_2b8;
            FVar9.ComparisonIndex.Value._2_1_ = uStack_2b6;
            FVar9.ComparisonIndex.Value._3_1_ = uStack_2b5;
            FVar9.Number._0_1_ = uStack_2b4;
            FVar9.Number._1_1_ = uStack_2b3;
            FVar9.Number._2_1_ = uStack_2b2;
            FVar9.Number._3_1_ = uStack_2b1;
            local_258._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
            local_1d8 = 0;
            local_258.Selection = Attribute;
            local_258.DomainName.ComparisonIndex.Value = 0;
            local_258.DomainName.Number = 0;
            local_258.AttributeName.ComparisonIndex.Value = 0;
            local_258.AttributeName.Number = 0;
            local_258.PropertyName.ComparisonIndex.Value = 0;
            local_258.PropertyName.Number = 0;
            local_258.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_258.ExtraNames.ArrayNum = 0;
            local_258.ExtraNames.ArrayMax = 0;
            local_258.ExtraProperty = Index;
            FPCGAttributePropertySelector::SetDomainName(&local_258,(FName)0x0,true);
            FPCGAttributePropertySelector::SetAttributeName(&local_258,FVar9,true);
            DestructItems<FString,int>
                      ((FString *)local_258.ExtraNames.AllocatorInstance.Data,
                       local_258.ExtraNames.ArrayNum);
            iVar19 = local_258.ExtraNames.ArrayMax;
            local_258.ExtraNames._8_8_ = (ulonglong)(uint)local_258.ExtraNames.ArrayMax << 0x20;
            if (iVar19 == 0) {
              local_258.ExtraNames.ArrayNum = 0;
              local_258.ExtraNames.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0,iVar19,&local_258.ExtraNames.AllocatorInstance,0,
                         &local_258.ExtraNames.ArrayMax);
              ConstructItems<FString,FString,int>
                        (local_258.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
            }
            (**(code **)(param_1->_padding_ + 0x350))(param_1,&FStack_2b0,&local_258);
            if (2 < (byte)LogPCG._0_1_) {
              uVar29 = 0;
              if ((int)uVar35 < local_290.ArrayNum) {
                uVar29 = ~uVar35 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              UEnum::GetNameStringByValue
                        (this_01,&local_e8,(ulonglong)(byte)local_290.AllocatorInstance.Data[uVar34]
                        );
              FPCGAttributePropertySelector::ToString(&local_258,&local_f8,false);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
            }
            DestructItems<FString,int>
                      ((FString *)local_258.ExtraNames.AllocatorInstance.Data,
                       local_258.ExtraNames.ArrayNum);
            this_00 = local_2c0;
            if (local_258.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.ExtraNames.AllocatorInstance.Data);
              this_00 = local_2c0;
            }
          }
          else {
            if (0x5f < (int)uVar35) {
              if (2 < (byte)LogPCG._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              }
              break;
            }
            local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a0.ArrayNum = 0;
            local_2a0.ArrayMax = 0;
            if ((byte)((char)local_2c7[0] - StringKey) < 2) {
              pFVar24 = UPCGMetadata::GetConstMetadataDomain(this_00,&FStack_2b0);
              FVar10.ComparisonIndex.Value._1_1_ = uStack_2b7;
              FVar10.ComparisonIndex.Value._0_1_ = local_2b8;
              FVar10.ComparisonIndex.Value._2_1_ = uStack_2b6;
              FVar10.ComparisonIndex.Value._3_1_ = uStack_2b5;
              FVar10.Number._0_1_ = uStack_2b4;
              FVar10.Number._1_1_ = uStack_2b3;
              FVar10.Number._2_1_ = uStack_2b2;
              FVar10.Number._3_1_ = uStack_2b1;
              pFVar25 = (FPCGMetadataDomain *)FPCGMetadataDomain::GetConstAttribute(pFVar24,FVar10);
              if (((pFVar24 == (FPCGMetadataDomain *)0x0) || (pFVar25 == (FPCGMetadataDomain *)0x0))
                 && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                        ("MetadataDomain && AttributeBase",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                                         ,0x260,L""), bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              PCGAttributeAccessorHelpers::CreateConstAccessor
                        ((FPCGMetadataAttributeBase *)local_268,pFVar25,SUB81(pFVar24,0));
              uVar30 = (uint)FStack_2b0.Flag - FStack_2b0.CustomFlag ^
                       (uint)FStack_2b0.CustomFlag >> 0xd;
              uVar29 = (-0x61c88647 - uVar30) - FStack_2b0.CustomFlag ^ uVar30 << 8;
              uVar33 = (FStack_2b0.CustomFlag - uVar29) - uVar30 ^ uVar29 >> 0xd;
              uVar30 = (uVar30 - uVar33) - uVar29 ^ uVar33 >> 0xc;
              uVar29 = (uVar29 - uVar30) - uVar33 ^ uVar30 << 0x10;
              uVar33 = (uVar33 - uVar29) - uVar30 ^ uVar29 >> 5;
              uVar30 = (uVar30 - uVar33) - uVar29 ^ uVar33 >> 3;
              uVar29 = (uVar29 - uVar30) - uVar33 ^ uVar30 << 10;
              uVar29 = (uVar33 - uVar29) - uVar30 ^ uVar29 >> 0xf;
              if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
                FVar31 = (ForElementType<FSetElementId>)&local_a8.Hash;
                if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar31 = local_a8.Hash.SecondaryData;
                }
                iVar19 = *(int *)((longlong)FVar31 +
                                 (ulonglong)(local_a8.HashSize - 1U & uVar29) * 4);
                while (iVar19 != -1) {
                  lVar26 = (longlong)iVar19 * 0x20;
                  if ((*(EPCGMetadataDomainFlag *)(lVar26 + local_a8.Elements._0_8_) ==
                       FStack_2b0.Flag) &&
                     (*(uint *)(lVar26 + 4 + local_a8.Elements._0_8_) == FStack_2b0.CustomFlag)) {
                    if ((iVar19 != -1) &&
                       (lVar26 = (longlong)iVar19 * 0x20 + local_a8.Elements._0_8_, lVar26 != 0))
                    goto LAB_14981efbb;
                    break;
                  }
                  iVar19 = *(int *)(lVar26 + 0x18 + local_a8.Elements._0_8_);
                }
              }
              local_1c0._padding_ = (longlong)&FStack_2b0;
              TSet<TTuple<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<FPCGMetadataDomainID_const_&>_>
                        (&local_a8,(uint)local_270,
                         (TKeyInitializer<FPCGMetadataDomainID_const_&> *)(ulonglong)uVar29,
                         (bool *)&local_1c0._padding_);
              lVar26 = (longlong)local_270[0] * 0x20 + local_a8.Elements._0_8_;
LAB_14981efbb:
              pIVar1 = (IPCGAttributeAccessorKeys *)(lVar26 + 0x10);
              if (*(longlong *)(lVar26 + 0x10) == 0) {
                FVar11.ComparisonIndex.Value._1_1_ = uStack_2b7;
                FVar11.ComparisonIndex.Value._0_1_ = local_2b8;
                FVar11.ComparisonIndex.Value._2_1_ = uStack_2b6;
                FVar11.ComparisonIndex.Value._3_1_ = uStack_2b5;
                FVar11.Number._0_1_ = uStack_2b4;
                FVar11.Number._1_1_ = uStack_2b3;
                FVar11.Number._2_1_ = uStack_2b2;
                FVar11.Number._3_1_ = uStack_2b1;
                local_218._0_8_ = &___7FPCGAttributePropertySelector__6B_;
                local_1d0 = 0;
                local_218._8_8_ = (SRWLOCK)0x0;
                local_208 = (FPCGMetadataDomain *)0x0;
                local_200 = (FPCGMetadataAttributeBase *)0x0;
                local_1f8 = 0;
                local_1f0.Data = (FScriptContainerElement *)0x0;
                local_1e8._0_4_ = 0;
                local_1e8._4_4_ = 0;
                local_1e0 = Index;
                FPCGAttributePropertySelector::SetDomainName
                          ((FPCGAttributePropertySelector *)local_218,(FName)0x0,true);
                FPCGAttributePropertySelector::SetAttributeName
                          ((FPCGAttributePropertySelector *)local_218,FVar11,true);
                DestructItems<FString,int>((FString *)local_1f0.Data,(int)local_1e8);
                uVar29 = local_1e8._4_4_;
                local_1e8 = (ulonglong)local_1e8._4_4_ << 0x20;
                if (uVar29 == 0) {
                  local_1e8 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,uVar29,&local_1f0,0,(int *)((longlong)&local_1e8 + 4));
                  ConstructItems<FString,FString,int>(local_1f0.Data,(FString *)0x0,0);
                }
                (**(code **)(param_1->_padding_ + 0x350))(param_1,&FStack_2b0,local_218);
                TVar27 = PCGAttributeAccessorHelpers::CreateConstKeys
                                   (&local_1c0,(FPCGAttributePropertySelector *)param_1);
                if (pIVar1 != TVar27.Ptr) {
                  puVar5 = (undefined8 *)pIVar1->_padding_;
                  pIVar1->_padding_ = (TVar27.Ptr)->_padding_;
                  (TVar27.Ptr)->_padding_ = 0;
                  if (puVar5 != (undefined8 *)0x0) {
                    (**(code **)*puVar5)(puVar5,1);
                  }
                }
                if ((undefined8 *)local_1c0._padding_ != (undefined8 *)0x0) {
                  (*(code *)**(undefined8 **)local_1c0._padding_)(local_1c0._padding_,1);
                }
                DestructItems<FString,int>((FString *)local_1f0.Data,(int)local_1e8);
                if (local_1f0.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1f0.Data);
                }
              }
              if ((((IPCGAttributeAccessor *)local_268._0_8_ == (IPCGAttributeAccessor *)0x0) ||
                  (pIVar1->_padding_ == 0)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Accessor && Keys",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                                      ,0x26b,L""), bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((param_2->bTablesInitialized == (atomic<bool>)0x0) &&
                 (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_8122861073268211622>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                                      ,0x5a,"bTablesInitialized"), bVar18)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_118 = &local_2a0;
              pTStack_110 = &param_2->StringTable;
              local_d8.Callback.UniqueStringKeys = local_118;
              local_d8.Callback.StringTable = pTStack_110;
              PCGMetadataElementCommon::
              ApplyOnAccessorRange<FString,_PCGMetadataElementCommon::ApplyOnAccessor<FString,_FPCGDataDesc::InitializeAttributeDescs_::__l73::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)pIVar1->_padding_,
                         (IPCGAttributeAccessor *)local_268._0_8_,&local_d8,StrictType,0x100,-1);
              if ((IPCGAttributeAccessor *)local_268._0_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_268._0_8_)();
              }
            }
            FVar12 = local_2c7[0];
            EVar28 = FStack_2b0.Flag;
            uVar13 = FStack_2b0._3_1_;
            uVar14 = (undefined1)FStack_2b0.CustomFlag;
            uVar15 = FStack_2b0.CustomFlag._1_1_;
            uVar16 = FStack_2b0.CustomFlag._2_1_;
            uVar17 = FStack_2b0.CustomFlag._3_1_;
            local_1c0.UID._0_1_ = local_2b8;
            local_1c0.UID._1_1_ = uStack_2b7;
            local_1c0.UID._2_1_ = uStack_2b6;
            local_1c0.UID._3_1_ = uStack_2b5;
            local_1c0.UID._4_1_ = uStack_2b4;
            local_1c0.UID._5_1_ = uStack_2b3;
            local_1c0.UID._6_1_ = uStack_2b2;
            local_1c0.UID._7_1_ = uStack_2b1;
            local_1c0.Crc.Value._0_1_ = FStack_2b0.Flag;
            local_1c0.Crc.Value._1_2_ = FStack_2b0._1_2_;
            local_1c0.Crc.Value._3_1_ = FStack_2b0._3_1_;
            local_1c0.Crc.bValid = (bool)(undefined1)FStack_2b0.CustomFlag;
            local_1c0.Crc._5_1_ = FStack_2b0.CustomFlag._1_1_;
            local_1c0.Crc._6_1_ = FStack_2b0.CustomFlag._2_1_;
            local_1c0.Crc._7_1_ = FStack_2b0.CustomFlag._3_1_;
            local_1c0.Metadata.field0_0x0 = (TObjectPtr<UPCGMetadata>_u_0)FStack_2b0.DebugName;
            if ((param_2->bTablesInitialized == (atomic<bool>)0x0) &&
               (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_8122861073268211627>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGDataBinding.h"
                                    ,0x55,"bTablesInitialized"), bVar18)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_178[1] = local_1c0.UID._1_1_;
            local_178[0] = (undefined1)local_1c0.UID;
            local_178[2] = local_1c0.UID._2_1_;
            local_178[3] = local_1c0.UID._3_1_;
            local_178[4] = local_1c0.UID._4_1_;
            local_178[5] = local_1c0.UID._5_1_;
            local_178[6] = local_1c0.UID._6_1_;
            local_178[7] = local_1c0.UID._7_1_;
            local_178[0x18] = FVar12;
            local_178[8] = EVar28;
            local_178._9_2_ = local_1c0.Crc.Value._1_2_;
            local_178[0xc] = uVar14;
            local_178[0xd] = uVar15;
            local_178[0xe] = uVar16;
            local_178[0xf] = uVar17;
            local_150 = 0;
            local_178[0xb] = uVar13;
            local_178._16_8_ = local_1c0.Metadata.field0_0x0;
            local_178._32_8_ = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
            local_148 = 0;
            local_140 = 0;
            local_138 = 0;
            local_130 = 0;
            local_128 = 0;
            local_120 = 0;
            iVar19 = FPCGKernelAttributeTable::GetAttributeId
                               (&param_2->AttributeTable,(FPCGKernelAttributeKey *)local_178);
            DestructItems<FString,int>((FString *)0x0,0);
            lVar26 = local_1c0._padding_;
            if (iVar19 == -1) {
              local_108 = &local_2b8;
              local_100 = local_2c7;
              `FPCGDataDesc::InitializeAttributeDescs'::__l15::<lambda_2>::operator()(&local_108);
            }
            else {
              piVar2 = &((TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *)
                        (local_1c0._padding_ + 0x30))->ArrayMax;
              iVar21 = ((TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *)
                       (local_1c0._padding_ + 0x30))->ArrayNum;
              if (iVar21 == *piVar2) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,(ForAnyElementType *)(local_1c0._padding_ + 0x30),piVar2);
              }
              _Src.Data = local_2a0.AllocatorInstance.Data;
              ((TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *)(lVar26 + 0x30))->
              ArrayNum = iVar21 + 1;
              pFVar32 = (((TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *)
                         (lVar26 + 0x30))->AllocatorInstance).Data + (longlong)iVar21 * 0x78;
              *(int *)pFVar32 = iVar19;
              pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar32 + 0x68);
              *(ulonglong *)(pFVar32 + 8) =
                   CONCAT17(uStack_2b1,
                            CONCAT16(uStack_2b2,
                                     CONCAT15(uStack_2b3,
                                              CONCAT14(uStack_2b4,
                                                       CONCAT13(uStack_2b5,
                                                                CONCAT12(uStack_2b6,
                                                                         CONCAT11(uStack_2b7,
                                                                                  local_2b8)))))));
              *(undefined8 *)(pFVar32 + 0x10) = FStack_2b0._0_8_;
              pFVar32[0x20] = local_2c7[0];
              *(FName *)(pFVar32 + 0x18) = FStack_2b0.DebugName;
              *(undefined8 *)(pFVar32 + 0x30) = 0;
              *(undefined8 *)(pFVar32 + 0x38) = 0;
              *(undefined8 *)(pFVar32 + 0x40) = 0;
              *(int *)(pFVar32 + 0x48) = 0;
              *(undefined ***)(pFVar32 + 0x28) =
                   &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
              *(undefined8 *)(pFVar32 + 0x50) = 0;
              *(undefined8 *)(pFVar32 + 0x58) = 0;
              pFVar32[0x60] = (FScriptContainerElement)0x0;
              *(int *)(pFVar32 + 0x74) = 0;
              (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar32 + 0x70) = 0;
              if (pTVar3 != &local_2a0) {
                lVar26 = (longlong)local_2a0.ArrayNum;
                *(int *)(pFVar32 + 0x70) = local_2a0.ArrayNum;
                param_2 = local_1c8;
                if (local_2a0.ArrayNum != 0) {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_2a0.ArrayNum,0,(ForAnyElementType *)pTVar3,local_2a0.ArrayNum
                             ,(int *)(pFVar32 + 0x74));
                  memcpy((pTVar3->AllocatorInstance).Data,_Src.Data,lVar26 << 2);
                  param_2 = local_1c8;
                }
              }
            }
            this_00 = local_2c0;
            if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a0.AllocatorInstance.Data);
              this_00 = local_2c0;
            }
          }
        }
        uVar36 = (ulonglong)(uVar35 + 1);
        uVar34 = uVar34 + 1;
      } while ((int)(uVar35 + 1) < local_280.ArrayNum);
    }
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.AllocatorInstance.Data);
    }
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
    }
  }
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsAttributeAllocated @ 14981f8e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataDesc::IsAttributeAllocated(FPCGDataDesc *this,FPCGKernelAttributeDesc *param_1)

{
  int iVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier local_28;
  
  iVar1 = param_1->AttributeId;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  bVar2 = FPCGDataTypeIdentifier::IsSameType(&this->Type,pFVar3);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  if (bVar2) {
    switch(iVar1) {
    case 0:
    case 1:
    case 2:
      return (bool)((char)this->AllocatedPointProperties & Transform);
    case 3:
      return (bool)((byte)(this->AllocatedPointProperties >> 2) & 1);
    case 4:
      return (bool)((byte)(this->AllocatedPointProperties >> 3) & 1);
    case 5:
      return (bool)((byte)(this->AllocatedPointProperties >> 4) & 1);
    case 7:
      return (bool)((byte)(this->AllocatedPointProperties >> 6) & 1);
    case 8:
      return (bool)((byte)(this->AllocatedPointProperties >> 5) & 1);
    }
  }
  return true;
}

// IsAttributeAllocated @ 14981fa20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall FPCGDataDesc::IsAttributeAllocated(FPCGDataDesc *this,int param_1)

{
  bool bVar1;
  FPCGDataTypeIdentifier *pFVar2;
  FPCGDataTypeIdentifier local_28;
  
  pFVar2 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  bVar1 = FPCGDataTypeIdentifier::IsSameType(&this->Type,pFVar2);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  if (bVar1) {
    switch(param_1) {
    case 0:
    case 1:
    case 2:
      return (bool)((char)this->AllocatedPointProperties & Transform);
    case 3:
      return (bool)((byte)(this->AllocatedPointProperties >> 2) & 1);
    case 4:
      return (bool)((byte)(this->AllocatedPointProperties >> 3) & 1);
    case 5:
      return (bool)((byte)(this->AllocatedPointProperties >> 4) & 1);
    case 7:
      return (bool)((byte)(this->AllocatedPointProperties >> 6) & 1);
    case 8:
      return (bool)((byte)(this->AllocatedPointProperties >> 5) & 1);
    }
  }
  return true;
}

// ScaleElementCount @ 14982cb90

void __thiscall FPCGDataDesc::ScaleElementCount(FPCGDataDesc *this,int param_1)

{
  TIntVector4<int> *pTVar1;
  longlong lVar2;
  TIntVector4<int>_u_0 TVar3;
  undefined1 auVar4 [16];
  
  lVar2 = 0;
  pTVar1 = &this->ElementCount;
  auVar4._4_4_ = param_1;
  auVar4._0_4_ = param_1;
  auVar4._8_4_ = param_1;
  auVar4._12_4_ = param_1;
  if (1 < __isa_available) {
    TVar3._s_0 = (TIntVector4<int>_u_0_s_0)pmulld(pTVar1->field0_0x0,auVar4);
    pTVar1->field0_0x0 = TVar3;
    return;
  }
  do {
    (pTVar1->field0_0x0).XYZW[lVar2] = param_1 * (pTVar1->field0_0x0).XYZW[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 < 4);
  return;
}

// operator() @ 150545930

bool __thiscall `FPCGDataDesc::InitializeAttributeDescs'::__l15::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_498753438025252232>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_498753438025252232>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505459af;
    }
  }
  bVar2 = false;
LAB_1505459af:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

