// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e116680

UScriptStruct * __cdecl FRigVMTrait_OptimusVariableBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusVariableBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusVariableBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait_OptimusVariableBase,(UObject *)pUVar1
                         ,L"RigVMTrait_OptimusVariableBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTrait_OptimusVariableBase.OuterSingleton;
}

// SetValue @ 14e116700

void __thiscall
FRigVMTrait_OptimusVariableBase::SetValue
          (FRigVMTrait_OptimusVariableBase *this,UOptimusDeformerInstance *param_1)

{
  return;
}

// GetValuePinName @ 14e1e9740

wchar_t * __cdecl FRigVMTrait_OptimusVariableBase::GetValuePinName(void)

{
  return L"Value";
}

