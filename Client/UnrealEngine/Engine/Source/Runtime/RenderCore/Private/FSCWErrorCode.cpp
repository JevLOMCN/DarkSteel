// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// Get @ 145e560d0

ECode __cdecl FSCWErrorCode::Get(void)

{
  return GSCWErrorCode;
}

// GetInfo @ 145e58b90

FString * __cdecl FSCWErrorCode::GetInfo(void)

{
  return &GSCWErrorCodeInfo;
}

// IsSet @ 145e61060

bool __cdecl FSCWErrorCode::IsSet(void)

{
  return GSCWErrorCode != NotSet;
}

// Report @ 145e6ba20

void __cdecl FSCWErrorCode::Report(ECode param_1,TStringView<wchar_t> *param_2)

{
  GSCWErrorCode = param_1;
  ::FString::AssignRange(&GSCWErrorCodeInfo,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  return;
}

// Reset @ 145e6beb0

void __cdecl FSCWErrorCode::Reset(void)

{
  GSCWErrorCode = NotSet;
  ::FString::Empty(&GSCWErrorCodeInfo);
  return;
}

