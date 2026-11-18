// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsDeviceProfileSelector
// Functions: 3

// `dynamic_initializer_for_'ModuleRegistrantWindowsDeviceProfileSelector'' @ 141453410

void __cdecl _dynamic_initializer_for__ModuleRegistrantWindowsDeviceProfileSelector__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WindowsDeviceProfileSelector";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WindowsDeviceProfileSelector",0x1c);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FWindowsDeviceProfileSelectorModule>::
             InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14f1275b0

void * __thiscall
FWindowsDeviceProfileSelectorModule::_scalar_deleting_destructor_
          (FWindowsDeviceProfileSelectorModule *this,uint param_1)

{
  *(undefined ***)this = IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// IMPLEMENT_MODULE_WindowsDeviceProfileSelector @ 14f127650

void __cdecl IMPLEMENT_MODULE_WindowsDeviceProfileSelector(void)

{
  return;
}

