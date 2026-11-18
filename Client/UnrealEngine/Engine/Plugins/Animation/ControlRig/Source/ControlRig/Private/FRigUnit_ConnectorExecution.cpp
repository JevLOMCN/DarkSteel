// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a47e370

UScriptStruct * __cdecl FRigUnit_ConnectorExecution::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ConnectorExecution.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ConnectorExecution.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution,(UObject *)pUVar1,
                         L"RigUnit_ConnectorExecution");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ConnectorExecution_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ConnectorExecution.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ConnectorExecution.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47e3f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ConnectorExecution::GetExecuteContextStruct(FRigUnit_ConnectorExecution *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a47e780

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ConnectorExecution::Execute(FRigUnit_ConnectorExecution *this)

{
  undefined8 local_res8;
  
  (**(code **)(*(longlong *)&this->ExecuteContext + 8))(&this->ExecuteContext);
  FLazyName::Resolve(&EventName);
  *(undefined8 *)&(this->ExecuteContext).field_0x8 = local_res8;
  return;
}

// GetEventName @ 14a47e7c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall FRigUnit_ConnectorExecution::GetEventName(FRigUnit_ConnectorExecution *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&EventName);
  return in_RDX;
}

// Execute @ 14a525d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ConnectorExecution::Execute
          (FRigUnit_ConnectorExecution *this,FControlRigExecuteContext *param_1)

{
  undefined8 local_res10;
  
  FLazyName::Resolve(&EventName);
  *(undefined8 *)&param_1->field_0x8 = local_res10;
  return;
}

// RigVMExecute @ 14a539230

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConnectorExecution::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FControlRigExecuteContext *pFVar1;
  undefined8 local_res20;
  
  pFVar1 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FLazyName::Resolve(&EventName);
  *(undefined8 *)&pFVar1->field_0x8 = local_res20;
  return;
}

// StaticExecute @ 14a569db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl FRigUnit_ConnectorExecution::StaticExecute(FControlRigExecuteContext *param_1)

{
  undefined8 local_res8;
  
  FLazyName::Resolve(&EventName);
  *(undefined8 *)&param_1->field_0x8 = local_res8;
  return;
}

