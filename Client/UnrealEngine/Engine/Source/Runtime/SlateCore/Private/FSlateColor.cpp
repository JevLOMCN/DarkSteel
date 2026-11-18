// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticStruct @ 14252f690

UScriptStruct * __cdecl FSlateColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSlateColor.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FSlateColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSlateColor,(UObject *)pUVar1,L"SlateColor");
  }
  return Z_Registration_Info_UScriptStruct_FSlateColor.OuterSingleton;
}

// operator== @ 14254eb30

bool __thiscall FSlateColor::operator==(FSlateColor *this,FSlateColor *param_1)

{
  if (((((param_1->SpecifiedColor).field0_0x0._s_0.R == (this->SpecifiedColor).field0_0x0._s_0.R) &&
       ((param_1->SpecifiedColor).field0_0x0._s_0.G == (this->SpecifiedColor).field0_0x0._s_0.G)) &&
      ((param_1->SpecifiedColor).field0_0x0._s_0.B == (this->SpecifiedColor).field0_0x0._s_0.B)) &&
     ((((param_1->SpecifiedColor).field0_0x0._s_0.A == (this->SpecifiedColor).field0_0x0._s_0.A &&
       (this->ColorUseRule == param_1->ColorUseRule)) &&
      ((this->ColorUseRule != UseColor_ColorTable || (this->ColorTableId == param_1->ColorTableId)))
      ))) {
    return true;
  }
  return false;
}

// GetColorFromTable @ 14257f1f0

FLinearColor * __thiscall FSlateColor::GetColorFromTable(FSlateColor *this)

{
  UClass *this_00;
  
  this_00 = USlateThemeManager::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  return (FLinearColor *)
         (&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
         (ulonglong)this->ColorTableId * 0x10);
}

// GetSpecifiedColor @ 142588c10

FLinearColor * __thiscall
FSlateColor::GetSpecifiedColor(FSlateColor *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  UClass *this_00;
  
  if (this->ColorUseRule == UseColor_ColorTable) {
    this_00 = USlateThemeManager::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    puVar1 = (undefined8 *)
             (&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)this->ColorTableId * 0x10);
    uVar2 = puVar1[1];
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar1;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
    return __return_storage_ptr__;
  }
  uVar2 = *(undefined8 *)((longlong)&(this->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  return __return_storage_ptr__;
}

// SerializeFromMismatchedTag @ 14258fe30

bool __thiscall
FSlateColor::SerializeFromMismatchedTag
          (FSlateColor *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  float fVar1;
  float fVar2;
  FArchive *this_00;
  uint *puVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar8;
  FPropertyTypeName local_res10 [4];
  uint local_res20 [2];
  FLinearColor_u_0 local_38;
  uint local_28;
  
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  local_res20[1] = 0;
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = local_res20[0];
  bVar6 = UE::FPropertyTypeName::IsStruct(local_res10,FVar4);
  if (bVar6) {
    this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
    puVar3 = (uint *)**(undefined8 **)&this_00->field_0x8;
    if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,(uint *)local_res10);
      }
    }
    else {
      local_res10[0].Index = *puVar3;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
    local_28 = local_28 & 0xffffff00;
    fVar1 = FLinearColor::sRGBToLinearTable[local_res10[0].Index._1_1_];
    fVar2 = FLinearColor::sRGBToLinearTable[(byte)local_res10[0].Index];
    fVar8 = (float)((uint)local_res10[0].Index >> 0x18) * __real_3b808081;
    (this->SpecifiedColor).field0_0x0._s_0.R =
         FLinearColor::sRGBToLinearTable[local_res10[0].Index._2_1_];
    (this->SpecifiedColor).field0_0x0._s_0.G = fVar1;
    (this->SpecifiedColor).field0_0x0._s_0.B = fVar2;
    (this->SpecifiedColor).field0_0x0._s_0.A = fVar8;
    this->ColorUseRule = (undefined1)local_28;
    this->ColorTableId = local_28._1_1_;
    *(undefined2 *)&this->field_0x12 = local_28._2_2_;
    return true;
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
  local_res20[1] = 0;
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = local_res20[0];
  bVar6 = UE::FPropertyTypeName::IsStruct(local_res10,FVar5);
  if (bVar6) {
    ::operator<<(param_2,(FLinearColor *)&local_38._s_0);
    local_28 = local_28 & 0xffffff00;
    *(undefined8 *)&(this->SpecifiedColor).field0_0x0 = local_38._0_8_;
    *(undefined8 *)((longlong)&(this->SpecifiedColor).field0_0x0 + 8) = local_38._8_8_;
    this->ColorUseRule = (undefined1)local_28;
    this->ColorTableId = local_28._1_1_;
    *(undefined2 *)&this->field_0x12 = local_28._2_2_;
    return true;
  }
  return false;
}

// Unlink @ 1425a9b50

void __thiscall FSlateColor::Unlink(FSlateColor *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UClass *this_00;
  
  if (this->ColorUseRule == UseColor_ColorTable) {
    this_00 = USlateThemeManager::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    puVar1 = (undefined8 *)
             (&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10 +
             (ulonglong)this->ColorTableId * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    this->ColorUseRule = UseColor_Specified;
    *(undefined8 *)&(this->SpecifiedColor).field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(this->SpecifiedColor).field0_0x0 + 8) = uVar3;
  }
  return;
}

