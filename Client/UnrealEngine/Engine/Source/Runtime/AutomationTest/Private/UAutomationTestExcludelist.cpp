// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 26

// StaticClass @ 148bed130

UClass * __cdecl UAutomationTestExcludelist::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelist",
               &Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton,
               StaticRegisterNativesUAutomationTestExcludelist,0xd0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAutomationTestExcludelist>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelist>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton;
}

// UAutomationTestExcludelist @ 148bf18d0

UAutomationTestExcludelist * __thiscall
UAutomationTestExcludelist::UAutomationTestExcludelist
          (UAutomationTestExcludelist *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationTestExcludelist__6B_;
  *(undefined8 *)&this->Entries = 0;
  *(undefined8 *)&(this->Entries).field_0x8 = 0;
  *(undefined8 *)&(this->Entries).field_0x20 = 0;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Entries).field_0x40 = 0;
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  (this->DefaultConfig).field0_0x0.DebugPtr = (UAutomationTestExcludelistConfig *)0x0;
  *(undefined8 *)&this->PlatformConfigs = 0;
  *(undefined8 *)&(this->PlatformConfigs).field_0x8 = 0;
  *(undefined8 *)&(this->PlatformConfigs).field_0x20 = 0;
  *(undefined4 *)&(this->PlatformConfigs).field_0x28 = 0;
  *(undefined4 *)&(this->PlatformConfigs).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlatformConfigs).field_0x34 = 0;
  *(undefined4 *)&(this->PlatformConfigs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PlatformConfigs).field_0x40 = 0;
  *(undefined4 *)&(this->PlatformConfigs).field_0x48 = 0;
  return this;
}

// ~UAutomationTestExcludelist @ 148bf1d60

void __thiscall
UAutomationTestExcludelist::~UAutomationTestExcludelist(UAutomationTestExcludelist *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAutomationTestExcludelist__6B_;
  *(undefined4 *)&(this->PlatformConfigs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlatformConfigs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlatformConfigs);
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Entries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  UObject::~UObject((UObject *)this);
  return;
}

// AddToExcludeTest @ 148bf22e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAutomationTestExcludelist::AddToExcludeTest
          (UAutomationTestExcludelist *this,FString *param_1,
          FAutomationTestExcludelistEntry *param_2)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  FAutomationTestExcludelistEntry local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  FAutomationTestExcludelistEntry::FAutomationTestExcludelistEntry(&local_108,param_2);
  pFVar1 = ::FString::TrimStartAndEnd(param_1,(FString *)local_118);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)local_120,pwVar2);
  local_108.Test.ComparisonIndex.Value = local_120._0_4_;
  local_108.Test.Number = local_120._4_4_;
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  if (local_108.Map != (FName)0x0) {
    ::FName::FName((FName *)local_120,L"");
    local_108.Map.ComparisonIndex.Value = local_120._0_4_;
    local_108.Map.Number = local_120._4_4_;
  }
  FAutomationTestExcludelistEntry::Finalize(&local_108);
  local_118._0_8_ = &local_108;
  local_118._8_8_ = &local_108;
  TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&,FAutomationTestExcludelistEntry_&>_>
            ((TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
              *)&this->Entries,
             (TPairInitializer<FString_&,FAutomationTestExcludelistEntry_&> *)local_120,
             (bool *)local_118);
  local_120 = (undefined1  [8])local_128;
  TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>
            ((TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
              *)&this->Entries,
             (FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>
              *)local_120);
  local_108.RHIs.HashSize = 0;
  if (local_108.RHIs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.RHIs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.RHIs.Elements);
  local_108.Platforms.HashSize = 0;
  if (local_108.Platforms.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.Platforms.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.Platforms.Elements);
  if (local_108.FullTestName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.FullTestName.Data.AllocatorInstance.Data);
  }
  return;
}

// Get @ 148bf2e70

UAutomationTestExcludelist * __cdecl UAutomationTestExcludelist::Get(void)

{
  UAutomationTestExcludelistConfig *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UAutomationTestExcludelist *pUVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  void *local_28 [2];
  void *local_18 [2];
  
  pUVar4 = StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar5 = (UAutomationTestExcludelist *)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar5->DefaultConfig).field0_0x0.DebugPtr == (UAutomationTestExcludelistConfig *)0x0) {
    pUVar4 = UAutomationTestExcludelistConfig::StaticClass();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    pwVar9 = L"";
    pUVar1 = (UAutomationTestExcludelistConfig *)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar1 == (UAutomationTestExcludelistConfig *)0x0)) {
      (pUVar5->DefaultConfig).field0_0x0.DebugPtr = pUVar1;
      if (pUVar1 == (UAutomationTestExcludelistConfig *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("nullptr != DefaultConfig",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationTest\\Private\\AutomationTestExcludelist.cpp"
                           ,0x83,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UAutomationTestExcludelist *)(*pcVar2)();
          return pUVar5;
        }
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
      (pUVar5->DefaultConfig).field0_0x0.DebugPtr = pUVar1;
    }
    if (*(int *)&(pUVar5->PlatformConfigs).field_0x8 ==
        *(int *)&(pUVar5->PlatformConfigs).field_0x34) {
      LoadPlatformConfigs(pUVar5);
      PopulateEntries(pUVar5);
    }
    pUVar1 = (pUVar5->DefaultConfig).field0_0x0.DebugPtr;
    pwVar8 = L"";
    if (TicketTrackerURLHashtagPropertyName.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)TicketTrackerURLHashtagPropertyName.Data.AllocatorInstance.Data;
    }
    puVar6 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,local_28);
    if (*(int *)(puVar6 + 1) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)*puVar6;
    }
    FConfigCacheIni::GetString(GConfig,pwVar7,pwVar8,&pUVar1->TaskTrackerURLHashtag,&GEngineIni);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    pwVar8 = L"";
    if (TicketTrackerURLBasePropertyName.Data.ArrayNum != 0) {
      pwVar8 = (wchar_t *)TicketTrackerURLBasePropertyName.Data.AllocatorInstance.Data;
    }
    puVar6 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,local_18);
    if (*(int *)(puVar6 + 1) != 0) {
      pwVar9 = (wchar_t *)*puVar6;
    }
    FConfigCacheIni::GetString(GConfig,pwVar9,pwVar8,&pUVar1->TaskTrackerURLBase,&GEngineIni);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return pUVar5;
}

// GetBeautifiedTaskTrackerTicketTagSuffix @ 148bf3d50

FString * __thiscall
UAutomationTestExcludelist::GetBeautifiedTaskTrackerTicketTagSuffix
          (UAutomationTestExcludelist *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&DefaultTaskTrackerTagSuffix,L"unknown");
      atexit(`UAutomationTestExcludelist::GetBeautifiedTaskTrackerTicketTagSuffix'::__l2::
             _dynamic_atexit_destructor_for__DefaultTaskTrackerTagSuffix__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     &((this->DefaultConfig).field0_0x0.DebugPtr)->TaskTrackerURLHashtag);
  ::FString::TrimStartAndEndInline(__return_storage_ptr__);
  _Src = DefaultTaskTrackerTagSuffix.Data.AllocatorInstance;
  if (((__return_storage_ptr__->Data).ArrayNum < 2) &&
     (__return_storage_ptr__ != &DefaultTaskTrackerTagSuffix)) {
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    iVar2 = DefaultTaskTrackerTagSuffix.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return __return_storage_ptr__;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,*piVar1,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
    }
  }
  return __return_storage_ptr__;
}

// GetConfigFilename @ 148bf3e80

FString * __thiscall
UAutomationTestExcludelist::GetConfigFilename
          (UAutomationTestExcludelist *this,FString *__return_storage_ptr__)

{
  UObject::GetDefaultConfigFilename
            ((UObject *)(this->DefaultConfig).field0_0x0.DebugPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConfigFilenameForEntry @ 148bf3ed0

FString * __thiscall
UAutomationTestExcludelist::GetConfigFilenameForEntry
          (UAutomationTestExcludelist *this,FString *__return_storage_ptr__,
          FAutomationTestExcludelistEntry *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TObjectPtr<UAutomationTestExcludelistConfig>_u_0 *pTVar5;
  int *piVar6;
  uint uVar7;
  FName *pFVar8;
  FName *pFVar9;
  int *piVar10;
  bool bVar11;
  FName local_res10;
  
  ::FName::FName(&local_res10,"Windows");
  if (*(int *)&(param_1->Platforms).Elements.field_0x8 ==
      *(int *)&(param_1->Platforms).Elements.field_0x34) {
    UObject::GetDefaultConfigFilename
              ((UObject *)(this->DefaultConfig).field0_0x0.DebugPtr,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pTVar5 = &TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
                    *)&this->PlatformConfigs,local_res10)->field0_0x0;
  if (pTVar5 == (TObjectPtr<UAutomationTestExcludelistConfig>_u_0 *)0x0) {
    pFVar9 = (FName *)0x0;
    if (*(int *)&(param_1->Platforms).Elements.field_0x34 == 0) {
      iVar4 = *(int *)&(param_1->Platforms).Elements.field_0x8 + -1;
    }
    else {
      piVar10 = *(int **)&(param_1->Platforms).Elements.field_0x20;
      iVar2 = *(int *)&(param_1->Platforms).Elements.field_0x28;
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)&(param_1->Platforms).Elements.field_0x10;
      }
      uVar1 = iVar2 + 0x1f;
      piVar6 = piVar10;
      pFVar8 = pFVar9;
      if (uVar1 >> 5 != 0) {
LAB_148bf3f88:
        if (*piVar6 == 0) goto code_r0x000148bf3f8d;
        iVar3 = 0;
        bVar11 = piVar10[(longlong)pFVar8] != 0;
        if (bVar11) {
          for (; ((uint)piVar10[(longlong)pFVar8] >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        iVar4 = 0x20;
        if (bVar11) {
          iVar4 = iVar3;
        }
        iVar4 = iVar4 + (int)pFVar8 * 0x20;
        if (iVar2 <= iVar4) goto LAB_148bf3fb2;
        goto LAB_148bf3fb7;
      }
LAB_148bf3fb2:
      iVar4 = -1;
    }
LAB_148bf3fb7:
    if (iVar4 != -1) {
      pFVar9 = (FName *)((longlong)iVar4 * 0x10 + *(longlong *)&(param_1->Platforms).Elements);
    }
    pTVar5 = &TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
                      *)&this->PlatformConfigs,*pFVar9)->field0_0x0;
    if (pTVar5 == (TObjectPtr<UAutomationTestExcludelistConfig>_u_0 *)0x0) {
      ::FString::FString(__return_storage_ptr__,L"");
      return __return_storage_ptr__;
    }
  }
  UObject::GetDefaultConfigFilename((UObject *)pTVar5->DebugPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
code_r0x000148bf3f8d:
  uVar7 = (int)pFVar8 + 1;
  piVar6 = piVar6 + 1;
  pFVar8 = (FName *)(ulonglong)uVar7;
  if ((int)(uVar1 >> 5) <= (int)uVar7) goto LAB_148bf3fb2;
  goto LAB_148bf3f88;
}

// GetConfigFilenameForEntry @ 148bf4010

FString * __thiscall
UAutomationTestExcludelist::GetConfigFilenameForEntry
          (UAutomationTestExcludelist *this,FString *__return_storage_ptr__,
          FAutomationTestExcludelistEntry *param_1,FName *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TObjectPtr<UAutomationTestExcludelistConfig>_u_0 *pTVar5;
  int *piVar6;
  uint uVar7;
  FName *pFVar8;
  FName *pFVar9;
  int *piVar10;
  bool bVar11;
  
  if (*(int *)&(param_1->Platforms).Elements.field_0x8 ==
      *(int *)&(param_1->Platforms).Elements.field_0x34) {
    UObject::GetDefaultConfigFilename
              ((UObject *)(this->DefaultConfig).field0_0x0.DebugPtr,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pTVar5 = &TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
                    *)&this->PlatformConfigs,*param_2)->field0_0x0;
  if (pTVar5 == (TObjectPtr<UAutomationTestExcludelistConfig>_u_0 *)0x0) {
    pFVar9 = (FName *)0x0;
    if (*(int *)&(param_1->Platforms).Elements.field_0x34 == 0) {
      iVar4 = *(int *)&(param_1->Platforms).Elements.field_0x8 + -1;
    }
    else {
      piVar10 = *(int **)&(param_1->Platforms).Elements.field_0x20;
      iVar2 = *(int *)&(param_1->Platforms).Elements.field_0x28;
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)&(param_1->Platforms).Elements.field_0x10;
      }
      uVar1 = iVar2 + 0x1f;
      piVar6 = piVar10;
      pFVar8 = pFVar9;
      if (uVar1 >> 5 != 0) {
LAB_148bf40b0:
        if (*piVar6 == 0) goto code_r0x000148bf40b5;
        iVar3 = 0;
        bVar11 = piVar10[(longlong)pFVar8] != 0;
        if (bVar11) {
          for (; ((uint)piVar10[(longlong)pFVar8] >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        iVar4 = 0x20;
        if (bVar11) {
          iVar4 = iVar3;
        }
        iVar4 = iVar4 + (int)pFVar8 * 0x20;
        if (iVar2 <= iVar4) goto LAB_148bf40da;
        goto LAB_148bf40df;
      }
LAB_148bf40da:
      iVar4 = -1;
    }
LAB_148bf40df:
    if (iVar4 != -1) {
      pFVar9 = (FName *)((longlong)iVar4 * 0x10 + *(longlong *)&(param_1->Platforms).Elements);
    }
    pTVar5 = &TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
                      *)&this->PlatformConfigs,*pFVar9)->field0_0x0;
    if (pTVar5 == (TObjectPtr<UAutomationTestExcludelistConfig>_u_0 *)0x0) {
      ::FString::FString(__return_storage_ptr__,L"");
      return __return_storage_ptr__;
    }
  }
  UObject::GetDefaultConfigFilename((UObject *)pTVar5->DebugPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
code_r0x000148bf40b5:
  uVar7 = (int)pFVar8 + 1;
  piVar6 = piVar6 + 1;
  pFVar8 = (FName *)(ulonglong)uVar7;
  if ((int)(uVar1 >> 5) <= (int)uVar7) goto LAB_148bf40da;
  goto LAB_148bf40b0;
}

// GetConfigTaskTrackerHashtag @ 148bf4150

FString * __thiscall
UAutomationTestExcludelist::GetConfigTaskTrackerHashtag
          (UAutomationTestExcludelist *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     &((this->DefaultConfig).field0_0x0.DebugPtr)->TaskTrackerURLHashtag);
  return __return_storage_ptr__;
}

// GetExcludeTestEntry @ 148bf4190

FAutomationTestExcludelistEntry * __thiscall
UAutomationTestExcludelist::GetExcludeTestEntry(UAutomationTestExcludelist *this,FString *param_1)

{
  FAutomationTestExcludelistEntry *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UAutomationTestExcludelist::GetExcludeTestEntry'::__l2::
             _dynamic_atexit_destructor_for__EmptySet__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = GetExcludeTestEntry(this,param_1,&::None,&EmptySet);
  return pFVar1;
}

// GetExcludeTestEntry @ 148bf4220

FAutomationTestExcludelistEntry * __thiscall
UAutomationTestExcludelist::GetExcludeTestEntry
          (UAutomationTestExcludelist *this,FString *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  FAutomationTestExcludelistEntry *pFVar1;
  FName local_res20;
  
  ::FName::FName(&local_res20,"Windows");
  pFVar1 = GetExcludeTestEntry(this,param_1,&local_res20,param_2);
  return pFVar1;
}

// GetExcludeTestEntry @ 148bf4280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FAutomationTestExcludelistEntry * __thiscall
UAutomationTestExcludelist::GetExcludeTestEntry
          (UAutomationTestExcludelist *this,FString *param_1,FName *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *pTVar7;
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  schar sVar11;
  FString *pFVar12;
  FAutomationTestExcludelistEntry *pFVar13;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar14;
  int iVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  uint *puVar26;
  undefined1 auStack_168 [32];
  undefined1 local_148 [4];
  int local_144;
  FAutomationTestExcludelistEntry *local_140;
  FString local_138;
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *local_f8;
  FName *local_f0;
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FString local_b8;
  FString local_a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar6 = false;
  iVar24 = 0;
  local_144 = 0;
  if ((param_1->Data).ArrayNum < 2) {
    return (FAutomationTestExcludelistEntry *)0x0;
  }
  local_f0 = param_2;
  pFVar12 = ::FString::TrimStartAndEnd(param_1,&local_b8);
  ::FString::ToLower(pFVar12,&local_138);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  iVar15 = *(int *)&(this->Entries).field_0x28;
  puVar1 = &(this->Entries).field_0x10;
  local_140 = (FAutomationTestExcludelistEntry *)0x0;
  local_128 = &this->Entries;
  uStack_11c = 1;
  local_108 = 0;
  iStack_10c = iVar24;
  if (iVar15 != 0) {
    puVar26 = *(uint **)&(this->Entries).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar23 = *puVar26;
    iVar24 = 0;
    while (uVar23 == 0) {
      lVar16 = (longlong)iVar24;
      local_108 = local_108 + 0x20;
      iVar24 = iVar24 + 1;
      iStack_10c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_148bf438f;
      uVar23 = puVar26[lVar16 + 1];
    }
    uStack_11c = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_11c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_144 = (int)lVar16;
    iStack_10c = local_108 + -1 + local_144;
    if (iVar15 < iStack_10c) {
      iStack_10c = iVar15;
    }
  }
LAB_148bf438f:
  iStack_100 = *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34;
  uVar23 = *(uint *)&(this->Entries).field_0x28;
  uStack_110 = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_11c,iVar24);
  uVar21 = uVar23 & 0xffffffe0;
  TStack_e0.CurrentBitIndex = iStack_10c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar23 >> 5;
  TStack_e0._28_4_ = iStack_10c;
  TStack_e0.BaseBitIndex = local_108;
  uStack_c0 = CONCAT44(uStack_fc,iStack_100);
  iStack_120 = iVar24;
  local_118 = puVar1;
  iStack_104 = iStack_10c;
  local_f8 = local_128;
  local_e8 = local_128;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar15 < (int)uVar23)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FAutomationTestExcludelistEntry *)(*pcVar5)();
    return pFVar13;
  }
  pTVar7 = local_f8;
  uVar3 = *(uint *)&(this->Entries).field_0x28;
  if (uVar23 != uVar3) {
    puVar25 = *(undefined1 **)&(this->Entries).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar19 * 4);
    while (uVar23 == 0) {
      lVar16 = (longlong)iVar19;
      uVar21 = uVar21 + 0x20;
      iVar19 = iVar19 + 1;
      uVar23 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_148bf4491;
      uVar23 = *(uint *)(puVar25 + lVar16 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar23 = (int)lVar16 + -1 + uVar21;
    if ((int)uVar3 < (int)uVar23) {
      uVar23 = uVar3;
    }
  }
LAB_148bf4491:
  do {
    pTVar8 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (((TStack_e0.CurrentBitIndex == uVar23) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pFVar13 = local_140, pTVar8 == pTVar7)) goto LAB_148bf4685;
    bVar9 = false;
    puVar20 = (undefined8 *)(*(longlong *)pTVar8 + (longlong)TStack_e0.CurrentBitIndex * 0xf0);
    iVar24 = *(int *)(puVar20 + 1) + -1;
    if (*(int *)(puVar20 + 1) == 0) {
      iVar24 = 0;
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)*puVar20;
    }
    bVar10 = ::FString::StartsWith(&local_138,pwVar17,iVar24,IgnoreCase);
    if (bVar10) {
      iVar24 = *(int *)(puVar20 + 1) + -1;
      if (*(int *)(puVar20 + 1) == 0) {
        iVar24 = 0;
      }
      iVar15 = local_138.Data.ArrayNum + -1;
      if (local_138.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      if (iVar15 == iVar24) {
LAB_148bf455f:
        bVar9 = true;
      }
      else {
        bVar6 = true;
        pFVar12 = ::FString::Mid(&local_138,&local_a8,iVar24,1);
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        iVar24 = FGenericPlatformStricmp::Stricmp(pwVar17,L".");
        if (iVar24 == 0) goto LAB_148bf455f;
      }
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        FVar4 = *local_f0;
        if ((FVar4 == (FName)0x0) || (*(int *)(puVar20 + 6) == *(int *)((longlong)puVar20 + 0x5c)))
        {
LAB_148bf45f7:
          if (*(int *)(puVar20 + 0x13) == *(int *)((longlong)puVar20 + 0xc4)) {
LAB_148bf4681:
            pFVar13 = (FAutomationTestExcludelistEntry *)(puVar20 + 2);
LAB_148bf4685:
            if (local_138.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return pFVar13;
            }
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
            return pFVar13;
          }
          if (*(int *)&(param_3->Elements).field_0x8 == *(int *)&(param_3->Elements).field_0x34) {
            local_140 = (FAutomationTestExcludelistEntry *)(puVar20 + 2);
          }
          else {
            pTVar14 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Intersect
                                (param_3,&local_98,
                                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                                 (puVar20 + 0x12));
            cVar22 = (pTVar14->Elements).field_0x8 - (pTVar14->Elements).field_0x34;
            local_98.HashSize = 0;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_98.Elements);
            if (('\0' < cVar22) &&
               (sVar11 = FAutomationTestExcludelistEntry::NumRHIType
                                   ((FAutomationTestExcludelistEntry *)(puVar20 + 2)),
               cVar22 == sVar11)) goto LAB_148bf4681;
          }
        }
        else {
          uVar21 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
          if (*(int *)(puVar20 + 6) != *(int *)((longlong)puVar20 + 0x5c)) {
            puVar18 = puVar20 + 0xc;
            if ((undefined8 *)puVar20[0xd] != (undefined8 *)0x0) {
              puVar18 = (undefined8 *)puVar20[0xd];
            }
            iVar24 = *(int *)((longlong)puVar18 +
                             (ulonglong)(*(int *)(puVar20 + 0xe) - 1U & FVar4.Number + uVar21) * 4);
            if (iVar24 != -1) {
              do {
                if (*(FName *)(puVar20[5] + (longlong)iVar24 * 0x10) == FVar4) goto LAB_148bf45f7;
                iVar24 = *(int *)(puVar20[5] + 8 + (longlong)iVar24 * 0x10);
              } while (iVar24 != -1);
            }
          }
        }
      }
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// GetPrivateStaticClass @ 148bf4ba0

UClass * __cdecl UAutomationTestExcludelist::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelist",
               &Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton,
               StaticRegisterNativesUAutomationTestExcludelist,0xd0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAutomationTestExcludelist>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelist>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton;
}

// GetTaskTrackerName @ 148bf5000

FString * __thiscall
UAutomationTestExcludelist::GetTaskTrackerName
          (UAutomationTestExcludelist *this,FString *__return_storage_ptr__)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  int iVar6;
  
  GetBeautifiedTaskTrackerTicketTagSuffix(this,__return_storage_ptr__);
  iVar2 = (__return_storage_ptr__->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  uVar1 = *(ushort *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
  iVar2 = (__return_storage_ptr__->Data).ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  *(ushort *)(__return_storage_ptr__->Data).AllocatorInstance.Data =
       uVar1 - (-(ushort)(uVar1 - 0x61 < 0x1a) & 0x20);
  return __return_storage_ptr__;
}

// GetTaskTrackerTicketTag @ 148bf50e0

FString * __thiscall
UAutomationTestExcludelist::GetTaskTrackerTicketTag
          (UAutomationTestExcludelist *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = GetBeautifiedTaskTrackerTicketTagSuffix(this,&local_18);
  ::FString::ConcatCF(__return_storage_ptr__,L"#",pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTaskTrackerURLBase @ 148bf5130

FString * __thiscall
UAutomationTestExcludelist::GetTaskTrackerURLBase
          (UAutomationTestExcludelist *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     &((this->DefaultConfig).field0_0x0.DebugPtr)->TaskTrackerURLBase);
  return __return_storage_ptr__;
}

// Initialize @ 148bf5160

void __thiscall UAutomationTestExcludelist::Initialize(UAutomationTestExcludelist *this)

{
  UAutomationTestExcludelistConfig *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *this_00;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  void *local_28 [2];
  void *local_18 [2];
  
  this_00 = UAutomationTestExcludelistConfig::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pwVar6 = L"";
  pUVar1 = (UAutomationTestExcludelistConfig *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar1 == (UAutomationTestExcludelistConfig *)0x0)) {
    (this->DefaultConfig).field0_0x0.DebugPtr = pUVar1;
    if (pUVar1 == (UAutomationTestExcludelistConfig *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DefaultConfig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationTest\\Private\\AutomationTestExcludelist.cpp"
                         ,0x83,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->DefaultConfig).field0_0x0.DebugPtr = pUVar1;
  }
  if (*(int *)&(this->PlatformConfigs).field_0x8 == *(int *)&(this->PlatformConfigs).field_0x34) {
    LoadPlatformConfigs(this);
    PopulateEntries(this);
  }
  pUVar1 = (this->DefaultConfig).field0_0x0.DebugPtr;
  pwVar7 = L"";
  if (TicketTrackerURLHashtagPropertyName.Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)TicketTrackerURLHashtagPropertyName.Data.AllocatorInstance.Data;
  }
  puVar4 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,local_28);
  if (*(int *)(puVar4 + 1) == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)*puVar4;
  }
  FConfigCacheIni::GetString(GConfig,pwVar5,pwVar7,&pUVar1->TaskTrackerURLHashtag,&GEngineIni);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  pwVar7 = L"";
  if (TicketTrackerURLBasePropertyName.Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)TicketTrackerURLBasePropertyName.Data.AllocatorInstance.Data;
  }
  puVar4 = (undefined8 *)(**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,local_18);
  if (*(int *)(puVar4 + 1) != 0) {
    pwVar6 = (wchar_t *)*puVar4;
  }
  FConfigCacheIni::GetString(GConfig,pwVar6,pwVar7,&pUVar1->TaskTrackerURLBase,&GEngineIni);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// IsTestExcluded @ 148bf5b40

bool __thiscall
UAutomationTestExcludelist::IsTestExcluded(UAutomationTestExcludelist *this,FString *param_1)

{
  FAutomationTestExcludelistEntry *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UAutomationTestExcludelist::IsTestExcluded'::__l2::
             _dynamic_atexit_destructor_for__EmptySet__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = GetExcludeTestEntry(this,param_1,&::None,&EmptySet);
  return pFVar1 != (FAutomationTestExcludelistEntry *)0x0;
}

// IsTestExcluded @ 148bf5be0

bool __thiscall
UAutomationTestExcludelist::IsTestExcluded
          (UAutomationTestExcludelist *this,FString *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,FName *param_3,
          bool *param_4)

{
  bool bVar1;
  FAutomationTestExcludelistEntry *pFVar2;
  FName local_18 [2];
  
  ::FName::FName(local_18,"Windows");
  pFVar2 = GetExcludeTestEntry(this,param_1,local_18,param_2);
  bVar1 = false;
  if (pFVar2 != (FAutomationTestExcludelistEntry *)0x0) {
    if (param_3 != (FName *)0x0) {
      *param_3 = pFVar2->Reason;
    }
    if (param_4 != (bool *)0x0) {
      *param_4 = pFVar2->Warn;
    }
    bVar1 = true;
  }
  return bVar1;
}

// IsTestExcluded @ 148bf5c70

bool __thiscall
UAutomationTestExcludelist::IsTestExcluded
          (UAutomationTestExcludelist *this,FString *param_1,FName *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3,FName *param_4,
          bool *param_5)

{
  FAutomationTestExcludelistEntry *pFVar1;
  
  pFVar1 = GetExcludeTestEntry(this,param_1,param_2,param_3);
  if (pFVar1 != (FAutomationTestExcludelistEntry *)0x0) {
    if (param_4 != (FName *)0x0) {
      *param_4 = pFVar1->Reason;
    }
    if (param_5 != (bool *)0x0) {
      *param_5 = pFVar1->Warn;
    }
    return true;
  }
  return false;
}

// LoadPlatformConfigs @ 148bf5d00

void __thiscall UAutomationTestExcludelist::LoadPlatformConfigs(UAutomationTestExcludelist *this)

{
  undefined1 *puVar1;
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  UAutomationTestPlatformSettings *pUVar5;
  bool bVar6;
  TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  UClass *local_res8;
  TPairInitializer<FString_const_&,UAutomationTestExcludelistConfig_*_&&> local_res10;
  undefined1 local_48 [16];
  FString local_38;
  
  this_00 = &this->PlatformConfigs;
  bVar6 = 1 < *(int *)&(this->PlatformConfigs).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->PlatformConfigs).field_0xc;
  *(undefined4 *)&(this->PlatformConfigs).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PlatformConfigs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlatformConfigs).field_0x34 = 0;
  iVar3 = *(int *)&(this->PlatformConfigs).field_0x2c;
  *(undefined4 *)&(this->PlatformConfigs).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->PlatformConfigs).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PlatformConfigs).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->PlatformConfigs).field_0x48 = 1;
    TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  local_res8 = UAutomationTestExcludelistConfig::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pTVar7 = AutomationTestPlatform::GetAllPlatformsSettings
                     ((TSubclassOf<UAutomationTestPlatformSettings>)&local_res8);
  pFVar11 = (pTVar7->AllocatorInstance).Data;
  iVar3 = pTVar7->ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if (pTVar7->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UAutomationTestPlatformSettings_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar11 == pFVar2) {
      return;
    }
    pUVar5 = *(UAutomationTestPlatformSettings **)pFVar11;
    if (pUVar5 == (UAutomationTestPlatformSettings *)0x0) {
      pFVar9 = GetTypeName<UAutomationTestExcludelistConfig>(&local_38);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar12);
    }
    pUVar8 = UAutomationTestExcludelistConfig::StaticClass();
    iVar4 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar8->_padding_)) break;
    local_48._0_8_ = &pUVar5->PlatformName;
    local_48._8_8_ = &local_res10.Value;
    local_res10.Value = (UAutomationTestExcludelistConfig **)pUVar5;
    TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,UAutomationTestExcludelistConfig_*_&&>_>
              ((TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
                *)this_00,&local_res10,(bool *)local_48);
    pFVar11 = pFVar11 + 8;
  }
  pFVar9 = GetTypeName<UAutomationTestExcludelistConfig>((FString *)local_48);
  pwVar12 = L"";
  if ((pFVar9->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  pFVar9 = GetFullNameForCastLogError<UAutomationTestPlatformSettings>(&local_38,pUVar5);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar12,pwVar10);
}

// PopulateEntries @ 148bf6300

void __thiscall UAutomationTestExcludelist::PopulateEntries(UAutomationTestExcludelist *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  uint uVar1;
  UAutomationTestExcludelistConfig *pUVar2;
  code *pcVar3;
  int *piVar4;
  longlong *plVar5;
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  bool *pbVar17;
  uint uVar18;
  int *piVar19;
  undefined1 *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint *puVar22;
  TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
  *this_01;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined8 *puVar24;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1d8 [4];
  uint local_1d4;
  FLLMScope local_1d0;
  undefined1 local_1cc [20];
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  undefined1 *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined4 local_178;
  int local_174;
  int local_170;
  undefined1 local_16c [12];
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *local_160;
  TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
  *local_158;
  bool *local_150;
  longlong local_148;
  int *local_140;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>
  local_130;
  FMemScope local_128;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  int *local_80;
  int *local_78;
  undefined4 local_54;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name154,L"AutomationTest/Settings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_1d0,LLMScope_Name154,false,None,Default,true);
  FMemScope::FMemScope(&local_128,&LLMScope_Name154,true);
  this_01 = (TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
             *)&this->Entries;
  bVar7 = 1 < *(int *)&(this->Entries).field_0x48;
  local_158 = this_01;
  if (!bVar7) {
    TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->Entries).field_0x8);
  puVar20 = &(this->Entries).field_0xc;
  *(undefined4 *)&(this->Entries).field_0x8 = 0;
  if (*(int *)puVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,8,0,(ForAnyElementType *)this_01,0,(int *)puVar20);
  }
  *(undefined4 *)&(this->Entries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Entries).field_0x34 = 0;
  iVar8 = *(int *)&(this->Entries).field_0x2c;
  *(undefined4 *)&(this->Entries).field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(this->Entries).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Entries).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->Entries).field_0x48 = 1;
    TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
  pUVar2 = (this->DefaultConfig).field0_0x0.DebugPtr;
  iVar8 = (pUVar2->ExcludeTest).ArrayNum;
  pFVar13 = (pUVar2->ExcludeTest).AllocatorInstance.Data;
  pFVar16 = pFVar13 + (longlong)iVar8 * 0xd8;
  while( true ) {
    if ((pUVar2->ExcludeTest).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAutomationTestExcludelistEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar16) break;
    local_90 = pFVar13;
    local_88 = pFVar13;
    TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FAutomationTestExcludelistEntry_const_&>_>
              (this_01,(TPairInitializer<FString_const_&,FAutomationTestExcludelistEntry_const_&> *)
                       local_188,(bool *)&local_90);
    pFVar13 = pFVar13 + 0xd8;
  }
  iStack_1b0 = 0;
  local_1b8 = &this->PlatformConfigs;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PlatformConfigs).field_0x10;
  iVar8 = *(int *)&(this->PlatformConfigs).field_0x28;
  local_198 = 0;
  uStack_1ac = 1;
  iStack_19c = 0;
  if (iVar8 != 0) {
    puVar22 = *(uint **)&(this->PlatformConfigs).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)pTVar23;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar9 = (longlong)iStack_1b0;
      local_198 = local_198 + 0x20;
      iStack_1b0 = iStack_1b0 + 1;
      iStack_19c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b0) goto LAB_148bf650d;
      uVar18 = puVar22[lVar9 + 1];
    }
    uStack_1ac = -uVar18 & uVar18;
    uVar10 = (ulonglong)uStack_1ac * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_188._4_4_ = (undefined4)lVar9;
    iStack_19c = local_198 + -1 + local_188._4_4_;
    if (iVar8 < iStack_19c) {
      iStack_19c = iVar8;
    }
  }
LAB_148bf650d:
  uVar18 = *(uint *)&(this->PlatformConfigs).field_0x28;
  uStack_194 = local_54;
  iStack_190 = *(int *)&(this->PlatformConfigs).field_0x8 -
               *(int *)&(this->PlatformConfigs).field_0x34;
  uVar15 = uVar18 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
  uStack_1a0 = 0xffffffff;
  TStack_b8.CurrentBitIndex = iStack_19c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar18 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = local_198;
  uStack_98 = CONCAT44(uStack_18c,iStack_190);
  local_1d4 = uVar18;
  local_1a8 = (undefined1 *)pTVar23;
  local_160 = local_1b8;
  local_138 = pTVar23;
  local_c0 = local_1b8;
  TStack_b8.Array = pTVar23;
  if ((((int)uVar18 < 0) || (iVar8 < (int)uVar18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = *(uint *)&(this->PlatformConfigs).field_0x28;
  if (uVar18 != uVar1) {
    puVar20 = *(undefined1 **)&(this->PlatformConfigs).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = (undefined1 *)pTVar23;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar12 * 4);
    while (uVar18 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar18 = uVar1;
      local_1d4 = uVar1;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148bf6631;
      uVar18 = *(uint *)(puVar20 + lVar9 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_188._8_4_ = (undefined4)lVar9;
    uVar18 = local_188._8_4_ + -1 + uVar15;
    local_1d4 = uVar18;
    if ((int)uVar1 < (int)uVar18) {
      uVar18 = uVar1;
      local_1d4 = uVar1;
    }
  }
LAB_148bf6631:
  do {
    pTVar6 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_b8.CurrentBitIndex == uVar18) && (TStack_b8.Array == pTVar23)) &&
       (pTVar6 == local_160)) {
      local_130.Predicate.Predicate =
           (TDereferenceWrapper<FString,_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>
            )local_1d8;
      TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>
                (this_01,&local_130);
      FMemScope::~FMemScope(&local_128);
      FLLMScope::~FLLMScope(&local_1d0);
      return;
    }
    lVar9 = *(longlong *)pTVar6;
    pbVar17 = (bool *)(lVar9 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    local_148 = *(longlong *)(lVar9 + 8 + (longlong)TStack_b8.CurrentBitIndex * 0x18);
    local_1cc._4_4_ = *(uint *)(local_148 + 0x60);
    uVar10 = (ulonglong)(int)local_1cc._4_4_;
    piVar19 = *(int **)(local_148 + 0x58);
    puVar24 = (undefined8 *)(piVar19 + 0x28);
    local_140 = piVar19 + uVar10 * 0x36;
    local_150 = pbVar17;
    while( true ) {
      piVar4 = local_140;
      local_1cc._12_8_ = piVar19;
      if (*(int *)(local_148 + 0x60) != (int)uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FAutomationTestExcludelistEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (piVar19 == piVar4) break;
      iVar8 = *(int *)(puVar24 + -0x13) + -1;
      if (*(int *)(puVar24 + -0x13) == 0) {
        pwVar11 = L"";
        iVar8 = 0;
      }
      else {
        pwVar11 = *(wchar_t **)piVar19;
      }
      uVar18 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar11);
      iVar8 = TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(this_01,uVar18,(FString *)piVar19);
      if (iVar8 == -1) {
LAB_148bf6993:
        local_80 = piVar19;
        local_78 = piVar19;
        TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FAutomationTestExcludelistEntry_const_&>_>
                  (this_01,(TPairInitializer<FString_const_&,FAutomationTestExcludelistEntry_const_&>
                            *)local_1cc,(bool *)&local_80);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                   ((longlong)(int)local_1cc._0_4_ * 0xf0 + 0x28 + *(longlong *)&this_01->Elements),
                   (FName *)(local_16c + 4),pbVar17);
      }
      else {
        lVar14 = (longlong)iVar8 * 0xf0 + *(longlong *)&this_01->Elements;
        lVar9 = lVar14 + 0x10;
        if (lVar14 == 0) {
          lVar9 = 0;
        }
        if (lVar9 == 0) goto LAB_148bf6993;
        if (*(int *)(lVar9 + 0x20) != *(int *)(lVar9 + 0x4c)) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar9 + 0x18),
                     (FName *)(local_188 + 0xc),pbVar17);
          this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar9 + 0x80);
          uVar18 = *(int *)(lVar9 + 0x88) - *(int *)(lVar9 + 0xb4);
          uVar15 = (uVar18 - *(int *)((longlong)puVar24 + 0x14)) + *(int *)(puVar24 + -3);
          if (uVar18 < uVar15) {
            if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
            }
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,uVar15);
            if (uVar15 < 4) {
              iVar8 = 1;
            }
            else {
              uVar10 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
              lVar14 = 0x3f;
              if (uVar10 != 0) {
                for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              local_178 = (undefined4)lVar14;
              iVar8 = 1 << ((byte)lVar14 & 0x1f);
            }
            if ((*(int *)(lVar9 + 200) == 0) || (*(int *)(lVar9 + 200) < iVar8)) {
              *(int *)(lVar9 + 200) = iVar8;
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(this_00);
            }
          }
          iStack_118 = 0;
          local_100 = 0;
          uStack_114 = 1;
          uVar18 = *(uint *)(puVar24 + 1);
          uStack_104 = 0;
          if (uVar18 != 0) {
            puVar22 = (uint *)*puVar24;
            if (puVar22 == (uint *)0x0) {
              puVar22 = (uint *)(puVar24 + -2);
            }
            uVar15 = *puVar22;
            while (uVar15 == 0) {
              lVar9 = (longlong)iStack_118;
              local_100 = local_100 + 0x20;
              iStack_118 = iStack_118 + 1;
              uStack_104 = uVar18;
              if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_118)
              goto LAB_148bf6830;
              uVar15 = puVar22[lVar9 + 1];
            }
            uStack_114 = -uVar15 & uVar15;
            uVar10 = (ulonglong)uStack_114 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_174 = (int)lVar9;
            uStack_104 = local_100 + -1 + local_174;
            if ((int)uVar18 < (int)uStack_104) {
              uStack_104 = uVar18;
            }
          }
LAB_148bf6830:
          local_120 = puVar24 + -4;
          pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar24 + -2);
          iStack_fc = iStack_19c;
          iStack_f8 = *(int *)(puVar24 + -3) - *(int *)((longlong)puVar24 + 0x14);
          uVar15 = uVar18 & 0xffffffe0;
          TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
          uStack_108 = 0xffffffff;
          TStack_e8.CurrentBitIndex = uStack_104;
          TStack_e8.UnvisitedBitMask = 0xffffffff;
          iVar8 = (int)uVar18 >> 5;
          TStack_e8._28_4_ = iStack_19c;
          TStack_e8.BaseBitIndex = local_100;
          uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
          local_110 = pTVar23;
          local_f0 = local_120;
          TStack_e8.Array = pTVar23;
          if (((int)uVar18 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar1 = *(uint *)(puVar24 + 1);
          if (uVar18 != uVar1) {
            pTVar21 = pTVar23;
            if ((TBitArray<FDefaultBitArrayAllocator> *)*puVar24 !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)*puVar24;
            }
            uVar18 = -1 << ((byte)uVar18 & 0x1f) &
                     *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
            while (uVar18 == 0) {
              lVar9 = (longlong)iVar8;
              uVar15 = uVar15 + 0x20;
              iVar8 = iVar8 + 1;
              uVar18 = uVar1;
              if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
              goto LAB_148bf692d;
              uVar18 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar9 * 4 + 4);
            }
            uVar10 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_170 = (int)lVar9;
            uVar18 = local_170 + -1 + uVar15;
            if ((int)uVar1 < (int)uVar18) {
              uVar18 = uVar1;
            }
          }
LAB_148bf692d:
          while( true ) {
            plVar5 = local_f0;
            if ((int)local_f0[1] - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
              local_res20[0] = 0;
              `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if (((TStack_e8.CurrentBitIndex == uVar18) && (TStack_e8.Array == pTVar23)) &&
               (pbVar17 = local_150, piVar19 = (int *)local_1cc._12_8_, this_01 = local_158,
               plVar5 == puVar24 + -4)) break;
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                      (this_00,(FName *)local_16c,
                       (bool *)((longlong)TStack_e8.CurrentBitIndex * 0x10 + *plVar5));
            TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
          }
        }
      }
      piVar19 = piVar19 + 0x36;
      puVar24 = puVar24 + 0x1b;
      uVar10 = (ulonglong)(uint)local_1cc._4_4_;
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    pTVar23 = local_138;
    uVar18 = local_1d4;
  } while( true );
}

// RemoveFromExcludeTest @ 148bf71e0

void __thiscall
UAutomationTestExcludelist::RemoveFromExcludeTest(UAutomationTestExcludelist *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined1 local_res10 [8];
  FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>
  local_res18 [2];
  FString local_28;
  FString local_18;
  
  if (1 < (param_1->Data).ArrayNum) {
    pFVar3 = ::FString::TrimStartAndEnd(param_1,&local_18);
    pFVar3 = ::FString::ToLower(pFVar3,&local_28);
    if (*(int *)&(this->Entries).field_0x8 != *(int *)&(this->Entries).field_0x34) {
      iVar1 = (pFVar3->Data).ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar5 = L"";
        iVar4 = 0;
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
      TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FString>
                ((TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
                  *)&this->Entries,uVar2,pFVar3);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    local_res18[0].Predicate.Predicate =
         (TDereferenceWrapper<FString,_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>
          )local_res10;
    TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>
              ((TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
                *)&this->Entries,local_res18);
  }
  return;
}

// SaveToConfigs @ 148bf73b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UAutomationTestExcludelist::SaveToConfigs(UAutomationTestExcludelist *this)

{
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *pTVar1;
  int *piVar2;
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *this_00;
  ulonglong uVar3;
  int iVar4;
  FName FVar5;
  undefined1 *puVar6;
  FAutomationTestExcludelistEntry *pFVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  UAutomationTestExcludelist *pUVar13;
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *pTVar14;
  void *pvVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar22;
  FString *pFVar23;
  UAutomationTestExcludelistConfig *pUVar24;
  UClass *pUVar25;
  undefined8 *puVar26;
  byte bVar27;
  undefined1 *puVar28;
  int iVar29;
  wchar_t *pwVar30;
  uint uVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *pTVar33;
  wchar_t *pwVar34;
  uint uVar35;
  uint uVar36;
  ForElementType<unsigned_int> FVar37;
  undefined1 *puVar39;
  TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *pTVar40;
  uint *puVar41;
  uint *puVar42;
  uint uVar43;
  uint uVar44;
  ulonglong uVar45;
  FName *this_01;
  undefined1 auStackY_4a8 [32];
  undefined1 local_438;
  undefined1 local_437;
  undefined1 local_436 [6];
  ForElementType<unsigned_int> local_430;
  undefined1 local_428 [8];
  UAutomationTestExcludelist *local_420;
  ulonglong local_418;
  int local_410 [2];
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *local_408;
  undefined8 uStack_400;
  ForElementType<unsigned_int> FStack_3f8;
  uint uStack_3f0;
  uint uStack_3ec;
  uint uStack_3e8;
  undefined4 uStack_3e4;
  int local_3e0;
  undefined4 uStack_3dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d8;
  uint local_3b8;
  undefined4 uStack_3b4;
  int iStack_3b0;
  undefined4 uStack_3ac;
  longlong local_3a8;
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_398;
  undefined8 local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_350;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  FUObjectCppClassStaticFunctions local_320;
  UClass *local_318;
  TMap<FName,TObjectPtr<UAutomationTestExcludelistConfig>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>_>
  *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  undefined8 uStack_2e8;
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 uStack_2b8;
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a8;
  undefined8 uStack_288;
  FSparseArrayAllocationInfo local_280;
  TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
  *local_268;
  longlong lStack_260;
  TBitArray<FDefaultBitArrayAllocator> *local_258;
  uint uStack_250;
  int iStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0 [2];
  undefined4 local_1c4;
  undefined4 local_1a4;
  undefined4 local_184;
  FAutomationTestExcludelistEntry local_178;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *pTVar38;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_420 = this;
  UAutomationTestExcludelistConfig::Reset((this->DefaultConfig).field0_0x0.DebugPtr);
  pTVar38 = (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *)0x0;
  uVar43 = 0;
  this_00 = &this->PlatformConfigs;
  pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PlatformConfigs).field_0x10;
  uVar44 = 0;
  local_350._padding_._0_4_ = 0;
  local_418 = 1;
  local_350._padding_._4_4_ = 1;
  local_350.UnvisitedBitMask = 0xffffffff;
  local_350.CurrentBitIndex = 0;
  local_350.BaseBitIndex = 0;
  local_350.Array = pTVar32;
  if (*(int *)&(this->PlatformConfigs).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_350);
  }
  uVar19 = *(uint *)&(this->PlatformConfigs).field_0x28;
  TStack_398._padding_ = CONCAT44(local_350._padding_._4_4_,(undefined4)local_350._padding_);
  bVar27 = (byte)uVar19 & 0x1f;
  TStack_398.CurrentBitIndex = local_350.CurrentBitIndex;
  TStack_398.UnvisitedBitMask = local_350.UnvisitedBitMask;
  TStack_398._28_4_ = local_350._28_4_;
  TStack_398.BaseBitIndex = local_350.BaseBitIndex;
  local_378 = CONCAT44(local_378._4_4_,
                       *(int *)&(this->PlatformConfigs).field_0x8 -
                       *(int *)&(this->PlatformConfigs).field_0x34);
  local_370._padding_._0_4_ = (int)uVar19 >> 5;
  local_370._padding_._4_4_ = 1 << bVar27;
  local_370.UnvisitedBitMask = -1 << bVar27;
  TStack_398.Array = local_350.Array;
  local_370.BaseBitIndex = uVar19 & 0xffffffe0;
  TStack_308.Array = local_350.Array;
  uStack_2e8 = local_378;
  local_3a0 = this_00;
  local_370.Array = pTVar32;
  local_370.CurrentBitIndex = uVar19;
  local_310 = this_00;
  TStack_308._padding_ = TStack_398._padding_;
  TStack_308._16_8_ = TStack_398._16_8_;
  TStack_308._24_8_ = TStack_398._24_8_;
  if ((((int)uVar19 < 0) || (*(int *)&(this->PlatformConfigs).field_0x28 < (int)uVar19)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar19 != *(uint *)&(this->PlatformConfigs).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_370);
    pTVar32 = local_370.Array;
    uVar19 = local_370.CurrentBitIndex;
  }
  while( true ) {
    pTVar14 = local_310;
    if (*(int *)(&local_310->field_0x0 + 8) - *(int *)(&local_310->field_0x0 + 0x34) !=
        (int)uStack_2e8) {
      local_438 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_438);
    }
    uVar45 = local_418;
    pUVar13 = local_420;
    if (((TStack_308.CurrentBitIndex == uVar19) && (TStack_308.Array == pTVar32)) &&
       (pTVar14 == this_00)) break;
    lVar21 = *(longlong *)
              (*(longlong *)&pTVar14->field_0x0 + 8 + (longlong)TStack_308.CurrentBitIndex * 0x18);
    DestructItems<FAutomationTestExcludelistEntry,int>
              (*(FAutomationTestExcludelistEntry **)(lVar21 + 0x58),*(int *)(lVar21 + 0x60));
    *(undefined4 *)(lVar21 + 0x60) = 0;
    if (*(int *)(lVar21 + 100) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd8,8,0,(ForAnyElementType *)(lVar21 + 0x58),0,(int *)(lVar21 + 100));
    }
    local_228 = 0;
    *(undefined8 *)(lVar21 + 0x78) = 0;
    *(undefined8 *)(lVar21 + 0x80) = 0;
    *(undefined4 *)(lVar21 + 0x88) = 0;
    TStack_308.UnvisitedBitMask = TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
    local_238 = 0;
    uStack_230 = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
  }
  uVar19 = *(uint *)&(local_420->Entries).field_0x28;
  TStack_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(local_420->Entries).field_0x10;
  uVar36 = 0;
  uVar18 = (uint)local_418;
  pTVar1 = &local_420->Entries;
  uVar17 = uVar18;
  uVar35 = uVar44;
  local_3d8._28_4_ = uVar36;
  local_3b8 = uVar36;
  if (uVar19 != 0) {
    puVar42 = *(uint **)&(local_420->Entries).field_0x20;
    if (puVar42 == (uint *)0x0) {
      puVar42 = (uint *)TStack_2a8.Array;
    }
    uVar31 = *puVar42;
    pTVar33 = pTVar38;
    pTVar40 = pTVar38;
    uVar35 = uVar43;
    local_3b8 = uVar43;
    while (uVar31 == 0) {
      uVar35 = (int)pTVar33 + 1;
      pTVar33 = (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *)
                (ulonglong)uVar35;
      local_3b8 = (int)pTVar40 + 0x20;
      pTVar40 = (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *)
                (ulonglong)local_3b8;
      local_3d8._28_4_ = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar35)
      goto LAB_148bf7651;
      uVar31 = puVar42[(int)uVar35];
    }
    uVar17 = ~(uVar31 - 1) & uVar31;
    uVar3 = (ulonglong)uVar17 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_330 = (int)lVar21;
    local_3d8._28_4_ = local_330 + -1 + local_3b8;
    if ((int)uVar19 < (int)local_3d8._28_4_) {
      local_3d8._28_4_ = uVar19;
    }
  }
LAB_148bf7651:
  uStack_3b4 = local_1c4;
  iStack_3b0 = *(int *)&(local_420->Entries).field_0x8 - *(int *)&(local_420->Entries).field_0x34;
  uVar31 = *(uint *)&(local_420->Entries).field_0x28;
  bVar27 = (byte)uVar31 & 0x1f;
  local_3d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar17,uVar35);
  local_3d8._padding_ = CONCAT44(uVar18 << bVar27,(int)uVar31 >> 5);
  TStack_2a8.CurrentBitIndex = local_3d8._28_4_;
  TStack_2a8.UnvisitedBitMask = 0xffffffff;
  local_3d8.BaseBitIndex = uVar31 & 0xffffffe0;
  local_3d8.CurrentBitIndex = uVar31;
  local_3d8.UnvisitedBitMask = -1 << bVar27;
  TStack_2a8._padding_ = (longlong)local_3d8.Array;
  TStack_2a8._28_4_ = local_1c4;
  TStack_2a8.BaseBitIndex = local_3b8;
  uStack_288 = CONCAT44(uStack_3ac,iStack_3b0);
  local_3d8.Array = TStack_2a8.Array;
  local_2b0 = pTVar1;
  if ((((int)uVar31 < 0) || ((int)uVar19 < (int)uVar31)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (uVar31 != *(uint *)&(pUVar13->Entries).field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3d8);
  }
  uVar12 = _UNK_150631d98;
  uVar11 = ___xmm_00000000ffffffff0000008000000000;
  uStack_3e4 = local_3d8._28_4_;
  uStack_3e8 = local_3d8.BaseBitIndex;
  local_3e0 = *(int *)&(local_420->Entries).field_0x8 - *(int *)&(local_420->Entries).field_0x34;
  uStack_400 = local_3d8._padding_;
  FStack_3f8 = (ForElementType<unsigned_int>)local_3d8.Array;
  uStack_3f0 = local_3d8.UnvisitedBitMask;
  uStack_3ec = local_3d8.CurrentBitIndex;
  lStack_260 = local_3d8._padding_;
  uStack_240 = CONCAT44(uStack_3dc,local_3e0);
  local_258 = local_3d8.Array;
  uStack_250 = local_3d8.UnvisitedBitMask;
  iStack_24c = local_3d8.CurrentBitIndex;
  local_408 = pTVar1;
  local_268 = pTVar1;
  local_248 = _uStack_3e8;
  while( true ) {
    pTVar1 = local_2b0;
    if (*(int *)&local_2b0->field_0x8 - *(int *)&local_2b0->field_0x34 != (int)uStack_288) {
      local_437 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_437);
    }
    uStack_3ec = uVar36;
    if (((TStack_2a8.CurrentBitIndex == iStack_24c) && (TStack_2a8.Array == local_258)) &&
       (pTVar1 == local_268)) break;
    lVar21 = (longlong)TStack_2a8.CurrentBitIndex * 0xf0 + *(longlong *)pTVar1;
    pTVar1 = (TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
              *)(lVar21 + 0x28);
    local_3a8 = lVar21;
    if (*(int *)(lVar21 + 0x30) == *(int *)(lVar21 + 0x5c)) {
      UAutomationTestExcludelistConfig::AddEntry
                ((local_420->DefaultConfig).field0_0x0.DebugPtr,
                 (FAutomationTestExcludelistEntry *)(lVar21 + 0x10));
    }
    else {
      ::FString::FString(&local_178.FullTestName,(FString *)(lVar21 + 0x10));
      local_178.bIsPropagated = *(bool *)(lVar21 + 0x20);
      local_178.Platforms.Elements._0_8_ = 0;
      local_178.Platforms.Elements._8_8_ = 0;
      local_178.Platforms.Elements._32_8_ = 0;
      local_178.Platforms.Elements._40_8_ = uVar11;
      local_178.Platforms.Elements._48_8_ = uVar12;
      local_178.Platforms.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_178.Platforms.HashSize = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                (&local_178.Platforms,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar21 + 0x28));
      local_178.Map = *(FName *)(lVar21 + 0x78);
      local_178.Test = *(FName *)(lVar21 + 0x80);
      local_178.Reason = *(FName *)(lVar21 + 0x88);
      local_178.RHIs.Elements._0_8_ = 0;
      local_178.RHIs.Elements._8_8_ = 0;
      local_178.RHIs.Elements._32_8_ = 0;
      local_178.RHIs.Elements._40_4_ = 0;
      local_178.RHIs.Elements._44_4_ = 0x80;
      local_178.RHIs.Elements._48_4_ = 0xffffffff;
      local_178.RHIs.Elements._52_4_ = 0;
      local_178.RHIs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_178.RHIs.HashSize = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                (&local_178.RHIs,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar21 + 0x90));
      local_178.Warn = *(bool *)(lVar21 + 0xe0);
      local_430 = (ForElementType<unsigned_int>)(lVar21 + 0x38);
      uVar19 = *(uint *)(lVar21 + 0x50);
      uVar17 = (uint)uVar45;
      uVar35 = uVar36;
      uStack_3e8 = uVar36;
      if (uVar19 != 0) {
        FVar37 = local_430;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar21 + 0x48) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          FVar37 = (ForElementType<unsigned_int>)
                   *(TBitArray<FDefaultBitArrayAllocator> **)(lVar21 + 0x48);
        }
        uVar18 = *(uint *)(((TBitArray<FDefaultBitArrayAllocator> *)FVar37)->AllocatorInstance).
                          InlineData;
        pTVar33 = pTVar38;
        pTVar40 = pTVar38;
        uVar35 = uVar43;
        uStack_3e8 = uVar43;
        while (uVar18 == 0) {
          uVar35 = (int)pTVar33 + 1;
          pTVar33 = (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>
                     *)(ulonglong)uVar35;
          uStack_3e8 = (int)pTVar40 + 0x20;
          pTVar40 = (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>
                     *)(ulonglong)uStack_3e8;
          uStack_3ec = uVar19;
          if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar35)
          goto LAB_148bf7944;
          uVar18 = *(uint *)((((TBitArray<FDefaultBitArrayAllocator> *)FVar37)->AllocatorInstance).
                             InlineData + (longlong)(int)uVar35 * 4);
        }
        uVar17 = ~(uVar18 - 1) & uVar18;
        uVar45 = (ulonglong)uVar17 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar45 != 0) {
          for (; uVar45 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_32c = (int)lVar9;
        uStack_3ec = (uStack_3e8 - 1) + local_32c;
        if ((int)uVar19 < (int)uStack_3ec) {
          uStack_3ec = uVar19;
        }
      }
LAB_148bf7944:
      uVar18 = *(uint *)(lVar21 + 0x50);
      uVar31 = uVar18 & 0xffffffe0;
      local_3e0 = *(int *)(lVar21 + 0x30) - *(int *)(lVar21 + 0x5c);
      uStack_400 = CONCAT44(uVar17,uVar35);
      uStack_3f0 = 0xffffffff;
      uStack_3e4 = local_1a4;
      TStack_2d8._padding_ = uStack_400;
      iVar29 = (int)uVar18 >> 5;
      uStack_2b8 = CONCAT44(uStack_3dc,local_3e0);
      TStack_2d8.UnvisitedBitMask = 0xffffffff;
      TStack_2d8.CurrentBitIndex = uStack_3ec;
      TStack_2d8.BaseBitIndex = uStack_3e8;
      TStack_2d8._28_4_ = local_1a4;
      local_408 = pTVar1;
      FStack_3f8 = local_430;
      local_2e0 = pTVar1;
      TStack_2d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_430;
      if ((((int)uVar18 < 0) || ((int)uVar19 < (int)uVar18)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar19 = *(int *)((longlong)local_430 + 0x18);
      if (uVar18 != uVar19) {
        FVar37 = local_430;
        if (*(ForElementType<unsigned_int> *)((longlong)local_430 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar37 = *(ForElementType<unsigned_int> *)((longlong)local_430 + 0x10);
        }
        uVar35 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar37 + (longlong)iVar29 * 4);
        while (uVar35 == 0) {
          iVar29 = iVar29 + 1;
          uVar31 = uVar31 + 0x20;
          uVar18 = uVar19;
          if ((int)(((int)(uVar19 - 1) >> 0x1f & 0x1fU) + (uVar19 - 1)) >> 5 < iVar29)
          goto LAB_148bf7a52;
          uVar35 = *(uint *)((longlong)FVar37 + (longlong)iVar29 * 4);
        }
        uVar45 = (ulonglong)(~(uVar35 - 1) & uVar35) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar45 != 0) {
          for (; uVar45 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_328 = (int)lVar21;
        uVar18 = local_328 + -1 + uVar31;
        if ((int)uVar19 < (int)uVar18) {
          uVar18 = uVar19;
        }
      }
LAB_148bf7a52:
      while( true ) {
        pTVar1 = local_2e0;
        if (*(int *)&local_2e0->field_0x8 - *(int *)&local_2e0->field_0x34 != (int)uStack_2b8) {
          local_436[0] = 0;
          `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_436);
        }
        lVar21 = local_3a8;
        if (((TStack_2d8.CurrentBitIndex == uVar18) &&
            ((ForElementType<unsigned_int>)TStack_2d8.Array == local_430)) &&
           (pTVar1 == (TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
                       *)(local_3a8 + 0x28))) break;
        this_01 = (FName *)((longlong)TStack_2d8.CurrentBitIndex * 0x10 + *(longlong *)pTVar1);
        if (*(int *)(local_3a8 + 0x98) != *(int *)(local_3a8 + 0xc4)) {
          pTVar22 = FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(this_01);
          pTVar22 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Intersect
                              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                               (lVar21 + 0x90),&local_98,pTVar22);
          if (&local_178.RHIs != pTVar22) {
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
            Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
                      (&local_178.RHIs,pTVar22);
          }
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
        }
        FVar5 = *this_01;
        uVar19 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
        if (*(int *)&(this->PlatformConfigs).field_0x8 !=
            *(int *)&(this->PlatformConfigs).field_0x34) {
          puVar6 = *(undefined1 **)&(this->PlatformConfigs).field_0x40;
          puVar28 = &(this->PlatformConfigs).field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar28 = puVar6;
          }
          iVar29 = *(int *)(puVar28 +
                           (ulonglong)
                           (*(int *)&(this->PlatformConfigs).field_0x48 - 1U & FVar5.Number + uVar19
                           ) * 4);
          if (iVar29 != -1) {
            lVar21 = *(longlong *)&this_00->field_0x0;
            do {
              if (*(FName *)(lVar21 + (longlong)iVar29 * 0x18) == FVar5) {
                if (((iVar29 != -1) && (lVar21 = lVar21 + (longlong)iVar29 * 0x18, lVar21 != 0)) &&
                   (puVar26 = (undefined8 *)(lVar21 + 8), puVar26 != (undefined8 *)0x0)) {
                  pUVar24 = (UAutomationTestExcludelistConfig *)*puVar26;
                  pFVar7 = (FAutomationTestExcludelistEntry *)
                           (pUVar24->ExcludeTest).AllocatorInstance.Data;
                  if (((pFVar7 <= &local_178) &&
                      (&local_178 < pFVar7 + (pUVar24->ExcludeTest).ArrayMax)) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  iVar29 = (pUVar24->ExcludeTest).ArrayNum;
                  piVar2 = &(pUVar24->ExcludeTest).ArrayMax;
                  if (iVar29 == *piVar2) {
                    iVar29 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x8d8,&(pUVar24->ExcludeTest).AllocatorInstance,piVar2);
                  }
                  (pUVar24->ExcludeTest).ArrayNum = iVar29 + 1;
                  FAutomationTestExcludelistEntry::FAutomationTestExcludelistEntry
                            ((FAutomationTestExcludelistEntry *)
                             ((pUVar24->ExcludeTest).AllocatorInstance.Data +
                             (longlong)iVar29 * 0xd8),&local_178);
                  UAutomationTestExcludelistConfig::UpdateHash(pUVar24,&local_178);
                  goto LAB_148bf7f44;
                }
                break;
              }
              iVar29 = *(int *)(lVar21 + 0x10 + (longlong)iVar29 * 0x18);
            } while (iVar29 != -1);
          }
        }
        pFVar23 = ::FName::ToString(this_01,&local_200);
        if (Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton ==
            (UClass *)0x0) {
          local_320.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/AutomationTest",L"AutomationTestExcludelistConfig",
                     &Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton,
                     UAutomationTestExcludelistConfig::
                     StaticRegisterNativesUAutomationTestExcludelistConfig,0xa0,8,
                     CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
                     InternalConstructor<UAutomationTestExcludelistConfig>,
                     InternalVTableHelperCtorCaller<UAutomationTestExcludelistConfig>,&local_320,
                     UAutomationTestPlatformSettings::StaticClass,UObject::StaticClass);
        }
        local_318 = Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton !=
            (UClass *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)
                     Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton);
        }
        pUVar24 = (UAutomationTestExcludelistConfig *)
                  UAutomationTestPlatformSettings::Create
                            ((TSubclassOf<UAutomationTestPlatformSettings>)&local_318,pFVar23);
        if (pUVar24 == (UAutomationTestExcludelistConfig *)0x0) {
          pFVar23 = GetTypeName<UAutomationTestExcludelistConfig>(&local_210);
          if ((pFVar23->Data).ArrayNum == 0) {
            pwVar34 = L"";
          }
          else {
            pwVar34 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar34);
        }
        pUVar25 = UAutomationTestExcludelistConfig::StaticClass();
        iVar29 = (int)pUVar25->_padding_;
        if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar29) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar29 * 8) !=
            &pUVar25->_padding_)) {
          pFVar23 = GetTypeName<UAutomationTestExcludelistConfig>(local_1f0);
          pwVar34 = L"";
          if ((pFVar23->Data).ArrayNum == 0) {
            pwVar30 = L"";
          }
          else {
            pwVar30 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
          pFVar23 = GetFullNameForCastLogError<UAutomationTestPlatformSettings>
                              (&local_220,(UAutomationTestPlatformSettings *)pUVar24);
          if ((pFVar23->Data).ArrayNum != 0) {
            pwVar34 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar34,pwVar30);
        }
        pFVar7 = (FAutomationTestExcludelistEntry *)(pUVar24->ExcludeTest).AllocatorInstance.Data;
        if (((pFVar7 <= &local_178) && (&local_178 < pFVar7 + (pUVar24->ExcludeTest).ArrayMax)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar29 = (pUVar24->ExcludeTest).ArrayNum;
        piVar2 = &(pUVar24->ExcludeTest).ArrayMax;
        if (iVar29 == *piVar2) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8d8,&(pUVar24->ExcludeTest).AllocatorInstance,piVar2);
        }
        (pUVar24->ExcludeTest).ArrayNum = iVar29 + 1;
        FAutomationTestExcludelistEntry::FAutomationTestExcludelistEntry
                  ((FAutomationTestExcludelistEntry *)
                   ((pUVar24->ExcludeTest).AllocatorInstance.Data + (longlong)iVar29 * 0xd8),
                   &local_178);
        UAutomationTestExcludelistConfig::UpdateHash(pUVar24,&local_178);
        iVar29 = *(int *)&(this->PlatformConfigs).field_0x34;
        if (iVar29 == 0) {
          iVar20 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x18,8,(int)local_418,(ForAnyElementType *)this_00,
                              (int *)&(this->PlatformConfigs).field_0x8,
                              (int *)&(this->PlatformConfigs).field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PlatformConfigs).field_0x10,
                     false);
        }
        else {
          iVar20 = *(int *)&(this->PlatformConfigs).field_0x30;
          iVar29 = iVar29 + -1;
          iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar20 * 0x18);
          *(int *)&(this->PlatformConfigs).field_0x30 = iVar4;
          *(int *)&(this->PlatformConfigs).field_0x34 = iVar29;
          if (iVar29 != 0) {
            *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) = 0xffffffff;
          }
        }
        TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,&local_280,iVar20);
        pvVar15 = local_280.Pointer;
        pTVar33 = pTVar38;
        if (local_280.Pointer !=
            (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *)0x0)
        {
          *(FName *)local_280.Pointer = *this_01;
          *(UAutomationTestExcludelistConfig **)((longlong)local_280.Pointer + 8) = pUVar24;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar24);
          }
          *(undefined4 *)((longlong)pvVar15 + 0x10) = 0xffffffff;
          pTVar33 = pvVar15;
        }
        uVar8 = *(undefined8 *)pTVar33;
        local_410[0] = local_280.Index;
        uVar19 = ::GetTypeHash((FNameEntryId)(uint)uVar8);
        uVar19 = (int)((ulonglong)uVar8 >> 0x20) + uVar19;
        bVar16 = TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
                 ::TryReplaceExisting
                           ((TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
                             *)this_00,uVar19,pTVar33,local_410,(bool *)0x0);
        if (!bVar16) {
          TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
          ::RehashOrLink((TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
                          *)this_00,uVar19,pTVar33,local_410[0]);
        }
LAB_148bf7f44:
        TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
      }
      local_178.RHIs.HashSize = 0;
      if (local_178.RHIs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_178.RHIs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_178.RHIs.Elements);
      local_178.Platforms.HashSize = 0;
      if (local_178.Platforms.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_178.Platforms.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_178.Platforms.Elements);
      uVar45 = local_418;
      if (local_178.FullTestName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.FullTestName.Data.AllocatorInstance.Data);
        uVar45 = local_418;
      }
    }
    TStack_2a8.UnvisitedBitMask = TStack_2a8.UnvisitedBitMask & ~TStack_2a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a8);
  }
  UAutomationTestExcludelistConfig::SaveConfig((local_420->DefaultConfig).field0_0x0.DebugPtr);
  uVar43 = *(uint *)&(this->PlatformConfigs).field_0x28;
  puVar6 = &(this->PlatformConfigs).field_0x10;
  if (uVar43 != 0) {
    puVar42 = *(uint **)&(this->PlatformConfigs).field_0x20;
    puVar41 = (uint *)puVar6;
    if (puVar42 != (uint *)0x0) {
      puVar41 = puVar42;
    }
    uVar19 = *puVar41;
    pTVar33 = pTVar38;
    uVar44 = 0;
    uVar36 = 0;
    while (uVar19 == 0) {
      uVar44 = (int)pTVar33 + 1;
      pTVar33 = (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *)
                (ulonglong)uVar44;
      uVar36 = (int)pTVar38 + 0x20;
      pTVar38 = (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *)
                (ulonglong)uVar36;
      uStack_3ec = uVar43;
      if ((int)((uVar43 - 1) + ((int)(uVar43 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar44)
      goto LAB_148bf8073;
      uVar19 = puVar41[(int)uVar44];
    }
    local_418 = (ulonglong)(-uVar19 & uVar19);
    uVar45 = local_418 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar45 != 0) {
      for (; uVar45 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_324 = (int)lVar21;
    uStack_3ec = (uVar36 - 1) + local_324;
    if ((int)uVar43 < (int)uStack_3ec) {
      uStack_3ec = uVar43;
    }
  }
LAB_148bf8073:
  uVar19 = *(uint *)&(this->PlatformConfigs).field_0x28;
  uVar17 = uVar19 & 0xffffffe0;
  local_3e0 = *(int *)&(this->PlatformConfigs).field_0x8 -
              *(int *)&(this->PlatformConfigs).field_0x34;
  uVar35 = -1 << ((byte)uVar19 & 0x1f);
  uStack_400 = CONCAT44((int)local_418,uVar44);
  uStack_3f0 = 0xffffffff;
  uStack_3e4 = local_184;
  uStack_3e8 = uVar36;
  iVar29 = (int)uVar19 >> 5;
  local_430._0_4_ = uVar35;
  local_378 = CONCAT44(uStack_3dc,local_3e0);
  TStack_398.UnvisitedBitMask = 0xffffffff;
  TStack_398.CurrentBitIndex = uStack_3ec;
  TStack_398.BaseBitIndex = uVar36;
  TStack_398._28_4_ = local_184;
  local_408 = (TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>
               *)this_00;
  FStack_3f8 = (ForElementType<unsigned_int>)puVar6;
  TStack_398._padding_ = uStack_400;
  TStack_398.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
  if (((int)uVar19 < 0) || (local_3a0 = this_00, (int)uVar43 < (int)uVar19)) {
    local_3a0 = this_00;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar16) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar35 = local_430._0_4_;
  }
  uVar44 = *(uint *)&(this->PlatformConfigs).field_0x28;
  if (uVar19 != uVar44) {
    puVar28 = *(undefined1 **)&(this->PlatformConfigs).field_0x20;
    puVar39 = puVar6;
    if (puVar28 != (undefined1 *)0x0) {
      puVar39 = puVar28;
    }
    uVar35 = uVar35 & *(uint *)(puVar39 + (longlong)iVar29 * 4);
    while (uVar35 == 0) {
      iVar29 = iVar29 + 1;
      uVar17 = uVar17 + 0x20;
      uVar19 = uVar44;
      if ((int)(((int)(uVar44 - 1) >> 0x1f & 0x1fU) + (uVar44 - 1)) >> 5 < iVar29)
      goto LAB_148bf8180;
      uVar35 = *(uint *)(puVar39 + (longlong)iVar29 * 4);
    }
    uVar45 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar45 != 0) {
      for (; uVar45 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar19 = (uVar17 - 1) + (int)lVar21;
    if ((int)uVar44 < (int)uVar19) {
      uVar19 = uVar44;
    }
  }
LAB_148bf8180:
  while( true ) {
    pTVar14 = local_3a0;
    if (*(int *)(&local_3a0->field_0x0 + 8) - *(int *)(&local_3a0->field_0x0 + 0x34) !=
        (int)local_378) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_428);
    }
    if (((TStack_398.CurrentBitIndex == uVar19) &&
        (TStack_398.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar6)) &&
       (pTVar14 == this_00)) break;
    UAutomationTestExcludelistConfig::SaveConfig
              (*(UAutomationTestExcludelistConfig **)
                (*(longlong *)&pTVar14->field_0x0 + 8 + (longlong)TStack_398.CurrentBitIndex * 0x18)
              );
    TStack_398.UnvisitedBitMask = TStack_398.UnvisitedBitMask & ~TStack_398._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_398);
  }
  return;
}

// StaticRegisterNativesUAutomationTestExcludelist @ 148bf8660

void __cdecl UAutomationTestExcludelist::StaticRegisterNativesUAutomationTestExcludelist(void)

{
  return;
}

