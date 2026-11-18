// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FDelayUntilNextTickAction @ 147d77800

FDelayUntilNextTickAction * __thiscall
FDelayUntilNextTickAction::FDelayUntilNextTickAction
          (FDelayUntilNextTickAction *this,FLatentActionInfo *param_1)

{
  UObject *pUVar1;
  UObject *local_res8;
  
  this->_padding_ = (longlong)&___7FDelayUntilNextTickAction__6B_;
  this->InitialFrameParity = (byte)GFrameCounter & 1;
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
  return this;
}

// UpdateOperation @ 147dc73c0

void __thiscall
FDelayUntilNextTickAction::UpdateOperation(FDelayUntilNextTickAction *this,FLatentResponse *param_1)

{
  bool bVar1;
  
  if ((LatentActionCVars::GuaranteeEngineTickDelay == 0) ||
     (((byte)GFrameCounter & 1) != this->InitialFrameParity)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FLatentResponse::FinishAndTriggerIf
            (param_1,bVar1,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

