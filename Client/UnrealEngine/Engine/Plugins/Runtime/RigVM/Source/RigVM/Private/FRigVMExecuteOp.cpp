// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a06b8c0

UScriptStruct * __cdecl FRigVMExecuteOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteOp,(UObject *)pUVar1,
                         L"RigVMExecuteOp");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.OuterSingleton;
}

// Serialize @ 14a0a5ff0

void __thiscall FRigVMExecuteOp::Serialize(FRigVMExecuteOp *this,FArchive *param_1)

{
  ushort *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    *(undefined1 *)&this->_padding_ = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &this->FunctionIndex;
  puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    bVar2 = (byte)this->_padding_;
    if (bVar2 < 0x41) {
      this->ArgumentCount = (ushort)bVar2;
      *(undefined1 *)&this->_padding_ = 0x65;
      goto LAB_14a0a60c5;
    }
    if (bVar2 != 0x65) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OpCode == ERigVMOpCode::Execute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                         ,0x28,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  ::operator<<(param_1,&this->ArgumentCount);
LAB_14a0a60c5:
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if (1 < iVar7) {
    ::operator<<(param_1,&this->FirstPredicateIndex);
    ::operator<<(param_1,&this->PredicateCount);
  }
  return;
}

