// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMediaFactory
// Functions: 6

// `dynamic_initializer_for_'LogWebMMediaFactory'' @ 1414532f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWebMMediaFactory__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWebMMediaFactory,L"LogWebMMediaFactory",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWebMMediaFactory__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWebMMediaFactory'' @ 141453330

void __cdecl _dynamic_initializer_for__ModuleRegistrantWebMMediaFactory__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WebMMediaFactory";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WebMMediaFactory",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWebMMediaFactoryModule>::InitializeModule)
  ;
  return;
}

// `scalar_deleting_destructor' @ 14f124890

void * __thiscall
FWebMMediaFactoryModule::_scalar_deleting_destructor_(FWebMMediaFactoryModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->SupportedUriSchemes).AllocatorInstance.Data,
             (this->SupportedUriSchemes).ArrayNum);
  pFVar1 = (this->SupportedUriSchemes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SupportedPlatforms).AllocatorInstance.Data,
             (this->SupportedPlatforms).ArrayNum);
  pFVar1 = (this->SupportedPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SupportedFileExtensions).AllocatorInstance.Data,
             (this->SupportedFileExtensions).ArrayNum);
  pFVar1 = (this->SupportedFileExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  this->_padding_ = (longlong)&___7IMediaPlayerFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14f12492c

/* [thunk]:public: virtual void * __ptr64 __cdecl FWebMMediaFactoryModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FWebMMediaFactoryModule::_vector_deleting_destructor__adjustor_8__
          (FWebMMediaFactoryModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FWebMMediaFactoryModule *)&this[-1].SupportedUriSchemes.ArrayNum,param_1);
  return pvVar1;
}

// IMPLEMENT_MODULE_WebMMediaFactory @ 14f1249b0

void __cdecl IMPLEMENT_MODULE_WebMMediaFactory(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogWebMMediaFactory'' @ 150472130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWebMMediaFactory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWebMMediaFactory);
  return;
}

