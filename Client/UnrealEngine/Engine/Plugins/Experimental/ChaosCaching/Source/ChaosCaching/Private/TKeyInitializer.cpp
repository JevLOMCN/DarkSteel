// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 1

// operator<FName,FRichCurve>_TTuple<FName,FRichCurve> @ 14dadd790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FName,FRichCurve> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FRichCurve>_TTuple<FName,FRichCurve>
          (TKeyInitializer<FName_const_&> *this,TTuple<FName,FRichCurve> *__return_storage_ptr__)

{
  uint uVar1;
  
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = 0x7f7fffff;
  *(undefined2 *)&__return_storage_ptr__->field_0x74 = 0x404;
  *(undefined ***)&__return_storage_ptr__->field_0x8 = &___7FRichCurve__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = 0;
  return __return_storage_ptr__;
}

