// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// RestoreState @ 148fcb6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FPreAnimatedNiagaraComponentToken::RestoreState
          (FPreAnimatedNiagaraComponentToken *this,UObject *param_1,FRestoreStateParams *param_2)

{
  FNiagaraSystemInstanceController *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UNiagaraComponent *this_00;
  
  this_00 = CastChecked<UNiagaraComponent,UObject>(param_1);
  if (this->bComponentIsActive == false) {
    pTVar2 = (this_00->SystemInstanceController).SharedReferenceCount.ReferenceController;
    pFVar1 = (this_00->SystemInstanceController).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FNiagaraSystemInstanceController *)0x0) {
      FNiagaraSystemInstanceController::Reset<enum_FNiagaraSystemInstance::EResetMode>
                (pFVar1,ResetSystem);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    (**(code **)(this_00->_padding_ + 0x2c0))(this_00);
  }
  else {
    (**(code **)(this_00->_padding_ + 0x2b8))(this_00,0);
  }
  UNiagaraComponent::SetForceSolo(this_00,this->bComponentForceSolo);
  UNiagaraComponent::SetRenderingEnabled(this_00,this->bComponentRenderingEnabled);
  UNiagaraComponent::SetAgeUpdateMode(this_00,this->ComponentAgeUpdateMode);
  UNiagaraComponent::SetAllowScalability(this_00,this->bComponentAllowScalability);
  UNiagaraComponent::SetSeekDelta(this_00,this->ComponentSeekDelta);
  UNiagaraComponent::SetDesiredAge(this_00,this->ComponentDesiredAge);
  UNiagaraComponent::SetAllowScalability(this_00,this->bComponentAllowScalability);
  UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta
            (this_00,this->bComponentLockDesiredAgeDeltaTimeToSeekDelta);
  if ((this->SystemInstanceExecutionState).bIsSet != false) {
    pFVar1 = (this_00->SystemInstanceController).Object;
    pTVar2 = (this_00->SystemInstanceController).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FNiagaraSystemInstanceController *)0x0) {
      if ((this->SystemInstanceExecutionState).bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FNiagaraSystemInstanceController::
      SetRequestedExecutionState_Deferred<enum_ENiagaraExecutionState>
                (pFVar1,(this->SystemInstanceExecutionState).TypedValue);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

