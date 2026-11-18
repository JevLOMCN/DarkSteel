// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FDelayAction @ 147d77750

FDelayAction * __thiscall
FDelayAction::FDelayAction(FDelayAction *this,float param_1,FLatentActionInfo *param_2)

{
  UObject *pUVar1;
  UObject *local_res8;
  
  this->TimeRemaining = param_1;
  this->_padding_ = (longlong)&___7FDelayAction__6B_;
  this->ExecutionFunction = param_2->ExecutionFunction;
  this->OutputLink = param_2->Linkage;
  pUVar1 = (param_2->CallbackTarget).field0_0x0.DebugPtr;
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

// UpdateOperation @ 147dc7330

void __thiscall FDelayAction::UpdateOperation(FDelayAction *this,FLatentResponse *param_1)

{
  float fVar1;
  
  fVar1 = this->TimeRemaining - param_1->DeltaTime;
  this->TimeRemaining = fVar1;
  FLatentResponse::FinishAndTriggerIf
            (param_1,fVar1 <= 0.0,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

