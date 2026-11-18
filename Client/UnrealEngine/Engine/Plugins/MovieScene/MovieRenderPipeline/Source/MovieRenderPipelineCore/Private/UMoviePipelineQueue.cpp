// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 24

// StaticClass @ 14dd5eb30

UClass * __cdecl UMoviePipelineQueue::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineQueue",
               &Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton,
               StaticRegisterNativesUMoviePipelineQueue,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMoviePipelineQueue>,
               InternalVTableHelperCtorCaller<UMoviePipelineQueue>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton;
}

// UMoviePipelineQueue @ 14dd6b610

UMoviePipelineQueue * __thiscall
UMoviePipelineQueue::UMoviePipelineQueue(UMoviePipelineQueue *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->QueueOrigin).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMoviePipelineQueue__6B_;
  (this->Jobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Jobs).ArrayNum = 0;
  (this->Jobs).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UMoviePipelineQueue @ 14dd6b660

UMoviePipelineQueue * __thiscall UMoviePipelineQueue::UMoviePipelineQueue(UMoviePipelineQueue *this)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this);
  this_00 = &(this->QueueOrigin).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMoviePipelineQueue__6B_;
  (this->Jobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Jobs).ArrayNum = 0;
  (this->Jobs).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->QueueSerialNumber = 0;
  this->bIsDirty = false;
  if ((this->_padding_ & 0x10) == 0) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  }
  return this;
}

// ~UMoviePipelineQueue @ 14dd6c3a0

void __thiscall UMoviePipelineQueue::~UMoviePipelineQueue(UMoviePipelineQueue *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineQueue__6B_;
  pvVar1 = *(void **)&(this->QueueOrigin).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->Jobs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AllocateNewJob @ 14dd757b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineExecutorJob * __thiscall
UMoviePipelineQueue::AllocateNewJob
          (UMoviePipelineQueue *this,TSubclassOf<UMoviePipelineExecutorJob> param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UMoviePipelineExecutorJob *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  UMoviePipelineExecutorJob **local_f8;
  FScriptContainerElement *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [8];
  UMoviePipelineExecutorJob *local_c0;
  FName local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  lVar12 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar12 != 0) && (pUVar8 = UMoviePipelineExecutorJob::StaticClass(), pUVar8 != (UClass *)0x0))
  {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar12 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(longlong *)param_1.Class.field0_0x0 != 0)) goto LAB_14dd75847;
  }
  local_c8[0] = 0;
  bVar6 = `UMoviePipelineQueue::AllocateNewJob'::__l3::<lambda_1>::operator()(local_c8);
  if (!bVar6) {
    pUVar8 = UMoviePipelineExecutorJob::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    *(UClass **)param_1.Class.field0_0x0 = pUVar8;
  }
LAB_14dd75847:
  lVar12 = *(longlong *)param_1.Class.field0_0x0;
  pUVar8 = (UClass *)0x0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if ((lVar12 != 0) && (pUVar9 = UMoviePipelineExecutorJob::StaticClass(), pUVar9 != (UClass *)0x0))
  {
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar12 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar8 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  FVar4 = local_b8;
  if (local_b8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar9 = UMoviePipelineExecutorJob::StaticClass();
  CheckIsClassChildOf_Internal(pUVar9,pUVar8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar8);
  FVar5 = local_b8;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_b8.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_b8.Number = FVar4.Number;
  local_a8._16_4_ = local_b8.ComparisonIndex.Value;
  local_a8._20_4_ = local_b8.Number;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_b8 = FVar5;
  local_a8._8_8_ = this;
  pUVar10 = (UMoviePipelineExecutorJob *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transactional);
  local_c0 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pFVar2 = (this->Jobs).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_c0) &&
     (lVar12 = (longlong)(this->Jobs).ArrayMax,
     (FScriptContainerElement *)&local_c0 < pFVar2 + lVar12 * 8)) {
    local_e0 = (longlong)(this->Jobs).ArrayNum;
    local_d8 = 8;
    local_f8 = &local_c0;
    local_f0 = pFVar2;
    local_e8 = lVar12;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (UMoviePipelineExecutorJob *)(*pcVar3)();
      return pUVar10;
    }
  }
  iVar7 = (this->Jobs).ArrayNum;
  piVar1 = &(this->Jobs).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Jobs).AllocatorInstance,piVar1);
  }
  (this->Jobs).ArrayNum = iVar7 + 1;
  *(UMoviePipelineExecutorJob **)((this->Jobs).AllocatorInstance.Data + (longlong)iVar7 * 8) =
       local_c0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c0 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c0);
  }
  this->QueueSerialNumber = this->QueueSerialNumber + 1;
  return pUVar10;
}

// CopyFrom @ 14dd7c980

/* WARNING: Enum "Type": Some values do not have unique names */

UMoviePipelineQueue * __thiscall
UMoviePipelineQueue::CopyFrom(UMoviePipelineQueue *this,UMoviePipelineQueue *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  if (param_1 == (UMoviePipelineQueue *)0x0) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    return (UMoviePipelineQueue *)0x0;
  }
  *(undefined8 *)&(this->QueueOrigin).SoftObjectPtr =
       *(undefined8 *)&(param_1->QueueOrigin).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->QueueOrigin).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->QueueOrigin).SoftObjectPtr.field_0x8);
  piVar1 = &(this->Jobs).ArrayMax;
  (this->Jobs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Jobs).AllocatorInstance,0,piVar1);
  }
  local_20 = (param_1->Jobs).ArrayNum;
  lVar6 = (longlong)local_20;
  pFVar2 = (param_1->Jobs).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
    iVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar2,lVar6 << 3);
    iVar4 = local_20;
  }
  pFVar2 = local_28.Data + (longlong)iVar4 * 8;
  FVar3.Data = local_28.Data;
  iVar5 = iVar4;
  while( true ) {
    if (iVar5 != iVar4) {
      `TCheckedPointerIterator<UMoviePipelineExecutorJob_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar3.Data == pFVar2) break;
    DuplicateJob(this,*(UMoviePipelineExecutorJob **)FVar3.Data);
    FVar3.Data = FVar3.Data + 8;
    iVar5 = local_20;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  this->QueueSerialNumber = this->QueueSerialNumber + 1;
  return this;
}

// DeleteAllJobs @ 14dd7e7e0

void __thiscall UMoviePipelineQueue::DeleteAllJobs(UMoviePipelineQueue *this)

{
  int *piVar1;
  
  piVar1 = &(this->Jobs).ArrayMax;
  (this->Jobs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Jobs).AllocatorInstance,0,piVar1);
  }
  this->QueueSerialNumber = this->QueueSerialNumber + 1;
  return;
}

// DeleteJob @ 14dd7e830

void __thiscall
UMoviePipelineQueue::DeleteJob(UMoviePipelineQueue *this,UMoviePipelineExecutorJob *param_1)

{
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_res10 [3];
  
  if (param_1 != (UMoviePipelineExecutorJob *)0x0) {
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UMoviePipelineExecutorJob>,TSizedDefaultAllocator<32>_>::Remove
              (&this->Jobs,(TObjectPtr<UMoviePipelineExecutorJob> *)&local_res10[0].ObjectPtr);
    this->QueueSerialNumber = this->QueueSerialNumber + 1;
  }
  return;
}

// DuplicateJob @ 14dd7f3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMoviePipelineExecutorJob * __thiscall
UMoviePipelineQueue::DuplicateJob(UMoviePipelineQueue *this,UMoviePipelineExecutorJob *param_1)

{
  int *piVar1;
  UMoviePipelinePrimaryConfig *pUVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UMoviePipelineExecutorJob *pUVar9;
  UClass *pUVar10;
  UFunction *this_00;
  FString *pFVar11;
  uint uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  uint uVar15;
  wchar_t *pwVar16;
  UMoviePipelineExecutorJob *local_88;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  if (param_1 == (UMoviePipelineExecutorJob *)0x0) {
    return (UMoviePipelineExecutorJob *)0x0;
  }
  pUVar9 = (UMoviePipelineExecutorJob *)
           StaticDuplicateObject
                     ((UObject *)param_1,(UObject *)this,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  if (pUVar9 == (UMoviePipelineExecutorJob *)0x0) {
    pFVar11 = GetTypeName<UMoviePipelineExecutorJob>(&local_80);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar10 = UMoviePipelineExecutorJob::StaticClass();
  iVar8 = (int)pUVar10->_padding_;
  if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar8) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
      &pUVar10->_padding_)) {
    pFVar11 = GetTypeName<UMoviePipelineExecutorJob>(&local_70);
    pwVar13 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pFVar11 = GetFullNameForCastLogError<UObject>(local_60,(UObject *)pUVar9);
    if ((pFVar11->Data).ArrayNum != 0) {
      pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar13,pwVar16);
  }
  pUVar2 = (pUVar9->Configuration).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,(param_1->Configuration).field0_0x0.DebugPtr);
  uVar12 = 0;
  if (0 < (pUVar9->ShotInfo).ArrayNum) {
    lVar14 = 0;
    do {
      uVar15 = ~uVar12 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar12 < (param_1->ShotInfo).ArrayNum) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (UMoviePipelineExecutorJob *)(*pcVar5)();
        return pUVar9;
      }
      if (*(longlong *)(*(longlong *)((param_1->ShotInfo).AllocatorInstance.Data + lVar14) + 0x180)
          != 0) {
        uVar7 = 0;
        if ((int)uVar12 < (pUVar9->ShotInfo).ArrayNum) {
          uVar7 = uVar15;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pUVar9 = (UMoviePipelineExecutorJob *)(*pcVar5)();
          return pUVar9;
        }
        plVar3 = *(longlong **)
                  (*(longlong *)((pUVar9->ShotInfo).AllocatorInstance.Data + lVar14) + 0x180);
        pcVar5 = *(code **)(*plVar3 + 0x2b8);
        uVar7 = 0;
        if ((int)uVar12 < (param_1->ShotInfo).ArrayNum) {
          uVar7 = uVar15;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pUVar9 = (UMoviePipelineExecutorJob *)(*pcVar5)();
          return pUVar9;
        }
        (*pcVar5)(plVar3,*(undefined8 *)
                          (*(longlong *)((param_1->ShotInfo).AllocatorInstance.Data + lVar14) +
                          0x180));
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar12 < (pUVar9->ShotInfo).ArrayNum);
  }
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)pUVar9,NAME_UMoviePipelineExecutorJob_OnDuplicated);
  pUVar10 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar10->ClassFlags >> 7 & 1) == 0) {
    (**(code **)(pUVar9->_padding_ + 0x260))(pUVar9,this_00,0);
  }
  else {
    (**(code **)(pUVar9->_padding_ + 0x2e0))(pUVar9);
  }
  local_88 = pUVar9;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pFVar4 = (this->Jobs).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar4 + (longlong)(this->Jobs).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar9 = (UMoviePipelineExecutorJob *)(*pcVar5)();
    return pUVar9;
  }
  iVar8 = (this->Jobs).ArrayNum;
  piVar1 = &(this->Jobs).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Jobs).AllocatorInstance,piVar1);
  }
  pFVar4 = (this->Jobs).AllocatorInstance.Data;
  (this->Jobs).ArrayNum = iVar8 + 1;
  *(UMoviePipelineExecutorJob **)(pFVar4 + (longlong)iVar8 * 8) = local_88;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_88 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_88);
  }
  this->QueueSerialNumber = this->QueueSerialNumber + 1;
  return pUVar9;
}

// GetJobs @ 14dd89100

TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineQueue::GetJobs
          (UMoviePipelineQueue *this,
          TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Jobs).ArrayNum;
  _Src = (this->Jobs).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd8c190

UClass * __cdecl UMoviePipelineQueue::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineQueue",
               &Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton,
               StaticRegisterNativesUMoviePipelineQueue,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMoviePipelineQueue>,
               InternalVTableHelperCtorCaller<UMoviePipelineQueue>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineQueue.InnerSingleton;
}

// PreSave @ 14dd95d00

void __thiscall
UMoviePipelineQueue::PreSave(UMoviePipelineQueue *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res8 [4];
  
  local_res8[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res8[0] + 0x9c) = *(int *)(local_res8[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res8);
  this->bIsDirty = false;
  return;
}

// SetJobIndex @ 14dda2920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineQueue::SetJobIndex
          (UMoviePipelineQueue *this,UMoviePipelineExecutorJob *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_res8;
  UMoviePipelineExecutorJob *local_38;
  FString local_30;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMoviePipelineExecutorJob *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar6 = (this->Jobs).AllocatorInstance.Data;
  pFVar5 = pFVar6;
  do {
    if (pFVar5 == pFVar6 + (longlong)(this->Jobs).ArrayNum * 8) {
LAB_14dda297e:
      ::FString::PrintfImpl(&local_30,L"Cannot find Job %s in queue");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_30.Data.ArrayNum != 0) {
        FVar8.Data = local_30.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar8.Data,Error,(FName)0x0);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      return;
    }
    if (*(UMoviePipelineExecutorJob **)pFVar5 == param_1) {
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar6 >> 3);
      if (iVar4 != -1) {
        iVar7 = param_2 + -1;
        if (param_2 <= iVar4) {
          iVar7 = param_2;
        }
        local_res8.DebugPtr = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UMoviePipelineExecutorJob *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        TArray<TObjectPtr<UMoviePipelineExecutorJob>,TSizedDefaultAllocator<32>_>::Remove
                  (&this->Jobs,(TObjectPtr<UMoviePipelineExecutorJob> *)&local_res8.ObjectPtr);
        local_38 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UMoviePipelineExecutorJob *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar6 = (this->Jobs).AllocatorInstance.Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)(this->Jobs).ArrayMax * 8))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (this->Jobs).ArrayNum;
        piVar1 = &(this->Jobs).ArrayMax;
        if (iVar4 == *piVar1) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Jobs).AllocatorInstance,piVar1);
        }
        pFVar6 = (this->Jobs).AllocatorInstance.Data;
        (this->Jobs).ArrayNum = iVar4 + 1;
        pFVar6 = pFVar6 + (longlong)iVar7 * 8;
        memmove(pFVar6 + 8,pFVar6,(longlong)(iVar4 - iVar7) << 3);
        *(UMoviePipelineExecutorJob **)((this->Jobs).AllocatorInstance.Data + (longlong)iVar7 * 8) =
             local_38;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_38 != (UMoviePipelineExecutorJob *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_38);
        }
        this->QueueSerialNumber = this->QueueSerialNumber + 1;
        return;
      }
      goto LAB_14dda297e;
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// StaticRegisterNativesUMoviePipelineQueue @ 14dda6790

void __cdecl UMoviePipelineQueue::StaticRegisterNativesUMoviePipelineQueue(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineQueue_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAllocateNewJob @ 14ddaa780

void __cdecl UMoviePipelineQueue::execAllocateNewJob(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMoviePipelineExecutorJob *pUVar2;
  UObject *local_res10;
  UObject *local_res18 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar2 = AllocateNewJob((UMoviePipelineQueue *)param_1,
                          (TSubclassOf<UMoviePipelineExecutorJob>)local_res18);
  *(UMoviePipelineExecutorJob **)param_3 = pUVar2;
  return;
}

// execCopyFrom @ 14ddaab10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMoviePipelineQueue::execCopyFrom(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  void *_Src;
  longlong lVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  longlong local_res18 [2];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  lVar3 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == 0) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  *(undefined8 *)&param_1[1].field_0x10 = *(undefined8 *)(local_res18[0] + 0x38);
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&param_1[1].field_0x18,(FSoftObjectPath *)(local_res18[0] + 0x40));
  *(undefined4 *)&param_1[1].field_0x8 = 0;
  if (*(int *)&param_1[1].field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(param_1 + 1),0,(int *)&param_1[1].field_0xc);
  }
  local_30 = *(int *)(lVar3 + 0x30);
  lVar7 = (longlong)local_30;
  _Src = *(void **)(lVar3 + 0x28);
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar7 << 3);
    iVar5 = local_30;
  }
  pFVar1 = local_38.Data + (longlong)iVar5 * 8;
  FVar4.Data = local_38.Data;
  iVar6 = iVar5;
  while( true ) {
    if (iVar6 != iVar5) {
      `TCheckedPointerIterator<UMoviePipelineExecutorJob_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    DuplicateJob((UMoviePipelineQueue *)param_1,*(UMoviePipelineExecutorJob **)FVar4.Data);
    FVar4.Data = FVar4.Data + 8;
    iVar6 = local_30;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  *(int *)&param_1[2].field_0x10 = *(int *)&param_1[2].field_0x10 + 1;
  *(UObject **)param_3 = param_1;
  return;
}

// execDeleteAllJobs @ 14ddaacc0

void __cdecl UMoviePipelineQueue::execDeleteAllJobs(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[1].field_0x8 = 0;
  if (*(int *)&param_1[1].field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(param_1 + 1),0,(int *)&param_1[1].field_0xc);
  }
  *(int *)&param_1[2].field_0x10 = *(int *)&param_1[2].field_0x10 + 1;
  return;
}

// execDeleteJob @ 14ddaad20

void __cdecl UMoviePipelineQueue::execDeleteJob(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMoviePipelineExecutorJob *local_res10;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_res20;
  
  local_res10 = (UMoviePipelineExecutorJob *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UMoviePipelineExecutorJob *)0x0) {
    local_res20.DebugPtr = local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    TArray<TObjectPtr<UMoviePipelineExecutorJob>,TSizedDefaultAllocator<32>_>::Remove
              ((TArray<TObjectPtr<UMoviePipelineExecutorJob>,TSizedDefaultAllocator<32>_> *)
               (param_1 + 1),(TObjectPtr<UMoviePipelineExecutorJob> *)&local_res20.ObjectPtr);
    *(int *)&param_1[2].field_0x10 = *(int *)&param_1[2].field_0x10 + 1;
  }
  return;
}

// execDuplicateJob @ 14ddaadd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UMoviePipelineQueue::execDuplicateJob(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *this;
  UClass *pUVar8;
  UFunction *this_00;
  FString *pFVar9;
  uint uVar10;
  UObject *pUVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint uVar14;
  wchar_t *pwVar15;
  UObject *pUVar16;
  UObject *local_res10;
  undefined8 *local_res18;
  undefined8 local_res20;
  UObject *local_98;
  code *local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pUVar11 = (UObject *)0x0;
  local_res10 = (UObject *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = pUVar11;
  if (local_res10 != (UObject *)0x0) {
    uVar14 = 0;
    local_res20 = 0;
    this = StaticDuplicateObject
                     (local_res10,param_1,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
    if (this == (UObject *)0x0) {
      pFVar9 = GetTypeName<UMoviePipelineExecutorJob>(&local_80);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar12);
    }
    pUVar8 = UMoviePipelineExecutorJob::StaticClass();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) {
      pFVar9 = GetTypeName<UMoviePipelineExecutorJob>(&local_70);
      pwVar12 = L"";
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pFVar9 = GetFullNameForCastLogError<UObject>(local_60,this);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar12,pwVar15);
    }
    (**(code **)(**(longlong **)&this[6].field_0x10 + 0x2b8))
              (*(longlong **)&this[6].field_0x10,*(undefined8 *)&pUVar4[6].field_0x10);
    pUVar16 = pUVar11;
    if (0 < *(int *)(this + 4)) {
      do {
        uVar10 = (uint)pUVar11;
        uVar13 = ~uVar10 >> 0x1f;
        uVar6 = uVar14;
        if ((int)uVar10 < *(int *)(pUVar4 + 4)) {
          uVar6 = uVar13;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)
             (*(longlong *)(&pUVar16->field_0x0 + *(longlong *)&pUVar4[3].field_0x20) + 0x180) != 0)
        {
          uVar6 = uVar14;
          if ((int)uVar10 < *(int *)(this + 4)) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar2 = *(longlong **)
                    (*(longlong *)(&pUVar16->field_0x0 + *(longlong *)&this[3].field_0x20) + 0x180);
          local_90 = *(code **)(*plVar2 + 0x2b8);
          uVar6 = uVar14;
          if ((int)uVar10 < *(int *)(pUVar4 + 4)) {
            uVar6 = uVar13;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (*local_90)(plVar2,*(undefined8 *)
                              (*(longlong *)
                                (&pUVar16->field_0x0 + *(longlong *)&pUVar4[3].field_0x20) + 0x180))
          ;
        }
        pUVar11 = (UObject *)(ulonglong)(uVar10 + 1);
        param_3 = local_res18;
        pUVar16 = (UObject *)&pUVar16->field_0x8;
      } while ((int)(uVar10 + 1) < *(int *)(this + 4));
    }
    this_00 = UObject::FindFunctionChecked(this,NAME_UMoviePipelineExecutorJob_OnDuplicated);
    pUVar8 = UField::GetOwnerClass((UField *)this_00);
    if ((pUVar8->ClassFlags >> 7 & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x260))(this,this_00,0);
    }
    else {
      (**(code **)(*(longlong *)this + 0x2e0))(this);
    }
    local_98 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this);
    }
    if (((*(UObject ***)(param_1 + 1) <= &local_98) &&
        (&local_98 < *(UObject ***)(param_1 + 1) + *(int *)&param_1[1].field_0xc)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)&param_1[1].field_0x8;
    if (iVar7 == *(int *)&param_1[1].field_0xc) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)(param_1 + 1),(int *)&param_1[1].field_0xc);
    }
    *(int *)&param_1[1].field_0x8 = iVar7 + 1;
    *(UObject **)(*(longlong *)(param_1 + 1) + (longlong)iVar7 * 8) = local_98;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_98);
    }
    *(int *)&param_1[2].field_0x10 = *(int *)&param_1[2].field_0x10 + 1;
  }
  *(UObject **)param_3 = this;
  return;
}

// execGetJobs @ 14ddab770

void __cdecl UMoviePipelineQueue::execGetJobs(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[1].field_0x8;
  _Src = *(void **)(param_1 + 1);
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetQueueOrigin @ 14ddabb30

void __cdecl UMoviePipelineQueue::execGetQueueOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[1].field_0x10);
  if (pUVar2 == (UObject *)0x0) {
    if (*(longlong *)&param_1[1].field_0x18 == 0) goto LAB_14ddabbc0;
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&param_1[1].field_0x18,(FUObjectSerializeContext *)0x0);
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[1].field_0x10);
  }
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(UObject **)param_3 = pUVar2;
      return;
    }
  }
LAB_14ddabbc0:
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetJobIndex @ 14ddae170

void __cdecl UMoviePipelineQueue::execSetJobIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UMoviePipelineExecutorJob *local_res20;
  
  local_res20 = (UMoviePipelineExecutorJob *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetJobIndex((UMoviePipelineQueue *)param_1,local_res20,local_res10[0]);
  return;
}

// execSetQueueOrigin @ 14ddae360

void __cdecl UMoviePipelineQueue::execSetQueueOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&param_1[1].field_0x10,(FObjectPtr)&local_res10);
  return;
}

// operator() @ 15058e8f0

bool __thiscall `UMoviePipelineQueue::AllocateNewJob'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1138960898094792672>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1138960898094792672>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

