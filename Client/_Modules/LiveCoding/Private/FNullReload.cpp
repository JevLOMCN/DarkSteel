// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveCoding
// Functions: 13

// GetEnableReinstancing @ 146cdb440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNullReload::GetEnableReinstancing(FNullReload *this,bool param_1)

{
  FString local_18;
  
  if ((param_1) && (this->bEnabledMessage == false)) {
    this->bEnabledMessage = true;
    this->bHasReinstancingOccurred = true;
    if (1 < (byte)LogLiveCoding._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_bool___cdecl_FNullReload::GetEnableReinstancing(bool)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogLiveCoding);
    }
    if (GEngine != (UEngine *)0x0) {
      ::FString::FString(&local_18,
                         `public:_virtual_bool___cdecl_FNullReload::GetEnableReinstancing(bool)const___ptr64'
                         ::__l5::Message);
      UEngine::AddOnScreenDebugMessage
                (GEngine,(ulong64)this->LiveCodingModule,__real_40a00000,FColor::Red,&local_18,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// GetNewClasses @ 146cdb990

TArray<UClass_*,TSizedDefaultAllocator<32>_> * __thiscall
FNullReload::GetNewClasses(FNullReload *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<UClass*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FNullReload::GetNewClasses(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<UClass*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FNullReload::GetNewClasses(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<UClass*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FNullReload::GetNewClasses(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FNullReload::GetNewClasses'::__l2::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&`public:_virtual_class_TArray<UClass*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FNullReload::GetNewClasses(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<UClass*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FNullReload::GetNewClasses(void)___ptr64'
          ::__l2::Empty;
}

// GetPrefix @ 146cdbbd0

wchar_t * __thiscall FNullReload::GetPrefix(FNullReload *this)

{
  return L"LIVECODING";
}

// GetReinstancedCDO @ 146cdbca0

UObject * __thiscall FNullReload::GetReinstancedCDO(FNullReload *this,UObject *param_1)

{
  return param_1;
}

// GetReinstancedCDO @ 146cdbcb0

UObject * __thiscall FNullReload::GetReinstancedCDO(FNullReload *this,UObject *param_1)

{
  return param_1;
}

// GetReinstancedClasses @ 146cdbcc0

TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_> *
__thiscall FNullReload::GetReinstancedClasses(FNullReload *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TMap<UClass*___ptr64,UClass*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*___ptr64,UClass*___ptr64,0>_>_const&___ptr64___cdecl_FNullReload::GetReinstancedClasses(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TMap<UClass*___ptr64,UClass*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*___ptr64,UClass*___ptr64,0>_>_const&___ptr64___cdecl_FNullReload::GetReinstancedClasses(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TMap<UClass*___ptr64,UClass*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*___ptr64,UClass*___ptr64,0>_>_const&___ptr64___cdecl_FNullReload::GetReinstancedClasses(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FNullReload::GetReinstancedClasses'::__l2::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&`public:_virtual_class_TMap<UClass*___ptr64,UClass*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*___ptr64,UClass*___ptr64,0>_>_const&___ptr64___cdecl_FNullReload::GetReinstancedClasses(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TMap<UClass_*,UClass_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>_>
          *)&`public:_virtual_class_TMap<UClass*___ptr64,UClass*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass*___ptr64,UClass*___ptr64,0>_>_const&___ptr64___cdecl_FNullReload::GetReinstancedClasses(void)___ptr64'
             ::__l2::Empty;
}

// GetType @ 146cdbe70

EActiveReloadType __thiscall FNullReload::GetType(FNullReload *this)

{
  return LiveCoding;
}

// NotifyChange @ 146cdf940

void __thiscall FNullReload::NotifyChange(FNullReload *this,UClass *param_1,UClass *param_2)

{
  return;
}

// NotifyChange @ 146cdf950

void __thiscall FNullReload::NotifyChange(FNullReload *this,UEnum *param_1,UEnum *param_2)

{
  return;
}

// NotifyChange @ 146cdf960

void __thiscall FNullReload::NotifyChange(FNullReload *this,UPackage *param_1,UPackage *param_2)

{
  return;
}

// NotifyChange @ 146cdf970

void __thiscall
FNullReload::NotifyChange(FNullReload *this,UScriptStruct *param_1,UScriptStruct *param_2)

{
  return;
}

// NotifyFunctionRemap @ 146cdf980

void __thiscall
FNullReload::NotifyFunctionRemap
          (FNullReload *this,_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_1,
          _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_2)

{
  return;
}

// Reinstance @ 146ce0a70

void __thiscall FNullReload::Reinstance(FNullReload *this)

{
  return;
}

