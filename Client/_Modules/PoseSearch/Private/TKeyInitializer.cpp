// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// operator<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates> @ 14a89fb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates> * __thiscall
TKeyInitializer<UPoseSearchDatabase_const_*_const_&>::
operator<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>_TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>
          (TKeyInitializer<UPoseSearchDatabase_const_*_const_&> *this,
          TTuple<UPoseSearchDatabase_const_*,UE::PoseSearch::FSearchContext::FBestPoseCandidates>
          *__return_storage_ptr__)

{
  FBestPoseCandidates *pFVar1;
  undefined1 auStack_98 [32];
  FBestPoseCandidates local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar1 = UE::PoseSearch::FSearchContext::FBestPoseCandidates::FBestPoseCandidates(&local_78);
  *(UPoseSearchDatabase **)__return_storage_ptr__ = *this->Key;
  UE::PoseSearch::FSearchContext::FBestPoseCandidates::FBestPoseCandidates
            ((FBestPoseCandidates *)&__return_storage_ptr__->field_0x8,pFVar1);
  local_78.PermanentPoseCandidates.HashSize = 0;
  if (local_78.PermanentPoseCandidates.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.PermanentPoseCandidates.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::PoseSearch::FSearchContext::FPoseCandidate>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.PermanentPoseCandidates.Elements);
  if (local_78.TransientPoseCandidates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.TransientPoseCandidates.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_> @ 14a90f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>
* __thiscall
TKeyInitializer<UPoseSearchDatabase_const_*_&&>::
operator<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>_TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>
          (TKeyInitializer<UPoseSearchDatabase_const_*_&&> *this,
          TTuple<UPoseSearchDatabase_const_*,TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>_>
          *__return_storage_ptr__)

{
  undefined1 auStackY_328 [32];
  undefined1 local_2f8 [664];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_328;
  memset(local_2f8,0,0x2e0);
  uStack_50 = _UNK_150631d78;
  local_58 = ___xmm_00000000ffffffff0000002000000000;
  local_2f8._652_4_ = 0x10;
  local_60 = 0;
  *(UPoseSearchDatabase **)__return_storage_ptr__ = *this->Key;
  local_28 = 0;
  local_20 = 0;
  TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
  ::
  TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
            ((TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<int,UE::PoseSearch::FSearchResult,TInlineSetAllocator<16,UE::PoseSearch::TMemStackSetAllocator<0>_>,TDefaultMapHashableKeyFuncs<int,UE::PoseSearch::FSearchResult,0>_>
              *)local_2f8);
  local_20 = 0;
  local_2f8._648_4_ = 0;
  if (local_2f8._652_4_ != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TMemStackAllocator<0>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_>_>
              (0x28,4,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,4>_>_> *)
                        local_2f8,0,(int *)(local_2f8 + 0x28c));
  }
  uStack_50 = 0xffffffff;
  if (0x20 < local_58._4_4_) {
    local_58 = 0x2000000000;
    TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_>::Realloc
              ((TBitArray<TSizedInlineAllocator<1,32,TMemStackAllocator<0>_>_> *)(local_2f8 + 0x290)
               ,0);
  }
  return __return_storage_ptr__;
}

// operator<FName,FBoneContainer>_TTuple<FName,FBoneContainer> @ 14a90f1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FBoneContainer> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FBoneContainer>_TTuple<FName,FBoneContainer>
          (TKeyInitializer<FName_const_&> *this,TTuple<FName,FBoneContainer> *__return_storage_ptr__
          )

{
  uint uVar1;
  FBoneContainer *pFVar2;
  undefined1 auStack_198 [32];
  FBoneContainer local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  pFVar2 = FBoneContainer::FBoneContainer(&local_178);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FBoneContainer::FBoneContainer((FBoneContainer *)&__return_storage_ptr__->field_0x8,pFVar2);
  FBoneContainer::~FBoneContainer(&local_178);
  return __return_storage_ptr__;
}

