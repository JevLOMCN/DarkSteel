// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 4

// FTakeScreenshotAfterTimeLatentAction @ 148c7f8c0

FTakeScreenshotAfterTimeLatentAction * __thiscall
FTakeScreenshotAfterTimeLatentAction::FTakeScreenshotAfterTimeLatentAction
          (FTakeScreenshotAfterTimeLatentAction *this,FLatentActionInfo *param_1,FString *param_2,
          FString *param_3,FAutomationScreenshotOptions *param_4)

{
  UObject *pUVar1;
  UObject *local_res8;
  
  this->_padding_ = (longlong)&___7FTakeScreenshotAfterTimeLatentAction__6B_;
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
  ::FString::FString(&this->ScreenshotName,param_2);
  ::FString::FString(&this->Notes,param_3);
  this->SecondsRemaining = param_4->Delay;
  this->FinishedLoading = false;
  this->IssuedScreenshotCapture = false;
  this->TakenScreenshot = false;
  FAutomationScreenshotOptions::FAutomationScreenshotOptions(&this->Options,param_4);
  return this;
}

// ~FTakeScreenshotAfterTimeLatentAction @ 148c80eb0

void __thiscall
FTakeScreenshotAfterTimeLatentAction::~FTakeScreenshotAfterTimeLatentAction
          (FTakeScreenshotAfterTimeLatentAction *this)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestFramework *pFVar2;
  
  this->_padding_ = (longlong)&___7FTakeScreenshotAfterTimeLatentAction__6B_;
  pFVar2 = FAutomationTestFramework::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pFVar2->OnScreenshotTakenAndCompared,this);
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenshotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  return;
}

// OnScreenshotTakenAndCompared @ 148c95fe0

void __thiscall
FTakeScreenshotAfterTimeLatentAction::OnScreenshotTakenAndCompared
          (FTakeScreenshotAfterTimeLatentAction *this)

{
  this->TakenScreenshot = true;
  return;
}

// UpdateOperation @ 148ca0f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTakeScreenshotAfterTimeLatentAction::UpdateOperation
          (FTakeScreenshotAfterTimeLatentAction *this,FLatentResponse *param_1)

{
  bool bVar1;
  UWorld *pUVar2;
  FAutomationTestFramework *pFVar3;
  FAutomationScreenshotOptions *pFVar4;
  FAutomationScreenshotTaker *this_00;
  UWorld *pUVar5;
  float fVar6;
  FAutomationScreenshotOptions local_c8;
  FAutomationScreenshotOptions local_70;
  
  if (this->FinishedLoading == false) {
    UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot();
    this->FinishedLoading = true;
  }
  if (this->TakenScreenshot == false) {
    if (this->IssuedScreenshotCapture == false) {
      UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot();
      fVar6 = this->SecondsRemaining - param_1->DeltaTime;
      this->SecondsRemaining = fVar6;
      if (fVar6 <= 0.0) {
        bVar1 = FWeakObjectPtr::IsValid(&this->CallbackTarget);
        pUVar5 = (UWorld *)0x0;
        pUVar2 = pUVar5;
        if (bVar1) {
          pUVar2 = (UWorld *)FWeakObjectPtr::Get(&this->CallbackTarget);
        }
        pFVar3 = FAutomationTestFramework::Get();
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddRaw<FTakeScreenshotAfterTimeLatentAction>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pFVar3->OnScreenshotTakenAndCompared,
                   (FTakeScreenshotAfterTimeLatentAction *)&stack0x00000008,(pmf_86f136ea)this);
        pFVar4 = FAutomationScreenshotOptions::FAutomationScreenshotOptions
                           (&local_c8,&this->Options);
        UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot();
        this_00 = ::operator_new(0x260);
        if (this_00 != (FAutomationScreenshotTaker *)0x0) {
          pFVar4 = FAutomationScreenshotOptions::FAutomationScreenshotOptions(&local_70,pFVar4);
          if (pUVar2 != (UWorld *)0x0) {
            pUVar5 = (UWorld *)(**(code **)(pUVar2->_padding_ + 0x180))(pUVar2);
          }
          FAutomationScreenshotTaker::FAutomationScreenshotTaker
                    (this_00,pUVar5,&this->ScreenshotName,&this->Notes,pFVar4);
        }
        FScreenshotRequest::RequestScreenshot(false);
        this->IssuedScreenshotCapture = true;
        return;
      }
    }
  }
  else {
    pFVar3 = FAutomationTestFramework::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pFVar3->OnScreenshotTakenAndCompared,this);
    FLatentResponse::FinishAndTriggerIf
              (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  }
  return;
}

