// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// LoadSynchronous @ 14abe7cc0

UObject * __thiscall FSoftObjectPtr::LoadSynchronous(FSoftObjectPtr *this)

{
  UObject *pUVar1;
  
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this)
  ;
  if ((pUVar1 == (UObject *)0x0) && (*(longlong *)&this->field_0x8 != 0)) {
    FSoftObjectPath::TryLoad((FSoftObjectPath *)&this->field_0x8,(FUObjectSerializeContext *)0x0);
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this);
    return pUVar1;
  }
  return pUVar1;
}

