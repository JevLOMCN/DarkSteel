// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// Add @ 14abc2fc0

void __thiscall
FSkeletonCache::Add(FSkeletonCache *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1
                   ,USkeleton *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  TPairInitializer<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_&&>
  local_res18;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *local_98;
  TWeakObjectPtr<USkeleton,FWeakObjectPtr> **local_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_28;
  char local_20;
  char cStack_1f;
  
  if (param_2 != (USkeleton *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res18.Value = (TWeakObjectPtr<USkeleton,FWeakObjectPtr> *)0x0;
    local_res18.Key = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18.Value,(FObjectPtr)&local_res18);
    local_90 = &local_res18.Value;
    local_98 = param_1;
    TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_const_&,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this,&local_res18,(bool *)&local_98);
    TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this);
    local_20 = '\0';
    cStack_1f = '\0';
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar4 = local_88._24_8_ >> 0x20;
    local_28 = (TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                *)this;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        bVar2 = FWeakObjectPtr::IsStale
                          ((FWeakObjectPtr *)(*local_58 + 0x10 + (longlong)(int)uVar4 * 0x20),true,
                           false);
        if (bVar2) {
          TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
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
          TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
  }
  return;
}

// Get @ 14abd9580

USkeleton * __thiscall
FSkeletonCache::Get(FSkeletonCache *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1
                   )

{
  uint uVar1;
  int iVar2;
  USkeleton *pUVar3;
  longlong lVar4;
  FWeakObjectPtr *this_00;
  
  uVar1 = GetTypeHash<unsigned_short>(param_1);
  iVar2 = TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                    ((TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)this,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&this->MergedSkeletons;
    this_00 = (FWeakObjectPtr *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      this_00 = (FWeakObjectPtr *)0x0;
    }
    if (this_00 != (FWeakObjectPtr *)0x0) {
      pUVar3 = (USkeleton *)FWeakObjectPtr::Get(this_00);
      return pUVar3;
    }
  }
  return (USkeleton *)0x0;
}

