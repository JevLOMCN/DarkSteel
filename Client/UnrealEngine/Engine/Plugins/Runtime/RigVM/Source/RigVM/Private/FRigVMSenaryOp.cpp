// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06bcf0

UScriptStruct * __cdecl FRigVMSenaryOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSenaryOp,(UObject *)pUVar1,L"RigVMSenaryOp"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.OuterSingleton;
}

// Serialize @ 14a0a67c0

void __thiscall FRigVMSenaryOp::Serialize(FRigVMSenaryOp *this,FArchive *param_1)

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
  FRigVMOperand::Serialize(&this->ArgA,param_1);
  FRigVMOperand::Serialize(&this->ArgB,param_1);
  FRigVMOperand::Serialize(&this->ArgC,param_1);
  FRigVMOperand::Serialize(&this->ArgD,param_1);
  FRigVMOperand::Serialize(&this->ArgE,param_1);
  FRigVMOperand::Serialize(&this->ArgF,param_1);
  return;
}

