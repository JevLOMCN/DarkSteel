// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformSupportWasapi
// Functions: 5

// `dynamic_initializer_for_'LogAudioPlatformSupportWasapi'' @ 14116a1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioPlatformSupportWasapi__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioPlatformSupportWasapi,L"LogAudioPlatformSupportWasapi",Log
             ,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioPlatformSupportWasapi__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioPlatformSupportWasapi'' @ 14116a200

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioPlatformSupportWasapi__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioPlatformSupportWasapi";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioPlatformSupportWasapi",0x1a);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAudioPlatformSupportWasapiModule>::InitializeModule)
  ;
  return;
}

// `scalar_deleting_destructor' @ 148d41d90

void * __thiscall
FAudioPlatformSupportWasapiModule::_scalar_deleting_destructor_
          (FAudioPlatformSupportWasapiModule *this,uint param_1)

{
  *this = (FAudioPlatformSupportWasapiModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_AudioPlatformSupportWasapi @ 148d42540

void __cdecl IMPLEMENT_MODULE_AudioPlatformSupportWasapi(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioPlatformSupportWasapi'' @ 15040c570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioPlatformSupportWasapi__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioPlatformSupportWasapi);
  return;
}

