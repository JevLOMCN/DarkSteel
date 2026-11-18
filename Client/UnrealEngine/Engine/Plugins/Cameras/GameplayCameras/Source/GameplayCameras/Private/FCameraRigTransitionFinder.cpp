// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// FindTransition @ 14d6169b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraRigTransition * __cdecl
UE::Cameras::FCameraRigTransitionFinder::FindTransition
          (TArrayView<TObjectPtr<UCameraRigTransition>_const_,int> *param_1,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_2,
          UCameraRigAsset *param_3,UCameraAsset *param_4,bool param_5,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_6,
          UCameraRigAsset *param_7,UCameraAsset *param_8)

{
  TObjectPtr<UCameraRigTransition>_u_0 *pTVar1;
  TObjectPtr<UCameraRigTransition> this;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TObjectPtr<UCameraRigTransition>_u_0 *pTVar4;
  FCameraRigTransitionConditionMatchParams local_48;
  
  local_48.FromEvaluationContext.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_48.ToEvaluationContext.Object = (FCameraEvaluationContext *)0x0;
  local_48.ToEvaluationContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_48.FromEvaluationContext.Object = param_2->Object;
  if (local_48.FromEvaluationContext.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.FromEvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         = (atomic<int>)
           ((int)(local_48.FromEvaluationContext.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FVar2.ReferenceController = local_48.ToEvaluationContext.SharedReferenceCount.ReferenceController;
  local_48.ToEvaluationContext.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  local_48.ToEvaluationContext.Object = param_6->Object;
  if (local_48.ToEvaluationContext.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.ToEvaluationContext.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.ToEvaluationContext.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.FromCameraRig = param_3;
  local_48.FromCameraAsset = param_4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  pTVar4 = &param_1->DataPtr->field0_0x0;
  pTVar1 = pTVar4 + param_1->ArrayNum;
  local_48.ToCameraRig = param_7;
  local_48.ToCameraAsset = param_8;
  do {
    if (pTVar4 == pTVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.ToEvaluationContext.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.FromEvaluationContext.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_6->SharedReferenceCount).ReferenceController);
      return (UCameraRigTransition *)0x0;
    }
    this.field0_0x0 = (TObjectPtr<UCameraRigTransition>_u_0)pTVar4->DebugPtr;
    if (GC::GIsIncrementalReachabilityPending == false) {
      if (this.field0_0x0 != (UCameraRigTransition *)0x0) goto LAB_14d616aa1;
    }
    else if (this.field0_0x0 != (UCameraRigTransition *)0x0) {
      GC::MarkAsReachable((UObject *)this.field0_0x0);
LAB_14d616aa1:
      bVar3 = UCameraRigTransition::AllConditionsMatch
                        ((UCameraRigTransition *)this.field0_0x0,&local_48);
      if (bVar3) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.ToEvaluationContext.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.FromEvaluationContext.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_2->SharedReferenceCount).ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_6->SharedReferenceCount).ReferenceController);
        return (UCameraRigTransition *)this.field0_0x0;
      }
    }
    pTVar4 = pTVar4 + 1;
  } while( true );
}

