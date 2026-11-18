// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// Write<TStringView<char8_t>_> @ 14314c0d0

void __cdecl
UE::Logging::Private::FLogField::Write<TStringView<char8_t>_>(FCbWriter *param_1,void *param_2)

{
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = *(uchar **)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  FCbWriter::SetNameOrAddString(param_1,&local_18);
  return;
}

