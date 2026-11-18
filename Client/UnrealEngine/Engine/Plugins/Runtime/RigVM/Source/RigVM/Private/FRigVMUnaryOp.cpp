// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06b940

UScriptStruct * __cdecl FRigVMUnaryOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMUnaryOp,(UObject *)pUVar1,L"RigVMUnaryOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.OuterSingleton;
}

// Serialize @ 14a0a68e0

void __thiscall FRigVMUnaryOp::Serialize(FRigVMUnaryOp *this,FArchive *param_1)

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
  FRigVMOperand::Serialize(&this->Arg,param_1);
  return;
}

