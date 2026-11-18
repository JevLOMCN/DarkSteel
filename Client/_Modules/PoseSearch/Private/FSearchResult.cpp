// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// CalculateTimeToEvent @ 14a9245d0

float __thiscall UE::PoseSearch::FSearchResult::CalculateTimeToEvent(FSearchResult *this)

{
  undefined1 *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UPoseSearchDatabase *this_01;
  FSearchIndex *this_02;
  FSearchIndexAsset *pFVar7;
  UObject *pUVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  
  this_00 = &this->field_0x4;
  if ((((*(int *)this == -1) ||
       (bVar5 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)this_00,
                           (void *)0x0), bVar5)) || (this->EventPoseIdx == -1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid() && IsEventSearchResult()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                         ,0xbb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar13 = (float)(*pcVar4)();
    return fVar13;
  }
  this_01 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  this_02 = UPoseSearchDatabase::GetSearchIndex(this_01);
  uVar1 = this->EventPoseIdx;
  uVar6 = 0;
  if ((int)uVar1 < (int)this_02->_padding_) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar13 = (float)(*pcVar4)();
    return fVar13;
  }
  uVar6 = *(uint *)this;
  uVar1 = *(uint *)(this_02->_padding_ + 4 + (longlong)(int)uVar1 * 0xc);
  uVar12 = 0;
  if ((int)uVar6 < (int)this_02->_padding_) {
    uVar12 = ~uVar6 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar13 = (float)(*pcVar4)();
    return fVar13;
  }
  if (((*(uint *)(this_02->_padding_ + 4 + (longlong)(int)uVar6 * 0xc) & 0xfffff) !=
       (uVar1 & 0xfffff)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SearchIndex.PoseMetadata[PoseIdx].GetAssetIndex() == SearchIndex.PoseMetadata[EventPoseIdx].GetAssetIndex()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                         ,0xbe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar13 = (float)(*pcVar4)();
    return fVar13;
  }
  pFVar7 = FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_02,*(int *)this);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  iVar10 = this->EventPoseIdx;
  iVar11 = *(int *)this;
  iVar2 = *(int *)(*(longlong *)&pUVar8[1].field_0x8 + 0x30);
  if ((iVar2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SchemaSampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0x100,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar13 = (float)(*pcVar4)();
    return fVar13;
  }
  iVar3 = pFVar7->FirstPoseIdx;
  if (((((iVar11 < iVar3) ||
        (iVar9 = (pFVar7->LastSampleIdx - pFVar7->FirstSampleIdx) + 1 + iVar3, iVar9 <= iVar11)) ||
       (iVar10 < iVar3)) || (iVar9 <= iVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsPoseInRange(FromPoseIdx) && IsPoseInRange(ToPoseIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0x102,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar13 = (float)(*pcVar4)();
    return fVar13;
  }
  iVar10 = iVar10 - iVar11;
  if ((iVar10 < 0) && (pFVar7->bLooping)) {
    iVar10 = iVar10 + (pFVar7->LastSampleIdx - pFVar7->FirstSampleIdx) + 1;
  }
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4);
  iVar11 = *(int *)this;
  iVar3 = *(int *)(*(longlong *)&pUVar8[1].field_0x8 + 0x30);
  if ((iVar3 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SchemaSampleRate > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0xf4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar13 = (float)(*pcVar4)();
    return fVar13;
  }
  iVar11 = iVar11 - pFVar7->FirstPoseIdx;
  if (((iVar11 < 0) || ((pFVar7->LastSampleIdx - pFVar7->FirstSampleIdx) + 1 <= iVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoseOffset >= 0 && PoseOffset < GetNumPoses()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchIndex.h"
                         ,0xf7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar13 = (float)(*pcVar4)();
    return fVar13;
  }
  return (float)iVar10 / (float)iVar2 -
         (this->AssetTime - (float)(pFVar7->FirstSampleIdx + iVar11) / (float)iVar3);
}

// DebugValidate @ 14a927970

bool __thiscall UE::PoseSearch::FSearchResult::DebugValidate(FSearchResult *this)

{
  return true;
}

// InitFrom @ 14a92ec80

void __thiscall
UE::PoseSearch::FSearchResult::InitFrom(FSearchResult *this,FPoseSearchBlueprintResult *param_1)

{
  UPoseSearchDatabase *pUVar1;
  int iVar2;
  FWeakObjectPtr local_res8;
  UPoseSearchDatabase *local_res10;
  
  (this->PoseCost).TotalCost = param_1->SearchCost;
  pUVar1 = (param_1->SelectedDatabase).field0_0x0.DebugPtr;
  if (pUVar1 == (UPoseSearchDatabase *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = UPoseSearchDatabase::GetPoseIndex
                      (pUVar1,(param_1->SelectedAnim).field0_0x0.DebugPtr,param_1->SelectedTime,
                       param_1->bIsMirrored,&param_1->BlendParameters);
  }
  *(int *)this = iVar2;
  this->EventPoseIdx = -1;
  pUVar1 = (param_1->SelectedDatabase).field0_0x0.DebugPtr;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UPoseSearchDatabase *)0x0) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPoseSearchDatabase *)0x0))
    {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPoseSearchDatabase *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  *(int *)&this->field_0x4 = local_res8.ObjectIndex;
  *(int *)&this->field_0x8 = local_res8.ObjectSerialNumber;
  this->AssetTime = param_1->SelectedTime;
  this->bIsContinuingPoseSearch = param_1->bIsContinuingPoseSearch;
  return;
}

// IsEventSearchFromTag @ 14a92f790

bool __thiscall
UE::PoseSearch::FSearchResult::IsEventSearchFromTag(FSearchResult *this,FGameplayTag *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPoseSearchDatabase *this_00;
  FSearchIndex *pFVar4;
  
  if (*(int *)this != -1) {
    bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)&this->field_0x4
                       ,(void *)0x0);
    if (!bVar2) goto LAB_14a92f7df;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                     ,0xb5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14a92f7df:
  this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4);
  pFVar4 = UPoseSearchDatabase::GetSearchIndex(this_00);
  bVar2 = FEventData::IsPoseFromEventTag
                    ((FEventData *)&pFVar4->_padding_,this->EventPoseIdx,param_1);
  return bVar2;
}

// SetAssetTime @ 14a93d850

void __thiscall UE::PoseSearch::FSearchResult::SetAssetTime(FSearchResult *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != __real_7f7fffff) {
    this->AssetTime = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsAssetTimeValid(InAssetTime)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                     ,0x4b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->AssetTime = param_1;
  return;
}

// UpdateWithNormalizedTime @ 14a946960

void __thiscall
UE::PoseSearch::FSearchResult::UpdateWithNormalizedTime(FSearchResult *this,float param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  UPoseSearchDatabase *this_00;
  FSearchIndex *this_01;
  FSearchIndexAsset *this_02;
  UObject *pUVar4;
  
  if (*(int *)this != -1) {
    bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)&this->field_0x4
                       ,(void *)0x0);
    if (!bVar2) {
      this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4);
      this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
      this_02 = FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_01,*(int *)this);
      fVar1 = this_02->ToRealTimeFactor;
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4);
      iVar3 = FSearchIndexAsset::GetPoseIndexFromTime
                        (this_02,param_1 * fVar1,*(int *)(*(longlong *)&pUVar4[1].field_0x8 + 0x30))
      ;
      *(int *)this = iVar3;
      this->AssetTime = param_1;
      return;
    }
  }
  *(undefined8 *)this = 0xffffffff;
  *(undefined8 *)&this->field_0x8 = 0x7f7fffff00000000;
  this->EventPoseIdx = -1;
  this->AssetTime = 3.4028235e+38;
  *(undefined4 *)&this->bIsContinuingPoseSearch = 0;
  return;
}

// UpdateWithRealTime @ 14a946a60

void __thiscall UE::PoseSearch::FSearchResult::UpdateWithRealTime(FSearchResult *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPoseSearchDatabase *this_00;
  FSearchIndex *this_01;
  FSearchIndexAsset *this_02;
  UObject *pUVar5;
  
  if (*(int *)this != -1) {
    bVar3 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)&this->field_0x4
                       ,(void *)0x0);
    if (!bVar3) {
      this_00 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4);
      this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
      this_02 = FSearchIndexBase::GetAssetForPose((FSearchIndexBase *)this_01,*(int *)this);
      if (this_02->ToRealTimeFactor <= __real_38d1b717) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SearchIndexAsset.GetToRealTimeFactor() > (1.e-4f)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                           ,0x8b,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      fVar1 = this_02->ToRealTimeFactor;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x4);
      iVar4 = FSearchIndexAsset::GetPoseIndexFromTime
                        (this_02,param_1,*(int *)(*(longlong *)&pUVar5[1].field_0x8 + 0x30));
      this->AssetTime = param_1 / fVar1;
      *(int *)this = iVar4;
      return;
    }
  }
  *(undefined8 *)this = 0xffffffff;
  *(undefined8 *)&this->field_0x8 = 0x7f7fffff00000000;
  this->EventPoseIdx = -1;
  this->AssetTime = 3.4028235e+38;
  *(undefined4 *)&this->bIsContinuingPoseSearch = 0;
  return;
}

