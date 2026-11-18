// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TelemetryUtils
// Functions: 3

// `dynamic_initializer_for_'ModuleRegistrantTelemetryUtils'' @ 140f449c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantTelemetryUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TelemetryUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TelemetryUtils",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FTelemetryUtils>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 142a38f40

void * __thiscall FTelemetryUtils::_scalar_deleting_destructor_(FTelemetryUtils *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTelemetryUtils__6B_;
  TDefaultDelete<FTelemetryRouter>::operator()
            ((TDefaultDelete<FTelemetryRouter> *)&this->Router,(this->Router).Ptr);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// IMPLEMENT_MODULE_TelemetryUtils @ 142a3a230

void __cdecl IMPLEMENT_MODULE_TelemetryUtils(void)

{
  return;
}

