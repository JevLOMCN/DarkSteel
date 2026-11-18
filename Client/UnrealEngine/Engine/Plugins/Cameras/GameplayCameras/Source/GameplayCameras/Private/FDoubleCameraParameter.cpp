// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// StaticStruct @ 14d5785a0

UScriptStruct * __cdecl FDoubleCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDoubleCameraParameter,(UObject *)pUVar1,
                         L"DoubleCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.OuterSingleton;
}

// GetValue @ 14d5abfb0

double __thiscall
FDoubleCameraParameter::GetValue(FDoubleCameraParameter *this,FCameraVariableTable *param_1)

{
  double *pdVar1;
  
  if ((this->VariableID).Value == 0xffffffff) {
    return this->Value;
  }
  pdVar1 = UE::Cameras::FCameraVariableTable::FindValue<double>
                     (param_1,(FCameraVariableID)(this->VariableID).Value);
  if (pdVar1 != (double *)0x0) {
    return *pdVar1;
  }
  return this->Value;
}

// PostSerialize @ 14d5c7ec0

void __thiscall
FDoubleCameraParameter::PostSerialize(FDoubleCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UDoubleCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UDoubleCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UDoubleCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cd510

bool __thiscall
FDoubleCameraParameter::SerializeFromMismatchedTag
          (FDoubleCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FArchive *this_00;
  double *pdVar1;
  FName FVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FPropertyTypeName local_res10 [4];
  uint local_res20 [2];
  
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  local_res20[1] = 0;
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = local_res20[0];
  bVar3 = UE::FPropertyTypeName::IsStruct(local_res10,FVar2);
  if (!bVar3) {
    return false;
  }
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  pdVar1 = (double *)**(longlong **)&this_00->field_0x8;
  if (pdVar1 + 1 <= (double *)(*(longlong **)&this_00->field_0x8)[1]) {
    this->Value = *pdVar1;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
    return true;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,this,8);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(ulong64 *)this);
  return true;
}

