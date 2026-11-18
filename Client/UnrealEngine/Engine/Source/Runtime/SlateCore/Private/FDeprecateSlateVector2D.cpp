// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticStruct @ 1425ad570

UScriptStruct * __cdecl FDeprecateSlateVector2D::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDeprecateSlateVector2D.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FDeprecateSlateVector2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDeprecateSlateVector2D,(UObject *)pUVar1,
                         L"DeprecateSlateVector2D");
  }
  return Z_Registration_Info_UScriptStruct_FDeprecateSlateVector2D.OuterSingleton;
}

// ComponentwiseAllGreaterOrEqual @ 1425d1b70

bool __thiscall
FDeprecateSlateVector2D::ComponentwiseAllGreaterOrEqual
          (FDeprecateSlateVector2D *this,FDeprecateVector2DParameter *param_1)

{
  if ((*(float *)param_1 < *(float *)this || *(float *)param_1 == *(float *)this) &&
     (*(float *)&param_1->field_0x4 < *(float *)&this->field_0x4 ||
      *(float *)&param_1->field_0x4 == *(float *)&this->field_0x4)) {
    return true;
  }
  return false;
}

// ComponentwiseAllGreaterThan @ 1425d1b90

bool __thiscall
FDeprecateSlateVector2D::ComponentwiseAllGreaterThan
          (FDeprecateSlateVector2D *this,FDeprecateVector2DParameter *param_1)

{
  if ((*(float *)param_1 < *(float *)this) &&
     (*(float *)&param_1->field_0x4 < *(float *)&this->field_0x4)) {
    return true;
  }
  return false;
}

// ComponentwiseAllLessOrEqual @ 1425d1bb0

bool __thiscall
FDeprecateSlateVector2D::ComponentwiseAllLessOrEqual
          (FDeprecateSlateVector2D *this,FDeprecateVector2DParameter *param_1)

{
  if ((*(float *)this <= *(float *)param_1) &&
     (*(float *)&this->field_0x4 <= *(float *)&param_1->field_0x4)) {
    return true;
  }
  return false;
}

// ComponentwiseAllLessThan @ 1425d1bd0

bool __thiscall
FDeprecateSlateVector2D::ComponentwiseAllLessThan
          (FDeprecateSlateVector2D *this,FDeprecateVector2DParameter *param_1)

{
  if ((*(float *)this <= *(float *)param_1 && *(float *)param_1 != *(float *)this) &&
     (*(float *)&this->field_0x4 <= *(float *)&param_1->field_0x4 &&
      *(float *)&param_1->field_0x4 != *(float *)&this->field_0x4)) {
    return true;
  }
  return false;
}

// Serialize @ 1425facc0

bool __thiscall
FDeprecateSlateVector2D::Serialize(FDeprecateSlateVector2D *this,FStructuredArchiveSlot param_1)

{
  UE::Math::operator<<(param_1,(TVector2<float> *)this);
  return true;
}

// SerializeFromMismatchedTag @ 1425face0

bool __thiscall
FDeprecateSlateVector2D::SerializeFromMismatchedTag
          (FDeprecateSlateVector2D *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FArchive *pFVar6;
  TVector2<float>_u_0 local_res10;
  FSlotBase local_res18;
  uint local_res20 [2];
  TVector2<double>_u_0 local_28;
  
  local_res10._s_0.X = (float)(param_1->TypeName).Index;
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10._s_0,FVar1);
  if (!bVar4) {
    local_res10._s_0.X = (float)(param_1->TypeName).Index;
    FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
    local_res20[0] = *(uint *)CONCAT44(extraout_var_00,FVar5.Value);
    local_res20[1] = 0;
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = local_res20[0];
    bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10._s_0,FVar2);
    if (!bVar4) {
      local_res10._s_0.X = (float)(param_1->TypeName).Index;
      FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
      local_res20[0] = *(uint *)CONCAT44(extraout_var_01,FVar5.Value);
      local_res20[1] = 0;
      FVar3.Number = 0;
      FVar3.ComparisonIndex.Value = local_res20[0];
      bVar4 = UE::FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res10._s_0,FVar3);
      if (!bVar4) {
        return false;
      }
      pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
      if (0x3eb < (int)((ulonglong)*(undefined8 *)&pFVar6->field_0x40 >> 0x20)) goto LAB_1425fad2c;
    }
    UE::Math::operator<<
              ((FStructuredArchiveSlot)local_res18.StructuredArchive,
               (TVector2<float> *)&local_res10._s_0);
    *(float *)this = local_res10._s_0.X;
    *(float *)&this->field_0x4 = local_res10._s_0.Y;
    return true;
  }
LAB_1425fad2c:
  UE::Math::operator<<
            ((FStructuredArchiveSlot)local_res18.StructuredArchive,
             (TVector2<double> *)&local_28._s_0);
  *(float *)this = (float)local_28._s_0.X;
  *(float *)&this->field_0x4 = (float)local_28._s_0.Y;
  return true;
}

