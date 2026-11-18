// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsRuntime
// Functions: 3

// `dynamic_initializer_for_'ModuleRegistrantHairStrandsRuntime'' @ 141415aa0

void __cdecl _dynamic_initializer_for__ModuleRegistrantHairStrandsRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "HairStrandsRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"HairStrandsRuntime",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FHairStrandsRuntime>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14e2910d0

void * __thiscall
FHairStrandsRuntime::_scalar_deleting_destructor_(FHairStrandsRuntime *this,uint param_1)

{
  *this = (FHairStrandsRuntime)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_HairStrandsRuntime @ 14e291140

void __cdecl IMPLEMENT_MODULE_HairStrandsRuntime(void)

{
  return;
}

