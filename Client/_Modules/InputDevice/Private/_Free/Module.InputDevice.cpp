// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputDevice
// Functions: 4

// `dynamic_initializer_for_'ModuleRegistrantInputDevice'' @ 1414184a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantInputDevice__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "InputDevice";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"InputDevice",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14e2c1ee0

void * __thiscall
IInputDeviceModule::_scalar_deleting_destructor_(IInputDeviceModule *this,uint param_1)

{
  *this = (IInputDeviceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c1f40

void * __thiscall
FInputDeviceModule::_scalar_deleting_destructor_(FInputDeviceModule *this,uint param_1)

{
  *this = (FInputDeviceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_InputDevice @ 14e2c1fb0

void __cdecl IMPLEMENT_MODULE_InputDevice(void)

{
  return;
}

