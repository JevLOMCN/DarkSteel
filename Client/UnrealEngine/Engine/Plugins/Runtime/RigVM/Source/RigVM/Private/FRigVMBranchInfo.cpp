// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a0aecd0

UScriptStruct * __cdecl FRigVMBranchInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMBranchInfo.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMBranchInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMBranchInfo,(UObject *)pUVar1,
                         L"RigVMBranchInfo");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMBranchInfo.OuterSingleton;
}

// Serialize @ 14a10dce0

void __thiscall FRigVMBranchInfo::Serialize(FRigVMBranchInfo *this,FArchive *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  longlong *plVar5;
  FName FVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FName local_res8;
  ushort local_res10 [4];
  FString local_28;
  
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->Index = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_1->field_0x2a;
  if ((param_1->field_0x28 & 1) == 0) {
    ::FName::ToString(&this->Label,&local_28);
    ::operator<<(param_1,&local_28);
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_28);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar8.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar8.Data);
    FVar6._2_6_ = local_res8._2_6_;
    FVar6.ComparisonIndex.Value._0_2_ = (ushort)local_res8.ComparisonIndex.Value;
    this->Label = FVar6;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  piVar3 = &this->InstructionIndex;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = &this->ArgumentIndex;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
    if (iVar7 < 0x12) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res8.ComparisonIndex.Value._0_2_ = 0;
      local_res10[0] = 0;
      if ((ushort *)plVar5[1] < (ushort *)*plVar5 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(ushort *)&local_res8);
        }
      }
      else {
        local_res8.ComparisonIndex.Value._0_2_ = *(ushort *)*plVar5;
        *plVar5 = *plVar5 + 2;
      }
      plVar5 = *(longlong **)&param_1->field_0x8;
      if ((ushort *)*plVar5 + 1 <= (ushort *)plVar5[1]) {
        uVar2 = *(ushort *)*plVar5;
        *plVar5 = *plVar5 + 2;
        this->FirstInstruction = (uint)(ushort)local_res8.ComparisonIndex.Value;
        this->LastInstruction = (uint)uVar2;
        return;
      }
      if ((*puVar1 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
        this->FirstInstruction = (uint)(ushort)local_res8.ComparisonIndex.Value;
        this->LastInstruction = (uint)local_res10[0];
        return;
      }
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      this->FirstInstruction = (uint)(ushort)local_res8.ComparisonIndex.Value;
      this->LastInstruction = (uint)local_res10[0];
      return;
    }
  }
  piVar3 = &this->FirstInstruction;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar3 = &this->LastInstruction;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar3 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((*puVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a10dfbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
  return;
}

