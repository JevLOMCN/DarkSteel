// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 84

// `dynamic_initializer_for_'FunctionalTestsPreFix'' @ 141164f30

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FunctionalTestsPreFix__(void)

{
  ::FString::FString(&FunctionalTestsPreFix,L"Project.Functional Tests.");
  atexit(_dynamic_atexit_destructor_for__FunctionalTestsPreFix__);
  return;
}

// `dynamic_initializer_for_'LogAutomationTest'' @ 141164f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationTest__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationTest,L"LogAutomationTest",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationTest__);
  return;
}

// `dynamic_initializer_for_'LogAutomationTestExcludelist'' @ 141164fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationTestExcludelist__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationTestExcludelist,L"LogAutomationTestExcludelist",Log,
             All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationTestExcludelist__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAutomationTest'' @ 141164fe0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAutomationTest__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AutomationTest";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AutomationTest",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAutomationTestModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'TicketTrackerURLBasePropertyName'' @ 141165030

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__TicketTrackerURLBasePropertyName__(void)

{
  ::FString::FString(&TicketTrackerURLBasePropertyName,L"URLBase");
  atexit(_dynamic_atexit_destructor_for__TicketTrackerURLBasePropertyName__);
  return;
}

// `dynamic_initializer_for_'TicketTrackerURLHashtagPropertyName'' @ 141165060

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__TicketTrackerURLHashtagPropertyName__(void)

{
  ::FString::FString(&TicketTrackerURLHashtagPropertyName,L"URLHashtag");
  atexit(_dynamic_atexit_destructor_for__TicketTrackerURLHashtagPropertyName__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h__Script_AutomationTest_2864523533'' @ 141165090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h__Script_AutomationTest_2864523533__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationTest",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h__Script_AutomationTest_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h__Script_AutomationTest_2245263903'' @ 1411650e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h__Script_AutomationTest_2245263903__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationTest",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h__Script_AutomationTest_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h__Script_AutomationTest_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h__Script_AutomationTest_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h__Script_AutomationTest_1836891351'' @ 141165130

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h__Script_AutomationTest_1836891351__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationTest",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestPlatform_h__Script_AutomationTest_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AutomationTest'' @ 141165170

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AutomationTest__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf93a3136;
  local_res8[0].DeclarationsHash = 0x1933466a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AutomationTest,L"/Script/AutomationTest",
             &Z_Registration_Info_UPackage__Script_AutomationTest,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 148bed030

void * __thiscall
FAutomationTestModule::_scalar_deleting_destructor_(FAutomationTestModule *this,uint param_1)

{
  *this = (FAutomationTestModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UPackage__Script_AutomationTest @ 148bed5c0

UPackage * __cdecl Z_Construct_UPackage__Script_AutomationTest(void)

{
  if (Z_Registration_Info_UPackage__Script_AutomationTest.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AutomationTest.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AutomationTest.OuterSingleton;
}

// EAutomationState_StaticEnum @ 148bed600

UEnum * __cdecl EAutomationState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutomationState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationTest();
    Z_Registration_Info_UEnum_EAutomationState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AutomationTest_EAutomationState,(UObject *)pUVar1,
                       L"EAutomationState");
  }
  return Z_Registration_Info_UEnum_EAutomationState.OuterSingleton;
}

// Z_Construct_UClass_UAutomationTestExcludelistConfig_NoRegister @ 148bed6f0

UClass * __cdecl Z_Construct_UClass_UAutomationTestExcludelistConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelistConfig",
               &Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton,
               UAutomationTestExcludelistConfig::
               StaticRegisterNativesUAutomationTestExcludelistConfig,0xa0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestExcludelistConfig>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelistConfig>,local_res8,
               UAutomationTestPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.InnerSingleton;
}

// Z_Construct_UClass_UAutomationTestExcludelist @ 148bed8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationTestExcludelist(void)

{
  if (Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton,
               &Z_Construct_UClass_UAutomationTestExcludelist_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton;
}

// Z_Construct_UClass_UAutomationTestExcludelistConfig @ 148bed8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationTestExcludelistConfig(void)

{
  if (Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.OuterSingleton,
               &Z_Construct_UClass_UAutomationTestExcludelistConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelistConfig.OuterSingleton;
}

// Z_Construct_UClass_UAutomationTestExcludelistSettings @ 148bed930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationTestExcludelistSettings(void)

{
  if (Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.OuterSingleton,
               &Z_Construct_UClass_UAutomationTestExcludelistSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.OuterSingleton;
}

// Z_Construct_UClass_UAutomationTestPlatformSettings @ 148bed970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationTestPlatformSettings(void)

{
  if (Z_Registration_Info_UClass_UAutomationTestPlatformSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationTestPlatformSettings.OuterSingleton,
               &Z_Construct_UClass_UAutomationTestPlatformSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationTestPlatformSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry @ 148bed9b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationTestExcludelistEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationTestExcludelistEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationTestExcludelistEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationTestExcludelistEntry.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// ETEST_RHI_Options_StaticEnum @ 148beda30

UEnum * __cdecl ETEST_RHI_Options_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationTest();
    Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options,(UObject *)pUVar1,
                       L"ETEST_RHI_Options");
  }
  return Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton;
}

// ETEST_RHI_FeatureLevel_Options_StaticEnum @ 148beda70

UEnum * __cdecl ETEST_RHI_FeatureLevel_Options_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationTest();
    Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options,
                       (UObject *)pUVar1,L"ETEST_RHI_FeatureLevel_Options");
  }
  return Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton;
}

// NewProp_Warn_SetBit @ 148bedab0

void __cdecl
Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewStructOps @ 148bedac0

void * __cdecl Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationTestExcludeOptions,&UE::CoreUObject::Private::Construct<FAutomationTestExcludeOptions>,&UE::CoreUObject::Private::ConstructForTests<FAutomationTestExcludeOptions>,&UE::CoreUObject::Private::Destruct<FAutomationTestExcludeOptions>,&UE::CoreUObject::Private::Copy<FAutomationTestExcludeOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_Warn_SetBit @ 148bedb00

void __cdecl
Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewStructOps @ 148bedb10

void * __cdecl Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationTestExcludelistEntry,&UE::CoreUObject::Private::Construct<FAutomationTestExcludelistEntry>,&UE::CoreUObject::Private::ConstructForTests<FAutomationTestExcludelistEntry>,&UE::CoreUObject::Private::Destruct<FAutomationTestExcludelistEntry>,&UE::CoreUObject::Private::Copy<FAutomationTestExcludelistEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// CastChecked<UAutomationTestExcludelistConfig,UAutomationTestPlatformSettings> @ 148bedd60

UAutomationTestExcludelistConfig * __cdecl
CastChecked<UAutomationTestExcludelistConfig,UAutomationTestPlatformSettings>
          (UAutomationTestPlatformSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UAutomationTestPlatformSettings *)0x0) {
    pFVar3 = GetTypeName<UAutomationTestExcludelistConfig>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UAutomationTestExcludelistConfig::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UAutomationTestExcludelistConfig *)param_1;
  }
  pFVar3 = GetTypeName<UAutomationTestExcludelistConfig>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UAutomationTestPlatformSettings>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UAutomationTestExcludelistSettings,UAutomationTestPlatformSettings> @ 148bede20

UAutomationTestExcludelistSettings * __cdecl
CastChecked<UAutomationTestExcludelistSettings,UAutomationTestPlatformSettings>
          (UAutomationTestPlatformSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UAutomationTestPlatformSettings *)0x0) {
    pFVar3 = GetTypeName<UAutomationTestExcludelistSettings>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UAutomationTestExcludelistSettings::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UAutomationTestExcludelistSettings *)param_1;
  }
  pFVar3 = GetTypeName<UAutomationTestExcludelistSettings>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UAutomationTestPlatformSettings>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// DestructItems<FAutomationTestExcludelistEntry,int> @ 148bedee0

void __cdecl
DestructItems<FAutomationTestExcludelistEntry,int>
          (FAutomationTestExcludelistEntry *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->RHIs).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -0xc) = 0;
      if (pFVar1[-0xd] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-0xd]);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x15));
      if (pFVar1[-0x18] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-0x18]);
      }
      pFVar1 = pFVar1 + 0x1b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetFullNameForCastLogError<UAutomationTestPlatformSettings> @ 148beead0

FString * __cdecl
GetFullNameForCastLogError<UAutomationTestPlatformSettings>
          (FString *__return_storage_ptr__,UAutomationTestPlatformSettings *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UAutomationTestExcludelistConfig> @ 148beeb00

FString * __cdecl GetTypeName<UAutomationTestExcludelistConfig>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UAutomationTestExcludelistConfig::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UAutomationTestExcludelistSettings> @ 148beeb40

FString * __cdecl GetTypeName<UAutomationTestExcludelistSettings>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UAutomationTestExcludelistSettings::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<``anonymous_namespace'::SortExcludelist'::__l2::<lambda_1>_>_>_>_>_> @ 148beeb80

void __cdecl
AlgoImpl::
HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *param_1,int param_2,int param_3
          ,FIdentityFunctor *param_4,
          TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>_>_>_>
          *param_5)

{
  longlong lVar1;
  longlong lVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  int iVar34;
  int iVar35;
  wchar_t *pwVar36;
  wchar_t *pwVar37;
  int iVar38;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar39;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar40;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar35 = param_2 * 2;
    iVar38 = iVar35 + 1;
    if (iVar35 + 2 < param_3) {
      lVar1 = (longlong)iVar35 + 1;
      lVar2 = (longlong)iVar35 + 2;
      if (*(int *)(lVar1 * 0xf0 + 8 + (longlong)param_1) == 0) {
        pwVar37 = L"";
      }
      else {
        pwVar37 = *(wchar_t **)&param_1[lVar1]._s_1;
      }
      if (*(int *)(lVar2 * 0xf0 + 8 + (longlong)param_1) == 0) {
        pwVar36 = L"";
      }
      else {
        pwVar36 = *(wchar_t **)&param_1[lVar2]._s_1;
      }
      iVar34 = FGenericPlatformStricmp::Stricmp(pwVar36,pwVar37);
      if (iVar34 < 0) {
        iVar38 = iVar35;
      }
      iVar38 = iVar38 + 1;
    }
    pTVar40 = param_1 + param_2;
    pTVar39 = param_1 + iVar38;
    if (*(int *)((longlong)(pTVar39->ElementData).Pad + 8) == 0) {
      pwVar37 = L"";
    }
    else {
      pwVar37 = *(wchar_t **)&pTVar39->_s_1;
    }
    if (*(int *)((pTVar40->ElementData).Pad + 8) == 0) {
      pwVar36 = L"";
    }
    else {
      pwVar36 = *(wchar_t **)&pTVar40->_s_1;
    }
    iVar35 = FGenericPlatformStricmp::Stricmp(pwVar36,pwVar37);
    if (-1 < iVar35) break;
    TVar3 = pTVar40->_s_1;
    uVar4 = *(undefined8 *)((pTVar40->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x18);
    uVar7 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x20);
    uVar8 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x28);
    uVar9 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x30);
    uVar10 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x38);
    uVar11 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x40);
    uVar12 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x48);
    uVar13 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x50);
    uVar14 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x58);
    uVar15 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x60);
    uVar16 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x68);
    uVar17 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x70);
    uVar18 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x78);
    uVar19 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x80);
    uVar20 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x88);
    uVar21 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x90);
    uVar22 = *(undefined8 *)((pTVar40->ElementData).Pad + 0x98);
    uVar23 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xa0);
    uVar24 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xa8);
    uVar25 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xb0);
    uVar26 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xb8);
    uVar27 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xc0);
    uVar28 = *(undefined8 *)((pTVar40->ElementData).Pad + 200);
    uVar29 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xd0);
    uVar30 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xd8);
    uVar31 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xe0);
    uVar32 = *(undefined8 *)((pTVar40->ElementData).Pad + 0xe8);
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 8);
    pTVar40->_s_1 = pTVar39->_s_1;
    *(undefined8 *)((pTVar40->ElementData).Pad + 8) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x10) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x18) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x28);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x20) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x20);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x28) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x38);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x30) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x30);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x38) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x48);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x40) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x40);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x48) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x58);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x50) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x50);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x58) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x68);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x60) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x60);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x68) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x78);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x70) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x70);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x78) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x88);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x80) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x80);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x88) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x98);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x90) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x90);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0x98) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xa8);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xa0) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xa0);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xa8) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xb8);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xb0) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xb0);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xb8) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 200);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xc0) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xc0);
    *(undefined8 *)((pTVar40->ElementData).Pad + 200) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xd8);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xd0) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xd0);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xd8) = uVar33;
    uVar33 = *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xe8);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xe0) =
         *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xe0);
    *(undefined8 *)((pTVar40->ElementData).Pad + 0xe8) = uVar33;
    pTVar39->_s_1 = TVar3;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x18) = uVar6;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x20) = uVar7;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x28) = uVar8;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x30) = uVar9;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x38) = uVar10;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x40) = uVar11;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x48) = uVar12;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x50) = uVar13;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x58) = uVar14;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x60) = uVar15;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x68) = uVar16;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x70) = uVar17;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x78) = uVar18;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x80) = uVar19;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x88) = uVar20;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x90) = uVar21;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0x98) = uVar22;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xa0) = uVar23;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xa8) = uVar24;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xb0) = uVar25;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xb8) = uVar26;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xc0) = uVar27;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 200) = uVar28;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xd0) = uVar29;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xd8) = uVar30;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xe0) = uVar31;
    *(undefined8 *)((longlong)(pTVar39->ElementData).Pad + 0xe8) = uVar32;
    param_2 = iVar38;
  }
  return;
}

// HeapSiftDown<FAutomationTestExcludelistEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAutomationTestExcludelistEntry,``anonymous_namespace'::SortExcludelist'::__l2::<lambda_1>_>_>_> @ 148beee40

void __cdecl
AlgoImpl::
HeapSiftDown<FAutomationTestExcludelistEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAutomationTestExcludelistEntry,__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>
          (FAutomationTestExcludelistEntry *param_1,int param_2,int param_3,
          FIdentityFunctor *param_4,
          TReversePredicate<TDereferenceWrapper<FAutomationTestExcludelistEntry,_void___cdecl__anonymous_namespace_::SortExcludelist(TArray<FAutomationTestExcludelistEntry,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>_>
          *param_5)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ForElementType<FSetElementId> FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ForElementType<FSetElementId> FVar22;
  undefined8 uVar23;
  ForElementType<FSetElementId> FVar24;
  FName FVar25;
  undefined3 uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  undefined4 uVar30;
  uchar uVar31;
  undefined7 uVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  undefined3 uVar36;
  int iVar37;
  uchar uVar38;
  uchar uVar39;
  uchar uVar40;
  uchar uVar41;
  int iVar42;
  int iVar43;
  undefined4 uVar44;
  uchar uVar45;
  uchar uVar46;
  uchar uVar47;
  uchar uVar48;
  int iVar49;
  int iVar50;
  undefined4 uVar51;
  bool bVar52;
  undefined7 uVar53;
  int iVar54;
  int iVar55;
  wchar_t *pwVar56;
  wchar_t *pwVar57;
  int iVar58;
  FAutomationTestExcludelistEntry *pFVar59;
  FAutomationTestExcludelistEntry *pFVar60;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar55 = param_2 * 2;
    iVar58 = iVar55 + 1;
    if (iVar55 + 2 < param_3) {
      lVar1 = (longlong)iVar55 + 1;
      lVar2 = (longlong)iVar55 + 2;
      if (param_1[lVar1].FullTestName.Data.ArrayNum == 0) {
        pwVar57 = L"";
      }
      else {
        pwVar57 = (wchar_t *)param_1[lVar1].FullTestName.Data.AllocatorInstance.Data;
      }
      if (param_1[lVar2].FullTestName.Data.ArrayNum == 0) {
        pwVar56 = L"";
      }
      else {
        pwVar56 = (wchar_t *)param_1[lVar2].FullTestName.Data.AllocatorInstance.Data;
      }
      iVar54 = FGenericPlatformStricmp::Stricmp(pwVar56,pwVar57);
      if (iVar54 < 0) {
        iVar58 = iVar55;
      }
      iVar58 = iVar58 + 1;
    }
    pFVar60 = param_1 + param_2;
    pFVar59 = param_1 + iVar58;
    if ((pFVar59->FullTestName).Data.ArrayNum == 0) {
      pwVar57 = L"";
    }
    else {
      pwVar57 = (wchar_t *)(pFVar59->FullTestName).Data.AllocatorInstance.Data;
    }
    if ((pFVar60->FullTestName).Data.ArrayNum == 0) {
      pwVar56 = L"";
    }
    else {
      pwVar56 = (wchar_t *)(pFVar60->FullTestName).Data.AllocatorInstance.Data;
    }
    iVar55 = FGenericPlatformStricmp::Stricmp(pwVar56,pwVar57);
    if (-1 < iVar55) break;
    pFVar3 = (pFVar60->FullTestName).Data.AllocatorInstance.Data;
    iVar33 = (pFVar60->FullTestName).Data.ArrayNum;
    iVar34 = (pFVar60->FullTestName).Data.ArrayMax;
    bVar35 = pFVar60->bIsPropagated;
    uVar36 = *(undefined3 *)&pFVar60->field_0x11;
    iVar37 = pFVar60->_padding_;
    uVar4 = *(undefined8 *)&(pFVar60->Platforms).Elements;
    uVar5 = *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x8;
    uVar6 = *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x10;
    uVar7 = *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x18;
    uVar8 = *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x20;
    uVar9 = *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x28;
    uVar10 = *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x30;
    uVar38 = (pFVar60->Platforms).Hash.InlineData[0];
    uVar39 = (pFVar60->Platforms).Hash.InlineData[1];
    uVar40 = (pFVar60->Platforms).Hash.InlineData[2];
    uVar41 = (pFVar60->Platforms).Hash.InlineData[3];
    iVar42 = (pFVar60->Platforms).Hash._padding_;
    FVar11 = (pFVar60->Platforms).Hash.SecondaryData;
    iVar43 = (pFVar60->Platforms).HashSize;
    uVar44 = *(undefined4 *)&(pFVar60->Platforms).field_0x4c;
    FVar12 = pFVar60->Map;
    FVar13 = pFVar60->Test;
    FVar14 = pFVar60->Reason;
    uVar15 = *(undefined8 *)&(pFVar60->RHIs).Elements;
    uVar16 = *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x8;
    uVar17 = *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x10;
    uVar18 = *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x18;
    uVar19 = *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x20;
    uVar20 = *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x28;
    uVar21 = *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x30;
    uVar45 = (pFVar60->RHIs).Hash.InlineData[0];
    uVar46 = (pFVar60->RHIs).Hash.InlineData[1];
    uVar47 = (pFVar60->RHIs).Hash.InlineData[2];
    uVar48 = (pFVar60->RHIs).Hash.InlineData[3];
    iVar49 = (pFVar60->RHIs).Hash._padding_;
    FVar22 = (pFVar60->RHIs).Hash.SecondaryData;
    iVar50 = (pFVar60->RHIs).HashSize;
    uVar51 = *(undefined4 *)&(pFVar60->RHIs).field_0x4c;
    bVar52 = pFVar60->Warn;
    uVar53 = *(undefined7 *)&pFVar60->field_0xd1;
    iVar55 = (pFVar59->FullTestName).Data.ArrayNum;
    iVar54 = (pFVar59->FullTestName).Data.ArrayMax;
    (pFVar60->FullTestName).Data.AllocatorInstance.Data =
         (pFVar59->FullTestName).Data.AllocatorInstance.Data;
    (pFVar60->FullTestName).Data.ArrayNum = iVar55;
    (pFVar60->FullTestName).Data.ArrayMax = iVar54;
    uVar26 = *(undefined3 *)&pFVar59->field_0x11;
    iVar55 = pFVar59->_padding_;
    uVar23 = *(undefined8 *)&(pFVar59->Platforms).Elements;
    pFVar60->bIsPropagated = pFVar59->bIsPropagated;
    *(undefined3 *)&pFVar60->field_0x11 = uVar26;
    pFVar60->_padding_ = iVar55;
    *(undefined8 *)&(pFVar60->Platforms).Elements = uVar23;
    uVar23 = *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x10;
    *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x8 =
         *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x8;
    *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x10 = uVar23;
    uVar23 = *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x20;
    *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x18 =
         *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x18;
    *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x20 = uVar23;
    uVar23 = *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x30;
    *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x28 =
         *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x28;
    *(undefined8 *)&(pFVar60->Platforms).Elements.field_0x30 = uVar23;
    uVar27 = (pFVar59->Platforms).Hash.InlineData[1];
    uVar28 = (pFVar59->Platforms).Hash.InlineData[2];
    uVar29 = (pFVar59->Platforms).Hash.InlineData[3];
    iVar55 = (pFVar59->Platforms).Hash._padding_;
    FVar24 = (pFVar59->Platforms).Hash.SecondaryData;
    (pFVar60->Platforms).Hash.InlineData[0] = (pFVar59->Platforms).Hash.InlineData[0];
    (pFVar60->Platforms).Hash.InlineData[1] = uVar27;
    (pFVar60->Platforms).Hash.InlineData[2] = uVar28;
    (pFVar60->Platforms).Hash.InlineData[3] = uVar29;
    (pFVar60->Platforms).Hash._padding_ = iVar55;
    (pFVar60->Platforms).Hash.SecondaryData = FVar24;
    uVar30 = *(undefined4 *)&(pFVar59->Platforms).field_0x4c;
    FVar25 = pFVar59->Map;
    (pFVar60->Platforms).HashSize = (pFVar59->Platforms).HashSize;
    *(undefined4 *)&(pFVar60->Platforms).field_0x4c = uVar30;
    pFVar60->Map = FVar25;
    FVar25 = pFVar59->Reason;
    pFVar60->Test = pFVar59->Test;
    pFVar60->Reason = FVar25;
    uVar23 = *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x8;
    *(undefined8 *)&(pFVar60->RHIs).Elements = *(undefined8 *)&(pFVar59->RHIs).Elements;
    *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x8 = uVar23;
    uVar23 = *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x18;
    *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x10 =
         *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x10;
    *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x18 = uVar23;
    uVar23 = *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x28;
    *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x20 =
         *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x20;
    *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x28 = uVar23;
    uVar27 = (pFVar59->RHIs).Hash.InlineData[0];
    uVar28 = (pFVar59->RHIs).Hash.InlineData[1];
    uVar29 = (pFVar59->RHIs).Hash.InlineData[2];
    uVar31 = (pFVar59->RHIs).Hash.InlineData[3];
    iVar55 = (pFVar59->RHIs).Hash._padding_;
    *(undefined8 *)&(pFVar60->RHIs).Elements.field_0x30 =
         *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x30;
    (pFVar60->RHIs).Hash.InlineData[0] = uVar27;
    (pFVar60->RHIs).Hash.InlineData[1] = uVar28;
    (pFVar60->RHIs).Hash.InlineData[2] = uVar29;
    (pFVar60->RHIs).Hash.InlineData[3] = uVar31;
    (pFVar60->RHIs).Hash._padding_ = iVar55;
    iVar55 = (pFVar59->RHIs).HashSize;
    uVar30 = *(undefined4 *)&(pFVar59->RHIs).field_0x4c;
    (pFVar60->RHIs).Hash.SecondaryData = (pFVar59->RHIs).Hash.SecondaryData;
    (pFVar60->RHIs).HashSize = iVar55;
    *(undefined4 *)&(pFVar60->RHIs).field_0x4c = uVar30;
    uVar32 = *(undefined7 *)&pFVar59->field_0xd1;
    pFVar60->Warn = pFVar59->Warn;
    *(undefined7 *)&pFVar60->field_0xd1 = uVar32;
    (pFVar59->FullTestName).Data.AllocatorInstance.Data = pFVar3;
    (pFVar59->FullTestName).Data.ArrayNum = iVar33;
    (pFVar59->FullTestName).Data.ArrayMax = iVar34;
    pFVar59->bIsPropagated = bVar35;
    *(undefined3 *)&pFVar59->field_0x11 = uVar36;
    pFVar59->_padding_ = iVar37;
    *(undefined8 *)&(pFVar59->Platforms).Elements = uVar4;
    *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x8 = uVar5;
    *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x10 = uVar6;
    *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x18 = uVar7;
    *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x20 = uVar8;
    *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x28 = uVar9;
    *(undefined8 *)&(pFVar59->Platforms).Elements.field_0x30 = uVar10;
    (pFVar59->Platforms).Hash.InlineData[0] = uVar38;
    (pFVar59->Platforms).Hash.InlineData[1] = uVar39;
    (pFVar59->Platforms).Hash.InlineData[2] = uVar40;
    (pFVar59->Platforms).Hash.InlineData[3] = uVar41;
    (pFVar59->Platforms).Hash._padding_ = iVar42;
    (pFVar59->Platforms).Hash.SecondaryData = FVar11;
    (pFVar59->Platforms).HashSize = iVar43;
    *(undefined4 *)&(pFVar59->Platforms).field_0x4c = uVar44;
    pFVar59->Map = FVar12;
    pFVar59->Test = FVar13;
    pFVar59->Reason = FVar14;
    *(undefined8 *)&(pFVar59->RHIs).Elements = uVar15;
    *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x8 = uVar16;
    *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x10 = uVar17;
    *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x18 = uVar18;
    *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x20 = uVar19;
    *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x28 = uVar20;
    *(undefined8 *)&(pFVar59->RHIs).Elements.field_0x30 = uVar21;
    (pFVar59->RHIs).Hash.InlineData[0] = uVar45;
    (pFVar59->RHIs).Hash.InlineData[1] = uVar46;
    (pFVar59->RHIs).Hash.InlineData[2] = uVar47;
    (pFVar59->RHIs).Hash.InlineData[3] = uVar48;
    (pFVar59->RHIs).Hash._padding_ = iVar49;
    (pFVar59->RHIs).Hash.SecondaryData = FVar22;
    (pFVar59->RHIs).HashSize = iVar50;
    *(undefined4 *)&(pFVar59->RHIs).field_0x4c = uVar51;
    pFVar59->Warn = bVar52;
    *(undefined7 *)&pFVar59->field_0xd1 = uVar53;
    param_2 = iVar58;
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<`FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::<lambda_1>_>_>_> @ 148bef0e0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings_::__l5::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)_::_5_::<lambda_1>_>_>
          param_4)

{
  code *pcVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar14;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar13 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_148bef207:
      if (iVar9 == 0) {
        iVar7 = param_2 + -1;
        lVar10 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar11 = param_1 + lVar10;
          do {
            uVar3 = *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 8);
            iVar13 = 0;
            TVar2 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar11->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
            pTVar11->_s_1 = TVar2;
            *(undefined8 *)((longlong)(pTVar11->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar9 = iVar13 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar7) {
                  bVar5 = `FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::
                          <lambda_1>::operator()
                                    (((param_4.Predicate)->Predicate).Predicate,
                                     (FName *)&param_1[iVar9 + 2].ElementData,
                                     (FName *)&param_1[iVar6].ElementData);
                  if (bVar5) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar12 = param_1 + iVar6;
                pTVar14 = param_1 + iVar13;
                bVar5 = `FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::
                        <lambda_1>::operator()
                                  (((param_4.Predicate)->Predicate).Predicate,
                                   (FName *)&pTVar14->ElementData,(FName *)&pTVar12->ElementData);
                if (!bVar5) break;
                TVar2 = pTVar14->_s_1;
                uVar3 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
                uVar4 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
                pTVar14->_s_1 = pTVar12->_s_1;
                *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar4;
                pTVar12->_s_1 = TVar2;
                *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar3;
                iVar13 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
            pTVar11 = pTVar11 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar13 + -2;
      iVar13 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::<lambda_1>::
              operator()(((param_4.Predicate)->Predicate).Predicate,
                         (FName *)&param_1[iVar7 + 2].ElementData,
                         (FName *)&param_1[iVar8].ElementData);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar11 = param_1 + iVar8;
    pTVar12 = param_1 + iVar6;
    bVar5 = `FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::<lambda_1>::
            operator()(((param_4.Predicate)->Predicate).Predicate,(FName *)&pTVar12->ElementData,
                       (FName *)&pTVar11->ElementData);
    if (!bVar5) goto LAB_148bef207;
    TVar2 = pTVar12->_s_1;
    uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
    iVar7 = iVar8 * 2 + 1;
    uVar4 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
    pTVar12->_s_1 = pTVar11->_s_1;
    *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
    pTVar11->_s_1 = TVar2;
    *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar3;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<UAutomationTestExcludelist> @ 148bef310

void __cdecl InternalConstructor<UAutomationTestExcludelist>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UAutomationTestExcludelist__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0xc = 0x80;
    *(undefined4 *)&this[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x14 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
  }
  return;
}

// InternalConstructor<UAutomationTestExcludelistConfig> @ 148bef3b0

void __cdecl InternalConstructor<UAutomationTestExcludelistConfig>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UAutomationTestExcludelistConfig__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x14 = 0;
    *(undefined8 *)&this[3].field_0x1c = 0;
    *(undefined4 *)&this[3].field_0x24 = 0;
  }
  return;
}

// InternalConstructor<UAutomationTestExcludelistSettings> @ 148bef430

void __cdecl InternalConstructor<UAutomationTestExcludelistSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &___7UAutomationTestExcludelistSettings__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UAutomationTestPlatformSettings> @ 148bef470

void __cdecl InternalConstructor<UAutomationTestPlatformSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7UAutomationTestPlatformSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAutomationTestExcludelist> @ 148bef4b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAutomationTestExcludelist>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationTestExcludelist::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAutomationTestExcludelist__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAutomationTestExcludelistConfig> @ 148bef5d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAutomationTestExcludelistConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationTestExcludelistConfig::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UAutomationTestExcludelistConfig__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x14 = 0;
    *(undefined8 *)&pUVar1[3].field_0x1c = 0;
    *(undefined4 *)&pUVar1[3].field_0x24 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAutomationTestExcludelistSettings> @ 148bef6c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAutomationTestExcludelistSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationTestExcludelistSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UAutomationTestExcludelistSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAutomationTestPlatformSettings> @ 148bef780

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAutomationTestPlatformSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationTestPlatformSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAutomationTestPlatformSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<`FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::<lambda_1>_>_>_> @ 148bef840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings_::__l5::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)_::_5_::<lambda_1>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar2;
  undefined8 uVar3;
  FName FVar4;
  FName FVar5;
  FNameEntryId FVar6;
  uint uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar19;
  float fVar20;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar20;
    memset(local_330,0,0x2e8);
    ppTVar15 = &local_348;
    do {
      pTVar19 = ppTVar15[1];
      pTVar18 = *ppTVar15;
      local_358 = ppTVar15[2];
      iVar11 = (int)((longlong)pTVar19 - (longlong)pTVar18 >> 4) + 1;
      pTVar17 = pTVar18;
      iVar16 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_148bef900:
        if (8 < iVar11) {
          uVar1 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
          pTVar12 = pTVar19 + 1;
          TVar2 = pTVar17[iVar11 / 2]._s_1;
          uVar3 = *(undefined8 *)((longlong)pTVar17[iVar11 / 2].ElementData.Pad + 8);
          pTVar17[iVar11 / 2]._s_1 = pTVar17->_s_1;
          *(undefined8 *)((longlong)pTVar17[iVar11 / 2].ElementData.Pad + 8) = uVar1;
          pTVar17->_s_1 = TVar2;
          *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar3;
          pTVar18 = pTVar17;
LAB_148bef930:
          pTVar14 = pTVar18;
          pTVar18 = pTVar14 + 1;
          if (pTVar18 <= pTVar19) goto code_r0x000148bef939;
          goto LAB_148bef950;
        }
        for (; pTVar12 = pTVar17, pTVar18 = pTVar17, pTVar17 < pTVar19; pTVar19 = pTVar19 + -1) {
          while (pTVar14 = pTVar12, pTVar18 = pTVar18 + 1, pTVar18 <= pTVar19) {
            bVar10 = `FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::
                     <lambda_1>::operator()
                               (((param_4.Predicate)->Predicate).Predicate,
                                (FName *)&pTVar14->ElementData,(FName *)&pTVar18->ElementData);
            pTVar12 = pTVar18;
            if (!bVar10) {
              pTVar12 = pTVar14;
            }
          }
          FVar6.Value = *(int *)pTVar14;
          uVar7 = *(int *)((longlong)pTVar14 + 4);
          uVar1 = *(undefined8 *)((FNameEntryId *)(pTVar14->ElementData).Pad + 2);
          FVar8.Value = *(int *)pTVar19;
          uVar9 = *(int *)((longlong)pTVar19 + 4);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar19->ElementData).Pad + 2);
          *(int *)pTVar14 = FVar8.Value;
          *(uint *)((longlong)pTVar14 + 4) = uVar9;
          *(undefined8 *)((FNameEntryId *)(pTVar14->ElementData).Pad + 2) = uVar3;
          *(int *)pTVar19 = FVar6.Value;
          *(uint *)((longlong)pTVar19 + 4) = uVar7;
          *(undefined8 *)((FNameEntryId *)(pTVar19->ElementData).Pad + 2) = uVar1;
        }
        goto LAB_148befa1f;
      }
LAB_148befa0e:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings_::__l5::<lambda_1>_>_>_>
                (pTVar18,iVar11,param_3,param_4);
LAB_148befa1f:
      ppTVar15 = ppTVar15 + -3;
    } while (&local_348 <= ppTVar15);
  }
  return;
code_r0x000148bef939:
  bVar10 = `FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::<lambda_1>::
           operator()(((param_4.Predicate)->Predicate).Predicate,(FName *)&pTVar17->ElementData,
                      (FName *)&pTVar18->ElementData);
  if (!bVar10) goto LAB_148bef930;
LAB_148bef950:
  do {
    pTVar13 = pTVar12;
    pTVar12 = pTVar13 + -1;
    if (pTVar12 <= pTVar17) break;
    bVar10 = `FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l5::<lambda_1>::
             operator()(((param_4.Predicate)->Predicate).Predicate,(FName *)&pTVar12->ElementData,
                        (FName *)&pTVar17->ElementData);
  } while (!bVar10);
  FVar4 = *(FName *)((longlong)pTVar13 + -8);
  if (pTVar18 <= pTVar12) {
    TVar2 = pTVar18->_s_1;
    FVar5 = *(FName *)((longlong)pTVar14 + 0x18);
    pTVar18->_s_1 = pTVar12->_s_1;
    *(FName *)((longlong)pTVar14 + 0x18) = FVar4;
    pTVar12->_s_1 = TVar2;
    *(FName *)((longlong)pTVar13 + -8) = FVar5;
    goto LAB_148bef930;
  }
  TVar2 = pTVar17->_s_1;
  FVar5 = *(FName *)((pTVar17->ElementData).Pad + 8);
  iVar16 = iVar16 + -1;
  pTVar17->_s_1 = pTVar12->_s_1;
  *(FName *)((pTVar17->ElementData).Pad + 8) = FVar4;
  pTVar12->_s_1 = TVar2;
  *(FName *)((longlong)pTVar13 + -8) = FVar5;
  if ((longlong)((longlong)pTVar12 + (-0x10 - (longlong)pTVar17) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar19 - (longlong)pTVar18 & 0xfffffffffffffff0U)) {
    if (pTVar18 < pTVar19) {
      *ppTVar15 = pTVar18;
      ppTVar15[1] = pTVar19;
      *(int *)(ppTVar15 + 2) = iVar16;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar12 <= pTVar17 + 1) goto LAB_148befa1f;
    pTVar19 = pTVar13 + -2;
    pTVar18 = pTVar17;
  }
  else {
    if (pTVar17 + 1 < pTVar12) {
      *ppTVar15 = pTVar17;
      ppTVar15[1] = pTVar13 + -2;
      *(int *)(ppTVar15 + 2) = iVar16;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar19 <= pTVar18) goto LAB_148befa1f;
  }
  iVar11 = (int)((longlong)pTVar19 - (longlong)pTVar18 >> 4) + 1;
  pTVar17 = pTVar18;
  if (iVar16 == 0) goto LAB_148befa0e;
  goto LAB_148bef900;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<``anonymous_namespace'::SortExcludelist'::__l2::<lambda_1>_>_>_>_> @ 148befae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TVar4;
  bool bVar5;
  uchar *puVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> **ppTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar19;
  float fVar20;
  undefined1 auStackY_4b8 [32];
  FIdentityFunctor local_488 [8];
  FIdentityFunctor local_480 [8];
  FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>_>_>
  local_478;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> **local_470;
  TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>_>_>_>
  local_468;
  TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>_>_>_>
  local_460 [3];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *local_448;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_440;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_438;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_430;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_428;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_420;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_418;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_410;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_408;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_400;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_3f8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_3f0;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_3e8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_3e0;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_3d8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_3d0;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_3c8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_3c0;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_3b8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_3b0;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_3a8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_3a0;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_398;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_390;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_388;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_380;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_378;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_370;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_368;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 local_360;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 TStack_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar20 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar20;
    memset(local_330,0,0x2e8);
    ppTVar15 = &local_348;
    do {
      pTVar16 = ppTVar15[1];
      pTVar12 = *ppTVar15;
      local_448 = ppTVar15[2];
      lVar8 = ((longlong)pTVar16 - (longlong)pTVar12) +
              SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pTVar16 - (longlong)pTVar12),8
                    );
      iVar11 = ((int)(lVar8 >> 7) - (int)(lVar8 >> 0x3f)) + 1;
      local_478.Predicate._0_4_ = (int)local_448;
      pTVar19 = pTVar12;
      local_470 = ppTVar15;
      if ((int)local_448 != 0) {
LAB_148befbd6:
        if (8 < iVar11) {
          pTVar12 = pTVar19 + iVar11 / 2;
          local_440 = pTVar12->_s_1;
          TStack_438 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 8);
          local_430 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x10);
          TStack_428 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x18);
          local_420 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x20);
          TStack_418 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x28);
          local_410 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x30);
          TStack_408 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x38);
          local_400 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x40);
          TStack_3f8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x48);
          local_3f0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x50);
          TStack_3e8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x58);
          local_3e0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x60);
          TStack_3d8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x68);
          local_3d0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x70);
          TStack_3c8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x78);
          local_3c0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x80);
          TStack_3b8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x88);
          local_3b0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0x90);
          TStack_3a8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0x98);
          local_3a0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0xa0);
          TStack_398 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0xa8);
          local_390 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0xb0);
          TStack_388 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0xb8);
          local_380 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0xc0);
          TStack_378 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 200);
          local_370 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0xd0);
          TStack_368 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0xd8);
          local_360 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar12->ElementData).Pad + 0xe0);
          TStack_358 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar12->ElementData).Pad + 0xe8);
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
          pTVar12->_s_1 = pTVar19->_s_1;
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x28) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x38) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x48) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x50) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x58) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x60) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x68) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x70) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x78) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x80) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x88) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x98);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x90) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0x90);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x98) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0xa8);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xa0) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0xa0);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xa8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0xb8);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xb0) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0xb0);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xb8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 200);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xc0) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0xc0);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 200) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0xd8);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xd0) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0xd0);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xd8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar19->ElementData).Pad + 0xe8);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xe0) =
               *(undefined8 *)((pTVar19->ElementData).Pad + 0xe0);
          *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0xe8) = uVar3;
          pTVar19->_s_1 = local_440;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 8) = TStack_438;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x10) = local_430;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x18) = TStack_428;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x20) = local_420;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x28) = TStack_418;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x30) = local_410;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x38) = TStack_408;
          puVar6 = (pTVar19->ElementData).Pad + 0x80;
          pTVar17 = pTVar16 + 1;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x40) = local_400;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x48) = TStack_3f8;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x50) = local_3f0;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x58) = TStack_3e8;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x60) = local_3e0;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((pTVar19->ElementData).Pad + 0x68) = TStack_3d8;
          pTVar12 = pTVar19;
          do {
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + -0x10) =
                 local_3d0;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + -8) =
                 TStack_3c8;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)puVar6 = local_3c0;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 8) =
                 TStack_3b8;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x10) =
                 local_3b0;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x18) =
                 TStack_3a8;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x20) =
                 local_3a0;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x28) =
                 TStack_398;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x30) =
                 local_390;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x38) =
                 TStack_388;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x40) =
                 local_380;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x48) =
                 TStack_378;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x50) =
                 local_370;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x58) =
                 TStack_368;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x60) =
                 local_360;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)(puVar6 + 0x68) =
                 TStack_358;
            do {
              pTVar13 = pTVar12;
              pTVar12 = pTVar13 + 1;
              if (pTVar16 < pTVar12) break;
              if (*(int *)((longlong)pTVar13 + 0xf8) == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)&pTVar12->_s_1;
              }
              if (*(int *)((pTVar19->ElementData).Pad + 8) == 0) {
                pwVar7 = L"";
              }
              else {
                pwVar7 = *(wchar_t **)&pTVar19->_s_1;
              }
              iVar11 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar9);
            } while (-1 < iVar11);
            do {
              pTVar18 = pTVar17;
              pTVar17 = pTVar18 + -1;
              if (pTVar17 <= pTVar19) break;
              if (*(int *)((pTVar19->ElementData).Pad + 8) == 0) {
                pwVar9 = L"";
              }
              else {
                pwVar9 = *(wchar_t **)&pTVar19->_s_1;
              }
              if (*(int *)((longlong)pTVar18 + -0xe8) == 0) {
                pwVar7 = L"";
              }
              else {
                pwVar7 = *(wchar_t **)&pTVar17->_s_1;
              }
              iVar11 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar9);
            } while (-1 < iVar11);
            if (pTVar17 < pTVar12) goto LAB_148beff87;
            local_440 = pTVar12->_s_1;
            TStack_438 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0xf8);
            local_430 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x100);
            TStack_428 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x108);
            local_420 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x110);
            TStack_418 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x118);
            local_410 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x120);
            TStack_408 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x128);
            local_400 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x130);
            TStack_3f8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x138);
            local_3f0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x140);
            TStack_3e8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x148);
            local_3e0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x150);
            TStack_3d8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x158);
            local_3d0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x160);
            TStack_3c8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x168);
            local_3c0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x170);
            TStack_3b8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x178);
            local_3b0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x180);
            TStack_3a8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x188);
            local_3a0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 400);
            TStack_398 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x198);
            local_390 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x1a0);
            TStack_388 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x1a8);
            local_380 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x1b0);
            TStack_378 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x1b8);
            local_370 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x1c0);
            TStack_368 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x1c8);
            local_360 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((longlong)pTVar13 + 0x1d0);
            TStack_358 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((longlong)pTVar13 + 0x1d8);
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0xe8);
            pTVar12->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((longlong)pTVar13 + 0xf8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0xd8);
            *(undefined8 *)((longlong)pTVar13 + 0x100) = *(undefined8 *)((longlong)pTVar18 + -0xe0);
            *(undefined8 *)((longlong)pTVar13 + 0x108) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -200);
            *(undefined8 *)((longlong)pTVar13 + 0x110) = *(undefined8 *)((longlong)pTVar18 + -0xd0);
            *(undefined8 *)((longlong)pTVar13 + 0x118) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0xb8);
            *(undefined8 *)((longlong)pTVar13 + 0x120) = *(undefined8 *)((longlong)pTVar18 + -0xc0);
            *(undefined8 *)((longlong)pTVar13 + 0x128) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0xa8);
            *(undefined8 *)((longlong)pTVar13 + 0x130) = *(undefined8 *)((longlong)pTVar18 + -0xb0);
            *(undefined8 *)((longlong)pTVar13 + 0x138) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x98);
            *(undefined8 *)((longlong)pTVar13 + 0x140) = *(undefined8 *)((longlong)pTVar18 + -0xa0);
            *(undefined8 *)((longlong)pTVar13 + 0x148) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x88);
            *(undefined8 *)((longlong)pTVar13 + 0x150) = *(undefined8 *)((longlong)pTVar18 + -0x90);
            *(undefined8 *)((longlong)pTVar13 + 0x158) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x78);
            *(undefined8 *)((longlong)pTVar13 + 0x160) = *(undefined8 *)((longlong)pTVar18 + -0x80);
            *(undefined8 *)((longlong)pTVar13 + 0x168) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x68);
            *(undefined8 *)((longlong)pTVar13 + 0x170) = *(undefined8 *)((longlong)pTVar18 + -0x70);
            *(undefined8 *)((longlong)pTVar13 + 0x178) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x58);
            *(undefined8 *)((longlong)pTVar13 + 0x180) = *(undefined8 *)((longlong)pTVar18 + -0x60);
            *(undefined8 *)((longlong)pTVar13 + 0x188) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x48);
            *(undefined8 *)((longlong)pTVar13 + 400) = *(undefined8 *)((longlong)pTVar18 + -0x50);
            *(undefined8 *)((longlong)pTVar13 + 0x198) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x38);
            *(undefined8 *)((longlong)pTVar13 + 0x1a0) = *(undefined8 *)((longlong)pTVar18 + -0x40);
            *(undefined8 *)((longlong)pTVar13 + 0x1a8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x28);
            *(undefined8 *)((longlong)pTVar13 + 0x1b0) = *(undefined8 *)((longlong)pTVar18 + -0x30);
            *(undefined8 *)((longlong)pTVar13 + 0x1b8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x18);
            *(undefined8 *)((longlong)pTVar13 + 0x1c0) = *(undefined8 *)((longlong)pTVar18 + -0x20);
            *(undefined8 *)((longlong)pTVar13 + 0x1c8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)pTVar18 + -8);
            *(undefined8 *)((longlong)pTVar13 + 0x1d0) = *(undefined8 *)((longlong)pTVar18 + -0x10);
            *(undefined8 *)((longlong)pTVar13 + 0x1d8) = uVar3;
            puVar6 = (uchar *)((longlong)pTVar18 + -0x70);
            pTVar17->_s_1 = local_440;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xe8) = TStack_438;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xe0) = local_430;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xd8) = TStack_428;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xd0) = local_420;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -200) = TStack_418;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xc0) = local_410;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xb8) = TStack_408;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xb0) = local_400;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xa8) = TStack_3f8;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0xa0) = local_3f0;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0x98) = TStack_3e8;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0x90) = local_3e0;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((longlong)pTVar18 + -0x88) = TStack_3d8;
          } while( true );
        }
        for (; pTVar17 = pTVar19, pTVar12 = pTVar19, pTVar19 < pTVar16; pTVar16 = pTVar16 + -1) {
          while (pTVar13 = pTVar17, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar16) {
            if (*(int *)((longlong)(pTVar12->ElementData).Pad + 8) == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = *(wchar_t **)&pTVar12->_s_1;
            }
            if (*(int *)((longlong)(pTVar13->ElementData).Pad + 8) == 0) {
              pwVar7 = L"";
            }
            else {
              pwVar7 = *(wchar_t **)&pTVar13->_s_1;
            }
            iVar11 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar9);
            pTVar17 = pTVar12;
            if (-1 < iVar11) {
              pTVar17 = pTVar13;
            }
          }
          local_440 = pTVar13->_s_1;
          TStack_438 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 8);
          local_430 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x10);
          TStack_428 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x18);
          local_420 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x20);
          TStack_418 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x28);
          local_410 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x30);
          TStack_408 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x38);
          local_400 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x40);
          TStack_3f8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x48);
          local_3f0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x50);
          TStack_3e8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x58);
          local_3e0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x60);
          TStack_3d8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x68);
          local_3d0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x70);
          TStack_3c8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x78);
          local_3c0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x80);
          TStack_3b8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x88);
          local_3b0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0x90);
          TStack_3a8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0x98);
          local_3a0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0xa0);
          TStack_398 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0xa8);
          local_390 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0xb0);
          TStack_388 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0xb8);
          local_380 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0xc0);
          TStack_378 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 200);
          local_370 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0xd0);
          TStack_368 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0xd8);
          local_360 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                       ((longlong)(pTVar13->ElementData).Pad + 0xe0);
          TStack_358 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                        ((longlong)(pTVar13->ElementData).Pad + 0xe8);
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar16->_s_1;
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x20) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x28) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x30) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x38) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x40) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x48) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x58);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x50) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x50);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x58) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x68);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x60) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x60);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x68) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x78);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x70) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x70);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x78) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x88);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x80) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x80);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x88) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x98);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x90) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x90);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x98) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xa8);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xa0) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xa0);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xa8) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xb8);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xb0) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xb0);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xb8) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 200);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xc0) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xc0);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 200) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xd8);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xd0) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xd0);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xd8) = uVar3;
          uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xe8);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xe0) =
               *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0xe0);
          *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0xe8) = uVar3;
          pTVar16->_s_1 = local_440;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 8) = TStack_438;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x10) = local_430;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x18) = TStack_428;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x20) = local_420;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x28) = TStack_418;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x30) = local_410;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x38) = TStack_408;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x40) = local_400;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x48) = TStack_3f8;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x50) = local_3f0;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x58) = TStack_3e8;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x60) = local_3e0;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x68) = TStack_3d8;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x70) = local_3d0;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x78) = TStack_3c8;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x80) = local_3c0;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x88) = TStack_3b8;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x90) = local_3b0;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0x98) = TStack_3a8;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xa0) = local_3a0;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xa8) = TStack_398;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xb0) = local_390;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xb8) = TStack_388;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xc0) = local_380;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 200) = TStack_378;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xd0) = local_370;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xd8) = TStack_368;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xe0) = local_360;
          *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
           ((longlong)(pTVar16->ElementData).Pad + 0xe8) = TStack_358;
          ppTVar15 = local_470;
        }
        goto LAB_148bf0730;
      }
LAB_148bf0222:
      local_480[0] = param_3;
      local_478.Predicate = param_4.Predicate;
      if (iVar11 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                           ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
LAB_148bf04ad:
        local_460[0].Predicate = &local_478;
        local_468.Predicate = &local_478;
        local_488[0] = param_3;
        if ((iVar11 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Num >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                               ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar14 = (iVar11 + -2) / 2;
        HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>_>_>
                  (pTVar12,iVar14,iVar11,local_488,&local_468);
        while (iVar14 != 0) {
          iVar14 = iVar14 + -1;
          HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>_>_>
                    (pTVar12,iVar14,iVar11,local_488,&local_468);
        }
        iVar11 = iVar11 + -1;
        if (0 < iVar11) {
          lVar8 = (longlong)iVar11 * 0xf0;
          do {
            local_440 = pTVar12->_s_1;
            TStack_438 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 8);
            pTVar1 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                     (lVar8 + (longlong)pTVar12);
            local_430 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x10);
            TStack_428 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x18);
            local_420 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x20);
            TStack_418 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x28);
            local_410 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x30);
            TStack_408 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x38);
            local_400 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x40);
            TStack_3f8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x48);
            local_3f0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x50);
            TStack_3e8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x58);
            local_3e0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x60);
            TStack_3d8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x68);
            local_3d0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x70);
            TStack_3c8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x78);
            local_3c0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x80);
            TStack_3b8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x88);
            local_3b0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0x90);
            TStack_3a8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0x98);
            local_3a0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0xa0);
            TStack_398 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0xa8);
            local_390 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0xb0);
            TStack_388 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0xb8);
            local_380 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0xc0);
            TStack_378 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 200);
            local_370 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0xd0);
            TStack_368 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0xd8);
            local_360 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                         ((pTVar12->ElementData).Pad + 0xe0);
            TStack_358 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                          ((pTVar12->ElementData).Pad + 0xe8);
            TVar4 = pTVar1[1];
            pTVar12->_s_1 = *pTVar1;
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 8) = TVar4;
            TVar4 = pTVar1[3];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x10) = pTVar1[2];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x18) = TVar4;
            TVar4 = pTVar1[5];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x20) = pTVar1[4];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x28) = TVar4;
            TVar4 = pTVar1[7];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x30) = pTVar1[6];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x38) = TVar4;
            TVar4 = pTVar1[9];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x40) = pTVar1[8];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x48) = TVar4;
            TVar4 = pTVar1[0xb];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x50) = pTVar1[10];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x58) = TVar4;
            TVar4 = pTVar1[0xd];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x60) = pTVar1[0xc];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x68) = TVar4;
            TVar4 = pTVar1[0xf];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x70) = pTVar1[0xe];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x78) = TVar4;
            TVar4 = pTVar1[0x11];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x80) = pTVar1[0x10];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x88) = TVar4;
            TVar4 = pTVar1[0x13];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x90) = pTVar1[0x12];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0x98) = TVar4;
            TVar4 = pTVar1[0x15];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xa0) = pTVar1[0x14];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xa8) = TVar4;
            TVar4 = pTVar1[0x17];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xb0) = pTVar1[0x16];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xb8) = TVar4;
            TVar4 = pTVar1[0x19];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xc0) = pTVar1[0x18];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 200) = TVar4;
            TVar4 = pTVar1[0x1b];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xd0) = pTVar1[0x1a];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xd8) = TVar4;
            TVar4 = pTVar1[0x1d];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xe0) = pTVar1[0x1c];
            *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
             ((pTVar12->ElementData).Pad + 0xe8) = TVar4;
            *pTVar1 = local_440;
            pTVar1[1] = TStack_438;
            pTVar1[2] = local_430;
            pTVar1[3] = TStack_428;
            pTVar1[4] = local_420;
            pTVar1[5] = TStack_418;
            pTVar1[6] = local_410;
            pTVar1[7] = TStack_408;
            pTVar1[8] = local_400;
            pTVar1[9] = TStack_3f8;
            pTVar1[10] = local_3f0;
            pTVar1[0xb] = TStack_3e8;
            pTVar1[0xc] = local_3e0;
            pTVar1[0xd] = TStack_3d8;
            pTVar1[0xe] = local_3d0;
            pTVar1[0xf] = TStack_3c8;
            pTVar1[0x10] = local_3c0;
            pTVar1[0x11] = TStack_3b8;
            pTVar1[0x12] = local_3b0;
            pTVar1[0x13] = TStack_3a8;
            pTVar1[0x14] = local_3a0;
            pTVar1[0x15] = TStack_398;
            pTVar1[0x16] = local_390;
            pTVar1[0x17] = TStack_388;
            pTVar1[0x18] = local_380;
            pTVar1[0x19] = TStack_378;
            pTVar1[0x1a] = local_370;
            pTVar1[0x1b] = TStack_368;
            pTVar1[0x1c] = local_360;
            pTVar1[0x1d] = TStack_358;
            HeapSiftDown<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>_>_>
                      (pTVar12,0,iVar11,local_480,local_460);
            iVar11 = iVar11 + -1;
            lVar8 = lVar8 + -0xf0;
          } while (0 < iVar11);
        }
      }
      else if (iVar11 != 0) goto LAB_148bf04ad;
LAB_148bf0730:
      ppTVar15 = ppTVar15 + -3;
    } while (&local_348 <= ppTVar15);
  }
  return;
LAB_148beff87:
  local_440 = pTVar19->_s_1;
  TStack_438 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 8);
  local_430 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x10);
  TStack_428 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x18);
  local_420 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x20);
  TStack_418 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x28);
  local_410 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x30);
  TStack_408 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x38);
  local_400 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x40);
  TStack_3f8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x48);
  local_3f0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x50);
  TStack_3e8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x58);
  local_3e0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x60);
  TStack_3d8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x68);
  local_3d0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x70);
  TStack_3c8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x78);
  local_3c0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x80);
  TStack_3b8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x88);
  local_3b0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0x90);
  TStack_3a8 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0x98);
  local_3a0 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0xa0);
  TStack_398 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0xa8);
  local_390 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0xb0);
  TStack_388 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0xb8);
  local_380 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0xc0);
  TStack_378 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 200);
  local_370 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0xd0);
  TStack_368 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0xd8);
  local_360 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
               ((pTVar19->ElementData).Pad + 0xe0);
  TStack_358 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)
                ((pTVar19->ElementData).Pad + 0xe8);
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0xe8);
  pTVar19->_s_1 = pTVar17->_s_1;
  *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0xd8);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar18 + -0xe0);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -200);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar18 + -0xd0);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0xb8);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar18 + -0xc0);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x38) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0xa8);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x40) = *(undefined8 *)((longlong)pTVar18 + -0xb0);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x48) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x98);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x50) = *(undefined8 *)((longlong)pTVar18 + -0xa0);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x58) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x88);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x60) = *(undefined8 *)((longlong)pTVar18 + -0x90);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x68) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x78);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x70) = *(undefined8 *)((longlong)pTVar18 + -0x80);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x78) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x68);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x80) = *(undefined8 *)((longlong)pTVar18 + -0x70);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x88) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x58);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x90) = *(undefined8 *)((longlong)pTVar18 + -0x60);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0x98) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x48);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xa0) = *(undefined8 *)((longlong)pTVar18 + -0x50);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xa8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x38);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xb0) = *(undefined8 *)((longlong)pTVar18 + -0x40);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xb8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x28);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xc0) = *(undefined8 *)((longlong)pTVar18 + -0x30);
  *(undefined8 *)((pTVar19->ElementData).Pad + 200) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -0x18);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xd0) = *(undefined8 *)((longlong)pTVar18 + -0x20);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xd8) = uVar3;
  uVar3 = *(undefined8 *)((longlong)pTVar18 + -8);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xe0) = *(undefined8 *)((longlong)pTVar18 + -0x10);
  *(undefined8 *)((pTVar19->ElementData).Pad + 0xe8) = uVar3;
  pTVar17->_s_1 = local_440;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xe8) =
       TStack_438;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xe0) =
       local_430;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xd8) =
       TStack_428;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xd0) =
       local_420;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -200) =
       TStack_418;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xc0) =
       local_410;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xb8) =
       TStack_408;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xb0) =
       local_400;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xa8) =
       TStack_3f8;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0xa0) =
       local_3f0;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x98) =
       TStack_3e8;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x90) =
       local_3e0;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x88) =
       TStack_3d8;
  iVar14 = (int)local_478.Predicate + -1;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x80) =
       local_3d0;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x78) =
       TStack_3c8;
  local_478.Predicate._0_4_ = iVar14;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x70) =
       local_3c0;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x68) =
       TStack_3b8;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x60) =
       local_3b0;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x58) =
       TStack_3a8;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x50) =
       local_3a0;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x48) =
       TStack_398;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x40) =
       local_390;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x38) =
       TStack_388;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x30) =
       local_380;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x28) =
       TStack_378;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x20) =
       local_370;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x18) =
       TStack_368;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -0x10) =
       local_360;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>_s_1 *)((longlong)pTVar18 + -8) =
       TStack_358;
  lVar8 = (longlong)pTVar17 + (-0xf0 - (longlong)pTVar19);
  lVar8 = lVar8 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8);
  lVar10 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pTVar16 - (longlong)pTVar12),8) +
           ((longlong)pTVar16 - (longlong)pTVar12);
  if ((lVar8 >> 7) - (lVar8 >> 0x3f) < (lVar10 >> 7) - (lVar10 >> 0x3f)) {
    if (pTVar12 < pTVar16) {
      *ppTVar15 = pTVar12;
      ppTVar15[1] = pTVar16;
      *(int *)(ppTVar15 + 2) = iVar14;
      ppTVar15 = ppTVar15 + 3;
      local_470 = ppTVar15;
    }
    if (pTVar17 <= pTVar19 + 1) goto LAB_148bf0730;
    pTVar16 = pTVar18 + -2;
    pTVar12 = pTVar19;
  }
  else {
    if (pTVar19 + 1 < pTVar17) {
      *ppTVar15 = pTVar19;
      ppTVar15[1] = pTVar18 + -2;
      *(int *)(ppTVar15 + 2) = iVar14;
      ppTVar15 = ppTVar15 + 3;
      local_470 = ppTVar15;
    }
    if (pTVar16 <= pTVar12) goto LAB_148bf0730;
  }
  lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pTVar16 - (longlong)pTVar12),8) +
          ((longlong)pTVar16 - (longlong)pTVar12);
  iVar11 = ((int)(lVar8 >> 7) - (int)(lVar8 >> 0x3f)) + 1;
  pTVar19 = pTVar12;
  if (iVar14 == 0) goto LAB_148bf0222;
  goto LAB_148befbd6;
}

// IntroSortInternal<FAutomationTestExcludelistEntry,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestExcludelistEntry,``anonymous_namespace'::SortExcludelist'::__l2::<lambda_1>_>_> @ 148bf07a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FAutomationTestExcludelistEntry,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestExcludelistEntry,__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>
          (FAutomationTestExcludelistEntry *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAutomationTestExcludelistEntry,_void___cdecl__anonymous_namespace_::SortExcludelist(TArray<FAutomationTestExcludelistEntry,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  FName FVar5;
  undefined8 uVar6;
  undefined3 uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  undefined4 uVar11;
  uchar uVar12;
  undefined7 uVar13;
  bool bVar14;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  int iVar19;
  FAutomationTestExcludelistEntry *pFVar20;
  FAutomationTestExcludelistEntry *pFVar21;
  int iVar22;
  FAutomationTestExcludelistEntry **ppFVar23;
  FAutomationTestExcludelistEntry *pFVar24;
  FAutomationTestExcludelistEntry *pFVar25;
  FAutomationTestExcludelistEntry *pFVar26;
  FAutomationTestExcludelistEntry *pFVar27;
  float fVar28;
  undefined1 auStackY_498 [32];
  FIdentityFunctor local_468 [8];
  FIdentityFunctor local_460 [8];
  TDereferenceWrapper<FAutomationTestExcludelistEntry,_void___cdecl__anonymous_namespace_::SortExcludelist(TArray<FAutomationTestExcludelistEntry,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>
  local_458;
  FAutomationTestExcludelistEntry **local_450;
  TReversePredicate<TDereferenceWrapper<FAutomationTestExcludelistEntry,_void___cdecl__anonymous_namespace_::SortExcludelist(TArray<FAutomationTestExcludelistEntry,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>_>
  local_448;
  TReversePredicate<TDereferenceWrapper<FAutomationTestExcludelistEntry,_void___cdecl__anonymous_namespace_::SortExcludelist(TArray<FAutomationTestExcludelistEntry,TSizedDefaultAllocator<32>_>_&)_::_2_::<lambda_1>_>_>
  local_440 [3];
  FAutomationTestExcludelistEntry *local_428;
  FScriptContainerElement *local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  ForElementType<FSetElementId> FStack_3c8;
  undefined8 local_3c0;
  FName FStack_3b8;
  FName local_3b0;
  FName FStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  ForElementType<FSetElementId> local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  FAutomationTestExcludelistEntry *local_348;
  FAutomationTestExcludelistEntry *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar28;
    memset(local_330,0,0x2e8);
    ppFVar23 = &local_348;
    do {
      pFVar24 = ppFVar23[1];
      pFVar20 = *ppFVar23;
      local_428 = ppFVar23[2];
      lVar17 = ((longlong)pFVar24 - (longlong)pFVar20) / 0x36 +
               ((longlong)pFVar24 - (longlong)pFVar20 >> 0x3f);
      iVar19 = ((int)(lVar17 >> 2) - (int)(lVar17 >> 0x3f)) + 1;
      local_458.Predicate._0_4_ = (int)local_428;
      pFVar27 = pFVar20;
      local_450 = ppFVar23;
      if ((int)local_428 != 0) {
LAB_148bf0895:
        if (8 < iVar19) {
          pFVar20 = pFVar27 + iVar19 / 2;
          local_420 = (pFVar20->FullTestName).Data.AllocatorInstance.Data;
          uStack_418._0_4_ = (pFVar20->FullTestName).Data.ArrayNum;
          uStack_418._4_4_ = (pFVar20->FullTestName).Data.ArrayMax;
          local_410._0_1_ = pFVar20->bIsPropagated;
          local_410._1_3_ = *(undefined3 *)&pFVar20->field_0x11;
          local_410._4_4_ = pFVar20->_padding_;
          uStack_408 = *(undefined8 *)&(pFVar20->Platforms).Elements;
          local_400 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x8;
          uStack_3f8 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x10;
          local_3f0 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x18;
          uStack_3e8 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x20;
          local_3e0 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x28;
          uStack_3d8 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x30;
          local_3d0._0_1_ = (pFVar20->Platforms).Hash.InlineData[0];
          local_3d0._1_1_ = (pFVar20->Platforms).Hash.InlineData[1];
          local_3d0._2_1_ = (pFVar20->Platforms).Hash.InlineData[2];
          local_3d0._3_1_ = (pFVar20->Platforms).Hash.InlineData[3];
          local_3d0._4_4_ = (pFVar20->Platforms).Hash._padding_;
          FStack_3c8 = (pFVar20->Platforms).Hash.SecondaryData;
          local_3c0 = *(undefined8 *)&(pFVar20->Platforms).HashSize;
          FStack_3b8 = pFVar20->Map;
          local_3b0 = pFVar20->Test;
          FStack_3a8 = pFVar20->Reason;
          local_3a0 = *(undefined8 *)&(pFVar20->RHIs).Elements;
          uStack_398 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x8;
          local_390 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x10;
          uStack_388 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x18;
          local_380 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x20;
          uStack_378 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x28;
          local_370 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x30;
          uStack_368._0_1_ = (pFVar20->RHIs).Hash.InlineData[0];
          uStack_368._1_1_ = (pFVar20->RHIs).Hash.InlineData[1];
          uStack_368._2_1_ = (pFVar20->RHIs).Hash.InlineData[2];
          uStack_368._3_1_ = (pFVar20->RHIs).Hash.InlineData[3];
          uStack_368._4_4_ = (pFVar20->RHIs).Hash._padding_;
          local_360 = (pFVar20->RHIs).Hash.SecondaryData;
          uStack_358 = *(undefined8 *)&(pFVar20->RHIs).HashSize;
          local_350 = *(undefined8 *)&pFVar20->Warn;
          iVar19 = (pFVar27->FullTestName).Data.ArrayNum;
          iVar22 = (pFVar27->FullTestName).Data.ArrayMax;
          (pFVar20->FullTestName).Data.AllocatorInstance.Data =
               (pFVar27->FullTestName).Data.AllocatorInstance.Data;
          (pFVar20->FullTestName).Data.ArrayNum = iVar19;
          (pFVar20->FullTestName).Data.ArrayMax = iVar22;
          uVar7 = *(undefined3 *)&pFVar27->field_0x11;
          iVar19 = pFVar27->_padding_;
          uVar3 = *(undefined8 *)&(pFVar27->Platforms).Elements;
          pFVar20->bIsPropagated = pFVar27->bIsPropagated;
          *(undefined3 *)&pFVar20->field_0x11 = uVar7;
          pFVar20->_padding_ = iVar19;
          *(undefined8 *)&(pFVar20->Platforms).Elements = uVar3;
          uVar3 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x10;
          *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x8 =
               *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x8;
          *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x10 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x20;
          *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x18 =
               *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x18;
          *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x20 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x30;
          *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x28 =
               *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x28;
          *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x30 = uVar3;
          uVar8 = (pFVar27->Platforms).Hash.InlineData[1];
          uVar9 = (pFVar27->Platforms).Hash.InlineData[2];
          uVar10 = (pFVar27->Platforms).Hash.InlineData[3];
          iVar19 = (pFVar27->Platforms).Hash._padding_;
          FVar4 = (pFVar27->Platforms).Hash.SecondaryData;
          (pFVar20->Platforms).Hash.InlineData[0] = (pFVar27->Platforms).Hash.InlineData[0];
          (pFVar20->Platforms).Hash.InlineData[1] = uVar8;
          (pFVar20->Platforms).Hash.InlineData[2] = uVar9;
          (pFVar20->Platforms).Hash.InlineData[3] = uVar10;
          (pFVar20->Platforms).Hash._padding_ = iVar19;
          (pFVar20->Platforms).Hash.SecondaryData = FVar4;
          uVar11 = *(undefined4 *)&(pFVar27->Platforms).field_0x4c;
          FVar5 = pFVar27->Map;
          (pFVar20->Platforms).HashSize = (pFVar27->Platforms).HashSize;
          *(undefined4 *)&(pFVar20->Platforms).field_0x4c = uVar11;
          pFVar20->Map = FVar5;
          FVar5 = pFVar27->Reason;
          pFVar20->Test = pFVar27->Test;
          pFVar20->Reason = FVar5;
          uVar3 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x8;
          *(undefined8 *)&(pFVar20->RHIs).Elements = *(undefined8 *)&(pFVar27->RHIs).Elements;
          *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x8 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x18;
          *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x10 =
               *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x10;
          *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x18 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x28;
          *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x20 =
               *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x20;
          *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x28 = uVar3;
          uVar8 = (pFVar27->RHIs).Hash.InlineData[0];
          uVar9 = (pFVar27->RHIs).Hash.InlineData[1];
          uVar10 = (pFVar27->RHIs).Hash.InlineData[2];
          uVar12 = (pFVar27->RHIs).Hash.InlineData[3];
          iVar19 = (pFVar27->RHIs).Hash._padding_;
          *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x30 =
               *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x30;
          (pFVar20->RHIs).Hash.InlineData[0] = uVar8;
          (pFVar20->RHIs).Hash.InlineData[1] = uVar9;
          (pFVar20->RHIs).Hash.InlineData[2] = uVar10;
          (pFVar20->RHIs).Hash.InlineData[3] = uVar12;
          (pFVar20->RHIs).Hash._padding_ = iVar19;
          iVar19 = (pFVar27->RHIs).HashSize;
          uVar11 = *(undefined4 *)&(pFVar27->RHIs).field_0x4c;
          (pFVar20->RHIs).Hash.SecondaryData = (pFVar27->RHIs).Hash.SecondaryData;
          (pFVar20->RHIs).HashSize = iVar19;
          *(undefined4 *)&(pFVar20->RHIs).field_0x4c = uVar11;
          uVar13 = *(undefined7 *)&pFVar27->field_0xd1;
          pFVar20->Warn = pFVar27->Warn;
          *(undefined7 *)&pFVar20->field_0xd1 = uVar13;
          (pFVar27->FullTestName).Data.AllocatorInstance.Data = local_420;
          (pFVar27->FullTestName).Data.ArrayNum = (undefined4)uStack_418;
          (pFVar27->FullTestName).Data.ArrayMax = uStack_418._4_4_;
          pFVar27->bIsPropagated = (bool)(undefined1)local_410;
          *(undefined3 *)&pFVar27->field_0x11 = local_410._1_3_;
          pFVar27->_padding_ = local_410._4_4_;
          *(undefined8 *)&(pFVar27->Platforms).Elements = uStack_408;
          *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x8 = local_400;
          *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x10 = uStack_3f8;
          *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x18 = local_3f0;
          *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x20 = uStack_3e8;
          *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x28 = local_3e0;
          *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x30 = uStack_3d8;
          (pFVar27->Platforms).Hash.InlineData[0] = (undefined1)local_3d0;
          (pFVar27->Platforms).Hash.InlineData[1] = local_3d0._1_1_;
          (pFVar27->Platforms).Hash.InlineData[2] = local_3d0._2_1_;
          (pFVar27->Platforms).Hash.InlineData[3] = local_3d0._3_1_;
          (pFVar27->Platforms).Hash._padding_ = local_3d0._4_4_;
          (pFVar27->Platforms).Hash.SecondaryData = FStack_3c8;
          pFVar25 = pFVar24 + 1;
          *(undefined8 *)&(pFVar27->Platforms).HashSize = local_3c0;
          pFVar27->Map = FStack_3b8;
          pFVar20 = pFVar27;
          pFVar21 = pFVar27;
          do {
            pTVar15 = &pFVar21->RHIs;
            *(FName *)((longlong)(pTVar15 + -1) + 0x40) = local_3b0;
            *(FName *)((longlong)(pTVar15 + -1) + 0x48) = FStack_3a8;
            *(undefined8 *)&pTVar15->Elements = local_3a0;
            *(undefined8 *)&(pTVar15->Elements).field_0x8 = uStack_398;
            *(undefined8 *)&(pTVar15->Elements).field_0x10 = local_390;
            *(undefined8 *)&(pTVar15->Elements).field_0x18 = uStack_388;
            *(undefined8 *)&(pTVar15->Elements).field_0x20 = local_380;
            *(undefined8 *)&(pTVar15->Elements).field_0x28 = uStack_378;
            *(undefined8 *)&(pTVar15->Elements).field_0x30 = local_370;
            (pTVar15->Hash).InlineData[0] = (undefined1)uStack_368;
            (pTVar15->Hash).InlineData[1] = uStack_368._1_1_;
            (pTVar15->Hash).InlineData[2] = uStack_368._2_1_;
            (pTVar15->Hash).InlineData[3] = uStack_368._3_1_;
            (pTVar15->Hash)._padding_ = uStack_368._4_4_;
            (pTVar15->Hash).SecondaryData = local_360;
            *(undefined8 *)&pTVar15->HashSize = uStack_358;
            *(undefined8 *)(pTVar15 + 1) = local_350;
            do {
              pFVar21 = pFVar20;
              pFVar20 = pFVar21 + 1;
              if (pFVar24 < pFVar20) break;
              if (pFVar21[1].FullTestName.Data.ArrayNum == 0) {
                pwVar18 = L"";
              }
              else {
                pwVar18 = (wchar_t *)(pFVar20->FullTestName).Data.AllocatorInstance.Data;
              }
              if ((pFVar27->FullTestName).Data.ArrayNum == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = (wchar_t *)(pFVar27->FullTestName).Data.AllocatorInstance.Data;
              }
              iVar19 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar18);
            } while (-1 < iVar19);
            do {
              pFVar26 = pFVar25;
              pFVar25 = pFVar26 + -1;
              if (pFVar25 <= pFVar27) break;
              if ((pFVar27->FullTestName).Data.ArrayNum == 0) {
                pwVar18 = L"";
              }
              else {
                pwVar18 = (wchar_t *)(pFVar27->FullTestName).Data.AllocatorInstance.Data;
              }
              if (pFVar26[-1].FullTestName.Data.ArrayNum == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = (wchar_t *)(pFVar25->FullTestName).Data.AllocatorInstance.Data;
              }
              iVar19 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar18);
            } while (-1 < iVar19);
            if (pFVar25 < pFVar20) goto LAB_148bf0c17;
            local_420 = (pFVar20->FullTestName).Data.AllocatorInstance.Data;
            uStack_418._0_4_ = pFVar21[1].FullTestName.Data.ArrayNum;
            uStack_418._4_4_ = pFVar21[1].FullTestName.Data.ArrayMax;
            local_410._0_1_ = pFVar21[1].bIsPropagated;
            local_410._1_3_ = *(undefined3 *)&pFVar21[1].field_0x11;
            local_410._4_4_ = pFVar21[1]._padding_;
            uStack_408 = *(undefined8 *)&pFVar21[1].Platforms.Elements;
            local_400 = *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x8;
            uStack_3f8 = *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x10;
            local_3f0 = *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x18;
            uStack_3e8 = *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x20;
            local_3e0 = *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x28;
            uStack_3d8 = *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x30;
            local_3d0._0_1_ = pFVar21[1].Platforms.Hash.InlineData[0];
            local_3d0._1_1_ = pFVar21[1].Platforms.Hash.InlineData[1];
            local_3d0._2_1_ = pFVar21[1].Platforms.Hash.InlineData[2];
            local_3d0._3_1_ = pFVar21[1].Platforms.Hash.InlineData[3];
            local_3d0._4_4_ = pFVar21[1].Platforms.Hash._padding_;
            FStack_3c8 = pFVar21[1].Platforms.Hash.SecondaryData;
            local_3c0 = *(undefined8 *)&pFVar21[1].Platforms.HashSize;
            FStack_3b8 = pFVar21[1].Map;
            local_3b0 = pFVar21[1].Test;
            FStack_3a8 = pFVar21[1].Reason;
            local_3a0 = *(undefined8 *)&pFVar21[1].RHIs.Elements;
            uStack_398 = *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x8;
            local_390 = *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x10;
            uStack_388 = *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x18;
            local_380 = *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x20;
            uStack_378 = *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x28;
            local_370 = *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x30;
            uStack_368._0_1_ = pFVar21[1].RHIs.Hash.InlineData[0];
            uStack_368._1_1_ = pFVar21[1].RHIs.Hash.InlineData[1];
            uStack_368._2_1_ = pFVar21[1].RHIs.Hash.InlineData[2];
            uStack_368._3_1_ = pFVar21[1].RHIs.Hash.InlineData[3];
            uStack_368._4_4_ = pFVar21[1].RHIs.Hash._padding_;
            local_360 = pFVar21[1].RHIs.Hash.SecondaryData;
            uStack_358 = *(undefined8 *)&pFVar21[1].RHIs.HashSize;
            local_350 = *(undefined8 *)&pFVar21[1].Warn;
            iVar19 = pFVar26[-1].FullTestName.Data.ArrayNum;
            iVar22 = pFVar26[-1].FullTestName.Data.ArrayMax;
            (pFVar20->FullTestName).Data.AllocatorInstance.Data =
                 (pFVar25->FullTestName).Data.AllocatorInstance.Data;
            pFVar21[1].FullTestName.Data.ArrayNum = iVar19;
            pFVar21[1].FullTestName.Data.ArrayMax = iVar22;
            uVar7 = *(undefined3 *)&pFVar26[-1].field_0x11;
            iVar19 = pFVar26[-1]._padding_;
            uVar3 = *(undefined8 *)&pFVar26[-1].Platforms.Elements;
            pFVar21[1].bIsPropagated = pFVar26[-1].bIsPropagated;
            *(undefined3 *)&pFVar21[1].field_0x11 = uVar7;
            pFVar21[1]._padding_ = iVar19;
            *(undefined8 *)&pFVar21[1].Platforms.Elements = uVar3;
            uVar3 = *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x10;
            *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x8 =
                 *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x8;
            *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x10 = uVar3;
            uVar3 = *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x20;
            *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x18 =
                 *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x18;
            *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x20 = uVar3;
            uVar3 = *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x30;
            *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x28 =
                 *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x28;
            *(undefined8 *)&pFVar21[1].Platforms.Elements.field_0x30 = uVar3;
            uVar8 = pFVar26[-1].Platforms.Hash.InlineData[1];
            uVar9 = pFVar26[-1].Platforms.Hash.InlineData[2];
            uVar10 = pFVar26[-1].Platforms.Hash.InlineData[3];
            iVar19 = pFVar26[-1].Platforms.Hash._padding_;
            FVar4 = pFVar26[-1].Platforms.Hash.SecondaryData;
            pFVar21[1].Platforms.Hash.InlineData[0] = pFVar26[-1].Platforms.Hash.InlineData[0];
            pFVar21[1].Platforms.Hash.InlineData[1] = uVar8;
            pFVar21[1].Platforms.Hash.InlineData[2] = uVar9;
            pFVar21[1].Platforms.Hash.InlineData[3] = uVar10;
            pFVar21[1].Platforms.Hash._padding_ = iVar19;
            pFVar21[1].Platforms.Hash.SecondaryData = FVar4;
            uVar11 = *(undefined4 *)&pFVar26[-1].Platforms.field_0x4c;
            FVar5 = pFVar26[-1].Map;
            pFVar21[1].Platforms.HashSize = pFVar26[-1].Platforms.HashSize;
            *(undefined4 *)&pFVar21[1].Platforms.field_0x4c = uVar11;
            pFVar21[1].Map = FVar5;
            FVar5 = pFVar26[-1].Reason;
            pFVar21[1].Test = pFVar26[-1].Test;
            pFVar21[1].Reason = FVar5;
            uVar3 = *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x8;
            *(undefined8 *)&pFVar21[1].RHIs.Elements = *(undefined8 *)&pFVar26[-1].RHIs.Elements;
            *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x8 = uVar3;
            uVar3 = *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x18;
            *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x10 =
                 *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x10;
            *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x18 = uVar3;
            uVar3 = *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x28;
            *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x20 =
                 *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x20;
            *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x28 = uVar3;
            uVar8 = pFVar26[-1].RHIs.Hash.InlineData[0];
            uVar9 = pFVar26[-1].RHIs.Hash.InlineData[1];
            uVar10 = pFVar26[-1].RHIs.Hash.InlineData[2];
            uVar12 = pFVar26[-1].RHIs.Hash.InlineData[3];
            iVar19 = pFVar26[-1].RHIs.Hash._padding_;
            *(undefined8 *)&pFVar21[1].RHIs.Elements.field_0x30 =
                 *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x30;
            pFVar21[1].RHIs.Hash.InlineData[0] = uVar8;
            pFVar21[1].RHIs.Hash.InlineData[1] = uVar9;
            pFVar21[1].RHIs.Hash.InlineData[2] = uVar10;
            pFVar21[1].RHIs.Hash.InlineData[3] = uVar12;
            pFVar21[1].RHIs.Hash._padding_ = iVar19;
            iVar19 = pFVar26[-1].RHIs.HashSize;
            uVar11 = *(undefined4 *)&pFVar26[-1].RHIs.field_0x4c;
            pFVar21[1].RHIs.Hash.SecondaryData = pFVar26[-1].RHIs.Hash.SecondaryData;
            pFVar21[1].RHIs.HashSize = iVar19;
            *(undefined4 *)&pFVar21[1].RHIs.field_0x4c = uVar11;
            uVar13 = *(undefined7 *)&pFVar26[-1].field_0xd1;
            pFVar21[1].Warn = pFVar26[-1].Warn;
            *(undefined7 *)&pFVar21[1].field_0xd1 = uVar13;
            pFVar21 = pFVar26 + -1;
            (pFVar25->FullTestName).Data.AllocatorInstance.Data = local_420;
            pFVar26[-1].FullTestName.Data.ArrayNum = (undefined4)uStack_418;
            pFVar26[-1].FullTestName.Data.ArrayMax = uStack_418._4_4_;
            pFVar26[-1].bIsPropagated = (bool)(undefined1)local_410;
            *(undefined3 *)&pFVar26[-1].field_0x11 = local_410._1_3_;
            pFVar26[-1]._padding_ = local_410._4_4_;
            *(undefined8 *)&pFVar26[-1].Platforms.Elements = uStack_408;
            *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x8 = local_400;
            *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x10 = uStack_3f8;
            *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x18 = local_3f0;
            *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x20 = uStack_3e8;
            *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x28 = local_3e0;
            *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x30 = uStack_3d8;
            pFVar26[-1].Platforms.Hash.InlineData[0] = (undefined1)local_3d0;
            pFVar26[-1].Platforms.Hash.InlineData[1] = local_3d0._1_1_;
            pFVar26[-1].Platforms.Hash.InlineData[2] = local_3d0._2_1_;
            pFVar26[-1].Platforms.Hash.InlineData[3] = local_3d0._3_1_;
            pFVar26[-1].Platforms.Hash._padding_ = local_3d0._4_4_;
            pFVar26[-1].Platforms.Hash.SecondaryData = FStack_3c8;
            *(undefined8 *)&pFVar26[-1].Platforms.HashSize = local_3c0;
            pFVar26[-1].Map = FStack_3b8;
          } while( true );
        }
        for (; pFVar25 = pFVar27, pFVar20 = pFVar27, pFVar27 < pFVar24; pFVar24 = pFVar24 + -1) {
          while (pFVar21 = pFVar25, pFVar20 = pFVar20 + 1, pFVar20 <= pFVar24) {
            if ((pFVar20->FullTestName).Data.ArrayNum == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = (wchar_t *)(pFVar20->FullTestName).Data.AllocatorInstance.Data;
            }
            if ((pFVar21->FullTestName).Data.ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar21->FullTestName).Data.AllocatorInstance.Data;
            }
            iVar19 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar18);
            pFVar25 = pFVar20;
            if (-1 < iVar19) {
              pFVar25 = pFVar21;
            }
          }
          local_420 = (pFVar21->FullTestName).Data.AllocatorInstance.Data;
          uStack_418._0_4_ = (pFVar21->FullTestName).Data.ArrayNum;
          uStack_418._4_4_ = (pFVar21->FullTestName).Data.ArrayMax;
          local_410._0_1_ = pFVar21->bIsPropagated;
          local_410._1_3_ = *(undefined3 *)&pFVar21->field_0x11;
          local_410._4_4_ = pFVar21->_padding_;
          uStack_408 = *(undefined8 *)&(pFVar21->Platforms).Elements;
          local_400 = *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x8;
          uStack_3f8 = *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x10;
          local_3f0 = *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x18;
          uStack_3e8 = *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x20;
          local_3e0 = *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x28;
          uStack_3d8 = *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x30;
          local_3d0._0_1_ = (pFVar21->Platforms).Hash.InlineData[0];
          local_3d0._1_1_ = (pFVar21->Platforms).Hash.InlineData[1];
          local_3d0._2_1_ = (pFVar21->Platforms).Hash.InlineData[2];
          local_3d0._3_1_ = (pFVar21->Platforms).Hash.InlineData[3];
          local_3d0._4_4_ = (pFVar21->Platforms).Hash._padding_;
          FStack_3c8 = (pFVar21->Platforms).Hash.SecondaryData;
          local_3c0 = *(undefined8 *)&(pFVar21->Platforms).HashSize;
          FStack_3b8 = pFVar21->Map;
          local_3b0 = pFVar21->Test;
          FStack_3a8 = pFVar21->Reason;
          local_3a0 = *(undefined8 *)&(pFVar21->RHIs).Elements;
          uStack_398 = *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x8;
          local_390 = *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x10;
          uStack_388 = *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x18;
          local_380 = *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x20;
          uStack_378 = *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x28;
          local_370 = *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x30;
          uStack_368._0_1_ = (pFVar21->RHIs).Hash.InlineData[0];
          uStack_368._1_1_ = (pFVar21->RHIs).Hash.InlineData[1];
          uStack_368._2_1_ = (pFVar21->RHIs).Hash.InlineData[2];
          uStack_368._3_1_ = (pFVar21->RHIs).Hash.InlineData[3];
          uStack_368._4_4_ = (pFVar21->RHIs).Hash._padding_;
          local_360 = (pFVar21->RHIs).Hash.SecondaryData;
          uStack_358 = *(undefined8 *)&(pFVar21->RHIs).HashSize;
          local_350 = *(undefined8 *)&pFVar21->Warn;
          iVar19 = (pFVar24->FullTestName).Data.ArrayNum;
          iVar22 = (pFVar24->FullTestName).Data.ArrayMax;
          (pFVar21->FullTestName).Data.AllocatorInstance.Data =
               (pFVar24->FullTestName).Data.AllocatorInstance.Data;
          (pFVar21->FullTestName).Data.ArrayNum = iVar19;
          (pFVar21->FullTestName).Data.ArrayMax = iVar22;
          uVar7 = *(undefined3 *)&pFVar24->field_0x11;
          iVar19 = pFVar24->_padding_;
          uVar3 = *(undefined8 *)&(pFVar24->Platforms).Elements;
          pFVar21->bIsPropagated = pFVar24->bIsPropagated;
          *(undefined3 *)&pFVar21->field_0x11 = uVar7;
          pFVar21->_padding_ = iVar19;
          *(undefined8 *)&(pFVar21->Platforms).Elements = uVar3;
          uVar3 = *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x10;
          *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x8 =
               *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x8;
          *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x10 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x20;
          *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x18 =
               *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x18;
          *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x20 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x30;
          *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x28 =
               *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x28;
          *(undefined8 *)&(pFVar21->Platforms).Elements.field_0x30 = uVar3;
          uVar8 = (pFVar24->Platforms).Hash.InlineData[1];
          uVar9 = (pFVar24->Platforms).Hash.InlineData[2];
          uVar10 = (pFVar24->Platforms).Hash.InlineData[3];
          iVar19 = (pFVar24->Platforms).Hash._padding_;
          FVar4 = (pFVar24->Platforms).Hash.SecondaryData;
          (pFVar21->Platforms).Hash.InlineData[0] = (pFVar24->Platforms).Hash.InlineData[0];
          (pFVar21->Platforms).Hash.InlineData[1] = uVar8;
          (pFVar21->Platforms).Hash.InlineData[2] = uVar9;
          (pFVar21->Platforms).Hash.InlineData[3] = uVar10;
          (pFVar21->Platforms).Hash._padding_ = iVar19;
          (pFVar21->Platforms).Hash.SecondaryData = FVar4;
          uVar11 = *(undefined4 *)&(pFVar24->Platforms).field_0x4c;
          FVar5 = pFVar24->Map;
          (pFVar21->Platforms).HashSize = (pFVar24->Platforms).HashSize;
          *(undefined4 *)&(pFVar21->Platforms).field_0x4c = uVar11;
          pFVar21->Map = FVar5;
          FVar5 = pFVar24->Reason;
          pFVar21->Test = pFVar24->Test;
          pFVar21->Reason = FVar5;
          uVar3 = *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x8;
          *(undefined8 *)&(pFVar21->RHIs).Elements = *(undefined8 *)&(pFVar24->RHIs).Elements;
          *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x8 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x18;
          *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x10 =
               *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x10;
          *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x18 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x28;
          *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x20 =
               *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x20;
          *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x28 = uVar3;
          uVar8 = (pFVar24->RHIs).Hash.InlineData[0];
          uVar9 = (pFVar24->RHIs).Hash.InlineData[1];
          uVar10 = (pFVar24->RHIs).Hash.InlineData[2];
          uVar12 = (pFVar24->RHIs).Hash.InlineData[3];
          iVar19 = (pFVar24->RHIs).Hash._padding_;
          *(undefined8 *)&(pFVar21->RHIs).Elements.field_0x30 =
               *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x30;
          (pFVar21->RHIs).Hash.InlineData[0] = uVar8;
          (pFVar21->RHIs).Hash.InlineData[1] = uVar9;
          (pFVar21->RHIs).Hash.InlineData[2] = uVar10;
          (pFVar21->RHIs).Hash.InlineData[3] = uVar12;
          (pFVar21->RHIs).Hash._padding_ = iVar19;
          iVar19 = (pFVar24->RHIs).HashSize;
          uVar11 = *(undefined4 *)&(pFVar24->RHIs).field_0x4c;
          (pFVar21->RHIs).Hash.SecondaryData = (pFVar24->RHIs).Hash.SecondaryData;
          (pFVar21->RHIs).HashSize = iVar19;
          *(undefined4 *)&(pFVar21->RHIs).field_0x4c = uVar11;
          uVar13 = *(undefined7 *)&pFVar24->field_0xd1;
          pFVar21->Warn = pFVar24->Warn;
          *(undefined7 *)&pFVar21->field_0xd1 = uVar13;
          (pFVar24->FullTestName).Data.AllocatorInstance.Data = local_420;
          (pFVar24->FullTestName).Data.ArrayNum = (undefined4)uStack_418;
          (pFVar24->FullTestName).Data.ArrayMax = uStack_418._4_4_;
          pFVar24->bIsPropagated = (bool)(undefined1)local_410;
          *(undefined3 *)&pFVar24->field_0x11 = local_410._1_3_;
          pFVar24->_padding_ = local_410._4_4_;
          *(undefined8 *)&(pFVar24->Platforms).Elements = uStack_408;
          *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x8 = local_400;
          *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x10 = uStack_3f8;
          *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x18 = local_3f0;
          *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x20 = uStack_3e8;
          *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x28 = local_3e0;
          *(undefined8 *)&(pFVar24->Platforms).Elements.field_0x30 = uStack_3d8;
          (pFVar24->Platforms).Hash.InlineData[0] = (undefined1)local_3d0;
          (pFVar24->Platforms).Hash.InlineData[1] = local_3d0._1_1_;
          (pFVar24->Platforms).Hash.InlineData[2] = local_3d0._2_1_;
          (pFVar24->Platforms).Hash.InlineData[3] = local_3d0._3_1_;
          (pFVar24->Platforms).Hash._padding_ = local_3d0._4_4_;
          (pFVar24->Platforms).Hash.SecondaryData = FStack_3c8;
          *(undefined8 *)&(pFVar24->Platforms).HashSize = local_3c0;
          pFVar24->Map = FStack_3b8;
          pFVar24->Test = local_3b0;
          pFVar24->Reason = FStack_3a8;
          *(undefined8 *)&(pFVar24->RHIs).Elements = local_3a0;
          *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x8 = uStack_398;
          *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x10 = local_390;
          *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x18 = uStack_388;
          *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x20 = local_380;
          *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x28 = uStack_378;
          *(undefined8 *)&(pFVar24->RHIs).Elements.field_0x30 = local_370;
          (pFVar24->RHIs).Hash.InlineData[0] = (undefined1)uStack_368;
          (pFVar24->RHIs).Hash.InlineData[1] = uStack_368._1_1_;
          (pFVar24->RHIs).Hash.InlineData[2] = uStack_368._2_1_;
          (pFVar24->RHIs).Hash.InlineData[3] = uStack_368._3_1_;
          (pFVar24->RHIs).Hash._padding_ = uStack_368._4_4_;
          (pFVar24->RHIs).Hash.SecondaryData = local_360;
          *(undefined8 *)&(pFVar24->RHIs).HashSize = uStack_358;
          *(undefined8 *)&pFVar24->Warn = local_350;
          ppFVar23 = local_450;
        }
        goto LAB_148bf1379;
      }
LAB_148bf0e93:
      local_460[0] = param_3;
      local_458.Predicate = param_4.Predicate;
      if (iVar19 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Num >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                            ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar14) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
LAB_148bf1103:
        local_440[0].Predicate = &local_458;
        local_448.Predicate = &local_458;
        local_468[0] = param_3;
        if ((iVar19 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Num >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                                ,0x97,L"Algo::HeapifyInternal called with negative count"), bVar14))
        {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar22 = (iVar19 + -2) / 2;
        HeapSiftDown<FAutomationTestExcludelistEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAutomationTestExcludelistEntry,__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>
                  (pFVar20,iVar22,iVar19,local_468,&local_448);
        while (iVar22 != 0) {
          iVar22 = iVar22 + -1;
          HeapSiftDown<FAutomationTestExcludelistEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAutomationTestExcludelistEntry,__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>
                    (pFVar20,iVar22,iVar19,local_468,&local_448);
        }
        iVar19 = iVar19 + -1;
        if (0 < iVar19) {
          lVar17 = (longlong)iVar19 * 0xd8;
          do {
            local_420 = (pFVar20->FullTestName).Data.AllocatorInstance.Data;
            uStack_418._0_4_ = (pFVar20->FullTestName).Data.ArrayNum;
            uStack_418._4_4_ = (pFVar20->FullTestName).Data.ArrayMax;
            puVar1 = (undefined8 *)((longlong)(&(pFVar20->Platforms).Hash + -5) + lVar17);
            local_410._0_1_ = pFVar20->bIsPropagated;
            local_410._1_3_ = *(undefined3 *)&pFVar20->field_0x11;
            local_410._4_4_ = pFVar20->_padding_;
            uStack_408 = *(undefined8 *)&(pFVar20->Platforms).Elements;
            local_400 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x8;
            uStack_3f8 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x10;
            local_3f0 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x18;
            uStack_3e8 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x20;
            local_3e0 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x28;
            uStack_3d8 = *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x30;
            local_3d0._0_1_ = (pFVar20->Platforms).Hash.InlineData[0];
            local_3d0._1_1_ = (pFVar20->Platforms).Hash.InlineData[1];
            local_3d0._2_1_ = (pFVar20->Platforms).Hash.InlineData[2];
            local_3d0._3_1_ = (pFVar20->Platforms).Hash.InlineData[3];
            local_3d0._4_4_ = (pFVar20->Platforms).Hash._padding_;
            FStack_3c8 = (pFVar20->Platforms).Hash.SecondaryData;
            local_3c0 = *(undefined8 *)&(pFVar20->Platforms).HashSize;
            FStack_3b8 = pFVar20->Map;
            local_3b0 = pFVar20->Test;
            FStack_3a8 = pFVar20->Reason;
            local_3a0 = *(undefined8 *)&(pFVar20->RHIs).Elements;
            uStack_398 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x8;
            local_390 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x10;
            uStack_388 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x18;
            local_380 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x20;
            uStack_378 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x28;
            local_370 = *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x30;
            uStack_368._0_1_ = (pFVar20->RHIs).Hash.InlineData[0];
            uStack_368._1_1_ = (pFVar20->RHIs).Hash.InlineData[1];
            uStack_368._2_1_ = (pFVar20->RHIs).Hash.InlineData[2];
            uStack_368._3_1_ = (pFVar20->RHIs).Hash.InlineData[3];
            uStack_368._4_4_ = (pFVar20->RHIs).Hash._padding_;
            local_360 = (pFVar20->RHIs).Hash.SecondaryData;
            uStack_358 = *(undefined8 *)&(pFVar20->RHIs).HashSize;
            local_350 = *(undefined8 *)&pFVar20->Warn;
            uVar3 = puVar1[1];
            (pFVar20->FullTestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1
            ;
            (pFVar20->FullTestName).Data.ArrayNum = (int)uVar3;
            (pFVar20->FullTestName).Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
            uVar3 = puVar1[2];
            uVar6 = puVar1[3];
            pFVar20->bIsPropagated = (bool)(char)uVar3;
            *(int3 *)&pFVar20->field_0x11 = (int3)((ulonglong)uVar3 >> 8);
            pFVar20->_padding_ = (int)((ulonglong)uVar3 >> 0x20);
            *(undefined8 *)&(pFVar20->Platforms).Elements = uVar6;
            uVar3 = puVar1[5];
            *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x8 = puVar1[4];
            *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x10 = uVar3;
            uVar3 = puVar1[7];
            *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x18 = puVar1[6];
            *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x20 = uVar3;
            uVar3 = puVar1[9];
            *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x28 = puVar1[8];
            *(undefined8 *)&(pFVar20->Platforms).Elements.field_0x30 = uVar3;
            uVar3 = puVar1[10];
            FVar4 = *(ForElementType<FSetElementId> *)(puVar1 + 0xb);
            (pFVar20->Platforms).Hash.InlineData[0] = (char)uVar3;
            (pFVar20->Platforms).Hash.InlineData[1] = (char)((ulonglong)uVar3 >> 8);
            (pFVar20->Platforms).Hash.InlineData[2] = (char)((ulonglong)uVar3 >> 0x10);
            (pFVar20->Platforms).Hash.InlineData[3] = (char)((ulonglong)uVar3 >> 0x18);
            (pFVar20->Platforms).Hash._padding_ = (int)((ulonglong)uVar3 >> 0x20);
            (pFVar20->Platforms).Hash.SecondaryData = FVar4;
            FVar5 = *(FName *)(puVar1 + 0xd);
            *(undefined8 *)&(pFVar20->Platforms).HashSize = puVar1[0xc];
            pFVar20->Map = FVar5;
            FVar5 = *(FName *)(puVar1 + 0xf);
            pFVar20->Test = *(FName *)(puVar1 + 0xe);
            pFVar20->Reason = FVar5;
            uVar3 = puVar1[0x11];
            *(undefined8 *)&(pFVar20->RHIs).Elements = puVar1[0x10];
            *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x8 = uVar3;
            uVar3 = puVar1[0x13];
            *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x10 = puVar1[0x12];
            *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x18 = uVar3;
            uVar3 = puVar1[0x15];
            *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x20 = puVar1[0x14];
            *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x28 = uVar3;
            uVar3 = puVar1[0x17];
            *(undefined8 *)&(pFVar20->RHIs).Elements.field_0x30 = puVar1[0x16];
            (pFVar20->RHIs).Hash.InlineData[0] = (char)uVar3;
            (pFVar20->RHIs).Hash.InlineData[1] = (char)((ulonglong)uVar3 >> 8);
            (pFVar20->RHIs).Hash.InlineData[2] = (char)((ulonglong)uVar3 >> 0x10);
            (pFVar20->RHIs).Hash.InlineData[3] = (char)((ulonglong)uVar3 >> 0x18);
            (pFVar20->RHIs).Hash._padding_ = (int)((ulonglong)uVar3 >> 0x20);
            uVar3 = puVar1[0x19];
            (pFVar20->RHIs).Hash.SecondaryData = *(ForElementType<FSetElementId> *)(puVar1 + 0x18);
            *(undefined8 *)&(pFVar20->RHIs).HashSize = uVar3;
            *(undefined8 *)&pFVar20->Warn = puVar1[0x1a];
            *puVar1 = local_420;
            puVar1[1] = uStack_418;
            puVar1[2] = local_410;
            puVar1[3] = uStack_408;
            puVar1[4] = local_400;
            puVar1[5] = uStack_3f8;
            puVar1[6] = local_3f0;
            puVar1[7] = uStack_3e8;
            puVar1[8] = local_3e0;
            puVar1[9] = uStack_3d8;
            puVar1[10] = local_3d0;
            *(ForElementType<FSetElementId> *)(puVar1 + 0xb) = FStack_3c8;
            puVar1[0xc] = local_3c0;
            *(FName *)(puVar1 + 0xd) = FStack_3b8;
            *(FName *)(puVar1 + 0xe) = local_3b0;
            *(FName *)(puVar1 + 0xf) = FStack_3a8;
            puVar1[0x10] = local_3a0;
            puVar1[0x11] = uStack_398;
            puVar1[0x12] = local_390;
            puVar1[0x13] = uStack_388;
            puVar1[0x14] = local_380;
            puVar1[0x15] = uStack_378;
            puVar1[0x16] = local_370;
            puVar1[0x17] = uStack_368;
            *(ForElementType<FSetElementId> *)(puVar1 + 0x18) = local_360;
            puVar1[0x19] = uStack_358;
            puVar1[0x1a] = local_350;
            HeapSiftDown<FAutomationTestExcludelistEntry,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FAutomationTestExcludelistEntry,__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>
                      (pFVar20,0,iVar19,local_460,local_440);
            iVar19 = iVar19 + -1;
            lVar17 = lVar17 + -0xd8;
          } while (0 < iVar19);
        }
      }
      else if (iVar19 != 0) goto LAB_148bf1103;
LAB_148bf1379:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_348 <= ppFVar23);
  }
  return;
LAB_148bf0c17:
  local_420 = (pFVar27->FullTestName).Data.AllocatorInstance.Data;
  uStack_418._0_4_ = (pFVar27->FullTestName).Data.ArrayNum;
  uStack_418._4_4_ = (pFVar27->FullTestName).Data.ArrayMax;
  local_410._0_1_ = pFVar27->bIsPropagated;
  local_410._1_3_ = *(undefined3 *)&pFVar27->field_0x11;
  local_410._4_4_ = pFVar27->_padding_;
  uStack_408 = *(undefined8 *)&(pFVar27->Platforms).Elements;
  local_400 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x8;
  uStack_3f8 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x10;
  local_3f0 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x18;
  uStack_3e8 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x20;
  local_3e0 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x28;
  uStack_3d8 = *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x30;
  local_3d0._0_1_ = (pFVar27->Platforms).Hash.InlineData[0];
  local_3d0._1_1_ = (pFVar27->Platforms).Hash.InlineData[1];
  local_3d0._2_1_ = (pFVar27->Platforms).Hash.InlineData[2];
  local_3d0._3_1_ = (pFVar27->Platforms).Hash.InlineData[3];
  local_3d0._4_4_ = (pFVar27->Platforms).Hash._padding_;
  FStack_3c8 = (pFVar27->Platforms).Hash.SecondaryData;
  local_3c0 = *(undefined8 *)&(pFVar27->Platforms).HashSize;
  FStack_3b8 = pFVar27->Map;
  local_3b0 = pFVar27->Test;
  FStack_3a8 = pFVar27->Reason;
  local_3a0 = *(undefined8 *)&(pFVar27->RHIs).Elements;
  uStack_398 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x8;
  local_390 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x10;
  uStack_388 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x18;
  local_380 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x20;
  uStack_378 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x28;
  local_370 = *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x30;
  uStack_368._0_1_ = (pFVar27->RHIs).Hash.InlineData[0];
  uStack_368._1_1_ = (pFVar27->RHIs).Hash.InlineData[1];
  uStack_368._2_1_ = (pFVar27->RHIs).Hash.InlineData[2];
  uStack_368._3_1_ = (pFVar27->RHIs).Hash.InlineData[3];
  uStack_368._4_4_ = (pFVar27->RHIs).Hash._padding_;
  local_360 = (pFVar27->RHIs).Hash.SecondaryData;
  uStack_358 = *(undefined8 *)&(pFVar27->RHIs).HashSize;
  local_350 = *(undefined8 *)&pFVar27->Warn;
  iVar19 = pFVar26[-1].FullTestName.Data.ArrayNum;
  iVar22 = pFVar26[-1].FullTestName.Data.ArrayMax;
  (pFVar27->FullTestName).Data.AllocatorInstance.Data =
       (pFVar25->FullTestName).Data.AllocatorInstance.Data;
  (pFVar27->FullTestName).Data.ArrayNum = iVar19;
  (pFVar27->FullTestName).Data.ArrayMax = iVar22;
  uVar7 = *(undefined3 *)&pFVar26[-1].field_0x11;
  iVar19 = pFVar26[-1]._padding_;
  uVar3 = *(undefined8 *)&pFVar26[-1].Platforms.Elements;
  pFVar27->bIsPropagated = pFVar26[-1].bIsPropagated;
  *(undefined3 *)&pFVar27->field_0x11 = uVar7;
  pFVar27->_padding_ = iVar19;
  *(undefined8 *)&(pFVar27->Platforms).Elements = uVar3;
  uVar3 = *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x10;
  *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x8 =
       *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x8;
  *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x10 = uVar3;
  uVar3 = *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x20;
  *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x18 =
       *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x18;
  *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x20 = uVar3;
  uVar3 = *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x30;
  *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x28 =
       *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x28;
  *(undefined8 *)&(pFVar27->Platforms).Elements.field_0x30 = uVar3;
  uVar8 = pFVar26[-1].Platforms.Hash.InlineData[1];
  uVar9 = pFVar26[-1].Platforms.Hash.InlineData[2];
  uVar10 = pFVar26[-1].Platforms.Hash.InlineData[3];
  iVar19 = pFVar26[-1].Platforms.Hash._padding_;
  FVar4 = pFVar26[-1].Platforms.Hash.SecondaryData;
  (pFVar27->Platforms).Hash.InlineData[0] = pFVar26[-1].Platforms.Hash.InlineData[0];
  (pFVar27->Platforms).Hash.InlineData[1] = uVar8;
  (pFVar27->Platforms).Hash.InlineData[2] = uVar9;
  (pFVar27->Platforms).Hash.InlineData[3] = uVar10;
  (pFVar27->Platforms).Hash._padding_ = iVar19;
  (pFVar27->Platforms).Hash.SecondaryData = FVar4;
  uVar11 = *(undefined4 *)&pFVar26[-1].Platforms.field_0x4c;
  FVar5 = pFVar26[-1].Map;
  (pFVar27->Platforms).HashSize = pFVar26[-1].Platforms.HashSize;
  *(undefined4 *)&(pFVar27->Platforms).field_0x4c = uVar11;
  pFVar27->Map = FVar5;
  FVar5 = pFVar26[-1].Reason;
  pFVar27->Test = pFVar26[-1].Test;
  pFVar27->Reason = FVar5;
  uVar3 = *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x8;
  *(undefined8 *)&(pFVar27->RHIs).Elements = *(undefined8 *)&pFVar26[-1].RHIs.Elements;
  *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x18;
  *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x10 =
       *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x10;
  *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x28;
  *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x20 =
       *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x20;
  *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x28 = uVar3;
  uVar8 = pFVar26[-1].RHIs.Hash.InlineData[0];
  uVar9 = pFVar26[-1].RHIs.Hash.InlineData[1];
  uVar10 = pFVar26[-1].RHIs.Hash.InlineData[2];
  uVar12 = pFVar26[-1].RHIs.Hash.InlineData[3];
  iVar19 = pFVar26[-1].RHIs.Hash._padding_;
  *(undefined8 *)&(pFVar27->RHIs).Elements.field_0x30 =
       *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x30;
  (pFVar27->RHIs).Hash.InlineData[0] = uVar8;
  (pFVar27->RHIs).Hash.InlineData[1] = uVar9;
  (pFVar27->RHIs).Hash.InlineData[2] = uVar10;
  (pFVar27->RHIs).Hash.InlineData[3] = uVar12;
  (pFVar27->RHIs).Hash._padding_ = iVar19;
  iVar19 = pFVar26[-1].RHIs.HashSize;
  uVar11 = *(undefined4 *)&pFVar26[-1].RHIs.field_0x4c;
  (pFVar27->RHIs).Hash.SecondaryData = pFVar26[-1].RHIs.Hash.SecondaryData;
  (pFVar27->RHIs).HashSize = iVar19;
  *(undefined4 *)&(pFVar27->RHIs).field_0x4c = uVar11;
  uVar13 = *(undefined7 *)&pFVar26[-1].field_0xd1;
  pFVar27->Warn = pFVar26[-1].Warn;
  *(undefined7 *)&pFVar27->field_0xd1 = uVar13;
  (pFVar25->FullTestName).Data.AllocatorInstance.Data = local_420;
  pFVar26[-1].FullTestName.Data.ArrayNum = (undefined4)uStack_418;
  pFVar26[-1].FullTestName.Data.ArrayMax = uStack_418._4_4_;
  pFVar26[-1].bIsPropagated = (bool)(undefined1)local_410;
  *(undefined3 *)&pFVar26[-1].field_0x11 = local_410._1_3_;
  pFVar26[-1]._padding_ = local_410._4_4_;
  *(undefined8 *)&pFVar26[-1].Platforms.Elements = uStack_408;
  *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x8 = local_400;
  *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x10 = uStack_3f8;
  *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x18 = local_3f0;
  *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x20 = uStack_3e8;
  *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x28 = local_3e0;
  *(undefined8 *)&pFVar26[-1].Platforms.Elements.field_0x30 = uStack_3d8;
  pFVar26[-1].Platforms.Hash.InlineData[0] = (undefined1)local_3d0;
  pFVar26[-1].Platforms.Hash.InlineData[1] = local_3d0._1_1_;
  pFVar26[-1].Platforms.Hash.InlineData[2] = local_3d0._2_1_;
  pFVar26[-1].Platforms.Hash.InlineData[3] = local_3d0._3_1_;
  pFVar26[-1].Platforms.Hash._padding_ = local_3d0._4_4_;
  pFVar26[-1].Platforms.Hash.SecondaryData = FStack_3c8;
  *(undefined8 *)&pFVar26[-1].Platforms.HashSize = local_3c0;
  pFVar26[-1].Map = FStack_3b8;
  pFVar26[-1].Test = local_3b0;
  pFVar26[-1].Reason = FStack_3a8;
  *(undefined8 *)&pFVar26[-1].RHIs.Elements = local_3a0;
  *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x8 = uStack_398;
  iVar22 = (int)local_458.Predicate + -1;
  *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x10 = local_390;
  *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x18 = uStack_388;
  local_458.Predicate._0_4_ = iVar22;
  *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x20 = local_380;
  *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x28 = uStack_378;
  *(undefined8 *)&pFVar26[-1].RHIs.Elements.field_0x30 = local_370;
  pFVar26[-1].RHIs.Hash.InlineData[0] = (undefined1)uStack_368;
  pFVar26[-1].RHIs.Hash.InlineData[1] = uStack_368._1_1_;
  pFVar26[-1].RHIs.Hash.InlineData[2] = uStack_368._2_1_;
  pFVar26[-1].RHIs.Hash.InlineData[3] = uStack_368._3_1_;
  pFVar26[-1].RHIs.Hash._padding_ = uStack_368._4_4_;
  pFVar26[-1].RHIs.Hash.SecondaryData = local_360;
  *(undefined8 *)&pFVar26[-1].RHIs.HashSize = uStack_358;
  *(undefined8 *)&pFVar26[-1].Warn = local_350;
  lVar17 = (longlong)pFVar25 + (-0xd8 - (longlong)pFVar27);
  lVar17 = lVar17 / 0x36 + (lVar17 >> 0x3f);
  if ((lVar17 >> 2) - (lVar17 >> 0x3f) < ((longlong)pFVar24 - (longlong)pFVar20) / 0xd8) {
    if (pFVar20 < pFVar24) {
      *ppFVar23 = pFVar20;
      ppFVar23[1] = pFVar24;
      *(int *)(ppFVar23 + 2) = iVar22;
      ppFVar23 = ppFVar23 + 3;
      local_450 = ppFVar23;
    }
    if (pFVar25 <= pFVar27 + 1) goto LAB_148bf1379;
    pFVar24 = pFVar26 + -2;
    pFVar20 = pFVar27;
  }
  else {
    if (pFVar27 + 1 < pFVar25) {
      *ppFVar23 = pFVar27;
      ppFVar23[1] = pFVar26 + -2;
      *(int *)(ppFVar23 + 2) = iVar22;
      ppFVar23 = ppFVar23 + 3;
      local_450 = ppFVar23;
    }
    if (pFVar24 <= pFVar20) goto LAB_148bf1379;
  }
  iVar19 = (int)(((longlong)pFVar24 - (longlong)pFVar20) / 0xd8) + 1;
  pFVar27 = pFVar20;
  if (iVar22 == 0) goto LAB_148bf0e93;
  goto LAB_148bf0895;
}

// NewObject<UAutomationTestPlatformSettings> @ 148bf13f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAutomationTestPlatformSettings * __cdecl
NewObject<UAutomationTestPlatformSettings>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UAutomationTestPlatformSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UAutomationTestPlatformSettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UAutomationTestPlatformSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// Sort<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<``anonymous_namespace'::SortExcludelist'::__l2::<lambda_1>_>_> @ 148bf16b0

void __thiscall
TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>
          (TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
           *this,FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<__anonymous_namespace_::SortExcludelist_::__l2::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>::FKeyComparisonClass<_void___cdecl__anonymous_namespace_::SortExcludelist(TMap<FString,FAutomationTestExcludelistEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>_>_&)_::_2_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StaticEnum<enum_EAutomationState> @ 148bf1740

UEnum * __cdecl StaticEnum<enum_EAutomationState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutomationState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationTest();
    Z_Registration_Info_UEnum_EAutomationState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AutomationTest_EAutomationState,(UObject *)pUVar1,
                       L"EAutomationState");
  }
  return Z_Registration_Info_UEnum_EAutomationState.OuterSingleton;
}

// StaticEnum<enum_ETEST_RHI_FeatureLevel_Options> @ 148bf1780

UEnum * __cdecl StaticEnum<enum_ETEST_RHI_FeatureLevel_Options>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationTest();
    Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options,
                       (UObject *)pUVar1,L"ETEST_RHI_FeatureLevel_Options");
  }
  return Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.OuterSingleton;
}

// StaticEnum<enum_ETEST_RHI_Options> @ 148bf17c0

UEnum * __cdecl StaticEnum<enum_ETEST_RHI_Options>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationTest();
    Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options,(UObject *)pUVar1,
                       L"ETEST_RHI_Options");
  }
  return Z_Registration_Info_UEnum_ETEST_RHI_Options.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148bf1f90

void * __thiscall
UAutomationTestExcludelist::_scalar_deleting_destructor_
          (UAutomationTestExcludelist *this,uint param_1)

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
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bf2050

void * __thiscall
UAutomationTestExcludelistConfig::_scalar_deleting_destructor_
          (UAutomationTestExcludelistConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationTestExcludelistConfig__6B_;
  pFVar1 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomationTestExcludelistEntry,int>
            ((FAutomationTestExcludelistEntry *)(this->ExcludeTest).AllocatorInstance.Data,
             (this->ExcludeTest).ArrayNum);
  pFVar1 = (this->ExcludeTest).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskTrackerURLBase).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskTrackerURLHashtag).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAutomationTestPlatformSettings__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bf2110

void * __thiscall
UAutomationTestExcludelistSettings::_scalar_deleting_destructor_
          (UAutomationTestExcludelistSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationTestExcludelistSettings__6B_;
  pFVar1 = (this->SupportedRHIs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UAutomationTestPlatformSettings__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148bf21a0

void * __thiscall
UAutomationTestPlatformSettings::_scalar_deleting_destructor_
          (UAutomationTestPlatformSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationTestPlatformSettings__6B_;
  pFVar1 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAutomationState @ 148bf2b10

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationTestExcludelist @ 148bf2b20

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationTestExcludelist(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationTestPlatform @ 148bf2b30

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationTestPlatform(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationTest_init @ 148bf2b40

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationTest_init(void)

{
  return;
}

// GetAllAvailablePlatformNames @ 148bf3020

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __cdecl
AutomationTestPlatform::GetAllAvailablePlatformNames(void)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FSparseArrayAllocationInfo local_28;
  
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar8 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name18,L"AutomationTest/Settings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name18,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name18,true);
  if ((*piVar8 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`AutomationTestPlatform::GetAllAvailablePlatformNames'::__l2::
           _dynamic_atexit_destructor_for__NameSet__);
    _Init_thread_footer(&::_TSS1);
  }
  if (NameSet.Elements._8_4_ == NameSet.Elements._52_4_) {
    ::FName::FName(&local_res18,"Windows");
    iVar4 = NameSet.Elements._48_4_;
    iVar9 = 1;
    if (NameSet.Elements._52_4_ == 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,1,(ForAnyElementType *)&NameSet,(int *)&NameSet.Elements.field_0x8,
                         (int *)&NameSet.Elements.field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&NameSet.Elements.field_0x10,false);
    }
    else {
      NameSet.Elements._52_4_ = NameSet.Elements._52_4_ + -1;
      NameSet.Elements._48_4_ =
           *(int *)(NameSet.Elements._0_8_ + 4 + (longlong)(int)NameSet.Elements._48_4_ * 0x10);
      if (NameSet.Elements._52_4_ != 0) {
        *(undefined4 *)(NameSet.Elements._0_8_ + (longlong)(int)NameSet.Elements._48_4_ * 0x10) =
             0xffffffff;
      }
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&NameSet,&local_28,iVar4);
    if (local_28.Pointer != (TSparseSetElement<FName> *)0x0) {
      *(FName *)local_28.Pointer = local_res18;
      *(undefined4 *)((longlong)local_28.Pointer + 8) = 0xffffffff;
    }
    uVar1 = *(undefined8 *)local_28.Pointer;
    local_res10[0] = local_28.Index;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    uVar5 = (int)((ulonglong)uVar1 >> 0x20) + uVar5;
    bVar3 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::TryReplaceExisting
                      (&NameSet,uVar5,local_28.Pointer,local_res10,(bool *)0x0);
    if (!bVar3) {
      uVar6 = NameSet.Elements._8_4_ - NameSet.Elements._52_4_;
      if (3 < uVar6) {
        uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((int)uVar6 < 1) || (iVar9 <= NameSet.HashSize)) {
        uVar5 = NameSet.HashSize - 1U & uVar5;
        *(uint *)((longlong)local_28.Pointer + 0xc) = uVar5;
        FVar10 = (ForElementType<FSetElementId>)0x154c71da8;
        if (NameSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar10 = NameSet.Hash.SecondaryData;
        }
        uVar7 = (longlong)NameSet.HashSize - 1U & (longlong)(int)uVar5;
        *(undefined4 *)((longlong)local_28.Pointer + 8) =
             *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
        *(int *)((longlong)FVar10 + uVar7 * 4) = local_res10[0];
      }
      else {
        NameSet.HashSize = iVar9;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(&NameSet);
      }
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return &NameSet;
}

// GetAllPlatformsSettings @ 148bf32e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> * __cdecl
AutomationTestPlatform::GetAllPlatformsSettings
          (TSubclassOf<UAutomationTestPlatformSettings> param_1)

{
  code *pcVar1;
  UAutomationTestPlatformSettings *pUVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar9;
  TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  FUObjectItem *this;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  int *piVar16;
  TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [8];
  UAutomationTestPlatformSettings *local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  FLLMScope local_148 [2];
  FString local_140;
  longlong *local_130;
  uint uStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>
  local_f8;
  UObject *local_e8;
  FMemScope local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString *local_a8;
  ForAnyElementType *local_a0;
  FString local_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar16 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name50,L"AutomationTest/Settings");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_148,LLMScope_Name50,false,None,Default,true);
  FMemScope::FMemScope(&local_e0,&LLMScope_Name50,true);
  if ((*piVar16 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`AutomationTestPlatform::GetAllPlatformsSettings'::__l2::
           _dynamic_atexit_destructor_for__Settings__);
    _Init_thread_footer(&::_TSS1);
  }
  lVar14 = *(longlong *)param_1.Class.field0_0x0;
  uVar19 = 0;
  uVar20 = 0;
  uVar8 = uVar19;
  if ((lVar14 != 0) &&
     (pUVar7 = UAutomationTestPlatformSettings::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar14 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar8 = *(ulonglong *)param_1.Class.field0_0x0;
    }
  }
  local_f8._4_8_ = *(undefined8 *)(uVar8 + 0x18);
  ::FName::ToString((FName *)((longlong)&local_f8.Key + 4),&local_140);
  iVar6 = local_140.Data.ArrayNum;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (iVar6 != 0) {
    FVar15.Data = local_140.Data.AllocatorInstance.Data;
  }
  iVar13 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar13 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar15.Data);
  iVar6 = TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&Settings,uVar5,&local_140);
  if (iVar6 == -1) {
    pTVar9 = GetAllAvailablePlatformNames();
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88,pTVar9);
    uVar5 = local_60;
    uStack_124 = 1;
    local_158.Data = (FScriptContainerElement *)0x0;
    local_110 = 0;
    local_150 = 0;
    uStack_114 = local_110;
    if (local_60 != 0) {
      puVar21 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar21 = local_68;
      }
      uVar18 = *puVar21;
      uVar8 = uVar19;
      local_110 = 0;
      uVar20 = 0;
      while (uVar18 == 0) {
        iVar6 = (int)uVar19;
        local_110 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)local_110;
        uVar20 = iVar6 + 1;
        uVar19 = (ulonglong)uVar20;
        uStack_114 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
        goto LAB_148bf34f0;
        uVar18 = puVar21[(longlong)iVar6 + 1];
      }
      uStack_124 = -uVar18 & uVar18;
      uVar19 = (ulonglong)uStack_124 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_100 = (int)lVar14;
      uStack_114 = (local_110 - 1) + local_100;
      if ((int)local_60 < (int)uStack_114) {
        uStack_114 = local_60;
      }
    }
LAB_148bf34f0:
    local_130 = (longlong *)local_88;
    local_120 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uVar18 = local_60 & 0xffffffe0;
    iStack_108 = local_88._8_4_ - local_54;
    uStack_118 = 0xffffffff;
    TStack_d0.CurrentBitIndex = uStack_114;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    TStack_d0._padding_ = CONCAT44(uStack_124,uVar20);
    iVar6 = (int)local_60 >> 5;
    TStack_d0._28_4_ = uStack_114;
    TStack_d0.BaseBitIndex = local_110;
    uStack_b0 = CONCAT44(uStack_104,iStack_108);
    bVar12 = (byte)local_60;
    uStack_128 = uVar20;
    uStack_10c = uStack_114;
    local_d8 = local_130;
    TStack_d0.Array = local_120;
    if (((int)local_60 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)()
      ;
      return pTVar10;
    }
    if (uVar5 != local_60) {
      puVar21 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar21 = local_68;
      }
      uVar20 = -1 << (bVar12 & 0x1f) & puVar21[iVar6];
      while (uVar20 == 0) {
        lVar14 = (longlong)iVar6;
        uVar18 = uVar18 + 0x20;
        iVar6 = iVar6 + 1;
        uVar5 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
        goto LAB_148bf35f0;
        uVar20 = puVar21[lVar14 + 1];
      }
      uVar19 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_fc = (int)lVar14;
      uVar5 = local_fc + -1 + uVar18;
      if ((int)local_60 < (int)uVar5) {
        uVar5 = local_60;
      }
    }
LAB_148bf35f0:
    while( true ) {
      plVar3 = local_d8;
      if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
        local_168[0] = 0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      if (((TStack_d0.CurrentBitIndex == uVar5) &&
          (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar3 == (longlong *)local_88)) break;
      pFVar11 = ::FName::ToString((FName *)((longlong)TStack_d0.CurrentBitIndex * 0x10 + *plVar3),
                                  &local_98);
      local_e8 = *(UObject **)param_1.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_e8);
      }
      local_160 = UAutomationTestPlatformSettings::Create
                            ((TSubclassOf<UAutomationTestPlatformSettings>)&local_e8,pFVar11);
      if ((local_160 == (UAutomationTestPlatformSettings *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Config != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AutomationTest\\Private\\AutomationTestPlatform.cpp"
                             ,0x3e,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar10 = (TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *)
                  (*pcVar1)();
        return pTVar10;
      }
      pUVar2 = local_160;
      UObject::LoadConfig((UObject *)local_160,(UClass *)local_160->_padding_,(wchar_t *)0x0,0,
                          (FProperty *)0x0,
                          (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                           *)0x0);
      (**(code **)(pUVar2->_padding_ + 0x50))(pUVar2);
      this = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&local_160->_padding_ + 4));
      FUObjectItem::SetRootFlags(this,RootSet);
      if (((local_158.Data <= (FScriptContainerElement *)&local_160) &&
          ((FScriptContainerElement *)&local_160 < local_158.Data + (longlong)local_150._4_4_ * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar1 = (code *)swi(3);
        pTVar10 = (TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *)
                  (*pcVar1)();
        return pTVar10;
      }
      iVar6 = (int)local_150;
      if ((int)local_150 == local_150._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_158,(int *)((longlong)&local_150 + 4));
      }
      local_150 = CONCAT44(local_150._4_4_,iVar6 + 1);
      *(UAutomationTestPlatformSettings **)(local_158.Data + (longlong)iVar6 * 8) = local_160;
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    }
    local_a8 = &local_140;
    local_a0 = &local_158;
    TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>_>
              ((TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&Settings,&local_f8,(bool *)&local_a8);
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  iVar6 = local_140.Data.ArrayNum + -1;
  FVar15.Data = local_140.Data.AllocatorInstance.Data;
  if (local_140.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar15.Data = (FScriptContainerElement *)L"";
  }
  uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar15.Data);
  iVar6 = TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&Settings,uVar20,&local_140);
  pTVar10 = (TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *)0x0;
  if (iVar6 != -1) {
    pTVar10 = (TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *)
              (Settings._0_8_ + (longlong)iVar6 * 0x28);
  }
  pTVar17 = pTVar10 + 1;
  if (pTVar10 == (TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar17 = (TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(local_148);
  return pTVar17;
}

// SetToString @ 148bf8280

FString * __cdecl
SetToString(FString *__return_storage_ptr__,
           TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_c8;
  undefined8 local_c0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  iVar11 = *(int *)&(param_1->Elements).field_0x34;
  iStack_90 = *(int *)&(param_1->Elements).field_0x8;
  if (iStack_90 == iVar11) {
    FString::FString(__return_storage_ptr__,L"");
  }
  else {
    iStack_b0 = 0;
    uStack_ac = 1;
    puVar1 = &(param_1->Elements).field_0x10;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    iVar15 = *(int *)&(param_1->Elements).field_0x28;
    local_98 = 0;
    iStack_9c = iStack_b0;
    if (iVar15 != 0) {
      puVar17 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      local_98 = 0;
      iStack_b0 = 0;
      while (uVar14 == 0) {
        lVar9 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_148bf835e;
        uVar14 = puVar17[lVar9 + 1];
      }
      uStack_ac = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_88 = (int)lVar9;
      iStack_9c = local_98 + -1 + local_88;
      if (iVar15 < iStack_9c) {
        iStack_9c = iVar15;
      }
    }
LAB_148bf835e:
    iStack_90 = iStack_90 - iVar11;
    uVar14 = *(uint *)&(param_1->Elements).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    uStack_a0 = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
    TStack_78.CurrentBitIndex = iStack_9c;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._28_4_ = iStack_9c;
    TStack_78.BaseBitIndex = local_98;
    uStack_58 = CONCAT44(uStack_8c,iStack_90);
    iVar11 = (int)uVar14 >> 5;
    local_b8 = param_1;
    local_a8 = puVar1;
    iStack_94 = iStack_9c;
    local_80 = param_1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar15 < (int)uVar14)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
    uVar3 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar14 != uVar3) {
      puVar16 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar9 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_148bf8460;
        uVar14 = *(uint *)(puVar16 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_84 = (int)lVar9;
      uVar14 = local_84 + -1 + uVar13;
      if ((int)uVar3 < (int)uVar14) {
        uVar14 = uVar3;
      }
    }
LAB_148bf8460:
    while( true ) {
      pTVar5 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_res10[0] = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_78.CurrentBitIndex == uVar14) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar5 == param_1)) break;
      pFVar8 = (FScriptContainerElement *)
               FName::ToString((FName *)((longlong)TStack_78.CurrentBitIndex * 0x10 +
                                        *(longlong *)&pTVar5->Elements),&local_50);
      if (((local_c8.Data <= pFVar8) && (pFVar8 < local_c8.Data + (longlong)local_c0._4_4_ * 0x10))
         && (bVar6 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
      iVar11 = (int)local_c0;
      if ((int)local_c0 == local_c0._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar11 + 1);
      pFVar10 = local_c8.Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar8;
      *(undefined8 *)pFVar8 = 0;
      *(int *)(pFVar10 + 8) = *(int *)(pFVar8 + 8);
      *(int *)(pFVar10 + 0xc) = *(int *)(pFVar8 + 0xc);
      *(undefined8 *)(pFVar8 + 8) = 0;
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_c8.Data,(int)local_c0,local_res10[0],(TLess<void> *)local_res18);
    iVar11 = (int)local_c0;
    pFVar8 = local_c8.Data + (longlong)(int)local_c0 * 0x10;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    bVar6 = true;
    FVar12.Data = local_c8.Data;
    while( true ) {
      if ((int)local_c0 != iVar11) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar12.Data == pFVar8) break;
      if (bVar6) {
        bVar6 = false;
      }
      else {
        FString::AppendChars(__return_storage_ptr__,L", ",2);
      }
      iVar15 = *(int *)(FVar12.Data + 8) + -1;
      if (*(int *)(FVar12.Data + 8) == 0) {
        iVar15 = 0;
      }
      FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar12.Data,iVar15);
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_c8.Data,(int)local_c0);
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UAutomationTestExcludelistSettings_NoRegister @ 148bf91b0

UClass * __cdecl Z_Construct_UClass_UAutomationTestExcludelistSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelistSettings",
               &Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton,
               UAutomationTestExcludelistSettings::
               StaticRegisterNativesUAutomationTestExcludelistSettings,0x48,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestExcludelistSettings>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelistSettings>,local_res8,
               UAutomationTestPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelistSettings.InnerSingleton;
}

// Z_Construct_UClass_UAutomationTestExcludelist_NoRegister @ 148bf9270

UClass * __cdecl Z_Construct_UClass_UAutomationTestExcludelist_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestExcludelist",
               &Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton,
               UAutomationTestExcludelist::StaticRegisterNativesUAutomationTestExcludelist,0xd0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestExcludelist>,
               InternalVTableHelperCtorCaller<UAutomationTestExcludelist>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestExcludelist.InnerSingleton;
}

// Z_Construct_UClass_UAutomationTestPlatformSettings_NoRegister @ 148bf9320

UClass * __cdecl Z_Construct_UClass_UAutomationTestPlatformSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationTest",L"AutomationTestPlatformSettings",
               &Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton,
               UAutomationTestPlatformSettings::StaticRegisterNativesUAutomationTestPlatformSettings
               ,0x38,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationTestPlatformSettings>,
               InternalVTableHelperCtorCaller<UAutomationTestPlatformSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationTestPlatformSettings.InnerSingleton;
}

// Z_Construct_UEnum_AutomationTest_EAutomationState @ 148bf93d0

UEnum * __cdecl Z_Construct_UEnum_AutomationTest_EAutomationState(void)

{
  if (Z_Registration_Info_UEnum_EAutomationState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAutomationState.InnerSingleton,
               &Z_Construct_UEnum_AutomationTest_EAutomationState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAutomationState.InnerSingleton;
}

// Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options @ 148bf9410

UEnum * __cdecl Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options(void)

{
  if (Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.InnerSingleton,
               &Z_Construct_UEnum_AutomationTest_ETEST_RHI_FeatureLevel_Options_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_ETEST_RHI_FeatureLevel_Options.InnerSingleton;
}

// Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options @ 148bf9450

UEnum * __cdecl Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options(void)

{
  if (Z_Registration_Info_UEnum_ETEST_RHI_Options.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETEST_RHI_Options.InnerSingleton,
               &Z_Construct_UEnum_AutomationTest_ETEST_RHI_Options_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETEST_RHI_Options.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAutomationTestExcludeOptions @ 148bf9490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationTestExcludeOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationTestExcludeOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationTestExcludeOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationTestExcludeOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomationTestExcludeOptions.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_AutomationTest @ 148bf9510

void __cdecl IMPLEMENT_MODULE_AutomationTest(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AllRHI_FeatureLevel_OptionNames'' @ 15040ae70

void __cdecl
`FAutomationTestExcludelistEntry::NumRHIType'::__l2::
_dynamic_atexit_destructor_for__AllRHI_FeatureLevel_OptionNames__(void)

{
  `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::__l2
  ::AllRHI_FeatureLevel_OptionNames.HashSize = 0;
  if (`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_FeatureLevel_OptionNames.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
     ) {
    FMemory::Free((void *)`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                          ::__l2::AllRHI_FeatureLevel_OptionNames.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
              ::__l2::AllRHI_FeatureLevel_OptionNames.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'AllRHI_OptionNames'' @ 15040aeb0

void __cdecl
`FAutomationTestExcludelistEntry::NumRHIType'::__l2::
_dynamic_atexit_destructor_for__AllRHI_OptionNames__(void)

{
  `public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::__l2
  ::AllRHI_OptionNames.HashSize = 0;
  if (`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'::
      __l2::AllRHI_OptionNames.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
                          ::__l2::AllRHI_OptionNames.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&`public:_signed_char___cdecl_FAutomationTestExcludelistEntry::NumRHIType(void)const___ptr64'
              ::__l2::AllRHI_OptionNames.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultTaskTrackerTagSuffix'' @ 15040aef0

void __cdecl
`UAutomationTestExcludelist::GetBeautifiedTaskTrackerTicketTagSuffix'::__l2::
_dynamic_atexit_destructor_for__DefaultTaskTrackerTagSuffix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultTaskTrackerTagSuffix.Data.AllocatorInstance.Data;
  if (DefaultTaskTrackerTagSuffix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultTaskTrackerTagSuffix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptySet'' @ 15040af10

void __cdecl
`UAutomationTestExcludelist::GetExcludeTestEntry'::__l2::_dynamic_atexit_destructor_for__EmptySet__
          (void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 15040af50

void __cdecl
`UAutomationTestExcludelist::IsTestExcluded'::__l2::_dynamic_atexit_destructor_for__EmptySet__(void)

{
  EmptySet.HashSize = 0;
  if (EmptySet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)EmptySet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&EmptySet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'FunctionalTestsPreFix'' @ 15040af90

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FunctionalTestsPreFix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FunctionalTestsPreFix.Data.AllocatorInstance.Data;
  if (FunctionalTestsPreFix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FunctionalTestsPreFix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogAutomationTest'' @ 15040afb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationTest__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationTest);
  return;
}

// `dynamic_atexit_destructor_for_'LogAutomationTestExcludelist'' @ 15040afd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationTestExcludelist__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationTestExcludelist);
  return;
}

// `dynamic_atexit_destructor_for_'NameSet'' @ 15040aff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FAutomationTestExcludeOptions::GetAllRHIOptionNames<enum_ETEST_RHI_FeatureLevel_Options>'::__l2::
_dynamic_atexit_destructor_for__NameSet__(void)

{
  _DAT_154c71e58 = 0;
  if (DAT_154c71e50 != (void *)0x0) {
    FMemory::Free(DAT_154c71e50);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNames<ETEST_RHI_FeatureLevel_Options>(void)'
                 ::__l2::NameSet);
  return;
}

// `dynamic_atexit_destructor_for_'NameSet'' @ 15040b030

void __cdecl
`AutomationTestPlatform::GetAllAvailablePlatformNames'::__l2::
_dynamic_atexit_destructor_for__NameSet__(void)

{
  NameSet.HashSize = 0;
  if (NameSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)NameSet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&NameSet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'NameSet'' @ 15040b070

void __cdecl
`FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings'::__l2::
_dynamic_atexit_destructor_for__NameSet__(void)

{
  DAT_154c71ea8 = 0;
  if (DAT_154c71ea0 != (void *)0x0) {
    FMemory::Free(DAT_154c71ea0);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetAllRHIOptionNamesFromSettings(void)'
                 ::__l2::NameSet);
  return;
}

// `dynamic_atexit_destructor_for_'PlatformSettings'' @ 15040b0b0

void __cdecl
`FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings'::__l2::
_dynamic_atexit_destructor_for__PlatformSettings__(void)

{
  `public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
  ::__l2::PlatformSettings._72_4_ = 0;
  if (`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
      ::__l2::PlatformSettings._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                          ::__l2::PlatformSettings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_FAutomationTestExcludeOptions::GetPlatformRHIOptionNamesFromSettings(FName_const&___ptr64)'
                 ::__l2::PlatformSettings);
  return;
}

// `dynamic_atexit_destructor_for_'Settings'' @ 15040b0f0

void __cdecl
`AutomationTestPlatform::GetAllPlatformsSettings'::__l2::_dynamic_atexit_destructor_for__Settings__
          (void)

{
  Settings._72_4_ = 0;
  if (Settings._64_8_ != 0) {
    FMemory::Free((void *)Settings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Settings);
  return;
}

// `dynamic_atexit_destructor_for_'TicketTrackerURLBasePropertyName'' @ 15040b130

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__TicketTrackerURLBasePropertyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TicketTrackerURLBasePropertyName.Data.AllocatorInstance.Data;
  if (TicketTrackerURLBasePropertyName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (TicketTrackerURLBasePropertyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'TicketTrackerURLHashtagPropertyName'' @ 15040b150

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__TicketTrackerURLHashtagPropertyName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TicketTrackerURLHashtagPropertyName.Data.AllocatorInstance.Data;
  if (TicketTrackerURLHashtagPropertyName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (TicketTrackerURLHashtagPropertyName.Data.AllocatorInstance.Data !=
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

