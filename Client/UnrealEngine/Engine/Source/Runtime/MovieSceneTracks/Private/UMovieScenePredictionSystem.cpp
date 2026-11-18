// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 1467cd2a0

UClass * __cdecl UMovieScenePredictionSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePredictionSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePredictionSystem",
               &Z_Registration_Info_UClass_UMovieScenePredictionSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePredictionSystem,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePredictionSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePredictionSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePredictionSystem.InnerSingleton;
}

// UMovieScenePredictionSystem @ 14680adb0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePredictionSystem * __thiscall
UMovieScenePredictionSystem::UMovieScenePredictionSystem
          (UMovieScenePredictionSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePredictionSystem__6B_;
  UE::MovieScene::FInterrogationChannels::FInterrogationChannels(&this->InterrogationChannels);
  (this->PendingPredictions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingPredictions).ArrayNum = 0;
  (this->PendingPredictions).ArrayMax = 0;
  (this->ProcessingPredictions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessingPredictions).ArrayNum = 0;
  (this->ProcessingPredictions).ArrayMax = 0;
  return this;
}

// UMovieScenePredictionSystem @ 14680ae00

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePredictionSystem * __thiscall
UMovieScenePredictionSystem::UMovieScenePredictionSystem
          (UMovieScenePredictionSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  FMovieSceneTracksComponentTypes *pFVar2;
  UObject *local_res8;
  UClass *local_res18 [2];
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePredictionSystem__6B_;
  UE::MovieScene::FInterrogationChannels::FInterrogationChannels(&this->InterrogationChannels);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0x26;
  (this->PendingPredictions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingPredictions).ArrayNum = 0;
  (this->PendingPredictions).ArrayMax = 0;
  (this->ProcessingPredictions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcessingPredictions).ArrayNum = 0;
  (this->ProcessingPredictions).ArrayMax = 0;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = Z_Construct_UClass_UFloatChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] = UMovieScenePostEvalEventSystem::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res8 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18[0] =
         Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    pFVar2 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    local_res8 = (UObject *)this->_padding_;
    FVar1.Value = (pFVar2->ComponentTransform).PropertyTag.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
  }
  return this;
}

// ~UMovieScenePredictionSystem @ 14680fb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePredictionSystem::~UMovieScenePredictionSystem(UMovieScenePredictionSystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieScenePredictionSystem__6B_;
  pFVar1 = (this->ProcessingPredictions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingPredictions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::MovieScene::FInterrogationChannels::~FInterrogationChannels(&this->InterrogationChannels);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// AddPendingPrediction @ 146819930

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieScenePredictionSystem::AddPendingPrediction
          (UMovieScenePredictionSystem *this,UMovieSceneAsyncAction_SequencePrediction *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneAsyncAction_SequencePrediction>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMovieSceneAsyncAction_SequencePrediction *local_18 [2];
  
  pTVar2 = &this->PendingPredictions;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UMovieSceneAsyncAction_SequencePrediction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->PendingPredictions).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->PendingPredictions).ArrayNum;
  piVar1 = &(this->PendingPredictions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingPredictions).ArrayNum = iVar6 + 1;
  *(UMovieSceneAsyncAction_SequencePrediction **)
   ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneAsyncAction_SequencePrediction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  UE::MovieScene::FEntityManager::OnStructureChanged((FEntityManager *)(this->_padding_ + 0x28));
  return;
}

// GetPrivateStaticClass @ 146836960

UClass * __cdecl UMovieScenePredictionSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePredictionSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePredictionSystem",
               &Z_Registration_Info_UClass_UMovieScenePredictionSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePredictionSystem,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePredictionSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePredictionSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePredictionSystem.InnerSingleton;
}

// IsRelevantImpl @ 14683f230

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieScenePredictionSystem::IsRelevantImpl
          (UMovieScenePredictionSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  return (this->ProcessingPredictions).ArrayNum + (this->PendingPredictions).ArrayNum != 0;
}

// MakeNewInterrogation @ 1468407a0

int __thiscall
UMovieScenePredictionSystem::MakeNewInterrogation
          (UMovieScenePredictionSystem *this,FFrameTime param_1)

{
  int iVar1;
  FFrameTime local_res8 [4];
  
  local_res8[0] = param_1;
  iVar1 = UE::MovieScene::FInterrogationChannels::AddInterrogation
                    (&this->InterrogationChannels,(FInterrogationParams *)local_res8);
  return iVar1;
}

// OnRun @ 1468490e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieScenePredictionSystem::OnRun
          (UMovieScenePredictionSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UMovieSceneAsyncAction_SequencePrediction>,TSizedDefaultAllocator<32>_> *pTVar2;
  ESystemPhase EVar3;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar4;
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> TVar5;
  FComponentTypeID FVar6;
  int iVar7;
  UMovieSceneAsyncAction_SequencePrediction *pUVar8;
  USceneComponent *pUVar9;
  longlong lVar10;
  undefined8 *puVar11;
  code *pcVar12;
  FScriptContainerElement *pFVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  FName FVar21;
  FName FVar22;
  <lambda_2> <Var23;
  longlong *plVar24;
  bool bVar25;
  int iVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionIntialization> FVar28;
  FBuiltInComponentTypes *pFVar29;
  FMovieSceneTracksComponentTypes *pFVar30;
  FInterrogationChannelInfo *this_00;
  UObject *pUVar31;
  UClass *pUVar32;
  FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionFinalization> FVar33;
  FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionReportResults> FVar34;
  uint uVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  FName FVar38;
  ulonglong uVar39;
  uint uVar40;
  byte bVar41;
  undefined1 auStackY_848 [32];
  byte local_7e8 [4];
  FComponentTypeID local_7e4;
  FComponentTypeID local_7e2;
  FComponentTypeID local_7e0;
  FComponentTypeID local_7de;
  FComponentTypeID local_7dc;
  FComponentTypeID local_7da;
  FComponentTypeID local_7d8;
  FComponentTypeID local_7d6;
  FComponentTypeID local_7d4;
  FComponentTypeID local_7d2;
  FName local_7d0;
  byte local_7c8;
  FName local_7c0;
  FName local_7b8;
  undefined1 local_7b0;
  undefined1 local_7af [7];
  ulonglong local_7a8;
  FName local_7a0;
  FColor_u_0 local_798 [2];
  FInterrogationChannel local_790 [2];
  FColor_u_0 local_788 [2];
  FName local_780;
  <lambda_2> local_778;
  FName local_770;
  FName local_768;
  FName local_758;
  longlong *local_748;
  undefined1 auStack_740 [16];
  uint uStack_730;
  int iStack_72c;
  longlong local_728;
  TSet<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>,FDefaultSetAllocator>
  *pTStack_720;
  TSet<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>,FDefaultSetAllocator>
  *local_718;
  undefined2 local_710;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_708;
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> local_706;
  wchar_t *local_700;
  TStatId TStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  wchar_t *local_6d8;
  TStatIdData *pTStack_6d0;
  byte local_6c8;
  undefined7 uStack_6c7;
  Type TStack_6c0;
  uint uStack_6bc;
  wchar_t *local_6b0;
  TStatIdData *pTStack_6a8;
  byte local_6a0;
  undefined7 uStack_69f;
  Type TStack_698;
  uint uStack_694;
  wchar_t *local_688;
  TStatIdData *pTStack_680;
  byte local_678;
  undefined7 uStack_677;
  Type TStack_670;
  uint uStack_66c;
  FScriptContainerElement *local_668;
  int local_660;
  FComponentTypeID *local_658;
  FComponentTypeID *pFStack_650;
  FComponentTypeID *local_648;
  FComponentTypeID *pFStack_640;
  FComponentTypeID *local_638;
  FComponentTypeID *pFStack_630;
  <lambda_3> local_628;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_618;
  FComponentTypeID *local_608;
  FComponentTypeID *pFStack_600;
  FComponentTypeID *local_5f8;
  FComponentTypeID *pFStack_5f0;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_5e8;
  TComponentTypeID<FFrameTime> TStack_5e6;
  undefined4 uStack_5e4;
  wchar_t *pwStack_5e0;
  TStatIdData *pTStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  TComponentTypeID<UObject_*> local_5c0;
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> TStack_5be;
  undefined4 uStack_5bc;
  wchar_t *pwStack_5b8;
  TStatIdData *pTStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_598;
  initializer_list<UE::MovieScene::FComponentTypeID> local_588;
  initializer_list<UE::MovieScene::FComponentTypeID> local_578;
  FName local_568;
  FName local_560;
  FName local_558 [2];
  initializer_list<UE::MovieScene::FComponentTypeID> local_548;
  initializer_list<UE::MovieScene::FComponentTypeID> local_538;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined1 local_4e0 [32];
  longlong local_4c0;
  TSet<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>,FDefaultSetAllocator>
  *pTStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined1 local_468 [32];
  void *local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined1 local_430 [32];
  void *local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  TSet<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>,FDefaultSetAllocator>
  local_3f8;
  FEntityComponentFilter local_3a8;
  FEntityComponentFilter local_328;
  undefined1 local_2a8 [8];
  wchar_t *pwStack_2a0;
  TStatId local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  FEntityComponentFilter local_280;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_188 [8];
  wchar_t *pwStack_180;
  TStatId local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  FEntityComponentFilter local_160;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_848;
  local_7a0 = (FName)this;
  UMovieSceneEntitySystemLinker::GetRunner
            ((UMovieSceneEntitySystemLinker *)this->_padding_,&local_618);
  if ((*(longlong *)(this->_padding_ + 0x580) == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar25)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  EVar3 = (local_618.Object)->CurrentPhase;
  if (EVar3 == Spawn) {
    if ((this->PendingPredictions).ArrayNum != 0) {
      uVar36 = 0;
      FVar28 = StatPtr_MovieSceneEval_PredictionIntialization;
      if (StatPtr_MovieSceneEval_PredictionIntialization ==
          (FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionIntialization>)0x0) {
        pFVar27 = ::FName::FName(local_558,"MovieSceneEval_PredictionIntialization");
        FVar28 = (FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionIntialization>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_MovieSceneEval_PredictionIntialization,*pFVar27,
                            L"Prediction Initialization","STATGROUP_MovieSceneECS",
                            "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                            true,false,MCR_Invalid);
      }
      local_7d0.ComparisonIndex.Value = 0;
      local_7d0.Number = 0;
      local_7c8 = 0;
      FVar38 = *(FName *)FVar28;
      if ((FVar38.ComparisonIndex.Value.Value != 0) || (FVar38.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_798[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_798[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
          local_7c8 = local_7c8 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_770.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
            local_770.Number = FVar38.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_770,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePredictionSystem.cpp"
                       ,0x1a6);
            local_7c8 = local_7c8 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_7d0 = FVar38;
          local_7a0 = FVar38;
          FThreadStats::AddMessage(FVar38,CycleScopeStart);
          local_7c8 = local_7c8 | 4;
        }
      }
      if (((this->ProcessingPredictions).ArrayNum != 0) &&
         (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1978604902561087064>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePredictionSystem.cpp"
                              ,0x1a8,"ProcessingPredictions.Num() == 0"), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar13 = (this->ProcessingPredictions).AllocatorInstance.Data;
      iVar19 = (this->ProcessingPredictions).ArrayNum;
      iVar20 = (this->ProcessingPredictions).ArrayMax;
      pTVar2 = &this->PendingPredictions;
      iVar26 = (this->PendingPredictions).ArrayNum;
      iVar7 = (this->PendingPredictions).ArrayMax;
      piVar1 = &(this->PendingPredictions).ArrayMax;
      (this->ProcessingPredictions).AllocatorInstance.Data = (pTVar2->AllocatorInstance).Data;
      (this->ProcessingPredictions).ArrayNum = iVar26;
      (this->ProcessingPredictions).ArrayMax = iVar7;
      (pTVar2->AllocatorInstance).Data = pFVar13;
      (this->PendingPredictions).ArrayNum = iVar19;
      (this->PendingPredictions).ArrayMax = iVar20;
      (this->PendingPredictions).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
      uVar39 = uVar36;
      if (0 < (this->ProcessingPredictions).ArrayNum) {
        do {
          uVar35 = (uint)uVar36;
          uVar40 = 0;
          if ((int)uVar35 < (this->ProcessingPredictions).ArrayNum) {
            uVar40 = ~uVar35 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pUVar8 = *(UMovieSceneAsyncAction_SequencePrediction **)
                    ((this->ProcessingPredictions).AllocatorInstance.Data + uVar39);
          pUVar9 = (pUVar8->SceneComponent).field0_0x0.DebugPtr;
          if (pUVar9 != (USceneComponent *)0x0) {
            UMovieSceneAsyncAction_SequencePrediction::ImportTransformHierarchy
                      (pUVar8,&this->InterrogationChannels,pUVar9);
          }
          uVar36 = (ulonglong)(uVar35 + 1);
          uVar39 = uVar39 + 8;
        } while ((int)(uVar35 + 1) < (this->ProcessingPredictions).ArrayNum);
      }
      lVar10 = this->_padding_;
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.NumBits = 0;
      local_3a8.NoneMask.Bits.MaxBits = 0x180;
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
      local_3a8.AllMask.Bits.NumBits = 0;
      local_3a8.AllMask.Bits.MaxBits = 0x180;
      local_3a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.ComplexMasks.ArrayNum = 0;
      local_3a8.ComplexMasks.ArrayMax = 0;
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
      local_3a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
      local_3a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
      pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_7e4.Value = *(ushort *)&(pFVar29->Interrogation).InputKey;
      local_608 = &local_7e4;
      pFStack_600 = &local_7e2;
      local_548._First = local_608;
      local_548._Last = pFStack_600;
      UE::MovieScene::FComponentMask::SetAll(&local_3a8.AllMask,&local_548);
      UE::MovieScene::FEntityManager::AddMutualComponents
                ((FEntityManager *)(lVar10 + 0x28),&local_3a8);
      if (local_3a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.ComplexMasks.AllocatorInstance.Data);
      }
      if ((local_7c8 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_7c8 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_7c8 & 4) != 0) {
        FThreadStats::AddMessage(local_7d0,CycleScopeEnd);
      }
    }
    goto LAB_14684a2f6;
  }
  if (EVar3 == Instantiation) {
    if ((this->ProcessingPredictions).ArrayNum != 0) {
      local_668 = (this->InterrogationChannels).Interrogations.AllocatorInstance.Data;
      iVar26 = (this->InterrogationChannels).Interrogations.ArrayNum;
      if ((iVar26 < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_6a0 = local_6a0 & 0xe0;
      pTStack_6a8 = &TStatId::TStatId_NAME_None;
      local_6b0 = (wchar_t *)0x0;
      uStack_694 = uStack_694 & 0xffffff00;
      TStack_698 = AnyHiPriThreadHiPriTask;
      local_660 = iVar26;
      pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_5e8 = (pFVar29->Interrogation).InputKey;
      pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
      uStack_5d0._1_7_ = uStack_69f;
      uStack_5d0._0_1_ = local_6a0;
      uVar14._4_4_ = uStack_694;
      uVar14._0_4_ = TStack_698;
      TStack_5e6 = pFVar29->EvalTime;
      pwStack_5e0 = local_6b0;
      pTStack_5d8 = pTStack_6a8;
      uStack_5c8 = uVar14;
      pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
      local_2a8._2_2_ = TStack_5e6;
      local_2a8._0_2_ = local_5e8;
      local_2a8._4_4_ = uStack_5e4;
      local_7e0.Value = (pFVar29->Tags).FixedTime.Value;
      local_5f8 = &local_7e0;
      pFStack_5f0 = &local_7de;
      pwStack_2a0 = pwStack_5e0;
      local_298.StatIdPtr = pTStack_5d8;
      uStack_290 = uStack_5d0;
      local_280.AllMask.Bits.NumBits = 0;
      local_280.AllMask.Bits.MaxBits = 0x180;
      local_280.NoneMask.Bits.NumBits = 0;
      local_280.NoneMask.Bits.MaxBits = 0x180;
      local_280.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_280.ComplexMasks.ArrayNum = 0;
      local_280.ComplexMasks.ArrayMax = 0;
      local_1d0 = 0;
      local_1cc = 0x180;
      local_198 = 0;
      local_194 = 0x180;
      local_288 = uVar14;
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_2a8,&local_280);
      UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_2a8 + 2),&local_280);
      local_538._First = local_5f8;
      local_538._Last = pFStack_5f0;
      UE::MovieScene::FComponentMask::SetAll(&local_280.NoneMask,&local_538);
      local_780 = (FName)&local_668;
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TWriteAccess<FFrameTime>_>
      ::Iterate_PerEntityImpl<_UMovieScenePredictionSystem::OnRun_::__l11::<lambda_1>_>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TWriteAccess<FFrameTime>_>
                  *)local_2a8,(FEntityManager *)(this->_padding_ + 0x28),&local_280,
                 (<lambda_1> *)&local_780);
      if (local_280.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.ComplexMasks.AllocatorInstance.Data);
      }
      local_6c8 = local_6c8 & 0xe0;
      local_3f8.Elements._0_8_ = 0;
      local_3f8.Elements._8_8_ = 0;
      local_3f8.Elements._32_8_ = 0;
      local_3f8.Elements._40_4_ = 0;
      local_3f8.Elements._44_4_ = 0x80;
      local_3f8.Elements._48_4_ = 0xffffffff;
      local_3f8.Elements._52_4_ = 0;
      local_3f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_3f8.HashSize = 0;
      local_6d8 = (wchar_t *)0x0;
      pTStack_6d0 = &TStatId::TStatId_NAME_None;
      TStack_6c0 = AnyHiPriThreadHiPriTask;
      uStack_6bc = uStack_6bc & 0xffffff00;
      pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
      TVar4 = (pFVar29->Interrogation).OutputKey;
      local_708 = TVar4;
      pFVar30 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      lVar10 = this->_padding_;
      local_328.AllMask.Bits.NumBits = 0;
      TVar5 = (pFVar30->ComponentTransform).InitialValue;
      local_778.KeyToInitialValue =
           (TMultiMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>_>
            *)&local_3f8;
      local_328.AllMask.Bits.MaxBits = 0x180;
      local_328.NoneMask.Bits.NumBits = 0;
      local_328.NoneMask.Bits.MaxBits = 0x180;
      local_328.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.ComplexMasks.ArrayNum = 0;
      local_328.ComplexMasks.ArrayMax = 0;
      local_6f0._1_7_ = uStack_6c7;
      local_6f0._0_1_ = local_6c8;
      uStack_6e8._4_4_ = uStack_6bc;
      uStack_6e8._0_4_ = TStack_6c0;
      local_700 = local_6d8;
      TStack_6f8.StatIdPtr = pTStack_6d0;
      local_706 = TVar5;
      if ((TVar4 == (TComponentTypeID<UE::MovieScene::FInterrogationKey>)0xffff) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("In->ComponentType",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                              ,0x1a8,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_658 = &local_7dc;
      pFStack_650 = &local_7da;
      local_7dc.Value = (ushort)TVar4;
      local_598._First = local_658;
      local_598._Last = pFStack_650;
      UE::MovieScene::FComponentMask::SetAll(&local_328.AllMask,&local_598);
      if ((TVar5 == (TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)0xffff) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("In->ComponentType",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                              ,0x1a8,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_648 = &local_7d8;
      pFStack_640 = &local_7d6;
      local_7d8.Value = (ushort)TVar5;
      local_588._First = local_648;
      local_588._Last = pFStack_640;
      UE::MovieScene::FComponentMask::SetAll(&local_328.AllMask,&local_588);
      UE::MovieScene::
      TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TWriteAccess<UE::MovieScene::FIntermediate3DTransform>_>
      ::Iterate_PerEntityImpl<_UMovieScenePredictionSystem::OnRun_::__l12::<lambda_2>_&>
                ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInterrogationKey>,UE::MovieScene::TWriteAccess<UE::MovieScene::FIntermediate3DTransform>_>
                  *)&local_708,(FEntityManager *)(lVar10 + 0x28),&local_328,&local_778);
      if (local_328.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.ComplexMasks.AllocatorInstance.Data);
      }
      if (0 < (int)(local_3f8.Elements._8_4_ - local_3f8.Elements._52_4_)) {
        local_678 = local_678 & 0xe0;
        local_688 = (wchar_t *)0x0;
        pTStack_680 = &TStatId::TStatId_NAME_None;
        TStack_670 = AnyHiPriThreadHiPriTask;
        uStack_66c = uStack_66c & 0xffffff00;
        pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
        local_5c0 = pFVar29->BoundObject;
        pFVar30 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
        uStack_5a8._1_7_ = uStack_677;
        uStack_5a8._0_1_ = local_678;
        uVar15._4_4_ = uStack_66c;
        uVar15._0_4_ = TStack_670;
        TStack_5be = (pFVar30->ComponentTransform).InitialValue;
        pwStack_5b8 = local_688;
        pTStack_5b0 = pTStack_680;
        uStack_5a0 = uVar15;
        pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
        local_188._2_2_ = TStack_5be;
        local_188._0_2_ = local_5c0;
        local_188._4_4_ = uStack_5bc;
        local_7d4.Value = *(ushort *)&pFVar29->BlendChannelOutput;
        local_638 = &local_7d4;
        pFStack_630 = &local_7d2;
        pwStack_180 = pwStack_5b8;
        local_178.StatIdPtr = pTStack_5b0;
        uStack_170 = uStack_5a8;
        local_160.AllMask.Bits.NumBits = 0;
        local_160.AllMask.Bits.MaxBits = 0x180;
        local_160.NoneMask.Bits.NumBits = 0;
        local_160.NoneMask.Bits.MaxBits = 0x180;
        local_160.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.ComplexMasks.ArrayNum = 0;
        local_160.ComplexMasks.ArrayMax = 0;
        local_b0 = 0;
        local_ac = 0x180;
        local_78 = 0;
        local_74 = 0x180;
        local_168 = uVar15;
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_188,&local_160);
        UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_188 + 2),&local_160);
        local_578._First = local_638;
        local_578._Last = pFStack_630;
        UE::MovieScene::FComponentMask::SetAll(&local_160.AllMask,&local_578);
        local_628.KeyToInitialValue =
             (TMultiMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>_>
              *)&local_3f8;
        local_628.__this = this;
        UE::MovieScene::
        TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
        ::Iterate_PerEntityImpl<_UMovieScenePredictionSystem::OnRun_::__l15::<lambda_3>_>
                  ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
                    *)local_188,(FEntityManager *)(this->_padding_ + 0x28),&local_160,&local_628);
        if (local_160.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.ComplexMasks.AllocatorInstance.Data);
        }
        TSet<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_4e0,&local_3f8);
        local_718 = &local_3f8;
        local_710 = 0;
        stack0xfffffffffffff8c8 = local_4e0._16_16_;
        local_748 = (longlong *)local_4e0._0_8_;
        auStack_740._0_8_ = local_4e0._8_8_;
        local_728 = local_4c0;
        pTStack_720 = pTStack_4b8;
        iVar26 = local_4e0._28_4_;
        if (iVar26 < *(int *)(local_4e0._16_8_ + 0x18)) {
          do {
            plVar24 = local_748;
            local_790[0].Value = *(int *)(*local_748 + (longlong)iVar26 * 0x18);
            this_00 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                      ::Find(&(this->InterrogationChannels).SparseChannelInfo.ChannelInfo,local_790)
            ;
            if ((this_00 == (FInterrogationChannelInfo *)0x0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Value != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                                    ,0x148,L""), bVar25)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pUVar31 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
            if (pUVar31 == (UObject *)0x0) {
LAB_146849b4c:
              pUVar31 = (UObject *)0x0;
            }
            else {
              pUVar32 = Z_Construct_UClass_USceneComponent_NoRegister();
              iVar7 = (int)pUVar32->_padding_;
              if ((*(int *)(*(longlong *)&pUVar31->field_0x10 + 0x38) < iVar7) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar31->field_0x10 + 0x30) + (longlong)iVar7 * 8)
                  != &pUVar32->_padding_)) goto LAB_146849b4c;
            }
            if (pUVar31 != (UObject *)0x0) {
              local_528 = *(undefined8 *)&pUVar31[8].field_0x8;
              uStack_520 = *(undefined8 *)&pUVar31[8].field_0x10;
              local_510 = *(undefined8 *)&pUVar31[8].field_0x20;
              uStack_508 = *(undefined8 *)(pUVar31 + 9);
              local_4f8 = *(undefined8 *)&pUVar31[9].field_0x10;
              uStack_4f0 = *(undefined8 *)&pUVar31[9].field_0x18;
              local_518 = *(undefined4 *)&pUVar31[8].field_0x18;
              uStack_514 = *(undefined4 *)&pUVar31[8].field_0x1c;
              local_500 = *(undefined8 *)&pUVar31[9].field_0x8;
              local_4e8 = *(undefined8 *)&pUVar31[9].field_0x20;
              puVar11 = *(undefined8 **)(*plVar24 + 8 + (longlong)iVar26 * 0x18);
              *puVar11 = local_528;
              puVar11[1] = uStack_520;
              uStack_498 = (undefined4)local_500;
              uStack_494 = (undefined4)((ulonglong)local_500 >> 0x20);
              *(undefined4 *)(puVar11 + 2) = local_518;
              *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_514;
              *(undefined4 *)(puVar11 + 3) = uStack_498;
              *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_494;
              puVar11[4] = local_510;
              puVar11[5] = uStack_508;
              puVar11[6] = local_4f8;
              puVar11[7] = uStack_4f0;
              puVar11[8] = local_4e8;
              local_4b0 = local_528;
              uStack_4a8 = uStack_520;
              local_4a0 = local_518;
              uStack_49c = uStack_514;
              local_490 = local_510;
              uStack_488 = uStack_508;
              local_480 = local_4f8;
              uStack_478 = uStack_4f0;
              local_470 = local_4e8;
            }
            uStack_730 = uStack_730 & ~auStack_740._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_740);
            iVar26 = iStack_72c;
          } while (iStack_72c < *(int *)(auStack_740._8_8_ + 0x18));
          if (((char)local_710 != '\0') && (local_710._1_1_ != '\0')) {
            uVar40 = *(int *)&(local_718->Elements).field_0x8 -
                     *(int *)&(local_718->Elements).field_0x34;
            if (uVar40 < 4) {
              iVar26 = 1;
            }
            else {
              uVar36 = (ulonglong)((uVar40 >> 1) + 7) * 2 + 1;
              lVar10 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              iVar26 = 1 << ((byte)lVar10 & 0x1f);
            }
            if (((0 < (int)uVar40) && (local_718->HashSize < iVar26)) ||
               (iVar26 < local_718->HashSize)) {
              local_718->HashSize = iVar26;
              TSet<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>,FDefaultSetAllocator>
              ::Rehash(local_718);
            }
          }
        }
      }
      local_3f8.HashSize = 0;
      if (local_3f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_3f8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_3f8.Elements);
    }
    goto LAB_14684a2f6;
  }
  if ((EVar3 != Finalization) || ((this->ProcessingPredictions).ArrayNum == 0)) goto LAB_14684a2f6;
  pFVar37 = (this->ProcessingPredictions).AllocatorInstance.Data;
  bVar41 = 0;
  iVar26 = (this->ProcessingPredictions).ArrayNum;
  bVar25 = false;
  pFVar13 = pFVar37 + (longlong)iVar26 * 8;
  while( true ) {
    if ((this->ProcessingPredictions).ArrayNum != iVar26) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneAsyncAction_SequencePrediction>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_7e8);
    }
    if (pFVar37 == pFVar13) break;
    bVar41 = bVar41 | *(byte *)(*(longlong *)pFVar37 + 0x8c);
    bVar25 = (bool)(bVar25 | *(byte *)(*(longlong *)pFVar37 + 0x8c) == 0);
    pFVar37 = pFVar37 + 8;
  }
  local_430._0_8_ = (FScriptContainerElement *)0x0;
  local_430._8_8_ = 0;
  local_410 = (void *)0x0;
  local_468._0_8_ = (FScriptContainerElement *)0x0;
  local_468._8_8_ = 0;
  local_448 = (void *)0x0;
  local_408 = ___xmm_00000000ffffffff0000008000000000;
  uStack_400 = _UNK_150631d98;
  local_440 = ___xmm_00000000ffffffff0000008000000000;
  uStack_438 = _UNK_150631d98;
  FVar33 = StatPtr_MovieSceneEval_PredictionFinalization;
  if (StatPtr_MovieSceneEval_PredictionFinalization ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionFinalization>)0x0) {
    pFVar27 = ::FName::FName(&local_560,"MovieSceneEval_PredictionFinalization");
    FVar33 = (FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionFinalization>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PredictionFinalization,
                        *pFVar27,L"Prediction Finalization","STATGROUP_MovieSceneECS",
                        "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true
                        ,false,MCR_Invalid);
  }
  local_7a8 = *(ulonglong *)FVar33;
  bVar16 = false;
  bVar18 = false;
  local_768.ComparisonIndex.Value = 0;
  local_768.Number = 0;
  uVar40 = (uint)(local_7a8 >> 0x20);
  if (((int)local_7a8 == 0) && (uVar40 == 0)) {
LAB_146849e9c:
    bVar17 = false;
    FVar38 = local_768;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_788[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_788[0]._s_0,*(char **)((longlong)FVar33 + 0x10));
      bVar16 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_7c0.Number = uVar40;
        local_7c0.ComparisonIndex.Value = (uint)local_7a8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_7c0,*(wchar_t **)((longlong)FVar33 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePredictionSystem.cpp"
                   ,0x1f9);
        bVar16 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146849e9c;
    FVar38.Number = uVar40;
    FVar38.ComparisonIndex.Value = (uint)local_7a8;
    local_7c0 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar17 = true;
  }
  if (bVar25) {
    UE::MovieScene::FInterrogationChannels::QueryLocalSpaceTransforms
              (&this->InterrogationChannels,(UMovieSceneEntitySystemLinker *)this->_padding_,
               (TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
                *)local_468);
  }
  if (bVar41 != 0) {
    UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms
              (&this->InterrogationChannels,(UMovieSceneEntitySystemLinker *)this->_padding_,
               (TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
                *)local_430);
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  FVar34 = StatPtr_MovieSceneEval_PredictionReportResults;
  if (StatPtr_MovieSceneEval_PredictionReportResults ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionReportResults>)0x0) {
    pFVar27 = ::FName::FName(&local_568,"MovieSceneEval_PredictionReportResults");
    FVar34 = (FThreadSafeStaticStat<FStat_MovieSceneEval_PredictionReportResults>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_PredictionReportResults
                        ,*pFVar27,L"Prediction Report Results","STATGROUP_MovieSceneECS",
                        "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,true
                        ,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar34;
  bVar41 = 0;
  local_758.ComparisonIndex.Value = 0;
  local_758.Number = 0;
  local_7e8[0] = 0;
  if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
LAB_14684a01c:
    local_7c0 = local_758;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_7a8 = local_7a8 & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_7a8,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar41 = 1;
      local_7e8[0] = 1;
      if (-1 < CpuChannel->Enabled) {
        local_7b8 = FVar38;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_7b8,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePredictionSystem.cpp"
                   ,0x206);
        bVar41 = 3;
        local_7e8[0] = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14684a01c;
    local_7c0 = FVar38;
    local_7b8 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    local_7e8[0] = bVar41 | 4;
  }
  FVar38 = (FName)(this->ProcessingPredictions).AllocatorInstance.Data;
  iVar26 = (this->ProcessingPredictions).ArrayNum;
  local_780 = (FName)((longlong)FVar38 + (longlong)iVar26 * 8);
  while( true ) {
    FVar22 = local_780;
    local_7b8 = FVar38;
    if (*(int *)((longlong)this + 0xf0) != iVar26) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneAsyncAction_SequencePrediction>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_7b0);
    }
    FVar21 = local_7c0;
    bVar41 = local_7e8[0];
    if (FVar38 == FVar22) break;
    pUVar8 = *(UMovieSceneAsyncAction_SequencePrediction **)FVar38;
    if (pUVar8->bWorldSpace == false) {
      UMovieSceneAsyncAction_SequencePrediction::ReportResult
                (pUVar8,(FInterrogationChannels *)((longlong)this + 0x48),
                 (TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
                  *)local_468);
    }
    else {
      UMovieSceneAsyncAction_SequencePrediction::ReportResult
                (pUVar8,(FInterrogationChannels *)((longlong)this + 0x48),
                 (TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
                  *)local_430);
    }
    local_778.KeyToInitialValue =
         *(TMultiMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform_*,1>_>
           **)((longlong)this + 0x28);
    pFVar29 = UE::MovieScene::FBuiltInComponentTypes::Get();
    <Var23.KeyToInitialValue = local_778.KeyToInitialValue;
    pFVar37 = (pUVar8->ImportedEntities).AllocatorInstance.Data;
    iVar7 = (pUVar8->ImportedEntities).ArrayNum;
    FVar6.Value = (pFVar29->Tags).NeedsUnlink.Value;
    pFVar13 = pFVar37 + (longlong)iVar7 * 2;
    while( true ) {
      if ((pUVar8->ImportedEntities).ArrayNum != iVar7) {
        `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_7af);
      }
      this = (UMovieScenePredictionSystem *)local_7a0;
      if (pFVar37 == pFVar13) break;
      UE::MovieScene::FEntityManager::AddComponent
                ((FEntityManager *)&(<Var23.KeyToInitialValue)->field_0x28,
                 (FMovieSceneEntityID)*(ushort *)pFVar37,FVar6,Full);
      pFVar37 = pFVar37 + 2;
    }
    piVar1 = &(pUVar8->ImportedEntities).ArrayMax;
    (pUVar8->ImportedEntities).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&(pUVar8->ImportedEntities).AllocatorInstance,0,piVar1);
    }
    FVar38 = (FName)((longlong)local_7b8 + 8);
  }
  if ((local_7e8[0] & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar41 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar41 & 4) != 0) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  UE::MovieScene::FEntityManager::OnStructureChanged
            ((FEntityManager *)(*(longlong *)((longlong)this + 0x28) + 0x28));
  *(undefined4 *)((longlong)this + 0xf0) = 0;
  if (*(int *)((longlong)this + 0xf4) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)((longlong)this + 0xe8),0,(int *)((longlong)this + 0xf4));
  }
  UE::MovieScene::FInterrogationChannels::Reset((FInterrogationChannels *)((longlong)this + 0x48));
  TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
  ::DestroyElements((TSparseArray<TArray<UE::MovieScene::FIntermediate3DTransform,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
                     *)local_468,0,local_468._8_4_);
  bVar25 = local_468._12_4_ != 0;
  local_468._8_8_ = (ulonglong)(uint)local_468._12_4_ << 0x20;
  if (bVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_468,0,(int *)(local_468 + 0xc));
  }
  uVar40 = local_440._4_4_;
  uStack_438 = 0xffffffff;
  local_440 = (ulonglong)local_440._4_4_ << 0x20;
  if (0x80 < uVar40) {
    local_440 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_468 + 0x10),0);
  }
  if (local_448 != (void *)0x0) {
    FMemory::Free(local_448);
  }
  if ((FScriptContainerElement *)local_468._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_468._0_8_);
  }
  TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
  ::DestroyElements((TSparseArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,FDefaultSparseArrayAllocator>
                     *)local_430,0,local_430._8_4_);
  bVar25 = local_430._12_4_ != 0;
  local_430._8_8_ = (ulonglong)(uint)local_430._12_4_ << 0x20;
  if (bVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_430,0,(int *)(local_430 + 0xc));
  }
  uVar40 = local_408._4_4_;
  uStack_400 = 0xffffffff;
  local_408 = (ulonglong)local_408._4_4_ << 0x20;
  if (0x80 < uVar40) {
    local_408 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_430 + 0x10),0);
  }
  if (local_410 != (void *)0x0) {
    FMemory::Free(local_410);
  }
  if ((FScriptContainerElement *)local_430._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_430._0_8_);
  }
LAB_14684a2f6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_618.SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUMovieScenePredictionSystem @ 14686cbe0

void __cdecl UMovieScenePredictionSystem::StaticRegisterNativesUMovieScenePredictionSystem(void)

{
  return;
}

