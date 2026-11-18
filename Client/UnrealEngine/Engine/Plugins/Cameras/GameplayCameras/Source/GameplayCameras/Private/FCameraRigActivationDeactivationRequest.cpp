// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// ResolveCameraRigProxyIfNeeded @ 14d561a60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraRigActivationDeactivationRequest::ResolveCameraRigProxyIfNeeded
          (FCameraRigActivationDeactivationRequest *this,FCameraDirectorEvaluator *param_1)

{
  UCameraDirector *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UCameraRigAsset *pUVar5;
  TObjectPtr<UCameraRigProxyAsset_const_>_u_0 local_res8;
  
  if (((this->CameraRig).field0_0x0.DebugPtr == (UCameraRigAsset *)0x0) &&
     (local_res8 = (TObjectPtr<UCameraRigProxyAsset_const_>_u_0)
                   (this->CameraRigProxy).field0_0x0.DebugPtr,
     local_res8.DebugPtr != (UCameraRigProxyAsset *)0x0)) {
    pUVar1 = (param_1->PrivateCameraDirector).field0_0x0.DebugPtr;
    if (pUVar1 == (UCameraDirector *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<648644704279199764>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraDirectorEvaluator.cpp"
                         ,0x14,"InDirector");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    else {
      pUVar5 = FCameraRigProxyRedirectTable::ResolveProxy
                         (&pUVar1->CameraRigProxyRedirectTable,
                          (FCameraRigProxyResolveParams *)&local_res8.ObjectPtr);
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UCameraRigAsset *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->CameraRig).field0_0x0.DebugPtr = pUVar5;
    }
  }
  return (this->CameraRig).field0_0x0.DebugPtr != (UCameraRigAsset *)0x0;
}

// ResolveCameraRigProxyIfNeeded @ 14d561b10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UE::Cameras::FCameraRigActivationDeactivationRequest::ResolveCameraRigProxyIfNeeded
          (FCameraRigActivationDeactivationRequest *this,UCameraDirector *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UCameraRigAsset *pUVar4;
  TObjectPtr<UCameraRigProxyAsset_const_>_u_0 local_res8;
  
  if (((this->CameraRig).field0_0x0.DebugPtr == (UCameraRigAsset *)0x0) &&
     (local_res8 = (TObjectPtr<UCameraRigProxyAsset_const_>_u_0)
                   (this->CameraRigProxy).field0_0x0.DebugPtr,
     local_res8.DebugPtr != (UCameraRigProxyAsset *)0x0)) {
    if (param_1 == (UCameraDirector *)0x0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<648644704279199764>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraDirectorEvaluator.cpp"
                         ,0x14,"InDirector");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      pUVar4 = FCameraRigProxyRedirectTable::ResolveProxy
                         (&param_1->CameraRigProxyRedirectTable,
                          (FCameraRigProxyResolveParams *)&local_res8.ObjectPtr);
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCameraRigAsset *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->CameraRig).field0_0x0.DebugPtr = pUVar4;
    }
  }
  return (this->CameraRig).field0_0x0.DebugPtr != (UCameraRigAsset *)0x0;
}

// FCameraRigActivationDeactivationRequest @ 14d58d130

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigActivationDeactivationRequest * __thiscall
UE::Cameras::FCameraRigActivationDeactivationRequest::FCameraRigActivationDeactivationRequest
          (FCameraRigActivationDeactivationRequest *this,
          FCameraRigActivationDeactivationRequest *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UCameraRigAsset *pUVar2;
  UCameraRigProxyAsset *pUVar3;
  UCameraRigTransition *pUVar4;
  
  (this->EvaluationContext).Object = (param_1->EvaluationContext).Object;
  pTVar1 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar2 = (param_1->CameraRig).field0_0x0.DebugPtr;
  (this->CameraRig).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->CameraRigProxy).field0_0x0.DebugPtr;
  (this->CameraRigProxy).field0_0x0.DebugPtr = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UCameraRigProxyAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->RequestType = param_1->RequestType;
  this->Layer = param_1->Layer;
  pUVar4 = (param_1->TransitionOverride).field0_0x0.DebugPtr;
  (this->TransitionOverride).field0_0x0.DebugPtr = pUVar4;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UCameraRigTransition *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->OrderKey = param_1->OrderKey;
  this->bForceActivateDeactivate = param_1->bForceActivateDeactivate;
  return this;
}

