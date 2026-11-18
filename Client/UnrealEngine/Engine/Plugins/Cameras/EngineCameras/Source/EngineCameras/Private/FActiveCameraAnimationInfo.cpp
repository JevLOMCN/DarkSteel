// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 5

// StaticStruct @ 14ad193e0

UScriptStruct * __cdecl FActiveCameraAnimationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActiveCameraAnimationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineCameras();
    Z_Registration_Info_UScriptStruct_FActiveCameraAnimationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo,(UObject *)pUVar1,
                         L"ActiveCameraAnimationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FActiveCameraAnimationInfo.OuterSingleton;
}

// FActiveCameraAnimationInfo @ 14ad1e3e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FActiveCameraAnimationInfo * __thiscall
FActiveCameraAnimationInfo::FActiveCameraAnimationInfo(FActiveCameraAnimationInfo *this)

{
  double dVar1;
  
  (this->Params).PlayRate = 1.0;
  (this->Sequence).field0_0x0.DebugPtr = (UCameraAnimationSequence *)0x0;
  (this->Params).EaseInType = Linear;
  (this->Params).EaseInDuration = 0.0;
  (this->Params).EaseOutType = Linear;
  (this->Params).EaseOutDuration = 0.0;
  (this->Params).bLoop = false;
  (this->Params).StartOffset = 0;
  (this->Params).bRandomStartTime = false;
  (this->Params).DurationOverride = 0.0;
  (this->Params).PlaySpace = CameraLocal;
  (this->Params).Scale = 1.0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Params).UserPlaySpaceRot.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Params).UserPlaySpaceRot.Yaw = dVar1;
  (this->Params).UserPlaySpaceRot.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->Handle = FCameraAnimationHandle::Invalid;
  (this->Player).field0_0x0.DebugPtr = (UCameraAnimationSequencePlayer *)0x0;
  (this->CameraStandIn).field0_0x0.DebugPtr = (UCameraAnimationSequenceCameraStandIn *)0x0;
  this->EaseInCurrentTime = 0.0;
  this->EaseOutCurrentTime = 0.0;
  this->bIsEasingIn = false;
  this->bIsEasingOut = false;
  return this;
}

// operator= @ 14ad1f110

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FActiveCameraAnimationInfo * __thiscall
FActiveCameraAnimationInfo::operator=
          (FActiveCameraAnimationInfo *this,FActiveCameraAnimationInfo *param_1)

{
  UCameraAnimationSequence *pUVar1;
  UCameraAnimationSequencePlayer *pUVar2;
  UCameraAnimationSequenceCameraStandIn *pUVar3;
  double dVar4;
  float fVar5;
  ECameraAnimationEasingType EVar6;
  undefined3 uVar7;
  float fVar8;
  bool bVar9;
  undefined3 uVar10;
  int iVar11;
  ECameraAnimationPlaySpace EVar12;
  undefined7 uVar13;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Sequence).field0_0x0.DebugPtr, pUVar1 != (UCameraAnimationSequence *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Sequence).field0_0x0 = (param_1->Sequence).field0_0x0;
  fVar5 = (param_1->Params).Scale;
  EVar6 = (param_1->Params).EaseInType;
  uVar7 = *(undefined3 *)&(param_1->Params).field_0x9;
  fVar8 = (param_1->Params).EaseInDuration;
  (this->Params).PlayRate = (param_1->Params).PlayRate;
  (this->Params).Scale = fVar5;
  (this->Params).EaseInType = EVar6;
  *(undefined3 *)&(this->Params).field_0x9 = uVar7;
  (this->Params).EaseInDuration = fVar8;
  uVar7 = *(undefined3 *)&(param_1->Params).field_0x11;
  fVar5 = (param_1->Params).EaseOutDuration;
  bVar9 = (param_1->Params).bLoop;
  uVar10 = *(undefined3 *)&(param_1->Params).field_0x19;
  iVar11 = (param_1->Params).StartOffset;
  (this->Params).EaseOutType = (param_1->Params).EaseOutType;
  *(undefined3 *)&(this->Params).field_0x11 = uVar7;
  (this->Params).EaseOutDuration = fVar5;
  (this->Params).bLoop = bVar9;
  *(undefined3 *)&(this->Params).field_0x19 = uVar10;
  (this->Params).StartOffset = iVar11;
  uVar7 = *(undefined3 *)&(param_1->Params).field_0x21;
  fVar5 = (param_1->Params).DurationOverride;
  EVar12 = (param_1->Params).PlaySpace;
  uVar13 = *(undefined7 *)&(param_1->Params).field_0x29;
  (this->Params).bRandomStartTime = (param_1->Params).bRandomStartTime;
  *(undefined3 *)&(this->Params).field_0x21 = uVar7;
  (this->Params).DurationOverride = fVar5;
  (this->Params).PlaySpace = EVar12;
  *(undefined7 *)&(this->Params).field_0x29 = uVar13;
  dVar4 = (param_1->Params).UserPlaySpaceRot.Yaw;
  (this->Params).UserPlaySpaceRot.Pitch = (param_1->Params).UserPlaySpaceRot.Pitch;
  (this->Params).UserPlaySpaceRot.Yaw = dVar4;
  (this->Params).UserPlaySpaceRot.Roll = (param_1->Params).UserPlaySpaceRot.Roll;
  this->Handle = param_1->Handle;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->Player).field0_0x0.DebugPtr,
     pUVar2 != (UCameraAnimationSequencePlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Player).field0_0x0 = (param_1->Player).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->CameraStandIn).field0_0x0.DebugPtr,
     pUVar3 != (UCameraAnimationSequenceCameraStandIn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->CameraStandIn).field0_0x0 = (param_1->CameraStandIn).field0_0x0;
  this->EaseInCurrentTime = param_1->EaseInCurrentTime;
  this->EaseOutCurrentTime = param_1->EaseOutCurrentTime;
  this->bIsEasingIn = param_1->bIsEasingIn;
  this->bIsEasingOut = param_1->bIsEasingOut;
  return this;
}

// HasValidPlayer @ 14ad227e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall FActiveCameraAnimationInfo::HasValidPlayer(FActiveCameraAnimationInfo *this)

{
  UCameraAnimationSequencePlayer *this_00;
  bool bVar1;
  
  this_00 = (this->Player).field0_0x0.DebugPtr;
  if (this_00 != (UCameraAnimationSequencePlayer *)0x0) {
    bVar1 = UCameraAnimationSequencePlayer::IsValid(this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14ad22b20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall FActiveCameraAnimationInfo::IsValid(FActiveCameraAnimationInfo *this)

{
  return (this->Sequence).field0_0x0.DebugPtr != (UCameraAnimationSequence *)0x0;
}

