// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// operator= @ 1425c2ab0

TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> * __thiscall
TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::operator=
          (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  uVar1 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)&param_1->field_0x8 = 0;
  if ((*(int *)&this->field_0x8 != 0) && (*(undefined8 **)this != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)this)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)this,0,0,0x10);
    *(undefined4 *)&this->field_0x8 = 0;
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  *(undefined8 *)this = uVar2;
  *(undefined4 *)&this->field_0x8 = uVar1;
  return this;
}

