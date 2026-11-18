// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 1

// operator<FName,EKeys::FCategoryDisplayInfo>_TTuple<FName,EKeys::FCategoryDisplayInfo> @ 14238beb0

TTuple<FName,EKeys::FCategoryDisplayInfo> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,EKeys::FCategoryDisplayInfo>_TTuple<FName,EKeys::FCategoryDisplayInfo>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,EKeys::FCategoryDisplayInfo> *__return_storage_ptr__)

{
  uint uVar1;
  FText local_28;
  undefined8 local_18;
  
  local_28.TextData.Reference = (ITextData *)0x0;
  local_28.Flags = 0;
  local_28._12_4_ = 0;
  local_18 = 0;
  FText::FText(&local_28);
  local_18 = 0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FText::FText((FText *)&__return_storage_ptr__->field_0x8,&local_28);
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_18;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

