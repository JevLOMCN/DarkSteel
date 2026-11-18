// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator+= @ 141484210

void __thiscall UE::Trace::Private::TLogScope<1>::operator+=(TLogScope<1> *this,FLogScope *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0x20);
  **(undefined1 **)(lVar1 + 0x20) = 6;
  lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar1 != *(longlong *)&this->field_0x8) {
    *(longlong *)(lVar1 + 0x28) = lVar2;
  }
  *(undefined8 *)(*(longlong *)&this->field_0x8 + 0x28) =
       *(undefined8 *)(*(longlong *)&this->field_0x8 + 0x20);
  return;
}

