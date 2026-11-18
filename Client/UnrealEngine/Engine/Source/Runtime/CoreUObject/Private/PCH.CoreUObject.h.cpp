// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ~FUObjectItem @ 141e47530

void __thiscall FUObjectItem::~FUObjectItem(FUObjectItem *this)

{
  return;
}

// `vector_deleting_destructor' @ 141e47540

void * __thiscall FUObjectItem::_vector_deleting_destructor_(FUObjectItem *this,uint param_1)

{
  if ((param_1 & 2) != 0) {
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].StatID,(longlong)this[-1].StatID.StatIdPtr * 0x20 + 8);
    }
    return &this[-1].StatID;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

