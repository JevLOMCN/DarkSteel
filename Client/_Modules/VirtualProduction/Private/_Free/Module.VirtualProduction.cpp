// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VirtualProduction
// Functions: 2

// `dynamic_initializer_for_'ModuleRegistrantVirtualProduction'' @ 1413fe200

void __cdecl _dynamic_initializer_for__ModuleRegistrantVirtualProduction__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "VirtualProduction";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"VirtualProduction",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// IMPLEMENT_MODULE_VirtualProduction @ 14de1d880

void __cdecl IMPLEMENT_MODULE_VirtualProduction(void)

{
  return;
}

