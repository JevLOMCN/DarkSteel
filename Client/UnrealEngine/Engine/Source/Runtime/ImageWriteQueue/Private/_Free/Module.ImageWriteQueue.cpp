// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 79

// `dynamic_initializer_for_'CVarImageWriteQueueMaxConcurrency'' @ 140f96170

void __cdecl _dynamic_initializer_for__CVarImageWriteQueueMaxConcurrency__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarImageWriteQueueMaxConcurrency,L"ImageWriteQueue.MaxConcurrency",local_res8,
             L"The maximum number of async image writes allowable at any given time.Default is to use the number of cores available."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImageWriteQueueMaxConcurrency__);
  return;
}

// `dynamic_initializer_for_'CVarImageWriteQueueMaxQueueSize'' @ 140f961c0

void __cdecl _dynamic_initializer_for__CVarImageWriteQueueMaxQueueSize__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarImageWriteQueueMaxQueueSize,L"ImageWriteQueue.MaxQueueSize",local_res8,
             L"The maximum number of queued image write tasks allowable before the queue will block when adding more.Default is to use 4 times the number of cores available or 16 when multithreading is disabled on the command line."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarImageWriteQueueMaxQueueSize__);
  return;
}

// `dynamic_initializer_for_'LogImageWriteQueue'' @ 140f96210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogImageWriteQueue__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogImageWriteQueue,L"LogImageWriteQueue",Warning,Warning);
  atexit(_dynamic_atexit_destructor_for__LogImageWriteQueue__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantImageWriteQueue'' @ 140f96250

void __cdecl _dynamic_initializer_for__ModuleRegistrantImageWriteQueue__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ImageWriteQueue";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ImageWriteQueue",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FImageWriteQueueModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h__Script_ImageWriteQueue_3555971628'' @ 140f962a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h__Script_ImageWriteQueue_3555971628__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ImageWriteQueue",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h__Script_ImageWriteQueue_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h__Script_ImageWriteQueue_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteTypes_h__Script_ImageWriteQueue_359489896'' @ 140f962f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteTypes_h__Script_ImageWriteQueue_359489896__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ImageWriteQueue",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteTypes_h__Script_ImageWriteQueue_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ImageWriteQueue'' @ 140f96340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ImageWriteQueue__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe6888bf8;
  local_res8[0].DeclarationsHash = 0xe61e73bd;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ImageWriteQueue,L"/Script/ImageWriteQueue",
             &Z_Registration_Info_UPackage__Script_ImageWriteQueue,local_res8);
  return;
}

// Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature @ 1446e7de0

UFunction * __cdecl
Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1446e7e20

void * __thiscall
FImageWriteQueueModule::_scalar_deleting_destructor_(FImageWriteQueueModule *this,uint param_1)

{
  FImageWriteQueue *pFVar1;
  
  pFVar1 = (this->Queue).Ptr;
  if (pFVar1 != (FImageWriteQueue *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UPackage__Script_ImageWriteQueue @ 1446e7e80

UPackage * __cdecl Z_Construct_UPackage__Script_ImageWriteQueue(void)

{
  if (Z_Registration_Info_UPackage__Script_ImageWriteQueue.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ImageWriteQueue.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ImageWriteQueue.OuterSingleton;
}

// Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat @ 1446e7ec0

UEnum * __cdecl Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat(void)

{
  if (Z_Registration_Info_UEnum_EDesiredImageFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDesiredImageFormat.InnerSingleton,
               &Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDesiredImageFormat.InnerSingleton;
}

// EDesiredImageFormat_StaticEnum @ 1446e7f00

UEnum * __cdecl EDesiredImageFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ImageWriteQueue();
    Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat,(UObject *)pUVar1,
                       L"EDesiredImageFormat");
  }
  return Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1446e8040

void * __thiscall
IImageWriteQueueModule::_scalar_deleting_destructor_(IImageWriteQueueModule *this,uint param_1)

{
  *this = (IImageWriteQueueModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UImageWriteBlueprintLibrary @ 1446e8080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UImageWriteBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FImageWriteOptions @ 1446e80c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FImageWriteOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FImageWriteOptions.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FImageWriteOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FImageWriteOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FImageWriteOptions.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FImageWriteOptions.InnerSingleton;
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

// NewProp_bSuccess_SetBit @ 1446e8140

void __cdecl
Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::
NewProp_bSuccess_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bOverwriteFile_SetBit @ 1446e8300

void __cdecl
Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bAsync_SetBit @ 1446e8310

void __cdecl
Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// NewStructOps @ 1446e8320

void * __cdecl Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FImageWriteOptions,&UE::CoreUObject::Private::Construct<FImageWriteOptions>,&UE::CoreUObject::Private::ConstructForTests<FImageWriteOptions>,&UE::CoreUObject::Private::Destruct<FImageWriteOptions>,&UE::CoreUObject::Private::Copy<FImageWriteOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk @ 1446e8360

UFunction * __cdecl Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::FuncParams);
  }
  return ReturnFunction;
}

// <lambda_invoker_cdecl> @ 1446e83a0

EQueuedWorkPriority __cdecl
DefaultQueuedWorkPriorityWrapper::<lambda>::<lambda_invoker_cdecl>(EQueuedWorkPriority param_1)

{
  return param_1;
}

// ConstructItems<FFloat16Color,FFloat16Color,__int64> @ 1446e83b0

void __cdecl
ConstructItems<FFloat16Color,FFloat16Color,__int64>
          (void *param_1,FFloat16Color *param_2,long64 param_3)

{
  ushort *puVar1;
  FFloat16 *pFVar2;
  
  if (param_3 != 0) {
    puVar1 = (ushort *)((longlong)param_1 + 4);
    pFVar2 = &param_2->B;
    do {
      puVar1[-1] = 0;
      puVar1[0] = 0;
      *(undefined2 *)((longlong)pFVar2 + (longlong)param_1 + (-4 - (longlong)param_2)) = 0;
      puVar1[1] = 0;
      *(ushort *)((longlong)pFVar2 + (longlong)param_1 + (-4 - (longlong)param_2)) =
           (((FFloat16Color *)(pFVar2 + -2))->R).Encoded;
      puVar1[-1] = pFVar2[-1].Encoded;
      *puVar1 = pFVar2->Encoded;
      puVar1[1] = pFVar2[1].Encoded;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 4;
      pFVar2 = pFVar2 + 4;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FFloat16Color,int> @ 1446e8420

void __cdecl DefaultConstructItems<FFloat16Color,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FImageWriteFence,int> @ 1446e8470

void __cdecl DestructItems<FImageWriteFence,int>(FImageWriteFence *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)&(param_1->OnCompleted).field_0x28;
    do {
      if (plVar4[-5] != 0) {
        plVar3 = plVar4 + -3;
        if ((longlong *)*plVar4 != (longlong *)0x0) {
          plVar3 = (longlong *)*plVar4;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      if (((plVar4[-8] != 0) && (*(char *)(plVar4[-8] + 0x68) == '\0')) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)plVar4[-7]);
      plVar4 = plVar4 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int> @ 1446e8500

void __cdecl
DestructItems<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int>
          (TUniqueFunction<void___cdecl(FImagePixelData_*)> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::TSTR_ResolvePixelData63>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1446e8550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UImageWriteBlueprintLibrary::ResolvePixelData_::__l2::TSTR_ResolvePixelData63>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  FRenderCommandTag *pFVar16;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar17;
  undefined8 uVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar19;
  FTaskBase *this_02;
  FName FVar20;
  FNameEntryId FVar21;
  FNameEntryId FVar22;
  uint local_res10;
  uint uStackX_14;
  ETaskPriority local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar16 = (FRenderCommandTag *)
            TRenderCommandTag<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::TSTR_ResolvePixelData63>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar16->SpecId,pFVar16->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar16->SpecId);
  }
  bVar14 = IsInRenderingThread();
  if ((!bVar14) && ((GIsThreadedRendering != false || (bVar14 = IsInGameThread(), !bVar14)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar14 = IsInGameThread(), bVar14 &&
        (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar14)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_V__TRenderCommandTask_V__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___FRenderThreadCommandPipe____6B_
        ;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar16;
      this_02[1]._padding_ = *(longlong *)param_1;
      uVar9 = param_1->field_0x2c;
      uVar10 = param_1->field_0x2d;
      uVar11 = *(undefined2 *)&param_1->field_0x2e;
      this_02[1].StateChangeEvent = (TEventCount<unsigned_int>)*(undefined4 *)&param_1->field_0x28;
      this_02[1].ExtendedPriority = uVar9;
      this_02[1].TaskTriggered = (atomic<bool>)uVar10;
      this_02[1]._padding_ = uVar11;
      *(undefined8 *)&param_1->field_0x28 = 0;
      uVar12 = *(undefined4 *)&param_1->field_0x18;
      uVar13 = *(undefined4 *)&param_1->field_0x1c;
      this_02[1]._padding_ = *(longlong *)&param_1->field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar12;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar13;
      this_02[1].Pipe = *(FPipe **)&param_1->field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)param_1 = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_res18,
                 (EExtendedTaskPriority *)&local_res10);
      UE::Tasks::Private::FTaskBase::Init
                (this_02,L"GraphTask",local_res18[0],(EExtendedTaskPriority)local_res10,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar16);
    }
    goto LAB_1446e8978;
  }
  pTVar4 = (pFVar16->StatId).StatIdPtr;
  FVar22.Value = 0;
  bVar14 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar20 = *(FName *)&pTVar4->Name;
  FVar21 = FVar20.ComparisonIndex.Value;
  uVar15 = FVar20.Number;
  if ((FVar21.Value == 0) && (uVar15 == 0)) {
LAB_1446e8862:
    bVar6 = false;
    FVar20 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar14 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar21.Value;
        local_68.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar14 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1446e8862;
    local_res10 = FVar21.Value;
    uStackX_14 = uVar15;
    local_58 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
    FVar22.Value = local_58.ComparisonIndex.Value;
  }
  pFVar17 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar5 = *(code **)param_1;
  plVar19 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar19 = *(longlong **)&param_1->field_0x28;
  }
  uVar18 = (**(code **)(*plVar19 + 8))();
  (*pcVar5)(uVar18,pFVar17);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar22.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_1446e8978:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UImageWriteBlueprintLibrary> @ 1446e89b0

void __cdecl InternalConstructor<UImageWriteBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UImageWriteBlueprintLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UImageWriteBlueprintLibrary> @ 1446e89e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UImageWriteBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UImageWriteBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UImageWriteBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EDesiredImageFormat> @ 1446e8a90

UEnum * __cdecl StaticEnum<enum_EDesiredImageFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ImageWriteQueue();
    Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat,(UObject *)pUVar1,
                       L"EDesiredImageFormat");
  }
  return Z_Registration_Info_UEnum_EDesiredImageFormat.OuterSingleton;
}

// ~TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::__l2::PreProcessorToSetAlphaOpaque,1,0> @ 1446e9560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::__l2::PreProcessorToSetAlphaOpaque,1,0>
::
~TFunction_OwnedObject<_FImageWriteTask::AddPreProcessorToSetAlphaOpaque_::__l2::PreProcessorToSetAlphaOpaque,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::`2'::PreProcessorToSetAlphaOpaque,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>,0,1> @ 1446e9580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UImageWriteBlueprintLibrary::ExportToDisk_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`2'::<lambda_1>,0,1>::
        _vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x40));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e95ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>,1,1> @ 1446e95d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UImageWriteBlueprintLibrary::ResolvePixelData_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e95f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1> @ 1446e9600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FImageWriteTask::OnAbandoned_::__l5::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e9623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FImageWriteTask::RunTask'::__l5::<lambda_1>,1,1> @ 1446e9630

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImageWriteTask::RunTask'::__l5::<lambda_1>,1,1>
::~TFunction_OwnedObject<_FImageWriteTask::RunTask_::__l5::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteTask::RunTask'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e9653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::__l8::<lambda_1>,1,1> @ 1446e9660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FImageWriteQueue::CreateFence_::__l8::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::`8'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e9683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::__l31::<lambda_1>,1,1> @ 1446e9690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::__l31::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FImageWriteQueue::DecrementFence_::__l31::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::`31'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e96b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l5::<lambda_2>,1,1> @ 1446e96c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l5::<lambda_2>,1,1>::
~TFunction_OwnedObject<_UImageWriteBlueprintLibrary::ExportToDisk_::__l5::<lambda_2>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`5'::<lambda_2>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e96e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l8::<lambda_3>,1,1> @ 1446e96f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l8::<lambda_3>,1,1>::
~TFunction_OwnedObject<_UImageWriteBlueprintLibrary::ExportToDisk_::__l8::<lambda_3>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`8'::<lambda_3>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e9713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l10::<lambda_4>,1,1> @ 1446e9720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l10::<lambda_4>,1,1>::
~TFunction_OwnedObject<_UImageWriteBlueprintLibrary::ExportToDisk_::__l10::<lambda_4>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`10'::<lambda_4>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e9743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l13::<lambda_5>,1,1> @ 1446e9750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l13::<lambda_5>,1,1>::
~TFunction_OwnedObject<_UImageWriteBlueprintLibrary::ExportToDisk_::__l13::<lambda_5>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`13'::<lambda_5>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001446e9773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>,0,1> @ 1446e9780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>,0,1>::
~TFunction_OwnedObject<_UImageWriteBlueprintLibrary::ExportToDisk_::__l2::<lambda_6>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`2'::<lambda_6>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x70));
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 1446ea550

void * __thiscall
TBaseRawMethodDelegateInstance<0,FImageWriteQueue,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FImageWriteQueue,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_P6A_AW4EQueuedWorkPriority__W41__Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea5c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::__l2::PreProcessorToSetAlphaOpaque,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::`2'::PreProcessorToSetAlphaOpaque,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`2'::<lambda_1>,0,1>::
        _vftable_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 0x40));
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea730

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FImageWriteTask::RunTask'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteTask::RunTask'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteQueue::CreateFence'::`8'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::__l31::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FImageWriteQueue::DecrementFence'::`31'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l5::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`5'::<lambda_2>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l8::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`8'::<lambda_3>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l10::<lambda_4>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`10'::<lambda_4>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l13::<lambda_5>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`13'::<lambda_5>,1,1>::
        _vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ea9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`2'::<lambda_6>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x70));
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eaa50

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
::_scalar_deleting_destructor_
          (TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
           *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eaab0

void * __thiscall
TImagePixelData<FColor>::_scalar_deleting_destructor_(TImagePixelData<FColor> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Pixels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eab10

void * __thiscall
TImagePixelData<FLinearColor>::_scalar_deleting_destructor_
          (TImagePixelData<FLinearColor> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Pixels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eab70

void * __thiscall
TImagePixelData<FFloat16Color>::_scalar_deleting_destructor_
          (TImagePixelData<FFloat16Color> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Pixels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eabd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TPromise<void>,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<TPromise<void>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eac10

void * __thiscall
`FImagePixelPipe::AddEndpoint'::__l2::FFunctorEndpoint::_scalar_deleting_destructor_
          (void *this,uint param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7FImageStreamEndpoint__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eac70

void * __thiscall FImagePixelData::_scalar_deleting_destructor_(FImagePixelData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FImagePixelData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Payload).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eacc0

void * __thiscall
FImageStreamEndpoint::_scalar_deleting_destructor_(FImageStreamEndpoint *this,uint param_1)

{
  *this = (FImageStreamEndpoint)&___7FImageStreamEndpoint__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446ead00

void * __thiscall
FImageWriteQueue::_scalar_deleting_destructor_(FImageWriteQueue *this,uint param_1)

{
  FQueuedThreadPool *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7FImageWriteQueue__6B_;
  if ((this->bPendingShutdown == (FThreadSafeBool)0x0) ||
     (this->NumPendingTasks != (TAtomic<int>)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPendingShutdown && NumPendingTasks == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteQueue.cpp"
                       ,0xe2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(this->OnTaskCompletedEvent);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pvVar5 = (void *)(*pcVar3)();
        return pvVar5;
      }
    }
  }
  (**(code **)((longlong)*IConsoleManager::Singleton + 0x68))
            (IConsoleManager::Singleton,(this->CVarSinkHandle).Handle.ID);
  if (this->bOwnedThreadPool != false) {
    (**(code **)((longlong)*this->ThreadPool + 0x10))();
    pFVar1 = this->ThreadPool;
    if (pFVar1 != (FQueuedThreadPool *)0x0) {
      (**(code **)((longlong)*pFVar1 + 0x30))(pFVar1,1);
    }
  }
  DestructItems<FImageWriteFence,int>
            ((FImageWriteFence *)(this->PendingFences).AllocatorInstance.Data,
             (this->PendingFences).ArrayNum);
  pFVar2 = (this->PendingFences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FenceMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadPoolMutex);
  this->_padding_ = (longlong)&___7IImageWriteQueue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eae40

void * __thiscall FImageWriteTask::_scalar_deleting_destructor_(FImageWriteTask *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FImagePixelData *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  DestructItems<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int>
            ((TUniqueFunction<void___cdecl(FImagePixelData_*)> *)
             (this->PixelPreProcessors).AllocatorInstance.Data,(this->PixelPreProcessors).ArrayNum);
  pFVar1 = (this->PixelPreProcessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->PixelData).Ptr;
  if (pFVar2 != (FImagePixelData *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  if (*(longlong *)&this->OnCompleted != 0) {
    plVar3 = *(longlong **)&(this->OnCompleted).field_0x28;
    plVar4 = (longlong *)&(this->OnCompleted).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7IImageWriteTaskBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eaee0

void * __thiscall
FQueuedImageWrite::_scalar_deleting_destructor_(FQueuedImageWrite *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  TFutureState<bool> *pTVar3;
  IImageWriteTaskBase *pIVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<bool> *)0x0) && (pTVar3->field_0x68 == '\0')) {
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
  pIVar4 = (this->Task).Ptr;
  if (pIVar4 != (IImageWriteTaskBase *)0x0) {
    (**(code **)*pIVar4)(pIVar4,1);
  }
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar5 = (undefined8 *)this->_padding_;
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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eafa0

void * __thiscall
IImageWriteQueue::_scalar_deleting_destructor_(IImageWriteQueue *this,uint param_1)

{
  *this = (IImageWriteQueue)&___7IImageWriteQueue__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eafe0

void * __thiscall
IImageWriteTaskBase::_scalar_deleting_destructor_(IImageWriteTaskBase *this,uint param_1)

{
  *this = (IImageWriteTaskBase)&___7IImageWriteTaskBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446eb020

void * __thiscall
UImageWriteBlueprintLibrary::_scalar_deleting_destructor_
          (UImageWriteBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UImageWriteBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeImageWriteBlueprintLibrary @ 1446ec9d0

void __cdecl EmptyLinkFunctionForGeneratedCodeImageWriteBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeImageWriteQueue_init @ 1446ec9e0

void __cdecl EmptyLinkFunctionForGeneratedCodeImageWriteQueue_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeImageWriteTypes @ 1446ec9f0

void __cdecl EmptyLinkFunctionForGeneratedCodeImageWriteTypes(void)

{
  return;
}

// FOnImageWriteComplete_DelegateWrapper @ 1446edd00

void __cdecl
FOnImageWriteComplete_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *this;
  UFunction *pUVar3;
  undefined1 local_res10 [24];
  FDestructionSentinel local_28;
  
  local_res10[0] = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&param_1->Object);
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->FunctionName == (FName)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = FWeakObjectPtr::Get(&param_1->Object);
  pUVar3 = UObject::FindFunctionChecked(this,param_1->FunctionName);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,local_res10);
  return;
}

// ImageFormatFromDesired @ 1446ee490

EImageFormat __cdecl ImageFormatFromDesired(EDesiredImageFormat param_1)

{
  if (param_1 == PNG) {
    return PNG;
  }
  if (param_1 != JPG) {
    if ((param_1 != BMP) && (param_1 == EXR)) {
      return EXR;
    }
    return BMP;
  }
  return JPEG;
}

// Z_Construct_UClass_UImageWriteBlueprintLibrary_NoRegister @ 1446f02e0

UClass * __cdecl Z_Construct_UClass_UImageWriteBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImageWriteQueue",L"ImageWriteBlueprintLibrary",
               &Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton,
               UImageWriteBlueprintLibrary::StaticRegisterNativesUImageWriteBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UImageWriteBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UImageWriteBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_ImageWriteQueue @ 1446f0530

void __cdecl IMPLEMENT_MODULE_ImageWriteQueue(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarImageWriteQueueMaxConcurrency'' @ 15036f2a0

void __cdecl _dynamic_atexit_destructor_for__CVarImageWriteQueueMaxConcurrency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImageWriteQueueMaxConcurrency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImageWriteQueueMaxQueueSize'' @ 15036f2c0

void __cdecl _dynamic_atexit_destructor_for__CVarImageWriteQueueMaxQueueSize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImageWriteQueueMaxQueueSize);
  return;
}

// `dynamic_atexit_destructor_for_'LogImageWriteQueue'' @ 15036f2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogImageWriteQueue__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogImageWriteQueue);
  return;
}

