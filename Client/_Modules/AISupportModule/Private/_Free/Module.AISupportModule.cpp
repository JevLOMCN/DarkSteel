// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AISupportModule
// Functions: 4

// `dynamic_initializer_for_'ModuleRegistrantAISupportModule'' @ 141402db0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAISupportModule__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AISupportModule";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AISupportModule",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAISupportModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de8e470

void * __thiscall
IAISupportModule::_scalar_deleting_destructor_(IAISupportModule *this,uint param_1)

{
  *this = (IAISupportModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de8e530

void * __thiscall
FAISupportModule::_scalar_deleting_destructor_(FAISupportModule *this,uint param_1)

{
  *this = (FAISupportModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_AISupportModule @ 14de8e5a0

void __cdecl IMPLEMENT_MODULE_AISupportModule(void)

{
  return;
}

