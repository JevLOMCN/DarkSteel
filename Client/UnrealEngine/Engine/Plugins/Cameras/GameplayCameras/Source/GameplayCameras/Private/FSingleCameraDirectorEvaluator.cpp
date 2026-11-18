// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// GetTypeID @ 14d5abc70

FCameraObjectTypeID * __thiscall
UE::Cameras::FSingleCameraDirectorEvaluator::GetTypeID(FSingleCameraDirectorEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4900

bool __thiscall
UE::Cameras::FSingleCameraDirectorEvaluator::IsKindOf
          (FSingleCameraDirectorEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FSingleCameraDirectorEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>)param_1->ID !=
      FCameraDirectorEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnRun @ 14d5c2c60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FSingleCameraDirectorEvaluator::OnRun
          (FSingleCameraDirectorEvaluator *this,FCameraDirectorEvaluationParams *param_1,
          FCameraDirectorEvaluationResult *param_2)

{
  atomic<int> aVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  atomic<int> aVar4;
  UClass *pUVar5;
  longlong lVar6;
  UObject *local_res8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_18;
  
  if (*(longlong *)&this->field_0x20 != 0) {
    pUVar5 = USingleCameraDirector::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x20,pUVar5);
    if (bVar3) {
      lVar6 = *(longlong *)&this->field_0x20;
      goto LAB_14d5c2c99;
    }
  }
  lVar6 = 0;
LAB_14d5c2c99:
  local_res8 = *(UObject **)(lVar6 + 0x40);
  if (local_res8 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(local_res8);
    }
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&this->field_0x18;
    if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_18.Object = (FCameraEvaluationContext *)0x0;
    }
    else {
      aVar1 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          local_18.Object = (FCameraEvaluationContext *)0x0;
          local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d5c2cfd;
        }
        LOCK();
        aVar4 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar3 = aVar1 == aVar4;
        if (bVar3) {
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar1 + 1);
          aVar4 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar4;
      } while (!bVar3);
      local_18.Object = *(FCameraEvaluationContext **)&this->field_0x10;
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_14d5c2cfd:
    FVar2.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    FCameraDirectorEvaluationResult::Add
              (param_2,&local_18,(TObjectPtr<UCameraRigAsset_const_>)&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  return;
}

