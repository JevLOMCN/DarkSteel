// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 3

// FDelayForFramesLatentAction @ 148c7f300

FDelayForFramesLatentAction * __thiscall
FDelayForFramesLatentAction::FDelayForFramesLatentAction
          (FDelayForFramesLatentAction *this,FLatentActionInfo *param_1,int param_2)

{
  UObject *pUVar1;
  UObject *local_res8;
  
  this->_padding_ = (longlong)&___7FDelayForFramesLatentAction__6B_;
  this->ExecutionFunction = param_1->ExecutionFunction;
  this->OutputLink = param_1->Linkage;
  pUVar1 = (param_1->CallbackTarget).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  (this->CallbackTarget).ObjectIndex = 0;
  (this->CallbackTarget).ObjectSerialNumber = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&this->CallbackTarget,(FObjectPtr)&local_res8);
  this->FramesRemaining = param_2;
  return this;
}

// ~FDelayForFramesLatentAction @ 148c80df0

void __thiscall
FDelayForFramesLatentAction::~FDelayForFramesLatentAction(FDelayForFramesLatentAction *this)

{
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  return;
}

// UpdateOperation @ 148ca0f50

void __thiscall
FDelayForFramesLatentAction::UpdateOperation
          (FDelayForFramesLatentAction *this,FLatentResponse *param_1)

{
  this->FramesRemaining = this->FramesRemaining + -1;
  FLatentResponse::FinishAndTriggerIf
            (param_1,this->FramesRemaining < 1,this->ExecutionFunction,this->OutputLink,
             this->CallbackTarget);
  return;
}

