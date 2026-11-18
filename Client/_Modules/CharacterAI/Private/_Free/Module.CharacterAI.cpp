// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CharacterAI
// Functions: 6

// `dynamic_initializer_for_'LogCharacterAI'' @ 1414432b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCharacterAI__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCharacterAI,L"LogCharacterAI",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogCharacterAI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCharacterAI'' @ 1414432f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantCharacterAI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CharacterAI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CharacterAI",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCharacterAIModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14e9b5b50

void * __thiscall
ICharacterAIModuleInterface::_scalar_deleting_destructor_
          (ICharacterAIModuleInterface *this,uint param_1)

{
  *this = (ICharacterAIModuleInterface)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9b5be0

void * __thiscall
FCharacterAIModule::_scalar_deleting_destructor_(FCharacterAIModule *this,uint param_1)

{
  *this = (FCharacterAIModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_CharacterAI @ 14e9b5c50

void __cdecl IMPLEMENT_MODULE_CharacterAI(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogCharacterAI'' @ 15046c660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCharacterAI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCharacterAI);
  return;
}

