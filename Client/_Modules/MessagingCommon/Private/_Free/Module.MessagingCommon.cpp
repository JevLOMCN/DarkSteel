// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessagingCommon
// Functions: 2

// `dynamic_initializer_for_'ModuleRegistrantMessagingCommon'' @ 140f93ea0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMessagingCommon__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MessagingCommon";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MessagingCommon",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// IMPLEMENT_MODULE_MessagingCommon @ 144638a30

void __cdecl IMPLEMENT_MODULE_MessagingCommon(void)

{
  return;
}

