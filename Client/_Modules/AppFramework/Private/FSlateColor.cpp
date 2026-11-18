// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// UseStyle @ 143015ff0

FSlateColor * __cdecl FSlateColor::UseStyle(FSlateColor *__return_storage_ptr__)

{
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_UseStyle;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// FSlateColor @ 14305c960

FSlateColor * __thiscall FSlateColor::FSlateColor(FSlateColor *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  this->ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(this->SpecifiedColor).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->SpecifiedColor).field0_0x0 + 8) = uVar2;
  return this;
}

