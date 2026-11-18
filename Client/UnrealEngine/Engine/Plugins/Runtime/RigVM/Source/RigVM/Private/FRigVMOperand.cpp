// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a0aea30

UScriptStruct * __cdecl FRigVMOperand::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMOperand.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMOperand.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMOperand,(UObject *)pUVar1,L"RigVMOperand");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMOperand.OuterSingleton;
}

// Serialize @ 14a10e570

void __thiscall FRigVMOperand::Serialize(FRigVMOperand *this,FArchive *param_1)

{
  ushort *puVar1;
  ERigVMMemoryType *pEVar2;
  ushort *puVar3;
  
  pEVar2 = (ERigVMMemoryType *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMMemoryType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    this->MemoryType = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &this->RegisterIndex;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &this->RegisterOffset;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a10e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return;
}

