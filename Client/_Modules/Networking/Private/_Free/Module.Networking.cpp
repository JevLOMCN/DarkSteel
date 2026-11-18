// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Networking
// Functions: 7

// `dynamic_initializer_for_'FIPv4AddressTestAutomationTestInstance'' @ 140f4bac0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FIPv4AddressTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FIPv4AddressTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FIPv4AddressTestAutomationTestInstance,&local_18,false);
  FIPv4AddressTestAutomationTestInstance._0_8_ = &___7FIPv4AddressTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FIPv4AddressTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNetworking'' @ 140f4bb20

void __cdecl _dynamic_initializer_for__ModuleRegistrantNetworking__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Networking";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Networking",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNetworkingModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 143118fe0

void * __thiscall
INetworkingModule::_scalar_deleting_destructor_(INetworkingModule *this,uint param_1)

{
  *this = (INetworkingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143119070

void * __thiscall
FNetworkingModule::_scalar_deleting_destructor_(FNetworkingModule *this,uint param_1)

{
  *this = (FNetworkingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431196e0

void * __thiscall
FIPv4AddressTest::_scalar_deleting_destructor_(FIPv4AddressTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// IMPLEMENT_MODULE_Networking @ 14311a320

void __cdecl IMPLEMENT_MODULE_Networking(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'FIPv4AddressTestAutomationTestInstance'' @ 1503601c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FIPv4AddressTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FIPv4AddressTestAutomationTestInstance);
  return;
}

