// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// operator= @ 14d592450

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigEvaluationInfo * __thiscall
UE::Cameras::FCameraRigEvaluationInfo::operator=
          (FCameraRigEvaluationInfo *this,FCameraRigEvaluationInfo *param_1)

{
  UCameraRigAsset *pUVar1;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *pTVar2;
  
  this->InstanceID = param_1->InstanceID;
  pTVar2 = &param_1->EvaluationContext;
  if (&this->EvaluationContext != pTVar2) {
    (this->EvaluationContext).Object = pTVar2->Object;
    pTVar2->Object = (FCameraEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EvaluationContext).SharedReferenceCount,
               &(param_1->EvaluationContext).SharedReferenceCount);
  }
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->CameraRig).field0_0x0.DebugPtr, pUVar1 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CameraRig).field0_0x0 = (param_1->CameraRig).field0_0x0;
  this->LastResult = param_1->LastResult;
  this->RootEvaluator = param_1->RootEvaluator;
  return this;
}

