// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 4

// StaticStruct @ 14d577a20

UScriptStruct * __cdecl FFloatCameraParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatCameraParameter,(UObject *)pUVar1,
                         L"FloatCameraParameter");
  }
  return Z_Registration_Info_UScriptStruct_FFloatCameraParameter.OuterSingleton;
}

// GetValue @ 14d5ac020

float __thiscall
FFloatCameraParameter::GetValue(FFloatCameraParameter *this,FCameraVariableTable *param_1)

{
  float *pfVar1;
  
  if ((this->VariableID).Value == 0xffffffff) {
    return this->Value;
  }
  pfVar1 = UE::Cameras::FCameraVariableTable::FindValue<float>
                     (param_1,(FCameraVariableID)(this->VariableID).Value);
  if (pfVar1 != (float *)0x0) {
    return *pfVar1;
  }
  return this->Value;
}

// PostSerialize @ 14d5c7f20

void __thiscall FFloatCameraParameter::PostSerialize(FFloatCameraParameter *this,FArchive *param_1)

{
  int iVar1;
  UFloatCameraVariable *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  if (((param_1->field_0x28 & 1) != 0) &&
     (pUVar2 = (this->Variable).field0_0x0.DebugPtr, pUVar2 != (UFloatCameraVariable *)0x0)) {
    lVar3 = pUVar2->_padding_;
    pUVar4 = UCameraRigAsset::StaticClass();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (this->Variable).field0_0x0.DebugPtr = (UFloatCameraVariable *)0x0;
    }
  }
  return;
}

// SerializeFromMismatchedTag @ 14d5cd5e0

bool __thiscall
FFloatCameraParameter::SerializeFromMismatchedTag
          (FFloatCameraParameter *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FArchive *this_00;
  float *pfVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FName FVar4;
  undefined1 local_res10 [8];
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 != FVar4) {
    return false;
  }
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar2 = (float *)**(undefined8 **)&this_00->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    this->Value = *pfVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return true;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,this,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)this);
  return true;
}

