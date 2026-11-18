// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// ~IProvider @ 14d3d1540

void __thiscall TraceServices::IProvider::~IProvider(IProvider *this)

{
  return;
}

// BeginRead @ 14d3d5c80

void __thiscall TraceServices::IProvider::BeginRead(IProvider *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\AnalysisSession.h"
                     ,0x21,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EndRead @ 14d3dbcc0

void __thiscall TraceServices::IProvider::EndRead(IProvider *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\AnalysisSession.h"
                     ,0x22,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ReadAccessCheck @ 14d3fd060

void __thiscall TraceServices::IProvider::ReadAccessCheck(IProvider *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\AnalysisSession.h"
                     ,0x23,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

