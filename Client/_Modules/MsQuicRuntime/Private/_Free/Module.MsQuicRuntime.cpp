// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MsQuicRuntime
// Functions: 9

// MSQUIC_BINARIES_PATH'' @ 141450b60

void __cdecl `dynamic_initializer_for_'FMsQuicRuntimeModule::MSQUIC_BINARIES_PATH__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,"Binaries/ThirdParty/MsQuic/");
  ::FString::ConcatFF(&FMsQuicRuntimeModule::MSQUIC_BINARIES_PATH,&local_18,
                      &FMsQuicRuntimeModule::MSQUIC_VERSION);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(`dynamic_atexit_destructor_for_'FMsQuicRuntimeModule::MSQUIC_BINARIES_PATH__);
  return;
}

// MSQUIC_VERSION'' @ 141450bc0

void __cdecl `dynamic_initializer_for_'FMsQuicRuntimeModule::MSQUIC_VERSION__(void)

{
  ::FString::FString(&FMsQuicRuntimeModule::MSQUIC_VERSION,"v220");
  atexit(`dynamic_atexit_destructor_for_'FMsQuicRuntimeModule::MSQUIC_VERSION__);
  return;
}

// `dynamic_initializer_for_'LogMsQuicRuntime'' @ 141450bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMsQuicRuntime__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMsQuicRuntime,L"LogMsQuicRuntime",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogMsQuicRuntime__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMsQuicRuntime'' @ 141450c30

void __cdecl _dynamic_initializer_for__ModuleRegistrantMsQuicRuntime__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "MsQuicRuntime";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"MsQuicRuntime",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMsQuicRuntimeModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14f040e20

void * __thiscall
FMsQuicRuntimeModule::_scalar_deleting_destructor_(FMsQuicRuntimeModule *this,uint param_1)

{
  *this = (FMsQuicRuntimeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_MsQuicRuntime @ 14f041200

void __cdecl IMPLEMENT_MODULE_MsQuicRuntime(void)

{
  return;
}

// MSQUIC_BINARIES_PATH'' @ 150471780

void __cdecl `dynamic_atexit_destructor_for_'FMsQuicRuntimeModule::MSQUIC_BINARIES_PATH__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FMsQuicRuntimeModule::MSQUIC_BINARIES_PATH.Data.AllocatorInstance.Data;
  if (FMsQuicRuntimeModule::MSQUIC_BINARIES_PATH.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FMsQuicRuntimeModule::MSQUIC_BINARIES_PATH.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// MSQUIC_VERSION'' @ 1504717a0

void __cdecl `dynamic_atexit_destructor_for_'FMsQuicRuntimeModule::MSQUIC_VERSION__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FMsQuicRuntimeModule::MSQUIC_VERSION.Data.AllocatorInstance.Data;
  if (FMsQuicRuntimeModule::MSQUIC_VERSION.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FMsQuicRuntimeModule::MSQUIC_VERSION.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogMsQuicRuntime'' @ 1504717c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMsQuicRuntime__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMsQuicRuntime);
  return;
}

