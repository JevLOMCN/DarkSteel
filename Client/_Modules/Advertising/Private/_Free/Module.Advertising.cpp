// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Advertising
// Functions: 5

// `dynamic_initializer_for_'LogAdvertising'' @ 140f94af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAdvertising__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAdvertising,L"LogAdvertising",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAdvertising__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAdvertising'' @ 140f94b30

void __cdecl _dynamic_initializer_for__ModuleRegistrantAdvertising__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Advertising";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Advertising",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAdvertising>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 144651c00

void * __thiscall FAdvertising::_scalar_deleting_destructor_(FAdvertising *this,uint param_1)

{
  *this = (FAdvertising)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_Advertising @ 144651e50

void __cdecl IMPLEMENT_MODULE_Advertising(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAdvertising'' @ 15036e9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAdvertising__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAdvertising);
  return;
}

