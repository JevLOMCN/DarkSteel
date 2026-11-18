// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCryptoTypes
// Functions: 3

// `dynamic_initializer_for_'ModuleRegistrantPlatformCryptoTypes'' @ 141445140

void __cdecl _dynamic_initializer_for__ModuleRegistrantPlatformCryptoTypes__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PlatformCryptoTypes";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PlatformCryptoTypes",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FPlatformCryptoTypesModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14ea101e0

void * __thiscall
FPlatformCryptoTypesModule::_scalar_deleting_destructor_
          (FPlatformCryptoTypesModule *this,uint param_1)

{
  *this = (FPlatformCryptoTypesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_PlatformCryptoTypes @ 14ea10820

void __cdecl IMPLEMENT_MODULE_PlatformCryptoTypes(void)

{
  return;
}

