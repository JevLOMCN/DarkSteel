// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// StaticStruct @ 14a8767c0

UScriptStruct * __cdecl FChooserObjectRowData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserObjectRowData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserObjectRowData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserObjectRowData,(UObject *)pUVar1,
                         L"ChooserObjectRowData");
  }
  return Z_Registration_Info_UScriptStruct_FChooserObjectRowData.OuterSingleton;
}

// Evaluate @ 14a885c30

bool __thiscall
FChooserObjectRowData::Evaluate(FChooserObjectRowData *this,FSoftObjectPath *param_1)

{
  EObjectColumnCellValueComparison EVar1;
  bool bVar2;
  
  EVar1 = this->Comparison;
  if (EVar1 == MatchEqual) {
    bVar2 = FSoftObjectPath::operator==
                      (param_1,(FSoftObjectPath *)&(this->Value).SoftObjectPtr.field_0x8);
    return bVar2;
  }
  if (EVar1 != MatchNotEqual) {
    if (EVar1 != MatchAny) {
      return false;
    }
    return true;
  }
  bVar2 = FSoftObjectPath::operator==
                    (param_1,(FSoftObjectPath *)&(this->Value).SoftObjectPtr.field_0x8);
  return !bVar2;
}

