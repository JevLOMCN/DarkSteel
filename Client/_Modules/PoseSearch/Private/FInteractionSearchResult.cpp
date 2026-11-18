// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// FInteractionSearchResult @ 14a8e0720

FInteractionSearchResult * __thiscall
UE::PoseSearch::FInteractionSearchResult::FInteractionSearchResult
          (FInteractionSearchResult *this,FInteractionSearchResult *param_1)

{
  ForElementType<UE::Math::TTransform<double>_> FVar1;
  longlong lVar2;
  
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->SearchIndex = param_1->SearchIndex;
  (this->ActorRootTransforms).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TTransform<double>_>)0x0;
  if ((param_1->ActorRootTransforms).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    memmove(&this->ActorRootTransforms,&param_1->ActorRootTransforms,0x180);
  }
  FVar1 = (this->ActorRootTransforms).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->ActorRootTransforms).AllocatorInstance.SecondaryData =
       (param_1->ActorRootTransforms).AllocatorInstance.SecondaryData;
  (param_1->ActorRootTransforms).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TTransform<double>_>)0x0;
  (this->ActorRootTransforms).ArrayNum = (param_1->ActorRootTransforms).ArrayNum;
  (this->ActorRootTransforms).ArrayMax = (param_1->ActorRootTransforms).ArrayMax;
  (param_1->ActorRootTransforms).ArrayNum = 0;
  (param_1->ActorRootTransforms).ArrayMax = 4;
  (this->ActorRootBoneTransforms).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TTransform<double>_>)0x0;
  if ((param_1->ActorRootBoneTransforms).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    memmove(&this->ActorRootBoneTransforms,&param_1->ActorRootBoneTransforms,0x180);
  }
  FVar1 = (this->ActorRootBoneTransforms).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Math::TTransform<double>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->ActorRootBoneTransforms).AllocatorInstance.SecondaryData =
       (param_1->ActorRootBoneTransforms).AllocatorInstance.SecondaryData;
  (param_1->ActorRootBoneTransforms).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TTransform<double>_>)0x0;
  (this->ActorRootBoneTransforms).ArrayNum = (param_1->ActorRootBoneTransforms).ArrayNum;
  (this->ActorRootBoneTransforms).ArrayMax = (param_1->ActorRootBoneTransforms).ArrayMax;
  (param_1->ActorRootBoneTransforms).ArrayNum = 0;
  (param_1->ActorRootBoneTransforms).ArrayMax = 4;
  return this;
}

// operator== @ 14a8e49e0

bool __thiscall
UE::PoseSearch::FInteractionSearchResult::operator==
          (FInteractionSearchResult *this,FInteractionSearchResult *param_1)

{
  bool bVar1;
  
  if ((int)this->_padding_ == (int)param_1->_padding_) {
    bVar1 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::
            UEOpEquals<UPoseSearchDatabase_const_,bool>
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       ((longlong)&this->_padding_ + 4),
                       (TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       ((longlong)&param_1->_padding_ + 4));
    if ((((bVar1) &&
         (*(float *)((longlong)&param_1->_padding_ + 4) ==
          *(float *)((longlong)&this->_padding_ + 4))) &&
        ((int)this->_padding_ == (int)param_1->_padding_)) &&
       ((*(float *)((longlong)&param_1->_padding_ + 4) == *(float *)((longlong)&this->_padding_ + 4)
        && ((char)this->_padding_ == (char)param_1->_padding_)))) {
      return true;
    }
  }
  return false;
}

