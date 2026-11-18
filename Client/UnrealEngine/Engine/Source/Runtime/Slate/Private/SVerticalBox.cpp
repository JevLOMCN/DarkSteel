// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Slot @ 14278aa00

FSlotArguments * __cdecl SVerticalBox::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlot *this;
  FSlot *local_res8 [4];
  
  this = ::operator_new(0x58);
  local_res8[0] = (FSlot *)0x0;
  if (this != (FSlot *)0x0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)&this->field_0x8 = 0;
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x18 = 0;
    *(undefined8 *)&this->field_0x20 = 0;
    *(undefined8 *)&this->field_0x28 = 0;
    *(undefined8 *)&this->field_0x30 = 0;
    *(undefined8 *)&this->field_0x38 = 0;
    *(undefined8 *)&this->field_0x40 = 0;
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    local_res8[0] = FSlot::FSlot(this);
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)local_res8);
  return __return_storage_ptr__;
}

