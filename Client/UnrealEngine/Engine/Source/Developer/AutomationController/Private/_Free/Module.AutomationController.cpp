// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 144

// AutomationControllerSingleton'' @ 141166490

void __cdecl
`dynamic_initializer_for_'FAutomationControllerModule::AutomationControllerSingleton__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAutomationControllerModule::
         AutomationControllerSingleton__);
  return;
}

// TelemetryDirectory'' @ 1411664b0

void __cdecl `dynamic_initializer_for_'FAutomationTelemetry::TelemetryDirectory__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FAutomationTelemetry::TelemetryDirectory__);
  return;
}

// `dynamic_initializer_for_'Approved'' @ 1411664d0

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Approved__(void)

{
  ::FString::FString(&Approved,L"approved");
  atexit(_dynamic_atexit_destructor_for__Approved__);
  return;
}

// `dynamic_initializer_for_'AutomationExecCmd'' @ 141166500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__AutomationExecCmd__(void)

{
  FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&AutomationExecCmd);
  AutomationExecCmd.TickHandler = (TWeakPtr<FTSTicker::FElement,1>)ZEXT816(0);
  AutomationExecCmd.DelayTimer = 5.0;
  AutomationExecCmd._padding_ = (longlong)&___7FAutomationExecCmd__6B_;
  AutomationExecCmd.AutomationController.Object = (IAutomationControllerManager *)0x0;
  AutomationExecCmd.AutomationController.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  AutomationExecCmd.AutomationCommandQueue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  AutomationExecCmd.AutomationCommandQueue.ArrayNum = 0;
  AutomationExecCmd.AutomationCommandQueue.ArrayMax = 0;
  AutomationExecCmd.TestsRefreshedHandle.ID = 0;
  AutomationExecCmd.SessionID.A = 0;
  AutomationExecCmd.SessionID.B = 0;
  AutomationExecCmd.SessionID.C = 0;
  AutomationExecCmd.SessionID.D = 0;
  AutomationExecCmd.StringCommand.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  AutomationExecCmd.StringCommand.Data.ArrayNum = 0;
  AutomationExecCmd.StringCommand.Data.ArrayMax = 0;
  AutomationExecCmd.FilterMaps._0_8_ = 0;
  AutomationExecCmd.FilterMaps._8_8_ = 0;
  AutomationExecCmd.FilterMaps._32_8_ = 0;
  AutomationExecCmd.FilterMaps._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  AutomationExecCmd.FilterMaps._48_8_ = _UNK_150631d98;
  AutomationExecCmd.FilterMaps._64_8_ = 0;
  AutomationExecCmd.FilterMaps._72_4_ = 0;
  AutomationExecCmd.Errors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  AutomationExecCmd.Errors.ArrayNum = 0;
  AutomationExecCmd.Errors.ArrayMax = 0;
  AutomationExecCmd.TestCount = 0;
  AutomationExecCmd.FindWorkersTimeout = 30.0;
  AutomationExecCmd.FindWorkerAttempts = 0;
  atexit(_dynamic_atexit_destructor_for__AutomationExecCmd__);
  return;
}

// `dynamic_initializer_for_'Difference'' @ 1411665e0

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Difference__(void)

{
  ::FString::FString(&Difference,L"difference");
  atexit(_dynamic_atexit_destructor_for__Difference__);
  return;
}

// `dynamic_initializer_for_'LogAutomationCommandLine'' @ 141166610

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationCommandLine__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationCommandLine,L"LogAutomationCommandLine",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationCommandLine__);
  return;
}

// `dynamic_initializer_for_'LogAutomationController'' @ 141166650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationController__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationController,L"LogAutomationController",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationController__);
  return;
}

// `dynamic_initializer_for_'LogAutomationControllerSettings'' @ 141166690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationControllerSettings__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationControllerSettings,L"LogAutomationControllerSettings"
             ,Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationControllerSettings__);
  return;
}

// `dynamic_initializer_for_'LogAutomationTelemetry'' @ 1411666d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAutomationTelemetry__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAutomationTelemetry,L"LogAutomationTelemetry",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAutomationTelemetry__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141166710

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAutomationController'' @ 141166730

void __cdecl _dynamic_initializer_for__ModuleRegistrantAutomationController__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AutomationController";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AutomationController",0x14);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FAutomationControllerModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Unapproved'' @ 141166780

void __cdecl ComparisonFileTypes::_dynamic_initializer_for__Unapproved__(void)

{
  ::FString::FString(&Unapproved,L"unapproved");
  atexit(_dynamic_atexit_destructor_for__Unapproved__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h__Script_AutomationController_546525716'' @ 1411667b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h__Script_AutomationController_546525716__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationController",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h__Script_AutomationController_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h__Script_AutomationController_3416202727'' @ 1411667f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h__Script_AutomationController_3416202727__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationController",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h__Script_AutomationController_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h__Script_AutomationController_2829713311'' @ 141166830

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h__Script_AutomationController_2829713311__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationController",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h__Script_AutomationController_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h__Script_AutomationController_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h__Script_AutomationController_4004069335'' @ 141166880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h__Script_AutomationController_4004069335__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AutomationController",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h__Script_AutomationController_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_IAutomationReport_h__Script_AutomationController_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AutomationController'' @ 1411668d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AutomationController__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x284f29c2;
  local_res8[0].DeclarationsHash = 0xa3592d2f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AutomationController,L"/Script/AutomationController",
             &Z_Registration_Info_UPackage__Script_AutomationController,local_res8);
  return;
}

// NewStructOps @ 148c4a600

void * __cdecl Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomatedTestGroup,&UE::CoreUObject::Private::Construct<FAutomatedTestGroup>,&UE::CoreUObject::Private::ConstructForTests<FAutomatedTestGroup>,&UE::CoreUObject::Private::Destruct<FAutomatedTestGroup>,&UE::CoreUObject::Private::Copy<FAutomatedTestGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bSuppressLogErrors_SetBit @ 148c4a680

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bSuppressLogWarnings_SetBit @ 148c4a690

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bElevateLogWarningsToErrors_SetBit @ 148c4a6a0

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// NewProp_bKeepPIEOpen_SetBit @ 148c4a6b0

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bAutoExpandSingleItemSubgroups_SetBit @ 148c4a6c0

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::
NewProp_bAutoExpandSingleItemSubgroups_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewProp_bSortTestsByFailure_SetBit @ 148c4a6d0

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSortTestsByFailure_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x52) = 1;
  return;
}

// NewProp_bPruneLogsOnSuccess_SetBit @ 148c4a6e0

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bPruneLogsOnSuccess_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x53) = 1;
  return;
}

// NewProp_bTreatLogWarningsAsTestErrors_SetBit @ 148c4a6f0

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::
NewProp_bTreatLogWarningsAsTestErrors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// NewProp_bResetTelemetryStorageOnNewSession_SetBit @ 148c4a700

void __cdecl
Z_Construct_UClass_UAutomationControllerSettings_Statics::
NewProp_bResetTelemetryStorageOnNewSession_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewStructOps @ 148c4a710

void * __cdecl Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationDeviceInfo,&UE::CoreUObject::Private::Construct<FAutomationDeviceInfo>,&UE::CoreUObject::Private::ConstructForTests<FAutomationDeviceInfo>,&UE::CoreUObject::Private::Destruct<FAutomationDeviceInfo>,&UE::CoreUObject::Private::Copy<FAutomationDeviceInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FAutomatedTestResult @ 148c4a750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomatedTestResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestResult.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomatedTestResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestResult.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAutomatedTestResult.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomationDeviceInfo @ 148c4a7d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationDeviceInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationDeviceInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationDeviceInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationDeviceInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FAutomationDeviceInfo.InnerSingleton;
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

// NewStructOps @ 148c4a850

void * __cdecl Z_Construct_UScriptStruct_FAutomatedTestResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomatedTestResult,&UE::CoreUObject::Private::Construct<FAutomatedTestResult>,&UE::CoreUObject::Private::ConstructForTests<FAutomatedTestResult>,&UE::CoreUObject::Private::Destruct<FAutomatedTestResult>,&UE::CoreUObject::Private::Copy<FAutomatedTestResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ComparisonExported_SetBit @ 148c4a890

void __cdecl
Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewProp_ComparisonExported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 148c4a8a0

void * __cdecl Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomatedTestPassResults,&UE::CoreUObject::Private::Construct<FAutomatedTestPassResults>,&UE::CoreUObject::Private::ConstructForTests<FAutomatedTestPassResults>,&UE::CoreUObject::Private::Destruct<FAutomatedTestPassResults>,&UE::CoreUObject::Private::Copy<FAutomatedTestPassResults>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148c4a9c0

void * __thiscall
FAutomatedTestFilter::_scalar_deleting_destructor_(FAutomatedTestFilter *this,uint param_1)

{
  ~FAutomatedTestFilter(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c4ad70

void * __thiscall
IFilter<TSharedPtr<IAutomationReport,1>_const_&>::_scalar_deleting_destructor_
          (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *this,uint param_1)

{
  *this = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)
          &___7__IFilter_AEBV__TSharedPtr_VIAutomationReport___00____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c4aea0

void * __thiscall
FAutomationGroupFilter::_scalar_deleting_destructor_(FAutomationGroupFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FAutomatedTestTagFilter,int>
            ((FAutomatedTestTagFilter *)(this->TagFilters).AllocatorInstance.Data,
             (this->TagFilters).ArrayNum);
  pFVar1 = (this->TagFilters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomatedTestFilter,int>
            ((FAutomatedTestFilter *)(this->Filters).AllocatorInstance.Data,(this->Filters).ArrayNum
            );
  pFVar1 = (this->Filters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar2 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  this->_padding_ = (longlong)&___7__IFilter_AEBV__TSharedPtr_VIAutomationReport___00____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c4cf20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UPackage__Script_AutomationController @ 148c4cfe0

UPackage * __cdecl Z_Construct_UPackage__Script_AutomationController(void)

{
  if (Z_Registration_Info_UPackage__Script_AutomationController.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AutomationController.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AutomationController.OuterSingleton;
}

// `scalar_deleting_destructor' @ 148c4d020

void * __thiscall
TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c4d0a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationGroupFilter,SharedPointerInternals::DefaultDeleter<FAutomationGroupFilter>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationGroupFilter,SharedPointerInternals::DefaultDeleter<FAutomationGroupFilter>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c4d100

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,SharedPointerInternals::DefaultDeleter<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,SharedPointerInternals::DefaultDeleter<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c4d350

void * __thiscall
FAutomationExecCmd::_scalar_deleting_destructor_(FAutomationExecCmd *this,uint param_1)

{
  ~FAutomationExecCmd(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c4db10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UEnum_AutomationController_EAutomationArtifactType @ 148c4db40

UEnum * __cdecl Z_Construct_UEnum_AutomationController_EAutomationArtifactType(void)

{
  if (Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton,
               &Z_Construct_UEnum_AutomationController_EAutomationArtifactType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAutomationArtifactType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAutomationArtifact @ 148c4db80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationArtifact(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomationArtifact.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomationArtifact.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomationArtifact_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomationArtifact.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAutomationArtifact.InnerSingleton;
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

// EAutomationArtifactType_StaticEnum @ 148c4dc00

UEnum * __cdecl EAutomationArtifactType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AutomationController_EAutomationArtifactType,
                       (UObject *)pUVar1,L"EAutomationArtifactType");
  }
  return Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton;
}

// NewStructOps @ 148c4dc40

void * __cdecl Z_Construct_UScriptStruct_FAutomationArtifact_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomationArtifact,&UE::CoreUObject::Private::Construct<FAutomationArtifact>,&UE::CoreUObject::Private::ConstructForTests<FAutomationArtifact>,&UE::CoreUObject::Private::Destruct<FAutomationArtifact>,&UE::CoreUObject::Private::Copy<FAutomationArtifact>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148c4de20

void * __thiscall
FAutomationControllerModule::_scalar_deleting_destructor_
          (FAutomationControllerModule *this,uint param_1)

{
  *this = (FAutomationControllerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UAutomationControllerSettings @ 148c4de60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutomationControllerSettings(void)

{
  if (Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton,
               &Z_Construct_UClass_UAutomationControllerSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAutomatedTestFilter @ 148c4dea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomatedTestFilter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestFilter.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomatedTestFilter.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestFilter.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAutomatedTestFilter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomatedTestFilterBase @ 148c4df20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomatedTestFilterBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestFilterBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomatedTestFilterBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestFilterBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomatedTestFilterBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomatedTestGroup @ 148c4dfa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomatedTestGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestGroup.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomatedTestGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestGroup.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FAutomatedTestGroup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAutomatedTestTagFilter @ 148c4e020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomatedTestTagFilter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestTagFilter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomatedTestTagFilter.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomatedTestTagFilter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestTagFilter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomatedTestTagFilter.InnerSingleton;
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

// NewProp_MatchFromStart_SetBit @ 148c4e0a0

void __cdecl
Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromStart_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_MatchFromEnd_SetBit @ 148c4e0b0

void __cdecl
Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewProp_MatchFromEnd_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewStructOps @ 148c4e0c0

void * __cdecl Z_Construct_UScriptStruct_FAutomatedTestFilterBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomatedTestFilterBase,&UE::CoreUObject::Private::Construct<FAutomatedTestFilterBase>,&UE::CoreUObject::Private::ConstructForTests<FAutomatedTestFilterBase>,&UE::CoreUObject::Private::Destruct<FAutomatedTestFilterBase>,&UE::CoreUObject::Private::Copy<FAutomatedTestFilterBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148c4e100

void * __cdecl Z_Construct_UScriptStruct_FAutomatedTestTagFilter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomatedTestTagFilter,&UE::CoreUObject::Private::Construct<FAutomatedTestTagFilter>,&UE::CoreUObject::Private::ConstructForTests<FAutomatedTestTagFilter>,&UE::CoreUObject::Private::Destruct<FAutomatedTestTagFilter>,&UE::CoreUObject::Private::Copy<FAutomatedTestTagFilter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148c4e140

void * __thiscall
IAutomationControllerModule::_scalar_deleting_destructor_
          (IAutomationControllerModule *this,uint param_1)

{
  *this = (IAutomationControllerModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c4e340

void * __thiscall
FAutomatedTestFilterBase::_scalar_deleting_destructor_(FAutomatedTestFilterBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAutomatedTestFilterBase__6B_;
  pFVar1 = (this->Contains).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 148c4e390

void * __cdecl Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAutomatedTestFilter,&UE::CoreUObject::Private::Construct<FAutomatedTestFilter>,&UE::CoreUObject::Private::ConstructForTests<FAutomatedTestFilter>,&UE::CoreUObject::Private::Destruct<FAutomatedTestFilter>,&UE::CoreUObject::Private::Copy<FAutomatedTestFilter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148c4e4e0

void * __thiscall
FAutomatedTestTagFilter::_scalar_deleting_destructor_(FAutomatedTestTagFilter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FAutomatedTestTagFilter__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TagFilter).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// ConstructItems<FAutomatedTestFilter,FAutomatedTestFilter,int> @ 148c4f010

void __cdecl
ConstructItems<FAutomatedTestFilter,FAutomatedTestFilter,int>
          (void *param_1,FAutomatedTestFilter *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FAutomatedTestFilterBase *pFVar3;
  FAutomatedTestTagFilter *pFVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x38);
    piVar6 = &(param_2->Tags).ArrayNum;
    do {
      *(undefined ***)((longlong)piVar6 + (longlong)param_1 + (-0x38 - (longlong)param_2)) =
           &___7FAutomatedTestFilterBase__6B_;
      FString::FString((FString *)(piVar5 + -0xc),(FString *)(piVar6 + -0xc));
      pFVar1 = (ForAnyElementType *)(piVar5 + -6);
      *(char *)(piVar5 + -8) = (char)piVar6[-8];
      *(undefined1 *)((longlong)piVar5 + -0x1f) = *(undefined1 *)((longlong)piVar6 + -0x1f);
      *(undefined ***)((longlong)piVar6 + (longlong)param_1 + (-0x38 - (longlong)param_2)) =
           &___7FAutomatedTestFilter__6B_;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar6[-4];
      pFVar3 = *(FAutomatedTestFilterBase **)(piVar6 + -6);
      piVar5[-4] = iVar2;
      if (iVar2 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar2,0,pFVar1,iVar2,piVar5 + -3);
        ConstructItems<FAutomatedTestFilterBase,FAutomatedTestFilterBase,int>
                  (pFVar1->Data,pFVar3,iVar2);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar2 = *piVar6;
      pFVar4 = (FAutomatedTestTagFilter *)
               (((TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
               AllocatorInstance).Data;
      *piVar5 = iVar2;
      if (iVar2 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,0,(ForAnyElementType *)(piVar5 + -2),iVar2,piVar5 + 1);
        ConstructItems<FAutomatedTestTagFilter,FAutomatedTestTagFilter,int>
                  (((ForAnyElementType *)(piVar5 + -2))->Data,pFVar4,iVar2);
      }
      piVar6 = piVar6 + 0x10;
      piVar5 = piVar5 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomatedTestFilterBase,FAutomatedTestFilterBase,int> @ 148c4f170

void __cdecl
ConstructItems<FAutomatedTestFilterBase,FAutomatedTestFilterBase,int>
          (void *param_1,FAutomatedTestFilterBase *param_2,int param_3)

{
  bool *pbVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pbVar1 = &param_2->MatchFromStart;
    puVar2 = (undefined1 *)((longlong)param_1 + 0x18);
    do {
      *(undefined ***)(pbVar1 + (longlong)param_1 + (-0x18 - (longlong)param_2)) =
           &___7FAutomatedTestFilterBase__6B_;
      FString::FString((FString *)(puVar2 + -0x10),(FString *)(pbVar1 + -0x10));
      *puVar2 = *pbVar1;
      puVar2[1] = pbVar1[1];
      param_3 = param_3 + -1;
      pbVar1 = pbVar1 + 0x20;
      puVar2 = puVar2 + 0x20;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomatedTestResult,FAutomatedTestResult,int> @ 148c4f200

void __cdecl
ConstructItems<FAutomatedTestResult,FAutomatedTestResult,int>
          (void *param_1,FAutomatedTestResult *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  longlong lVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  FAutomationExecutionEntry *pFVar6;
  FAutomationArtifact *pFVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_3 != 0) {
    piVar8 = (int *)((longlong)param_1 + 0x50);
    piVar9 = &(param_2->DeviceInstance).ArrayNum;
    do {
      *(undefined8 *)((longlong)piVar9 + (longlong)param_1 + (-0x50 - (longlong)param_2)) =
           *(undefined8 *)(piVar9 + -0x14);
      lVar3 = *(longlong *)(piVar9 + -0x12);
      *(longlong *)(piVar8 + -0x12) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      FString::FString((FString *)(piVar8 + -0x10),(FString *)(piVar9 + -0x10));
      FString::FString((FString *)(piVar8 + -0xc),(FString *)(piVar9 + -0xc));
      piVar8[-8] = 0;
      piVar8[-7] = 0;
      iVar2 = piVar9[-6];
      pFVar4 = *(FString **)(piVar9 + -8);
      piVar8[-6] = iVar2;
      if (iVar2 == 0) {
        piVar8[-5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,(ForAnyElementType *)(piVar8 + -8),iVar2,piVar8 + -5);
        ConstructItems<FString,FString,int>(((ForAnyElementType *)(piVar8 + -8))->Data,pFVar4,iVar2)
        ;
      }
      pFVar1 = (ForAnyElementType *)(piVar8 + -2);
      *(char *)(piVar8 + -4) = (char)piVar9[-4];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *piVar9;
      pFVar5 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar9 + -2))->AllocatorInstance).
               Data;
      *piVar8 = iVar2;
      if (iVar2 == 0) {
        piVar8[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,pFVar1,iVar2,piVar8 + 1);
        ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)pFVar5,iVar2);
      }
      pFVar1 = (ForAnyElementType *)(piVar8 + 6);
      piVar8[2] = piVar9[2];
      *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar9 + 4);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar9[8];
      pFVar6 = *(FAutomationExecutionEntry **)(piVar9 + 6);
      piVar8[8] = iVar2;
      if (iVar2 == 0) {
        piVar8[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,iVar2,0,pFVar1,iVar2,piVar8 + 9);
        ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
                  (pFVar1->Data,pFVar6,iVar2);
      }
      pFVar1 = (ForAnyElementType *)(piVar8 + 0xc);
      piVar8[10] = piVar9[10];
      piVar8[0xb] = piVar9[0xb];
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = piVar9[0xe];
      pFVar7 = *(FAutomationArtifact **)(piVar9 + 0xc);
      piVar8[0xe] = iVar2;
      if (iVar2 == 0) {
        piVar8[0xf] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,iVar2,0,pFVar1,iVar2,piVar8 + 0xf);
        ConstructItems<FAutomationArtifact,FAutomationArtifact,int>(pFVar1->Data,pFVar7,iVar2);
      }
      piVar8 = piVar8 + 0x24;
      piVar9 = piVar9 + 0x24;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomatedTestTagFilter,FAutomatedTestTagFilter,int> @ 148c4f420

void __cdecl
ConstructItems<FAutomatedTestTagFilter,FAutomatedTestTagFilter,int>
          (void *param_1,FAutomatedTestTagFilter *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedReferencer<1> *pFVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    pFVar2 = &(param_2->TagFilter).SharedReferenceCount;
    plVar3 = (longlong *)((longlong)param_1 + 0x10);
    do {
      *(undefined ***)((longlong)pFVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) =
           &___7FAutomatedTestTagFilter__6B_;
      plVar3[-1] = (longlong)((TSharedPtr<FTextFilterExpressionEvaluator,1> *)(pFVar2 + -1))->Object
      ;
      pTVar1 = pFVar2->ReferenceController;
      *plVar3 = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar2 = pFVar2 + 3;
      plVar3 = plVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomationArtifact,FAutomationArtifact,int> @ 148c4f480

void __cdecl
ConstructItems<FAutomationArtifact,FAutomationArtifact,int>
          (void *param_1,FAutomationArtifact *param_2,int param_3)

{
  undefined8 uVar1;
  EAutomationArtifactType *pEVar2;
  EAutomationArtifactType *pEVar3;
  
  if (param_3 != 0) {
    pEVar2 = (EAutomationArtifactType *)((longlong)param_1 + 0x20);
    pEVar3 = &param_2->Type;
    do {
      uVar1 = *(undefined8 *)(pEVar3 + -0x18);
      *(undefined8 *)(pEVar3 + (longlong)param_1 + (-0x20 - (longlong)param_2)) =
           *(undefined8 *)&((FAutomationArtifact *)(pEVar3 + -0x20))->Id;
      *(undefined8 *)(pEVar3 + (longlong)param_1 + (-0x20 - (longlong)param_2) + 8) = uVar1;
      FString::FString((FString *)(pEVar2 + -0x10),(FString *)(pEVar3 + -0x10));
      *pEVar2 = *pEVar3;
      *(undefined8 *)
       &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          *)(pEVar2 + 8))->Elements = 0;
      pEVar2[0x10] = None;
      pEVar2[0x11] = None;
      pEVar2[0x12] = None;
      pEVar2[0x13] = None;
      pEVar2[0x14] = None;
      pEVar2[0x15] = None;
      pEVar2[0x16] = None;
      pEVar2[0x17] = None;
      pEVar2[0x28] = None;
      pEVar2[0x29] = None;
      pEVar2[0x2a] = None;
      pEVar2[0x2b] = None;
      pEVar2[0x2c] = None;
      pEVar2[0x2d] = None;
      pEVar2[0x2e] = None;
      pEVar2[0x2f] = None;
      pEVar2[0x30] = None;
      pEVar2[0x31] = None;
      pEVar2[0x32] = None;
      pEVar2[0x33] = None;
      pEVar2[0x34] = 0x80;
      pEVar2[0x35] = None;
      pEVar2[0x36] = None;
      pEVar2[0x37] = None;
      pEVar2[0x38] = ~None;
      pEVar2[0x39] = ~None;
      pEVar2[0x3a] = ~None;
      pEVar2[0x3b] = ~None;
      pEVar2[0x3c] = None;
      pEVar2[0x3d] = None;
      pEVar2[0x3e] = None;
      pEVar2[0x3f] = None;
      pEVar2[0x48] = None;
      pEVar2[0x49] = None;
      pEVar2[0x4a] = None;
      pEVar2[0x4b] = None;
      pEVar2[0x4c] = None;
      pEVar2[0x4d] = None;
      pEVar2[0x4e] = None;
      pEVar2[0x4f] = None;
      pEVar2[0x50] = None;
      pEVar2[0x51] = None;
      pEVar2[0x52] = None;
      pEVar2[0x53] = None;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(pEVar2 + 8),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(pEVar3 + 8));
      pEVar2[0x58] = None;
      pEVar2[0x59] = None;
      pEVar2[0x5a] = None;
      pEVar2[0x5b] = None;
      pEVar2[0x5c] = None;
      pEVar2[0x5d] = None;
      pEVar2[0x5e] = None;
      pEVar2[0x5f] = None;
      pEVar2[0x60] = None;
      pEVar2[0x61] = None;
      pEVar2[0x62] = None;
      pEVar2[99] = None;
      pEVar2[100] = None;
      pEVar2[0x65] = None;
      pEVar2[0x66] = None;
      pEVar2[0x67] = None;
      pEVar2[0x78] = None;
      pEVar2[0x79] = None;
      pEVar2[0x7a] = None;
      pEVar2[0x7b] = None;
      pEVar2[0x7c] = None;
      pEVar2[0x7d] = None;
      pEVar2[0x7e] = None;
      pEVar2[0x7f] = None;
      pEVar2[0x80] = None;
      pEVar2[0x81] = None;
      pEVar2[0x82] = None;
      pEVar2[0x83] = None;
      pEVar2[0x84] = 0x80;
      pEVar2[0x85] = None;
      pEVar2[0x86] = None;
      pEVar2[0x87] = None;
      pEVar2[0x88] = ~None;
      pEVar2[0x89] = ~None;
      pEVar2[0x8a] = ~None;
      pEVar2[0x8b] = ~None;
      pEVar2[0x8c] = None;
      pEVar2[0x8d] = None;
      pEVar2[0x8e] = None;
      pEVar2[0x8f] = None;
      pEVar2[0x98] = None;
      pEVar2[0x99] = None;
      pEVar2[0x9a] = None;
      pEVar2[0x9b] = None;
      pEVar2[0x9c] = None;
      pEVar2[0x9d] = None;
      pEVar2[0x9e] = None;
      pEVar2[0x9f] = None;
      pEVar2[0xa0] = None;
      pEVar2[0xa1] = None;
      pEVar2[0xa2] = None;
      pEVar2[0xa3] = None;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(pEVar2 + 0x58),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(pEVar3 + 0x58));
      pEVar2 = pEVar2 + 200;
      pEVar3 = pEVar3 + 200;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomationDeviceInfo,FAutomationDeviceInfo,int> @ 148c4f5a0

void __cdecl
ConstructItems<FAutomationDeviceInfo,FAutomationDeviceInfo,int>
          (void *param_1,FAutomationDeviceInfo *param_2,int param_3)

{
  undefined8 uVar1;
  int *this;
  FString *pFVar2;
  
  if (param_3 != 0) {
    pFVar2 = &param_2->InstanceName;
    this = (int *)((longlong)param_1 + 0x20);
    do {
      FString::FString((FString *)(this + -8),
                       (FString *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)this)
                      );
      uVar1 = *(undefined8 *)&((FGuid *)(pFVar2 + -1))->C;
      (((FString *)(this + -4))->Data).AllocatorInstance.Data =
           *(FScriptContainerElement **)(pFVar2 + -1);
      *(undefined8 *)(this + -2) = uVar1;
      FString::FString((FString *)this,pFVar2);
      FString::FString((FString *)(this + 4),pFVar2 + 1);
      FString::FString((FString *)(this + 8),pFVar2 + 2);
      FString::FString((FString *)(this + 0xc),pFVar2 + 3);
      FString::FString((FString *)(this + 0x10),pFVar2 + 4);
      FString::FString((FString *)(this + 0x14),pFVar2 + 5);
      *(uint *)&(((FString *)(this + 0x18))->Data).AllocatorInstance.Data = *(uint *)(pFVar2 + 6);
      FString::FString((FString *)(this + 0x1a),(FString *)((longlong)(pFVar2 + 6) + 8));
      FString::FString((FString *)(this + 0x1e),(FString *)((longlong)(pFVar2 + 7) + 8));
      FString::FString((FString *)(this + 0x22),(FString *)((longlong)(pFVar2 + 8) + 8));
      pFVar2 = (FString *)((longlong)(pFVar2 + 0xb) + 8);
      this = this + 0x2e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FAutomationTestResults,FAutomationTestResults,int> @ 148c4f6a0

void __cdecl
ConstructItems<FAutomationTestResults,FAutomationTestResults,int>
          (void *param_1,FAutomationTestResults *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FAutomationArtifact *pFVar3;
  FAutomationExecutionEntry *pFVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x30);
    piVar6 = &(param_2->Entries).ArrayNum;
    do {
      *(char *)((longlong)piVar6 + (longlong)param_1 + (-0x30 - (longlong)param_2)) =
           (char)piVar6[-0xc];
      piVar5[-0xb] = piVar6[-0xb];
      FString::FString((FString *)(piVar5 + -10),(FString *)(piVar6 + -10));
      piVar5[-6] = 0;
      piVar5[-5] = 0;
      iVar2 = piVar6[-4];
      pFVar3 = *(FAutomationArtifact **)(piVar6 + -6);
      piVar5[-4] = iVar2;
      if (iVar2 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,iVar2,0,(ForAnyElementType *)(piVar5 + -6),iVar2,piVar5 + -3);
        ConstructItems<FAutomationArtifact,FAutomationArtifact,int>
                  (((ForAnyElementType *)(piVar5 + -6))->Data,pFVar3,iVar2);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar2 = *piVar6;
      pFVar4 = (FAutomationExecutionEntry *)
               (((TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
               AllocatorInstance).Data;
      *piVar5 = iVar2;
      if (iVar2 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,iVar2,0,(ForAnyElementType *)(piVar5 + -2),iVar2,piVar5 + 1);
        ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
                  (((ForAnyElementType *)(piVar5 + -2))->Data,pFVar4,iVar2);
      }
      piVar5[2] = piVar6[2];
      piVar1 = piVar6 + 3;
      piVar6 = piVar6 + 0x10;
      piVar5[3] = *piVar1;
      piVar5 = piVar5 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<IAutomationReport,1>,TSharedPtr<IAutomationReport,1>,int> @ 148c4f7f0

void __cdecl
ConstructItems<TSharedPtr<IAutomationReport,1>,TSharedPtr<IAutomationReport,1>,int>
          (void *param_1,TSharedPtr<IAutomationReport,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IAutomationReport **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// ConstructItems<FAutomationDeviceClusterManager::FDeviceState,FAutomationDeviceClusterManager::FDeviceState,int> @ 148c4f830

void __cdecl
ConstructItems<FAutomationDeviceClusterManager::FDeviceState,FAutomationDeviceClusterManager::FDeviceState,int>
          (void *param_1,FDeviceState *param_2,int param_3)

{
  bool *pbVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  TSharedPtr<IAutomationReport,1> *pTVar6;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)((longlong)param_1 + 200);
    pTVar6 = &param_2->Report;
    do {
      puVar2 = (undefined8 *)((longlong)puVar5 + (longlong)param_2 + (-200 - (longlong)param_1));
      uVar4 = puVar2[1];
      puVar5[-0x19] = *puVar2;
      puVar5[-0x18] = uVar4;
      FAutomationDeviceInfo::FAutomationDeviceInfo
                ((FAutomationDeviceInfo *)(puVar5 + -0x17),
                 (FAutomationDeviceInfo *)((longlong)(pTVar6 + -0xc) + 8));
      *puVar5 = pTVar6->Object;
      pTVar3 = (pTVar6->SharedReferenceCount).ReferenceController;
      puVar5[1] = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pbVar1 = (bool *)(pTVar6 + 1);
      pTVar6 = pTVar6 + 0xe;
      *(bool *)(puVar5 + 2) = *pbVar1;
      puVar5 = puVar5 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FAutomatedTestFilter,int> @ 148c4fb30

void __cdecl DestructItems<FAutomatedTestFilter,int>(FAutomatedTestFilter *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAutomatedTestTagFilter,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Tags;
    do {
      DestructItems<FAutomatedTestTagFilter,int>
                ((FAutomatedTestTagFilter *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FAutomatedTestFilterBase,int>
                ((FAutomatedTestFilterBase *)
                 (((TArray<FAutomatedTestFilterBase,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 AllocatorInstance).Data,
                 ((TArray<FAutomatedTestFilterBase,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 ArrayNum);
      pFVar1 = (((TArray<FAutomatedTestFilterBase,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ((FAutomatedTestFilter *)(pTVar2 + -3))->_padding_ =
           (longlong)&___7FAutomatedTestFilterBase__6B_;
      if ((void *)((FAutomatedTestFilter *)(pTVar2 + -3))->_padding_ != (void *)0x0) {
        FMemory::Free((void *)((FAutomatedTestFilter *)(pTVar2 + -3))->_padding_);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomatedTestFilterBase,int> @ 148c4fbc0

void __cdecl
DestructItems<FAutomatedTestFilterBase,int>(FAutomatedTestFilterBase *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1->_padding_ = (longlong)&___7FAutomatedTestFilterBase__6B_;
    pFVar1 = (param_1->Contains).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAutomatedTestGroup,int> @ 148c4fc10

void __cdecl DestructItems<FAutomatedTestGroup,int>(FAutomatedTestGroup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAutomatedTestFilter,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Filters;
    do {
      DestructItems<FAutomatedTestFilter,int>
                ((FAutomatedTestFilter *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FAutomatedTestGroup *)(pTVar2 + -1))->Name).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomatedTestResult,int> @ 148c4fc70

void __cdecl DestructItems<FAutomatedTestResult,int>(FAutomatedTestResult *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Artifacts;
    do {
      DestructItems<FAutomationArtifact,int>
                ((FAutomationArtifact *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FAutomationExecutionEntry,int>
                ((FAutomationExecutionEntry *)
                 (((TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *)
                  ((FDateTime *)(pTVar2 + -2) + 1))->AllocatorInstance).Data,*(int *)(pTVar2 + -1));
      pFVar1 = (((TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *)
                ((FDateTime *)(pTVar2 + -2) + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>
                ((FString *)
                 (((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + -4) + 8))->
                 AllocatorInstance).Data,*(int *)(pTVar2 + -3));
      pFVar1 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + -4) + 8))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>
                ((FString *)
                 (((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -5))->AllocatorInstance)
                 .Data,((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -5))->ArrayNum);
      pFVar1 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(pTVar2 + -5))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -6))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -7))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((FAutomatedTestResult *)(pTVar2 + -8))->Test).SharedReferenceCount.
                 ReferenceController);
      pTVar2 = pTVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomatedTestTagFilter,int> @ 148c4fd40

void __cdecl
DestructItems<FAutomatedTestTagFilter,int>(FAutomatedTestTagFilter *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pTVar1 = (param_1->TagFilter).SharedReferenceCount.ReferenceController;
    param_1->_padding_ = (longlong)&___7FAutomatedTestTagFilter__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FAutomationArtifact,int> @ 148c4fd90

void __cdecl DestructItems<FAutomationArtifact,int>(FAutomationArtifact *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->LocalFiles).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      *(undefined4 *)(puVar1 + -9) = 0;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      if ((void *)puVar1[-0x15] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x15]);
      }
      puVar1 = puVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomationDeviceInfo,int> @ 148c4fe20

void __cdecl DestructItems<FAutomationDeviceInfo,int>(FAutomationDeviceInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->RHI;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pFVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -3) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -4) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -4) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -5) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -5) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -6) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -6) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -7) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -7) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -8) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -8) + 8));
      }
      if (*(void **)((longlong)(pFVar2 + -10) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pFVar2 + -10) + 8));
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 0xb) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomationTestResults,int> @ 148c4fef0

void __cdecl DestructItems<FAutomationTestResults,int>(FAutomationTestResults *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Entries;
    do {
      DestructItems<FAutomationExecutionEntry,int>
                ((FAutomationExecutionEntry *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FAutomationArtifact,int>
                ((FAutomationArtifact *)
                 (((TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 AllocatorInstance).Data,
                 ((TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
                 ArrayNum);
      pFVar1 = (((TArray<FAutomationArtifact,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -2))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,int> @ 148c4ff60

void __cdecl
DestructItems<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,int>
          (TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FAutomationTestResults,int>
              ((FAutomationTestResults *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1>,int> @ 148c4ffb0

void __cdecl
DestructItems<TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1>,int>
          (TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IAutomationReport,1>,int> @ 148c4fff0

void __cdecl
DestructItems<TSharedPtr<IAutomationReport,1>,int>
          (TSharedPtr<IAutomationReport,1> *param_1,int param_2)

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

// DestructItems<FAutomationDeviceClusterManager::FDeviceCluster,int> @ 148c50030

void __cdecl
DestructItems<FAutomationDeviceClusterManager::FDeviceCluster,int>
          (FDeviceCluster *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FAutomationDeviceClusterManager::FDeviceState,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Devices;
    do {
      DestructItems<FAutomationDeviceClusterManager::FDeviceState,int>
                ((FDeviceState *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FDeviceCluster *)(pTVar2 + -2))->ClusterName).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAutomationDeviceClusterManager::FDeviceState,int> @ 148c500a0

void __cdecl
DestructItems<FAutomationDeviceClusterManager::FDeviceState,int>(FDeviceState *param_1,int param_2)

{
  FAutomationDeviceInfo *this;
  
  if (param_2 != 0) {
    this = &param_1->Info;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[1].DeviceName.Data.ArrayNum);
      FAutomationDeviceInfo::~FAutomationDeviceInfo(this);
      this = (FAutomationDeviceInfo *)&this[1].InstanceName.Data.ArrayNum;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<FAutomationTestInfo,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestInfo,`FAutomationControllerManager::SetTestNames'::__l5::FCompareAutomationTestInfo>_> @ 148c50a90

void __cdecl
AlgoImpl::
HeapSortInternal<FAutomationTestInfo,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestInfo,_FAutomationControllerManager::SetTestNames_::__l5::FCompareAutomationTestInfo>_>
          (FAutomationTestInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAutomationTestInfo,_protected:_void___cdecl_FAutomationControllerManager::SetTestNames(FGuid_const_&,TArray<FAutomationTestInfo,TSizedDefaultAllocator<32>_>_&)_::_5_::FCompareAutomationTestInfo>
          param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined4 uVar13;
  EAutomationTestFlags EVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  EAutomationTestFlags EVar34;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  bool bVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  wchar_t *pwVar43;
  wchar_t *pwVar44;
  int iVar45;
  longlong lVar46;
  FAutomationTestInfo *pFVar47;
  FAutomationTestInfo *pFVar48;
  int iVar49;
  FAutomationTestInfo *pFVar50;
  
  if (param_2 < 0) {
    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar38) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar38) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar39 = (param_2 + -2) / 2;
  iVar41 = iVar39 * 2 + 1;
  iVar42 = iVar41;
  iVar49 = iVar39;
  do {
    while (param_2 <= iVar41) {
LAB_148c50cfd:
      if (iVar49 == 0) {
        iVar41 = param_2 + -1;
        lVar46 = (longlong)iVar41;
        if (0 < iVar41) {
          pFVar50 = param_1 + lVar46;
          do {
            iVar42 = (pFVar50->DisplayName).Data.ArrayNum;
            iVar39 = (pFVar50->DisplayName).Data.ArrayMax;
            uVar36 = param_1->NumDevicesCurrentlyRunningTest;
            uVar37 = *(undefined4 *)&param_1->field_0x94;
            pFVar4 = (param_1->DisplayName).Data.AllocatorInstance.Data;
            iVar49 = (param_1->DisplayName).Data.ArrayNum;
            iVar45 = (param_1->DisplayName).Data.ArrayMax;
            pFVar5 = (param_1->FullTestPath).Data.AllocatorInstance.Data;
            iVar40 = (param_1->FullTestPath).Data.ArrayNum;
            iVar16 = (param_1->FullTestPath).Data.ArrayMax;
            pFVar6 = (param_1->TestName).Data.AllocatorInstance.Data;
            iVar17 = (param_1->TestName).Data.ArrayNum;
            iVar18 = (param_1->TestName).Data.ArrayMax;
            pFVar7 = (param_1->TestTags).Data.AllocatorInstance.Data;
            iVar19 = (param_1->TestTags).Data.ArrayNum;
            iVar20 = (param_1->TestTags).Data.ArrayMax;
            pFVar8 = (param_1->TestParameter).Data.AllocatorInstance.Data;
            iVar21 = (param_1->TestParameter).Data.ArrayNum;
            iVar22 = (param_1->TestParameter).Data.ArrayMax;
            pFVar9 = (param_1->SourceFile).Data.AllocatorInstance.Data;
            iVar23 = (param_1->SourceFile).Data.ArrayNum;
            iVar24 = (param_1->SourceFile).Data.ArrayMax;
            iVar25 = param_1->SourceFileLine;
            uVar29 = *(undefined4 *)&param_1->field_0x64;
            pFVar10 = (param_1->AssetPath).Data.AllocatorInstance.Data;
            iVar26 = (param_1->AssetPath).Data.ArrayNum;
            iVar27 = (param_1->AssetPath).Data.ArrayMax;
            pFVar11 = (param_1->OpenCommand).Data.AllocatorInstance.Data;
            iVar28 = (param_1->OpenCommand).Data.ArrayNum;
            iVar30 = (param_1->OpenCommand).Data.ArrayMax;
            EVar34 = param_1->TestFlags;
            uVar35 = param_1->NumParticipantsRequired;
            (param_1->DisplayName).Data.AllocatorInstance.Data =
                 (pFVar50->DisplayName).Data.AllocatorInstance.Data;
            (param_1->DisplayName).Data.ArrayNum = iVar42;
            (param_1->DisplayName).Data.ArrayMax = iVar39;
            iVar42 = (pFVar50->FullTestPath).Data.ArrayNum;
            iVar39 = (pFVar50->FullTestPath).Data.ArrayMax;
            (param_1->FullTestPath).Data.AllocatorInstance.Data =
                 (pFVar50->FullTestPath).Data.AllocatorInstance.Data;
            (param_1->FullTestPath).Data.ArrayNum = iVar42;
            (param_1->FullTestPath).Data.ArrayMax = iVar39;
            iVar42 = (pFVar50->TestName).Data.ArrayNum;
            iVar39 = (pFVar50->TestName).Data.ArrayMax;
            (param_1->TestName).Data.AllocatorInstance.Data =
                 (pFVar50->TestName).Data.AllocatorInstance.Data;
            (param_1->TestName).Data.ArrayNum = iVar42;
            (param_1->TestName).Data.ArrayMax = iVar39;
            iVar42 = (pFVar50->TestTags).Data.ArrayNum;
            iVar39 = (pFVar50->TestTags).Data.ArrayMax;
            (param_1->TestTags).Data.AllocatorInstance.Data =
                 (pFVar50->TestTags).Data.AllocatorInstance.Data;
            (param_1->TestTags).Data.ArrayNum = iVar42;
            (param_1->TestTags).Data.ArrayMax = iVar39;
            iVar42 = (pFVar50->TestParameter).Data.ArrayNum;
            iVar39 = (pFVar50->TestParameter).Data.ArrayMax;
            (param_1->TestParameter).Data.AllocatorInstance.Data =
                 (pFVar50->TestParameter).Data.AllocatorInstance.Data;
            (param_1->TestParameter).Data.ArrayNum = iVar42;
            (param_1->TestParameter).Data.ArrayMax = iVar39;
            iVar42 = (pFVar50->SourceFile).Data.ArrayNum;
            iVar39 = (pFVar50->SourceFile).Data.ArrayMax;
            (param_1->SourceFile).Data.AllocatorInstance.Data =
                 (pFVar50->SourceFile).Data.AllocatorInstance.Data;
            (param_1->SourceFile).Data.ArrayNum = iVar42;
            (param_1->SourceFile).Data.ArrayMax = iVar39;
            uVar13 = *(undefined4 *)&pFVar50->field_0x64;
            pFVar12 = (pFVar50->AssetPath).Data.AllocatorInstance.Data;
            param_1->SourceFileLine = pFVar50->SourceFileLine;
            *(undefined4 *)&param_1->field_0x64 = uVar13;
            (param_1->AssetPath).Data.AllocatorInstance.Data = pFVar12;
            iVar42 = (pFVar50->AssetPath).Data.ArrayMax;
            pFVar12 = (pFVar50->OpenCommand).Data.AllocatorInstance.Data;
            (param_1->AssetPath).Data.ArrayNum = (pFVar50->AssetPath).Data.ArrayNum;
            (param_1->AssetPath).Data.ArrayMax = iVar42;
            (param_1->OpenCommand).Data.AllocatorInstance.Data = pFVar12;
            iVar42 = (pFVar50->OpenCommand).Data.ArrayMax;
            EVar14 = pFVar50->TestFlags;
            uVar15 = pFVar50->NumParticipantsRequired;
            (param_1->OpenCommand).Data.ArrayNum = (pFVar50->OpenCommand).Data.ArrayNum;
            (param_1->OpenCommand).Data.ArrayMax = iVar42;
            param_1->TestFlags = EVar14;
            param_1->NumParticipantsRequired = uVar15;
            uVar13 = *(undefined4 *)&pFVar50->field_0x94;
            param_1->NumDevicesCurrentlyRunningTest = pFVar50->NumDevicesCurrentlyRunningTest;
            *(undefined4 *)&param_1->field_0x94 = uVar13;
            (pFVar50->DisplayName).Data.AllocatorInstance.Data = pFVar4;
            (pFVar50->DisplayName).Data.ArrayNum = iVar49;
            (pFVar50->DisplayName).Data.ArrayMax = iVar45;
            (pFVar50->FullTestPath).Data.AllocatorInstance.Data = pFVar5;
            (pFVar50->FullTestPath).Data.ArrayNum = iVar40;
            (pFVar50->FullTestPath).Data.ArrayMax = iVar16;
            (pFVar50->TestName).Data.AllocatorInstance.Data = pFVar6;
            (pFVar50->TestName).Data.ArrayNum = iVar17;
            (pFVar50->TestName).Data.ArrayMax = iVar18;
            (pFVar50->TestTags).Data.AllocatorInstance.Data = pFVar7;
            (pFVar50->TestTags).Data.ArrayNum = iVar19;
            (pFVar50->TestTags).Data.ArrayMax = iVar20;
            (pFVar50->TestParameter).Data.AllocatorInstance.Data = pFVar8;
            (pFVar50->TestParameter).Data.ArrayNum = iVar21;
            (pFVar50->TestParameter).Data.ArrayMax = iVar22;
            (pFVar50->SourceFile).Data.AllocatorInstance.Data = pFVar9;
            (pFVar50->SourceFile).Data.ArrayNum = iVar23;
            (pFVar50->SourceFile).Data.ArrayMax = iVar24;
            pFVar50->SourceFileLine = iVar25;
            *(undefined4 *)&pFVar50->field_0x64 = uVar29;
            (pFVar50->AssetPath).Data.AllocatorInstance.Data = pFVar10;
            (pFVar50->AssetPath).Data.ArrayNum = iVar26;
            (pFVar50->AssetPath).Data.ArrayMax = iVar27;
            (pFVar50->OpenCommand).Data.AllocatorInstance.Data = pFVar11;
            (pFVar50->OpenCommand).Data.ArrayNum = iVar28;
            (pFVar50->OpenCommand).Data.ArrayMax = iVar30;
            pFVar50->TestFlags = EVar34;
            pFVar50->NumParticipantsRequired = uVar35;
            pFVar50->NumDevicesCurrentlyRunningTest = uVar36;
            *(undefined4 *)&pFVar50->field_0x94 = uVar37;
            iVar42 = 0;
            if (1 < iVar41) {
              do {
                iVar49 = iVar42 * 2;
                iVar39 = iVar49 + 1;
                if (iVar49 + 2 < iVar41) {
                  lVar1 = (longlong)iVar49 + 1;
                  lVar2 = (longlong)iVar49 + 2;
                  if (param_1[lVar1].DisplayName.Data.ArrayNum == 0) {
                    pwVar44 = L"";
                  }
                  else {
                    pwVar44 = (wchar_t *)param_1[lVar1].DisplayName.Data.AllocatorInstance.Data;
                  }
                  if (param_1[lVar2].DisplayName.Data.ArrayNum == 0) {
                    pwVar43 = L"";
                  }
                  else {
                    pwVar43 = (wchar_t *)param_1[lVar2].DisplayName.Data.AllocatorInstance.Data;
                  }
                  iVar45 = FGenericPlatformStricmp::Stricmp(pwVar43,pwVar44);
                  if (iVar45 < 0) {
                    iVar39 = iVar49;
                  }
                  iVar39 = iVar39 + 1;
                }
                pFVar47 = param_1 + iVar42;
                pFVar48 = param_1 + iVar39;
                if ((pFVar48->DisplayName).Data.ArrayNum == 0) {
                  pwVar44 = L"";
                }
                else {
                  pwVar44 = (wchar_t *)(pFVar48->DisplayName).Data.AllocatorInstance.Data;
                }
                if ((pFVar47->DisplayName).Data.ArrayNum == 0) {
                  pwVar43 = L"";
                }
                else {
                  pwVar43 = (wchar_t *)(pFVar47->DisplayName).Data.AllocatorInstance.Data;
                }
                iVar42 = FGenericPlatformStricmp::Stricmp(pwVar43,pwVar44);
                if (-1 < iVar42) break;
                iVar42 = (pFVar48->DisplayName).Data.ArrayNum;
                iVar49 = (pFVar48->DisplayName).Data.ArrayMax;
                uVar36 = pFVar47->NumDevicesCurrentlyRunningTest;
                uVar37 = *(undefined4 *)&pFVar47->field_0x94;
                pFVar4 = (pFVar47->DisplayName).Data.AllocatorInstance.Data;
                iVar45 = (pFVar47->DisplayName).Data.ArrayNum;
                iVar40 = (pFVar47->DisplayName).Data.ArrayMax;
                pFVar5 = (pFVar47->FullTestPath).Data.AllocatorInstance.Data;
                iVar16 = (pFVar47->FullTestPath).Data.ArrayNum;
                iVar17 = (pFVar47->FullTestPath).Data.ArrayMax;
                pFVar6 = (pFVar47->TestName).Data.AllocatorInstance.Data;
                iVar18 = (pFVar47->TestName).Data.ArrayNum;
                iVar19 = (pFVar47->TestName).Data.ArrayMax;
                pFVar7 = (pFVar47->TestTags).Data.AllocatorInstance.Data;
                iVar20 = (pFVar47->TestTags).Data.ArrayNum;
                iVar21 = (pFVar47->TestTags).Data.ArrayMax;
                pFVar8 = (pFVar47->TestParameter).Data.AllocatorInstance.Data;
                iVar22 = (pFVar47->TestParameter).Data.ArrayNum;
                iVar23 = (pFVar47->TestParameter).Data.ArrayMax;
                pFVar9 = (pFVar47->SourceFile).Data.AllocatorInstance.Data;
                iVar24 = (pFVar47->SourceFile).Data.ArrayNum;
                iVar25 = (pFVar47->SourceFile).Data.ArrayMax;
                iVar26 = pFVar47->SourceFileLine;
                uVar29 = *(undefined4 *)&pFVar47->field_0x64;
                pFVar10 = (pFVar47->AssetPath).Data.AllocatorInstance.Data;
                iVar27 = (pFVar47->AssetPath).Data.ArrayNum;
                iVar28 = (pFVar47->AssetPath).Data.ArrayMax;
                pFVar11 = (pFVar47->OpenCommand).Data.AllocatorInstance.Data;
                iVar30 = (pFVar47->OpenCommand).Data.ArrayNum;
                iVar31 = (pFVar47->OpenCommand).Data.ArrayMax;
                EVar34 = pFVar47->TestFlags;
                uVar35 = pFVar47->NumParticipantsRequired;
                (pFVar47->DisplayName).Data.AllocatorInstance.Data =
                     (pFVar48->DisplayName).Data.AllocatorInstance.Data;
                (pFVar47->DisplayName).Data.ArrayNum = iVar42;
                (pFVar47->DisplayName).Data.ArrayMax = iVar49;
                iVar42 = (pFVar48->FullTestPath).Data.ArrayNum;
                iVar49 = (pFVar48->FullTestPath).Data.ArrayMax;
                (pFVar47->FullTestPath).Data.AllocatorInstance.Data =
                     (pFVar48->FullTestPath).Data.AllocatorInstance.Data;
                (pFVar47->FullTestPath).Data.ArrayNum = iVar42;
                (pFVar47->FullTestPath).Data.ArrayMax = iVar49;
                iVar42 = (pFVar48->TestName).Data.ArrayNum;
                iVar49 = (pFVar48->TestName).Data.ArrayMax;
                (pFVar47->TestName).Data.AllocatorInstance.Data =
                     (pFVar48->TestName).Data.AllocatorInstance.Data;
                (pFVar47->TestName).Data.ArrayNum = iVar42;
                (pFVar47->TestName).Data.ArrayMax = iVar49;
                iVar42 = (pFVar48->TestTags).Data.ArrayNum;
                iVar49 = (pFVar48->TestTags).Data.ArrayMax;
                (pFVar47->TestTags).Data.AllocatorInstance.Data =
                     (pFVar48->TestTags).Data.AllocatorInstance.Data;
                (pFVar47->TestTags).Data.ArrayNum = iVar42;
                (pFVar47->TestTags).Data.ArrayMax = iVar49;
                iVar42 = (pFVar48->TestParameter).Data.ArrayNum;
                iVar49 = (pFVar48->TestParameter).Data.ArrayMax;
                (pFVar47->TestParameter).Data.AllocatorInstance.Data =
                     (pFVar48->TestParameter).Data.AllocatorInstance.Data;
                (pFVar47->TestParameter).Data.ArrayNum = iVar42;
                (pFVar47->TestParameter).Data.ArrayMax = iVar49;
                iVar42 = (pFVar48->SourceFile).Data.ArrayNum;
                iVar49 = (pFVar48->SourceFile).Data.ArrayMax;
                (pFVar47->SourceFile).Data.AllocatorInstance.Data =
                     (pFVar48->SourceFile).Data.AllocatorInstance.Data;
                (pFVar47->SourceFile).Data.ArrayNum = iVar42;
                (pFVar47->SourceFile).Data.ArrayMax = iVar49;
                uVar13 = *(undefined4 *)&pFVar48->field_0x64;
                pFVar12 = (pFVar48->AssetPath).Data.AllocatorInstance.Data;
                pFVar47->SourceFileLine = pFVar48->SourceFileLine;
                *(undefined4 *)&pFVar47->field_0x64 = uVar13;
                (pFVar47->AssetPath).Data.AllocatorInstance.Data = pFVar12;
                iVar42 = (pFVar48->AssetPath).Data.ArrayMax;
                pFVar12 = (pFVar48->OpenCommand).Data.AllocatorInstance.Data;
                (pFVar47->AssetPath).Data.ArrayNum = (pFVar48->AssetPath).Data.ArrayNum;
                (pFVar47->AssetPath).Data.ArrayMax = iVar42;
                (pFVar47->OpenCommand).Data.AllocatorInstance.Data = pFVar12;
                iVar42 = (pFVar48->OpenCommand).Data.ArrayMax;
                EVar14 = pFVar48->TestFlags;
                uVar15 = pFVar48->NumParticipantsRequired;
                (pFVar47->OpenCommand).Data.ArrayNum = (pFVar48->OpenCommand).Data.ArrayNum;
                (pFVar47->OpenCommand).Data.ArrayMax = iVar42;
                pFVar47->TestFlags = EVar14;
                pFVar47->NumParticipantsRequired = uVar15;
                uVar13 = *(undefined4 *)&pFVar48->field_0x94;
                pFVar47->NumDevicesCurrentlyRunningTest = pFVar48->NumDevicesCurrentlyRunningTest;
                *(undefined4 *)&pFVar47->field_0x94 = uVar13;
                (pFVar48->DisplayName).Data.AllocatorInstance.Data = pFVar4;
                (pFVar48->DisplayName).Data.ArrayNum = iVar45;
                (pFVar48->DisplayName).Data.ArrayMax = iVar40;
                (pFVar48->FullTestPath).Data.AllocatorInstance.Data = pFVar5;
                (pFVar48->FullTestPath).Data.ArrayNum = iVar16;
                (pFVar48->FullTestPath).Data.ArrayMax = iVar17;
                (pFVar48->TestName).Data.AllocatorInstance.Data = pFVar6;
                (pFVar48->TestName).Data.ArrayNum = iVar18;
                (pFVar48->TestName).Data.ArrayMax = iVar19;
                (pFVar48->TestTags).Data.AllocatorInstance.Data = pFVar7;
                (pFVar48->TestTags).Data.ArrayNum = iVar20;
                (pFVar48->TestTags).Data.ArrayMax = iVar21;
                (pFVar48->TestParameter).Data.AllocatorInstance.Data = pFVar8;
                (pFVar48->TestParameter).Data.ArrayNum = iVar22;
                (pFVar48->TestParameter).Data.ArrayMax = iVar23;
                (pFVar48->SourceFile).Data.AllocatorInstance.Data = pFVar9;
                (pFVar48->SourceFile).Data.ArrayNum = iVar24;
                (pFVar48->SourceFile).Data.ArrayMax = iVar25;
                pFVar48->SourceFileLine = iVar26;
                *(undefined4 *)&pFVar48->field_0x64 = uVar29;
                (pFVar48->AssetPath).Data.AllocatorInstance.Data = pFVar10;
                (pFVar48->AssetPath).Data.ArrayNum = iVar27;
                (pFVar48->AssetPath).Data.ArrayMax = iVar28;
                (pFVar48->OpenCommand).Data.AllocatorInstance.Data = pFVar11;
                (pFVar48->OpenCommand).Data.ArrayNum = iVar30;
                (pFVar48->OpenCommand).Data.ArrayMax = iVar31;
                pFVar48->TestFlags = EVar34;
                pFVar48->NumParticipantsRequired = uVar35;
                pFVar48->NumDevicesCurrentlyRunningTest = uVar36;
                *(undefined4 *)&pFVar48->field_0x94 = uVar37;
                iVar42 = iVar39;
              } while (iVar39 * 2 + 1 < iVar41);
            }
            iVar41 = iVar41 + -1;
            lVar46 = lVar46 + -1;
            pFVar50 = pFVar50 + -1;
          } while (0 < lVar46);
        }
        return;
      }
      iVar39 = iVar49 + -1;
      iVar41 = iVar42 + -2;
      iVar42 = iVar41;
      iVar49 = iVar39;
    }
    iVar41 = iVar39 * 2;
    iVar45 = iVar41 + 1;
    if (iVar41 + 2 < param_2) {
      lVar46 = (longlong)iVar41 + 1;
      lVar1 = (longlong)iVar41 + 2;
      if (param_1[lVar46].DisplayName.Data.ArrayNum == 0) {
        pwVar44 = L"";
      }
      else {
        pwVar44 = (wchar_t *)param_1[lVar46].DisplayName.Data.AllocatorInstance.Data;
      }
      if (param_1[lVar1].DisplayName.Data.ArrayNum == 0) {
        pwVar43 = L"";
      }
      else {
        pwVar43 = (wchar_t *)param_1[lVar1].DisplayName.Data.AllocatorInstance.Data;
      }
      iVar40 = FGenericPlatformStricmp::Stricmp(pwVar43,pwVar44);
      if (iVar40 < 0) {
        iVar45 = iVar41;
      }
      iVar45 = iVar45 + 1;
    }
    pFVar50 = param_1 + iVar39;
    pFVar47 = param_1 + iVar45;
    if ((pFVar47->DisplayName).Data.ArrayNum == 0) {
      pwVar44 = L"";
    }
    else {
      pwVar44 = (wchar_t *)(pFVar47->DisplayName).Data.AllocatorInstance.Data;
    }
    if ((pFVar50->DisplayName).Data.ArrayNum == 0) {
      pwVar43 = L"";
    }
    else {
      pwVar43 = (wchar_t *)(pFVar50->DisplayName).Data.AllocatorInstance.Data;
    }
    iVar41 = FGenericPlatformStricmp::Stricmp(pwVar43,pwVar44);
    if (-1 < iVar41) goto LAB_148c50cfd;
    iVar39 = (pFVar47->DisplayName).Data.ArrayNum;
    iVar40 = (pFVar47->DisplayName).Data.ArrayMax;
    iVar41 = iVar45 * 2 + 1;
    uVar36 = pFVar50->NumDevicesCurrentlyRunningTest;
    uVar37 = *(undefined4 *)&pFVar50->field_0x94;
    pFVar4 = (pFVar50->DisplayName).Data.AllocatorInstance.Data;
    iVar16 = (pFVar50->DisplayName).Data.ArrayNum;
    iVar17 = (pFVar50->DisplayName).Data.ArrayMax;
    pFVar5 = (pFVar50->FullTestPath).Data.AllocatorInstance.Data;
    iVar18 = (pFVar50->FullTestPath).Data.ArrayNum;
    iVar19 = (pFVar50->FullTestPath).Data.ArrayMax;
    pFVar6 = (pFVar50->TestName).Data.AllocatorInstance.Data;
    iVar20 = (pFVar50->TestName).Data.ArrayNum;
    iVar21 = (pFVar50->TestName).Data.ArrayMax;
    pFVar7 = (pFVar50->TestTags).Data.AllocatorInstance.Data;
    iVar22 = (pFVar50->TestTags).Data.ArrayNum;
    iVar23 = (pFVar50->TestTags).Data.ArrayMax;
    pFVar8 = (pFVar50->TestParameter).Data.AllocatorInstance.Data;
    iVar24 = (pFVar50->TestParameter).Data.ArrayNum;
    iVar25 = (pFVar50->TestParameter).Data.ArrayMax;
    pFVar9 = (pFVar50->SourceFile).Data.AllocatorInstance.Data;
    iVar26 = (pFVar50->SourceFile).Data.ArrayNum;
    iVar27 = (pFVar50->SourceFile).Data.ArrayMax;
    iVar28 = pFVar50->SourceFileLine;
    uVar29 = *(undefined4 *)&pFVar50->field_0x64;
    pFVar10 = (pFVar50->AssetPath).Data.AllocatorInstance.Data;
    iVar30 = (pFVar50->AssetPath).Data.ArrayNum;
    iVar31 = (pFVar50->AssetPath).Data.ArrayMax;
    pFVar11 = (pFVar50->OpenCommand).Data.AllocatorInstance.Data;
    iVar32 = (pFVar50->OpenCommand).Data.ArrayNum;
    iVar33 = (pFVar50->OpenCommand).Data.ArrayMax;
    EVar34 = pFVar50->TestFlags;
    uVar35 = pFVar50->NumParticipantsRequired;
    (pFVar50->DisplayName).Data.AllocatorInstance.Data =
         (pFVar47->DisplayName).Data.AllocatorInstance.Data;
    (pFVar50->DisplayName).Data.ArrayNum = iVar39;
    (pFVar50->DisplayName).Data.ArrayMax = iVar40;
    iVar39 = (pFVar47->FullTestPath).Data.ArrayNum;
    iVar40 = (pFVar47->FullTestPath).Data.ArrayMax;
    (pFVar50->FullTestPath).Data.AllocatorInstance.Data =
         (pFVar47->FullTestPath).Data.AllocatorInstance.Data;
    (pFVar50->FullTestPath).Data.ArrayNum = iVar39;
    (pFVar50->FullTestPath).Data.ArrayMax = iVar40;
    iVar39 = (pFVar47->TestName).Data.ArrayNum;
    iVar40 = (pFVar47->TestName).Data.ArrayMax;
    (pFVar50->TestName).Data.AllocatorInstance.Data =
         (pFVar47->TestName).Data.AllocatorInstance.Data;
    (pFVar50->TestName).Data.ArrayNum = iVar39;
    (pFVar50->TestName).Data.ArrayMax = iVar40;
    iVar39 = (pFVar47->TestTags).Data.ArrayNum;
    iVar40 = (pFVar47->TestTags).Data.ArrayMax;
    (pFVar50->TestTags).Data.AllocatorInstance.Data =
         (pFVar47->TestTags).Data.AllocatorInstance.Data;
    (pFVar50->TestTags).Data.ArrayNum = iVar39;
    (pFVar50->TestTags).Data.ArrayMax = iVar40;
    iVar39 = (pFVar47->TestParameter).Data.ArrayNum;
    iVar40 = (pFVar47->TestParameter).Data.ArrayMax;
    (pFVar50->TestParameter).Data.AllocatorInstance.Data =
         (pFVar47->TestParameter).Data.AllocatorInstance.Data;
    (pFVar50->TestParameter).Data.ArrayNum = iVar39;
    (pFVar50->TestParameter).Data.ArrayMax = iVar40;
    iVar39 = (pFVar47->SourceFile).Data.ArrayNum;
    iVar40 = (pFVar47->SourceFile).Data.ArrayMax;
    (pFVar50->SourceFile).Data.AllocatorInstance.Data =
         (pFVar47->SourceFile).Data.AllocatorInstance.Data;
    (pFVar50->SourceFile).Data.ArrayNum = iVar39;
    (pFVar50->SourceFile).Data.ArrayMax = iVar40;
    uVar13 = *(undefined4 *)&pFVar47->field_0x64;
    pFVar12 = (pFVar47->AssetPath).Data.AllocatorInstance.Data;
    pFVar50->SourceFileLine = pFVar47->SourceFileLine;
    *(undefined4 *)&pFVar50->field_0x64 = uVar13;
    (pFVar50->AssetPath).Data.AllocatorInstance.Data = pFVar12;
    iVar39 = (pFVar47->AssetPath).Data.ArrayMax;
    pFVar12 = (pFVar47->OpenCommand).Data.AllocatorInstance.Data;
    (pFVar50->AssetPath).Data.ArrayNum = (pFVar47->AssetPath).Data.ArrayNum;
    (pFVar50->AssetPath).Data.ArrayMax = iVar39;
    (pFVar50->OpenCommand).Data.AllocatorInstance.Data = pFVar12;
    iVar39 = (pFVar47->OpenCommand).Data.ArrayMax;
    EVar14 = pFVar47->TestFlags;
    uVar15 = pFVar47->NumParticipantsRequired;
    (pFVar50->OpenCommand).Data.ArrayNum = (pFVar47->OpenCommand).Data.ArrayNum;
    (pFVar50->OpenCommand).Data.ArrayMax = iVar39;
    pFVar50->TestFlags = EVar14;
    pFVar50->NumParticipantsRequired = uVar15;
    uVar13 = *(undefined4 *)&pFVar47->field_0x94;
    pFVar50->NumDevicesCurrentlyRunningTest = pFVar47->NumDevicesCurrentlyRunningTest;
    *(undefined4 *)&pFVar50->field_0x94 = uVar13;
    (pFVar47->DisplayName).Data.AllocatorInstance.Data = pFVar4;
    (pFVar47->DisplayName).Data.ArrayNum = iVar16;
    (pFVar47->DisplayName).Data.ArrayMax = iVar17;
    (pFVar47->FullTestPath).Data.AllocatorInstance.Data = pFVar5;
    (pFVar47->FullTestPath).Data.ArrayNum = iVar18;
    (pFVar47->FullTestPath).Data.ArrayMax = iVar19;
    (pFVar47->TestName).Data.AllocatorInstance.Data = pFVar6;
    (pFVar47->TestName).Data.ArrayNum = iVar20;
    (pFVar47->TestName).Data.ArrayMax = iVar21;
    (pFVar47->TestTags).Data.AllocatorInstance.Data = pFVar7;
    (pFVar47->TestTags).Data.ArrayNum = iVar22;
    (pFVar47->TestTags).Data.ArrayMax = iVar23;
    (pFVar47->TestParameter).Data.AllocatorInstance.Data = pFVar8;
    (pFVar47->TestParameter).Data.ArrayNum = iVar24;
    (pFVar47->TestParameter).Data.ArrayMax = iVar25;
    (pFVar47->SourceFile).Data.AllocatorInstance.Data = pFVar9;
    (pFVar47->SourceFile).Data.ArrayNum = iVar26;
    (pFVar47->SourceFile).Data.ArrayMax = iVar27;
    pFVar47->SourceFileLine = iVar28;
    *(undefined4 *)&pFVar47->field_0x64 = uVar29;
    (pFVar47->AssetPath).Data.AllocatorInstance.Data = pFVar10;
    (pFVar47->AssetPath).Data.ArrayNum = iVar30;
    (pFVar47->AssetPath).Data.ArrayMax = iVar31;
    (pFVar47->OpenCommand).Data.AllocatorInstance.Data = pFVar11;
    (pFVar47->OpenCommand).Data.ArrayNum = iVar32;
    (pFVar47->OpenCommand).Data.ArrayMax = iVar33;
    pFVar47->TestFlags = EVar34;
    pFVar47->NumParticipantsRequired = uVar35;
    pFVar47->NumDevicesCurrentlyRunningTest = uVar36;
    *(undefined4 *)&pFVar47->field_0x94 = uVar37;
    iVar39 = iVar45;
  } while( true );
}

// InternalConstructor<UAutomationControllerSettings> @ 148c51010

void __cdecl InternalConstructor<UAutomationControllerSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x12 = 1;
    *(undefined ***)this = &___7UAutomationControllerSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined2 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)(this + 2) = 0x1000100;
    this[2].field_0x4 = 1;
    *(undefined4 *)&this[2].field_0xc = 0x43960000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAutomationControllerSettings> @ 148c51090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAutomationControllerSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutomationControllerSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAutomationControllerSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FAutomationTestInfo,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestInfo,`FAutomationControllerManager::SetTestNames'::__l5::FCompareAutomationTestInfo>_> @ 148c51160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<FAutomationTestInfo,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestInfo,_FAutomationControllerManager::SetTestNames_::__l5::FCompareAutomationTestInfo>_>
          (FAutomationTestInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAutomationTestInfo,_protected:_void___cdecl_FAutomationControllerManager::SetTestNames(FGuid_const_&,TArray<FAutomationTestInfo,TSizedDefaultAllocator<32>_>_&)_::_5_::FCompareAutomationTestInfo>
          param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  EAutomationTestFlags EVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined4 uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  EAutomationTestFlags EVar35;
  uint uVar36;
  uint uVar37;
  undefined4 uVar38;
  wchar_t *pwVar39;
  longlong lVar40;
  int iVar41;
  wchar_t *pwVar42;
  FAutomationTestInfo *pFVar43;
  FAutomationTestInfo *pFVar44;
  FAutomationTestInfo *pFVar45;
  FAutomationTestInfo **ppFVar46;
  int iVar47;
  FAutomationTestInfo *pFVar48;
  FAutomationTestInfo *pFVar49;
  FAutomationTestInfo *pFVar50;
  float fVar51;
  undefined1 auStack_3e8 [48];
  FAutomationTestInfo *local_3b8;
  FAutomationTestInfo *local_3a8;
  FAutomationTestInfo *local_3a0;
  undefined4 local_398;
  undefined1 local_390 [744];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  if (1 < param_2) {
    local_3a0 = param_1 + (longlong)param_2 + -1;
    local_3a8 = param_1;
    fVar51 = logf((float)param_2 * (float)param_2);
    local_398 = (undefined4)(longlong)fVar51;
    memset(local_390,0,0x2e8);
    ppFVar46 = &local_3a8;
    do {
      pFVar43 = ppFVar46[1];
      pFVar50 = *ppFVar46;
      local_3b8 = ppFVar46[2];
      iVar41 = (int)(((longlong)pFVar43 - (longlong)pFVar50) / 0x98) + 1;
      pFVar49 = pFVar50;
      iVar47 = (int)local_3b8;
      if ((int)local_3b8 != 0) {
LAB_148c51270:
        if (8 < iVar41) {
          iVar12 = (pFVar49->DisplayName).Data.ArrayNum;
          iVar13 = (pFVar49->DisplayName).Data.ArrayMax;
          pFVar44 = pFVar43 + 1;
          pFVar50 = pFVar49 + iVar41 / 2;
          pFVar1 = (pFVar50->DisplayName).Data.AllocatorInstance.Data;
          iVar17 = (pFVar50->DisplayName).Data.ArrayNum;
          iVar18 = (pFVar50->DisplayName).Data.ArrayMax;
          pFVar2 = (pFVar50->FullTestPath).Data.AllocatorInstance.Data;
          iVar19 = (pFVar50->FullTestPath).Data.ArrayNum;
          iVar20 = (pFVar50->FullTestPath).Data.ArrayMax;
          pFVar3 = (pFVar50->TestName).Data.AllocatorInstance.Data;
          iVar21 = (pFVar50->TestName).Data.ArrayNum;
          iVar22 = (pFVar50->TestName).Data.ArrayMax;
          pFVar4 = (pFVar50->TestTags).Data.AllocatorInstance.Data;
          iVar23 = (pFVar50->TestTags).Data.ArrayNum;
          iVar24 = (pFVar50->TestTags).Data.ArrayMax;
          pFVar5 = (pFVar50->TestParameter).Data.AllocatorInstance.Data;
          iVar25 = (pFVar50->TestParameter).Data.ArrayNum;
          iVar26 = (pFVar50->TestParameter).Data.ArrayMax;
          pFVar6 = (pFVar50->SourceFile).Data.AllocatorInstance.Data;
          iVar27 = (pFVar50->SourceFile).Data.ArrayNum;
          iVar28 = (pFVar50->SourceFile).Data.ArrayMax;
          iVar29 = pFVar50->SourceFileLine;
          uVar30 = *(undefined4 *)&pFVar50->field_0x64;
          pFVar7 = (pFVar50->AssetPath).Data.AllocatorInstance.Data;
          iVar31 = (pFVar50->AssetPath).Data.ArrayNum;
          iVar32 = (pFVar50->AssetPath).Data.ArrayMax;
          pFVar8 = (pFVar50->OpenCommand).Data.AllocatorInstance.Data;
          iVar33 = (pFVar50->OpenCommand).Data.ArrayNum;
          iVar34 = (pFVar50->OpenCommand).Data.ArrayMax;
          EVar35 = pFVar50->TestFlags;
          uVar36 = pFVar50->NumParticipantsRequired;
          uVar37 = pFVar50->NumDevicesCurrentlyRunningTest;
          uVar38 = *(undefined4 *)&pFVar50->field_0x94;
          (pFVar50->DisplayName).Data.AllocatorInstance.Data =
               (pFVar49->DisplayName).Data.AllocatorInstance.Data;
          (pFVar50->DisplayName).Data.ArrayNum = iVar12;
          (pFVar50->DisplayName).Data.ArrayMax = iVar13;
          iVar41 = (pFVar49->FullTestPath).Data.ArrayNum;
          iVar12 = (pFVar49->FullTestPath).Data.ArrayMax;
          (pFVar50->FullTestPath).Data.AllocatorInstance.Data =
               (pFVar49->FullTestPath).Data.AllocatorInstance.Data;
          (pFVar50->FullTestPath).Data.ArrayNum = iVar41;
          (pFVar50->FullTestPath).Data.ArrayMax = iVar12;
          iVar41 = (pFVar49->TestName).Data.ArrayNum;
          iVar12 = (pFVar49->TestName).Data.ArrayMax;
          (pFVar50->TestName).Data.AllocatorInstance.Data =
               (pFVar49->TestName).Data.AllocatorInstance.Data;
          (pFVar50->TestName).Data.ArrayNum = iVar41;
          (pFVar50->TestName).Data.ArrayMax = iVar12;
          iVar41 = (pFVar49->TestTags).Data.ArrayNum;
          iVar12 = (pFVar49->TestTags).Data.ArrayMax;
          (pFVar50->TestTags).Data.AllocatorInstance.Data =
               (pFVar49->TestTags).Data.AllocatorInstance.Data;
          (pFVar50->TestTags).Data.ArrayNum = iVar41;
          (pFVar50->TestTags).Data.ArrayMax = iVar12;
          iVar41 = (pFVar49->TestParameter).Data.ArrayNum;
          iVar12 = (pFVar49->TestParameter).Data.ArrayMax;
          (pFVar50->TestParameter).Data.AllocatorInstance.Data =
               (pFVar49->TestParameter).Data.AllocatorInstance.Data;
          (pFVar50->TestParameter).Data.ArrayNum = iVar41;
          (pFVar50->TestParameter).Data.ArrayMax = iVar12;
          iVar41 = (pFVar49->SourceFile).Data.ArrayNum;
          iVar12 = (pFVar49->SourceFile).Data.ArrayMax;
          (pFVar50->SourceFile).Data.AllocatorInstance.Data =
               (pFVar49->SourceFile).Data.AllocatorInstance.Data;
          (pFVar50->SourceFile).Data.ArrayNum = iVar41;
          (pFVar50->SourceFile).Data.ArrayMax = iVar12;
          uVar14 = *(undefined4 *)&pFVar49->field_0x64;
          pFVar9 = (pFVar49->AssetPath).Data.AllocatorInstance.Data;
          pFVar50->SourceFileLine = pFVar49->SourceFileLine;
          *(undefined4 *)&pFVar50->field_0x64 = uVar14;
          (pFVar50->AssetPath).Data.AllocatorInstance.Data = pFVar9;
          iVar41 = (pFVar49->AssetPath).Data.ArrayMax;
          pFVar9 = (pFVar49->OpenCommand).Data.AllocatorInstance.Data;
          (pFVar50->AssetPath).Data.ArrayNum = (pFVar49->AssetPath).Data.ArrayNum;
          (pFVar50->AssetPath).Data.ArrayMax = iVar41;
          (pFVar50->OpenCommand).Data.AllocatorInstance.Data = pFVar9;
          iVar41 = (pFVar49->OpenCommand).Data.ArrayMax;
          EVar15 = pFVar49->TestFlags;
          uVar16 = pFVar49->NumParticipantsRequired;
          (pFVar50->OpenCommand).Data.ArrayNum = (pFVar49->OpenCommand).Data.ArrayNum;
          (pFVar50->OpenCommand).Data.ArrayMax = iVar41;
          pFVar50->TestFlags = EVar15;
          pFVar50->NumParticipantsRequired = uVar16;
          uVar14 = *(undefined4 *)&pFVar49->field_0x94;
          pFVar50->NumDevicesCurrentlyRunningTest = pFVar49->NumDevicesCurrentlyRunningTest;
          *(undefined4 *)&pFVar50->field_0x94 = uVar14;
          (pFVar49->DisplayName).Data.AllocatorInstance.Data = pFVar1;
          (pFVar49->DisplayName).Data.ArrayNum = iVar17;
          (pFVar49->DisplayName).Data.ArrayMax = iVar18;
          (pFVar49->FullTestPath).Data.AllocatorInstance.Data = pFVar2;
          (pFVar49->FullTestPath).Data.ArrayNum = iVar19;
          (pFVar49->FullTestPath).Data.ArrayMax = iVar20;
          (pFVar49->TestName).Data.AllocatorInstance.Data = pFVar3;
          (pFVar49->TestName).Data.ArrayNum = iVar21;
          (pFVar49->TestName).Data.ArrayMax = iVar22;
          (pFVar49->TestTags).Data.AllocatorInstance.Data = pFVar4;
          (pFVar49->TestTags).Data.ArrayNum = iVar23;
          (pFVar49->TestTags).Data.ArrayMax = iVar24;
          (pFVar49->TestParameter).Data.AllocatorInstance.Data = pFVar5;
          (pFVar49->TestParameter).Data.ArrayNum = iVar25;
          (pFVar49->TestParameter).Data.ArrayMax = iVar26;
          (pFVar49->SourceFile).Data.AllocatorInstance.Data = pFVar6;
          (pFVar49->SourceFile).Data.ArrayNum = iVar27;
          (pFVar49->SourceFile).Data.ArrayMax = iVar28;
          pFVar49->SourceFileLine = iVar29;
          *(undefined4 *)&pFVar49->field_0x64 = uVar30;
          (pFVar49->AssetPath).Data.AllocatorInstance.Data = pFVar7;
          (pFVar49->AssetPath).Data.ArrayNum = iVar31;
          (pFVar49->AssetPath).Data.ArrayMax = iVar32;
          (pFVar49->OpenCommand).Data.AllocatorInstance.Data = pFVar8;
          (pFVar49->OpenCommand).Data.ArrayNum = iVar33;
          (pFVar49->OpenCommand).Data.ArrayMax = iVar34;
          pFVar49->TestFlags = EVar35;
          pFVar49->NumParticipantsRequired = uVar36;
          pFVar49->NumDevicesCurrentlyRunningTest = uVar37;
          *(undefined4 *)&pFVar49->field_0x94 = uVar38;
          pFVar50 = pFVar49;
LAB_148c51370:
          pFVar48 = pFVar50;
          pFVar50 = pFVar48 + 1;
          if (pFVar50 <= pFVar43) goto code_r0x000148c5137c;
          goto LAB_148c513b0;
        }
        for (; pFVar44 = pFVar49, pFVar50 = pFVar49, pFVar49 < pFVar43; pFVar43 = pFVar43 + -1) {
          while (pFVar48 = pFVar44, pFVar50 = pFVar50 + 1, pFVar50 <= pFVar43) {
            if ((pFVar50->DisplayName).Data.ArrayNum == 0) {
              pwVar42 = L"";
            }
            else {
              pwVar42 = (wchar_t *)(pFVar50->DisplayName).Data.AllocatorInstance.Data;
            }
            if ((pFVar48->DisplayName).Data.ArrayNum == 0) {
              pwVar39 = L"";
            }
            else {
              pwVar39 = (wchar_t *)(pFVar48->DisplayName).Data.AllocatorInstance.Data;
            }
            iVar47 = FGenericPlatformStricmp::Stricmp(pwVar39,pwVar42);
            pFVar44 = pFVar50;
            if (-1 < iVar47) {
              pFVar44 = pFVar48;
            }
          }
          pFVar1 = (pFVar48->DisplayName).Data.AllocatorInstance.Data;
          iVar12 = (pFVar48->DisplayName).Data.ArrayNum;
          iVar13 = (pFVar48->DisplayName).Data.ArrayMax;
          uVar37 = pFVar48->NumDevicesCurrentlyRunningTest;
          uVar38 = *(undefined4 *)&pFVar48->field_0x94;
          pFVar2 = (pFVar48->FullTestPath).Data.AllocatorInstance.Data;
          iVar17 = (pFVar48->FullTestPath).Data.ArrayNum;
          iVar18 = (pFVar48->FullTestPath).Data.ArrayMax;
          iVar47 = (pFVar43->DisplayName).Data.ArrayNum;
          iVar41 = (pFVar43->DisplayName).Data.ArrayMax;
          pFVar3 = (pFVar48->TestName).Data.AllocatorInstance.Data;
          iVar19 = (pFVar48->TestName).Data.ArrayNum;
          iVar20 = (pFVar48->TestName).Data.ArrayMax;
          pFVar4 = (pFVar48->TestTags).Data.AllocatorInstance.Data;
          iVar21 = (pFVar48->TestTags).Data.ArrayNum;
          iVar22 = (pFVar48->TestTags).Data.ArrayMax;
          pFVar5 = (pFVar48->TestParameter).Data.AllocatorInstance.Data;
          iVar23 = (pFVar48->TestParameter).Data.ArrayNum;
          iVar24 = (pFVar48->TestParameter).Data.ArrayMax;
          pFVar6 = (pFVar48->SourceFile).Data.AllocatorInstance.Data;
          iVar25 = (pFVar48->SourceFile).Data.ArrayNum;
          iVar26 = (pFVar48->SourceFile).Data.ArrayMax;
          iVar27 = pFVar48->SourceFileLine;
          uVar30 = *(undefined4 *)&pFVar48->field_0x64;
          pFVar7 = (pFVar48->AssetPath).Data.AllocatorInstance.Data;
          iVar28 = (pFVar48->AssetPath).Data.ArrayNum;
          iVar29 = (pFVar48->AssetPath).Data.ArrayMax;
          pFVar8 = (pFVar48->OpenCommand).Data.AllocatorInstance.Data;
          iVar31 = (pFVar48->OpenCommand).Data.ArrayNum;
          iVar32 = (pFVar48->OpenCommand).Data.ArrayMax;
          EVar35 = pFVar48->TestFlags;
          uVar36 = pFVar48->NumParticipantsRequired;
          (pFVar48->DisplayName).Data.AllocatorInstance.Data =
               (pFVar43->DisplayName).Data.AllocatorInstance.Data;
          (pFVar48->DisplayName).Data.ArrayNum = iVar47;
          (pFVar48->DisplayName).Data.ArrayMax = iVar41;
          iVar47 = (pFVar43->FullTestPath).Data.ArrayNum;
          iVar41 = (pFVar43->FullTestPath).Data.ArrayMax;
          (pFVar48->FullTestPath).Data.AllocatorInstance.Data =
               (pFVar43->FullTestPath).Data.AllocatorInstance.Data;
          (pFVar48->FullTestPath).Data.ArrayNum = iVar47;
          (pFVar48->FullTestPath).Data.ArrayMax = iVar41;
          iVar47 = (pFVar43->TestName).Data.ArrayNum;
          iVar41 = (pFVar43->TestName).Data.ArrayMax;
          (pFVar48->TestName).Data.AllocatorInstance.Data =
               (pFVar43->TestName).Data.AllocatorInstance.Data;
          (pFVar48->TestName).Data.ArrayNum = iVar47;
          (pFVar48->TestName).Data.ArrayMax = iVar41;
          iVar47 = (pFVar43->TestTags).Data.ArrayNum;
          iVar41 = (pFVar43->TestTags).Data.ArrayMax;
          (pFVar48->TestTags).Data.AllocatorInstance.Data =
               (pFVar43->TestTags).Data.AllocatorInstance.Data;
          (pFVar48->TestTags).Data.ArrayNum = iVar47;
          (pFVar48->TestTags).Data.ArrayMax = iVar41;
          iVar47 = (pFVar43->TestParameter).Data.ArrayNum;
          iVar41 = (pFVar43->TestParameter).Data.ArrayMax;
          (pFVar48->TestParameter).Data.AllocatorInstance.Data =
               (pFVar43->TestParameter).Data.AllocatorInstance.Data;
          (pFVar48->TestParameter).Data.ArrayNum = iVar47;
          (pFVar48->TestParameter).Data.ArrayMax = iVar41;
          iVar47 = (pFVar43->SourceFile).Data.ArrayNum;
          iVar41 = (pFVar43->SourceFile).Data.ArrayMax;
          (pFVar48->SourceFile).Data.AllocatorInstance.Data =
               (pFVar43->SourceFile).Data.AllocatorInstance.Data;
          (pFVar48->SourceFile).Data.ArrayNum = iVar47;
          (pFVar48->SourceFile).Data.ArrayMax = iVar41;
          uVar14 = *(undefined4 *)&pFVar43->field_0x64;
          pFVar9 = (pFVar43->AssetPath).Data.AllocatorInstance.Data;
          pFVar48->SourceFileLine = pFVar43->SourceFileLine;
          *(undefined4 *)&pFVar48->field_0x64 = uVar14;
          (pFVar48->AssetPath).Data.AllocatorInstance.Data = pFVar9;
          iVar47 = (pFVar43->AssetPath).Data.ArrayMax;
          pFVar9 = (pFVar43->OpenCommand).Data.AllocatorInstance.Data;
          (pFVar48->AssetPath).Data.ArrayNum = (pFVar43->AssetPath).Data.ArrayNum;
          (pFVar48->AssetPath).Data.ArrayMax = iVar47;
          (pFVar48->OpenCommand).Data.AllocatorInstance.Data = pFVar9;
          iVar47 = (pFVar43->OpenCommand).Data.ArrayMax;
          EVar15 = pFVar43->TestFlags;
          uVar16 = pFVar43->NumParticipantsRequired;
          (pFVar48->OpenCommand).Data.ArrayNum = (pFVar43->OpenCommand).Data.ArrayNum;
          (pFVar48->OpenCommand).Data.ArrayMax = iVar47;
          pFVar48->TestFlags = EVar15;
          pFVar48->NumParticipantsRequired = uVar16;
          uVar14 = *(undefined4 *)&pFVar43->field_0x94;
          pFVar48->NumDevicesCurrentlyRunningTest = pFVar43->NumDevicesCurrentlyRunningTest;
          *(undefined4 *)&pFVar48->field_0x94 = uVar14;
          (pFVar43->DisplayName).Data.AllocatorInstance.Data = pFVar1;
          (pFVar43->DisplayName).Data.ArrayNum = iVar12;
          (pFVar43->DisplayName).Data.ArrayMax = iVar13;
          (pFVar43->FullTestPath).Data.AllocatorInstance.Data = pFVar2;
          (pFVar43->FullTestPath).Data.ArrayNum = iVar17;
          (pFVar43->FullTestPath).Data.ArrayMax = iVar18;
          (pFVar43->TestName).Data.AllocatorInstance.Data = pFVar3;
          (pFVar43->TestName).Data.ArrayNum = iVar19;
          (pFVar43->TestName).Data.ArrayMax = iVar20;
          (pFVar43->TestTags).Data.AllocatorInstance.Data = pFVar4;
          (pFVar43->TestTags).Data.ArrayNum = iVar21;
          (pFVar43->TestTags).Data.ArrayMax = iVar22;
          (pFVar43->TestParameter).Data.AllocatorInstance.Data = pFVar5;
          (pFVar43->TestParameter).Data.ArrayNum = iVar23;
          (pFVar43->TestParameter).Data.ArrayMax = iVar24;
          (pFVar43->SourceFile).Data.AllocatorInstance.Data = pFVar6;
          (pFVar43->SourceFile).Data.ArrayNum = iVar25;
          (pFVar43->SourceFile).Data.ArrayMax = iVar26;
          pFVar43->SourceFileLine = iVar27;
          *(undefined4 *)&pFVar43->field_0x64 = uVar30;
          (pFVar43->AssetPath).Data.AllocatorInstance.Data = pFVar7;
          (pFVar43->AssetPath).Data.ArrayNum = iVar28;
          (pFVar43->AssetPath).Data.ArrayMax = iVar29;
          (pFVar43->OpenCommand).Data.AllocatorInstance.Data = pFVar8;
          (pFVar43->OpenCommand).Data.ArrayNum = iVar31;
          (pFVar43->OpenCommand).Data.ArrayMax = iVar32;
          pFVar43->TestFlags = EVar35;
          pFVar43->NumParticipantsRequired = uVar36;
          pFVar43->NumDevicesCurrentlyRunningTest = uVar37;
          *(undefined4 *)&pFVar43->field_0x94 = uVar38;
        }
        goto LAB_148c5167f;
      }
LAB_148c51666:
      HeapSortInternal<FAutomationTestInfo,int,FIdentityFunctor,TDereferenceWrapper<FAutomationTestInfo,_FAutomationControllerManager::SetTestNames_::__l5::FCompareAutomationTestInfo>_>
                (pFVar50,iVar41,param_3,param_4);
LAB_148c5167f:
      ppFVar46 = ppFVar46 + -3;
    } while (&local_3a8 <= ppFVar46);
  }
  return;
code_r0x000148c5137c:
  if (pFVar48[1].DisplayName.Data.ArrayNum == 0) {
    pwVar42 = L"";
  }
  else {
    pwVar42 = (wchar_t *)(pFVar50->DisplayName).Data.AllocatorInstance.Data;
  }
  if ((pFVar49->DisplayName).Data.ArrayNum == 0) {
    pwVar39 = L"";
  }
  else {
    pwVar39 = (wchar_t *)(pFVar49->DisplayName).Data.AllocatorInstance.Data;
  }
  iVar41 = FGenericPlatformStricmp::Stricmp(pwVar39,pwVar42);
  if (-1 < iVar41) goto LAB_148c51370;
LAB_148c513b0:
  do {
    pFVar45 = pFVar44;
    pFVar44 = pFVar45 + -1;
    if (pFVar44 <= pFVar49) break;
    if ((pFVar49->DisplayName).Data.ArrayNum == 0) {
      pwVar42 = L"";
    }
    else {
      pwVar42 = (wchar_t *)(pFVar49->DisplayName).Data.AllocatorInstance.Data;
    }
    if (pFVar45[-1].DisplayName.Data.ArrayNum == 0) {
      pwVar39 = L"";
    }
    else {
      pwVar39 = (wchar_t *)(pFVar44->DisplayName).Data.AllocatorInstance.Data;
    }
    iVar41 = FGenericPlatformStricmp::Stricmp(pwVar39,pwVar42);
  } while (-1 < iVar41);
  pFVar1 = (pFVar44->DisplayName).Data.AllocatorInstance.Data;
  uVar10 = pFVar45[-1].DisplayName.Data.ArrayNum;
  uVar11 = pFVar45[-1].DisplayName.Data.ArrayMax;
  if (pFVar50 <= pFVar44) {
    pFVar2 = (pFVar50->DisplayName).Data.AllocatorInstance.Data;
    iVar13 = pFVar48[1].DisplayName.Data.ArrayNum;
    iVar17 = pFVar48[1].DisplayName.Data.ArrayMax;
    pFVar3 = pFVar48[1].FullTestPath.Data.AllocatorInstance.Data;
    iVar18 = pFVar48[1].FullTestPath.Data.ArrayNum;
    iVar19 = pFVar48[1].FullTestPath.Data.ArrayMax;
    pFVar4 = pFVar48[1].TestName.Data.AllocatorInstance.Data;
    iVar20 = pFVar48[1].TestName.Data.ArrayNum;
    iVar21 = pFVar48[1].TestName.Data.ArrayMax;
    pFVar5 = pFVar48[1].TestTags.Data.AllocatorInstance.Data;
    iVar22 = pFVar48[1].TestTags.Data.ArrayNum;
    iVar23 = pFVar48[1].TestTags.Data.ArrayMax;
    pFVar6 = pFVar48[1].TestParameter.Data.AllocatorInstance.Data;
    iVar24 = pFVar48[1].TestParameter.Data.ArrayNum;
    iVar25 = pFVar48[1].TestParameter.Data.ArrayMax;
    pFVar7 = pFVar48[1].SourceFile.Data.AllocatorInstance.Data;
    iVar26 = pFVar48[1].SourceFile.Data.ArrayNum;
    iVar27 = pFVar48[1].SourceFile.Data.ArrayMax;
    iVar28 = pFVar48[1].SourceFileLine;
    uVar30 = *(undefined4 *)&pFVar48[1].field_0x64;
    pFVar8 = pFVar48[1].AssetPath.Data.AllocatorInstance.Data;
    iVar29 = pFVar48[1].AssetPath.Data.ArrayNum;
    iVar31 = pFVar48[1].AssetPath.Data.ArrayMax;
    pFVar9 = pFVar48[1].OpenCommand.Data.AllocatorInstance.Data;
    iVar32 = pFVar48[1].OpenCommand.Data.ArrayNum;
    iVar33 = pFVar48[1].OpenCommand.Data.ArrayMax;
    EVar35 = pFVar48[1].TestFlags;
    uVar36 = pFVar48[1].NumParticipantsRequired;
    uVar37 = pFVar48[1].NumDevicesCurrentlyRunningTest;
    uVar38 = *(undefined4 *)&pFVar48[1].field_0x94;
    (pFVar50->DisplayName).Data.AllocatorInstance.Data = pFVar1;
    pFVar48[1].DisplayName.Data.ArrayNum = uVar10;
    pFVar48[1].DisplayName.Data.ArrayMax = uVar11;
    iVar41 = pFVar45[-1].FullTestPath.Data.ArrayNum;
    iVar12 = pFVar45[-1].FullTestPath.Data.ArrayMax;
    pFVar48[1].FullTestPath.Data.AllocatorInstance.Data =
         pFVar45[-1].FullTestPath.Data.AllocatorInstance.Data;
    pFVar48[1].FullTestPath.Data.ArrayNum = iVar41;
    pFVar48[1].FullTestPath.Data.ArrayMax = iVar12;
    iVar41 = pFVar45[-1].TestName.Data.ArrayNum;
    iVar12 = pFVar45[-1].TestName.Data.ArrayMax;
    pFVar48[1].TestName.Data.AllocatorInstance.Data =
         pFVar45[-1].TestName.Data.AllocatorInstance.Data;
    pFVar48[1].TestName.Data.ArrayNum = iVar41;
    pFVar48[1].TestName.Data.ArrayMax = iVar12;
    iVar41 = pFVar45[-1].TestTags.Data.ArrayNum;
    iVar12 = pFVar45[-1].TestTags.Data.ArrayMax;
    pFVar48[1].TestTags.Data.AllocatorInstance.Data =
         pFVar45[-1].TestTags.Data.AllocatorInstance.Data;
    pFVar48[1].TestTags.Data.ArrayNum = iVar41;
    pFVar48[1].TestTags.Data.ArrayMax = iVar12;
    iVar41 = pFVar45[-1].TestParameter.Data.ArrayNum;
    iVar12 = pFVar45[-1].TestParameter.Data.ArrayMax;
    pFVar48[1].TestParameter.Data.AllocatorInstance.Data =
         pFVar45[-1].TestParameter.Data.AllocatorInstance.Data;
    pFVar48[1].TestParameter.Data.ArrayNum = iVar41;
    pFVar48[1].TestParameter.Data.ArrayMax = iVar12;
    iVar41 = pFVar45[-1].SourceFile.Data.ArrayNum;
    iVar12 = pFVar45[-1].SourceFile.Data.ArrayMax;
    pFVar48[1].SourceFile.Data.AllocatorInstance.Data =
         pFVar45[-1].SourceFile.Data.AllocatorInstance.Data;
    pFVar48[1].SourceFile.Data.ArrayNum = iVar41;
    pFVar48[1].SourceFile.Data.ArrayMax = iVar12;
    uVar14 = *(undefined4 *)&pFVar45[-1].field_0x64;
    pFVar1 = pFVar45[-1].AssetPath.Data.AllocatorInstance.Data;
    pFVar48[1].SourceFileLine = pFVar45[-1].SourceFileLine;
    *(undefined4 *)&pFVar48[1].field_0x64 = uVar14;
    pFVar48[1].AssetPath.Data.AllocatorInstance.Data = pFVar1;
    iVar41 = pFVar45[-1].AssetPath.Data.ArrayMax;
    pFVar1 = pFVar45[-1].OpenCommand.Data.AllocatorInstance.Data;
    pFVar48[1].AssetPath.Data.ArrayNum = pFVar45[-1].AssetPath.Data.ArrayNum;
    pFVar48[1].AssetPath.Data.ArrayMax = iVar41;
    pFVar48[1].OpenCommand.Data.AllocatorInstance.Data = pFVar1;
    iVar41 = pFVar45[-1].OpenCommand.Data.ArrayMax;
    EVar15 = pFVar45[-1].TestFlags;
    uVar16 = pFVar45[-1].NumParticipantsRequired;
    pFVar48[1].OpenCommand.Data.ArrayNum = pFVar45[-1].OpenCommand.Data.ArrayNum;
    pFVar48[1].OpenCommand.Data.ArrayMax = iVar41;
    pFVar48[1].TestFlags = EVar15;
    pFVar48[1].NumParticipantsRequired = uVar16;
    uVar14 = *(undefined4 *)&pFVar45[-1].field_0x94;
    pFVar48[1].NumDevicesCurrentlyRunningTest = pFVar45[-1].NumDevicesCurrentlyRunningTest;
    *(undefined4 *)&pFVar48[1].field_0x94 = uVar14;
    (pFVar44->DisplayName).Data.AllocatorInstance.Data = pFVar2;
    pFVar45[-1].DisplayName.Data.ArrayNum = iVar13;
    pFVar45[-1].DisplayName.Data.ArrayMax = iVar17;
    pFVar45[-1].FullTestPath.Data.AllocatorInstance.Data = pFVar3;
    pFVar45[-1].FullTestPath.Data.ArrayNum = iVar18;
    pFVar45[-1].FullTestPath.Data.ArrayMax = iVar19;
    pFVar45[-1].TestName.Data.AllocatorInstance.Data = pFVar4;
    pFVar45[-1].TestName.Data.ArrayNum = iVar20;
    pFVar45[-1].TestName.Data.ArrayMax = iVar21;
    pFVar45[-1].TestTags.Data.AllocatorInstance.Data = pFVar5;
    pFVar45[-1].TestTags.Data.ArrayNum = iVar22;
    pFVar45[-1].TestTags.Data.ArrayMax = iVar23;
    pFVar45[-1].TestParameter.Data.AllocatorInstance.Data = pFVar6;
    pFVar45[-1].TestParameter.Data.ArrayNum = iVar24;
    pFVar45[-1].TestParameter.Data.ArrayMax = iVar25;
    pFVar45[-1].SourceFile.Data.AllocatorInstance.Data = pFVar7;
    pFVar45[-1].SourceFile.Data.ArrayNum = iVar26;
    pFVar45[-1].SourceFile.Data.ArrayMax = iVar27;
    pFVar45[-1].SourceFileLine = iVar28;
    *(undefined4 *)&pFVar45[-1].field_0x64 = uVar30;
    pFVar45[-1].AssetPath.Data.AllocatorInstance.Data = pFVar8;
    pFVar45[-1].AssetPath.Data.ArrayNum = iVar29;
    pFVar45[-1].AssetPath.Data.ArrayMax = iVar31;
    pFVar45[-1].OpenCommand.Data.AllocatorInstance.Data = pFVar9;
    pFVar45[-1].OpenCommand.Data.ArrayNum = iVar32;
    pFVar45[-1].OpenCommand.Data.ArrayMax = iVar33;
    pFVar45[-1].TestFlags = EVar35;
    pFVar45[-1].NumParticipantsRequired = uVar36;
    pFVar45[-1].NumDevicesCurrentlyRunningTest = uVar37;
    *(undefined4 *)&pFVar45[-1].field_0x94 = uVar38;
    goto LAB_148c51370;
  }
  pFVar2 = (pFVar49->DisplayName).Data.AllocatorInstance.Data;
  iVar13 = (pFVar49->DisplayName).Data.ArrayNum;
  iVar17 = (pFVar49->DisplayName).Data.ArrayMax;
  pFVar3 = (pFVar49->FullTestPath).Data.AllocatorInstance.Data;
  iVar18 = (pFVar49->FullTestPath).Data.ArrayNum;
  iVar19 = (pFVar49->FullTestPath).Data.ArrayMax;
  pFVar4 = (pFVar49->TestName).Data.AllocatorInstance.Data;
  iVar20 = (pFVar49->TestName).Data.ArrayNum;
  iVar21 = (pFVar49->TestName).Data.ArrayMax;
  lVar40 = (longlong)pFVar44 + (-0x98 - (longlong)pFVar49);
  iVar47 = iVar47 + -1;
  pFVar5 = (pFVar49->TestTags).Data.AllocatorInstance.Data;
  iVar22 = (pFVar49->TestTags).Data.ArrayNum;
  iVar23 = (pFVar49->TestTags).Data.ArrayMax;
  pFVar6 = (pFVar49->TestParameter).Data.AllocatorInstance.Data;
  iVar24 = (pFVar49->TestParameter).Data.ArrayNum;
  iVar25 = (pFVar49->TestParameter).Data.ArrayMax;
  pFVar7 = (pFVar49->SourceFile).Data.AllocatorInstance.Data;
  iVar26 = (pFVar49->SourceFile).Data.ArrayNum;
  iVar27 = (pFVar49->SourceFile).Data.ArrayMax;
  iVar28 = pFVar49->SourceFileLine;
  uVar30 = *(undefined4 *)&pFVar49->field_0x64;
  pFVar8 = (pFVar49->AssetPath).Data.AllocatorInstance.Data;
  iVar29 = (pFVar49->AssetPath).Data.ArrayNum;
  iVar31 = (pFVar49->AssetPath).Data.ArrayMax;
  pFVar9 = (pFVar49->OpenCommand).Data.AllocatorInstance.Data;
  iVar32 = (pFVar49->OpenCommand).Data.ArrayNum;
  iVar33 = (pFVar49->OpenCommand).Data.ArrayMax;
  EVar35 = pFVar49->TestFlags;
  uVar36 = pFVar49->NumParticipantsRequired;
  uVar37 = pFVar49->NumDevicesCurrentlyRunningTest;
  uVar38 = *(undefined4 *)&pFVar49->field_0x94;
  (pFVar49->DisplayName).Data.AllocatorInstance.Data = pFVar1;
  (pFVar49->DisplayName).Data.ArrayNum = uVar10;
  (pFVar49->DisplayName).Data.ArrayMax = uVar11;
  iVar41 = pFVar45[-1].FullTestPath.Data.ArrayNum;
  iVar12 = pFVar45[-1].FullTestPath.Data.ArrayMax;
  lVar40 = lVar40 / 0x26 + (lVar40 >> 0x3f);
  (pFVar49->FullTestPath).Data.AllocatorInstance.Data =
       pFVar45[-1].FullTestPath.Data.AllocatorInstance.Data;
  (pFVar49->FullTestPath).Data.ArrayNum = iVar41;
  (pFVar49->FullTestPath).Data.ArrayMax = iVar12;
  iVar41 = pFVar45[-1].TestName.Data.ArrayNum;
  iVar12 = pFVar45[-1].TestName.Data.ArrayMax;
  (pFVar49->TestName).Data.AllocatorInstance.Data = pFVar45[-1].TestName.Data.AllocatorInstance.Data
  ;
  (pFVar49->TestName).Data.ArrayNum = iVar41;
  (pFVar49->TestName).Data.ArrayMax = iVar12;
  iVar41 = pFVar45[-1].TestTags.Data.ArrayNum;
  iVar12 = pFVar45[-1].TestTags.Data.ArrayMax;
  (pFVar49->TestTags).Data.AllocatorInstance.Data = pFVar45[-1].TestTags.Data.AllocatorInstance.Data
  ;
  (pFVar49->TestTags).Data.ArrayNum = iVar41;
  (pFVar49->TestTags).Data.ArrayMax = iVar12;
  iVar41 = pFVar45[-1].TestParameter.Data.ArrayNum;
  iVar12 = pFVar45[-1].TestParameter.Data.ArrayMax;
  (pFVar49->TestParameter).Data.AllocatorInstance.Data =
       pFVar45[-1].TestParameter.Data.AllocatorInstance.Data;
  (pFVar49->TestParameter).Data.ArrayNum = iVar41;
  (pFVar49->TestParameter).Data.ArrayMax = iVar12;
  iVar41 = pFVar45[-1].SourceFile.Data.ArrayNum;
  iVar12 = pFVar45[-1].SourceFile.Data.ArrayMax;
  (pFVar49->SourceFile).Data.AllocatorInstance.Data =
       pFVar45[-1].SourceFile.Data.AllocatorInstance.Data;
  (pFVar49->SourceFile).Data.ArrayNum = iVar41;
  (pFVar49->SourceFile).Data.ArrayMax = iVar12;
  uVar14 = *(undefined4 *)&pFVar45[-1].field_0x64;
  pFVar1 = pFVar45[-1].AssetPath.Data.AllocatorInstance.Data;
  pFVar49->SourceFileLine = pFVar45[-1].SourceFileLine;
  *(undefined4 *)&pFVar49->field_0x64 = uVar14;
  (pFVar49->AssetPath).Data.AllocatorInstance.Data = pFVar1;
  iVar41 = pFVar45[-1].AssetPath.Data.ArrayMax;
  pFVar1 = pFVar45[-1].OpenCommand.Data.AllocatorInstance.Data;
  (pFVar49->AssetPath).Data.ArrayNum = pFVar45[-1].AssetPath.Data.ArrayNum;
  (pFVar49->AssetPath).Data.ArrayMax = iVar41;
  (pFVar49->OpenCommand).Data.AllocatorInstance.Data = pFVar1;
  iVar41 = pFVar45[-1].OpenCommand.Data.ArrayMax;
  EVar15 = pFVar45[-1].TestFlags;
  uVar16 = pFVar45[-1].NumParticipantsRequired;
  (pFVar49->OpenCommand).Data.ArrayNum = pFVar45[-1].OpenCommand.Data.ArrayNum;
  (pFVar49->OpenCommand).Data.ArrayMax = iVar41;
  pFVar49->TestFlags = EVar15;
  pFVar49->NumParticipantsRequired = uVar16;
  uVar14 = *(undefined4 *)&pFVar45[-1].field_0x94;
  pFVar49->NumDevicesCurrentlyRunningTest = pFVar45[-1].NumDevicesCurrentlyRunningTest;
  *(undefined4 *)&pFVar49->field_0x94 = uVar14;
  (pFVar44->DisplayName).Data.AllocatorInstance.Data = pFVar2;
  pFVar45[-1].DisplayName.Data.ArrayNum = iVar13;
  pFVar45[-1].DisplayName.Data.ArrayMax = iVar17;
  pFVar45[-1].FullTestPath.Data.AllocatorInstance.Data = pFVar3;
  pFVar45[-1].FullTestPath.Data.ArrayNum = iVar18;
  pFVar45[-1].FullTestPath.Data.ArrayMax = iVar19;
  pFVar45[-1].TestName.Data.AllocatorInstance.Data = pFVar4;
  pFVar45[-1].TestName.Data.ArrayNum = iVar20;
  pFVar45[-1].TestName.Data.ArrayMax = iVar21;
  pFVar45[-1].TestTags.Data.AllocatorInstance.Data = pFVar5;
  pFVar45[-1].TestTags.Data.ArrayNum = iVar22;
  pFVar45[-1].TestTags.Data.ArrayMax = iVar23;
  pFVar45[-1].TestParameter.Data.AllocatorInstance.Data = pFVar6;
  pFVar45[-1].TestParameter.Data.ArrayNum = iVar24;
  pFVar45[-1].TestParameter.Data.ArrayMax = iVar25;
  pFVar45[-1].SourceFile.Data.AllocatorInstance.Data = pFVar7;
  pFVar45[-1].SourceFile.Data.ArrayNum = iVar26;
  pFVar45[-1].SourceFile.Data.ArrayMax = iVar27;
  pFVar45[-1].SourceFileLine = iVar28;
  *(undefined4 *)&pFVar45[-1].field_0x64 = uVar30;
  pFVar45[-1].AssetPath.Data.AllocatorInstance.Data = pFVar8;
  pFVar45[-1].AssetPath.Data.ArrayNum = iVar29;
  pFVar45[-1].AssetPath.Data.ArrayMax = iVar31;
  pFVar45[-1].OpenCommand.Data.AllocatorInstance.Data = pFVar9;
  pFVar45[-1].OpenCommand.Data.ArrayNum = iVar32;
  pFVar45[-1].OpenCommand.Data.ArrayMax = iVar33;
  pFVar45[-1].TestFlags = EVar35;
  pFVar45[-1].NumParticipantsRequired = uVar36;
  pFVar45[-1].NumDevicesCurrentlyRunningTest = uVar37;
  *(undefined4 *)&pFVar45[-1].field_0x94 = uVar38;
  if ((lVar40 >> 2) - (lVar40 >> 0x3f) < ((longlong)pFVar43 - (longlong)pFVar50) / 0x98) {
    if (pFVar50 < pFVar43) {
      *ppFVar46 = pFVar50;
      ppFVar46[1] = pFVar43;
      *(int *)(ppFVar46 + 2) = iVar47;
      ppFVar46 = ppFVar46 + 3;
    }
    if (pFVar44 <= pFVar49 + 1) goto LAB_148c5167f;
    pFVar43 = pFVar45 + -2;
    pFVar50 = pFVar49;
  }
  else {
    if (pFVar49 + 1 < pFVar44) {
      *ppFVar46 = pFVar49;
      ppFVar46[1] = pFVar45 + -2;
      *(int *)(ppFVar46 + 2) = iVar47;
      ppFVar46 = ppFVar46 + 3;
    }
    if (pFVar43 <= pFVar50) goto LAB_148c5167f;
  }
  iVar41 = (int)(((longlong)pFVar43 - (longlong)pFVar50) / 0x98) + 1;
  pFVar49 = pFVar50;
  if (iVar47 == 0) goto LAB_148c51666;
  goto LAB_148c51270;
}

// Merge<FAutomatedTestResult,FIdentityFunctor,TDereferenceWrapper<FAutomatedTestResult,`FAutomationControllerManager::ProcessResults'::__l31::<lambda_1>_>_> @ 148c51eb0

void __cdecl
AlgoImpl::
Merge<FAutomatedTestResult,FIdentityFunctor,TDereferenceWrapper<FAutomatedTestResult,_FAutomationControllerManager::ProcessResults_::__l31::<lambda_1>_>_>
          (FAutomatedTestResult *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<FAutomatedTestResult,_protected:_void___cdecl_FAutomationControllerManager::ProcessResults(void)_::_31_::<lambda_1>_>
          param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  IAutomationReport *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  long64 lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined7 uVar13;
  float fVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  EAutomationState EVar23;
  undefined7 uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  undefined4 uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  FAutomatedTestResult *pFVar40;
  FAutomatedTestResult *pFVar42;
  uint uVar43;
  FAutomatedTestResult *pFVar44;
  FAutomatedTestResult *pFVar45;
  FAutomatedTestResult *pFVar46;
  int local_a8;
  FAutomatedTestResult *pFVar41;
  
  if (0 < param_2) {
    local_a8 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar38 = 0;
      if (0 < param_2 - local_a8) {
        uVar39 = param_2 - local_a8;
        iVar38 = 0;
        do {
          uVar43 = uVar39 >> 1;
          bVar35 = `FAutomationControllerManager::ProcessResults'::__l31::<lambda_1>::operator()
                             (param_5.Predicate,param_1 + param_2,
                              param_1 + (longlong)(int)(uVar43 + iVar38) + (longlong)local_a8);
          if (!bVar35) {
            iVar38 = uVar43 + iVar38 + (uVar39 & 1);
          }
          uVar39 = uVar43;
        } while (uVar43 != 0);
      }
      local_a8 = local_a8 + iVar38;
      if (param_2 <= local_a8) {
        return;
      }
      iVar38 = 0;
      uVar39 = param_3 - param_2;
      pFVar44 = param_1 + local_a8;
      if (0 < (int)uVar39) {
        do {
          uVar43 = uVar39 >> 1;
          bVar35 = `FAutomationControllerManager::ProcessResults'::__l31::<lambda_1>::operator()
                             (param_5.Predicate,
                              param_1 + (longlong)(int)(uVar43 + iVar38) + (longlong)param_2,pFVar44
                             );
          if (bVar35) {
            iVar38 = uVar43 + iVar38 + (uVar39 & 1);
          }
          uVar39 = uVar43;
        } while (uVar43 != 0);
      }
      iVar37 = (iVar38 - local_a8) + param_2;
      iVar36 = param_2 - local_a8;
      if ((iVar36 != 0) && (iVar36 < iVar37)) {
        pFVar40 = pFVar44 + iVar36;
        pFVar45 = pFVar44;
        pFVar41 = pFVar44 + iVar36;
        do {
          while( true ) {
            pFVar42 = pFVar40 + 1;
            pFVar46 = pFVar45 + 1;
            pTVar1 = (pFVar40->Test).SharedReferenceCount.ReferenceController;
            pIVar2 = (pFVar45->Test).Object;
            pTVar3 = (pFVar45->Test).SharedReferenceCount.ReferenceController;
            pFVar4 = (pFVar45->TestDisplayName).Data.AllocatorInstance.Data;
            iVar17 = (pFVar45->TestDisplayName).Data.ArrayNum;
            iVar18 = (pFVar45->TestDisplayName).Data.ArrayMax;
            pFVar5 = (pFVar45->FullTestPath).Data.AllocatorInstance.Data;
            iVar19 = (pFVar45->FullTestPath).Data.ArrayNum;
            iVar20 = (pFVar45->FullTestPath).Data.ArrayMax;
            pFVar6 = (pFVar45->Tags).AllocatorInstance.Data;
            iVar21 = (pFVar45->Tags).ArrayNum;
            iVar22 = (pFVar45->Tags).ArrayMax;
            EVar23 = pFVar45->State;
            uVar24 = *(undefined7 *)&pFVar45->field_0x41;
            pFVar7 = (pFVar45->DeviceInstance).AllocatorInstance.Data;
            iVar25 = (pFVar45->DeviceInstance).ArrayNum;
            iVar26 = (pFVar45->DeviceInstance).ArrayMax;
            fVar27 = pFVar45->Duration;
            uVar28 = *(undefined4 *)&pFVar45->field_0x5c;
            lVar8 = (pFVar45->DateTime).Ticks;
            pFVar9 = (pFVar45->Entries).AllocatorInstance.Data;
            iVar29 = (pFVar45->Entries).ArrayNum;
            iVar30 = (pFVar45->Entries).ArrayMax;
            iVar31 = pFVar45->Warnings;
            iVar32 = pFVar45->Errors;
            pFVar10 = (pFVar45->Artifacts).AllocatorInstance.Data;
            iVar33 = (pFVar45->Artifacts).ArrayNum;
            iVar34 = (pFVar45->Artifacts).ArrayMax;
            (pFVar45->Test).Object = (pFVar40->Test).Object;
            (pFVar45->Test).SharedReferenceCount.ReferenceController = pTVar1;
            iVar36 = (pFVar40->TestDisplayName).Data.ArrayNum;
            iVar12 = (pFVar40->TestDisplayName).Data.ArrayMax;
            (pFVar45->TestDisplayName).Data.AllocatorInstance.Data =
                 (pFVar40->TestDisplayName).Data.AllocatorInstance.Data;
            (pFVar45->TestDisplayName).Data.ArrayNum = iVar36;
            (pFVar45->TestDisplayName).Data.ArrayMax = iVar12;
            iVar36 = (pFVar40->FullTestPath).Data.ArrayNum;
            iVar12 = (pFVar40->FullTestPath).Data.ArrayMax;
            (pFVar45->FullTestPath).Data.AllocatorInstance.Data =
                 (pFVar40->FullTestPath).Data.AllocatorInstance.Data;
            (pFVar45->FullTestPath).Data.ArrayNum = iVar36;
            (pFVar45->FullTestPath).Data.ArrayMax = iVar12;
            iVar36 = (pFVar40->Tags).ArrayNum;
            iVar12 = (pFVar40->Tags).ArrayMax;
            (pFVar45->Tags).AllocatorInstance.Data = (pFVar40->Tags).AllocatorInstance.Data;
            (pFVar45->Tags).ArrayNum = iVar36;
            (pFVar45->Tags).ArrayMax = iVar12;
            uVar13 = *(undefined7 *)&pFVar40->field_0x41;
            pFVar11 = (pFVar40->DeviceInstance).AllocatorInstance.Data;
            pFVar45->State = pFVar40->State;
            *(undefined7 *)&pFVar45->field_0x41 = uVar13;
            (pFVar45->DeviceInstance).AllocatorInstance.Data = pFVar11;
            iVar36 = (pFVar40->DeviceInstance).ArrayMax;
            fVar14 = pFVar40->Duration;
            uVar15 = *(undefined4 *)&pFVar40->field_0x5c;
            (pFVar45->DeviceInstance).ArrayNum = (pFVar40->DeviceInstance).ArrayNum;
            (pFVar45->DeviceInstance).ArrayMax = iVar36;
            pFVar45->Duration = fVar14;
            *(undefined4 *)&pFVar45->field_0x5c = uVar15;
            pFVar11 = (pFVar40->Entries).AllocatorInstance.Data;
            (pFVar45->DateTime).Ticks = (pFVar40->DateTime).Ticks;
            (pFVar45->Entries).AllocatorInstance.Data = pFVar11;
            iVar36 = (pFVar40->Entries).ArrayMax;
            iVar12 = pFVar40->Warnings;
            iVar16 = pFVar40->Errors;
            (pFVar45->Entries).ArrayNum = (pFVar40->Entries).ArrayNum;
            (pFVar45->Entries).ArrayMax = iVar36;
            pFVar45->Warnings = iVar12;
            pFVar45->Errors = iVar16;
            iVar36 = (pFVar40->Artifacts).ArrayNum;
            iVar12 = (pFVar40->Artifacts).ArrayMax;
            (pFVar45->Artifacts).AllocatorInstance.Data =
                 (pFVar40->Artifacts).AllocatorInstance.Data;
            (pFVar45->Artifacts).ArrayNum = iVar36;
            (pFVar45->Artifacts).ArrayMax = iVar12;
            (pFVar40->Test).Object = pIVar2;
            (pFVar40->Test).SharedReferenceCount.ReferenceController = pTVar3;
            (pFVar40->TestDisplayName).Data.AllocatorInstance.Data = pFVar4;
            (pFVar40->TestDisplayName).Data.ArrayNum = iVar17;
            (pFVar40->TestDisplayName).Data.ArrayMax = iVar18;
            (pFVar40->FullTestPath).Data.AllocatorInstance.Data = pFVar5;
            (pFVar40->FullTestPath).Data.ArrayNum = iVar19;
            (pFVar40->FullTestPath).Data.ArrayMax = iVar20;
            (pFVar40->Tags).AllocatorInstance.Data = pFVar6;
            (pFVar40->Tags).ArrayNum = iVar21;
            (pFVar40->Tags).ArrayMax = iVar22;
            pFVar40->State = EVar23;
            *(undefined7 *)&pFVar40->field_0x41 = uVar24;
            (pFVar40->DeviceInstance).AllocatorInstance.Data = pFVar7;
            (pFVar40->DeviceInstance).ArrayNum = iVar25;
            (pFVar40->DeviceInstance).ArrayMax = iVar26;
            pFVar40->Duration = fVar27;
            *(undefined4 *)&pFVar40->field_0x5c = uVar28;
            (pFVar40->DateTime).Ticks = lVar8;
            (pFVar40->Entries).AllocatorInstance.Data = pFVar9;
            (pFVar40->Entries).ArrayNum = iVar29;
            (pFVar40->Entries).ArrayMax = iVar30;
            pFVar40->Warnings = iVar31;
            pFVar40->Errors = iVar32;
            (pFVar40->Artifacts).AllocatorInstance.Data = pFVar10;
            (pFVar40->Artifacts).ArrayNum = iVar33;
            (pFVar40->Artifacts).ArrayMax = iVar34;
            pFVar45 = pFVar46;
            if (pFVar42 == pFVar44 + iVar37) break;
            pFVar40 = pFVar42;
            if (pFVar46 == pFVar41) {
              pFVar41 = pFVar42;
            }
          }
          pFVar40 = pFVar41;
        } while (pFVar46 != pFVar41);
      }
      local_a8 = local_a8 + 1 + iVar38;
      param_2 = param_2 + iVar38;
    } while (local_a8 < param_2);
  }
  return;
}

// RotateInternal<FAutomatedTestResult> @ 148c521d0

int __cdecl
AlgoImpl::RotateInternal<FAutomatedTestResult>
          (FAutomatedTestResult *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  IAutomationReport *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  long64 lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  undefined7 uVar14;
  float fVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  EAutomationState EVar24;
  undefined7 uVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  undefined4 uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  FAutomatedTestResult *pFVar36;
  FAutomatedTestResult *pFVar38;
  FAutomatedTestResult *pFVar39;
  FAutomatedTestResult *pFVar40;
  FAutomatedTestResult *pFVar37;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar36 = param_1 + param_3;
    pFVar39 = param_1;
    pFVar37 = param_1 + param_3;
    do {
      while( true ) {
        pFVar38 = pFVar36 + 1;
        pFVar40 = pFVar39 + 1;
        pTVar1 = (pFVar36->Test).SharedReferenceCount.ReferenceController;
        pIVar2 = (pFVar39->Test).Object;
        pTVar3 = (pFVar39->Test).SharedReferenceCount.ReferenceController;
        pFVar4 = (pFVar39->TestDisplayName).Data.AllocatorInstance.Data;
        iVar18 = (pFVar39->TestDisplayName).Data.ArrayNum;
        iVar19 = (pFVar39->TestDisplayName).Data.ArrayMax;
        pFVar5 = (pFVar39->FullTestPath).Data.AllocatorInstance.Data;
        iVar20 = (pFVar39->FullTestPath).Data.ArrayNum;
        iVar21 = (pFVar39->FullTestPath).Data.ArrayMax;
        pFVar6 = (pFVar39->Tags).AllocatorInstance.Data;
        iVar22 = (pFVar39->Tags).ArrayNum;
        iVar23 = (pFVar39->Tags).ArrayMax;
        EVar24 = pFVar39->State;
        uVar25 = *(undefined7 *)&pFVar39->field_0x41;
        pFVar7 = (pFVar39->DeviceInstance).AllocatorInstance.Data;
        iVar26 = (pFVar39->DeviceInstance).ArrayNum;
        iVar27 = (pFVar39->DeviceInstance).ArrayMax;
        fVar28 = pFVar39->Duration;
        uVar29 = *(undefined4 *)&pFVar39->field_0x5c;
        lVar8 = (pFVar39->DateTime).Ticks;
        pFVar9 = (pFVar39->Entries).AllocatorInstance.Data;
        iVar30 = (pFVar39->Entries).ArrayNum;
        iVar31 = (pFVar39->Entries).ArrayMax;
        iVar32 = pFVar39->Warnings;
        iVar33 = pFVar39->Errors;
        pFVar10 = (pFVar39->Artifacts).AllocatorInstance.Data;
        iVar34 = (pFVar39->Artifacts).ArrayNum;
        iVar35 = (pFVar39->Artifacts).ArrayMax;
        (pFVar39->Test).Object = (pFVar36->Test).Object;
        (pFVar39->Test).SharedReferenceCount.ReferenceController = pTVar1;
        iVar12 = (pFVar36->TestDisplayName).Data.ArrayNum;
        iVar13 = (pFVar36->TestDisplayName).Data.ArrayMax;
        (pFVar39->TestDisplayName).Data.AllocatorInstance.Data =
             (pFVar36->TestDisplayName).Data.AllocatorInstance.Data;
        (pFVar39->TestDisplayName).Data.ArrayNum = iVar12;
        (pFVar39->TestDisplayName).Data.ArrayMax = iVar13;
        iVar12 = (pFVar36->FullTestPath).Data.ArrayNum;
        iVar13 = (pFVar36->FullTestPath).Data.ArrayMax;
        (pFVar39->FullTestPath).Data.AllocatorInstance.Data =
             (pFVar36->FullTestPath).Data.AllocatorInstance.Data;
        (pFVar39->FullTestPath).Data.ArrayNum = iVar12;
        (pFVar39->FullTestPath).Data.ArrayMax = iVar13;
        iVar12 = (pFVar36->Tags).ArrayNum;
        iVar13 = (pFVar36->Tags).ArrayMax;
        (pFVar39->Tags).AllocatorInstance.Data = (pFVar36->Tags).AllocatorInstance.Data;
        (pFVar39->Tags).ArrayNum = iVar12;
        (pFVar39->Tags).ArrayMax = iVar13;
        uVar14 = *(undefined7 *)&pFVar36->field_0x41;
        pFVar11 = (pFVar36->DeviceInstance).AllocatorInstance.Data;
        pFVar39->State = pFVar36->State;
        *(undefined7 *)&pFVar39->field_0x41 = uVar14;
        (pFVar39->DeviceInstance).AllocatorInstance.Data = pFVar11;
        iVar12 = (pFVar36->DeviceInstance).ArrayMax;
        fVar15 = pFVar36->Duration;
        uVar16 = *(undefined4 *)&pFVar36->field_0x5c;
        (pFVar39->DeviceInstance).ArrayNum = (pFVar36->DeviceInstance).ArrayNum;
        (pFVar39->DeviceInstance).ArrayMax = iVar12;
        pFVar39->Duration = fVar15;
        *(undefined4 *)&pFVar39->field_0x5c = uVar16;
        pFVar11 = (pFVar36->Entries).AllocatorInstance.Data;
        (pFVar39->DateTime).Ticks = (pFVar36->DateTime).Ticks;
        (pFVar39->Entries).AllocatorInstance.Data = pFVar11;
        iVar12 = (pFVar36->Entries).ArrayMax;
        iVar13 = pFVar36->Warnings;
        iVar17 = pFVar36->Errors;
        (pFVar39->Entries).ArrayNum = (pFVar36->Entries).ArrayNum;
        (pFVar39->Entries).ArrayMax = iVar12;
        pFVar39->Warnings = iVar13;
        pFVar39->Errors = iVar17;
        iVar12 = (pFVar36->Artifacts).ArrayNum;
        iVar13 = (pFVar36->Artifacts).ArrayMax;
        (pFVar39->Artifacts).AllocatorInstance.Data = (pFVar36->Artifacts).AllocatorInstance.Data;
        (pFVar39->Artifacts).ArrayNum = iVar12;
        (pFVar39->Artifacts).ArrayMax = iVar13;
        (pFVar36->Test).Object = pIVar2;
        (pFVar36->Test).SharedReferenceCount.ReferenceController = pTVar3;
        (pFVar36->TestDisplayName).Data.AllocatorInstance.Data = pFVar4;
        (pFVar36->TestDisplayName).Data.ArrayNum = iVar18;
        (pFVar36->TestDisplayName).Data.ArrayMax = iVar19;
        (pFVar36->FullTestPath).Data.AllocatorInstance.Data = pFVar5;
        (pFVar36->FullTestPath).Data.ArrayNum = iVar20;
        (pFVar36->FullTestPath).Data.ArrayMax = iVar21;
        (pFVar36->Tags).AllocatorInstance.Data = pFVar6;
        (pFVar36->Tags).ArrayNum = iVar22;
        (pFVar36->Tags).ArrayMax = iVar23;
        pFVar36->State = EVar24;
        *(undefined7 *)&pFVar36->field_0x41 = uVar25;
        (pFVar36->DeviceInstance).AllocatorInstance.Data = pFVar7;
        (pFVar36->DeviceInstance).ArrayNum = iVar26;
        (pFVar36->DeviceInstance).ArrayMax = iVar27;
        pFVar36->Duration = fVar28;
        *(undefined4 *)&pFVar36->field_0x5c = uVar29;
        (pFVar36->DateTime).Ticks = lVar8;
        (pFVar36->Entries).AllocatorInstance.Data = pFVar9;
        (pFVar36->Entries).ArrayNum = iVar30;
        (pFVar36->Entries).ArrayMax = iVar31;
        pFVar36->Warnings = iVar32;
        pFVar36->Errors = iVar33;
        (pFVar36->Artifacts).AllocatorInstance.Data = pFVar10;
        (pFVar36->Artifacts).ArrayNum = iVar34;
        (pFVar36->Artifacts).ArrayMax = iVar35;
        pFVar39 = pFVar40;
        if (pFVar38 == param_1 + param_2) break;
        pFVar36 = pFVar38;
        if (pFVar40 == pFVar37) {
          pFVar37 = pFVar38;
        }
      }
      pFVar36 = pFVar37;
    } while (pFVar40 != pFVar37);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<FAutomatedTestResult,FIdentityFunctor,TDereferenceWrapper<FAutomatedTestResult,`FAutomationControllerManager::ProcessResults'::__l31::<lambda_1>_>_> @ 148c52330

void __cdecl
AlgoImpl::
StableSortInternal<FAutomatedTestResult,FIdentityFunctor,TDereferenceWrapper<FAutomatedTestResult,_FAutomationControllerManager::ProcessResults_::__l31::<lambda_1>_>_>
          (FAutomatedTestResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FAutomatedTestResult,_protected:_void___cdecl_FAutomationControllerManager::ProcessResults(void)_::_31_::<lambda_1>_>
          param_4)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IAutomationReport *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  long64 lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined7 uVar13;
  float fVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  EAutomationState EVar21;
  undefined7 uVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  FAutomatedTestResult *pFVar37;
  int iVar38;
  FAutomatedTestResult *pFVar39;
  
  iVar34 = 0;
  if (0 < param_2) {
    pFVar39 = param_1 + 1;
    pFVar37 = param_1;
    do {
      if ((iVar34 + 1 < param_2) &&
         (bVar33 = `FAutomationControllerManager::ProcessResults'::__l31::<lambda_1>::operator()
                             (param_4.Predicate,pFVar39,pFVar37), bVar33)) {
        pTVar2 = pFVar37[1].Test.SharedReferenceCount.ReferenceController;
        pIVar3 = (pFVar37->Test).Object;
        pTVar4 = (pFVar37->Test).SharedReferenceCount.ReferenceController;
        pFVar5 = (pFVar37->TestDisplayName).Data.AllocatorInstance.Data;
        iVar38 = (pFVar37->TestDisplayName).Data.ArrayNum;
        iVar16 = (pFVar37->TestDisplayName).Data.ArrayMax;
        pFVar6 = (pFVar37->FullTestPath).Data.AllocatorInstance.Data;
        iVar17 = (pFVar37->FullTestPath).Data.ArrayNum;
        iVar18 = (pFVar37->FullTestPath).Data.ArrayMax;
        pFVar7 = (pFVar37->Tags).AllocatorInstance.Data;
        iVar19 = (pFVar37->Tags).ArrayNum;
        iVar20 = (pFVar37->Tags).ArrayMax;
        EVar21 = pFVar37->State;
        uVar22 = *(undefined7 *)&pFVar37->field_0x41;
        pFVar8 = (pFVar37->DeviceInstance).AllocatorInstance.Data;
        iVar23 = (pFVar37->DeviceInstance).ArrayNum;
        iVar24 = (pFVar37->DeviceInstance).ArrayMax;
        fVar25 = pFVar37->Duration;
        uVar26 = *(undefined4 *)&pFVar37->field_0x5c;
        lVar9 = (pFVar37->DateTime).Ticks;
        pFVar10 = (pFVar37->Entries).AllocatorInstance.Data;
        iVar27 = (pFVar37->Entries).ArrayNum;
        iVar28 = (pFVar37->Entries).ArrayMax;
        iVar29 = pFVar37->Warnings;
        iVar30 = pFVar37->Errors;
        pFVar11 = (pFVar37->Artifacts).AllocatorInstance.Data;
        iVar31 = (pFVar37->Artifacts).ArrayNum;
        iVar32 = (pFVar37->Artifacts).ArrayMax;
        (pFVar37->Test).Object = pFVar37[1].Test.Object;
        (pFVar37->Test).SharedReferenceCount.ReferenceController = pTVar2;
        iVar1 = pFVar37[1].TestDisplayName.Data.ArrayNum;
        iVar36 = pFVar37[1].TestDisplayName.Data.ArrayMax;
        (pFVar37->TestDisplayName).Data.AllocatorInstance.Data =
             pFVar37[1].TestDisplayName.Data.AllocatorInstance.Data;
        (pFVar37->TestDisplayName).Data.ArrayNum = iVar1;
        (pFVar37->TestDisplayName).Data.ArrayMax = iVar36;
        iVar1 = pFVar37[1].FullTestPath.Data.ArrayNum;
        iVar36 = pFVar37[1].FullTestPath.Data.ArrayMax;
        (pFVar37->FullTestPath).Data.AllocatorInstance.Data =
             pFVar37[1].FullTestPath.Data.AllocatorInstance.Data;
        (pFVar37->FullTestPath).Data.ArrayNum = iVar1;
        (pFVar37->FullTestPath).Data.ArrayMax = iVar36;
        iVar1 = pFVar37[1].Tags.ArrayNum;
        iVar36 = pFVar37[1].Tags.ArrayMax;
        (pFVar37->Tags).AllocatorInstance.Data = pFVar37[1].Tags.AllocatorInstance.Data;
        (pFVar37->Tags).ArrayNum = iVar1;
        (pFVar37->Tags).ArrayMax = iVar36;
        uVar13 = *(undefined7 *)&pFVar37[1].field_0x41;
        pFVar12 = pFVar37[1].DeviceInstance.AllocatorInstance.Data;
        pFVar37->State = pFVar37[1].State;
        *(undefined7 *)&pFVar37->field_0x41 = uVar13;
        (pFVar37->DeviceInstance).AllocatorInstance.Data = pFVar12;
        iVar1 = pFVar37[1].DeviceInstance.ArrayMax;
        fVar14 = pFVar37[1].Duration;
        uVar15 = *(undefined4 *)&pFVar37[1].field_0x5c;
        (pFVar37->DeviceInstance).ArrayNum = pFVar37[1].DeviceInstance.ArrayNum;
        (pFVar37->DeviceInstance).ArrayMax = iVar1;
        pFVar37->Duration = fVar14;
        *(undefined4 *)&pFVar37->field_0x5c = uVar15;
        pFVar12 = pFVar37[1].Entries.AllocatorInstance.Data;
        (pFVar37->DateTime).Ticks = pFVar37[1].DateTime.Ticks;
        (pFVar37->Entries).AllocatorInstance.Data = pFVar12;
        iVar1 = pFVar37[1].Entries.ArrayMax;
        iVar36 = pFVar37[1].Warnings;
        iVar35 = pFVar37[1].Errors;
        (pFVar37->Entries).ArrayNum = pFVar37[1].Entries.ArrayNum;
        (pFVar37->Entries).ArrayMax = iVar1;
        pFVar37->Warnings = iVar36;
        pFVar37->Errors = iVar35;
        iVar1 = pFVar37[1].Artifacts.ArrayNum;
        iVar36 = pFVar37[1].Artifacts.ArrayMax;
        (pFVar37->Artifacts).AllocatorInstance.Data = pFVar37[1].Artifacts.AllocatorInstance.Data;
        (pFVar37->Artifacts).ArrayNum = iVar1;
        (pFVar37->Artifacts).ArrayMax = iVar36;
        pFVar37[1].Test.Object = pIVar3;
        pFVar37[1].Test.SharedReferenceCount.ReferenceController = pTVar4;
        pFVar37[1].TestDisplayName.Data.AllocatorInstance.Data = pFVar5;
        pFVar37[1].TestDisplayName.Data.ArrayNum = iVar38;
        pFVar37[1].TestDisplayName.Data.ArrayMax = iVar16;
        pFVar37[1].FullTestPath.Data.AllocatorInstance.Data = pFVar6;
        pFVar37[1].FullTestPath.Data.ArrayNum = iVar17;
        pFVar37[1].FullTestPath.Data.ArrayMax = iVar18;
        pFVar37[1].Tags.AllocatorInstance.Data = pFVar7;
        pFVar37[1].Tags.ArrayNum = iVar19;
        pFVar37[1].Tags.ArrayMax = iVar20;
        pFVar37[1].State = EVar21;
        *(undefined7 *)&pFVar37[1].field_0x41 = uVar22;
        pFVar37[1].DeviceInstance.AllocatorInstance.Data = pFVar8;
        pFVar37[1].DeviceInstance.ArrayNum = iVar23;
        pFVar37[1].DeviceInstance.ArrayMax = iVar24;
        pFVar37[1].Duration = fVar25;
        *(undefined4 *)&pFVar37[1].field_0x5c = uVar26;
        pFVar37[1].DateTime.Ticks = lVar9;
        pFVar37[1].Entries.AllocatorInstance.Data = pFVar10;
        pFVar37[1].Entries.ArrayNum = iVar27;
        pFVar37[1].Entries.ArrayMax = iVar28;
        pFVar37[1].Warnings = iVar29;
        pFVar37[1].Errors = iVar30;
        pFVar37[1].Artifacts.AllocatorInstance.Data = pFVar11;
        pFVar37[1].Artifacts.ArrayNum = iVar31;
        pFVar37[1].Artifacts.ArrayMax = iVar32;
      }
      iVar34 = iVar34 + 2;
      pFVar39 = pFVar39 + 2;
      pFVar37 = pFVar37 + 2;
    } while (iVar34 < param_2);
  }
  iVar34 = 2;
  if (2 < param_2) {
    do {
      iVar1 = iVar34 * 2;
      iVar35 = 0;
      iVar36 = param_2;
      do {
        iVar38 = iVar36;
        if (iVar1 <= iVar36) {
          iVar38 = iVar1;
        }
        Merge<FAutomatedTestResult,FIdentityFunctor,TDereferenceWrapper<FAutomatedTestResult,_FAutomationControllerManager::ProcessResults_::__l31::<lambda_1>_>_>
                  (param_1 + iVar35,iVar34,iVar38,param_3,param_4);
        iVar35 = iVar35 + iVar1;
        iVar36 = iVar36 + iVar34 * -2;
      } while (iVar35 < param_2);
      iVar34 = iVar1;
    } while (iVar1 < param_2);
  }
  return;
}

// StaticEnum<enum_EAutomationArtifactType> @ 148c52570

UEnum * __cdecl StaticEnum<enum_EAutomationArtifactType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AutomationController_EAutomationArtifactType,
                       (UObject *)pUVar1,L"EAutomationArtifactType");
  }
  return Z_Registration_Info_UEnum_EAutomationArtifactType.OuterSingleton;
}

// UpperBoundInternal<TSharedPtr<IAutomationReport,1>_const_,int,TSharedPtr<IAutomationReport,1>,FIdentityFunctor,`FAutomationReport::EnsureReportExists'::__l19::<lambda_1>_> @ 148c525b0

int __cdecl
AlgoImpl::
UpperBoundInternal<TSharedPtr<IAutomationReport,1>_const_,int,TSharedPtr<IAutomationReport,1>,FIdentityFunctor,_FAutomationReport::EnsureReportExists_::__l19::<lambda_1>_>
          (TSharedPtr<IAutomationReport,1> *param_1,int param_2,
          TSharedPtr<IAutomationReport,1> *param_3,FIdentityFunctor param_4,<lambda_1> param_5)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  TSharedPtr<IAutomationReport,1> *pTVar13;
  
  iVar7 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar7;
      pTVar13 = param_1 + iVar1;
      if ((param_3->Object == (IAutomationReport *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      cVar5 = (**(code **)(param_3->Object->_padding_ + 0xa8))();
      if ((pTVar13->Object == (IAutomationReport *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
      cVar6 = (**(code **)(pTVar13->Object->_padding_ + 0xa8))();
      bVar4 = cVar6 == '\0';
      if ((cVar5 == '\0') == bVar4) {
        if ((pTVar13->Object == (IAutomationReport *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar7 = (*pcVar2)();
          return iVar7;
        }
        puVar9 = (undefined8 *)(**(code **)(pTVar13->Object->_padding_ + 0x18))();
        if ((param_3->Object == (IAutomationReport *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar7 = (*pcVar2)();
          return iVar7;
        }
        puVar10 = (undefined8 *)(**(code **)(param_3->Object->_padding_ + 0x18))();
        if (*(int *)(puVar9 + 1) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)*puVar9;
        }
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)*puVar10;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar11,pwVar12);
        bVar4 = SUB41((uint)iVar8 >> 0x1f,0);
      }
      if (bVar4 == false) {
        iVar7 = iVar1 + (param_2 & 1U);
      }
      uVar3 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar3 != 0);
  }
  return iVar7;
}

// `scalar_deleting_destructor' @ 148c54d00

void * __thiscall
TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>::_scalar_deleting_destructor_
          (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *this,uint param_1)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  int iVar7;
  
  for (iVar7 = 0; (-1 < iVar7 && (iVar7 < (this->ChildFilters).ArrayNum)); iVar7 = iVar7 + 1) {
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pvVar6 = (void *)(*pcVar4)();
        return pvVar6;
      }
    }
    plVar2 = *(longlong **)((this->ChildFilters).AllocatorInstance.Data + (longlong)iVar7 * 0x10);
    if (plVar2 != (longlong *)0x0) {
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(*plVar2 + 0x18))();
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
    }
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar6 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  DestructItems<TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1>,int>
            ((TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1> *)
             (this->ChildFilters).AllocatorInstance.Data,(this->ChildFilters).ArrayNum);
  pFVar3 = (this->ChildFilters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c54e40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c54e80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c54ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>::_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager> *this,uint param_1
          )

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c54f00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c54f40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c54f80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c54fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55000

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55040

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55080

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c550c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationTestExcludeOptions,SharedPointerInternals::DefaultDeleter<FAutomationTestExcludeOptions>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationTestExcludeOptions,SharedPointerInternals::DefaultDeleter<FAutomationTestExcludeOptions>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55100

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationControllerManager::FComparisonEntry,SharedPointerInternals::DefaultDeleter<FAutomationControllerManager::FComparisonEntry>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationControllerManager::FComparisonEntry,SharedPointerInternals::DefaultDeleter<FAutomationControllerManager::FComparisonEntry>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55140

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerFindWorkersResponse,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55180

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerImageComparisonResults,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c551c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerPong,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55200

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestNextNetworkCommand,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55240

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRequestTestsReplyComplete,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55280

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerRunTestsReply,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c552c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerScreenImage,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55300

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTelemetryData,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55340

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerTestDataRequest,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55380

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FAutomationWorkerWorkerOffline,FAutomationControllerManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c553c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationControllerManager,SharedPointerInternals::DefaultDeleter<FAutomationControllerManager>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationControllerManager,SharedPointerInternals::DefaultDeleter<FAutomationControllerManager>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55400

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FAutomationReport,SharedPointerInternals::DefaultDeleter<FAutomationReport>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FAutomationReport,SharedPointerInternals::DefaultDeleter<FAutomationReport>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55440

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FAutomationControllerManager::_scalar_deleting_destructor_
          (FAutomationControllerManager *this,uint param_1)

{
  ~FAutomationControllerManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55480

void * __thiscall
FAutomationReport::_scalar_deleting_destructor_(FAutomationReport *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  FAutomationTestExcludelistEntry::~FAutomationTestExcludelistEntry(&this->ExcludeTestInfo);
  FAutomationTestInfo::~FAutomationTestInfo(&this->TestInfo);
  DestructItems<TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FAutomationTestResults,TSizedDefaultAllocator<32>_> *)
             (this->Results).AllocatorInstance.Data,(this->Results).ArrayNum);
  pFVar3 = (this->Results).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TSharedPtr<IAutomationReport,1>,int>
            ((TSharedPtr<IAutomationReport,1> *)(this->FilteredChildReports).AllocatorInstance.Data,
             (this->FilteredChildReports).ArrayNum);
  pFVar3 = (this->FilteredChildReports).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->ChildReportNameHashes).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ChildReportNameHashes).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildReportNameHashes);
  DestructItems<TSharedPtr<IAutomationReport,1>,int>
            ((TSharedPtr<IAutomationReport,1> *)(this->ChildReports).AllocatorInstance.Data,
             (this->ChildReports).ArrayNum);
  pFVar3 = (this->ChildReports).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IAutomationReport__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c555a0

void * __thiscall
IAutomationControllerManager::_scalar_deleting_destructor_
          (IAutomationControllerManager *this,uint param_1)

{
  *this = (IAutomationControllerManager)&___7IAutomationControllerManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c555e0

void * __thiscall
IAutomationReport::_scalar_deleting_destructor_(IAutomationReport *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7IAutomationReport__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSetResults);
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c55650

void * __thiscall
UAutomationControllerSettings::_scalar_deleting_destructor_
          (UAutomationControllerSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAutomationControllerSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->InitialSelectedTestsNames).AllocatorInstance.Data,
             (this->InitialSelectedTestsNames).ArrayNum);
  pFVar1 = (this->InitialSelectedTestsNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TelemetryDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SuppressedLogCategories).AllocatorInstance.Data,
             (this->SuppressedLogCategories).ArrayNum);
  pFVar1 = (this->SuppressedLogCategories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAutomatedTestGroup,int>
            ((FAutomatedTestGroup *)(this->Groups).AllocatorInstance.Data,(this->Groups).ArrayNum);
  pFVar1 = (this->Groups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// CreateDirectoryRecursively @ 148c58a70

bool __cdecl CreateDirectoryRecursively(FString *param_1)

{
  bool bVar1;
  char cVar2;
  IFileManager *pIVar3;
  ForAnyElementType FVar4;
  FString local_18;
  
  FPaths::GetPath(&local_18,param_1);
  bVar1 = FPaths::IsDrive(&local_18);
  if (!bVar1) {
    pIVar3 = IFileManager::Get();
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar4.Data = local_18.Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3,FVar4.Data);
    if (cVar2 == '\0') {
      bVar1 = CreateDirectoryRecursively(&local_18);
      if (!bVar1) {
        bVar1 = false;
        goto LAB_148c58b11;
      }
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar3 + 0x60))(pIVar3,FVar4.Data,0);
      FVar4.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar4.Data = local_18.Data.AllocatorInstance.Data;
      }
      cVar2 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3,FVar4.Data);
      if (cVar2 == '\0') {
        bVar1 = false;
        goto LAB_148c58b11;
      }
    }
  }
  bVar1 = true;
LAB_148c58b11:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// EmptyLinkFunctionForGeneratedCodeAutomationControllerManager @ 148c59340

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationControllerManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationControllerSettings @ 148c59350

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationControllerSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationController_init @ 148c59360

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationController_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutomationDeviceClusterManager @ 148c59370

void __cdecl EmptyLinkFunctionForGeneratedCodeAutomationDeviceClusterManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAutomationReport @ 148c59380

void __cdecl EmptyLinkFunctionForGeneratedCodeIAutomationReport(void)

{
  return;
}

// EmptyLinkFunctionForStaticInitializationAutomationExecCmd @ 148c59390

void __cdecl EmptyLinkFunctionForStaticInitializationAutomationExecCmd(void)

{
  return;
}

// SaveStringToNewFile @ 148c69790

bool __cdecl SaveStringToNewFile(FString *param_1,FString *param_2)

{
  bool bVar1;
  IFileManager *pIVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  TStringView<wchar_t> local_18;
  
  bVar1 = CreateDirectoryRecursively(param_1);
  if (!bVar1) {
    return false;
  }
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum == 0) {
    local_18.DataPtr = L"";
  }
  else {
    local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    local_18.Size = 0;
    if ((FScriptContainerElement *)local_18.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_148c697f7;
  }
  sVar3 = wcslen(local_18.DataPtr);
  local_18.Size = (int)sVar3;
LAB_148c697f7:
  bVar1 = FFileHelper::SaveStringToFile(&local_18,pwVar4,AutoDetect,pIVar2,0);
  return bVar1;
}

// SetToShortString @ 148c6bd70

FString * __cdecl
SetToShortString(FString *__return_storage_ptr__,
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
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
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  iVar12 = *(int *)&(param_1->Elements).field_0x34;
  iStack_90 = *(int *)&(param_1->Elements).field_0x8;
  if (iStack_90 == iVar12) {
    FString::FString(__return_storage_ptr__,L"");
  }
  else {
    iStack_b0 = 0;
    uStack_ac = 1;
    puVar1 = &(param_1->Elements).field_0x10;
    local_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    iVar3 = *(int *)&(param_1->Elements).field_0x28;
    iStack_9c = 0;
    local_98 = iStack_b0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&(param_1->Elements).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar14 = *puVar16;
      local_98 = 0;
      iStack_b0 = 0;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_148c6be4e;
        uVar14 = puVar16[lVar10 + 1];
      }
      uStack_ac = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_ac * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iStack_9c = local_98 + -1 + local_res20;
      if (iVar3 < iStack_9c) {
        iStack_9c = iVar3;
      }
    }
LAB_148c6be4e:
    iStack_90 = iStack_90 - iVar12;
    uVar14 = *(uint *)&(param_1->Elements).field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    uStack_a0 = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
    TStack_78.CurrentBitIndex = iStack_9c;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    TStack_78._28_4_ = iStack_9c;
    TStack_78.BaseBitIndex = local_98;
    uStack_58 = CONCAT44(uStack_8c,iStack_90);
    iVar12 = (int)uVar14 >> 5;
    local_b8 = param_1;
    local_a8 = puVar1;
    iStack_94 = iStack_9c;
    local_80 = param_1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar5)();
      return pFVar8;
    }
    uVar4 = *(uint *)&(param_1->Elements).field_0x28;
    if (uVar14 != uVar4) {
      puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_148c6bf50;
        uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_88 = (int)lVar10;
      uVar14 = local_88 + -1 + uVar13;
      if ((int)uVar4 < (int)uVar14) {
        uVar14 = uVar4;
      }
    }
LAB_148c6bf50:
    while( true ) {
      pTVar6 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_res10[0] = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_78.CurrentBitIndex == uVar14) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == param_1)) break;
      pFVar9 = (FScriptContainerElement *)
               FName::ToString((FName *)((longlong)TStack_78.CurrentBitIndex * 0x10 +
                                        *(longlong *)&pTVar6->Elements),&local_50);
      if (((local_c8.Data <= pFVar9) && (pFVar9 < local_c8.Data + (longlong)local_c0._4_4_ * 0x10))
         && (bVar7 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar5)();
        return pFVar8;
      }
      iVar12 = (int)local_c0;
      if ((int)local_c0 == local_c0._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_c8,(int *)((longlong)&local_c0 + 4));
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar12 + 1);
      pFVar11 = local_c8.Data + (longlong)iVar12 * 0x10;
      *(undefined8 *)pFVar11 = 0;
      *(undefined8 *)pFVar11 = *(undefined8 *)pFVar9;
      *(undefined8 *)pFVar9 = 0;
      *(int *)(pFVar11 + 8) = *(int *)(pFVar9 + 8);
      *(int *)(pFVar11 + 0xc) = *(int *)(pFVar9 + 0xc);
      *(undefined8 *)(pFVar9 + 8) = 0;
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    if ((int)local_c0 == 1) {
      FString::FString(__return_storage_ptr__,(FString *)local_c8.Data);
    }
    else {
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_c8.Data,(int)local_c0,local_res10[0],(TLess<void> *)local_res18);
      if (((int)local_c0 < 1) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar5)();
        return pFVar8;
      }
      FString::ConcatFC(__return_storage_ptr__,(FString *)local_c8.Data,L"+");
    }
    DestructItems<FString,int>((FString *)local_c8.Data,(int)local_c0);
    if (local_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data);
    }
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UAutomationControllerSettings_NoRegister @ 148c6f6c0

UClass * __cdecl Z_Construct_UClass_UAutomationControllerSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationController",L"AutomationControllerSettings",
               &Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton,
               UAutomationControllerSettings::StaticRegisterNativesUAutomationControllerSettings,
               0x90,8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutomationControllerSettings>,
               InternalVTableHelperCtorCaller<UAutomationControllerSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationControllerSettings.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAutomatedTestPassResults @ 148c6f770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomatedTestPassResults(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.InnerSingleton,
               &Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAutomatedTestPassResults.InnerSingleton;
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

// IMPLEMENT_MODULE_AutomationController @ 148c6f7f0

void __cdecl IMPLEMENT_MODULE_AutomationController(void)

{
  return;
}

// AutomationControllerSingleton'' @ 15040b370

void __cdecl
`dynamic_atexit_destructor_for_'FAutomationControllerModule::AutomationControllerSingleton__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FAutomationControllerModule::AutomationControllerSingleton.SharedReferenceCount.
             ReferenceController);
  return;
}

// TelemetryDirectory'' @ 15040b390

void __cdecl `dynamic_atexit_destructor_for_'FAutomationTelemetry::TelemetryDirectory__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FAutomationTelemetry::TelemetryDirectory.Data.AllocatorInstance.Data;
  if (FAutomationTelemetry::TelemetryDirectory.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FAutomationTelemetry::TelemetryDirectory.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'Approved'' @ 15040b3b0

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Approved__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Approved.Data.AllocatorInstance.Data;
  if (Approved.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Approved.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'AutomationExecCmd'' @ 15040b3d0

void __cdecl _dynamic_atexit_destructor_for__AutomationExecCmd__(void)

{
  FAutomationExecCmd::~FAutomationExecCmd(&AutomationExecCmd);
  return;
}

// `dynamic_atexit_destructor_for_'Difference'' @ 15040b3f0

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Difference__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Difference.Data.AllocatorInstance.Data;
  if (Difference.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Difference.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogAutomationCommandLine'' @ 15040b410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationCommandLine__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationCommandLine);
  return;
}

// `dynamic_atexit_destructor_for_'LogAutomationController'' @ 15040b430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationController__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationController);
  return;
}

// `dynamic_atexit_destructor_for_'LogAutomationControllerSettings'' @ 15040b450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationControllerSettings__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationControllerSettings);
  return;
}

// `dynamic_atexit_destructor_for_'LogAutomationTelemetry'' @ 15040b470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAutomationTelemetry__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAutomationTelemetry);
  return;
}

// `dynamic_atexit_destructor_for_'Unapproved'' @ 15040b490

void __cdecl ComparisonFileTypes::_dynamic_atexit_destructor_for__Unapproved__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Unapproved.Data.AllocatorInstance.Data;
  if (Unapproved.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Unapproved.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

