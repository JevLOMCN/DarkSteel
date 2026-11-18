// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// Implements<UUserListEntry> @ 1468f2d30

bool __thiscall UObject::Implements<UUserListEntry>(UObject *this)

{
  UClass *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = *(UClass **)&this->field_0x10;
  if (this_00 != (UClass *)0x0) {
    pUVar2 = UUserListEntry::StaticClass();
    bVar1 = UClass::ImplementsInterface(this_00,pUVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Implements<UUserObjectListEntry> @ 1468f2d70

bool __thiscall UObject::Implements<UUserObjectListEntry>(UObject *this)

{
  UClass *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = *(UClass **)&this->field_0x10;
  if (this_00 != (UClass *)0x0) {
    pUVar2 = UUserObjectListEntry::StaticClass();
    bVar1 = UClass::ImplementsInterface(this_00,pUVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

