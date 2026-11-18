// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetNamesToId @ 147a52e20

TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>
* __cdecl UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId'::__l2::
             _dynamic_atexit_destructor_for__NamesToId__);
      _Init_thread_footer(&`private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>
          *)&`private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
             ::__l2::NamesToId;
}

// GetTypeId @ 147a5b0e0

uint __cdecl UE::Geometry::Spline::FSplineTypeRegistry::GetTypeId(FString *param_1,FString *param_2)

{
  ForAnyElementType FVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  TSet<TTuple<TTuple<FString,FString>,unsigned_int>,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>,FDefaultSetAllocator>
  *this;
  longlong lVar5;
  uint *puVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  undefined1 local_28 [16];
  FString local_18;
  
  ::FString::FString((FString *)local_28,param_1);
  ::FString::FString(&local_18,param_2);
  lpCriticalSection = (LPCRITICAL_SECTION)GetRegistryLock();
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    this = (TSet<TTuple<TTuple<FString,FString>,unsigned_int>,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>,FDefaultSetAllocator>
            *)GetNamesToId();
    pFVar7 = (FScriptContainerElement *)L"";
    if (local_28._8_4_ != 0) {
      pFVar7 = (FScriptContainerElement *)local_28._0_8_;
    }
    uVar8 = 0;
    iVar4 = local_28._8_4_ + -1;
    if (local_28._8_4_ == 0) {
      iVar4 = 0;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)pFVar7);
    iVar4 = local_18.Data.ArrayNum + -1;
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar1.Data);
    iVar4 = TSet<TTuple<TTuple<FString,FString>,unsigned_int>,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TTuple<FString,FString>_>
                      (this,uVar2 * 0x40 + (uVar2 >> 2) + uVar3 + 0x9e3779b9 ^ uVar2,
                       (TTuple<FString,FString> *)local_28);
    if (iVar4 != -1) {
      lVar5 = (longlong)iVar4 * 0x30 + *(longlong *)&this->Elements;
      puVar6 = (uint *)(lVar5 + 0x20);
      if (lVar5 == 0) {
        puVar6 = (uint *)0x0;
      }
      if (puVar6 != (uint *)0x0) {
        uVar8 = *puVar6;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

