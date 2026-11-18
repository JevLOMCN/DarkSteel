// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 5

// StaticStruct @ 148bed870

UScriptStruct * __cdecl FAutomationTestExcludeOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationTestExcludeOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationTest();
    Z_Registration_Info_UScriptStruct_FAutomationTestExcludeOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions,(UObject *)pUVar1,
                         L"AutomationTestExcludeOptions");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationTestExcludeOptions.OuterSingleton;
}

// GetAllRHIOptionNames<enum_ETEST_RHI_FeatureLevel_Options> @ 148bee870

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
FAutomationTestExcludeOptions::GetAllRHIOptionNames<enum_ETEST_RHI_FeatureLevel_Options>(void)

{
  code *pcVar1;
  UEnum *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar5;
  TTuple<FName,__int64> *pTVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  FLLMScope local_res8 [2];
  FName local_res10;
  FName local_res18;
  FMemScope local_res20;
  FString local_48;
  TTuple<FName,__int64> local_38;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar10 <
       `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
                    ::__l2::LLMScope_Name113,L"AutomationTest/Settings");
    _Init_thread_footer(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
             ::__l2::LLMScope_Name113,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
              ::__l2::LLMScope_Name113,true);
  if ((*piVar10 <
       `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    atexit(`FAutomationTestExcludeOptions::
           GetAllRHIOptionNames<enum_ETEST_RHI_FeatureLevel_Options>'::__l2::
           _dynamic_atexit_destructor_for__NameSet__);
    _Init_thread_footer(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if (DAT_154c71e18 == DAT_154c71e44) {
    if (Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton == (UEnum *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AutomationTest();
      Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options,
                         (UObject *)pUVar4,L"ETEST_RHI_FeatureLevel_Options");
    }
    pUVar2 = Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton;
    iVar9 = 0;
    iVar11 = ((Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton)->Names).
             NumValues + -1;
    if (0 < iVar11) {
      do {
        if (((pUVar2->Names).NumValues <= iVar9) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar1)();
          return pTVar5;
        }
        pTVar6 = UEnum::FNameData::operator[](&pUVar2->Names,&local_38,iVar9);
        if (*(int *)&pTVar6->field_0x8 == 0) {
          pwVar7 = L"SM5";
        }
        else if (*(int *)&pTVar6->field_0x8 == 1) {
          pwVar7 = L"SM6";
        }
        else {
          pwVar7 = L"Unknown";
        }
        ::FString::FString(&local_48,pwVar7);
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar8.Data = local_48.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res18,(wchar_t *)FVar8.Data);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                   &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
                    ::__l2::NameSet,&local_res10,(bool *)&local_res18);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar11);
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
         &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
          ::__l2::NameSet;
}

// operator() @ 148bf1f00

bool __thiscall
`FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::<lambda_1>::operator()
          (void *this,FName *param_1,FName *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FName::ToString(param_2,&local_18);
  pFVar3 = ::FName::ToString(param_1,&local_28);
  pwVar4 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// GetAllRHIOptionNamesFromSettings @ 148bf3950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)

{
  FScriptContainerElement *pFVar1;
  bool *pbVar2;
  ulonglong uVar3;
  int iVar4;
  UAutomationTestPlatformSettings *pUVar5;
  longlong lVar6;
  code *pcVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar8;
  bool bVar9;
  int iVar10;
  TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *pTVar11;
  UClass *pUVar12;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar13;
  FString *pFVar14;
  int iVar15;
  int *piVar16;
  bool *pbVar17;
  wchar_t *pwVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  wchar_t *pwVar21;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  undefined4 local_res20;
  FName local_98;
  UClass *local_90;
  undefined1 *local_88;
  FMemScope local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar16 <
       `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                    ::__l2::LLMScope_Name133,L"AutomationTest/Settings");
    _Init_thread_footer(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res18,
             `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
             ::__l2::LLMScope_Name133,false,None,Default,true);
  FMemScope::FMemScope
            (&local_80,
             &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
              ::__l2::LLMScope_Name133,true);
  if ((*piVar16 <
       `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    atexit(`FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l2::
           _dynamic_atexit_destructor_for__NameSet__);
    _Init_thread_footer(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if (DAT_154c71e68 == DAT_154c71e94) {
    local_90 = UAutomationTestExcludelistSettings::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_90);
    }
    pTVar11 = AutomationTestPlatform::GetAllPlatformsSettings
                        ((TSubclassOf<UAutomationTestPlatformSettings>)&local_90);
    pwVar21 = L"";
    pFVar19 = (pTVar11->AllocatorInstance).Data;
    iVar15 = pTVar11->ArrayNum;
    pFVar1 = pFVar19 + (longlong)iVar15 * 8;
    while( true ) {
      if (pTVar11->ArrayNum != iVar15) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<UAutomationTestPlatformSettings_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar19 == pFVar1) break;
      pUVar5 = *(UAutomationTestPlatformSettings **)pFVar19;
      if (pUVar5 == (UAutomationTestPlatformSettings *)0x0) {
        pFVar14 = GetTypeName<UAutomationTestExcludelistSettings>(&local_58);
        if ((pFVar14->Data).ArrayNum != 0) {
          pwVar21 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar21);
      }
      pUVar12 = UAutomationTestExcludelistSettings::StaticClass();
      iVar4 = (int)pUVar12->_padding_;
      if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar12->_padding_)) {
        pFVar14 = GetTypeName<UAutomationTestExcludelistSettings>(&local_78);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        pFVar14 = GetFullNameForCastLogError<UAutomationTestPlatformSettings>(&local_68,pUVar5);
        if ((pFVar14->Data).ArrayNum != 0) {
          pwVar21 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar21,pwVar18);
      }
      iVar4 = (int)pUVar5[1]._padding_;
      pbVar17 = (bool *)pUVar5[1]._padding_;
      if ((iVar4 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar7)();
        return pTVar13;
      }
      uVar20 = (iVar4 - DAT_154c71e94) + DAT_154c71e68;
      if ((uint)(DAT_154c71e68 - DAT_154c71e94) < uVar20) {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                      ::__l2::NameSet,uVar20);
        if (uVar20 < 4) {
          iVar10 = 1;
        }
        else {
          uVar3 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
          lVar6 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          local_res20 = (undefined4)lVar6;
          iVar10 = 1 << ((byte)lVar6 & 0x1f);
        }
        if ((DAT_154c71ea8 == 0) || (DAT_154c71ea8 < iVar10)) {
          DAT_154c71ea8 = iVar10;
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                     &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                      ::__l2::NameSet);
        }
      }
      pbVar2 = pbVar17 + (longlong)iVar4 * 8;
      for (; pbVar17 != pbVar2; pbVar17 = pbVar17 + 8) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                   &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                    ::__l2::NameSet,&local_98,pbVar17);
      }
      pFVar19 = pFVar19 + 8;
    }
    local_88 = local_res10;
    if (0 < DAT_154c71e68 - DAT_154c71e94) {
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Compact((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                    ::__l2::NameSet);
      pTVar8 = _NameSet;
      iVar15 = DAT_154c71e68 - DAT_154c71e94;
      if ((iVar15 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar7)();
        return pTVar13;
      }
      AlgoImpl::
      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings_::__l5::<lambda_1>_>_>_>
                (pTVar8,iVar15,local_res8[0],
                 (FElementCompareClass<_public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)_::_5_::<lambda_1>_>
                  *)&local_88);
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                ::__l2::NameSet);
  }
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(local_res18);
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
         &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
          ::__l2::NameSet;
}

// GetPlatformRHIOptionNamesFromSettings @ 148bf46e0

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName *param_1)

{
  bool *pbVar1;
  ulonglong uVar2;
  int iVar3;
  UAutomationTestPlatformSettings *pUVar4;
  undefined8 uVar5;
  FName FVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  void *pvVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *pTVar13;
  UClass *pUVar14;
  FString *pFVar15;
  int *piVar16;
  longlong lVar17;
  bool *pbVar18;
  wchar_t *pwVar19;
  uint uVar20;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  wchar_t *pwVar24;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  int local_res20 [2];
  undefined1 local_b4 [12];
  TKeyInitializer<FString_const_&> local_a8;
  FScriptContainerElement *local_a0;
  FMemScope local_98;
  FSparseArrayAllocationInfo local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar16 <
       `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                    ::__l2::LLMScope_Name149,L"AutomationTest/Settings");
    _Init_thread_footer(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res18,
             `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
             ::__l2::LLMScope_Name149,false,None,Default,true);
  FMemScope::FMemScope
            (&local_98,
             &`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
              ::__l2::LLMScope_Name149,true);
  if ((*piVar16 <
       `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    atexit(`FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings'::__l2::
           _dynamic_atexit_destructor_for__PlatformSettings__);
    _Init_thread_footer(&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if (`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
      ::__l2::PlatformSettings._8_4_ ==
      `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
      ::__l2::PlatformSettings._52_4_) {
    local_b4._4_8_ = UAutomationTestExcludelistSettings::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_b4._4_8_ != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_b4._4_8_);
    }
    pTVar13 = AutomationTestPlatform::GetAllPlatformsSettings
                        ((TSubclassOf<UAutomationTestPlatformSettings>)((longlong)local_b4 + 4));
    pwVar24 = L"";
    pFVar23 = (pTVar13->AllocatorInstance).Data;
    iVar22 = pTVar13->ArrayNum;
    local_a0 = pFVar23 + (longlong)iVar22 * 8;
    while( true ) {
      pFVar8 = local_a0;
      if (pTVar13->ArrayNum != iVar22) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UAutomationTestPlatformSettings_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar23 == pFVar8) break;
      pUVar4 = *(UAutomationTestPlatformSettings **)pFVar23;
      local_a8.Key = &pUVar4->PlatformName;
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                             ::__l2::PlatformSettings,&local_90);
      pvVar9 = local_90.Pointer;
      if (local_90.Pointer !=
          (TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>
           *)0x0) {
        TKeyInitializer<FString_const_&>::
        operator<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                  (&local_a8,local_90.Pointer);
        *(undefined4 *)((longlong)pvVar9 + 0x58) = 0xffffffff;
      }
      uVar5 = *(undefined8 *)pvVar9;
      local_res20[0] = local_90.Index;
      uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
      uVar11 = uVar11 + (int)((ulonglong)uVar5 >> 0x20);
      bVar10 = TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
               ::TryReplaceExisting
                         ((TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                           *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                              ::__l2::PlatformSettings,uVar11,pvVar9,local_res20,(bool *)0x0);
      lVar17 = (longlong)local_res20[0];
      if (!bVar10) {
        TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::RehashOrLink((TSet<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                           ::__l2::PlatformSettings,uVar11,pvVar9,local_res20[0]);
      }
      pTVar21 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                (`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                 ::__l2::PlatformSettings._0_8_ + 8 + lVar17 * 0x60);
      if (pUVar4 == (UAutomationTestPlatformSettings *)0x0) {
        pFVar15 = GetTypeName<UAutomationTestExcludelistSettings>(local_60);
        if ((pFVar15->Data).ArrayNum != 0) {
          pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar24);
      }
      pUVar14 = UAutomationTestExcludelistSettings::StaticClass();
      iVar3 = (int)pUVar14->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar14->_padding_)) {
        pFVar15 = GetTypeName<UAutomationTestExcludelistSettings>(&local_80);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        pFVar15 = GetFullNameForCastLogError<UAutomationTestPlatformSettings>(&local_70,pUVar4);
        if ((pFVar15->Data).ArrayNum != 0) {
          pwVar24 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar24,pwVar19);
      }
      iVar3 = (int)pUVar4[1]._padding_;
      pbVar18 = (bool *)pUVar4[1]._padding_;
      if ((iVar3 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar21 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar7)();
        return pTVar21;
      }
      uVar11 = *(int *)&(pTVar21->Elements).field_0x8 - *(int *)&(pTVar21->Elements).field_0x34;
      uVar20 = uVar11 + iVar3;
      if (uVar11 < uVar20) {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar20);
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar21,uVar20);
        if (uVar20 < 4) {
          iVar12 = 1;
        }
        else {
          uVar2 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar12 = 1 << ((byte)lVar17 & 0x1f);
        }
        if ((pTVar21->HashSize == 0) || (pTVar21->HashSize < iVar12)) {
          pTVar21->HashSize = iVar12;
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(pTVar21);
        }
      }
      pbVar1 = pbVar18 + (longlong)iVar3 * 8;
      for (; pbVar18 != pbVar1; pbVar18 = pbVar18 + 8) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (pTVar21,(FName *)local_b4,pbVar18);
      }
      pFVar23 = pFVar23 + 8;
    }
  }
  FVar6 = *param_1;
  uVar11 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
  uVar11 = uVar11 + FVar6.Number;
  if (`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
      ::__l2::PlatformSettings._8_4_ !=
      `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
      ::__l2::PlatformSettings._52_4_) {
    lVar17 = 0x154c71d58;
    if (`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
        ::__l2::PlatformSettings._64_8_ != 0) {
      lVar17 = `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
               ::__l2::PlatformSettings._64_8_;
    }
    iVar22 = *(int *)(lVar17 + (ulonglong)
                               (`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                                ::__l2::PlatformSettings._72_4_ - 1 & uVar11) * 4);
    if (iVar22 != -1) {
      do {
        if (*(FName *)((longlong)iVar22 * 0x60 +
                      `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                      ::__l2::PlatformSettings._0_8_) == *param_1) {
          if ((iVar22 != -1) &&
             (lVar17 = (longlong)iVar22 * 0x60 +
                       `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                       ::__l2::PlatformSettings._0_8_, lVar17 != 0)) {
            pTVar21 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar17 + 8);
            goto LAB_148bf4a41;
          }
          break;
        }
        iVar22 = *(int *)((longlong)iVar22 * 0x60 + 0x58 +
                         `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                         ::__l2::PlatformSettings._0_8_);
      } while (iVar22 != -1);
    }
  }
  pTVar21 = TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
            ::EmplaceByHash<FName_const_&>
                      ((TMapBase<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                        *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                           ::__l2::PlatformSettings,uVar11,param_1);
LAB_148bf4a41:
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_res18);
  return pTVar21;
}

