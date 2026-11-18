// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06c4d0

UScriptStruct * __cdecl FRigVMJumpOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMJumpOp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMJumpOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMJumpOp,(UObject *)pUVar1,L"RigVMJumpOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMJumpOp.OuterSingleton;
}

// Serialize @ 14a0a6250

void __thiscall FRigVMJumpOp::Serialize(FRigVMJumpOp *this,FArchive *param_1)

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
  piVar1 = &this->InstructionIndex;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a0a62dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

