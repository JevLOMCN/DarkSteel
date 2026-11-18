// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FComplexRawStatStackNode @ 1419cd280

FComplexRawStatStackNode * __thiscall
FComplexRawStatStackNode::FComplexRawStatStackNode
          (FComplexRawStatStackNode *this,FComplexRawStatStackNode *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  atomic<void_*> aVar5;
  atomic<void_*> aVar6;
  TMap<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
  *pTVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *this_00;
  atomic<void_*> aVar11;
  atomic<void_*> aVar12;
  uint *puVar13;
  atomic<void_*> aVar14;
  TPairInitializer<FName_const_&,FComplexRawStatStackNode_*_&&> local_res8;
  TMap<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
  *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  TMap<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar4 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 8);
  aVar14 = (atomic<void_*>)0x0;
  *(undefined8 *)(this->ComplexStat).StatData.Pad =
       *(undefined8 *)(param_1->ComplexStat).StatData.Pad;
  *(undefined8 *)((this->ComplexStat).StatData.Pad + 8) = uVar4;
  uVar4 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x18);
  *(undefined8 *)((this->ComplexStat).StatData.Pad + 0x10) =
       *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x10);
  *(undefined8 *)((this->ComplexStat).StatData.Pad + 0x18) = uVar4;
  uVar4 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x28);
  *(undefined8 *)((this->ComplexStat).StatData.Pad + 0x20) =
       *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x20);
  *(undefined8 *)((this->ComplexStat).StatData.Pad + 0x28) = uVar4;
  uVar4 = *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x38);
  *(undefined8 *)((this->ComplexStat).StatData.Pad + 0x30) =
       *(undefined8 *)((param_1->ComplexStat).StatData.Pad + 0x30);
  *(undefined8 *)((this->ComplexStat).StatData.Pad + 0x38) = uVar4;
  (this->ComplexStat).NameAndInfo = (param_1->ComplexStat).NameAndInfo;
  *(undefined8 *)&this->Children = 0;
  *(undefined8 *)&(this->Children).field_0x8 = 0;
  *(undefined8 *)&(this->Children).field_0x20 = 0;
  aVar11._0_4_ = 0;
  *(undefined4 *)&(this->Children).field_0x28 = 0;
  *(undefined4 *)&(this->Children).field_0x2c = 0x80;
  *(undefined4 *)&(this->Children).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Children).field_0x34 = 0;
  *(undefined8 *)&(this->Children).field_0x40 = 0;
  *(undefined4 *)&(this->Children).field_0x48 = 0;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
           *)&this->Children,
          *(int *)&(param_1->Children).field_0x8 - *(int *)&(param_1->Children).field_0x34);
  local_98 = &param_1->Children;
  uVar10 = *(uint *)&(param_1->Children).field_0x28;
  local_88 = &(param_1->Children).field_0x10;
  uVar9 = 1;
  aVar12._0_4_ = 0;
  uStack_7c = aVar12._0_4_;
  if (uVar10 != 0) {
    puVar13 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_88;
    }
    uVar2 = *puVar13;
    aVar5 = aVar14;
    aVar6 = aVar14;
    aVar12._0_4_ = 0;
    aVar11._0_4_ = 0;
    while (uVar2 == 0) {
      aVar12._0_4_ = aVar6._0_4_ + 0x20;
      aVar12._4_4_ = 0;
      aVar11._0_4_ = aVar5._0_4_ + 1;
      aVar11._4_4_ = 0;
      uStack_7c = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)aVar11._0_4_)
      goto LAB_1419cd389;
      uVar2 = puVar13[(longlong)aVar5._0_4_ + 1];
      aVar5 = aVar11;
      aVar6 = aVar12;
    }
    uVar9 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uStack_7c = (int)lVar3 + -1 + aVar12._0_4_;
    if ((int)uVar10 < (int)uStack_7c) {
      uStack_7c = uVar10;
    }
  }
LAB_1419cd389:
  uStack_90 = (FComplexRawStatStackNode ***)CONCAT44(uVar9,aVar11._0_4_);
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = (longlong)uStack_90;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = aVar12._0_4_;
  if ((int)uStack_7c < (int)uVar10) {
    uStack_90 = &local_res8.Value;
    local_78 = aVar12._0_4_;
    uStack_74 = uStack_7c;
    local_68 = local_98;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
    TStack_60.CurrentBitIndex = uStack_7c;
    do {
      iVar8 = TStack_60.CurrentBitIndex;
      this_00 = GetRawStatStackNodeAllocatorEx();
      uVar10 = FLockFreePointerListLIFORoot<64,1>::Pop
                         ((FLockFreePointerListLIFORoot<64,1> *)this_00);
      aVar11 = aVar14;
      if (uVar10 != 0) {
        aVar11 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar10 >> 0xe][uVar10 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar10);
      }
      pTVar7 = local_68;
      if ((aVar11 != (atomic<void_*>)0x0) ||
         (aVar11 = (atomic<void_*>)FMemory::Malloc(0x98,8), aVar12 = aVar14,
         aVar11 != (atomic<void_*>)0x0)) {
        aVar12 = (atomic<void_*>)
                 FComplexRawStatStackNode
                           ((FComplexRawStatStackNode *)aVar11,
                            *(FComplexRawStatStackNode **)
                             (*(longlong *)pTVar7 + 8 + (longlong)iVar8 * 0x18));
      }
      local_98 = (TMap<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                  *)(*(longlong *)pTVar7 + (longlong)iVar8 * 0x18);
      local_res8.Value = (FComplexRawStatStackNode **)aVar12;
      TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FComplexRawStatStackNode_*_&&>_>
                ((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                  *)&this->Children,&local_res8,(bool *)&local_98);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return this;
}

// FComplexRawStatStackNode @ 1419cd4d0

FComplexRawStatStackNode * __thiscall
FComplexRawStatStackNode::FComplexRawStatStackNode
          (FComplexRawStatStackNode *this,FRawStatStackNode *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FStatNameAndInfo FVar3;
  longlong lVar4;
  TStatMessage<EComplexStatField> *pTVar5;
  atomic<void_*> aVar6;
  atomic<void_*> aVar7;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *this_00;
  atomic<void_*> aVar12;
  atomic<void_*> aVar13;
  uint *puVar14;
  atomic<void_*> aVar15;
  TPairInitializer<FName_const_&,FComplexRawStatStackNode_*_&&> local_res8;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  FVar3 = (param_1->Meta).NameAndInfo;
  aVar15 = (atomic<void_*>)0x0;
  (this->ComplexStat).NameAndInfo = FVar3;
  (this->ComplexStat).NameAndInfo.Number = FVar3.Number & 0xfffff3ffU | 0x200;
  (this->ComplexStat).StatData.Pad[0] = '\0';
  (this->ComplexStat).StatData.Pad[1] = '\0';
  (this->ComplexStat).StatData.Pad[2] = '\0';
  (this->ComplexStat).StatData.Pad[3] = '\0';
  (this->ComplexStat).StatData.Pad[4] = '\0';
  (this->ComplexStat).StatData.Pad[5] = '\0';
  (this->ComplexStat).StatData.Pad[6] = '\0';
  (this->ComplexStat).StatData.Pad[7] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[8] = '\0';
  (pTVar5->StatData).Pad[9] = '\0';
  (pTVar5->StatData).Pad[10] = '\0';
  (pTVar5->StatData).Pad[0xb] = '\0';
  (pTVar5->StatData).Pad[0xc] = '\0';
  (pTVar5->StatData).Pad[0xd] = '\0';
  (pTVar5->StatData).Pad[0xe] = '\0';
  (pTVar5->StatData).Pad[0xf] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x10] = '\0';
  (pTVar5->StatData).Pad[0x11] = '\0';
  (pTVar5->StatData).Pad[0x12] = '\0';
  (pTVar5->StatData).Pad[0x13] = '\0';
  (pTVar5->StatData).Pad[0x14] = '\0';
  (pTVar5->StatData).Pad[0x15] = '\0';
  (pTVar5->StatData).Pad[0x16] = '\0';
  (pTVar5->StatData).Pad[0x17] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x18] = '\0';
  (pTVar5->StatData).Pad[0x19] = '\0';
  (pTVar5->StatData).Pad[0x1a] = '\0';
  (pTVar5->StatData).Pad[0x1b] = '\0';
  (pTVar5->StatData).Pad[0x1c] = '\0';
  (pTVar5->StatData).Pad[0x1d] = '\0';
  (pTVar5->StatData).Pad[0x1e] = '\0';
  (pTVar5->StatData).Pad[0x1f] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x20] = '\0';
  (pTVar5->StatData).Pad[0x21] = '\0';
  (pTVar5->StatData).Pad[0x22] = '\0';
  (pTVar5->StatData).Pad[0x23] = '\0';
  (pTVar5->StatData).Pad[0x24] = '\0';
  (pTVar5->StatData).Pad[0x25] = '\0';
  (pTVar5->StatData).Pad[0x26] = '\0';
  (pTVar5->StatData).Pad[0x27] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x28] = '\0';
  (pTVar5->StatData).Pad[0x29] = '\0';
  (pTVar5->StatData).Pad[0x2a] = '\0';
  (pTVar5->StatData).Pad[0x2b] = '\0';
  (pTVar5->StatData).Pad[0x2c] = '\0';
  (pTVar5->StatData).Pad[0x2d] = '\0';
  (pTVar5->StatData).Pad[0x2e] = '\0';
  (pTVar5->StatData).Pad[0x2f] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x30] = '\0';
  (pTVar5->StatData).Pad[0x31] = '\0';
  (pTVar5->StatData).Pad[0x32] = '\0';
  (pTVar5->StatData).Pad[0x33] = '\0';
  (pTVar5->StatData).Pad[0x34] = '\0';
  (pTVar5->StatData).Pad[0x35] = '\0';
  (pTVar5->StatData).Pad[0x36] = '\0';
  (pTVar5->StatData).Pad[0x37] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x38] = '\0';
  (pTVar5->StatData).Pad[0x39] = '\0';
  (pTVar5->StatData).Pad[0x3a] = '\0';
  (pTVar5->StatData).Pad[0x3b] = '\0';
  (pTVar5->StatData).Pad[0x3c] = '\0';
  (pTVar5->StatData).Pad[0x3d] = '\0';
  (pTVar5->StatData).Pad[0x3e] = '\0';
  (pTVar5->StatData).Pad[0x3f] = '\0';
  *(undefined8 *)&this->Children = 0;
  *(undefined8 *)&(this->Children).field_0x8 = 0;
  *(undefined8 *)&(this->Children).field_0x20 = 0;
  aVar12._0_4_ = 0;
  *(undefined4 *)&(this->Children).field_0x28 = 0;
  *(undefined4 *)&(this->Children).field_0x2c = 0x80;
  *(undefined4 *)&(this->Children).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Children).field_0x34 = 0;
  *(undefined8 *)&(this->Children).field_0x40 = 0;
  *(undefined4 *)&(this->Children).field_0x48 = 0;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
           *)&this->Children,
          *(int *)&(param_1->Children).field_0x8 - *(int *)&(param_1->Children).field_0x34);
  local_98 = &param_1->Children;
  uVar11 = *(uint *)&(param_1->Children).field_0x28;
  local_88 = &(param_1->Children).field_0x10;
  uVar10 = 1;
  aVar13._0_4_ = 0;
  uStack_7c = aVar13._0_4_;
  if (uVar11 != 0) {
    puVar14 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_88;
    }
    uVar2 = *puVar14;
    aVar6 = aVar15;
    aVar7 = aVar15;
    aVar13._0_4_ = 0;
    aVar12._0_4_ = 0;
    while (uVar2 == 0) {
      aVar13._0_4_ = aVar7._0_4_ + 0x20;
      aVar13._4_4_ = 0;
      aVar12._0_4_ = aVar6._0_4_ + 1;
      aVar12._4_4_ = 0;
      uStack_7c = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)aVar12._0_4_)
      goto LAB_1419cd5ea;
      uVar2 = puVar14[(longlong)aVar6._0_4_ + 1];
      aVar6 = aVar12;
      aVar7 = aVar13;
    }
    uVar10 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uStack_7c = (aVar13._0_4_ - 1) + (int)lVar4;
    if ((int)uVar11 < (int)uStack_7c) {
      uStack_7c = uVar11;
    }
  }
LAB_1419cd5ea:
  uStack_90 = (FComplexRawStatStackNode ***)CONCAT44(uVar10,aVar12._0_4_);
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = (longlong)uStack_90;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = aVar13._0_4_;
  if ((int)uStack_7c < (int)uVar11) {
    uStack_90 = &local_res8.Value;
    local_78 = aVar13._0_4_;
    uStack_74 = uStack_7c;
    local_68 = local_98;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
    TStack_60.CurrentBitIndex = uStack_7c;
    do {
      iVar9 = TStack_60.CurrentBitIndex;
      this_00 = GetRawStatStackNodeAllocatorEx();
      uVar11 = FLockFreePointerListLIFORoot<64,1>::Pop
                         ((FLockFreePointerListLIFORoot<64,1> *)this_00);
      aVar12 = aVar15;
      if (uVar11 != 0) {
        aVar12 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar11 >> 0xe][uVar11 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar11);
      }
      pTVar8 = local_68;
      if ((aVar12 != (atomic<void_*>)0x0) ||
         (aVar12 = (atomic<void_*>)FMemory::Malloc(0x98,8), aVar13 = aVar15,
         aVar12 != (atomic<void_*>)0x0)) {
        aVar13 = (atomic<void_*>)
                 FComplexRawStatStackNode
                           ((FComplexRawStatStackNode *)aVar12,
                            *(FRawStatStackNode **)
                             (*(longlong *)pTVar8 + 8 + (longlong)iVar9 * 0x18));
      }
      local_98 = (TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                  *)(*(longlong *)pTVar8 + (longlong)iVar9 * 0x18);
      local_res8.Value = (FComplexRawStatStackNode **)aVar13;
      TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FComplexRawStatStackNode_*_&&>_>
                ((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                  *)&this->Children,&local_res8,(bool *)&local_98);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return this;
}

// operator_new @ 1419d33a0

void * __cdecl FComplexRawStatStackNode::operator_new(ulong64 param_1)

{
  uint uVar1;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *this;
  void *pvVar2;
  atomic<void_*> aVar3;
  
  this = GetRawStatStackNodeAllocatorEx();
  uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
  aVar3 = (atomic<void_*>)0x0;
  if (uVar1 != 0) {
    aVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
  }
  if (aVar3 == (atomic<void_*>)0x0) {
    pvVar2 = FMemory::Malloc(0x98,8);
    return pvVar2;
  }
  return (void *)aVar3;
}

// operator_delete @ 1419d3480

void __cdecl FComplexRawStatStackNode::operator_delete(void *param_1)

{
  uint uVar1;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *this;
  FIndexedLockFreeLink *pFVar2;
  
  this = GetRawStatStackNodeAllocatorEx();
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar1 == 0) {
    pFVar2 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar2 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe] + (uVar1 & 0x3fff);
  }
  pFVar2->Payload = (atomic<void_*>)param_1;
  FLockFreePointerListLIFORoot<64,1>::Push((FLockFreePointerListLIFORoot<64,1> *)this,uVar1);
  return;
}

// CopyExclusivesFromSelf @ 1419e6450

void __thiscall FComplexRawStatStackNode::CopyExclusivesFromSelf(FComplexRawStatStackNode *this)

{
  TMap<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
  *this_00;
  longlong lVar1;
  FName FVar2;
  FNameEntryId FVar3;
  int iVar4;
  undefined4 extraout_var;
  TTuple<FName,FComplexRawStatStackNode_*> *pTVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res8 [2];
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->Children;
  if (*(int *)&(this->Children).field_0x8 != *(int *)&(this->Children).field_0x34) {
    FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
    local_res8[1] = 0;
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = local_res8[0];
    pTVar5 = TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                     *)this_00,FVar2);
    if ((pTVar5 != (TTuple<FName,FComplexRawStatStackNode_*> *)0x0) &&
       (lVar1 = *(longlong *)&pTVar5->field_0x8, lVar1 != 0)) {
      *(undefined8 *)((this->ComplexStat).StatData.Pad + 0x28) = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)((this->ComplexStat).StatData.Pad + 0x30) = *(undefined8 *)(lVar1 + 0x10);
    }
    TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                *)this_00);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar6 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                *)this_00;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        CopyExclusivesFromSelf
                  (*(FComplexRawStatStackNode **)(*local_48 + 8 + (longlong)(int)uVar6 * 0x18));
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar6 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar4 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
          local_18->HashSize = iVar4;
          TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

// CopyNameHierarchy @ 1419e65e0

void __thiscall
FComplexRawStatStackNode::CopyNameHierarchy
          (FComplexRawStatStackNode *this,FRawStatStackNode *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FStatNameAndInfo FVar3;
  longlong lVar4;
  TStatMessage<EComplexStatField> *pTVar5;
  atomic<void_*> aVar6;
  atomic<void_*> aVar7;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *this_00;
  atomic<void_*> aVar12;
  atomic<void_*> aVar13;
  uint *puVar14;
  atomic<void_*> aVar15;
  TPairInitializer<FName_const_&,FComplexRawStatStackNode_*_&&> local_res8;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  DeleteAllChildrenNodes(this);
  FVar3 = (param_1->Meta).NameAndInfo;
  (this->ComplexStat).NameAndInfo = FVar3;
  aVar15 = (atomic<void_*>)0x0;
  (this->ComplexStat).NameAndInfo.Number = FVar3.Number & 0xfffff3ffU | 0x200;
  (this->ComplexStat).StatData.Pad[0] = '\0';
  (this->ComplexStat).StatData.Pad[1] = '\0';
  (this->ComplexStat).StatData.Pad[2] = '\0';
  (this->ComplexStat).StatData.Pad[3] = '\0';
  (this->ComplexStat).StatData.Pad[4] = '\0';
  (this->ComplexStat).StatData.Pad[5] = '\0';
  (this->ComplexStat).StatData.Pad[6] = '\0';
  (this->ComplexStat).StatData.Pad[7] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[8] = '\0';
  (pTVar5->StatData).Pad[9] = '\0';
  (pTVar5->StatData).Pad[10] = '\0';
  (pTVar5->StatData).Pad[0xb] = '\0';
  (pTVar5->StatData).Pad[0xc] = '\0';
  (pTVar5->StatData).Pad[0xd] = '\0';
  (pTVar5->StatData).Pad[0xe] = '\0';
  (pTVar5->StatData).Pad[0xf] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x10] = '\0';
  (pTVar5->StatData).Pad[0x11] = '\0';
  (pTVar5->StatData).Pad[0x12] = '\0';
  (pTVar5->StatData).Pad[0x13] = '\0';
  (pTVar5->StatData).Pad[0x14] = '\0';
  (pTVar5->StatData).Pad[0x15] = '\0';
  (pTVar5->StatData).Pad[0x16] = '\0';
  (pTVar5->StatData).Pad[0x17] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x18] = '\0';
  (pTVar5->StatData).Pad[0x19] = '\0';
  (pTVar5->StatData).Pad[0x1a] = '\0';
  (pTVar5->StatData).Pad[0x1b] = '\0';
  (pTVar5->StatData).Pad[0x1c] = '\0';
  (pTVar5->StatData).Pad[0x1d] = '\0';
  (pTVar5->StatData).Pad[0x1e] = '\0';
  (pTVar5->StatData).Pad[0x1f] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x20] = '\0';
  (pTVar5->StatData).Pad[0x21] = '\0';
  (pTVar5->StatData).Pad[0x22] = '\0';
  (pTVar5->StatData).Pad[0x23] = '\0';
  (pTVar5->StatData).Pad[0x24] = '\0';
  (pTVar5->StatData).Pad[0x25] = '\0';
  (pTVar5->StatData).Pad[0x26] = '\0';
  (pTVar5->StatData).Pad[0x27] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x28] = '\0';
  (pTVar5->StatData).Pad[0x29] = '\0';
  (pTVar5->StatData).Pad[0x2a] = '\0';
  (pTVar5->StatData).Pad[0x2b] = '\0';
  (pTVar5->StatData).Pad[0x2c] = '\0';
  (pTVar5->StatData).Pad[0x2d] = '\0';
  (pTVar5->StatData).Pad[0x2e] = '\0';
  (pTVar5->StatData).Pad[0x2f] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x30] = '\0';
  (pTVar5->StatData).Pad[0x31] = '\0';
  (pTVar5->StatData).Pad[0x32] = '\0';
  (pTVar5->StatData).Pad[0x33] = '\0';
  (pTVar5->StatData).Pad[0x34] = '\0';
  (pTVar5->StatData).Pad[0x35] = '\0';
  (pTVar5->StatData).Pad[0x36] = '\0';
  (pTVar5->StatData).Pad[0x37] = '\0';
  pTVar5 = &this->ComplexStat;
  (pTVar5->StatData).Pad[0x38] = '\0';
  (pTVar5->StatData).Pad[0x39] = '\0';
  (pTVar5->StatData).Pad[0x3a] = '\0';
  (pTVar5->StatData).Pad[0x3b] = '\0';
  (pTVar5->StatData).Pad[0x3c] = '\0';
  (pTVar5->StatData).Pad[0x3d] = '\0';
  (pTVar5->StatData).Pad[0x3e] = '\0';
  (pTVar5->StatData).Pad[0x3f] = '\0';
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
           *)&this->Children,
          *(int *)&(param_1->Children).field_0x8 - *(int *)&(param_1->Children).field_0x34);
  local_88 = &param_1->Children;
  aVar12._0_4_ = 0;
  uVar11 = *(uint *)&(param_1->Children).field_0x28;
  local_78 = &(param_1->Children).field_0x10;
  uVar10 = 1;
  aVar13._0_4_ = 0;
  uStack_6c = aVar12._0_4_;
  if (uVar11 != 0) {
    puVar14 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_78;
    }
    uVar2 = *puVar14;
    aVar6 = aVar15;
    aVar7 = aVar15;
    aVar13._0_4_ = 0;
    aVar12._0_4_ = 0;
    while (uVar2 == 0) {
      aVar13._0_4_ = aVar7._0_4_ + 0x20;
      aVar13._4_4_ = 0;
      aVar12._0_4_ = aVar6._0_4_ + 1;
      aVar12._4_4_ = 0;
      uStack_6c = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)aVar12._0_4_)
      goto LAB_1419e66da;
      uVar2 = puVar14[(longlong)aVar6._0_4_ + 1];
      aVar6 = aVar12;
      aVar7 = aVar13;
    }
    uVar10 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uStack_6c = (aVar13._0_4_ - 1) + (int)lVar4;
    if ((int)uVar11 < (int)uStack_6c) {
      uStack_6c = uVar11;
    }
  }
LAB_1419e66da:
  uStack_80 = (FComplexRawStatStackNode ***)CONCAT44(uVar10,aVar12._0_4_);
  uStack_70 = 0xffffffff;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = (longlong)uStack_80;
  TStack_50._28_4_ = uStack_6c;
  TStack_50.BaseBitIndex = aVar13._0_4_;
  if ((int)uStack_6c < (int)uVar11) {
    uStack_80 = &local_res8.Value;
    local_68 = aVar13._0_4_;
    uStack_64 = uStack_6c;
    local_58 = local_88;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
    TStack_50.CurrentBitIndex = uStack_6c;
    do {
      iVar9 = TStack_50.CurrentBitIndex;
      this_00 = GetRawStatStackNodeAllocatorEx();
      uVar11 = FLockFreePointerListLIFORoot<64,1>::Pop
                         ((FLockFreePointerListLIFORoot<64,1> *)this_00);
      aVar12 = aVar15;
      if (uVar11 != 0) {
        aVar12 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar11 >> 0xe][uVar11 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar11);
      }
      pTVar8 = local_58;
      if ((aVar12 != (atomic<void_*>)0x0) ||
         (aVar12 = (atomic<void_*>)FMemory::Malloc(0x98,8), aVar13 = aVar15,
         aVar12 != (atomic<void_*>)0x0)) {
        aVar13 = (atomic<void_*>)
                 FComplexRawStatStackNode
                           ((FComplexRawStatStackNode *)aVar12,
                            *(FRawStatStackNode **)
                             (*(longlong *)pTVar8 + 8 + (longlong)iVar9 * 0x18));
      }
      local_88 = (TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                  *)(*(longlong *)pTVar8 + (longlong)iVar9 * 0x18);
      local_res8.Value = (FComplexRawStatStackNode **)aVar13;
      TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FComplexRawStatStackNode_*_&&>_>
                ((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                  *)&this->Children,&local_res8,(bool *)&local_88);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// CullByCycles @ 1419e8cf0

void __thiscall
FComplexRawStatStackNode::CullByCycles(FComplexRawStatStackNode *this,long64 param_1)

{
  atomic<void_*> aVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  FNameEntryId FVar6;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *pTVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  FIndexedLockFreeLink *pFVar9;
  uint uVar10;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTVar11;
  int iVar12;
  int iVar13;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_res8;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_res20;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_88;
  char local_80;
  char cStack_7f;
  undefined4 *local_78;
  longlong *local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  pTVar11 = (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
             *)&this->Children;
  iVar13 = *(int *)&(this->Children).field_0x8 - *(int *)&(this->Children).field_0x34;
  local_res20 = 0;
  local_res8 = pTVar11;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_68,pTVar11);
  local_80 = '\0';
  cStack_7f = '\0';
  stack0xffffffffffffff58 = local_68._16_16_;
  local_b8 = (longlong *)local_68._0_8_;
  auStack_b0._0_8_ = local_68._8_8_;
  local_98 = local_48;
  pTStack_90 = pTStack_40;
  uVar8 = local_68._24_8_ >> 0x20;
  local_88 = pTVar11;
  if ((int)local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
    iVar12 = 1;
    uVar10 = local_68._28_4_;
    do {
      aVar1 = *(atomic<void_*> *)(*local_b8 + 8 + (longlong)(int)uVar8 * 0x18);
      if ((*(int *)((longlong)aVar1 + 0x44) & 0x100000U) == 0) {
        uVar8 = *(ulonglong *)((longlong)aVar1 + 8);
      }
      else {
        uVar8 = (ulonglong)*(uint *)((longlong)aVar1 + 8);
      }
      if ((longlong)uVar8 < param_1) {
        if (iVar13 < 2) {
          pTVar11 = (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                     *)((longlong)aVar1 + 0x48);
          TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
          ::TIterator::TIterator((TIterator *)local_68,pTVar11);
          uVar3 = local_68._0_8_;
          local_c0 = 0;
          stack0xffffffffffffff18 = local_68._16_16_;
          auStack_f0._0_8_ = local_68._8_8_;
          local_d8 = local_48;
          pTStack_d0 = pTStack_40;
          uVar8 = local_68._24_8_ >> 0x20;
          uVar10 = local_68._28_4_;
          local_c8 = pTVar11;
          if ((int)uVar10 < *(int *)(local_68._16_8_ + 0x18)) {
            do {
              aVar1 = *(atomic<void_*> *)(*(longlong *)uVar3 + 8 + (longlong)(int)uVar8 * 0x18);
              if (aVar1 != (atomic<void_*>)0x0) {
                DeleteAllChildrenNodes((FComplexRawStatStackNode *)aVar1);
                TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                ::
                ~TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                          ((TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                            *)((longlong)aVar1 + 0x48));
                pTVar7 = GetRawStatStackNodeAllocatorEx();
                uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar4 == 0) {
                  pFVar9 = (FIndexedLockFreeLink *)0x0;
                }
                else {
                  pFVar9 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff)
                  ;
                }
                pFVar9->Payload = aVar1;
                FLockFreePointerListLIFORoot<64,1>::Push
                          ((FLockFreePointerListLIFORoot<64,1> *)pTVar7,uVar4);
              }
              TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_d0,uVar10);
              local_c0 = CONCAT11(local_c0._1_1_,1);
              uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
              uVar8 = (ulonglong)uStack_dc;
              uVar10 = uStack_dc;
            } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
            if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
              uVar10 = *(int *)&(local_c8->Elements).field_0x8 -
                       *(int *)&(local_c8->Elements).field_0x34;
              if (uVar10 < 4) {
                iVar5 = 1;
              }
              else {
                uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
                lVar2 = 0x3f;
                if (uVar8 != 0) {
                  for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
                  }
                }
                iVar5 = 1 << ((byte)lVar2 & 0x1f);
              }
              if (((0 < (int)uVar10) && (local_c8->HashSize < iVar5)) ||
                 (iVar5 < local_c8->HashSize)) {
                local_c8->HashSize = iVar5;
                TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                ::Rehash(local_c8);
              }
            }
          }
        }
        else {
          if (aVar1 != (atomic<void_*>)0x0) {
            DeleteAllChildrenNodes((FComplexRawStatStackNode *)aVar1);
            TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
            ::
            ~TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                      ((TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                        *)((longlong)aVar1 + 0x48));
            pTVar7 = GetRawStatStackNodeAllocatorEx();
            uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar4 == 0) {
              pFVar9 = (FIndexedLockFreeLink *)0x0;
            }
            else {
              pFVar9 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
            }
            pFVar9->Payload = aVar1;
            FLockFreePointerListLIFORoot<64,1>::Push
                      ((FLockFreePointerListLIFORoot<64,1> *)pTVar7,uVar4);
          }
          TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_90,uVar10);
          local_80 = '\x01';
        }
      }
      else if (0 < iVar13) {
        CullByCycles((FComplexRawStatStackNode *)aVar1,param_1);
      }
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      pTVar11 = local_res8;
      uVar8 = (ulonglong)uStack_9c;
      uVar10 = uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if ((local_80 != '\0') && (cStack_7f != '\0')) {
      uVar10 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (3 < uVar10) {
        uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_88->HashSize < iVar12)) || (iVar12 < local_88->HashSize)) {
        local_88->HashSize = iVar12;
        TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  if (local_res20 != 0) {
    FVar6 = FNameEntryId::FromValidEName((EName)&local_res8);
    local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Value);
    local_78 = &local_res18;
    local_70 = &local_res20;
    local_res1c = 0;
    TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,FComplexRawStatStackNode_*_const_&>_>
              (pTVar11,(TPairInitializer<FName_&&,FComplexRawStatStackNode_*_const_&> *)&local_res8,
               (bool *)&local_78);
  }
  return;
}

// CullByDepth @ 1419e96d0

void __thiscall FComplexRawStatStackNode::CullByDepth(FComplexRawStatStackNode *this,int param_1)

{
  atomic<void_*> this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *this_01;
  ulonglong uVar4;
  FIndexedLockFreeLink *pFVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  uVar6 = local_78._28_4_;
  local_18 = (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children;
  if ((int)uVar6 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = *(atomic<void_*> *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18);
      if (param_1 < 1) {
        if (this_00 != (atomic<void_*>)0x0) {
          DeleteAllChildrenNodes((FComplexRawStatStackNode *)this_00);
          TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
          ::
          ~TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                    ((TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                      *)((longlong)this_00 + 0x48));
          this_01 = GetRawStatStackNodeAllocatorEx();
          uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar2 == 0) {
            pFVar5 = (FIndexedLockFreeLink *)0x0;
          }
          else {
            pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
          }
          pFVar5->Payload = this_00;
          FLockFreePointerListLIFORoot<64,1>::Push
                    ((FLockFreePointerListLIFORoot<64,1> *)this_01,uVar2);
        }
        TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar6);
        local_10 = '\x01';
      }
      else {
        CullByDepth((FComplexRawStatStackNode *)this_00,param_1 + -1);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar6 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// DeleteAllChildrenNodes @ 1419ec2f0

void __thiscall FComplexRawStatStackNode::DeleteAllChildrenNodes(FComplexRawStatStackNode *this)

{
  atomic<void_*> this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *this_01;
  ulonglong uVar4;
  FIndexedLockFreeLink *pFVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = *(atomic<void_*> *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18);
      if (this_00 != (atomic<void_*>)0x0) {
        DeleteAllChildrenNodes((FComplexRawStatStackNode *)this_00);
        TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
        ::
        ~TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                  ((TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
                    *)((longlong)this_00 + 0x48));
        this_01 = GetRawStatStackNodeAllocatorEx();
        uVar2 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar2 == 0) {
          pFVar5 = (FIndexedLockFreeLink *)0x0;
        }
        else {
          pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe] + (uVar2 & 0x3fff);
        }
        pFVar5->Payload = this_00;
        FLockFreePointerListLIFORoot<64,1>::Push
                  ((FLockFreePointerListLIFORoot<64,1> *)this_01,uVar2);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar2 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar2 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar2) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// Divide @ 1419ee400

void __thiscall FComplexRawStatStackNode::Divide(FComplexRawStatStackNode *this,uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  uVar2 = (this->ComplexStat).NameAndInfo.Number & 0xe00;
  iVar4 = 1;
  if ((uVar2 != 0x200) && (uVar2 != 0x800)) {
    FComplexStatUtils::DivideStat(&this->ComplexStat,param_1,IncSum,IncAve);
  }
  TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      Divide(*(FComplexRawStatStackNode **)(*local_48 + 8 + (longlong)(int)uVar3 * 0x18),param_1);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar2 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (3 < uVar2) {
        uVar3 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar2) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// MergeAddAndMinMax @ 141a0b410

void __thiscall
FComplexRawStatStackNode::MergeAddAndMinMax
          (FComplexRawStatStackNode *this,FRawStatStackNode *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar4;
  uint uVar5;
  TTuple<FName,FComplexRawStatStackNode_*> *pTVar6;
  TLockFreeFixedSizeAllocator<152,64,FNoopCounter> *this_00;
  atomic<void_*> this_01;
  FComplexRawStatStackNode *pFVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  TPairInitializer<FName_const_&,FComplexRawStatStackNode_*_&&> local_res8;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  FComplexStatUtils::AddAndMinMax(&this->ComplexStat,&param_1->Meta,IncSum,IncMax,IncMin);
  local_88 = &param_1->Children;
  iVar10 = 0;
  iVar2 = *(int *)&(param_1->Children).field_0x28;
  local_78 = &(param_1->Children).field_0x10;
  local_68 = 0;
  uVar5 = 1;
  iStack_6c = 0;
  if (iVar2 != 0) {
    puVar11 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)local_78;
    }
    uVar3 = *puVar11;
    while (uVar3 == 0) {
      lVar8 = (longlong)iVar10;
      local_68 = local_68 + 0x20;
      iVar10 = iVar10 + 1;
      iStack_6c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_141a0b4c9;
      uVar3 = puVar11[lVar8 + 1];
    }
    uVar5 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_6c = (int)lVar8 + -1 + local_68;
    if (iVar2 < iStack_6c) {
      iStack_6c = iVar2;
    }
  }
LAB_141a0b4c9:
  uStack_80 = (FComplexRawStatStackNode ***)CONCAT44(uVar5,iVar10);
  uStack_70 = 0xffffffff;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = (longlong)uStack_80;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar2) {
    do {
      pTVar4 = local_58;
      lVar9 = (longlong)TStack_50.CurrentBitIndex;
      lVar8 = (longlong)TStack_50.CurrentBitIndex;
      pTVar6 = TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                       *)&this->Children,*(FName *)(lVar8 * 0x18 + *(longlong *)local_58));
      if ((pTVar6 == (TTuple<FName,FComplexRawStatStackNode_*> *)0x0) ||
         (*(FComplexRawStatStackNode **)&pTVar6->field_0x8 == (FComplexRawStatStackNode *)0x0)) {
        this_00 = GetRawStatStackNodeAllocatorEx();
        uVar5 = FLockFreePointerListLIFORoot<64,1>::Pop
                          ((FLockFreePointerListLIFORoot<64,1> *)this_00);
        this_01 = (atomic<void_*>)0x0;
        if (uVar5 != 0) {
          this_01 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe][uVar5 & 0x3fff].Payload;
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
        }
        if (this_01 == (atomic<void_*>)0x0) {
          this_01 = (atomic<void_*>)FMemory::Malloc(0x98,8);
          pFVar7 = (FComplexRawStatStackNode *)0x0;
          if (this_01 != (atomic<void_*>)0x0) goto LAB_141a0b5bd;
        }
        else {
LAB_141a0b5bd:
          pFVar7 = FComplexRawStatStackNode
                             ((FComplexRawStatStackNode *)this_01,
                              *(FRawStatStackNode **)(*(longlong *)pTVar4 + 8 + lVar9 * 0x18));
        }
        uStack_80 = &local_res8.Value;
        local_88 = (TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                    *)(*(longlong *)pTVar4 + lVar8 * 0x18);
        local_res8.Value = (FComplexRawStatStackNode **)pFVar7;
        TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FComplexRawStatStackNode_*_&&>_>
                  ((TSet<TTuple<FName,FComplexRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>,FDefaultSetAllocator>
                    *)&this->Children,&local_res8,(bool *)&local_88);
      }
      else {
        MergeAddAndMinMax(*(FComplexRawStatStackNode **)&pTVar6->field_0x8,
                          *(FRawStatStackNode **)(*(longlong *)pTVar4 + 8 + lVar9 * 0x18));
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

