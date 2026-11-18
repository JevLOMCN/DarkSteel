// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 1

// Unbind @ 1441c3ab0

void __thiscall
TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::Unbind
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *this)

{
  if ((*(int *)&this->field_0x8 != 0) && (*(undefined8 **)this != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)this)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,0,0,0x10);
    *(undefined4 *)&this->field_0x8 = 0;
  }
  return;
}

