// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 4

// StaticStruct @ 14a0ac570

UScriptStruct * __cdecl FRigVMRegister::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMRegister.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMRegister.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMRegister,(UObject *)pUVar1,L"RigVMRegister"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FRigVMRegister.OuterSingleton;
}

// Load @ 14a0fbf90

void __thiscall FRigVMRegister::Load(FRigVMRegister *this,FArchive *param_1)

{
  int iVar1;
  
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (iVar1 < 3) {
    this->bIsArray = false;
  }
  else {
    ::operator<<(param_1,&this->bIsArray);
  }
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (7 < iVar1) {
    ::operator<<(param_1,&this->bIsDynamic);
    return;
  }
  this->bIsDynamic = false;
  return;
}

// Save @ 14a10dac0

void __thiscall FRigVMRegister::Save(FRigVMRegister *this,FArchive *param_1)

{
  ::operator<<(param_1,&this->bIsArray);
  ::operator<<(param_1,&this->bIsDynamic);
  return;
}

// Serialize @ 14a10e670

void __thiscall FRigVMRegister::Serialize(FRigVMRegister *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  ERigVMRegisterType *pEVar3;
  uint *puVar4;
  longlong *plVar5;
  uchar *puVar6;
  int *piVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ushort local_res10 [4];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (1 < iVar10) {
    local_res10[0] = 0;
    pEVar3 = (ERigVMRegisterType *)**(undefined8 **)&param_1->field_0x8;
    if ((ERigVMRegisterType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar3 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
    }
    else {
      this->Type = *pEVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = &this->ByteIndex;
    puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,&this->ElementSize);
    ::operator<<(param_1,&this->ElementCount);
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar5[1] < (ushort *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(ushort *)*plVar5;
      *plVar5 = *plVar5 + 2;
    }
    ::operator<<(param_1,&this->SliceCount);
    puVar6 = (uchar *)**(undefined8 **)&param_1->field_0x8;
    if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->AlignmentBytes,1);
    }
    else {
      this->AlignmentBytes = *puVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    ::operator<<(param_1,&this->TrailingBytes);
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
    piVar2 = &this->ScriptStructIndex;
    piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                           ,0x30,L"");
        if (!bVar9) {
          return;
        }
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
      if (iVar10 < 3) {
        this->bIsArray = false;
      }
      else {
        ::operator<<(param_1,&this->bIsArray);
      }
      iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
      if (iVar10 < 8) {
        this->bIsDynamic = false;
        return;
      }
    }
    else {
      ::operator<<(param_1,&this->bIsArray);
    }
    ::operator<<(param_1,&this->bIsDynamic);
  }
  return;
}

