// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 3

// Add @ 14abc3160

void __thiscall FTextureCache::Add(FTextureCache *this,FId *param_1,UTexture2D *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  TPairInitializer<FTextureCache::FId_const_&,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_&&>
  local_res18;
  FId *local_98;
  TWeakObjectPtr<UTexture2D,FWeakObjectPtr> **local_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  if (param_2 != (UTexture2D *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res18.Value = (TWeakObjectPtr<UTexture2D,FWeakObjectPtr> *)0x0;
    local_res18.Key = (FId *)param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18.Value,(FObjectPtr)&local_res18);
    local_90 = &local_res18.Value;
    local_98 = param_1;
    TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FTextureCache::FId_const_&,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this,&local_res18,(bool *)&local_98);
    TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this);
    local_20 = '\0';
    cStack_1f = '\0';
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar4 = local_88._24_8_ >> 0x20;
    local_28 = (TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        bVar2 = FWeakObjectPtr::IsStale
                          ((FWeakObjectPtr *)(*local_58 + 0x20 + (longlong)(int)uVar4 * 0x30),true,
                           false);
        if (bVar2) {
          TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_30,(int)uVar4);
          local_20 = '\x01';
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar4 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if ((local_20 != '\0') && (cStack_1f != '\0')) {
        uVar5 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar5 < 4) {
          iVar3 = 1;
        }
        else {
          uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar3 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar5) && (local_28->HashSize < iVar3)) || (iVar3 < local_28->HashSize)) {
          local_28->HashSize = iVar3;
          TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
  }
  return;
}

// Get @ 14abd95f0

UTexture2D * __thiscall FTextureCache::Get(FTextureCache *this,FId *param_1)

{
  uint uVar1;
  int iVar2;
  UTexture2D *pUVar3;
  longlong lVar4;
  FWeakObjectPtr *this_00;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_1->SkippedMips;
  uVar1 = ::GetTypeHash(&param_1->Resource);
  uVar6 = uVar1 - uVar5 ^ uVar5 >> 0xd;
  uVar1 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
  uVar5 = (uVar5 - uVar1) - uVar6 ^ uVar1 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar1 = (uVar1 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar6 ^ uVar1 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar1 = (uVar1 - uVar6) - uVar5 ^ uVar6 << 10;
  iVar2 = TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FTextureCache::FId>
                    ((TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this,(uVar5 - uVar1) - uVar6 ^ uVar1 >> 0xf,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x30 + *(longlong *)&this->GeneratedTextures;
    this_00 = (FWeakObjectPtr *)(lVar4 + 0x20);
    if (lVar4 == 0) {
      this_00 = (FWeakObjectPtr *)0x0;
    }
    if (this_00 != (FWeakObjectPtr *)0x0) {
      pUVar3 = (UTexture2D *)FWeakObjectPtr::Get(this_00);
      return pUVar3;
    }
  }
  return (UTexture2D *)0x0;
}

// Remove @ 14abee900

void __thiscall FTextureCache::Remove(FTextureCache *this,UTexture2D *param_1)

{
  longlong lVar1;
  int iVar2;
  UTexture2D *pUVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  uVar5 = local_78._28_4_;
  local_18 = (TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)this;
  if ((int)uVar5 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pUVar3 = (UTexture2D *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   (*local_48 + 0x20 + (longlong)(int)uVar4 * 0x30));
      if (pUVar3 == param_1) {
        TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar5);
        goto LAB_14abee9e0;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
      uVar5 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((char)local_10 != '\0') {
LAB_14abee9e0:
      if (local_10._1_1_ != '\0') {
        uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar5 < 4) {
          iVar2 = 1;
        }
        else {
          uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar2 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar5) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
          local_18->HashSize = iVar2;
          TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

