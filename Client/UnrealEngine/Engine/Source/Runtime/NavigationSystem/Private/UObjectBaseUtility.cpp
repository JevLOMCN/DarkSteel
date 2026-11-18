// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// IsA<UNavigationSystemV1> @ 146d6f210

bool __thiscall UObjectBaseUtility::IsA<UNavigationSystemV1>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = UNavigationSystemV1::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

// IsA<ANavigationTestingActor> @ 146dd1780

bool __thiscall UObjectBaseUtility::IsA<ANavigationTestingActor>(UObjectBaseUtility *this)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = ANavigationTestingActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return true;
  }
  return false;
}

