// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// ~IEditableProvider @ 14d3d14f0

void __thiscall TraceServices::IEditableProvider::~IEditableProvider(IEditableProvider *this)

{
  return;
}

// BeginEdit @ 14d3d5660

void __thiscall TraceServices::IEditableProvider::BeginEdit(IEditableProvider *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\AnalysisSession.h"
                     ,0x2b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EditAccessCheck @ 14d3d8de0

void __thiscall TraceServices::IEditableProvider::EditAccessCheck(IEditableProvider *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\AnalysisSession.h"
                     ,0x2d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// EndEdit @ 14d3db4d0

void __thiscall TraceServices::IEditableProvider::EndEdit(IEditableProvider *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\TraceServices\\Model\\AnalysisSession.h"
                     ,0x2c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

