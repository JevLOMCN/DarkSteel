// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicLibTest
// Functions: 6

// `dynamic_initializer_for_'LogRigLogicLibTest'' @ 14129e040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRigLogicLibTest__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRigLogicLibTest,L"LogRigLogicLibTest",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogRigLogicLibTest__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantRigLogicLibTest'' @ 14129e080

void __cdecl _dynamic_initializer_for__ModuleRegistrantRigLogicLibTest__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "RigLogicLibTest";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"RigLogicLibTest",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FRigLogicLibTest>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14c27d570

void * __thiscall
FRigLogicLibTest::_scalar_deleting_destructor_(FRigLogicLibTest *this,uint param_1)

{
  *this = (FRigLogicLibTest)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// InitializeModule @ 14c27d5b0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FRigLogicLibTest>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(8);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FRigLogicLibTest__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

// IMPLEMENT_MODULE_RigLogicLibTest @ 14c27d5e0

void __cdecl IMPLEMENT_MODULE_RigLogicLibTest(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogRigLogicLibTest'' @ 150444910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRigLogicLibTest__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRigLogicLibTest);
  return;
}

