// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// Get @ 1499f2fb0

IPCGEditorModule * __cdecl IPCGEditorModule::Get(void)

{
  return PCGEditorModulePtr;
}

// SetEditorModule @ 149a0c410

void __cdecl IPCGEditorModule::SetEditorModule(IPCGEditorModule *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((PCGEditorModulePtr != (IPCGEditorModule *)0x0) && (param_1 != (IPCGEditorModule *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PCGEditorModulePtr == nullptr || InModule == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Editor\\IPCGEditorModule.cpp"
                       ,0xe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  PCGEditorModulePtr = param_1;
  return;
}

