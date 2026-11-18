// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PropertyBindingUtils
// Functions: 2

// StaticStruct @ 14d379c40

UScriptStruct * __cdecl FPropertyBindingIndex16::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPropertyBindingIndex16.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PropertyBindingUtils();
    Z_Registration_Info_UScriptStruct_FPropertyBindingIndex16.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBindingIndex16,(UObject *)pUVar1,
                         L"PropertyBindingIndex16");
  }
  return Z_Registration_Info_UScriptStruct_FPropertyBindingIndex16.OuterSingleton;
}

// SerializeFromMismatchedTag @ 14d383fc0

bool __thiscall
FPropertyBindingIndex16::SerializeFromMismatchedTag
          (FPropertyBindingIndex16 *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  ushort uVar1;
  FName FVar2;
  FArchive *this_00;
  ushort *puVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FName FVar5;
  FPropertyBindingIndex16 local_res10 [4];
  
  FVar2 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (FVar2 != FVar5) {
    return false;
  }
  local_res10[0].Value = 0;
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar3 = (ushort *)**(undefined8 **)&this_00->field_0x8;
  if (puVar3 + 1 <= (ushort *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    uVar1 = *puVar3;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 2;
    this->Value = uVar1;
    return true;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res10,2);
    this->Value = (ushort)local_res10[0];
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this_00,&local_res10[0].Value);
  this->Value = (ushort)local_res10[0];
  return true;
}

