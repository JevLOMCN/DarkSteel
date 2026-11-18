// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 2

// CreateApplication @ 1423d5340

GenericApplication * __cdecl FNullPlatformApplicationMisc::CreateApplication(void)

{
  FNullApplication *this;
  
  if (NullApplication == (FNullApplication *)0x0) {
    this = ::operator_new(0x120);
    if (this != (FNullApplication *)0x0) {
      NullApplication = FNullApplication::FNullApplication(this);
      return (GenericApplication *)NullApplication;
    }
    NullApplication = (FNullApplication *)0x0;
  }
  return (GenericApplication *)NullApplication;
}

// IsUsingNullApplication @ 1423eb4d0

bool __cdecl FNullPlatformApplicationMisc::IsUsingNullApplication(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar1 = FCommandLine::Get();
      bIsRenderingOffScreen = FParse::Param(pwVar1,L"RenderOffScreen");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bIsRenderingOffScreen;
}

