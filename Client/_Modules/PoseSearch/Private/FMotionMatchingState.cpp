// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 8

// ~FMotionMatchingState @ 14a8ad950

void __thiscall FMotionMatchingState::~FMotionMatchingState(FMotionMatchingState *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x48 = 0;
  pvVar1 = *(void **)&(this->PoseIndicesHistory).IndexToTime.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::PoseSearch::FHistoricalPoseIndex,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PoseIndicesHistory);
  pFVar2 = (this->SearchResult).AnimContexts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SearchResult).ActorRootBoneTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SearchResult).ActorRootTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// StaticStruct @ 14a90d960

UScriptStruct * __cdecl FMotionMatchingState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMotionMatchingState.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FMotionMatchingState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMotionMatchingState,(UObject *)pUVar1,
                         L"MotionMatchingState");
  }
  return Z_Registration_Info_UScriptStruct_FMotionMatchingState.OuterSingleton;
}

// FMotionMatchingState @ 14a919110

FMotionMatchingState * __thiscall
FMotionMatchingState::FMotionMatchingState(FMotionMatchingState *this)

{
  undefined8 uVar1;
  
  *(undefined4 *)&this->CurrentSearchResult = 0xffffffff;
  *(undefined8 *)&(this->CurrentSearchResult).field_0x4 = 0;
  (this->CurrentSearchResult).bIsContinuingPoseSearch = false;
  (this->SearchResult).SelectedAnim.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->CurrentSearchResult).EventPoseIdx = -1;
  (this->CurrentSearchResult).AssetTime = 3.4028235e+38;
  (this->SearchResult).SelectedTime = 0.0;
  (this->SearchResult).bIsContinuingPoseSearch = false;
  (this->SearchResult).bLoop = false;
  (this->SearchResult).bIsMirrored = false;
  (this->SearchResult).WantedPlayRate = 1.0;
  (this->CurrentSearchResult).PoseCost.TotalCost = 3.4028235e+38;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SearchResult).BlendParameters.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SearchResult).BlendParameters.field0_0x0._s_0.Y = (double)uVar1;
  (this->SearchResult).BlendParameters.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SearchResult).SelectedDatabase.field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  (this->SearchResult).SearchCost = 3.4028235e+38;
  (this->SearchResult).bIsInteraction = false;
  (this->SearchResult).Role = UE::PoseSearch::DefaultRole;
  (this->SearchResult).ActorRootTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchResult).ActorRootTransforms.ArrayNum = 0;
  (this->SearchResult).ActorRootTransforms.ArrayMax = 0;
  (this->SearchResult).ActorRootBoneTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SearchResult).ActorRootBoneTransforms.ArrayNum = 0;
  (this->SearchResult).ActorRootBoneTransforms.ArrayMax = 0;
  (this->SearchResult).AnimContexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchResult).AnimContexts.ArrayNum = 0;
  (this->SearchResult).AnimContexts.ArrayMax = 0;
  this->ElapsedPoseSearchTime = 0.0;
  this->WantedPlayRate = 1.0;
  this->bJumpedToPose = false;
  *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime = 0;
  *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime.field_0x8 = 0;
  *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime.field_0x20 = 0;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x28 = 0;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x2c = 0x80;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x34 = 0;
  *(undefined8 *)&(this->PoseIndicesHistory).IndexToTime.field_0x40 = 0;
  *(undefined4 *)&(this->PoseIndicesHistory).IndexToTime.field_0x48 = 0;
  return this;
}

// AdjustAssetTime @ 14a9222f0

void __thiscall FMotionMatchingState::AdjustAssetTime(FMotionMatchingState *this,float param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  UPoseSearchDatabase *this_00;
  FSearchIndex *this_01;
  FSearchIndexAsset *this_02;
  UObject *pUVar4;
  
  if (*(int *)&this->CurrentSearchResult != -1) {
    bVar2 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                       &(this->CurrentSearchResult).field_0x4,(void *)0x0);
    if (!bVar2) {
      this_00 = (UPoseSearchDatabase *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->CurrentSearchResult).field_0x4);
      this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
      this_02 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose
                          ((FSearchIndexBase *)this_01,*(int *)&this->CurrentSearchResult);
      fVar1 = this_02->ToRealTimeFactor;
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->CurrentSearchResult).field_0x4);
      iVar3 = UE::PoseSearch::FSearchIndexAsset::GetPoseIndexFromTime
                        (this_02,param_1 * fVar1,*(int *)(*(longlong *)&pUVar4[1].field_0x8 + 0x30))
      ;
      *(int *)&this->CurrentSearchResult = iVar3;
      (this->CurrentSearchResult).AssetTime = param_1;
      return;
    }
  }
  *(undefined8 *)&this->CurrentSearchResult = 0xffffffff;
  *(undefined8 *)&(this->CurrentSearchResult).field_0x8 = 0x7f7fffff00000000;
  (this->CurrentSearchResult).EventPoseIdx = -1;
  (this->CurrentSearchResult).AssetTime = 3.4028235e+38;
  *(undefined4 *)&(this->CurrentSearchResult).bIsContinuingPoseSearch = 0;
  return;
}

// GetEstimatedFutureRootMotionVelocity @ 14a92ba00

TVector<double> * __thiscall
FMotionMatchingState::GetEstimatedFutureRootMotionVelocity
          (FMotionMatchingState *this,TVector<double> *__return_storage_ptr__)

{
  UPoseSearchDatabase *this_00;
  undefined8 uVar1;
  int iVar2;
  UPoseSearchFeatureChannel_Trajectory *this_01;
  FSearchIndex *this_02;
  TArrayView<float_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  this_00 = (this->SearchResult).SelectedDatabase.field0_0x0.DebugPtr;
  if ((this_00 != (UPoseSearchDatabase *)0x0) &&
     (this_01 = UPoseSearchSchema::FindFirstChannelOfType<UPoseSearchFeatureChannel_Trajectory>
                          ((this_00->Schema).field0_0x0.DebugPtr),
     this_01 != (UPoseSearchFeatureChannel_Trajectory *)0x0)) {
    iVar2 = UPoseSearchDatabase::GetPoseIndex
                      (this_00,(this->SearchResult).SelectedAnim.field0_0x0.DebugPtr,
                       (this->SearchResult).SelectedTime,(this->SearchResult).bIsMirrored,
                       &(this->SearchResult).BlendParameters);
    this_02 = UPoseSearchDatabase::GetSearchIndex(this_00);
    if ((int)this_02->_padding_ != 0) {
      UE::PoseSearch::FSearchIndex::GetPoseValues(this_02,&local_28,iVar2);
      local_18.DataPtr = local_28.DataPtr;
      local_18.ArrayNum = local_28.ArrayNum;
      local_18._12_4_ = local_28._12_4_;
      UPoseSearchFeatureChannel_Trajectory::GetEstimatedFutureRootMotionVelocity
                (this_01,__return_storage_ptr__,&local_18);
      return __return_storage_ptr__;
    }
  }
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// Reset @ 14a93aae0

void __thiscall FMotionMatchingState::Reset(FMotionMatchingState *this,TTransform<double> *param_1)

{
  TObjectPtr<UObject>_u_0 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  FName local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  this->bJumpedToPose = false;
  this->WantedPlayRate = 1.0;
  local_7b = 0;
  local_79 = 0;
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_4b = 0;
  local_49 = 0;
  local_80 = 0;
  local_7c = 0;
  local_4c = 0;
  local_88.DebugPtr = (UObject *)0x0;
  local_58 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = 0x3f800000;
  local_50 = 0x7f7fffff;
  local_48 = UE::PoseSearch::DefaultRole;
  FPoseSearchBlueprintResult::operator=
            (&this->SearchResult,(FPoseSearchBlueprintResult *)&local_88.ObjectPtr);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  this->ElapsedPoseSearchTime = INFINITY;
  return;
}

// Reset @ 14a93abd0

void __thiscall FMotionMatchingState::Reset(FMotionMatchingState *this)

{
  TObjectPtr<UObject>_u_0 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  FName local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  this->bJumpedToPose = false;
  this->WantedPlayRate = 1.0;
  local_7b = 0;
  local_79 = 0;
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_4b = 0;
  local_49 = 0;
  local_80 = 0;
  local_7c = 0;
  local_4c = 0;
  local_88.DebugPtr = (UObject *)0x0;
  local_58 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_78 = 0x3f800000;
  local_50 = 0x7f7fffff;
  local_48 = UE::PoseSearch::DefaultRole;
  FPoseSearchBlueprintResult::operator=
            (&this->SearchResult,(FPoseSearchBlueprintResult *)&local_88.ObjectPtr);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  this->ElapsedPoseSearchTime = INFINITY;
  return;
}

// UpdateWantedPlayRate @ 14a946930

void __thiscall
FMotionMatchingState::UpdateWantedPlayRate
          (FMotionMatchingState *this,FSearchContext *param_1,FFloatInterval *param_2,float param_3,
          FPoseSearchEvent *param_4)

{
  float fVar1;
  
  fVar1 = UE::PoseSearch::CalculateWantedPlayRate
                    (&this->CurrentSearchResult,param_1,param_2,param_3,param_4);
  this->WantedPlayRate = fVar1;
  return;
}

