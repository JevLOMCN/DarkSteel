// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06c220

UScriptStruct * __cdecl FRigVMCopyOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMCopyOp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMCopyOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMCopyOp,(UObject *)pUVar1,L"RigVMCopyOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMCopyOp.OuterSingleton;
}

// Serialize @ 14a0a5ea0

void __thiscall FRigVMCopyOp::Serialize(FRigVMCopyOp *this,FArchive *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ERigVMRegisterType *pEVar3;
  int iVar4;
  ushort local_res8 [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  puVar1 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    *(undefined1 *)&this->_padding_ = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  FRigVMOperand::Serialize(&this->Source,param_1);
  FRigVMOperand::Serialize(&this->Target,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (iVar4 < 0x2b) {
      this->RegisterType = Invalid;
      return;
    }
    iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
    if (iVar4 < 0x12) {
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_res8[0] = 0;
      if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res8);
        }
      }
      else {
        local_res8[0] = *(ushort *)*plVar2;
        *plVar2 = *plVar2 + 2;
      }
    }
  }
  pEVar3 = (ERigVMRegisterType *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar3 + 1 <= (ERigVMRegisterType *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    this->RegisterType = *pEVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a0a5fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->RegisterType,1);
  return;
}

