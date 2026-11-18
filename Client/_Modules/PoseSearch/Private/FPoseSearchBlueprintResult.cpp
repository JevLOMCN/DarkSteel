// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// operator= @ 14a8aef00

FPoseSearchBlueprintResult * __thiscall
FPoseSearchBlueprintResult::operator=
          (FPoseSearchBlueprintResult *this,FPoseSearchBlueprintResult *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *pTVar3;
  UObject *pUVar4;
  UPoseSearchDatabase *pUVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *pTVar8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar4 = (param_1->SelectedAnim).field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  (this->SelectedAnim).field0_0x0 = (param_1->SelectedAnim).field0_0x0;
  this->SelectedTime = param_1->SelectedTime;
  this->bIsContinuingPoseSearch = param_1->bIsContinuingPoseSearch;
  this->WantedPlayRate = param_1->WantedPlayRate;
  this->bLoop = param_1->bLoop;
  this->bIsMirrored = param_1->bIsMirrored;
  dVar7 = (param_1->BlendParameters).field0_0x0._s_0.Y;
  (this->BlendParameters).field0_0x0._s_0.X = (param_1->BlendParameters).field0_0x0._s_0.X;
  (this->BlendParameters).field0_0x0._s_0.Y = dVar7;
  (this->BlendParameters).field0_0x0._s_0.Z = (param_1->BlendParameters).field0_0x0._s_0.Z;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->SelectedDatabase).field0_0x0.DebugPtr, pUVar5 != (UPoseSearchDatabase *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &param_1->ActorRootTransforms;
  (this->SelectedDatabase).field0_0x0 = (param_1->SelectedDatabase).field0_0x0;
  pTVar2 = &this->ActorRootTransforms;
  this->SearchCost = param_1->SearchCost;
  this->bIsInteraction = param_1->bIsInteraction;
  this->Role = param_1->Role;
  if (pTVar2 != pTVar1) {
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ActorRootTransforms).ArrayNum = (param_1->ActorRootTransforms).ArrayNum;
    (this->ActorRootTransforms).ArrayMax = (param_1->ActorRootTransforms).ArrayMax;
    (param_1->ActorRootTransforms).ArrayNum = 0;
    (param_1->ActorRootTransforms).ArrayMax = 0;
  }
  pTVar1 = &param_1->ActorRootBoneTransforms;
  pTVar2 = &this->ActorRootBoneTransforms;
  if (pTVar2 != pTVar1) {
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ActorRootBoneTransforms).ArrayNum = (param_1->ActorRootBoneTransforms).ArrayNum;
    (this->ActorRootBoneTransforms).ArrayMax = (param_1->ActorRootBoneTransforms).ArrayMax;
    (param_1->ActorRootBoneTransforms).ArrayNum = 0;
    (param_1->ActorRootBoneTransforms).ArrayMax = 0;
  }
  pTVar8 = &param_1->AnimContexts;
  pTVar3 = &this->AnimContexts;
  if (pTVar3 != pTVar8) {
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
    (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AnimContexts).ArrayNum = (param_1->AnimContexts).ArrayNum;
    (this->AnimContexts).ArrayMax = (param_1->AnimContexts).ArrayMax;
    (param_1->AnimContexts).ArrayNum = 0;
    (param_1->AnimContexts).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14a8af070

FPoseSearchBlueprintResult * __thiscall
FPoseSearchBlueprintResult::operator=
          (FPoseSearchBlueprintResult *this,FPoseSearchBlueprintResult *param_1)

{
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UObject *pUVar4;
  UPoseSearchDatabase *pUVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar4 = (param_1->SelectedAnim).field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  (this->SelectedAnim).field0_0x0 = (param_1->SelectedAnim).field0_0x0;
  this->SelectedTime = param_1->SelectedTime;
  this->bIsContinuingPoseSearch = param_1->bIsContinuingPoseSearch;
  this->WantedPlayRate = param_1->WantedPlayRate;
  this->bLoop = param_1->bLoop;
  this->bIsMirrored = param_1->bIsMirrored;
  dVar7 = (param_1->BlendParameters).field0_0x0._s_0.Y;
  (this->BlendParameters).field0_0x0._s_0.X = (param_1->BlendParameters).field0_0x0._s_0.X;
  (this->BlendParameters).field0_0x0._s_0.Y = dVar7;
  (this->BlendParameters).field0_0x0._s_0.Z = (param_1->BlendParameters).field0_0x0._s_0.Z;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->SelectedDatabase).field0_0x0.DebugPtr, pUVar5 != (UPoseSearchDatabase *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SelectedDatabase).field0_0x0 = (param_1->SelectedDatabase).field0_0x0;
  this->SearchCost = param_1->SearchCost;
  this->bIsInteraction = param_1->bIsInteraction;
  this->Role = param_1->Role;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ActorRootTransforms,&param_1->ActorRootTransforms);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ActorRootBoneTransforms,&param_1->ActorRootBoneTransforms);
  pTVar1 = &this->AnimContexts;
  if (pTVar1 != &param_1->AnimContexts) {
    iVar3 = (param_1->AnimContexts).ArrayNum;
    piVar2 = &(this->AnimContexts).ArrayMax;
    pFVar6 = (param_1->AnimContexts).AllocatorInstance.Data;
    (this->AnimContexts).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<TObjectPtr<UObject_const_>,TObjectPtr<UObject_const_>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UObject_const_> *)pFVar6,iVar3);
    }
  }
  return this;
}

// StaticStruct @ 14a90d650

UScriptStruct * __cdecl FPoseSearchBlueprintResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchBlueprintResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchBlueprintResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchBlueprintResult,(UObject *)pUVar1,
                         L"PoseSearchBlueprintResult");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchBlueprintResult.OuterSingleton;
}

// operator== @ 14a91bdc0

bool __thiscall
FPoseSearchBlueprintResult::operator==
          (FPoseSearchBlueprintResult *this,FPoseSearchBlueprintResult *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (((((((this->SelectedAnim).field0_0x0.DebugPtr == (param_1->SelectedAnim).field0_0x0.DebugPtr)
         && (param_1->SelectedTime == this->SelectedTime)) &&
        (this->bIsContinuingPoseSearch == param_1->bIsContinuingPoseSearch)) &&
       ((param_1->WantedPlayRate == this->WantedPlayRate && (this->bLoop == param_1->bLoop)))) &&
      ((this->bIsMirrored == param_1->bIsMirrored &&
       (((param_1->BlendParameters).field0_0x0._s_0.X == (this->BlendParameters).field0_0x0._s_0.X
        && ((param_1->BlendParameters).field0_0x0._s_0.Y ==
            (this->BlendParameters).field0_0x0._s_0.Y)))))) &&
     (((param_1->BlendParameters).field0_0x0._s_0.Z == (this->BlendParameters).field0_0x0._s_0.Z &&
      (((((this->SelectedDatabase).field0_0x0.DebugPtr ==
          (param_1->SelectedDatabase).field0_0x0.DebugPtr &&
         (param_1->SearchCost == this->SearchCost)) &&
        (this->bIsInteraction == param_1->bIsInteraction)) &&
       ((this->Role == param_1->Role &&
        (iVar3 = (this->AnimContexts).ArrayNum, iVar3 == (param_1->AnimContexts).ArrayNum)))))))) {
    bVar2 = CompareItems<TObjectPtr<UObject_const_>,int>
                      ((TObjectPtr<UObject_const_> *)(this->AnimContexts).AllocatorInstance.Data,
                       (TObjectPtr<UObject_const_> *)(param_1->AnimContexts).AllocatorInstance.Data,
                       iVar3);
    if ((bVar2) &&
       ((iVar3 = (this->ActorRootTransforms).ArrayNum,
        iVar3 == (param_1->ActorRootTransforms).ArrayNum &&
        (iVar1 = (this->ActorRootBoneTransforms).ArrayNum,
        iVar1 == (param_1->ActorRootBoneTransforms).ArrayNum)))) {
      iVar3 = memcmp((this->ActorRootTransforms).AllocatorInstance.Data,
                     (param_1->ActorRootTransforms).AllocatorInstance.Data,(longlong)iVar3 * 0x60);
      if (iVar3 == 0) {
        iVar3 = memcmp((this->ActorRootBoneTransforms).AllocatorInstance.Data,
                       (param_1->ActorRootBoneTransforms).AllocatorInstance.Data,
                       (longlong)iVar1 * 0x60);
        if (iVar3 == 0) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetAnimationAssetForRole @ 14a92ad60

UAnimationAsset * __thiscall
FPoseSearchBlueprintResult::GetAnimationAssetForRole(FPoseSearchBlueprintResult *this)

{
  UObject *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  UAnimationAsset *pUVar4;
  
  if ((this->SelectedAnim).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimationAsset_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if ((bVar2) &&
       (pUVar4 = (UAnimationAsset *)(this->SelectedAnim).field0_0x0.DebugPtr,
       pUVar4 != (UAnimationAsset *)0x0)) {
      return pUVar4;
    }
  }
  if ((this->SelectedAnim).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMultiAnimAsset_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if ((bVar2) && (pUVar1 = (this->SelectedAnim).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014a92adb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UAnimationAsset *)(**(code **)(*(longlong *)pUVar1 + 0x2d8))(pUVar1,&this->Role);
      return pUVar4;
    }
  }
  return (UAnimationAsset *)0x0;
}

// InitFrom @ 14a92e8a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FPoseSearchBlueprintResult::InitFrom
          (FPoseSearchBlueprintResult *this,FSearchResult *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  UPoseSearchSchema *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UPoseSearchDatabase *pUVar8;
  FSearchIndex *this_00;
  FSearchIndexAsset *pFVar9;
  FPoseSearchDatabaseAnimationAsset *pFVar10;
  UObject *pUVar11;
  FName FVar12;
  TObjectPtr<UObject>_u_0 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_9b;
  undefined1 local_99;
  undefined8 local_98;
  double local_90;
  double dStack_88;
  double local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 local_6b;
  undefined1 local_69;
  FName local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  
  if ((*(int *)param_1 != -1) &&
     (bVar6 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)
                         &param_1->field_0x4,(void *)0x0), !bVar6)) {
    pUVar8 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
    this_00 = UPoseSearchDatabase::GetSearchIndex(pUVar8);
    pFVar9 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose
                       ((FSearchIndexBase *)this_00,*(int *)param_1);
    if (pFVar9 != (FSearchIndexAsset *)0x0) {
      pUVar8 = (UPoseSearchDatabase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->field_0x4);
      pFVar10 = UPoseSearchDatabase::GetDatabaseAnimationAsset(pUVar8,pFVar9);
      if ((pFVar10 == (FPoseSearchDatabaseAnimationAsset *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DatabaseAsset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchResult.cpp"
                             ,0x1ef,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pUVar11 = (UObject *)(**(code **)(pFVar10->_padding_ + 8))(pFVar10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      fVar2 = __real_7f7fffff;
      (this->SelectedAnim).field0_0x0.DebugPtr = pUVar11;
      if ((fVar2 == param_1->AssetTime) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsAssetTimeValid(AssetTime)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                             ,0x4a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      this->SelectedTime = param_1->AssetTime;
      this->bIsContinuingPoseSearch = param_1->bIsContinuingPoseSearch;
      this->WantedPlayRate = param_2;
      this->bLoop = pFVar9->bLooping;
      this->bIsMirrored = pFVar9->bMirrored;
      fVar2 = pFVar9->BlendParameterY;
      (this->BlendParameters).field0_0x0._s_0.X = (double)pFVar9->BlendParameterX;
      (this->BlendParameters).field0_0x0._s_0.Y = (double)fVar2;
      (this->BlendParameters).field0_0x0._s_0.Z = 0.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UPoseSearchDatabase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->SelectedDatabase).field0_0x0.DebugPtr = pUVar8;
      this->SearchCost = (param_1->PoseCost).TotalCost;
      pUVar4 = (pUVar8->Schema).field0_0x0.DebugPtr;
      iVar3 = (pUVar4->Skeletons).ArrayNum;
      FVar12 = UE::PoseSearch::DefaultRole;
      if (iVar3 != 0) {
        if ((iVar3 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar12 = *(FName *)((pUVar4->Skeletons).AllocatorInstance.Data + 0x10);
      }
      this->Role = FVar12;
      this->bIsInteraction = false;
      piVar1 = &(this->ActorRootTransforms).ArrayMax;
      (this->ActorRootTransforms).ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(this->ActorRootTransforms).AllocatorInstance,0,piVar1);
      }
      (this->ActorRootBoneTransforms).ArrayNum = 0;
      if ((this->ActorRootBoneTransforms).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(this->ActorRootBoneTransforms).AllocatorInstance,0,
                   &(this->ActorRootBoneTransforms).ArrayMax);
      }
      (this->AnimContexts).ArrayNum = 0;
      if ((this->AnimContexts).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->AnimContexts).AllocatorInstance,0,&(this->AnimContexts).ArrayMax);
      }
      return true;
    }
  }
  local_98 = 0x3f800000;
  local_9b = 0;
  local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_99 = 0;
  local_6b = 0;
  local_69 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_6c = 0;
  local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_a8.DebugPtr = (UObject *)0x0;
  local_78 = 0;
  local_70 = 0x7f7fffff;
  local_68 = UE::PoseSearch::DefaultRole;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  operator=(this,(FPoseSearchBlueprintResult *)&local_a8.ObjectPtr);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return false;
}

