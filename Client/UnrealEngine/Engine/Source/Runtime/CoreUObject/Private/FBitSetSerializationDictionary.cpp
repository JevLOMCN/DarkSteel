// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// GetOrCreateBitMapping @ 141f82b90

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
FBitSetSerializationDictionary::GetOrCreateBitMapping(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint local_res8 [2];
  int local_res10 [2];
  uint *local_res18 [2];
  
  if (BitMappings._8_4_ != BitMappings._52_4_) {
    lVar3 = 0x154b88ae8;
    if (BitMappings._64_8_ != 0) {
      lVar3 = BitMappings._64_8_;
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)(BitMappings._72_4_ - 1 & param_1) * 4);
    while (uVar1 != 0xffffffff) {
      puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + BitMappings._0_8_);
      if (*puVar2 == param_1) {
        if (puVar2 != (uint *)0x0) {
          return (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar2 + 2);
        }
        break;
      }
      uVar1 = puVar2[6];
    }
  }
  local_res18[0] = local_res8;
  local_res8[0] = param_1;
  TSet<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&BitMappings,(uint)local_res10,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)local_res18);
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((longlong)local_res10[0] * 0x20 + 8 + BitMappings._0_8_);
}

// GetTracker @ 141f87740

FStructTracker ** __cdecl FBitSetSerializationDictionary::GetTracker(uint param_1)

{
  int iVar1;
  FStructTracker **ppFVar2;
  FStructTracker **ppFVar3;
  longlong lVar4;
  FStructTracker **ppFVar5;
  
  ppFVar5 = (FStructTracker **)0x0;
  ppFVar2 = ppFVar5;
  if (TrackerMap._8_4_ != TrackerMap._52_4_) {
    lVar4 = 0x154b88a98;
    if (TrackerMap._64_8_ != 0) {
      lVar4 = TrackerMap._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(TrackerMap._72_4_ - 1 & param_1) * 4);
    while ((ppFVar2 = ppFVar5, iVar1 != -1 &&
           (ppFVar2 = (FStructTracker **)(TrackerMap._0_8_ + (longlong)iVar1 * 0x18),
           *(uint *)(TrackerMap._0_8_ + (longlong)iVar1 * 0x18) != param_1))) {
      iVar1 = *(int *)(ppFVar2 + 2);
    }
  }
  ppFVar3 = ppFVar2 + 1;
  if (ppFVar2 == (FStructTracker **)0x0) {
    ppFVar3 = ppFVar5;
  }
  return ppFVar3;
}

// RegisterHash @ 141f95ea0

void __cdecl FBitSetSerializationDictionary::RegisterHash(uint param_1,FStructTracker *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FStructTracker_const_*_&&> local_res10;
  uint *local_18;
  FStructTracker ***local_10;
  
  local_res8[0] = param_1;
  if (TrackerMap._8_4_ != TrackerMap._52_4_) {
    lVar3 = 0x154b88a98;
    if (TrackerMap._64_8_ != 0) {
      lVar3 = TrackerMap._64_8_;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(TrackerMap._72_4_ - 1 & param_1) * 4);
    while (iVar1 != -1) {
      lVar3 = TrackerMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(uint *)(TrackerMap._0_8_ + (longlong)iVar1 * 0x18) == param_1) {
        plVar2 = (longlong *)(lVar3 + 8);
        if (lVar3 == 0) {
          plVar2 = (longlong *)0x0;
        }
        if (((plVar2 != (longlong *)0x0) && ((FStructTracker *)*plVar2 != (FStructTracker *)0x0)) &&
           ((FStructTracker *)*plVar2 != param_2)) {
          `FBitSetSerializationDictionary::RegisterHash'::__l5::<lambda_1>::operator()(&local_res10)
          ;
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
    }
  }
  local_18 = local_res8;
  local_10 = &local_res10.Value;
  local_res10.Value = (FStructTracker **)param_2;
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FStructTracker_const_*_&&>_>
            ((TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
              *)&TrackerMap,&local_res10,(bool *)&local_18);
  return;
}

// UnregisterTracker @ 141fafc80

void __cdecl FBitSetSerializationDictionary::UnregisterTracker(FStructTracker *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
              *)&TrackerMap);
  local_18 = (TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
              *)&TrackerMap;
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  uVar4 = local_78._28_4_;
  if ((int)uVar4 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      if (*(FStructTracker **)(*local_48 + 8 + (longlong)(int)uVar3 * 0x18) == param_1) {
        TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar4);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
      uVar4 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
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
        TSet<TTuple<unsigned_int,FStructTracker_const_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FStructTracker_const_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// operator() @ 150483630

bool __thiscall
`FBitSetSerializationDictionary::RegisterHash'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5739311325301964824>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5739311325301964824>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

