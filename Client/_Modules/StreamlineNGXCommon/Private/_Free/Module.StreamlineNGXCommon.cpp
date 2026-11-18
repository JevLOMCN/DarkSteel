// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineNGXCommon
// Functions: 5

// `dynamic_initializer_for_'LogStreamlineNGXCommon'' @ 1413fdcb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineNGXCommon__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineNGXCommon,L"LogStreamlineNGXCommon",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineNGXCommon__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineNGXCommon'' @ 1413fdcf0

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineNGXCommon__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineNGXCommon";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineNGXCommon",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FStreamlineNGXCommonModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de0e060

void * __thiscall
FStreamlineNGXCommonModule::_scalar_deleting_destructor_
          (FStreamlineNGXCommonModule *this,uint param_1)

{
  *this = (FStreamlineNGXCommonModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_StreamlineNGXCommon @ 14de0e0d0

void __cdecl IMPLEMENT_MODULE_StreamlineNGXCommon(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineNGXCommon'' @ 15045ee10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineNGXCommon__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineNGXCommon);
  return;
}

