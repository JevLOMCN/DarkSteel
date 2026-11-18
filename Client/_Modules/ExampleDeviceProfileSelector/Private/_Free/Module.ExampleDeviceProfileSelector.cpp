// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ExampleDeviceProfileSelector
// Functions: 4

// `dynamic_initializer_for_'ModuleRegistrantExampleDeviceProfileSelector'' @ 141450650

void __cdecl _dynamic_initializer_for__ModuleRegistrantExampleDeviceProfileSelector__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ExampleDeviceProfileSelector";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ExampleDeviceProfileSelector",0x1c);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FExampleDeviceProfileSelectorModule>::
             InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14f0320e0

void * __thiscall
IDeviceProfileSelectorModule::_scalar_deleting_destructor_
          (IDeviceProfileSelectorModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0321a0

void * __thiscall
FExampleDeviceProfileSelectorModule::_scalar_deleting_destructor_
          (FExampleDeviceProfileSelectorModule *this,uint param_1)

{
  *(undefined ***)this = IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// IMPLEMENT_MODULE_ExampleDeviceProfileSelector @ 14f032260

void __cdecl IMPLEMENT_MODULE_ExampleDeviceProfileSelector(void)

{
  return;
}

