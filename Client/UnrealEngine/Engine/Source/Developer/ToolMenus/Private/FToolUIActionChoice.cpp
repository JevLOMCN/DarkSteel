// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 4

// FToolUIActionChoice @ 142c3a910

FToolUIActionChoice * __thiscall
FToolUIActionChoice::FToolUIActionChoice
          (FToolUIActionChoice *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          FUICommandList *param_2)

{
  FToolUIActionChoice *pFVar1;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  (this->Action).bIsSet = false;
  (this->ToolAction).bIsSet = false;
  (this->DynamicToolAction).bIsSet = false;
  local_18.Object = param_1->Object;
  if (local_18.Object != (FUICommandInfo *)0x0) {
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar1 = (FToolUIActionChoice *)FUICommandList::GetActionForCommand(param_2,&local_18);
    if (pFVar1 != (FToolUIActionChoice *)0x0) {
      if (pFVar1 != this) {
        if ((this->Action).bIsSet != false) {
          FUIAction::~FUIAction((FUIAction *)this);
        }
        FUIAction::FUIAction((FUIAction *)this,(FUIAction *)pFVar1);
        (this->Action).bIsSet = true;
      }
      if ((this->ToolAction).bIsSet != false) {
        FToolUIAction::~FToolUIAction(&(this->ToolAction).TypedValue);
        (this->ToolAction).bIsSet = false;
      }
      if ((this->DynamicToolAction).bIsSet != false) {
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.IsActionVisibleDelegate);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.GetActionCheckState);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.CanExecuteAction);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&this->DynamicToolAction);
        (this->DynamicToolAction).bIsSet = false;
      }
    }
    return this;
  }
  return this;
}

// ~FToolUIActionChoice @ 142c3c7c0

void __thiscall FToolUIActionChoice::~FToolUIActionChoice(FToolUIActionChoice *this)

{
  if ((this->DynamicToolAction).bIsSet != false) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)
               &(this->DynamicToolAction).TypedValue.IsActionVisibleDelegate);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)
               &(this->DynamicToolAction).TypedValue.GetActionCheckState);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)
               &(this->DynamicToolAction).TypedValue.CanExecuteAction);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&this->DynamicToolAction);
  }
  if ((this->ToolAction).bIsSet != false) {
    FToolUIAction::~FToolUIAction(&(this->ToolAction).TypedValue);
  }
  if ((this->Action).bIsSet != false) {
    FUIAction::~FUIAction((FUIAction *)this);
  }
  return;
}

// operator= @ 142c3ed00

FToolUIActionChoice * __thiscall
FToolUIActionChoice::operator=(FToolUIActionChoice *this,FToolUIActionChoice *param_1)

{
  TOptional<FToolDynamicUIAction> *this_00;
  
  if (param_1 != this) {
    if ((param_1->Action).bIsSet == false) {
      if ((this->Action).bIsSet != false) {
        FUIAction::~FUIAction((FUIAction *)this);
        (this->Action).bIsSet = false;
      }
    }
    else {
      if ((this->Action).bIsSet != false) {
        FUIAction::~FUIAction((FUIAction *)this);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(this->Action).TypedValue.CanExecuteAction,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(param_1->Action).TypedValue.CanExecuteAction);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(this->Action).TypedValue.GetActionCheckState,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(param_1->Action).TypedValue.GetActionCheckState);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(this->Action).TypedValue.IsActionVisibleDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(param_1->Action).TypedValue.IsActionVisibleDelegate);
      (this->Action).TypedValue.RepeatMode = (param_1->Action).TypedValue.RepeatMode;
      (this->Action).bIsSet = true;
    }
  }
  TOptional<FToolUIAction>::operator=(&this->ToolAction,&param_1->ToolAction);
  this_00 = &this->DynamicToolAction;
  if (&param_1->DynamicToolAction != this_00) {
    if ((param_1->DynamicToolAction).bIsSet != false) {
      if ((this->DynamicToolAction).bIsSet != false) {
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.IsActionVisibleDelegate);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.GetActionCheckState);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.CanExecuteAction);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)this_00);
      }
      FToolDynamicUIAction::FToolDynamicUIAction
                (&this_00->TypedValue,&(param_1->DynamicToolAction).TypedValue);
      (this->DynamicToolAction).bIsSet = true;
      return this;
    }
    if ((this->DynamicToolAction).bIsSet != false) {
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)
                 &(this->DynamicToolAction).TypedValue.IsActionVisibleDelegate);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)
                 &(this->DynamicToolAction).TypedValue.GetActionCheckState);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)
                 &(this->DynamicToolAction).TypedValue.CanExecuteAction);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this_00);
      (this->DynamicToolAction).bIsSet = false;
    }
  }
  return this;
}

// operator= @ 142c3ee30

FToolUIActionChoice * __thiscall
FToolUIActionChoice::operator=(FToolUIActionChoice *this,FToolUIActionChoice *param_1)

{
  TOptional<FToolDynamicUIAction> *this_00;
  
  if (param_1 != this) {
    if ((param_1->Action).bIsSet == false) {
      if ((this->Action).bIsSet != false) {
        FUIAction::~FUIAction((FUIAction *)this);
        (this->Action).bIsSet = false;
      }
    }
    else {
      if ((this->Action).bIsSet != false) {
        FUIAction::~FUIAction((FUIAction *)this);
      }
      FUIAction::FUIAction((FUIAction *)this,(FUIAction *)param_1);
      (this->Action).bIsSet = true;
    }
  }
  TOptional<FToolUIAction>::operator=(&this->ToolAction,&param_1->ToolAction);
  this_00 = &this->DynamicToolAction;
  if (&param_1->DynamicToolAction != this_00) {
    if ((param_1->DynamicToolAction).bIsSet != false) {
      if ((this->DynamicToolAction).bIsSet != false) {
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.IsActionVisibleDelegate);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.GetActionCheckState);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)
                   &(this->DynamicToolAction).TypedValue.CanExecuteAction);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)this_00);
      }
      FToolDynamicUIAction::FToolDynamicUIAction
                (&this_00->TypedValue,&(param_1->DynamicToolAction).TypedValue);
      (this->DynamicToolAction).bIsSet = true;
      return this;
    }
    if ((this->DynamicToolAction).bIsSet != false) {
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)
                 &(this->DynamicToolAction).TypedValue.IsActionVisibleDelegate);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)
                 &(this->DynamicToolAction).TypedValue.GetActionCheckState);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)
                 &(this->DynamicToolAction).TypedValue.CanExecuteAction);
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this_00);
      (this->DynamicToolAction).bIsSet = false;
    }
  }
  return this;
}

