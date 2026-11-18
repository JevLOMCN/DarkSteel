// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// operator= @ 148cb6d70

TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> * __thiscall
TTuple<TIoStatusOr<FIoBuffer>,enum_EStorageServerContentType>::operator=
          (void *this,TTuple<TIoStatusOr<FIoBuffer>,EStorageServerContentType> *param_1)

{
  if (param_1 != this) {
    TIoStatusOr<FIoBuffer>::Reset(this);
    if (*(int *)&param_1->field_0x8 == 0) {
      *(undefined8 *)((longlong)this + 0x10) = 0;
      *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)&param_1->field_0x10;
      *(undefined8 *)&param_1->field_0x10 = 0;
      FIoStatus::operator=((FIoStatus *)param_1,Unknown);
      FIoStatus::operator=(this,Ok);
    }
    else {
      FIoStatus::operator=(this,(FIoStatus *)param_1);
    }
  }
  *(undefined1 *)((longlong)this + 0x18) = param_1->field_0x18;
  return this;
}

