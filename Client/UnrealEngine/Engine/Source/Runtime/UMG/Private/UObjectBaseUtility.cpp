// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// IsA<UWidgetBlueprintGeneratedClass> @ 146a53000

bool __thiscall UObjectBaseUtility::IsA<UWidgetBlueprintGeneratedClass>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = UWidgetBlueprintGeneratedClass::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

