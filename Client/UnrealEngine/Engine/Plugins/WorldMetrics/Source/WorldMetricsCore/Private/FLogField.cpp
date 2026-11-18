// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WorldMetricsCore
// Functions: 3

// Write<char_[28]> @ 14f132ee0

void __cdecl UE::Logging::Private::FLogField::Write<char_[28]>(FCbWriter *param_1,void *param_2)

{
  size_t sVar1;
  TStringView<char8_t> local_18;
  
  local_18.Size = 0;
  if (param_2 != (void *)0x0) {
    sVar1 = strlen(param_2);
    local_18.Size = (int)sVar1;
  }
  local_18.DataPtr = param_2;
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  return;
}

// Write<char_[33]> @ 14f132f40

void __cdecl UE::Logging::Private::FLogField::Write<char_[33]>(FCbWriter *param_1,void *param_2)

{
  size_t sVar1;
  TStringView<char8_t> local_18;
  
  local_18.Size = 0;
  if (param_2 != (void *)0x0) {
    sVar1 = strlen(param_2);
    local_18.Size = (int)sVar1;
  }
  local_18.DataPtr = param_2;
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  return;
}

// Write<char_[35]> @ 14f132fa0

void __cdecl UE::Logging::Private::FLogField::Write<char_[35]>(FCbWriter *param_1,void *param_2)

{
  size_t sVar1;
  TStringView<char8_t> local_18;
  
  local_18.Size = 0;
  if (param_2 != (void *)0x0) {
    sVar1 = strlen(param_2);
    local_18.Size = (int)sVar1;
  }
  local_18.DataPtr = param_2;
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  return;
}

