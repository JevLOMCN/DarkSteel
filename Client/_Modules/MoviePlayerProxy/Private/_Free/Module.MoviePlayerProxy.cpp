// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayerProxy
// Functions: 2

// `dynamic_initializer_for_'ModuleRegistrantMoviePlayerProxy'' @ 140f8f4e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMoviePlayerProxy__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MoviePlayerProxy";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MoviePlayerProxy",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// IMPLEMENT_MODULE_MoviePlayerProxy @ 14454e710

void __cdecl IMPLEMENT_MODULE_MoviePlayerProxy(void)

{
  return;
}

