// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeAssets
// Functions: 3

// `dynamic_initializer_for_'ModuleRegistrantInterchangeAssets'' @ 14143b3e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantInterchangeAssets__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "InterchangeAssets";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"InterchangeAssets",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FInterchangeAssetsModule>::InitializeModule
            );
  return;
}

// `scalar_deleting_destructor' @ 14e7eb6d0

void * __thiscall
FInterchangeAssetsModule::_scalar_deleting_destructor_(FInterchangeAssetsModule *this,uint param_1)

{
  *this = (FInterchangeAssetsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_InterchangeAssets @ 14e7eb740

void __cdecl IMPLEMENT_MODULE_InterchangeAssets(void)

{
  return;
}

