// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 28

// `dynamic_initializer_for_'CVarAllowFlattenJsonObject'' @ 141443340

void __cdecl
IGlobalConfigurationRouter_Private::_dynamic_initializer_for__CVarAllowFlattenJsonObject__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowFlattenJsonObject,L"GCD.AllowFlattenJsonObject",&bAllowFlattenJsonObject,
             L"If enabled, assume that a json object with a single entry was auto flattened and accept the resulting value anyway."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowFlattenJsonObject__);
  return;
}

// `dynamic_initializer_for_'CVarMaxSearchResultsToReport'' @ 141443390

void __cdecl
IGlobalConfigurationRouter_Private::_dynamic_initializer_for__CVarMaxSearchResultsToReport__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxSearchResultsToReport,L"GCD.ShowParseErrorsAsWarning",
             &bShowParseErrorsAsWarning,
             L"If enabled, json parse errors will be logged as warnings, otherwise they are logged as verbose."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxSearchResultsToReport__);
  return;
}

// `dynamic_initializer_for_'LogGlobalConfigurationData'' @ 1414433e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGlobalConfigurationData__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogGlobalConfigurationData,L"LogGlobalConfigurationData",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogGlobalConfigurationData__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantGlobalConfigurationDataCore'' @ 141443420

void __cdecl _dynamic_initializer_for__ModuleRegistrantGlobalConfigurationDataCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "GlobalConfigurationDataCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"GlobalConfigurationDataCore",0x1b);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FGlobalConfigurationDataCoreModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'RegisterValueCommand'' @ 141443470

void __cdecl
GlobalConfigurationConfigRouter_Private::_dynamic_initializer_for__RegisterValueCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = RegisterValue;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&RegisterValueCommand,L"GCD.RegisterValue",
             L"Register a new value into the Global Configuration Data system that will override all others"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__RegisterValueCommand__);
  return;
}

// `dynamic_initializer_for_'RegisteredRouters'' @ 1414435b0

void __cdecl IGlobalConfigurationRouter_Private::_dynamic_initializer_for__RegisteredRouters__(void)

{
  atexit(_dynamic_atexit_destructor_for__RegisteredRouters__);
  return;
}

// `dynamic_initializer_for_'StoredData'' @ 1414435d0

void __cdecl GlobalConfigurationConfigRouter_Private::_dynamic_initializer_for__StoredData__(void)

{
  atexit(_dynamic_atexit_destructor_for__StoredData__);
  return;
}

// `dynamic_initializer_for_'UnregisterValueCommand'' @ 1414435f0

void __cdecl
GlobalConfigurationConfigRouter_Private::_dynamic_initializer_for__UnregisterValueCommand__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UnregisterValue;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&UnregisterValueCommand,L"GCD.UnregisterValue",
             L"Remove a value from the Global Configuration Data system that was overriding all others"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__UnregisterValueCommand__);
  return;
}

// `scalar_deleting_destructor' @ 14e9b5c60

void * __thiscall
FGlobalConfigurationDataCoreModule::_scalar_deleting_destructor_
          (FGlobalConfigurationDataCoreModule *this,uint param_1)

{
  IGlobalConfigurationRouter::~IGlobalConfigurationRouter
            ((IGlobalConfigurationRouter *)&this->ConsoleCommandRouter);
  FGlobalConfigurationConfigRouter::~FGlobalConfigurationConfigRouter
            (&this->HighPriorityConfigRouter);
  FGlobalConfigurationConfigRouter::~FGlobalConfigurationConfigRouter
            (&this->LowPriorityConfigRouter);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x128);
  }
  return this;
}

// HeapSortInternal<IGlobalConfigurationRouter_const_*,int,FIdentityFunctor,TDereferenceWrapper<IGlobalConfigurationRouter_const_*,`IGlobalConfigurationRouter::IGlobalConfigurationRouter'::__l2::<lambda_1>_>_> @ 14e9b6960

void __cdecl
AlgoImpl::
HeapSortInternal<IGlobalConfigurationRouter_const_*,int,FIdentityFunctor,TDereferenceWrapper<IGlobalConfigurationRouter_const_*,_IGlobalConfigurationRouter::IGlobalConfigurationRouter_::__l2::<lambda_1>_>_>
          (IGlobalConfigurationRouter **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<IGlobalConfigurationRouter_const_*,_public:___cdecl_IGlobalConfigurationRouter::IGlobalConfigurationRouter(FString_&&,int)_::_2_::<lambda_1>_>
          param_4)

{
  IGlobalConfigurationRouter *pIVar1;
  IGlobalConfigurationRouter *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_14e9b6ad8:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            pIVar1 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = pIVar1;
            iVar8 = 0;
            if (1 < iVar6) {
              do {
                iVar9 = iVar8 * 2;
                iVar5 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  pIVar1 = param_1[(longlong)iVar9 + 2];
                  pIVar2 = param_1[iVar5];
                  if ((pIVar1->Priority == pIVar2->Priority) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("LHS.Priority != RHS.Priority",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                                         ,0x39,L""), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (pIVar2->Priority < pIVar1->Priority) {
                    iVar5 = iVar9;
                  }
                  iVar5 = iVar5 + 1;
                }
                pIVar1 = param_1[iVar5];
                pIVar2 = param_1[iVar8];
                if ((pIVar2->Priority == pIVar1->Priority) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("LHS.Priority != RHS.Priority",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                                       ,0x39,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (pIVar2->Priority <= pIVar1->Priority) break;
                pIVar1 = param_1[iVar8];
                param_1[iVar8] = param_1[iVar5];
                param_1[iVar5] = pIVar1;
                iVar8 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      pIVar1 = param_1[(longlong)iVar6 + 2];
      pIVar2 = param_1[iVar7];
      if ((pIVar1->Priority == pIVar2->Priority) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LHS.Priority != RHS.Priority",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                             ,0x39,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pIVar2->Priority < pIVar1->Priority) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    pIVar1 = param_1[iVar7];
    pIVar2 = param_1[iVar5];
    if ((pIVar2->Priority == pIVar1->Priority) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LHS.Priority != RHS.Priority",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                           ,0x39,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pIVar2->Priority <= pIVar1->Priority) goto LAB_14e9b6ad8;
    pIVar1 = param_1[iVar5];
    param_1[iVar5] = param_1[iVar7];
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = pIVar1;
    iVar5 = iVar7;
  } while( true );
}

// IntroSortInternal<IGlobalConfigurationRouter_const_*,int,FIdentityFunctor,TDereferenceWrapper<IGlobalConfigurationRouter_const_*,`IGlobalConfigurationRouter::IGlobalConfigurationRouter'::__l2::<lambda_1>_>_> @ 14e9b6c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<IGlobalConfigurationRouter_const_*,int,FIdentityFunctor,TDereferenceWrapper<IGlobalConfigurationRouter_const_*,_IGlobalConfigurationRouter::IGlobalConfigurationRouter_::__l2::<lambda_1>_>_>
          (IGlobalConfigurationRouter **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<IGlobalConfigurationRouter_const_*,_public:___cdecl_IGlobalConfigurationRouter::IGlobalConfigurationRouter(FString_&&,int)_::_2_::<lambda_1>_>
          param_4)

{
  IGlobalConfigurationRouter *pIVar1;
  IGlobalConfigurationRouter *pIVar2;
  code *pcVar3;
  IGlobalConfigurationRouter **ppIVar4;
  bool bVar5;
  int iVar6;
  IGlobalConfigurationRouter **ppIVar7;
  IGlobalConfigurationRouter **ppIVar8;
  IGlobalConfigurationRouter ***pppIVar9;
  IGlobalConfigurationRouter **ppIVar10;
  IGlobalConfigurationRouter **ppIVar11;
  float fVar12;
  undefined1 auStack_3a8 [32];
  int local_388;
  IGlobalConfigurationRouter **local_380;
  IGlobalConfigurationRouter ***local_378;
  <lambda_1> *local_370;
  IGlobalConfigurationRouter **local_358;
  IGlobalConfigurationRouter **local_348;
  IGlobalConfigurationRouter **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_370 = param_4.Predicate;
    local_348 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar12;
    memset(local_330,0,0x2e8);
    pppIVar9 = &local_348;
    do {
      local_380 = pppIVar9[1];
      ppIVar7 = *pppIVar9;
      local_358 = pppIVar9[2];
      iVar6 = (int)((longlong)local_380 - (longlong)ppIVar7 >> 3) + 1;
      local_388 = (int)local_358;
      ppIVar8 = ppIVar7;
      local_378 = pppIVar9;
      if ((int)local_358 != 0) {
LAB_14e9b6d00:
        ppIVar4 = local_380;
        ppIVar7 = local_380;
        if (8 < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
          }
          ppIVar10 = local_380 + 1;
          pIVar1 = ppIVar8[iVar6 >> 1];
          ppIVar8[iVar6 >> 1] = *ppIVar8;
          *ppIVar8 = pIVar1;
          ppIVar7 = ppIVar8;
LAB_14e9b6d30:
          ppIVar7 = ppIVar7 + 1;
          if (ppIVar7 <= ppIVar4) goto code_r0x00014e9b6d39;
          goto LAB_14e9b6d80;
        }
        for (; ppIVar10 = ppIVar8, ppIVar4 = ppIVar8, ppIVar8 < ppIVar7; ppIVar7 = ppIVar7 + -1) {
          while (ppIVar11 = ppIVar10, ppIVar4 = ppIVar4 + 1, ppIVar4 <= ppIVar7) {
            pIVar1 = *ppIVar4;
            pIVar2 = *ppIVar11;
            if ((pIVar2->Priority == pIVar1->Priority) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LHS.Priority != RHS.Priority",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                                   ,0x39,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ppIVar10 = ppIVar4;
            if (pIVar2->Priority <= pIVar1->Priority) {
              ppIVar10 = ppIVar11;
            }
          }
          pIVar1 = *ppIVar11;
          *ppIVar11 = *ppIVar7;
          *ppIVar7 = pIVar1;
          param_4.Predicate = local_370;
          pppIVar9 = local_378;
        }
        goto LAB_14e9b6e9e;
      }
LAB_14e9b6e8d:
      HeapSortInternal<IGlobalConfigurationRouter_const_*,int,FIdentityFunctor,TDereferenceWrapper<IGlobalConfigurationRouter_const_*,_IGlobalConfigurationRouter::IGlobalConfigurationRouter_::__l2::<lambda_1>_>_>
                (ppIVar7,iVar6,param_3,param_4);
LAB_14e9b6e9e:
      pppIVar9 = pppIVar9 + -3;
    } while (&local_348 <= pppIVar9);
  }
  return;
code_r0x00014e9b6d39:
  pIVar1 = *ppIVar7;
  pIVar2 = *ppIVar8;
  if ((pIVar2->Priority == pIVar1->Priority) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LHS.Priority != RHS.Priority",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                         ,0x39,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pIVar2->Priority <= pIVar1->Priority) goto LAB_14e9b6d30;
LAB_14e9b6d80:
  do {
    ppIVar11 = ppIVar10;
    ppIVar10 = ppIVar11 + -1;
    if (ppIVar10 <= ppIVar8) break;
    pIVar1 = *ppIVar8;
    pIVar2 = *ppIVar10;
    if ((pIVar2->Priority == pIVar1->Priority) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("LHS.Priority != RHS.Priority",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GlobalConfigurationData\\Source\\GlobalConfigurationDataCore\\Private\\GlobalConfigurationRouter.cpp"
                           ,0x39,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  } while (pIVar2->Priority <= pIVar1->Priority);
  if (ppIVar7 <= ppIVar10) {
    pIVar1 = *ppIVar7;
    *ppIVar7 = *ppIVar10;
    *ppIVar10 = pIVar1;
    goto LAB_14e9b6d30;
  }
  pIVar1 = *ppIVar8;
  *ppIVar8 = *ppIVar10;
  local_388 = local_388 + -1;
  *ppIVar10 = pIVar1;
  param_4.Predicate = local_370;
  if ((longlong)((longlong)ppIVar10 + (-8 - (longlong)ppIVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppIVar4 - (longlong)ppIVar7 & 0xfffffffffffffff8U)) {
    if (ppIVar7 < local_380) {
      *pppIVar9 = ppIVar7;
      pppIVar9[1] = local_380;
      *(int *)(pppIVar9 + 2) = local_388;
      pppIVar9 = pppIVar9 + 3;
      local_378 = pppIVar9;
    }
    if (ppIVar10 <= ppIVar8 + 1) goto LAB_14e9b6e9e;
    local_380 = ppIVar11 + -2;
    ppIVar7 = ppIVar8;
  }
  else {
    if (ppIVar8 + 1 < ppIVar10) {
      *pppIVar9 = ppIVar8;
      pppIVar9[1] = ppIVar11 + -2;
      *(int *)(pppIVar9 + 2) = local_388;
      pppIVar9 = pppIVar9 + 3;
      local_378 = pppIVar9;
    }
    if (local_380 <= ppIVar7) goto LAB_14e9b6e9e;
  }
  iVar6 = (int)((longlong)local_380 - (longlong)ppIVar7 >> 3) + 1;
  ppIVar8 = ppIVar7;
  if (local_388 == 0) goto LAB_14e9b6e8d;
  goto LAB_14e9b6d00;
}

// `scalar_deleting_destructor' @ 14e9b7d70

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultDelegateUserPolicy,`FGlobalConfigurationConfigRouter::OnConfigSectionsChanged'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9b7da0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FGlobalConfigurationConfigRouter,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9b7dd0

void * __thiscall
FGlobalConfigurationConfigRouter::_scalar_deleting_destructor_
          (FGlobalConfigurationConfigRouter *this,uint param_1)

{
  ~FGlobalConfigurationConfigRouter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9b7e10

void * __thiscall
FGlobalConfigurationConsoleCommandRouter::_scalar_deleting_destructor_
          (FGlobalConfigurationConsoleCommandRouter *this,uint param_1)

{
  IGlobalConfigurationRouter::~IGlobalConfigurationRouter((IGlobalConfigurationRouter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9b7e50

void * __thiscall
IGlobalConfigurationRouter_Private::FStackJsonReader::_scalar_deleting_destructor_
          (FStackJsonReader *this,uint param_1)

{
  ~FStackJsonReader(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9b7e90

void * __thiscall
IGlobalConfigurationRouter_Private::FStackJsonWriter::_scalar_deleting_destructor_
          (FStackJsonWriter *this,uint param_1)

{
  TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>::
  ~TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_>
            ((TJsonStringWriter<TCondensedJsonPrintPolicy<wchar_t>_> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e9b7ed0

void * __thiscall
IGlobalConfigurationRouter::_scalar_deleting_destructor_
          (IGlobalConfigurationRouter *this,uint param_1)

{
  ~IGlobalConfigurationRouter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// RegisterValue @ 14e9b8e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
GlobalConfigurationConfigRouter_Private::RegisterValue
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FStaticLogRecord *pFVar4;
  FScriptContainerElement *pFVar5;
  TSharedPtr<FJsonValue,1> local_48;
  FJsonValue *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  FJsonValue **local_10;
  
  if (param_1->ArrayNum != 2) {
    if (5 < (byte)LogGlobalConfigurationData._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
                ((FLogCategoryBase *)&LogGlobalConfigurationData,&::LOG_Static);
      return;
    }
    return;
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  local_28.DataPtr = *(wchar_t **)(pFVar5 + 0x10);
  iVar1 = *(int *)(pFVar5 + 0x18);
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  IGlobalConfigurationRouter::TryParseString(&local_48,&local_28);
  if (local_48.Object == (FJsonValue *)0x0) {
    if ((byte)LogGlobalConfigurationData._0_1_ < 2) goto LAB_14e9b9104;
    if (param_1->ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (param_1->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    if (local_48.Object == (FJsonValue *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_38 = local_48.Object;
    pTStack_30 = local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_48.Object == (FJsonValue *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_18 = (param_1->AllocatorInstance).Data;
    local_10 = &local_38;
    TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_&&>_>
              ((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                *)&StoredData,
               (TPairInitializer<FString_const_&,TSharedRef<FJsonValue,1>_&&> *)&stack0x00000008,
               (bool *)&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
    if ((byte)LogGlobalConfigurationData._0_1_ < 6) goto LAB_14e9b9104;
    if (param_1->ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    if (param_1->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::
  LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&,FString_const_&>
            ((FLogCategoryBase *)&LogGlobalConfigurationData,pFVar4,
             (FString *)(param_1->AllocatorInstance).Data,(FString *)(pFVar5 + 0x10));
LAB_14e9b9104:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// UnregisterValue @ 14e9babd0

void __cdecl
GlobalConfigurationConfigRouter_Private::UnregisterValue
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  if (param_1->ArrayNum != 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (StoredData._8_4_ != StoredData._52_4_) {
      iVar5 = *(int *)&pFVar1[8].field_0x0 + -1;
      if (*(int *)&pFVar1[8].field_0x0 == 0) {
        pwVar6 = L"";
        iVar5 = 0;
      }
      else {
        pwVar6 = (wchar_t *)
                 (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->field_0x0)->
                 AllocatorInstance).Data;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
      TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
                  *)&StoredData,uVar4,(FString *)pFVar1);
    }
  }
  return;
}

// IMPLEMENT_MODULE_GlobalConfigurationDataCore @ 14e9bac80

void __cdecl IMPLEMENT_MODULE_GlobalConfigurationDataCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowFlattenJsonObject'' @ 15046c680

void __cdecl
IGlobalConfigurationRouter_Private::_dynamic_atexit_destructor_for__CVarAllowFlattenJsonObject__
          (void)

{
  CVarAllowFlattenJsonObject._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowFlattenJsonObject);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxSearchResultsToReport'' @ 15046c6a0

void __cdecl
IGlobalConfigurationRouter_Private::_dynamic_atexit_destructor_for__CVarMaxSearchResultsToReport__
          (void)

{
  CVarMaxSearchResultsToReport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxSearchResultsToReport);
  return;
}

// `dynamic_atexit_destructor_for_'LogGlobalConfigurationData'' @ 15046c6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGlobalConfigurationData__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGlobalConfigurationData);
  return;
}

// `dynamic_atexit_destructor_for_'RegisterValueCommand'' @ 15046c6e0

void __cdecl
GlobalConfigurationConfigRouter_Private::_dynamic_atexit_destructor_for__RegisterValueCommand__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&RegisterValueCommand);
  return;
}

// `dynamic_atexit_destructor_for_'RegisteredRouters'' @ 15046c700

void __cdecl
IGlobalConfigurationRouter_Private::_dynamic_atexit_destructor_for__RegisteredRouters__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RegisteredRouters.AllocatorInstance.Data;
  if (RegisteredRouters.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RegisteredRouters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StoredData'' @ 15046c720

void __cdecl
GlobalConfigurationConfigRouter_Private::_dynamic_atexit_destructor_for__StoredData__(void)

{
  StoredData._72_4_ = 0;
  if (StoredData._64_8_ != 0) {
    FMemory::Free((void *)StoredData._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&StoredData);
  return;
}

// `dynamic_atexit_destructor_for_'UnregisterValueCommand'' @ 15046c760

void __cdecl
GlobalConfigurationConfigRouter_Private::_dynamic_atexit_destructor_for__UnregisterValueCommand__
          (void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&UnregisterValueCommand);
  return;
}

