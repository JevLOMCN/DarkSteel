// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator= @ 149026c10

TOptional<TTuple<FString,FString>_> * __thiscall
TOptional<TTuple<FString,FString>_>::operator=
          (TOptional<TTuple<FString,FString>_> *this,TTuple<FString,FString> *param_1)

{
  void *pvVar1;
  
  if ((TOptional<TTuple<FString,FString>_> *)param_1 != this) {
    if (this->bIsSet != false) {
      pvVar1 = *(void **)&(this->TypedValue).field_0x10;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      if (*(void **)&this->TypedValue != (void *)0x0) {
        FMemory::Free(*(void **)&this->TypedValue);
      }
    }
    *(undefined8 *)&this->TypedValue = 0;
    *(undefined8 *)&this->TypedValue = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&(this->TypedValue).field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&(this->TypedValue).field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    *(undefined8 *)&(this->TypedValue).field_0x10 = 0;
    *(undefined8 *)&(this->TypedValue).field_0x10 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&param_1->field_0x10 = 0;
    *(undefined4 *)&(this->TypedValue).field_0x18 = *(undefined4 *)&param_1->field_0x18;
    *(undefined4 *)&(this->TypedValue).field_0x1c = *(undefined4 *)&param_1->field_0x1c;
    *(undefined8 *)&param_1->field_0x18 = 0;
    this->bIsSet = true;
  }
  return this;
}

