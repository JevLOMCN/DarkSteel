// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// StaticStruct @ 14a86bba0

UScriptStruct * __cdecl FChooserObjectClassRowData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserObjectClassRowData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserObjectClassRowData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserObjectClassRowData,(UObject *)pUVar1,
                         L"ChooserObjectClassRowData");
  }
  return Z_Registration_Info_UScriptStruct_FChooserObjectClassRowData.OuterSingleton;
}

// Evaluate @ 14a885bb0

bool __thiscall
FChooserObjectClassRowData::Evaluate(FChooserObjectClassRowData *this,UObject *param_1)

{
  EObjectClassColumnCellValueComparison EVar1;
  int iVar2;
  UClass *pUVar3;
  
  pUVar3 = (this->Value).field0_0x0.DebugPtr;
  if ((pUVar3 == (UClass *)0x0) || (param_1 == (UObject *)0x0)) {
    return true;
  }
  EVar1 = this->Comparison;
  if (EVar1 == Equal) {
    return *(UClass **)&param_1->field_0x10 == pUVar3;
  }
  if (EVar1 != NotEqual) {
    if (EVar1 == SubClassOf) {
      iVar2 = (int)pUVar3->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar3->_padding_)) {
        return true;
      }
    }
    else if (EVar1 == NotSubClassOf) {
      iVar2 = (int)pUVar3->_padding_;
      if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar2) {
        return true;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_) {
        return true;
      }
    }
    return false;
  }
  return *(UClass **)&param_1->field_0x10 != pUVar3;
}

