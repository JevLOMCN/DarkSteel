// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// CreateSpline @ 14358b410

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __cdecl UE::Geometry::Spline::FSplineTypeRegistry::CreateSpline(uint param_1)

{
  code *pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>
  *pTVar2;
  uint *puVar3;
  TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>
  *pTVar4;
  undefined8 uVar5;
  undefined4 in_register_0000000c;
  ISplineInterface *pIVar6;
  uint *puVar7;
  uint in_EDX;
  undefined1 *puVar8;
  uint uVar9;
  
  pIVar6 = (ISplineInterface *)CONCAT44(in_register_0000000c,param_1);
  lpCriticalSection = (LPCRITICAL_SECTION)GetRegistryLock();
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar2 = GetFactories();
  if (*(int *)&pTVar2->field_0x8 != *(int *)&pTVar2->field_0x34) {
    puVar8 = *(undefined1 **)&pTVar2->field_0x40;
    if (*(undefined1 **)&pTVar2->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &pTVar2->field_0x38;
    }
    uVar9 = *(uint *)(puVar8 + (ulonglong)(*(int *)&pTVar2->field_0x48 - 1U & in_EDX) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar9 * 0x50 + *(longlong *)pTVar2);
        if (*puVar3 == in_EDX) {
          if (uVar9 != 0xffffffff) {
            puVar7 = puVar3 + 4;
            if (puVar3 == (uint *)0x0) {
              puVar7 = (uint *)0x0;
            }
            if (puVar7 != (uint *)0x0) {
              Core::Private::Function::CheckCallable(*(void **)puVar7);
              pcVar1 = *(code **)puVar7;
              puVar3 = puVar7 + 4;
              if (*(uint **)(puVar7 + 10) != (uint *)0x0) {
                puVar3 = *(uint **)(puVar7 + 10);
              }
              uVar5 = (**(code **)(*(longlong *)puVar3 + 8))();
              (*pcVar1)(pIVar6,uVar5);
              goto LAB_14358b51f;
            }
          }
          break;
        }
        uVar9 = puVar3[0x10];
      } while (uVar9 != 0xffffffff);
    }
  }
  pTVar4 = GetIdToNames();
  if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
    puVar8 = *(undefined1 **)&pTVar4->field_0x40;
    if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &pTVar4->field_0x38;
    }
    uVar9 = *(uint *)(puVar8 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & in_EDX) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar9 * 0x30 + *(longlong *)pTVar4);
        if (*puVar3 == in_EDX) {
          puVar7 = puVar3 + 2;
          if (puVar3 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            if (2 < (byte)Spline::LogSpline._0_1_) {
              Logging::Private::BasicLog<3>
                        (&`public:_static_class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::CreateSpline(unsigned_int)'
                          ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
            }
            goto LAB_14358b51c;
          }
          break;
        }
        uVar9 = puVar3[10];
      } while (uVar9 != 0xffffffff);
    }
  }
  if (2 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<3>
              (&`public:_static_class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::CreateSpline(unsigned_int)'
                ::__l29::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
LAB_14358b51c:
  *pIVar6 = (ISplineInterface)0x0;
LAB_14358b51f:
  LeaveCriticalSection(lpCriticalSection);
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )pIVar6;
}

// GetFactories @ 1435b1040

TMap<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>
* __cdecl UE::Geometry::Spline::FSplineTypeRegistry::GetFactories(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TMap<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetFactories(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TMap<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetFactories(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TMap<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetFactories(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Geometry::Spline::FSplineTypeRegistry::GetFactories'::__l2::
             _dynamic_atexit_destructor_for__Factories__);
      _Init_thread_footer(&`private:_static_class_TMap<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetFactories(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TMap<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>
          *)&`private:_static_class_TMap<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetFactories(void)'
             ::__l2::Factories;
}

// GetIdToNames @ 1435b10b0

TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>
* __cdecl UE::Geometry::Spline::FSplineTypeRegistry::GetIdToNames(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetIdToNames(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetIdToNames(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetIdToNames(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Geometry::Spline::FSplineTypeRegistry::GetIdToNames'::__l2::
             _dynamic_atexit_destructor_for__IdToNames__);
      _Init_thread_footer(&`private:_static_class_TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetIdToNames(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>
          *)&`private:_static_class_TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetIdToNames(void)'
             ::__l2::IdToNames;
}

// GetRegistryLock @ 1435b2aa0

FWindowsRecursiveMutex * __cdecl UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`private:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock(void)'
                  ::__l2::RegistryLock,4000);
      atexit(`UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock'::__l2::
             _dynamic_atexit_destructor_for__RegistryLock__);
      _Init_thread_footer(&`private:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock(void)'
              ::__l2::RegistryLock;
    }
  }
  return &`private:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetRegistryLock(void)'
          ::__l2::RegistryLock;
}

// RegisterType @ 1435be930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Geometry::Spline::FSplineTypeRegistry::RegisterType
          (uint param_1,FString *param_2,FString *param_3,
          TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
          *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  TMap<unsigned_int,TTuple<FString,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>_>
  *pTVar4;
  uint *puVar5;
  TSet<TTuple<unsigned_int,TTuple<FString,FString>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>,FDefaultSetAllocator>
  *this;
  TSet<TTuple<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>,FDefaultSetAllocator>
  *pTVar6;
  TMap<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>_>
  *pTVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  FString *pFVar10;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [16];
  TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
  *local_68;
  TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
  *local_60;
  undefined1 local_58 [16];
  FString local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78._0_4_ = param_1;
  ::FString::FString((FString *)local_58,param_2);
  ::FString::FString(&local_48,param_3);
  lpCriticalSection = (LPCRITICAL_SECTION)GetRegistryLock();
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar4 = GetIdToNames();
  if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
    puVar9 = *(undefined1 **)&pTVar4->field_0x40;
    if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
      puVar9 = &pTVar4->field_0x38;
    }
    uVar2 = *(uint *)(puVar9 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & local_78._0_4_) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar2 * 0x30 + *(longlong *)pTVar4);
        if (*puVar5 == local_78._0_4_) {
          pFVar10 = (FString *)(puVar5 + 2);
          if (puVar5 == (uint *)0x0) {
            pFVar10 = (FString *)0x0;
          }
          if (pFVar10 != (FString *)0x0) {
            bVar1 = FSplineTypeId::CheckTypeIdConflict
                              (local_78._0_4_,param_2,param_3,pFVar10,pFVar10 + 1);
            if (bVar1) {
              LeaveCriticalSection(lpCriticalSection);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_58._0_8_);
              }
              if (*(longlong *)param_4 != 0) {
                plVar8 = (longlong *)&param_4->field_0x10;
                if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
                  plVar8 = *(longlong **)&param_4->field_0x28;
                }
                (**(code **)(*plVar8 + 0x10))();
              }
              return false;
            }
            pTVar7 = GetFactories();
            if (*(int *)&pTVar7->field_0x8 == *(int *)&pTVar7->field_0x34) goto LAB_1435beb78;
            puVar9 = *(undefined1 **)&pTVar7->field_0x40;
            if (*(undefined1 **)&pTVar7->field_0x40 == (undefined1 *)0x0) {
              puVar9 = &pTVar7->field_0x38;
            }
            iVar3 = *(int *)(puVar9 + (ulonglong)(*(int *)&pTVar7->field_0x48 - 1U & local_78._0_4_)
                                      * 4);
            if (iVar3 == -1) goto LAB_1435beb78;
            goto LAB_1435beb60;
          }
          break;
        }
        uVar2 = puVar5[10];
      } while (uVar2 != 0xffffffff);
    }
  }
  this = (TSet<TTuple<unsigned_int,TTuple<FString,FString>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>,FDefaultSetAllocator>
          *)GetIdToNames();
  local_68 = (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
              *)local_78;
  local_60 = (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
              *)local_58;
  TSet<TTuple<unsigned_int,TTuple<FString,FString>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TTuple<FString,FString>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TTuple<FString,FString>_const_&>_>
            (this,(TPairInitializer<unsigned_int_const_&,TTuple<FString,FString>_const_&> *)
                  (local_78 + 8),(bool *)&local_68);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId'::__l2::
           _dynamic_atexit_destructor_for__NamesToId__);
    _Init_thread_footer(&`private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_68 = (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
              *)local_58;
  local_60 = (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
              *)local_78;
  TSet<TTuple<TTuple<FString,FString>,unsigned_int>,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FString,FString>_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<TTuple<FString,FString>,unsigned_int>,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>,FDefaultSetAllocator>
              *)&`private:_static_class_TMap<TTuple<FString,FString>,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FString>,unsigned_int,0>_>&___ptr64___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::GetNamesToId(void)'
                 ::__l2::NamesToId,
             (TPairInitializer<TTuple<FString,FString>_const_&,unsigned_int_const_&> *)
             (local_78 + 8),(bool *)&local_68);
  pTVar6 = (TSet<TTuple<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>,FDefaultSetAllocator>
            *)GetFactories();
  local_68 = (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
              *)local_78;
  local_60 = param_4;
  TSet<TTuple<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_&&>_>
            (pTVar6,(TPairInitializer<unsigned_int_const_&,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_&&>
                     *)(local_78 + 8),(bool *)&local_68);
  if (4 < (byte)Spline::LogSpline._0_1_) {
    Logging::Private::BasicLog<5>
              (&`public:_static_bool___cdecl_UE::Geometry::Spline::FSplineTypeRegistry::RegisterType(unsigned_int,FString_const&___ptr64,FString_const&___ptr64,TFunction<class_TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>)'
                ::__l12::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
  }
  goto LAB_1435bebc7;
  while (iVar3 = *(int *)(*(longlong *)pTVar7 + 0x40 + (longlong)iVar3 * 0x50), iVar3 != -1) {
LAB_1435beb60:
    if (*(uint *)(*(longlong *)pTVar7 + (longlong)iVar3 * 0x50) == local_78._0_4_)
    goto LAB_1435bebc7;
  }
LAB_1435beb78:
  pTVar6 = (TSet<TTuple<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>,FDefaultSetAllocator>
            *)GetFactories();
  local_68 = (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
              *)local_78;
  local_60 = param_4;
  TSet<TTuple<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_&&>_>
            (pTVar6,(TPairInitializer<unsigned_int_const_&,TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>_&&>
                     *)(local_78 + 8),(bool *)&local_68);
LAB_1435bebc7:
  LeaveCriticalSection(lpCriticalSection);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (*(longlong *)param_4 != 0) {
    plVar8 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return true;
}

