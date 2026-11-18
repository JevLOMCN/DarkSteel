// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// HandlePostGarbageCollect @ 1475df740

void __cdecl UE::Anim::FSkeletonRemappingRegistryPrivate::HandlePostGarbageCollect(void)

{
  FWeakObjectPtr *this;
  longlong lVar1;
  FSkeletonRemappingRegistry *SRWLock;
  int iVar2;
  UObject *pUVar3;
  TMap<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>_>
  *pTVar4;
  ulonglong uVar5;
  TMultiMap<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>_>
  *pTVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
  *local_b8;
  char local_b0;
  char cStack_af;
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
  *local_78;
  char local_70;
  char cStack_6f;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
  *pTStack_40;
  undefined1 local_38 [32];
  longlong local_18;
  TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
  *pTStack_10;
  
  SRWLock = GSkeletonRemappingRegistry;
  if (GSkeletonRemappingRegistry != (FSkeletonRemappingRegistry *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)GSkeletonRemappingRegistry);
    pTVar4 = &GSkeletonRemappingRegistry->Mappings;
    TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_68,
               (TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
                *)pTVar4);
    iVar8 = 1;
    local_b0 = '\0';
    cStack_af = '\0';
    stack0xffffffffffffff28 = local_68._16_16_;
    auStack_e0._0_8_ = local_68._8_8_;
    local_c8 = local_48;
    pTStack_c0 = pTStack_40;
    uVar5 = local_68._24_8_ >> 0x20;
    local_b8 = (TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
                *)pTVar4;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        this = (FWeakObjectPtr *)(*(longlong *)local_68._0_8_ + (longlong)(int)uVar5 * 0x28);
        pUVar3 = FWeakObjectPtr::Get(this);
        if ((pUVar3 == (UObject *)0x0) ||
           (pUVar3 = FWeakObjectPtr::Get(this + 1), pUVar3 == (UObject *)0x0)) {
          TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_c0,(int)uVar5);
          local_b0 = '\x01';
        }
        uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
        uVar5 = (ulonglong)uStack_cc;
      } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
      if ((local_b0 != '\0') && (cStack_af != '\0')) {
        uVar7 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar2 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar2 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_b8->HashSize < iVar2)) || (iVar2 < local_b8->HashSize)) {
          local_b8->HashSize = iVar2;
          TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
    pTVar6 = &GSkeletonRemappingRegistry->PerSkeletonMappings;
    TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_38,
               (TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
                *)pTVar6);
    local_70 = '\0';
    cStack_6f = '\0';
    stack0xffffffffffffff68 = local_38._16_16_;
    local_a8 = (longlong *)local_38._0_8_;
    auStack_a0._0_8_ = local_38._8_8_;
    local_88 = local_18;
    pTStack_80 = pTStack_10;
    uVar5 = local_38._24_8_ >> 0x20;
    local_78 = (TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
                *)pTVar6;
    if (local_38._28_4_ < *(int *)(local_38._16_8_ + 0x18)) {
      do {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)(int)uVar5 * 0x20 + *local_a8));
        if (pUVar3 == (UObject *)0x0) {
          TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_80,(int)uVar5);
          local_70 = '\x01';
        }
        uStack_90 = uStack_90 & ~auStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
        uVar5 = (ulonglong)uStack_8c;
      } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
      if ((local_70 != '\0') && (cStack_6f != '\0')) {
        uVar7 = *(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34;
        if (3 < uVar7) {
          uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_78->HashSize < iVar8)) || (iVar8 < local_78->HashSize)) {
          local_78->HashSize = iVar8;
          TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
          ::Rehash(local_78);
        }
      }
    }
    if (SRWLock != (FSkeletonRemappingRegistry *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  return;
}

