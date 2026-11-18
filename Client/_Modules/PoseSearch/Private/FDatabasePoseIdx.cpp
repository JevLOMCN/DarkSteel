// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// GetCurrentResultAnimationAsset @ 14a92b6e0

UAnimationAsset * __thiscall
UE::PoseSearch::FDatabasePoseIdx::GetCurrentResultAnimationAsset
          (FDatabasePoseIdx *this,FName *param_1)

{
  TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *this_00;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  UPoseSearchDatabase *pUVar2;
  FSearchIndex *this_01;
  FSearchIndexAsset *pFVar3;
  FPoseSearchDatabaseAnimationAsset *pFVar4;
  UAnimationAsset *pUVar5;
  
  this_00 = &this->Database;
  if (this->PoseIdx != -1) {
    bVar1 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (!bVar1) {
      pUVar2 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      this_01 = UPoseSearchDatabase::GetSearchIndex(pUVar2);
      pFVar3 = FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_01,this->PoseIdx);
      if (pFVar3 != (FSearchIndexAsset *)0x0) {
        pUVar2 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar4 = UPoseSearchDatabase::GetDatabaseAnimationAsset(pUVar2,pFVar3);
        UNRECOVERED_JUMPTABLE = *(code **)(pFVar4->_padding_ + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014a92b75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pUVar5 = (UAnimationAsset *)(*UNRECOVERED_JUMPTABLE)(pFVar4,param_1,UNRECOVERED_JUMPTABLE);
        return pUVar5;
      }
    }
  }
  return (UAnimationAsset *)0x0;
}

// GetCurrentResultAnimationAsset @ 14a92b780

UAnimationAsset * __thiscall
UE::PoseSearch::FDatabasePoseIdx::GetCurrentResultAnimationAsset(FDatabasePoseIdx *this)

{
  TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  UPoseSearchDatabase *pUVar5;
  FSearchIndex *this_01;
  FSearchIndexAsset *pFVar6;
  FPoseSearchDatabaseAnimationAsset *pFVar7;
  UObject *pUVar8;
  UAnimationAsset *pUVar9;
  FName local_res10;
  
  this_00 = &this->Database;
  if (this->PoseIdx != -1) {
    bVar4 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (!bVar4) {
      pUVar5 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      this_01 = UPoseSearchDatabase::GetSearchIndex(pUVar5);
      pFVar6 = FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_01,this->PoseIdx);
      if (pFVar6 != (FSearchIndexAsset *)0x0) {
        pUVar5 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar7 = UPoseSearchDatabase::GetDatabaseAnimationAsset(pUVar5,pFVar6);
        pcVar2 = *(code **)(pFVar7->_padding_ + 0x30);
        pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        lVar3 = *(longlong *)&pUVar8[1].field_0x8;
        iVar1 = *(int *)(lVar3 + 0x40);
        if (iVar1 == 0) {
          local_res10 = DefaultRole;
        }
        else {
          if (iVar1 < 1) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pUVar9 = (UAnimationAsset *)(*pcVar2)();
              return pUVar9;
            }
          }
          local_res10 = *(FName *)(*(longlong *)(lVar3 + 0x38) + 0x10);
        }
        pUVar9 = (UAnimationAsset *)(*pcVar2)(pFVar7,&local_res10);
        return pUVar9;
      }
    }
  }
  return (UAnimationAsset *)0x0;
}

// GetSearchIndexAsset @ 14a92c990

FSearchIndexAsset * __thiscall
UE::PoseSearch::FDatabasePoseIdx::GetSearchIndexAsset(FDatabasePoseIdx *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FSearchIndexAsset *pFVar3;
  UPoseSearchDatabase *this_00;
  FSearchIndex *this_01;
  
  if (!param_1) {
    if (this->PoseIdx != -1) {
      bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        (&this->Database,(void *)0x0);
      if (!bVar2) goto LAB_14a92c9f3;
    }
    return (FSearchIndexAsset *)0x0;
  }
  if (this->PoseIdx != -1) {
    bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      (&this->Database,(void *)0x0);
    if (!bVar2) goto LAB_14a92c9f3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                     ,0x16,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSearchIndexAsset *)(*pcVar1)();
    return pFVar3;
  }
LAB_14a92c9f3:
  this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&(this->Database).WeakPtr);
  this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
  pFVar3 = FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_01,this->PoseIdx);
  return pFVar3;
}

