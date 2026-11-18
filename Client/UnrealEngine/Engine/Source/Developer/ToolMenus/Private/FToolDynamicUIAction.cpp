// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 3

// StaticStruct @ 142c2fde0

UScriptStruct * __cdecl FToolDynamicUIAction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolDynamicUIAction.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FToolDynamicUIAction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolDynamicUIAction,(UObject *)pUVar1,
                         L"ToolDynamicUIAction");
  }
  return Z_Registration_Info_UScriptStruct_FToolDynamicUIAction.OuterSingleton;
}

// FToolDynamicUIAction @ 142c38260

FToolDynamicUIAction * __thiscall
FToolDynamicUIAction::FToolDynamicUIAction(FToolDynamicUIAction *this,FToolDynamicUIAction *param_1)

{
  FReadAccessScope local_28;
  
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  *(undefined8 *)&(this->ExecuteAction).field_0x8 =
       *(undefined8 *)&(param_1->ExecuteAction).field_0x8;
  *(undefined8 *)&(this->ExecuteAction).field_0x10 =
       *(undefined8 *)&(param_1->ExecuteAction).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->CanExecuteAction,
             &local_28);
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 =
       *(undefined8 *)&(param_1->CanExecuteAction).field_0x8;
  *(undefined8 *)&(this->CanExecuteAction).field_0x10 =
       *(undefined8 *)&(param_1->CanExecuteAction).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined8 *)&this->GetActionCheckState = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->GetActionCheckState
             ,&local_28);
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 =
       *(undefined8 *)&(param_1->GetActionCheckState).field_0x8;
  *(undefined8 *)&(this->GetActionCheckState).field_0x10 =
       *(undefined8 *)&(param_1->GetActionCheckState).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->IsActionVisibleDelegate,&local_28);
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 =
       *(undefined8 *)&(param_1->IsActionVisibleDelegate).field_0x8;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 =
       *(undefined8 *)&(param_1->IsActionVisibleDelegate).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// FToolDynamicUIAction @ 142c38370

FToolDynamicUIAction * __thiscall
FToolDynamicUIAction::FToolDynamicUIAction(FToolDynamicUIAction *this,FToolDynamicUIAction *param_1)

{
  FReadAccessScope local_28;
  
  *(undefined8 *)&this->ExecuteAction = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x8 = 0;
  *(undefined8 *)&(this->ExecuteAction).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  *(undefined8 *)&(this->ExecuteAction).field_0x8 =
       *(undefined8 *)&(param_1->ExecuteAction).field_0x8;
  *(undefined8 *)&(this->ExecuteAction).field_0x10 =
       *(undefined8 *)&(param_1->ExecuteAction).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined8 *)&this->CanExecuteAction = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 = 0;
  *(undefined8 *)&(this->CanExecuteAction).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->CanExecuteAction,
             &local_28);
  *(undefined8 *)&(this->CanExecuteAction).field_0x8 =
       *(undefined8 *)&(param_1->CanExecuteAction).field_0x8;
  *(undefined8 *)&(this->CanExecuteAction).field_0x10 =
       *(undefined8 *)&(param_1->CanExecuteAction).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined8 *)&this->GetActionCheckState = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 = 0;
  *(undefined8 *)&(this->GetActionCheckState).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->GetActionCheckState
             ,&local_28);
  *(undefined8 *)&(this->GetActionCheckState).field_0x8 =
       *(undefined8 *)&(param_1->GetActionCheckState).field_0x8;
  *(undefined8 *)&(this->GetActionCheckState).field_0x10 =
       *(undefined8 *)&(param_1->GetActionCheckState).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  *(undefined8 *)&this->IsActionVisibleDelegate = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->IsActionVisibleDelegate,&local_28);
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x8 =
       *(undefined8 *)&(param_1->IsActionVisibleDelegate).field_0x8;
  *(undefined8 *)&(this->IsActionVisibleDelegate).field_0x10 =
       *(undefined8 *)&(param_1->IsActionVisibleDelegate).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

