// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerVLogRuntime
// Functions: 4

// `dynamic_initializer_for_'ModuleRegistrantRewindDebuggerVLogRuntime'' @ 1413b9750

void __cdecl _dynamic_initializer_for__ModuleRegistrantRewindDebuggerVLogRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "RewindDebuggerVLogRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"RewindDebuggerVLogRuntime",0x19);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FRewindDebuggerVLogRuntimeModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14cd8d010

void * __thiscall
RewindDebugger::FRewindDebuggerVLogRuntime::_scalar_deleting_destructor_
          (FRewindDebuggerVLogRuntime *this,uint param_1)

{
  *this = (FRewindDebuggerVLogRuntime)&___7IRewindDebuggerRuntimeExtension__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cd8d0d0

void * __thiscall
FRewindDebuggerVLogRuntimeModule::_scalar_deleting_destructor_
          (FRewindDebuggerVLogRuntimeModule *this,uint param_1)

{
  this->VLogExtension = (FRewindDebuggerVLogRuntime)&___7IRewindDebuggerRuntimeExtension__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// IMPLEMENT_MODULE_RewindDebuggerVLogRuntime @ 14cd8d150

void __cdecl IMPLEMENT_MODULE_RewindDebuggerVLogRuntime(void)

{
  return;
}

