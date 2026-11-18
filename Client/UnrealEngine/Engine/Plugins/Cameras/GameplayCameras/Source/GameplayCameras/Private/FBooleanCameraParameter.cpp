// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// StaticStruct @ 14d576860

UScriptStruct * __cdecl FBooleanCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBooleanCameraParameter,(UObject *)pUVar1,
                         L"BooleanCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.OuterSingleton;
}

// GetValue @ 14d5abdc0

bool __thiscall
FBooleanCameraParameter::GetValue(FBooleanCameraParameter *this,FCameraVariableTable *param_1)

{
  bool *pbVar1;
  
  if ((this->VariableID).Value == 0xffffffff) {
    return this->Value;
  }
  pbVar1 = UE::Cameras::FCameraVariableTable::FindValue<bool>
                     (param_1,(FCameraVariableID)(this->VariableID).Value);
  if (pbVar1 != (bool *)0x0) {
    return *pbVar1;
  }
  return this->Value;
}

// PostSerialize @ 14d5c4880

void __thiscall
FBooleanCameraParameter::PostSerialize(FBooleanCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UBooleanCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UBooleanCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UBooleanCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cd2e0

bool __thiscall
FBooleanCameraParameter::SerializeFromMismatchedTag
          (FBooleanCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res10 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    this->Value = param_1->BoolVal != '\0';
    return true;
  }
  return false;
}

