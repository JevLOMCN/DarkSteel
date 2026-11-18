// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FBlendedCameraCut @ 14689bef0

FBlendedCameraCut * __thiscall
UE::MovieScene::FBlendedCameraCut::FBlendedCameraCut
          (FBlendedCameraCut *this,FBlendedCameraCut *param_1)

{
  bool bVar1;
  float fVar2;
  UMovieSceneSection *pUVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  pUVar3 = (param_1->Input).Section.field0_0x0.DebugPtr;
  (this->Input).Section.field0_0x0.DebugPtr = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneSection *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->Input).InstanceHandle = (param_1->Input).InstanceHandle;
  (this->Input).bInputHasBeenProcessed = (param_1->Input).bInputHasBeenProcessed;
  uVar4 = (param_1->CameraBindingID).Guid.B;
  uVar5 = (param_1->CameraBindingID).Guid.C;
  uVar6 = (param_1->CameraBindingID).Guid.D;
  (this->CameraBindingID).Guid.A = (param_1->CameraBindingID).Guid.A;
  (this->CameraBindingID).Guid.B = uVar4;
  (this->CameraBindingID).Guid.C = uVar5;
  (this->CameraBindingID).Guid.D = uVar6;
  iVar7 = (param_1->CameraBindingID).ResolveParentIndex;
  (this->CameraBindingID).SequenceID = (param_1->CameraBindingID).SequenceID;
  (this->CameraBindingID).ResolveParentIndex = iVar7;
  (this->OperandSequenceID).Value = (param_1->OperandSequenceID).Value;
  (this->LocalStartTime).Value = (param_1->LocalStartTime).Value;
  (this->LocalEaseInEndTime).Value = (param_1->LocalEaseInEndTime).Value;
  this->LocalContextTime = param_1->LocalContextTime;
  (this->LocalEaseOutStartTime).Value = (param_1->LocalEaseOutStartTime).Value;
  (this->LocalEndTime).Value = (param_1->LocalEndTime).Value;
  this->LocalDirection = param_1->LocalDirection;
  fVar2 = (param_1->EaseIn).RootBlendTime;
  (this->EaseIn).BlendType.bIsSet = false;
  (this->EaseIn).RootBlendTime = fVar2;
  bVar1 = (param_1->EaseIn).BlendType.bIsSet;
  (this->EaseIn).BlendType.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->EaseIn).BlendType.TypedValue = (param_1->EaseIn).BlendType.TypedValue;
  }
  fVar2 = (param_1->EaseOut).RootBlendTime;
  (this->EaseOut).BlendType.bIsSet = false;
  (this->EaseOut).RootBlendTime = fVar2;
  bVar1 = (param_1->EaseOut).BlendType.bIsSet;
  (this->EaseOut).BlendType.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->EaseOut).BlendType.TypedValue = (param_1->EaseOut).BlendType.TypedValue;
  }
  this->bLockPreviousCamera = param_1->bLockPreviousCamera;
  uVar4 = (param_1->PreviousCameraBindingID).Guid.B;
  uVar5 = (param_1->PreviousCameraBindingID).Guid.C;
  uVar6 = (param_1->PreviousCameraBindingID).Guid.D;
  (this->PreviousCameraBindingID).Guid.A = (param_1->PreviousCameraBindingID).Guid.A;
  (this->PreviousCameraBindingID).Guid.B = uVar4;
  (this->PreviousCameraBindingID).Guid.C = uVar5;
  (this->PreviousCameraBindingID).Guid.D = uVar6;
  iVar7 = (param_1->PreviousCameraBindingID).ResolveParentIndex;
  (this->PreviousCameraBindingID).SequenceID = (param_1->PreviousCameraBindingID).SequenceID;
  (this->PreviousCameraBindingID).ResolveParentIndex = iVar7;
  (this->PreviousOperandSequenceID).Value = (param_1->PreviousOperandSequenceID).Value;
  this->PreviewBlendFactor = param_1->PreviewBlendFactor;
  this->bCanBlend = param_1->bCanBlend;
  return this;
}

// operator= @ 1468a12f0

FBlendedCameraCut * __thiscall
UE::MovieScene::FBlendedCameraCut::operator=(FBlendedCameraCut *this,FBlendedCameraCut *param_1)

{
  TOptional<EMovieSceneBuiltInEasing> *pTVar1;
  TOptional<EMovieSceneBuiltInEasing> *pTVar2;
  UMovieSceneSection *pUVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if ((GC::GIsIncrementalReachabilityPending) &&
     (pUVar3 = (param_1->Input).Section.field0_0x0.DebugPtr, pUVar3 != (UMovieSceneSection *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  pTVar1 = &(this->EaseIn).BlendType;
  (this->Input).Section.field0_0x0 = (param_1->Input).Section.field0_0x0;
  (this->Input).InstanceHandle = (param_1->Input).InstanceHandle;
  (this->Input).bInputHasBeenProcessed = (param_1->Input).bInputHasBeenProcessed;
  uVar4 = (param_1->CameraBindingID).Guid.B;
  uVar5 = (param_1->CameraBindingID).Guid.C;
  uVar6 = (param_1->CameraBindingID).Guid.D;
  (this->CameraBindingID).Guid.A = (param_1->CameraBindingID).Guid.A;
  (this->CameraBindingID).Guid.B = uVar4;
  (this->CameraBindingID).Guid.C = uVar5;
  (this->CameraBindingID).Guid.D = uVar6;
  iVar7 = (param_1->CameraBindingID).ResolveParentIndex;
  (this->CameraBindingID).SequenceID = (param_1->CameraBindingID).SequenceID;
  (this->CameraBindingID).ResolveParentIndex = iVar7;
  (this->OperandSequenceID).Value = (param_1->OperandSequenceID).Value;
  (this->LocalStartTime).Value = (param_1->LocalStartTime).Value;
  (this->LocalEaseInEndTime).Value = (param_1->LocalEaseInEndTime).Value;
  this->LocalContextTime = param_1->LocalContextTime;
  (this->LocalEaseOutStartTime).Value = (param_1->LocalEaseOutStartTime).Value;
  (this->LocalEndTime).Value = (param_1->LocalEndTime).Value;
  this->LocalDirection = param_1->LocalDirection;
  (this->EaseIn).RootBlendTime = (param_1->EaseIn).RootBlendTime;
  pTVar2 = &(param_1->EaseIn).BlendType;
  if (pTVar2 != pTVar1) {
    if ((param_1->EaseIn).BlendType.bIsSet == false) {
      if ((this->EaseIn).BlendType.bIsSet != false) {
        (this->EaseIn).BlendType.bIsSet = false;
      }
    }
    else {
      pTVar1->TypedValue = pTVar2->TypedValue;
      (this->EaseIn).BlendType.bIsSet = true;
    }
  }
  pTVar1 = &(this->EaseOut).BlendType;
  (this->EaseOut).RootBlendTime = (param_1->EaseOut).RootBlendTime;
  pTVar2 = &(param_1->EaseOut).BlendType;
  if (pTVar2 != pTVar1) {
    if ((param_1->EaseOut).BlendType.bIsSet == false) {
      if ((this->EaseOut).BlendType.bIsSet != false) {
        (this->EaseOut).BlendType.bIsSet = false;
      }
    }
    else {
      pTVar1->TypedValue = pTVar2->TypedValue;
      (this->EaseOut).BlendType.bIsSet = true;
    }
  }
  this->bLockPreviousCamera = param_1->bLockPreviousCamera;
  uVar4 = (param_1->PreviousCameraBindingID).Guid.B;
  uVar5 = (param_1->PreviousCameraBindingID).Guid.C;
  uVar6 = (param_1->PreviousCameraBindingID).Guid.D;
  (this->PreviousCameraBindingID).Guid.A = (param_1->PreviousCameraBindingID).Guid.A;
  (this->PreviousCameraBindingID).Guid.B = uVar4;
  (this->PreviousCameraBindingID).Guid.C = uVar5;
  (this->PreviousCameraBindingID).Guid.D = uVar6;
  iVar7 = (param_1->PreviousCameraBindingID).ResolveParentIndex;
  (this->PreviousCameraBindingID).SequenceID = (param_1->PreviousCameraBindingID).SequenceID;
  (this->PreviousCameraBindingID).ResolveParentIndex = iVar7;
  (this->PreviousOperandSequenceID).Value = (param_1->PreviousOperandSequenceID).Value;
  this->PreviewBlendFactor = param_1->PreviewBlendFactor;
  this->bCanBlend = param_1->bCanBlend;
  return this;
}

