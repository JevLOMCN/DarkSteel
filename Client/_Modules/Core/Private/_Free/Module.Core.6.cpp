// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 363

// `dynamic_initializer_for_'CVarAlwaysLoadNativeLocalizationDataDuringInitialization'' @ 140f04010

void __cdecl
TextLocalizationManager::
_dynamic_initializer_for__CVarAlwaysLoadNativeLocalizationDataDuringInitialization__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAlwaysLoadNativeLocalizationDataDuringInitialization,
             L"Localization.AlwaysLoadNativeLocalizationDataDuringInitialization",
             &AlwaysLoadNativeLocalizationDataDuringInitialization,
             L"True to load the native localization data during initialization, even if we\'re not starting in the native language. This ensures that all gathered text will load some localization data, even if not fully translated."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAlwaysLoadNativeLocalizationDataDuringInitialization__)
  ;
  return;
}

// `dynamic_initializer_for_'CVarAsyncLoadLocalizationData'' @ 140f04060

void __cdecl
TextLocalizationManager::_dynamic_initializer_for__CVarAsyncLoadLocalizationData__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncLoadLocalizationData,L"Localization.AsyncLoadLocalizationData",
             &AsyncLoadLocalizationData,
             L"True to load localization data asynchronously (non-blocking), or False to load it synchronously (blocking)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncLoadLocalizationData__);
  return;
}

// `dynamic_initializer_for_'CVarAsyncLoadLocalizationDataOnLanguageChange'' @ 140f040b0

void __cdecl
TextLocalizationManager::_dynamic_initializer_for__CVarAsyncLoadLocalizationDataOnLanguageChange__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAsyncLoadLocalizationDataOnLanguageChange,
             L"Localization.AsyncLoadLocalizationDataOnLanguageChange",
             &AsyncLoadLocalizationDataOnLanguageChange,
             L"True to load localization data asynchronously (non-blocking) when the language changes, or False to load it synchronously (blocking)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAsyncLoadLocalizationDataOnLanguageChange__);
  return;
}

// `dynamic_initializer_for_'CVarDisplayStringSupport'' @ 140f04100

void __cdecl TextLocalizationManager::_dynamic_initializer_for__CVarDisplayStringSupport__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisplayStringSupport,L"Localization.DisplayStringSupport",&DisplayStringSupport,
             L"Is display string support enabled? 0: Auto (default), 1: Enabled, 2: Disabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisplayStringSupport__);
  return;
}

// `dynamic_initializer_for_'CmdDumpLiveTable'' @ 140f04150

void __cdecl TextLocalizationManager::_dynamic_initializer_for__CmdDumpLiveTable__(void)

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
    puVar1[3] = <lambda_3>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CmdDumpLiveTable,L"Localization.DumpLiveTable",
             L"Dumps the current live table state to the log, optionally filtering it based on wildcard arguments for \'Namespace\', \'Key\', or \'DisplayString\', eg) -Key=Foo, or -DisplayString=\"This is some text\", or -Key=Bar*Baz -DisplayString=\"This is some other text\""
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
  atexit(_dynamic_atexit_destructor_for__CmdDumpLiveTable__);
  return;
}

// `dynamic_initializer_for_'LogStringTable'' @ 140f04290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStringTable__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogStringTable,L"LogStringTable",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStringTable__);
  return;
}

// `dynamic_initializer_for_'LogText'' @ 140f042d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogText__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogText,L"LogText",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogText__);
  return;
}

// `dynamic_initializer_for_'LogTextFormatter'' @ 140f04310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTextFormatter__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTextFormatter,L"LogTextFormatter",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTextFormatter__);
  return;
}

// `dynamic_initializer_for_'LogTextHistory'' @ 140f04350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTextHistory__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTextHistory,L"LogTextHistory",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTextHistory__);
  return;
}

// `dynamic_initializer_for_'LogTextKey'' @ 140f04390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTextKey__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTextKey,L"LogTextKey",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTextKey__);
  return;
}

// `dynamic_initializer_for_'LogTextLocalizationManager'' @ 140f043d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTextLocalizationManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTextLocalizationManager,L"LogTextLocalizationManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTextLocalizationManager__);
  return;
}

// `dynamic_initializer_for_'LogTextLocalizationResource'' @ 140f04410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTextLocalizationResource__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTextLocalizationResource,L"LogTextLocalizationResource",Log,All
            );
  atexit(_dynamic_atexit_destructor_for__LogTextLocalizationResource__);
  return;
}

// `dynamic_initializer_for_'NativeEngineCultureName'' @ 140f04450

void __cdecl TextLocalizationResourceUtil::_dynamic_initializer_for__NativeEngineCultureName__(void)

{
  atexit(_dynamic_atexit_destructor_for__NativeEngineCultureName__);
  return;
}

// `dynamic_initializer_for_'NativeProjectCultureName'' @ 140f04470

void __cdecl
TextLocalizationResourceUtil::_dynamic_initializer_for__NativeProjectCultureName__(void)

{
  atexit(_dynamic_atexit_destructor_for__NativeProjectCultureName__);
  return;
}

// `dynamic_initializer_for_'SetDisplayString'' @ 140f04490

void __cdecl TextLocalizationManager::_dynamic_initializer_for__SetDisplayString__(void)

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
    puVar1[3] = <lambda_4>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&SetDisplayString,L"Localization.SetDisplayString",
             L"Add/Update DisplayString in the live table given required arguments: \'Namespace\', \'Key\', and \'DisplayString\'. \'SourceString\' is optional, but needed if adding a new display string."
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
  atexit(_dynamic_atexit_destructor_for__SetDisplayString__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TextFormatData_Compile'' @ 140f045d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TextFormatData_Compile__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TextFormatData_Compile ==
      (FThreadSafeStaticStat<FStat_STAT_TextFormatData_Compile>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TextFormatData_Compile");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextFormatData_Compile,*pFVar1,
               L"TextFormatData Compile","STATGROUP_Text","STATCAT_Advanced",L"Text",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TableIdRedirects'' @ 140f04660

void __cdecl StringTableRedirects::_dynamic_initializer_for__TableIdRedirects__(void)

{
  atexit(_dynamic_atexit_destructor_for__TableIdRedirects__);
  return;
}

// `dynamic_initializer_for_'TableKeyRedirects'' @ 140f04680

void __cdecl StringTableRedirects::_dynamic_initializer_for__TableKeyRedirects__(void)

{
  atexit(_dynamic_atexit_destructor_for__TableKeyRedirects__);
  return;
}

// <lambda_invoker_cdecl> @ 141722110

void __cdecl
TextLocalizationManager::<lambda_3>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  <lambda_3> local_res10 [24];
  
  operator()(local_res10,param_1);
  return;
}

// <lambda_invoker_cdecl> @ 141722150

void __cdecl
TextLocalizationManager::<lambda_4>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  <lambda_4> local_res10 [24];
  
  operator()(local_res10,param_1);
  return;
}

// operator<<<unsigned_char,TSizedDefaultAllocator<32>_> @ 141722760

FArchive * __cdecl
operator<<<unsigned_char,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum,(longlong)*piVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x1000001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator> @ 141722770

FArchive * __cdecl
operator<<<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_141730dee;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_141730dee:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_141730ecb;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_141730ecb:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x1c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 3) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator> @ 141722780

FArchive * __cdecl
operator<<<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  wchar_t *pwVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar14 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar14 < 1) {
    return param_1;
  }
  *piVar1 = uVar14;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar14;
  if (uVar14 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14173109e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_14173109e:
  uVar12 = (ulonglong)uVar14;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar14 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar14 = *puVar13;
      uVar8 = uVar10;
      while (uVar14 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14173117b;
        uVar14 = puVar13[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar14 & uVar14;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14173117b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar10 * 0x68);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)*puVar11;
        }
        uVar7 = FCrc::StrCrc32<wchar_t>(pwVar6,0);
        uVar7 = uVar7 & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 100) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)((longlong)FVar5 + uVar8 * 4);
        *(int *)((longlong)FVar5 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_> @ 141722790

FArchive * __cdecl
operator<<<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  TTuple<FString,FFormatArgumentValue> *pTVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<<FString,FFormatArgumentValue>
                        (param_1,(TTuple<FString,FFormatArgumentValue> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pTVar10 = (TTuple<FString,FFormatArgumentValue> *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar10,1);
              operator<<<FString,FFormatArgumentValue>(param_1,pTVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFormatArgumentData> @ 1417227a0

void __cdecl
operator<<<FFormatArgumentData>
          (FStructuredArchiveSlot param_1,
          TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FArchive *this;
  uint *puVar2;
  code *pcVar3;
  FSlotBase FVar4;
  bool bVar5;
  int iVar6;
  FArchiveState *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&this->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar10 = local_res10[0];
  if (pFVar7->ArIsLoading != 0) {
    iVar9 = *piVar1;
    if (iVar9 < (int)local_res10[0]) {
      iVar9 = local_res10[0] - iVar9;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x48,8,iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      DefaultConstructItems<FFormatArgumentData,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48,iVar9);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar9) {
        uVar8 = iVar9 - local_res10[0];
        if (((int)(uVar8 | local_res10[0]) < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 != 0) {
          TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_2,uVar10,uVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar10 = 0;
  if (0 < (int)local_res10[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      operator<<((FStructuredArchiveSlot)FVar4.StructuredArchive,
                 (FFormatArgumentData *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48));
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_res10[0]);
  }
  return;
}

// operator<<<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_> @ 1417229a0

FArchive * __cdecl
operator<<<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
              operator<<(param_1,(FPackageId *)pFVar9);
              operator<<(param_1,(FMappedName *)(pFVar9 + 8));
              uVar10 = uVar10 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
              DefaultConstructItems<FIoContainerHeaderLocalizedPackage,int>(pFVar9,1);
              operator<<(param_1,(FPackageId *)pFVar9);
              operator<<(param_1,(FMappedName *)(pFVar9 + 8));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_> @ 1417229b0

FArchive * __cdecl
operator<<<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18;
              operator<<(param_1,(FPackageId *)pFVar2);
              operator<<(param_1,(FPackageId *)(pFVar2 + 8));
              operator<<(param_1,(FMappedName *)(pFVar2 + 0x10));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
              DefaultConstructItems<FIoContainerHeaderPackageRedirect,int>(pFVar2,1);
              operator<<(param_1,(FPackageId *)pFVar2);
              operator<<(param_1,(FPackageId *)(pFVar2 + 8));
              operator<<(param_1,(FMappedName *)(pFVar2 + 0x10));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_> @ 1417229c0

FArchive * __cdecl
operator<<<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FIoDirectoryIndexEntry *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FIoDirectoryIndexEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FIoDirectoryIndexEntry *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FIoDirectoryIndexEntry,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FIoFileIndexEntry,TSizedDefaultAllocator<32>_> @ 1417229d0

FArchive * __cdecl
operator<<<FIoFileIndexEntry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FIoFileIndexEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FIoFileIndexEntry *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<(param_1,(FIoFileIndexEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FIoFileIndexEntry,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FIoFileIndexEntry *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<FIoFileIndexEntry,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_> @ 1417229e0

FArchive * __cdecl
operator<<<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FTextLocalizationResourceString *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FTextLocalizationResourceString,int>
                ((FTextLocalizationResourceString *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FTextLocalizationResourceString *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FTextLocalizationResourceString,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FTextLocalizationResourceString *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FTextLocalizationResourceString,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>,0> @ 1417229f0

void __cdecl
operator<<<TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>,0>
          (FStructuredArchiveSlot param_1,
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
          *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  FKeyForward local_res10;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  TArrayPrivateFriend::Serialize<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>
            (pFVar1,&param_2->Pairs);
  if ((pFVar1->field_0x28 & 1) != 0) {
    AlgoImpl::
    IntroSortInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
              ((TTuple<FString,FFormatArgumentValue> *)(param_2->Pairs).AllocatorInstance.Data,
               (param_2->Pairs).ArrayNum,local_res10,(FLocKeySortedMapLess)local_res10);
  }
  return;
}

// operator<<<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 141722a50

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_141722d5c;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_141722d5c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        operator<<(param_1,(FString *)(lVar7 + 8));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        operator<<(param_1,(FString *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 141722de0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FString *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FString *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x68,(longlong)*(int *)&param_2->field_0xc * 0x68);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14172312c;
        uVar9 = puVar12[lVar7 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_14172312c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        pFVar8 = (FString *)((longlong)local_50.CurrentBitIndex * 0x68 + *(longlong *)local_58);
        operator<<(param_1,pFVar8);
        TSetPrivateFriend::
        Serialize<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  (param_1,(TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                            *)(pFVar8 + 1));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar5 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar8 = (FString *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x68,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x68 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x68 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<104,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FString *)0x0;
        if (local_78.Pointer != (FString *)0x0) {
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x30))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x30))->Data).ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x40))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (((FString *)((longlong)local_78.Pointer + 0x40))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x40))->Data).ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x50))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x50))->Data).ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x30))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (((FString *)((longlong)local_78.Pointer + 0x30))->Data).ArrayNum = 0;
          (((FString *)((longlong)local_78.Pointer + 0x30))->Data).ArrayMax = 0x80;
          *(undefined4 *)
           &(((FString *)((longlong)local_78.Pointer + 0x40))->Data).AllocatorInstance.Data =
               0xffffffff;
          *(undefined4 *)
           ((longlong)
            &(((FString *)((longlong)local_78.Pointer + 0x40))->Data).AllocatorInstance.Data + 4) =
               0;
          (((FString *)((longlong)local_78.Pointer + 0x50))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (((FString *)((longlong)local_78.Pointer + 0x50))->Data).ArrayNum = 0;
          *(undefined4 *)
           &(((FString *)((longlong)local_78.Pointer + 0x60))->Data).AllocatorInstance.Data =
               0xffffffff;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        TSetPrivateFriend::
        Serialize<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  (param_1,(TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                            *)(pFVar11 + 1));
        uVar9 = (int)pFVar8 + 1;
        pFVar8 = (FString *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FFormatArgumentValue,0> @ 1417231b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl
operator<<<FFormatArgumentValue,0>(FArchive *param_1,FFormatArgumentValue *param_2)

{
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(&local_1a0);
  operator<<(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<<<FFormatArgumentValue> @ 141723230

void __cdecl
operator<<<FFormatArgumentValue>
          (FStructuredArchiveSlot param_1,
          TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FArchive *this;
  uint *puVar2;
  code *pcVar3;
  FSlotBase FVar4;
  bool bVar5;
  int iVar6;
  FArchiveState *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&this->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar10 = local_res10[0];
  if (pFVar7->ArIsLoading != 0) {
    iVar9 = *piVar1;
    if (iVar9 < (int)local_res10[0]) {
      iVar9 = local_res10[0] - iVar9;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      DefaultConstructItems<FFormatArgumentValue,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x20,iVar9);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar9) {
        uVar8 = iVar9 - local_res10[0];
        if (((int)(uVar8 | local_res10[0]) < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 != 0) {
          TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (param_2,uVar10,uVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar10 = 0;
  if (0 < (int)local_res10[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      operator<<((FStructuredArchiveSlot)FVar4.StructuredArchive,
                 (FFormatArgumentValue *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x20));
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_res10[0]);
  }
  return;
}

// operator<<<FPackageId,TSizedDefaultAllocator<32>_> @ 141723420

FArchive * __cdecl
operator<<<FPackageId,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPackageId,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<(param_1,(FPackageId *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FPackageId,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 8;
              DefaultConstructItems<FPackageId,int>(pFVar2,1);
              operator<<(param_1,(FPackageId *)pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FString,FFormatArgumentValue> @ 141723430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl
operator<<<FString,FFormatArgumentValue>
          (FArchive *param_1,TTuple<FString,FFormatArgumentValue> *param_2)

{
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  operator<<(param_1,(FString *)param_2);
  FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(&local_1a0);
  operator<<(*(FStructuredArchiveSlot *)FVar1,(FFormatArgumentValue *)&param_2->field_0x10);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<<<wchar_t,TStringView<wchar_t>_&> @ 1417234c0

TStringBuilderBase<wchar_t> * __cdecl
operator<<<wchar_t,TStringView<wchar_t>_&>
          (TStringBuilderBase<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  
  pwVar1 = param_2->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar3 = (ulong64)iVar4;
  if (param_1->End < param_1->CurPos + uVar3) {
    TStringBuilderBase<wchar_t>::Extend(param_1,uVar3);
  }
  if (iVar4 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(param_1->CurPos,pwVar1,uVar3 * 2);
    param_1->CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
  }
  return param_1;
}

// Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,`TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<`FTextCache::FindOrCache'::__l3::<lambda_1>_>'::__l2::<lambda_1>_> @ 141724840

bool __thiscall
TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
::
Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,_TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<_FTextCache::FindOrCache_::__l3::<lambda_1>_>_::__l2::<lambda_1>_>
          (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
           *this,FTextId *param_1,<lambda_1> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  undefined8 *puVar9;
  uint uVar10;
  FBucket *SRWLock;
  uint uVar11;
  
  uVar5 = ::GetTypeHash(&param_1->Key);
  uVar6 = ::GetTypeHash(&param_1->Namespace);
  uVar11 = uVar6 - uVar5 ^ uVar5 >> 0xd;
  uVar6 = (-0x61c88647 - uVar11) - uVar5 ^ uVar11 << 8;
  uVar10 = (uVar5 - uVar6) - uVar11 ^ uVar6 >> 0xd;
  uVar11 = (uVar11 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar5 = (uVar6 - uVar11) - uVar10 ^ uVar11 << 0x10;
  uVar6 = (uVar10 - uVar5) - uVar11 ^ uVar5 >> 5;
  uVar10 = (uVar11 - uVar6) - uVar5 ^ uVar6 >> 3;
  uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 << 10;
  uVar5 = (uVar6 - uVar5) - uVar10 ^ uVar5 >> 0xf;
  SRWLock = this->Buckets + (uVar5 & 0x1f);
  if (SRWLock == (FBucket *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar8 = TMapBase<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>
           ::FindByHash<FTextId>
                     ((TMapBase<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>
                       *)&SRWLock->Map,uVar5,*(FTextId **)param_2);
  if (pFVar8 == (FText *)0x0) {
    bVar3 = false;
    goto LAB_141724998;
  }
  plVar1 = *(longlong **)(param_2 + 8);
  puVar9 = (undefined8 *)(**(code **)((longlong)*(pFVar8->TextData).Reference + 0x20))();
  if (puVar9 != (undefined8 *)0x0) {
    iVar7 = *(int *)((undefined8 *)*plVar1 + 1);
    if (iVar7 == *(int *)(puVar9 + 1)) {
      if (1 < iVar7) {
        iVar7 = wcscmp(*(wchar_t **)*plVar1,(wchar_t *)*puVar9);
        bVar3 = iVar7 == 0;
        goto LAB_141724978;
      }
    }
    else {
      bVar3 = *(int *)(puVar9 + 1) + iVar7 == 1;
LAB_141724978:
      if (!bVar3) goto LAB_141724992;
    }
    FText::operator=((FText *)plVar1[1],pFVar8);
    *(undefined1 *)plVar1[2] = 1;
  }
LAB_141724992:
  bVar3 = true;
LAB_141724998:
  if (SRWLock != (FBucket *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return bVar3;
}

// Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,`TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<`FTextCache::FindOrCache'::__l3::<lambda_1>_>'::__l2::<lambda_1>_> @ 1417249d0

bool __thiscall
TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
::
Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,_TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<_FTextCache::FindOrCache_::__l3::<lambda_1>_>_::__l2::<lambda_1>_>
          (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
           *this,FTextId *param_1,<lambda_1> *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FText *pFVar9;
  undefined8 *puVar10;
  FBucket *SRWLock;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar6 = ::GetTypeHash(&param_1->Key);
  uVar7 = ::GetTypeHash(&param_1->Namespace);
  uVar13 = uVar7 - uVar6 ^ uVar6 >> 0xd;
  uVar7 = (-0x61c88647 - uVar13) - uVar6 ^ uVar13 << 8;
  uVar11 = (uVar6 - uVar7) - uVar13 ^ uVar7 >> 0xd;
  uVar13 = (uVar13 - uVar11) - uVar7 ^ uVar11 >> 0xc;
  uVar6 = (uVar7 - uVar13) - uVar11 ^ uVar13 << 0x10;
  uVar7 = (uVar11 - uVar6) - uVar13 ^ uVar6 >> 5;
  uVar11 = (uVar13 - uVar7) - uVar6 ^ uVar7 >> 3;
  uVar6 = (uVar6 - uVar11) - uVar7 ^ uVar11 << 10;
  uVar6 = (uVar7 - uVar6) - uVar11 ^ uVar6 >> 0xf;
  SRWLock = this->Buckets + (uVar6 & 0x1f);
  if (SRWLock == (FBucket *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar9 = TMapBase<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>
           ::FindByHash<FTextId>
                     ((TMapBase<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>
                       *)&SRWLock->Map,uVar6,*(FTextId **)param_2);
  if (pFVar9 == (FText *)0x0) {
    bVar4 = false;
    goto LAB_141724b36;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  puVar10 = (undefined8 *)(**(code **)((longlong)*(pFVar9->TextData).Reference + 0x20))();
  if (puVar10 != (undefined8 *)0x0) {
    iVar12 = *(int *)(puVar10 + 1) + -1;
    iVar1 = *(int *)((undefined8 *)*plVar2 + 1);
    if (*(int *)(puVar10 + 1) == 0) {
      iVar12 = 0;
    }
    if (iVar1 == iVar12) {
      if ((iVar1 != 0) && (iVar12 != 0)) {
        iVar8 = wcsncmp(*(wchar_t **)*plVar2,(wchar_t *)*puVar10,(longlong)iVar12);
        if (iVar8 != 0) goto LAB_141724b30;
      }
      if (iVar1 == iVar12) {
        FText::operator=((FText *)plVar2[1],pFVar9);
        *(undefined1 *)plVar2[2] = 1;
      }
    }
  }
LAB_141724b30:
  bVar4 = true;
LAB_141724b36:
  if (SRWLock != (FBucket *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return bVar4;
}

// AutoRTFMFunctorInvoker<`FText::AutoRTFMAssignFromOpenToClosed'::__l2::<lambda_1>_> @ 141727c50

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_FText::AutoRTFMAssignFromOpenToClosed_::__l2::<lambda_1>_>
          (void *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)param_1;
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  plVar3 = (longlong *)*plVar1;
  plVar4 = (longlong *)*plVar2;
  if (plVar3 != plVar4) {
    *plVar1 = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,local_res8);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(plVar1 + 1) = (int)plVar2[1];
  return;
}

// BinarySearchBy<TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 141727cb0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2,FKeyForward param_3,FLocKeySortedMapLess param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str1;
  FScriptContainerElement *pFVar4;
  wchar_t *_Str2;
  
  iVar1 = AlgoImpl::
          LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                    ((TTuple<FString,FFormatArgumentValue> *)(param_1->AllocatorInstance).Data,
                     param_1->ArrayNum,param_2,param_3,param_4);
  if (iVar1 < param_1->ArrayNum) {
    _Str1 = L"";
    pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30;
    if (*(int *)(pFVar4 + 8) == 0) {
      _Str2 = L"";
    }
    else {
      _Str2 = *(wchar_t **)pFVar4;
    }
    if ((param_2->Data).ArrayNum != 0) {
      _Str1 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar2 = wcscmp(_Str1,_Str2);
    iVar3 = -1;
    if (-1 < iVar2) {
      iVar3 = iVar1;
    }
    return iVar3;
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_> @ 141727d50

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
          (TArray<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,TSizedDefaultAllocator<32>_>
           *param_1,FTextFormatString *param_2,FKeyForward param_3,
          TLess<FTextFormatString_const_&> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
                    ((TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
                      *)(param_1->AllocatorInstance).Data,param_1->ArrayNum,param_2,param_3,param_4)
  ;
  if (iVar2 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    iVar3 = param_2->StringLen;
    iVar4 = *(int *)(pFVar1 + (longlong)iVar2 * 0x50 + 8);
    if (iVar4 <= iVar3) {
      if (iVar3 <= iVar4) {
        iVar3 = wcsncmp(param_2->StringPtr,*(wchar_t **)(pFVar1 + (longlong)iVar2 * 0x50),
                        (longlong)iVar3);
        iVar4 = -1;
        if (-1 < iVar3) {
          iVar4 = iVar2;
        }
        return iVar4;
      }
      return iVar2;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FTextFormatString,FTextFormat>,TSizedDefaultAllocator<32>_>,FTextFormatString,TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_> @ 141727e00

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FTextFormatString,FTextFormat>,TSizedDefaultAllocator<32>_>,FTextFormatString,TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
          (TArray<TTuple<FTextFormatString,FTextFormat>,TSizedDefaultAllocator<32>_> *param_1,
          FTextFormatString *param_2,FKeyForward param_3,TLess<FTextFormatString_const_&> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = AlgoImpl::
          LowerBoundInternal<TTuple<FTextFormatString,FTextFormat>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
                    ((TTuple<FTextFormatString,FTextFormat> *)(param_1->AllocatorInstance).Data,
                     param_1->ArrayNum,param_2,param_3,param_4);
  if (iVar2 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    iVar3 = param_2->StringLen;
    iVar4 = *(int *)(pFVar1 + (longlong)iVar2 * 0x30 + 8);
    if (iVar4 <= iVar3) {
      if (iVar3 <= iVar4) {
        iVar3 = wcsncmp(param_2->StringPtr,*(wchar_t **)(pFVar1 + (longlong)iVar2 * 0x30),
                        (longlong)iVar3);
        iVar4 = -1;
        if (-1 < iVar3) {
          iVar4 = iVar2;
        }
        return iVar4;
      }
      return iVar2;
    }
  }
  return -1;
}

// ConstructItems<TTuple<FString,FFormatArgumentValue>,TTuple<FString,FFormatArgumentValue>,int> @ 1417280a0

void __cdecl
ConstructItems<TTuple<FString,FFormatArgumentValue>,TTuple<FString,FFormatArgumentValue>,int>
          (void *param_1,TTuple<FString,FFormatArgumentValue> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),(FString *)param_2);
      FFormatArgumentValue::FFormatArgumentValue
                ((FFormatArgumentValue *)(lVar1 + 0x10 + (longlong)param_2),
                 (FFormatArgumentValue *)&param_2->field_0x10);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int> @ 141728100

void __cdecl
ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
          (void *param_1,TSharedPtr<ILocalizedTextSource,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(ILocalizedTextSource **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<FString,FFormatArgumentValue>,int> @ 1417281d0

void __cdecl
DefaultConstructItems<TTuple<FString,FFormatArgumentValue>,int>(void *param_1,int param_2)

{
  FText *pFVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined4 *)(lVar2 + 4) = 4;
      pFVar1 = FText::GetEmpty();
      TOptional<FText>::TOptional<FText>((TOptional<FText> *)(lVar2 + 0x14),pFVar1);
      lVar2 = lVar2 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`FIoChunkEncoding::Encode'::__l2::FBlock,int> @ 141728230

void __cdecl
DefaultConstructItems<_FIoChunkEncoding::Encode_::__l2::FBlock,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined2 *)(puVar1 + 3) = 0;
      *(undefined8 **)param_1 = puVar1;
      LOCK();
      *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<FFormatArgumentData,int> @ 1417282a0

void __cdecl DefaultConstructItems<FFormatArgumentData,int>(void *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  longlong *plVar3;
  undefined1 local_res10 [8];
  
  if (param_2 != 0) {
    plVar3 = (longlong *)((longlong)param_1 + 0x18);
    do {
      plVar3[-3] = 0;
      plVar3[-2] = 0;
      pFVar2 = FText::GetEmpty();
      *plVar3 = 0;
      pIVar1 = (pFVar2->TextData).Reference;
      *plVar3 = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
      }
      *(undefined4 *)(plVar3 + 1) = 0;
      FFormatArgumentData::ResetValue((FFormatArgumentData *)(plVar3 + -3));
      plVar3 = plVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FIoContainerHeaderLocalizedPackage,int> @ 141728320

void __cdecl
DefaultConstructItems<FIoContainerHeaderLocalizedPackage,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0xffffffffffffffff;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FIoContainerHeaderPackageRedirect,int> @ 141728350

void __cdecl DefaultConstructItems<FIoContainerHeaderPackageRedirect,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FIoDirectoryIndexEntry,int> @ 141728380

void __cdecl DefaultConstructItems<FIoDirectoryIndexEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FIoFileIndexEntry,int> @ 1417283b0

void __cdecl DefaultConstructItems<FIoFileIndexEntry,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0xffffffffffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FTextLocalizationResourceString,int> @ 1417283e0

/* WARNING: Removing unreachable block (ram,0x000141728421) */

void __cdecl DefaultConstructItems<FTextLocalizationResourceString,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    MakeTextDisplayString(param_1);
    (((FString *)param_1)->Data).ArrayNum = 0;
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FTracedTask,int> @ 141728450

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FFormatArgumentValue,int> @ 1417284a0

void __cdecl DefaultConstructItems<FFormatArgumentValue,int>(void *param_1,int param_2)

{
  FText *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 4;
    pFVar1 = FText::GetEmpty();
    TOptional<FText>::TOptional<FText>((TOptional<FText> *)((longlong)param_1 + 0x10),pFVar1);
    param_1 = (void *)((longlong)param_1 + 0x20);
  }
  return;
}

// DefaultConstructItems<FPackageId,int> @ 1417284f0

void __cdecl DefaultConstructItems<FPackageId,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 3);
    return;
  }
  return;
}

// DestructItems<TTuple<FTextFormatString,FTextFormatString>,int> @ 141728530

void __cdecl
DestructItems<TTuple<FTextFormatString,FTextFormatString>,int>
          (TTuple<FTextFormatString,FTextFormatString> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      if ((void *)puVar1[4] != (void *)0x0) {
        FMemory::Free((void *)puVar1[4]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,int> @ 141728580

void __cdecl
DestructItems<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,int>
          (TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x48;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-7] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-7]);
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FTextFormatString,FTextFormat>,int> @ 1417285e0

void __cdecl
DestructItems<TTuple<FTextFormatString,FTextFormat>,int>
          (TTuple<FTextFormatString,FTextFormat> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)puVar1[3]);
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FIoChunkEncoding::Encode'::__l2::FBlock,int> @ 141728630

void __cdecl
DestructItems<_FIoChunkEncoding::Encode_::__l2::FBlock,int>(FBlock *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TRefCountPtr<FIoBuffer::BufCore>::~TRefCountPtr<FIoBuffer::BufCore>
              ((TRefCountPtr<FIoBuffer::BufCore> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTextLocalizationManager::FDisplayStringsForLocalizationTarget,int> @ 141728670

void __cdecl
DestructItems<FTextLocalizationManager::FDisplayStringsForLocalizationTarget,int>
          (FDisplayStringsForLocalizationTarget *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->TextIds).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      pFVar1 = pFVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFormatArgumentData,int> @ 1417286e0

void __cdecl DestructItems<FFormatArgumentData,int>(FFormatArgumentData *param_1,int param_2)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->ArgumentValue).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pFVar2 = (param_1->ArgumentName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FTextLocalizationResourceString,int> @ 141728730

void __cdecl
DestructItems<FTextLocalizationResourceString,int>
          (FTextLocalizationResourceString *param_1,int param_2)

{
  int iVar1;
  TDisplayStringRef<FString> TVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TVar2 = param_1->String;
    if (TVar2 != (TDisplayStringRef<FString>)0x0) {
      LOCK();
      iVar1 = *(int *)TVar2;
      *(int *)TVar2 = *(int *)TVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)((longlong)TVar2 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)TVar2 + 8));
        }
        operator_delete((void *)TVar2,0x18);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FTracedTask,int> @ 1417287a0

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FTracedTask,int>
          (FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int> @ 141728820

void __cdecl
DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TExpressionToken<wchar_t>,int> @ 141728860

void __cdecl
DestructItems<TExpressionToken<wchar_t>,int>(TExpressionToken<wchar_t> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FExpressionNode::~FExpressionNode(&param_1->Node);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int> @ 1417288a0

void __cdecl
DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
          (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
           *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<ILocalizedTextSource,1>,int> @ 1417288f0

void __cdecl
DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
          (TSharedPtr<ILocalizedTextSource,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTextFormatString,int> @ 141728930

void __cdecl DestructItems<FTextFormatString,int>(FTextFormatString *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->InternalString;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`FTextFormatData::GetFormatArgumentNames_NoLock'::__l12::<lambda_1>_> @ 14172c280

FString * __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FTextFormatData::GetFormatArgumentNames_NoLock_::__l12::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str2;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)this->ArrayNum * 0x10;
  if (pFVar5 != pFVar4) {
    do {
      iVar3 = *(int *)&pFVar5[8].field_0x0;
      iVar1 = (*param_1.ArgumentToken)->ArgumentNameLen;
      iVar2 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      if (iVar1 == iVar2) {
        if (iVar3 == 0) {
          _Str2 = L"";
        }
        else {
          _Str2 = (wchar_t *)
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->
                  AllocatorInstance).Data;
        }
        iVar3 = wcsncmp((*param_1.ArgumentToken)->ArgumentNameStartPos,_Str2,(longlong)iVar1);
        if (iVar3 == 0) {
          return (FString *)pFVar5;
        }
      }
      pFVar5 = pFVar5 + 0x10;
    } while (pFVar5 != pFVar4);
  }
  return (FString *)0x0;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<`FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>_>_>_>_> @ 14172cef0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<_FTextLocalizationManager::DumpLiveTableImpl_::__l2::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<_private:_void___cdecl_FTextLocalizationManager::DumpLiveTableImpl(FString_const_*,FString_const_*,FString_const_*,TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>)const_::_2_::<lambda_2>_>_>_>
          param_4)

{
  code *pcVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar11 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_14172d033:
      if (iVar11 == 0) {
        iVar9 = param_2 + -1;
        lVar12 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar13 = param_1 + lVar12;
          do {
            uVar3 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8);
            TVar2 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar13->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar3;
            pTVar13->_s_1 = TVar2;
            *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18) = uVar6;
            iVar14 = 0;
            if (1 < iVar9) {
              do {
                iVar11 = iVar14 * 2;
                iVar8 = iVar11 + 1;
                if (iVar11 + 2 < iVar9) {
                  bVar7 = `FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>::
                          operator()(((((param_4.Predicate)->Predicate).Predicate)->Predicate).
                                     Predicate,(FTextId *)&param_1[iVar11 + 2].ElementData,
                                     (FTextId *)&param_1[iVar8].ElementData);
                  if (bVar7) {
                    iVar8 = iVar11;
                  }
                  iVar8 = iVar8 + 1;
                }
                pTVar15 = param_1 + iVar8;
                pTVar16 = param_1 + iVar14;
                bVar7 = `FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>::operator()
                                  (((((param_4.Predicate)->Predicate).Predicate)->Predicate).
                                   Predicate,(FTextId *)&pTVar16->ElementData,
                                   (FTextId *)&pTVar15->ElementData);
                if (!bVar7) break;
                TVar2 = pTVar16->_s_1;
                uVar3 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
                uVar4 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
                uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
                uVar6 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
                pTVar16->_s_1 = pTVar15->_s_1;
                *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar6;
                uVar6 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
                *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar6;
                pTVar15->_s_1 = TVar2;
                *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar3;
                *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar4;
                *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar5;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar12 = lVar12 + -1;
            pTVar13 = pTVar13 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar8 = iVar11 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar11 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      bVar7 = `FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>::operator()
                        (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                         (FTextId *)&param_1[iVar9 + 2].ElementData,
                         (FTextId *)&param_1[iVar10].ElementData);
      if (bVar7) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar13 = param_1 + iVar10;
    pTVar15 = param_1 + iVar8;
    bVar7 = `FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>::operator()
                      (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                       (FTextId *)&pTVar15->ElementData,(FTextId *)&pTVar13->ElementData);
    if (!bVar7) goto LAB_14172d033;
    TVar2 = pTVar15->_s_1;
    uVar3 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
    iVar9 = iVar10 * 2 + 1;
    uVar4 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
    uVar5 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
    uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
    pTVar15->_s_1 = pTVar13->_s_1;
    *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar6;
    uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar6;
    pTVar13->_s_1 = TVar2;
    *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar3;
    *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar4;
    *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar5;
    iVar8 = iVar10;
  } while( true );
}

// HeapSortInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 14172d160

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,FKeyForward param_3,
          FLocKeySortedMapLess param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  TTuple<FString,FFormatArgumentValue> *pTVar17;
  TTuple<FString,FFormatArgumentValue> *pTVar18;
  longlong lVar19;
  int iVar20;
  TTuple<FString,FFormatArgumentValue> *pTVar21;
  FLocKeySortedMapLess local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,TReversePredicate<FLocKeySortedMapLess>_>
            (param_1,param_2,param_3,local_res20);
  iVar20 = param_2 + -1;
  lVar19 = (longlong)iVar20;
  if (0 < iVar20) {
    pTVar21 = param_1 + lVar19;
    do {
      uVar3 = *(undefined8 *)&pTVar21->field_0x8;
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)&param_1->field_0x8;
      uVar6 = *(undefined8 *)&param_1->field_0x10;
      uVar7 = *(undefined8 *)&param_1->field_0x18;
      uVar8 = *(undefined8 *)&param_1->field_0x20;
      uVar9 = *(undefined8 *)&param_1->field_0x28;
      *(undefined8 *)param_1 = *(undefined8 *)pTVar21;
      *(undefined8 *)&param_1->field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&pTVar21->field_0x18;
      *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pTVar21->field_0x10;
      *(undefined8 *)&param_1->field_0x18 = uVar3;
      uVar3 = *(undefined8 *)&pTVar21->field_0x28;
      *(undefined8 *)&param_1->field_0x20 = *(undefined8 *)&pTVar21->field_0x20;
      *(undefined8 *)&param_1->field_0x28 = uVar3;
      *(undefined8 *)pTVar21 = uVar4;
      *(undefined8 *)&pTVar21->field_0x8 = uVar5;
      *(undefined8 *)&pTVar21->field_0x10 = uVar6;
      *(undefined8 *)&pTVar21->field_0x18 = uVar7;
      *(undefined8 *)&pTVar21->field_0x20 = uVar8;
      *(undefined8 *)&pTVar21->field_0x28 = uVar9;
      iVar12 = 0;
      if (1 < iVar20) {
        do {
          iVar2 = iVar12 * 2;
          iVar16 = iVar2 + 1;
          if (iVar2 + 2 < iVar20) {
            lVar13 = (longlong)iVar2;
            if (*(int *)&param_1[lVar13 + 1].field_0x8 == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = *(wchar_t **)(param_1 + lVar13 + 1);
            }
            if (*(int *)&param_1[lVar13 + 2].field_0x8 == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = *(wchar_t **)(param_1 + lVar13 + 2);
            }
            iVar11 = wcscmp(pwVar14,pwVar15);
            if (iVar11 < 0) {
              iVar16 = iVar2;
            }
            iVar16 = iVar16 + 1;
          }
          pTVar18 = param_1 + iVar12;
          pTVar17 = param_1 + iVar16;
          if (*(int *)&pTVar17->field_0x8 == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = *(wchar_t **)pTVar17;
          }
          if (*(int *)&pTVar18->field_0x8 == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = *(wchar_t **)pTVar18;
          }
          iVar12 = wcscmp(pwVar14,pwVar15);
          if (-1 < iVar12) break;
          uVar3 = *(undefined8 *)&pTVar17->field_0x8;
          uVar4 = *(undefined8 *)pTVar18;
          uVar5 = *(undefined8 *)&pTVar18->field_0x8;
          uVar6 = *(undefined8 *)&pTVar18->field_0x10;
          uVar7 = *(undefined8 *)&pTVar18->field_0x18;
          uVar8 = *(undefined8 *)&pTVar18->field_0x20;
          uVar9 = *(undefined8 *)&pTVar18->field_0x28;
          *(undefined8 *)pTVar18 = *(undefined8 *)pTVar17;
          *(undefined8 *)&pTVar18->field_0x8 = uVar3;
          uVar3 = *(undefined8 *)&pTVar17->field_0x18;
          *(undefined8 *)&pTVar18->field_0x10 = *(undefined8 *)&pTVar17->field_0x10;
          *(undefined8 *)&pTVar18->field_0x18 = uVar3;
          uVar3 = *(undefined8 *)&pTVar17->field_0x28;
          *(undefined8 *)&pTVar18->field_0x20 = *(undefined8 *)&pTVar17->field_0x20;
          *(undefined8 *)&pTVar18->field_0x28 = uVar3;
          *(undefined8 *)pTVar17 = uVar4;
          *(undefined8 *)&pTVar17->field_0x8 = uVar5;
          *(undefined8 *)&pTVar17->field_0x10 = uVar6;
          *(undefined8 *)&pTVar17->field_0x18 = uVar7;
          *(undefined8 *)&pTVar17->field_0x20 = uVar8;
          *(undefined8 *)&pTVar17->field_0x28 = uVar9;
          iVar12 = iVar16;
        } while (iVar16 * 2 + 1 < iVar20);
      }
      iVar20 = iVar20 + -1;
      lVar19 = lVar19 + -1;
      pTVar21 = pTVar21 + -1;
    } while (0 < lVar19);
  }
  return;
}

// HeapifyInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,TReversePredicate<FLocKeySortedMapLess>_> @ 14172d350

void __cdecl
AlgoImpl::
HeapifyInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,TReversePredicate<FLocKeySortedMapLess>_>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,FKeyForward param_3,
          TReversePredicate<FLocKeySortedMapLess> param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int iVar17;
  TTuple<FString,FFormatArgumentValue> *pTVar18;
  TTuple<FString,FFormatArgumentValue> *pTVar19;
  int iVar20;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar13 = iVar11 * 2 + 1;
  iVar2 = iVar13;
  iVar20 = iVar11;
  do {
    while (param_2 <= iVar13) {
LAB_14172d4b7:
      if (iVar20 == 0) {
        return;
      }
      iVar11 = iVar20 + -1;
      iVar13 = iVar2 + -2;
      iVar2 = iVar13;
      iVar20 = iVar11;
    }
    iVar13 = iVar11 * 2;
    iVar17 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      lVar14 = (longlong)iVar13;
      if (*(int *)&param_1[lVar14 + 1].field_0x8 == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = *(wchar_t **)(param_1 + lVar14 + 1);
      }
      if (*(int *)&param_1[lVar14 + 2].field_0x8 == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)(param_1 + lVar14 + 2);
      }
      iVar12 = wcscmp(pwVar15,pwVar16);
      if (iVar12 < 0) {
        iVar17 = iVar13;
      }
      iVar17 = iVar17 + 1;
    }
    pTVar19 = param_1 + iVar11;
    pTVar18 = param_1 + iVar17;
    if (*(int *)&pTVar18->field_0x8 == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = *(wchar_t **)pTVar18;
    }
    if (*(int *)&pTVar19->field_0x8 == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = *(wchar_t **)pTVar19;
    }
    iVar13 = wcscmp(pwVar15,pwVar16);
    if (-1 < iVar13) goto LAB_14172d4b7;
    uVar3 = *(undefined8 *)&pTVar18->field_0x8;
    iVar13 = iVar17 * 2 + 1;
    uVar4 = *(undefined8 *)pTVar19;
    uVar5 = *(undefined8 *)&pTVar19->field_0x8;
    uVar6 = *(undefined8 *)&pTVar19->field_0x10;
    uVar7 = *(undefined8 *)&pTVar19->field_0x18;
    uVar8 = *(undefined8 *)&pTVar19->field_0x20;
    uVar9 = *(undefined8 *)&pTVar19->field_0x28;
    *(undefined8 *)pTVar19 = *(undefined8 *)pTVar18;
    *(undefined8 *)&pTVar19->field_0x8 = uVar3;
    uVar3 = *(undefined8 *)&pTVar18->field_0x18;
    *(undefined8 *)&pTVar19->field_0x10 = *(undefined8 *)&pTVar18->field_0x10;
    *(undefined8 *)&pTVar19->field_0x18 = uVar3;
    uVar3 = *(undefined8 *)&pTVar18->field_0x28;
    *(undefined8 *)&pTVar19->field_0x20 = *(undefined8 *)&pTVar18->field_0x20;
    *(undefined8 *)&pTVar19->field_0x28 = uVar3;
    *(undefined8 *)pTVar18 = uVar4;
    *(undefined8 *)&pTVar18->field_0x8 = uVar5;
    *(undefined8 *)&pTVar18->field_0x10 = uVar6;
    *(undefined8 *)&pTVar18->field_0x18 = uVar7;
    *(undefined8 *)&pTVar18->field_0x20 = uVar8;
    *(undefined8 *)&pTVar18->field_0x28 = uVar9;
    iVar11 = iVar17;
  } while( true );
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<`FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>_>_>_>_> @ 14172d4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<_FTextLocalizationManager::DumpLiveTableImpl_::__l2::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<_private:_void___cdecl_FTextLocalizationManager::DumpLiveTableImpl(FString_const_*,FString_const_*,FString_const_*,TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>)const_::_2_::<lambda_2>_>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FTextId FVar6;
  FTextId FVar7;
  FTextId FVar8;
  FTextId FVar9;
  FTextKey FVar10;
  FTextKey FVar11;
  FTextKey FVar12;
  FTextKey FVar13;
  bool bVar14;
  int iVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar19;
  int iVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar22;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar23;
  float fVar24;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar24 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar24;
    memset(local_330,0,0x2e8);
    ppTVar19 = &local_348;
    do {
      pTVar23 = ppTVar19[1];
      pTVar22 = *ppTVar19;
      local_358 = ppTVar19[2];
      iVar15 = (int)((longlong)pTVar23 - (longlong)pTVar22 >> 5) + 1;
      pTVar21 = pTVar22;
      iVar20 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14172d5b0:
        if (8 < iVar15) {
          uVar1 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
          pTVar16 = pTVar23 + 1;
          pTVar22 = pTVar21 + iVar15 / 2;
          TVar2 = pTVar22->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x18);
          pTVar22->_s_1 = pTVar21->_s_1;
          *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 0x18) = uVar1;
          pTVar21->_s_1 = TVar2;
          *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar5;
          pTVar22 = pTVar21;
LAB_14172d5f0:
          pTVar18 = pTVar22;
          pTVar22 = pTVar18 + 1;
          if (pTVar22 <= pTVar23) goto code_r0x00014172d5f9;
          goto LAB_14172d610;
        }
        for (; pTVar16 = pTVar21, pTVar22 = pTVar21, pTVar21 < pTVar23; pTVar23 = pTVar23 + -1) {
          while (pTVar18 = pTVar16, pTVar22 = pTVar22 + 1, pTVar22 <= pTVar23) {
            bVar14 = `FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>::operator()
                               (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                                (FTextId *)&pTVar18->ElementData,(FTextId *)&pTVar22->ElementData);
            pTVar16 = pTVar22;
            if (!bVar14) {
              pTVar16 = pTVar18;
            }
          }
          FVar10.Index = *(int *)pTVar18;
          FVar11.Index = *(int *)((longlong)pTVar18 + 4);
          uVar1 = *(undefined8 *)((FTextKey *)(pTVar18->ElementData).Pad + 2);
          uVar3 = *(undefined8 *)((FTextKey *)(pTVar18->ElementData).Pad + 4);
          uVar4 = *(undefined8 *)((FTextKey *)(pTVar18->ElementData).Pad + 6);
          FVar12.Index = *(int *)pTVar23;
          FVar13.Index = *(int *)((longlong)pTVar23 + 4);
          uVar5 = *(undefined8 *)((FTextKey *)(pTVar23->ElementData).Pad + 2);
          *(int *)pTVar18 = FVar12.Index;
          *(int *)((longlong)pTVar18 + 4) = FVar13.Index;
          *(undefined8 *)((FTextKey *)(pTVar18->ElementData).Pad + 2) = uVar5;
          uVar5 = *(undefined8 *)((FTextKey *)(pTVar23->ElementData).Pad + 6);
          *(undefined8 *)((FTextKey *)(pTVar18->ElementData).Pad + 4) =
               *(undefined8 *)((FTextKey *)(pTVar23->ElementData).Pad + 4);
          *(undefined8 *)((FTextKey *)(pTVar18->ElementData).Pad + 6) = uVar5;
          *(int *)pTVar23 = FVar10.Index;
          *(int *)((longlong)pTVar23 + 4) = FVar11.Index;
          *(undefined8 *)((FTextKey *)(pTVar23->ElementData).Pad + 2) = uVar1;
          *(undefined8 *)((FTextKey *)(pTVar23->ElementData).Pad + 4) = uVar3;
          *(undefined8 *)((FTextKey *)(pTVar23->ElementData).Pad + 6) = uVar4;
        }
        goto LAB_14172d704;
      }
LAB_14172d6f3:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FTextId,FTextLocalizationManager::FDisplayStringEntry>,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>::FKeyComparisonClass<_FTextLocalizationManager::DumpLiveTableImpl_::__l2::<lambda_2>_>_>_>_>
                (pTVar22,iVar15,param_3,param_4);
LAB_14172d704:
      ppTVar19 = ppTVar19 + -3;
    } while (&local_348 <= ppTVar19);
  }
  return;
code_r0x00014172d5f9:
  bVar14 = `FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>::operator()
                     (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                      (FTextId *)&pTVar21->ElementData,(FTextId *)&pTVar22->ElementData);
  if (!bVar14) goto LAB_14172d5f0;
LAB_14172d610:
  do {
    pTVar17 = pTVar16;
    pTVar16 = pTVar17 + -1;
    if (pTVar16 <= pTVar21) break;
    bVar14 = `FTextLocalizationManager::DumpLiveTableImpl'::__l2::<lambda_2>::operator()
                       (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                        (FTextId *)&pTVar16->ElementData,(FTextId *)&pTVar21->ElementData);
  } while (!bVar14);
  FVar6 = *(FTextId *)((longlong)pTVar17 + -0x18);
  if (pTVar22 <= pTVar16) {
    TVar2 = pTVar22->_s_1;
    FVar7 = *(FTextId *)((longlong)pTVar18 + 0x28);
    FVar8 = *(FTextId *)((longlong)pTVar18 + 0x30);
    FVar9 = *(FTextId *)((longlong)pTVar18 + 0x38);
    pTVar22->_s_1 = pTVar16->_s_1;
    *(FTextId *)((longlong)pTVar18 + 0x28) = FVar6;
    FVar6 = *(FTextId *)((longlong)pTVar17 + -8);
    *(FTextId *)((longlong)pTVar18 + 0x30) = *(FTextId *)((longlong)pTVar17 + -0x10);
    *(FTextId *)((longlong)pTVar18 + 0x38) = FVar6;
    pTVar16->_s_1 = TVar2;
    *(FTextId *)((longlong)pTVar17 + -0x18) = FVar7;
    *(FTextId *)((longlong)pTVar17 + -0x10) = FVar8;
    *(FTextId *)((longlong)pTVar17 + -8) = FVar9;
    goto LAB_14172d5f0;
  }
  TVar2 = pTVar21->_s_1;
  FVar7 = *(FTextId *)((pTVar21->ElementData).Pad + 8);
  FVar8 = *(FTextId *)((pTVar21->ElementData).Pad + 0x10);
  FVar9 = *(FTextId *)((pTVar21->ElementData).Pad + 0x18);
  pTVar21->_s_1 = pTVar16->_s_1;
  *(FTextId *)((pTVar21->ElementData).Pad + 8) = FVar6;
  iVar20 = iVar20 + -1;
  FVar6 = *(FTextId *)((longlong)pTVar17 + -8);
  *(FTextId *)((pTVar21->ElementData).Pad + 0x10) = *(FTextId *)((longlong)pTVar17 + -0x10);
  *(FTextId *)((pTVar21->ElementData).Pad + 0x18) = FVar6;
  pTVar16->_s_1 = TVar2;
  *(FTextId *)((longlong)pTVar17 + -0x18) = FVar7;
  *(FTextId *)((longlong)pTVar17 + -0x10) = FVar8;
  *(FTextId *)((longlong)pTVar17 + -8) = FVar9;
  if ((longlong)((longlong)pTVar16 + (-0x20 - (longlong)pTVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar23 - (longlong)pTVar22 & 0xffffffffffffffe0U)) {
    if (pTVar22 < pTVar23) {
      *ppTVar19 = pTVar22;
      ppTVar19[1] = pTVar23;
      *(int *)(ppTVar19 + 2) = iVar20;
      ppTVar19 = ppTVar19 + 3;
    }
    if (pTVar16 <= pTVar21 + 1) goto LAB_14172d704;
    pTVar23 = pTVar17 + -2;
    pTVar22 = pTVar21;
  }
  else {
    if (pTVar21 + 1 < pTVar16) {
      *ppTVar19 = pTVar21;
      ppTVar19[1] = pTVar17 + -2;
      *(int *)(ppTVar19 + 2) = iVar20;
      ppTVar19 = ppTVar19 + 3;
    }
    if (pTVar23 <= pTVar22) goto LAB_14172d704;
  }
  iVar15 = (int)((longlong)pTVar23 - (longlong)pTVar22 >> 5) + 1;
  pTVar21 = pTVar22;
  if (iVar20 == 0) goto LAB_14172d6f3;
  goto LAB_14172d5b0;
}

// IntroSortInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess> @ 14172d7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
          (TTuple<FString,FFormatArgumentValue> *param_1,int param_2,FKeyForward param_3,
          FLocKeySortedMapLess param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int iVar10;
  wchar_t *pwVar11;
  TTuple<FString,FFormatArgumentValue> *pTVar12;
  TTuple<FString,FFormatArgumentValue> *pTVar13;
  int iVar14;
  TTuple<FString,FFormatArgumentValue> **ppTVar15;
  TTuple<FString,FFormatArgumentValue> *pTVar16;
  TTuple<FString,FFormatArgumentValue> *pTVar17;
  TTuple<FString,FFormatArgumentValue> *pTVar18;
  TTuple<FString,FFormatArgumentValue> *pTVar19;
  float fVar20;
  undefined1 auStack_398 [48];
  TTuple<FString,FFormatArgumentValue> *local_368;
  TTuple<FString,FFormatArgumentValue> *local_358;
  TTuple<FString,FFormatArgumentValue> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar20;
    memset(local_340,0,0x2e8);
    ppTVar15 = &local_358;
    do {
      pTVar12 = ppTVar15[1];
      pTVar19 = *ppTVar15;
      local_368 = ppTVar15[2];
      iVar10 = (int)(((longlong)pTVar12 - (longlong)pTVar19) / 0x30) + 1;
      pTVar18 = pTVar19;
      iVar14 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_14172d8c0:
        if (8 < iVar10) {
          uVar1 = *(undefined8 *)&pTVar18->field_0x8;
          pTVar16 = pTVar12 + 1;
          pTVar19 = pTVar18 + iVar10 / 2;
          uVar2 = *(undefined8 *)pTVar19;
          uVar3 = *(undefined8 *)&pTVar19->field_0x8;
          uVar4 = *(undefined8 *)&pTVar19->field_0x10;
          uVar5 = *(undefined8 *)&pTVar19->field_0x18;
          uVar6 = *(undefined8 *)&pTVar19->field_0x20;
          uVar7 = *(undefined8 *)&pTVar19->field_0x28;
          *(undefined8 *)pTVar19 = *(undefined8 *)pTVar18;
          *(undefined8 *)&pTVar19->field_0x8 = uVar1;
          uVar1 = *(undefined8 *)&pTVar18->field_0x18;
          *(undefined8 *)&pTVar19->field_0x10 = *(undefined8 *)&pTVar18->field_0x10;
          *(undefined8 *)&pTVar19->field_0x18 = uVar1;
          uVar1 = *(undefined8 *)&pTVar18->field_0x28;
          *(undefined8 *)&pTVar19->field_0x20 = *(undefined8 *)&pTVar18->field_0x20;
          *(undefined8 *)&pTVar19->field_0x28 = uVar1;
          *(undefined8 *)pTVar18 = uVar2;
          *(undefined8 *)&pTVar18->field_0x8 = uVar3;
          *(undefined8 *)&pTVar18->field_0x10 = uVar4;
          *(undefined8 *)&pTVar18->field_0x18 = uVar5;
          *(undefined8 *)&pTVar18->field_0x20 = uVar6;
          *(undefined8 *)&pTVar18->field_0x28 = uVar7;
          pTVar19 = pTVar18;
LAB_14172d917:
          pTVar13 = pTVar19;
          pTVar19 = pTVar13 + 1;
          if (pTVar19 <= pTVar12) goto code_r0x00014172d920;
          goto LAB_14172d951;
        }
        for (; pTVar16 = pTVar18, pTVar19 = pTVar18, pTVar18 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar13 = pTVar16, pTVar19 = pTVar19 + 1, pTVar19 <= pTVar12) {
            if (*(int *)&pTVar19->field_0x8 == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = *(wchar_t **)pTVar19;
            }
            if (*(int *)&pTVar13->field_0x8 == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = *(wchar_t **)pTVar13;
            }
            iVar14 = wcscmp(pwVar8,pwVar11);
            pTVar16 = pTVar19;
            if (-1 < iVar14) {
              pTVar16 = pTVar13;
            }
          }
          uVar1 = *(undefined8 *)pTVar13;
          uVar2 = *(undefined8 *)&pTVar13->field_0x8;
          uVar3 = *(undefined8 *)&pTVar13->field_0x10;
          uVar4 = *(undefined8 *)&pTVar13->field_0x18;
          uVar5 = *(undefined8 *)&pTVar13->field_0x20;
          uVar6 = *(undefined8 *)&pTVar13->field_0x28;
          uVar7 = *(undefined8 *)&pTVar12->field_0x8;
          *(undefined8 *)pTVar13 = *(undefined8 *)pTVar12;
          *(undefined8 *)&pTVar13->field_0x8 = uVar7;
          uVar7 = *(undefined8 *)&pTVar12->field_0x18;
          *(undefined8 *)&pTVar13->field_0x10 = *(undefined8 *)&pTVar12->field_0x10;
          *(undefined8 *)&pTVar13->field_0x18 = uVar7;
          uVar7 = *(undefined8 *)&pTVar12->field_0x28;
          *(undefined8 *)&pTVar13->field_0x20 = *(undefined8 *)&pTVar12->field_0x20;
          *(undefined8 *)&pTVar13->field_0x28 = uVar7;
          *(undefined8 *)pTVar12 = uVar1;
          *(undefined8 *)&pTVar12->field_0x8 = uVar2;
          *(undefined8 *)&pTVar12->field_0x10 = uVar3;
          *(undefined8 *)&pTVar12->field_0x18 = uVar4;
          *(undefined8 *)&pTVar12->field_0x20 = uVar5;
          *(undefined8 *)&pTVar12->field_0x28 = uVar6;
        }
        goto LAB_14172dad1;
      }
LAB_14172dab7:
      HeapSortInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                (pTVar19,iVar10,param_3,param_4);
LAB_14172dad1:
      ppTVar15 = ppTVar15 + -3;
    } while (&local_358 <= ppTVar15);
  }
  return;
code_r0x00014172d920:
  if (*(int *)&pTVar13[1].field_0x8 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = *(wchar_t **)pTVar19;
  }
  if (*(int *)&pTVar18->field_0x8 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)pTVar18;
  }
  iVar10 = wcscmp(pwVar8,pwVar11);
  if (-1 < iVar10) goto LAB_14172d917;
LAB_14172d951:
  do {
    pTVar17 = pTVar16;
    pTVar16 = pTVar17 + -1;
    if (pTVar16 <= pTVar18) break;
    if (*(int *)&pTVar18->field_0x8 == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)pTVar18;
    }
    if (*(int *)&pTVar17[-1].field_0x8 == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)pTVar16;
    }
    iVar10 = wcscmp(pwVar8,pwVar11);
  } while (-1 < iVar10);
  uVar1 = *(undefined8 *)&pTVar17[-1].field_0x8;
  if (pTVar19 <= pTVar16) {
    uVar2 = *(undefined8 *)pTVar19;
    uVar3 = *(undefined8 *)&pTVar13[1].field_0x8;
    uVar4 = *(undefined8 *)&pTVar13[1].field_0x10;
    uVar5 = *(undefined8 *)&pTVar13[1].field_0x18;
    uVar6 = *(undefined8 *)&pTVar13[1].field_0x20;
    uVar7 = *(undefined8 *)&pTVar13[1].field_0x28;
    *(undefined8 *)pTVar19 = *(undefined8 *)pTVar16;
    *(undefined8 *)&pTVar13[1].field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pTVar17[-1].field_0x18;
    *(undefined8 *)&pTVar13[1].field_0x10 = *(undefined8 *)&pTVar17[-1].field_0x10;
    *(undefined8 *)&pTVar13[1].field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&pTVar17[-1].field_0x28;
    *(undefined8 *)&pTVar13[1].field_0x20 = *(undefined8 *)&pTVar17[-1].field_0x20;
    *(undefined8 *)&pTVar13[1].field_0x28 = uVar1;
    *(undefined8 *)pTVar16 = uVar2;
    *(undefined8 *)&pTVar17[-1].field_0x8 = uVar3;
    *(undefined8 *)&pTVar17[-1].field_0x10 = uVar4;
    *(undefined8 *)&pTVar17[-1].field_0x18 = uVar5;
    *(undefined8 *)&pTVar17[-1].field_0x20 = uVar6;
    *(undefined8 *)&pTVar17[-1].field_0x28 = uVar7;
    goto LAB_14172d917;
  }
  uVar2 = *(undefined8 *)pTVar18;
  uVar3 = *(undefined8 *)&pTVar18->field_0x8;
  uVar4 = *(undefined8 *)&pTVar18->field_0x10;
  uVar5 = *(undefined8 *)&pTVar18->field_0x18;
  uVar6 = *(undefined8 *)&pTVar18->field_0x20;
  uVar7 = *(undefined8 *)&pTVar18->field_0x28;
  lVar9 = (longlong)pTVar16 + (-0x30 - (longlong)pTVar18);
  iVar14 = iVar14 + -1;
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  *(undefined8 *)pTVar18 = *(undefined8 *)pTVar16;
  *(undefined8 *)&pTVar18->field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&pTVar17[-1].field_0x18;
  *(undefined8 *)&pTVar18->field_0x10 = *(undefined8 *)&pTVar17[-1].field_0x10;
  *(undefined8 *)&pTVar18->field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&pTVar17[-1].field_0x28;
  *(undefined8 *)&pTVar18->field_0x20 = *(undefined8 *)&pTVar17[-1].field_0x20;
  *(undefined8 *)&pTVar18->field_0x28 = uVar1;
  *(undefined8 *)pTVar16 = uVar2;
  *(undefined8 *)&pTVar17[-1].field_0x8 = uVar3;
  *(undefined8 *)&pTVar17[-1].field_0x10 = uVar4;
  *(undefined8 *)&pTVar17[-1].field_0x18 = uVar5;
  *(undefined8 *)&pTVar17[-1].field_0x20 = uVar6;
  *(undefined8 *)&pTVar17[-1].field_0x28 = uVar7;
  if ((lVar9 >> 3) - (lVar9 >> 0x3f) < ((longlong)pTVar12 - (longlong)pTVar19) / 0x30) {
    if (pTVar19 < pTVar12) {
      *ppTVar15 = pTVar19;
      ppTVar15[1] = pTVar12;
      *(int *)(ppTVar15 + 2) = iVar14;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar16 <= pTVar18 + 1) goto LAB_14172dad1;
    pTVar12 = pTVar17 + -2;
    pTVar19 = pTVar18;
  }
  else {
    if (pTVar18 + 1 < pTVar16) {
      *ppTVar15 = pTVar18;
      ppTVar15[1] = pTVar17 + -2;
      *(int *)(ppTVar15 + 2) = iVar14;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar12 <= pTVar19) goto LAB_14172dad1;
  }
  iVar10 = (int)(((longlong)pTVar12 - (longlong)pTVar19) / 0x30) + 1;
  pTVar18 = pTVar19;
  if (iVar14 == 0) goto LAB_14172dab7;
  goto LAB_14172d8c0;
}

// LexToString<FString,double> @ 14172dbe0

FString * __cdecl LexToString<FString,double>(FString *__return_storage_ptr__,double *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// LexToString<FString,__int64> @ 14172dc10

FString * __cdecl LexToString<FString,__int64>(FString *__return_storage_ptr__,long64 *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// LowerBoundInternal<TTuple<FTextFormatString,FTextFormatString>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_> @ 14172dc40

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FTextFormatString,FTextFormatString>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
          (TTuple<FTextFormatString,FTextFormatString> *param_1,int param_2,
          FTextFormatString *param_3,FKeyForward param_4,TLess<FTextFormatString_const_&> param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar2 = *(int *)&param_1[iVar1].field_0x8;
      if (iVar2 < param_3->StringLen) {
        uVar3 = 1;
      }
      else if (param_3->StringLen < iVar2) {
        uVar3 = 0;
      }
      else {
        uVar3 = wcsncmp(*(wchar_t **)(param_1 + iVar1),param_3->StringPtr,(longlong)iVar2);
        uVar3 = uVar3 >> 0x1f;
      }
      if (uVar3 != 0) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_> @ 14172dce0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
          (TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
           *param_1,int param_2,FTextFormatString *param_3,FKeyForward param_4,
          TLess<FTextFormatString_const_&> param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar2 = *(int *)&param_1[iVar1].field_0x8;
      if (iVar2 < param_3->StringLen) {
        uVar3 = 1;
      }
      else if (param_3->StringLen < iVar2) {
        uVar3 = 0;
      }
      else {
        uVar3 = wcsncmp(*(wchar_t **)(param_1 + iVar1),param_3->StringPtr,(longlong)iVar2);
        uVar3 = uVar3 >> 0x1f;
      }
      if (uVar3 != 0) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar4;
}

// LowerBoundInternal<TTuple<FTextFormatString,FTextFormat>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_> @ 14172dd80

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FTextFormatString,FTextFormat>_const_,int,FTextFormatString,TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>::FKeyForward,TLess<FTextFormatString_const_&>_>
          (TTuple<FTextFormatString,FTextFormat> *param_1,int param_2,FTextFormatString *param_3,
          FKeyForward param_4,TLess<FTextFormatString_const_&> param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar2 = *(int *)&param_1[iVar1].field_0x8;
      if (iVar2 < param_3->StringLen) {
        uVar3 = 1;
      }
      else if (param_3->StringLen < iVar2) {
        uVar3 = 0;
      }
      else {
        uVar3 = wcsncmp(*(wchar_t **)(param_1 + iVar1),param_3->StringPtr,(longlong)iVar2);
        uVar3 = uVar3 >> 0x1f;
      }
      if (uVar3 != 0) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar4;
}

// MakeRefCount<FTextHistory_ArgumentDataFormat> @ 14172de20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TRefCountPtr<FTextHistory_ArgumentDataFormat> __cdecl
MakeRefCount<FTextHistory_ArgumentDataFormat>(void)

{
  undefined8 *puVar1;
  FTextHistory_ArgumentDataFormat *in_RCX;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &___7FTextHistory_ArgumentDataFormat__6B_;
    FTextFormat::FTextFormat((FTextFormat *)(puVar1 + 5));
    puVar1[7] = 0;
    puVar1[8] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_ArgumentDataFormat>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_ArgumentDataFormat>)in_RCX;
}

// MakeRefCount<FTextHistory_AsCurrency> @ 14172ded0

TRefCountPtr<FTextHistory_AsCurrency> __cdecl MakeRefCount<FTextHistory_AsCurrency>(void)

{
  undefined8 *puVar1;
  FText *pFVar2;
  FTextHistory_AsCurrency *in_RCX;
  
  puVar1 = operator_new(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    *puVar1 = &___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)(puVar1 + 5) = 4;
    pFVar2 = FText::GetEmpty();
    TOptional<FText>::TOptional<FText>((TOptional<FText> *)(puVar1 + 7),pFVar2);
    *(undefined1 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &___7FTextHistory_AsCurrency__6B_;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_AsCurrency>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_AsCurrency>)in_RCX;
}

// MakeRefCount<FTextHistory_AsDate> @ 14172df90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TRefCountPtr<FTextHistory_AsDate> __cdecl MakeRefCount<FTextHistory_AsDate>(void)

{
  undefined8 *puVar1;
  FTextHistory_AsDate *in_RCX;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &___7FTextHistory_AsDate__6B_;
    puVar1[5] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_AsDate>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_AsDate>)in_RCX;
}

// MakeRefCount<FTextHistory_AsDateTime> @ 14172e010

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TRefCountPtr<FTextHistory_AsDateTime> __cdecl MakeRefCount<FTextHistory_AsDateTime>(void)

{
  undefined8 *puVar1;
  FTextHistory_AsDateTime *in_RCX;
  
  puVar1 = operator_new(0x68);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &___7FTextHistory_AsDateTime__6B_;
    puVar1[5] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_AsDateTime>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_AsDateTime>)in_RCX;
}

// MakeRefCount<FTextHistory_AsNumber> @ 14172e090

TRefCountPtr<FTextHistory_AsNumber> __cdecl MakeRefCount<FTextHistory_AsNumber>(void)

{
  undefined8 *puVar1;
  FText *pFVar2;
  FTextHistory_AsNumber *in_RCX;
  
  puVar1 = operator_new(0x78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)(puVar1 + 5) = 4;
    pFVar2 = FText::GetEmpty();
    TOptional<FText>::TOptional<FText>((TOptional<FText> *)(puVar1 + 7),pFVar2);
    *(undefined1 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &___7FTextHistory_AsNumber__6B_;
    *(undefined8 **)in_RCX = puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_AsNumber>)in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  return (TRefCountPtr<FTextHistory_AsNumber>)in_RCX;
}

// MakeRefCount<FTextHistory_AsPercent> @ 14172e140

TRefCountPtr<FTextHistory_AsPercent> __cdecl MakeRefCount<FTextHistory_AsPercent>(void)

{
  undefined8 *puVar1;
  FText *pFVar2;
  FTextHistory_AsPercent *in_RCX;
  
  puVar1 = operator_new(0x78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &___7FTextHistory_FormatNumber__6B_;
    *(undefined4 *)(puVar1 + 5) = 4;
    pFVar2 = FText::GetEmpty();
    TOptional<FText>::TOptional<FText>((TOptional<FText> *)(puVar1 + 7),pFVar2);
    *(undefined1 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &___7FTextHistory_AsPercent__6B_;
    *(undefined8 **)in_RCX = puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_AsPercent>)in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  return (TRefCountPtr<FTextHistory_AsPercent>)in_RCX;
}

// MakeRefCount<FTextHistory_AsTime> @ 14172e1f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TRefCountPtr<FTextHistory_AsTime> __cdecl MakeRefCount<FTextHistory_AsTime>(void)

{
  undefined8 *puVar1;
  FTextHistory_AsTime *in_RCX;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &___7FTextHistory_AsTime__6B_;
    puVar1[5] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_AsTime>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_AsTime>)in_RCX;
}

// MakeRefCount<FTextHistory_Base> @ 14172e270

TRefCountPtr<FTextHistory_Base> __cdecl MakeRefCount<FTextHistory_Base>(void)

{
  undefined8 *puVar1;
  FTextHistory_Base *in_RCX;
  
  puVar1 = operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *puVar1 = &___7FTextHistory_Base__6B_;
    puVar1[3] = 0xffffffffffffffff;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_Base>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_Base>)in_RCX;
}

// MakeRefCount<FTextHistory_NamedFormat> @ 14172e2e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TRefCountPtr<FTextHistory_NamedFormat> __cdecl MakeRefCount<FTextHistory_NamedFormat>(void)

{
  undefined8 *puVar1;
  FTextHistory_NamedFormat *in_RCX;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &___7FTextHistory_NamedFormat__6B_;
    FTextFormat::FTextFormat((FTextFormat *)(puVar1 + 5));
    puVar1[7] = 0;
    puVar1[8] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_NamedFormat>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_NamedFormat>)in_RCX;
}

// MakeRefCount<FTextHistory_OrderedFormat> @ 14172e390

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TRefCountPtr<FTextHistory_OrderedFormat> __cdecl MakeRefCount<FTextHistory_OrderedFormat>(void)

{
  undefined8 *puVar1;
  FTextHistory_OrderedFormat *in_RCX;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &___7FTextHistory_OrderedFormat__6B_;
    FTextFormat::FTextFormat((FTextFormat *)(puVar1 + 5));
    puVar1[7] = 0;
    puVar1[8] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_OrderedFormat>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_OrderedFormat>)in_RCX;
}

// MakeRefCount<FTextHistory_StringTableEntry> @ 14172e440

TRefCountPtr<FTextHistory_StringTableEntry> __cdecl
MakeRefCount<FTextHistory_StringTableEntry>(void)

{
  undefined8 *puVar1;
  FTextHistory_StringTableEntry *in_RCX;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x17) = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *puVar1 = &___7FTextHistory_StringTableEntry__6B_;
    puVar1[3] = 0;
    puVar1[4] = 0;
    in_RCX->_padding_ = (longlong)puVar1;
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_StringTableEntry>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_StringTableEntry>)in_RCX;
}

// MakeRefCount<FTextHistory_Transform> @ 14172e4a0

TRefCountPtr<FTextHistory_Transform> __cdecl MakeRefCount<FTextHistory_Transform>(void)

{
  ITextData *pIVar1;
  undefined8 *puVar2;
  FText *pFVar3;
  FTextHistory_Transform *in_RCX;
  undefined1 local_res8 [8];
  
  puVar2 = operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar2 + 0x11) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x15) = 0;
    *(undefined1 *)((longlong)puVar2 + 0x17) = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &___7FTextHistory_Transform__6B_;
    pFVar3 = FText::GetEmpty();
    puVar2[5] = 0;
    pIVar1 = (pFVar3->TextData).Reference;
    puVar2[5] = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    *(undefined4 *)(puVar2 + 6) = 0;
    in_RCX->_padding_ = (longlong)puVar2;
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    return (TRefCountPtr<FTextHistory_Transform>)in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TRefCountPtr<FTextHistory_Transform>)in_RCX;
}

// MakeShared<FTextHistory_StringTableEntry::FStringTableReferenceData,1> @ 14172e550

TSharedRef<FTextHistory_StringTableEntry::FStringTableReferenceData,1> * __cdecl
MakeShared<FTextHistory_StringTableEntry::FStringTableReferenceData,1>
          (TSharedRef<FTextHistory_StringTableEntry::FStringTableReferenceData,1>
           *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = operator_new(0x70);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStringTableReferenceData_FTextHistory_StringTableEntry___00_SharedPointerInternals__6B_
    ;
    pTVar1[1]._padding_ = 0;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[4]._padding_ = 0;
    pTVar1[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[5]._padding_ = 0;
    pTVar1[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[6]._padding_ = 0;
    pTVar1[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar1[4].SharedReferenceCount,4000);
  }
  TSharedRef<FTextHistory_StringTableEntry::FStringTableReferenceData,1>::
  TSharedRef<FTextHistory_StringTableEntry::FStringTableReferenceData,1>
            (__return_storage_ptr__,(FStringTableReferenceData *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_> @ 14172e5e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<FTextFormatData,1> * __cdecl
MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
          (TSharedRef<FTextFormatData,1> *__return_storage_ptr__,FString *param_1,
          ETextFormatFlags *param_2,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_3)

{
  FTextFormatPatternDefinition *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FText *pFVar7;
  TSharedRef<FTextFormatData,1> *pTVar8;
  undefined1 local_res8 [8];
  
  pTVar6 = operator_new(0x98);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTextFormatData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTextFormatData___00_SharedPointerInternals__6B_;
    pFVar1 = param_3->Object;
    pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      *(ETextFormatFlags *)((longlong)&pTVar6[1]._padding_ + 1) = *param_2;
      *(undefined1 *)&pTVar6[1]._padding_ = 1;
      *(FTextFormatPatternDefinition **)&pTVar6[1].SharedReferenceCount = pFVar1;
      pTVar6[2]._padding_ = 0;
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      *(ETextFormatFlags *)((longlong)&pTVar6[1]._padding_ + 1) = *param_2;
      *(undefined1 *)&pTVar6[1]._padding_ = 1;
      *(FTextFormatPatternDefinition **)&pTVar6[1].SharedReferenceCount = pFVar1;
      pTVar6[2]._padding_ = (longlong)pTVar2;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7 = FText::GetEmpty();
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pIVar3 = (pFVar7->TextData).Reference;
    *(ITextData **)&pTVar6[2].SharedReferenceCount = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    *(undefined4 *)&pTVar6[3]._padding_ = 0;
    pTVar6[4]._padding_ = 0;
    *(undefined1 *)&pTVar6[3].SharedReferenceCount = 0;
    pTVar6[4]._padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)(param_1->Data).ArrayNum;
    pTVar6[4].WeakReferenceCount = (atomic<int>)(param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    pTVar6[5]._padding_ = 0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[7]._padding_ = 0;
    pTVar6[8]._padding_ = 0;
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[8].WeakReferenceCount = (atomic<int>)0x0;
    FTextFormatData::Compile_NoLock((FTextFormatData *)(pTVar6 + 1));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    __return_storage_ptr__->Object = (FTextFormatData *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    if ((FTextFormatData *)(pTVar6 + 1) == (FTextFormatData *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedRef<FTextFormatData,1> *)(*pcVar4)();
        return pTVar8;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_> @ 14172e760

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedRef<FTextFormatData,1> * __cdecl
MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
          (TSharedRef<FTextFormatData,1> *__return_storage_ptr__,FText *param_1,
          ETextFormatFlags *param_2,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FTextFormatData,1> *pTVar4;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_18;
  
  pTVar3 = operator_new(0x98);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FTextFormatData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFTextFormatData___00_SharedPointerInternals__6B_;
    local_18.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    local_18.Object = param_3->Object;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTextFormatData::FTextFormatData((FTextFormatData *)(pTVar3 + 1),param_1,*param_2,&local_18);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FTextFormatData *)(pTVar3 + 1);
    if ((FTextFormatData *)(pTVar3 + 1) == (FTextFormatData *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FTextFormatData,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FTextFormatPatternDefinition,1> @ 14172e850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<FTextFormatPatternDefinition,1> * __cdecl
MakeShared<FTextFormatPatternDefinition,1>
          (TSharedRef<FTextFormatPatternDefinition,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined **local_48;
  TReferenceControllerBase<1> *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  pTVar2 = operator_new(0x40);
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    pTVar2 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTextFormatPatternDefinition___00_SharedPointerInternals__6B_
    ;
    pTVar1 = pTVar2 + 1;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_1>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    pTVar1->_padding_ = 0;
    pTVar2[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[2]._padding_ = 0x7b0060;
    *(undefined4 *)((longlong)&pTVar2[2]._padding_ + 4) = 0x7c007d;
    *(undefined1 *)&pTVar2[2].SharedReferenceCount = 0;
    pTVar2[3]._padding_ = 0;
    pTVar2[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[3].WeakReferenceCount = (atomic<int>)0x0;
    local_30 = (undefined ***)0x0;
    local_40 = pTVar1;
    TTokenDefinitions<wchar_t>::DefineToken
              ((TTokenDefinitions<wchar_t> *)&pTVar2[2].SharedReferenceCount,
               (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar3 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar3 = local_30;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_2>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_2>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    local_40 = pTVar1;
    TTokenDefinitions<wchar_t>::DefineToken
              ((TTokenDefinitions<wchar_t> *)&pTVar2[2].SharedReferenceCount,
               (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar3 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar3 = local_30;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_3>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_3>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    local_40 = pTVar1;
    TTokenDefinitions<wchar_t>::DefineToken
              ((TTokenDefinitions<wchar_t> *)&pTVar2[2].SharedReferenceCount,
               (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar3 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar3 = local_30;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_4>,0,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_4>,TOptional<FExpressionError>,TExpressionTokenConsumer<wchar_t>_&>
                  ::Call;
    local_40 = pTVar1;
    TTokenDefinitions<wchar_t>::DefineToken
              ((TTokenDefinitions<wchar_t> *)&pTVar2[2].SharedReferenceCount,
               (TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
                *)local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar3 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar3 = local_30;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  TSharedRef<FTextFormatPatternDefinition,1>::TSharedRef<FTextFormatPatternDefinition,1>
            (__return_storage_ptr__,(FTextFormatPatternDefinition *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// Merge<TSharedPtr<ILocalizedTextSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ILocalizedTextSource,1>,`FTextLocalizationManager::RegisterTextSource'::__l2::<lambda_1>_>_> @ 14172ea40

void __cdecl
AlgoImpl::
Merge<TSharedPtr<ILocalizedTextSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ILocalizedTextSource,1>,_FTextLocalizationManager::RegisterTextSource_::__l2::<lambda_1>_>_>
          (TSharedPtr<ILocalizedTextSource,1> *param_1,int param_2,int param_3,
          FIdentityFunctor param_4,
          TDereferenceWrapper<TSharedPtr<ILocalizedTextSource,1>,_public:_void___cdecl_FTextLocalizationManager::RegisterTextSource(TSharedRef<ILocalizedTextSource,1>_const_&,bool)_::_2_::<lambda_1>_>
          param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  ILocalizedTextSource *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TSharedPtr<ILocalizedTextSource,1> *pTVar7;
  TSharedPtr<ILocalizedTextSource,1> *pTVar9;
  int iVar10;
  TSharedPtr<ILocalizedTextSource,1> *pTVar11;
  TSharedPtr<ILocalizedTextSource,1> *pTVar12;
  TSharedPtr<ILocalizedTextSource,1> *pTVar13;
  uint uVar14;
  uint uVar15;
  int local_58;
  TSharedPtr<ILocalizedTextSource,1> *pTVar8;
  
  if (0 < param_2) {
    local_58 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar10 = 0;
      if (0 < param_2 - local_58) {
        uVar15 = param_2 - local_58;
        iVar10 = 0;
        do {
          uVar14 = uVar15 >> 1;
          bVar4 = `FTextLocalizationManager::RegisterTextSource'::__l2::<lambda_1>::operator()
                            (param_5.Predicate,param_1 + param_2,
                             param_1 + (longlong)(int)(uVar14 + iVar10) + (longlong)local_58);
          if (!bVar4) {
            iVar10 = uVar14 + iVar10 + (uVar15 & 1);
          }
          uVar15 = uVar14;
        } while (uVar14 != 0);
      }
      local_58 = local_58 + iVar10;
      if (param_2 <= local_58) {
        return;
      }
      iVar10 = 0;
      pTVar11 = param_1 + local_58;
      uVar15 = param_3 - param_2;
      if (0 < (int)uVar15) {
        do {
          uVar14 = uVar15 >> 1;
          bVar4 = `FTextLocalizationManager::RegisterTextSource'::__l2::<lambda_1>::operator()
                            (param_5.Predicate,
                             param_1 + (longlong)(int)(uVar14 + iVar10) + (longlong)param_2,pTVar11)
          ;
          if (bVar4) {
            iVar10 = uVar14 + iVar10 + (uVar15 & 1);
          }
          uVar15 = uVar14;
        } while (uVar14 != 0);
      }
      iVar5 = (iVar10 - local_58) + param_2;
      iVar6 = param_2 - local_58;
      if ((iVar6 != 0) && (iVar6 < iVar5)) {
        pTVar7 = pTVar11 + iVar6;
        pTVar12 = pTVar11;
        pTVar8 = pTVar11 + iVar6;
        do {
          while( true ) {
            pTVar9 = pTVar7 + 1;
            pTVar13 = pTVar12 + 1;
            pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
            pIVar2 = pTVar12->Object;
            pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
            pTVar12->Object = pTVar7->Object;
            (pTVar12->SharedReferenceCount).ReferenceController = pTVar1;
            pTVar7->Object = pIVar2;
            (pTVar7->SharedReferenceCount).ReferenceController = pTVar3;
            pTVar12 = pTVar13;
            if (pTVar9 == pTVar11 + iVar5) break;
            pTVar7 = pTVar9;
            if (pTVar13 == pTVar8) {
              pTVar8 = pTVar9;
            }
          }
          pTVar7 = pTVar8;
        } while (pTVar13 != pTVar8);
      }
      local_58 = local_58 + 1 + iVar10;
      param_2 = param_2 + iVar10;
    } while (local_58 < param_2);
  }
  return;
}

// NumberToString<__int64> @ 14172ec70

void __cdecl
FastDecimalFormat::NumberToString<__int64>
          (long64 param_1,FDecimalNumberFormattingRules *param_2,FNumberFormattingOptions *param_3,
          FString *param_4)

{
  bool bVar1;
  ulong64 uVar2;
  FNumberFormattingOptions local_28;
  
  local_28.AlwaysSign = param_3->AlwaysSign;
  local_28.UseGrouping = param_3->UseGrouping;
  local_28.IndicateNearlyInteger = param_3->IndicateNearlyInteger;
  local_28._3_1_ = param_3->field_0x3;
  local_28.RoundingMode = param_3->RoundingMode;
  local_28.MinimumIntegralDigits = param_3->MinimumIntegralDigits;
  local_28.MaximumIntegralDigits = param_3->MaximumIntegralDigits;
  local_28.MinimumFractionalDigits = param_3->MinimumFractionalDigits;
  local_28.MaximumFractionalDigits = param_3->MaximumFractionalDigits;
  bVar1 = (bool)-(char)(param_1 >> 0x3f);
  uVar2 = -param_1;
  if (bVar1 == false) {
    uVar2 = param_1;
  }
  Internal::IntegralToString(bVar1,uVar2,param_2,&local_28,param_4);
  return;
}

// ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t> @ 14172ecc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
          (wchar_t *param_1,int param_2,int param_3,TFunctionRef<void___cdecl(int)> *param_4,
          <lambda_1> param_5,EParallelForFlags param_6,TArrayView<std::nullptr_t,int> *param_7)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulonglong uVar4;
  code *pcVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  atomic<unsigned_int> aVar14;
  ETaskTag EVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar18;
  FParallelForData *pFVar19;
  FTaskGraphInterface *pFVar20;
  bool *pbVar21;
  int iVar22;
  atomic<int> aVar23;
  FNameEntryId FVar24;
  ulonglong uVar25;
  FName FVar26;
  int iVar27;
  atomic<unsigned_int> aVar28;
  FParallelForData *pFVar29;
  uint uVar30;
  bool bVar31;
  ETaskPriority local_98;
  FColor_u_0 local_94;
  FEventRef local_90;
  uint local_88;
  uint uStack_84;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_80;
  int local_78;
  char local_74;
  FName local_70;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_68;
  FName local_60;
  FName local_50 [2];
  
  if (param_2 == 0) {
    return;
  }
  pFVar29 = (FParallelForData *)0x0;
  aVar14 = (atomic<unsigned_int>)0x0;
  FVar18 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar17 = ::FName::FName(local_50,"STAT_ParallelFor");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar17,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar18;
  bVar7 = false;
  bVar8 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar9 = false;
  bVar31 = false;
  FVar24 = FVar26.ComparisonIndex.Value;
  uVar30 = FVar26.Number;
  if ((FVar24.Value == 0) && (bVar12 = bVar7, bVar3 = bVar8, uVar30 == 0)) {
LAB_14172ee23:
    bVar8 = bVar31;
    bVar7 = bVar9;
    bVar9 = false;
    FVar26 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_94.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_94._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      bVar31 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar24.Value;
        local_70.Number = uVar30;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
        bVar31 = true;
      }
    }
    bVar12 = bVar7;
    bVar3 = bVar8;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14172ee23;
    local_88 = FVar24.Value;
    uStack_84 = uVar30;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar9 = true;
  }
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                          ,0x80,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar10 = FApp::ShouldUseThreadingForPerformance();
  if (bVar10) {
LAB_14172eeb3:
    bVar10 = true;
  }
  else {
    bVar11 = FForkProcessHelper::IsForkedMultithreadInstance();
    bVar10 = false;
    if (bVar11) goto LAB_14172eeb3;
  }
  if ((((1 < param_2) && ((param_6 & ForceSingleThread) == None)) && (bVar10)) &&
     (aVar14 = (atomic<unsigned_int>)((param_3 / 2 + param_2) / param_3),
     (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar14)) {
    aVar14 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  }
  bVar10 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                     ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
  aVar6 = (atomic<unsigned_int>)((int)aVar14 + 1);
  if (bVar10) {
    aVar6 = aVar14;
  }
  aVar14 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  if ((int)aVar6 < (int)aVar14) {
    aVar14 = aVar6;
  }
  aVar6 = (atomic<unsigned_int>)0x1;
  if (1 < (int)aVar14) {
    aVar6 = aVar14;
  }
  aVar14 = (atomic<unsigned_int>)param_7->ArrayNum;
  aVar28 = aVar6;
  if ((aVar14 != (atomic<unsigned_int>)0x0) && (aVar28 = aVar14, (int)aVar6 < (int)aVar14)) {
    aVar28 = aVar6;
  }
  if ((int)aVar28 < 2) {
    if (0 < param_2) {
      do {
        local_88 = (uint)pFVar29;
        (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_88);
        uVar30 = (uint)pFVar29 + 1;
        pFVar29 = (FParallelForData *)(ulonglong)uVar30;
        bVar12 = bVar7;
        bVar3 = bVar8;
      } while ((int)uVar30 < param_2);
    }
    if (bVar31) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_14172f2be;
  }
  uVar25 = 1;
  iVar16 = 1;
  local_94 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar27 = 6;
    iVar22 = (int)aVar28 * 6;
    do {
      if (iVar22 <= param_2) {
        uVar4 = (longlong)(param_2 + -1 + iVar22) / (longlong)iVar22;
        uVar25 = uVar4 & 0xffffffff;
        iVar16 = (int)uVar4;
        local_94.Bits = (param_2 + -1 + iVar16) / iVar16;
        if ((int)aVar28 <= (int)local_94.Bits) break;
      }
      iVar16 = (int)uVar25;
      iVar22 = iVar22 - (int)aVar28;
      iVar27 = iVar27 + -1;
    } while (iVar27 != 0);
  }
  iVar22 = (int)aVar28 + -1;
  EVar15 = FTaskTagScope::GetCurrentTag();
  local_98 = Inherit;
  if ((EVar15 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_14172efff;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_98 = High;
  }
  else {
LAB_14172efff:
    local_98 = BackgroundNormal;
  }
  FEventRef::FEventRef(&local_90,ManualReset);
  pFVar19 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (pFVar19 != (FParallelForData *)0x0) {
    *(undefined4 *)&pFVar19->field_0x8 = 0;
    pFVar19->NumBatches = (int)local_94;
    *(undefined ***)pFVar19 =
         &
         ___7FParallelForData__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z_6B_
    ;
    pFVar19->DebugName = param_1;
    pFVar19->Contexts = param_7;
    pFVar19->Body = param_4;
    pFVar19->FinishedSignal = &local_90;
    pFVar19->Priority = local_98;
    *(undefined4 *)&pFVar19->field_0x80 = 0;
    *(undefined4 *)&pFVar19->field_0x84 = 0;
    pFVar19->BatchItem = (atomic<int>)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)0x0;
    pFVar19->LaunchedWorkers = (atomic<int>)0x0;
    pFVar19->Num = param_2;
    pFVar19->BatchSize = iVar16;
    *(undefined8 *)&pFVar19->Tasks = 0;
    pFVar19->IncompleteBatches = (atomic<int>)local_94;
    iVar16 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FTracedTask>_>
                       (0x48,8,iVar22,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FTracedTask>
                         *)&pFVar19->Tasks,(int *)&pFVar19->field_0x80,(int *)&pFVar19->field_0x84);
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FTracedTask,int>
              ((void *)(*(longlong *)&pFVar19->Tasks + (longlong)iVar16 * 0x48),iVar22);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&pFVar19->field_0x10);
    LOCK();
    *(int *)&pFVar19->field_0x8 = *(int *)&pFVar19->field_0x8 + 1;
    UNLOCK();
    pFVar29 = pFVar19;
  }
  LOCK();
  paVar1 = &pFVar29->LaunchedWorkers;
  aVar23 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (*(int *)&pFVar29->field_0x80 <= (int)aVar23) {
    aVar23 = (atomic<int>)0xffffffff;
  }
  if (aVar23 != (atomic<int>)0xffffffff) {
    LOCK();
    *(int *)&pFVar29->field_0x8 = *(int *)&pFVar29->field_0x8 + 1;
    UNLOCK();
    local_68.Reference = pFVar29;
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::LaunchTask(&local_68,(int)aVar23,true);
    if (local_68.Reference != (FParallelForData *)0x0) {
      puVar2 = &(local_68.Reference)->field_0x8;
      LOCK();
      iVar16 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (((iVar16 == 1) && (puVar2 != (undefined1 *)0x0)) &&
         (local_68.Reference != (FParallelForData *)0x0)) {
        (*(code *)**(undefined8 **)local_68.Reference)(local_68.Reference,1);
      }
    }
  }
  local_74 = '\0';
  local_80.Reference = pFVar29;
  local_78 = iVar22;
  bVar12 = `ParallelForImpl::
           ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
           ::__l2::FParallelExecutor::operator()(&local_80,true);
  if (!bVar12) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar12 = IsInActualRenderingThread(), !bVar12)
       ) {
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                    ::__l52::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent
                  (`void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,std::nullptr_t>(wchar_t_const*___ptr64,int,int,TFunctionRef<void___cdecl(int)>,`void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)'::`2'::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const&___ptr64)'
                   ::__l52::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_90.Event)->_padding_ + 0x20))(local_90.Event,0xffffffff,0);
      }
      else {
        pbVar21 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar3 = *pbVar21;
        *pbVar21 = false;
        (**(code **)((local_90.Event)->_padding_ + 0x20))(local_90.Event,0xffffffff,0);
        *pbVar21 = bVar3;
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar13 = (**(code **)((local_90.Event)->_padding_ + 0x20))(local_90.Event,1,0);
      while (cVar13 == '\0') {
        pFVar20 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar20 + 0x48))
                  (pFVar20,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar13 = (**(code **)((local_90.Event)->_padding_ + 0x20))(local_90.Event,1,0);
      }
    }
  }
  if (local_80.Reference != (FParallelForData *)0x0) {
    if (local_74 != '\0') {
      `ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
      ::__l2::FParallelExecutor::LaunchTask(&local_80,local_78,true);
    }
    if (local_80.Reference != (FParallelForData *)0x0) {
      puVar2 = &(local_80.Reference)->field_0x8;
      LOCK();
      iVar16 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar16 == 1) && (puVar2 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)local_80.Reference)(local_80.Reference,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_90);
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_14172f2be:
  if (bVar9) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return;
}

// ReadNumberFormattingOptionFromBuffer<int> @ 14172f310

wchar_t * __cdecl
TextStringificationUtil::ReadNumberFormattingOptionFromBuffer<int>
          (wchar_t *param_1,FString *param_2,int *param_3,
          TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,int_&)> *param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *local_res10;
  
  iVar3 = (param_2->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar4 = wcsncmp(param_1,pwVar5,(longlong)iVar4);
  if (iVar4 == 0) {
    iVar3 = (param_2->Data).ArrayNum;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    pwVar5 = param_1 + iVar4;
    wVar2 = param_1[iVar4];
    while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
      pwVar1 = pwVar5 + 1;
      pwVar5 = pwVar5 + 1;
      wVar2 = *pwVar1;
    }
    if (*pwVar5 == L'(') {
      local_res10 = pwVar5 + 1;
      if (pwVar5 == (wchar_t *)0x0) {
        local_res10 = (wchar_t *)0x0;
      }
      if (local_res10 != (wchar_t *)0x0) {
        wVar2 = *local_res10;
        while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
          pwVar5 = local_res10 + 1;
          local_res10 = local_res10 + 1;
          wVar2 = *pwVar5;
        }
        pwVar5 = (wchar_t *)
                 (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res10,param_3);
        if ((pwVar5 != (wchar_t *)0x0) &&
           (pwVar5 = SkipWhitespaceAndCharacter(pwVar5,L')'), pwVar5 != (wchar_t *)0x0)) {
          return pwVar5;
        }
      }
    }
    param_1 = (wchar_t *)0x0;
  }
  return param_1;
}

// ReadNumberFormattingOptionFromBuffer<enum_ERoundingMode> @ 14172f420

wchar_t * __cdecl
TextStringificationUtil::ReadNumberFormattingOptionFromBuffer<enum_ERoundingMode>
          (wchar_t *param_1,FString *param_2,ERoundingMode *param_3,
          TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,ERoundingMode_&)> *param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *local_res10;
  
  iVar3 = (param_2->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar4 = wcsncmp(param_1,pwVar5,(longlong)iVar4);
  if (iVar4 == 0) {
    iVar3 = (param_2->Data).ArrayNum;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    pwVar5 = param_1 + iVar4;
    wVar2 = param_1[iVar4];
    while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
      pwVar1 = pwVar5 + 1;
      pwVar5 = pwVar5 + 1;
      wVar2 = *pwVar1;
    }
    if (*pwVar5 == L'(') {
      local_res10 = pwVar5 + 1;
      if (pwVar5 == (wchar_t *)0x0) {
        local_res10 = (wchar_t *)0x0;
      }
      if (local_res10 != (wchar_t *)0x0) {
        wVar2 = *local_res10;
        while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
          pwVar5 = local_res10 + 1;
          local_res10 = local_res10 + 1;
          wVar2 = *pwVar5;
        }
        pwVar5 = (wchar_t *)
                 (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res10,param_3);
        if ((pwVar5 != (wchar_t *)0x0) &&
           (pwVar5 = SkipWhitespaceAndCharacter(pwVar5,L')'), pwVar5 != (wchar_t *)0x0)) {
          return pwVar5;
        }
      }
    }
    param_1 = (wchar_t *)0x0;
  }
  return param_1;
}

// ReadNumberFormattingOptionFromBuffer<bool> @ 14172f530

wchar_t * __cdecl
TextStringificationUtil::ReadNumberFormattingOptionFromBuffer<bool>
          (wchar_t *param_1,FString *param_2,bool *param_3,
          TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,bool_&)> *param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *local_res10;
  
  iVar3 = (param_2->Data).ArrayNum;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar4 = wcsncmp(param_1,pwVar5,(longlong)iVar4);
  if (iVar4 == 0) {
    iVar3 = (param_2->Data).ArrayNum;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    pwVar5 = param_1 + iVar4;
    wVar2 = param_1[iVar4];
    while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
      pwVar1 = pwVar5 + 1;
      pwVar5 = pwVar5 + 1;
      wVar2 = *pwVar1;
    }
    if (*pwVar5 == L'(') {
      local_res10 = pwVar5 + 1;
      if (pwVar5 == (wchar_t *)0x0) {
        local_res10 = (wchar_t *)0x0;
      }
      if (local_res10 != (wchar_t *)0x0) {
        wVar2 = *local_res10;
        while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
          pwVar5 = local_res10 + 1;
          local_res10 = local_res10 + 1;
          wVar2 = *pwVar5;
        }
        pwVar5 = (wchar_t *)
                 (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_res10,param_3);
        if ((pwVar5 != (wchar_t *)0x0) &&
           (pwVar5 = SkipWhitespaceAndCharacter(pwVar5,L')'), pwVar5 != (wchar_t *)0x0)) {
          return pwVar5;
        }
      }
    }
    param_1 = (wchar_t *)0x0;
  }
  return param_1;
}

// ReadScopedEnumFromBuffer<enum_ERoundingMode> @ 14172f640

wchar_t * __cdecl
TextStringificationUtil::ReadScopedEnumFromBuffer<enum_ERoundingMode>
          (wchar_t *param_1,FString *param_2,ERoundingMode *param_3)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FString local_18;
  
  iVar3 = (param_2->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar3 = iVar3 + -1;
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp(param_1,pwVar5,(longlong)iVar3);
  if (iVar3 == 0) {
    iVar3 = (param_2->Data).ArrayNum;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    pwVar5 = param_1 + iVar4;
    ::FString::Reset(&local_18,0);
    wVar1 = *pwVar5;
    while ((wVar1 != L'\0' && ((iVar3 = iswalnum(wVar1), iVar3 != 0 || (*pwVar5 == L'_'))))) {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
      ::FString::AppendChar(&local_18,wVar1);
      wVar1 = *pwVar5;
    }
    pwVar7 = (wchar_t *)0x0;
    if (1 < local_18.Data.ArrayNum) {
      pwVar7 = pwVar5;
    }
    if (pwVar7 != (wchar_t *)0x0) {
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar2 = LexTryParseString(param_3,(wchar_t *)FVar6.Data);
      if (bVar2) {
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pwVar7;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return pwVar7;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (wchar_t *)0x0;
}

// ReadScopedEnumFromBuffer<enum_ETextGender> @ 14172f760

wchar_t * __cdecl
TextStringificationUtil::ReadScopedEnumFromBuffer<enum_ETextGender>
          (wchar_t *param_1,FString *param_2,ETextGender *param_3)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FString local_18;
  
  iVar3 = (param_2->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar3 = iVar3 + -1;
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp(param_1,pwVar5,(longlong)iVar3);
  if (iVar3 == 0) {
    iVar3 = (param_2->Data).ArrayNum;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    pwVar5 = param_1 + iVar4;
    ::FString::Reset(&local_18,0);
    wVar1 = *pwVar5;
    while ((wVar1 != L'\0' && ((iVar3 = iswalnum(wVar1), iVar3 != 0 || (*pwVar5 == L'_'))))) {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
      ::FString::AppendChar(&local_18,wVar1);
      wVar1 = *pwVar5;
    }
    pwVar7 = (wchar_t *)0x0;
    if (1 < local_18.Data.ArrayNum) {
      pwVar7 = pwVar5;
    }
    if (pwVar7 != (wchar_t *)0x0) {
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar2 = LexTryParseString(param_3,(wchar_t *)FVar6.Data);
      if (bVar2) {
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pwVar7;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return pwVar7;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (wchar_t *)0x0;
}

// ReadScopedEnumFromBuffer<enum_EDateTimeStyle::Type> @ 14172f880

wchar_t * __cdecl
TextStringificationUtil::ReadScopedEnumFromBuffer<enum_EDateTimeStyle::Type>
          (wchar_t *param_1,FString *param_2,Type *param_3)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FString local_18;
  
  iVar3 = (param_2->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar3 = iVar3 + -1;
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp(param_1,pwVar5,(longlong)iVar3);
  if (iVar3 == 0) {
    iVar3 = (param_2->Data).ArrayNum;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    pwVar5 = param_1 + iVar4;
    ::FString::Reset(&local_18,0);
    wVar1 = *pwVar5;
    while ((wVar1 != L'\0' && ((iVar3 = iswalnum(wVar1), iVar3 != 0 || (*pwVar5 == L'_'))))) {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
      ::FString::AppendChar(&local_18,wVar1);
      wVar1 = *pwVar5;
    }
    pwVar7 = (wchar_t *)0x0;
    if (1 < local_18.Data.ArrayNum) {
      pwVar7 = pwVar5;
    }
    if (pwVar7 != (wchar_t *)0x0) {
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar2 = LexTryParseString(param_3,(wchar_t *)FVar6.Data);
      if (bVar2) {
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pwVar7;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return pwVar7;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (wchar_t *)0x0;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FTracedTask>_> @ 14172fc10

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_14172fd26;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_14172fd26:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (void *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = *(void **)param_4;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (void *)0x0) &&
         (uVar3 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src, uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    *(void **)param_4 = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// RotateInternal<TSharedPtr<ILocalizedTextSource,1>_> @ 141730ae0

int __cdecl
AlgoImpl::RotateInternal<TSharedPtr<ILocalizedTextSource,1>_>
          (TSharedPtr<ILocalizedTextSource,1> *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  ILocalizedTextSource *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<ILocalizedTextSource,1> *pTVar4;
  TSharedPtr<ILocalizedTextSource,1> *pTVar6;
  TSharedPtr<ILocalizedTextSource,1> *pTVar7;
  TSharedPtr<ILocalizedTextSource,1> *pTVar8;
  TSharedPtr<ILocalizedTextSource,1> *pTVar5;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pTVar4 = param_1 + param_3;
    pTVar7 = param_1;
    pTVar5 = param_1 + param_3;
    do {
      while( true ) {
        pTVar6 = pTVar4 + 1;
        pTVar8 = pTVar7 + 1;
        pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
        pIVar2 = pTVar7->Object;
        pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
        pTVar7->Object = pTVar4->Object;
        (pTVar7->SharedReferenceCount).ReferenceController = pTVar1;
        pTVar4->Object = pIVar2;
        (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
        pTVar7 = pTVar8;
        if (pTVar6 == param_1 + param_2) break;
        pTVar4 = pTVar6;
        if (pTVar8 == pTVar5) {
          pTVar5 = pTVar6;
        }
      }
      pTVar4 = pTVar5;
    } while (pTVar8 != pTVar5);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<TSharedPtr<ILocalizedTextSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ILocalizedTextSource,1>,`FTextLocalizationManager::RegisterTextSource'::__l2::<lambda_1>_>_> @ 141732290

void __cdecl
AlgoImpl::
StableSortInternal<TSharedPtr<ILocalizedTextSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ILocalizedTextSource,1>,_FTextLocalizationManager::RegisterTextSource_::__l2::<lambda_1>_>_>
          (TSharedPtr<ILocalizedTextSource,1> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<ILocalizedTextSource,1>,_public:_void___cdecl_FTextLocalizationManager::RegisterTextSource(TSharedRef<ILocalizedTextSource,1>_const_&,bool)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  ILocalizedTextSource *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<ILocalizedTextSource,1> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  TSharedPtr<ILocalizedTextSource,1> *pTVar11;
  
  iVar9 = 0;
  if (0 < param_2) {
    pTVar11 = param_1 + 1;
    pTVar7 = param_1;
    do {
      if ((iVar9 + 1 < param_2) &&
         (bVar5 = `FTextLocalizationManager::RegisterTextSource'::__l2::<lambda_1>::operator()
                            (param_4.Predicate,pTVar11,pTVar7), bVar5)) {
        pTVar2 = pTVar7[1].SharedReferenceCount.ReferenceController;
        pIVar3 = pTVar7->Object;
        pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
        pTVar7->Object = pTVar7[1].Object;
        (pTVar7->SharedReferenceCount).ReferenceController = pTVar2;
        pTVar7[1].Object = pIVar3;
        pTVar7[1].SharedReferenceCount.ReferenceController = pTVar4;
      }
      iVar9 = iVar9 + 2;
      pTVar11 = pTVar11 + 2;
      pTVar7 = pTVar7 + 2;
    } while (iVar9 < param_2);
  }
  iVar9 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar9 * 2;
      iVar6 = 0;
      iVar10 = param_2;
      do {
        iVar8 = iVar10;
        if (iVar1 <= iVar10) {
          iVar8 = iVar1;
        }
        Merge<TSharedPtr<ILocalizedTextSource,1>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<ILocalizedTextSource,1>,_FTextLocalizationManager::RegisterTextSource_::__l2::<lambda_1>_>_>
                  (param_1 + iVar6,iVar9,iVar8,param_3,param_4);
        iVar6 = iVar6 + iVar1;
        iVar10 = iVar10 + iVar9 * -2;
      } while (iVar6 < param_2);
      iVar9 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// TextJoinImpl<FFormatArgumentValue> @ 141732390

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
TextJoinImpl<FFormatArgumentValue>
          (FText *__return_storage_ptr__,FText *param_1,
          TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  TTuple<FString,FFormatArgumentValue> *pTVar9;
  FText *pFVar10;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar11;
  FTextHistory *pFVar12;
  FTextHistory *pFVar13;
  ITextData *pIVar14;
  ITextData *pIVar15;
  uint uVar16;
  uint uVar17;
  FTextHistory *pFVar18;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_118
  ;
  FString local_108;
  FString local_f8;
  FString local_e0;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [8];
  ITextData *local_c0;
  FString local_b8;
  FText local_a8;
  TSharedRef<FTextFormatData,1> local_98;
  FText local_88;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_78;
  FFormatArgumentValue local_68;
  FText local_48;
  
  local_res18 = param_2;
  if (param_2->ArrayNum < 1) {
    pFVar8 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar14 = (pFVar8->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar14;
    if (pIVar14 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar14 + 8))(pIVar14,local_c8);
    }
    __return_storage_ptr__->Flags = pFVar8->Flags;
    return __return_storage_ptr__;
  }
  pFVar8 = FText::GetEmpty();
  pIVar14 = (pFVar8->TextData).Reference;
  local_c0 = pIVar14;
  if (pIVar14 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar14 + 8))(pIVar14,local_d0);
  }
  iVar1 = param_2->ArrayNum;
  pFVar13 = (FTextHistory *)0x0;
  uVar16 = 0;
  local_118.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Pairs.ArrayNum = 0;
  local_118.Pairs.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar7 = iVar1 + 1;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (0 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar7,(ForAnyElementType *)&local_118,0,&local_118.Pairs.ArrayMax);
  }
  local_68.Type = Text;
  TOptional<FText>::TOptional<FText>(&local_68.TextValue,param_1);
  FString::FString(&local_b8,L"Delimiter");
  pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_118,&local_b8);
  TTuple<FString,FFormatArgumentValue>::
  TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue>(pTVar9,&local_b8,&local_68);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  pTVar5 = local_res18;
  pFVar12 = pFVar13;
  pFVar18 = pFVar13;
  if (0 < iVar1) {
    while( true ) {
      uVar17 = (uint)pFVar18;
      uVar7 = uVar16;
      if ((int)uVar17 < pTVar5->ArrayNum) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar4)();
        return pFVar8;
      }
      pFVar2 = (pTVar5->AllocatorInstance).Data;
      FString::PrintfImpl(&local_108,L"%d");
      pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
               ::AllocateMemoryForEmplace<FString_&>(&local_118,&local_108);
      *(undefined8 *)pTVar9 = 0;
      *(FScriptContainerElement **)pTVar9 = local_108.Data.AllocatorInstance.Data;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar9->field_0x8 = local_108.Data.ArrayNum;
      *(int *)&pTVar9->field_0xc = local_108.Data.ArrayMax;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      FFormatArgumentValue::FFormatArgumentValue
                ((FFormatArgumentValue *)&pTVar9->field_0x10,
                 (FFormatArgumentValue *)((longlong)&pFVar12->_padding_ + (longlong)pFVar2));
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      FString::AppendChar(&local_f8,L'{');
      FString::AppendInt(&local_f8,uVar17);
      FString::AppendChar(&local_f8,L'}');
      pIVar14 = local_c0;
      if (iVar1 <= (int)(uVar17 + 1)) break;
      FString::AppendChars(&local_f8,L"{Delimiter}",0xb);
      pFVar12 = (FTextHistory *)&pFVar12[1]._padding_;
      pFVar18 = (FTextHistory *)(ulonglong)(uVar17 + 1);
    }
  }
  pFVar8 = FText::AsCultureInvariant(&local_88,&local_f8);
  pIVar15 = pIVar14;
  if (&local_48 != pFVar8) {
    pIVar15 = (pFVar8->TextData).Reference;
    (pFVar8->TextData).Reference = (ITextData *)0x0;
    if (pIVar14 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar14 + 0x10))();
    }
    uVar16 = pFVar8->Flags;
    pFVar10 = FText::GetEmpty();
    pIVar14 = (pFVar8->TextData).Reference;
    pIVar3 = (pFVar10->TextData).Reference;
    if (pIVar14 != pIVar3) {
      (pFVar8->TextData).Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res20);
      }
      if (pIVar14 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar14 + 0x10))(pIVar14);
      }
    }
    pFVar8->Flags = 0;
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  local_res18 = (TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *)
                CONCAT71(local_res18._1_7_,1);
  pTVar11 = FTextFormatPatternDefinition::GetDefault(&local_78);
  local_a8.TextData.Reference = pIVar15;
  if (pIVar15 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar15 + 8))(pIVar15,local_cc);
  }
  local_a8.Flags = uVar16;
  MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&local_98,&local_a8,(ETextFormatFlags *)&local_res18,pTVar11);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  FTextFormatter::FormatStr(&local_e0,(FTextFormat *)&local_98,&local_118,false,false);
  pFVar12 = operator_new(0x48);
  if (pFVar12 != (FTextHistory *)0x0) {
    pFVar12->_padding_ = 0;
    pFVar12->GlobalRevision = 0;
    pFVar12->LocalRevision = 0;
    (pFVar12->Mutex).State = (atomic<unsigned_char>)0x0;
    pFVar12->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    pFVar12[1]._padding_ = (longlong)local_e0.Data.AllocatorInstance.Data;
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar12[1]._padding_ = local_e0.Data.ArrayNum;
    pFVar12[1].GlobalRevision = (undefined2)local_e0.Data.ArrayMax;
    pFVar12[1].LocalRevision = local_e0.Data.ArrayMax._2_2_;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(pFVar12);
    pFVar12->_padding_ = (longlong)&___7FTextHistory_NamedFormat__6B_;
    *(FTextFormatData **)&pFVar12[1].Mutex = local_98.Object;
    pFVar12[2]._padding_ = (longlong)local_98.SharedReferenceCount.ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FScriptContainerElement **)&pFVar12[2]._padding_ = local_118.Pairs.AllocatorInstance.Data;
    local_118.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar12[2].Mutex = local_118.Pairs.ArrayNum;
    *(int *)&pFVar12[2].field_0x14 = local_118.Pairs.ArrayMax;
    local_118.Pairs.ArrayNum = 0;
    local_118.Pairs.ArrayMax = 0;
    LOCK();
    pFVar12->_padding_ = pFVar12->_padding_ + 1;
    UNLOCK();
    pFVar13 = pFVar12;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar13;
  __return_storage_ptr__->Flags = 1;
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_118.Pairs.AllocatorInstance.Data,
             local_118.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_118.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_118.Pairs.AllocatorInstance.Data);
  }
  if (pIVar15 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar15 + 0x10))(pIVar15);
  }
  return __return_storage_ptr__;
}

// TextJoinImpl<FText> @ 141732820

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
TextJoinImpl<FText>(FText *__return_storage_ptr__,FText *param_1,
                   TArray<FText,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  TTuple<FString,FFormatArgumentValue> *pTVar9;
  FText *pFVar10;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar11;
  FTextHistory *pFVar12;
  uint uVar13;
  FTextHistory *pFVar14;
  ITextData *pIVar15;
  uint uVar16;
  FTextHistory *pFVar17;
  int local_res18 [4];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_128
  ;
  FString local_118;
  FString local_108;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  FString local_e8;
  FString local_d8;
  FText local_c8;
  TSharedRef<FTextFormatData,1> local_b8;
  FText local_a8;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_98;
  FFormatArgumentValue local_88;
  FFormatArgumentValue local_68;
  FText local_48;
  
  if (param_2->ArrayNum < 1) {
    pFVar8 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar8->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_ec);
    }
    __return_storage_ptr__->Flags = pFVar8->Flags;
    return __return_storage_ptr__;
  }
  pFVar8 = FText::GetEmpty();
  pIVar2 = (pFVar8->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_f8);
  }
  iVar1 = param_2->ArrayNum;
  pFVar14 = (FTextHistory *)0x0;
  uVar16 = 0;
  local_128.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Pairs.ArrayNum = 0;
  local_128.Pairs.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar7 = iVar1 + 1;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_res18[0] = iVar1;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  if (0 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar7,(ForAnyElementType *)&local_128,0,&local_128.Pairs.ArrayMax);
  }
  local_88.Type = Text;
  TOptional<FText>::TOptional<FText>(&local_88.TextValue,param_1);
  FString::FString(&local_e8,L"Delimiter");
  pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<FString_&>(&local_128,&local_e8);
  TTuple<FString,FFormatArgumentValue>::
  TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue>(pTVar9,&local_e8,&local_88);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  iVar5 = local_res18[0];
  pFVar12 = pFVar14;
  pFVar17 = pFVar14;
  if (0 < iVar1) {
    while( true ) {
      uVar13 = (uint)pFVar12;
      uVar7 = uVar16;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar4)();
        return pFVar8;
      }
      local_68.Type = Text;
      TOptional<FText>::TOptional<FText>
                (&local_68.TextValue,
                 (FText *)((longlong)&pFVar17->_padding_ +
                          (longlong)(param_2->AllocatorInstance).Data));
      FString::PrintfImpl(&local_d8,L"%d");
      pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
               ::AllocateMemoryForEmplace<FString_&>(&local_128,&local_d8);
      TTuple<FString,FFormatArgumentValue>::
      TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue>(pTVar9,&local_d8,&local_68)
      ;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      FString::AppendChar(&local_118,L'{');
      FString::AppendInt(&local_118,uVar13);
      FString::AppendChar(&local_118,L'}');
      if (iVar5 <= (int)(uVar13 + 1)) break;
      FString::AppendChars(&local_118,L"{Delimiter}",0xb);
      pFVar12 = (FTextHistory *)(ulonglong)(uVar13 + 1);
      pFVar17 = (FTextHistory *)&pFVar17->Mutex;
    }
  }
  pFVar8 = FText::AsCultureInvariant(&local_a8,&local_118);
  pIVar15 = pIVar2;
  if (&local_48 != pFVar8) {
    pIVar15 = (pFVar8->TextData).Reference;
    (pFVar8->TextData).Reference = (ITextData *)0x0;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    uVar16 = pFVar8->Flags;
    pFVar10 = FText::GetEmpty();
    pIVar2 = (pFVar8->TextData).Reference;
    pIVar3 = (pFVar10->TextData).Reference;
    if (pIVar2 != pIVar3) {
      (pFVar8->TextData).Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_f4);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    pFVar8->Flags = 0;
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
  pTVar11 = FTextFormatPatternDefinition::GetDefault(&local_98);
  local_c8.TextData.Reference = pIVar15;
  if (pIVar15 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar15 + 8))(pIVar15,local_f0);
  }
  local_c8.Flags = uVar16;
  MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
            (&local_b8,&local_c8,(ETextFormatFlags *)local_res18,pTVar11);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  FTextFormatter::FormatStr(&local_108,(FTextFormat *)&local_b8,&local_128,false,false);
  pFVar12 = operator_new(0x48);
  if (pFVar12 != (FTextHistory *)0x0) {
    pFVar12->_padding_ = 0;
    pFVar12->GlobalRevision = 0;
    pFVar12->LocalRevision = 0;
    (pFVar12->Mutex).State = (atomic<unsigned_char>)0x0;
    pFVar12->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
    pFVar12[1]._padding_ = (longlong)local_108.Data.AllocatorInstance.Data;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar12[1]._padding_ = local_108.Data.ArrayNum;
    pFVar12[1].GlobalRevision = (undefined2)local_108.Data.ArrayMax;
    pFVar12[1].LocalRevision = local_108.Data.ArrayMax._2_2_;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    FTextHistory::MarkDisplayStringUpToDate(pFVar12);
    pFVar12->_padding_ = (longlong)&___7FTextHistory_NamedFormat__6B_;
    *(FTextFormatData **)&pFVar12[1].Mutex = local_b8.Object;
    pFVar12[2]._padding_ = (longlong)local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FScriptContainerElement **)&pFVar12[2]._padding_ = local_128.Pairs.AllocatorInstance.Data;
    local_128.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar12[2].Mutex = local_128.Pairs.ArrayNum;
    *(int *)&pFVar12[2].field_0x14 = local_128.Pairs.ArrayMax;
    local_128.Pairs.ArrayNum = 0;
    local_128.Pairs.ArrayMax = 0;
    LOCK();
    pFVar12->_padding_ = pFVar12->_padding_ + 1;
    UNLOCK();
    pFVar14 = pFVar12;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)pFVar14;
  __return_storage_ptr__->Flags = 1;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data,
             local_128.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_128.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_128.Pairs.AllocatorInstance.Data);
  }
  if (pIVar15 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar15 + 0x10))(pIVar15);
  }
  return __return_storage_ptr__;
}

// WriteNumberFormattingOptionToBuffer<int> @ 141732cb0

void __cdecl
TextStringificationUtil::WriteNumberFormattingOptionToBuffer<int>
          (FString *param_1,wchar_t *param_2,int *param_3,int *param_4,
          TFunctionRef<void___cdecl(FString_&,int_const_&)> *param_5)

{
  size_t sVar1;
  
  if (*param_3 != *param_4) {
    if (1 < (param_1->Data).ArrayNum) {
      ::FString::AppendChar(param_1,L'.');
    }
    sVar1 = wcslen(param_2);
    ::FString::AppendChars(param_1,param_2,(int)sVar1);
    ::FString::AppendChar(param_1,L'(');
    (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,param_1,param_3);
    ::FString::AppendChar(param_1,L')');
  }
  return;
}

// WriteNumberFormattingOptionToBuffer<enum_ERoundingMode> @ 141732d40

void __cdecl
TextStringificationUtil::WriteNumberFormattingOptionToBuffer<enum_ERoundingMode>
          (FString *param_1,wchar_t *param_2,ERoundingMode *param_3,ERoundingMode *param_4,
          TFunctionRef<void___cdecl(FString_&,ERoundingMode_const_&)> *param_5)

{
  size_t sVar1;
  
  if (*param_3 != *param_4) {
    if (1 < (param_1->Data).ArrayNum) {
      ::FString::AppendChar(param_1,L'.');
    }
    sVar1 = wcslen(param_2);
    ::FString::AppendChars(param_1,param_2,(int)sVar1);
    ::FString::AppendChar(param_1,L'(');
    (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,param_1,param_3);
    ::FString::AppendChar(param_1,L')');
  }
  return;
}

// WriteNumberFormattingOptionToBuffer<bool> @ 141732dd0

void __cdecl
TextStringificationUtil::WriteNumberFormattingOptionToBuffer<bool>
          (FString *param_1,wchar_t *param_2,bool *param_3,bool *param_4,
          TFunctionRef<void___cdecl(FString_&,bool_const_&)> *param_5)

{
  size_t sVar1;
  
  if (*param_3 != *param_4) {
    if (1 < (param_1->Data).ArrayNum) {
      ::FString::AppendChar(param_1,L'.');
    }
    sVar1 = wcslen(param_2);
    ::FString::AppendChars(param_1,param_2,(int)sVar1);
    ::FString::AppendChar(param_1,L'(');
    (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,param_1,param_3);
    ::FString::AppendChar(param_1,L')');
  }
  return;
}

// WriteScopedEnumToBuffer<enum_ERoundingMode> @ 141732e60

void __cdecl
TextStringificationUtil::WriteScopedEnumToBuffer<enum_ERoundingMode>
          (FString *param_1,wchar_t *param_2,ERoundingMode param_3)

{
  size_t sVar1;
  wchar_t *_Str;
  
  sVar1 = wcslen(param_2);
  ::FString::AppendChars(param_1,param_2,(int)sVar1);
  switch(param_3) {
  case HalfToEven:
    _Str = L"HalfToEven";
    break;
  case HalfFromZero:
    _Str = L"HalfFromZero";
    break;
  case HalfToZero:
    _Str = L"HalfToZero";
    break;
  case FromZero:
    _Str = L"FromZero";
    break;
  case ToZero:
    _Str = L"ToZero";
    break;
  case ToNegativeInfinity:
    _Str = L"ToNegativeInfinity";
    break;
  case ToPositiveInfinity:
    _Str = L"ToPositiveInfinity";
    break;
  default:
    _Str = L"<Unknown ERoundingMode>";
  }
  sVar1 = wcslen(_Str);
  ::FString::AppendChars(param_1,_Str,(int)sVar1);
  return;
}

// WriteScopedEnumToBuffer<enum_ETextGender> @ 141732f40

void __cdecl
TextStringificationUtil::WriteScopedEnumToBuffer<enum_ETextGender>
          (FString *param_1,wchar_t *param_2,ETextGender param_3)

{
  size_t sVar1;
  wchar_t *_Str;
  
  sVar1 = wcslen(param_2);
  ::FString::AppendChars(param_1,param_2,(int)sVar1);
  if (param_3 == Masculine) {
    _Str = L"Masculine";
  }
  else if (param_3 == Feminine) {
    _Str = L"Feminine";
  }
  else if (param_3 == Neuter) {
    _Str = L"Neuter";
  }
  else {
    _Str = L"<Unknown ETextGender>";
  }
  sVar1 = wcslen(_Str);
  ::FString::AppendChars(param_1,_Str,(int)sVar1);
  return;
}

// WriteScopedEnumToBuffer<enum_EDateTimeStyle::Type> @ 141732fd0

void __cdecl
TextStringificationUtil::WriteScopedEnumToBuffer<enum_EDateTimeStyle::Type>
          (FString *param_1,wchar_t *param_2,Type param_3)

{
  size_t sVar1;
  wchar_t *_Str;
  
  sVar1 = wcslen(param_2);
  ::FString::AppendChars(param_1,param_2,(int)sVar1);
  switch(param_3) {
  case Default:
    _Str = L"Default";
    break;
  case Short:
    _Str = L"Short";
    break;
  case Medium:
    _Str = L"Medium";
    break;
  case Long:
    _Str = L"Long";
    break;
  case Full:
    _Str = L"Full";
    break;
  case Custom:
    _Str = L"Custom";
    break;
  default:
    _Str = L"<Unknown EDateTimeStyle>";
  }
  sVar1 = wcslen(_Str);
  ::FString::AppendChars(param_1,_Str,(int)sVar1);
  return;
}

// _Atomic_address_as<char,std::_Atomic_padded<signed_char>_> @ 1417330a0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<signed_char>_>
          (_Atomic_padded<signed_char> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_ETextLocalizationManagerInitializedFlags>_> @ 1417330b0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_ETextLocalizationManagerInitializedFlags>_>
          (_Atomic_padded<ETextLocalizationManagerInitializedFlags> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_ETextLocalizationManagerInitializedFlags>_> @ 1417330c0

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_ETextLocalizationManagerInitializedFlags>_>
          (_Atomic_padded<ETextLocalizationManagerInitializedFlags> *param_1)

{
  return (char *)param_1;
}

// _Atomic_reinterpret_as<char,enum_ETextLocalizationManagerInitializedFlags> @ 1417330d0

char __cdecl
std::_Atomic_reinterpret_as<char,enum_ETextLocalizationManagerInitializedFlags>
          (ETextLocalizationManagerInitializedFlags *param_1)

{
  return *param_1;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FTextLocalizationManager::DirtyTextRevision'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 141737eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FTextLocalizationManager::DirtyTextRevision'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FTextLocalizationManager::DirtyTextRevision_::__l10::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FTextLocalizationManager::DirtyTextRevision'::`10'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_1>,0,0> @ 141737ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FTextFormatPatternDefinition::FTextFormatPatternDefinition_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::<lambda_1>,0,0> @ 141737ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad_::__l2::<lambda_1>,0,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141737f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>,1,1> @ 141737f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FTextLocalizationManager::HandleLocalizationTargetsMounted_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsMounted'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::__l2::<lambda_1>,1,1> @ 141737f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FTextLocalizationManager::HandleLocalizationTargetsUnmounted_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`InitEngineTextLocalization'::__l2::<lambda_1>,1,1> @ 141737fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InitEngineTextLocalization'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_InitEngineTextLocalization_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`InitEngineTextLocalization'::`2'::<lambda_1>,1,1>::_vftable_;
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`InitGameTextLocalization'::__l2::<lambda_1>,1,1> @ 141737ff0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`InitGameTextLocalization'::__l2::<lambda_1>,1,1>
::~TFunction_OwnedObject<_InitGameTextLocalization_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`InitGameTextLocalization'::`2'::<lambda_1>,1,1>::_vftable_;
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::__l2::<lambda_1>,1,1> @ 141738030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FTextLocalizationManager::LoadChunkedLocalizationResources_Async_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::__l2::<lambda_1>,1,1> @ 141738080

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::__l2::<lambda_1>,1,1> @ 1417380f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>,1,1> @ 141738150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_2>,0,0> @ 141738170

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FTextFormatPatternDefinition::FTextFormatPatternDefinition_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_3>,0,0> @ 141738190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_3>,0,0>
::
~TFunction_OwnedObject<_FTextFormatPatternDefinition::FTextFormatPatternDefinition_::__l2::<lambda_3>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_4>,0,0> @ 1417381b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_4>,0,0>
::
~TFunction_OwnedObject<_FTextFormatPatternDefinition::FTextFormatPatternDefinition_::__l2::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 141738390

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = &
                ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// operator<< @ 14173a0b0

FArchive * __cdecl operator<<(FArchive *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
  return param_1;
}

// operator<< @ 14173a120

FArchive * __cdecl operator<<(FArchive *param_1,uint *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,param_2);
  return param_1;
}

// operator<< @ 14173a190

FArchive * __cdecl operator<<(FArchive *param_1,FIoContainerHeader *param_2)

{
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  longlong *plVar3;
  ulong64 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> *pTVar8;
  FArchive *pFVar9;
  undefined8 uVar10;
  longlong lVar11;
  long64 lVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint local_res8 [2];
  uint local_res18 [2];
  undefined4 uStack_3c;
  TArray<FDisplayNameEntryId,TSizedDefaultAllocator<32>_> local_38;
  TArrayView<FDisplayNameEntryId_const_,int> local_28;
  
  local_res18[0] = 0x496f436e;
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (((param_1->field_0x28 & 1) == 0) || (local_res18[0] == 0x496f436e)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = 5;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    if (((param_1->field_0x28 & 1) == 0) || (2 < local_res8[0])) {
      puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
      if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
        }
      }
      else {
        (param_2->ContainerId).Id = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
      }
      TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->PackageIds);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->StoreEntries);
      TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->OptionalSegmentPackageIds);
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->OptionalSegmentStoreEntries);
      pTVar1 = &param_2->RedirectsNameMap;
      if ((param_1->field_0x28 & 1) == 0) {
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        iVar2 = (param_2->RedirectsNameMap).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FArchive *)(*pcVar6)();
          return pFVar9;
        }
        local_28._12_4_ = uStack_3c;
        local_28.ArrayNum = iVar2;
        local_28.DataPtr = (FDisplayNameEntryId *)pFVar5;
        SaveNameBatch(&local_28,param_1);
      }
      else {
        pTVar8 = LoadNameBatch(&local_38,param_1,None);
        if (pTVar1 != pTVar8) {
          pFVar5 = (pTVar1->AllocatorInstance).Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (pTVar1->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
          (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (param_2->RedirectsNameMap).ArrayNum = pTVar8->ArrayNum;
          (param_2->RedirectsNameMap).ArrayMax = pTVar8->ArrayMax;
          pTVar8->ArrayNum = 0;
          pTVar8->ArrayMax = 0;
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
      }
      TArrayPrivateFriend::Serialize<FIoContainerHeaderLocalizedPackage,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->LocalizedPackages);
      TArrayPrivateFriend::Serialize<FIoContainerHeaderPackageRedirect,TSizedDefaultAllocator<32>_>
                (param_1,&param_2->PackageRedirects);
      if (local_res8[0] == 4) {
        operator<<(param_1,&(param_2->SoftPackageReferences).bContainsSoftPackageReferences);
        if ((param_2->SoftPackageReferences).bContainsSoftPackageReferences == false) {
          return param_1;
        }
        TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
                  (param_1,&(param_2->SoftPackageReferences).PackageIds);
        TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                  (param_1,&(param_2->SoftPackageReferences).PackageIndices);
        (param_2->SoftPackageReferences).bLoadedSoftPackageReferences = true;
        return param_1;
      }
      if (local_res8[0] < 5) {
        return param_1;
      }
      uVar10 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      operator<<(param_1,&param_2->SoftPackageReferencesSerialInfo);
      if ((param_1->field_0x28 & 1) == 0) {
        lVar12 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        (param_2->SoftPackageReferencesSerialInfo).Offset = lVar12;
        operator<<(param_1,&param_2->SoftPackageReferences);
        lVar14 = (param_2->SoftPackageReferencesSerialInfo).Offset;
        lVar11 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        (param_2->SoftPackageReferencesSerialInfo).Size = lVar11 - lVar14;
        uVar13 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar10);
        operator<<(param_1,&param_2->SoftPackageReferencesSerialInfo);
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar13);
        return param_1;
      }
      lVar14 = (param_2->SoftPackageReferencesSerialInfo).Size;
      if (lVar14 < 1) {
        return param_1;
      }
      lVar11 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      lVar14 = lVar14 + lVar11;
      lVar11 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
      if (lVar14 <= lVar11) {
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar14);
        return param_1;
      }
    }
  }
  FArchiveState::SetError((FArchiveState *)param_1);
  return param_1;
}

// operator<< @ 14173a500

FArchive * __cdecl operator<<(FArchive *param_1,FIoContainerHeaderLocalizedPackage *param_2)

{
  operator<<(param_1,&param_2->SourcePackageId);
  operator<<(param_1,&param_2->SourcePackageName);
  return param_1;
}

// operator<< @ 14173a540

FArchive * __cdecl operator<<(FArchive *param_1,FIoContainerHeaderPackageRedirect *param_2)

{
  operator<<(param_1,&param_2->SourcePackageId);
  operator<<(param_1,&param_2->TargetPackageId);
  operator<<(param_1,&param_2->SourcePackageName);
  return param_1;
}

// operator<< @ 14173a590

FArchive * __cdecl operator<<(FArchive *param_1,FIoContainerHeaderSerialInfo *param_2)

{
  long64 *plVar1;
  long64 *plVar2;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if ((long64 *)(*(longlong **)&param_1->field_0x8)[1] < plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
    }
  }
  else {
    param_2->Offset = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  plVar1 = &param_2->Size;
  plVar2 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar2 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *plVar1 = *plVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,plVar1,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)plVar1);
  return param_1;
}

// operator<< @ 14173a660

FArchive * __cdecl operator<<(FArchive *param_1,FIoContainerHeaderSoftPackageReferences *param_2)

{
  operator<<(param_1,&param_2->bContainsSoftPackageReferences);
  if (param_2->bContainsSoftPackageReferences != false) {
    TArrayPrivateFriend::Serialize<FPackageId,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->PackageIds);
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&param_2->PackageIndices);
    param_2->bLoadedSoftPackageReferences = true;
  }
  return param_1;
}

// operator<< @ 14173a6c0

FArchive * __cdecl operator<<(FArchive *param_1,FIoDirectoryIndexEntry *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Name);
    }
  }
  else {
    param_2->Name = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->FirstChildEntry;
  puVar1 = &param_1->field_0x2a;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->NextSiblingEntry;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->FirstFileEntry;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar2);
  return param_1;
}

// operator<< @ 14173a820

FArchive * __cdecl operator<<(FArchive *param_1,FIoDirectoryIndexResource *param_2)

{
  operator<<(param_1,&param_2->MountPoint);
  TArrayPrivateFriend::Serialize<FIoDirectoryIndexEntry,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->DirectoryEntries);
  TArrayPrivateFriend::Serialize<FIoFileIndexEntry,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->FileEntries);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&param_2->StringTable)
  ;
  return param_1;
}

// operator<< @ 14173a870

FArchive * __cdecl operator<<(FArchive *param_1,FIoFileIndexEntry *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Name);
    }
  }
  else {
    param_2->Name = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->NextFileEntry;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->UserData;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 14173a990

FArchive * __cdecl operator<<(FArchive *param_1,FNumberParsingOptions *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  operator<<(param_1,&param_2->UseGrouping);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEditorObjectVersion::GUID);
  if (0x26 < iVar1) {
    operator<<(param_1,&param_2->InsideLimits);
    operator<<(param_1,&param_2->UseClamping);
  }
  return param_1;
}

// operator<< @ 14173aa00

FArchive * __cdecl operator<<(FArchive *param_1,FTextLocalizationResourceString *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  
  if (param_2->String == (TDisplayStringRef<FString>)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                       ,0x9d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar3)();
      return pFVar5;
    }
  }
  operator<<(param_1,(FString *)((longlong)param_2->String + 8));
  piVar1 = &param_2->RefCount;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return param_1;
}

// operator<< @ 14173aac0

FArchive * __cdecl operator<<(FArchive *param_1,FIoChunkId *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,0xc);
  return param_1;
}

// operator<< @ 14173aaf0

FArchive * __cdecl operator<<(FArchive *param_1,FIoContainerId *param_2)

{
  ulong64 *puVar1;
  
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    param_2->Id = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,&param_2->Id);
  return param_1;
}

// operator<< @ 14173ab60

FArchive * __cdecl operator<<(FArchive *param_1,long64 *param_2)

{
  long64 *plVar1;
  
  plVar1 = (long64 *)**(longlong **)&param_1->field_0x8;
  if (plVar1 + 1 <= (long64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *param_2 = *plVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)param_2);
  return param_1;
}

// operator<< @ 14173abd0

FArchive * __cdecl operator<<(FArchive *param_1,bool *param_2)

{
  int *piVar1;
  uint local_res8 [2];
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *param_2 = *piVar1 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = (uint)(*param_2 != false);
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
  if (1 < local_res8[0]) {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    *param_2 = local_res8[0] != 0;
  }
  return param_1;
}

// operator<< @ 14173ac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbWriter * __cdecl operator<<(FCbWriter *param_1,FIoChunkId *param_2)

{
  FCbObjectId *pFVar1;
  undefined1 auStack_58 [32];
  TMemoryView<void_const_> local_38;
  FCbObjectId local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.Size = 0xc;
  local_38.Data = param_2;
  pFVar1 = FCbObjectId::FCbObjectId(&local_28,&local_38);
  FCbWriter::AddObjectId(param_1,pFVar1);
  return param_1;
}

// operator<< @ 14173ace0

FCbWriter * __cdecl operator<<(FCbWriter *param_1,FIoContainerId *param_2)

{
  FCbWriter::AddInteger(param_1,param_2->Id);
  return param_1;
}

// operator<< @ 14173ad00

void __cdecl operator<<(FStructuredArchiveSlot param_1,FFormatArgumentData *param_2)

{
  atomic<unsigned_char> *this;
  float *pfVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  uchar *puVar4;
  ETextGender *pEVar5;
  double *pdVar6;
  float *pfVar7;
  long64 *plVar8;
  uint *puVar9;
  code *pcVar10;
  FSlotBase FVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  FArchiveState *this_00;
  FText *pFVar15;
  longlong *plVar16;
  FTextLocalizationManager *pFVar17;
  FTextId *pFVar18;
  ushort *puVar19;
  FString *pFVar20;
  double *pdVar21;
  FArchive *pFVar22;
  ushort uVar23;
  FSlotBase local_res8;
  TEnumAsByte<EFormatArgumentType::Type> local_res10 [8];
  uint local_res18 [2];
  ushort local_res20;
  undefined1 local_68 [4];
  undefined1 local_64 [12];
  ITextData *local_58;
  undefined4 local_50;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar11.StructuredArchive = local_res8.StructuredArchive;
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FEditorObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5ReleaseStreamObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    if ((this_00->ArUEVer).FileVersionUE4 < 0x1e8) {
      pFVar15 = FText::GetEmpty();
      local_58 = (pFVar15->TextData).Reference;
      if (local_58 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58 + 8))(local_58,local_68);
      }
      local_50 = 0;
      pFVar22 = (FVar11.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar22 + 0x170))(pFVar22,&local_58);
      if (local_58 != (ITextData *)0x0) {
        plVar16 = (longlong *)(**(code **)((longlong)*local_58 + 0x50))();
        cVar12 = (**(code **)(*plVar16 + 0xa8))(plVar16);
        if (cVar12 != '\0') {
          pFVar17 = FTextLocalizationManager::Get();
          pFVar18 = (FTextId *)(**(code **)(*plVar16 + 0x60))(plVar16,local_64);
          AcquireSRWLockShared((PSRWLOCK)&pFVar17->TextRevisionRW);
          local_res20 = pFVar17->TextRevisionCounter;
          if ((((pFVar18->Namespace).Index != -1) || (uVar23 = 0, (pFVar18->Key).Index != -1)) &&
             (puVar19 = TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                        ::Find((TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
                                *)&pFVar17->LocalTextRevisions,pFVar18), uVar23 = 0,
             puVar19 != (ushort *)0x0)) {
            uVar23 = *puVar19;
          }
          ReleaseSRWLockShared((PSRWLOCK)&pFVar17->TextRevisionRW);
          this = (atomic<unsigned_char> *)(plVar16 + 2);
          if ((this == (atomic<unsigned_char> *)0x0) &&
             (bVar13 = FDebug::CheckVerifyFailedImpl2
                                 ("Mutex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                  ,0x1b,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          LOCK();
          FVar2.State = *this;
          if (FVar2.State == (atomic<unsigned_char>)0x0) {
            *this = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar2.State != (atomic<unsigned_char>)0x0) {
            UE::FMutex::LockSlow((FMutex *)this);
          }
          if ((*(ushort *)((longlong)plVar16 + 0xc) != local_res20) ||
             (*(ushort *)((longlong)plVar16 + 0xe) != uVar23)) {
            *(ushort *)((longlong)plVar16 + 0xc) = local_res20;
            *(ushort *)((longlong)plVar16 + 0xe) = uVar23;
            (**(code **)(*plVar16 + 0xb0))(plVar16);
          }
          if (this != (atomic<unsigned_char> *)0x0) {
            LOCK();
            aVar3 = *this;
            *this = (atomic<unsigned_char>)((char)*this + -1);
            UNLOCK();
            if (((byte)aVar3 & 2) != 0) {
              UE::FMutex::WakeWaitingThread((FMutex *)this);
            }
          }
        }
      }
      pFVar20 = (FString *)(**(code **)((longlong)*local_58 + 0x28))();
      FString::operator=(&param_2->ArgumentName,pFVar20);
      if (local_58 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58 + 0x10))();
      }
    }
    else {
      operator<<((FVar11.StructuredArchive)->Formatter->Inner,&param_2->ArgumentName);
    }
  }
  if (this_00->ArIsSaving != '\0') {
    operator<<((FVar11.StructuredArchive)->Formatter->Inner,&param_2->ArgumentName);
  }
  local_res10[0].Value = (param_2->ArgumentValueType).Value;
  if (this_00->ArIsLoading == 0) {
    if (this_00->ArIsSaving != '\0') goto LAB_14173af66;
  }
  else {
    FFormatArgumentData::ResetValue(param_2);
    iVar14 = FArchiveState::CustomVer(this_00,&FEditorObjectVersion::GUID);
    if (iVar14 < 5) {
      local_res10[0].Value = '\x04';
    }
    else {
LAB_14173af66:
      pFVar22 = (FVar11.StructuredArchive)->Formatter->Inner;
      puVar4 = (uchar *)**(undefined8 **)&pFVar22->field_0x8;
      if ((uchar *)(*(undefined8 **)&pFVar22->field_0x8)[1] < puVar4 + 1) {
        (**(code **)(*(longlong *)pFVar22 + 0x188))(pFVar22,local_res10,1);
      }
      else {
        local_res10[0].Value = *puVar4;
        **(longlong **)&pFVar22->field_0x8 = **(longlong **)&pFVar22->field_0x8 + 1;
      }
    }
  }
  (param_2->ArgumentValueType).Value = local_res10[0].Value;
  if (local_res10[0].Value == '\0') {
    iVar14 = FArchiveState::CustomVer(this_00,&FUE5ReleaseStreamObjectVersion::GUID);
    if (0xb < iVar14) {
      pFVar22 = (FVar11.StructuredArchive)->Formatter->Inner;
      plVar8 = (long64 *)**(longlong **)&pFVar22->field_0x8;
      if (plVar8 + 1 <= (long64 *)(*(longlong **)&pFVar22->field_0x8)[1]) {
        param_2->ArgumentValueInt = *plVar8;
        **(longlong **)&pFVar22->field_0x8 = **(longlong **)&pFVar22->field_0x8 + 8;
        return;
      }
      pdVar21 = (double *)&param_2->ArgumentValueInt;
      goto LAB_14173b125;
    }
    local_res18[0] = (uint)param_2->ArgumentValueInt;
    pFVar22 = (FVar11.StructuredArchive)->Formatter->Inner;
    puVar9 = (uint *)**(undefined8 **)&pFVar22->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar22->field_0x8)[1] < puVar9 + 1) {
      if ((pFVar22->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar22 + 0x188))(pFVar22,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar22,local_res18);
      }
    }
    else {
      local_res18[0] = *puVar9;
      **(longlong **)&pFVar22->field_0x8 = **(longlong **)&pFVar22->field_0x8 + 4;
    }
    param_2->ArgumentValueInt = (longlong)(int)local_res18[0];
  }
  else {
    if (local_res10[0].Value == '\x02') {
      pfVar1 = &param_2->ArgumentValueFloat;
      pFVar22 = (FVar11.StructuredArchive)->Formatter->Inner;
      pfVar7 = (float *)**(undefined8 **)&pFVar22->field_0x8;
      if (pfVar7 + 1 <= (float *)(*(undefined8 **)&pFVar22->field_0x8)[1]) {
        *pfVar1 = *pfVar7;
        **(longlong **)&pFVar22->field_0x8 = **(longlong **)&pFVar22->field_0x8 + 4;
        return;
      }
      if ((pFVar22->field_0x2a & 1) != 0) {
        FArchive::SerializeByteOrderSwapped(pFVar22,(uint *)pfVar1);
        return;
      }
      (**(code **)(*(longlong *)pFVar22 + 0x188))(pFVar22,pfVar1,4);
      return;
    }
    if (local_res10[0].Value == '\x03') {
      pdVar21 = &param_2->ArgumentValueDouble;
      pFVar22 = (FVar11.StructuredArchive)->Formatter->Inner;
      pdVar6 = (double *)**(longlong **)&pFVar22->field_0x8;
      if (pdVar6 + 1 <= (double *)(*(longlong **)&pFVar22->field_0x8)[1]) {
        *pdVar21 = *pdVar6;
        **(longlong **)&pFVar22->field_0x8 = **(longlong **)&pFVar22->field_0x8 + 8;
        return;
      }
LAB_14173b125:
      if ((pFVar22->field_0x2a & 1) != 0) {
        FArchive::SerializeByteOrderSwapped(pFVar22,(ulong64 *)pdVar21);
        return;
      }
      (**(code **)(*(longlong *)pFVar22 + 0x188))(pFVar22,pdVar21,8);
      return;
    }
    if (local_res10[0].Value == '\x04') {
      pFVar22 = (FVar11.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar22 + 0x170))(pFVar22,&param_2->ArgumentValue);
      return;
    }
    if (local_res10[0].Value == '\x05') {
      pFVar22 = (FVar11.StructuredArchive)->Formatter->Inner;
      pEVar5 = (ETextGender *)**(undefined8 **)&pFVar22->field_0x8;
      if ((ETextGender *)(*(undefined8 **)&pFVar22->field_0x8)[1] < pEVar5 + 1) {
        (**(code **)(*(longlong *)pFVar22 + 0x188))(pFVar22,&param_2->ArgumentValueGender,1);
        return;
      }
      param_2->ArgumentValueGender = *pEVar5;
      **(longlong **)&pFVar22->field_0x8 = **(longlong **)&pFVar22->field_0x8 + 1;
      return;
    }
  }
  return;
}

// operator<< @ 14173b1d0

void __cdecl operator<<(FStructuredArchiveSlot param_1,FNumberFormattingOptions *param_2)

{
  int *piVar1;
  FArchive *pFVar2;
  undefined1 *puVar3;
  int *piVar4;
  FSlotBase FVar5;
  int iVar6;
  FArchiveState *this;
  FSlotBase local_res8;
  undefined1 local_res10 [8];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  this = (FArchiveState *)
         UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar5.StructuredArchive = local_res8.StructuredArchive;
  (**(code **)(this->_padding_ + 0x230))(this,&FEditorObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer(this,&FEditorObjectVersion::GUID);
  if (0x14 < iVar6) {
    operator<<((FVar5.StructuredArchive)->Formatter->Inner,&param_2->AlwaysSign);
  }
  operator<<((FVar5.StructuredArchive)->Formatter->Inner,&param_2->UseGrouping);
  local_res10[0] = (undefined1)param_2->RoundingMode;
  pFVar2 = (FVar5.StructuredArchive)->Formatter->Inner;
  puVar3 = (undefined1 *)**(undefined8 **)&pFVar2->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res10,1);
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
  }
  piVar1 = &param_2->MinimumIntegralDigits;
  param_2->RoundingMode = (int)(char)local_res10[0];
  pFVar2 = (FVar5.StructuredArchive)->Formatter->Inner;
  piVar4 = (int *)**(undefined8 **)&pFVar2->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar2->field_0x8)[1] < piVar4 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  piVar1 = &param_2->MaximumIntegralDigits;
  pFVar2 = (FVar5.StructuredArchive)->Formatter->Inner;
  piVar4 = (int *)**(undefined8 **)&pFVar2->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar2->field_0x8)[1] < piVar4 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  piVar1 = &param_2->MinimumFractionalDigits;
  pFVar2 = (FVar5.StructuredArchive)->Formatter->Inner;
  piVar4 = (int *)**(undefined8 **)&pFVar2->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar2->field_0x8)[1] < piVar4 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  piVar1 = &param_2->MaximumFractionalDigits;
  pFVar2 = (FVar5.StructuredArchive)->Formatter->Inner;
  piVar4 = (int *)**(undefined8 **)&pFVar2->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    *piVar1 = *piVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    return;
  }
  if ((pFVar2->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)piVar1);
  return;
}

// operator<< @ 14173b3f0

void __cdecl operator<<(FStructuredArchiveSlot param_1,FFormatArgumentValue *param_2)

{
  FFormatArgumentValue_u_8 *pFVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  FArchive *pFVar4;
  FFormatArgumentValue_u_8 *pFVar5;
  float *pfVar6;
  FArchiveState *pFVar7;
  FText *pFVar8;
  FSlotBase local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FText local_18;
  
  local_res10[0] = (undefined1)param_2->Type;
  plVar2 = *(longlong **)(*(longlong *)param_1 + 8);
  puVar3 = *(undefined1 **)plVar2[1];
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar3 + 1) {
    (**(code **)(*plVar2 + 0x188))(plVar2,local_res10,1);
  }
  else {
    local_res10[0] = *puVar3;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
  }
  param_2->Type = (int)(char)local_res10[0];
  switch(local_res10[0]) {
  case 0:
  case 1:
  case 3:
  case 5:
    break;
  case 2:
    pFVar1 = &param_2->field1_0x8;
    pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
    pfVar6 = (float *)**(undefined8 **)&pFVar4->field_0x8;
    if (pfVar6 + 1 <= (float *)(*(undefined8 **)&pFVar4->field_0x8)[1]) {
      pFVar1->FloatValue = *pfVar6;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
      return;
    }
    if ((pFVar4->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)&pFVar1->UIntValue);
      return;
    }
    (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar1,4);
    return;
  case 4:
    pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
    if (pFVar7->ArIsLoading != 0) {
      pFVar8 = FText::GetEmpty();
      local_18.TextData.Reference = (pFVar8->TextData).Reference;
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 8))
                  (local_18.TextData.Reference,local_res18);
      }
      local_18.Flags = 0;
      TOptional<FText>::operator=(&param_2->TextValue,&local_18);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
    pFVar8 = TOptional<FText>::GetValue(&param_2->TextValue);
    (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x170))
              (*(longlong **)(*(longlong *)param_1 + 8),pFVar8);
  default:
    return;
  }
  pFVar1 = &param_2->field1_0x8;
  pFVar4 = *(FArchive **)(*(longlong *)param_1 + 8);
  pFVar5 = (FFormatArgumentValue_u_8 *)**(longlong **)&pFVar4->field_0x8;
  if (pFVar5 + 1 <= (FFormatArgumentValue_u_8 *)(*(longlong **)&pFVar4->field_0x8)[1]) {
    *pFVar1 = *pFVar5;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
    return;
  }
  if ((pFVar4->field_0x2a & 1) != 0) {
    FArchive::SerializeByteOrderSwapped(pFVar4,&pFVar1->UIntValue);
    return;
  }
  (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar1,8);
  return;
}

// operator<< @ 14173b5e0

void __cdecl operator<<(FStructuredArchiveSlot param_1,FIoContainerId *param_2)

{
  FArchive *this;
  ulong64 *puVar1;
  
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (ulong64 *)**(longlong **)&this->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&this->field_0x8)[1]) {
    param_2->Id = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014173b61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,&param_2->Id);
  return;
}

// operator/ @ 14173b7a0

FString * __cdecl operator/(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = (param_2->Data).ArrayNum;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (((param_1->Data).ArrayNum != 0) || (iVar2 = 2, iVar3 == -1)) {
    iVar2 = 1;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (param_1->Data).ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar2 + iVar3 == 0)) {
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    uVar4 = iVar1 + iVar2 + iVar3;
    if ((int)uVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar4,0,(ForAnyElementType *)__return_storage_ptr__,iVar1,
               &(__return_storage_ptr__->Data).ArrayMax);
    if (iVar1 != 0) {
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  FString::PathAppend(__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3
                     );
  return __return_storage_ptr__;
}

// operator() @ 14173c620

/* WARNING: Removing unreachable block (ram,0x00014173c99d) */

void __thiscall
`GetRequestedAssetGroups'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,ERequestedCultureOverrideLevel param_2)

{
  longlong *plVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  FConfigSection *pFVar8;
  bool bVar9;
  int iVar10;
  FConfigSection *pFVar11;
  FScriptContainerElement *pFVar12;
  FString *pFVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_c8;
  FScriptContainerElement *local_c0;
  undefined8 local_b8;
  FConfigSection *local_b0;
  int iStack_a8;
  uint uStack_a4;
  longlong *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FConfigSection *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  if ((**(ERequestedCultureOverrideLevel **)((longlong)this + 8) <= param_2) &&
     (pFVar11 = FConfigCacheIni::GetSection
                          (GConfig,L"Internationalization.AssetGroupCultures",false,param_1),
     pFVar11 != (FConfigSection *)0x0)) {
    iVar10 = (int)pFVar11->_padding_;
    iStack_a8 = 0;
    local_90 = 0;
    uStack_a4 = 1;
    plVar1 = &pFVar11->_padding_;
    iStack_94 = 0;
    if (iVar10 != 0) {
      plVar18 = (longlong *)pFVar11->_padding_;
      if ((longlong *)pFVar11->_padding_ == (longlong *)0x0) {
        plVar18 = plVar1;
      }
      uVar17 = (uint)*plVar18;
      while (uVar17 == 0) {
        lVar14 = (longlong)iStack_a8;
        local_90 = local_90 + 0x20;
        iStack_a8 = iStack_a8 + 1;
        iStack_94 = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14173c70e;
        uVar17 = *(uint *)((longlong)plVar18 + lVar14 * 4 + 4);
      }
      uStack_a4 = -uVar17 & uVar17;
      uVar4 = (ulonglong)uStack_a4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iStack_94 = local_90 + -1 + (int)lVar14;
      if (iVar10 < iStack_94) {
        iStack_94 = iVar10;
      }
    }
LAB_14173c70e:
    uVar17 = (uint)pFVar11->_padding_;
    uVar16 = uVar17 & 0xffffffe0;
    iStack_88 = (int)pFVar11->_padding_ - *(int *)((longlong)&pFVar11->_padding_ + 4);
    uStack_98 = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
    TStack_78.CurrentBitIndex = iStack_94;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar17 >> 5;
    TStack_78._28_4_ = iStack_94;
    TStack_78.BaseBitIndex = local_90;
    uStack_58 = CONCAT44(uStack_84,iStack_88);
    local_b0 = pFVar11;
    local_a0 = plVar1;
    iStack_8c = iStack_94;
    local_80 = pFVar11;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
    if ((((int)uVar17 < 0) || (iVar10 < (int)uVar17)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = (uint)pFVar11->_padding_;
    if (uVar17 != uVar5) {
      plVar18 = (longlong *)pFVar11->_padding_;
      if ((longlong *)pFVar11->_padding_ == (longlong *)0x0) {
        plVar18 = plVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)plVar18 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14173c820;
        uVar17 = *(uint *)((longlong)plVar18 + lVar14 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      uVar17 = local_res20 + -1 + uVar16;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
LAB_14173c820:
    while( true ) {
      pFVar8 = local_80;
      if ((int)local_80->_padding_ - *(int *)((longlong)&local_80->_padding_ + 4) != (int)uStack_58)
      {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_78.CurrentBitIndex == uVar17) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
         (pFVar8 == pFVar11)) break;
      pFVar6 = *(ForAnyElementType **)this;
      plVar18 = (longlong *)(pFVar8->_padding_ + (longlong)TStack_78.CurrentBitIndex * 0x28);
      pFVar12 = pFVar6->Data;
      pFVar3 = pFVar12 + (longlong)*(int *)&pFVar6[1].Data * 0x18;
      if (pFVar12 != pFVar3) {
        do {
          if (*(longlong *)pFVar12 == *plVar18) goto LAB_14173c9b0;
          pFVar12 = pFVar12 + 0x18;
        } while (pFVar12 != pFVar3);
      }
      pFVar13 = FConfigValue::GetValue((FConfigValue *)(plVar18 + 1),&local_50);
      local_c8 = *plVar18;
      local_c0 = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8._0_4_ = (pFVar13->Data).ArrayNum;
      local_b8._4_4_ = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      if (((pFVar6->Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = *(int *)&pFVar6[1].Data;
      piVar2 = (int *)((longlong)&pFVar6[1].Data + 4);
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,pFVar6,piVar2);
      }
      *(int *)&pFVar6[1].Data = iVar10 + 1;
      pFVar3 = pFVar6->Data + (longlong)iVar10 * 0x18;
      *(longlong *)pFVar3 = local_c8;
      *(undefined8 *)(pFVar3 + 8) = 0;
      *(FScriptContainerElement **)(pFVar3 + 8) = local_c0;
      *(undefined4 *)(pFVar3 + 0x10) = (undefined4)local_b8;
      *(undefined4 *)(pFVar3 + 0x14) = local_b8._4_4_;
      local_b8 = 0;
      local_c0 = (FScriptContainerElement *)0x0;
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
LAB_14173c9b0:
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return;
}

// operator() @ 14173ca00

void __thiscall `GetRequestedCulture'::__l2::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pwVar5 = L"";
  if (*(int *)(*(longlong *)this + 8) < 2) {
    pFVar2 = FLeetCulture::StaticGetName();
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    pwVar3 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar3,pwVar4);
    if (!bVar1) goto LAB_14173ca50;
    pFVar2 = FLeetCulture::StaticGetName();
  }
  else {
LAB_14173ca50:
    if (1 < *(int *)(*(longlong *)this + 8)) goto LAB_14173ca97;
    pFVar2 = FKeysCulture::StaticGetName();
    if ((pFVar2->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    pwVar3 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar3,pwVar4);
    if (!bVar1) goto LAB_14173ca97;
    pFVar2 = FKeysCulture::StaticGetName();
  }
  ::FString::operator=(*(FString **)this,pFVar2);
  **(undefined1 **)((longlong)this + 0x18) = 0;
LAB_14173ca97:
  pFVar2 = *(FString **)this;
  if ((pFVar2->Data).ArrayNum < 2) {
    pwVar4 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar4,L"CULTUREFORCOOKING=",pFVar2,true,(wchar_t **)0x0);
    if (bVar1) {
      **(undefined1 **)((longlong)this + 0x18) = 0;
      pwVar4 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar4,L"firstinstall");
      if ((bVar1) && ((wchar_t *)**(undefined8 **)((longlong)this + 0x10) != (wchar_t *)0x0)) {
        if (*(int *)(*(undefined8 **)this + 1) != 0) {
          pwVar5 = (wchar_t *)**(undefined8 **)this;
        }
        FConfigCacheIni::SetString
                  (GConfig,L"Internationalization",
                   (wchar_t *)**(undefined8 **)((longlong)this + 0x10),pwVar5,&GEngineIni);
      }
    }
  }
  pFVar2 = *(FString **)this;
  if (((pFVar2->Data).ArrayNum < 2) &&
     (pwVar5 = (wchar_t *)**(undefined8 **)((longlong)this + 8), pwVar5 != (wchar_t *)0x0)) {
    pwVar4 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar4,pwVar5,pFVar2,true,(wchar_t **)0x0);
    if (bVar1) {
      **(undefined1 **)((longlong)this + 0x18) = 0;
    }
  }
  pFVar2 = *(FString **)this;
  if ((pFVar2->Data).ArrayNum < 2) {
    pwVar5 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar5,L"CULTURE=",pFVar2,true,(wchar_t **)0x0);
    if (bVar1) {
      **(undefined1 **)((longlong)this + 0x18) = 0;
    }
  }
  return;
}

// operator() @ 14173d490

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall `InitEngineTextLocalization'::__l2::<lambda_1>::operator()(void *this)

{
  ELocalizationLoadFlags EVar1;
  atomic<ETextLocalizationManagerInitializedFlags> aVar2;
  int iVar3;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FTextLocalizationManager *pFVar7;
  FInternationalization *pFVar8;
  FString *pFVar9;
  undefined4 uStack_1c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_18;
  
  pFVar7 = FTextLocalizationManager::Get();
  EVar1 = *(ELocalizationLoadFlags *)this;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (pFVar8->CurrentLanguage).Object;
  pTVar4 = (pFVar8->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar9 = FCulture::GetName(this_00);
  local_18.DataPtr = *(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 8);
  iVar3 = *(int *)((longlong)this + 0x10);
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar3;
  FTextLocalizationManager::LoadLocalizationResourcesForCulture_Sync(pFVar7,&local_18,pFVar9,EVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar7 = FTextLocalizationManager::Get();
  aVar2 = pFVar7->InitializedFlags;
  pFVar7 = FTextLocalizationManager::Get();
  LOCK();
  pFVar7->InitializedFlags = (atomic<ETextLocalizationManagerInitializedFlags>)((byte)aVar2 | 1);
  UNLOCK();
  return;
}

// operator() @ 14173d5d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall `InitGameTextLocalization'::__l2::<lambda_1>::operator()(void *this)

{
  ELocalizationLoadFlags EVar1;
  atomic<ETextLocalizationManagerInitializedFlags> aVar2;
  int iVar3;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FTextLocalizationManager *pFVar7;
  FInternationalization *pFVar8;
  FString *pFVar9;
  undefined4 uStack_1c;
  TArrayView<TSharedPtr<ILocalizedTextSource,1>_const_,int> local_18;
  
  pFVar7 = FTextLocalizationManager::Get();
  EVar1 = *(ELocalizationLoadFlags *)this;
  pFVar8 = FInternationalization::Get();
  if ((pFVar8->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (pFVar8->CurrentLanguage).Object;
  pTVar4 = (pFVar8->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar9 = FCulture::GetName(this_00);
  local_18.DataPtr = *(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 8);
  iVar3 = *(int *)((longlong)this + 0x10);
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar3;
  FTextLocalizationManager::LoadLocalizationResourcesForCulture_Sync(pFVar7,&local_18,pFVar9,EVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar7 = FTextLocalizationManager::Get();
  aVar2 = pFVar7->InitializedFlags;
  pFVar7 = FTextLocalizationManager::Get();
  LOCK();
  pFVar7->InitializedFlags = (atomic<ETextLocalizationManagerInitializedFlags>)((byte)aVar2 | 2);
  UNLOCK();
  return;
}

// operator() @ 14173e250

wchar_t * __thiscall
`TextStringificationUtil::ReadDateTimeFromBuffer'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,Type *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&DateTimeStyleMarker,L"EDateTimeStyle::");
    atexit(``TextStringificationUtil::ReadDateTimeFromBuffer'::__l2::<lambda_1>::operator()'::__l2::
           _dynamic_atexit_destructor_for__DateTimeStyleMarker__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar3 = DateTimeStyleMarker.Data.ArrayNum + -1;
  FVar5.Data = DateTimeStyleMarker.Data.AllocatorInstance.Data;
  if (DateTimeStyleMarker.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp(param_1,(wchar_t *)FVar5.Data,(longlong)iVar3);
  if (iVar3 == 0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    iVar3 = DateTimeStyleMarker.Data.ArrayNum + -1;
    if (DateTimeStyleMarker.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pwVar4 = param_1 + iVar3;
    ::FString::Reset(&local_18,0);
    wVar1 = *pwVar4;
    while ((wVar1 != L'\0' && ((iVar3 = iswalnum(wVar1), iVar3 != 0 || (*pwVar4 == L'_'))))) {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
      ::FString::AppendChar(&local_18,wVar1);
      wVar1 = *pwVar4;
    }
    pwVar6 = (wchar_t *)0x0;
    if (1 < local_18.Data.ArrayNum) {
      pwVar6 = pwVar4;
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar5.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar2 = LexTryParseString(param_2,(wchar_t *)FVar5.Data);
      if (bVar2) {
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pwVar6;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return pwVar6;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (wchar_t *)0x0;
}

// operator() @ 14173e3f0

wchar_t * __thiscall
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool *param_2)

{
  ForAnyElementType FVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&ValueString,L"true");
    atexit(``TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>::
           operator()'::__l3::_dynamic_atexit_destructor_for__ValueString__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar2 = ValueString.Data.ArrayNum + -1;
  FVar1.Data = ValueString.Data.AllocatorInstance.Data;
  if (ValueString.Data.ArrayNum == 0) {
    iVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  iVar2 = FGenericPlatformStricmp::Strnicmp(param_1,(wchar_t *)FVar1.Data,(longlong)iVar2);
  if (iVar2 == 0) {
    *param_2 = true;
    iVar2 = ValueString.Data.ArrayNum;
  }
  else {
    if ((*piVar4 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FString::FString(&ValueString,L"false");
      atexit(``TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>::
             operator()'::__l7::_dynamic_atexit_destructor_for__ValueString__);
      _Init_thread_footer(&::_TSS1);
    }
    iVar2 = ValueString.Data.ArrayNum + -1;
    FVar1.Data = ValueString.Data.AllocatorInstance.Data;
    if (ValueString.Data.ArrayNum == 0) {
      iVar2 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    iVar2 = FGenericPlatformStricmp::Strnicmp(param_1,(wchar_t *)FVar1.Data,(longlong)iVar2);
    if (iVar2 != 0) {
      return (wchar_t *)0x0;
    }
    *param_2 = false;
    iVar2 = ValueString.Data.ArrayNum;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  return param_1 + iVar3;
}

// operator() @ 14173e700

void __thiscall
`TextStringificationUtil::WriteDateTimeToBuffer'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,Type *param_2)

{
  Type TVar1;
  size_t sVar2;
  wchar_t *_Str;
  
  TVar1 = *param_2;
  ::FString::AppendChars(param_1,L"EDateTimeStyle::",0x10);
  switch(TVar1) {
  case Default:
    _Str = L"Default";
    break;
  case Short:
    _Str = L"Short";
    break;
  case Medium:
    _Str = L"Medium";
    break;
  case Long:
    _Str = L"Long";
    break;
  case Full:
    _Str = L"Full";
    break;
  case Custom:
    _Str = L"Custom";
    break;
  default:
    _Str = L"<Unknown EDateTimeStyle>";
  }
  sVar2 = wcslen(_Str);
  ::FString::AppendChars(param_1,_Str,(int)sVar2);
  return;
}

// operator() @ 14173e8e0

bool __thiscall
``FLocalizationResourceTextSource::LoadLocalizedResources'::__l2::<lambda_1>::operator()'::__l5::
<lambda_1>::operator()(void *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  bool bVar1;
  int iVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  this_00 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)this;
  pTVar3 = &FPaths::ProjectContentDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar3,0xe - (uint)(pTVar3->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_38,L"Localization",0xc);
  iVar2 = (param_1->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if ((local_38.ArrayNum != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,&local_38,iVar4 + iVar2);
  ::FString::PathAppend
            ((FString *)&local_28,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar4);
  bVar1 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (this_00,(FString *)&local_28);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return !bVar1;
}

// operator() @ 14173e9d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
``ApplyDefaultCultureSettings'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  FInternationalization::GetPrioritizedCultureNames
            (*(FInternationalization **)((longlong)this + 8),&local_38,param_1);
  iVar1 = local_38.ArrayNum;
  pFVar4 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar6.Data == pFVar4) break;
    puVar3 = (undefined8 *)**(longlong **)this;
    puVar5 = puVar3 + (longlong)(int)(*(longlong **)this)[1] * 2;
    for (; puVar3 != puVar5; puVar3 = puVar3 + 2) {
      iVar2 = *(int *)(puVar3 + 1);
      if (iVar2 == *(int *)(FVar6.Data + 8)) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar3,*(wchar_t **)FVar6.Data);
          bVar7 = iVar2 == 0;
          goto LAB_14173ea63;
        }
LAB_14173ea79:
        ::FString::FString(__return_storage_ptr__,(FString *)FVar6.Data);
        goto LAB_14173ea8f;
      }
      bVar7 = iVar2 + *(int *)(FVar6.Data + 8) == 1;
LAB_14173ea63:
      if (bVar7) goto LAB_14173ea79;
    }
    FVar6.Data = FVar6.Data + 0x10;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
LAB_14173ea8f:
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14173ead0

bool __thiscall
`TextLocalizationResourceUtil::GetLocalizedCultureNames'::__l6::<lambda_1>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  wchar_t *pwVar5;
  int iVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_2) {
    if (*(int *)(*(undefined8 **)((longlong)this + 8) + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)**(undefined8 **)((longlong)this + 8);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_1,pwVar5);
    if (iVar3 != 0) {
      iVar6 = 1;
      puVar1 = *(undefined8 **)((longlong)this + 0x10);
      iVar3 = *(int *)(puVar1 + 1);
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      pTVar4 = &::FString::FString(&local_28,param_1)->Data;
      if ((pTVar4->ArrayNum != 0) || (iVar3 == 0)) {
        iVar6 = 0;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_58,pTVar4,iVar6 + iVar3);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      iVar3 = *(int *)(puVar1 + 1) + -1;
      if (*(int *)(puVar1 + 1) == 0) {
        iVar3 = 0;
      }
      ::FString::PathAppend((FString *)&local_58,(wchar_t *)*puVar1,iVar3);
      bVar2 = FPaths::FileExists((FString *)&local_58);
      if (bVar2) {
        ::FString::FString(&local_48,param_1);
        FPaths::GetCleanFilename(&local_28,&local_48);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        FCulture::GetCanonicalName(&local_38,&local_28);
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                  (*(TArray<FString,TSizedDefaultAllocator<32>_> **)this,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
  }
  return true;
}

// operator() @ 14173ef30

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
`ApplyDefaultCultureSettings'::__l2::<lambda_2>::operator()
          (void *this,FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          wchar_t *param_3,bool param_4)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FTextLocalizationManager *this_00;
  FStaticBasicLogRecord *pFVar4;
  bool bVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  pFVar3 = FLeetCulture::StaticGetName();
  iVar2 = (__return_storage_ptr__->Data).ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return __return_storage_ptr__;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,
                       (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
    bVar5 = iVar2 == 0;
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
  }
  if (bVar5) {
    return __return_storage_ptr__;
  }
  pFVar3 = FKeysCulture::StaticGetName();
  iVar2 = (__return_storage_ptr__->Data).ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return __return_storage_ptr__;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,
                       (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
    bVar5 = iVar2 == 0;
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
  }
  if (bVar5) {
    return __return_storage_ptr__;
  }
  this_00 = FTextLocalizationManager::Get();
  FTextLocalizationManager::GetLocalizedCultureNames
            (this_00,&local_48,*(ELocalizationLoadFlags *)this);
  local_28 = &local_48;
  local_20 = *(undefined8 *)((longlong)this + 8);
  ``ApplyDefaultCultureSettings'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()
            (&local_28,&local_38,param_1);
  ``ApplyDefaultCultureSettings'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()
            (&local_28,&local_18,param_2);
  if (local_38.Data.ArrayNum < 2) {
    if (local_18.Data.ArrayNum < 2) {
      if (0 < local_48.ArrayNum) {
        param_2 = (FString *)local_48.AllocatorInstance.Data;
      }
      ::FString::operator=(__return_storage_ptr__,param_2);
      if ((byte)LogTextLocalizationManager._0_1_ < 5) goto LAB_14173f14f;
      pFVar4 = &::LOG_Static;
    }
    else {
      ::FString::operator=(__return_storage_ptr__,&local_18);
      if ((byte)LogTextLocalizationManager._0_1_ < 5) goto LAB_14173f14f;
      pFVar4 = &::LOG_Static;
    }
  }
  else {
    if (!param_4) goto LAB_14173f14f;
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == local_38.Data.ArrayNum) {
      if (iVar2 < 2) goto LAB_14173f14f;
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)local_38.Data.AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar2 + local_38.Data.ArrayNum == 1;
    }
    if ((bVar5) ||
       (::FString::operator=(__return_storage_ptr__,&local_38),
       (byte)LogTextLocalizationManager._0_1_ < 5)) goto LAB_14173f14f;
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar4,(FLogCategoryBase *)&LogTextLocalizationManager);
LAB_14173f14f:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14173f300

wchar_t * __thiscall
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_2>::operator()
          (void *this,wchar_t *param_1,int *param_2)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  FFormatArgumentValue local_28;
  
  local_28.Type = Text;
  pFVar1 = FText::GetEmpty();
  TOptional<FText>::TOptional<FText>(&local_28.TextValue,pFVar1);
  pwVar2 = TextStringificationUtil::ReadNumberFromBuffer(param_1,&local_28);
  if (pwVar2 != (wchar_t *)0x0) {
    if ((local_28.Type == Int) || (local_28.Type == UInt)) {
      *param_2 = (int)local_28.field1_0x8.FloatValue;
      goto LAB_14173f374;
    }
    if (local_28.Type == Float) {
      *param_2 = (int)local_28.field1_0x8.FloatValue;
      goto LAB_14173f374;
    }
    if (local_28.Type == Double) {
      *param_2 = (int)(double)CONCAT44(local_28.field1_0x8.IntValue._4_4_,
                                       local_28.field1_0x8.FloatValue);
      goto LAB_14173f374;
    }
  }
  pwVar2 = (wchar_t *)0x0;
LAB_14173f374:
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  return pwVar2;
}

// operator() @ 14173f490

wchar_t * __thiscall
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_3>::operator()
          (void *this,wchar_t *param_1,ERoundingMode *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&RoundingModeMarker,L"ERoundingMode::");
    atexit(``TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_3>::
           operator()'::__l2::_dynamic_atexit_destructor_for__RoundingModeMarker__);
    _Init_thread_footer(&::_TSS0);
  }
  iVar3 = RoundingModeMarker.Data.ArrayNum + -1;
  FVar5.Data = RoundingModeMarker.Data.AllocatorInstance.Data;
  if (RoundingModeMarker.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp(param_1,(wchar_t *)FVar5.Data,(longlong)iVar3);
  if (iVar3 == 0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    iVar3 = RoundingModeMarker.Data.ArrayNum + -1;
    if (RoundingModeMarker.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    pwVar4 = param_1 + iVar3;
    ::FString::Reset(&local_18,0);
    wVar1 = *pwVar4;
    while ((wVar1 != L'\0' && ((iVar3 = iswalnum(wVar1), iVar3 != 0 || (*pwVar4 == L'_'))))) {
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
      ::FString::AppendChar(&local_18,wVar1);
      wVar1 = *pwVar4;
    }
    pwVar6 = (wchar_t *)0x0;
    if (1 < local_18.Data.ArrayNum) {
      pwVar6 = pwVar4;
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar5.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar2 = LexTryParseString(param_2,(wchar_t *)FVar5.Data);
      if (bVar2) {
        if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return pwVar6;
        }
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return pwVar6;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (wchar_t *)0x0;
}

// operator() @ 14173f630

void __thiscall
`TextStringificationUtil::WriteNumberFormattingOptionsToBuffer'::__l2::<lambda_3>::operator()
          (void *this,FString *param_1,ERoundingMode *param_2)

{
  ERoundingMode EVar1;
  size_t sVar2;
  wchar_t *_Str;
  
  EVar1 = *param_2;
  ::FString::AppendChars(param_1,L"ERoundingMode::",0xf);
  switch(EVar1) {
  case HalfToEven:
    _Str = L"HalfToEven";
    break;
  case HalfFromZero:
    _Str = L"HalfFromZero";
    break;
  case HalfToZero:
    _Str = L"HalfToZero";
    break;
  case FromZero:
    _Str = L"FromZero";
    break;
  case ToZero:
    _Str = L"ToZero";
    break;
  case ToNegativeInfinity:
    _Str = L"ToNegativeInfinity";
    break;
  case ToPositiveInfinity:
    _Str = L"ToPositiveInfinity";
    break;
  default:
    _Str = L"<Unknown ERoundingMode>";
  }
  sVar2 = wcslen(_Str);
  ::FString::AppendChars(param_1,_Str,(int)sVar2);
  return;
}

// operator() @ 14173f700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TextLocalizationManager::<lambda_3>::operator()
          (<lambda_3> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  FTextLocalizationManager *pFVar4;
  IFileManager *pIVar5;
  ForAnyElementType FVar6;
  FStaticBasicLogRecord *pFVar7;
  FLogCategoryLogLocalization *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  wchar_t **local_res18;
  FLogCategoryLogConsoleResponse *local_res20;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FScriptContainerElement *local_b8;
  int local_b0;
  int local_ac;
  FScriptContainerElement *local_a8;
  int local_a0;
  int local_9c;
  FScriptContainerElement *local_98;
  int local_90;
  int local_8c;
  wchar_t *local_88;
  undefined8 local_80;
  code *local_78;
  wchar_t ***local_70;
  wchar_t *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  code *local_58;
  FLogCategoryLogConsoleResponse **local_50;
  TStringView<wchar_t> local_48;
  
  iVar10 = param_1->ArrayNum;
  pFVar16 = (FScriptContainerElement *)0x0;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar13 = pFVar11 + (longlong)iVar10 * 0x10;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  bVar3 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    iVar15 = 0;
    if (pFVar11 == pFVar13) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_108,L" ",1);
    }
    iVar14 = *(int *)(pFVar11 + 8) + -1;
    if (*(int *)(pFVar11 + 8) == 0) {
      iVar14 = iVar15;
    }
    ::FString::AppendChars(&local_108,*(wchar_t **)pFVar11,iVar14);
    pFVar11 = pFVar11 + 0x10;
  }
  iVar10 = -1;
  local_98 = (FScriptContainerElement *)0x0;
  local_90 = 0;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar6.Data = local_108.Data.AllocatorInstance.Data;
  }
  local_8c = -1;
  local_a8 = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  FVar12.Data = (FScriptContainerElement *)0x0;
  local_9c = -1;
  local_b8 = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_ac = -1;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  bVar3 = FParse::Value((wchar_t *)FVar6.Data,L"Namespace=",&local_f8,true,(wchar_t **)0x0);
  iVar14 = iVar15;
  if (bVar3) {
    local_98 = local_f8.Data.AllocatorInstance.Data;
    local_90 = local_f8.Data.ArrayNum;
    iVar2 = local_f8.Data.ArrayMax;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8c = local_f8.Data.ArrayMax;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    if ((iVar2 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar12.Data = pFVar16;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar6.Data = local_108.Data.AllocatorInstance.Data;
    }
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    bVar3 = FParse::Value((wchar_t *)FVar6.Data,L"Key=",&local_e8,true,(wchar_t **)0x0);
    if (bVar3) {
      local_a8 = local_e8.Data.AllocatorInstance.Data;
      local_a0 = local_e8.Data.ArrayNum;
      iVar2 = local_e8.Data.ArrayMax;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9c = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      if ((iVar2 == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar6.Data = local_108.Data.AllocatorInstance.Data;
      }
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      bVar3 = FParse::Value((wchar_t *)FVar6.Data,L"DisplayString=",&local_d8,true,(wchar_t **)0x0);
      if (bVar3) {
        local_b8 = local_d8.Data.AllocatorInstance.Data;
        local_b0 = local_d8.Data.ArrayNum;
        iVar2 = local_d8.Data.ArrayMax;
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_ac = local_d8.Data.ArrayMax;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        if ((iVar2 == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar6.Data = local_108.Data.AllocatorInstance.Data;
        }
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
        bVar3 = FParse::Value((wchar_t *)FVar6.Data,L"DumpFile=",&local_c8,true,(wchar_t **)0x0);
        FVar6.Data = local_c8.Data.AllocatorInstance.Data;
        if (bVar3) {
          iVar10 = local_c8.Data.ArrayMax;
          iVar14 = local_c8.Data.ArrayNum;
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          if ((iVar10 == -1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar12.Data = FVar6.Data;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (2 < (byte)LogLocalization._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLocalization);
          }
        }
      }
    }
  }
  if (((local_8c == -1) && (local_9c == -1)) && (local_ac == -1)) {
    if (iVar10 != -1) {
LAB_14173faac:
      pFVar4 = FTextLocalizationManager::Get();
      local_res18 = &local_88;
      pFVar11 = (FScriptContainerElement *)&local_b8;
      if (local_ac == -1) {
        pFVar11 = pFVar16;
      }
      local_88 = (wchar_t *)0x0;
      local_70 = &local_res18;
      local_80 = 0;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTextLocalizationManager::DumpLiveTable'::__l2::<lambda_1>,void,FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&>
                 ::Call;
      pFVar13 = (FScriptContainerElement *)&local_a8;
      if (local_9c == -1) {
        pFVar13 = pFVar16;
      }
      pFVar9 = (FScriptContainerElement *)&local_98;
      if (local_8c == -1) {
        pFVar9 = pFVar16;
      }
      FTextLocalizationManager::DumpLiveTableImpl
                (pFVar4,(FString *)pFVar9,(FString *)pFVar13,(FString *)pFVar11,
                 (TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>
                  *)&local_78);
      pIVar5 = IFileManager::Get();
      local_68 = local_88;
      pFVar11 = (FScriptContainerElement *)L"";
      if (iVar14 != 0) {
        pFVar11 = FVar12.Data;
      }
      iStack_60 = (int)local_80 + -1;
      if ((int)local_80 == 0) {
        iStack_60 = iVar15;
      }
      local_48._12_4_ = uStack_5c;
      local_48.Size = iStack_60;
      local_48.DataPtr = local_88;
      FFileHelper::SaveStringToFile(&local_48,(wchar_t *)pFVar11,ForceUTF8WithoutBOM,pIVar5,0);
      if (local_88 != (wchar_t *)0x0) {
        FMemory::Free(local_88);
      }
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      goto LAB_14173fc1b;
    }
    if ((byte)LogLocalization._0_1_ < 4) goto LAB_14173fc1b;
    pFVar8 = &LogLocalization;
    pFVar7 = &::LOG_Static;
  }
  else {
    if (iVar10 != -1) goto LAB_14173faac;
    pFVar4 = FTextLocalizationManager::Get();
    pFVar11 = (FScriptContainerElement *)&local_b8;
    if (local_ac == -1) {
      pFVar11 = pFVar16;
    }
    pFVar13 = (FScriptContainerElement *)&local_a8;
    if (local_9c == -1) {
      pFVar13 = pFVar16;
    }
    pFVar9 = (FScriptContainerElement *)&local_98;
    if (local_8c == -1) {
      pFVar9 = pFVar16;
    }
    if ((3 < (byte)LogConsoleResponse._3_1_) && (3 < (byte)LogConsoleResponse._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    local_50 = &local_res20;
    local_res20 = &LogConsoleResponse;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FTextLocalizationManager::DumpLiveTable'::__l2::<lambda_1>,void,FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&>
               ::Call;
    FTextLocalizationManager::DumpLiveTableImpl
              (pFVar4,(FString *)pFVar9,(FString *)pFVar13,(FString *)pFVar11,
               (TFunctionRef<void___cdecl(FTextId_const_&,UE::Text::Private::TDisplayStringRef<FString_const_>_const_&)>
                *)&local_58);
    if (((byte)LogConsoleResponse._3_1_ < 4) || ((byte)LogConsoleResponse._0_1_ < 4))
    goto LAB_14173fc1b;
    pFVar7 = &::LOG_Static;
    pFVar8 = (FLogCategoryLogLocalization *)&LogConsoleResponse;
  }
  UE::Logging::Private::BasicLog<4>(pFVar7,(FLogCategoryBase *)pFVar8);
LAB_14173fc1b:
  if ((local_ac != -1) && (local_b8 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8);
  }
  if ((local_9c != -1) && (local_a8 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a8);
  }
  if ((local_8c != -1) && (local_98 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14173fd90

/* WARNING: Removing unreachable block (ram,0x00014173ffdc) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TextLocalizationManager::<lambda_4>::operator()
          (<lambda_4> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTextLocalizationManager *this_00;
  longlong *plVar4;
  FOutputDeviceRedirector *pFVar5;
  ForAnyElementType FVar6;
  FStaticBasicLogRecord *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  int iVar11;
  undefined1 local_res10 [8];
  FString local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  FString *local_38;
  undefined8 local_30;
  
  iVar1 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  bVar3 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_88,L" ",1);
    }
    iVar11 = *(int *)(pFVar8 + 8) + -1;
    if (*(int *)(pFVar8 + 8) == 0) {
      iVar11 = 0;
    }
    ::FString::AppendChars(&local_88,*(wchar_t **)pFVar8,iVar11);
    pFVar8 = pFVar8 + 0x10;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar6.Data = local_88.Data.AllocatorInstance.Data;
  }
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = -1;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = -1;
  local_78 = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_6c = -1;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  bVar3 = FParse::Value((wchar_t *)FVar6.Data,L"Namespace=",&local_98,true,(wchar_t **)0x0);
  if (bVar3) {
    local_48.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_48.Data.ArrayNum = local_98.Data.ArrayNum;
    local_48.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar6.Data = local_88.Data.AllocatorInstance.Data;
  }
  bVar3 = FParse::Value((wchar_t *)FVar6.Data,L"Key=",&local_98,true,(wchar_t **)0x0);
  if (bVar3) {
    local_58.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_98.Data.ArrayNum;
    iVar1 = local_98.Data.ArrayMax;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    if ((iVar1 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar6.Data = local_88.Data.AllocatorInstance.Data;
  }
  bVar3 = FParse::Value((wchar_t *)FVar6.Data,L"DisplayString=",&local_98,true,(wchar_t **)0x0);
  if (bVar3) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_68.Data.ArrayNum = local_98.Data.ArrayNum;
    iVar1 = local_98.Data.ArrayMax;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    if ((iVar1 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar6.Data = local_88.Data.AllocatorInstance.Data;
  }
  bVar3 = FParse::Value((wchar_t *)FVar6.Data,L"SourceString=",&local_98,true,(wchar_t **)0x0);
  FVar6.Data = local_98.Data.AllocatorInstance.Data;
  FVar10.Data = (FScriptContainerElement *)0x0;
  if (bVar3) {
    local_70 = local_98.Data.ArrayNum;
    iVar1 = local_98.Data.ArrayMax;
    local_78 = local_98.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6c = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    FVar10.Data = FVar6.Data;
    if ((iVar1 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((local_58.Data.ArrayMax == -1) || (local_68.Data.ArrayMax == -1)) {
    if ((byte)LogLocalization._0_1_ < 4) goto LAB_14174015c;
    pFVar7 = &::LOG_Static;
  }
  else {
    if (1 < local_58.Data.ArrayNum) {
      this_00 = FTextLocalizationManager::Get();
      pFVar8 = (FScriptContainerElement *)&local_78;
      if (local_6c == -1) {
        pFVar8 = (FScriptContainerElement *)0x0;
      }
      FTextLocalizationManager::AddOrUpdateDisplayStringInLiveTable
                (this_00,&local_48,&local_58,&local_68,(FString *)pFVar8);
      if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
         (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
      {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      plVar4 = (longlong *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 200))
                         (IConsoleManager::Singleton,L"Slate.TriggerInvalidate",1);
      if (plVar4 != (longlong *)0x0) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x80))(plVar4);
        pcVar2 = *(code **)(*plVar4 + 0xa8);
        pFVar5 = GetGlobalLogSingleton();
        local_38 = (FString *)0x0;
        local_30 = 0;
        (*pcVar2)(plVar4,&local_38,0,pFVar5);
        DestructItems<FString,int>(local_38,(int)local_30);
        if (local_38 != (FString *)0x0) {
          FMemory::Free(local_38);
        }
      }
      goto LAB_14174015c;
    }
    if ((byte)LogLocalization._0_1_ < 4) goto LAB_14174015c;
    pFVar7 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<4>(pFVar7,(FLogCategoryBase *)&LogLocalization);
LAB_14174015c:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((local_6c != -1) && (FVar10.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FVar10.Data);
  }
  if ((local_68.Data.ArrayMax != -1) &&
     (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((local_58.Data.ArrayMax != -1) &&
     (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 1417407d0

void * __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::
_scalar_deleting_destructor_
          (FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).TextFormatArgumentModifier.SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740810

void * __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FArgumentTokenSpecifier>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFormatTokens::FArgumentTokenSpecifier> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740840

void * __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FEscapedCharacter>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFormatTokens::FEscapedCharacter> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740870

void * __thiscall
Impl::FInlineDataStorage<TextFormatTokens::FStringLiteral>::_scalar_deleting_destructor_
          (FInlineDataStorage<TextFormatTokens::FStringLiteral> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417408a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417408d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740900

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTextLocalizationManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740930

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TSharedPtr<ITextFormatArgumentModifier,1>_(__cdecl*)(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<TSharedPtr<ITextFormatArgumentModifier,1>_(__cdecl*)(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TSharedPtr_VITextFormatArgumentModifier___00__AEBVFTextFormatString__AEBV__TSharedRef___CBVFTextFormatPatternDefinition___00___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417409a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FTextLocalizationManager::DirtyTextRevision'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FTextLocalizationManager::DirtyTextRevision'::`10'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417409e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextHistory_StringTableEntry::FStringTableReferenceData::ConditionalBeginAssetLoad'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740a90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsMounted'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `FTextLocalizationManager::HandleLocalizationTargetsMounted'::__l2::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::HandleLocalizationTargetsUnmounted'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InitEngineTextLocalization'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`InitEngineTextLocalization'::`2'::<lambda_1>,1,1>::_vftable_;
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740bc0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`InitGameTextLocalization'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`InitGameTextLocalization'::`2'::<lambda_1>,1,1>::_vftable_;
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::LoadChunkedLocalizationResources_Async'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForCulture_Async'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationResourcesForPrioritizedCultures_Async'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            (*(TSharedPtr<ILocalizedTextSource,1> **)((longlong)this + 8),
             *(int *)((longlong)this + 0x10));
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  `FTextLocalizationManager::LoadLocalizationTargetsForPrioritizedCultures_Async'::__l2::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740df0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_3>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::__l2::<lambda_4>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextFormatPatternDefinition::FTextFormatPatternDefinition'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740eb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLocalizationResourceTextSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLocalizationResourceTextSource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740ef0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPolyglotTextSource,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPolyglotTextSource,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740f30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStringTable,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FStringTable,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740f70

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStringTableEntry,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FStringTableEntry,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740fb0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FTextHistory_StringTableEntry::FStringTableReferenceData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTextHistory_StringTableEntry::FStringTableReferenceData,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141740ff0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextFormatData,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FTextFormatData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741030

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FTextFormatPatternDefinition,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FTextFormatPatternDefinition,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741070

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextFormatArgumentModifier_GenderForm,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_GenderForm>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTextFormatArgumentModifier_GenderForm,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_GenderForm>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417410b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextFormatArgumentModifier_HangulPostPositions,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_HangulPostPositions>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTextFormatArgumentModifier_HangulPostPositions,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_HangulPostPositions>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417410f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextFormatArgumentModifier_PluralForm,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_PluralForm>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTextFormatArgumentModifier_PluralForm,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_PluralForm>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741130

void * __thiscall
FLocalizationResourceTextSource::_scalar_deleting_destructor_
          (FLocalizationResourceTextSource *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ChunkIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741180

void * __thiscall
FMemoryReaderView::_scalar_deleting_destructor_(FMemoryReaderView *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417411c0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &
       ___7FParallelForData__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z_6B_
  ;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FTracedTask,int>
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417412d0

void * __thiscall
FPolyglotTextSource::_scalar_deleting_destructor_(FPolyglotTextSource *this,uint param_1)

{
  ~FPolyglotTextSource(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741310

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
FTextFormatArgumentModifier_GenderForm::_scalar_deleting_destructor_
          (FTextFormatArgumentModifier_GenderForm *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NeuterForm).TextFormatData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FeminineForm).TextFormatData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MasculineForm).TextFormatData.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ITextFormatArgumentModifier__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741370

void * __thiscall
FTextFormatArgumentModifier_HangulPostPositions::_scalar_deleting_destructor_
          (FTextFormatArgumentModifier_HangulPostPositions *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->VowelSuffix).InternalString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConsonantSuffix).InternalString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ITextFormatArgumentModifier__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417413d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
FTextFormatArgumentModifier_PluralForm::_scalar_deleting_destructor_
          (FTextFormatArgumentModifier_PluralForm *this,uint param_1)

{
  FTextFormatArgumentModifier_PluralForm *pFVar1;
  longlong lVar2;
  FTextFormatArgumentModifier_PluralForm *pFVar3;
  
  pFVar3 = this + 1;
  lVar2 = 6;
  do {
    pFVar1 = pFVar3 + -1;
    pFVar3 = (FTextFormatArgumentModifier_PluralForm *)(pFVar3[-1].CompiledPluralForms + 5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pFVar1->CompiledPluralForms[5].TextFormatData.SharedReferenceCount.
               ReferenceController);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  this->_padding_ = (longlong)&___7ITextFormatArgumentModifier__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741440

void * __thiscall FTextHistory::_scalar_deleting_destructor_(FTextHistory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741480

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
FTextHistory_ArgumentDataFormat::_scalar_deleting_destructor_
          (FTextHistory_ArgumentDataFormat *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FFormatArgumentData,int>
            ((FFormatArgumentData *)(this->Arguments).AllocatorInstance.Data,
             (this->Arguments).ArrayNum);
  pFVar1 = (this->Arguments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741500

void * __thiscall
FTextHistory_AsCurrency::_scalar_deleting_destructor_(FTextHistory_AsCurrency *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CurrencyCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741580

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
FTextHistory_AsDate::_scalar_deleting_destructor_(FTextHistory_AsDate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TargetCulture).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TimeZone).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417415f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
FTextHistory_AsDateTime::_scalar_deleting_destructor_(FTextHistory_AsDateTime *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TargetCulture).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TimeZone).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomPattern).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741670

void * __thiscall
FTextHistory_AsNumber::_scalar_deleting_destructor_(FTextHistory_AsNumber *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x70);
  if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x38 + 0x10))();
  }
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  *(undefined ***)this = &___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417416e0

void * __thiscall
FTextHistory_AsPercent::_scalar_deleting_destructor_(FTextHistory_AsPercent *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x70);
  if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x38 + 0x10))();
  }
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  *(undefined ***)this = &___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741750

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
FTextHistory_AsTime::_scalar_deleting_destructor_(FTextHistory_AsTime *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TargetCulture).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TimeZone).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417417c0

void * __thiscall
FTextHistory_Base::_scalar_deleting_destructor_(FTextHistory_Base *this,uint param_1)

{
  int iVar1;
  TDisplayStringPtr<FString_const_> TVar2;
  FScriptContainerElement *pFVar3;
  
  TVar2 = this->LocalizedString;
  if (TVar2 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar1 = *(int *)TVar2;
    *(int *)TVar2 = *(int *)TVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)((longlong)TVar2 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)TVar2 + 8));
      }
      ::operator_delete((void *)TVar2,0x18);
    }
  }
  pFVar3 = (this->SourceString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741850

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void * __thiscall
FTextHistory_FormatNumber::_scalar_deleting_destructor_
          (FTextHistory_FormatNumber *this,uint param_1)

{
  longlong *plVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TargetCulture).SharedReferenceCount.ReferenceController);
  plVar1 = *(longlong **)&(this->SourceValue).TextValue.field0_0x0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1417418c0

void * __thiscall
FTextHistory_Generated::_scalar_deleting_destructor_(FTextHistory_Generated *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DisplayString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741910

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
FTextHistory_NamedFormat::_scalar_deleting_destructor_(FTextHistory_NamedFormat *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)(this->Arguments).Pairs.AllocatorInstance.Data,
             (this->Arguments).Pairs.ArrayNum);
  pFVar1 = (this->Arguments).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741990

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
FTextHistory_OrderedFormat::_scalar_deleting_destructor_
          (FTextHistory_OrderedFormat *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)(this->Arguments).AllocatorInstance.Data,
             (this->Arguments).ArrayNum);
  pFVar1 = (this->Arguments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741a10

void * __thiscall
FTextHistory_StringTableEntry::_scalar_deleting_destructor_
          (FTextHistory_StringTableEntry *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StringTableReferenceData).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741a60

void * __thiscall
FTextHistory_TextGenerator::_scalar_deleting_destructor_
          (FTextHistory_TextGenerator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextGenerator).SharedReferenceCount.ReferenceController);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741ac0

void * __thiscall
FTextHistory_Transform::_scalar_deleting_destructor_(FTextHistory_Transform *this,uint param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->SourceText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741b20

void * __thiscall
Impl::IExpressionNodeStorage::_scalar_deleting_destructor_
          (IExpressionNodeStorage *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741b50

void * __thiscall
ILocalizedTextSource::_scalar_deleting_destructor_(ILocalizedTextSource *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741b80

void * __thiscall ITextData::_scalar_deleting_destructor_(ITextData *this,uint param_1)

{
  *this = (ITextData)&___7IRefCountedObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141741bc0

void * __thiscall
ITextFormatArgumentModifier::_scalar_deleting_destructor_
          (ITextFormatArgumentModifier *this,uint param_1)

{
  *this = (ITextFormatArgumentModifier)&___7ITextFormatArgumentModifier__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ApplyDefaultCultureSettings @ 1417445e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ApplyDefaultCultureSettings(ELocalizationLoadFlags param_1)

{
  FCulture *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  void *pvVar3;
  code *pcVar4;
  TTuple<FName,FString> *pTVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  FInternationalization *pFVar10;
  FTextLocalizationManager *pFVar11;
  FInternationalization *pFVar12;
  FString *pFVar13;
  undefined **ppuVar14;
  FStaticBasicLogRecord *pFVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  int *piVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  TTuple<FName,FString> *local_res10;
  uint local_res18 [2];
  TTuple<FName,FString> *local_res20;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  undefined1 local_1f8 [8];
  FString local_1f0;
  FScriptContainerElement *local_1e0;
  undefined8 local_1d8;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  FString local_1c0;
  wchar_t *local_1b0;
  wchar_t *local_1a8;
  TTuple<FName,FString> *local_1a0;
  undefined8 local_198;
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  TArray<FString,TSizedDefaultAllocator<32>_> local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> local_170;
  ELocalizationLoadFlags local_160 [8];
  FInternationalization *local_158;
  FString local_150;
  FString local_140;
  FInternationalization *local_130;
  TTuple<FName,FString> **local_128;
  TTuple<FName,FString> **local_120;
  FString local_118;
  wchar_t *local_108;
  wchar_t *local_100;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_f8;
  FInternationalization *local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_b8;
  FInternationalization *local_b0;
  FString local_a8;
  FString *local_98;
  wchar_t **local_90;
  wchar_t **local_88;
  undefined1 *local_80;
  FString *local_78;
  wchar_t **local_70;
  wchar_t **local_68;
  TTuple<FName,FString> **local_60;
  FString local_58;
  
  pFVar10 = FInternationalization::Get();
  local_160[0] = param_1;
  local_158 = pFVar10;
  local_130 = pFVar10;
  FString::FString(&local_140,L"en");
  if ((param_1 & Game) != None) {
    pFVar11 = FTextLocalizationManager::Get();
    local_1e0 = (FScriptContainerElement *)0x0;
    local_1d8 = 0;
    iVar9 = (pFVar11->LocalizedTextSources).ArrayNum;
    pFVar23 = (pFVar11->LocalizedTextSources).AllocatorInstance.Data;
    pFVar19 = pFVar23 + (longlong)iVar9 * 0x10;
    while( true ) {
      if ((pFVar11->LocalizedTextSources).ArrayNum != iVar9) {
        local_res18[0] = local_res18[0] & 0xffffff00;
        `TCheckedPointerIterator<TSharedPtr<ILocalizedTextSource,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (pFVar23 == pFVar19) break;
      if ((*(longlong *)pFVar23 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar7 = (**(code **)(**(longlong **)pFVar23 + 0x10))(*(longlong **)pFVar23,0,&local_1e0);
      if (cVar7 != '\0') break;
      pFVar23 = pFVar23 + 0x10;
    }
    if (1 < (int)local_1d8) {
      local_140.Data.ArrayNum = (int)local_1d8;
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
        local_140.Data.ArrayNum = (int)local_1d8;
      }
      local_140.Data.AllocatorInstance.Data = local_1e0;
      local_140.Data.ArrayMax = local_1d8._4_4_;
      local_1d8 = 0;
      local_1e0 = (FScriptContainerElement *)0x0;
    }
    if (local_1e0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0);
    }
  }
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8[0] = 5;
  pFVar12 = FInternationalization::Get();
  if (((pFVar12->DefaultLanguage).Object == (FCulture *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (pFVar12->DefaultLanguage).Object;
  pTVar2 = (pFVar12->DefaultLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar1 == (FCulture *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = FCulture::GetName(pFVar1);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0 = L"Language";
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  local_108 = L"LANGUAGE=";
  local_98 = &local_228;
  local_90 = &local_108;
  local_88 = &local_1b0;
  local_80 = local_res8;
  `GetRequestedCulture'::__l2::<lambda_1>::operator()(&local_98);
  if (local_228.Data.ArrayNum < 2) {
    if ((local_1b0 != (wchar_t *)0x0) &&
       (bVar6 = FConfigCacheIni::GetString
                          (GConfig,L"Internationalization",local_1b0,&local_228,
                           &GGameUserSettingsIni), bVar6)) {
      local_res8[0] = 2;
    }
    if ((local_228.Data.ArrayNum < 2) &&
       (bVar6 = FConfigCacheIni::GetString
                          (GConfig,L"Internationalization",L"Culture",&local_228,
                           &GGameUserSettingsIni), bVar6)) {
      local_res8[0] = 2;
    }
  }
  if (local_228.Data.ArrayNum < 2) {
    if ((local_1b0 != (wchar_t *)0x0) &&
       (bVar6 = FConfigCacheIni::GetString
                          (GConfig,L"Internationalization",local_1b0,&local_228,&GGameIni), bVar6))
    {
      local_res8[0] = 3;
    }
    if ((local_228.Data.ArrayNum < 2) &&
       (bVar6 = FConfigCacheIni::GetString
                          (GConfig,L"Internationalization",L"Culture",&local_228,&GGameIni), bVar6))
    {
      local_res8[0] = 3;
    }
  }
  if (local_228.Data.ArrayNum < 2) {
    if ((local_1b0 != (wchar_t *)0x0) &&
       (bVar6 = FConfigCacheIni::GetString
                          (GConfig,L"Internationalization",local_1b0,&local_228,&GEngineIni), bVar6)
       ) {
      local_res8[0] = 4;
    }
    if (local_228.Data.ArrayNum < 2) {
      bVar6 = FConfigCacheIni::GetString
                        (GConfig,L"Internationalization",L"Culture",&local_228,&GEngineIni);
      if (bVar6) {
        local_res8[0] = 4;
      }
      if ((local_228.Data.ArrayNum < 2) &&
         ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0)) {
        FString::operator=(&local_228,pwVar16);
        local_res8[0] = 5;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  local_150.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
  local_150.Data.ArrayNum = local_228.Data.ArrayNum;
  local_150.Data.ArrayMax = local_228.Data.ArrayMax;
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  switch(local_res8[0]) {
  case 0:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding__s_w_1506731c0;
LAB_141744a5e:
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)ppuVar14,(FLogCategoryBase *)&LogInit);
    }
    break;
  case 1:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding_lang_150673240;
      goto LAB_141744a5e;
    }
    break;
  case 2:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding_lang_1506732e0;
      goto LAB_141744a5e;
    }
    break;
  case 3:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding_lang_150673398;
      goto LAB_141744a5e;
    }
    break;
  case 4:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding_lang_150673438;
      goto LAB_141744a5e;
    }
    break;
  case 5:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Using_OS_detect_1506734e0;
      goto LAB_141744a5e;
    }
  }
  local_res10._0_1_ = 5;
  pFVar12 = FInternationalization::Get();
  if (((pFVar12->DefaultLocale).Object == (FCulture *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = (pFVar12->DefaultLocale).SharedReferenceCount.ReferenceController;
  pFVar1 = (pFVar12->DefaultLocale).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar1 == (FCulture *)0x0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = FCulture::GetName(pFVar1);
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  local_1a8 = L"Locale";
  local_100 = L"LOCALE=";
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  local_78 = &local_208;
  local_70 = &local_100;
  local_68 = &local_1a8;
  local_60 = &local_res10;
  `GetRequestedCulture'::__l2::<lambda_1>::operator()(&local_78);
  if (local_208.Data.ArrayNum < 2) {
    if ((local_1a8 != (wchar_t *)0x0) &&
       (bVar6 = FConfigCacheIni::GetString
                          (GConfig,L"Internationalization",local_1a8,&local_208,
                           &GGameUserSettingsIni), bVar6)) {
      local_res10._0_1_ = 2;
    }
    if (local_208.Data.ArrayNum < 2) {
      bVar6 = FConfigCacheIni::GetString
                        (GConfig,L"Internationalization",L"Culture",&local_208,&GGameUserSettingsIni
                        );
      if (bVar6) {
        local_res10._0_1_ = 2;
      }
      if (((local_208.Data.ArrayNum < 2) && (local_1a8 != (wchar_t *)0x0)) &&
         (bVar6 = FConfigCacheIni::GetString
                            (GConfig,L"Internationalization",local_1a8,&local_208,&GGameIni), bVar6)
         ) {
        local_res10._0_1_ = 3;
      }
    }
  }
  if (local_208.Data.ArrayNum < 2) {
    bVar6 = FConfigCacheIni::GetString
                      (GConfig,L"Internationalization",L"Culture",&local_208,&GGameIni);
    if (bVar6) {
      local_res10._0_1_ = 3;
    }
    if (local_208.Data.ArrayNum < 2) {
      if ((local_1a8 != (wchar_t *)0x0) &&
         (bVar6 = FConfigCacheIni::GetString
                            (GConfig,L"Internationalization",local_1a8,&local_208,&GEngineIni),
         bVar6)) {
        local_res10._0_1_ = 4;
      }
      if (local_208.Data.ArrayNum < 2) {
        bVar6 = FConfigCacheIni::GetString
                          (GConfig,L"Internationalization",L"Culture",&local_208,&GEngineIni);
        if (bVar6) {
          local_res10._0_1_ = 4;
        }
        if ((local_208.Data.ArrayNum < 2) &&
           ((FScriptContainerElement *)pwVar16 != (FScriptContainerElement *)0x0)) {
          FString::operator=(&local_208,pwVar16);
          local_res10._0_1_ = 5;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  local_1f0.Data.ArrayMax = local_208.Data.ArrayMax;
  local_1f0.Data.AllocatorInstance.Data = local_208.Data.AllocatorInstance.Data;
  local_1f0.Data.ArrayNum = local_208.Data.ArrayNum;
  switch(local_res10._0_1_) {
  case 0:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding__s_w_1506731c0;
LAB_141744db1:
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)ppuVar14,(FLogCategoryBase *)&LogInit);
    }
    break;
  case 1:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding_lang_150673240;
      goto LAB_141744db1;
    }
    break;
  case 2:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding_lang_1506732e0;
      goto LAB_141744db1;
    }
    break;
  case 3:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding_lang_150673398;
      goto LAB_141744db1;
    }
    break;
  case 4:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Overriding_lang_150673438;
      goto LAB_141744db1;
    }
    break;
  case 5:
    if (4 < (byte)LogInit._0_1_) {
      ppuVar14 = &PTR_u_Using_OS_detect_1506734e0;
      goto LAB_141744db1;
    }
  }
  local_res20 = (TTuple<FName,FString> *)CONCAT71(local_res20._1_7_,local_res8[0]);
  local_128 = &local_1a0;
  local_120 = &local_res20;
  local_1a0 = (TTuple<FName,FString> *)0x0;
  local_198 = 0;
  `GetRequestedAssetGroups'::__l2::<lambda_1>::operator()
            (&local_128,&GGameUserSettingsIni,GameUserSettings);
  `GetRequestedAssetGroups'::__l2::<lambda_1>::operator()(&local_128,&GGameIni,GameSettings);
  `GetRequestedAssetGroups'::__l2::<lambda_1>::operator()(&local_128,&GEngineIni,EngineSettings);
  DestructItems<TTuple<FName,FString>,int>((TTuple<FName,FString> *)0x0,0);
  pTVar5 = local_1a0;
  lVar22 = (longlong)(int)(uint)local_198;
  local_res20 = local_1a0;
  local_res18[0] = (uint)local_198;
  local_1a0 = (TTuple<FName,FString> *)0x0;
  local_198 = 0;
  DestructItems<TTuple<FName,FString>,int>((TTuple<FName,FString> *)0x0,0);
  if (local_1a0 != (TTuple<FName,FString> *)0x0) {
    FMemory::Free(local_1a0);
  }
  `ApplyDefaultCultureSettings'::__l2::<lambda_2>::operator()
            (local_160,&local_1c0,&local_150,&local_140,L"language",true);
  FVar20.Data = local_1f0.Data.AllocatorInstance.Data;
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar17 = (longlong)local_1f0.Data.ArrayNum;
  local_218.Data.ArrayNum = local_1f0.Data.ArrayNum;
  if (local_1f0.Data.ArrayNum == 0) {
    local_218.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1f0.Data.ArrayNum,0,(ForAnyElementType *)&local_218,local_1f0.Data.ArrayNum
               ,&local_218.Data.ArrayMax);
    memcpy(local_218.Data.AllocatorInstance.Data,FVar20.Data,lVar17 * 2);
  }
  pFVar13 = FLeetCulture::StaticGetName();
  iVar9 = (pFVar13->Data).ArrayNum;
  if (local_218.Data.ArrayNum == iVar9) {
    if (1 < local_218.Data.ArrayNum) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_218.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar13->Data).AllocatorInstance.Data);
      bVar6 = iVar9 == 0;
      goto LAB_141744f0a;
    }
  }
  else {
    bVar6 = local_218.Data.ArrayNum + iVar9 == 1;
LAB_141744f0a:
    if (!bVar6) {
      pFVar13 = FKeysCulture::StaticGetName();
      iVar9 = (pFVar13->Data).ArrayNum;
      if (local_218.Data.ArrayNum == iVar9) {
        if (local_218.Data.ArrayNum < 2) goto LAB_14174507c;
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_218.Data.AllocatorInstance.Data,
                           (wchar_t *)(pFVar13->Data).AllocatorInstance.Data);
        bVar6 = iVar9 == 0;
      }
      else {
        bVar6 = local_218.Data.ArrayNum + iVar9 == 1;
      }
      if (!bVar6) {
        pFVar11 = FTextLocalizationManager::Get();
        FTextLocalizationManager::GetLocalizedCultureNames(pFVar11,&local_170,local_160[0]);
        local_f8 = &local_170;
        local_f0 = local_158;
        ``ApplyDefaultCultureSettings'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()
                  (&local_f8,&local_c8,&local_1f0);
        ``ApplyDefaultCultureSettings'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::operator()
                  (&local_f8,&local_e8,&local_1c0);
        if (local_c8.Data.ArrayNum < 2) {
          if (local_e8.Data.ArrayNum < 2) {
            FVar20.Data = (FScriptContainerElement *)&local_1c0;
            if (0 < local_170.ArrayNum) {
              FVar20.Data = local_170.AllocatorInstance.Data;
            }
            FString::operator=(&local_218,(FString *)FVar20.Data);
            if (4 < (byte)LogTextLocalizationManager._0_1_) {
              pFVar15 = &LOG_Static;
              goto LAB_141745009;
            }
          }
          else {
            FString::operator=(&local_218,&local_e8);
            if (4 < (byte)LogTextLocalizationManager._0_1_) {
              pFVar15 = &LOG_Static;
LAB_141745009:
              UE::Logging::Private::BasicLog<5>
                        (pFVar15,(FLogCategoryBase *)&LogTextLocalizationManager);
            }
          }
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
        if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14174507c:
  local_118.Data.ArrayMax = local_218.Data.ArrayMax;
  local_118.Data.AllocatorInstance.Data = local_218.Data.AllocatorInstance.Data;
  iVar9 = local_1c0.Data.ArrayNum;
  local_118.Data.ArrayNum = local_218.Data.ArrayNum;
  if (iVar9 == local_218.Data.ArrayNum) {
    if (1 < iVar9) {
      iVar9 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_1c0.Data.AllocatorInstance.Data,
                         (wchar_t *)local_218.Data.AllocatorInstance.Data);
      bVar6 = iVar9 == 0;
      goto LAB_1417450ae;
    }
  }
  else {
    bVar6 = iVar9 + local_218.Data.ArrayNum == 1;
LAB_1417450ae:
    if (!bVar6) {
      FInternationalization::SetCurrentLanguage(pFVar10,&local_1c0);
      FInternationalization::SetCurrentLocale(pFVar10,&local_118);
      goto LAB_1417450db;
    }
  }
  FInternationalization::SetCurrentLanguageAndLocale(pFVar10,&local_1c0);
LAB_1417450db:
  local_res10 = pTVar5 + lVar22;
  piVar21 = (int *)&pTVar5->field_0x8;
  do {
    if ((TTuple<FName,FString> *)(piVar21 + -2) == local_res10) {
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      pTVar5 = local_res20;
      DestructItems<TTuple<FName,FString>,int>(local_res20,local_res18[0]);
      if (pTVar5 != (TTuple<FName,FString> *)0x0) {
        FMemory::Free(pTVar5);
      }
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      return;
    }
    FName::ToString((FName *)(piVar21 + -2),&local_58);
    FString::PrintfImpl(&local_d8,L"\'%s\' asset group");
    local_238.Data.ArrayNum = piVar21[2];
    lVar22 = (longlong)local_238.Data.ArrayNum;
    pvVar3 = *(void **)piVar21;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_238.Data.ArrayNum == 0) {
      local_238.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_238.Data.ArrayNum,0,(ForAnyElementType *)&local_238,
                 local_238.Data.ArrayNum,&local_238.Data.ArrayMax);
      memcpy(local_238.Data.AllocatorInstance.Data,pvVar3,lVar22 * 2);
    }
    pFVar13 = FLeetCulture::StaticGetName();
    iVar9 = (pFVar13->Data).ArrayNum;
    if (local_238.Data.ArrayNum == iVar9) {
      if (1 < local_238.Data.ArrayNum) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_238.Data.AllocatorInstance.Data,
                           (wchar_t *)(pFVar13->Data).AllocatorInstance.Data);
        bVar6 = iVar9 == 0;
        goto LAB_1417451d1;
      }
    }
    else {
      bVar6 = local_238.Data.ArrayNum + iVar9 == 1;
LAB_1417451d1:
      if (!bVar6) {
        pFVar13 = FKeysCulture::StaticGetName();
        iVar9 = (pFVar13->Data).ArrayNum;
        if (local_238.Data.ArrayNum == iVar9) {
          if (local_238.Data.ArrayNum < 2) goto LAB_1417454a3;
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_238.Data.AllocatorInstance.Data,
                             (wchar_t *)(pFVar13->Data).AllocatorInstance.Data);
          bVar6 = iVar9 == 0;
        }
        else {
          bVar6 = local_238.Data.ArrayNum + iVar9 == 1;
        }
        if (!bVar6) {
          pFVar11 = FTextLocalizationManager::Get();
          FTextLocalizationManager::GetLocalizedCultureNames(pFVar11,&local_180,local_160[0]);
          pFVar10 = local_158;
          local_b8 = &local_180;
          local_b0 = local_158;
          ``ApplyDefaultCultureSettings'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>::
          operator()(&local_b8,&local_a8,(FString *)piVar21);
          FInternationalization::GetPrioritizedCultureNames(pFVar10,&local_190,&local_1c0);
          iVar9 = local_190.ArrayNum;
          pFVar23 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 0x10;
          FVar20.Data = local_190.AllocatorInstance.Data;
          while( true ) {
            if (local_190.ArrayNum != iVar9) {
              `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_1f8);
            }
            if (FVar20.Data == pFVar23) break;
            pFVar19 = local_180.AllocatorInstance.Data + (longlong)local_180.ArrayNum * 0x10;
            for (FVar18.Data = local_180.AllocatorInstance.Data; FVar18.Data != pFVar19;
                FVar18.Data = FVar18.Data + 0x10) {
              iVar8 = *(int *)(FVar18.Data + 8);
              if (iVar8 == *(int *)(FVar20.Data + 8)) {
                if (1 < iVar8) {
                  iVar8 = FGenericPlatformStricmp::Stricmp
                                    (*(wchar_t **)FVar18.Data,*(wchar_t **)FVar20.Data);
                  bVar6 = iVar8 == 0;
                  goto LAB_1417452d3;
                }
LAB_1417452e9:
                local_1d0.Data = (FScriptContainerElement *)0x0;
                iVar9 = *(int *)(FVar20.Data + 8);
                pvVar3 = *(void **)FVar20.Data;
                local_1c8 = CONCAT44(local_1c8._4_4_,iVar9);
                if (iVar9 == 0) {
                  local_1c8 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar9,0,&local_1d0,iVar9,(int *)((longlong)&local_1c8 + 4));
                  memcpy(local_1d0.Data,pvVar3,(longlong)iVar9 * 2);
                }
                goto LAB_141745348;
              }
              bVar6 = iVar8 + *(int *)(FVar20.Data + 8) == 1;
LAB_1417452d3:
              if (bVar6) goto LAB_1417452e9;
            }
            FVar20.Data = FVar20.Data + 0x10;
          }
          local_1d0.Data = (FScriptContainerElement *)0x0;
          local_1c8 = 0;
LAB_141745348:
          DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum)
          ;
          if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.AllocatorInstance.Data);
          }
          FVar20.Data = local_1d0.Data;
          if (local_a8.Data.ArrayNum < 2) {
            lVar22 = (longlong)(int)local_1c8;
            if ((int)local_1c8 < 2) {
              FVar20.Data = (FScriptContainerElement *)&local_1c0;
              if (0 < local_180.ArrayNum) {
                FVar20.Data = local_180.AllocatorInstance.Data;
              }
              FString::operator=(&local_238,(FString *)FVar20.Data);
              if (4 < (byte)LogTextLocalizationManager._0_1_) {
                pFVar15 = &LOG_Static;
                goto LAB_141745451;
              }
            }
            else {
              local_238.Data.ArrayNum = (int)local_1c8;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,(int)local_1c8,local_238.Data.ArrayMax,(ForAnyElementType *)&local_238,
                         (int)local_1c8,&local_238.Data.ArrayMax);
              memcpy(local_238.Data.AllocatorInstance.Data,FVar20.Data,lVar22 * 2);
              if (4 < (byte)LogTextLocalizationManager._0_1_) {
                if (piVar21[2] == 0) {
                  pFVar15 = &LOG_Static;
                }
                else {
                  pFVar15 = &LOG_Static;
                }
LAB_141745451:
                UE::Logging::Private::BasicLog<5>
                          (pFVar15,(FLogCategoryBase *)&LogTextLocalizationManager);
              }
            }
          }
          if (local_1d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_180.AllocatorInstance.Data,local_180.ArrayNum)
          ;
          pFVar10 = local_130;
          if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.AllocatorInstance.Data);
            pFVar10 = local_130;
          }
        }
      }
    }
LAB_1417454a3:
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_238.Data.ArrayNum == local_1c0.Data.ArrayNum) {
      if (1 < local_238.Data.ArrayNum) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_238.Data.AllocatorInstance.Data,
                           (wchar_t *)local_1c0.Data.AllocatorInstance.Data);
        bVar6 = iVar9 == 0;
        goto LAB_1417454f7;
      }
    }
    else {
      bVar6 = local_1c0.Data.ArrayNum + local_238.Data.ArrayNum == 1;
LAB_1417454f7:
      if (!bVar6) {
        FInternationalization::SetCurrentAssetGroupCulture
                  (pFVar10,(FName *)(piVar21 + -2),&local_238);
      }
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    piVar21 = piVar21 + 6;
  } while( true );
}

// BeginInitTextLocalization @ 141748660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl BeginInitTextLocalization(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_void___cdecl_BeginInitTextLocalization(void)_::_2_::FStat_STAT_BeginInitTextLocalization>
  FVar6;
  FInternationalization *pFVar7;
  pmf_d9c2f261 pVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  bool bVar13;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  FName local_res20;
  FStatMessage local_58;
  FScopedBootTiming local_48;
  
  FLLMScope::FLLMScope(local_res8,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Localization,true);
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId498,"BeginInitTextLocalization",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x1f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId498);
  }
  FScopedBootTiming::FScopedBootTiming(&local_48,"BeginInitTextLocalization");
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_BeginInitTextLocalization ==
        (FThreadSafeStaticStat<_void___cdecl_BeginInitTextLocalization(void)_::_2_::FStat_STAT_BeginInitTextLocalization>
         )0x0) {
      pFVar5 = FName::FName((FName *)&local_res10.s,"STAT_BeginInitTextLocalization");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginInitTextLocalization,*pFVar5,
                 L"BeginInitTextLocalization","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar6 = StatPtr_STAT_BeginInitTextLocalization;
  if (StatPtr_STAT_BeginInitTextLocalization ==
      (FThreadSafeStaticStat<_void___cdecl_BeginInitTextLocalization(void)_::_2_::FStat_STAT_BeginInitTextLocalization>
       )0x0) {
    pFVar5 = FName::FName(&local_res20,"STAT_BeginInitTextLocalization");
    FVar6 = (FThreadSafeStaticStat<_void___cdecl_BeginInitTextLocalization(void)_::_2_::FStat_STAT_BeginInitTextLocalization>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginInitTextLocalization,
                         *pFVar5,L"BeginInitTextLocalization","STATGROUP_LoadTime",
                         "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                   ,499);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar10.Value;
      local_res10.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_141748869;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_141748869:
  FInternationalization::Get();
  pFVar7 = FInternationalization::Get();
  pVar8 = (pmf_d9c2f261)FTextLocalizationManager::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FTextLocalizationManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar7->CultureChangedEvent,(FTextLocalizationManager *)&local_res10.s,pVar8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_58);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_48);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// BeginPreInitTextLocalization @ 141748a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl BeginPreInitTextLocalization(void)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_void___cdecl_BeginPreInitTextLocalization(void)_::_2_::FStat_STAT_BeginPreInitTextLocalization>
  FVar5;
  TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *pTVar6;
  pmf_551e2e4d pVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  bool bVar13;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  FName local_res20;
  FStatMessage local_58;
  FScopedBootTiming local_48;
  
  FLLMScope::FLLMScope(local_res8,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Localization,true);
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId487,"BeginPreInitTextLocalization",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x1e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId487);
  }
  FScopedBootTiming::FScopedBootTiming(&local_48,"BeginPreInitTextLocalization");
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_BeginPreInitTextLocalization ==
        (FThreadSafeStaticStat<_void___cdecl_BeginPreInitTextLocalization(void)_::_2_::FStat_STAT_BeginPreInitTextLocalization>
         )0x0) {
      pFVar4 = FName::FName((FName *)&local_res10.s,"STAT_BeginPreInitTextLocalization");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginPreInitTextLocalization,*pFVar4,
                 L"BeginPreInitTextLocalization","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar5 = StatPtr_STAT_BeginPreInitTextLocalization;
  if (StatPtr_STAT_BeginPreInitTextLocalization ==
      (FThreadSafeStaticStat<_void___cdecl_BeginPreInitTextLocalization(void)_::_2_::FStat_STAT_BeginPreInitTextLocalization>
       )0x0) {
    pFVar4 = FName::FName(&local_res20,"STAT_BeginPreInitTextLocalization");
    FVar5 = (FThreadSafeStaticStat<_void___cdecl_BeginPreInitTextLocalization(void)_::_2_::FStat_STAT_BeginPreInitTextLocalization>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginPreInitTextLocalization,
                         *pFVar4,L"BeginPreInitTextLocalization","STATGROUP_LoadTime",
                         "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar8 == 0)) {
    pTVar6 = FCoreDelegates::GetOnPakFileMounted2();
    pVar7 = (pmf_551e2e4d)FTextLocalizationManager::Get();
    TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
    AddRaw<FTextLocalizationManager>
              ((TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                *)pTVar6,(FTextLocalizationManager *)&local_res10.s,pVar7);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar9.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                   ,0x1e8);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar13 = FThreadStats::bPrimaryEnable == false;
    if (bVar13) {
      FVar10.ComparisonIndex.Value = 0;
      FVar10.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar9.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      FVar11.Value = FVar9.Value;
    }
    pTVar6 = FCoreDelegates::GetOnPakFileMounted2();
    pVar7 = (pmf_551e2e4d)FTextLocalizationManager::Get();
    TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
    AddRaw<FTextLocalizationManager>
              ((TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                *)pTVar6,(FTextLocalizationManager *)&local_res10.s,pVar7);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar13) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      if (this->bWaitForExplicitFlush < this->ScopeCount) {
        local_58.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
        local_58.NameAndInfo.Index.Value = FVar11.Value;
        QueryPerformanceCounter(&local_res10);
        local_58.StatData.Pad[4] = '\0';
        local_58.StatData.Pad[5] = '\0';
        local_58.StatData.Pad[6] = '\0';
        local_58.StatData.Pad[7] = '\0';
        local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this,&local_58);
        piVar1 = &this->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_48);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// BuildFullNamespace @ 141749680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
TextNamespaceUtil::BuildFullNamespace
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FString local_28;
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = 0;
  }
  iVar7 = iVar5 + -1;
  if (0 < iVar5) {
    if (((iVar7 < 0) || (iVar5 <= iVar7)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (*(short *)(pFVar1 + ((longlong)iVar5 + -1) * 2) == 0x5d) {
      pFVar6 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
      do {
        if (pFVar6 == pFVar1) goto LAB_14174971f;
        pFVar6 = pFVar6 + -2;
      } while (*(short *)pFVar6 != 0x5b);
      iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 1);
      if (iVar5 != -1) {
        ::FString::FString(&local_28,param_1);
        ::FString::RemoveAt(&local_28,iVar5 + 1,(iVar7 - iVar5) + -1,No);
        ::FString::InsertAt(&local_28,iVar5 + 1,param_2);
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
        return __return_storage_ptr__;
      }
    }
  }
LAB_14174971f:
  if (param_3) {
    if ((param_1->Data).ArrayNum < 2) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"%c%s%c");
    }
    else {
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s %c%s%c");
    }
  }
  else {
    ::FString::FString(__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// ClearNativeEngineCultureName @ 14174b9d0

void __cdecl TextLocalizationResourceUtil::ClearNativeEngineCultureName(void)

{
  if (NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax != -1) {
    if (NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.
                            Data);
    }
    NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax = -1;
    NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayNum = 0;
  }
  return;
}

// ClearNativeProjectCultureName @ 14174ba20

void __cdecl TextLocalizationResourceUtil::ClearNativeProjectCultureName(void)

{
  if (NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax != -1) {
    if (NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.
                            Data);
    }
    NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax = -1;
    NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayNum = 0;
  }
  return;
}

// CopyTextToPackage @ 14174dcb0

FText * __cdecl
TextNamespaceUtil::CopyTextToPackage
          (FText *__return_storage_ptr__,FText *param_1,FString *param_2,ETextCopyMethod param_3,
          bool param_4)

{
  ITextData *pIVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_res10 [24];
  
  FText::Rebuild(param_1);
  lVar3 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  if ((1 < *(int *)(lVar3 + 8)) && ((param_1->Flags & 2) == 0)) {
    plVar4 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
    cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4);
    if (cVar2 != '\v') {
      FText::FText(__return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = param_1->Flags;
  return __return_storage_ptr__;
}

// CreateContainerHeaderChunkId @ 14174e8e0

FIoChunkId * __cdecl
CreateContainerHeaderChunkId(FIoChunkId *__return_storage_ptr__,FIoContainerId *param_1)

{
  *(ulong64 *)__return_storage_ptr__->Id = param_1->Id;
  __return_storage_ptr__->Id[8] = '\0';
  __return_storage_ptr__->Id[9] = '\0';
  __return_storage_ptr__->Id[10] = '\0';
  __return_storage_ptr__->Id[0xb] = '\x06';
  return __return_storage_ptr__;
}

// CreateExternalFileChunkId @ 14174ee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FIoChunkId * __cdecl
CreateExternalFileChunkId(FIoChunkId *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FIoChunkId *pFVar5;
  ForElementType<wchar_t> FVar6;
  short sVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_8d8 [32];
  longlong local_8b8;
  longlong local_8b0;
  undefined4 local_8a0;
  TMemoryView<void_const_> local_898;
  FBlake3Hash local_888;
  TArray<wchar_t,TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>_> local_868;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_8d8;
  if ((param_1->Size < 1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Filename.Len() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkId.cpp"
                         ,0x61,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FIoChunkId *)(*pcVar2)();
    return pFVar5;
  }
  iVar1 = param_1->Size;
  local_868.AllocatorInstance.SecondaryData = (ForElementType<wchar_t>)0x0;
  local_868.ArrayNum = 0;
  local_868.ArrayMax = 0x40b;
  TArray<wchar_t,TSizedInlineAllocator<1035,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_868,iVar1,Default);
  uVar8 = 0;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      if (((int)uVar8 < 0) || (param_1->Size <= (int)uVar8)) {
        local_8b0 = CONCAT44(local_8b0._4_4_,param_1->Size);
        local_8b8 = CONCAT44(local_8b8._4_4_,uVar8);
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FIoChunkId *)(*pcVar2)();
          return pFVar5;
        }
      }
      sVar7 = (-(ushort)((ushort)param_1->DataPtr[lVar9] - 0x41 < 0x1a) & 0x20) +
              param_1->DataPtr[lVar9];
      if (sVar7 == 0x5c) {
        sVar7 = 0x2f;
      }
      uVar4 = 0;
      if ((int)uVar8 < local_868.ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_8b8 = (longlong)(int)uVar8;
        local_8b0 = (longlong)local_868.ArrayNum;
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FIoChunkId *)(*pcVar2)();
          return pFVar5;
        }
      }
      FVar6 = (ForElementType<wchar_t>)&local_868;
      if (local_868.AllocatorInstance.SecondaryData != (ForElementType<wchar_t>)0x0) {
        FVar6 = local_868.AllocatorInstance.SecondaryData;
      }
      uVar8 = uVar8 + 1;
      *(short *)((longlong)FVar6 + lVar9 * 2) = sVar7;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  local_898.Data = &local_868;
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<wchar_t>)0x0) {
    local_898.Data = (void *)local_868.AllocatorInstance.SecondaryData;
  }
  local_898.Size = (ulong64)(uint)(local_868.ArrayNum * 2);
  FBlake3::HashBuffer(&local_888,&local_898);
  local_8a0 = CONCAT13(7,CONCAT12(local_888.Hash[10],local_888.Hash._8_2_));
  *(undefined8 *)__return_storage_ptr__->Id = local_888.Hash._0_8_;
  *(undefined4 *)(__return_storage_ptr__->Id + 8) = local_8a0;
  if (local_868.AllocatorInstance.SecondaryData != (ForElementType<wchar_t>)0x0) {
    FMemory::Free((void *)local_868.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// CreatePackageDataChunkId @ 14174f1d0

FIoChunkId * __cdecl
CreatePackageDataChunkId(FIoChunkId *__return_storage_ptr__,FPackageId *param_1)

{
  *(ulong64 *)__return_storage_ptr__->Id = param_1->Id;
  __return_storage_ptr__->Id[8] = '\0';
  __return_storage_ptr__->Id[9] = '\0';
  __return_storage_ptr__->Id[10] = '\0';
  __return_storage_ptr__->Id[0xb] = '\x01';
  return __return_storage_ptr__;
}

// ExtractPackageNamespace @ 141755a50

FString * __cdecl
TextNamespaceUtil::ExtractPackageNamespace(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  iVar5 = (param_1->Data).ArrayNum;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  iVar5 = iVar6 + -1;
  if (0 < iVar6) {
    if (((iVar5 < 0) || (iVar6 <= iVar5)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (*(short *)(pFVar1 + ((longlong)iVar6 + -1) * 2) == 0x5d) {
      pFVar7 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
      do {
        if (pFVar7 == pFVar1) goto LAB_141755ae5;
        pFVar7 = pFVar7 + -2;
      } while (*(short *)pFVar7 != 0x5b);
      iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar1 >> 1);
      if (iVar6 != -1) {
        ::FString::Mid(param_1,__return_storage_ptr__,iVar6 + 1,(iVar5 - iVar6) + -1);
        return __return_storage_ptr__;
      }
    }
  }
LAB_141755ae5:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCommonRootPath @ 14175c050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
IoDirectoryIndexUtils::GetCommonRootPath
          (FString *__return_storage_ptr__,
          TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  longlong local_58;
  longlong lStack_50;
  
  iVar5 = param_1->ArrayNum;
  iVar6 = 0;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar12 + (longlong)iVar5 * 0x10;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  while( true ) {
    iVar8 = 0;
    if (param_1->ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar12 == pFVar14) break;
    iVar4 = *(int *)(pFVar12 + 8);
    iVar11 = 0;
    if (0 < iVar4) {
      lVar16 = 0;
      iVar13 = iVar8;
      do {
        if (((iVar11 < 0) || (iVar4 <= iVar11)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar2)();
          return pFVar7;
        }
        iVar4 = *(int *)(pFVar12 + 8);
        iVar8 = iVar13 + 1;
        if (*(short *)(lVar16 + *(longlong *)pFVar12) != 0x2f) {
          iVar8 = iVar13;
        }
        iVar11 = iVar11 + 1;
        lVar16 = lVar16 + 2;
        iVar13 = iVar8;
      } while (iVar11 < iVar4);
    }
    if (iVar6 < iVar8) {
      local_58 = *(longlong *)pFVar12;
      lStack_50 = *(longlong *)(pFVar12 + 8);
      ::FString::AssignRange(&local_98,*(wchar_t **)pFVar12,(int)*(longlong *)(pFVar12 + 8));
      iVar6 = iVar8;
    }
    pFVar12 = pFVar12 + 0x10;
  }
  pFVar7 = FPaths::GetPath(&local_88,&local_98);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar7,L"/");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  uVar1 = param_1->ArrayNum;
  uVar15 = (ulonglong)(int)uVar1;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar12 + uVar15 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar15) {
      `TCheckedPointerIterator<TStringView<wchar_t>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar12 == pFVar14) {
      return __return_storage_ptr__;
    }
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    pFVar7 = ::FString::ConstructFromPtrSize
                       (&local_78,*(wchar_t **)pFVar12,(int)*(undefined8 *)(pFVar12 + 8));
    if (&local_b8 != pFVar7) {
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      local_b8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_b8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    pFVar7 = FPaths::GetPath(&local_68,&local_b8);
    ::FString::ConcatFC(&local_a8,pFVar7,L"/");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    iVar8 = -1;
    iVar6 = -1;
    iVar5 = ::FString::Find(&local_a8,L"/",1,CaseSensitive,FromStart,-1);
    if (-1 < iVar5) {
      while( true ) {
        iVar4 = iVar5;
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar10.Data = local_a8.Data.AllocatorInstance.Data;
        }
        if ((__return_storage_ptr__->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
        }
        iVar5 = iVar4 + 1;
        iVar11 = FGenericPlatformStricmp::Strnicmp(pwVar9,(wchar_t *)FVar10.Data,(longlong)iVar5);
        iVar6 = iVar8;
        if (iVar11 != 0) break;
        iVar8 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          iVar8 = 0;
        }
        iVar6 = iVar4;
        if ((iVar8 <= iVar5) ||
           (iVar5 = ::FString::Find(&local_a8,L"/",1,CaseSensitive,FromStart,iVar5), iVar8 = iVar4,
           iVar5 < 0)) break;
      }
      uVar15 = (ulonglong)uVar1;
    }
    iVar8 = (__return_storage_ptr__->Data).ArrayNum;
    iVar5 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar5 = 0;
    }
    iVar6 = iVar6 + 1;
    if (iVar6 < iVar5) {
      if (iVar6 != 0x7fffffff) {
        iVar8 = 0;
        if (0 < iVar6) {
          iVar8 = iVar6;
        }
        ::FString::RemoveAt(__return_storage_ptr__,iVar8,iVar5 - iVar8,No);
      }
      ::FString::RemoveAt(__return_storage_ptr__,0,0,No);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar12 = pFVar12 + 0x10;
  } while( true );
}

// GetDisabledLocalizationTargets @ 14175c6b0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
TextLocalizationResourceUtil::GetDisabledLocalizationTargets(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`TextLocalizationResourceUtil::GetDisabledLocalizationTargets'::__l2::
           _dynamic_atexit_destructor_for__DisabledLocalizationTargets__);
    _Init_thread_footer(&::_TSS0);
  }
  if (bHasInitializedDisabledLocalizationTargets != false) {
    return &DisabledLocalizationTargets;
  }
  if (((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig && GConfig->IsReadyForUse()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationResource.cpp"
                         ,0x2e0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  FConfigCacheIni::GetArray
            (GConfig,L"Internationalization",L"DisabledLocalizationTargets",
             &DisabledLocalizationTargets,&GEngineIni);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FConfigCacheIni::GetArray
            (GConfig,L"Internationalization",L"DisabledLocalizationTargets",&local_18,&GGameIni);
  lVar5 = (longlong)local_18.ArrayNum;
  if (local_18.ArrayNum != 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_18.ArrayNum,&DisabledLocalizationTargets.AllocatorInstance,
                       &DisabledLocalizationTargets.ArrayNum,&DisabledLocalizationTargets.ArrayMax);
    memmove(DisabledLocalizationTargets.AllocatorInstance.Data + (longlong)iVar3 * 0x10,
            local_18.AllocatorInstance.Data,lVar5 << 4);
    local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,0);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  bHasInitializedDisabledLocalizationTargets = true;
  return &DisabledLocalizationTargets;
}

// GetLocalizationTargetNameForChunkId @ 14175ec80

FString * __cdecl
TextLocalizationResourceUtil::GetLocalizationTargetNameForChunkId
          (FString *__return_storage_ptr__,FString *param_1,int param_2)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_28;
  FString local_18;
  
  if (param_2 + 1U < 2) {
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar1 = (longlong)local_28.Data.ArrayNum;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_28);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    ::FString::PrintfImpl(&local_18,L"%s_locchunk%d");
    ::FString::FString(__return_storage_ptr__,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLocalizationTargetPathIdFromLocResId @ 14175ede0

int __cdecl TextLocalizationResourceUtil::GetLocalizationTargetPathIdFromLocResId(FTextKey *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TStringView<wchar_t> *pTVar5;
  FTextLocalizationManager *pFVar6;
  int local_res8 [2];
  TStringView<wchar_t> local_48;
  FString local_38;
  TStringView<wchar_t> local_28 [2];
  
  if (param_1->Index != -1) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FTextKey::AppendString(param_1,&local_38);
    local_48.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    local_48.Size = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      local_48.Size = 0;
    }
    pTVar5 = FPathViews::GetPath(local_28,&local_48);
    local_48.DataPtr = pTVar5->DataPtr;
    local_48.Size = pTVar5->Size;
    local_48._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    pTVar5 = FPathViews::GetPath(local_28,&local_48);
    local_48.DataPtr = pTVar5->DataPtr;
    local_48.Size = pTVar5->Size;
    local_48._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    pFVar6 = FTextLocalizationManager::Get();
    uVar3 = local_48._8_8_;
    pwVar2 = local_48.DataPtr;
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar6->DisplayStringTableRW);
    uVar4 = local_48._8_8_;
    local_res8[0] = -1;
    local_28[0].DataPtr = pwVar2;
    local_48.Size = (int)uVar3;
    local_48._12_4_ = SUB84(uVar3,4);
    local_28[0].Size = local_48.Size;
    local_28[0]._12_4_ = local_48._12_4_;
    local_48._8_8_ = uVar4;
    FTextLocalizationManager::FDisplayStringsByLocalizationTargetId::FindOrAdd
              (&pFVar6->DisplayStringsByLocalizationTargetId,local_28,local_res8);
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar6->DisplayStringTableRW);
    iVar1 = local_res8[0];
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    return iVar1;
  }
  return -1;
}

// GetLocalizedCultureNames @ 14175f430

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
TextLocalizationResourceUtil::GetLocalizedCultureNames
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  IFileManager *pIVar6;
  FInternationalization *this;
  wchar_t *pwVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 local_res10 [8];
  code *local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_58;
  FString *local_50;
  FString *local_48;
  
  iVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FPaths::GetPlatformLocalizationFolderName(&local_78);
  iVar1 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar9 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar11) break;
    pFVar5 = FPaths::GetBaseFilename(&local_68,(FString *)pFVar9,true);
    ::FString::ConcatFC(&local_88,pFVar5,L".locres");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pIVar6 = IFileManager::Get();
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`TextLocalizationResourceUtil::GetLocalizedCultureNames'::__l6::<lambda_1>,bool,wchar_t_const_*,bool>
               ::Call;
    local_50 = &local_78;
    local_48 = &local_88;
    local_90 = &local_58;
    if (*(int *)(pFVar9 + 8) == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = *(wchar_t **)&pFVar9->field_0x0;
    }
    local_58 = __return_storage_ptr__;
    (**(code **)((longlong)*pIVar6 + 0x90))(pIVar6,pwVar7,&local_98);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 0x10;
  }
  this = FInternationalization::Get();
  iVar1 = __return_storage_ptr__->ArrayNum;
  if (iVar1 != 0) {
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    bVar3 = FInternationalization::IsCultureAllowed(this,(FString *)pFVar9);
    iVar8 = iVar12;
    do {
      iVar2 = iVar8;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        bVar4 = FInternationalization::IsCultureAllowed
                          (this,(FString *)(pFVar9 + (longlong)iVar2 * 0x10));
      } while (bVar3 == bVar4);
      iVar10 = iVar2 - iVar8;
      if (bVar3 == false) {
        DestructItems<FString,int>((FString *)(pFVar9 + (longlong)iVar8 * 0x10),iVar10);
      }
      else {
        if (iVar12 != iVar8) {
          memmove(pFVar9 + (longlong)iVar12 * 0x10,pFVar9 + (longlong)iVar8 * 0x10,
                  (longlong)iVar10 << 4);
        }
        iVar12 = iVar12 + iVar10;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar8 = iVar2;
    } while (iVar2 < iVar1);
    __return_storage_ptr__->ArrayNum = iVar12;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNativeCultureName @ 14175ffb0

FString * __cdecl
TextLocalizationResourceUtil::GetNativeCultureName
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType _Src;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  IFileManager *pIVar7;
  FString *pFVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  void *_Src_00;
  undefined1 local_res10 [8];
  uint local_res18;
  FString local_a8;
  FString local_98;
  FString local_88;
  FTextLocalizationMetaDataResource local_78;
  
  local_res18 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)local_res18;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar13 + uVar6 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar13 == pFVar14) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    pIVar7 = IFileManager::Get();
    if (*(int *)(pFVar13 + 8) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)&pFVar13->field_0x0;
    }
    cVar3 = (**(code **)((longlong)*pIVar7 + 0x58))(pIVar7,pwVar10);
    if (cVar3 != '\0') {
      pFVar8 = FPaths::GetBaseFilename(&local_88,(FString *)pFVar13,true);
      ::FString::ConcatFC(&local_98,pFVar8,L".locmeta");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      iVar2 = *(int *)(pFVar13 + 8);
      local_78.NativeCulture.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.NativeCulture.Data.ArrayNum = 0;
      local_78.NativeCulture.Data.ArrayMax = 0;
      local_78.NativeLocRes.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar12 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      local_78.NativeLocRes.Data.ArrayNum = 0;
      local_78.NativeLocRes.Data.ArrayMax = 0;
      local_78.CompiledCultures.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.CompiledCultures.ArrayNum = 0;
      local_78.CompiledCultures.ArrayMax = 0;
      local_78.bIsUGC = false;
      local_a8.Data.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar12 != -1)) {
        iVar5 = iVar12 + 2;
        _Src_00 = *(void **)&pFVar13->field_0x0;
LAB_1417600c8:
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar5 != 0) goto LAB_1417600d5;
        local_a8.Data.ArrayMax = 0;
      }
      else {
        iVar5 = iVar12 + 1;
        _Src_00 = *(void **)&pFVar13->field_0x0;
        if (iVar2 == 0) goto LAB_1417600c8;
LAB_1417600d5:
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar9 = iVar2 + iVar5;
        if ((int)uVar9 < iVar2) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar9,0,(ForAnyElementType *)&local_a8,iVar2,&local_a8.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_a8.Data.AllocatorInstance.Data,_Src_00,(longlong)iVar2 * 2);
        }
      }
      ::FString::PathAppend(&local_a8,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar12);
      bVar4 = FTextLocalizationMetaDataResource::LoadFromFile(&local_78,&local_a8);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      _Src.Data = local_78.NativeCulture.Data.AllocatorInstance.Data;
      if (bVar4) {
        lVar11 = (longlong)local_78.NativeCulture.Data.ArrayNum;
        piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = local_78.NativeCulture.Data.ArrayNum;
        if (local_78.NativeCulture.Data.ArrayNum == 0) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_78.NativeCulture.Data.ArrayNum,0,
                     (ForAnyElementType *)__return_storage_ptr__,
                     local_78.NativeCulture.Data.ArrayNum,piVar1);
          memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar11 * 2);
        }
        DestructItems<FString,int>
                  ((FString *)local_78.CompiledCultures.AllocatorInstance.Data,
                   local_78.CompiledCultures.ArrayNum);
        if (local_78.CompiledCultures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.CompiledCultures.AllocatorInstance.Data);
        }
        if (local_78.NativeLocRes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.NativeLocRes.Data.AllocatorInstance.Data);
        }
        if (local_78.NativeCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.NativeCulture.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      DestructItems<FString,int>
                ((FString *)local_78.CompiledCultures.AllocatorInstance.Data,
                 local_78.CompiledCultures.ArrayNum);
      if (local_78.CompiledCultures.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.CompiledCultures.AllocatorInstance.Data);
      }
      if (local_78.NativeLocRes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.NativeLocRes.Data.AllocatorInstance.Data);
      }
      if (local_78.NativeCulture.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.NativeCulture.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    uVar6 = (ulonglong)local_res18;
    pFVar13 = pFVar13 + 0x10;
  } while( true );
}

// GetNativeCultureName @ 141760280

FString * __cdecl
TextLocalizationResourceUtil::GetNativeCultureName
          (FString *__return_storage_ptr__,ELocalizedTextSourceCategory param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FString local_18;
  
  if (param_1 == Game) {
    GetNativeProjectCultureName(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  if (param_1 != Engine) {
    if (param_1 != Editor) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationResource.cpp"
                         ,0x283,L"Unknown ELocalizedTextSourceCategory!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) {
    pTVar4 = FPaths::GetEngineLocalizationPaths();
    pFVar3 = GetNativeCultureName(&local_18,pTVar4);
    if (pFVar3 != (FString *)&NativeEngineCultureName) {
      if (NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.
                              Data);
      }
      NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      if (NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FString *)(*pcVar1)();
          return pFVar3;
        }
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  ::FString::FString(__return_storage_ptr__,(FString *)&NativeEngineCultureName);
  return __return_storage_ptr__;
}

// GetNativeEngineCultureName @ 1417603f0

FString * __cdecl
TextLocalizationResourceUtil::GetNativeEngineCultureName
          (FString *__return_storage_ptr__,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  FString local_18;
  
  if ((NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) || (param_1)) {
    pTVar3 = FPaths::GetEngineLocalizationPaths();
    pFVar4 = GetNativeCultureName(&local_18,pTVar3);
    if (pFVar4 != (FString *)&NativeEngineCultureName) {
      if (NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.
                              Data);
      }
      NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      if (NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar1)();
          return pFVar4;
        }
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(__return_storage_ptr__,(FString *)&NativeEngineCultureName);
  return __return_storage_ptr__;
}

// GetNativeProjectCultureName @ 141760510

FString * __cdecl
TextLocalizationResourceUtil::GetNativeProjectCultureName
          (FString *__return_storage_ptr__,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  FString local_18;
  
  if ((NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) || (param_1)) {
    pTVar3 = FPaths::GetGameLocalizationPaths();
    pFVar4 = GetNativeCultureName(&local_18,pTVar3);
    if (pFVar4 != (FString *)&NativeProjectCultureName) {
      if (NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.
                              Data);
      }
      NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
           (ForAnyElementType)(pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
      if (NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar1)();
          return pFVar4;
        }
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(__return_storage_ptr__,(FString *)&NativeProjectCultureName);
  return __return_storage_ptr__;
}

// GetRequestedAssetGroups @ 141760810

TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> * __cdecl
GetRequestedAssetGroups
          (TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ERequestedCultureOverrideLevel param_1)

{
  ERequestedCultureOverrideLevel local_res10 [24];
  TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *local_18;
  ERequestedCultureOverrideLevel *local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = local_res10;
  local_res10[0] = param_1;
  local_18 = __return_storage_ptr__;
  `GetRequestedAssetGroups'::__l2::<lambda_1>::operator()
            (&local_18,&GGameUserSettingsIni,GameUserSettings);
  `GetRequestedAssetGroups'::__l2::<lambda_1>::operator()(&local_18,&GGameIni,GameSettings);
  `GetRequestedAssetGroups'::__l2::<lambda_1>::operator()(&local_18,&GEngineIni,EngineSettings);
  return __return_storage_ptr__;
}

// GetRequestedCulture @ 141760880

FString * __cdecl
GetRequestedCulture(FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,
                   wchar_t *param_3,ERequestedCultureOverrideLevel *param_4)

{
  bool bVar1;
  wchar_t *local_res10;
  wchar_t *local_res18 [2];
  FString *local_38;
  wchar_t **local_30;
  wchar_t **local_28;
  ERequestedCultureOverrideLevel *local_20;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_30 = &local_res10;
  local_28 = local_res18;
  local_20 = param_4;
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_38 = __return_storage_ptr__;
  `GetRequestedCulture'::__l2::<lambda_1>::operator()(&local_38);
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    if (local_res18[0] != (wchar_t *)0x0) {
      bVar1 = FConfigCacheIni::GetString
                        (GConfig,L"Internationalization",local_res18[0],__return_storage_ptr__,
                         &GGameUserSettingsIni);
      if (bVar1) {
        *param_4 = GameUserSettings;
      }
    }
    if ((__return_storage_ptr__->Data).ArrayNum < 2) {
      bVar1 = FConfigCacheIni::GetString
                        (GConfig,L"Internationalization",L"Culture",__return_storage_ptr__,
                         &GGameUserSettingsIni);
      if (bVar1) {
        *param_4 = GameUserSettings;
      }
    }
  }
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    if (local_res18[0] != (wchar_t *)0x0) {
      bVar1 = FConfigCacheIni::GetString
                        (GConfig,L"Internationalization",local_res18[0],__return_storage_ptr__,
                         &GGameIni);
      if (bVar1) {
        *param_4 = GameSettings;
      }
    }
    if ((__return_storage_ptr__->Data).ArrayNum < 2) {
      bVar1 = FConfigCacheIni::GetString
                        (GConfig,L"Internationalization",L"Culture",__return_storage_ptr__,&GGameIni
                        );
      if (bVar1) {
        *param_4 = GameSettings;
      }
    }
  }
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    if (local_res18[0] != (wchar_t *)0x0) {
      bVar1 = FConfigCacheIni::GetString
                        (GConfig,L"Internationalization",local_res18[0],__return_storage_ptr__,
                         &GEngineIni);
      if (bVar1) {
        *param_4 = EngineSettings;
      }
    }
    if ((__return_storage_ptr__->Data).ArrayNum < 2) {
      bVar1 = FConfigCacheIni::GetString
                        (GConfig,L"Internationalization",L"Culture",__return_storage_ptr__,
                         &GEngineIni);
      if (bVar1) {
        *param_4 = EngineSettings;
      }
      if (((__return_storage_ptr__->Data).ArrayNum < 2) && (param_3 != (wchar_t *)0x0)) {
        FString::operator=(__return_storage_ptr__,param_3);
        *param_4 = Defaults;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetRequestedLanguage @ 141760a40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
GetRequestedLanguage(FString *__return_storage_ptr__,ERequestedCultureOverrideLevel *param_1)

{
  FCulture *this;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  
  pFVar4 = FInternationalization::Get();
  pwVar6 = L"";
  if ((pFVar4->DefaultLanguage).Object == (FCulture *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = (pFVar4->DefaultLanguage).Object;
  pTVar1 = (pFVar4->DefaultLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FCulture *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = FCulture::GetName(this);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  GetRequestedCulture(__return_storage_ptr__,L"LANGUAGE=",L"Language",pwVar6,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRequestedLocale @ 141760b60

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
GetRequestedLocale(FString *__return_storage_ptr__,ERequestedCultureOverrideLevel *param_1)

{
  FCulture *this;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInternationalization *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  
  pFVar4 = FInternationalization::Get();
  pwVar6 = L"";
  if ((pFVar4->DefaultLocale).Object == (FCulture *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  this = (pFVar4->DefaultLocale).Object;
  pTVar1 = (pFVar4->DefaultLocale).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FCulture *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = FCulture::GetName(this);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  GetRequestedCulture(__return_storage_ptr__,L"LOCALE=",L"Locale",pwVar6,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetTypeHash @ 141761c50

uint __cdecl GetTypeHash(FNumberFormattingOptions *param_1)

{
  bool bVar1;
  ERoundingMode EVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar1 = param_1->AlwaysSign;
  uVar5 = (uint)bVar1 * -0x100 ^ 0x9e3779b9;
  uVar7 = ((uint)bVar1 + (uint)bVar1) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-uVar7 - (uint)bVar1) - uVar5 ^ uVar7 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 5;
  uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
  uVar4 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf;
  EVar2 = param_1->RoundingMode;
  iVar3 = uVar4 - param_1->UseGrouping;
  uVar5 = 0x9e3779b9 - uVar4 ^ iVar3 * 0x100;
  uVar8 = (param_1->UseGrouping - uVar5) - iVar3 ^ uVar5 >> 0xd;
  uVar4 = (iVar3 - uVar8) - uVar5 ^ uVar8 >> 0xc;
  uVar7 = (uVar5 - uVar4) - uVar8 ^ uVar4 << 0x10;
  uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 5;
  uVar5 = (uVar4 - uVar8) - uVar7 ^ uVar8 >> 3;
  uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 << 10;
  uVar4 = param_1->MinimumIntegralDigits;
  uVar8 = ((uVar8 - uVar7) - uVar5 ^ uVar7 >> 0xf) - EVar2 ^ EVar2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - EVar2 ^ uVar8 << 8;
  uVar7 = (EVar2 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 >> 5;
  uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 << 10;
  uVar7 = ((uVar7 - uVar5) - uVar8 ^ uVar5 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
  uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar4 ^ uVar7 << 0x10;
  uVar8 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar4 = param_1->MaximumIntegralDigits;
  uVar6 = (uVar7 - uVar8) - uVar5 ^ uVar8 >> 3;
  uVar7 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 10;
  uVar5 = param_1->MinimumFractionalDigits;
  uVar8 = ((uVar8 - uVar7) - uVar6 ^ uVar7 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar7 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
  uVar6 = (uVar4 - uVar7) - uVar8 ^ uVar7 >> 0xd;
  uVar8 = (uVar8 - uVar6) - uVar7 ^ uVar6 >> 0xc;
  uVar4 = (uVar7 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar7 = (uVar8 - uVar6) - uVar4 ^ uVar6 >> 3;
  uVar4 = (uVar4 - uVar7) - uVar6 ^ uVar7 << 10;
  uVar4 = ((uVar6 - uVar4) - uVar7 ^ uVar4 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = (-0x61c88647 - uVar4) - uVar5 ^ uVar4 << 8;
  uVar8 = (uVar5 - uVar7) - uVar4 ^ uVar7 >> 0xd;
  uVar6 = (uVar4 - uVar8) - uVar7 ^ uVar8 >> 0xc;
  uVar4 = param_1->MaximumFractionalDigits;
  uVar5 = (uVar7 - uVar6) - uVar8 ^ uVar6 << 0x10;
  uVar7 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar8 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 << 10;
  uVar7 = ((uVar7 - uVar5) - uVar8 ^ uVar5 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
  uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar4 ^ uVar7 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar4 ^ uVar7 << 10;
  return (uVar4 - uVar5) - uVar7 ^ uVar5 >> 0xf;
}

// GetTypeHash @ 141761fc0

uint __cdecl GetTypeHash(FNumberParsingOptions *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (uint)param_1->UseGrouping - (uint)param_1->InsideLimits;
  uVar3 = 0x9e3779b9 - param_1->UseGrouping ^ iVar1 * 0x100;
  uVar4 = (param_1->InsideLimits - uVar3) - iVar1 ^ uVar3 >> 0xd;
  uVar2 = (iVar1 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar1 = uVar2 - param_1->UseClamping;
  uVar4 = 0x9e3779b9 - uVar2 ^ iVar1 * 0x100;
  uVar3 = (param_1->UseClamping - uVar4) - iVar1 ^ uVar4 >> 0xd;
  uVar2 = (iVar1 - uVar3) - uVar4 ^ uVar3 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 1417620d0

uint __cdecl GetTypeHash(FTextKey *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTextKeyState *SRWLock;
  FKeyData *pFVar5;
  
  if (param_1->Index == -1) {
    return 0;
  }
  SRWLock = FTextKeyState::GetState();
  iVar1 = param_1->Index;
  if (iVar1 == -1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("InIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                       ,0xfb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  if (SRWLock == (FTextKeyState *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar5 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                     (&(SRWLock->KeyDataAllocations).Elements,iVar1);
  uVar4 = pFVar5->StrHash;
  if (SRWLock != (FTextKeyState *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  return uVar4;
}

// HashString @ 141762ba0

uint __cdecl TextKeyUtil::HashString(TStringPointer<wchar_t,unsigned_short> *param_1)

{
  int iVar1;
  ulong64 uVar3;
  size_t sVar2;
  
  iVar1 = param_1->StringLength;
  if (iVar1 == -1) {
    sVar2 = wcslen((wchar_t *)param_1->Ptr);
    iVar1 = (int)sVar2;
  }
  uVar3 = CityHash64((char *)param_1->Ptr,iVar1 * 2);
  return (int)(uVar3 >> 0x20) * 0x17 + (int)uVar3;
}

// InitEngineTextLocalization @ 141764890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl InitEngineTextLocalization(void)

{
  int *piVar1;
  atomic<ETextLocalizationManagerInitializedFlags> aVar2;
  int iVar3;
  FCulture *this;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<ILocalizedTextSource,1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_void___cdecl_InitEngineTextLocalization(void)_::_2_::FStat_STAT_InitEngineTextLocalization>
  FVar12;
  FTextLocalizationManager *pFVar13;
  FInternationalization *this_00;
  FInternationalization *pFVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar15;
  FTextLocalizationManager *pFVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar17;
  code **ppcVar18;
  FNameEntryId FVar19;
  FName FVar20;
  ELocalizationLoadFlags EVar21;
  bool bVar22;
  undefined1 auStackY_168 [32];
  FEngineTrackedActivityScope local_108 [4];
  FColor_u_0 local_104;
  ELocalizationLoadFlags local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FLLMScope local_e8 [2];
  LARGE_INTEGER local_e0;
  FName local_d8;
  FName local_d0;
  FMemScope local_c0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FStatMessage local_a8;
  FName local_98;
  FName local_90;
  FScopedBootTiming local_88;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FLLMScope::FLLMScope(local_e8,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,Localization,true);
  FEngineTrackedActivityScope::FEngineTrackedActivityScope(local_108,L"Initializing Localization");
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId511,"InitEngineTextLocalization",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x1ff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId511);
  }
  FScopedBootTiming::FScopedBootTiming(&local_88,"InitEngineTextLocalization");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_InitEngineTextLocalization ==
        (FThreadSafeStaticStat<_void___cdecl_InitEngineTextLocalization(void)_::_2_::FStat_STAT_InitEngineTextLocalization>
         )0x0) {
      pFVar11 = FName::FName(&local_98,"STAT_InitEngineTextLocalization");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitEngineTextLocalization,*pFVar11,
                 L"InitEngineTextLocalization","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar12 = StatPtr_STAT_InitEngineTextLocalization;
  if (StatPtr_STAT_InitEngineTextLocalization ==
      (FThreadSafeStaticStat<_void___cdecl_InitEngineTextLocalization(void)_::_2_::FStat_STAT_InitEngineTextLocalization>
       )0x0) {
    pFVar11 = FName::FName(&local_90,"STAT_InitEngineTextLocalization");
    FVar12 = (FThreadSafeStaticStat<_void___cdecl_InitEngineTextLocalization(void)_::_2_::FStat_STAT_InitEngineTextLocalization>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitEngineTextLocalization,
                          *pFVar11,L"InitEngineTextLocalization","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar17 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_104.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_104._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar19.Value;
        local_d8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                   ,0x200);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0.s.LowPart = FVar19.Value;
      local_e0.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar8 = true;
      goto LAB_141764a94;
    }
  }
  bVar8 = false;
  FVar20 = local_d0;
LAB_141764a94:
  pFVar13 = FTextLocalizationManager::Get();
  FTextLocalizationManager::WaitForAsyncTasks(pFVar13);
  FStringTableRegistry::Get();
  FStringTableRedirects::InitStringTableRedirects();
  this_00 = FInternationalization::Get();
  pFVar14 = FInternationalization::Get();
  if (((pFVar14->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this = (pFVar14->CurrentLanguage).Object;
  pTVar4 = (pFVar14->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this == (FCulture *)0x0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar15 = FCulture::GetPrioritizedParentCultureNames(this,&local_b8);
  FInternationalization::RefreshCultureDisplayNames(this_00,pTVar15);
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  EVar21 = (TextLocalizationManager::AlwaysLoadNativeLocalizationDataDuringInitialization != false)
           + (Additional|Engine);
  pFVar13 = FTextLocalizationManager::Get();
  LOCK();
  aVar2 = pFVar13->InitializedFlags;
  pFVar13->InitializedFlags = (atomic<ETextLocalizationManagerInitializedFlags>)0x0;
  UNLOCK();
  ApplyDefaultCultureSettings(EVar21 | Game);
  pFVar13 = FTextLocalizationManager::Get();
  LOCK();
  pFVar13->InitializedFlags = aVar2;
  UNLOCK();
  if (TextLocalizationResourceUtil::NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax !=
      -1) {
    if (TextLocalizationResourceUtil::NativeEngineCultureName.field0_0x0.TypedValue.Data.
        AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)TextLocalizationResourceUtil::NativeEngineCultureName.field0_0x0.
                            TypedValue.Data.AllocatorInstance.Data);
    }
    TextLocalizationResourceUtil::NativeEngineCultureName.field0_0x0.TypedValue.Data.
    AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    TextLocalizationResourceUtil::NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayNum = 0;
    TextLocalizationResourceUtil::NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax = -1;
  }
  pFVar13 = FTextLocalizationManager::Get();
  pFVar16 = FTextLocalizationManager::Get();
  local_f8.Data = (FScriptContainerElement *)0x0;
  iVar3 = (pFVar16->LocalizedTextSources).ArrayNum;
  pTVar5 = (TSharedPtr<ILocalizedTextSource,1> *)
           (pFVar16->LocalizedTextSources).AllocatorInstance.Data;
  local_f0 = CONCAT44(local_f0._4_4_,iVar3);
  local_100 = EVar21;
  if (iVar3 == 0) {
    local_f0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&local_f8,iVar3,(int *)((longlong)&local_f0 + 4));
    ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
              (local_f8.Data,pTVar5,iVar3);
  }
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`InitEngineTextLocalization'::`2'::<lambda_1>,1,1>::
                       _vftable_;
  *(ELocalizationLoadFlags *)(local_40 + 1) = local_100;
  local_40[2] = (code *)0x0;
  local_40[2] = (code *)local_f8.Data;
  local_f8.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_40 + 3) = (int)local_f0;
  *(undefined4 *)((longlong)local_40 + 0x1c) = local_f0._4_4_;
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`InitEngineTextLocalization'::__l2::<lambda_1>,void>::Call;
  }
  local_f0 = 0;
  FTextLocalizationManager::QueueAsyncTask(pFVar13,(TUniqueFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar18 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar18 = local_40;
    }
    (**(code **)(*ppcVar18 + 0x10))();
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            ((TSharedPtr<ILocalizedTextSource,1> *)local_f8.Data,(int)local_f0);
  if ((TSharedPtr<ILocalizedTextSource,1> *)local_f8.Data !=
      (TSharedPtr<ILocalizedTextSource,1> *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_a8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_88);
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FEngineTrackedActivityScope::~FEngineTrackedActivityScope(local_108);
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(local_e8);
  return;
}

// InitGameTextLocalization @ 141764ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl InitGameTextLocalization(void)

{
  int *piVar1;
  atomic<ETextLocalizationManagerInitializedFlags> aVar2;
  FCulture *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  TSharedPtr<ILocalizedTextSource,1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_void___cdecl_InitGameTextLocalization(void)_::_2_::FStat_STAT_InitGameTextLocalization>
  FVar14;
  FTextLocalizationManager *pFVar15;
  FInternationalization *pFVar16;
  FString *pFVar17;
  FTextLocalizationManager *pFVar18;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar19;
  code **ppcVar20;
  FNameEntryId FVar21;
  FName FVar22;
  byte bVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStackY_178 [32];
  FColor_u_0 local_118 [2];
  byte local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  FLLMScope local_f8 [2];
  LARGE_INTEGER local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FName local_c8;
  FName local_c0;
  FMemScope local_b0;
  FStatMessage local_a8;
  FName local_98;
  FName local_90;
  FScopedBootTiming local_88;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FLLMScope::FLLMScope(local_f8,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_b0,Localization,true);
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId570,"InitGameTextLocalization",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
               ,0x23a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId570);
  }
  FScopedBootTiming::FScopedBootTiming(&local_88,"InitGameTextLocalization");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_InitGameTextLocalization ==
        (FThreadSafeStaticStat<_void___cdecl_InitGameTextLocalization(void)_::_2_::FStat_STAT_InitGameTextLocalization>
         )0x0) {
      pFVar13 = FName::FName(&local_98,"STAT_InitGameTextLocalization");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitGameTextLocalization,*pFVar13,
                 L"InitGameTextLocalization","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar14 = StatPtr_STAT_InitGameTextLocalization;
  if (StatPtr_STAT_InitGameTextLocalization ==
      (FThreadSafeStaticStat<_void___cdecl_InitGameTextLocalization(void)_::_2_::FStat_STAT_InitGameTextLocalization>
       )0x0) {
    pFVar13 = FName::FName(&local_90,"STAT_InitGameTextLocalization");
    FVar14 = (FThreadSafeStaticStat<_void___cdecl_InitGameTextLocalization(void)_::_2_::FStat_STAT_InitGameTextLocalization>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InitGameTextLocalization,
                          *pFVar13,L"InitGameTextLocalization","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar14;
  bVar8 = false;
  bVar10 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar19 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar21.Value;
        local_c8.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                   ,0x23b);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0.s.LowPart = FVar21.Value;
      local_f0.s.HighPart = uVar19;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar9 = true;
      goto LAB_141765093;
    }
  }
  bVar9 = false;
  FVar22 = local_c0;
LAB_141765093:
  pFVar15 = FTextLocalizationManager::Get();
  FTextLocalizationManager::WaitForAsyncTasks(pFVar15);
  pFVar16 = FInternationalization::Get();
  FInternationalization::RefreshCachedConfigData(pFVar16);
  pFVar16 = FInternationalization::Get();
  if (((pFVar16->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (pFVar16->CurrentLanguage).Object;
  pTVar4 = (pFVar16->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 == (FCulture *)0x0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar17 = FCulture::GetName(pFVar3);
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = (pFVar17->Data).ArrayNum;
  lVar24 = (longlong)local_d0;
  pFVar5 = (pFVar17->Data).AllocatorInstance.Data;
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d0,0,&local_d8,local_d0,&local_cc);
    memcpy(local_d8.Data,pFVar5,lVar24 * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar15 = FTextLocalizationManager::Get();
  LOCK();
  aVar2 = pFVar15->InitializedFlags;
  pFVar15->InitializedFlags = (atomic<ETextLocalizationManagerInitializedFlags>)0x0;
  UNLOCK();
  ApplyDefaultCultureSettings(Game);
  pFVar15 = FTextLocalizationManager::Get();
  LOCK();
  pFVar15->InitializedFlags = aVar2;
  UNLOCK();
  pFVar16 = FInternationalization::Get();
  if (((pFVar16->CurrentLanguage).Object == (FCulture *)0x0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (pFVar16->CurrentLanguage).Object;
  pTVar4 = (pFVar16->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 == (FCulture *)0x0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar17 = FCulture::GetName(pFVar3);
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = (pFVar17->Data).ArrayNum;
  lVar24 = (longlong)local_e0;
  pFVar5 = (pFVar17->Data).AllocatorInstance.Data;
  if (local_e0 == 0) {
    local_dc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e0,0,&local_e8,local_e0,&local_dc);
    memcpy(local_e8.Data,pFVar5,lVar24 * 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (TextLocalizationResourceUtil::NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax !=
      -1) {
    if (TextLocalizationResourceUtil::NativeProjectCultureName.field0_0x0.TypedValue.Data.
        AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)TextLocalizationResourceUtil::NativeProjectCultureName.field0_0x0.
                            TypedValue.Data.AllocatorInstance.Data);
    }
    TextLocalizationResourceUtil::NativeProjectCultureName.field0_0x0.TypedValue.Data.
    AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    TextLocalizationResourceUtil::NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayNum = 0;
    TextLocalizationResourceUtil::NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax = -1;
  }
  bVar23 = (TextLocalizationManager::AlwaysLoadNativeLocalizationDataDuringInitialization != false)
           + 4;
  if (local_d0 == local_e0) {
    if (local_d0 < 2) {
      bVar11 = true;
    }
    else {
      iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_d8.Data,(wchar_t *)local_e8.Data);
      bVar11 = iVar12 == 0;
    }
  }
  else {
    bVar11 = local_d0 + local_e0 == 1;
  }
  pFVar15 = FTextLocalizationManager::Get();
  pFVar18 = FTextLocalizationManager::Get();
  local_108.Data = (FScriptContainerElement *)0x0;
  local_110 = bVar23 | 0x18;
  if (bVar11) {
    local_110 = bVar23;
  }
  iVar12 = (pFVar18->LocalizedTextSources).ArrayNum;
  pTVar6 = (TSharedPtr<ILocalizedTextSource,1> *)
           (pFVar18->LocalizedTextSources).AllocatorInstance.Data;
  local_100 = CONCAT44(local_100._4_4_,iVar12);
  if (iVar12 == 0) {
    local_100 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar12,0,&local_108,iVar12,(int *)((longlong)&local_100 + 4));
    ConstructItems<TSharedPtr<ILocalizedTextSource,1>,TSharedPtr<ILocalizedTextSource,1>,int>
              (local_108.Data,pTVar6,iVar12);
  }
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`InitGameTextLocalization'::`2'::<lambda_1>,1,1>::
                       _vftable_;
  *(byte *)(local_40 + 1) = local_110;
  local_40[2] = (code *)0x0;
  local_40[2] = (code *)local_108.Data;
  local_108.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_40 + 3) = (int)local_100;
  *(undefined4 *)((longlong)local_40 + 0x1c) = local_100._4_4_;
  if (local_40 + 1 != (code **)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`InitGameTextLocalization'::__l2::<lambda_1>,void>::Call;
  }
  local_100 = 0;
  FTextLocalizationManager::QueueAsyncTask(pFVar15,(TUniqueFunction<void___cdecl(void)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    ppcVar20 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar20 = local_40;
    }
    (**(code **)(*ppcVar20 + 0x10))();
  }
  DestructItems<TSharedPtr<ILocalizedTextSource,1>,int>
            ((TSharedPtr<ILocalizedTextSource,1> *)local_108.Data,(int)local_100);
  if ((TSharedPtr<ILocalizedTextSource,1> *)local_108.Data !=
      (TSharedPtr<ILocalizedTextSource,1> *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_a8);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_88);
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_f8);
  return;
}

// IsControlCharacter @ 141766a80

bool __cdecl TextBiDi::IsControlCharacter(wchar_t param_1)

{
  if ((param_1 != L'\x061c') &&
     (((0x20 < (ushort)(param_1 + L'\xdff2') ||
       ((0x1f0000003U >> ((ulonglong)(ushort)(param_1 + L'\xdff2') & 0x3f) & 1) == 0)) &&
      (3 < (ushort)(param_1 + L'\xdf9a'))))) {
    return false;
  }
  return true;
}

// IsLocalizationLockedByConfig @ 141766f10

bool __cdecl IsLocalizationLockedByConfig(void)

{
  bool bVar1;
  bool local_res8 [32];
  
  local_res8[0] = false;
  bVar1 = FConfigCacheIni::GetBool
                    (GConfig,L"Internationalization",L"LockLocalization",local_res8,&GGameIni);
  if (!bVar1) {
    FConfigCacheIni::GetBool
              (GConfig,L"Internationalization",L"LockLocalization",local_res8,&GEngineIni);
  }
  return local_res8[0];
}

// KeyifyTextId @ 1417678c0

FString * __cdecl
TextLocalizationManager::KeyifyTextId(FString *__return_storage_ptr__,FTextId *param_1)

{
  FTextKey local_res8 [2];
  FString local_38;
  FString local_28;
  
  local_res8[0].Index = (param_1->Namespace).Index;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res8,&local_28);
  local_res8[0].Index = (param_1->Key).Index;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res8,&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LexFromString @ 141767c00

void __cdecl LexFromString(ERoundingMode *param_1,wchar_t *param_2)

{
  *param_1 = HalfToEven;
  LexTryParseString(param_1,param_2);
  return;
}

// LexFromString @ 141767c20

void __cdecl LexFromString(ETextGender *param_1,wchar_t *param_2)

{
  *param_1 = Masculine;
  LexTryParseString(param_1,param_2);
  return;
}

// LexFromString @ 141767c30

void __cdecl LexFromString(Type *param_1,wchar_t *param_2)

{
  *param_1 = Default;
  LexTryParseString(param_1,param_2);
  return;
}

// LexToString @ 141767c50

FString * __cdecl LexToString(FString *__return_storage_ptr__,FIoChunkId *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  undefined4 uStack_1c;
  TArrayView<unsigned_char_const_,int> local_18;
  
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  FString::Reset(__return_storage_ptr__,0);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x19,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = param_1->Id;
  UE::String::BytesToHexLower
            (&local_18,(wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
  uVar7 = *piVar1 - 1;
  uVar5 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  *(undefined2 *)
   ((__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)*piVar1 * 2 + -2) = 0;
  return __return_storage_ptr__;
}

// LexToString @ 141767d50

FString * __cdecl LexToString(FString *__return_storage_ptr__,FIoContainerId *param_1)

{
  FString::PrintfImpl(__return_storage_ptr__,L"%llx");
  return __return_storage_ptr__;
}

// LexToString @ 141767d80

FString * __cdecl LexToString(FString *__return_storage_ptr__,EIoChunkType param_1)

{
  wchar_t *pwVar1;
  wchar_t *local_78 [14];
  
  local_78[1] = L"ExportBundleData";
  local_78[2] = L"BulkData";
  local_78[3] = L"OptionalBulkData";
  local_78[4] = L"MemoryMappedBulkData";
  local_78[5] = L"ScriptObjects";
  local_78[6] = L"ContainerHeader";
  local_78[7] = L"ExternalFile";
  local_78[8] = L"ShaderCodeLibrary";
  local_78[9] = L"ShaderCode";
  local_78[10] = L"PackageStoreEntry";
  local_78[0xb] = L"DerivedData";
  local_78[0xc] = L"EditorDerivedData";
  local_78[0xd] = L"PackageResource";
  local_78[0] = L"Invalid";
  if (param_1 < MAX) {
    pwVar1 = local_78[param_1];
  }
  else {
    pwVar1 = L"Invalid";
  }
  FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// LexToString @ 141767e60

wchar_t * __cdecl LexToString(ERoundingMode param_1)

{
  switch(param_1) {
  case HalfToEven:
    return L"HalfToEven";
  case HalfFromZero:
    return L"HalfFromZero";
  case HalfToZero:
    return L"HalfToZero";
  case FromZero:
    return L"FromZero";
  case ToZero:
    return L"ToZero";
  case ToNegativeInfinity:
    return L"ToNegativeInfinity";
  case ToPositiveInfinity:
    return L"ToPositiveInfinity";
  default:
    return L"<Unknown ERoundingMode>";
  }
}

// LexToString @ 141767ee0

wchar_t * __cdecl LexToString(ETextGender param_1)

{
  if (param_1 == Masculine) {
    return L"Masculine";
  }
  if (param_1 != Feminine) {
    if (param_1 != Neuter) {
      return L"<Unknown ETextGender>";
    }
    return L"Neuter";
  }
  return L"Feminine";
}

// LexToString @ 141767f20

wchar_t * __cdecl LexToString(Type param_1)

{
  switch(param_1) {
  case Default:
    return L"Default";
  case Short:
    return L"Short";
  case Medium:
    return L"Medium";
  case Long:
    return L"Long";
  case Full:
    return L"Full";
  case Custom:
    return L"Custom";
  default:
    return L"<Unknown EDateTimeStyle>";
  }
}

// LexTryParseString @ 141767fa0

bool __cdecl LexTryParseString(ERoundingMode *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"HalfToEven");
  if (iVar1 == 0) {
    *param_1 = HalfToEven;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"HalfFromZero");
  if (iVar1 == 0) {
    *param_1 = HalfFromZero;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"HalfToZero");
  if (iVar1 == 0) {
    *param_1 = HalfToZero;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"FromZero");
  if (iVar1 == 0) {
    *param_1 = FromZero;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"ToZero");
  if (iVar1 == 0) {
    *param_1 = ToZero;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"ToNegativeInfinity");
  if (iVar1 == 0) {
    *param_1 = ToNegativeInfinity;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"ToPositiveInfinity");
  if (iVar1 == 0) {
    *param_1 = ToPositiveInfinity;
    return true;
  }
  return false;
}

// LexTryParseString @ 1417680d0

bool __cdecl LexTryParseString(ETextGender *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Masculine");
  if (iVar1 == 0) {
    *param_1 = Masculine;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Feminine");
  if (iVar1 == 0) {
    *param_1 = Feminine;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Neuter");
  if (iVar1 == 0) {
    *param_1 = Neuter;
    return true;
  }
  return false;
}

// LexTryParseString @ 141768160

bool __cdecl LexTryParseString(Type *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Default");
  if (iVar1 == 0) {
    *param_1 = Default;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Short");
  if (iVar1 == 0) {
    *param_1 = Short;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Medium");
  if (iVar1 == 0) {
    *param_1 = Medium;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Long");
  if (iVar1 == 0) {
    *param_1 = Long;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Full");
  if (iVar1 == 0) {
    *param_1 = Full;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Custom");
  if (iVar1 == 0) {
    *param_1 = Custom;
    return true;
  }
  return false;
}

// LoadFromCompactBinary @ 141769e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl LoadFromCompactBinary(FCbFieldView *param_1,FIoChunkId *param_2)

{
  ECbFieldError EVar1;
  undefined1 auStack_48 [32];
  FCbObjectId local_28;
  FCbObjectId local_1c;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28.Bytes[0] = '\0';
  local_28.Bytes[1] = '\0';
  local_28.Bytes[2] = '\0';
  local_28.Bytes[3] = '\0';
  local_28.Bytes[4] = '\0';
  local_28.Bytes[5] = '\0';
  local_28.Bytes[6] = '\0';
  local_28.Bytes[7] = '\0';
  local_28.Bytes[8] = '\0';
  local_28.Bytes[9] = '\0';
  local_28.Bytes[10] = '\0';
  local_28.Bytes[0xb] = '\0';
  FCbFieldView::AsObjectId(param_1,&local_1c,&local_28);
  EVar1 = param_1->Error;
  *(undefined8 *)param_2->Id = local_1c.Bytes._0_8_;
  *(undefined4 *)(param_2->Id + 8) = local_1c.Bytes._8_4_;
  return EVar1 == None;
}

// LoadFromCompactBinary @ 141769e80

bool __cdecl LoadFromCompactBinary(FCbFieldView *param_1,FIoContainerId *param_2)

{
  ulong64 uVar1;
  
  if ((param_1->TypeWithFlags & CustomById) == IntegerPositive) {
    uVar1 = FCbFieldView::AsInteger(param_1,0,(FIntegerParams)0x80);
    param_2->Id = uVar1;
    return true;
  }
  return false;
}

// LoadKeyString @ 14176a490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
TextKeyUtil::LoadKeyString
          (FArchive *param_1,
          TArray<wchar_t,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  longlong *plVar1;
  ForElementType<wchar_t> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_108 [32];
  uint local_d8 [4];
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  ForElementType<wchar_t> local_40;
  uint local_38;
  uint local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                         ,0x2c3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_d8[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_d8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_d8);
    }
  }
  else {
    local_d8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  bVar4 = (int)local_d8[0] < 0;
  if ((((int)local_d8[0] < 0) && (local_d8[0] = -local_d8[0], (int)local_d8[0] < 0)) ||
     ((0 < *(longlong *)&param_1->field_0x38 &&
      (*(longlong *)&param_1->field_0x38 < (longlong)(int)local_d8[0])))) {
    FArchiveState::SetCriticalError((FArchiveState *)param_1);
    bVar4 = false;
  }
  else {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
              (2,2,local_d8[0],&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    if (local_d8[0] != 0) {
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      if (bVar4) {
        if (FVar2 != (ForElementType<wchar_t>)0x0) {
          param_2 = (TArray<wchar_t,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)
                    FVar2;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,(longlong)(int)local_d8[0] * 2);
        *(undefined2 *)((longlong)param_2 + (longlong)(int)(local_d8[0] - 1) * 2) = 0;
      }
      else {
        local_48.Data = (FScriptContainerElement *)0x0;
        local_38 = local_d8[0];
        local_40 = (ForElementType<wchar_t>)param_2;
        if (FVar2 != (ForElementType<wchar_t>)0x0) {
          local_40 = FVar2;
        }
        local_34 = local_d8[0];
        if (0x80 < local_d8[0]) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_48,0,local_d8[0],1);
        }
        FVar6.Data = local_c8;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar6.Data = local_48.Data;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar6.Data,(longlong)(int)local_d8[0]);
        FVar6.Data = local_c8;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar6.Data = local_48.Data;
        }
        FVar6.Data[(int)(local_d8[0] - 1)] = (FScriptContainerElement)0x0;
        FVar6.Data = local_c8;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar6.Data = local_48.Data;
        }
        if (((int)local_38 < (int)local_34) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FPlatformString::ConvertedLength<ToType>(Source, SrcLen) <= DestLen"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                               ,0x4eb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FGenericPlatformString::Convert<char,wchar_t>
                  ((wchar_t *)local_40,local_38,(char *)FVar6.Data,local_34);
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
      }
      if ((6 < (byte)LogTextKey._0_1_) && (0x80 < (int)local_d8[0])) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogTextKey);
      }
    }
    bVar4 = true;
  }
  return bVar4;
}

// MakeTextDisplayString @ 14176d020

TDisplayStringRef<FString> __cdecl MakeTextDisplayString(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  TDisplayStringRef<FString> TVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *in_RDX;
  
  pFVar4 = operator_new(0x18);
  pFVar6 = (FScriptContainerElement *)0x0;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    *(undefined8 *)(pFVar4 + 8) = 0;
    *(int *)pFVar4 = 0;
    *(undefined8 *)(pFVar4 + 8) = *in_RDX;
    *in_RDX = 0;
    *(int *)(pFVar4 + 0x10) = *(int *)(in_RDX + 1);
    *(int *)(pFVar4 + 0x14) = *(int *)((longlong)in_RDX + 0xc);
    in_RDX[1] = 0;
    LOCK();
    *(int *)pFVar4 = *(int *)pFVar4 + 1;
    UNLOCK();
    (param_1->Data).AllocatorInstance.Data = pFVar4;
    LOCK();
    *(int *)pFVar4 = *(int *)pFVar4 + 1;
    UNLOCK();
    pFVar6 = pFVar4;
  }
  if ((param_1->Data).AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("this->IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\LocalizedTextSourceTypes.h"
                       ,0xb0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5 = (TDisplayStringRef<FString>)(*pcVar2)();
      return TVar5;
    }
  }
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    LOCK();
    iVar1 = *(int *)pFVar6;
    *(int *)pFVar6 = *(int *)pFVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)(pFVar6 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar6 + 8));
      }
      operator_delete(pFVar6,0x18);
    }
  }
  return (TDisplayStringRef<FString>)param_1;
}

// ParseArgument @ 14176dc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFormatTokens::ParseArgument
          (TOptional<FExpressionError> *__return_storage_ptr__,FTextFormatPatternDefinition *param_1
          ,TExpressionTokenConsumer<wchar_t> *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  TTokenStream<wchar_t> *this;
  TOptional<TStringToken<wchar_t>_> *pTVar4;
  TOptional<FExpressionError> *pTVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  int iStack_100;
  int iStack_fc;
  FTextFormatPatternDefinition *local_f8;
  code *local_f0;
  FTextFormatPatternDefinition **local_e8;
  TOptional<TStringToken<wchar_t>_> local_e0;
  TOptional<TStringToken<wchar_t>_> local_c0;
  TOptional<TStringToken<wchar_t>_> local_a0;
  undefined1 local_78 [24];
  wchar_t *local_60;
  uchar auStack_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_2);
  TTokenStream<wchar_t>::ParseSymbol
            (this,&local_c0,param_1->ArgStartChar,(TStringToken<wchar_t> *)0x0);
  if (local_c0.bIsSet != false) {
    local_e8 = &local_f8;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`TextFormatTokens::ParseArgument'::__l2::<lambda_1>,enum_EParseState,wchar_t>
               ::Call;
    local_f8 = param_1;
    TTokenStream<wchar_t>::ParseToken
              (this,&local_e0,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_f0,
               &local_c0.TypedValue);
    if ((local_e0.bIsSet != false) &&
       (pTVar4 = TTokenStream<wchar_t>::ParseSymbol
                           (this,&local_a0,param_1->ArgEndChar,&local_c0.TypedValue),
       pTVar4->bIsSet != false)) {
      if ((local_e0.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TOptional<FExpressionError> *)(*pcVar2)();
        return pTVar5;
      }
      local_108 = local_e0.TypedValue.TokenStart;
      iStack_100 = (int)((longlong)local_e0.TypedValue.TokenEnd -
                         (longlong)local_e0.TypedValue.TokenStart >> 1);
      iStack_fc = -1;
      if (0 < iStack_100) {
        iVar7 = 0;
        iStack_fc = 0;
        pwVar6 = local_e0.TypedValue.TokenStart;
        do {
          wVar1 = *pwVar6;
          if (9 < (ushort)(wVar1 + L'￐')) {
            iStack_fc = -1;
            break;
          }
          iVar7 = iVar7 + 1;
          pwVar6 = pwVar6 + 1;
          iStack_fc = (uint)(ushort)wVar1 + (iStack_fc * 5 + -0x18) * 2;
        } while (iVar7 < iStack_100);
      }
      local_78._16_8_ =
           &___7__FInlineDataStorage_UFArgumentTokenSpecifier_TextFormatTokens___Impl__6B_;
      local_78._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.A;
      local_78._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.B;
      local_78._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.C;
      local_78._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FArgumentTokenSpecifier>::GetTypeId(void)'
           ::__l2::Global.D;
      auStack_58[4] = (undefined1)iStack_fc;
      auStack_58[5] = iStack_fc._1_1_;
      auStack_58[6] = iStack_fc._2_1_;
      auStack_58[7] = iStack_fc._3_1_;
      auStack_58[0] = (char)iStack_100;
      auStack_58[1] = (char)((uint)iStack_100 >> 8);
      auStack_58[2] = (char)((uint)iStack_100 >> 0x10);
      auStack_58[3] = (char)((uint)iStack_100 >> 0x18);
      local_60 = local_e0.TypedValue.TokenStart;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_2,&local_c0.TypedValue,(FExpressionNode *)local_78);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_78);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseArgumentModifier @ 14176ddb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFormatTokens::ParseArgumentModifier
          (TOptional<FExpressionError> *__return_storage_ptr__,FTextFormatPatternDefinition *param_1
          ,TExpressionTokenConsumer<wchar_t> *param_2)

{
  FTextFormatPatternDefinition *pFVar1;
  code *pcVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  TTokenStream<wchar_t> *this;
  TOptional<TStringToken<wchar_t>_> *pTVar7;
  TOptional<FExpressionError> *pTVar8;
  TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
  *pTVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FTextFormatPatternDefinition *pFVar13;
  FTextFormatPatternDefinition *pFVar14;
  undefined1 auStack_258 [32];
  undefined1 local_238 [4];
  undefined2 local_234 [2];
  undefined4 local_230 [2];
  longlong local_228;
  TReferenceControllerBase<1> *local_220;
  FTextFormatPatternDefinition *local_218;
  FTextFormatPatternDefinition *local_210;
  TOptional<TStringToken<wchar_t>_> local_208;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  void *local_1d8;
  undefined8 uStack_1d0;
  FTextFormatString local_1c8;
  code *local_1a8;
  undefined1 *local_1a0;
  undefined2 *local_198;
  undefined4 *local_190;
  code *local_188;
  undefined2 **local_180;
  TOptional<TStringToken<wchar_t>_> local_178;
  TOptional<TStringToken<wchar_t>_> local_158;
  FArgumentModifierTokenSpecifier local_138;
  TOptional<TStringToken<wchar_t>_> local_118;
  TOptional<TStringToken<wchar_t>_> local_f8;
  TOptional<TStringToken<wchar_t>_> local_d8;
  code *local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  FExpressionNode local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_2);
  TTokenStream<wchar_t>::ParseSymbol
            (this,&local_208,param_1->ArgModChar,(TStringToken<wchar_t> *)0x0);
  if (local_208.bIsSet == false) {
LAB_14176e2bc:
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  local_1a0 = local_238;
  local_1a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TextFormatTokens::ParseArgumentModifier'::__l2::<lambda_1>,enum_EParseState,wchar_t>
              ::Call;
  TTokenStream<wchar_t>::ParseToken
            (this,&local_178,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_1a8,
             &local_208.TypedValue);
  if ((local_178.bIsSet == false) ||
     (pTVar7 = TTokenStream<wchar_t>::ParseSymbol(this,&local_118,L'(',&local_208.TypedValue),
     pTVar7->bIsSet == false)) goto LAB_14176e2bc;
  if ((local_178.bIsSet == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TOptional<FExpressionError> *)(*pcVar2)();
    return pTVar8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FTextFormatter::FTextFormatter(&TextFormatter);
    atexit(`FTextFormatter::Get'::__l2::_dynamic_atexit_destructor_for__TextFormatter__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar14 = (FTextFormatPatternDefinition *)0x0;
  local_1c8.StringPtr = local_178.TypedValue.TokenStart;
  local_1c8.StringLen =
       (int)((longlong)local_178.TypedValue.TokenEnd - (longlong)local_178.TypedValue.TokenStart >>
            1);
  local_1c8.InternalString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.InternalString.Data.ArrayNum = 0;
  local_1c8.InternalString.Data.ArrayMax = 0;
  AcquireSRWLockShared((PSRWLOCK)&TextFormatter.TextArgumentModifiersRW);
  pTVar9 = TSortedMap<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
           ::Find(&TextFormatter.TextArgumentModifiers,&local_1c8);
  if (pTVar9 == (TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>
                 *)0x0) {
    local_b8 = (code *)0x0;
    local_90 = (longlong *)0x0;
  }
  else {
    local_b8 = *(code **)pTVar9;
    local_90 = (longlong *)0x0;
    if (local_b8 != (code *)0x0) {
      puVar11 = (undefined8 *)&pTVar9->field_0x10;
      if (*(undefined8 **)&pTVar9->field_0x28 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)&pTVar9->field_0x28;
      }
      (**(code **)*puVar11)(puVar11,local_a8);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&TextFormatter.TextArgumentModifiersRW);
  if (local_b8 == (code *)0x0) goto LAB_14176e2bc;
  local_198 = local_234;
  local_190 = local_230;
  local_234[0] = 0;
  local_180 = &local_198;
  local_230[0] = 0;
  local_188 = UE::Core::Private::Function::
              TFunctionRefCaller<`TextFormatTokens::ParseArgumentModifier'::__l12::<lambda_2>,enum_EParseState,wchar_t>
              ::Call;
  pTVar7 = TTokenStream<wchar_t>::ParseToken
                     (this,&local_f8,(TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_188,
                      &local_208.TypedValue);
  if ((pTVar7 != &local_158) && (pTVar7->bIsSet != false)) {
    local_158.TypedValue.TokenStart = (pTVar7->TypedValue).TokenStart;
    local_158.TypedValue.TokenEnd = (pTVar7->TypedValue).TokenEnd;
    local_158.TypedValue.LineNumber = (pTVar7->TypedValue).LineNumber;
    local_158.TypedValue.CharacterIndex = (pTVar7->TypedValue).CharacterIndex;
    pTVar7 = TTokenStream<wchar_t>::ParseSymbol(this,&local_d8,L')',&local_208.TypedValue);
    if (pTVar7->bIsSet != false) {
      pFVar1 = (FTextFormatPatternDefinition *)param_1->_padding_;
      pFVar13 = pFVar1;
      if (pFVar1 != (FTextFormatPatternDefinition *)0x0) {
        iVar3 = (int)pFVar1->_padding_;
        do {
          pFVar13 = pFVar14;
          if (iVar3 == 0) goto LAB_14176e021;
          LOCK();
          iVar6 = (int)pFVar1->_padding_;
          bVar5 = iVar3 == iVar6;
          if (bVar5) {
            *(int *)&pFVar1->_padding_ = iVar3 + 1;
            iVar6 = iVar3;
          }
          UNLOCK();
          iVar3 = iVar6;
        } while (!bVar5);
        pFVar14 = (FTextFormatPatternDefinition *)param_1->_padding_;
        pFVar13 = pFVar1;
      }
LAB_14176e021:
      if ((pFVar14 != param_1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SharedThis.Get() == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x69a,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TOptional<FExpressionError> *)(*pcVar2)();
        return pTVar8;
      }
      if ((pFVar14 == (FTextFormatPatternDefinition *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x416,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TOptional<FExpressionError> *)(*pcVar2)();
        return pTVar8;
      }
      local_218 = pFVar14;
      local_210 = pFVar13;
      if ((pFVar14 == (FTextFormatPatternDefinition *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x26c,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TOptional<FExpressionError> *)(*pcVar2)();
        return pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_1e8 = local_158.TypedValue.TokenStart;
      local_1e0 = (undefined4)
                  ((longlong)local_158.TypedValue.TokenEnd -
                   (longlong)local_158.TypedValue.TokenStart >> 1);
      local_1d8 = (void *)0x0;
      uStack_1d0 = 0;
      UE::Core::Private::Function::CheckCallable(local_b8);
      pcVar2 = local_b8;
      plVar12 = local_a8;
      if (local_90 != (longlong *)0x0) {
        plVar12 = local_90;
      }
      uVar10 = (**(code **)(*plVar12 + 8))();
      (*pcVar2)(&local_228,uVar10,&local_1e8,&local_218);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_210);
      if (local_1d8 != (void *)0x0) {
        FMemory::Free(local_1d8);
      }
      if (local_228 != 0) {
        if ((local_228 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TOptional<FExpressionError> *)(*pcVar2)();
          return pTVar8;
        }
        pTVar4 = local_220;
        if (local_220 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_220->SharedReferenceCount = (atomic<int>)((int)local_220->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_228 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TOptional<FExpressionError> *)(*pcVar2)();
          return pTVar8;
        }
        local_138.TextFormatArgumentModifier.SharedReferenceCount.ReferenceController = pTVar4;
        local_138.ModifierPatternStartPos = local_208.TypedValue.TokenStart + 1;
        local_138.ModifierPatternLen =
             (int)((longlong)local_208.TypedValue.TokenEnd -
                   (longlong)local_208.TypedValue.TokenStart >> 1) + -1;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        FExpressionNode::FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier>
                  (&local_88,&local_138);
        TExpressionTokenConsumer<wchar_t>::Add(param_2,&local_208.TypedValue,&local_88);
        FExpressionNode::~FExpressionNode(&local_88);
        __return_storage_ptr__->bIsSet = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_220);
        if (local_b8 == (code *)0x0) {
          return __return_storage_ptr__;
        }
        plVar12 = local_a8;
        if (local_90 != (longlong *)0x0) {
          plVar12 = local_90;
        }
        (**(code **)(*plVar12 + 0x10))();
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->bIsSet = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_220)
      ;
      goto LAB_14176e296;
    }
  }
  __return_storage_ptr__->bIsSet = false;
LAB_14176e296:
  if (local_b8 == (code *)0x0) {
    return __return_storage_ptr__;
  }
  plVar12 = local_a8;
  if (local_90 != (longlong *)0x0) {
    plVar12 = local_90;
  }
  (**(code **)(*plVar12 + 0x10))();
  return __return_storage_ptr__;
}

// ParseEscapedChar @ 14176e310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFormatTokens::ParseEscapedChar
          (TOptional<FExpressionError> *__return_storage_ptr__,FTextFormatPatternDefinition *param_1
          ,TExpressionTokenConsumer<wchar_t> *param_2)

{
  TTokenStream<wchar_t> *pTVar1;
  undefined1 auStack_c8 [32];
  TOptional<TStringToken<wchar_t>_> local_a8;
  TOptional<TStringToken<wchar_t>_> local_88;
  undefined1 local_68 [24];
  wchar_t local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar1 = TExpressionTokenConsumer<wchar_t>::GetStream(param_2);
  TTokenStream<wchar_t>::ParseSymbol
            (pTVar1,&local_a8,param_1->EscapeChar,(TStringToken<wchar_t> *)0x0);
  if (local_a8.bIsSet != false) {
    pTVar1 = TExpressionTokenConsumer<wchar_t>::GetStream(param_2);
    TTokenStream<wchar_t>::ParseSymbol(pTVar1,&local_88,&local_a8.TypedValue);
    if ((local_88.bIsSet != false) &&
       ((((local_50 = *local_88.TypedValue.TokenStart, local_50 == param_1->EscapeChar ||
          (local_50 == param_1->ArgStartChar)) || (local_50 == param_1->ArgEndChar)) ||
        (local_50 == param_1->ArgModChar)))) {
      local_68._16_8_ = &___7__FInlineDataStorage_UFEscapedCharacter_TextFormatTokens___Impl__6B_;
      local_68._0_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
           ::__l2::Global.A;
      local_68._4_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
           ::__l2::Global.B;
      local_68._8_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
           ::__l2::Global.C;
      local_68._12_4_ =
           `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FEscapedCharacter>::GetTypeId(void)'
           ::__l2::Global.D;
      TExpressionTokenConsumer<wchar_t>::Add
                (param_2,&local_a8.TypedValue,(FExpressionNode *)local_68);
      FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ParseLiteral @ 14176e6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FExpressionError> * __cdecl
TextFormatTokens::ParseLiteral
          (TOptional<FExpressionError> *__return_storage_ptr__,FTextFormatPatternDefinition *param_1
          ,TExpressionTokenConsumer<wchar_t> *param_2)

{
  undefined1 **ppuVar1;
  TTokenStream<wchar_t> *this;
  TOptional<TStringToken<wchar_t>_> *pTVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  TOptional<TStringToken<wchar_t>_> local_b0;
  code *local_90;
  undefined1 **local_88;
  undefined1 *local_80;
  FTextFormatPatternDefinition *local_78;
  undefined1 local_68 [24];
  wchar_t *local_50;
  uchar local_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this = TExpressionTokenConsumer<wchar_t>::GetStream(param_2);
  local_80 = local_b8;
  local_b0.bIsSet = false;
  local_88 = &local_80;
  local_b8[0] = 1;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TextFormatTokens::ParseLiteral'::__l3::<lambda_1>,enum_EParseState,wchar_t>
             ::Call;
  local_78 = param_1;
  pTVar2 = TTokenStream<wchar_t>::ParseToken
                     (this,(TOptional<TStringToken<wchar_t>_> *)local_68,
                      (TFunctionRef<EParseState___cdecl(wchar_t)> *)&local_90,
                      (TStringToken<wchar_t> *)0x0);
  ppuVar1 = local_88;
  if (pTVar2 == &local_b0) {
    if (local_b0.bIsSet == false) goto LAB_14176e7c3;
  }
  else {
    if (pTVar2->bIsSet == false) goto LAB_14176e7c3;
    local_b0.TypedValue.TokenStart = (pTVar2->TypedValue).TokenStart;
    local_b0.TypedValue.TokenEnd = (pTVar2->TypedValue).TokenEnd;
    local_b0.TypedValue.LineNumber = (pTVar2->TypedValue).LineNumber;
    local_b0.TypedValue.CharacterIndex = (pTVar2->TypedValue).CharacterIndex;
    local_b0.bIsSet = true;
  }
  local_68._16_8_ = &___7__FInlineDataStorage_UFStringLiteral_TextFormatTokens___Impl__6B_;
  local_50 = local_b0.TypedValue.TokenStart;
  local_48._0_4_ =
       (undefined4)
       ((longlong)local_b0.TypedValue.TokenEnd - (longlong)local_b0.TypedValue.TokenStart >> 1);
  local_68._0_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.A;
  local_68._4_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.B;
  local_68._8_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.C;
  local_68._12_4_ =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TextFormatTokens::FStringLiteral>::GetTypeId(void)'
       ::__l2::Global.D;
  local_48[4] = local_88._4_1_;
  local_48[5] = local_88._5_1_;
  local_48[6] = local_88._6_1_;
  local_48[7] = local_88._7_1_;
  local_88 = ppuVar1;
  TExpressionTokenConsumer<wchar_t>::Add(param_2,&local_b0.TypedValue,(FExpressionNode *)local_68);
  FExpressionNode::~FExpressionNode((FExpressionNode *)local_68);
LAB_14176e7c3:
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// PeekInsensitiveMarker @ 14176eaa0

bool __cdecl
TextStringificationUtil::PeekInsensitiveMarker(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Strnicmp(param_1,param_2,(longlong)param_3);
  return iVar1 == 0;
}

// PeekMarker @ 14176eac0

bool __cdecl TextStringificationUtil::PeekMarker(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,param_2,(longlong)param_3);
  return iVar1 == 0;
}

// ReadAlnumFromBuffer @ 14176ed10

wchar_t * __cdecl TextStringificationUtil::ReadAlnumFromBuffer(wchar_t *param_1,FString *param_2)

{
  wchar_t wVar1;
  int iVar2;
  
  ::FString::Reset(param_2,0);
  wVar1 = *param_1;
  while ((wVar1 != L'\0' && ((iVar2 = iswalnum(wVar1), iVar2 != 0 || (*param_1 == L'_'))))) {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    ::FString::AppendChar(param_2,wVar1);
    wVar1 = *param_1;
  }
  if ((param_2->Data).ArrayNum < 2) {
    param_1 = (wchar_t *)0x0;
  }
  return param_1;
}

// ReadDateTimeFromBuffer @ 14176ed80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

wchar_t * __cdecl
TextStringificationUtil::ReadDateTimeFromBuffer
          (wchar_t *param_1,FString *param_2,FDateTime *param_3,Type *param_4,Type *param_5,
          FString *param_6,FString *param_7,TSharedPtr<FCulture,1> *param_8)

{
  short *psVar1;
  wchar_t *pwVar2;
  short sVar3;
  wchar_t wVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FText *pFVar9;
  wchar_t *pwVar10;
  FDateTime *pFVar11;
  FInternationalization *this;
  TSharedPtr<FCulture,1> *pTVar12;
  short *psVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  FString *pFVar16;
  wchar_t *pwVar17;
  undefined1 local_res10 [8];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FFormatArgumentValue local_88;
  TSharedPtr<FCulture,1> local_68;
  FDateTime local_58;
  FDateTime local_50;
  FDateTime local_48;
  FDateTime local_40;
  TSharedPtr<FCulture,1> local_38;
  wchar_t *pwVar18;
  
  iVar6 = (param_2->Data).ArrayNum;
  pwVar18 = (wchar_t *)0x0;
  pwVar17 = (wchar_t *)0x0;
  iVar7 = 0;
  if (iVar6 == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar7 = iVar6 + -1;
  }
  iVar6 = wcsncmp(param_1,pwVar15,(longlong)iVar7);
  if (iVar6 != 0) {
    return (wchar_t *)0x0;
  }
  iVar7 = (param_2->Data).ArrayNum;
  iVar6 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = 0;
  }
  pwVar15 = param_1 + iVar6;
  iVar6 = wcsncmp(pwVar15,*CustomSuffix,7);
  pwVar10 = pwVar15 + 7;
  if (iVar6 != 0) {
    pwVar10 = pwVar15;
  }
  iVar7 = wcsncmp(pwVar10,*LocalSuffix,6);
  if (iVar7 == 0) {
    ::FString::FString(&local_b8,L"Etc/Unknown");
    if (param_7 != &local_b8) {
      pFVar5 = (param_7->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (param_7->Data).AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      (param_7->Data).ArrayNum = local_b8.Data.ArrayNum;
      (param_7->Data).ArrayMax = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    lVar8 = 0xc;
  }
  else {
    iVar7 = wcsncmp(pwVar10,*UtcSuffix,4);
    if (iVar7 != 0) {
      return (wchar_t *)0x0;
    }
    ::FString::Reset(param_7,0);
    lVar8 = 8;
  }
  psVar13 = (short *)((longlong)pwVar10 + lVar8);
  sVar3 = *(short *)((longlong)pwVar10 + lVar8);
  while ((sVar3 != 0 && ((sVar3 == 0x20 || (sVar3 == 9))))) {
    psVar1 = psVar13 + 1;
    psVar13 = psVar13 + 1;
    sVar3 = *psVar1;
  }
  if (*psVar13 != 0x28) {
    return (wchar_t *)0x0;
  }
  pwVar15 = psVar13 + 1;
  if (psVar13 == (short *)0x0) {
    pwVar15 = (wchar_t *)0x0;
  }
  if (pwVar15 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  local_88.Type = Text;
  pFVar9 = FText::GetEmpty();
  TOptional<FText>::TOptional<FText>(&local_88.TextValue,pFVar9);
  wVar4 = *pwVar15;
  while ((wVar4 != L'\0' && ((wVar4 == L' ' || (wVar4 == L'\t'))))) {
    pwVar10 = pwVar15 + 1;
    pwVar15 = pwVar15 + 1;
    wVar4 = *pwVar10;
  }
  pwVar10 = ReadNumberFromBuffer(pwVar15,&local_88);
  pwVar15 = pwVar18;
  if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
  if (local_88.Type == Int) {
    pFVar11 = &local_40;
LAB_14176efa2:
    lVar8 = CONCAT44(local_88.field1_0x8.IntValue._4_4_,local_88.field1_0x8.FloatValue) * 10000000;
  }
  else {
    if (local_88.Type == UInt) {
      pFVar11 = &local_48;
      goto LAB_14176efa2;
    }
    if (local_88.Type == Float) {
      pFVar11 = &local_50;
      lVar8 = (longlong)local_88.field1_0x8.FloatValue * 10000000;
    }
    else {
      if (local_88.Type != Double) goto LAB_14176f24e;
      pFVar11 = &local_58;
      lVar8 = (longlong)
              (double)CONCAT44(local_88.field1_0x8.IntValue._4_4_,local_88.field1_0x8.FloatValue) *
              10000000;
    }
  }
  pFVar11 = FDateTime::FDateTime(pFVar11,0x7b2,1,1,0,0,0,0);
  param_3->Ticks = pFVar11->Ticks + lVar8;
  pwVar15 = pwVar17;
  if (iVar6 == 0) {
    if (param_4 != (Type *)0x0) {
      *param_4 = Custom;
    }
    if (param_5 != (Type *)0x0) {
      *param_5 = Custom;
    }
    pwVar10 = SkipWhitespaceAndCharacter(pwVar10,L',');
    pwVar15 = pwVar18;
    if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    pFVar16 = &local_98;
    if (param_6 != (FString *)0x0) {
      pFVar16 = param_6;
    }
    wVar4 = *pwVar10;
    while ((wVar4 != L'\0' && ((wVar4 == L' ' || (wVar4 == L'\t'))))) {
      pwVar15 = pwVar10 + 1;
      pwVar10 = pwVar10 + 1;
      wVar4 = *pwVar15;
    }
    pwVar10 = ReadQuotedStringFromBuffer(pwVar10,pFVar16);
    FVar14.Data = local_98.Data.AllocatorInstance.Data;
    if (pwVar10 != (wchar_t *)0x0) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      goto LAB_14176f131;
    }
  }
  else {
    if (param_4 != (Type *)0x0) {
      pwVar10 = SkipWhitespaceAndCharacter(pwVar10,L',');
      if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
      wVar4 = *pwVar10;
      while ((wVar4 != L'\0' && ((wVar4 == L' ' || (wVar4 == L'\t'))))) {
        pwVar2 = pwVar10 + 1;
        pwVar10 = pwVar10 + 1;
        wVar4 = *pwVar2;
      }
      pwVar10 = `TextStringificationUtil::ReadDateTimeFromBuffer'::__l2::<lambda_1>::operator()
                          (local_res10,pwVar10,param_4);
      if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
    }
    if (param_5 != (Type *)0x0) {
      pwVar10 = SkipWhitespaceAndCharacter(pwVar10,L',');
      if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
      wVar4 = *pwVar10;
      while ((wVar4 != L'\0' && ((wVar4 == L' ' || (wVar4 == L'\t'))))) {
        pwVar2 = pwVar10 + 1;
        pwVar10 = pwVar10 + 1;
        wVar4 = *pwVar2;
      }
      pwVar10 = `TextStringificationUtil::ReadDateTimeFromBuffer'::__l2::<lambda_1>::operator()
                          (local_res10,pwVar10,param_5);
      if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
    }
LAB_14176f131:
    if ((param_7->Data).ArrayNum < 2) {
      pwVar10 = SkipWhitespaceAndCharacter(pwVar10,L',');
      pwVar15 = pwVar17;
      if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
      wVar4 = *pwVar10;
      while ((wVar4 != L'\0' && ((wVar4 == L' ' || (wVar4 == L'\t'))))) {
        pwVar15 = pwVar10 + 1;
        pwVar10 = pwVar10 + 1;
        wVar4 = *pwVar15;
      }
      pwVar10 = ReadQuotedStringFromBuffer(pwVar10,param_7);
      pwVar15 = pwVar17;
      if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
    }
    pwVar10 = SkipWhitespaceAndCharacter(pwVar10,L',');
    pwVar15 = pwVar17;
    if (pwVar10 == (wchar_t *)0x0) goto LAB_14176f24e;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    wVar4 = *pwVar10;
    while ((wVar4 != L'\0' && ((wVar4 == L' ' || (wVar4 == L'\t'))))) {
      pwVar17 = pwVar10 + 1;
      pwVar10 = pwVar10 + 1;
      wVar4 = *pwVar17;
    }
    pwVar17 = ReadQuotedStringFromBuffer(pwVar10,&local_a8);
    FVar14.Data = local_a8.Data.AllocatorInstance.Data;
    if (pwVar17 != (wchar_t *)0x0) {
      if (local_a8.Data.ArrayNum < 2) {
        local_68.Object = (FCulture *)0x0;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TSharedPtr<FCulture,1>::operator=(param_8,&local_68);
        local_38.SharedReferenceCount.ReferenceController =
             local_68.SharedReferenceCount.ReferenceController;
      }
      else {
        this = FInternationalization::Get();
        pTVar12 = FInternationalization::GetCulture(this,&local_38,&local_a8);
        TSharedPtr<FCulture,1>::operator=(param_8,pTVar12);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      pwVar17 = SkipWhitespaceAndCharacter(pwVar17,L')');
      FVar14.Data = local_a8.Data.AllocatorInstance.Data;
      if (pwVar17 != (wchar_t *)0x0) {
        pwVar18 = pwVar17;
      }
    }
  }
  pwVar15 = pwVar18;
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
LAB_14176f24e:
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
    return pwVar15;
  }
  return pwVar15;
}

// ReadNumberFormattingOptionsFromBuffer @ 1417713c0

wchar_t * __cdecl
TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer
          (wchar_t *param_1,FNumberFormattingOptions *param_2)

{
  wchar_t wVar1;
  ForAnyElementType _Str2;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  code *local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  
  local_98 = local_res20;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>,wchar_t_const_*,wchar_t_const_*,bool_&>
             ::Call;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  do {
    if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&OptionMarker,L"SetAlwaysSign");
      atexit(`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l5::
             _dynamic_atexit_destructor_for__OptionMarker__);
      _Init_thread_footer(&::_TSS0);
    }
    if (*param_1 == L'.') {
      param_1 = param_1 + 1;
    }
    pwVar3 = ReadNumberFormattingOptionFromBuffer<bool>
                       (param_1,&OptionMarker,&param_2->AlwaysSign,
                        (TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,bool_&)> *)&local_a0);
    if (pwVar3 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    bVar7 = pwVar3 == param_1;
    if ((*piVar6 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FString::FString(&OptionMarker,L"SetUseGrouping");
      atexit(`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l15::
             _dynamic_atexit_destructor_for__OptionMarker__);
      _Init_thread_footer(&::_TSS1);
    }
    if (*pwVar3 == L'.') {
      pwVar3 = pwVar3 + 1;
    }
    local_88 = local_res20;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>,wchar_t_const_*,wchar_t_const_*,bool_&>
               ::Call;
    pwVar4 = ReadNumberFormattingOptionFromBuffer<bool>
                       (pwVar3,&OptionMarker,&param_2->UseGrouping,
                        (TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,bool_&)> *)&local_90);
    if (pwVar4 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    bVar8 = pwVar4 == pwVar3;
    if ((*piVar6 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FString::FString(&OptionMarker,L"SetRoundingMode");
      atexit(`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l25::
             _dynamic_atexit_destructor_for__OptionMarker__);
      _Init_thread_footer(&::_TSS2);
    }
    if (*pwVar4 == L'.') {
      pwVar4 = pwVar4 + 1;
    }
    iVar2 = OptionMarker.Data.ArrayNum + -1;
    _Str2.Data = OptionMarker.Data.AllocatorInstance.Data;
    if (OptionMarker.Data.ArrayNum == 0) {
      iVar2 = 0;
      _Str2.Data = (FScriptContainerElement *)L"";
    }
    iVar2 = wcsncmp(pwVar4,(wchar_t *)_Str2.Data,(longlong)iVar2);
    pwVar3 = pwVar4;
    if (iVar2 == 0) {
      iVar2 = OptionMarker.Data.ArrayNum + -1;
      if (OptionMarker.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      pwVar3 = pwVar4 + iVar2;
      wVar1 = pwVar4[iVar2];
      while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
        pwVar5 = pwVar3 + 1;
        pwVar3 = pwVar3 + 1;
        wVar1 = *pwVar5;
      }
      if (*pwVar3 != L'(') {
        return (wchar_t *)0x0;
      }
      pwVar5 = pwVar3 + 1;
      if (pwVar3 == (wchar_t *)0x0) {
        pwVar5 = (wchar_t *)0x0;
      }
      if (pwVar5 == (wchar_t *)0x0) {
        return (wchar_t *)0x0;
      }
      wVar1 = *pwVar5;
      while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
        pwVar3 = pwVar5 + 1;
        pwVar5 = pwVar5 + 1;
        wVar1 = *pwVar3;
      }
      pwVar3 = `TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_3>::
               operator()(local_a8,pwVar5,&param_2->RoundingMode);
      if (pwVar3 == (wchar_t *)0x0) {
        return (wchar_t *)0x0;
      }
      pwVar3 = SkipWhitespaceAndCharacter(pwVar3,L')');
      if (pwVar3 == (wchar_t *)0x0) {
        return (wchar_t *)0x0;
      }
    }
    if (pwVar3 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    bVar9 = pwVar3 == pwVar4;
    if ((*piVar6 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      ::FString::FString(&OptionMarker,L"SetMinimumIntegralDigits");
      atexit(`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l35::
             _dynamic_atexit_destructor_for__OptionMarker__);
      _Init_thread_footer(&::_TSS3);
    }
    if (*pwVar3 == L'.') {
      pwVar3 = pwVar3 + 1;
    }
    local_78 = local_res18;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_2>,wchar_t_const_*,wchar_t_const_*,int_&>
               ::Call;
    pwVar4 = ReadNumberFormattingOptionFromBuffer<int>
                       (pwVar3,&OptionMarker,&param_2->MinimumIntegralDigits,
                        (TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,int_&)> *)&local_80);
    if (pwVar4 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    bVar10 = pwVar4 == pwVar3;
    if ((*piVar6 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      ::FString::FString(&OptionMarker,L"SetMaximumIntegralDigits");
      atexit(`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l45::
             _dynamic_atexit_destructor_for__OptionMarker__);
      _Init_thread_footer(&::_TSS4);
    }
    if (*pwVar4 == L'.') {
      pwVar4 = pwVar4 + 1;
    }
    local_68 = local_res18;
    local_70 = UE::Core::Private::Function::
               TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_2>,wchar_t_const_*,wchar_t_const_*,int_&>
               ::Call;
    pwVar3 = ReadNumberFormattingOptionFromBuffer<int>
                       (pwVar4,&OptionMarker,&param_2->MaximumIntegralDigits,
                        (TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,int_&)> *)&local_70);
    if (pwVar3 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    bVar11 = pwVar3 == pwVar4;
    if ((*piVar6 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      ::FString::FString(&OptionMarker,L"SetMinimumFractionalDigits");
      atexit(`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l55::
             _dynamic_atexit_destructor_for__OptionMarker__);
      _Init_thread_footer(&::_TSS5);
    }
    if (*pwVar3 == L'.') {
      pwVar3 = pwVar3 + 1;
    }
    local_58 = local_res18;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_2>,wchar_t_const_*,wchar_t_const_*,int_&>
               ::Call;
    pwVar4 = ReadNumberFormattingOptionFromBuffer<int>
                       (pwVar3,&OptionMarker,&param_2->MinimumFractionalDigits,
                        (TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,int_&)> *)&local_60);
    if (pwVar4 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    bVar12 = pwVar4 == pwVar3;
    if ((*piVar6 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      ::FString::FString(&OptionMarker,L"SetMaximumFractionalDigits");
      atexit(`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l65::
             _dynamic_atexit_destructor_for__OptionMarker__);
      _Init_thread_footer(&::_TSS6);
    }
    if (*pwVar4 == L'.') {
      pwVar4 = pwVar4 + 1;
    }
    local_48 = local_res18;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_2>,wchar_t_const_*,wchar_t_const_*,int_&>
               ::Call;
    param_1 = ReadNumberFormattingOptionFromBuffer<int>
                        (pwVar4,&OptionMarker,&param_2->MaximumFractionalDigits,
                         (TFunctionRef<wchar_t_const_*___cdecl(wchar_t_const_*,int_&)> *)&local_50);
    if (param_1 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    if ((param_1 == pwVar4) && (bVar12 && (bVar11 && (bVar10 && (bVar9 && (bVar8 && bVar7)))))) {
      return param_1;
    }
  } while( true );
}

// ReadNumberFromBuffer @ 141771940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

wchar_t * __cdecl
TextStringificationUtil::ReadNumberFromBuffer(wchar_t *param_1,FFormatArgumentValue *param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  FString local_b8;
  FString local_a8;
  FFormatArgumentValue local_98;
  FFormatArgumentValue local_78;
  FFormatArgumentValue local_58;
  FFormatArgumentValue local_38;
  
  wVar3 = *param_1;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  pwVar4 = (wchar_t *)0x0;
  if (wVar3 != L'\0') {
    do {
      pwVar4 = wcschr(ValidNumericChars,wVar3);
      if (pwVar4 == (wchar_t *)0x0) break;
      wVar3 = *param_1;
      param_1 = param_1 + 1;
      ::FString::AppendChar(&local_b8,wVar3);
      wVar3 = *param_1;
    } while (wVar3 != L'\0');
    pwVar4 = (wchar_t *)(local_b8.Data._8_8_ & 0xffffffff);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  do {
    iVar9 = (int)pwVar4;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    if (iVar8 < 1) {
LAB_141771ad8:
      bVar2 = ::FString::IsNumeric(&local_b8);
      pwVar4 = (wchar_t *)0x0;
      if (bVar2) {
        pwVar4 = L"";
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_a8.Data.ArrayNum != 0) {
          FVar6.Data = local_a8.Data.AllocatorInstance.Data;
        }
        pwVar5 = wcschr((wchar_t *)FVar6.Data,L'f');
        if (pwVar5 == (wchar_t *)0x0) {
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar6.Data = local_a8.Data.AllocatorInstance.Data;
          }
          pwVar5 = wcschr((wchar_t *)FVar6.Data,L'u');
          if (pwVar5 == (wchar_t *)0x0) {
            FVar6.Data = (FScriptContainerElement *)L"";
            if (local_b8.Data.ArrayNum != 0) {
              FVar6.Data = local_b8.Data.AllocatorInstance.Data;
            }
            pwVar5 = wcschr((wchar_t *)FVar6.Data,L'.');
            if (pwVar5 == (wchar_t *)0x0) {
              if (local_b8.Data.ArrayNum != 0) {
                pwVar4 = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
              }
              local_38.field1_0x8.IntValue = _wtoi64(pwVar4);
              local_38.Type = Int;
              local_38.TextValue.field0_0x0.TypedValue.TextData.Reference =
                   (TRefCountPtr<ITextData>)(ITextData *)0x0;
              local_38.TextValue.field0_0x0.TypedValue.Flags = 0;
              FFormatArgumentValue::operator=(param_2,&local_38);
              uVar7 = local_38.TextValue.field0_0x0.TypedValue.TextData.Reference;
            }
            else {
              if (local_b8.Data.ArrayNum != 0) {
                pwVar4 = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
              }
              local_58.field1_0x8.DoubleValue = wcstod(pwVar4,(wchar_t **)0x0);
              local_58.Type = Double;
              local_58.TextValue.field0_0x0.TypedValue.TextData.Reference =
                   (TRefCountPtr<ITextData>)(ITextData *)0x0;
              local_58.TextValue.field0_0x0.TypedValue.Flags = 0;
              FFormatArgumentValue::operator=(param_2,&local_58);
              uVar7 = local_58.TextValue.field0_0x0.TypedValue.TextData.Reference;
            }
          }
          else {
            if (local_b8.Data.ArrayNum != 0) {
              pwVar4 = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
            }
            local_78.field1_0x8.UIntValue = _wcstoui64(pwVar4,(wchar_t **)0x0,0);
            local_78.Type = UInt;
            local_78.TextValue.field0_0x0.TypedValue.TextData.Reference =
                 (TRefCountPtr<ITextData>)(ITextData *)0x0;
            local_78.TextValue.field0_0x0.TypedValue.Flags = 0;
            FFormatArgumentValue::operator=(param_2,&local_78);
            uVar7 = local_78.TextValue.field0_0x0.TypedValue.TextData.Reference;
          }
        }
        else {
          local_98.Type = Float;
          if (local_b8.Data.ArrayNum != 0) {
            pwVar4 = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
          }
          local_98.TextValue.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_98.TextValue.field0_0x0.TypedValue.Flags = 0;
          dVar10 = _wtof(pwVar4);
          local_98.field1_0x8.FloatValue = (float)dVar10;
          FFormatArgumentValue::operator=(param_2,&local_98);
          uVar7 = local_98.TextValue.field0_0x0.TypedValue.TextData.Reference;
        }
        pwVar4 = param_1;
        if ((ITextData *)uVar7 != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)uVar7 + 0x10))();
        }
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      return pwVar4;
    }
    iVar8 = iVar9 + -2;
    if (iVar9 == 0) {
      iVar8 = -1;
    }
    if ((((iVar8 < 0) || (iVar9 == 0)) || (iVar9 + -1 <= iVar8)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pwVar4 = (wchar_t *)(*pcVar1)();
      return pwVar4;
    }
    pwVar4 = wcschr(SuffixNumericChars,
                    *(wchar_t *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar8 * 2));
    if (pwVar4 == (wchar_t *)0x0) goto LAB_141771ad8;
    iVar8 = local_b8.Data.ArrayNum + -2;
    if (local_b8.Data.ArrayNum == 0) {
      iVar8 = -1;
    }
    if (iVar8 < 0) {
code_r0x000141771a89:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pwVar4 = (wchar_t *)(*pcVar1)();
        return pwVar4;
      }
    }
    else {
      iVar9 = local_b8.Data.ArrayNum + -1;
      if (local_b8.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      if (iVar9 <= iVar8) goto code_r0x000141771a89;
    }
    ::FString::AppendChar
              (&local_a8,*(wchar_t *)(local_b8.Data.AllocatorInstance.Data + (longlong)iVar8 * 2));
    iVar8 = local_b8.Data.ArrayNum + -2;
    if (local_b8.Data.ArrayNum == 0) {
      iVar8 = -1;
    }
    ::FString::RemoveAt(&local_b8,iVar8,No);
    pwVar4 = (wchar_t *)(local_b8.Data._8_8_ & 0xffffffff);
  } while( true );
}

// ReadNumberOrPercentFromBuffer @ 141771c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

wchar_t * __cdecl
TextStringificationUtil::ReadNumberOrPercentFromBuffer
          (wchar_t *param_1,FString *param_2,FFormatArgumentValue *param_3,
          TOptional<FNumberFormattingOptions> *param_4,TSharedPtr<FCulture,1> *param_5)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TOptional<FNumberFormattingOptions> *pTVar9;
  wchar_t *pwVar10;
  FInternationalization *this;
  TSharedPtr<FCulture,1> *pTVar11;
  wchar_t *pwVar12;
  FString local_68;
  TSharedPtr<FCulture,1> local_58;
  TSharedPtr<FCulture,1> local_48;
  TOptional<FNumberFormattingOptions> local_38;
  
  iVar7 = (param_2->Data).ArrayNum;
  iVar8 = 0;
  if (iVar7 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar8 = iVar7 + -1;
  }
  iVar7 = wcsncmp(param_1,pwVar10,(longlong)iVar8);
  if (iVar7 != 0) {
    return (wchar_t *)0x0;
  }
  iVar8 = (param_2->Data).ArrayNum;
  iVar7 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  pwVar10 = param_1 + iVar7;
  iVar7 = wcsncmp(pwVar10,*CustomSuffix,7);
  if (iVar7 == 0) {
    pwVar10 = pwVar10 + 7;
  }
  else {
    iVar8 = wcsncmp(pwVar10,*GroupedSuffix,8);
    if (iVar8 == 0) {
      pwVar10 = pwVar10 + 8;
      pTVar9 = (TOptional<FNumberFormattingOptions> *)
               FNumberFormattingOptions::DefaultWithGrouping();
      if (pTVar9 != param_4) {
        bVar2 = (pTVar9->TypedValue).UseGrouping;
        bVar3 = (pTVar9->TypedValue).IndicateNearlyInteger;
        uVar4 = (pTVar9->TypedValue).field_0x3;
        EVar5 = (pTVar9->TypedValue).RoundingMode;
        iVar8 = (pTVar9->TypedValue).MinimumIntegralDigits;
        iVar6 = (pTVar9->TypedValue).MaximumIntegralDigits;
        (param_4->TypedValue).AlwaysSign = (pTVar9->TypedValue).AlwaysSign;
        (param_4->TypedValue).UseGrouping = bVar2;
        (param_4->TypedValue).IndicateNearlyInteger = bVar3;
        (param_4->TypedValue).field_0x3 = uVar4;
        (param_4->TypedValue).RoundingMode = EVar5;
        (param_4->TypedValue).MinimumIntegralDigits = iVar8;
        (param_4->TypedValue).MaximumIntegralDigits = iVar6;
        iVar8 = (pTVar9->TypedValue).MaximumFractionalDigits;
        (param_4->TypedValue).MinimumFractionalDigits = (pTVar9->TypedValue).MinimumFractionalDigits
        ;
        (param_4->TypedValue).MaximumFractionalDigits = iVar8;
        param_4->bIsSet = true;
      }
    }
    else {
      iVar8 = wcsncmp(pwVar10,*UngroupedSuffix,10);
      if (iVar8 == 0) {
        pwVar10 = pwVar10 + 10;
        pTVar9 = (TOptional<FNumberFormattingOptions> *)
                 FNumberFormattingOptions::DefaultNoGrouping();
        if (pTVar9 != param_4) {
          bVar2 = (pTVar9->TypedValue).UseGrouping;
          bVar3 = (pTVar9->TypedValue).IndicateNearlyInteger;
          uVar4 = (pTVar9->TypedValue).field_0x3;
          EVar5 = (pTVar9->TypedValue).RoundingMode;
          iVar8 = (pTVar9->TypedValue).MinimumIntegralDigits;
          iVar6 = (pTVar9->TypedValue).MaximumIntegralDigits;
          (param_4->TypedValue).AlwaysSign = (pTVar9->TypedValue).AlwaysSign;
          (param_4->TypedValue).UseGrouping = bVar2;
          (param_4->TypedValue).IndicateNearlyInteger = bVar3;
          (param_4->TypedValue).field_0x3 = uVar4;
          (param_4->TypedValue).RoundingMode = EVar5;
          (param_4->TypedValue).MinimumIntegralDigits = iVar8;
          (param_4->TypedValue).MaximumIntegralDigits = iVar6;
          iVar8 = (pTVar9->TypedValue).MaximumFractionalDigits;
          (param_4->TypedValue).MinimumFractionalDigits =
               (pTVar9->TypedValue).MinimumFractionalDigits;
          (param_4->TypedValue).MaximumFractionalDigits = iVar8;
          param_4->bIsSet = true;
        }
      }
      else if (param_4->bIsSet != false) {
        param_4->bIsSet = false;
      }
    }
  }
  wVar1 = *pwVar10;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar12 = pwVar10 + 1;
    pwVar10 = pwVar10 + 1;
    wVar1 = *pwVar12;
  }
  if (*pwVar10 != L'(') {
    return (wchar_t *)0x0;
  }
  pwVar12 = pwVar10 + 1;
  if (pwVar10 == (wchar_t *)0x0) {
    pwVar12 = (wchar_t *)0x0;
  }
  if (pwVar12 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  wVar1 = *pwVar12;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar10 = pwVar12 + 1;
    pwVar12 = pwVar12 + 1;
    wVar1 = *pwVar10;
  }
  pwVar10 = ReadNumberFromBuffer(pwVar12,param_3);
  if (pwVar10 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  if (iVar7 == 0) {
    pwVar10 = SkipWhitespaceAndCharacter(pwVar10,L',');
    if (pwVar10 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    local_38.TypedValue.RoundingMode = (ERoundingMode)___xmm_00000000000001440000000100000000;
    local_38.TypedValue.MinimumIntegralDigits =
         (int)((ulonglong)___xmm_00000000000001440000000100000000 >> 0x20);
    local_38.TypedValue.MaximumIntegralDigits = (int)_UNK_150676978;
    local_38.TypedValue.MinimumFractionalDigits = (int)((ulonglong)_UNK_150676978 >> 0x20);
    local_38.TypedValue.AlwaysSign = false;
    local_38.TypedValue.UseGrouping = true;
    local_38.TypedValue.IndicateNearlyInteger = false;
    local_38.TypedValue.MaximumFractionalDigits = 3;
    wVar1 = *pwVar10;
    while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
      pwVar12 = pwVar10 + 1;
      pwVar10 = pwVar10 + 1;
      wVar1 = *pwVar12;
    }
    pwVar10 = ReadNumberFormattingOptionsFromBuffer(pwVar10,&local_38.TypedValue);
    if (pwVar10 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    if (&local_38 != param_4) {
      (param_4->TypedValue).AlwaysSign = (bool)local_38.TypedValue.AlwaysSign;
      (param_4->TypedValue).UseGrouping = (bool)local_38.TypedValue.UseGrouping;
      (param_4->TypedValue).IndicateNearlyInteger = local_38.TypedValue.IndicateNearlyInteger;
      (param_4->TypedValue).field_0x3 = local_38.TypedValue._3_1_;
      (param_4->TypedValue).RoundingMode = local_38.TypedValue.RoundingMode;
      (param_4->TypedValue).MinimumIntegralDigits = local_38.TypedValue.MinimumIntegralDigits;
      (param_4->TypedValue).MaximumIntegralDigits = local_38.TypedValue.MaximumIntegralDigits;
      (param_4->TypedValue).MinimumFractionalDigits = local_38.TypedValue.MinimumFractionalDigits;
      (param_4->TypedValue).MaximumFractionalDigits = local_38.TypedValue.MaximumFractionalDigits;
      param_4->bIsSet = true;
    }
  }
  pwVar10 = SkipWhitespaceAndCharacter(pwVar10,L',');
  if (pwVar10 == (wchar_t *)0x0) {
    return (wchar_t *)0x0;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  wVar1 = *pwVar10;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar12 = pwVar10 + 1;
    pwVar10 = pwVar10 + 1;
    wVar1 = *pwVar12;
  }
  pwVar10 = ReadQuotedStringFromBuffer(pwVar10,&local_68);
  if (pwVar10 != (wchar_t *)0x0) {
    if (local_68.Data.ArrayNum < 2) {
      local_58.Object = (FCulture *)0x0;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TSharedPtr<FCulture,1>::operator=(param_5,&local_58);
      local_48.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
    }
    else {
      this = FInternationalization::Get();
      pTVar11 = FInternationalization::GetCulture(this,&local_48,&local_68);
      TSharedPtr<FCulture,1>::operator=(param_5,pTVar11);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pwVar10 = SkipWhitespaceAndCharacter(pwVar10,L')');
    if (pwVar10 != (wchar_t *)0x0) goto LAB_141771f5d;
  }
  pwVar10 = (wchar_t *)0x0;
LAB_141771f5d:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    return pwVar10;
  }
  return pwVar10;
}

// ReadQuotedStringFromBuffer @ 141771f90

wchar_t * __cdecl
TextStringificationUtil::ReadQuotedStringFromBuffer(wchar_t *param_1,FString *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int local_res18 [4];
  
  iVar3 = wcsncmp(param_1,*TextMarker,4);
  if (iVar3 == 0) {
    pwVar5 = param_1 + 4;
    wVar1 = param_1[4];
    while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
      pwVar4 = pwVar5 + 1;
      pwVar5 = pwVar5 + 1;
      wVar1 = *pwVar4;
    }
    if (*pwVar5 != L'(') {
      return (wchar_t *)0x0;
    }
    param_1 = pwVar5 + 1;
    if (pwVar5 == (wchar_t *)0x0) {
      param_1 = (wchar_t *)0x0;
    }
    if (param_1 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
  }
  local_res18[0] = 0;
  bVar2 = FParse::QuotedString(param_1,param_2,local_res18);
  if (bVar2) {
    pwVar5 = param_1 + local_res18[0];
    if (iVar3 != 0) {
      return pwVar5;
    }
    wVar1 = *pwVar5;
    while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
      pwVar4 = pwVar5 + 1;
      pwVar5 = pwVar5 + 1;
      wVar1 = *pwVar4;
    }
    if (*pwVar5 == L')') {
      pwVar4 = pwVar5 + 1;
      if (pwVar5 == (wchar_t *)0x0) {
        pwVar4 = (wchar_t *)0x0;
      }
      if (pwVar4 != (wchar_t *)0x0) {
        return pwVar4;
      }
    }
  }
  return (wchar_t *)0x0;
}

// SaveKeyString @ 141777d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl TextKeyUtil::SaveKeyString(FArchive *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int iVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_108 [32];
  uint local_e8;
  uint local_e4 [3];
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (((param_1->field_0x28 & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                         ,0x2a0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((char)param_1->field_0x28 < '\0') {
    pwVar13 = (wchar_t *)0x0;
    if (param_2 == (wchar_t *)0x0) {
      iVar11 = 0;
    }
    else {
      sVar7 = wcslen(param_2);
      iVar11 = (int)sVar7;
      pwVar13 = param_2;
    }
LAB_141777f55:
    plVar3 = *(longlong **)&param_1->field_0x8;
    iVar11 = iVar11 + 1;
    local_e4[0] = -iVar11;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_e4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_e4);
      }
    }
    else {
      local_e4[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    if (iVar11 != 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pwVar13,(longlong)iVar11 * 2);
    }
  }
  else {
    wVar2 = *param_2;
    pwVar13 = param_2;
    while (wVar2 != L'\0') {
      if (0x7f < (ushort)wVar2) {
        sVar7 = wcslen(param_2);
        iVar11 = (int)sVar7;
        pwVar13 = param_2;
        goto LAB_141777f55;
      }
      pwVar1 = pwVar13 + 1;
      pwVar13 = pwVar13 + 1;
      wVar2 = *pwVar1;
    }
    sVar7 = wcslen(param_2);
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_e8 = (int)sVar7 + 1;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_e8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_e8);
      }
    }
    else {
      local_e8 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    lVar8 = (longlong)(int)local_e8;
    if (local_e8 != 0) {
      lVar12 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      iVar11 = 0;
      pcVar4 = *(code **)(*(longlong *)param_1 + 0x188);
      local_48 = local_e8;
      if ((0 < (int)local_e8) && (param_2[lVar8 + -1] == L'\0')) {
        iVar11 = 1;
        local_48 = local_e8 - 1;
      }
      uVar14 = iVar11 + local_48;
      if (0x80 < uVar14) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar14,1);
      }
      FVar10.Data = local_d8;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_58.Data;
      }
      bVar5 = false;
      lVar15 = (longlong)(int)uVar14;
      lVar9 = lVar12;
      local_50 = FVar10.Data;
      if (0 < (int)uVar14) {
        do {
          wVar2 = param_2[lVar9];
          FVar10.Data[lVar9] = SUB21(wVar2,0);
          lVar9 = lVar9 + 1;
          bVar5 = (bool)(bVar5 | 0x7f < (ushort)wVar2);
        } while (lVar9 < lVar15);
        if (bVar5) {
          do {
            if (0x7f < (ushort)param_2[lVar12]) {
              FVar10.Data[lVar12] = (FScriptContainerElement)0x3f;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < lVar15);
        }
      }
      if ((FVar10.Data + lVar15 == (FScriptContainerElement *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                             ,0x25,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      (*pcVar4)(param_1,local_50,lVar8);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  return true;
}

// SkipInsensitiveMarker @ 14177e850

wchar_t * __cdecl
TextStringificationUtil::SkipInsensitiveMarker(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Strnicmp(param_1,param_2,(longlong)param_3);
  if (iVar1 != 0) {
    return (wchar_t *)0x0;
  }
  return param_1 + param_3;
}

// SkipMarker @ 14177e890

wchar_t * __cdecl TextStringificationUtil::SkipMarker(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,param_2,(longlong)param_3);
  if (iVar1 != 0) {
    return (wchar_t *)0x0;
  }
  return param_1 + param_3;
}

// SkipWhitespace @ 14177e8d0

wchar_t * __cdecl TextStringificationUtil::SkipWhitespace(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  wVar2 = *param_1;
  while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
    pwVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    wVar2 = *pwVar1;
  }
  return param_1;
}

// SkipWhitespaceAndCharacter @ 14177e900

wchar_t * __cdecl
TextStringificationUtil::SkipWhitespaceAndCharacter(wchar_t *param_1,wchar_t param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  wVar1 = *param_1;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    wVar1 = *pwVar3;
  }
  pwVar3 = (wchar_t *)0x0;
  if (*param_1 == param_2) {
    pwVar3 = param_1;
  }
  pwVar2 = pwVar3 + 1;
  if (pwVar3 == (wchar_t *)0x0) {
    pwVar2 = (wchar_t *)0x0;
  }
  return pwVar2;
}

// SkipWhitespaceToCharacter @ 14177e950

wchar_t * __cdecl
TextStringificationUtil::SkipWhitespaceToCharacter(wchar_t *param_1,wchar_t param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  wVar2 = *param_1;
  while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
    pwVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    wVar2 = *pwVar1;
  }
  if (*param_1 != param_2) {
    param_1 = (wchar_t *)0x0;
  }
  return param_1;
}

// StripPackageNamespace @ 14177ec60

FString * __cdecl
TextNamespaceUtil::StripPackageNamespace(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  StripPackageNamespaceInline(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StripPackageNamespaceInline @ 14177ec90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl TextNamespaceUtil::StripPackageNamespaceInline(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  iVar6 = (param_1->Data).ArrayNum;
  iVar4 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar4 = 0;
  }
  iVar6 = iVar4 + -1;
  if (0 < iVar4) {
    if (((iVar6 < 0) || (iVar4 <= iVar6)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if ((*(short *)(pFVar1 + ((longlong)iVar4 + -1) * 2) == 0x5d) &&
       (pFVar5 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2, pFVar5 != pFVar1)) {
      while (pFVar5 = pFVar5 + -2, *(short *)pFVar5 != 0x5b) {
        if (pFVar5 == pFVar1) {
          return;
        }
      }
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 1);
      if (iVar4 != -1) {
        ::FString::RemoveAt(param_1,iVar4,(iVar6 - iVar4) + 1,No);
        ::FString::TrimEndInline(param_1);
      }
    }
  }
  return;
}

// WriteDateTimeToBuffer @ 141783ef0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
TextStringificationUtil::WriteDateTimeToBuffer
          (FString *param_1,wchar_t *param_2,FDateTime *param_3,Type *param_4,Type *param_5,
          FString *param_6,FString *param_7,TSharedPtr<FCulture,1> *param_8,bool param_9)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TSharedPtr<FCulture,1> *pTVar4;
  int iVar5;
  size_t sVar6;
  FDateTime *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  wchar_t (*_Str) [7];
  bool bVar10;
  FDateTime *local_res18 [2];
  FFormatArgumentValue local_68;
  FString local_48;
  
  if ((param_4 == (Type *)0x0) || (*param_4 != Custom)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_res18[0] = param_3;
  ::FString::FString((FString *)&local_68,L"Etc/Unknown");
  pFVar8 = param_7;
  fVar1 = (float)(param_7->Data).ArrayNum;
  if (fVar1 == local_68.field1_0x8.FloatValue) {
    if ((int)fVar1 < 2) {
      bVar10 = true;
    }
    else {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_7->Data).AllocatorInstance.Data,(wchar_t *)local_68._0_8_
                        );
      bVar10 = iVar5 == 0;
    }
  }
  else {
    bVar10 = (int)fVar1 + (int)local_68.field1_0x8.FloatValue == 1;
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (bVar3) {
    sVar6 = wcslen(*CustomSuffix);
    ::FString::AppendChars(&local_48,*CustomSuffix,(int)sVar6);
  }
  _Str = (wchar_t (*) [7])UtcSuffix;
  if (bVar10) {
    _Str = LocalSuffix;
  }
  sVar6 = wcslen(*_Str);
  ::FString::AppendChars(&local_48,*_Str,(int)sVar6);
  sVar6 = wcslen(param_2);
  ::FString::AppendChars(param_1,param_2,(int)sVar6);
  iVar5 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
  ::FString::AppendChars(param_1,L"(",1);
  pFVar7 = FDateTime::FDateTime((FDateTime *)&param_7,0x7b2,1,1,0,0,0,0);
  lVar9 = local_res18[0]->Ticks - pFVar7->Ticks;
  local_68._0_8_ = (ulonglong)(uint)local_68._4_4_ << 0x20;
  lVar9 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar9),8) + lVar9;
  local_68.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_68.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_68.field1_0x8.IntValue = (lVar9 >> 0x17) - (lVar9 >> 0x3f);
  FFormatArgumentValue::ToExportedString(&local_68,param_1,param_9);
  if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  if (bVar3) {
    ::FString::AppendChars(param_1,L", \"",3);
    if (param_6 == (FString *)0x0) {
      ::FString::AppendChars(param_1,(wchar_t *)0x0,0);
    }
    else {
      iVar5 = (param_6->Data).ArrayNum;
      pFVar2 = (param_6->Data).AllocatorInstance.Data;
      local_68._0_8_ = (FScriptContainerElement *)0x0;
      local_68.field1_0x8.IntValue._0_4_ = iVar5;
      if (iVar5 == 0) {
        local_68.field1_0x8.IntValue = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)&local_68,iVar5,
                   (int *)((longlong)&local_68.field1_0x8 + 4));
        memcpy((void *)local_68._0_8_,pFVar2,(longlong)iVar5 * 2);
      }
      ::FString::ReplaceCharWithEscapedCharInline
                ((FString *)&local_68,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
      iVar5 = (int)local_68.field1_0x8.FloatValue + -1;
      if (local_68.field1_0x8.FloatValue == 0.0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_68._0_8_,iVar5);
      if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
    }
    ::FString::AppendChars(param_1,L"\"",1);
  }
  else {
    if (param_4 != (Type *)0x0) {
      ::FString::AppendChars(param_1,L", ",2);
      `TextStringificationUtil::WriteDateTimeToBuffer'::__l2::<lambda_1>::operator()
                (local_res18,param_1,param_4);
    }
    if (param_5 != (Type *)0x0) {
      ::FString::AppendChars(param_1,L", ",2);
      `TextStringificationUtil::WriteDateTimeToBuffer'::__l2::<lambda_1>::operator()
                (local_res18,param_1,param_5);
    }
  }
  if (!bVar10) {
    ::FString::AppendChars(param_1,L", \"",3);
    iVar5 = (pFVar8->Data).ArrayNum;
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68.field1_0x8.IntValue._0_4_ = iVar5;
    if (iVar5 == 0) {
      local_68.field1_0x8.IntValue = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)&local_68,iVar5,
                 (int *)((longlong)&local_68.field1_0x8 + 4));
      memcpy((void *)local_68._0_8_,pFVar2,(longlong)iVar5 * 2);
    }
    ::FString::ReplaceCharWithEscapedCharInline
              ((FString *)&local_68,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    iVar5 = (int)local_68.field1_0x8.FloatValue + -1;
    if (local_68.field1_0x8.FloatValue == 0.0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_68._0_8_,iVar5);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
    ::FString::AppendChars(param_1,L"\"",1);
  }
  ::FString::AppendChars(param_1,L", \"",3);
  pTVar4 = param_8;
  if (param_8->Object != (FCulture *)0x0) {
    pFVar8 = FCulture::GetName(param_8->Object);
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar8->Data).ArrayNum;
    pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
    local_68.field1_0x8.IntValue._0_4_ = iVar5;
    if (iVar5 == 0) {
      local_68.field1_0x8.IntValue = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,0,(ForAnyElementType *)&local_68,iVar5,
                 (int *)((longlong)&local_68.field1_0x8 + 4));
      memcpy((void *)local_68._0_8_,pFVar2,(longlong)iVar5 * 2);
    }
    ::FString::ReplaceCharWithEscapedCharInline
              ((FString *)&local_68,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    iVar5 = (int)local_68.field1_0x8.FloatValue + -1;
    if (local_68.field1_0x8.FloatValue == 0.0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_68._0_8_,iVar5);
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  ::FString::AppendChars(param_1,L"\")",2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar4->SharedReferenceCount).ReferenceController);
  return;
}

// WriteNumberFormattingOptionsToBuffer @ 141784380

void __cdecl
TextStringificationUtil::WriteNumberFormattingOptionsToBuffer
          (FString *param_1,FNumberFormattingOptions *param_2)

{
  wchar_t *pwVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 local_res10 [8];
  FString local_38;
  
  piVar2 = &(param_1->Data).ArrayNum;
  pwVar4 = L"true";
  if (param_2->AlwaysSign != DefaultOptions.AlwaysSign) {
    if (1 < *piVar2) {
      ::FString::AppendChar(param_1,L'.');
    }
    ::FString::AppendChars(param_1,L"SetAlwaysSign",0xd);
    ::FString::AppendChar(param_1,L'(');
    pwVar1 = L"true";
    if (param_2->AlwaysSign == false) {
      pwVar1 = L"false";
    }
    ::FString::FString(&local_38,pwVar1);
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L')');
  }
  if (param_2->UseGrouping != DefaultOptions.UseGrouping) {
    if (1 < *piVar2) {
      ::FString::AppendChar(param_1,L'.');
    }
    ::FString::AppendChars(param_1,L"SetUseGrouping",0xe);
    ::FString::AppendChar(param_1,L'(');
    if (param_2->UseGrouping == false) {
      pwVar4 = L"false";
    }
    ::FString::FString(&local_38,pwVar4);
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L')');
  }
  piVar2 = &(param_1->Data).ArrayNum;
  if (param_2->RoundingMode != DefaultOptions.RoundingMode) {
    if (1 < *piVar2) {
      ::FString::AppendChar(param_1,L'.');
    }
    ::FString::AppendChars(param_1,L"SetRoundingMode",0xf);
    ::FString::AppendChar(param_1,L'(');
    `TextStringificationUtil::WriteNumberFormattingOptionsToBuffer'::__l2::<lambda_3>::operator()
              (local_res10,param_1,&param_2->RoundingMode);
    ::FString::AppendChar(param_1,L')');
  }
  if (param_2->MinimumIntegralDigits != DefaultOptions.MinimumIntegralDigits) {
    if (1 < *piVar2) {
      ::FString::AppendChar(param_1,L'.');
    }
    ::FString::AppendChars(param_1,L"SetMinimumIntegralDigits",0x18);
    ::FString::AppendChar(param_1,L'(');
    ::FString::PrintfImpl(&local_38,L"%d");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L')');
  }
  if (param_2->MaximumIntegralDigits != DefaultOptions.MaximumIntegralDigits) {
    if (1 < (param_1->Data).ArrayNum) {
      ::FString::AppendChar(param_1,L'.');
    }
    ::FString::AppendChars(param_1,L"SetMaximumIntegralDigits",0x18);
    ::FString::AppendChar(param_1,L'(');
    ::FString::PrintfImpl(&local_38,L"%d");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L')');
  }
  if (param_2->MinimumFractionalDigits != DefaultOptions.MinimumFractionalDigits) {
    if (1 < (param_1->Data).ArrayNum) {
      ::FString::AppendChar(param_1,L'.');
    }
    ::FString::AppendChars(param_1,L"SetMinimumFractionalDigits",0x1a);
    ::FString::AppendChar(param_1,L'(');
    ::FString::PrintfImpl(&local_38,L"%d");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L')');
  }
  if (param_2->MaximumFractionalDigits != DefaultOptions.MaximumFractionalDigits) {
    if (1 < (param_1->Data).ArrayNum) {
      ::FString::AppendChar(param_1,L'.');
    }
    ::FString::AppendChars(param_1,L"SetMaximumFractionalDigits",0x1a);
    ::FString::AppendChar(param_1,L'(');
    ::FString::PrintfImpl(&local_38,L"%d");
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L')');
  }
  return;
}

// WriteNumberOrPercentToBuffer @ 1417847a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl
TextStringificationUtil::WriteNumberOrPercentToBuffer
          (FString *param_1,wchar_t *param_2,FFormatArgumentValue *param_3,
          TOptional<FNumberFormattingOptions> *param_4,TSharedPtr<FCulture,1> *param_5,bool param_6)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNumberFormattingOptions *pFVar4;
  size_t sVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  wchar_t (*pawVar8) [11];
  longlong lVar9;
  int iVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (param_4->bIsSet != false) {
    pFVar4 = FNumberFormattingOptions::DefaultWithGrouping();
    if ((((((param_4->TypedValue).AlwaysSign != pFVar4->AlwaysSign) ||
          ((param_4->TypedValue).UseGrouping != pFVar4->UseGrouping)) ||
         ((param_4->TypedValue).RoundingMode != pFVar4->RoundingMode)) ||
        (((param_4->TypedValue).MinimumIntegralDigits != pFVar4->MinimumIntegralDigits ||
         ((param_4->TypedValue).MaximumIntegralDigits != pFVar4->MaximumIntegralDigits)))) ||
       (((param_4->TypedValue).MinimumFractionalDigits != pFVar4->MinimumFractionalDigits ||
        (pawVar8 = (wchar_t (*) [11])GroupedSuffix,
        (param_4->TypedValue).MaximumFractionalDigits != pFVar4->MaximumFractionalDigits)))) {
      if ((param_4->bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FNumberFormattingOptions::DefaultNoGrouping();
      if (((((param_4->TypedValue).AlwaysSign != pFVar4->AlwaysSign) ||
           ((param_4->TypedValue).UseGrouping != pFVar4->UseGrouping)) ||
          ((param_4->TypedValue).RoundingMode != pFVar4->RoundingMode)) ||
         ((((param_4->TypedValue).MinimumIntegralDigits != pFVar4->MinimumIntegralDigits ||
           ((param_4->TypedValue).MaximumIntegralDigits != pFVar4->MaximumIntegralDigits)) ||
          (((param_4->TypedValue).MinimumFractionalDigits != pFVar4->MinimumFractionalDigits ||
           (pawVar8 = UngroupedSuffix,
           (param_4->TypedValue).MaximumFractionalDigits != pFVar4->MaximumFractionalDigits)))))) {
        if ((param_4->bIsSet == false) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        WriteNumberFormattingOptionsToBuffer(&local_28,&param_4->TypedValue);
        pawVar8 = (wchar_t (*) [11])CustomSuffix;
        if (local_28.Data.ArrayNum < 2) goto LAB_1417848f3;
      }
    }
    ::FString::operator=(&local_48,*pawVar8);
  }
LAB_1417848f3:
  sVar5 = wcslen(param_2);
  ::FString::AppendChars(param_1,param_2,(int)sVar5);
  iVar10 = 0;
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = iVar10;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  ::FString::AppendChars(param_1,L"(",1);
  FFormatArgumentValue::ToExportedString(param_3,param_1,param_6);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,*CustomSuffix);
  if (iVar3 == 0) {
    ::FString::AppendChars(param_1,L", ",2);
    iVar3 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = iVar10;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar3);
  }
  ::FString::AppendChars(param_1,L", \"",3);
  if (param_5->Object != (FCulture *)0x0) {
    pFVar6 = FCulture::GetName(param_5->Object);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    lVar9 = (longlong)local_38.Data.ArrayNum;
    _Src = (pFVar6->Data).AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
    }
    ::FString::ReplaceCharWithEscapedCharInline
              (&local_38,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = iVar10;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(param_1,L"\")",2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return;
}

// WriteTextFormatToBuffer @ 141784aa0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
TextStringificationUtil::WriteTextFormatToBuffer
          (FString *param_1,FString *param_2,FTextFormat *param_3,bool param_4,
          TFunctionRef<void___cdecl(TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>)>
          *param_5)

{
  int iVar1;
  FText *pFVar2;
  int iVar3;
  FString *local_28;
  undefined1 local_20;
  undefined1 local_18 [16];
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar3);
  ::FString::AppendChars(param_1,L"(",1);
  pFVar2 = FTextFormat::GetSourceText(param_3,(FText *)local_18);
  FTextStringHelper::WriteToBuffer(param_1,pFVar2,true,param_4);
  if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
  }
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TextStringificationUtil::WriteTextFormatToBuffer'::__l2::<lambda_1>,void,FString_const_*,FFormatArgumentValue_const_&>
       ::Call;
  local_28 = param_1;
  local_20 = param_4;
  (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_18);
  ::FString::AppendChars(param_1,L")",1);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAlwaysLoadNativeLocalizationDataDuringInitialization'' @ 15033da50

void __cdecl
TextLocalizationManager::
_dynamic_atexit_destructor_for__CVarAlwaysLoadNativeLocalizationDataDuringInitialization__(void)

{
  CVarAlwaysLoadNativeLocalizationDataDuringInitialization._0_8_ = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAlwaysLoadNativeLocalizationDataDuringInitialization);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncLoadLocalizationData'' @ 15033da70

void __cdecl
TextLocalizationManager::_dynamic_atexit_destructor_for__CVarAsyncLoadLocalizationData__(void)

{
  CVarAsyncLoadLocalizationData._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAsyncLoadLocalizationData);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAsyncLoadLocalizationDataOnLanguageChange'' @ 15033da90

void __cdecl
TextLocalizationManager::
_dynamic_atexit_destructor_for__CVarAsyncLoadLocalizationDataOnLanguageChange__(void)

{
  CVarAsyncLoadLocalizationDataOnLanguageChange._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAsyncLoadLocalizationDataOnLanguageChange);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisplayStringSupport'' @ 15033dab0

void __cdecl
TextLocalizationManager::_dynamic_atexit_destructor_for__CVarDisplayStringSupport__(void)

{
  CVarDisplayStringSupport._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisplayStringSupport);
  return;
}

// `dynamic_atexit_destructor_for_'CmdDumpLiveTable'' @ 15033dad0

void __cdecl TextLocalizationManager::_dynamic_atexit_destructor_for__CmdDumpLiveTable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdDumpLiveTable);
  return;
}

// `dynamic_atexit_destructor_for_'DateTimeStyleMarker'' @ 15033daf0

void __cdecl
``TextStringificationUtil::ReadDateTimeFromBuffer'::__l2::<lambda_1>::operator()'::__l2::
_dynamic_atexit_destructor_for__DateTimeStyleMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DateTimeStyleMarker.Data.AllocatorInstance.Data;
  if (DateTimeStyleMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DateTimeStyleMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DefaultFormatPatternDefinition'' @ 15033db10

void __cdecl
`FTextFormatPatternDefinition::GetDefault'::__l2::
_dynamic_atexit_destructor_for__DefaultFormatPatternDefinition__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (DefaultFormatPatternDefinition.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'DisabledLocalizationTargets'' @ 15033db30

void __cdecl
`TextLocalizationResourceUtil::GetDisabledLocalizationTargets'::__l2::
_dynamic_atexit_destructor_for__DisabledLocalizationTargets__(void)

{
  DestructItems<FString,int>
            ((FString *)DisabledLocalizationTargets.AllocatorInstance.Data,
             DisabledLocalizationTargets.ArrayNum);
  if (DisabledLocalizationTargets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DisabledLocalizationTargets.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyInstance'' @ 15033db70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
`FTextFormatData::GetSharedEmptyInstance'::__l2::_dynamic_atexit_destructor_for__EmptyInstance__
          (void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (EmptyInstance.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15033db90

void __cdecl
``FTextLocalizationManager::FindDisplayString'::__l2::<lambda_1>::operator()'::__l2::
_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15033dbb0

void __cdecl
``FTextLocalizationManager::GetDisplayString'::__l2::<lambda_1>::operator()'::__l2::
_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FewString'' @ 15033dbd0

void __cdecl
`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
_dynamic_atexit_destructor_for__FewString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FewString.InternalString.Data.AllocatorInstance.Data;
  if (FewString.InternalString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FewString.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Instance'' @ 15033dbf0

void __cdecl `FStringTableRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Instance.LoggedMissingEntriesCS);
  ::Instance.LoggedMissingEntries._72_4_ = 0;
  if (::Instance.LoggedMissingEntries._64_8_ != 0) {
    FMemory::Free((void *)::Instance.LoggedMissingEntries._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance.LoggedMissingEntries);
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Instance.RegisteredStringTablesCS);
  ::Instance.RegisteredStringTables._72_4_ = 0;
  if (::Instance.RegisteredStringTables._64_8_ != 0) {
    FMemory::Free((void *)::Instance.RegisteredStringTables._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStringTable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStringTable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStringTable,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15033dc70

void __cdecl `FTextGeneratorRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  ::Instance.TextGeneratorFactoryMap._72_4_ = 0;
  if (::Instance.TextGeneratorFactoryMap._64_8_ != 0) {
    FMemory::Free((void *)::Instance.TextGeneratorFactoryMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Instance.TextGeneratorFactoryMap);
                    /* WARNING: Could not recover jumptable at 0x00015033dca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogStringTable'' @ 15033dcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStringTable__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStringTable);
  return;
}

// `dynamic_atexit_destructor_for_'LogText'' @ 15033dce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogText__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogText);
  return;
}

// `dynamic_atexit_destructor_for_'LogTextFormatter'' @ 15033dd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTextFormatter__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTextFormatter);
  return;
}

// `dynamic_atexit_destructor_for_'LogTextHistory'' @ 15033dd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTextHistory__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTextHistory);
  return;
}

// `dynamic_atexit_destructor_for_'LogTextKey'' @ 15033dd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTextKey__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTextKey);
  return;
}

// `dynamic_atexit_destructor_for_'LogTextLocalizationManager'' @ 15033dd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTextLocalizationManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTextLocalizationManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogTextLocalizationResource'' @ 15033dd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTextLocalizationResource__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTextLocalizationResource);
  return;
}

// `dynamic_atexit_destructor_for_'ManyString'' @ 15033dda0

void __cdecl
`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
_dynamic_atexit_destructor_for__ManyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ManyString.InternalString.Data.AllocatorInstance.Data;
  if (ManyString.InternalString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ManyString.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'MissingSourceString'' @ 15033ddc0

void __cdecl
`FStringTableEntry::GetPlaceholderSourceString'::__l2::
_dynamic_atexit_destructor_for__MissingSourceString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MissingSourceString.Data.AllocatorInstance.Data;
  if (MissingSourceString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (MissingSourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'NativeEngineCultureName'' @ 15033dde0

void __cdecl
TextLocalizationResourceUtil::_dynamic_atexit_destructor_for__NativeEngineCultureName__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
  if ((NativeEngineCultureName.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    if (NativeEngineCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
    }
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'NativeProjectCultureName'' @ 15033de00

void __cdecl
TextLocalizationResourceUtil::_dynamic_atexit_destructor_for__NativeProjectCultureName__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
  if ((NativeProjectCultureName.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    if (NativeProjectCultureName.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
    }
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OneString'' @ 15033de20

void __cdecl
`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
_dynamic_atexit_destructor_for__OneString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OneString.InternalString.Data.AllocatorInstance.Data;
  if (OneString.InternalString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OneString.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OptionMarker'' @ 15033de40

void __cdecl
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l5::
_dynamic_atexit_destructor_for__OptionMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OptionMarker.Data.AllocatorInstance.Data;
  if (OptionMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OptionMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OptionMarker'' @ 15033de60

void __cdecl
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l25::
_dynamic_atexit_destructor_for__OptionMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OptionMarker.Data.AllocatorInstance.Data;
  if (OptionMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OptionMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OptionMarker'' @ 15033de80

void __cdecl
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l35::
_dynamic_atexit_destructor_for__OptionMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OptionMarker.Data.AllocatorInstance.Data;
  if (OptionMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OptionMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OptionMarker'' @ 15033dea0

void __cdecl
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l45::
_dynamic_atexit_destructor_for__OptionMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OptionMarker.Data.AllocatorInstance.Data;
  if (OptionMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OptionMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OptionMarker'' @ 15033dec0

void __cdecl
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l55::
_dynamic_atexit_destructor_for__OptionMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OptionMarker.Data.AllocatorInstance.Data;
  if (OptionMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OptionMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OptionMarker'' @ 15033dee0

void __cdecl
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l65::
_dynamic_atexit_destructor_for__OptionMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OptionMarker.Data.AllocatorInstance.Data;
  if (OptionMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OptionMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OptionMarker'' @ 15033df00

void __cdecl
`TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l15::
_dynamic_atexit_destructor_for__OptionMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OptionMarker.Data.AllocatorInstance.Data;
  if (OptionMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OptionMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'OtherString'' @ 15033df20

void __cdecl
`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
_dynamic_atexit_destructor_for__OtherString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OtherString.InternalString.Data.AllocatorInstance.Data;
  if (OtherString.InternalString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OtherString.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PlatformLocalizationFolderName'' @ 15033df40

void __cdecl
`FLocalizationResourceTextSource::LoadLocalizedResourcesFromPaths'::__l2::
_dynamic_atexit_destructor_for__PlatformLocalizationFolderName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlatformLocalizationFolderName.Data.AllocatorInstance.Data;
  if (PlatformLocalizationFolderName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (PlatformLocalizationFolderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'PlatformName'' @ 15033df60

void __cdecl
`FLocalizationResourceTextSource::LoadLocalizedResourcesFromPaths'::__l2::
_dynamic_atexit_destructor_for__PlatformName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlatformName.Data.AllocatorInstance.Data;
  if (PlatformName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlatformName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RoundingModeMarker'' @ 15033df80

void __cdecl
``TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_3>::operator()'::
__l2::_dynamic_atexit_destructor_for__RoundingModeMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RoundingModeMarker.Data.AllocatorInstance.Data;
  if (RoundingModeMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RoundingModeMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SetDisplayString'' @ 15033dfa0

void __cdecl TextLocalizationManager::_dynamic_atexit_destructor_for__SetDisplayString__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&SetDisplayString);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033dfc0

void __cdecl
`TLazySingleton<FTextCache>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  if (DAT_154eb5db0 !=
      (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
       *)0x0) {
    TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
    ::
    ~TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
              (DAT_154eb5db0);
    DAT_154eb5db0 =
         (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
          *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033dff0

void __cdecl
`TLazySingleton<FTextKeyState>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  TLazySingleton<FTextKeyState>::Reset
            ((TLazySingleton<FTextKeyState> *)
             &`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15033e010

void __cdecl
`TLazySingleton<FTextLocalizationManager>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  if (DAT_154eb5200 != (FTextLocalizationManager *)0x0) {
    FTextLocalizationManager::~FTextLocalizationManager(DAT_154eb5200);
    DAT_154eb5200 = (FTextLocalizationManager *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticEmptyText'' @ 15033e040

void __cdecl `FText::GetEmpty'::__l2::_dynamic_atexit_destructor_for__StaticEmptyText__(void)

{
  if (StaticEmptyText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015033e04f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*StaticEmptyText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TableIdRedirects'' @ 15033e060

void __cdecl StringTableRedirects::_dynamic_atexit_destructor_for__TableIdRedirects__(void)

{
  TableIdRedirects._72_4_ = 0;
  if (TableIdRedirects._64_8_ != 0) {
    FMemory::Free((void *)TableIdRedirects._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TableIdRedirects);
  return;
}

// `dynamic_atexit_destructor_for_'TableKeyRedirects'' @ 15033e0a0

void __cdecl StringTableRedirects::_dynamic_atexit_destructor_for__TableKeyRedirects__(void)

{
  TableKeyRedirects._72_4_ = 0;
  if (TableKeyRedirects._64_8_ != 0) {
    FMemory::Free((void *)TableKeyRedirects._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TableKeyRedirects);
  return;
}

// `dynamic_atexit_destructor_for_'TextFormatter'' @ 15033e0e0

void __cdecl `FTextFormatter::Get'::__l2::_dynamic_atexit_destructor_for__TextFormatter__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&TextFormatter.TextArgumentModifiersRW);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&TextFormatter.TextArgumentModifiersRW);
  }
  DestructItems<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>,int>
            ((TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,1>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>
              *)TextFormatter.TextArgumentModifiers.Pairs.AllocatorInstance.Data,
             TextFormatter.TextArgumentModifiers.Pairs.ArrayNum);
  if (TextFormatter.TextArgumentModifiers.Pairs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(TextFormatter.TextArgumentModifiers.Pairs.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TextGenderMarker'' @ 15033e160

void __cdecl
`FFormatArgumentValue::FromExportedString'::__l3::_dynamic_atexit_destructor_for__TextGenderMarker__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TextGenderMarker.Data.AllocatorInstance.Data;
  if (TextGenderMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TextGenderMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TokenMarker'' @ 15033e180

void __cdecl
`FTextHistory_AsDate::ReadFromBuffer'::__l2::_dynamic_atexit_destructor_for__TokenMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TokenMarker.Data.AllocatorInstance.Data;
  if (TokenMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TokenMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TokenMarker'' @ 15033e1a0

void __cdecl
`FTextHistory_AsDateTime::ReadFromBuffer'::__l2::_dynamic_atexit_destructor_for__TokenMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TokenMarker.Data.AllocatorInstance.Data;
  if (TokenMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TokenMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TokenMarker'' @ 15033e1c0

void __cdecl
`FTextHistory_AsNumber::ReadFromBuffer'::__l2::_dynamic_atexit_destructor_for__TokenMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TokenMarker.Data.AllocatorInstance.Data;
  if (TokenMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TokenMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TokenMarker'' @ 15033e1e0

void __cdecl
`FTextHistory_AsPercent::ReadFromBuffer'::__l2::_dynamic_atexit_destructor_for__TokenMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TokenMarker.Data.AllocatorInstance.Data;
  if (TokenMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TokenMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TokenMarker'' @ 15033e200

void __cdecl
`FTextHistory_AsTime::ReadFromBuffer'::__l2::_dynamic_atexit_destructor_for__TokenMarker__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TokenMarker.Data.AllocatorInstance.Data;
  if (TokenMarker.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TokenMarker.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TwoString'' @ 15033e220

void __cdecl
`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
_dynamic_atexit_destructor_for__TwoString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TwoString.InternalString.Data.AllocatorInstance.Data;
  if (TwoString.InternalString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TwoString.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ValueString'' @ 15033e240

void __cdecl
``TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>::operator()'::
__l3::_dynamic_atexit_destructor_for__ValueString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ValueString.Data.AllocatorInstance.Data;
  if (ValueString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ValueString'' @ 15033e260

void __cdecl
``TextStringificationUtil::ReadNumberFormattingOptionsFromBuffer'::__l2::<lambda_1>::operator()'::
__l7::_dynamic_atexit_destructor_for__ValueString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ValueString.Data.AllocatorInstance.Data;
  if (ValueString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ZeroString'' @ 15033e280

void __cdecl
`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
_dynamic_atexit_destructor_for__ZeroString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ZeroString.InternalString.Data.AllocatorInstance.Data;
  if (ZeroString.InternalString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ZeroString.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

