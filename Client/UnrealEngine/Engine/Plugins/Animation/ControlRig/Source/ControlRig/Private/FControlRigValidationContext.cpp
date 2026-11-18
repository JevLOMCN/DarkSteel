// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a1fef10

UScriptStruct * __cdecl FControlRigValidationContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigValidationContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigValidationContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigValidationContext,(UObject *)pUVar1,
                         L"ControlRigValidationContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigValidationContext.OuterSingleton;
}

// FControlRigValidationContext @ 14a21f310

FControlRigValidationContext * __thiscall
FControlRigValidationContext::FControlRigValidationContext(FControlRigValidationContext *this)

{
  *(undefined8 *)&this->ClearDelegate = 0;
  *(undefined8 *)&(this->ClearDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ClearDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ReportDelegate = 0;
  *(undefined8 *)&(this->ReportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ReportDelegate).field_0x10 = 0;
  this->DrawInterface = (FRigVMDrawInterface *)0x0;
  return this;
}

// Clear @ 14a245fd0

void __thiscall FControlRigValidationContext::Clear(FControlRigValidationContext *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
  if ((*(int *)&(this->ClearDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ClearDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// GetDisplayNameForEvent @ 14a262280

FString * __thiscall
FControlRigValidationContext::GetDisplayNameForEvent
          (FControlRigValidationContext *this,FString *__return_storage_ptr__,FName *param_1)

{
  ::FName::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Report @ 14a288430

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigValidationContext::Report
          (FControlRigValidationContext *this,Type param_1,FRigElementKey *param_2,FString *param_3)

{
  Report(this,param_1,param_2,__real_7f7fffff,param_3);
  return;
}

// Report @ 14a288460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigValidationContext::Report
          (FControlRigValidationContext *this,Type param_1,FRigElementKey *param_2,float param_3,
          FString *param_4)

{
  longlong *plVar1;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ReportDelegate,
             local_38);
  if ((*(int *)&(this->ReportDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ReportDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3,param_4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return;
}

// Report @ 14a2884e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigValidationContext::Report
          (FControlRigValidationContext *this,Type param_1,FString *param_2)

{
  FRigElementKey local_18 [2];
  
  local_18[0].Name.ComparisonIndex.Value = 0;
  local_18[0].Name.Number = 0;
  local_18[0].Type = None;
  Report(this,param_1,local_18,__real_7f7fffff,param_2);
  return;
}

