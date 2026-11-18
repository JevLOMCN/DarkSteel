// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraFluids
// Functions: 4

// `dynamic_initializer_for_'ModuleRegistrantNiagaraFluids'' @ 1413c9d10

void __cdecl _dynamic_initializer_for__ModuleRegistrantNiagaraFluids__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NiagaraFluids";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NiagaraFluids",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNiagaraFluids>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14d360460

void * __thiscall FNiagaraFluids::_scalar_deleting_destructor_(FNiagaraFluids *this,uint param_1)

{
  *this = (FNiagaraFluids)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3604a0

void * __thiscall INiagaraFluids::_scalar_deleting_destructor_(INiagaraFluids *this,uint param_1)

{
  *this = (INiagaraFluids)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_NiagaraFluids @ 14d360510

void __cdecl IMPLEMENT_MODULE_NiagaraFluids(void)

{
  return;
}

