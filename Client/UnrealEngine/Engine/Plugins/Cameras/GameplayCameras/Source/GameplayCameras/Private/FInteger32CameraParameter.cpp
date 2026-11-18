// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// StaticStruct @ 14d577380

UScriptStruct * __cdecl FInteger32CameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInteger32CameraParameter,(UObject *)pUVar1,
                         L"Integer32CameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.OuterSingleton;
}

// GetValue @ 14d5ac090

int __thiscall
FInteger32CameraParameter::GetValue(FInteger32CameraParameter *this,FCameraVariableTable *param_1)

{
  int *piVar1;
  
  if ((this->VariableID).Value == 0xffffffff) {
    return this->Value;
  }
  piVar1 = UE::Cameras::FCameraVariableTable::FindValue<int>
                     (param_1,(FCameraVariableID)(this->VariableID).Value);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return this->Value;
}

// PostSerialize @ 14d5c7f80

void __thiscall
FInteger32CameraParameter::PostSerialize(FInteger32CameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UInteger32CameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UInteger32CameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UInteger32CameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cd6b0

bool __thiscall
FInteger32CameraParameter::SerializeFromMismatchedTag
          (FInteger32CameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FArchive *this_00;
  int *piVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar4;
  FName FVar5;
  undefined1 local_res10 [8];
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if ((FVar1 != FVar5) &&
     (FVar1 = param_1->Type, FVar3 = FNameEntryId::FromValidEName((EName)local_res10),
     FVar4.Number = 0, FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value),
     FVar1 != FVar4)) {
    return false;
  }
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  piVar2 = (int *)**(undefined8 **)&this_00->field_0x8;
  if ((int *)(*(undefined8 **)&this_00->field_0x8)[1] < piVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)this);
    }
  }
  else {
    this->Value = *piVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  return true;
}

