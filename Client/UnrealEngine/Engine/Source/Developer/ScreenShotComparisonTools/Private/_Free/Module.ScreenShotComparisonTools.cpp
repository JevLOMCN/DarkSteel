// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 79

// `dynamic_initializer_for_'LogScreenShotManager'' @ 141166320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogScreenShotManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogScreenShotManager,L"LogScreenShotManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogScreenShotManager__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantScreenShotComparisonTools'' @ 141166360

void __cdecl _dynamic_initializer_for__ModuleRegistrantScreenShotComparisonTools__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ScreenShotComparisonTools";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ScreenShotComparisonTools",0x19);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FScreenShotToolsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h__Script_ScreenShotComparisonTools_1985559634'' @ 1411663b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h__Script_ScreenShotComparisonTools_1985559634__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ScreenShotComparisonTools",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h__Script_ScreenShotComparisonTools_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h__Script_ScreenShotComparisonTools_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h__Script_ScreenShotComparisonTools_4157187787'' @ 141166400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h__Script_ScreenShotComparisonTools_4157187787__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ScreenShotComparisonTools",
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h__Script_ScreenShotComparisonTools_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h__Script_ScreenShotComparisonTools_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ScreenShotComparisonTools'' @ 141166450

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ScreenShotComparisonTools__
          (void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x22fea34;
  local_res8[0].DeclarationsHash = 0x33f60d22;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ScreenShotComparisonTools,
             L"/Script/ScreenShotComparisonTools",
             &Z_Registration_Info_UPackage__Script_ScreenShotComparisonTools,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 148c381b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FScreenShotManager,SharedPointerInternals::DefaultDeleter<FScreenShotManager>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FScreenShotManager,SharedPointerInternals::DefaultDeleter<FScreenShotManager>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UClass_UScreenShotComparisonSettings @ 148c38670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UScreenShotComparisonSettings(void)

{
  if (Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton,
               &Z_Construct_UClass_UScreenShotComparisonSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FScreenshotFallbackEntry @ 148c386b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FScreenshotFallbackEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FScreenshotFallbackEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FScreenshotFallbackEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FScreenshotFallbackEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FScreenshotFallbackEntry.InnerSingleton;
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

// Z_Construct_UPackage__Script_ScreenShotComparisonTools @ 148c38730

UPackage * __cdecl Z_Construct_UPackage__Script_ScreenShotComparisonTools(void)

{
  if (Z_Registration_Info_UPackage__Script_ScreenShotComparisonTools.OuterSingleton ==
      (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ScreenShotComparisonTools.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ScreenShotComparisonTools.OuterSingleton;
}

// NewStructOps @ 148c38770

void * __cdecl Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FScreenshotFallbackEntry,&UE::CoreUObject::Private::Construct<FScreenshotFallbackEntry>,&UE::CoreUObject::Private::ConstructForTests<FScreenshotFallbackEntry>,&UE::CoreUObject::Private::Destruct<FScreenshotFallbackEntry>,&UE::CoreUObject::Private::Copy<FScreenshotFallbackEntry>,&UE::CoreUObject::Private::GetStructTypeHash<FScreenshotFallbackEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit @ 148c387b0

void __cdecl
Z_Construct_UClass_UScreenShotComparisonSettings_Statics::
NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// `scalar_deleting_destructor' @ 148c38840

void * __thiscall
IScreenShotToolsModule::_scalar_deleting_destructor_(IScreenShotToolsModule *this,uint param_1)

{
  *this = (IScreenShotToolsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c38950

void * __thiscall
FScreenShotToolsModule::_scalar_deleting_destructor_(FScreenShotToolsModule *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScreenShotManager).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UScriptStruct_FImageTolerance @ 148c389a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FImageTolerance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FImageTolerance.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FImageTolerance.InnerSingleton,
               &Z_Construct_UScriptStruct_FImageTolerance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FImageTolerance.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FImageTolerance.InnerSingleton;
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

// NewProp_IgnoreAntiAliasing_SetBit @ 148c38a20

void __cdecl
Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 6) = 1;
  return;
}

// NewProp_IgnoreColors_SetBit @ 148c38a30

void __cdecl
Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 7) = 1;
  return;
}

// NewStructOps @ 148c38a40

void * __cdecl Z_Construct_UScriptStruct_FImageTolerance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FImageTolerance,&UE::CoreUObject::Private::Construct<FImageTolerance>,&UE::CoreUObject::Private::ConstructForTests<FImageTolerance>,&UE::CoreUObject::Private::Destruct<FImageTolerance>,&UE::CoreUObject::Private::Copy<FImageTolerance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EImageTolerancePreset_StaticEnum @ 148c38a80

UEnum * __cdecl EImageTolerancePreset_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImageTolerancePreset.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
    Z_Registration_Info_UEnum_EImageTolerancePreset.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ScreenShotComparisonTools_EImageTolerancePreset,
                       (UObject *)pUVar1,L"EImageTolerancePreset");
  }
  return Z_Registration_Info_UEnum_EImageTolerancePreset.OuterSingleton;
}

// NewProp_bSkipAttachingImages_SetBit @ 148c38ac0

void __cdecl
Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_bSkipAttachingImages_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe8) = 1;
  return;
}

// NewStructOps @ 148c38ad0

void * __cdecl Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FImageComparisonResult,&UE::CoreUObject::Private::Construct<FImageComparisonResult>,&UE::CoreUObject::Private::ConstructForTests<FImageComparisonResult>,&UE::CoreUObject::Private::Destruct<FImageComparisonResult>,&UE::CoreUObject::Private::Copy<FImageComparisonResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_> @ 148c38c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<FImageComparisonResult> * __cdecl
Async<_FScreenShotManager::CompareScreenshotAsync_::__l2::<lambda_1>_>
          (TFuture<FImageComparisonResult> *__return_storage_ptr__,EAsyncExecution param_1,
          <lambda_1> *param_2,TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<FRunnableThread_*> *pTVar6;
  bool bVar7;
  int iVar8;
  FPipe *pFVar9;
  FTaskBase *pFVar10;
  TFuture<FImageComparisonResult> *pTVar11;
  FTaskBase *pFVar12;
  FTSTicker *this;
  FTaskBase *pFVar13;
  FRunnableThread *pFVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  code **ppcVar17;
  FSharedReferencer<1> FVar18;
  FTaskBase *pFVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  FTaskBase *pFVar22;
  Type TVar23;
  FTaskBase *pFVar24;
  FTaskBase *this_00;
  undefined1 auStackY_4b8 [32];
  EExtendedTaskPriority local_478;
  ETaskPriority local_477 [7];
  FTaskBase *local_470;
  EAsyncExecution local_468;
  TFuture<FImageComparisonResult> *local_460;
  FTaskBase *local_458;
  FRunnableThread *local_450;
  FRunnableThread *local_448;
  TPromise<FRunnableThread_*> local_440;
  TPromise<FRunnableThread_*> local_428;
  FString local_400;
  FString local_3f0;
  TWeakPtr<FTSTicker::FElement,1> local_3e0;
  FImageComparisonResult local_3d0;
  FImageComparisonResult local_2e0;
  FImageComparisonResult local_1f0;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  pFVar22 = (FTaskBase *)0x0;
  local_470 = (FTaskBase *)((ulonglong)local_470 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_468 = param_1;
  local_460 = __return_storage_ptr__;
  local_458 = (FTaskBase *)param_3;
  pFVar9 = FMemory::Malloc(0x168,8);
  pFVar9->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FScreenShotManager::CompareScreenshotAsync'::`2'::<lambda_1>,1,1>::
        _vftable_;
  pFVar9->TaskCount = (atomic<unsigned___int64>)param_2->__this;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar9;
  FString::FString((FString *)&pFVar9->EmptyEventRef,&param_2->IncomingPath);
  FAutomationScreenshotMetadata::FAutomationScreenshotMetadata
            ((FAutomationScreenshotMetadata *)&pFVar9->DebugName,&param_2->MetaData);
  *(EScreenShotCompareOptions *)&pFVar9[8].DebugName = param_2->Options;
  if (&pFVar9->TaskCount != (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>,FImageComparisonResult>
               ::Call;
  }
  pFVar10 = operator_new(0x170);
  if (pFVar10 == (FTaskBase *)0x0) {
    local_470 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar10 = pFVar22;
  }
  else {
    *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar10->_padding_)[1] = (atomic<int>)0x1;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_UFImageComparisonResult_____00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)&pFVar10->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar10->_padding_;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
      return pTVar11;
    }
    LOCK();
    *(atomic<int> *)&pFVar10->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
    UNLOCK();
    local_470 = pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
      return pTVar11;
    }
    LOCK();
    *(atomic<int> *)&pFVar10->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->_padding_ + 1);
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar23 = GameThread;
    if (local_468 == TaskGraph) {
      TVar23 = AnyNormalThreadNormalTask;
    }
    pFVar12 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar19 = pFVar22;
    if (pFVar12 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar12,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar12->_padding_ =
           (longlong)&___7__TGraphTask_V__TAsyncGraphTask_UFImageComparisonResult______6B_;
      pFVar19 = pFVar12;
    }
    pFVar19[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar19[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar19[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar19[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_470 = (FTaskBase *)0x0;
    pFVar19[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar19[1]._padding_ != 0) {
      local_f8 = pFVar22;
    }
    pFVar19[1].Pipe = (FPipe *)this_00;
    *(FTaskBase **)&pFVar19[1].StateChangeEvent = pFVar10;
    *(undefined1 *)&pFVar19[1].ExecutingThreadId = 1;
    *(Type *)&pFVar19[1].TraceId = TVar23;
    UE::Tasks::Private::TranslatePriority(TVar23,local_477,&local_478);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar19,L"GraphTask",local_477[0],local_478,None);
    if (pFVar19 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar19->RefCount = (atomic<unsigned_int>)((int)pFVar19->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar19,0x130);
      LOCK();
      paVar1 = &pFVar19->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar19->_padding_)(pFVar19,1);
      }
    }
    goto LAB_148c38efb;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_470 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar10;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FScreenShotManager::CompareScreenshotAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar17 = local_50 + 2;
    *ppcVar17 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar17 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar17 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_3e0,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_3e0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_3e0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_3e0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_3e0.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar17 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar17 = local_50;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar9 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar9 = local_a0;
      }
      (**(code **)(*(code **)pFVar9 + 0x10))();
    }
LAB_148c38efb:
    pTVar11 = local_460;
    *(FTaskBase **)local_460 = this_00;
    *(FTaskBase **)&local_460->field_0x8 = pFVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_148c399b9;
  case Thread:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_440);
      pFVar13 = operator_new(0x70);
      pFVar19 = local_458;
      pFVar12 = this_00;
      pFVar24 = pFVar22;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_440.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar6 = local_440.State.Object;
        local_440.bFutureRetrieved = true;
        if ((local_440.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_440.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_440.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_440.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_470 = (FTaskBase *)0x0;
        pFVar13->_padding_ = (longlong)&___7__TAsyncRunnable_UFImageComparisonResult____6B_;
        pFVar13->_padding_ = (longlong)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar13->_padding_ != 0) {
          local_f8 = pFVar22;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_440.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar13->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar13->ExecutingThreadId = pFVar10;
        (pFVar13->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar19 = pFVar22;
        pFVar12 = pFVar22;
        pFVar22 = (FTaskBase *)&DAT_00000001;
        pFVar24 = pFVar13;
      }
      if (pFVar22 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_400,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_400.Data.ArrayNum != 0) {
        FVar21.Data = local_400.Data.AllocatorInstance.Data;
      }
      pFVar14 = FRunnableThread::Create
                          ((FRunnable *)pFVar24,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_450 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      iVar8 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_440,&local_450);
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
      if (((local_440.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_440.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_440.State.SharedReferenceCount.ReferenceController);
      pFVar22 = pFVar12;
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_3d0,uVar16);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      FImageComparisonResult::FImageComparisonResult
                ((FImageComparisonResult *)&(this_00->Prerequisites).Mutex,&local_3d0);
      FFutureState::MarkComplete((FFutureState *)this_00);
      FImageComparisonResult::~FImageComparisonResult(&local_3d0);
      pFVar22 = this_00;
    }
    break;
  case ThreadIfForkSafe:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar7) || (bVar7 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar7)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_428);
      pFVar13 = operator_new(0x70);
      pFVar19 = local_458;
      pFVar12 = this_00;
      pFVar24 = pFVar22;
      if (pFVar13 != (FTaskBase *)0x0) {
        if ((local_428.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar6 = local_428.State.Object;
        local_428.bFutureRetrieved = true;
        if ((local_428.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
        if (local_428.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_428.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_428.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_470 = (FTaskBase *)0x0;
        pFVar13->_padding_ = (longlong)&___7__TAsyncRunnable_UFImageComparisonResult____6B_;
        pFVar13->_padding_ = (longlong)local_f8;
        pFVar13->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar13->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar13->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar13->_padding_ != 0) {
          local_f8 = pFVar22;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar13->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_428.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar13->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar13->ExecutingThreadId = pFVar10;
        (pFVar13->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar19 = pFVar22;
        pFVar12 = pFVar22;
        pFVar22 = (FTaskBase *)&DAT_00000002;
        pFVar24 = pFVar13;
      }
      if (pFVar22 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_3f0,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_3f0.Data.ArrayNum != 0) {
        FVar21.Data = local_3f0.Data.AllocatorInstance.Data;
      }
      pFVar14 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar24,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_448 = pFVar14;
      if ((pFVar14 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      iVar8 = (**(code **)(pFVar14->_padding_ + 0x28))(pFVar14);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_428,&local_448);
      if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
      }
      if (((local_428.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_428.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_428.State.SharedReferenceCount.ReferenceController);
      pFVar22 = pFVar12;
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_2e0,uVar16);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      FImageComparisonResult::FImageComparisonResult
                ((FImageComparisonResult *)&(this_00->Prerequisites).Mutex,&local_2e0);
      FFutureState::MarkComplete((FFutureState *)this_00);
      FImageComparisonResult::~FImageComparisonResult(&local_2e0);
      pFVar22 = this_00;
    }
    break;
  case ThreadPool:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar15 = operator_new(0x60);
      if (puVar15 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
        pFVar22 = this_00;
      }
      else {
        puVar15[1] = 0;
        local_470 = (FTaskBase *)0x0;
        *puVar15 = &___7__TAsyncQueuedWork_UFImageComparisonResult____6B_;
        puVar15[2] = local_f8;
        puVar15[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar15 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar15 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar15[6] = local_e8.EmptyEventRef.Object;
        if (puVar15[2] != 0) {
          local_f8 = pFVar22;
        }
        puVar15[8] = this_00;
        puVar15[9] = pFVar10;
        *(undefined1 *)(puVar15 + 10) = 1;
        (*pcVar5)(GThreadPool,puVar15,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar16 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_1f0,uVar16);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
          return pTVar11;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
        return pTVar11;
      }
      FImageComparisonResult::FImageComparisonResult
                ((FImageComparisonResult *)&(this_00->Prerequisites).Mutex,&local_1f0);
      FFutureState::MarkComplete((FFutureState *)this_00);
      FImageComparisonResult::~FImageComparisonResult(&local_1f0);
      pFVar22 = this_00;
    }
    break;
  default:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    pFVar22 = this_00;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
      return pTVar11;
    }
  }
  pTVar11 = local_460;
  *(FTaskBase **)local_460 = this_00;
  *(FTaskBase **)&local_460->field_0x8 = pFVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar22 != (FTaskBase *)0x0) &&
      ((char)(pFVar22->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<FImageComparisonResult> *)(*pcVar5)();
    return pTVar11;
  }
LAB_148c399b9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_470);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 0x10))();
  }
  if (local_458->_padding_ != 0) {
    plVar20 = &local_458->_padding_;
    if ((longlong *)local_458->_padding_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_458->_padding_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return pTVar11;
}

// Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_> @ 148c39a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> * __cdecl
Async<_FScreenShotManager::OpenComparisonReportsAsync_::__l2::<lambda_1>_>
          (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
           *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<FRunnableThread_*> *pTVar6;
  bool bVar7;
  int iVar8;
  FTaskBase *pFVar9;
  TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *pTVar10;
  FTaskBase *pFVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  FPipe *pFVar17;
  FSharedReferencer<1> FVar18;
  FTaskBase *pFVar19;
  longlong *plVar20;
  ForAnyElementType FVar21;
  FTaskBase *pFVar22;
  FTaskBase *this_00;
  Type TVar23;
  FTaskBase *pFVar24;
  undefined1 auStackY_218 [32];
  EExtendedTaskPriority local_1d8;
  ETaskPriority local_1d7 [7];
  FTaskBase *local_1d0;
  EAsyncExecution local_1c8;
  TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *local_1c0;
  FTaskBase *local_1b8;
  FRunnableThread *local_1b0;
  FRunnableThread *local_1a8;
  undefined8 local_1a0;
  TReferenceControllerBase<1> *local_198;
  undefined8 local_190;
  TReferenceControllerBase<1> *local_188;
  undefined8 local_180;
  TReferenceControllerBase<1> *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FString local_130;
  FString local_120;
  TWeakPtr<FTSTicker::FElement,1> local_110;
  FTaskBase *local_f8;
  FPipe local_e8;
  code *local_b8;
  code *pcStack_b0;
  TEventCount<unsigned_int> *local_a8;
  FPipe *local_a0;
  FTaskBase *local_98;
  FTaskBase *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pFVar22 = (FTaskBase *)0x0;
  local_1d0 = (FTaskBase *)((ulonglong)local_1d0 & 0xffffffff00000000);
  local_f8 = (FTaskBase *)0x0;
  local_1c8 = param_1;
  local_1c0 = __return_storage_ptr__;
  local_1b8 = (FTaskBase *)param_3;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController = FMemory::Malloc(0x30,8);
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FScreenShotManager::OpenComparisonReportsAsync'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount =
       (atomic<unsigned___int64>)param_2->__this;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)0x0;
  (((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->EmptyEventRef).Object
       = (TEventCount<unsigned_int> *)(param_2->ImportPathToUse).Data.AllocatorInstance.Data;
  (param_2->ImportPathToUse).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&(((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->
           EmptyEventRef).SharedReferenceCount.ReferenceController =
       (param_2->ImportPathToUse).Data.ArrayNum;
  *(int *)((longlong)
           &(((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->
            EmptyEventRef).SharedReferenceCount.ReferenceController + 4) =
       (param_2->ImportPathToUse).Data.ArrayMax;
  (param_2->ImportPathToUse).Data.ArrayNum = 0;
  (param_2->ImportPathToUse).Data.ArrayMax = 0;
  ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->DebugName =
       (wchar_t *)(param_2->ReportPathsWPtr).Object;
  ((FPipe *)((longlong)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController + 0x28))->
  LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)
             (param_2->ReportPathsWPtr).WeakReferenceCount.ReferenceController;
  if (&((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController)->TaskCount !=
      (atomic<unsigned___int64> *)0x0) {
    local_f8 = (FTaskBase *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>,TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
               ::Call;
  }
  (param_2->ReportPathsWPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_2->ReportPathsWPtr).Object = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar9 = operator_new(0x90);
  if (pFVar9 == (FTaskBase *)0x0) {
    local_1d0 = (FTaskBase *)0x0;
    this_00 = (FTaskBase *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pFVar9 = pFVar22;
  }
  else {
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)0x1;
    ((atomic<int> *)&pFVar9->_padding_)[1] = (atomic<int>)0x1;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00_____00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)&pFVar9->_padding_,param_3);
    this_00 = (FTaskBase *)&pFVar9->_padding_;
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                (*pcVar5)();
      return pTVar10;
    }
    LOCK();
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
    UNLOCK();
    local_1d0 = pFVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar9);
    if ((this_00 == (FTaskBase *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                (*pcVar5)();
      return pTVar10;
    }
    LOCK();
    *(atomic<int> *)&pFVar9->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pFVar9->_padding_ + 1);
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar23 = GameThread;
    if (local_1c8 == TaskGraph) {
      TVar23 = AnyNormalThreadNormalTask;
    }
    pFVar11 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar19 = pFVar22;
    if (pFVar11 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar11,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar11->_padding_ =
           (longlong)
           &
           ___7__TGraphTask_V__TAsyncGraphTask_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00______6B_
      ;
      pFVar19 = pFVar11;
    }
    pFVar19[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar19[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar19[1]._padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pFVar19[1]._padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_1d0 = (FTaskBase *)0x0;
    pFVar19[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar19[1]._padding_ != 0) {
      local_f8 = pFVar22;
    }
    pFVar19[1].Pipe = (FPipe *)this_00;
    *(FTaskBase **)&pFVar19[1].StateChangeEvent = pFVar9;
    *(undefined1 *)&pFVar19[1].ExecutingThreadId = 1;
    *(Type *)&pFVar19[1].TraceId = TVar23;
    UE::Tasks::Private::TranslatePriority(TVar23,local_1d7,&local_1d8);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar19,L"GraphTask",local_1d7[0],local_1d8,None);
    if (pFVar19 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar19->RefCount = (atomic<unsigned_int>)((int)pFVar19->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar19,0x130);
      LOCK();
      paVar1 = &pFVar19->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar19->_padding_)(pFVar19,1);
      }
    }
    goto LAB_148c39d5a;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
    pcStack_b0 = (code *)CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_a8 = local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_1d0 = (FTaskBase *)0x0;
    local_88 = 1;
    local_78[0] = (code *)0x0;
    local_98 = this_00;
    local_90 = pFVar9;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FScreenShotManager::OpenComparisonReportsAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_50 + 2;
    *ppcVar16 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    local_50[4] = local_b8;
    local_50[5] = pcStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar16 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (FTaskBase *)0x0;
    local_98 = (FTaskBase *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar16 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_110,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_110.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_110.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_110.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_110.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar16 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar16 = local_50;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_98 != (FTaskBase *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0')) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State->IsComplete()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x242,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                (*pcVar5)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar17 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar17 = local_a0;
      }
      (**(code **)(*(code **)pFVar17 + 0x10))();
    }
LAB_148c39d5a:
    pTVar10 = local_1c0;
    *(FTaskBase **)local_1c0 = this_00;
    *(FTaskBase **)&local_1c0->field_0x8 = pFVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_148c3a789;
  case Thread:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pFVar12 = operator_new(0x70);
      pFVar19 = local_1b8;
      pFVar11 = this_00;
      pFVar24 = pFVar22;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
        pTVar6 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1d0 = (FTaskBase *)0x0;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____6B_
        ;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar12->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar12->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar12->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar22;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_170.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar12->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar12->ExecutingThreadId = pFVar9;
        (pFVar12->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar19 = pFVar22;
        pFVar11 = pFVar22;
        pFVar22 = (FTaskBase *)&DAT_00000001;
        pFVar24 = pFVar12;
      }
      if (pFVar22 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_130,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_130.Data.ArrayNum != 0) {
        FVar21.Data = local_130.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar24,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_1b0 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_1b0);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
      pFVar22 = pFVar11;
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_1a0,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      *(undefined8 *)&(this_00->Prerequisites).Mutex = local_1a0;
      *(TReferenceControllerBase<1> **)&this_00->LowLevelTask = local_198;
      local_198 = (TReferenceControllerBase<1> *)0x0;
      local_1a0 = 0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_198)
      ;
      pFVar22 = this_00;
    }
    break;
  case ThreadIfForkSafe:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar7) || (bVar7 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar7)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar19 = local_1b8;
      pFVar11 = this_00;
      pFVar24 = pFVar22;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
        pTVar6 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1d0 = (FTaskBase *)0x0;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____6B_
        ;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar12->_padding_ = CONCAT44(local_e8.LastTask._4_4_,local_e8.LastTask._0_4_);
        pFVar12->_padding_ = CONCAT44(local_e8.TaskCount._4_4_,local_e8.TaskCount._0_4_);
        *(TEventCount<unsigned_int> **)&(pFVar12->RefCount).field_0x0 =
             local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar22;
        }
        *(TReferenceControllerBase<1> **)
         &(pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData.field_0x0 =
             local_158.State.SharedReferenceCount.ReferenceController;
        *(FTaskBase **)&(pFVar12->StateChangeEvent).Count = this_00;
        *(FTaskBase **)&pFVar12->ExecutingThreadId = pFVar9;
        (pFVar12->TraceId).field_0x0 = 1;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar6;
        pFVar19 = pFVar22;
        pFVar11 = pFVar22;
        pFVar22 = (FTaskBase *)&DAT_00000002;
        pFVar24 = pFVar12;
      }
      if (pFVar22 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar19);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_120,L"TAsync %d");
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_120.Data.ArrayNum != 0) {
        FVar21.Data = local_120.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar24,(wchar_t *)FVar21.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_1a8 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      iVar8 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar8 != 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_1a8);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
      pFVar22 = pFVar11;
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_190,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      *(undefined8 *)&(this_00->Prerequisites).Mutex = local_190;
      *(TReferenceControllerBase<1> **)&this_00->LowLevelTask = local_188;
      local_188 = (TReferenceControllerBase<1> *)0x0;
      local_190 = 0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_188)
      ;
      pFVar22 = this_00;
    }
    break;
  case ThreadPool:
    bVar7 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar7) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
        pFVar22 = this_00;
      }
      else {
        puVar14[1] = 0;
        local_1d0 = (FTaskBase *)0x0;
        *puVar14 = &
                   ___7__TAsyncQueuedWork_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____6B_
        ;
        puVar14[2] = local_f8;
        puVar14[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        *(undefined4 *)(puVar14 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar14 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar14[6] = local_e8.EmptyEventRef.Object;
        if (puVar14[2] != 0) {
          local_f8 = pFVar22;
        }
        puVar14[8] = this_00;
        puVar14[9] = pFVar9;
        *(undefined1 *)(puVar14 + 10) = 1;
        (*pcVar5)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar22 = local_f8;
      FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar15 = (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar22)(&local_180,uVar15);
      if (this_00 == (FTaskBase *)0x0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *
                    )(*pcVar5)();
          return pTVar10;
        }
      }
      if (((char)(this_00->Prerequisites).Prerequisites.ArrayNum != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                  (*pcVar5)();
        return pTVar10;
      }
      *(undefined8 *)&(this_00->Prerequisites).Mutex = local_180;
      *(TReferenceControllerBase<1> **)&this_00->LowLevelTask = local_178;
      local_178 = (TReferenceControllerBase<1> *)0x0;
      local_180 = 0;
      FFutureState::MarkComplete((FFutureState *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178)
      ;
      pFVar22 = this_00;
    }
    break;
  default:
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    pFVar22 = this_00;
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                (*pcVar5)();
      return pTVar10;
    }
  }
  pTVar10 = local_1c0;
  *(FTaskBase **)local_1c0 = this_00;
  *(FTaskBase **)&local_1c0->field_0x8 = pFVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((pFVar22 != (FTaskBase *)0x0) &&
      ((char)(pFVar22->Prerequisites).Prerequisites.ArrayNum == '\0')) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
              (*pcVar5)();
    return pTVar10;
  }
LAB_148c3a789:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1d0);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar18.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar18.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar18.ReferenceController)->LastTask + 0x10))();
  }
  if (local_1b8->_padding_ != 0) {
    plVar20 = &local_1b8->_padding_;
    if ((longlong *)local_1b8->_padding_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_1b8->_padding_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return pTVar10;
}

// Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_> @ 148c3a840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<FImageComparisonResult>::Run_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TAsyncRunnable<FImageComparisonResult> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->Thread;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->__this;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>,void>
             ::Call;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (TAsyncRunnable<FImageComparisonResult> *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_> @ 148c3b4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run_::__l2::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<int> *paVar2;
  atomic<unsigned_int> aVar3;
  atomic<int> aVar4;
  code *pcVar5;
  TFutureState<void> *pTVar6;
  TFutureState<void> *pTVar7;
  TFutureState<FRunnableThread_*> *pTVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  FTaskBase *pFVar12;
  FRunnableThread *pFVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code **ppcVar18;
  FPipe *pFVar19;
  FTaskBase *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  longlong *plVar23;
  ForAnyElementType FVar24;
  Type TVar25;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_188;
  ETaskPriority local_187 [7];
  TPromise<void> local_180;
  FTaskBase *local_168;
  FRunnableThread *local_160;
  TPromise<FRunnableThread_*> local_158;
  TPromise<FRunnableThread_*> local_140;
  FString local_128;
  FString local_118;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FTaskBase *local_f8;
  FPipe local_e8;
  atomic<UE::Tasks::Private::FTaskBase_*> local_b8;
  atomic<unsigned___int64> aStack_b0;
  TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *local_a8;
  FPipe *local_a0;
  TFutureState<void> *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar15 = (FTaskBase *)0x0;
  local_160 = (FRunnableThread *)((ulonglong)local_160 & 0xffffffff00000000);
  local_e8.TaskCount = (atomic<unsigned___int64>)param_2->Thread;
  local_e8.EmptyEventRef.Object = (TEventCount<unsigned_int> *)param_2->__this;
  local_e8.LastTask =
       (atomic<UE::Tasks::Private::FTaskBase_*>)
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_f8 = (FTaskBase *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>,void>
             ::Call;
  TPromise<void>::TPromise<void>(&local_180,param_3);
  if ((local_180.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  local_180.bFutureRetrieved = true;
  if ((local_180.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  FVar22.ReferenceController = local_180.State.SharedReferenceCount.ReferenceController;
  pTVar6 = local_180.State.Object;
  if (local_180.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    TVar25 = GameThread;
    if (param_1 == TaskGraph) {
      TVar25 = AnyNormalThreadNormalTask;
    }
    pFVar14 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
    pFVar20 = pFVar15;
    if (pFVar14 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar14,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar14->_padding_ = (longlong)&___7__TGraphTask_V__TAsyncGraphTask_X____6B_;
      pFVar20 = pFVar14;
    }
    pFVar20[1]._padding_ = (longlong)local_f8;
    *(TReferenceControllerBase<1> **)&pFVar20[1].RefCount =
         local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    pFVar20[1]._padding_ = (longlong)local_e8.LastTask;
    pFVar20[1]._padding_ = (longlong)local_e8.TaskCount;
    pFVar20[1]._padding_ = (longlong)local_e8.EmptyEventRef.Object;
    if (pFVar20[1]._padding_ != 0) {
      local_f8 = pFVar15;
    }
    pFVar20[1].Pipe = (FPipe *)local_180.State.Object;
    *(TReferenceControllerBase<1> **)&pFVar20[1].StateChangeEvent =
         local_180.State.SharedReferenceCount.ReferenceController;
    *(bool *)&pFVar20[1].ExecutingThreadId = local_180.bFutureRetrieved;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    *(Type *)&pFVar20[1].TraceId = TVar25;
    UE::Tasks::Private::TranslatePriority(TVar25,local_187,&local_188);
    FBaseGraphTask::Init((FBaseGraphTask *)pFVar20,L"GraphTask",local_187[0],local_188,None);
    if (pFVar20 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
    }
    else {
      LOCK();
      pFVar20->RefCount = (atomic<unsigned_int>)((int)pFVar20->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar20,0x130);
      LOCK();
      paVar1 = &pFVar20->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar20->_padding_)(pFVar20,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_e8.DebugName = (wchar_t *)local_f8;
    local_a0 = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    local_98 = local_180.State.Object;
    local_90 = local_180.State.SharedReferenceCount.ReferenceController;
    local_b8 = local_e8.LastTask;
    aStack_b0 = local_e8.TaskCount;
    local_a8 = (TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
                *)local_e8.EmptyEventRef.Object;
    local_f8 = (FTaskBase *)0x0;
    local_180.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_180.State.Object = (TFutureState<void> *)0x0;
    local_88 = local_180.bFutureRetrieved;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x60,0x10);
    *local_50 = (code *)&
                        ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
    ;
    ppcVar18 = local_50 + 2;
    *ppcVar18 = (code *)local_e8.DebugName;
    local_50[7] = (code *)local_a0;
    local_a0 = (FPipe *)0x0;
    *(atomic<UE::Tasks::Private::FTaskBase_*> *)(local_50 + 4) = local_b8;
    *(atomic<unsigned___int64> *)(local_50 + 5) = aStack_b0;
    local_50[6] = (code *)local_a8;
    if (*ppcVar18 != (code *)0x0) {
      local_e8.DebugName = (wchar_t *)0x0;
    }
    local_50[8] = (code *)local_98;
    local_50[9] = (code *)local_90;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    local_98 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_50 + 10) = local_88;
    if (ppcVar18 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_108,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_78);
    if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_108.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_78[0] != (code *)0x0) {
      ppcVar18 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar18 = local_50;
      }
      (**(code **)(*ppcVar18 + 0x10))();
    }
    if (((local_98 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_98 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    if ((FTaskBase *)local_e8.DebugName != (FTaskBase *)0x0) {
      pFVar19 = (FPipe *)&local_b8;
      if (local_a0 != (FPipe *)0x0) {
        pFVar19 = local_a0;
      }
      (**(code **)((longlong)pFVar19->LastTask + 0x10))();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pFVar12 = operator_new(0x70);
      pFVar20 = local_168;
      pFVar14 = pFVar15;
      if (pFVar12 != (FTaskBase *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_158.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar12->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar12->_padding_ = (longlong)local_f8;
        pFVar12->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar12->_padding_ = (longlong)local_e8.LastTask;
        pFVar12->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar12->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar12->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar12->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar12->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_158.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar12->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar12->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        pFVar20 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000001;
        pFVar14 = pFVar12;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar20);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar24.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pFVar14,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_160 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_160);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_140);
      pFVar14 = operator_new(0x70);
      pFVar20 = pFVar15;
      if (pFVar14 != (FTaskBase *)0x0) {
        if ((local_140.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        pTVar8 = local_140.State.Object;
        local_140.bFutureRetrieved = true;
        if ((local_140.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        if ((ForElementType<UE::Tasks::Private::FTaskBase_*>)
            local_140.State.SharedReferenceCount.ReferenceController !=
            (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0) {
          LOCK();
          (local_140.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_140.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar14->_padding_ = (longlong)&___7__TAsyncRunnable_X__6B_;
        pFVar14->_padding_ = (longlong)local_f8;
        pFVar14->Pipe = (FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        pFVar14->_padding_ = (longlong)local_e8.LastTask;
        pFVar14->_padding_ = (longlong)local_e8.TaskCount;
        *(TEventCount<unsigned_int> **)&pFVar14->RefCount = local_e8.EmptyEventRef.Object;
        if (pFVar14->_padding_ != 0) {
          local_f8 = pFVar15;
        }
        *(TFutureState<void> **)&(pFVar14->StateChangeEvent).Count = local_180.State.Object;
        *(TReferenceControllerBase<1> **)&pFVar14->ExecutingThreadId =
             local_180.State.SharedReferenceCount.ReferenceController;
        (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
             (ForElementType<UE::Tasks::Private::FTaskBase_*>)
             local_140.State.SharedReferenceCount.ReferenceController;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        *(bool *)&pFVar14->TraceId = local_180.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)
         (pFVar14->Prerequisites).Prerequisites.AllocatorInstance.InlineData = pTVar8;
        local_168 = pFVar15;
        pFVar15 = (FTaskBase *)&DAT_00000002;
        pFVar20 = pFVar14;
      }
      if (pFVar15 != (FTaskBase *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_168);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_118,L"TAsync %d");
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar24.Data = local_118.Data.AllocatorInstance.Data;
      }
      pFVar15 = (FTaskBase *)
                FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pFVar20,(wchar_t *)FVar24.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_168 = pFVar15;
      if ((pFVar15 == (FTaskBase *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar15->_padding_ + 0x28))(pFVar15);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_140,(FRunnableThread **)&local_168);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (((local_140.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_140.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      pcVar5 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar16 = operator_new(0x60);
      if (puVar16 == (undefined8 *)0x0) {
        (*pcVar5)(GThreadPool,0,3);
      }
      else {
        puVar16[1] = 0;
        *puVar16 = &___7__TAsyncQueuedWork_X__6B_;
        puVar16[2] = local_f8;
        puVar16[7] = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(puVar16 + 4) = local_e8.LastTask._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x24) = local_e8.LastTask._4_4_;
        *(undefined4 *)(puVar16 + 5) = local_e8.TaskCount._0_4_;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = local_e8.TaskCount._4_4_;
        puVar16[6] = local_e8.EmptyEventRef.Object;
        if (puVar16[2] != 0) {
          local_f8 = pFVar15;
        }
        puVar16[8] = local_180.State.Object;
        puVar16[9] = local_180.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar16 + 10) = local_180.bFutureRetrieved;
        local_180.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_180.State.Object = (TFutureState<void> *)0x0;
        (*pcVar5)(GThreadPool,puVar16,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_f8);
      pFVar15 = local_f8;
      FVar21.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
      if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0)
      {
        FVar21.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController
        ;
      }
      uVar17 = (**(code **)((longlong)((FPipe *)FVar21.ReferenceController)->LastTask + 8))();
      (*(code *)pFVar15)(uVar17);
      if (local_180.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar5)();
          return pTVar11;
        }
      }
      pTVar7 = local_180.State.Object;
      if ((*(TAtomic<bool> *)&(local_180.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar5)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar7);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar5)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar6;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar22.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_180.State.Object != (TFutureState<void> *)0x0) &&
      (((TAtomic<bool> *)&(local_180.State.Object)->field_0x68)->field_0x0 == '\0')) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar5)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.State.SharedReferenceCount.ReferenceController);
  if (local_f8 != (FTaskBase *)0x0) {
    FVar22.ReferenceController = (TReferenceControllerBase<1> *)&local_e8;
    if ((FPipe *)local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController != (FPipe *)0x0) {
      FVar22.ReferenceController = local_e8.EmptyEventRef.SharedReferenceCount.ReferenceController;
    }
    (**(code **)((longlong)((FPipe *)FVar22.ReferenceController)->LastTask + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar23 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return __return_storage_ptr__;
}

// DestructItems<FComparisonReport,int> @ 148c3c180

void __cdecl DestructItems<FComparisonReport,int>(FComparisonReport *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ReportPath;
    do {
      FImageComparisonResult::~FImageComparisonResult((FImageComparisonResult *)(pFVar2 + 1));
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FComparisonReport *)(pFVar2 + -2))->ReportRootDirectory).Data.AllocatorInstance.
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FScreenshotFallbackEntry,int> @ 148c3c1f0

void __cdecl
DestructItems<FScreenshotFallbackEntry,int>(FScreenshotFallbackEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Child).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Parent).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FormatNamed<wchar_t_const_(&)[7],int_const_&> @ 148c3c240

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[7],int_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [7],int *param_3)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(longlong *)&this->field_0x18 = (longlong)iVar1;
  return;
}

// FormatNamed<wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&> @ 148c3c2a0

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [7],int *param_3,wchar_t (*param_4) [8],int *param_5)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *pTVar2;
  
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_2);
  ::FString::FString((FString *)pTVar2,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_4);
  ::FString::FString((FString *)pTVar2,*param_4);
  iVar1 = *param_5;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  return;
}

// FormatNamed<wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&,wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&> @ 148c3c4e0

void __cdecl
TextFormatUtil::
FormatNamed<wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&,wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [7],int *param_3,wchar_t (*param_4) [8],int *param_5,
          wchar_t (*param_6) [7],int *param_7,wchar_t (*param_8) [8],int *param_9)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *pTVar2;
  
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_2);
  ::FString::FString((FString *)pTVar2,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_4);
  ::FString::FString((FString *)pTVar2,*param_4);
  iVar1 = *param_5;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_6);
  ::FString::FString((FString *)pTVar2,*param_6);
  iVar1 = *param_7;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_8);
  ::FString::FString((FString *)pTVar2,*param_8);
  iVar1 = *param_9;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  return;
}

// FormatNamed<wchar_t_const_(&)[8],int_const_&> @ 148c3c5f0

void __cdecl
TextFormatUtil::FormatNamed<wchar_t_const_(&)[8],int_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [8],int *param_3)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *this;
  
  this = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
         AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_2);
  ::FString::FString((FString *)this,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(longlong *)&this->field_0x18 = (longlong)iVar1;
  return;
}

// FormatNamed<wchar_t_const_(&)[8],int_const_&,wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&> @ 148c3c650

void __cdecl
TextFormatUtil::
FormatNamed<wchar_t_const_(&)[8],int_const_&,wchar_t_const_(&)[7],int_const_&,wchar_t_const_(&)[8],int_const_&>
          (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           *param_1,wchar_t (*param_2) [8],int *param_3,wchar_t (*param_4) [7],int *param_5,
          wchar_t (*param_6) [8],int *param_7)

{
  int iVar1;
  TTuple<FString,FFormatArgumentValue> *pTVar2;
  
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_2);
  ::FString::FString((FString *)pTVar2,*param_2);
  iVar1 = *param_3;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>(param_1,param_4);
  ::FString::FString((FString *)pTVar2,*param_4);
  iVar1 = *param_5;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  pTVar2 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
           ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>(param_1,param_6);
  ::FString::FString((FString *)pTVar2,*param_6);
  iVar1 = *param_7;
  *(undefined4 *)&pTVar2->field_0x10 = 0;
  *(undefined8 *)&pTVar2->field_0x20 = 0;
  *(undefined4 *)&pTVar2->field_0x28 = 0;
  *(longlong *)&pTVar2->field_0x18 = (longlong)iVar1;
  return;
}

// GetDefault<UScreenShotComparisonSettings> @ 148c3c730

UScreenShotComparisonSettings * __cdecl GetDefault<UScreenShotComparisonSettings>(void)

{
  UClass *this;
  
  this = UScreenShotComparisonSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UScreenShotComparisonSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UScreenShotComparisonSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// InternalConstructor<UScreenShotComparisonSettings> @ 148c3c820

void __cdecl InternalConstructor<UScreenShotComparisonSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UScreenShotComparisonSettings__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UScreenShotComparisonSettings> @ 148c3c870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UScreenShotComparisonSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UScreenShotComparisonSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UScreenShotComparisonSettings__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UScreenShotComparisonSettings> @ 148c3ce50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UScreenShotComparisonSettings * __cdecl NewObject<UScreenShotComparisonSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UScreenShotComparisonSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UScreenShotComparisonSettings::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UScreenShotComparisonSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// SetPromise<FImageComparisonResult,TUniqueFunction<FImageComparisonResult___cdecl(void)>_&> @ 148c3cef0

void __cdecl
SetPromise<FImageComparisonResult,TUniqueFunction<FImageComparisonResult___cdecl(void)>_&>
          (TPromise<FImageComparisonResult> *param_1,
          TUniqueFunction<FImageComparisonResult___cdecl(void)> *param_2)

{
  code *pcVar1;
  TFutureState<FImageComparisonResult> *this;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FImageComparisonResult local_f8;
  
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_f8,uVar3);
  if ((param_1->State).Object == (TFutureState<FImageComparisonResult> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object == (TFutureState<FImageComparisonResult> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = (param_1->State).Object;
  if (*(TAtomic<bool> *)&this->_padding_ != (TAtomic<bool>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FImageComparisonResult::FImageComparisonResult((FImageComparisonResult *)&this->Result,&local_f8);
  FFutureState::MarkComplete((FFutureState *)this);
  FImageComparisonResult::~FImageComparisonResult(&local_f8);
  return;
}

// SetPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>,TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>_&> @ 148c3d000

void __cdecl
SetPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>,TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>_&>
          (TPromise<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *param_1,
          TUniqueFunction<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>___cdecl(void)>
          *param_2)

{
  code *pcVar1;
  TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *this;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_18;
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_18,uVar3);
  if ((param_1->State).Object ==
      (TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->State).Object ==
        (TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = (param_1->State).Object;
  if (*(TAtomic<bool> *)&this->_padding_ != (TAtomic<bool>)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)(this->Result).Pad = local_18;
  *(TReferenceControllerBase<1> **)((this->Result).Pad + 8) = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = 0;
  FFutureState::MarkComplete((FFutureState *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// StaticEnum<enum_EImageTolerancePreset> @ 148c3d110

UEnum * __cdecl StaticEnum<enum_EImageTolerancePreset>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImageTolerancePreset.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
    Z_Registration_Info_UEnum_EImageTolerancePreset.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ScreenShotComparisonTools_EImageTolerancePreset,
                       (UObject *)pUVar1,L"EImageTolerancePreset");
  }
  return Z_Registration_Info_UEnum_EImageTolerancePreset.OuterSingleton;
}

// ~<lambda_1> @ 148c3db00

void __thiscall
`Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000148c3db67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 148c3db80

void __thiscall
`Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000148c3dbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 148c3dc00

void __thiscall
`Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000148c3dc67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 148c3dc80

void __thiscall
`Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_>'
::__l4::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x000148c3dce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>,1,1> @ 148c3de00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FScreenShotManager::CompareScreenshotAsync_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScreenShotManager::CompareScreenshotAsync'::`2'::<lambda_1>,1,1>::
        _vftable_;
  FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata
            ((FAutomationScreenshotMetadata *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>,1,1> @ 148c3de40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FScreenShotManager::OpenComparisonReportsAsync_::__l2::<lambda_1>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScreenShotManager::OpenComparisonReportsAsync'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x28);
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
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>,1,0> @ 148c3dea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_TAsyncRunnable<FImageComparisonResult>::Run_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>,1,0> @ 148c3dec0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 148c3dee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FScreenShotManager::CompareScreenshotAsync_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FScreenShotManager::CompareScreenshotAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 148c3df00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FScreenShotManager::OpenComparisonReportsAsync_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FScreenShotManager::OpenComparisonReportsAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 148c3df20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<FImageComparisonResult>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 148c3df40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run_::__l2::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// `scalar_deleting_destructor' @ 148c400d0

void * __thiscall
TAsyncQueuedWork<FImageComparisonResult>::_scalar_deleting_destructor_
          (TAsyncQueuedWork<FImageComparisonResult> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<FImageComparisonResult> *pTVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  longlong *plVar9;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<FImageComparisonResult> *)0x0) && ((char)pTVar3->_padding_ == '\0'))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar6)();
      return pvVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar4 = *(longlong **)&(this->Function).field_0x28;
    plVar9 = (longlong *)&(this->Function).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined ***)this = &___7IQueuedWork__6B_;
  puVar5 = *(undefined8 **)&this->field_0x8;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c401a0

void * __thiscall
TAsyncQueuedWork<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::
_scalar_deleting_destructor_
          (TAsyncQueuedWork<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *pTVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  longlong *plVar9;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
                  *)0x0) && ((char)pTVar3->_padding_ == '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pvVar8 = (void *)(*pcVar6)();
      return pvVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar4 = *(longlong **)&(this->Function).field_0x28;
    plVar9 = (longlong *)&(this->Function).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined ***)this = &___7IQueuedWork__6B_;
  puVar5 = *(undefined8 **)&this->field_0x8;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40270

void * __thiscall
TAsyncRunnable<FImageComparisonResult>::_scalar_deleting_destructor_
          (TAsyncRunnable<FImageComparisonResult> *this,uint param_1)

{
  TFutureState<FImageComparisonResult> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<FImageComparisonResult> *)0x0) && ((char)pTVar1->_padding_ == '\0'))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar6 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40320

void * __thiscall
TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::
_scalar_deleting_destructor_
          (TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
           *this,uint param_1)

{
  TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *pTVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong *plVar6;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->ThreadFuture).field_0x8);
  pTVar1 = (this->Promise).State.Object;
  if ((pTVar1 != (TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
                  *)0x0) && ((char)pTVar1->_padding_ == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->Function != 0) {
    plVar2 = *(longlong **)&(this->Function).field_0x28;
    plVar6 = (longlong *)&(this->Function).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c403d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScreenShotManager::CompareScreenshotAsync'::`2'::<lambda_1>,1,1>::
        _vftable_;
  FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata
            ((FAutomationScreenshotMetadata *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FScreenShotManager::OpenComparisonReportsAsync'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  plVar3 = *(longlong **)((longlong)this + 0x28);
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
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c404b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c404f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FScreenShotManager::CompareScreenshotAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FScreenShotManager::CompareScreenshotAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FScreenShotManager::OpenComparisonReportsAsync'::`2'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c405d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_UFImageComparisonResult____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<FImageComparisonResult>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__3____Async_V<lambda_1>__1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ___YA_AV__TFuture_X__W4EAsyncExecution____QEAV1_1__Run___TAsyncRunnable_V__TSharedPtr_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00____UEAAIXZ_V__TUniqueFunction___A6AXXZ___Z__00_00_Function_Private_Core_UE__6B_
  ;
  `Async<`TAsyncRunnable<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>::Run'::__l2::<lambda_1>_>'
  ::__l4::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40670

void * __thiscall
TGraphTask<TAsyncGraphTask<FImageComparisonResult>_>::_scalar_deleting_destructor_
          (TGraphTask<TAsyncGraphTask<FImageComparisonResult>_> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c406d0

void * __thiscall
TGraphTask<TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>_>::
_scalar_deleting_destructor_
          (TGraphTask<TAsyncGraphTask<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40730

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40770

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TFutureState<FImageComparisonResult>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<FImageComparisonResult>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c407b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c407f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FImageComparisonResult,SharedPointerInternals::DefaultDeleter<FImageComparisonResult>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FImageComparisonResult,SharedPointerInternals::DefaultDeleter<FImageComparisonResult>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40830

void * __thiscall
FScreenShotManager::_scalar_deleting_destructor_(FScreenShotManager *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FScreenShotManager__6B_;
  *(undefined4 *)&(this->FallbackPlatforms).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FallbackPlatforms).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FallbackPlatforms);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PendingComparisonReportPaths).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ScreenshotTempDeltaFolder).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IScreenShotManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c408d0

void * __thiscall
IScreenShotManager::_scalar_deleting_destructor_(IScreenShotManager *this,uint param_1)

{
  *this = (IScreenShotManager)&___7IScreenShotManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148c40910

void * __thiscall
UScreenShotComparisonSettings::_scalar_deleting_destructor_
          (UScreenShotComparisonSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UScreenShotComparisonSettings__6B_;
  pFVar1 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FScreenshotFallbackEntry,int>
            ((FScreenshotFallbackEntry *)(this->ScreenshotFallbackPlatforms).AllocatorInstance.Data,
             (this->ScreenshotFallbackPlatforms).ArrayNum);
  pFVar1 = (this->ScreenshotFallbackPlatforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeImageComparer @ 148c46ba0

void __cdecl EmptyLinkFunctionForGeneratedCodeImageComparer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeScreenShotComparisonSettings @ 148c46bb0

void __cdecl EmptyLinkFunctionForGeneratedCodeScreenShotComparisonSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeScreenShotComparisonTools_init @ 148c46bc0

void __cdecl EmptyLinkFunctionForGeneratedCodeScreenShotComparisonTools_init(void)

{
  return;
}

// Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister @ 148c4a480

UClass * __cdecl Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ScreenShotComparisonTools",L"ScreenShotComparisonSettings",
               &Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton,
               UScreenShotComparisonSettings::StaticRegisterNativesUScreenShotComparisonSettings,
               0x50,8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UScreenShotComparisonSettings>,
               InternalVTableHelperCtorCaller<UScreenShotComparisonSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScreenShotComparisonSettings.InnerSingleton;
}

// Z_Construct_UEnum_ScreenShotComparisonTools_EImageTolerancePreset @ 148c4a530

UEnum * __cdecl Z_Construct_UEnum_ScreenShotComparisonTools_EImageTolerancePreset(void)

{
  if (Z_Registration_Info_UEnum_EImageTolerancePreset.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EImageTolerancePreset.InnerSingleton,
               &Z_Construct_UEnum_ScreenShotComparisonTools_EImageTolerancePreset_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EImageTolerancePreset.InnerSingleton;
}

// Z_Construct_UScriptStruct_FImageComparisonResult @ 148c4a570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FImageComparisonResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FImageComparisonResult.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FImageComparisonResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FImageComparisonResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FImageComparisonResult.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FImageComparisonResult.InnerSingleton;
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

// IMPLEMENT_MODULE_ScreenShotComparisonTools @ 148c4a5f0

void __cdecl IMPLEMENT_MODULE_ScreenShotComparisonTools(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogScreenShotManager'' @ 15040b350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogScreenShotManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogScreenShotManager);
  return;
}

