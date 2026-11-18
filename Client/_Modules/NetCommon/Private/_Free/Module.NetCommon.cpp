// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCommon
// Functions: 3

// `dynamic_initializer_for_'ModuleRegistrantNetCommon'' @ 140f4b920

void __cdecl _dynamic_initializer_for__ModuleRegistrantNetCommon__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NetCommon";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NetCommon",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNetCommonModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 1431087e0

void * __thiscall
FNetCommonModule::_scalar_deleting_destructor_(FNetCommonModule *this,uint param_1)

{
  *this = (FNetCommonModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_NetCommon @ 143108850

void __cdecl IMPLEMENT_MODULE_NetCommon(void)

{
  return;
}

