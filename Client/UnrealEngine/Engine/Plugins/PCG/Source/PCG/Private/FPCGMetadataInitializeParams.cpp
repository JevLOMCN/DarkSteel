// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator= @ 149892600

FPCGMetadataInitializeParams * __thiscall
FPCGMetadataInitializeParams::operator=
          (FPCGMetadataInitializeParams *this,FPCGMetadataInitializeParams *param_1)

{
  TArray<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *pTVar5;
  
  this->Parent = param_1->Parent;
  pTVar1 = &this->DomainMapping;
  if (pTVar1 != &param_1->DomainMapping) {
    iVar4 = (param_1->DomainMapping).ArrayNum;
    piVar2 = &(this->DomainMapping).ArrayMax;
    _Src = (param_1->DomainMapping).AllocatorInstance.Data;
    (this->DomainMapping).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 5);
      }
    }
  }
  pTVar3 = &this->DomainInitializeParams;
  if (pTVar3 != &param_1->DomainInitializeParams) {
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               (pTVar3->AllocatorInstance).Data,(this->DomainInitializeParams).ArrayNum);
    iVar4 = (param_1->DomainInitializeParams).ArrayNum;
    piVar2 = &(this->DomainInitializeParams).ArrayMax;
    pTVar5 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
             (param_1->DomainInitializeParams).AllocatorInstance.Data;
    (this->DomainInitializeParams).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x98,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar5,iVar4);
    }
  }
  return this;
}

// FPCGMetadataInitializeParams @ 149e35850

FPCGMetadataInitializeParams * __thiscall
FPCGMetadataInitializeParams::FPCGMetadataInitializeParams
          (FPCGMetadataInitializeParams *this,UPCGMetadata *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          EPCGMetadataFilterMode param_3,EPCGStringMatchingOperator param_4,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FPCGMetadataInitializeParams *pFVar4;
  
  FPCGMetadataInitializeParams(this,param_1,param_5);
  if ((this->DomainInitializeParams).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGMetadataInitializeParams *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->DomainInitializeParams).AllocatorInstance.Data;
  pFVar1[0x68] = (FScriptContainerElement)param_3;
  pFVar1[0x69] = (FScriptContainerElement)param_4;
  if ((*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) &&
     (param_2 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pFVar1 + 0x18))) {
    TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>::
    Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&>
              ((TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *)
               (pFVar1 + 0x18),param_2);
  }
  return this;
}

// FPCGMetadataInitializeParams @ 149e35900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPCGMetadataInitializeParams * __thiscall
FPCGMetadataInitializeParams::FPCGMetadataInitializeParams
          (FPCGMetadataInitializeParams *this,UPCGMetadata *param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *this_00;
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar6;
  undefined8 *puVar7;
  FPCGMetadataInitializeParams *pFVar8;
  undefined8 *puVar9;
  FPCGMetadataDomainID *pFVar10;
  undefined4 local_c8;
  int iStack_c4;
  undefined4 uStack_b4;
  FName FStack_b0;
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  undefined2 local_50;
  undefined8 local_48;
  FName FStack_40;
  undefined8 local_38;
  FName FStack_30;
  EPCGMetadataDomainFlag local_28;
  
  puVar7 = (undefined8 *)0x0;
  this->Parent = param_1;
  (this->DomainMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DomainMapping).ArrayNum = 0;
  (this->DomainMapping).ArrayMax = 0;
  (this->DomainInitializeParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DomainInitializeParams).ArrayNum = 0;
  (this->DomainInitializeParams).ArrayMax = 0;
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    pTVar6 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&param_1->MetadataDomains,&PCGMetadataDomainID::Default);
    puVar9 = (undefined8 *)&pTVar6->field_0x10;
    if (pTVar6 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      puVar9 = puVar7;
    }
    if (puVar9 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar9;
    }
    iVar5 = (this->DomainInitializeParams).ArrayNum;
    local_a0._0_8_ = (FScriptContainerElement *)0x0;
    local_a0._8_4_ = 0;
    local_a0._12_4_ = -1;
    local_80 = (void *)0x0;
    local_78 = ___xmm_00000000ffffffff0000008000000000;
    uStack_70 = _UNK_150631d98;
    local_60 = (ForElementType<FSetElementId>)0x0;
    local_58 = 0;
    local_50 = 0;
    local_28 = Default;
    if (iVar5 == (this->DomainInitializeParams).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x898,&(this->DomainInitializeParams).AllocatorInstance,
                         &(this->DomainInitializeParams).ArrayMax);
    }
    pFVar2 = (this->DomainInitializeParams).AllocatorInstance.Data;
    (this->DomainInitializeParams).ArrayNum = iVar5 + 1;
    pFVar10 = (FPCGMetadataDomainID *)(pFVar2 + (longlong)iVar5 * 0x98);
    this_00 = &pFVar10[1].DebugName;
    *pFVar10 = PCGMetadataDomainID::Default;
    *(undefined8 **)(pFVar10 + 1) = puVar7;
    this_00->ComparisonIndex = 0;
    this_00->Number = 0;
    *(undefined4 *)(pFVar10 + 2) = 0;
    pFVar10[2].CustomFlag = -1;
    pFVar10[3].DebugName.ComparisonIndex = 0;
    pFVar10[3].DebugName.Number = 0;
    *(undefined4 *)(pFVar10 + 4) = 0;
    pFVar10[4].CustomFlag = 0x80;
    pFVar10[4].DebugName.ComparisonIndex.Value = 0xffffffff;
    pFVar10[4].DebugName.Number = 0;
    pFVar10[5].DebugName.ComparisonIndex = 0;
    pFVar10[5].DebugName.Number = 0;
    *(undefined4 *)(pFVar10 + 6) = 0;
    if (local_a0._12_4_ != -1) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_a0);
    }
    *(undefined1 *)&pFVar10[6].DebugName.ComparisonIndex.Value = (undefined1)local_50;
    pFVar10[9].Flag = Default;
    *(undefined1 *)((longlong)&pFVar10[6].DebugName.ComparisonIndex.Value + 1) = local_50._1_1_;
    pFVar10[9].Flag = local_28;
    if (local_28 != Default) {
      pFVar10[7].Flag = (undefined1)local_48;
      *(undefined3 *)&pFVar10[7].field_0x1 = local_48._1_3_;
      pFVar10[7].CustomFlag = local_48._4_4_;
      pFVar10[7].DebugName = FStack_40;
      pFVar10[8].Flag = (undefined1)local_38;
      *(undefined3 *)&pFVar10[8].field_0x1 = local_38._1_3_;
      pFVar10[8].CustomFlag = local_38._4_4_;
      pFVar10[8].DebugName = FStack_30;
    }
    if (local_a0._12_4_ != -1) {
      local_58 = 0;
      if (local_60 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_60);
      }
      local_a0._8_4_ = 0;
      if (local_a0._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
      }
      uVar1 = local_78._4_4_;
      uStack_70 = 0xffffffff;
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      if (0x80 < uVar1) {
        local_78 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
      }
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
      if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a0._0_8_);
      }
    }
    if (param_2 != (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0) {
      uVar1 = param_2->ArrayNum;
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((int)uVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FPCGMetadataInitializeParams *)(*pcVar3)();
        return pFVar8;
      }
      if (((int)uVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumElements >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x3f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FPCGMetadataInitializeParams *)(*pcVar3)();
        return pFVar8;
      }
      local_c8 = SUB84(pFVar2,0);
      iStack_c4 = (int)((ulonglong)pFVar2 >> 0x20);
      *(undefined4 *)(pFVar10 + 7) = local_c8;
      pFVar10[7].CustomFlag = iStack_c4;
      pFVar10[7].DebugName.ComparisonIndex.Value = 8;
      pFVar10[7].DebugName.Number = uVar1;
      pFVar10[8].Flag = (char)uVar1;
      *(int3 *)&pFVar10[8].field_0x1 = (int3)(uVar1 >> 8);
      pFVar10[8].CustomFlag = uStack_b4;
      pFVar10[8].DebugName = FStack_b0;
      pFVar10[9].Flag = Data;
    }
  }
  return this;
}

// PopulateDomainInitializeParamsFromParent @ 149e79ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPCGMetadataInitializeParams::PopulateDomainInitializeParamsFromParent
          (FPCGMetadataInitializeParams *this)

{
  TArray<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *pTVar4;
  FPCGMetadataDomainID *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  UPCGMetadata *pUVar8;
  FPCGMetadataDomain *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *pTVar12;
  undefined4 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  undefined1 local_res8 [8];
  int local_res10;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_res18;
  undefined4 uStack_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [80];
  undefined2 local_80;
  bool local_58;
  
  pUVar8 = this->Parent;
  if (pUVar8 != (UPCGMetadata *)0x0) {
    uVar19 = (*(int *)&(pUVar8->MetadataDomains).field_0x8 -
             *(int *)&(pUVar8->MetadataDomains).field_0x34) - 1;
    pTVar1 = &this->DomainInitializeParams;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               (pTVar1->AllocatorInstance).Data,(this->DomainInitializeParams).ArrayNum);
    piVar2 = &(this->DomainInitializeParams).ArrayMax;
    (this->DomainInitializeParams).ArrayNum = 0;
    if (*piVar2 != uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x98,8,uVar19,&pTVar1->AllocatorInstance,0,piVar2);
    }
    pUVar8 = this->Parent;
    iVar21 = 0;
    iVar23 = 0;
    uVar19 = 1;
    puVar3 = &(pUVar8->MetadataDomains).field_0x10;
    iVar16 = *(int *)&(pUVar8->MetadataDomains).field_0x28;
    pTVar4 = &pUVar8->MetadataDomains;
    iVar15 = 0;
    if (iVar16 != 0) {
      puVar24 = *(uint **)&(pUVar8->MetadataDomains).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)puVar3;
      }
      uVar20 = *puVar24;
      while (uVar20 == 0) {
        lVar17 = (longlong)iVar21;
        iVar23 = iVar23 + 0x20;
        iVar21 = iVar21 + 1;
        iVar15 = iVar16;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_149e79fcf;
        uVar20 = puVar24[lVar17 + 1];
      }
      uVar19 = -uVar20 & uVar20;
      uVar6 = (ulonglong)uVar19 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_res10 = (int)lVar17;
      iVar15 = local_res10 + -1 + iVar23;
      if (iVar16 < iVar15) {
        iVar15 = iVar16;
      }
    }
LAB_149e79fcf:
    uVar20 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
    TStack_100._padding_ = CONCAT44(uVar19,iVar21);
    uVar19 = uVar20 & 0xffffffe0;
    TStack_100.CurrentBitIndex = iVar15;
    TStack_100.UnvisitedBitMask = 0xffffffff;
    iVar21 = (int)uVar20 >> 5;
    TStack_100._28_4_ = iVar15;
    TStack_100.BaseBitIndex = iVar23;
    uStack_e0 = CONCAT44(uStack_10c,
                         *(int *)&(pUVar8->MetadataDomains).field_0x8 -
                         *(int *)&(pUVar8->MetadataDomains).field_0x34);
    local_res18 = pTVar4;
    TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar20 < 0) || (iVar16 < (int)uVar20)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar12 = local_res18;
    uVar11 = _UNK_150631d98;
    lVar17 = ___xmm_00000000ffffffff0000008000000000;
    uVar7 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
    if (uVar20 != uVar7) {
      puVar22 = *(undefined1 **)&(pUVar8->MetadataDomains).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar3;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar21 * 4);
      while (uVar20 == 0) {
        lVar18 = (longlong)iVar21;
        uVar19 = uVar19 + 0x20;
        iVar21 = iVar21 + 1;
        uVar20 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_149e7a0f0;
        uVar20 = *(uint *)(puVar22 + lVar18 * 4 + 4);
      }
      uVar6 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar20 = (int)lVar18 + -1 + uVar19;
      if ((int)uVar7 < (int)uVar20) {
        uVar20 = uVar7;
      }
    }
LAB_149e7a0f0:
    while( true ) {
      if (*(int *)&(pUVar8->MetadataDomains).field_0x8 -
          *(int *)&(pUVar8->MetadataDomains).field_0x34 != (int)uStack_e0) {
        `TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_100.CurrentBitIndex == uVar20) &&
          (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (pTVar4 == pTVar12)) break;
      pFVar5 = (FPCGMetadataDomainID *)
               (*(longlong *)pTVar4 + (longlong)TStack_100.CurrentBitIndex * 0x28);
      if ((*(char *)(*(longlong *)pTVar4 + (longlong)TStack_100.CurrentBitIndex * 0x28) != '\0') &&
         (pFVar9 = *(FPCGMetadataDomain **)(pFVar5 + 1), pFVar9 != (FPCGMetadataDomain *)0x0)) {
        iVar16 = (this->DomainInitializeParams).ArrayNum;
        local_d0._0_8_ = (void *)0x0;
        local_d0._8_4_ = 0;
        local_d0._12_4_ = -1;
        local_d0._32_8_ = (void *)0x0;
        local_d0._40_8_ = lVar17;
        local_d0._48_8_ = uVar11;
        local_d0._64_8_ = (ForElementType<FSetElementId>)0x0;
        local_d0._72_4_ = 0;
        local_80._0_1_ = ExcludeAttributes;
        local_80._1_1_ = Equal;
        local_58 = false;
        local_d8 = (undefined1  [8])pFVar9;
        if (iVar16 == *piVar2) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x898,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->DomainInitializeParams).ArrayNum = iVar16 + 1;
        TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>::
        TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams><FPCGMetadataDomainID_const_&,FPCGMetadataDomainInitializeParams>
                  ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                   ((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 0x98),pFVar5,
                   (FPCGMetadataDomainInitializeParams *)local_d8);
        if (local_d0._12_4_ != -1) {
          local_d0._72_4_ = 0;
          if ((ForElementType<FSetElementId>)local_d0._64_8_ != (ForElementType<FSetElementId>)0x0)
          {
            FMemory::Free((void *)local_d0._64_8_);
          }
          local_d0._8_4_ = 0;
          if (local_d0._12_4_ != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,(ForAnyElementType *)local_d0,0,(int *)(local_d0 + 0xc));
          }
          uVar13 = local_d0._44_4_;
          local_d0._48_8_ = 0xffffffff;
          local_d0._40_8_ = (ulonglong)(uint)local_d0._44_4_ << 0x20;
          if (0x80 < (uint)uVar13) {
            local_d0._40_8_ = 0x8000000000;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_d0 + 0x10),0);
          }
          if ((void *)local_d0._32_8_ != (void *)0x0) {
            FMemory::Free((void *)local_d0._32_8_);
          }
          if ((void *)local_d0._0_8_ != (void *)0x0) {
            FMemory::Free((void *)local_d0._0_8_);
          }
        }
      }
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    }
  }
  return;
}

