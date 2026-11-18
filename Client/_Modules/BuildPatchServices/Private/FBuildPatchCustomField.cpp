// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FBuildPatchCustomField @ 1431b8680

FBuildPatchCustomField * __thiscall
FBuildPatchCustomField::FBuildPatchCustomField(FBuildPatchCustomField *this,FString *param_1)

{
  this->_padding_ = (longlong)&___7FBuildPatchCustomField__6B_;
  ::FString::FString(&this->CustomValue,param_1);
  return this;
}

// AsDouble @ 1431c33c0

double __thiscall FBuildPatchCustomField::AsDouble(FBuildPatchCustomField *this)

{
  bool bVar1;
  double local_res8 [4];
  
  bVar1 = ::FString::ToBlob(&this->CustomValue,(uchar *)local_res8,8);
  if (bVar1) {
    return local_res8[0];
  }
  return 0.0;
}

// AsInteger @ 1431c3400

long64 __thiscall FBuildPatchCustomField::AsInteger(FBuildPatchCustomField *this)

{
  bool bVar1;
  long64 lVar2;
  long64 local_res8 [4];
  
  bVar1 = ::FString::ToBlob(&this->CustomValue,(uchar *)local_res8,8);
  lVar2 = 0;
  if (bVar1) {
    lVar2 = local_res8[0];
  }
  return lVar2;
}

// AsString @ 1431c3540

FString * __thiscall
FBuildPatchCustomField::AsString(FBuildPatchCustomField *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->CustomValue);
  return __return_storage_ptr__;
}

