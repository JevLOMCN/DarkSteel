// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// IsA<USplineMeshComponent> @ 14cac2ab0

bool __thiscall UObjectBaseUtility::IsA<USplineMeshComponent>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_USplineMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

