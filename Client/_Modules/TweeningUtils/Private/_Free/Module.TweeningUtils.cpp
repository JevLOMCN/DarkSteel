// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TweeningUtils
// Functions: 3

// `dynamic_initializer_for_'ModuleRegistrantTweeningUtils'' @ 1413ae5a0

void __cdecl UE::TweeningUtils::_dynamic_initializer_for__ModuleRegistrantTweeningUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TweeningUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TweeningUtils",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<UE::TweeningUtils::FTweeningUtilsModule>::
             InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14c6bc990

void * __thiscall
UE::TweeningUtils::FTweeningUtilsModule::_scalar_deleting_destructor_
          (FTweeningUtilsModule *this,uint param_1)

{
  *this = (FTweeningUtilsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_TweeningUtils @ 14c6bce50

void __cdecl IMPLEMENT_MODULE_TweeningUtils(void)

{
  return;
}

