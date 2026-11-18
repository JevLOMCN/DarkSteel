// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147aa4ac0

UScriptStruct * __cdecl FDataTableCategoryHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataTableCategoryHandle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDataTableCategoryHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataTableCategoryHandle,(UObject *)pUVar1,
                         L"DataTableCategoryHandle");
  }
  return Z_Registration_Info_UScriptStruct_FDataTableCategoryHandle.OuterSingleton;
}

// operator== @ 147ac08e0

bool __thiscall
FDataTableCategoryHandle::operator==
          (FDataTableCategoryHandle *this,FDataTableCategoryHandle *param_1)

{
  if ((((this->DataTable).field0_0x0.DebugPtr == (param_1->DataTable).field0_0x0.DebugPtr) &&
      (this->ColumnName == param_1->ColumnName)) && (this->RowContents == param_1->RowContents)) {
    return true;
  }
  return false;
}

// operator!= @ 147ac09d0

bool __thiscall
FDataTableCategoryHandle::operator!=
          (FDataTableCategoryHandle *this,FDataTableCategoryHandle *param_1)

{
  if ((((this->DataTable).field0_0x0.DebugPtr == (param_1->DataTable).field0_0x0.DebugPtr) &&
      (this->ColumnName == param_1->ColumnName)) && (this->RowContents == param_1->RowContents)) {
    return false;
  }
  return true;
}

