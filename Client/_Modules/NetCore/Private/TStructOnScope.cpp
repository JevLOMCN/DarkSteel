// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// ~TStructOnScope<FEscalationState> @ 1441d39b0

void __thiscall
TStructOnScope<FEscalationState>::~TStructOnScope<FEscalationState>
          (TStructOnScope<FEscalationState> *this)

{
  UObject *pUVar1;
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  
  *(undefined ***)this = &___7FStructOnScope__6B_;
  if (this->field_0x20 != '\0') {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
    if (pUVar1 != (UObject *)0x0) {
      if (*(longlong *)&this->field_0x10 != 0) {
        (**(code **)(*(longlong *)pUVar1 + 0x300))(pUVar1,*(longlong *)&this->field_0x10,1);
      }
      FStackX_8.ObjectIndex = 0;
      FStackX_8.ObjectSerialNumber = 0;
      uStackX_10 = 0;
      FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
      *(int *)&this->field_0x8 = FStackX_8.ObjectIndex;
      *(int *)&this->field_0xc = FStackX_8.ObjectSerialNumber;
    }
    if (*(void **)&this->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x10);
      *(undefined8 *)&this->field_0x10 = 0;
    }
  }
  return;
}

// ~TStructOnScope<FStateStruct> @ 1441d39c0

void __thiscall
TStructOnScope<FStateStruct>::~TStructOnScope<FStateStruct>(TStructOnScope<FStateStruct> *this)

{
  UObject *pUVar1;
  FWeakObjectPtr FStackX_8;
  undefined8 uStackX_10;
  
  *(undefined ***)this = &___7FStructOnScope__6B_;
  if (this->field_0x20 != '\0') {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x8);
    if (pUVar1 != (UObject *)0x0) {
      if (*(longlong *)&this->field_0x10 != 0) {
        (**(code **)(*(longlong *)pUVar1 + 0x300))(pUVar1,*(longlong *)&this->field_0x10,1);
      }
      FStackX_8.ObjectIndex = 0;
      FStackX_8.ObjectSerialNumber = 0;
      uStackX_10 = 0;
      FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&uStackX_10);
      *(int *)&this->field_0x8 = FStackX_8.ObjectIndex;
      *(int *)&this->field_0xc = FStackX_8.ObjectSerialNumber;
    }
    if (*(void **)&this->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x10);
      *(undefined8 *)&this->field_0x10 = 0;
    }
  }
  return;
}

