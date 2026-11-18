// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 21

// Sort<FStatCallCountComparer<FRawStatStackNode>_> @ 1419cab60

void __thiscall
FRawStatStackNode::Sort<FStatCallCountComparer<FRawStatStackNode>_>
          (FRawStatStackNode *this,FStatCallCountComparer<FRawStatStackNode> *param_1)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  FValueComparisonClass<FStatCallCountComparer<FRawStatStackNode>_> local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->Children;
  local_res8.Predicate.Predicate =
       (TDereferenceWrapper<FRawStatStackNode_*,FStatCallCountComparer<FRawStatStackNode>_>)
       (TDereferenceWrapper<FRawStatStackNode_*,FStatCallCountComparer<FRawStatStackNode>_>)param_1;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>::FValueComparisonClass<FStatCallCountComparer<FRawStatStackNode>_>_>
            ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8);
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      Sort<FStatCallCountComparer<FRawStatStackNode>_>
                (*(FRawStatStackNode **)(*local_48 + 8 + (longlong)(int)uVar3 * 0x18),param_1);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// Sort<FStatDurationComparer<FRawStatStackNode>_> @ 1419cacb0

void __thiscall
FRawStatStackNode::Sort<FStatDurationComparer<FRawStatStackNode>_>
          (FRawStatStackNode *this,FStatDurationComparer<FRawStatStackNode> *param_1)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  FValueComparisonClass<FStatDurationComparer<FRawStatStackNode>_> local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->Children;
  local_res8.Predicate.Predicate =
       (TDereferenceWrapper<FRawStatStackNode_*,FStatDurationComparer<FRawStatStackNode>_>)
       (TDereferenceWrapper<FRawStatStackNode_*,FStatDurationComparer<FRawStatStackNode>_>)param_1;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>::FValueComparisonClass<FStatDurationComparer<FRawStatStackNode>_>_>
            ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8);
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      Sort<FStatDurationComparer<FRawStatStackNode>_>
                (*(FRawStatStackNode **)(*local_48 + 8 + (longlong)(int)uVar3 * 0x18),param_1);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// Sort<FStatNameComparer<FRawStatStackNode>_> @ 1419cae00

void __thiscall
FRawStatStackNode::Sort<FStatNameComparer<FRawStatStackNode>_>
          (FRawStatStackNode *this,FStatNameComparer<FRawStatStackNode> *param_1)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  FValueComparisonClass<FStatNameComparer<FRawStatStackNode>_> local_res8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->Children;
  local_res8.Predicate.Predicate =
       (TDereferenceWrapper<FRawStatStackNode_*,FStatNameComparer<FRawStatStackNode>_>)
       (TDereferenceWrapper<FRawStatStackNode_*,FStatNameComparer<FRawStatStackNode>_>)param_1;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>::FValueComparisonClass<FStatNameComparer<FRawStatStackNode>_>_>
            ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res8);
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      Sort<FStatNameComparer<FRawStatStackNode>_>
                (*(FRawStatStackNode **)(*local_48 + 8 + (longlong)(int)uVar3 * 0x18),param_1);
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// FRawStatStackNode @ 1419ce750

FRawStatStackNode * __thiscall
FRawStatStackNode::FRawStatStackNode(FRawStatStackNode *this,FRawStatStackNode *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  FStatNameAndInfo FVar4;
  atomic<void_*> aVar5;
  atomic<void_*> aVar6;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_00;
  atomic<void_*> aVar11;
  atomic<void_*> aVar12;
  uint *puVar13;
  atomic<void_*> aVar14;
  TPairInitializer<FName_const_&,FRawStatStackNode_*_&&> local_res8;
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
  
  FVar4 = (param_1->Meta).NameAndInfo;
  aVar14 = (atomic<void_*>)0x0;
  *(undefined8 *)(this->Meta).StatData.Pad = *(undefined8 *)(param_1->Meta).StatData.Pad;
  (this->Meta).NameAndInfo = FVar4;
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
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
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
      goto LAB_1419ce82a;
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
LAB_1419ce82a:
  uStack_90 = (FRawStatStackNode ***)CONCAT44(uVar9,aVar11._0_4_);
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
      this_00 = GetRawStatStackNodeAllocator();
      uVar10 = FLockFreePointerListLIFORoot<64,1>::Pop
                         ((FLockFreePointerListLIFORoot<64,1> *)this_00);
      aVar11 = aVar14;
      if (uVar10 != 0) {
        aVar11 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar10 >> 0xe][uVar10 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar10);
      }
      pTVar7 = local_68;
      if ((aVar11 != (atomic<void_*>)0x0) ||
         (aVar11 = (atomic<void_*>)FMemory::Malloc(0x60,8), aVar12 = aVar14,
         aVar11 != (atomic<void_*>)0x0)) {
        aVar12 = (atomic<void_*>)
                 FRawStatStackNode((FRawStatStackNode *)aVar11,
                                   *(FRawStatStackNode **)
                                    (*(longlong *)pTVar7 + 8 + (longlong)iVar8 * 0x18));
      }
      local_98 = (TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                  *)(*(longlong *)pTVar7 + (longlong)iVar8 * 0x18);
      local_res8.Value = (FRawStatStackNode **)aVar12;
      TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FRawStatStackNode_*_&&>_>
                ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                  *)&this->Children,&local_res8,(bool *)&local_98);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return this;
}

// FRawStatStackNode @ 1419ce970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRawStatStackNode * __thiscall FRawStatStackNode::FRawStatStackNode(FRawStatStackNode *this)

{
  uint uVar1;
  undefined1 auStack_268 [32];
  FName local_248;
  FName local_240;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_240 = FStatConstants::NAME_ThreadRoot;
  local_238.Base = local_218;
  (this->Meta).NameAndInfo.Index.Value = 0;
  local_238.CurPos = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.End = (wchar_t *)local_18;
  ::FName::AppendString(&local_240,&local_238);
  if (local_238.End < local_238.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_238,1);
  }
  *local_238.CurPos = L'\0';
  ::FName::FName(&local_248,local_238.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  (this->Meta).NameAndInfo.Index.Value = local_248.ComparisonIndex.Value;
  uVar1 = local_248.Number & 0xffdbf3ff | 0x10200;
  (this->Meta).NameAndInfo.Number = uVar1;
  if (FStatNameAndInfo::GpuStatCategory == (char *)0x0) {
    uVar1 = local_248.Number & 0xffdbf3ff | 0x30200;
  }
  (this->Meta).NameAndInfo.Number = uVar1 & 0xffff1fff | 0x1000;
  *(undefined8 *)&this->Children = 0;
  *(undefined8 *)&(this->Children).field_0x8 = 0;
  *(undefined8 *)&(this->Children).field_0x20 = 0;
  *(undefined4 *)&(this->Children).field_0x28 = 0;
  *(undefined4 *)&(this->Children).field_0x2c = 0x80;
  *(undefined4 *)&(this->Children).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Children).field_0x34 = 0;
  *(undefined8 *)&(this->Children).field_0x40 = 0;
  *(undefined4 *)&(this->Children).field_0x48 = 0;
  return this;
}

// operator_new @ 1419d3410

void * __cdecl FRawStatStackNode::operator_new(ulong64 param_1)

{
  uint uVar1;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this;
  void *pvVar2;
  atomic<void_*> aVar3;
  
  this = GetRawStatStackNodeAllocator();
  uVar1 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this);
  aVar3 = (atomic<void_*>)0x0;
  if (uVar1 != 0) {
    aVar3 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe][uVar1 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
  }
  if (aVar3 == (atomic<void_*>)0x0) {
    pvVar2 = FMemory::Malloc(0x60,8);
    return pvVar2;
  }
  return (void *)aVar3;
}

// operator_delete @ 1419d34f0

void __cdecl FRawStatStackNode::operator_delete(void *param_1)

{
  uint uVar1;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this;
  FIndexedLockFreeLink *pFVar2;
  
  this = GetRawStatStackNodeAllocator();
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

// operator= @ 1419d41d0

FRawStatStackNode * __thiscall
FRawStatStackNode::operator=(FRawStatStackNode *this,FRawStatStackNode *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FStatNameAndInfo FVar4;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar5;
  uint uVar6;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_00;
  atomic<void_*> this_01;
  FRawStatStackNode *pFVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  TPairInitializer<FName_const_&,FRawStatStackNode_*_&&> local_res8;
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
  
  if (this == param_1) {
    return this;
  }
  DeleteAllChildrenNodes(this);
  FVar4 = (param_1->Meta).NameAndInfo;
  *(undefined8 *)(this->Meta).StatData.Pad = *(undefined8 *)(param_1->Meta).StatData.Pad;
  (this->Meta).NameAndInfo = FVar4;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
           *)&this->Children,
          *(int *)&(param_1->Children).field_0x8 - *(int *)&(param_1->Children).field_0x34);
  local_88 = &param_1->Children;
  iVar9 = 0;
  iVar2 = *(int *)&(param_1->Children).field_0x28;
  local_78 = &(param_1->Children).field_0x10;
  local_68 = 0;
  uVar6 = 1;
  iStack_6c = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)local_78;
    }
    uVar3 = *puVar10;
    while (uVar3 == 0) {
      lVar8 = (longlong)iVar9;
      local_68 = local_68 + 0x20;
      iVar9 = iVar9 + 1;
      iStack_6c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1419d4299;
      uVar3 = puVar10[lVar8 + 1];
    }
    uVar6 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
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
LAB_1419d4299:
  uStack_80 = (FRawStatStackNode ***)CONCAT44(uVar6,iVar9);
  uStack_70 = 0xffffffff;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = (longlong)uStack_80;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  if (iStack_6c < iVar2) {
    uStack_80 = &local_res8.Value;
    iStack_64 = iStack_6c;
    local_58 = local_88;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
    TStack_50.CurrentBitIndex = iStack_6c;
    do {
      iVar2 = TStack_50.CurrentBitIndex;
      this_00 = GetRawStatStackNodeAllocator();
      uVar6 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)this_00)
      ;
      this_01 = (atomic<void_*>)0x0;
      if (uVar6 != 0) {
        this_01 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe][uVar6 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar6);
      }
      pTVar5 = local_58;
      if (this_01 == (atomic<void_*>)0x0) {
        this_01 = (atomic<void_*>)FMemory::Malloc(0x60,8);
        pFVar7 = (FRawStatStackNode *)0x0;
        if (this_01 != (atomic<void_*>)0x0) goto LAB_1419d4347;
      }
      else {
LAB_1419d4347:
        pFVar7 = FRawStatStackNode((FRawStatStackNode *)this_01,
                                   *(FRawStatStackNode **)
                                    (*(longlong *)pTVar5 + 8 + (longlong)iVar2 * 0x18));
      }
      local_88 = (TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                  *)(*(longlong *)pTVar5 + (longlong)iVar2 * 0x18);
      local_res8.Value = (FRawStatStackNode **)pFVar7;
      TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FRawStatStackNode_*_&&>_>
                ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                  *)&this->Children,&local_res8,(bool *)&local_88);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return this;
}

// AddNameHierarchy @ 1419db0e0

/* WARNING: Removing unreachable block (ram,0x0001419dbbe6) */

void __thiscall FRawStatStackNode::AddNameHierarchy(FRawStatStackNode *this,int param_1)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  atomic<void_*> *paVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  code *pcVar6;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *this_01;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_02;
  atomic<void_*> aVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  atomic<void_*> aVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong local_res8;
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_1f8;
  int local_1f0;
  int local_1ec;
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  uint local_1d8;
  TArray<FRawStatStackNode_*,TSizedDefaultAllocator<32>_> local_1d0;
  int local_1c0;
  uint local_1bc;
  atomic<void_*> local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  uint uStack_19c;
  longlong local_198;
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  FString local_180;
  longlong local_170;
  undefined8 uStack_168;
  FName local_160;
  longlong local_158;
  longlong local_150;
  int local_148;
  FString local_140;
  FName local_130;
  undefined4 local_128;
  uint local_124;
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [8];
  FName local_110;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_108;
  longlong *local_f8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_c8;
  undefined2 local_c0;
  undefined4 *local_b8;
  FScriptContainerElement *local_b0;
  undefined4 *local_a8;
  FScriptContainerElement *local_a0;
  FString local_98;
  FString local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  iVar8 = *(int *)&(this->Children).field_0x8;
  this_00 = &this->Children;
  iVar3 = *(int *)&(this->Children).field_0x34;
  if (iVar8 != iVar3) {
    local_108 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                 *)this_00;
    if (((iVar8 - iVar3 < 2) ||
        (uVar22 = (this->Meta).NameAndInfo.Number, (uVar22 & 0xe00) != 0x400)) ||
       ((uVar22 >> 0x14 & 1) == 0)) {
      TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_78,
                 (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                  *)this_00);
      local_c0 = 0;
      stack0xffffffffffffff18 = local_78._16_16_;
      local_f8 = (longlong *)local_78._0_8_;
      auStack_f0._0_8_ = local_78._8_8_;
      local_d8 = local_58;
      pTStack_d0 = pTStack_50;
      uVar21 = local_78._24_8_ >> 0x20;
      local_c8 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                  *)this_00;
      if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
        do {
          AddNameHierarchy(*(FRawStatStackNode **)(*local_f8 + 8 + (longlong)(int)uVar21 * 0x18),0);
          uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
          uVar21 = (ulonglong)uStack_dc;
        } while ((int)uStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
        if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
          uVar22 = *(int *)&(local_c8->Elements).field_0x8 -
                   *(int *)&(local_c8->Elements).field_0x34;
          if (uVar22 < 4) {
            iVar8 = 1;
          }
          else {
            uVar21 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar8 = 1 << ((byte)lVar19 & 0x1f);
          }
          if (((0 < (int)uVar22) && (local_c8->HashSize < iVar8)) || (iVar8 < local_c8->HashSize)) {
            local_c8->HashSize = iVar8;
            TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
            ::Rehash(local_c8);
            return;
          }
        }
      }
    }
    else {
      uVar21 = 0;
      local_1e8.Data = (FScriptContainerElement *)0x0;
      local_1dc = 0;
      local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.ArrayNum = 0;
      local_1d0.ArrayMax = 0;
      TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                  *)this_00,&local_1d0);
      AlgoImpl::
      IntroSortInternal<FRawStatStackNode_*,int,FIdentityFunctor,TDereferenceWrapper<FRawStatStackNode_*,FStatNameComparer<FRawStatStackNode>_>_>
                ((FRawStatStackNode **)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum,
                 local_res8._0_1_,(FStatNameComparer<FRawStatStackNode> *)local_res18);
      iVar8 = local_1d0.ArrayNum;
      local_1f8.Data = (FScriptContainerElement *)0x0;
      local_1ec = 0;
      if (local_1d0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_1d0._8_8_ & 0xffffffff);
      }
      DestructItems<TArray<FName,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)0x0,0);
      local_1f0 = 0;
      if (local_1ec != iVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar8,&local_1f8,0,&local_1ec);
      }
      if (local_1d0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_1d0._8_8_ & 0xffffffff);
      }
      local_1e0 = 0;
      if (local_1dc != local_1d0.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_1d0.ArrayNum,&local_1e8,0,&local_1dc);
      }
      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Data.ArrayNum = 0;
      local_180.Data.ArrayMax = 0;
      if (0 < local_1d0.ArrayNum) {
        local_res8 = 0;
        uVar17 = uVar21;
        do {
          uVar20 = (uint)uVar17;
          uVar22 = 0;
          if ((int)uVar20 < local_1d0.ArrayNum) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar19 = *(longlong *)(local_1d0.AllocatorInstance.Data + local_res8);
          if (local_1f0 == local_1ec) {
            local_1f0 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_1f8,&local_1ec);
          }
          lVar11 = (longlong)local_1f0;
          local_1f0 = local_1f0 + 1;
          *(undefined8 *)&local_1f8.Data[lVar11 * 0x10].field_0x0 = 0;
          *(undefined8 *)(local_1f8.Data + lVar11 * 0x10 + 8) = 0;
          uVar22 = 0;
          if ((int)uVar20 < local_1f0) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_190.ArrayNum = 0;
          local_190.ArrayMax = 0;
          pFVar15 = local_1f8.Data + uVar21;
          local_130.ComparisonIndex.Value = *(uint *)(lVar19 + 8);
          local_130.Number = *(uint *)(lVar19 + 0xc) & 0x1ff;
          pFVar9 = ::FName::ToString(&local_130,&local_98);
          if (&local_180 != pFVar9) {
            if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_180.Data.AllocatorInstance.Data);
            }
            local_180.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
            (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_180.Data.ArrayNum = (pFVar9->Data).ArrayNum;
            local_180.Data.ArrayMax = (pFVar9->Data).ArrayMax;
            (pFVar9->Data).ArrayNum = 0;
            (pFVar9->Data).ArrayMax = 0;
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          bVar7 = ::FString::StartsWith(&local_180,L"//",2,IgnoreCase);
          if (bVar7) {
            local_1a0 = *(undefined4 *)(lVar19 + 8);
                    /* WARNING: Load size is inaccurate */
            uStack_19c = *(uint *)(lVar19 + 0xc) & 0x1ff;
            if (((*pFVar15 <= (FScriptContainerElement *)&local_1a0) &&
                ((FScriptContainerElement *)&local_1a0 <
                 *pFVar15 + (longlong)*(int *)(pFVar15 + 0xc) * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = *(int *)(pFVar15 + 8);
            if (iVar8 == *(int *)(pFVar15 + 0xc)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
            }
            *(int *)(pFVar15 + 8) = iVar8 + 1;
                    /* WARNING: Load size is inaccurate */
            *(ulonglong *)(*pFVar15 + (longlong)iVar8 * 8) = CONCAT44(uStack_19c,local_1a0);
          }
          else {
            ::FString::ReplaceInline(&local_180,L"/",L".",IgnoreCase);
            ::FString::ParseIntoArray(&local_180,&local_190,L".",true);
            if ((local_190.ArrayNum == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Parts.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                   ,0xdb,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_190.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(local_190._8_8_ & 0xffffffff);
            }
            *(undefined4 *)(pFVar15 + 8) = 0;
            pFVar1 = pFVar15 + 0xc;
            if (*(int *)(pFVar15 + 0xc) != local_190.ArrayNum) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,local_190.ArrayNum,(ForAnyElementType *)pFVar15,0,(int *)pFVar1);
            }
            uVar22 = 0;
            if (0 < local_190.ArrayNum) {
              lVar19 = 0;
              do {
                uVar23 = 0;
                if ((int)uVar22 < local_190.ArrayNum) {
                  uVar23 = ~uVar22 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(int *)(local_190.AllocatorInstance.Data + lVar19 + 8) == 0) {
                  pwVar12 = L"";
                }
                else {
                  pwVar12 = *(wchar_t **)(local_190.AllocatorInstance.Data + lVar19);
                }
                ::FName::FName(&local_160,pwVar12);
                    /* WARNING: Load size is inaccurate */
                if (((*pFVar15 <= &local_160) &&
                    (&local_160 < (FName *)(*pFVar15 + (longlong)*(int *)pFVar1 * 8))) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar8 = *(int *)(pFVar15 + 8);
                if (iVar8 == *(int *)pFVar1) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,(ForAnyElementType *)pFVar15,(int *)pFVar1);
                }
                uVar22 = uVar22 + 1;
                *(int *)(pFVar15 + 8) = iVar8 + 1;
                lVar19 = lVar19 + 0x10;
                    /* WARNING: Load size is inaccurate */
                *(FName *)(*pFVar15 + (longlong)iVar8 * 8) = local_160;
              } while ((int)uVar22 < local_190.ArrayNum);
            }
          }
          DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum)
          ;
          if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.AllocatorInstance.Data);
          }
          local_res8 = local_res8 + 8;
          uVar17 = (ulonglong)(uVar20 + 1);
          uVar21 = uVar21 + 0x10;
        } while ((int)(uVar20 + 1) < local_1d0.ArrayNum);
      }
      uVar21 = 0;
      local_1d8 = 0;
      if (0 < local_1d0.ArrayNum) {
        local_158 = (longlong)param_1;
        local_1b0 = 0;
        uVar17 = uVar21;
        do {
          uVar23 = (uint)uVar17;
          uVar22 = ~uVar23 >> 0x1f;
          uVar20 = 0;
          if ((int)uVar23 < local_1f0) {
            uVar20 = uVar22;
          }
          local_res20 = uVar22;
          if ((uVar20 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_170 = uVar21 * 0x10;
          local_1c0 = 1;
          local_150 = 1;
          if (*(int *)(local_1f8.Data + local_170 + 8) - param_1 < 1) {
LAB_1419dc156:
            uVar20 = 0;
            if ((int)uVar23 < local_1d0.ArrayNum) {
              uVar20 = uVar22;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            AddNameHierarchy(*(FRawStatStackNode **)(local_1d0.AllocatorInstance.Data + uVar21 * 8),
                             0);
            uVar20 = 0;
            if ((int)uVar23 < local_1d0.ArrayNum) {
              uVar20 = uVar22;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            paVar2 = (atomic<void_*> *)(local_1d0.AllocatorInstance.Data + uVar21 * 8);
            if (((local_1e8.Data <= paVar2) &&
                (paVar2 < (atomic<void_*> *)(local_1e8.Data + (longlong)local_1dc * 8))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_1e0 == local_1dc) {
              local_1e0 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_1e8,&local_1dc);
            }
            local_1d8 = uVar23 + 1;
            uVar17 = (ulonglong)local_1d8;
            uVar21 = uVar21 + 1;
            *(atomic<void_*> *)(local_1e8.Data + (longlong)local_1e0 * 8) = *paVar2;
            local_1e0 = local_1e0 + 1;
            local_1b0 = uVar21;
          }
          else {
            uVar16 = (ulonglong)(int)(uVar23 + 1);
            if (local_1d0.ArrayNum <= (int)(uVar23 + 1)) goto LAB_1419dc156;
            lVar19 = (longlong)(int)uVar23;
            lVar11 = uVar16 << 4;
            local_1a8 = lVar19;
            do {
              uVar23 = (uint)uVar16;
              uVar20 = 0;
              if ((int)uVar23 < local_1f0) {
                uVar20 = ~uVar23 >> 0x1f;
              }
              lVar4 = local_1a8;
              if ((uVar20 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 lVar4 = lVar19, bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar19 = lVar4;
              if (*(int *)(local_1f8.Data + lVar11 + 8) <= param_1) break;
              uVar20 = 0;
              if ((int)uVar17 < local_1f0) {
                uVar20 = uVar22;
              }
              if ((uVar20 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar13.Data = local_1f8.Data;
              uVar22 = 0;
              if (param_1 < *(int *)(local_1f8.Data + lVar19 * 0x10 + 8)) {
                uVar22 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar4 = *(longlong *)&FVar13.Data[lVar19 * 0x10].field_0x0;
              uVar22 = 0;
              if ((int)uVar23 < local_1f0) {
                uVar22 = ~uVar23 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar13.Data = local_1f8.Data;
              uVar22 = 0;
              if (param_1 < *(int *)(local_1f8.Data + lVar11 + 8)) {
                uVar22 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar17 = (ulonglong)local_1d8;
              uVar22 = local_res20;
              if (*(longlong *)(*(longlong *)(FVar13.Data + lVar11) + local_158 * 8) !=
                  *(longlong *)(lVar4 + local_158 * 8)) break;
              local_150 = local_150 + 1;
              local_1c0 = local_1c0 + 1;
              uVar16 = (ulonglong)(uVar23 + 1);
              lVar11 = lVar11 + 0x10;
            } while ((int)(uVar23 + 1) < local_1d0.ArrayNum);
            uVar23 = (uint)uVar17;
            uVar21 = local_1b0;
            lVar19 = local_158;
            uVar20 = param_1;
            if (local_150 < 2) goto LAB_1419dc156;
            while( true ) {
              iVar8 = local_1c0;
              uVar20 = uVar20 + 1;
              local_198 = lVar19 + 1;
              uVar23 = (uint)uVar17;
              uVar24 = 0;
              if ((int)uVar23 < local_1f0) {
                uVar24 = uVar22;
              }
              local_1bc = uVar20;
              if ((uVar24 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar24 = uVar23;
              if (*(int *)(local_1f8.Data + local_170 + 8) <= (int)uVar20) break;
              local_148 = iVar8 + uVar23;
              lVar11 = (local_1b0 + 1) * 0x10;
              while( true ) {
                uVar24 = (uint)uVar17;
                uVar23 = uVar23 + 1;
                uVar22 = local_res20;
                lVar19 = local_198;
                if (local_148 <= (int)uVar23) break;
                uVar22 = 0;
                if ((int)uVar23 < local_1f0) {
                  uVar22 = ~uVar23 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar22 = local_res20;
                if (*(int *)(local_1f8.Data + lVar11 + 8) <= (int)uVar20) goto LAB_1419dbbf9;
                uVar22 = 0;
                if ((int)uVar24 < local_1f0) {
                  uVar22 = local_res20;
                }
                if ((uVar22 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar19 = local_170;
                FVar13.Data = local_1f8.Data;
                uVar22 = 0;
                if ((int)uVar20 < *(int *)(local_1f8.Data + local_170 + 8)) {
                  uVar22 = ~uVar20 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar19 = *(longlong *)(FVar13.Data + lVar19);
                uVar22 = 0;
                if ((int)uVar23 < local_1f0) {
                  uVar22 = ~uVar23 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar13.Data = local_1f8.Data;
                uVar22 = 0;
                if ((int)uVar20 < *(int *)(local_1f8.Data + lVar11 + 8)) {
                  uVar22 = ~uVar20 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar17 = (ulonglong)local_1d8;
                uVar22 = local_res20;
                uVar24 = local_1d8;
                if (*(longlong *)(*(longlong *)(FVar13.Data + lVar11) + local_198 * 8) !=
                    *(longlong *)(lVar19 + local_198 * 8)) goto LAB_1419dbbf9;
                lVar11 = lVar11 + 0x10;
              }
            }
LAB_1419dbbf9:
            lVar19 = local_170;
            uVar17 = 0;
            ::FString::FString(&local_140,L"NameFolder//");
            uVar20 = local_1bc;
            uVar21 = uVar17;
            if (0 < (int)local_1bc) {
              do {
                uVar23 = 0;
                if ((int)uVar24 < local_1f0) {
                  uVar23 = uVar22;
                }
                if ((uVar23 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar13.Data = local_1f8.Data;
                uVar14 = (uint)uVar17;
                uVar23 = 0;
                if ((int)uVar14 < *(int *)(local_1f8.Data + lVar19 + 8)) {
                  uVar23 = ~uVar14 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar9 = ::FName::ToString((FName *)(*(longlong *)(FVar13.Data + lVar19) +
                                                    uVar21 * 8),&local_88);
                iVar3 = (pFVar9->Data).ArrayNum;
                iVar8 = iVar3 + -1;
                if (iVar3 == 0) {
                  iVar8 = 0;
                }
                ::FString::AppendChars
                          (&local_140,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar8);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
                ::FString::AppendChars(&local_140,L".",1);
                uVar17 = (ulonglong)(uVar14 + 1);
                uVar21 = uVar21 + 1;
              } while ((int)(uVar14 + 1) < (int)uVar20);
            }
            aVar18 = (atomic<void_*>)0x0;
            ::FString::AppendChars(&local_140,L"..",2);
            lVar19 = local_1a8;
            uVar20 = 0;
            if ((int)uVar24 < local_1d0.ArrayNum) {
              uVar20 = uVar22;
            }
            if ((uVar20 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar21 = local_1b0;
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_140.Data.ArrayNum != 0) {
              FVar13.Data = local_140.Data.AllocatorInstance.Data;
            }
            lVar11 = local_1b0 * 8;
            local_170 = **(undefined8 **)(local_1d0.AllocatorInstance.Data + lVar11);
            uStack_168 = (*(undefined8 **)(local_1d0.AllocatorInstance.Data + lVar11))[1];
            ::FName::FName(&local_110,(wchar_t *)FVar13.Data);
            local_170 = 0;
            uStack_168 = CONCAT44(local_110.Number | uStack_168._4_4_ & 0xfffffe00,
                                  local_110.ComparisonIndex.Value.Value);
            this_02 = GetRawStatStackNodeAllocator();
            uVar22 = FLockFreePointerListLIFORoot<64,1>::Pop
                               ((FLockFreePointerListLIFORoot<64,1> *)this_02);
            aVar10 = aVar18;
            if (uVar22 != 0) {
              aVar10 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar22 >> 0xe][uVar22 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar22);
            }
            if ((aVar10 != (atomic<void_*>)0x0) ||
               (aVar10 = (atomic<void_*>)FMemory::Malloc(0x60,8), aVar10 != (atomic<void_*>)0x0)) {
              aVar18 = aVar10;
              *(longlong *)aVar18 = local_170;
              *(undefined8 *)((longlong)aVar18 + 8) = uStack_168;
              *(undefined8 *)((longlong)aVar18 + 0x10) = 0;
              *(undefined8 *)((longlong)aVar18 + 0x18) = 0;
              *(undefined8 *)((longlong)aVar18 + 0x30) = 0;
              *(undefined4 *)((longlong)aVar18 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar18 + 0x3c) = 0x80;
              *(undefined4 *)((longlong)aVar18 + 0x40) = 0xffffffff;
              *(undefined4 *)((longlong)aVar18 + 0x44) = 0;
              *(undefined8 *)((longlong)aVar18 + 0x50) = 0;
              *(undefined4 *)((longlong)aVar18 + 0x58) = 0;
            }
            local_1b8 = aVar18;
            if (((local_1e8.Data <= &local_1b8) &&
                (&local_1b8 < (atomic<void_*> *)(local_1e8.Data + (longlong)local_1dc * 8))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_1e0 == local_1dc) {
              local_1e0 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_1e8,&local_1dc);
            }
            uVar24 = uVar24 + local_1c0;
            uVar17 = (ulonglong)uVar24;
            *(atomic<void_*> *)(local_1e8.Data + (longlong)local_1e0 * 8) = local_1b8;
            local_1e0 = local_1e0 + 1;
            for (uVar22 = local_1d8; (int)uVar22 < (int)uVar24; uVar22 = uVar22 + 1) {
              uVar23 = ~uVar22 >> 0x1f;
              uVar20 = 0;
              if ((int)uVar22 < local_1d0.ArrayNum) {
                uVar20 = uVar23;
              }
              if ((uVar20 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              aVar18 = local_1b8;
              pdVar5 = *(double **)(local_1d0.AllocatorInstance.Data + lVar11);
              if ((((*(uint *)((longlong)local_1b8 + 0xc) ^ *(uint *)((longlong)pdVar5 + 0xc)) &
                   0xe00) != 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                     ,0x7d5,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (((((byte)(*(uint *)((longlong)aVar18 + 0xc) >> 0x14) ^
                    (byte)(*(uint *)((longlong)pdVar5 + 0xc) >> 0x14)) & 1) != 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                     ,0x7d6,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar20 = *(int *)((longlong)pdVar5 + 0xc) >> 9 & 7;
              if (uVar20 == 2) {
                *(longlong *)aVar18 = (longlong)*(double *)aVar18 + (longlong)*pdVar5;
              }
              else if (uVar20 == 3) {
                *(double *)aVar18 = *(double *)aVar18 + *pdVar5;
              }
              else if ((uVar20 != 5) &&
                      (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                         ("0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                          ,0x816,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              aVar18 = local_1b8;
              uVar20 = 0;
              if ((int)uVar22 < local_1d0.ArrayNum) {
                uVar20 = uVar23;
              }
              if ((uVar20 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar15 = local_1d0.AllocatorInstance.Data + lVar19 * 8;
              uVar20 = 0;
              if ((int)uVar22 < local_1d0.ArrayNum) {
                uVar20 = uVar23;
              }
              if ((uVar20 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_128 = *(undefined4 *)
                           (*(longlong *)(local_1d0.AllocatorInstance.Data + lVar11) + 8);
              local_124 = *(uint *)(*(longlong *)(local_1d0.AllocatorInstance.Data + lVar11) + 0xc)
                          & 0x1ff;
              local_b8 = &local_128;
              local_b0 = pFVar15;
              TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_&&,FRawStatStackNode_*_const_&>_>
                        ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                          *)((longlong)aVar18 + 0x10),
                         (TPairInitializer<FName_&&,FRawStatStackNode_*_const_&> *)local_118,
                         (bool *)&local_b8);
              lVar19 = lVar19 + 1;
              lVar11 = lVar11 + 8;
              uVar21 = local_1b0;
            }
            AddNameHierarchy((FRawStatStackNode *)local_1b8,local_1bc);
            uVar21 = uVar21 + local_150;
            local_1d8 = uVar24;
            local_1b0 = uVar21;
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
          }
        } while ((int)uVar17 < local_1d0.ArrayNum);
      }
      this_01 = local_108;
      uVar17 = 0;
      TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
      ::Empty(local_108,local_1e0);
      uVar21 = uVar17;
      if (0 < local_1e0) {
        do {
          uVar20 = (uint)uVar17;
          uVar22 = 0;
          if ((int)uVar20 < local_1e0) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = local_1e8.Data + (longlong)(int)uVar20 * 8;
          uVar22 = 0;
          if ((int)uVar20 < local_1e0) {
            uVar22 = ~uVar20 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_120 = *(undefined4 *)(*(longlong *)(local_1e8.Data + uVar21) + 8);
          local_11c = *(uint *)(*(longlong *)(local_1e8.Data + uVar21) + 0xc) & 0x1ff;
          local_a8 = &local_120;
          local_a0 = pFVar15;
          TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&&,FRawStatStackNode_*_const_&>_>
                    (this_01,(TPairInitializer<FName_&&,FRawStatStackNode_*_const_&> *)
                             (local_118 + 4),(bool *)&local_a8);
          uVar17 = (ulonglong)(uVar20 + 1);
          uVar21 = uVar21 + 8;
        } while ((int)(uVar20 + 1) < local_1e0);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      DestructItems<TArray<FName,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)local_1f8.Data,local_1f0);
      if ((TArray<FName,TSizedDefaultAllocator<32>_> *)local_1f8.Data !=
          (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1f8.Data);
      }
      if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
      if ((atomic<void_*> *)local_1e8.Data != (atomic<void_*> *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
    }
  }
  return;
}

// AddSelf @ 1419dcda0

void __thiscall FRawStatStackNode::AddSelf(FRawStatStackNode *this)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *this_00;
  int iVar1;
  FRawStatStackNode ***pppFVar2;
  int iVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined4 extraout_var_00;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  FRawStatStackNode ***pppFVar13;
  TPairInitializer<FName_&&,FRawStatStackNode_*_&&> local_res8;
  ulonglong *local_res18;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 local_a8;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  FRawStatStackNode ***local_88;
  FStatNameAndInfo FStack_80;
  undefined4 local_6c;
  TIterator local_68;
  
  this_00 = &this->Children;
  if (*(int *)&(this->Children).field_0x8 != *(int *)&(this->Children).field_0x34) {
    uVar11 = (this->Meta).NameAndInfo.Number;
    iVar9 = 1;
    if (((uVar11 & 0xe00) == 0x400) && ((uVar11 >> 0x14 & 1) != 0)) {
      pppFVar2 = *(FRawStatStackNode ****)(this->Meta).StatData.Pad;
      FStack_80 = (this->Meta).NameAndInfo;
      pppFVar13 = (FRawStatStackNode ***)((ulonglong)pppFVar2 & 0xffffffff);
      if (((uint)(this->Meta).NameAndInfo.Number >> 0x14 & 1) == 0) {
        pppFVar13 = pppFVar2;
      }
      iVar1 = *(int *)&(this->Children).field_0x28;
      local_68._padding_ = (longlong)&(this->Children).field_0x10;
      lVar10 = 0;
      local_res8.Key = (FName *)CONCAT44(local_res8.Key._4_4_,1);
      local_68._padding_._0_4_ = 0;
      local_68._padding_._0_4_ = 0;
      iVar3 = 0;
      if (iVar1 != 0) {
        puVar12 = *(uint **)&(this->Children).field_0x20;
        if (puVar12 == (uint *)0x0) {
          puVar12 = (uint *)local_68._padding_;
        }
        uVar11 = *puVar12;
        while (uVar11 == 0) {
          lVar7 = (longlong)(int)local_68._padding_;
          local_68._padding_._0_4_ = (int)local_68._padding_ + 0x20;
          local_68._padding_._0_4_ = (int)local_68._padding_ + 1;
          iVar3 = iVar1;
          if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_68._padding_)
          goto LAB_1419dce9e;
          uVar11 = puVar12[lVar7 + 1];
        }
        local_res8.Key = (FName *)(ulonglong)(-uVar11 & uVar11);
        uVar8 = (longlong)local_res8.Key * 2 + 1;
        lVar7 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar3 = (int)local_68._padding_ + -1 + (int)lVar7;
        if (iVar1 < iVar3) {
          iVar3 = iVar1;
        }
      }
LAB_1419dce9e:
      local_68._padding_._4_4_ = (uint)local_res8.Key;
      auStack_c0._0_8_ = CONCAT44(local_68._padding_._4_4_,(int)local_68._padding_);
      local_68._padding_._0_4_ = 0xffffffff;
      uStack_b0._4_4_ = iVar3;
      uStack_b0._0_4_ = 0xffffffff;
      local_68._padding_._4_4_ = local_6c;
      local_a8._4_4_ = local_6c;
      local_a8._0_4_ = (int)local_68._padding_;
      auStack_c0._8_8_ = local_68._padding_;
      local_88 = pppFVar2;
      local_68._padding_ = (longlong)this_00;
      local_68._padding_._4_4_ = iVar3;
      if (iVar3 < *(int *)&(this->Children).field_0x28) {
        do {
          lVar10 = lVar10 + (ulonglong)
                            **(uint **)(*(longlong *)&this_00->field_0x0 + 8 +
                                       (longlong)iVar3 * 0x18);
          uStack_b0._0_4_ = (uint)uStack_b0 & ~auStack_c0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
          iVar3 = uStack_b0._4_4_;
        } while ((int)uStack_b0._4_4_ < *(int *)(auStack_c0._8_8_ + 0x18));
      }
      if (0 < (longlong)pppFVar13 - lVar10) {
        local_88 = (FRawStatStackNode ***)
                   (((longlong)pppFVar2 >> 0x20) << 0x20 |
                   (longlong)pppFVar13 - lVar10 & 0xffffffffU);
        FVar4 = FNameEntryId::FromValidEName((EName)&local_res8);
        puVar6 = (ulonglong *)0x0;
        local_res8.Key = (FName *)(ulonglong)*(uint *)CONCAT44(extraout_var,FVar4.Value);
        FStack_80 = (FStatNameAndInfo)
                    (CONCAT44(FStack_80.Number,*(uint *)CONCAT44(extraout_var,FVar4.Value)) &
                    0xfffffe00ffffffff);
        puVar5 = operator_new(0x60);
        if (puVar5 != (ulonglong *)0x0) {
          *puVar5 = (ulonglong)local_88;
          puVar5[1] = (ulonglong)FStack_80;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[6] = 0;
          *(undefined4 *)(puVar5 + 7) = 0;
          *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x80;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *(undefined4 *)((longlong)puVar5 + 0x44) = 0;
          puVar5[10] = 0;
          *(undefined4 *)(puVar5 + 0xb) = 0;
          puVar6 = puVar5;
        }
        local_res18 = puVar6;
        FVar4 = FNameEntryId::FromValidEName((EName)&local_res8);
        local_res8.Value._0_4_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar4.Value);
        local_88 = &local_res8.Value;
        FStack_80 = (FStatNameAndInfo)&local_res18;
        local_res8.Value._4_4_ = 0;
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_&&,FRawStatStackNode_*_&&>_>
                  ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                    *)this_00,&local_res8,(bool *)&local_88);
      }
    }
    TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_68,
               (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                *)this_00);
    lVar10 = local_68._padding_;
    uStack_b0._0_4_ = (undefined4)local_68._padding_;
    auStack_c0._8_8_ = local_68._padding_;
    uStack_b0._4_4_ = local_68._padding_._4_4_;
    auStack_c0._0_4_ = (int)local_68._padding_;
    auStack_c0._4_4_ = local_68._padding_._4_4_;
    local_90 = 0;
    local_a8._4_4_ = local_68._padding_._4_4_;
    local_a8._0_4_ = (int)local_68._padding_;
    pTStack_a0 = local_68.Set;
    uVar8 = auStack_c0._16_8_ >> 0x20;
    local_98 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                *)this_00;
    if (local_68._padding_._4_4_ < *(int *)(local_68._padding_ + 0x18)) {
      do {
        AddSelf(*(FRawStatStackNode **)
                 (*(longlong *)(undefined1 *)lVar10 + 8 + (longlong)(int)uVar8 * 0x18));
        uStack_b0._0_4_ = (uint)uStack_b0 & ~auStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
        uVar8 = (ulonglong)uStack_b0._4_4_;
      } while ((int)uStack_b0._4_4_ < *(int *)(auStack_c0._8_8_ + 0x18));
      if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
        if (3 < uVar11) {
          uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar10 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar9 = 1 << ((byte)lVar10 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_98->HashSize < iVar9)) || (iVar9 < local_98->HashSize)) {
          local_98->HashSize = iVar9;
          TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
          ::Rehash(local_98);
        }
      }
    }
  }
  return;
}

// ChildCycles @ 1419e4990

long64 __thiscall FRawStatStackNode::ChildCycles(FRawStatStackNode *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_40;
  uint uStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  uint uStack_24;
  uint local_20;
  int iStack_1c;
  
  uVar4 = 0;
  uVar1 = *(uint *)&(this->Children).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Children).field_0x10;
  uStack_38 = 0;
  uStack_34 = 1;
  uVar7 = uVar4;
  local_20 = uStack_38;
  if (uVar1 != 0) {
    puVar9 = *(uint **)&(this->Children).field_0x20;
    uVar7 = (ulonglong)uVar1;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar9;
    uVar6 = uVar4;
    uVar8 = uVar4;
    local_20 = 0;
    uStack_38 = 0;
    while (uVar3 == 0) {
      iVar5 = (int)uVar6;
      local_20 = (int)uVar8 + 0x20;
      uVar8 = (ulonglong)local_20;
      uStack_38 = iVar5 + 1;
      uVar6 = (ulonglong)uStack_38;
      if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 < (int)uStack_38)
      goto LAB_1419e4a29;
      uVar3 = puVar9[(longlong)iVar5 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar7 = (ulonglong)uStack_34 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = (int)lVar2 + -1 + local_20;
    if ((int)uVar1 < (int)uVar3) {
      uVar3 = uVar1;
    }
    uVar7 = (ulonglong)uVar3;
  }
LAB_1419e4a29:
  uStack_28 = 0xffffffff;
  uStack_24 = (uint)uVar7;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = &this->Children;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = uStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = uStack_24;
  if ((int)uStack_24 < (int)uVar1) {
    do {
      uVar4 = uVar4 + **(uint **)(*(longlong *)&this->Children + 8 + (longlong)(int)uVar7 * 0x18);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar7 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return uVar4;
}

// CullByCycles @ 1419e90d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRawStatStackNode::CullByCycles(FRawStatStackNode *this,long64 param_1)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar1;
  FRawStatStackNode *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNameEntryId FVar6;
  uint uVar7;
  int iVar8;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *pTVar9;
  atomic<void_*> aVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar11;
  atomic<void_*> aVar12;
  FIndexedLockFreeLink *pFVar13;
  atomic<void_*> aVar14;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *this_01;
  int iVar15;
  int iVar16;
  undefined1 auStack_3c8 [32];
  atomic<void_*> local_3a8;
  uint local_3a0;
  undefined4 uStack_39c;
  FName local_398;
  undefined4 local_390;
  undefined4 local_38c;
  longlong *local_388;
  undefined1 auStack_380 [16];
  uint uStack_370;
  uint uStack_36c;
  longlong local_368;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_360;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_358;
  undefined2 local_350;
  longlong *local_348;
  undefined1 auStack_340 [16];
  uint uStack_330;
  uint uStack_32c;
  longlong local_328;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_320;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_318;
  char local_310;
  char cStack_30f;
  undefined1 local_308 [4];
  undefined4 local_304;
  undefined1 local_300 [4];
  undefined1 local_2fc [20];
  double local_2e8;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined4 *local_2d8;
  atomic<void_*> *local_2d0;
  undefined1 local_2c8 [32];
  longlong local_2a8;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_2a0;
  undefined1 local_298 [32];
  longlong local_278;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_270;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_3c8;
  this_01 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
             *)&this->Children;
  iVar16 = *(int *)&(this->Children).field_0x8 - *(int *)&(this->Children).field_0x34;
  local_3a8 = (atomic<void_*>)0x0;
  local_2fc._12_8_ = this_01;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_2c8,this_01);
  local_310 = '\0';
  cStack_30f = '\0';
  stack0xfffffffffffffcc8 = local_2c8._16_16_;
  local_348 = (longlong *)local_2c8._0_8_;
  auStack_340._0_8_ = local_2c8._8_8_;
  local_328 = local_2a8;
  pTStack_320 = pTStack_2a0;
  uVar11 = local_2c8._24_8_ >> 0x20;
  local_318 = this_01;
  if (local_2c8._28_4_ < *(int *)(local_2c8._16_8_ + 0x18)) {
    iVar15 = 1;
    do {
      aVar12 = (atomic<void_*>)0x0;
      this_00 = *(FRawStatStackNode **)(*local_348 + 8 + (longlong)(int)uVar11 * 0x18);
      if ((longlong)(ulonglong)*(uint *)(this_00->Meta).StatData.Pad < param_1) {
        if (iVar16 < 2) {
          pTVar1 = &this_00->Children;
          TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    ((TIterator *)local_298,
                     (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                      *)pTVar1);
          local_350 = 0;
          stack0xfffffffffffffc88 = local_298._16_16_;
          local_388 = (longlong *)local_298._0_8_;
          auStack_380._0_8_ = local_298._8_8_;
          local_368 = local_278;
          pTStack_360 = pTStack_270;
          uVar11 = local_298._24_8_ >> 0x20;
          uVar5 = local_298._28_4_;
          local_358 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                       *)pTVar1;
          if ((int)uVar5 < *(int *)(local_298._16_8_ + 0x18)) {
            do {
              aVar12 = *(atomic<void_*> *)(*local_388 + 8 + (longlong)(int)uVar11 * 0x18);
              if (aVar12 != (atomic<void_*>)0x0) {
                DeleteAllChildrenNodes((FRawStatStackNode *)aVar12);
                TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                ::
                ~TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                          ((TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                            *)((longlong)aVar12 + 0x10));
                pTVar9 = GetRawStatStackNodeAllocator();
                uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar7 == 0) {
                  pFVar13 = (FIndexedLockFreeLink *)0x0;
                }
                else {
                  pFVar13 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe] +
                            (uVar7 & 0x3fff);
                }
                pFVar13->Payload = aVar12;
                FLockFreePointerListLIFORoot<64,1>::Push
                          ((FLockFreePointerListLIFORoot<64,1> *)pTVar9,uVar7);
              }
              TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_360,uVar5);
              local_350 = CONCAT11(local_350._1_1_,1);
              uStack_370 = uStack_370 & ~auStack_380._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_380);
              uVar11 = (ulonglong)uStack_36c;
              uVar5 = uStack_36c;
            } while ((int)uStack_36c < *(int *)(auStack_380._8_8_ + 0x18));
            if (((char)local_350 != '\0') && (local_350._1_1_ != '\0')) {
              uVar5 = *(int *)&(local_358->Elements).field_0x8 -
                      *(int *)&(local_358->Elements).field_0x34;
              if (uVar5 < 4) {
                iVar8 = 1;
              }
              else {
                uVar11 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
                lVar2 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
                  }
                }
                local_304 = (undefined4)lVar2;
                iVar8 = 1 << ((byte)lVar2 & 0x1f);
              }
              if (((0 < (int)uVar5) && (local_358->HashSize < iVar8)) ||
                 (iVar8 < local_358->HashSize)) {
                local_358->HashSize = iVar8;
                TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                ::Rehash(local_358);
              }
            }
          }
        }
        else {
          if (local_3a8 == (atomic<void_*>)0x0) {
            pTVar9 = GetRawStatStackNodeAllocator();
            uVar5 = FLockFreePointerListLIFORoot<64,1>::Pop
                              ((FLockFreePointerListLIFORoot<64,1> *)pTVar9);
            aVar10 = aVar12;
            if (uVar5 != 0) {
              aVar10 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe][uVar5 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
            }
            if ((aVar10 != (atomic<void_*>)0x0) ||
               (aVar10 = (atomic<void_*>)FMemory::Malloc(0x60,8), aVar14 = aVar12,
               aVar10 != (atomic<void_*>)0x0)) {
              FVar6 = FNameEntryId::FromValidEName((EName)local_308);
              uStack_39c = 0;
              local_268.bIsDynamic = false;
              local_268.bIsExternal = false;
              local_3a0 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
              local_268.Base = local_248;
              local_268.CurPos = local_248;
              local_2fc._4_8_ = ZEXT48(local_3a0);
              local_268.End = (wchar_t *)local_48;
              ::FName::AppendString((FName *)(local_2fc + 4),&local_268);
              if (local_268.End < local_268.CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(&local_268,1);
              }
              *local_268.CurPos = L'\0';
              ::FName::FName(&local_398,local_268.Base);
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
              uStack_2e0 = local_398.ComparisonIndex.Value;
              uVar5 = local_398.Number & 0xfffff5ff | 0x250400;
              if (FStatNameAndInfo::GpuStatCategory == (char *)0x0) {
                uVar5 = local_398.Number & 0xfffff5ff | 0x270400;
              }
              uStack_2dc = uVar5 & 0xffff1fff | 0x1000;
              *(double *)aVar10 = local_2e8;
              *(ulonglong *)((longlong)aVar10 + 8) =
                   CONCAT44(uVar5,local_398.ComparisonIndex.Value) & 0xffff1fffffffffff |
                   0x100000000000;
              *(double *)((longlong)aVar10 + 0x10) = 0.0;
              *(double *)((longlong)aVar10 + 0x18) = 0.0;
              *(double *)((longlong)aVar10 + 0x30) = 0.0;
              *(undefined4 *)((longlong)aVar10 + 0x38) = 0;
              *(undefined4 *)((longlong)aVar10 + 0x3c) = 0x80;
              *(undefined4 *)((longlong)aVar10 + 0x40) = 0xffffffff;
              *(undefined4 *)((longlong)aVar10 + 0x44) = 0;
              *(double *)((longlong)aVar10 + 0x50) = 0.0;
              *(undefined4 *)((longlong)aVar10 + 0x58) = 0;
              aVar14 = aVar10;
            }
            *(uint *)((longlong)aVar14 + 0xc) = *(uint *)((longlong)aVar14 + 0xc) | 0x100000;
            *(double *)aVar14 = 0.0;
            local_3a8 = aVar14;
          }
          aVar10 = local_3a8;
          if ((((*(uint *)((longlong)local_3a8 + 0xc) ^ (this_00->Meta).NameAndInfo.Number) & 0xe00)
               != 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                 ,0x7d5,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((((byte)(*(uint *)((longlong)aVar10 + 0xc) >> 0x14) ^
                (byte)((uint)(this_00->Meta).NameAndInfo.Number >> 0x14)) & 1) != 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                 ,0x7d6,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar5 = (this_00->Meta).NameAndInfo.Number >> 9 & 7;
          if (uVar5 == 2) {
            *(longlong *)aVar10 =
                 (longlong)*(double *)aVar10 + *(longlong *)(this_00->Meta).StatData.Pad;
          }
          else if (uVar5 == 3) {
            *(double *)aVar10 = *(double *)aVar10 + *(double *)(this_00->Meta).StatData.Pad;
          }
          else if ((uVar5 != 5) &&
                  (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                      ,0x816,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (this_00 != (FRawStatStackNode *)0x0) {
            DeleteAllChildrenNodes(this_00);
            TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
            ::
            ~TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                      ((TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                        *)&this_00->Children);
            pTVar9 = GetRawStatStackNodeAllocator();
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 != 0) {
              aVar12 = (atomic<void_*>)
                       (FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe] + (uVar5 & 0x3fff));
            }
            *(FRawStatStackNode **)((longlong)aVar12 + 8) = this_00;
            FLockFreePointerListLIFORoot<64,1>::Push
                      ((FLockFreePointerListLIFORoot<64,1> *)pTVar9,uVar5);
          }
          TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_320,uStack_32c);
          local_310 = '\x01';
        }
      }
      else if (0 < iVar16) {
        CullByCycles(this_00,param_1);
      }
      uStack_330 = uStack_330 & ~auStack_340._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
      this_01 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                 *)local_2fc._12_8_;
      uVar11 = (ulonglong)uStack_32c;
    } while ((int)uStack_32c < *(int *)(auStack_340._8_8_ + 0x18));
    if ((local_310 != '\0') && (cStack_30f != '\0')) {
      uVar5 = *(int *)&(local_318->Elements).field_0x8 - *(int *)&(local_318->Elements).field_0x34;
      if (3 < uVar5) {
        uVar11 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_318->HashSize < iVar15)) || (iVar15 < local_318->HashSize)) {
        local_318->HashSize = iVar15;
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_318);
      }
    }
  }
  if (local_3a8 != (atomic<void_*>)0x0) {
    FVar6 = FNameEntryId::FromValidEName((EName)local_300);
    local_390 = *(undefined4 *)CONCAT44(extraout_var_00,FVar6.Value);
    local_2d8 = &local_390;
    local_2d0 = &local_3a8;
    local_38c = 0;
    TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,FRawStatStackNode_*_const_&>_>
              (this_01,(TPairInitializer<FName_&&,FRawStatStackNode_*_const_&> *)local_2fc,
               (bool *)&local_2d8);
  }
  return;
}

// CullByDepth @ 1419e98c0

void __thiscall FRawStatStackNode::CullByDepth(FRawStatStackNode *this,int param_1)

{
  atomic<void_*> this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_01;
  ulonglong uVar4;
  FIndexedLockFreeLink *pFVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
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
  local_18 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children;
  if ((int)uVar6 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = *(atomic<void_*> *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18);
      if (param_1 < 1) {
        if (this_00 != (atomic<void_*>)0x0) {
          DeleteAllChildrenNodes((FRawStatStackNode *)this_00);
          TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
          ::
          ~TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                    ((TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                      *)((longlong)this_00 + 0x10));
          this_01 = GetRawStatStackNodeAllocator();
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
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar6);
        local_10 = '\x01';
      }
      else {
        CullByDepth((FRawStatStackNode *)this_00,param_1 + -1);
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
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// DebugPrint @ 1419ea6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRawStatStackNode::DebugPrint(FRawStatStackNode *this,wchar_t *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  FString *this_00;
  size_t sVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FIdentityFunctor local_res18 [8];
  FName local_68;
  TArray<FRawStatStackNode_*,TSizedDefaultAllocator<32>_> local_60;
  FString local_50;
  FString local_40;
  
  if (param_3 <= param_2) {
    if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
      FStatsUtils::DebugPrint(&local_50,&this->Meta);
      if (4 < (byte)LogStats._0_1_) {
        iVar5 = param_3 * 2;
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        TCString<wchar_t>::Spc(iVar5);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    if (*(int *)&(this->Children).field_0x8 != *(int *)&(this->Children).field_0x34) {
      local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.ArrayNum = 0;
      local_60.ArrayMax = 0;
      TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                  *)&this->Children,&local_60);
      AlgoImpl::
      IntroSortInternal<FRawStatStackNode_*,int,FIdentityFunctor,TDereferenceWrapper<FRawStatStackNode_*,FStatDurationComparer<FRawStatStackNode>_>_>
                ((FRawStatStackNode **)local_60.AllocatorInstance.Data,local_60.ArrayNum,
                 local_res18[0],(FStatDurationComparer<FRawStatStackNode> *)local_res18);
      uVar10 = 0;
      if (0 < local_60.ArrayNum) {
        lVar12 = 0;
        do {
          uVar11 = ~uVar10 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar10 < local_60.ArrayNum) {
            uVar4 = uVar11;
          }
          iVar5 = local_60.ArrayNum;
          if (uVar4 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar5 = local_60.ArrayNum;
          }
          puVar1 = *(ulonglong **)(local_60.AllocatorInstance.Data + lVar12);
          if ((*(uint *)((longlong)puVar1 + 0xc) & 0x100000) == 0) {
            uVar6 = *puVar1;
          }
          else {
            uVar6 = (ulonglong)(uint)*puVar1;
          }
          if ((longlong)uVar6 < MinPrint) break;
          pwVar9 = param_1;
          if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
            uVar4 = 0;
            if ((int)uVar10 < iVar5) {
              uVar4 = uVar11;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar5 = param_3 + 1;
            pFVar8 = local_60.AllocatorInstance.Data + lVar12;
          }
          else {
            uVar4 = 0;
            if ((int)uVar10 < iVar5) {
              uVar4 = uVar11;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_68.ComparisonIndex.Value =
                 *(uint *)(*(longlong *)(local_60.AllocatorInstance.Data + lVar12) + 8);
            local_68.Number =
                 *(uint *)(*(longlong *)(local_60.AllocatorInstance.Data + lVar12) + 0xc) & 0x1ff;
            this_00 = ::FName::ToString(&local_68,&local_40);
            sVar7 = wcslen(param_1);
            iVar5 = ::FString::Find(this_00,param_1,(int)sVar7,IgnoreCase,FromStart,-1);
            if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_40.Data.AllocatorInstance.Data);
            }
            if (iVar5 == -1) {
              uVar4 = 0;
              if ((int)uVar10 < local_60.ArrayNum) {
                uVar4 = uVar11;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar8 = local_60.AllocatorInstance.Data + lVar12;
              iVar5 = 0;
            }
            else {
              uVar4 = 0;
              if ((int)uVar10 < local_60.ArrayNum) {
                uVar4 = uVar11;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar8 = local_60.AllocatorInstance.Data + lVar12;
              iVar5 = 0;
              pwVar9 = (wchar_t *)0x0;
            }
          }
          DebugPrint(*(FRawStatStackNode **)pFVar8,pwVar9,param_2,iVar5);
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 8;
        } while ((int)uVar10 < local_60.ArrayNum);
      }
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// DebugPrintLeafFilter @ 1419eae30

void __thiscall FRawStatStackNode::DebugPrintLeafFilter(FRawStatStackNode *this,wchar_t *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  DebugPrintLeafFilterInner(this,param_1,0,&local_18);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DebugPrintLeafFilterInner @ 1419eae80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRawStatStackNode::DebugPrintLeafFilterInner
          (FRawStatStackNode *this,wchar_t *param_1,int param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  ulonglong *puVar1;
  void *pvVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FString *this_00;
  size_t sVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FIdentityFunctor local_res8 [8];
  FName local_res10;
  TArray<FRawStatStackNode_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  FStatsUtils::DebugPrint(&local_58,&this->Meta);
  pFVar10 = (param_3->AllocatorInstance).Data;
  if (((pFVar10 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar10 + (longlong)param_3->ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = param_3->ArrayNum;
  if (iVar5 == param_3->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  pFVar10 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  param_3->ArrayNum = iVar5 + 1;
  *(FScriptContainerElement **)&pFVar10->field_0x0 = (FScriptContainerElement *)0x0;
  *(int *)&pFVar10[8].field_0x0 = local_58.Data.ArrayNum;
  if (local_58.Data.ArrayNum == 0) {
    *(int *)(pFVar10 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,local_58.Data.ArrayNum,
               (int *)(pFVar10 + 0xc));
    memcpy(*(FScriptContainerElement **)&pFVar10->field_0x0,_Src.Data,
           (longlong)local_58.Data.ArrayNum * 2);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    iVar5 = (param_2 - param_3->ArrayNum) + 1;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                           ,0x185,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = param_3->ArrayNum;
    uVar12 = 0;
    if (0 < iVar8) {
      uVar13 = iVar5 * 2;
      do {
        if (4 < (byte)LogStats._0_1_) {
          uVar11 = 0;
          if ((int)uVar12 < iVar8) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0xff < uVar13) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                 ,0x272,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
        }
        iVar8 = param_3->ArrayNum;
        uVar12 = uVar12 + 1;
        uVar13 = uVar13 + 2;
      } while ((int)uVar12 < iVar8);
    }
    pFVar10 = (param_3->AllocatorInstance).Data;
    if (param_3->ArrayMax < 0) {
      DestructItems<FString,int>((FString *)pFVar10,iVar8);
      param_3->ArrayNum = 0;
      if (param_3->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar10,iVar8);
      param_3->ArrayNum = 0;
    }
  }
  else {
    if (*(int *)&(this->Children).field_0x8 != *(int *)&(this->Children).field_0x34) {
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                  *)&this->Children,&local_68);
      AlgoImpl::
      IntroSortInternal<FRawStatStackNode_*,int,FIdentityFunctor,TDereferenceWrapper<FRawStatStackNode_*,FStatDurationComparer<FRawStatStackNode>_>_>
                ((FRawStatStackNode **)local_68.AllocatorInstance.Data,local_68.ArrayNum,
                 local_res8[0],(FStatDurationComparer<FRawStatStackNode> *)local_res8);
      uVar12 = 0;
      if (0 < local_68.ArrayNum) {
        lVar14 = 0;
        do {
          uVar11 = ~uVar12 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar12 < local_68.ArrayNum) {
            uVar13 = uVar11;
          }
          iVar5 = local_68.ArrayNum;
          if (uVar13 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar5 = local_68.ArrayNum;
          }
          puVar1 = *(ulonglong **)(local_68.AllocatorInstance.Data + lVar14);
          if ((*(uint *)((longlong)puVar1 + 0xc) & 0x100000) == 0) {
            uVar6 = *puVar1;
          }
          else {
            uVar6 = (ulonglong)(uint)*puVar1;
          }
          if ((longlong)uVar6 < MinPrint) break;
          uVar13 = 0;
          if ((int)uVar12 < iVar5) {
            uVar13 = uVar11;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_res10.ComparisonIndex.Value =
               *(uint *)(*(longlong *)(local_68.AllocatorInstance.Data + lVar14) + 8);
          local_res10.Number =
               *(uint *)(*(longlong *)(local_68.AllocatorInstance.Data + lVar14) + 0xc) & 0x1ff;
          this_00 = ::FName::ToString(&local_res10,&local_48);
          sVar7 = wcslen(param_1);
          iVar5 = ::FString::Find(this_00,param_1,(int)sVar7,IgnoreCase,FromStart,-1);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (iVar5 == -1) {
            uVar13 = 0;
            if ((int)uVar12 < local_68.ArrayNum) {
              uVar13 = uVar11;
            }
            pwVar9 = param_1;
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            uVar13 = 0;
            if ((int)uVar12 < local_68.ArrayNum) {
              uVar13 = uVar11;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pwVar9 = (wchar_t *)0x0;
          }
          DebugPrintLeafFilterInner
                    (*(FRawStatStackNode **)(local_68.AllocatorInstance.Data + lVar14),pwVar9,
                     param_2 + 1,param_3);
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 8;
        } while ((int)uVar12 < local_68.ArrayNum);
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
    }
    if (param_3->ArrayNum != 0) {
      if ((param_3->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar14 = (longlong)param_3->ArrayNum;
      pFVar10 = (param_3->AllocatorInstance).Data;
      pvVar2 = *(void **)(pFVar10 + lVar14 * 0x10 + -0x10);
      *(undefined8 *)(pFVar10 + lVar14 * 0x10 + -0x10) = 0;
      *(undefined8 *)(pFVar10 + lVar14 * 0x10 + -8) = 0;
      iVar5 = param_3->ArrayNum;
      pFVar10 = (param_3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      if (*(void **)(pFVar10 + -0x10) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar10 + -0x10));
      }
      iVar5 = param_3->ArrayNum - iVar5;
      if (iVar5 != 0) {
        memmove(pFVar10 + -0x10,pFVar10,(longlong)iVar5 << 4);
      }
      param_3->ArrayNum = param_3->ArrayNum + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
    }
  }
  return;
}

// DeleteAllChildrenNodes @ 1419ec490

void __thiscall FRawStatStackNode::DeleteAllChildrenNodes(FRawStatStackNode *this)

{
  atomic<void_*> this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_01;
  ulonglong uVar4;
  FIndexedLockFreeLink *pFVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = *(atomic<void_*> *)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18);
      if (this_00 != (atomic<void_*>)0x0) {
        DeleteAllChildrenNodes((FRawStatStackNode *)this_00);
        TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
        ::
        ~TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                  ((TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
                    *)((longlong)this_00 + 0x10));
        this_01 = GetRawStatStackNodeAllocator();
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
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// Divide @ 1419ee560

void __thiscall FRawStatStackNode::Divide(FRawStatStackNode *this,uint param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  uVar2 = (this->Meta).NameAndInfo.Number & 0xe00;
  if ((uVar2 != 0x200) && (uVar2 != 0x800)) {
    FStatsUtils::DivideStat(&this->Meta,param_1);
  }
  TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
              *)&this->Children;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      Divide(*(FRawStatStackNode **)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18),param_1);
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
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// Encode @ 1419f3c20

void __thiscall
FRawStatStackNode::Encode
          (FRawStatStackNode *this,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_1)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  FRawStatStackNode *pFVar4;
  code *pcVar5;
  FStatNameAndInfo FVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint *puVar11;
  undefined4 local_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  
  pFVar4 = (FRawStatStackNode *)(param_1->AllocatorInstance).Data;
  if (((pFVar4 <= this) && (this < (FRawStatStackNode *)(&pFVar4->Meta + param_1->ArrayMax))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 == param_1->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar8 + 1;
  FVar6 = (this->Meta).NameAndInfo;
  pFVar10 = (param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar10 = *(undefined8 *)(this->Meta).StatData.Pad;
  *(FStatNameAndInfo *)(pFVar10 + 8) = FVar6;
  if (*(int *)&(this->Children).field_0x8 == *(int *)&(this->Children).field_0x34) {
    *(uint *)(pFVar10 + 0xc) = *(uint *)(pFVar10 + 0xc) & 0xffffefff | 0xe000;
    return;
  }
  iStack_48 = 0;
  pTVar1 = &this->Children;
  *(uint *)(pFVar10 + 0xc) = *(uint *)(pFVar10 + 0xc) & 0xffffcfff | 0xc000;
  iVar8 = *(int *)&(this->Children).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Children).field_0x10;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar8 != 0) {
    puVar11 = *(uint **)&(this->Children).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar11;
    while (uVar3 == 0) {
      lVar9 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_1419f3d8d;
      uVar3 = puVar11[lVar9 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_44 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar9;
    if (iVar8 < iStack_34) {
      iStack_34 = iVar8;
    }
  }
LAB_1419f3d8d:
  uStack_38 = 0xffffffff;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = local_7c;
  TStack_70.BaseBitIndex = local_30;
  local_50 = pTVar1;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < *(int *)&(this->Children).field_0x28) {
    do {
      Encode(*(FRawStatStackNode **)
              (*(longlong *)pTVar1 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18),param_1);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 == param_1->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar8 + 1;
  FVar6 = (this->Meta).NameAndInfo;
  pFVar10 = (param_1->AllocatorInstance).Data;
  lVar9 = (longlong)iVar8 * 0x10;
  *(undefined8 *)(pFVar10 + lVar9) = *(undefined8 *)(this->Meta).StatData.Pad;
  *(FStatNameAndInfo *)(pFVar10 + lVar9 + 8) = FVar6;
  *(uint *)(pFVar10 + lVar9 + 0xc) = *(uint *)(pFVar10 + lVar9 + 0xc) & 0xffffdfff;
  *(uint *)(pFVar10 + lVar9 + 0xc) = *(uint *)(pFVar10 + lVar9 + 0xc) | 0xd000;
  return;
}

// MergeAdd @ 141a0b070

void __thiscall FRawStatStackNode::MergeAdd(FRawStatStackNode *this,FRawStatStackNode *param_1)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TTuple<FName,FRawStatStackNode_*> *pTVar7;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_00;
  atomic<void_*> this_01;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  TPairInitializer<FName_const_&,FRawStatStackNode_*_&&> local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  longlong local_60;
  FRawStatStackNode ***local_58;
  undefined4 local_34;
  
  if ((((ulonglong)(this->Meta).NameAndInfo & 0x1ffffffffff) !=
       ((ulonglong)(param_1->Meta).NameAndInfo & 0x1ffffffffff)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Meta.NameAndInfo.GetRawName() == Other.Meta.NameAndInfo.GetRawName()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x52,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = (this->Meta).NameAndInfo.Number;
  uVar6 = uVar8 & 0xe00;
  if ((uVar6 != 0x200) && (uVar6 != 0x800)) {
    if (((CONCAT44(uVar8,(this->Meta).NameAndInfo.Index.Value) & 0x1ffffffffff) !=
         ((ulonglong)(param_1->Meta).NameAndInfo & 0x1ffffffffff)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                           ,1999,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((((this->Meta).NameAndInfo.Number ^ (param_1->Meta).NameAndInfo.Number) & 0xe00U) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                           ,0x7d5,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((((byte)((uint)(this->Meta).NameAndInfo.Number >> 0x14) ^
          (byte)((uint)(param_1->Meta).NameAndInfo.Number >> 0x14)) & 1) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                           ,0x7d6,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = (param_1->Meta).NameAndInfo.Number >> 9 & 7;
    if (uVar8 == 2) {
      *(longlong *)(this->Meta).StatData.Pad =
           *(longlong *)(this->Meta).StatData.Pad + *(longlong *)(param_1->Meta).StatData.Pad;
    }
    else if (uVar8 == 3) {
      *(double *)(this->Meta).StatData.Pad =
           *(double *)(param_1->Meta).StatData.Pad + *(double *)(this->Meta).StatData.Pad;
    }
    else if ((uVar8 != 5) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                ,0x816,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = &param_1->Children;
  iStack_88 = 0;
  iVar3 = *(int *)&(param_1->Children).field_0x28;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Children).field_0x10;
  local_70 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)TStack_b0.Array;
    }
    uVar8 = *puVar10;
    while (uVar8 == 0) {
      lVar9 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_141a0b28b;
      uVar8 = puVar10[lVar9 + 1];
    }
    uStack_84 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_74 = local_70 + -1 + (int)lVar9;
    if (iVar3 < iStack_74) {
      iStack_74 = iVar3;
    }
  }
LAB_141a0b28b:
  uStack_78 = 0xffffffff;
  uStack_6c = local_34;
  TStack_b0._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_34;
  TStack_b0.BaseBitIndex = local_70;
  if (iStack_74 < iVar3) {
    local_90 = pTVar1;
    local_80 = (undefined1 *)TStack_b0.Array;
    TStack_b0.CurrentBitIndex = iStack_74;
    do {
      lVar9 = (longlong)TStack_b0.CurrentBitIndex;
      pTVar7 = TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                       *)&this->Children,
                      *(FName *)(*(longlong *)pTVar1 + (longlong)TStack_b0.CurrentBitIndex * 0x18));
      if ((pTVar7 == (TTuple<FName,FRawStatStackNode_*> *)0x0) ||
         (*(FRawStatStackNode **)&pTVar7->field_0x8 == (FRawStatStackNode *)0x0)) {
        this_00 = GetRawStatStackNodeAllocator();
        uVar8 = FLockFreePointerListLIFORoot<64,1>::Pop
                          ((FLockFreePointerListLIFORoot<64,1> *)this_00);
        this_01 = (atomic<void_*>)0x0;
        if (uVar8 != 0) {
          this_01 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar8 >> 0xe][uVar8 & 0x3fff].Payload;
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar8);
        }
        if ((this_01 == (atomic<void_*>)0x0) &&
           (this_01 = (atomic<void_*>)FMemory::Malloc(0x60,8), this_01 == (atomic<void_*>)0x0)) {
          local_res8.Value = (FRawStatStackNode **)0x0;
        }
        else {
          local_res8.Value =
               (FRawStatStackNode **)
               FRawStatStackNode((FRawStatStackNode *)this_01,
                                 *(FRawStatStackNode **)(lVar9 * 0x18 + 8 + *(longlong *)pTVar1));
        }
        local_58 = &local_res8.Value;
        local_60 = *(longlong *)pTVar1 + lVar9 * 0x18;
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FRawStatStackNode_*_&&>_>
                  ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                    *)&this->Children,&local_res8,(bool *)&local_60);
      }
      else {
        MergeAdd(*(FRawStatStackNode **)&pTVar7->field_0x8,
                 *(FRawStatStackNode **)(*(longlong *)pTVar1 + 8 + lVar9 * 0x18));
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
  }
  return;
}

// MergeMax @ 141a0ba60

void __thiscall FRawStatStackNode::MergeMax(FRawStatStackNode *this,FRawStatStackNode *param_1)

{
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *pTVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TTuple<FName,FRawStatStackNode_*> *pTVar9;
  TLockFreeFixedSizeAllocator<96,64,FNoopCounter> *this_00;
  atomic<void_*> this_01;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  TPairInitializer<FName_const_&,FRawStatStackNode_*_&&> local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  TMap<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  undefined4 uStack_6c;
  longlong local_60;
  FRawStatStackNode ***local_58;
  undefined4 local_34;
  
  if ((((ulonglong)(this->Meta).NameAndInfo & 0x1ffffffffff) !=
       ((ulonglong)(param_1->Meta).NameAndInfo & 0x1ffffffffff)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Meta.NameAndInfo.GetRawName() == Other.Meta.NameAndInfo.GetRawName()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                         ,0x3d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = (this->Meta).NameAndInfo.Number;
  uVar8 = uVar10 & 0xe00;
  if ((uVar8 != 0x200) && (uVar8 != 0x800)) {
    if (((CONCAT44(uVar10,(this->Meta).NameAndInfo.Index.Value) & 0x1ffffffffff) !=
         ((ulonglong)(param_1->Meta).NameAndInfo & 0x1ffffffffff)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bAllowNameMismatch || Dest.NameAndInfo.GetRawName() == Item.NameAndInfo.GetRawName()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                           ,1999,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((((this->Meta).NameAndInfo.Number ^ (param_1->Meta).NameAndInfo.Number) & 0xe00U) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest.NameAndInfo.GetField<EStatDataType>() == Item.NameAndInfo.GetField<EStatDataType>()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                           ,0x7d5,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((((byte)((uint)(this->Meta).NameAndInfo.Number >> 0x14) ^
          (byte)((uint)(param_1->Meta).NameAndInfo.Number >> 0x14)) & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration) == Item.NameAndInfo.GetFlag(EStatMetaFlags::IsPackedCCAndDuration)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                           ,0x7d6,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = (param_1->Meta).NameAndInfo.Number >> 9 & 7;
    if (uVar10 == 2) {
      uVar13 = *(ulonglong *)(param_1->Meta).StatData.Pad;
      if (((this->Meta).NameAndInfo.Number & 0x100000U) == 0) {
        if ((longlong)uVar13 < *(longlong *)(this->Meta).StatData.Pad) {
          uVar13 = *(ulonglong *)(this->Meta).StatData.Pad;
        }
        *(ulonglong *)(this->Meta).StatData.Pad = uVar13;
      }
      else {
        uVar12 = *(ulonglong *)(this->Meta).StatData.Pad;
        uVar5 = uVar13;
        if ((uint)(uVar13 >> 0x20) < (uint)(uVar12 >> 0x20)) {
          uVar5 = uVar12;
        }
        uVar12 = uVar13 & 0xffffffff;
        if ((uint)uVar13 < *(uint *)(this->Meta).StatData.Pad) {
          uVar12 = (ulonglong)*(uint *)(this->Meta).StatData.Pad;
        }
        *(ulonglong *)(this->Meta).StatData.Pad = ((longlong)uVar5 >> 0x20) << 0x20 | uVar12;
      }
    }
    else if (uVar10 == 3) {
      dVar2 = *(double *)(param_1->Meta).StatData.Pad;
      uVar15 = SUB84(dVar2,0);
      uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
      dVar3 = *(double *)(this->Meta).StatData.Pad;
      if (dVar2 <= dVar3) {
        uVar15 = SUB84(dVar3,0);
        uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      *(ulonglong *)(this->Meta).StatData.Pad = CONCAT44(uVar16,uVar15);
    }
    else if ((uVar10 != 5) &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsData.cpp"
                                ,0x816,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar1 = &param_1->Children;
  iStack_88 = 0;
  iVar4 = *(int *)&(param_1->Children).field_0x28;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Children).field_0x10;
  local_70 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Children).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_b0.Array;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar11 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_141a0bcbb;
      uVar10 = puVar14[lVar11 + 1];
    }
    uStack_84 = -uVar10 & uVar10;
    uVar13 = (ulonglong)uStack_84 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_74 = local_70 + -1 + (int)lVar11;
    if (iVar4 < iStack_74) {
      iStack_74 = iVar4;
    }
  }
LAB_141a0bcbb:
  uStack_78 = 0xffffffff;
  uStack_6c = local_34;
  TStack_b0._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_34;
  TStack_b0.BaseBitIndex = local_70;
  if (iStack_74 < iVar4) {
    local_90 = pTVar1;
    local_80 = (undefined1 *)TStack_b0.Array;
    TStack_b0.CurrentBitIndex = iStack_74;
    do {
      lVar11 = (longlong)TStack_b0.CurrentBitIndex;
      pTVar9 = TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                       *)&this->Children,
                      *(FName *)(*(longlong *)pTVar1 + (longlong)TStack_b0.CurrentBitIndex * 0x18));
      if ((pTVar9 == (TTuple<FName,FRawStatStackNode_*> *)0x0) ||
         (*(FRawStatStackNode **)&pTVar9->field_0x8 == (FRawStatStackNode *)0x0)) {
        this_00 = GetRawStatStackNodeAllocator();
        uVar10 = FLockFreePointerListLIFORoot<64,1>::Pop
                           ((FLockFreePointerListLIFORoot<64,1> *)this_00);
        this_01 = (atomic<void_*>)0x0;
        if (uVar10 != 0) {
          this_01 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar10 >> 0xe][uVar10 & 0x3fff].Payload
          ;
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar10);
        }
        if ((this_01 == (atomic<void_*>)0x0) &&
           (this_01 = (atomic<void_*>)FMemory::Malloc(0x60,8), this_01 == (atomic<void_*>)0x0)) {
          local_res8.Value = (FRawStatStackNode **)0x0;
        }
        else {
          local_res8.Value =
               (FRawStatStackNode **)
               FRawStatStackNode((FRawStatStackNode *)this_01,
                                 *(FRawStatStackNode **)(lVar11 * 0x18 + 8 + *(longlong *)pTVar1));
        }
        local_58 = &local_res8.Value;
        local_60 = *(longlong *)pTVar1 + lVar11 * 0x18;
        TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FRawStatStackNode_*_&&>_>
                  ((TSet<TTuple<FName,FRawStatStackNode_*>,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>,FDefaultSetAllocator>
                    *)&this->Children,&local_res8,(bool *)&local_60);
      }
      else {
        MergeMax(*(FRawStatStackNode **)&pTVar9->field_0x8,
                 *(FRawStatStackNode **)(*(longlong *)pTVar1 + 8 + lVar11 * 0x18));
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
  }
  return;
}

