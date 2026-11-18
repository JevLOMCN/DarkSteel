// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06c810

UScriptStruct * __cdecl FRigVMRunInstructionsOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMRunInstructionsOp,(UObject *)pUVar1,
                         L"RigVMRunInstructionsOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.OuterSingleton;
}

// Serialize @ 14a0a66b0

void __thiscall FRigVMRunInstructionsOp::Serialize(FRigVMRunInstructionsOp *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    *(undefined1 *)&this->_padding_ = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&this->_padding_ + 2),param_1);
  piVar1 = &this->StartInstruction;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->EndInstruction;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a0a6798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

