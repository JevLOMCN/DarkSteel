// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// Do @ 148eb53b0

void * __cdecl TGetDefaultObjectHelper<NDIDataTableLocal::FShaderStorage,0>::Do(void)

{
  return (void *)0x0;
}

// Do @ 148eb53c0

void * __cdecl TGetDefaultObjectHelper<NDISimCacheReaderLocal::FShaderStorage,0>::Do(void)

{
  return (void *)0x0;
}

// Do @ 148fa8db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl TGetDefaultObjectHelper<TResourceArray<UE::Math::TIntVector4<int>,0>,1>::Do(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_TResourceArray<UE::Math::TIntVector4<int>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TIntVector4<int>,0>_>(void)'
      ::__l3::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_TResourceArray<UE::Math::TIntVector4<int>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TIntVector4<int>,0>_>(void)'
                         ::__l3::_thread_safe_static_guard_0__);
    if (`class_TResourceArray<UE::Math::TIntVector4<int>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TIntVector4<int>,0>_>(void)'
        ::__l3::_thread_safe_static_guard_0__ == -1) {
      DAT_15526fc88 = 0;
      _DAT_15526fc78 = 0;
      _DAT_15526fc80 = 0;
      _Default = &___7__TResourceArray_U__TIntVector4_H_Math_UE___0A___6B_;
      atexit(`InternalGetDefaultObject<TResourceArray<UE::Math::TIntVector4<int>,0>_>'::__l3::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&`class_TResourceArray<UE::Math::TIntVector4<int>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TIntVector4<int>,0>_>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
      return &`class_TResourceArray<UE::Math::TIntVector4<int>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TIntVector4<int>,0>_>(void)'
              ::__l3::Default;
    }
  }
  return &`class_TResourceArray<UE::Math::TIntVector4<int>,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<UE::Math::TIntVector4<int>,0>_>(void)'
          ::__l3::Default;
}

// Do @ 149177ce0

void * __cdecl
TGetDefaultObjectHelper<FNiagaraDataInterfaceParametersCS_Grid2DCollection,0>::Do(void)

{
  return (void *)0x0;
}

// Do @ 149177cf0

void * __cdecl
TGetDefaultObjectHelper<FNiagaraDataInterfaceParametersCS_Grid3DCollection,0>::Do(void)

{
  return (void *)0x0;
}

// Do @ 1491bf2e0

void * __cdecl TGetDefaultObjectHelper<FNiagaraDataInterfaceParametersCS_ParticleRead,0>::Do(void)

{
  return (void *)0x0;
}

