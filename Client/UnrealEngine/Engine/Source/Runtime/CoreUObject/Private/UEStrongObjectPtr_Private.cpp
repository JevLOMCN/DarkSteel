// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ReleaseUObject @ 14221a810

void __cdecl UEStrongObjectPtr_Private::ReleaseUObject(UObject *param_1)

{
  FUObjectItem *this;
  longlong lVar1;
  
  if (GExitPurge) {
    return;
  }
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
  LOCK();
  lVar1 = (this->field0_0x0).FlagsAndRefCount;
  (this->field0_0x0).FlagsAndRefCount = (this->field0_0x0).FlagsAndRefCount + -1;
  UNLOCK();
  lVar1 = lVar1 + -1;
  if (((int)lVar1 == 0) && ((lVar1 >> 0x20 & 0x4e500000U) == 0)) {
    FUObjectItem::MarkRootAsDirty(this);
    return;
  }
  return;
}

