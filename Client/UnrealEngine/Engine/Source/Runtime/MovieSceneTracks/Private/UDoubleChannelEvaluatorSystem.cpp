// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146728b80

UClass * __cdecl UDoubleChannelEvaluatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleChannelEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"DoubleChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UDoubleChannelEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUDoubleChannelEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDoubleChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UDoubleChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleChannelEvaluatorSystem.InnerSingleton;
}

// UDoubleChannelEvaluatorSystem @ 146760c90

/* WARNING: Enum "Type": Some values do not have unique names */

UDoubleChannelEvaluatorSystem * __thiscall
UDoubleChannelEvaluatorSystem::UDoubleChannelEvaluatorSystem
          (UDoubleChannelEvaluatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UDoubleChannelEvaluatorSystem__6B_;
  return this;
}

// UDoubleChannelEvaluatorSystem @ 146760cc0

/* WARNING: Enum "Type": Some values do not have unique names */

UDoubleChannelEvaluatorSystem * __thiscall
UDoubleChannelEvaluatorSystem::UDoubleChannelEvaluatorSystem
          (UDoubleChannelEvaluatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  code *pcVar2;
  bool bVar3;
  FBuiltInComponentTypes *pFVar4;
  TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  UDoubleChannelEvaluatorSystem *pUVar6;
  longlong lVar7;
  uint uVar8;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *pTVar9;
  UObject *local_res8 [2];
  UClass *local_res18;
  UObject *local_res20;
  undefined4 local_38;
  ushort local_34;
  UClass *local_30;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined4 *)&this->field_0x38 = 4;
  *(undefined ***)this = &___7UDoubleChannelEvaluatorSystem__6B_;
  this->field_0x32 = 0xc;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8[0] = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8[0]);
    }
    local_res18 = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)local_res8);
    pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
    local_res20 = *(UObject **)&this->field_0x10;
    FVar1.Value = (pFVar4->SymbolicTags).CreatesEntities.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res20,FVar1);
    uVar8 = 0;
    pTVar9 = pFVar4->DoubleChannel;
    do {
      FVar1.Value = *(ushort *)(pTVar9 + 0x17);
      local_38 = CONCAT22(pTVar9[0xb],*pTVar9);
      local_34 = FVar1.Value;
      local_30 = GetPrivateStaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_30);
      }
      UMovieSceneEntitySystem::DefineComponentProducer
                ((TSubclassOf<UMovieSceneEntitySystem>)&local_30,FVar1);
      pTVar5 = &UE::MovieScene::GDoubleChannelTypeAssociations;
      if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
        pTVar5 = (TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
      }
      if (pTVar5 <= &local_38) {
        pTVar5 = &UE::MovieScene::GDoubleChannelTypeAssociations;
        if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
          pTVar5 = (TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData
          ;
        }
        if ((&local_38 <
             (undefined4 *)
             ((longlong)pTVar5 +
             (longlong)UE::MovieScene::GDoubleChannelTypeAssociations.ArrayMax * 6)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pUVar6 = (UDoubleChannelEvaluatorSystem *)(*pcVar2)();
          return pUVar6;
        }
      }
      if (UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum ==
          UE::MovieScene::GDoubleChannelTypeAssociations.ArrayMax) {
        UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>_>
                       (0x206,&UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance,
                        &UE::MovieScene::GDoubleChannelTypeAssociations.ArrayMax);
      }
      pTVar5 = &UE::MovieScene::GDoubleChannelTypeAssociations;
      lVar7 = (longlong)UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum;
      if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
        pTVar5 = (TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
      }
      uVar8 = uVar8 + 1;
      pTVar9 = pTVar9 + 1;
      UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum =
           UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum + 1;
      *(undefined4 *)((longlong)pTVar5 + lVar7 * 6) = local_38;
      *(ushort *)((longlong)pTVar5 + 4 + lVar7 * 6) = local_34;
    } while (uVar8 < 9);
  }
  return this;
}

// ~UDoubleChannelEvaluatorSystem @ 146769bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDoubleChannelEvaluatorSystem::~UDoubleChannelEvaluatorSystem(UDoubleChannelEvaluatorSystem *this)

{
  *(undefined ***)this = &___7UDoubleChannelEvaluatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146797060

UClass * __cdecl UDoubleChannelEvaluatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleChannelEvaluatorSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"DoubleChannelEvaluatorSystem",
               &Z_Registration_Info_UClass_UDoubleChannelEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUDoubleChannelEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDoubleChannelEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UDoubleChannelEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleChannelEvaluatorSystem.InnerSingleton;
}

// IsRelevantImpl @ 1467a5a30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDoubleChannelEvaluatorSystem::IsRelevantImpl
          (UDoubleChannelEvaluatorSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation> FVar1;
  ushort uVar2;
  FComponentMask *pFVar3;
  ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation> FVar4;
  int iVar5;
  undefined1 local_res18 [8];
  
  iVar5 = UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum;
  FVar4 = UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
  if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
    FVar4 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)
            &UE::MovieScene::GDoubleChannelTypeAssociations;
  }
  FVar1 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)
          ((longlong)FVar4 + (longlong)iVar5 * 6);
  while( true ) {
    if (UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum != iVar5) {
      `TCheckedPointerIterator<UE::MovieScene::FDoubleChannelTypeAssociation,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar4 == FVar1) break;
    uVar2 = *(ushort *)FVar4;
    pFVar3 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
    if (((uVar2 != 0xffff) && ((int)(uint)uVar2 < (pFVar3->Bits).NumBits)) &&
       ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
        != 0)) {
      return true;
    }
    FVar4 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)((longlong)FVar4 + 6);
  }
  return false;
}

// OnRun @ 1467abef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDoubleChannelEvaluatorSystem::OnRun
          (UDoubleChannelEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  FComponentTypeID *pFVar1;
  ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation> FVar2;
  int iVar3;
  FSystemSubsequentTasks *pFVar4;
  FBuiltInComponentTypes *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask> FVar7;
  int iVar8;
  ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation> FVar9;
  undefined1 auStackY_2f8 [32];
  FComponentTypeID local_298;
  FComponentTypeID local_296 [3];
  FName local_290;
  undefined4 local_288;
  undefined2 local_284;
  initializer_list<UE::MovieScene::FComponentTypeID> local_278;
  undefined1 local_268 [24];
  undefined8 local_250;
  TStatIdData *pTStack_248;
  byte local_240;
  undefined7 uStack_23f;
  undefined4 uStack_238;
  uint uStack_234;
  undefined2 local_230;
  TComponentTypeID<FFrameTime> TStack_22e;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  uchar auStack_228 [8];
  TStatIdData *pTStack_220;
  ForElementType<unsigned_int> FStack_218;
  undefined8 uStack_210;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_208;
  undefined8 local_1f8;
  undefined1 local_1e8 [4];
  FComponentAccess FStack_1e4;
  FComponentAccess FStack_1e2;
  undefined8 uStack_1e0;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask> local_1d8;
  ForElementType<unsigned_int> FStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [176];
  int local_110;
  int local_10c;
  int local_d8;
  int local_d4;
  FEntityComponentFilter local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_1f8 = param_2;
  UMovieSceneEntitySystemLinker::GetRunner
            (*(UMovieSceneEntitySystemLinker **)&this->field_0x28,&local_208);
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  iVar8 = UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum;
  if ((local_208.Object)->CurrentPhase == Instantiation) {
    FVar9 = UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
    if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData ==
        (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
      FVar9 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)
              &UE::MovieScene::GDoubleChannelTypeAssociations;
    }
    FVar2 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)
            ((longlong)FVar9 + (longlong)iVar8 * 6);
    while( true ) {
      if (UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum != iVar8) {
        `TCheckedPointerIterator<UE::MovieScene::FDoubleChannelTypeAssociation,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_298);
      }
      pFVar4 = local_1f8;
      if (FVar9 == FVar2) break;
      local_290 = (FName)&___7FInitializeConstantDoubleChannelMutation_MovieScene_UE__6B_;
      local_288 = *(undefined4 *)FVar9;
      local_284 = *(undefined2 *)((longlong)FVar9 + 4);
      local_1f8._6_2_ = SUB82(pFVar4,6);
      local_1f8._0_6_ =
           CONCAT24((pFVar5->Tags).NeedsLink.Value,
                    CONCAT22(*(undefined2 *)((longlong)FVar9 + 4),*(undefined2 *)FVar9));
      local_268._8_8_ = (longlong)&local_1f8 + 6;
      local_c8.AllMask.Bits.NumBits._0_1_ = '\0';
      local_c8.AllMask.Bits.NumBits._1_1_ = '\0';
      local_c8.AllMask.Bits.NumBits._2_1_ = '\0';
      local_c8.AllMask.Bits.NumBits._3_1_ = '\0';
      local_c8.AllMask.Bits.MaxBits._0_1_ = 0x80;
      local_c8.AllMask.Bits.MaxBits._1_1_ = '\x01';
      local_c8.AllMask.Bits.MaxBits._2_1_ = '\0';
      local_c8.AllMask.Bits.MaxBits._3_1_ = '\0';
      local_c8.NoneMask.Bits.NumBits._0_1_ = '\0';
      local_c8.NoneMask.Bits.NumBits._1_1_ = '\0';
      local_c8.NoneMask.Bits.NumBits._2_1_ = '\0';
      local_c8.NoneMask.Bits.NumBits._3_1_ = '\0';
      local_c8.NoneMask.Bits.MaxBits._0_1_ = 0x80;
      local_c8.NoneMask.Bits.MaxBits._1_1_ = '\x01';
      local_c8.NoneMask.Bits.MaxBits._2_1_ = '\0';
      local_c8.NoneMask.Bits.MaxBits._3_1_ = '\0';
      local_c8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.ComplexMasks.ArrayNum._0_1_ = '\0';
      local_c8.ComplexMasks.ArrayNum._1_1_ = '\0';
      local_c8.ComplexMasks.ArrayNum._2_1_ = '\0';
      local_c8.ComplexMasks.ArrayNum._3_1_ = '\0';
      local_c8.ComplexMasks.ArrayMax._0_1_ = '\0';
      local_c8.ComplexMasks.ArrayMax._1_1_ = '\0';
      local_c8.ComplexMasks.ArrayMax._2_1_ = '\0';
      local_c8.ComplexMasks.ArrayMax._3_1_ = '\0';
      local_268._0_8_ = (FComponentTypeID *)&local_1f8;
      UE::MovieScene::FComponentMask::SetAll
                (&local_c8.AllMask,(initializer_list<UE::MovieScene::FComponentTypeID> *)local_268);
      local_298.Value = (pFVar5->Tags).DontOptimizeConstants.Value;
      local_278._First = &local_298;
      local_278._Last = local_296;
      UE::MovieScene::FComponentMask::SetAll(&local_c8.NoneMask,&local_278);
      UE::MovieScene::FEntityManager::MutateConditional
                ((FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28),&local_c8,
                 (IMovieSceneConditionalEntityMutation *)&local_290,Mandatory);
      if (local_c8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.ComplexMasks.AllocatorInstance.Data);
      }
      FVar9 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)((longlong)FVar9 + 6);
      local_290 = (FName)&___7IMovieScenePerEntityMutation_MovieScene_UE__6B_;
    }
  }
  else if ((local_208.Object)->CurrentPhase == Evaluation) {
    FVar9 = UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
    if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData ==
        (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
      FVar9 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)
              &UE::MovieScene::GDoubleChannelTypeAssociations;
    }
    FVar2 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)
            ((longlong)FVar9 + (longlong)iVar8 * 6);
    while( true ) {
      if (UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum != iVar8) {
        `TCheckedPointerIterator<UE::MovieScene::FDoubleChannelTypeAssociation,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_298);
      }
      if (FVar9 == FVar2) break;
      local_230 = *(undefined2 *)FVar9;
      TStack_22e = pFVar5->EvalTime;
      uStack_22c = *(undefined2 *)((longlong)FVar9 + 2);
      uStack_22a = *(undefined2 *)((longlong)FVar9 + 4);
      pTStack_248 = &TStatId::TStatId_NAME_None;
      local_298.Value = (pFVar5->Tags).Ignored.Value;
      local_250 = 0;
      uStack_238 = 0x6ff;
      uStack_234 = uStack_234 & 0xffffff00;
      FStack_218 = (ForElementType<unsigned_int>)
                   (CONCAT71(uStack_23f,local_240) & 0xffffffffffffffe0);
      uStack_210._4_4_ = uStack_234;
      uStack_210._0_4_ = 0x6ff;
      auStack_228[0] = '\0';
      auStack_228[1] = '\0';
      auStack_228[2] = '\0';
      auStack_228[3] = '\0';
      auStack_228[4] = '\0';
      auStack_228[5] = '\0';
      auStack_228[6] = '\0';
      auStack_228[7] = '\0';
      pTStack_220 = &TStatId::TStatId_NAME_None;
      local_1c0._48_4_ = 0;
      local_1e8._2_2_ = TStack_22e;
      local_1e8._0_2_ = local_230;
      unique0x10000368 = uStack_22c;
      unique0x1000036a = uStack_22a;
      local_1c0._52_4_ = 0x180;
      local_1c0._104_4_ = 0;
      local_1c0._108_4_ = 0x180;
      uStack_1e0 = 0;
      local_1d8 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask>)
                  &TStatId::TStatId_NAME_None;
      local_1c0._112_8_ = (FScriptContainerElement *)0x0;
      local_1c0._120_8_ = 0;
      local_110 = 0;
      local_10c = 0x180;
      local_d8 = 0;
      local_d4 = 0x180;
      local_240 = local_240 & 0xe0;
      FStack_1d0 = FStack_218;
      local_1c8 = uStack_210;
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)local_1e8,(FEntityComponentFilter *)local_1c0);
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)(local_1e8 + 2),(FEntityComponentFilter *)local_1c0);
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)(local_1e8 + 4),(FEntityComponentFilter *)local_1c0);
      UE::MovieScene::AddAccessorToFilter
                ((FComponentAccess *)(local_1e8 + 6),(FEntityComponentFilter *)local_1c0);
      local_278._First = &local_298;
      local_278._Last = local_296;
      UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(local_1c0 + 0x38),&local_278);
      FVar7 = StatPtr_MovieSceneEval_EvaluateDoubleChannelTask;
      if (StatPtr_MovieSceneEval_EvaluateDoubleChannelTask ==
          (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask>)0x0) {
        pFVar6 = ::FName::FName(&local_290,"MovieSceneEval_EvaluateDoubleChannelTask");
        FVar7 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_MovieSceneEval_EvaluateDoubleChannelTask,*pFVar6,
                           L"MovieScene: Evaluate double channels","STATGROUP_MovieSceneECS",
                           "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                           true,false,MCR_Invalid);
      }
      local_1d8 = FVar7;
      UE::MovieScene::
      TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
      ::Dispatch_PerEntity<UE::MovieScene::FEvaluateDoubleChannels_Cached>
                ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
                  *)local_1e8,(FEntityManager *)local_268,
                 (FSystemTaskPrerequisites *)(*(longlong *)&this->field_0x28 + 0x28),
                 (FSystemSubsequentTasks *)param_1);
      if ((FComponentTypeID *)local_268._0_8_ != (FComponentTypeID *)0x0) {
        LOCK();
        pFVar1 = (FComponentTypeID *)(local_268._0_8_ + 0x30);
        iVar3 = *(int *)pFVar1;
        *(int *)pFVar1 = *(int *)pFVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)local_268._0_8_)(local_268._0_8_,1);
        }
      }
      if ((FScriptContainerElement *)local_1c0._112_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1c0._112_8_);
      }
      FVar9 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)((longlong)FVar9 + 6);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  return;
}

// OnSchedulePersistentTasks @ 1467aef20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDoubleChannelEvaluatorSystem::OnSchedulePersistentTasks
          (UDoubleChannelEvaluatorSystem *this,IEntitySystemScheduler *param_1)

{
  ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation> FVar1;
  FBuiltInComponentTypes *pFVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask> FVar4;
  ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation> FVar5;
  int iVar6;
  undefined1 auStackY_258 [32];
  FComponentTypeID local_1f8;
  FComponentTypeID local_1f6 [3];
  undefined1 local_1f0 [8];
  undefined8 uStack_1e8;
  TStatIdData *pTStack_1e0;
  byte local_1d8;
  undefined7 uStack_1d7;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined1 local_1c8 [16];
  undefined8 uStack_1b8;
  TStatIdData *pTStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_1a0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_198;
  code *local_188;
  uchar local_180;
  FName local_178 [2];
  undefined1 local_168 [4];
  FComponentAccess FStack_164;
  FComponentAccess FStack_162;
  undefined8 uStack_160;
  FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask> local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  FEntityComponentFilter local_140;
  int local_90;
  int local_8c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pFVar2 = UE::MovieScene::FBuiltInComponentTypes::Get();
  iVar6 = UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum;
  FVar5 = UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
  if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData ==
      (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
    FVar5 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)
            &UE::MovieScene::GDoubleChannelTypeAssociations;
  }
  FVar1 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)
          ((longlong)FVar5 + (longlong)iVar6 * 6);
  while( true ) {
    if (UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum != iVar6) {
      `TCheckedPointerIterator<UE::MovieScene::FDoubleChannelTypeAssociation,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1f8);
    }
    if (FVar5 == FVar1) break;
    local_1c8._8_2_ = *(undefined2 *)FVar5;
    local_1c8._10_2_ = pFVar2->EvalTime;
    local_1c8._12_2_ = *(undefined2 *)((longlong)FVar5 + 2);
    local_1c8._14_2_ = *(undefined2 *)((longlong)FVar5 + 4);
    pTStack_1e0 = &TStatId::TStatId_NAME_None;
    local_1f8.Value = (pFVar2->Tags).Ignored.Value;
    uStack_1e8._0_1_ = '\0';
    uStack_1e8._1_7_ = 0;
    uStack_1d0 = 0x6ff;
    uStack_1cc = uStack_1cc & 0xffffff00;
    uStack_1a8 = CONCAT71(uStack_1d7,local_1d8) & 0xffffffffffffffe0;
    uStack_1a0._4_4_ = uStack_1cc;
    uStack_1a0._0_4_ = 0x6ff;
    uStack_1b8 = 0;
    pTStack_1b0 = &TStatId::TStatId_NAME_None;
    local_140.AllMask.Bits.NumBits = 0;
    local_168._2_2_ = local_1c8._10_2_;
    local_168._0_2_ = local_1c8._8_2_;
    unique0x10000321 = local_1c8._12_2_;
    unique0x10000323 = local_1c8._14_2_;
    local_140.AllMask.Bits.MaxBits = 0x180;
    local_140.NoneMask.Bits.NumBits = 0;
    local_140.NoneMask.Bits.MaxBits = 0x180;
    uStack_160 = 0;
    local_158 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask>)
                &TStatId::TStatId_NAME_None;
    local_140.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ComplexMasks.ArrayNum = 0;
    local_140.ComplexMasks.ArrayMax = 0;
    local_90 = 0;
    local_8c = 0x180;
    local_58 = 0;
    local_54 = 0x180;
    local_1d8 = local_1d8 & 0xe0;
    uStack_150 = uStack_1a8;
    local_148 = uStack_1a0;
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_168,&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 2),&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 4),&local_140);
    UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_168 + 6),&local_140);
    local_198._First = &local_1f8;
    local_198._Last = local_1f6;
    UE::MovieScene::FComponentMask::SetAll(&local_140.NoneMask,&local_198);
    FVar4 = StatPtr_MovieSceneEval_EvaluateDoubleChannelTask;
    if (StatPtr_MovieSceneEval_EvaluateDoubleChannelTask ==
        (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask>)0x0) {
      pFVar3 = ::FName::FName(local_178,"MovieSceneEval_EvaluateDoubleChannelTask");
      FVar4 = (FThreadSafeStaticStat<FStat_MovieSceneEval_EvaluateDoubleChannelTask>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_MovieSceneEval_EvaluateDoubleChannelTask,*pFVar3,
                         L"MovieScene: Evaluate double channels","STATGROUP_MovieSceneECS",
                         "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,ST_int64,
                         true,false,MCR_Invalid);
    }
    local_180 = '\x03';
    pTStack_1e0 = (TStatIdData *)(uStack_150 & 0xfffffffffffffffd);
    local_1f0 = (undefined1  [8])0x15132e3f0;
    local_188 = UE::MovieScene::
                TScheduledEntityTask<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
                ::ScheduledRun_PerEntity;
    uStack_1e8 = FVar4;
    local_158 = FVar4;
    UE::MovieScene::
    TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
    ::ScheduleImpl<UE::MovieScene::FEvaluateDoubleChannels_Cached>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
                *)local_168,(FEntityManager *)local_1c8,
               (IEntitySystemScheduler *)(*(longlong *)&this->field_0x28 + 0x28),
               (FTaskParams *)param_1,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_1f0);
    if (local_140.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.ComplexMasks.AllocatorInstance.Data);
    }
    FVar5 = (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)((longlong)FVar5 + 6);
  }
  return;
}

// RegisterChannelType @ 1467b5590

void __cdecl
UDoubleChannelEvaluatorSystem::RegisterChannelType
          (TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> param_1,
          TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> param_2,
          TComponentTypeID<double> param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  longlong lVar4;
  TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  UClass *local_res20;
  undefined4 local_18;
  TComponentTypeID<double> local_14;
  
  local_18 = CONCAT22(param_2,param_1);
  local_14 = param_3;
  local_res20 = GetPrivateStaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  UMovieSceneEntitySystem::DefineComponentProducer
            ((TSubclassOf<UMovieSceneEntitySystem>)&local_res20,(FComponentTypeID)param_3);
  pTVar5 = &UE::MovieScene::GDoubleChannelTypeAssociations;
  pTVar3 = &UE::MovieScene::GDoubleChannelTypeAssociations;
  if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
    pTVar3 = (TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
  }
  if (pTVar3 <= &local_18) {
    pTVar3 = &UE::MovieScene::GDoubleChannelTypeAssociations;
    if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
      pTVar3 = (TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
    }
    if ((&local_18 <
         (undefined4 *)
         ((longlong)pTVar3 + (longlong)UE::MovieScene::GDoubleChannelTypeAssociations.ArrayMax * 6))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum ==
      UE::MovieScene::GDoubleChannelTypeAssociations.ArrayMax) {
    UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>_>
                   (0x206,&UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance,
                    &UE::MovieScene::GDoubleChannelTypeAssociations.ArrayMax);
  }
  lVar4 = (longlong)UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum;
  if (UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>)0x0) {
    pTVar5 = (TArray<UE::MovieScene::FDoubleChannelTypeAssociation,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)UE::MovieScene::GDoubleChannelTypeAssociations.AllocatorInstance.SecondaryData;
  }
  UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum =
       UE::MovieScene::GDoubleChannelTypeAssociations.ArrayNum + 1;
  *(undefined4 *)((longlong)pTVar5 + lVar4 * 6) = local_18;
  *(TComponentTypeID<double> *)((longlong)pTVar5 + 4 + lVar4 * 6) = local_14;
  return;
}

// StaticRegisterNativesUDoubleChannelEvaluatorSystem @ 1467c25e0

void __cdecl UDoubleChannelEvaluatorSystem::StaticRegisterNativesUDoubleChannelEvaluatorSystem(void)

{
  return;
}

