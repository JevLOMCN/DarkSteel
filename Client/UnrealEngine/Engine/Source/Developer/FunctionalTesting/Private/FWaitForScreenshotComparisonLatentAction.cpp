// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 4

// FWaitForScreenshotComparisonLatentAction @ 148c7feb0

FWaitForScreenshotComparisonLatentAction * __thiscall
FWaitForScreenshotComparisonLatentAction::FWaitForScreenshotComparisonLatentAction
          (FWaitForScreenshotComparisonLatentAction *this,FLatentActionInfo *param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FAutomationTestFramework *pFVar2;
  TObjectPtr<UObject>_u_0 local_res8;
  
  this->_padding_ = (longlong)&___7FWaitForScreenshotComparisonLatentAction__6B_;
  this->ExecutionFunction = param_1->ExecutionFunction;
  this->OutputLink = param_1->Linkage;
  TVar1 = (TObjectPtr<UObject>_u_0)(param_1->CallbackTarget).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar1.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar1.DebugPtr);
    }
  }
  (this->CallbackTarget).ObjectIndex = 0;
  (this->CallbackTarget).ObjectSerialNumber = 0;
  local_res8 = TVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar1.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  FWeakObjectPtr::operator=(&this->CallbackTarget,(FObjectPtr)&local_res8);
  this->TakenScreenshot = false;
  pFVar2 = FAutomationTestFramework::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FWaitForScreenshotComparisonLatentAction>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar2->OnScreenshotTakenAndCompared,
             (FWaitForScreenshotComparisonLatentAction *)&local_res8.ObjectPtr,(pmf_a438a6a3)this);
  return this;
}

// ~FWaitForScreenshotComparisonLatentAction @ 148c810e0

void __thiscall
FWaitForScreenshotComparisonLatentAction::~FWaitForScreenshotComparisonLatentAction
          (FWaitForScreenshotComparisonLatentAction *this)

{
  FAutomationTestFramework *pFVar1;
  
  this->_padding_ = (longlong)&___7FWaitForScreenshotComparisonLatentAction__6B_;
  pFVar1 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pFVar1->OnScreenshotTakenAndCompared,this);
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  return;
}

// OnScreenshotTakenAndCompared @ 148c95ff0

void __thiscall
FWaitForScreenshotComparisonLatentAction::OnScreenshotTakenAndCompared
          (FWaitForScreenshotComparisonLatentAction *this)

{
  this->TakenScreenshot = true;
  return;
}

// UpdateOperation @ 148ca1260

void __thiscall
FWaitForScreenshotComparisonLatentAction::UpdateOperation
          (FWaitForScreenshotComparisonLatentAction *this,FLatentResponse *param_1)

{
  FAutomationTestFramework *pFVar1;
  
  if (this->TakenScreenshot != false) {
    pFVar1 = FAutomationTestFramework::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar1->OnScreenshotTakenAndCompared,this);
    FLatentResponse::FinishAndTriggerIf
              (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  }
  return;
}

