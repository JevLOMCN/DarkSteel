// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUReshape
// Functions: 8

// `dynamic_initializer_for_'CVarAutoAttachGPUReshape'' @ 1414184f0

void __cdecl _dynamic_initializer_for__CVarAutoAttachGPUReshape__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutoAttachGPUReshape,L"r.AutoAttachGPUReshape",&GAutoAttachGPUReshape,
             L"Automatically loads GPU-Reshape on startup",0x24);
  atexit(_dynamic_atexit_destructor_for__CVarAutoAttachGPUReshape__);
  return;
}

// `dynamic_initializer_for_'LogGPUReshape'' @ 141418540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGPUReshape__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogGPUReshape,L"LogGPUReshape",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGPUReshape__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGPUReshape'' @ 141418580

void __cdecl _dynamic_initializer_for__ModuleRegistrantGPUReshape__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GPUReshape";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GPUReshape",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FGPUReshapeModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14e2c2250

void * __thiscall
FGPUReshapeModule::_scalar_deleting_destructor_(FGPUReshapeModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FAutoConsoleCommand *pFVar2;
  
  pFVar1 = (this->ReservedToken).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GPUReshapePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->OpenAppCommand).Ptr;
  if (pFVar2 != (FAutoConsoleCommand *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2c25f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGPUReshapeModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGPUReshapeModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// IMPLEMENT_MODULE_GPUReshape @ 14e2c3480

void __cdecl IMPLEMENT_MODULE_GPUReshape(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutoAttachGPUReshape'' @ 150463ef0

void __cdecl _dynamic_atexit_destructor_for__CVarAutoAttachGPUReshape__(void)

{
  CVarAutoAttachGPUReshape._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutoAttachGPUReshape);
  return;
}

// `dynamic_atexit_destructor_for_'LogGPUReshape'' @ 150463f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGPUReshape__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGPUReshape);
  return;
}

