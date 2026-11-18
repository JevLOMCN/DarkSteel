// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// StaticStruct @ 146a489b0

UScriptStruct * __cdecl FQueuedWidgetAnimationTransition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FQueuedWidgetAnimationTransition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FQueuedWidgetAnimationTransition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FQueuedWidgetAnimationTransition,
                         (UObject *)pUVar1,L"QueuedWidgetAnimationTransition");
  }
  return Z_Registration_Info_UScriptStruct_FQueuedWidgetAnimationTransition.OuterSingleton;
}

// operator= @ 146a592c0

FQueuedWidgetAnimationTransition * __thiscall
FQueuedWidgetAnimationTransition::operator=
          (FQueuedWidgetAnimationTransition *this,FQueuedWidgetAnimationTransition *param_1)

{
  UWidgetAnimation *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->WidgetAnimation).field0_0x0.DebugPtr, pUVar1 != (UWidgetAnimation *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->WidgetAnimation).field0_0x0 = (param_1->WidgetAnimation).field0_0x0;
  this->TransitionMode = param_1->TransitionMode;
  if (&param_1->StartAtTime != &this->StartAtTime) {
    if ((param_1->StartAtTime).bIsSet == false) {
      if ((this->StartAtTime).bIsSet != false) {
        (this->StartAtTime).bIsSet = false;
      }
    }
    else {
      (this->StartAtTime).TypedValue = (param_1->StartAtTime).TypedValue;
      (this->StartAtTime).bIsSet = true;
    }
  }
  if (&param_1->EndAtTime != &this->EndAtTime) {
    if ((param_1->EndAtTime).bIsSet == false) {
      if ((this->EndAtTime).bIsSet != false) {
        (this->EndAtTime).bIsSet = false;
      }
    }
    else {
      (this->EndAtTime).TypedValue = (param_1->EndAtTime).TypedValue;
      (this->EndAtTime).bIsSet = true;
    }
  }
  if (&param_1->NumLoopsToPlay != &this->NumLoopsToPlay) {
    if ((param_1->NumLoopsToPlay).bIsSet == false) {
      if ((this->NumLoopsToPlay).bIsSet != false) {
        (this->NumLoopsToPlay).bIsSet = false;
      }
    }
    else {
      (this->NumLoopsToPlay).TypedValue = (param_1->NumLoopsToPlay).TypedValue;
      (this->NumLoopsToPlay).bIsSet = true;
    }
  }
  if (&param_1->PlayMode != &this->PlayMode) {
    if ((param_1->PlayMode).bIsSet == false) {
      if ((this->PlayMode).bIsSet != false) {
        (this->PlayMode).bIsSet = false;
      }
    }
    else {
      (this->PlayMode).TypedValue = (param_1->PlayMode).TypedValue;
      (this->PlayMode).bIsSet = true;
    }
  }
  if (&param_1->PlaybackSpeed != &this->PlaybackSpeed) {
    if ((param_1->PlaybackSpeed).bIsSet == false) {
      if ((this->PlaybackSpeed).bIsSet != false) {
        (this->PlaybackSpeed).bIsSet = false;
      }
    }
    else {
      (this->PlaybackSpeed).TypedValue = (param_1->PlaybackSpeed).TypedValue;
      (this->PlaybackSpeed).bIsSet = true;
    }
  }
  if (&param_1->bRestoreState != &this->bRestoreState) {
    if ((param_1->bRestoreState).bIsSet == false) {
      if ((this->bRestoreState).bIsSet != false) {
        (this->bRestoreState).bIsSet = false;
        return this;
      }
    }
    else {
      (this->bRestoreState).TypedValue = (param_1->bRestoreState).TypedValue;
      (this->bRestoreState).bIsSet = true;
    }
  }
  return this;
}

