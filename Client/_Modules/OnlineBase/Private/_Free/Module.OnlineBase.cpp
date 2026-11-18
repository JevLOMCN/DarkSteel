// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineBase
// Functions: 6

// `dynamic_initializer_for_'CVarBuildIdOverride'' @ 1414498c0

void __cdecl _dynamic_initializer_for__CVarBuildIdOverride__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarBuildIdOverride,L"buildidoverride",local_res8,
             L"Sets build id used for matchmaking ",0);
  atexit(_dynamic_atexit_destructor_for__CVarBuildIdOverride__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOnlineBase'' @ 141449910

void __cdecl _dynamic_initializer_for__ModuleRegistrantOnlineBase__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OnlineBase";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OnlineBase",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FOnlineBaseModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14eb1f110

void * __thiscall
FOnlineBaseModule::_scalar_deleting_destructor_(FOnlineBaseModule *this,uint param_1)

{
  *this = (FOnlineBaseModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// GetBuildIdOverrideCVar @ 14eb21970

TAutoConsoleVariable<int> * __cdecl GetBuildIdOverrideCVar(void)

{
  return &CVarBuildIdOverride;
}

// IMPLEMENT_MODULE_OnlineBase @ 14eb22ff0

void __cdecl IMPLEMENT_MODULE_OnlineBase(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarBuildIdOverride'' @ 15046f790

void __cdecl _dynamic_atexit_destructor_for__CVarBuildIdOverride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBuildIdOverride);
  return;
}

