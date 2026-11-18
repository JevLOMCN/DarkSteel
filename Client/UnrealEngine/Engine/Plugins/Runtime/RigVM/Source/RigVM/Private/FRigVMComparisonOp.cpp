// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06c3f0

UScriptStruct * __cdecl FRigVMComparisonOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMComparisonOp,(UObject *)pUVar1,
                         L"RigVMComparisonOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.OuterSingleton;
}

// Serialize @ 14a0a5e20

void __thiscall FRigVMComparisonOp::Serialize(FRigVMComparisonOp *this,FArchive *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    *(undefined1 *)&this->_padding_ = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  FRigVMOperand::Serialize(&this->A,param_1);
  FRigVMOperand::Serialize(&this->B,param_1);
  FRigVMOperand::Serialize(&this->Result,param_1);
  return;
}

