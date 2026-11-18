// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// StaticStruct @ 14a873eb0

UScriptStruct * __cdecl FChooserEnumRowData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserEnumRowData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserEnumRowData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserEnumRowData,(UObject *)pUVar1,
                         L"ChooserEnumRowData");
  }
  return Z_Registration_Info_UScriptStruct_FChooserEnumRowData.OuterSingleton;
}

// Evaluate @ 14a885b80

bool __thiscall FChooserEnumRowData::Evaluate(FChooserEnumRowData *this,uchar param_1)

{
  EEnumColumnCellValueComparison EVar1;
  
  EVar1 = this->Comparison;
  if (EVar1 == MatchEqual) {
    return param_1 == this->Value;
  }
  if (EVar1 != MatchNotEqual) {
    if (EVar1 != MatchAny) {
      return false;
    }
    return true;
  }
  return param_1 != this->Value;
}

