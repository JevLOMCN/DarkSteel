// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PythonScriptPluginPreload
// Functions: 3

// `dynamic_initializer_for_'ModuleRegistrantPythonScriptPluginPreload'' @ 14129d980

void __cdecl _dynamic_initializer_for__ModuleRegistrantPythonScriptPluginPreload__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PythonScriptPluginPreload";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PythonScriptPluginPreload",0x19);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FPythonScriptPluginPreload>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14c26fee0

void * __thiscall
FPythonScriptPluginPreload::_scalar_deleting_destructor_
          (FPythonScriptPluginPreload *this,uint param_1)

{
  *this = (FPythonScriptPluginPreload)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_PythonScriptPluginPreload @ 14c26ff50

void __cdecl IMPLEMENT_MODULE_PythonScriptPluginPreload(void)

{
  return;
}

