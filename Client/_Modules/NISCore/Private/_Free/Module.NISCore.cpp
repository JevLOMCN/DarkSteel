// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISCore
// Functions: 15

// ErrorState'' @ 141400660

void __cdecl `dynamic_initializer_for_'FNVImageUpscaler::ErrorState__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNVImageUpscaler::ErrorState__);
  return;
}

// `dynamic_initializer_for_'CVarNISEnable'' @ 141400680

void __cdecl _dynamic_initializer_for__CVarNISEnable__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNISEnable,L"r.NIS.Enable",local_res8,
             L"Enable/disable NIS upscaling and/or sharpening",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNISEnable__);
  return;
}

// `dynamic_initializer_for_'CVarNISUpscaling'' @ 1414006d0

void __cdecl _dynamic_initializer_for__CVarNISUpscaling__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNISUpscaling,L"r.NIS.Upscaling",local_res8,
             L"Enable NIS Upscaling. Also requires r.TemporalAA.Upscaler 0",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarNISUpscaling__);
  return;
}

// `dynamic_initializer_for_'LogNIS'' @ 141400720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNIS__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNIS,L"LogNIS",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNIS__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNISCore'' @ 141400760

void __cdecl _dynamic_initializer_for__ModuleRegistrantNISCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NISCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NISCore",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNISCoreModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14de51270

void * __thiscall FNISCoreModule::_scalar_deleting_destructor_(FNISCoreModule *this,uint param_1)

{
  FNVImageUpscaler *pFVar1;
  
  pFVar1 = (this->NISUpscaler).Ptr;
  if (pFVar1 != (FNVImageUpscaler *)0x0) {
    *pFVar1 = (FNVImageUpscaler)&___7ISceneViewFamilyExtention__6B_;
    ::operator_delete(pFVar1,8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NISViewExtension).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de51600

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNISViewExtension,SharedPointerInternals::DefaultDeleter<FNISViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNISViewExtension,SharedPointerInternals::DefaultDeleter<FNISViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de51640

void * __thiscall
FNISViewExtension::_scalar_deleting_destructor_(FNISViewExtension *this,uint param_1)

{
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de51680

void * __thiscall
FNVImageUpscaler::_scalar_deleting_destructor_(FNVImageUpscaler *this,uint param_1)

{
  *this = (FNVImageUpscaler)&___7ISceneViewFamilyExtention__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de516c0

void * __thiscall
ISpatialUpscaler::_scalar_deleting_destructor_(ISpatialUpscaler *this,uint param_1)

{
  *this = (ISpatialUpscaler)&___7ISceneViewFamilyExtention__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_NISCore @ 14de52190

void __cdecl IMPLEMENT_MODULE_NISCore(void)

{
  return;
}

// ErrorState'' @ 15045f7a0

void __cdecl `dynamic_atexit_destructor_for_'FNVImageUpscaler::ErrorState__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FNVImageUpscaler::ErrorState.IncompatibleUpscalerCVarNames.Data.AllocatorInstance.
               Data;
  if (FNVImageUpscaler::ErrorState.IncompatibleUpscalerCVarNames.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FNVImageUpscaler::ErrorState.IncompatibleUpscalerCVarNames.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CVarNISEnable'' @ 15045f7c0

void __cdecl _dynamic_atexit_destructor_for__CVarNISEnable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNISEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNISUpscaling'' @ 15045f7e0

void __cdecl _dynamic_atexit_destructor_for__CVarNISUpscaling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNISUpscaling);
  return;
}

// `dynamic_atexit_destructor_for_'LogNIS'' @ 15045f800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNIS__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNIS);
  return;
}

